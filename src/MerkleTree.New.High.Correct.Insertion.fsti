module MerkleTree.New.High.Correct.Insertion


open FStar.Classical
open FStar.Ghost
open FStar.Seq

module S = FStar.Seq

module MTS = MerkleTree.Spec
open MerkleTree.New.High
open MerkleTree.New.High.Correct.Base

/// Correctness of insertion

val mt_insert_inv_preserved:
  #hsz:pos ->
  mt:merkle_tree #hsz {mt_wf_elts mt /\ mt_not_full mt} -> v:hash ->
  olds:hashess #hsz {S.length olds = 32 /\ mt_olds_inv #hsz 0 (MT?.i mt) olds} ->
  Lemma (requires (mt_inv #hsz mt olds))
        (ensures (mt_inv #hsz (mt_insert mt v) olds))

/// Correctness of `create_mt`

val empty_olds_inv:
  #hsz:pos -> #f:MTS.hash_fun_t #hsz ->
  lv:nat{lv <= 32} ->
  Lemma (requires True)
        (ensures (mt_olds_inv #hsz lv 0 (empty_hashes 32)))

val create_empty_mt_inv_ok:
  #hsz:pos -> #f:MTS.hash_fun_t #hsz ->
  unit ->
  Lemma (empty_olds_inv #_ #f 0;
        mt_inv #hsz (create_empty_mt #_ #f ()) (empty_hashes 32))

val create_mt_inv_ok:
  #hsz:pos -> #f:MTS.hash_fun_t #hsz ->
  init:hash ->
  Lemma (empty_olds_inv #_ #f 0;
        mt_inv #hsz (mt_create hsz f init) (empty_hashes 32))
