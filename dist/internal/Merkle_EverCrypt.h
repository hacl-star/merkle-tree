/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>
  KaRaMeL invocation: /Users/jonathan/Code/everest/kremlin/krml -library EverCrypt,EverCrypt.* /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Pervasives_Native.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Pervasives.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Range.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Common.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_VConfig.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Types.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Types.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Result.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Squash.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Classical.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Preorder.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Calc.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Monotonic_Pure.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Effect.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Data.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Builtins.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_FunctionalExtensionality.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Set.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Map.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Mul.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Set.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Meta.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_Two_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_StrongExcludedMiddle.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Classical_Sugar.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_List_Tot_Base.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_List_Tot_Properties.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_List_Tot.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Seq_Base.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Seq_Properties.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Seq.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Seqs_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Math_Lib.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Math_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_BitVector.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt32.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt8.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_Four_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_Seq_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Opaque_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Types_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_Two.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Exn.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Monotonic_Witnessed.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Ghost.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_ErasedLogic.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_PropositionalExtensionality.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_PredicateExtensionality.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_TSet.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Monotonic_Heap.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Heap.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_ST.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_All.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_List.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Seqs.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_TypesNative_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_TypesNative.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Words_Seq.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_Types.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_Prop_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_MachineHeap_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_MachineHeap.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Option.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Monotonic_HyperHeap.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Monotonic_HyperStack.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_HyperStack.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_HyperStack_ST.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Universe.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_GSet.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_ModifiesGen.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Order.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Const.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Builtins.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Derived.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Compare.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Derived_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Print.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_SyntaxHelpers.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Util.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_IndefiniteDescription.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Formula.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Derived.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Logic.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_BigOps.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Monotonic_Buffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Buffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Modifies.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_BufferView_Down.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt64.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt16.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_BufferView_Up.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_Views.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_ImmutableBuffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_HeapTypes_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_Types.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_Heap_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_ModifiesPat.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_BufferView.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_BufferViewHelpers.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Machine_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Map16.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_HeapImpl.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_Heap.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Instruction_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Bytes_Code_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_AES_AES_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Math_Poly2_Defs_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Math_Poly2_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Math_Poly2_Bits_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_LoopCombinators.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int64.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int32.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int16.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int8.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int_Cast.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_BV.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Reflection_Arith.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_BV.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_UInt128.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int_Cast_Full.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Int128.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_IntTypes.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_Sequence.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA3_Constants.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_RawIntTypes.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_ByteSequence.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA3.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_UpdateMulti.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Blake2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Definitions.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Lemmas0.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_PadFinish.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Loops.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA2_Constants.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_CryptoInstructions_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_CPU_Features_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Instructions_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Machine_Semantics_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_Base.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Memory.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Stack_i.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_BufferOps.krml /Users/jonathan/Code/everest/merkle-tree/obj/C_Loops.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_Loops.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Endianness.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Endianness.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_Memzero0.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_ConstBuffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_Buffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_ByteBuffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_HyperStack_All.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Impl_SHA3.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_SHA3.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_IntVector_Intrinsics.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_GaloisField.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_AES.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_IntVector.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Impl_Blake2_Core.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Impl_Blake2_Constants.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Impl_Blake2_Generic.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Blake2b_256.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Blake2s_128.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA1.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_MD5.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Agile_Hash.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Incremental_Definitions.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_MD_Incremental.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_Sequence_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_UpdateMulti_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA3_Incremental.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Blake2_Incremental.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Incremental.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Definitions.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_PadFinish.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_MD.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_SHA2_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Float.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_IO.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_BufferViewStore.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Memory_Sems.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Def_PossiblyMonad.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Flags.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Stack_Sems.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Regs.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_State.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_StateLemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_HeapLemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Print_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Decls.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_MemoryAdapters.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_Assumptions.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Interop_X64.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_AsLowStar_ValeSig.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_AsLowStar_LowStarSig.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_AsLowStar_MemoryHelpers.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_QuickCode.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_QuickCodes.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Taint_Semantics.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsLemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsBasic.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsMem.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsVector.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsStack.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_Stack.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_SHA_SHA_helpers.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_X64_InsSha.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_SHA_X64.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_AsLowStar_Wrapper.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Stdcalls_X64_Sha.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Bv_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Math_Bits.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Tactics.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Poly1305_Bitvectors.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Algebra_CommMonoid.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_CanonCommSemiring.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Math_Lemmas_Int.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Tactics_Canon.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Poly1305_Spec_s.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Poly1305_Math.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Poly1305_Util.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Poly1305_X64.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Stdcalls_X64_Poly.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Wrapper_X64_Poly.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Arch_BufferFriend.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_SHA_Simplify_Sha.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Wrapper_X64_Sha.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Blake2b_32.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Blake2s_32.krml /Users/jonathan/Code/everest/merkle-tree/obj/Spec_Hash_Incremental_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Blake2_Lemmas.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Core_Blake2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Blake2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_SHA3.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Core_SHA2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_SHA2.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Core_SHA1.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_SHA1.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Core_MD5.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_MD5.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Blake2b_256.krml /Users/jonathan/Code/everest/merkle-tree/obj/Hacl_Hash_Blake2s_128.krml /Users/jonathan/Code/everest/merkle-tree/obj/EverCrypt_TargetConfig.krml /Users/jonathan/Code/everest/merkle-tree/obj/C.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Char.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_String.krml /Users/jonathan/Code/everest/merkle-tree/obj/C_String.krml /Users/jonathan/Code/everest/merkle-tree/obj/C_Failure.krml /Users/jonathan/Code/everest/merkle-tree/obj/FStar_Integers.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_Basic.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_X64_Cpuid.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Lib_X64_Cpuidstdcall.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Stdcalls_X64_Cpuid.krml /Users/jonathan/Code/everest/merkle-tree/obj/Vale_Wrapper_X64_Cpuid.krml /Users/jonathan/Code/everest/merkle-tree/obj/EverCrypt_AutoConfig2.krml /Users/jonathan/Code/everest/merkle-tree/obj/EverCrypt_Helpers.krml /Users/jonathan/Code/everest/merkle-tree/obj/EverCrypt_Hash.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Vector.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Regional.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_RVector.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Spec.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct_Base.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct_Rhs.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct_Path.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct_Flushing.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct_Insertion.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_New_High_Correct.krml /Users/jonathan/Code/everest/merkle-tree/obj/LowStar_Regional_Instances.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Low_Datastructures.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Low_Hashfunctions.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Low_VectorExtras.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Low.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_EverCrypt.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Init.krml /Users/jonathan/Code/everest/merkle-tree/obj/Lib_RawBuffer.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree_Low_Serialization.krml /Users/jonathan/Code/everest/merkle-tree/obj/MerkleTree.krml -tmpdir dist -skip-compilation -minimal -add-include "krml/internal/target.h" -add-include "krml/internal/types.h" -add-include "krml/lowstar_endianness.h" -add-include <stdint.h> -add-include <stdbool.h> -add-include <string.h> -fparentheses -o libmerkletree.a -library Vale.Stdcalls.* -no-prefix Vale.Stdcalls.* -static-header Vale.Inline.* -library Vale.Inline.X64.Fadd_inline -library Vale.Inline.X64.Fmul_inline -library Vale.Inline.X64.Fswap_inline -library Vale.Inline.X64.Fsqr_inline -no-prefix Vale.Inline.X64.Fadd_inline -no-prefix Vale.Inline.X64.Fmul_inline -no-prefix Vale.Inline.X64.Fswap_inline -no-prefix Vale.Inline.X64.Fsqr_inline -no-prefix MerkleTree -no-prefix MerkleTree.EverCrypt -bundle MerkleTree+MerkleTree.Init+MerkleTree.EverCrypt+MerkleTree.Low+MerkleTree.Low.Serialization+MerkleTree.Low.Hashfunctions=MerkleTree.*[rename=MerkleTree] -bundle LowStar.* -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Merkle_Krmllib] -bundle Meta.*,Hacl.*,Vale.*,Spec.*,Lib.*,EverCrypt,EverCrypt.*[rename=Merkle_EverCrypt]
  F* version: 13dbe486
  KaRaMeL version: 6f3f060e
 */

