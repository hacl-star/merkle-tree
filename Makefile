l: test

# Boilerplate
# -----------

include Makefile.include

FST_FILES=$(wildcard src/*.fst) $(wildcard src/*.fsti)

ifndef NODEPEND
ifndef MAKE_RESTARTS
.depend: .FORCE
	@mkdir -p obj
	@$(FSTAR) --dep full $(FST_FILES) > $@

.PHONY: .FORCE
.FORCE:
endif
endif

include .depend

.PHONY: clean
clean:
	rm -rf obj dist .depend *.exe

# Verification
# ------------

hints obj:
	mkdir $@

%.checked: | hints obj
	$(FSTAR) --hint_file hints/$(notdir $*).hints $(notdir $*) && touch -c $@

%.krml:
	$(FSTAR) --codegen krml \
	  --extract_module $(basename $(notdir $(subst .checked,,$<))) \
	  $(notdir $(subst .checked,,$<))

# Karamel
# -------

KRML=$(KRML_HOME)/krml

# Making sure that the extern symbols generated in MerkleTree_EverCrypt
# correspond to the ones found in libevercrypt.so
VALE_FLAGS= \
  -library 'Vale.Stdcalls.*' \
  -no-prefix 'Vale.Stdcalls.*' \
  -static-header 'Vale.Inline.*' \
  -library 'Vale.Inline.X64.Fadd_inline' \
  -library 'Vale.Inline.X64.Fmul_inline' \
  -library 'Vale.Inline.X64.Fswap_inline' \
  -library 'Vale.Inline.X64.Fsqr_inline' \
  -no-prefix 'Vale.Inline.X64.Fadd_inline' \
  -no-prefix 'Vale.Inline.X64.Fmul_inline' \
  -no-prefix 'Vale.Inline.X64.Fswap_inline' \
  -no-prefix 'Vale.Inline.X64.Fsqr_inline' \


# The usual bug with prims.krml
dist/Makefile.basic: $(filter-out %prims.krml,$(ALL_KRML_FILES))
	$(KRML) $(KOPTS) $^ -tmpdir dist -skip-compilation \
	  -minimal \
	  -add-include '"krml/internal/target.h"' \
	  -add-include '"krml/internal/types.h"' \
	  -add-include '"krml/lowstar_endianness.h"' \
	  -add-include '<stdint.h>' \
	  -add-include '<stdbool.h>' \
	  -add-include '<string.h>' \
	  -fparentheses \
	  -o libmerkletree.a \
	  $(VALE_FLAGS) \
	  -no-prefix 'MerkleTree' \
	  -no-prefix 'MerkleTree.EverCrypt' \
	  -bundle EverCrypt.Hash=EverCrypt,EverCrypt.*,Meta.*,Hacl.*,Vale.*,Spec.*,Lib.* \
	  -library EverCrypt.AutoConfig2 \
	  -bundle 'MerkleTree+MerkleTree.Init+MerkleTree.EverCrypt+MerkleTree.Low+MerkleTree.Low.Serialization+MerkleTree.Low.Hashfunctions=MerkleTree.*[rename=MerkleTree]' \
	  -bundle LowStar.* \
	  -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Merkle_Krmllib] \
	  -library 'Meta.*,Hacl.*,Vale.*,Spec.*,Lib.*' \
	  -ccopts '-DLib_IntVector_Intrinsics_vec256=void*,-DLib_IntVector_Intrinsics_vec128=void*'

# A note on the options above. Merkle Tree does something illegal: it attempts
# to refer to an API of EverCrypt that is not exported in the generated .so. In
# other words: the symbols from EverCrypt.Hash (which Merkle Tree refers to) are
# NOT exported in libevercrypt.so (on the basis that everyone should go through
# the "streaming" API, not the unsafe block-based API).
#
# The recommended way to do separate compilation is to not re-extract EverCrypt,
# use -library EverCrypt, and link Merkle Tree against libevercrypt.so. But
# because of the above, this doesn't work! Linking fails, because EverCrypt.Hash
# is "private" (i.e. is hidden in EverCrypt_Hash.c with no header, and all
# functions marked as static in C).
#
# So, we violate our guidelines here, and we re-extract just EverCrypt.Hash,
# leaving the rest of EverCrypt as an abstract library. This means that there
# are now two copies of EverCrypt.Hash: one in Merkle Tree, located in
# EverCrypt_Hash, compiled as part of this Makefile, and another one, in
# libevercrypt.so, which is not exported and not visible externally.
#
# This is all pretty unfortunate, and fragile, so sadly I no longer recommended
# this project as the poster child of how to use EverCrypt from a client's
# perspective. Should anyone be interested in a reference Makefile, please use
# commit 19b1307e as a reference.

dist/libmerkletree.a: dist/Makefile.basic
	$(MAKE) -C dist -f Makefile.basic

# Tests
# -----

.PHONY: test
test: test.exe
	./$<

CFLAGS+=-Idist -Itests -I$(KRML_HOME)/include -I$(KRML_HOME)/krmllib/dist/minimal

$(HACL_HOME)/dist/gcc-compatible/libevercrypt.a:
	$(error Please run make in $(dir $@))

test.exe: tests/merkle_tree_test.c dist/libmerkletree.a $(HACL_HOME)/dist/gcc-compatible/libevercrypt.a
	$(CC) $(CFLAGS) -Idist -Itests $^ -o $@
