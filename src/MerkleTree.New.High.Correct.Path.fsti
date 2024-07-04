module MerkleTree.New.High.Correct.Path

open MerkleTree.New.High.Correct.Base

module S = FStar.Seq

module MTS = MerkleTree.Spec
open MerkleTree.New.High

/// Correctness of path generation

val path_spec:
  #hsz:pos ->
  k:nat ->
  j:nat{k <= j} ->
  actd:bool ->
  p:path #hsz {S.length p = mt_path_length k j actd} ->
  GTot (sp:S.seq (MTS.padded_hash #hsz){S.length sp = log2c j})

val mt_get_path_inv_ok:
  #hsz:pos ->
  mt:merkle_tree #hsz {mt_wf_elts mt} ->
  olds:hashess #hsz {S.length olds = 32 /\ mt_olds_inv #hsz 0 (MT?.i mt) olds} ->
  idx:nat{MT?.i mt <= idx && idx < MT?.j mt} ->
  drt:hash ->
  Lemma (requires (MT?.j mt > 0 /\ mt_inv mt olds))
        (ensures (let j, p, rt = mt_get_path mt idx drt in
                 j == MT?.j mt /\
                 mt_root_inv #_ #(MT?.hash_fun mt) (mt_base mt olds) hash_init false rt /\
                 S.head p == S.index (mt_base mt olds) idx /\
                 (assert (S.length (S.tail p) == mt_path_length idx (MT?.j mt) false);
                 S.equal (path_spec idx (MT?.j mt) false (S.tail p))
                         (MTS.mt_get_path #_ #(MT?.hash_fun mt) #(log2c j) (mt_spec mt olds) idx))))


val mt_verify_ok:
  #hsz:pos -> #f:MTS.hash_fun_t ->
  k:nat ->
  j:nat{k < j} ->
  p:path #hsz {S.length p = 1 + mt_path_length k j false} ->
  rt:hash #hsz ->
  Lemma (mt_verify #_ #f k j p rt <==>
        MTS.mt_verify #_ #f #(log2c j)
          (path_spec k j false (S.tail p)) k (MTS.HRaw (S.head p)) (MTS.HRaw rt))