#ifndef __internal_Merkle_EverCrypt_H
#define __internal_Merkle_EverCrypt_H




#include "krml/internal/target.h"
#include "krml/internal/types.h"
#include "krml/lowstar_endianness.h"
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#define Spec_Hash_Definitions_SHA2_224 0
#define Spec_Hash_Definitions_SHA2_256 1
#define Spec_Hash_Definitions_SHA2_384 2
#define Spec_Hash_Definitions_SHA2_512 3
#define Spec_Hash_Definitions_SHA1 4
#define Spec_Hash_Definitions_MD5 5
#define Spec_Hash_Definitions_Blake2S 6
#define Spec_Hash_Definitions_Blake2B 7
#define Spec_Hash_Definitions_SHA3_256 8

typedef uint8_t Spec_Hash_Definitions_hash_alg;

extern void EverCrypt_AutoConfig2_init();

typedef struct EverCrypt_Hash_state_s_s EverCrypt_Hash_state_s;

extern EverCrypt_Hash_state_s *EverCrypt_Hash_create_in(Spec_Hash_Definitions_hash_alg a);

extern void EverCrypt_Hash_init(EverCrypt_Hash_state_s *s);

extern void EverCrypt_Hash_update(EverCrypt_Hash_state_s *s, uint64_t prevlen, uint8_t *block);

extern void EverCrypt_Hash_finish(EverCrypt_Hash_state_s *s, uint8_t *dst);

extern void EverCrypt_Hash_free(EverCrypt_Hash_state_s *s);


#define __internal_Merkle_EverCrypt_H_DEFINED
#endif
