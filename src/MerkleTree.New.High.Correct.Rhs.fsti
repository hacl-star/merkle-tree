module MerkleTree.New.High.Correct.Rhs

open FStar.Ghost

module S = FStar.Seq

open MerkleTree.New.High
open MerkleTree.New.High.Correct.Base

/// Correctness of rightmost hashes

val mt_get_root_inv_ok:
  #hsz:pos ->
  mt:merkle_tree #hsz {mt_wf_elts mt} -> drt:hash ->
  olds:hashess #hsz {S.length olds = 32 /\ mt_olds_inv #hsz 0 (MT?.i mt) olds} ->
  Lemma (requires (mt_inv mt olds))
        (ensures (let nmt, rt = mt_get_root mt drt in
                 // Only `MT?.rhs` and `MT?.mroot` are changed.
                 MT?.i mt == MT?.i nmt /\
                 MT?.j mt == MT?.j nmt /\
                 MT?.hs mt == MT?.hs nmt /\
                 // A Merkle tree with new `MT?.rhs` and `MT?.mroot` is valid.
                 mt_inv nmt olds /\
                 // A returned root is indeed the Merkle root.
                 rt == MT?.mroot nmt))
