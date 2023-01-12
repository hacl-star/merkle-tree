all: test

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
dist/Makefile.basic: $(filter-out %prims.krml,$(ALL_KRML_FILES)) | dist
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
	  -add-include 'EverCrypt_Hash.c:"libintvector.h"' \
	  -bundle 'MerkleTree+MerkleTree.Init+MerkleTree.EverCrypt+MerkleTree.Low+MerkleTree.Low.Serialization+MerkleTree.Low.Hashfunctions=MerkleTree.*[rename=MerkleTree]' \
	  -bundle LowStar.* \
	  -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Merkle_Krmllib] \
	  -library 'Meta.*,Hacl.*,Vale.*,Spec.*,Lib.*'

dist/libintvector.h: $(HACL_HOME)/lib/c/libintvector.h | dist
	cp $< $@

dist:
	mkdir $@

dist/libmerkletree.a: dist/Makefile.basic dist/libintvector.h
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
