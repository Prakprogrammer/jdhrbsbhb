// ==== core::slice::sort::stable::driftsort_main::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}, alloc::vec::Vec<alloc::vec::Vec<pipeline::Seg>>> @ 00615fc0 (254 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>>>
    */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>>>
          (undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_1020;
  long local_1018;
  undefined8 local_1010;
  
  local_1020 = 0;
  uVar2 = param_2 - (param_2 >> 1);
  uVar3 = 0x51615;
  if (param_2 < 0x51615) {
    uVar3 = param_2;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  if (0xaa < uVar3) {
    if (uVar2 < 0x555555555555556) {
      lVar1 = uVar3 * 0x18;
      if (lVar1 == 0) {
        local_1018 = 8;
        uVar3 = 0;
      }
      else {
        local_1018 = __rustc[45371133cddedda4]::__rust_alloc(lVar1,8);
        if (local_1018 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar1);
        }
      }
      local_1010 = 0;
      local_1020 = uVar3;
      drift::sort::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                (param_1,param_2,local_1018,uVar3,param_2 < 0x41);
      ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>>>
                (&local_1020);
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}> @ 006189e0 (2489 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0}> */

long __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
          (long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  undefined1 (*pauVar31) [64];
  ulong uVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined1 auVar46 [64];
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar1 = param_4 * 0x60;
    lVar39 = param_4 * 0xa8;
    param_1 = <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                        (param_1,param_1 + lVar1,param_1 + lVar39);
    param_2 = <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                        (param_2,param_2 + lVar1,param_2 + lVar39,param_4);
    param_3 = <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                        (param_3,lVar1 + param_3,lVar39 + param_3,param_4);
  }
  lVar1 = *(long *)(param_1 + 8);
  uVar41 = *(ulong *)(param_1 + 0x10);
  uVar32 = *(ulong *)(param_2 + 0x10);
  uVar33 = (uint)uVar41;
  if (uVar41 == 0) {
    uVar26 = 0;
  }
  else {
    if (uVar41 < 5) {
      lVar28 = 0;
      uVar26 = 0;
    }
    else {
      if (uVar41 < 0x11) {
        uVar26 = 0;
        lVar39 = 0;
      }
      else {
        uVar30 = 0x10;
        if ((uVar41 & 0xf) != 0) {
          uVar30 = (ulong)(uVar33 & 0xf);
        }
        lVar28 = uVar41 - uVar30;
        pauVar31 = (undefined1 (*) [64])(lVar1 + 200);
        lVar39 = 0;
        lVar47 = 0;
        lVar49 = 0;
        lVar51 = 0;
        auVar46 = ZEXT1664(_s__00202430);
        lVar36 = 0;
        lVar48 = 0;
        lVar50 = 0;
        lVar52 = 0;
        lVar38 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar59 = 0;
        uVar26 = uVar41;
        do {
          auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
          auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
          auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
          auVar44 = vpermd_avx512f(auVar46,*pauVar31);
          auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
          lVar39 = lVar39 + auVar25._0_8_;
          lVar47 = lVar47 + auVar25._8_8_;
          lVar49 = lVar49 + auVar25._16_8_;
          lVar51 = lVar51 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
          lVar36 = lVar36 + auVar25._0_8_;
          lVar48 = lVar48 + auVar25._8_8_;
          lVar50 = lVar50 + auVar25._16_8_;
          lVar52 = lVar52 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
          lVar38 = lVar38 + auVar25._0_8_;
          lVar53 = lVar53 + auVar25._8_8_;
          lVar54 = lVar54 + auVar25._16_8_;
          lVar55 = lVar55 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
          lVar56 = lVar56 + auVar25._0_8_;
          lVar57 = lVar57 + auVar25._8_8_;
          lVar58 = lVar58 + auVar25._16_8_;
          lVar59 = lVar59 + auVar25._24_8_;
          pauVar31 = pauVar31 + 4;
          uVar26 = uVar26 - 0x10;
        } while (uVar30 != uVar26);
        auVar2._0_8_ = lVar56 + lVar38 + lVar36 + lVar39;
        auVar2._8_8_ = lVar57 + lVar53 + lVar48 + lVar47;
        auVar25._16_8_ = lVar58 + lVar54 + lVar50 + lVar49;
        auVar25._0_16_ = auVar2;
        auVar25._24_8_ = lVar59 + lVar55 + lVar52 + lVar51;
        auVar2 = vpaddq_avx(auVar2,auVar25._16_16_);
        auVar3 = vpshufd_avx(auVar2,0xee);
        auVar2 = vpaddq_avx(auVar2,auVar3);
        uVar26 = auVar2._0_8_;
        lVar39 = lVar28;
        if ((uint)uVar30 < 5) goto LAB_00618bb1;
      }
      uVar30 = 4;
      if ((uVar41 & 3) != 0) {
        uVar30 = (ulong)(uVar33 & 3);
      }
      lVar28 = uVar41 - uVar30;
      auVar46 = ZEXT864(uVar26);
      lVar36 = (uVar30 + lVar39) - uVar41;
      pauVar31 = (undefined1 (*) [64])(lVar39 * 0x10 + lVar1 + 8);
      do {
        auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        auVar3._0_8_ = auVar46._0_8_ + auVar25._0_8_;
        auVar3._8_8_ = auVar46._8_8_ + auVar25._8_8_;
        auVar14._16_8_ = auVar46._16_8_ + auVar25._16_8_;
        auVar14._0_16_ = auVar3;
        auVar14._24_8_ = auVar46._24_8_ + auVar25._24_8_;
        auVar46 = ZEXT3264(auVar14);
        pauVar31 = pauVar31 + 1;
        lVar36 = lVar36 + 4;
      } while (lVar36 != 0);
      auVar2 = vpaddq_avx(auVar3,auVar14._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar26 = auVar2._0_8_;
    }
LAB_00618bb1:
    lVar39 = uVar41 - lVar28;
    puVar29 = (uint *)(lVar28 * 0x10 + lVar1 + 8);
    do {
      uVar26 = uVar26 + *puVar29;
      puVar29 = puVar29 + 4;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  lVar39 = *(long *)(param_2 + 8);
  uVar27 = (uint)uVar32;
  if (uVar32 == 0) {
    uVar30 = 0;
  }
  else {
    if (uVar32 < 5) {
      lVar34 = 0;
      uVar30 = 0;
    }
    else {
      if (uVar32 < 0x11) {
        uVar30 = 0;
        lVar36 = 0;
      }
      else {
        uVar35 = 0x10;
        if ((uVar32 & 0xf) != 0) {
          uVar35 = (ulong)(uVar27 & 0xf);
        }
        lVar34 = uVar32 - uVar35;
        pauVar31 = (undefined1 (*) [64])(lVar39 + 200);
        lVar36 = 0;
        lVar48 = 0;
        lVar50 = 0;
        lVar52 = 0;
        auVar46 = ZEXT1664(_s__00202430);
        lVar38 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar59 = 0;
        lVar47 = 0;
        lVar49 = 0;
        lVar51 = 0;
        lVar28 = 0;
        uVar30 = uVar32;
        do {
          auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
          auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
          auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
          auVar44 = vpermd_avx512f(auVar46,*pauVar31);
          auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
          lVar36 = lVar36 + auVar25._0_8_;
          lVar48 = lVar48 + auVar25._8_8_;
          lVar50 = lVar50 + auVar25._16_8_;
          lVar52 = lVar52 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
          lVar38 = lVar38 + auVar25._0_8_;
          lVar53 = lVar53 + auVar25._8_8_;
          lVar54 = lVar54 + auVar25._16_8_;
          lVar55 = lVar55 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
          lVar56 = lVar56 + auVar25._0_8_;
          lVar57 = lVar57 + auVar25._8_8_;
          lVar58 = lVar58 + auVar25._16_8_;
          lVar59 = lVar59 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
          lVar47 = lVar47 + auVar25._0_8_;
          lVar49 = lVar49 + auVar25._8_8_;
          lVar51 = lVar51 + auVar25._16_8_;
          lVar28 = lVar28 + auVar25._24_8_;
          pauVar31 = pauVar31 + 4;
          uVar30 = uVar30 - 0x10;
        } while (uVar35 != uVar30);
        auVar4._0_8_ = lVar47 + lVar56 + lVar38 + lVar36;
        auVar4._8_8_ = lVar49 + lVar57 + lVar53 + lVar48;
        auVar15._16_8_ = lVar51 + lVar58 + lVar54 + lVar50;
        auVar15._0_16_ = auVar4;
        auVar15._24_8_ = lVar28 + lVar59 + lVar55 + lVar52;
        auVar2 = vpaddq_avx(auVar4,auVar15._16_16_);
        auVar3 = vpshufd_avx(auVar2,0xee);
        auVar2 = vpaddq_avx(auVar2,auVar3);
        uVar30 = auVar2._0_8_;
        lVar36 = lVar34;
        if ((uint)uVar35 < 5) goto LAB_00618d31;
      }
      uVar35 = 4;
      if ((uVar32 & 3) != 0) {
        uVar35 = (ulong)(uVar27 & 3);
      }
      lVar34 = uVar32 - uVar35;
      auVar46 = ZEXT864(uVar30);
      lVar38 = (uVar35 + lVar36) - uVar32;
      pauVar31 = (undefined1 (*) [64])(lVar36 * 0x10 + lVar39 + 8);
      do {
        auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        auVar5._0_8_ = auVar46._0_8_ + auVar25._0_8_;
        auVar5._8_8_ = auVar46._8_8_ + auVar25._8_8_;
        auVar16._16_8_ = auVar46._16_8_ + auVar25._16_8_;
        auVar16._0_16_ = auVar5;
        auVar16._24_8_ = auVar46._24_8_ + auVar25._24_8_;
        auVar46 = ZEXT3264(auVar16);
        pauVar31 = pauVar31 + 1;
        lVar38 = lVar38 + 4;
      } while (lVar38 != 0);
      auVar2 = vpaddq_avx(auVar5,auVar16._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar30 = auVar2._0_8_;
    }
LAB_00618d31:
    lVar36 = uVar32 - lVar34;
    puVar29 = (uint *)(lVar34 * 0x10 + lVar39 + 8);
    do {
      uVar30 = uVar30 + *puVar29;
      puVar29 = puVar29 + 4;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  uVar35 = *(ulong *)(param_3 + 0x10);
  if (uVar41 == 0) {
    uVar37 = 0;
  }
  else {
    if (uVar41 < 5) {
      lVar34 = 0;
      uVar37 = 0;
    }
    else {
      if (uVar41 < 0x11) {
        uVar37 = 0;
        lVar36 = 0;
      }
      else {
        uVar40 = 0x10;
        if ((uVar41 & 0xf) != 0) {
          uVar40 = (ulong)(uVar33 & 0xf);
        }
        lVar34 = uVar41 - uVar40;
        pauVar31 = (undefined1 (*) [64])(lVar1 + 200);
        lVar36 = 0;
        lVar48 = 0;
        lVar50 = 0;
        lVar52 = 0;
        auVar46 = ZEXT1664(_s__00202430);
        lVar38 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar59 = 0;
        lVar47 = 0;
        lVar49 = 0;
        lVar51 = 0;
        lVar28 = 0;
        uVar37 = uVar41;
        do {
          auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
          auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
          auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
          auVar44 = vpermd_avx512f(auVar46,*pauVar31);
          auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
          lVar36 = lVar36 + auVar25._0_8_;
          lVar48 = lVar48 + auVar25._8_8_;
          lVar50 = lVar50 + auVar25._16_8_;
          lVar52 = lVar52 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
          lVar38 = lVar38 + auVar25._0_8_;
          lVar53 = lVar53 + auVar25._8_8_;
          lVar54 = lVar54 + auVar25._16_8_;
          lVar55 = lVar55 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
          lVar56 = lVar56 + auVar25._0_8_;
          lVar57 = lVar57 + auVar25._8_8_;
          lVar58 = lVar58 + auVar25._16_8_;
          lVar59 = lVar59 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
          lVar47 = lVar47 + auVar25._0_8_;
          lVar49 = lVar49 + auVar25._8_8_;
          lVar51 = lVar51 + auVar25._16_8_;
          lVar28 = lVar28 + auVar25._24_8_;
          pauVar31 = pauVar31 + 4;
          uVar37 = uVar37 - 0x10;
        } while (uVar40 != uVar37);
        auVar6._0_8_ = lVar47 + lVar56 + lVar38 + lVar36;
        auVar6._8_8_ = lVar49 + lVar57 + lVar53 + lVar48;
        auVar17._16_8_ = lVar51 + lVar58 + lVar54 + lVar50;
        auVar17._0_16_ = auVar6;
        auVar17._24_8_ = lVar28 + lVar59 + lVar55 + lVar52;
        auVar2 = vpaddq_avx(auVar6,auVar17._16_16_);
        auVar3 = vpshufd_avx(auVar2,0xee);
        auVar2 = vpaddq_avx(auVar2,auVar3);
        uVar37 = auVar2._0_8_;
        lVar36 = lVar34;
        if ((uint)uVar40 < 5) goto LAB_00618ec1;
      }
      uVar40 = 4;
      if ((uVar41 & 3) != 0) {
        uVar40 = (ulong)(uVar33 & 3);
      }
      lVar34 = uVar41 - uVar40;
      auVar46 = ZEXT864(uVar37);
      lVar38 = (uVar40 + lVar36) - uVar41;
      pauVar31 = (undefined1 (*) [64])(lVar1 + lVar36 * 0x10 + 8);
      do {
        auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        auVar7._0_8_ = auVar46._0_8_ + auVar25._0_8_;
        auVar7._8_8_ = auVar46._8_8_ + auVar25._8_8_;
        auVar18._16_8_ = auVar46._16_8_ + auVar25._16_8_;
        auVar18._0_16_ = auVar7;
        auVar18._24_8_ = auVar46._24_8_ + auVar25._24_8_;
        auVar46 = ZEXT3264(auVar18);
        pauVar31 = pauVar31 + 1;
        lVar38 = lVar38 + 4;
      } while (lVar38 != 0);
      auVar2 = vpaddq_avx(auVar7,auVar18._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar37 = auVar2._0_8_;
    }
LAB_00618ec1:
    lVar36 = uVar41 - lVar34;
    puVar29 = (uint *)(lVar1 + lVar34 * 0x10 + 8);
    do {
      uVar37 = uVar37 + *puVar29;
      puVar29 = puVar29 + 4;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  lVar1 = *(long *)(param_3 + 8);
  uVar33 = (uint)uVar35;
  if (uVar35 == 0) {
    uVar41 = 0;
  }
  else {
    if (uVar35 < 5) {
      lVar34 = 0;
      uVar41 = 0;
    }
    else {
      if (uVar35 < 0x11) {
        uVar41 = 0;
        lVar36 = 0;
      }
      else {
        uVar40 = 0x10;
        if ((uVar35 & 0xf) != 0) {
          uVar40 = (ulong)(uVar33 & 0xf);
        }
        lVar34 = uVar35 - uVar40;
        pauVar31 = (undefined1 (*) [64])(lVar1 + 200);
        lVar36 = 0;
        lVar48 = 0;
        lVar50 = 0;
        lVar52 = 0;
        auVar46 = ZEXT1664(_s__00202430);
        lVar38 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar59 = 0;
        lVar47 = 0;
        lVar49 = 0;
        lVar51 = 0;
        lVar28 = 0;
        uVar41 = uVar35;
        do {
          auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
          auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
          auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
          auVar44 = vpermd_avx512f(auVar46,*pauVar31);
          auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
          lVar36 = lVar36 + auVar25._0_8_;
          lVar48 = lVar48 + auVar25._8_8_;
          lVar50 = lVar50 + auVar25._16_8_;
          lVar52 = lVar52 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
          lVar38 = lVar38 + auVar25._0_8_;
          lVar53 = lVar53 + auVar25._8_8_;
          lVar54 = lVar54 + auVar25._16_8_;
          lVar55 = lVar55 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
          lVar56 = lVar56 + auVar25._0_8_;
          lVar57 = lVar57 + auVar25._8_8_;
          lVar58 = lVar58 + auVar25._16_8_;
          lVar59 = lVar59 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
          lVar47 = lVar47 + auVar25._0_8_;
          lVar49 = lVar49 + auVar25._8_8_;
          lVar51 = lVar51 + auVar25._16_8_;
          lVar28 = lVar28 + auVar25._24_8_;
          pauVar31 = pauVar31 + 4;
          uVar41 = uVar41 - 0x10;
        } while (uVar40 != uVar41);
        auVar8._0_8_ = lVar47 + lVar56 + lVar38 + lVar36;
        auVar8._8_8_ = lVar49 + lVar57 + lVar53 + lVar48;
        auVar19._16_8_ = lVar51 + lVar58 + lVar54 + lVar50;
        auVar19._0_16_ = auVar8;
        auVar19._24_8_ = lVar28 + lVar59 + lVar55 + lVar52;
        auVar2 = vpaddq_avx(auVar8,auVar19._16_16_);
        auVar3 = vpshufd_avx(auVar2,0xee);
        auVar2 = vpaddq_avx(auVar2,auVar3);
        uVar41 = auVar2._0_8_;
        lVar36 = lVar34;
        if ((uint)uVar40 < 5) goto LAB_00619041;
      }
      uVar40 = 4;
      if ((uVar35 & 3) != 0) {
        uVar40 = (ulong)(uVar33 & 3);
      }
      lVar34 = uVar35 - uVar40;
      auVar46 = ZEXT864(uVar41);
      lVar38 = (uVar40 + lVar36) - uVar35;
      pauVar31 = (undefined1 (*) [64])(lVar1 + lVar36 * 0x10 + 8);
      do {
        auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        auVar9._0_8_ = auVar46._0_8_ + auVar25._0_8_;
        auVar9._8_8_ = auVar46._8_8_ + auVar25._8_8_;
        auVar20._16_8_ = auVar46._16_8_ + auVar25._16_8_;
        auVar20._0_16_ = auVar9;
        auVar20._24_8_ = auVar46._24_8_ + auVar25._24_8_;
        auVar46 = ZEXT3264(auVar20);
        pauVar31 = pauVar31 + 1;
        lVar38 = lVar38 + 4;
      } while (lVar38 != 0);
      auVar2 = vpaddq_avx(auVar9,auVar20._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar41 = auVar2._0_8_;
    }
LAB_00619041:
    lVar36 = uVar35 - lVar34;
    puVar29 = (uint *)(lVar34 * 0x10 + lVar1 + 8);
    do {
      uVar41 = uVar41 + *puVar29;
      puVar29 = puVar29 + 4;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  if (uVar41 < uVar37 != uVar30 < uVar26) {
    return param_1;
  }
  if (uVar32 == 0) {
    uVar41 = 0;
  }
  else {
    if (uVar32 < 5) {
      lVar34 = 0;
      uVar41 = 0;
    }
    else {
      if (uVar32 < 0x11) {
        uVar41 = 0;
        lVar36 = 0;
      }
      else {
        uVar37 = 0x10;
        if ((uVar32 & 0xf) != 0) {
          uVar37 = (ulong)(uVar27 & 0xf);
        }
        lVar34 = uVar32 - uVar37;
        pauVar31 = (undefined1 (*) [64])(lVar39 + 200);
        lVar36 = 0;
        lVar48 = 0;
        lVar50 = 0;
        lVar52 = 0;
        auVar46 = ZEXT1664(_s__00202430);
        lVar38 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar59 = 0;
        lVar47 = 0;
        lVar49 = 0;
        lVar51 = 0;
        lVar28 = 0;
        uVar41 = uVar32;
        do {
          auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
          auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
          auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
          auVar44 = vpermd_avx512f(auVar46,*pauVar31);
          auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
          lVar36 = lVar36 + auVar25._0_8_;
          lVar48 = lVar48 + auVar25._8_8_;
          lVar50 = lVar50 + auVar25._16_8_;
          lVar52 = lVar52 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
          lVar38 = lVar38 + auVar25._0_8_;
          lVar53 = lVar53 + auVar25._8_8_;
          lVar54 = lVar54 + auVar25._16_8_;
          lVar55 = lVar55 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
          lVar56 = lVar56 + auVar25._0_8_;
          lVar57 = lVar57 + auVar25._8_8_;
          lVar58 = lVar58 + auVar25._16_8_;
          lVar59 = lVar59 + auVar25._24_8_;
          auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
          lVar47 = lVar47 + auVar25._0_8_;
          lVar49 = lVar49 + auVar25._8_8_;
          lVar51 = lVar51 + auVar25._16_8_;
          lVar28 = lVar28 + auVar25._24_8_;
          pauVar31 = pauVar31 + 4;
          uVar41 = uVar41 - 0x10;
        } while (uVar37 != uVar41);
        auVar10._0_8_ = lVar47 + lVar56 + lVar38 + lVar36;
        auVar10._8_8_ = lVar49 + lVar57 + lVar53 + lVar48;
        auVar21._16_8_ = lVar51 + lVar58 + lVar54 + lVar50;
        auVar21._0_16_ = auVar10;
        auVar21._24_8_ = lVar28 + lVar59 + lVar55 + lVar52;
        auVar2 = vpaddq_avx(auVar10,auVar21._16_16_);
        auVar3 = vpshufd_avx(auVar2,0xee);
        auVar2 = vpaddq_avx(auVar2,auVar3);
        uVar41 = auVar2._0_8_;
        lVar36 = lVar34;
        if ((uint)uVar37 < 5) goto LAB_006191e1;
      }
      uVar37 = 4;
      if ((uVar32 & 3) != 0) {
        uVar37 = (ulong)(uVar27 & 3);
      }
      lVar34 = uVar32 - uVar37;
      auVar46 = ZEXT864(uVar41);
      lVar38 = (uVar37 + lVar36) - uVar32;
      pauVar31 = (undefined1 (*) [64])(lVar36 * 0x10 + lVar39 + 8);
      do {
        auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        auVar11._0_8_ = auVar46._0_8_ + auVar25._0_8_;
        auVar11._8_8_ = auVar46._8_8_ + auVar25._8_8_;
        auVar22._16_8_ = auVar46._16_8_ + auVar25._16_8_;
        auVar22._0_16_ = auVar11;
        auVar22._24_8_ = auVar46._24_8_ + auVar25._24_8_;
        auVar46 = ZEXT3264(auVar22);
        pauVar31 = pauVar31 + 1;
        lVar38 = lVar38 + 4;
      } while (lVar38 != 0);
      auVar2 = vpaddq_avx(auVar11,auVar22._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar41 = auVar2._0_8_;
    }
LAB_006191e1:
    lVar36 = uVar32 - lVar34;
    puVar29 = (uint *)(lVar39 + lVar34 * 0x10 + 8);
    do {
      uVar41 = uVar41 + *puVar29;
      puVar29 = puVar29 + 4;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  if (uVar35 == 0) {
    uVar32 = 0;
    goto LAB_0061936f;
  }
  if (uVar35 < 5) {
    lVar28 = 0;
    uVar32 = 0;
  }
  else {
    if (uVar35 < 0x11) {
      uVar32 = 0;
      lVar39 = 0;
    }
    else {
      uVar37 = 0x10;
      if ((uVar35 & 0xf) != 0) {
        uVar37 = (ulong)(uVar33 & 0xf);
      }
      lVar28 = uVar35 - uVar37;
      pauVar31 = (undefined1 (*) [64])(lVar1 + 200);
      lVar39 = 0;
      lVar47 = 0;
      lVar49 = 0;
      lVar51 = 0;
      auVar46 = ZEXT1664(_s__00202430);
      lVar36 = 0;
      lVar48 = 0;
      lVar50 = 0;
      lVar52 = 0;
      lVar38 = 0;
      lVar53 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar58 = 0;
      lVar59 = 0;
      uVar32 = uVar35;
      do {
        auVar45 = vpermd_avx512f(auVar46,pauVar31[-3]);
        auVar42 = vpermd_avx512f(auVar46,pauVar31[-2]);
        auVar43 = vpermd_avx512f(auVar46,pauVar31[-1]);
        auVar44 = vpermd_avx512f(auVar46,*pauVar31);
        auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
        lVar39 = lVar39 + auVar25._0_8_;
        lVar47 = lVar47 + auVar25._8_8_;
        lVar49 = lVar49 + auVar25._16_8_;
        lVar51 = lVar51 + auVar25._24_8_;
        auVar25 = vpmovzxdq_avx2(auVar42._0_16_);
        lVar36 = lVar36 + auVar25._0_8_;
        lVar48 = lVar48 + auVar25._8_8_;
        lVar50 = lVar50 + auVar25._16_8_;
        lVar52 = lVar52 + auVar25._24_8_;
        auVar25 = vpmovzxdq_avx2(auVar43._0_16_);
        lVar38 = lVar38 + auVar25._0_8_;
        lVar53 = lVar53 + auVar25._8_8_;
        lVar54 = lVar54 + auVar25._16_8_;
        lVar55 = lVar55 + auVar25._24_8_;
        auVar25 = vpmovzxdq_avx2(auVar44._0_16_);
        lVar56 = lVar56 + auVar25._0_8_;
        lVar57 = lVar57 + auVar25._8_8_;
        lVar58 = lVar58 + auVar25._16_8_;
        lVar59 = lVar59 + auVar25._24_8_;
        pauVar31 = pauVar31 + 4;
        uVar32 = uVar32 - 0x10;
      } while (uVar37 != uVar32);
      auVar12._0_8_ = lVar56 + lVar38 + lVar36 + lVar39;
      auVar12._8_8_ = lVar57 + lVar53 + lVar48 + lVar47;
      auVar23._16_8_ = lVar58 + lVar54 + lVar50 + lVar49;
      auVar23._0_16_ = auVar12;
      auVar23._24_8_ = lVar59 + lVar55 + lVar52 + lVar51;
      auVar2 = vpaddq_avx(auVar12,auVar23._16_16_);
      auVar3 = vpshufd_avx(auVar2,0xee);
      auVar2 = vpaddq_avx(auVar2,auVar3);
      uVar32 = auVar2._0_8_;
      lVar39 = lVar28;
      if ((uint)uVar37 < 5) goto LAB_00619351;
    }
    uVar37 = 4;
    if ((uVar35 & 3) != 0) {
      uVar37 = (ulong)(uVar33 & 3);
    }
    lVar28 = uVar35 - uVar37;
    auVar46 = ZEXT864(uVar32);
    lVar36 = (uVar37 + lVar39) - uVar35;
    pauVar31 = (undefined1 (*) [64])(lVar39 * 0x10 + lVar1 + 8);
    do {
      auVar45 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar31);
      auVar25 = vpmovzxdq_avx2(auVar45._0_16_);
      auVar13._0_8_ = auVar46._0_8_ + auVar25._0_8_;
      auVar13._8_8_ = auVar46._8_8_ + auVar25._8_8_;
      auVar24._16_8_ = auVar46._16_8_ + auVar25._16_8_;
      auVar24._0_16_ = auVar13;
      auVar24._24_8_ = auVar46._24_8_ + auVar25._24_8_;
      auVar46 = ZEXT3264(auVar24);
      pauVar31 = pauVar31 + 1;
      lVar36 = lVar36 + 4;
    } while (lVar36 != 0);
    auVar2 = vpaddq_avx(auVar13,auVar24._16_16_);
    auVar3 = vpshufd_avx(auVar2,0xee);
    auVar2 = vpaddq_avx(auVar2,auVar3);
    uVar32 = auVar2._0_8_;
  }
LAB_00619351:
  lVar39 = uVar35 - lVar28;
  puVar29 = (uint *)(lVar28 * 0x10 + lVar1 + 8);
  do {
    uVar32 = uVar32 + *puVar29;
    puVar29 = puVar29 + 4;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
LAB_0061936f:
  if (uVar32 < uVar41 != uVar30 < uVar26) {
    param_2 = param_3;
  }
  return param_2;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}> @ 0061b680 (4020 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
          (long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined8 uVar43;
  ulong uVar44;
  undefined8 *puVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  uint *puVar54;
  ulong uVar55;
  undefined1 (*pauVar56) [64];
  undefined8 *puVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  undefined8 *puVar61;
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  long lVar67;
  long lVar68;
  long lVar69;
  undefined1 auVar66 [64];
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  
  uVar47 = *(ulong *)(param_1 + 0x28);
  uVar55 = *(ulong *)(param_1 + 0x10);
  if (uVar47 == 0) {
    uVar44 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if (uVar47 < 5) {
      lVar59 = 0;
      uVar44 = 0;
    }
    else {
      if (uVar47 < 0x11) {
        uVar44 = 0;
        lVar46 = 0;
      }
      else {
        uVar48 = 0x10;
        if ((uVar47 & 0xf) != 0) {
          uVar48 = (ulong)((uint)uVar47 & 0xf);
        }
        lVar59 = uVar47 - uVar48;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar44 = uVar47;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar44 = uVar44 - 0x10;
        } while (uVar48 != uVar44);
        auVar3._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar3._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar42._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar42._0_16_ = auVar3;
        auVar42._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar3,auVar42._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar44 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar48 < 5) goto LAB_0061b7e1;
      }
      uVar48 = 4;
      if ((uVar47 & 3) != 0) {
        uVar48 = (ulong)((uint)uVar47 & 3);
      }
      lVar59 = uVar47 - uVar48;
      auVar66 = ZEXT864(uVar44);
      lVar50 = (uVar48 + lVar46) - uVar47;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar4._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar4._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar23._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar23._0_16_ = auVar4;
        auVar23._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar23);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar4,auVar23._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar44 = auVar3._0_8_;
    }
LAB_0061b7e1:
    lVar46 = uVar47 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar44 = uVar44 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  if (uVar55 == 0) {
    uVar47 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if (uVar55 < 5) {
      lVar59 = 0;
      uVar47 = 0;
    }
    else {
      if (uVar55 < 0x11) {
        uVar47 = 0;
        lVar46 = 0;
      }
      else {
        uVar48 = 0x10;
        if ((uVar55 & 0xf) != 0) {
          uVar48 = (ulong)((uint)uVar55 & 0xf);
        }
        lVar59 = uVar55 - uVar48;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar47 = uVar55;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar47 = uVar47 - 0x10;
        } while (uVar48 != uVar47);
        auVar5._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar5._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar24._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar24._0_16_ = auVar5;
        auVar24._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar5,auVar24._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar47 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar48 < 5) goto LAB_0061b951;
      }
      uVar48 = 4;
      if ((uVar55 & 3) != 0) {
        uVar48 = (ulong)((uint)uVar55 & 3);
      }
      lVar59 = uVar55 - uVar48;
      auVar66 = ZEXT864(uVar47);
      lVar50 = (uVar48 + lVar46) - uVar55;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar6._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar6._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar25._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar25._0_16_ = auVar6;
        auVar25._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar25);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar6,auVar25._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar47 = auVar3._0_8_;
    }
LAB_0061b951:
    lVar46 = uVar55 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar47 = uVar47 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  uVar55 = *(ulong *)(param_1 + 0x58);
  uVar48 = *(ulong *)(param_1 + 0x40);
  if (uVar55 == 0) {
    uVar58 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    if (uVar55 < 5) {
      lVar59 = 0;
      uVar58 = 0;
    }
    else {
      if (uVar55 < 0x11) {
        uVar58 = 0;
        lVar46 = 0;
      }
      else {
        uVar51 = 0x10;
        if ((uVar55 & 0xf) != 0) {
          uVar51 = (ulong)((uint)uVar55 & 0xf);
        }
        lVar59 = uVar55 - uVar51;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar58 = uVar55;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar58 = uVar58 - 0x10;
        } while (uVar51 != uVar58);
        auVar7._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar7._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar26._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar26._0_16_ = auVar7;
        auVar26._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar7,auVar26._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar58 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar51 < 5) goto LAB_0061bad1;
      }
      uVar51 = 4;
      if ((uVar55 & 3) != 0) {
        uVar51 = (ulong)((uint)uVar55 & 3);
      }
      lVar59 = uVar55 - uVar51;
      auVar66 = ZEXT864(uVar58);
      lVar50 = (uVar51 + lVar46) - uVar55;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar8._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar8._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar27._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar27._0_16_ = auVar8;
        auVar27._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar27);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar8,auVar27._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar58 = auVar3._0_8_;
    }
LAB_0061bad1:
    lVar46 = uVar55 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar58 = uVar58 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  if (uVar48 == 0) {
    uVar55 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    if (uVar48 < 5) {
      lVar59 = 0;
      uVar55 = 0;
    }
    else {
      if (uVar48 < 0x11) {
        uVar55 = 0;
        lVar46 = 0;
      }
      else {
        uVar51 = 0x10;
        if ((uVar48 & 0xf) != 0) {
          uVar51 = (ulong)((uint)uVar48 & 0xf);
        }
        lVar59 = uVar48 - uVar51;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar55 = uVar48;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar55 = uVar55 - 0x10;
        } while (uVar51 != uVar55);
        auVar9._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar9._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar28._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar28._0_16_ = auVar9;
        auVar28._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar9,auVar28._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar55 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar51 < 5) goto LAB_0061bc51;
      }
      uVar51 = 4;
      if ((uVar48 & 3) != 0) {
        uVar51 = (ulong)((uint)uVar48 & 3);
      }
      lVar59 = uVar48 - uVar51;
      auVar66 = ZEXT864(uVar55);
      lVar50 = (uVar51 + lVar46) - uVar48;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar10._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar10._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar29._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar29._0_16_ = auVar10;
        auVar29._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar29);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar10,auVar29._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar55 = auVar3._0_8_;
    }
LAB_0061bc51:
    lVar46 = uVar48 - lVar59;
    puVar54 = (uint *)(lVar2 + lVar59 * 0x10 + 8);
    do {
      uVar55 = uVar55 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  uVar48 = (ulong)(uVar47 < uVar44);
  puVar45 = (undefined8 *)(param_1 + 0x48);
  puVar53 = (undefined8 *)(param_1 + 0x30);
  if (uVar55 < uVar58) {
    puVar45 = (undefined8 *)(param_1 + 0x30);
    puVar53 = (undefined8 *)(param_1 + 0x48);
  }
  uVar55 = puVar53[2];
  uVar58 = *(ulong *)(param_1 + 0x10 + uVar48 * 0x18);
  if (uVar55 == 0) {
    uVar51 = 0;
  }
  else {
    lVar2 = puVar53[1];
    if (uVar55 < 5) {
      lVar59 = 0;
      uVar51 = 0;
    }
    else {
      if (uVar55 < 0x11) {
        uVar51 = 0;
        lVar46 = 0;
      }
      else {
        uVar60 = 0x10;
        if ((uVar55 & 0xf) != 0) {
          uVar60 = (ulong)((uint)uVar55 & 0xf);
        }
        lVar59 = uVar55 - uVar60;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar51 = uVar55;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar51 = uVar51 - 0x10;
        } while (uVar60 != uVar51);
        auVar11._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar11._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar30._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar30._0_16_ = auVar11;
        auVar30._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar11,auVar30._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar51 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar60 < 5) goto LAB_0061bdf1;
      }
      uVar60 = 4;
      if ((uVar55 & 3) != 0) {
        uVar60 = (ulong)((uint)uVar55 & 3);
      }
      lVar59 = uVar55 - uVar60;
      auVar66 = ZEXT864(uVar51);
      lVar50 = (uVar60 + lVar46) - uVar55;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar12._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar12._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar31._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar31._0_16_ = auVar12;
        auVar31._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar31);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar12,auVar31._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar51 = auVar3._0_8_;
    }
LAB_0061bdf1:
    lVar46 = uVar55 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar51 = uVar51 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  puVar1 = (undefined8 *)(param_1 + (ulong)(uVar47 >= uVar44) * 0x18);
  if (uVar58 == 0) {
    uVar47 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8 + uVar48 * 0x18);
    if (uVar58 < 5) {
      lVar59 = 0;
      uVar47 = 0;
    }
    else {
      if (uVar58 < 0x11) {
        uVar47 = 0;
        lVar46 = 0;
      }
      else {
        uVar55 = 0x10;
        if ((uVar58 & 0xf) != 0) {
          uVar55 = (ulong)((uint)uVar58 & 0xf);
        }
        lVar59 = uVar58 - uVar55;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar47 = uVar58;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar47 = uVar47 - 0x10;
        } while (uVar55 != uVar47);
        auVar13._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar13._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar32._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar32._0_16_ = auVar13;
        auVar32._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar13,auVar32._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar47 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar55 < 5) goto LAB_0061bf71;
      }
      uVar55 = 4;
      if ((uVar58 & 3) != 0) {
        uVar55 = (ulong)((uint)uVar58 & 3);
      }
      lVar59 = uVar58 - uVar55;
      auVar66 = ZEXT864(uVar47);
      lVar50 = (uVar55 + lVar46) - uVar58;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar14._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar14._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar33._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar33._0_16_ = auVar14;
        auVar33._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar33);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar14,auVar33._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar47 = auVar3._0_8_;
    }
LAB_0061bf71:
    lVar46 = uVar58 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar47 = uVar47 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  uVar55 = puVar45[2];
  uVar44 = puVar1[2];
  if (uVar55 == 0) {
    uVar58 = 0;
  }
  else {
    lVar2 = puVar45[1];
    if (uVar55 < 5) {
      lVar59 = 0;
      uVar58 = 0;
    }
    else {
      if (uVar55 < 0x11) {
        uVar58 = 0;
        lVar46 = 0;
      }
      else {
        uVar60 = 0x10;
        if ((uVar55 & 0xf) != 0) {
          uVar60 = (ulong)((uint)uVar55 & 0xf);
        }
        lVar59 = uVar55 - uVar60;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar58 = uVar55;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar58 = uVar58 - 0x10;
        } while (uVar60 != uVar58);
        auVar15._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar15._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar34._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar34._0_16_ = auVar15;
        auVar34._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar15,auVar34._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar58 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar60 < 5) goto LAB_0061c0f1;
      }
      uVar60 = 4;
      if ((uVar55 & 3) != 0) {
        uVar60 = (ulong)((uint)uVar55 & 3);
      }
      lVar59 = uVar55 - uVar60;
      auVar66 = ZEXT864(uVar58);
      lVar50 = (uVar60 + lVar46) - uVar55;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar16._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar16._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar35._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar35._0_16_ = auVar16;
        auVar35._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar35);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar16,auVar35._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar58 = auVar3._0_8_;
    }
LAB_0061c0f1:
    lVar46 = uVar55 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar58 = uVar58 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  puVar57 = (undefined8 *)(param_1 + uVar48 * 0x18);
  if (uVar44 == 0) {
    uVar55 = 0;
  }
  else {
    lVar2 = puVar1[1];
    if (uVar44 < 5) {
      lVar59 = 0;
      uVar55 = 0;
    }
    else {
      if (uVar44 < 0x11) {
        uVar55 = 0;
        lVar46 = 0;
      }
      else {
        uVar48 = 0x10;
        if ((uVar44 & 0xf) != 0) {
          uVar48 = (ulong)((uint)uVar44 & 0xf);
        }
        lVar59 = uVar44 - uVar48;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar55 = uVar44;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar55 = uVar55 - 0x10;
        } while (uVar48 != uVar55);
        auVar17._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar17._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar36._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar36._0_16_ = auVar17;
        auVar36._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar17,auVar36._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar55 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar48 < 5) goto LAB_0061c271;
      }
      uVar48 = 4;
      if ((uVar44 & 3) != 0) {
        uVar48 = (ulong)((uint)uVar44 & 3);
      }
      lVar59 = uVar44 - uVar48;
      auVar66 = ZEXT864(uVar55);
      lVar50 = (uVar48 + lVar46) - uVar44;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar18._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar18._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar37._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar37._0_16_ = auVar18;
        auVar37._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar37);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar18,auVar37._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar55 = auVar3._0_8_;
    }
LAB_0061c271:
    lVar46 = uVar44 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar55 = uVar55 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  puVar61 = puVar1;
  if (uVar55 < uVar58) {
    puVar61 = puVar53;
  }
  puVar52 = puVar53;
  if (uVar47 < uVar51) {
    puVar52 = puVar1;
    puVar61 = puVar57;
  }
  if (uVar55 < uVar58) {
    puVar52 = puVar45;
  }
  uVar44 = puVar52[2];
  uVar48 = puVar61[2];
  if (uVar44 == 0) {
    uVar60 = 0;
  }
  else {
    lVar2 = puVar52[1];
    if (uVar44 < 5) {
      lVar59 = 0;
      uVar60 = 0;
    }
    else {
      if (uVar44 < 0x11) {
        uVar60 = 0;
        lVar46 = 0;
      }
      else {
        uVar49 = 0x10;
        if ((uVar44 & 0xf) != 0) {
          uVar49 = (ulong)((uint)uVar44 & 0xf);
        }
        lVar59 = uVar44 - uVar49;
        pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
        lVar46 = 0;
        lVar67 = 0;
        lVar68 = 0;
        lVar69 = 0;
        auVar66 = ZEXT1664(_s__00202430);
        lVar50 = 0;
        lVar70 = 0;
        lVar71 = 0;
        lVar72 = 0;
        lVar73 = 0;
        lVar74 = 0;
        lVar75 = 0;
        lVar76 = 0;
        lVar77 = 0;
        lVar78 = 0;
        lVar79 = 0;
        lVar80 = 0;
        uVar60 = uVar44;
        do {
          auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
          auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
          auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
          auVar64 = vpermd_avx512f(auVar66,*pauVar56);
          auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
          lVar46 = lVar46 + auVar42._0_8_;
          lVar67 = lVar67 + auVar42._8_8_;
          lVar68 = lVar68 + auVar42._16_8_;
          lVar69 = lVar69 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
          lVar50 = lVar50 + auVar42._0_8_;
          lVar70 = lVar70 + auVar42._8_8_;
          lVar71 = lVar71 + auVar42._16_8_;
          lVar72 = lVar72 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
          lVar73 = lVar73 + auVar42._0_8_;
          lVar74 = lVar74 + auVar42._8_8_;
          lVar75 = lVar75 + auVar42._16_8_;
          lVar76 = lVar76 + auVar42._24_8_;
          auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
          lVar77 = lVar77 + auVar42._0_8_;
          lVar78 = lVar78 + auVar42._8_8_;
          lVar79 = lVar79 + auVar42._16_8_;
          lVar80 = lVar80 + auVar42._24_8_;
          pauVar56 = pauVar56 + 4;
          uVar60 = uVar60 - 0x10;
        } while (uVar49 != uVar60);
        auVar19._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
        auVar19._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
        auVar38._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
        auVar38._0_16_ = auVar19;
        auVar38._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
        auVar3 = vpaddq_avx(auVar19,auVar38._16_16_);
        auVar4 = vpshufd_avx(auVar3,0xee);
        auVar3 = vpaddq_avx(auVar3,auVar4);
        uVar60 = auVar3._0_8_;
        lVar46 = lVar59;
        if ((uint)uVar49 < 5) goto LAB_0061c421;
      }
      uVar49 = 4;
      if ((uVar44 & 3) != 0) {
        uVar49 = (ulong)((uint)uVar44 & 3);
      }
      lVar59 = uVar44 - uVar49;
      auVar66 = ZEXT864(uVar60);
      lVar50 = (uVar49 + lVar46) - uVar44;
      pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
      do {
        auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        auVar20._0_8_ = auVar66._0_8_ + auVar42._0_8_;
        auVar20._8_8_ = auVar66._8_8_ + auVar42._8_8_;
        auVar39._16_8_ = auVar66._16_8_ + auVar42._16_8_;
        auVar39._0_16_ = auVar20;
        auVar39._24_8_ = auVar66._24_8_ + auVar42._24_8_;
        auVar66 = ZEXT3264(auVar39);
        pauVar56 = pauVar56 + 1;
        lVar50 = lVar50 + 4;
      } while (lVar50 != 0);
      auVar3 = vpaddq_avx(auVar20,auVar39._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar60 = auVar3._0_8_;
    }
LAB_0061c421:
    lVar46 = uVar44 - lVar59;
    puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
    do {
      uVar60 = uVar60 + *puVar54;
      puVar54 = puVar54 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
  }
  if (uVar48 == 0) {
    uVar44 = 0;
    goto LAB_0061c5be;
  }
  lVar2 = puVar61[1];
  if (uVar48 < 5) {
    lVar59 = 0;
    uVar44 = 0;
  }
  else {
    if (uVar48 < 0x11) {
      uVar44 = 0;
      lVar46 = 0;
    }
    else {
      uVar49 = 0x10;
      if ((uVar48 & 0xf) != 0) {
        uVar49 = (ulong)((uint)uVar48 & 0xf);
      }
      lVar59 = uVar48 - uVar49;
      pauVar56 = (undefined1 (*) [64])(lVar2 + 200);
      lVar46 = 0;
      lVar67 = 0;
      lVar68 = 0;
      lVar69 = 0;
      auVar66 = ZEXT1664(_s__00202430);
      lVar50 = 0;
      lVar70 = 0;
      lVar71 = 0;
      lVar72 = 0;
      lVar73 = 0;
      lVar74 = 0;
      lVar75 = 0;
      lVar76 = 0;
      lVar77 = 0;
      lVar78 = 0;
      lVar79 = 0;
      lVar80 = 0;
      uVar44 = uVar48;
      do {
        auVar65 = vpermd_avx512f(auVar66,pauVar56[-3]);
        auVar62 = vpermd_avx512f(auVar66,pauVar56[-2]);
        auVar63 = vpermd_avx512f(auVar66,pauVar56[-1]);
        auVar64 = vpermd_avx512f(auVar66,*pauVar56);
        auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
        lVar46 = lVar46 + auVar42._0_8_;
        lVar67 = lVar67 + auVar42._8_8_;
        lVar68 = lVar68 + auVar42._16_8_;
        lVar69 = lVar69 + auVar42._24_8_;
        auVar42 = vpmovzxdq_avx2(auVar62._0_16_);
        lVar50 = lVar50 + auVar42._0_8_;
        lVar70 = lVar70 + auVar42._8_8_;
        lVar71 = lVar71 + auVar42._16_8_;
        lVar72 = lVar72 + auVar42._24_8_;
        auVar42 = vpmovzxdq_avx2(auVar63._0_16_);
        lVar73 = lVar73 + auVar42._0_8_;
        lVar74 = lVar74 + auVar42._8_8_;
        lVar75 = lVar75 + auVar42._16_8_;
        lVar76 = lVar76 + auVar42._24_8_;
        auVar42 = vpmovzxdq_avx2(auVar64._0_16_);
        lVar77 = lVar77 + auVar42._0_8_;
        lVar78 = lVar78 + auVar42._8_8_;
        lVar79 = lVar79 + auVar42._16_8_;
        lVar80 = lVar80 + auVar42._24_8_;
        pauVar56 = pauVar56 + 4;
        uVar44 = uVar44 - 0x10;
      } while (uVar49 != uVar44);
      auVar21._0_8_ = lVar77 + lVar73 + lVar50 + lVar46;
      auVar21._8_8_ = lVar78 + lVar74 + lVar70 + lVar67;
      auVar40._16_8_ = lVar79 + lVar75 + lVar71 + lVar68;
      auVar40._0_16_ = auVar21;
      auVar40._24_8_ = lVar80 + lVar76 + lVar72 + lVar69;
      auVar3 = vpaddq_avx(auVar21,auVar40._16_16_);
      auVar4 = vpshufd_avx(auVar3,0xee);
      auVar3 = vpaddq_avx(auVar3,auVar4);
      uVar44 = auVar3._0_8_;
      lVar46 = lVar59;
      if ((uint)uVar49 < 5) goto LAB_0061c5a1;
    }
    uVar49 = 4;
    if ((uVar48 & 3) != 0) {
      uVar49 = (ulong)((uint)uVar48 & 3);
    }
    lVar59 = uVar48 - uVar49;
    auVar66 = ZEXT864(uVar44);
    lVar50 = (uVar49 + lVar46) - uVar48;
    pauVar56 = (undefined1 (*) [64])(lVar46 * 0x10 + lVar2 + 8);
    do {
      auVar65 = vpermd_avx512f(ZEXT1664(_s__00202430),*pauVar56);
      auVar42 = vpmovzxdq_avx2(auVar65._0_16_);
      auVar22._0_8_ = auVar66._0_8_ + auVar42._0_8_;
      auVar22._8_8_ = auVar66._8_8_ + auVar42._8_8_;
      auVar41._16_8_ = auVar66._16_8_ + auVar42._16_8_;
      auVar41._0_16_ = auVar22;
      auVar41._24_8_ = auVar66._24_8_ + auVar42._24_8_;
      auVar66 = ZEXT3264(auVar41);
      pauVar56 = pauVar56 + 1;
      lVar50 = lVar50 + 4;
    } while (lVar50 != 0);
    auVar3 = vpaddq_avx(auVar22,auVar41._16_16_);
    auVar4 = vpshufd_avx(auVar3,0xee);
    auVar3 = vpaddq_avx(auVar3,auVar4);
    uVar44 = auVar3._0_8_;
  }
LAB_0061c5a1:
  lVar46 = uVar48 - lVar59;
  puVar54 = (uint *)(lVar59 * 0x10 + lVar2 + 8);
  do {
    uVar44 = uVar44 + *puVar54;
    puVar54 = puVar54 + 4;
    lVar46 = lVar46 + -1;
  } while (lVar46 != 0);
LAB_0061c5be:
  if (uVar55 < uVar58) {
    puVar45 = puVar1;
  }
  if (uVar47 < uVar51) {
    puVar57 = puVar53;
  }
  puVar53 = puVar52;
  if (uVar44 < uVar60) {
    puVar53 = puVar61;
    puVar61 = puVar52;
  }
  param_2[2] = puVar57[2];
  uVar43 = puVar57[1];
  *param_2 = *puVar57;
  param_2[1] = uVar43;
  param_2[5] = puVar61[2];
  uVar43 = puVar61[1];
  param_2[3] = *puVar61;
  param_2[4] = uVar43;
  param_2[8] = puVar53[2];
  uVar43 = puVar53[1];
  param_2[6] = *puVar53;
  param_2[7] = uVar43;
  uVar43 = puVar45[1];
  param_2[9] = *puVar45;
  param_2[10] = uVar43;
  param_2[0xb] = puVar45[2];
  return;
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}> @ 006232e0 (1691 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
          (undefined1 (*param_1) [16],long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 (*pauVar20) [16];
  long lVar21;
  uint *puVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined1 (*pauVar32) [64];
  ulong uVar33;
  uint uVar34;
  undefined1 (*pauVar35) [16];
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined1 auVar43 [64];
  long lVar53;
  long lVar54;
  long lVar55;
  
  auVar42 = ZEXT1664(_s__00202430);
  pauVar24 = (undefined1 (*) [16])(param_1[1] + 8);
  pauVar35 = param_1;
  do {
    pauVar20 = pauVar24;
    lVar1 = *(long *)pauVar35[2];
    uVar2 = *(ulong *)(pauVar35[2] + 8);
    uVar34 = (uint)uVar2;
    if (uVar2 == 0) {
      uVar36 = 0;
    }
    else {
      if (uVar2 < 5) {
        lVar21 = 0;
        uVar36 = 0;
      }
      else {
        if (uVar2 < 0x11) {
          uVar36 = 0;
          lVar25 = 0;
        }
        else {
          uVar38 = (ulong)(uVar34 & 0xf);
          if ((uVar2 & 0xf) == 0) {
            uVar38 = 0x10;
          }
          lVar21 = uVar2 - uVar38;
          pauVar32 = (undefined1 (*) [64])(lVar1 + 200);
          lVar25 = 0;
          lVar44 = 0;
          lVar47 = 0;
          lVar50 = 0;
          lVar23 = 0;
          lVar45 = 0;
          lVar48 = 0;
          lVar51 = 0;
          lVar27 = 0;
          lVar46 = 0;
          lVar49 = 0;
          lVar52 = 0;
          lVar31 = 0;
          lVar53 = 0;
          lVar54 = 0;
          lVar55 = 0;
          uVar36 = uVar2;
          do {
            auVar43 = vpermd_avx512f(auVar42,pauVar32[-3]);
            auVar41 = vpermd_avx512f(auVar42,pauVar32[-2]);
            auVar39 = vpermd_avx512f(auVar42,pauVar32[-1]);
            auVar40 = vpermd_avx512f(auVar42,*pauVar32);
            auVar19 = vpmovzxdq_avx2(auVar43._0_16_);
            lVar25 = lVar25 + auVar19._0_8_;
            lVar44 = lVar44 + auVar19._8_8_;
            lVar47 = lVar47 + auVar19._16_8_;
            lVar50 = lVar50 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
            lVar23 = lVar23 + auVar19._0_8_;
            lVar45 = lVar45 + auVar19._8_8_;
            lVar48 = lVar48 + auVar19._16_8_;
            lVar51 = lVar51 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar39._0_16_);
            lVar27 = lVar27 + auVar19._0_8_;
            lVar46 = lVar46 + auVar19._8_8_;
            lVar49 = lVar49 + auVar19._16_8_;
            lVar52 = lVar52 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar40._0_16_);
            lVar31 = lVar31 + auVar19._0_8_;
            lVar53 = lVar53 + auVar19._8_8_;
            lVar54 = lVar54 + auVar19._16_8_;
            lVar55 = lVar55 + auVar19._24_8_;
            pauVar32 = pauVar32 + 4;
            uVar36 = uVar36 - 0x10;
          } while (uVar38 != uVar36);
          auVar4._0_8_ = lVar31 + lVar27 + lVar23 + lVar25;
          auVar4._8_8_ = lVar53 + lVar46 + lVar45 + lVar44;
          auVar19._16_8_ = lVar54 + lVar49 + lVar48 + lVar47;
          auVar19._0_16_ = auVar4;
          auVar19._24_8_ = lVar55 + lVar52 + lVar51 + lVar50;
          auVar4 = vpaddq_avx(auVar4,auVar19._16_16_);
          auVar5 = vpshufd_avx(auVar4,0xee);
          auVar4 = vpaddq_avx(auVar4,auVar5);
          uVar36 = auVar4._0_8_;
          lVar25 = lVar21;
          if ((uint)uVar38 < 5) goto LAB_006234a1;
        }
        uVar38 = (ulong)(uVar34 & 3);
        if ((uVar2 & 3) == 0) {
          uVar38 = 4;
        }
        lVar21 = uVar2 - uVar38;
        auVar43 = ZEXT864(uVar36);
        lVar23 = (uVar38 + lVar25) - uVar2;
        pauVar32 = (undefined1 (*) [64])(lVar25 * 0x10 + lVar1 + 8);
        do {
          auVar41 = vpermd_avx512f(auVar42,*pauVar32);
          auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
          auVar5._0_8_ = auVar43._0_8_ + auVar19._0_8_;
          auVar5._8_8_ = auVar43._8_8_ + auVar19._8_8_;
          auVar12._16_8_ = auVar43._16_8_ + auVar19._16_8_;
          auVar12._0_16_ = auVar5;
          auVar12._24_8_ = auVar43._24_8_ + auVar19._24_8_;
          auVar43 = ZEXT3264(auVar12);
          pauVar32 = pauVar32 + 1;
          lVar23 = lVar23 + 4;
        } while (lVar23 != 0);
        auVar4 = vpaddq_avx(auVar5,auVar12._16_16_);
        auVar5 = vpshufd_avx(auVar4,0xee);
        auVar4 = vpaddq_avx(auVar4,auVar5);
        uVar36 = auVar4._0_8_;
      }
LAB_006234a1:
      lVar25 = uVar2 - lVar21;
      puVar22 = (uint *)(lVar21 * 0x10 + lVar1 + 8);
      do {
        uVar36 = uVar36 + *puVar22;
        puVar22 = puVar22 + 4;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar38 = *(ulong *)pauVar35[1];
    if (uVar38 == 0) {
      uVar30 = 0;
    }
    else {
      lVar25 = *(long *)(*pauVar35 + 8);
      if (uVar38 < 5) {
        lVar26 = 0;
        uVar30 = 0;
      }
      else {
        if (uVar38 < 0x11) {
          uVar30 = 0;
          lVar23 = 0;
        }
        else {
          uVar28 = (ulong)((uint)uVar38 & 0xf);
          if ((uVar38 & 0xf) == 0) {
            uVar28 = 0x10;
          }
          lVar26 = uVar38 - uVar28;
          pauVar32 = (undefined1 (*) [64])(lVar25 + 200);
          lVar23 = 0;
          lVar45 = 0;
          lVar48 = 0;
          lVar51 = 0;
          lVar27 = 0;
          lVar46 = 0;
          lVar49 = 0;
          lVar52 = 0;
          lVar31 = 0;
          lVar53 = 0;
          lVar54 = 0;
          lVar55 = 0;
          lVar44 = 0;
          lVar47 = 0;
          lVar50 = 0;
          lVar21 = 0;
          uVar30 = uVar38;
          do {
            auVar43 = vpermd_avx512f(auVar42,pauVar32[-3]);
            auVar41 = vpermd_avx512f(auVar42,pauVar32[-2]);
            auVar39 = vpermd_avx512f(auVar42,pauVar32[-1]);
            auVar40 = vpermd_avx512f(auVar42,*pauVar32);
            auVar19 = vpmovzxdq_avx2(auVar43._0_16_);
            lVar23 = lVar23 + auVar19._0_8_;
            lVar45 = lVar45 + auVar19._8_8_;
            lVar48 = lVar48 + auVar19._16_8_;
            lVar51 = lVar51 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
            lVar27 = lVar27 + auVar19._0_8_;
            lVar46 = lVar46 + auVar19._8_8_;
            lVar49 = lVar49 + auVar19._16_8_;
            lVar52 = lVar52 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar39._0_16_);
            lVar31 = lVar31 + auVar19._0_8_;
            lVar53 = lVar53 + auVar19._8_8_;
            lVar54 = lVar54 + auVar19._16_8_;
            lVar55 = lVar55 + auVar19._24_8_;
            auVar19 = vpmovzxdq_avx2(auVar40._0_16_);
            lVar44 = lVar44 + auVar19._0_8_;
            lVar47 = lVar47 + auVar19._8_8_;
            lVar50 = lVar50 + auVar19._16_8_;
            lVar21 = lVar21 + auVar19._24_8_;
            pauVar32 = pauVar32 + 4;
            uVar30 = uVar30 - 0x10;
          } while (uVar28 != uVar30);
          auVar6._0_8_ = lVar44 + lVar31 + lVar27 + lVar23;
          auVar6._8_8_ = lVar47 + lVar53 + lVar46 + lVar45;
          auVar13._16_8_ = lVar50 + lVar54 + lVar49 + lVar48;
          auVar13._0_16_ = auVar6;
          auVar13._24_8_ = lVar21 + lVar55 + lVar52 + lVar51;
          auVar4 = vpaddq_avx(auVar6,auVar13._16_16_);
          auVar5 = vpshufd_avx(auVar4,0xee);
          auVar4 = vpaddq_avx(auVar4,auVar5);
          uVar30 = auVar4._0_8_;
          lVar23 = lVar26;
          if ((uint)uVar28 < 5) goto LAB_00623621;
        }
        uVar28 = (ulong)((uint)uVar38 & 3);
        if ((uVar38 & 3) == 0) {
          uVar28 = 4;
        }
        lVar26 = uVar38 - uVar28;
        auVar43 = ZEXT864(uVar30);
        lVar27 = (uVar28 + lVar23) - uVar38;
        pauVar32 = (undefined1 (*) [64])(lVar25 + lVar23 * 0x10 + 8);
        do {
          auVar41 = vpermd_avx512f(auVar42,*pauVar32);
          auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
          auVar7._0_8_ = auVar43._0_8_ + auVar19._0_8_;
          auVar7._8_8_ = auVar43._8_8_ + auVar19._8_8_;
          auVar14._16_8_ = auVar43._16_8_ + auVar19._16_8_;
          auVar14._0_16_ = auVar7;
          auVar14._24_8_ = auVar43._24_8_ + auVar19._24_8_;
          auVar43 = ZEXT3264(auVar14);
          pauVar32 = pauVar32 + 1;
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0);
        auVar4 = vpaddq_avx(auVar7,auVar14._16_16_);
        auVar5 = vpshufd_avx(auVar4,0xee);
        auVar4 = vpaddq_avx(auVar4,auVar5);
        uVar30 = auVar4._0_8_;
      }
LAB_00623621:
      lVar23 = uVar38 - lVar26;
      puVar22 = (uint *)(lVar25 + lVar26 * 0x10 + 8);
      do {
        uVar30 = uVar30 + *puVar22;
        puVar22 = puVar22 + 4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    if (uVar30 < uVar36) {
      uVar3 = *(undefined8 *)(pauVar35[1] + 8);
      if (uVar2 == 0) {
        *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar35[1];
        *pauVar20 = *pauVar35;
      }
      else {
        uVar36 = (ulong)(uVar34 & 0xf);
        if ((uVar2 & 0xf) == 0) {
          uVar36 = 0x10;
        }
        lVar25 = uVar2 - uVar36;
        uVar38 = (ulong)(uVar34 & 3);
        if ((uVar2 & 3) == 0) {
          uVar38 = 4;
        }
        pauVar24 = pauVar20;
        do {
          pauVar35 = (undefined1 (*) [16])(pauVar24[-2] + 8);
          *(undefined8 *)pauVar24[1] = *(undefined8 *)(pauVar24[-1] + 8);
          *pauVar24 = *(undefined1 (*) [16])(pauVar24[-2] + 8);
          if (pauVar35 == param_1) {
            pauVar35 = param_1;
            break;
          }
          if (uVar2 < 5) {
            uVar30 = 0;
            lVar23 = 0;
          }
          else {
            if (uVar2 < 0x11) {
              uVar30 = 0;
              lVar23 = 0;
            }
            else {
              lVar23 = 0;
              lVar45 = 0;
              lVar48 = 0;
              lVar51 = 0;
              lVar27 = 0;
              lVar46 = 0;
              lVar49 = 0;
              lVar52 = 0;
              lVar31 = 0;
              lVar53 = 0;
              lVar54 = 0;
              lVar55 = 0;
              lVar44 = 0;
              lVar47 = 0;
              lVar50 = 0;
              lVar21 = 0;
              lVar26 = lVar25;
              pauVar32 = (undefined1 (*) [64])(lVar1 + 200);
              do {
                auVar43 = vpermd_avx512f(auVar42,pauVar32[-3]);
                auVar41 = vpermd_avx512f(auVar42,pauVar32[-2]);
                auVar39 = vpermd_avx512f(auVar42,pauVar32[-1]);
                auVar40 = vpermd_avx512f(auVar42,*pauVar32);
                auVar19 = vpmovzxdq_avx2(auVar43._0_16_);
                lVar23 = lVar23 + auVar19._0_8_;
                lVar45 = lVar45 + auVar19._8_8_;
                lVar48 = lVar48 + auVar19._16_8_;
                lVar51 = lVar51 + auVar19._24_8_;
                auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
                lVar27 = lVar27 + auVar19._0_8_;
                lVar46 = lVar46 + auVar19._8_8_;
                lVar49 = lVar49 + auVar19._16_8_;
                lVar52 = lVar52 + auVar19._24_8_;
                auVar19 = vpmovzxdq_avx2(auVar39._0_16_);
                lVar31 = lVar31 + auVar19._0_8_;
                lVar53 = lVar53 + auVar19._8_8_;
                lVar54 = lVar54 + auVar19._16_8_;
                lVar55 = lVar55 + auVar19._24_8_;
                auVar19 = vpmovzxdq_avx2(auVar40._0_16_);
                lVar44 = lVar44 + auVar19._0_8_;
                lVar47 = lVar47 + auVar19._8_8_;
                lVar50 = lVar50 + auVar19._16_8_;
                lVar21 = lVar21 + auVar19._24_8_;
                pauVar32 = pauVar32 + 4;
                lVar26 = lVar26 + -0x10;
              } while (lVar26 != 0);
              auVar8._0_8_ = lVar44 + lVar31 + lVar27 + lVar23;
              auVar8._8_8_ = lVar47 + lVar53 + lVar46 + lVar45;
              auVar15._16_8_ = lVar50 + lVar54 + lVar49 + lVar48;
              auVar15._0_16_ = auVar8;
              auVar15._24_8_ = lVar21 + lVar55 + lVar52 + lVar51;
              auVar4 = vpaddq_avx(auVar8,auVar15._16_16_);
              auVar5 = vpshufd_avx(auVar4,0xee);
              auVar4 = vpaddq_avx(auVar4,auVar5);
              uVar30 = auVar4._0_8_;
              lVar23 = lVar25;
              if ((uint)uVar36 < 5) goto LAB_006237e4;
            }
            auVar43 = ZEXT864(uVar30);
            lVar27 = (uVar38 - uVar2) + lVar23;
            pauVar32 = (undefined1 (*) [64])(lVar23 * 0x10 + lVar1 + 8);
            do {
              auVar41 = vpermd_avx512f(auVar42,*pauVar32);
              auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
              auVar9._0_8_ = auVar43._0_8_ + auVar19._0_8_;
              auVar9._8_8_ = auVar43._8_8_ + auVar19._8_8_;
              auVar16._16_8_ = auVar43._16_8_ + auVar19._16_8_;
              auVar16._0_16_ = auVar9;
              auVar16._24_8_ = auVar43._24_8_ + auVar19._24_8_;
              auVar43 = ZEXT3264(auVar16);
              pauVar32 = pauVar32 + 1;
              lVar27 = lVar27 + 4;
            } while (lVar27 != 0);
            auVar4 = vpaddq_avx(auVar9,auVar16._16_16_);
            auVar5 = vpshufd_avx(auVar4,0xee);
            auVar4 = vpaddq_avx(auVar4,auVar5);
            uVar30 = auVar4._0_8_;
            lVar23 = uVar2 - uVar38;
          }
LAB_006237e4:
          lVar27 = *(long *)(pauVar24[-3] + 8);
          uVar28 = *(ulong *)pauVar24[-2];
          lVar31 = uVar2 - lVar23;
          puVar22 = (uint *)(lVar23 * 0x10 + lVar1 + 8);
          do {
            uVar30 = uVar30 + *puVar22;
            puVar22 = puVar22 + 4;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          if (uVar28 == 0) {
            uVar33 = 0;
          }
          else {
            if (uVar28 < 5) {
              lVar37 = 0;
              uVar33 = 0;
            }
            else {
              if (uVar28 < 0x11) {
                uVar33 = 0;
                lVar23 = 0;
              }
              else {
                uVar29 = (ulong)((uint)uVar28 & 0xf);
                if ((uVar28 & 0xf) == 0) {
                  uVar29 = 0x10;
                }
                lVar37 = uVar28 - uVar29;
                pauVar32 = (undefined1 (*) [64])(lVar27 + 200);
                lVar23 = 0;
                lVar46 = 0;
                lVar49 = 0;
                lVar52 = 0;
                lVar31 = 0;
                lVar53 = 0;
                lVar54 = 0;
                lVar55 = 0;
                lVar44 = 0;
                lVar47 = 0;
                lVar50 = 0;
                lVar21 = 0;
                lVar45 = 0;
                lVar48 = 0;
                lVar51 = 0;
                lVar26 = 0;
                uVar33 = uVar28;
                do {
                  auVar43 = vpermd_avx512f(auVar42,pauVar32[-3]);
                  auVar41 = vpermd_avx512f(auVar42,pauVar32[-2]);
                  auVar39 = vpermd_avx512f(auVar42,pauVar32[-1]);
                  auVar40 = vpermd_avx512f(auVar42,*pauVar32);
                  auVar19 = vpmovzxdq_avx2(auVar43._0_16_);
                  lVar23 = lVar23 + auVar19._0_8_;
                  lVar46 = lVar46 + auVar19._8_8_;
                  lVar49 = lVar49 + auVar19._16_8_;
                  lVar52 = lVar52 + auVar19._24_8_;
                  auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
                  lVar31 = lVar31 + auVar19._0_8_;
                  lVar53 = lVar53 + auVar19._8_8_;
                  lVar54 = lVar54 + auVar19._16_8_;
                  lVar55 = lVar55 + auVar19._24_8_;
                  auVar19 = vpmovzxdq_avx2(auVar39._0_16_);
                  lVar44 = lVar44 + auVar19._0_8_;
                  lVar47 = lVar47 + auVar19._8_8_;
                  lVar50 = lVar50 + auVar19._16_8_;
                  lVar21 = lVar21 + auVar19._24_8_;
                  auVar19 = vpmovzxdq_avx2(auVar40._0_16_);
                  lVar45 = lVar45 + auVar19._0_8_;
                  lVar48 = lVar48 + auVar19._8_8_;
                  lVar51 = lVar51 + auVar19._16_8_;
                  lVar26 = lVar26 + auVar19._24_8_;
                  pauVar32 = pauVar32 + 4;
                  uVar33 = uVar33 - 0x10;
                } while (uVar29 != uVar33);
                auVar10._0_8_ = lVar45 + lVar44 + lVar31 + lVar23;
                auVar10._8_8_ = lVar48 + lVar47 + lVar53 + lVar46;
                auVar17._16_8_ = lVar51 + lVar50 + lVar54 + lVar49;
                auVar17._0_16_ = auVar10;
                auVar17._24_8_ = lVar26 + lVar21 + lVar55 + lVar52;
                auVar4 = vpaddq_avx(auVar10,auVar17._16_16_);
                auVar5 = vpshufd_avx(auVar4,0xee);
                auVar4 = vpaddq_avx(auVar4,auVar5);
                uVar33 = auVar4._0_8_;
                lVar23 = lVar37;
                if ((uint)uVar29 < 5) goto LAB_00623961;
              }
              uVar29 = (ulong)((uint)uVar28 & 3);
              if ((uVar28 & 3) == 0) {
                uVar29 = 4;
              }
              lVar37 = uVar28 - uVar29;
              auVar43 = ZEXT864(uVar33);
              lVar31 = (uVar29 + lVar23) - uVar28;
              pauVar32 = (undefined1 (*) [64])(lVar27 + lVar23 * 0x10 + 8);
              do {
                auVar41 = vpermd_avx512f(auVar42,*pauVar32);
                auVar19 = vpmovzxdq_avx2(auVar41._0_16_);
                auVar11._0_8_ = auVar43._0_8_ + auVar19._0_8_;
                auVar11._8_8_ = auVar43._8_8_ + auVar19._8_8_;
                auVar18._16_8_ = auVar43._16_8_ + auVar19._16_8_;
                auVar18._0_16_ = auVar11;
                auVar18._24_8_ = auVar43._24_8_ + auVar19._24_8_;
                auVar43 = ZEXT3264(auVar18);
                pauVar32 = pauVar32 + 1;
                lVar31 = lVar31 + 4;
              } while (lVar31 != 0);
              auVar4 = vpaddq_avx(auVar11,auVar18._16_16_);
              auVar5 = vpshufd_avx(auVar4,0xee);
              auVar4 = vpaddq_avx(auVar4,auVar5);
              uVar33 = auVar4._0_8_;
            }
LAB_00623961:
            lVar23 = uVar28 - lVar37;
            puVar22 = (uint *)(lVar27 + lVar37 * 0x10 + 8);
            do {
              uVar33 = uVar33 + *puVar22;
              puVar22 = puVar22 + 4;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          pauVar24 = pauVar35;
        } while (uVar33 < uVar30);
      }
      *(undefined8 *)*pauVar35 = uVar3;
      *(long *)(*pauVar35 + 8) = lVar1;
      *(ulong *)pauVar35[1] = uVar2;
    }
    pauVar24 = (undefined1 (*) [16])(pauVar20[1] + 8);
    pauVar35 = pauVar20;
    if ((undefined1 (*) [16])(pauVar20[1] + 8) ==
        (undefined1 (*) [16])((long)param_1 + param_2 * 0x18)) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::stable::drift::sort::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}> @ 006267c0 (5645 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::stable::drift::sort::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
          (long param_1,ulong param_2,undefined8 *param_3,ulong param_4,char param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined8 uVar43;
  undefined8 uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  undefined8 *puVar53;
  long lVar54;
  long lVar55;
  undefined8 *puVar56;
  ulong uVar57;
  undefined8 *puVar58;
  byte bVar59;
  ulong uVar60;
  uint *puVar61;
  long lVar62;
  undefined1 (*pauVar63) [64];
  undefined8 *puVar64;
  ulong uVar65;
  long lVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  long lVar72;
  ulong uVar73;
  bool bVar74;
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  undefined1 auVar78 [64];
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  undefined1 auVar92 [64];
  ulong local_2e8;
  byte abStack_283 [67];
  ulong auStack_240 [66];
  
  uVar46 = param_2 + 0x3fffffffffffffff;
  if ((uVar46 | param_2) >> 0x20 == 0) {
    uVar46 = (uVar46 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    uVar46 = uVar46 / param_2;
  }
  if (param_2 < 0x1001) {
    uVar50 = param_2 - (param_2 >> 1);
    uVar47 = 0x40;
    if (uVar50 < 0x40) {
      uVar47 = uVar50;
    }
  }
  else {
    uVar45 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar47 = (ulong)(uVar45 - (uVar45 >> 1));
    uVar47 = (param_2 >> (uVar47 & 0x3f)) + (1L << (uVar47 & 0x3f)) >> 1;
  }
  uVar57 = 0;
  auVar92 = ZEXT1664(_s__00202430);
  uVar65 = 0;
  uVar50 = 1;
LAB_00626890:
  local_2e8 = param_2 - uVar57;
  if (uVar57 <= param_2 && local_2e8 != 0) {
    puVar1 = (undefined8 *)(param_1 + uVar57 * 0x18);
    if (uVar47 <= local_2e8) {
      uVar60 = local_2e8;
      if (1 < local_2e8) {
        lVar51 = puVar1[4];
        uVar52 = puVar1[5];
        if (uVar52 == 0) {
          uVar70 = 0;
        }
        else {
          if (uVar52 < 5) {
            lVar62 = 0;
            uVar70 = 0;
          }
          else {
            if (uVar52 < 0x11) {
              uVar70 = 0;
              lVar54 = 0;
            }
            else {
              uVar60 = (ulong)((uint)uVar52 & 0xf);
              if ((uVar52 & 0xf) == 0) {
                uVar60 = 0x10;
              }
              lVar62 = uVar52 - uVar60;
              pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
              lVar54 = 0;
              lVar79 = 0;
              lVar81 = 0;
              lVar83 = 0;
              lVar66 = 0;
              lVar80 = 0;
              lVar82 = 0;
              lVar84 = 0;
              lVar72 = 0;
              lVar85 = 0;
              lVar86 = 0;
              lVar87 = 0;
              lVar88 = 0;
              lVar89 = 0;
              lVar90 = 0;
              lVar91 = 0;
              uVar70 = uVar52;
              do {
                auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                lVar54 = lVar54 + auVar42._0_8_;
                lVar79 = lVar79 + auVar42._8_8_;
                lVar81 = lVar81 + auVar42._16_8_;
                lVar83 = lVar83 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                lVar66 = lVar66 + auVar42._0_8_;
                lVar80 = lVar80 + auVar42._8_8_;
                lVar82 = lVar82 + auVar42._16_8_;
                lVar84 = lVar84 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                lVar72 = lVar72 + auVar42._0_8_;
                lVar85 = lVar85 + auVar42._8_8_;
                lVar86 = lVar86 + auVar42._16_8_;
                lVar87 = lVar87 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                lVar88 = lVar88 + auVar42._0_8_;
                lVar89 = lVar89 + auVar42._8_8_;
                lVar90 = lVar90 + auVar42._16_8_;
                lVar91 = lVar91 + auVar42._24_8_;
                pauVar63 = pauVar63 + 4;
                uVar70 = uVar70 - 0x10;
              } while (uVar60 != uVar70);
              auVar3._0_8_ = lVar88 + lVar72 + lVar66 + lVar54;
              auVar3._8_8_ = lVar89 + lVar85 + lVar80 + lVar79;
              auVar42._16_8_ = lVar90 + lVar86 + lVar82 + lVar81;
              auVar42._0_16_ = auVar3;
              auVar42._24_8_ = lVar91 + lVar87 + lVar84 + lVar83;
              auVar3 = vpaddq_avx(auVar3,auVar42._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar70 = auVar3._0_8_;
              lVar54 = lVar62;
              if ((uint)uVar60 < 5) goto LAB_00626ac1;
            }
            uVar60 = (ulong)((uint)uVar52 & 3);
            if ((uVar52 & 3) == 0) {
              uVar60 = 4;
            }
            lVar62 = uVar52 - uVar60;
            auVar78 = ZEXT864(uVar70);
            lVar66 = (uVar60 + lVar54) - uVar52;
            pauVar63 = (undefined1 (*) [64])(lVar54 * 0x10 + lVar51 + 8);
            do {
              auVar77 = vpermd_avx512f(auVar92,*pauVar63);
              auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
              auVar4._0_8_ = auVar78._0_8_ + auVar42._0_8_;
              auVar4._8_8_ = auVar78._8_8_ + auVar42._8_8_;
              auVar23._16_8_ = auVar78._16_8_ + auVar42._16_8_;
              auVar23._0_16_ = auVar4;
              auVar23._24_8_ = auVar78._24_8_ + auVar42._24_8_;
              auVar78 = ZEXT3264(auVar23);
              pauVar63 = pauVar63 + 1;
              lVar66 = lVar66 + 4;
            } while (lVar66 != 0);
            auVar3 = vpaddq_avx(auVar4,auVar23._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar70 = auVar3._0_8_;
          }
LAB_00626ac1:
          lVar54 = uVar52 - lVar62;
          puVar61 = (uint *)(lVar62 * 0x10 + lVar51 + 8);
          do {
            uVar70 = uVar70 + *puVar61;
            puVar61 = puVar61 + 4;
            lVar54 = lVar54 + -1;
          } while (lVar54 != 0);
        }
        uVar60 = puVar1[2];
        if (uVar60 == 0) {
          uVar73 = 0;
        }
        else {
          lVar54 = puVar1[1];
          if (uVar60 < 5) {
            lVar55 = 0;
            uVar73 = 0;
          }
          else {
            if (uVar60 < 0x11) {
              uVar73 = 0;
              lVar66 = 0;
            }
            else {
              uVar67 = (ulong)((uint)uVar60 & 0xf);
              if ((uVar60 & 0xf) == 0) {
                uVar67 = 0x10;
              }
              lVar55 = uVar60 - uVar67;
              pauVar63 = (undefined1 (*) [64])(lVar54 + 200);
              lVar66 = 0;
              lVar80 = 0;
              lVar82 = 0;
              lVar84 = 0;
              lVar72 = 0;
              lVar85 = 0;
              lVar86 = 0;
              lVar87 = 0;
              lVar88 = 0;
              lVar89 = 0;
              lVar90 = 0;
              lVar91 = 0;
              lVar79 = 0;
              lVar81 = 0;
              lVar83 = 0;
              lVar62 = 0;
              uVar73 = uVar60;
              do {
                auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                lVar66 = lVar66 + auVar42._0_8_;
                lVar80 = lVar80 + auVar42._8_8_;
                lVar82 = lVar82 + auVar42._16_8_;
                lVar84 = lVar84 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                lVar72 = lVar72 + auVar42._0_8_;
                lVar85 = lVar85 + auVar42._8_8_;
                lVar86 = lVar86 + auVar42._16_8_;
                lVar87 = lVar87 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                lVar88 = lVar88 + auVar42._0_8_;
                lVar89 = lVar89 + auVar42._8_8_;
                lVar90 = lVar90 + auVar42._16_8_;
                lVar91 = lVar91 + auVar42._24_8_;
                auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                lVar79 = lVar79 + auVar42._0_8_;
                lVar81 = lVar81 + auVar42._8_8_;
                lVar83 = lVar83 + auVar42._16_8_;
                lVar62 = lVar62 + auVar42._24_8_;
                pauVar63 = pauVar63 + 4;
                uVar73 = uVar73 - 0x10;
              } while (uVar67 != uVar73);
              auVar5._0_8_ = lVar79 + lVar88 + lVar72 + lVar66;
              auVar5._8_8_ = lVar81 + lVar89 + lVar85 + lVar80;
              auVar24._16_8_ = lVar83 + lVar90 + lVar86 + lVar82;
              auVar24._0_16_ = auVar5;
              auVar24._24_8_ = lVar62 + lVar91 + lVar87 + lVar84;
              auVar3 = vpaddq_avx(auVar5,auVar24._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar73 = auVar3._0_8_;
              lVar66 = lVar55;
              if ((uint)uVar67 < 5) goto LAB_00626c6b;
            }
            uVar67 = (ulong)((uint)uVar60 & 3);
            if ((uVar60 & 3) == 0) {
              uVar67 = 4;
            }
            lVar55 = uVar60 - uVar67;
            auVar78 = ZEXT864(uVar73);
            lVar72 = (uVar67 + lVar66) - uVar60;
            pauVar63 = (undefined1 (*) [64])(lVar54 + lVar66 * 0x10 + 8);
            do {
              auVar77 = vpermd_avx512f(auVar92,*pauVar63);
              auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
              auVar6._0_8_ = auVar78._0_8_ + auVar42._0_8_;
              auVar6._8_8_ = auVar78._8_8_ + auVar42._8_8_;
              auVar25._16_8_ = auVar78._16_8_ + auVar42._16_8_;
              auVar25._0_16_ = auVar6;
              auVar25._24_8_ = auVar78._24_8_ + auVar42._24_8_;
              auVar78 = ZEXT3264(auVar25);
              pauVar63 = pauVar63 + 1;
              lVar72 = lVar72 + 4;
            } while (lVar72 != 0);
            auVar3 = vpaddq_avx(auVar6,auVar25._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar73 = auVar3._0_8_;
          }
LAB_00626c6b:
          lVar66 = uVar60 - lVar55;
          puVar61 = (uint *)(lVar54 + lVar55 * 0x10 + 8);
          do {
            uVar73 = uVar73 + *puVar61;
            puVar61 = puVar61 + 4;
            lVar66 = lVar66 + -1;
          } while (lVar66 != 0);
        }
        if (uVar70 <= uVar73) {
          uVar60 = 2;
          if (local_2e8 != 2) {
            do {
              lVar54 = puVar1[uVar60 * 3 + 1];
              uVar67 = puVar1[uVar60 * 3 + 2];
              if (uVar67 == 0) {
                uVar68 = 0;
              }
              else {
                if (uVar67 < 5) {
                  lVar55 = 0;
                  uVar68 = 0;
                }
                else {
                  if (uVar67 < 0x11) {
                    uVar68 = 0;
                    lVar66 = 0;
                  }
                  else {
                    uVar69 = (ulong)((uint)uVar67 & 0xf);
                    if ((uVar67 & 0xf) == 0) {
                      uVar69 = 0x10;
                    }
                    lVar55 = uVar67 - uVar69;
                    pauVar63 = (undefined1 (*) [64])(lVar54 + 200);
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar62 = 0;
                    uVar68 = uVar67;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar79 = lVar79 + auVar42._0_8_;
                      lVar81 = lVar81 + auVar42._8_8_;
                      lVar83 = lVar83 + auVar42._16_8_;
                      lVar62 = lVar62 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar68 = uVar68 - 0x10;
                    } while (uVar69 != uVar68);
                    auVar7._0_8_ = lVar79 + lVar88 + lVar72 + lVar66;
                    auVar7._8_8_ = lVar81 + lVar89 + lVar85 + lVar80;
                    auVar26._16_8_ = lVar83 + lVar90 + lVar86 + lVar82;
                    auVar26._0_16_ = auVar7;
                    auVar26._24_8_ = lVar62 + lVar91 + lVar87 + lVar84;
                    auVar3 = vpaddq_avx(auVar7,auVar26._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar68 = auVar3._0_8_;
                    lVar66 = lVar55;
                    if ((uint)uVar69 < 5) goto LAB_00626ea1;
                  }
                  uVar69 = (ulong)((uint)uVar67 & 3);
                  if ((uVar67 & 3) == 0) {
                    uVar69 = 4;
                  }
                  lVar55 = uVar67 - uVar69;
                  auVar78 = ZEXT864(uVar68);
                  lVar72 = (uVar69 + lVar66) - uVar67;
                  pauVar63 = (undefined1 (*) [64])(lVar54 + lVar66 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar8._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar8._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar27._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar27._0_16_ = auVar8;
                    auVar27._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar27);
                    pauVar63 = pauVar63 + 1;
                    lVar72 = lVar72 + 4;
                  } while (lVar72 != 0);
                  auVar3 = vpaddq_avx(auVar8,auVar27._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar68 = auVar3._0_8_;
                }
LAB_00626ea1:
                lVar66 = uVar67 - lVar55;
                puVar61 = (uint *)(lVar55 * 0x10 + lVar54 + 8);
                do {
                  uVar68 = uVar68 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar66 = lVar66 + -1;
                } while (lVar66 != 0);
              }
              if (uVar52 == 0) {
                uVar69 = 0;
              }
              else {
                if (uVar52 < 5) {
                  lVar55 = 0;
                  uVar69 = 0;
                }
                else {
                  if (uVar52 < 0x11) {
                    uVar69 = 0;
                    lVar66 = 0;
                  }
                  else {
                    uVar71 = (ulong)((uint)uVar52 & 0xf);
                    if ((uVar52 & 0xf) == 0) {
                      uVar71 = 0x10;
                    }
                    lVar55 = uVar52 - uVar71;
                    pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar62 = 0;
                    uVar69 = uVar52;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar79 = lVar79 + auVar42._0_8_;
                      lVar81 = lVar81 + auVar42._8_8_;
                      lVar83 = lVar83 + auVar42._16_8_;
                      lVar62 = lVar62 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar69 = uVar69 - 0x10;
                    } while (uVar71 != uVar69);
                    auVar9._0_8_ = lVar79 + lVar88 + lVar72 + lVar66;
                    auVar9._8_8_ = lVar81 + lVar89 + lVar85 + lVar80;
                    auVar28._16_8_ = lVar83 + lVar90 + lVar86 + lVar82;
                    auVar28._0_16_ = auVar9;
                    auVar28._24_8_ = lVar62 + lVar91 + lVar87 + lVar84;
                    auVar3 = vpaddq_avx(auVar9,auVar28._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar69 = auVar3._0_8_;
                    lVar66 = lVar55;
                    if ((uint)uVar71 < 5) goto LAB_00627037;
                  }
                  uVar71 = (ulong)((uint)uVar52 & 3);
                  if ((uVar52 & 3) == 0) {
                    uVar71 = 4;
                  }
                  lVar55 = uVar52 - uVar71;
                  auVar78 = ZEXT864(uVar69);
                  lVar72 = (uVar71 + lVar66) - uVar52;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + lVar66 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar10._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar10._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar29._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar29._0_16_ = auVar10;
                    auVar29._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar29);
                    pauVar63 = pauVar63 + 1;
                    lVar72 = lVar72 + 4;
                  } while (lVar72 != 0);
                  auVar3 = vpaddq_avx(auVar10,auVar29._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar69 = auVar3._0_8_;
                }
LAB_00627037:
                lVar66 = uVar52 - lVar55;
                puVar61 = (uint *)(lVar51 + lVar55 * 0x10 + 8);
                do {
                  uVar69 = uVar69 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar66 = lVar66 + -1;
                } while (lVar66 != 0);
              }
              if (uVar69 < uVar68) goto LAB_006273ee;
              uVar60 = uVar60 + 1;
              uVar52 = uVar67;
              lVar51 = lVar54;
            } while (uVar60 != local_2e8);
            uVar60 = local_2e8;
            goto LAB_006273f8;
          }
          goto LAB_00627500;
        }
        if (local_2e8 != 2) {
          uVar60 = 2;
          do {
            lVar54 = puVar1[uVar60 * 3 + 1];
            uVar67 = puVar1[uVar60 * 3 + 2];
            if (uVar67 == 0) {
              uVar68 = 0;
            }
            else {
              if (uVar67 < 5) {
                lVar55 = 0;
                uVar68 = 0;
              }
              else {
                if (uVar67 < 0x11) {
                  uVar68 = 0;
                  lVar66 = 0;
                }
                else {
                  uVar69 = (ulong)((uint)uVar67 & 0xf);
                  if ((uVar67 & 0xf) == 0) {
                    uVar69 = 0x10;
                  }
                  lVar55 = uVar67 - uVar69;
                  pauVar63 = (undefined1 (*) [64])(lVar54 + 200);
                  lVar66 = 0;
                  lVar80 = 0;
                  lVar82 = 0;
                  lVar84 = 0;
                  lVar72 = 0;
                  lVar85 = 0;
                  lVar86 = 0;
                  lVar87 = 0;
                  lVar88 = 0;
                  lVar89 = 0;
                  lVar90 = 0;
                  lVar91 = 0;
                  lVar79 = 0;
                  lVar81 = 0;
                  lVar83 = 0;
                  lVar62 = 0;
                  uVar68 = uVar67;
                  do {
                    auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                    auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                    auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                    auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                    lVar66 = lVar66 + auVar42._0_8_;
                    lVar80 = lVar80 + auVar42._8_8_;
                    lVar82 = lVar82 + auVar42._16_8_;
                    lVar84 = lVar84 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    lVar72 = lVar72 + auVar42._0_8_;
                    lVar85 = lVar85 + auVar42._8_8_;
                    lVar86 = lVar86 + auVar42._16_8_;
                    lVar87 = lVar87 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                    lVar88 = lVar88 + auVar42._0_8_;
                    lVar89 = lVar89 + auVar42._8_8_;
                    lVar90 = lVar90 + auVar42._16_8_;
                    lVar91 = lVar91 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                    lVar79 = lVar79 + auVar42._0_8_;
                    lVar81 = lVar81 + auVar42._8_8_;
                    lVar83 = lVar83 + auVar42._16_8_;
                    lVar62 = lVar62 + auVar42._24_8_;
                    pauVar63 = pauVar63 + 4;
                    uVar68 = uVar68 - 0x10;
                  } while (uVar69 != uVar68);
                  auVar11._0_8_ = lVar79 + lVar88 + lVar72 + lVar66;
                  auVar11._8_8_ = lVar81 + lVar89 + lVar85 + lVar80;
                  auVar30._16_8_ = lVar83 + lVar90 + lVar86 + lVar82;
                  auVar30._0_16_ = auVar11;
                  auVar30._24_8_ = lVar62 + lVar91 + lVar87 + lVar84;
                  auVar3 = vpaddq_avx(auVar11,auVar30._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar68 = auVar3._0_8_;
                  lVar66 = lVar55;
                  if ((uint)uVar69 < 5) goto LAB_00627201;
                }
                uVar69 = (ulong)((uint)uVar67 & 3);
                if ((uVar67 & 3) == 0) {
                  uVar69 = 4;
                }
                lVar55 = uVar67 - uVar69;
                auVar78 = ZEXT864(uVar68);
                lVar72 = (uVar69 + lVar66) - uVar67;
                pauVar63 = (undefined1 (*) [64])(lVar54 + lVar66 * 0x10 + 8);
                do {
                  auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                  auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                  auVar12._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                  auVar12._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                  auVar31._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                  auVar31._0_16_ = auVar12;
                  auVar31._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                  auVar78 = ZEXT3264(auVar31);
                  pauVar63 = pauVar63 + 1;
                  lVar72 = lVar72 + 4;
                } while (lVar72 != 0);
                auVar3 = vpaddq_avx(auVar12,auVar31._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar68 = auVar3._0_8_;
              }
LAB_00627201:
              lVar66 = uVar67 - lVar55;
              puVar61 = (uint *)(lVar55 * 0x10 + lVar54 + 8);
              do {
                uVar68 = uVar68 + *puVar61;
                puVar61 = puVar61 + 4;
                lVar66 = lVar66 + -1;
              } while (lVar66 != 0);
            }
            if (uVar52 == 0) {
              uVar69 = 0;
            }
            else {
              if (uVar52 < 5) {
                lVar55 = 0;
                uVar69 = 0;
              }
              else {
                if (uVar52 < 0x11) {
                  uVar69 = 0;
                  lVar66 = 0;
                }
                else {
                  uVar71 = (ulong)((uint)uVar52 & 0xf);
                  if ((uVar52 & 0xf) == 0) {
                    uVar71 = 0x10;
                  }
                  lVar55 = uVar52 - uVar71;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                  lVar66 = 0;
                  lVar80 = 0;
                  lVar82 = 0;
                  lVar84 = 0;
                  lVar72 = 0;
                  lVar85 = 0;
                  lVar86 = 0;
                  lVar87 = 0;
                  lVar88 = 0;
                  lVar89 = 0;
                  lVar90 = 0;
                  lVar91 = 0;
                  lVar79 = 0;
                  lVar81 = 0;
                  lVar83 = 0;
                  lVar62 = 0;
                  uVar69 = uVar52;
                  do {
                    auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                    auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                    auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                    auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                    lVar66 = lVar66 + auVar42._0_8_;
                    lVar80 = lVar80 + auVar42._8_8_;
                    lVar82 = lVar82 + auVar42._16_8_;
                    lVar84 = lVar84 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    lVar72 = lVar72 + auVar42._0_8_;
                    lVar85 = lVar85 + auVar42._8_8_;
                    lVar86 = lVar86 + auVar42._16_8_;
                    lVar87 = lVar87 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                    lVar88 = lVar88 + auVar42._0_8_;
                    lVar89 = lVar89 + auVar42._8_8_;
                    lVar90 = lVar90 + auVar42._16_8_;
                    lVar91 = lVar91 + auVar42._24_8_;
                    auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                    lVar79 = lVar79 + auVar42._0_8_;
                    lVar81 = lVar81 + auVar42._8_8_;
                    lVar83 = lVar83 + auVar42._16_8_;
                    lVar62 = lVar62 + auVar42._24_8_;
                    pauVar63 = pauVar63 + 4;
                    uVar69 = uVar69 - 0x10;
                  } while (uVar71 != uVar69);
                  auVar13._0_8_ = lVar79 + lVar88 + lVar72 + lVar66;
                  auVar13._8_8_ = lVar81 + lVar89 + lVar85 + lVar80;
                  auVar32._16_8_ = lVar83 + lVar90 + lVar86 + lVar82;
                  auVar32._0_16_ = auVar13;
                  auVar32._24_8_ = lVar62 + lVar91 + lVar87 + lVar84;
                  auVar3 = vpaddq_avx(auVar13,auVar32._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar69 = auVar3._0_8_;
                  lVar66 = lVar55;
                  if ((uint)uVar71 < 5) goto LAB_00627397;
                }
                uVar71 = (ulong)((uint)uVar52 & 3);
                if ((uVar52 & 3) == 0) {
                  uVar71 = 4;
                }
                lVar55 = uVar52 - uVar71;
                auVar78 = ZEXT864(uVar69);
                lVar72 = (uVar71 + lVar66) - uVar52;
                pauVar63 = (undefined1 (*) [64])(lVar51 + lVar66 * 0x10 + 8);
                do {
                  auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                  auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                  auVar14._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                  auVar14._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                  auVar33._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                  auVar33._0_16_ = auVar14;
                  auVar33._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                  auVar78 = ZEXT3264(auVar33);
                  pauVar63 = pauVar63 + 1;
                  lVar72 = lVar72 + 4;
                } while (lVar72 != 0);
                auVar3 = vpaddq_avx(auVar14,auVar33._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar69 = auVar3._0_8_;
              }
LAB_00627397:
              lVar66 = uVar52 - lVar55;
              puVar61 = (uint *)(lVar51 + lVar55 * 0x10 + 8);
              do {
                uVar69 = uVar69 + *puVar61;
                puVar61 = puVar61 + 4;
                lVar66 = lVar66 + -1;
              } while (lVar66 != 0);
            }
            if (uVar68 <= uVar69) goto LAB_006273ee;
            uVar60 = uVar60 + 1;
            uVar52 = uVar67;
            lVar51 = lVar54;
          } while (uVar60 != local_2e8);
          uVar60 = local_2e8;
          goto LAB_006273f8;
        }
        puVar48 = puVar1 + 6;
        uVar60 = 2;
        uVar70 = 0;
        goto LAB_00626cbc;
      }
      goto LAB_00627500;
    }
    goto LAB_006268bc;
  }
  bVar59 = 0;
  local_2e8 = 1;
  goto joined_r0x00627544;
LAB_006273ee:
LAB_006273f8:
  if (uVar60 < uVar47) {
LAB_006268bc:
    if (param_5 == '\0') {
      if (uVar47 < local_2e8) {
        local_2e8 = uVar47;
      }
      local_2e8 = local_2e8 * 2;
    }
    else {
      if (0x1f < local_2e8) {
        local_2e8 = 0x20;
      }
      quicksort::quicksort::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                (puVar1,local_2e8,param_3,param_4,0,0);
      auVar92 = ZEXT1664(_s__00202430);
      local_2e8 = (local_2e8 & 0xffffffff) * 2 + 1;
    }
    goto LAB_00627508;
  }
  if ((uVar73 < uVar70) && (uVar52 = uVar60 >> 1, uVar52 != 0)) {
    puVar48 = puVar1 + uVar60 * 3;
    if (uVar52 == 1) {
      uVar70 = 0;
    }
    else {
      puVar64 = (undefined8 *)(uVar57 * 0x18 + uVar60 * 0x18 + param_1 + -0x18);
      uVar70 = 0;
      puVar53 = puVar1;
      do {
        uVar2 = puVar53[2];
        uVar73 = uVar70 ^ 0x1ffffffffffffffe;
        auVar3 = *(undefined1 (*) [16])(puVar64 + 1);
        uVar43 = *puVar53;
        uVar44 = puVar53[1];
        *puVar53 = *puVar64;
        *puVar64 = uVar43;
        puVar64[1] = uVar44;
        puVar64[2] = uVar2;
        auVar4 = *(undefined1 (*) [16])(puVar48 + uVar73 * 3);
        uVar2 = puVar53[3];
        uVar43 = puVar53[4];
        *(undefined1 (*) [16])(puVar53 + 1) = auVar3;
        *(undefined1 (*) [16])(puVar53 + 3) = auVar4;
        puVar48[uVar73 * 3] = uVar2;
        (puVar48 + uVar73 * 3)[1] = uVar43;
        uVar2 = puVar53[5];
        puVar53[5] = puVar48[uVar73 * 3 + 2];
        puVar48[uVar73 * 3 + 2] = uVar2;
        uVar70 = uVar70 + 2;
        puVar53 = puVar53 + 6;
        puVar64 = puVar64 + -6;
      } while ((uVar52 & 0xfffffffffffffffe) != uVar70);
      if ((uVar52 & 1) == 0) goto LAB_00627500;
    }
LAB_00626cbc:
    uVar52 = ~uVar70;
    auVar3 = *(undefined1 (*) [16])(puVar1 + uVar70 * 3);
    *(undefined1 (*) [16])(puVar1 + uVar70 * 3) = *(undefined1 (*) [16])(puVar48 + uVar52 * 3);
    *(undefined1 (*) [16])(puVar48 + uVar52 * 3) = auVar3;
    uVar2 = puVar1[uVar70 * 3 + 2];
    puVar1[uVar70 * 3 + 2] = puVar48[uVar52 * 3 + 2];
    puVar48[uVar52 * 3 + 2] = uVar2;
  }
LAB_00627500:
  local_2e8 = uVar60 * 2 + 1;
LAB_00627508:
  bVar59 = (byte)LZCOUNT(((local_2e8 >> 1) + uVar57 * 2) * uVar46 ^
                         (uVar57 * 2 - (uVar50 >> 1)) * uVar46);
joined_r0x00627544:
  if (1 < uVar65) {
    puVar1 = (undefined8 *)(param_1 + uVar57 * 0x18);
    do {
      while( true ) {
        if (abStack_283[uVar65] < bVar59) goto LAB_00627dd6;
        uVar65 = uVar65 - 1;
        uVar52 = auStack_240[uVar65];
        uVar70 = uVar52 >> 1;
        uVar73 = uVar50 >> 1;
        uVar60 = uVar70 + uVar73;
        if ((param_4 < uVar60) || ((((uint)uVar52 | (uint)uVar50) & 1) != 0)) break;
        uVar50 = uVar60 * 2;
        if (uVar65 < 2) goto LAB_00627dd0;
      }
      puVar48 = (undefined8 *)(param_1 + (uVar57 - uVar60) * 0x18);
      if ((uVar52 & 1) == 0) {
        quicksort::quicksort::
        <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                  (puVar48,uVar70,param_3,param_4,(int)LZCOUNT(uVar70 | 1) * 2 ^ 0x7e,0);
        auVar92 = ZEXT1664(_s__00202430);
      }
      if ((uVar50 & 1) == 0) {
        quicksort::quicksort::
        <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                  (puVar48 + uVar70 * 3,uVar73,param_3,param_4,(int)LZCOUNT(uVar73 | 1) * 2 ^ 0x7e,0
                  );
        auVar92 = ZEXT1664(_s__00202430);
      }
      if ((uVar73 != 0) && (uVar70 != 0)) {
        uVar50 = uVar73;
        if (uVar70 < uVar73) {
          uVar50 = uVar70;
        }
        if (uVar50 <= param_4) {
          puVar53 = puVar48 + uVar70 * 3;
          puVar64 = puVar48;
          if (uVar73 < uVar70) {
            puVar64 = puVar53;
          }
          (*(code *)PTR_memcpy_00841de0)(param_3,puVar64,uVar50 * 0x18);
          puVar58 = param_3 + uVar50 * 3;
          puVar64 = param_3;
          if (uVar73 < uVar70) {
            auVar92 = ZEXT1664(_s__00202430);
            puVar49 = puVar1;
            puVar56 = puVar53;
            do {
              uVar50 = puVar58[-1];
              if (uVar50 == 0) {
                uVar52 = 0;
              }
              else {
                lVar51 = puVar58[-2];
                if (uVar50 < 5) {
                  lVar62 = 0;
                  uVar52 = 0;
                }
                else {
                  if (uVar50 < 0x11) {
                    uVar52 = 0;
                    lVar54 = 0;
                  }
                  else {
                    uVar70 = (ulong)((uint)uVar50 & 0xf);
                    if ((uVar50 & 0xf) == 0) {
                      uVar70 = 0x10;
                    }
                    lVar62 = uVar50 - uVar70;
                    pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                    lVar54 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    uVar52 = uVar50;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar54 = lVar54 + auVar42._0_8_;
                      lVar79 = lVar79 + auVar42._8_8_;
                      lVar81 = lVar81 + auVar42._16_8_;
                      lVar83 = lVar83 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar52 = uVar52 - 0x10;
                    } while (uVar70 != uVar52);
                    auVar15._0_8_ = lVar88 + lVar72 + lVar66 + lVar54;
                    auVar15._8_8_ = lVar89 + lVar85 + lVar80 + lVar79;
                    auVar34._16_8_ = lVar90 + lVar86 + lVar82 + lVar81;
                    auVar34._0_16_ = auVar15;
                    auVar34._24_8_ = lVar91 + lVar87 + lVar84 + lVar83;
                    auVar3 = vpaddq_avx(auVar15,auVar34._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar52 = auVar3._0_8_;
                    lVar54 = lVar62;
                    if ((uint)uVar70 < 5) goto LAB_00627881;
                  }
                  uVar70 = (ulong)((uint)uVar50 & 3);
                  if ((uVar50 & 3) == 0) {
                    uVar70 = 4;
                  }
                  lVar62 = uVar50 - uVar70;
                  auVar78 = ZEXT864(uVar52);
                  lVar66 = (uVar70 + lVar54) - uVar50;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + lVar54 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar16._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar16._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar35._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar35._0_16_ = auVar16;
                    auVar35._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar35);
                    pauVar63 = pauVar63 + 1;
                    lVar66 = lVar66 + 4;
                  } while (lVar66 != 0);
                  auVar3 = vpaddq_avx(auVar16,auVar35._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar52 = auVar3._0_8_;
                }
LAB_00627881:
                lVar54 = uVar50 - lVar62;
                puVar61 = (uint *)(lVar51 + lVar62 * 0x10 + 8);
                do {
                  uVar52 = uVar52 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar54 = lVar54 + -1;
                } while (lVar54 != 0);
              }
              uVar50 = puVar56[-1];
              if (uVar50 == 0) {
                uVar70 = 0;
              }
              else {
                lVar51 = puVar56[-2];
                if (uVar50 < 5) {
                  lVar62 = 0;
                  uVar70 = 0;
                }
                else {
                  if (uVar50 < 0x11) {
                    uVar70 = 0;
                    lVar54 = 0;
                  }
                  else {
                    uVar73 = (ulong)((uint)uVar50 & 0xf);
                    if ((uVar50 & 0xf) == 0) {
                      uVar73 = 0x10;
                    }
                    lVar62 = uVar50 - uVar73;
                    pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                    lVar54 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    uVar70 = uVar50;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar54 = lVar54 + auVar42._0_8_;
                      lVar79 = lVar79 + auVar42._8_8_;
                      lVar81 = lVar81 + auVar42._16_8_;
                      lVar83 = lVar83 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar70 = uVar70 - 0x10;
                    } while (uVar73 != uVar70);
                    auVar17._0_8_ = lVar88 + lVar72 + lVar66 + lVar54;
                    auVar17._8_8_ = lVar89 + lVar85 + lVar80 + lVar79;
                    auVar36._16_8_ = lVar90 + lVar86 + lVar82 + lVar81;
                    auVar36._0_16_ = auVar17;
                    auVar36._24_8_ = lVar91 + lVar87 + lVar84 + lVar83;
                    auVar3 = vpaddq_avx(auVar17,auVar36._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar70 = auVar3._0_8_;
                    lVar54 = lVar62;
                    if ((uint)uVar73 < 5) goto LAB_00627a01;
                  }
                  uVar73 = (ulong)((uint)uVar50 & 3);
                  if ((uVar50 & 3) == 0) {
                    uVar73 = 4;
                  }
                  lVar62 = uVar50 - uVar73;
                  auVar78 = ZEXT864(uVar70);
                  lVar66 = (uVar73 + lVar54) - uVar50;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + lVar54 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar18._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar18._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar37._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar37._0_16_ = auVar18;
                    auVar37._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar37);
                    pauVar63 = pauVar63 + 1;
                    lVar66 = lVar66 + 4;
                  } while (lVar66 != 0);
                  auVar3 = vpaddq_avx(auVar18,auVar37._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar70 = auVar3._0_8_;
                }
LAB_00627a01:
                lVar54 = uVar50 - lVar62;
                puVar61 = (uint *)(lVar51 + lVar62 * 0x10 + 8);
                do {
                  uVar70 = uVar70 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar54 = lVar54 + -1;
                } while (lVar54 != 0);
              }
              bVar74 = uVar70 < uVar52;
              puVar53 = puVar58 + -3;
              if (bVar74) {
                puVar53 = puVar56 + -3;
              }
              puVar49[-1] = puVar53[2];
              uVar2 = puVar53[1];
              puVar49[-3] = *puVar53;
              puVar49[-2] = uVar2;
              puVar56 = puVar56 + -3 + (ulong)!bVar74 * 3;
              uVar50 = (ulong)bVar74 * 3;
              puVar58 = puVar58 + -3 + (ulong)bVar74 * 3;
            } while ((puVar56 != puVar48) && (puVar49 = puVar49 + -3, puVar58 != param_3));
          }
          else {
            auVar92 = ZEXT1664(_s__00202430);
            puVar56 = puVar48;
            do {
              uVar50 = puVar53[2];
              if (uVar50 == 0) {
                uVar52 = 0;
              }
              else {
                lVar51 = puVar53[1];
                if (uVar50 < 5) {
                  lVar62 = 0;
                  uVar52 = 0;
                }
                else {
                  if (uVar50 < 0x11) {
                    uVar52 = 0;
                    lVar54 = 0;
                  }
                  else {
                    uVar70 = (ulong)((uint)uVar50 & 0xf);
                    if ((uVar50 & 0xf) == 0) {
                      uVar70 = 0x10;
                    }
                    lVar62 = uVar50 - uVar70;
                    pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                    lVar54 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    uVar52 = uVar50;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar54 = lVar54 + auVar42._0_8_;
                      lVar79 = lVar79 + auVar42._8_8_;
                      lVar81 = lVar81 + auVar42._16_8_;
                      lVar83 = lVar83 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar52 = uVar52 - 0x10;
                    } while (uVar70 != uVar52);
                    auVar19._0_8_ = lVar88 + lVar72 + lVar66 + lVar54;
                    auVar19._8_8_ = lVar89 + lVar85 + lVar80 + lVar79;
                    auVar38._16_8_ = lVar90 + lVar86 + lVar82 + lVar81;
                    auVar38._0_16_ = auVar19;
                    auVar38._24_8_ = lVar91 + lVar87 + lVar84 + lVar83;
                    auVar3 = vpaddq_avx(auVar19,auVar38._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar52 = auVar3._0_8_;
                    lVar54 = lVar62;
                    if ((uint)uVar70 < 5) goto LAB_00627be1;
                  }
                  uVar70 = (ulong)((uint)uVar50 & 3);
                  if ((uVar50 & 3) == 0) {
                    uVar70 = 4;
                  }
                  lVar62 = uVar50 - uVar70;
                  auVar78 = ZEXT864(uVar52);
                  lVar66 = (uVar70 + lVar54) - uVar50;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + lVar54 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar20._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar20._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar39._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar39._0_16_ = auVar20;
                    auVar39._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar39);
                    pauVar63 = pauVar63 + 1;
                    lVar66 = lVar66 + 4;
                  } while (lVar66 != 0);
                  auVar3 = vpaddq_avx(auVar20,auVar39._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar52 = auVar3._0_8_;
                }
LAB_00627be1:
                lVar54 = uVar50 - lVar62;
                puVar61 = (uint *)(lVar51 + lVar62 * 0x10 + 8);
                do {
                  uVar52 = uVar52 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar54 = lVar54 + -1;
                } while (lVar54 != 0);
              }
              uVar50 = puVar64[2];
              if (uVar50 == 0) {
                uVar70 = 0;
              }
              else {
                lVar51 = puVar64[1];
                if (uVar50 < 5) {
                  lVar62 = 0;
                  uVar70 = 0;
                }
                else {
                  if (uVar50 < 0x11) {
                    uVar70 = 0;
                    lVar54 = 0;
                  }
                  else {
                    uVar73 = (ulong)((uint)uVar50 & 0xf);
                    if ((uVar50 & 0xf) == 0) {
                      uVar73 = 0x10;
                    }
                    lVar62 = uVar50 - uVar73;
                    pauVar63 = (undefined1 (*) [64])(lVar51 + 200);
                    lVar54 = 0;
                    lVar79 = 0;
                    lVar81 = 0;
                    lVar83 = 0;
                    lVar66 = 0;
                    lVar80 = 0;
                    lVar82 = 0;
                    lVar84 = 0;
                    lVar72 = 0;
                    lVar85 = 0;
                    lVar86 = 0;
                    lVar87 = 0;
                    lVar88 = 0;
                    lVar89 = 0;
                    lVar90 = 0;
                    lVar91 = 0;
                    uVar70 = uVar50;
                    do {
                      auVar78 = vpermd_avx512f(auVar92,pauVar63[-3]);
                      auVar77 = vpermd_avx512f(auVar92,pauVar63[-2]);
                      auVar75 = vpermd_avx512f(auVar92,pauVar63[-1]);
                      auVar76 = vpermd_avx512f(auVar92,*pauVar63);
                      auVar42 = vpmovzxdq_avx2(auVar78._0_16_);
                      lVar54 = lVar54 + auVar42._0_8_;
                      lVar79 = lVar79 + auVar42._8_8_;
                      lVar81 = lVar81 + auVar42._16_8_;
                      lVar83 = lVar83 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                      lVar66 = lVar66 + auVar42._0_8_;
                      lVar80 = lVar80 + auVar42._8_8_;
                      lVar82 = lVar82 + auVar42._16_8_;
                      lVar84 = lVar84 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar75._0_16_);
                      lVar72 = lVar72 + auVar42._0_8_;
                      lVar85 = lVar85 + auVar42._8_8_;
                      lVar86 = lVar86 + auVar42._16_8_;
                      lVar87 = lVar87 + auVar42._24_8_;
                      auVar42 = vpmovzxdq_avx2(auVar76._0_16_);
                      lVar88 = lVar88 + auVar42._0_8_;
                      lVar89 = lVar89 + auVar42._8_8_;
                      lVar90 = lVar90 + auVar42._16_8_;
                      lVar91 = lVar91 + auVar42._24_8_;
                      pauVar63 = pauVar63 + 4;
                      uVar70 = uVar70 - 0x10;
                    } while (uVar73 != uVar70);
                    auVar21._0_8_ = lVar88 + lVar72 + lVar66 + lVar54;
                    auVar21._8_8_ = lVar89 + lVar85 + lVar80 + lVar79;
                    auVar40._16_8_ = lVar90 + lVar86 + lVar82 + lVar81;
                    auVar40._0_16_ = auVar21;
                    auVar40._24_8_ = lVar91 + lVar87 + lVar84 + lVar83;
                    auVar3 = vpaddq_avx(auVar21,auVar40._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar70 = auVar3._0_8_;
                    lVar54 = lVar62;
                    if ((uint)uVar73 < 5) goto LAB_00627d61;
                  }
                  uVar73 = (ulong)((uint)uVar50 & 3);
                  if ((uVar50 & 3) == 0) {
                    uVar73 = 4;
                  }
                  lVar62 = uVar50 - uVar73;
                  auVar78 = ZEXT864(uVar70);
                  lVar66 = (uVar73 + lVar54) - uVar50;
                  pauVar63 = (undefined1 (*) [64])(lVar51 + lVar54 * 0x10 + 8);
                  do {
                    auVar77 = vpermd_avx512f(auVar92,*pauVar63);
                    auVar42 = vpmovzxdq_avx2(auVar77._0_16_);
                    auVar22._0_8_ = auVar78._0_8_ + auVar42._0_8_;
                    auVar22._8_8_ = auVar78._8_8_ + auVar42._8_8_;
                    auVar41._16_8_ = auVar78._16_8_ + auVar42._16_8_;
                    auVar41._0_16_ = auVar22;
                    auVar41._24_8_ = auVar78._24_8_ + auVar42._24_8_;
                    auVar78 = ZEXT3264(auVar41);
                    pauVar63 = pauVar63 + 1;
                    lVar66 = lVar66 + 4;
                  } while (lVar66 != 0);
                  auVar3 = vpaddq_avx(auVar22,auVar41._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar70 = auVar3._0_8_;
                }
LAB_00627d61:
                lVar54 = uVar50 - lVar62;
                puVar61 = (uint *)(lVar51 + lVar62 * 0x10 + 8);
                do {
                  uVar70 = uVar70 + *puVar61;
                  puVar61 = puVar61 + 4;
                  lVar54 = lVar54 + -1;
                } while (lVar54 != 0);
              }
              uVar50 = 0;
              bVar74 = uVar70 < uVar52;
              puVar48 = puVar64;
              if (bVar74) {
                puVar48 = puVar53;
              }
              puVar56[2] = puVar48[2];
              uVar2 = puVar48[1];
              *puVar56 = *puVar48;
              puVar56[1] = uVar2;
              puVar64 = puVar64 + (ulong)!bVar74 * 3;
              puVar56 = puVar56 + 3;
              if (puVar64 == puVar58) break;
              uVar50 = (ulong)bVar74;
              puVar53 = puVar53 + uVar50 * 3;
            } while (puVar53 != puVar1);
          }
          (*(code *)PTR_memcpy_00841de0)(puVar56,puVar64,(long)puVar58 - (long)puVar64,uVar50);
          auVar92 = ZEXT1664(_s__00202430);
        }
      }
      uVar50 = uVar60 * 2 + 1;
    } while (1 < uVar65);
LAB_00627dd0:
    uVar65 = 1;
  }
LAB_00627dd6:
  auStack_240[uVar65] = uVar50;
  abStack_283[uVar65 + 1] = bVar59;
  if (param_2 <= uVar57) {
    if ((uVar50 & 1) == 0) {
      quicksort::quicksort::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0);
      return;
    }
    return;
  }
  uVar65 = uVar65 + 1;
  uVar57 = uVar57 + (local_2e8 >> 1);
  uVar50 = local_2e8;
  goto LAB_00626890;
}


// ==== core::slice::sort::stable::quicksort::quicksort::<alloc::vec::Vec<pipeline::Seg>, <[alloc::vec::Vec<pipeline::Seg>]>::sort_by_key<core::cmp::Reverse<u64>, pipeline::events::stage3::{closure#5}>::{closure#0}> @ 00630300 (11600 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,
   <[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,
   pipeline[509596c7b52975b2]::events::stage3::{closure#5}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  long lVar100;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  long lVar102;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  long lVar103;
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  long lVar98;
  long lVar99;
  long lVar101;
  long lVar104;
  long lVar105;
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar106 [32];
  undefined8 uVar107;
  ulong uVar108;
  undefined8 *puVar109;
  undefined8 *puVar110;
  uint *puVar111;
  long lVar112;
  long lVar113;
  ulong uVar114;
  ulong uVar115;
  ulong uVar116;
  ulong uVar117;
  undefined8 *puVar118;
  undefined8 *puVar119;
  long lVar120;
  undefined8 *puVar121;
  ulong uVar122;
  uint uVar123;
  ulong uVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  uint uVar128;
  ulong uVar129;
  ulong uVar130;
  ulong uVar131;
  undefined8 *puVar132;
  long lVar133;
  long lVar134;
  undefined1 (*pauVar135) [64];
  bool bVar136;
  undefined1 auVar137 [64];
  undefined1 auVar138 [64];
  undefined1 auVar139 [64];
  undefined1 auVar140 [64];
  undefined1 auVar141 [64];
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  undefined1 auVar142 [64];
  undefined1 auVar147 [64];
  uint local_98;
  uint local_70;
  
  if (0x20 < param_2) {
    auVar3 = _s__00202430;
LAB_00630389:
    uVar108 = param_2;
LAB_006303a0:
    auVar142 = ZEXT1664(auVar3);
    if (param_5 == 0) {
      drift::sort::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                (param_1,uVar108,param_3,param_4,1);
      return;
    }
    puVar110 = param_1 + (uVar108 >> 3) * 0xc;
    puVar119 = param_1 + (uVar108 >> 3) * 0x15;
    if (uVar108 < 0x40) {
      lVar126 = param_1[1];
      uVar114 = param_1[2];
      uVar128 = (uint)uVar114;
      if (uVar114 == 0) {
        uVar124 = 0;
      }
      else {
        if (uVar114 < 5) {
          lVar127 = 0;
          uVar124 = 0;
        }
        else {
          if (uVar114 < 0x11) {
            uVar124 = 0;
            lVar120 = 0;
          }
          else {
            uVar117 = (ulong)(uVar128 & 0xf);
            if ((uVar114 & 0xf) == 0) {
              uVar117 = 0x10;
            }
            lVar127 = uVar114 - uVar117;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar124 = uVar114;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar124 = uVar124 - 0x10;
            } while (uVar117 != uVar124);
            auVar3._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar3._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar106._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar106._0_16_ = auVar3;
            auVar106._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar3,auVar106._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar124 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar117 < 5) goto LAB_00630541;
          }
          uVar117 = (ulong)(uVar128 & 3);
          if ((uVar114 & 3) == 0) {
            uVar117 = 4;
          }
          lVar127 = uVar114 - uVar117;
          auVar147 = ZEXT864(uVar124);
          lVar112 = (uVar117 + lVar120) - uVar114;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar4._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar4._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar51._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar51._0_16_ = auVar4;
            auVar51._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar51);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar4,auVar51._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar124 = auVar3._0_8_;
        }
LAB_00630541:
        lVar120 = uVar114 - lVar127;
        puVar111 = (uint *)(lVar127 * 0x10 + lVar126 + 8);
        do {
          uVar124 = uVar124 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      lVar120 = puVar110[1];
      uVar117 = puVar110[2];
      uVar123 = (uint)uVar117;
      if (uVar117 == 0) {
        uVar115 = 0;
      }
      else {
        if (uVar117 < 5) {
          lVar133 = 0;
          uVar115 = 0;
        }
        else {
          if (uVar117 < 0x11) {
            uVar115 = 0;
            lVar112 = 0;
          }
          else {
            uVar131 = (ulong)(uVar123 & 0xf);
            if ((uVar117 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar133 = uVar117 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar120 + 200);
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar127 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar115 = uVar117;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar125 = lVar125 + auVar106._0_8_;
              lVar143 = lVar143 + auVar106._8_8_;
              lVar145 = lVar145 + auVar106._16_8_;
              lVar127 = lVar127 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar113 = auVar147._0_8_ + auVar106._0_8_;
              lVar99 = auVar147._8_8_ + auVar106._8_8_;
              lVar101 = auVar147._16_8_ + auVar106._16_8_;
              lVar105 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar98 = auVar141._0_8_ + auVar106._0_8_;
              lVar100 = auVar141._8_8_ + auVar106._8_8_;
              lVar104 = auVar141._16_8_ + auVar106._16_8_;
              lVar103 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
              pauVar135 = pauVar135 + 4;
              uVar115 = uVar115 - 0x10;
            } while (uVar131 != uVar115);
            auVar5._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
            auVar5._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
            auVar52._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
            auVar52._0_16_ = auVar5;
            auVar52._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
            auVar3 = vpaddq_avx(auVar5,auVar52._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
            lVar112 = lVar133;
            if ((uint)uVar131 < 5) goto LAB_006306c1;
          }
          uVar131 = (ulong)(uVar123 & 3);
          if ((uVar117 & 3) == 0) {
            uVar131 = 4;
          }
          lVar133 = uVar117 - uVar131;
          auVar147 = ZEXT864(uVar115);
          lVar125 = (uVar131 + lVar112) - uVar117;
          pauVar135 = (undefined1 (*) [64])(lVar112 * 0x10 + lVar120 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar6._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar6._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar53._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar53._0_16_ = auVar6;
            auVar53._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar53);
            pauVar135 = pauVar135 + 1;
            lVar125 = lVar125 + 4;
          } while (lVar125 != 0);
          auVar3 = vpaddq_avx(auVar6,auVar53._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar115 = auVar3._0_8_;
        }
LAB_006306c1:
        lVar112 = uVar117 - lVar133;
        puVar111 = (uint *)(lVar133 * 0x10 + lVar120 + 8);
        do {
          uVar115 = uVar115 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar112 = lVar112 + -1;
        } while (lVar112 != 0);
      }
      lVar112 = puVar119[1];
      uVar131 = puVar119[2];
      if (uVar114 == 0) {
        uVar129 = 0;
      }
      else {
        if (uVar114 < 5) {
          lVar113 = 0;
          uVar129 = 0;
        }
        else {
          if (uVar114 < 0x11) {
            uVar129 = 0;
            lVar125 = 0;
          }
          else {
            uVar122 = (ulong)(uVar128 & 0xf);
            if ((uVar114 & 0xf) == 0) {
              uVar122 = 0x10;
            }
            lVar113 = uVar114 - uVar122;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar127 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            lVar133 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar129 = uVar114;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar125 = lVar125 + auVar106._0_8_;
              lVar143 = lVar143 + auVar106._8_8_;
              lVar145 = lVar145 + auVar106._16_8_;
              lVar127 = lVar127 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar134 = lVar134 + auVar106._0_8_;
              lVar144 = lVar144 + auVar106._8_8_;
              lVar146 = lVar146 + auVar106._16_8_;
              lVar133 = lVar133 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar98 = auVar147._0_8_ + auVar106._0_8_;
              lVar100 = auVar147._8_8_ + auVar106._8_8_;
              lVar104 = auVar147._16_8_ + auVar106._16_8_;
              lVar103 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar99 = auVar141._0_8_ + auVar106._0_8_;
              lVar101 = auVar141._8_8_ + auVar106._8_8_;
              lVar105 = auVar141._16_8_ + auVar106._16_8_;
              lVar102 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar102,CONCAT816(lVar105,CONCAT88(lVar101,lVar99))));
              pauVar135 = pauVar135 + 4;
              uVar129 = uVar129 - 0x10;
            } while (uVar122 != uVar129);
            auVar7._0_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar7._8_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar54._16_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar54._0_16_ = auVar7;
            auVar54._24_8_ = lVar102 + lVar103 + lVar133 + lVar127;
            auVar3 = vpaddq_avx(auVar7,auVar54._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar129 = auVar3._0_8_;
            lVar125 = lVar113;
            if ((uint)uVar122 < 5) goto LAB_00630851;
          }
          uVar122 = (ulong)(uVar128 & 3);
          if ((uVar114 & 3) == 0) {
            uVar122 = 4;
          }
          lVar113 = uVar114 - uVar122;
          auVar147 = ZEXT864(uVar129);
          lVar134 = (uVar122 + lVar125) - uVar114;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar125 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar8._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar8._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar55._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar55._0_16_ = auVar8;
            auVar55._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar55);
            pauVar135 = pauVar135 + 1;
            lVar134 = lVar134 + 4;
          } while (lVar134 != 0);
          auVar3 = vpaddq_avx(auVar8,auVar55._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar129 = auVar3._0_8_;
        }
LAB_00630851:
        lVar125 = uVar114 - lVar113;
        puVar111 = (uint *)(lVar126 + lVar113 * 0x10 + 8);
        do {
          uVar129 = uVar129 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar125 = lVar125 + -1;
        } while (lVar125 != 0);
      }
      uVar128 = (uint)uVar131;
      if (uVar131 == 0) {
        uVar114 = 0;
      }
      else {
        if (uVar131 < 5) {
          lVar133 = 0;
          uVar114 = 0;
        }
        else {
          if (uVar131 < 0x11) {
            uVar114 = 0;
            lVar126 = 0;
          }
          else {
            uVar122 = (ulong)(uVar128 & 0xf);
            if ((uVar131 & 0xf) == 0) {
              uVar122 = 0x10;
            }
            lVar133 = uVar131 - uVar122;
            pauVar135 = (undefined1 (*) [64])(lVar112 + 200);
            lVar126 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar127 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar114 = uVar131;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar126 = lVar126 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar125 = lVar125 + auVar106._0_8_;
              lVar143 = lVar143 + auVar106._8_8_;
              lVar145 = lVar145 + auVar106._16_8_;
              lVar127 = lVar127 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar113 = auVar147._0_8_ + auVar106._0_8_;
              lVar99 = auVar147._8_8_ + auVar106._8_8_;
              lVar101 = auVar147._16_8_ + auVar106._16_8_;
              lVar105 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar98 = auVar141._0_8_ + auVar106._0_8_;
              lVar100 = auVar141._8_8_ + auVar106._8_8_;
              lVar104 = auVar141._16_8_ + auVar106._16_8_;
              lVar103 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
              pauVar135 = pauVar135 + 4;
              uVar114 = uVar114 - 0x10;
            } while (uVar122 != uVar114);
            auVar9._0_8_ = lVar98 + lVar113 + lVar125 + lVar126;
            auVar9._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
            auVar56._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
            auVar56._0_16_ = auVar9;
            auVar56._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
            auVar3 = vpaddq_avx(auVar9,auVar56._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar114 = auVar3._0_8_;
            lVar126 = lVar133;
            if ((uint)uVar122 < 5) goto LAB_006309d1;
          }
          uVar122 = (ulong)(uVar128 & 3);
          if ((uVar131 & 3) == 0) {
            uVar122 = 4;
          }
          lVar133 = uVar131 - uVar122;
          auVar147 = ZEXT864(uVar114);
          lVar125 = (uVar122 + lVar126) - uVar131;
          pauVar135 = (undefined1 (*) [64])(lVar112 + lVar126 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar10._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar10._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar57._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar57._0_16_ = auVar10;
            auVar57._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar57);
            pauVar135 = pauVar135 + 1;
            lVar125 = lVar125 + 4;
          } while (lVar125 != 0);
          auVar3 = vpaddq_avx(auVar10,auVar57._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar114 = auVar3._0_8_;
        }
LAB_006309d1:
        lVar126 = uVar131 - lVar133;
        puVar111 = (uint *)(lVar133 * 0x10 + lVar112 + 8);
        do {
          uVar114 = uVar114 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar126 = lVar126 + -1;
        } while (lVar126 != 0);
      }
      puVar109 = param_1;
      if (uVar114 < uVar129 == uVar115 < uVar124) {
        if (uVar117 == 0) {
          uVar114 = 0;
        }
        else {
          if (uVar117 < 5) {
            lVar133 = 0;
            uVar114 = 0;
          }
          else {
            if (uVar117 < 0x11) {
              uVar114 = 0;
              lVar126 = 0;
            }
            else {
              uVar129 = (ulong)(uVar123 & 0xf);
              if ((uVar117 & 0xf) == 0) {
                uVar129 = 0x10;
              }
              lVar133 = uVar117 - uVar129;
              pauVar135 = (undefined1 (*) [64])(lVar120 + 200);
              lVar126 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar127 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar114 = uVar117;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar126 = lVar126 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar125 = lVar125 + auVar106._0_8_;
                lVar143 = lVar143 + auVar106._8_8_;
                lVar145 = lVar145 + auVar106._16_8_;
                lVar127 = lVar127 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar113 = auVar147._0_8_ + auVar106._0_8_;
                lVar99 = auVar147._8_8_ + auVar106._8_8_;
                lVar101 = auVar147._16_8_ + auVar106._16_8_;
                lVar105 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar98 = auVar141._0_8_ + auVar106._0_8_;
                lVar100 = auVar141._8_8_ + auVar106._8_8_;
                lVar104 = auVar141._16_8_ + auVar106._16_8_;
                lVar103 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
                pauVar135 = pauVar135 + 4;
                uVar114 = uVar114 - 0x10;
              } while (uVar129 != uVar114);
              auVar11._0_8_ = lVar98 + lVar113 + lVar125 + lVar126;
              auVar11._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
              auVar58._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
              auVar58._0_16_ = auVar11;
              auVar58._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
              auVar3 = vpaddq_avx(auVar11,auVar58._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar114 = auVar3._0_8_;
              lVar126 = lVar133;
              if ((uint)uVar129 < 5) goto LAB_00630b71;
            }
            uVar129 = (ulong)(uVar123 & 3);
            if ((uVar117 & 3) == 0) {
              uVar129 = 4;
            }
            lVar133 = uVar117 - uVar129;
            auVar147 = ZEXT864(uVar114);
            lVar125 = (uVar129 + lVar126) - uVar117;
            pauVar135 = (undefined1 (*) [64])(lVar126 * 0x10 + lVar120 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar12._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar12._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar59._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar59._0_16_ = auVar12;
              auVar59._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar59);
              pauVar135 = pauVar135 + 1;
              lVar125 = lVar125 + 4;
            } while (lVar125 != 0);
            auVar3 = vpaddq_avx(auVar12,auVar59._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar114 = auVar3._0_8_;
          }
LAB_00630b71:
          lVar126 = uVar117 - lVar133;
          puVar111 = (uint *)(lVar133 * 0x10 + lVar120 + 8);
          do {
            uVar114 = uVar114 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar126 = lVar126 + -1;
          } while (lVar126 != 0);
        }
        if (uVar131 == 0) {
          uVar117 = 0;
        }
        else {
          if (uVar131 < 5) {
            lVar127 = 0;
            uVar117 = 0;
          }
          else {
            if (uVar131 < 0x11) {
              uVar117 = 0;
              lVar126 = 0;
            }
            else {
              uVar129 = (ulong)(uVar128 & 0xf);
              if ((uVar131 & 0xf) == 0) {
                uVar129 = 0x10;
              }
              lVar127 = uVar131 - uVar129;
              pauVar135 = (undefined1 (*) [64])(lVar112 + 200);
              lVar126 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar120 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar117 = uVar131;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar126 = lVar126 + auVar106._0_8_;
                lVar125 = lVar125 + auVar106._8_8_;
                lVar143 = lVar143 + auVar106._16_8_;
                lVar145 = lVar145 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar120 = lVar120 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar133 = auVar147._0_8_ + auVar106._0_8_;
                lVar98 = auVar147._8_8_ + auVar106._8_8_;
                lVar100 = auVar147._16_8_ + auVar106._16_8_;
                lVar104 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar113 = auVar141._0_8_ + auVar106._0_8_;
                lVar99 = auVar141._8_8_ + auVar106._8_8_;
                lVar101 = auVar141._16_8_ + auVar106._16_8_;
                lVar105 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                pauVar135 = pauVar135 + 4;
                uVar117 = uVar117 - 0x10;
              } while (uVar129 != uVar117);
              auVar13._0_8_ = lVar113 + lVar133 + lVar120 + lVar126;
              auVar13._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
              auVar60._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
              auVar60._0_16_ = auVar13;
              auVar60._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
              auVar3 = vpaddq_avx(auVar13,auVar60._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar117 = auVar3._0_8_;
              lVar126 = lVar127;
              if ((uint)uVar129 < 5) goto LAB_00630cd1;
            }
            uVar129 = (ulong)(uVar128 & 3);
            if ((uVar131 & 3) == 0) {
              uVar129 = 4;
            }
            lVar127 = uVar131 - uVar129;
            auVar147 = ZEXT864(uVar117);
            lVar120 = (uVar129 + lVar126) - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar112 + lVar126 * 0x10 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar14._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar14._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar61._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar61._0_16_ = auVar14;
              auVar61._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar61);
              pauVar135 = pauVar135 + 1;
              lVar120 = lVar120 + 4;
            } while (lVar120 != 0);
            auVar3 = vpaddq_avx(auVar14,auVar61._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar117 = auVar3._0_8_;
          }
LAB_00630cd1:
          lVar126 = uVar131 - lVar127;
          puVar111 = (uint *)(lVar127 * 0x10 + lVar112 + 8);
          do {
            uVar117 = uVar117 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar126 = lVar126 + -1;
          } while (lVar126 != 0);
        }
        puVar109 = puVar110;
        if (uVar117 < uVar114 != uVar115 < uVar124) {
          puVar109 = puVar119;
        }
      }
    }
    else {
      puVar109 = (undefined8 *)
                 shared::pivot::median3_rec::
                 <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                           ();
      auVar142 = ZEXT1664(_s__00202430);
    }
    param_5 = param_5 + -1;
    uVar114 = ((ulong)((long)puVar109 - (long)param_1) >> 3) * -0x5555555555555555;
    if (param_6 != 0) {
      uVar124 = *(ulong *)(param_6 + 0x10);
      if (uVar124 == 0) {
        uVar117 = 0;
      }
      else {
        lVar126 = *(long *)(param_6 + 8);
        if (uVar124 < 5) {
          lVar127 = 0;
          uVar117 = 0;
        }
        else {
          if (uVar124 < 0x11) {
            uVar117 = 0;
            lVar120 = 0;
          }
          else {
            uVar115 = (ulong)((uint)uVar124 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar115 = 0x10;
            }
            lVar127 = uVar124 - uVar115;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar117 = uVar124;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar117 = uVar117 - 0x10;
            } while (uVar115 != uVar117);
            auVar15._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar15._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar62._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar62._0_16_ = auVar15;
            auVar62._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar15,auVar62._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar117 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar115 < 5) goto LAB_00630ea1;
          }
          uVar115 = (ulong)((uint)uVar124 & 3);
          if ((uVar124 & 3) == 0) {
            uVar115 = 4;
          }
          lVar127 = uVar124 - uVar115;
          auVar147 = ZEXT864(uVar117);
          lVar112 = (uVar115 + lVar120) - uVar124;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar16._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar16._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar63._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar63._0_16_ = auVar16;
            auVar63._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar63);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar16,auVar63._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar117 = auVar3._0_8_;
        }
LAB_00630ea1:
        lVar120 = uVar124 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar117 = uVar117 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      uVar124 = puVar109[2];
      if (uVar124 == 0) {
        uVar115 = 0;
      }
      else {
        lVar126 = puVar109[1];
        if (uVar124 < 5) {
          lVar127 = 0;
          uVar115 = 0;
        }
        else {
          if (uVar124 < 0x11) {
            uVar115 = 0;
            lVar120 = 0;
          }
          else {
            uVar131 = (ulong)((uint)uVar124 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar127 = uVar124 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar115 = uVar124;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar115 = uVar115 - 0x10;
            } while (uVar131 != uVar115);
            auVar17._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar17._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar64._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar64._0_16_ = auVar17;
            auVar64._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar17,auVar64._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar131 < 5) goto LAB_00631011;
          }
          uVar131 = (ulong)((uint)uVar124 & 3);
          if ((uVar124 & 3) == 0) {
            uVar131 = 4;
          }
          lVar127 = uVar124 - uVar131;
          auVar147 = ZEXT864(uVar115);
          lVar112 = (uVar131 + lVar120) - uVar124;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar18._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar18._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar65._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar65._0_16_ = auVar18;
            auVar65._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar65);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar18,auVar65._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar115 = auVar3._0_8_;
        }
LAB_00631011:
        lVar120 = uVar124 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar115 = uVar115 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      if (uVar117 <= uVar115) goto LAB_00631600;
    }
    if (uVar108 <= param_4) {
      puVar119 = param_3 + uVar108 * 3;
      param_2 = 0;
      puVar110 = param_1;
      puVar118 = puVar119;
      uVar124 = uVar114;
      do {
        for (; puVar110 < param_1 + uVar124 * 3; puVar110 = puVar110 + 3) {
          uVar117 = puVar110[2];
          if (uVar117 == 0) {
            uVar115 = 0;
          }
          else {
            lVar126 = puVar110[1];
            if (uVar117 < 5) {
              lVar127 = 0;
              uVar115 = 0;
            }
            else {
              if (uVar117 < 0x11) {
                uVar115 = 0;
                lVar120 = 0;
              }
              else {
                uVar131 = (ulong)((uint)uVar117 & 0xf);
                if ((uVar117 & 0xf) == 0) {
                  uVar131 = 0x10;
                }
                lVar127 = uVar117 - uVar131;
                pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
                lVar120 = 0;
                lVar125 = 0;
                lVar143 = 0;
                lVar145 = 0;
                lVar112 = 0;
                lVar134 = 0;
                lVar144 = 0;
                lVar146 = 0;
                auVar147 = ZEXT1664((undefined1  [16])0x0);
                auVar141 = ZEXT1664((undefined1  [16])0x0);
                uVar115 = uVar117;
                do {
                  auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                  auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                  auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                  auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                  auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                  lVar120 = lVar120 + auVar106._0_8_;
                  lVar125 = lVar125 + auVar106._8_8_;
                  lVar143 = lVar143 + auVar106._16_8_;
                  lVar145 = lVar145 + auVar106._24_8_;
                  auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                  lVar112 = lVar112 + auVar106._0_8_;
                  lVar134 = lVar134 + auVar106._8_8_;
                  lVar144 = lVar144 + auVar106._16_8_;
                  lVar146 = lVar146 + auVar106._24_8_;
                  auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                  lVar133 = auVar147._0_8_ + auVar106._0_8_;
                  lVar98 = auVar147._8_8_ + auVar106._8_8_;
                  lVar100 = auVar147._16_8_ + auVar106._16_8_;
                  lVar104 = auVar147._24_8_ + auVar106._24_8_;
                  auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133)))
                                     );
                  auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                  lVar113 = auVar141._0_8_ + auVar106._0_8_;
                  lVar99 = auVar141._8_8_ + auVar106._8_8_;
                  lVar101 = auVar141._16_8_ + auVar106._16_8_;
                  lVar105 = auVar141._24_8_ + auVar106._24_8_;
                  auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113)))
                                     );
                  pauVar135 = pauVar135 + 4;
                  uVar115 = uVar115 - 0x10;
                } while (uVar131 != uVar115);
                auVar19._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
                auVar19._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
                auVar66._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
                auVar66._0_16_ = auVar19;
                auVar66._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
                auVar3 = vpaddq_avx(auVar19,auVar66._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar115 = auVar3._0_8_;
                lVar120 = lVar127;
                if ((uint)uVar131 < 5) goto LAB_00631221;
              }
              uVar131 = (ulong)((uint)uVar117 & 3);
              if ((uVar117 & 3) == 0) {
                uVar131 = 4;
              }
              lVar127 = uVar117 - uVar131;
              auVar147 = ZEXT864(uVar115);
              lVar112 = (uVar131 + lVar120) - uVar117;
              pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
              do {
                auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                auVar20._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                auVar20._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                auVar67._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                auVar67._0_16_ = auVar20;
                auVar67._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(auVar67);
                pauVar135 = pauVar135 + 1;
                lVar112 = lVar112 + 4;
              } while (lVar112 != 0);
              auVar3 = vpaddq_avx(auVar20,auVar67._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar115 = auVar3._0_8_;
            }
LAB_00631221:
            lVar120 = uVar117 - lVar127;
            puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
            do {
              uVar115 = uVar115 + *puVar111;
              puVar111 = puVar111 + 4;
              lVar120 = lVar120 + -1;
            } while (lVar120 != 0);
          }
          uVar117 = puVar109[2];
          if (uVar117 == 0) {
            uVar131 = 0;
          }
          else {
            lVar126 = puVar109[1];
            if (uVar117 < 5) {
              lVar127 = 0;
              uVar131 = 0;
            }
            else {
              if (uVar117 < 0x11) {
                uVar131 = 0;
                lVar120 = 0;
              }
              else {
                uVar129 = (ulong)((uint)uVar117 & 0xf);
                if ((uVar117 & 0xf) == 0) {
                  uVar129 = 0x10;
                }
                lVar127 = uVar117 - uVar129;
                pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
                lVar120 = 0;
                lVar125 = 0;
                lVar143 = 0;
                lVar145 = 0;
                lVar112 = 0;
                lVar134 = 0;
                lVar144 = 0;
                lVar146 = 0;
                auVar147 = ZEXT1664((undefined1  [16])0x0);
                auVar141 = ZEXT1664((undefined1  [16])0x0);
                uVar131 = uVar117;
                do {
                  auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                  auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                  auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                  auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                  auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                  lVar120 = lVar120 + auVar106._0_8_;
                  lVar125 = lVar125 + auVar106._8_8_;
                  lVar143 = lVar143 + auVar106._16_8_;
                  lVar145 = lVar145 + auVar106._24_8_;
                  auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                  lVar112 = lVar112 + auVar106._0_8_;
                  lVar134 = lVar134 + auVar106._8_8_;
                  lVar144 = lVar144 + auVar106._16_8_;
                  lVar146 = lVar146 + auVar106._24_8_;
                  auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                  lVar133 = auVar147._0_8_ + auVar106._0_8_;
                  lVar98 = auVar147._8_8_ + auVar106._8_8_;
                  lVar100 = auVar147._16_8_ + auVar106._16_8_;
                  lVar104 = auVar147._24_8_ + auVar106._24_8_;
                  auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133)))
                                     );
                  auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                  lVar113 = auVar141._0_8_ + auVar106._0_8_;
                  lVar99 = auVar141._8_8_ + auVar106._8_8_;
                  lVar101 = auVar141._16_8_ + auVar106._16_8_;
                  lVar105 = auVar141._24_8_ + auVar106._24_8_;
                  auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113)))
                                     );
                  pauVar135 = pauVar135 + 4;
                  uVar131 = uVar131 - 0x10;
                } while (uVar129 != uVar131);
                auVar21._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
                auVar21._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
                auVar68._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
                auVar68._0_16_ = auVar21;
                auVar68._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
                auVar3 = vpaddq_avx(auVar21,auVar68._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar131 = auVar3._0_8_;
                lVar120 = lVar127;
                if ((uint)uVar129 < 5) goto LAB_006313a2;
              }
              uVar129 = (ulong)((uint)uVar117 & 3);
              if ((uVar117 & 3) == 0) {
                uVar129 = 4;
              }
              lVar127 = uVar117 - uVar129;
              auVar147 = ZEXT864(uVar131);
              lVar112 = (uVar129 + lVar120) - uVar117;
              pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
              do {
                auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                auVar22._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                auVar22._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                auVar69._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                auVar69._0_16_ = auVar22;
                auVar69._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(auVar69);
                pauVar135 = pauVar135 + 1;
                lVar112 = lVar112 + 4;
              } while (lVar112 != 0);
              auVar3 = vpaddq_avx(auVar22,auVar69._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar131 = auVar3._0_8_;
            }
LAB_006313a2:
            lVar120 = uVar117 - lVar127;
            puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
            do {
              uVar131 = uVar131 + *puVar111;
              puVar111 = puVar111 + 4;
              lVar120 = lVar120 + -1;
            } while (lVar120 != 0);
          }
          puVar118 = puVar118 + -3;
          puVar121 = puVar118;
          if (uVar131 < uVar115) {
            puVar121 = param_3;
          }
          uVar1 = *puVar110;
          uVar107 = puVar110[1];
          puVar121[param_2 * 3 + 2] = puVar110[2];
          puVar121[param_2 * 3] = uVar1;
          (puVar121 + param_2 * 3)[1] = uVar107;
          param_2 = param_2 + (uVar131 < uVar115);
        }
        if (uVar124 == uVar108) goto LAB_00631410;
        puVar118[param_2 * 3 + -1] = puVar110[2];
        uVar1 = puVar110[1];
        puVar118[param_2 * 3 + -3] = *puVar110;
        (puVar118 + param_2 * 3 + -3)[1] = uVar1;
        puVar118 = puVar118 + -3;
        puVar110 = puVar110 + 3;
        uVar124 = uVar108;
      } while( true );
    }
    goto LAB_00633147;
  }
LAB_0063031f:
  puVar110 = param_1;
LAB_00630322:
  if (1 < param_2) {
    uVar108 = param_2 >> 1;
    puVar109 = puVar110 + uVar108 * 3;
    puVar119 = param_3 + uVar108 * 3;
    if (param_2 < 8) {
      param_3[2] = puVar110[2];
      uVar1 = puVar110[1];
      *param_3 = *puVar110;
      param_3[1] = uVar1;
      puVar119[2] = puVar109[2];
      uVar1 = puVar109[1];
      *puVar119 = *puVar109;
      puVar119[1] = uVar1;
      uVar114 = 1;
    }
    else {
      shared::smallsort::sort4_stable::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                (puVar110,param_3);
      shared::smallsort::sort4_stable::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
                ();
      uVar114 = 4;
    }
    if (uVar114 < uVar108) {
      auVar142 = ZEXT1664(_s__00202430);
      uVar124 = uVar114;
      do {
        uVar1 = (puVar110 + uVar124 * 3)[1];
        param_3[uVar124 * 3] = puVar110[uVar124 * 3];
        (param_3 + uVar124 * 3)[1] = uVar1;
        uVar117 = puVar110[uVar124 * 3 + 2];
        param_3[uVar124 * 3 + 2] = uVar117;
        lVar126 = param_3[uVar124 * 3 + 1];
        uVar128 = (uint)uVar117;
        if (uVar117 == 0) {
          uVar115 = 0;
        }
        else {
          if (uVar117 < 5) {
            lVar127 = 0;
            uVar115 = 0;
          }
          else {
            if (uVar117 < 0x11) {
              uVar115 = 0;
              lVar120 = 0;
            }
            else {
              uVar131 = (ulong)(uVar128 & 0xf);
              if ((uVar117 & 0xf) == 0) {
                uVar131 = 0x10;
              }
              lVar127 = uVar117 - uVar131;
              pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
              lVar120 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar112 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar115 = uVar117;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar120 = lVar120 + auVar106._0_8_;
                lVar125 = lVar125 + auVar106._8_8_;
                lVar143 = lVar143 + auVar106._16_8_;
                lVar145 = lVar145 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar112 = lVar112 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar133 = auVar147._0_8_ + auVar106._0_8_;
                lVar98 = auVar147._8_8_ + auVar106._8_8_;
                lVar100 = auVar147._16_8_ + auVar106._16_8_;
                lVar104 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar113 = auVar141._0_8_ + auVar106._0_8_;
                lVar99 = auVar141._8_8_ + auVar106._8_8_;
                lVar101 = auVar141._16_8_ + auVar106._16_8_;
                lVar105 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                pauVar135 = pauVar135 + 4;
                uVar115 = uVar115 - 0x10;
              } while (uVar131 != uVar115);
              auVar27._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
              auVar27._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
              auVar74._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
              auVar74._0_16_ = auVar27;
              auVar74._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
              auVar3 = vpaddq_avx(auVar27,auVar74._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar115 = auVar3._0_8_;
              lVar120 = lVar127;
              if ((uint)uVar131 < 5) goto LAB_00631dd1;
            }
            uVar131 = (ulong)(uVar128 & 3);
            if ((uVar117 & 3) == 0) {
              uVar131 = 4;
            }
            lVar127 = uVar117 - uVar131;
            auVar147 = ZEXT864(uVar115);
            lVar112 = (uVar131 + lVar120) - uVar117;
            pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar28._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar28._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar75._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar75._0_16_ = auVar28;
              auVar75._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar75);
              pauVar135 = pauVar135 + 1;
              lVar112 = lVar112 + 4;
            } while (lVar112 != 0);
            auVar3 = vpaddq_avx(auVar28,auVar75._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
          }
LAB_00631dd1:
          lVar120 = uVar117 - lVar127;
          puVar111 = (uint *)(lVar127 * 0x10 + lVar126 + 8);
          do {
            uVar115 = uVar115 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar120 = lVar120 + -1;
          } while (lVar120 != 0);
        }
        uVar131 = param_3[uVar124 * 3 + -1];
        if (uVar131 == 0) {
          uVar129 = 0;
        }
        else {
          lVar120 = param_3[uVar124 * 3 + -2];
          if (uVar131 < 5) {
            lVar133 = 0;
            uVar129 = 0;
          }
          else {
            if (uVar131 < 0x11) {
              uVar129 = 0;
              lVar112 = 0;
            }
            else {
              uVar122 = (ulong)((uint)uVar131 & 0xf);
              if ((uVar131 & 0xf) == 0) {
                uVar122 = 0x10;
              }
              lVar133 = uVar131 - uVar122;
              pauVar135 = (undefined1 (*) [64])(lVar120 + 200);
              lVar112 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar127 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar129 = uVar131;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar112 = lVar112 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar125 = lVar125 + auVar106._0_8_;
                lVar143 = lVar143 + auVar106._8_8_;
                lVar145 = lVar145 + auVar106._16_8_;
                lVar127 = lVar127 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar113 = auVar147._0_8_ + auVar106._0_8_;
                lVar99 = auVar147._8_8_ + auVar106._8_8_;
                lVar101 = auVar147._16_8_ + auVar106._16_8_;
                lVar105 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar98 = auVar141._0_8_ + auVar106._0_8_;
                lVar100 = auVar141._8_8_ + auVar106._8_8_;
                lVar104 = auVar141._16_8_ + auVar106._16_8_;
                lVar103 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
                pauVar135 = pauVar135 + 4;
                uVar129 = uVar129 - 0x10;
              } while (uVar122 != uVar129);
              auVar29._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
              auVar29._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
              auVar76._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
              auVar76._0_16_ = auVar29;
              auVar76._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
              auVar3 = vpaddq_avx(auVar29,auVar76._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar129 = auVar3._0_8_;
              lVar112 = lVar133;
              if ((uint)uVar122 < 5) goto LAB_00631f61;
            }
            uVar122 = (ulong)((uint)uVar131 & 3);
            if ((uVar131 & 3) == 0) {
              uVar122 = 4;
            }
            lVar133 = uVar131 - uVar122;
            auVar147 = ZEXT864(uVar129);
            lVar125 = (uVar122 + lVar112) - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar120 + lVar112 * 0x10 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar30._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar30._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar77._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar77._0_16_ = auVar30;
              auVar77._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar77);
              pauVar135 = pauVar135 + 1;
              lVar125 = lVar125 + 4;
            } while (lVar125 != 0);
            auVar3 = vpaddq_avx(auVar30,auVar77._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar129 = auVar3._0_8_;
          }
LAB_00631f61:
          lVar112 = uVar131 - lVar133;
          puVar111 = (uint *)(lVar120 + lVar133 * 0x10 + 8);
          do {
            uVar129 = uVar129 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar112 = lVar112 + -1;
          } while (lVar112 != 0);
        }
        if (uVar129 < uVar115) {
          puVar118 = param_3 + uVar124 * 3;
          uVar1 = *puVar118;
          if (uVar117 == 0) {
            puVar121 = puVar118 + -3;
            puVar118[2] = puVar118[-1];
            *puVar118 = puVar118[-3];
            puVar118[1] = puVar118[-2];
          }
          else {
            uVar115 = (ulong)(uVar128 & 0xf);
            if ((uVar117 & 0xf) == 0) {
              uVar115 = 0x10;
            }
            lVar120 = uVar117 - uVar115;
            uVar131 = (ulong)(uVar128 & 3);
            if ((uVar117 & 3) == 0) {
              uVar131 = 4;
            }
            do {
              puVar121 = puVar118 + -3;
              puVar118[2] = puVar118[-1];
              *puVar118 = puVar118[-3];
              puVar118[1] = puVar118[-2];
              if (puVar121 == param_3) {
                puVar121 = param_3;
                break;
              }
              if (uVar117 < 5) {
                uVar129 = 0;
                lVar112 = 0;
              }
              else {
                if (uVar117 < 0x11) {
                  uVar129 = 0;
                  lVar112 = 0;
                }
                else {
                  lVar112 = 0;
                  lVar134 = 0;
                  lVar144 = 0;
                  lVar146 = 0;
                  lVar125 = 0;
                  lVar143 = 0;
                  lVar145 = 0;
                  lVar127 = 0;
                  auVar147 = ZEXT1664((undefined1  [16])0x0);
                  auVar141 = ZEXT1664((undefined1  [16])0x0);
                  lVar133 = lVar120;
                  pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
                  do {
                    auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                    auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                    auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                    auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                    auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                    lVar112 = lVar112 + auVar106._0_8_;
                    lVar134 = lVar134 + auVar106._8_8_;
                    lVar144 = lVar144 + auVar106._16_8_;
                    lVar146 = lVar146 + auVar106._24_8_;
                    auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                    lVar125 = lVar125 + auVar106._0_8_;
                    lVar143 = lVar143 + auVar106._8_8_;
                    lVar145 = lVar145 + auVar106._16_8_;
                    lVar127 = lVar127 + auVar106._24_8_;
                    auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                    lVar113 = auVar147._0_8_ + auVar106._0_8_;
                    lVar99 = auVar147._8_8_ + auVar106._8_8_;
                    lVar101 = auVar147._16_8_ + auVar106._16_8_;
                    lVar105 = auVar147._24_8_ + auVar106._24_8_;
                    auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113)
                                                                   )));
                    auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                    lVar98 = auVar141._0_8_ + auVar106._0_8_;
                    lVar100 = auVar141._8_8_ + auVar106._8_8_;
                    lVar104 = auVar141._16_8_ + auVar106._16_8_;
                    lVar103 = auVar141._24_8_ + auVar106._24_8_;
                    auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98)
                                                                   )));
                    pauVar135 = pauVar135 + 4;
                    lVar133 = lVar133 + -0x10;
                  } while (lVar133 != 0);
                  auVar31._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
                  auVar31._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
                  auVar78._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
                  auVar78._0_16_ = auVar31;
                  auVar78._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
                  auVar3 = vpaddq_avx(auVar31,auVar78._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar129 = auVar3._0_8_;
                  local_70 = (uint)uVar115;
                  lVar112 = lVar120;
                  if (local_70 < 5) goto LAB_00632136;
                }
                auVar147 = ZEXT864(uVar129);
                lVar125 = lVar112 + (uVar131 - uVar117);
                pauVar135 = (undefined1 (*) [64])(lVar112 * 0x10 + lVar126 + 8);
                do {
                  auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                  auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                  auVar32._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                  auVar32._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                  auVar79._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                  auVar79._0_16_ = auVar32;
                  auVar79._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                  auVar147 = ZEXT3264(auVar79);
                  pauVar135 = pauVar135 + 1;
                  lVar125 = lVar125 + 4;
                } while (lVar125 != 0);
                auVar3 = vpaddq_avx(auVar32,auVar79._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar129 = auVar3._0_8_;
                lVar112 = uVar117 - uVar131;
              }
LAB_00632136:
              lVar125 = puVar118[-5];
              uVar122 = puVar118[-4];
              lVar134 = uVar117 - lVar112;
              puVar111 = (uint *)(lVar112 * 0x10 + lVar126 + 8);
              do {
                uVar129 = uVar129 + *puVar111;
                puVar111 = puVar111 + 4;
                lVar134 = lVar134 + -1;
              } while (lVar134 != 0);
              if (uVar122 == 0) {
                uVar116 = 0;
              }
              else {
                if (uVar122 < 5) {
                  lVar113 = 0;
                  uVar116 = 0;
                }
                else {
                  if (uVar122 < 0x11) {
                    uVar116 = 0;
                    lVar112 = 0;
                  }
                  else {
                    uVar130 = (ulong)((uint)uVar122 & 0xf);
                    if ((uVar122 & 0xf) == 0) {
                      uVar130 = 0x10;
                    }
                    lVar113 = uVar122 - uVar130;
                    pauVar135 = (undefined1 (*) [64])(lVar125 + 200);
                    lVar112 = 0;
                    lVar143 = 0;
                    lVar145 = 0;
                    lVar127 = 0;
                    lVar134 = 0;
                    lVar144 = 0;
                    lVar146 = 0;
                    lVar133 = 0;
                    auVar147 = ZEXT1664((undefined1  [16])0x0);
                    auVar141 = ZEXT1664((undefined1  [16])0x0);
                    uVar116 = uVar122;
                    do {
                      auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                      auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                      auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                      auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                      auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                      lVar112 = lVar112 + auVar106._0_8_;
                      lVar143 = lVar143 + auVar106._8_8_;
                      lVar145 = lVar145 + auVar106._16_8_;
                      lVar127 = lVar127 + auVar106._24_8_;
                      auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                      lVar134 = lVar134 + auVar106._0_8_;
                      lVar144 = lVar144 + auVar106._8_8_;
                      lVar146 = lVar146 + auVar106._16_8_;
                      lVar133 = lVar133 + auVar106._24_8_;
                      auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                      lVar98 = auVar147._0_8_ + auVar106._0_8_;
                      lVar100 = auVar147._8_8_ + auVar106._8_8_;
                      lVar104 = auVar147._16_8_ + auVar106._16_8_;
                      lVar103 = auVar147._24_8_ + auVar106._24_8_;
                      auVar147 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,
                                                  lVar98))));
                      auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                      lVar99 = auVar141._0_8_ + auVar106._0_8_;
                      lVar101 = auVar141._8_8_ + auVar106._8_8_;
                      lVar105 = auVar141._16_8_ + auVar106._16_8_;
                      lVar102 = auVar141._24_8_ + auVar106._24_8_;
                      auVar141 = ZEXT3264(CONCAT824(lVar102,CONCAT816(lVar105,CONCAT88(lVar101,
                                                  lVar99))));
                      pauVar135 = pauVar135 + 4;
                      uVar116 = uVar116 - 0x10;
                    } while (uVar130 != uVar116);
                    auVar33._0_8_ = lVar99 + lVar98 + lVar134 + lVar112;
                    auVar33._8_8_ = lVar101 + lVar100 + lVar144 + lVar143;
                    auVar80._16_8_ = lVar105 + lVar104 + lVar146 + lVar145;
                    auVar80._0_16_ = auVar33;
                    auVar80._24_8_ = lVar102 + lVar103 + lVar133 + lVar127;
                    auVar3 = vpaddq_avx(auVar33,auVar80._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar116 = auVar3._0_8_;
                    lVar112 = lVar113;
                    if ((uint)uVar130 < 5) goto LAB_006322a6;
                  }
                  uVar130 = (ulong)((uint)uVar122 & 3);
                  if ((uVar122 & 3) == 0) {
                    uVar130 = 4;
                  }
                  lVar113 = uVar122 - uVar130;
                  auVar147 = ZEXT864(uVar116);
                  lVar134 = (uVar130 + lVar112) - uVar122;
                  pauVar135 = (undefined1 (*) [64])(lVar125 + lVar112 * 0x10 + 8);
                  do {
                    auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                    auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                    auVar34._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                    auVar34._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                    auVar81._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                    auVar81._0_16_ = auVar34;
                    auVar81._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                    auVar147 = ZEXT3264(auVar81);
                    pauVar135 = pauVar135 + 1;
                    lVar134 = lVar134 + 4;
                  } while (lVar134 != 0);
                  auVar3 = vpaddq_avx(auVar34,auVar81._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar116 = auVar3._0_8_;
                }
LAB_006322a6:
                lVar112 = uVar122 - lVar113;
                puVar111 = (uint *)(lVar125 + lVar113 * 0x10 + 8);
                do {
                  uVar116 = uVar116 + *puVar111;
                  puVar111 = puVar111 + 4;
                  lVar112 = lVar112 + -1;
                } while (lVar112 != 0);
              }
              puVar118 = puVar121;
            } while (uVar116 < uVar129);
          }
          *puVar121 = uVar1;
          puVar121[1] = lVar126;
          puVar121[2] = uVar117;
        }
        uVar124 = uVar124 + 1;
      } while (uVar124 != uVar108);
    }
    if (uVar114 < param_2 - uVar108) {
      auVar142 = ZEXT1664(_s__00202430);
      do {
        uVar1 = (puVar109 + uVar114 * 3)[1];
        puVar119[uVar114 * 3] = puVar109[uVar114 * 3];
        (puVar119 + uVar114 * 3)[1] = uVar1;
        uVar124 = puVar109[uVar114 * 3 + 2];
        puVar119[uVar114 * 3 + 2] = uVar124;
        lVar126 = puVar119[uVar114 * 3 + 1];
        uVar128 = (uint)uVar124;
        if (uVar124 == 0) {
          uVar117 = 0;
        }
        else {
          if (uVar124 < 5) {
            lVar127 = 0;
            uVar117 = 0;
          }
          else {
            if (uVar124 < 0x11) {
              uVar117 = 0;
              lVar120 = 0;
            }
            else {
              uVar115 = (ulong)(uVar128 & 0xf);
              if ((uVar124 & 0xf) == 0) {
                uVar115 = 0x10;
              }
              lVar127 = uVar124 - uVar115;
              pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
              lVar120 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar112 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar117 = uVar124;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar120 = lVar120 + auVar106._0_8_;
                lVar125 = lVar125 + auVar106._8_8_;
                lVar143 = lVar143 + auVar106._16_8_;
                lVar145 = lVar145 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar112 = lVar112 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar133 = auVar147._0_8_ + auVar106._0_8_;
                lVar98 = auVar147._8_8_ + auVar106._8_8_;
                lVar100 = auVar147._16_8_ + auVar106._16_8_;
                lVar104 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar113 = auVar141._0_8_ + auVar106._0_8_;
                lVar99 = auVar141._8_8_ + auVar106._8_8_;
                lVar101 = auVar141._16_8_ + auVar106._16_8_;
                lVar105 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                pauVar135 = pauVar135 + 4;
                uVar117 = uVar117 - 0x10;
              } while (uVar115 != uVar117);
              auVar35._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
              auVar35._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
              auVar82._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
              auVar82._0_16_ = auVar35;
              auVar82._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
              auVar3 = vpaddq_avx(auVar35,auVar82._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar117 = auVar3._0_8_;
              lVar120 = lVar127;
              if ((uint)uVar115 < 5) goto LAB_006324c1;
            }
            uVar115 = (ulong)(uVar128 & 3);
            if ((uVar124 & 3) == 0) {
              uVar115 = 4;
            }
            lVar127 = uVar124 - uVar115;
            auVar147 = ZEXT864(uVar117);
            lVar112 = (uVar115 + lVar120) - uVar124;
            pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar36._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar36._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar83._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar83._0_16_ = auVar36;
              auVar83._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar83);
              pauVar135 = pauVar135 + 1;
              lVar112 = lVar112 + 4;
            } while (lVar112 != 0);
            auVar3 = vpaddq_avx(auVar36,auVar83._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar117 = auVar3._0_8_;
          }
LAB_006324c1:
          lVar120 = uVar124 - lVar127;
          puVar111 = (uint *)(lVar127 * 0x10 + lVar126 + 8);
          do {
            uVar117 = uVar117 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar120 = lVar120 + -1;
          } while (lVar120 != 0);
        }
        uVar115 = puVar119[uVar114 * 3 + -1];
        if (uVar115 == 0) {
          uVar131 = 0;
        }
        else {
          lVar120 = puVar119[uVar114 * 3 + -2];
          if (uVar115 < 5) {
            lVar133 = 0;
            uVar131 = 0;
          }
          else {
            if (uVar115 < 0x11) {
              uVar131 = 0;
              lVar112 = 0;
            }
            else {
              uVar129 = (ulong)((uint)uVar115 & 0xf);
              if ((uVar115 & 0xf) == 0) {
                uVar129 = 0x10;
              }
              lVar133 = uVar115 - uVar129;
              pauVar135 = (undefined1 (*) [64])(lVar120 + 200);
              lVar112 = 0;
              lVar134 = 0;
              lVar144 = 0;
              lVar146 = 0;
              lVar125 = 0;
              lVar143 = 0;
              lVar145 = 0;
              lVar127 = 0;
              auVar147 = ZEXT1664((undefined1  [16])0x0);
              auVar141 = ZEXT1664((undefined1  [16])0x0);
              uVar131 = uVar115;
              do {
                auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                lVar112 = lVar112 + auVar106._0_8_;
                lVar134 = lVar134 + auVar106._8_8_;
                lVar144 = lVar144 + auVar106._16_8_;
                lVar146 = lVar146 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                lVar125 = lVar125 + auVar106._0_8_;
                lVar143 = lVar143 + auVar106._8_8_;
                lVar145 = lVar145 + auVar106._16_8_;
                lVar127 = lVar127 + auVar106._24_8_;
                auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                lVar113 = auVar147._0_8_ + auVar106._0_8_;
                lVar99 = auVar147._8_8_ + auVar106._8_8_;
                lVar101 = auVar147._16_8_ + auVar106._16_8_;
                lVar105 = auVar147._24_8_ + auVar106._24_8_;
                auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
                auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                lVar98 = auVar141._0_8_ + auVar106._0_8_;
                lVar100 = auVar141._8_8_ + auVar106._8_8_;
                lVar104 = auVar141._16_8_ + auVar106._16_8_;
                lVar103 = auVar141._24_8_ + auVar106._24_8_;
                auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
                pauVar135 = pauVar135 + 4;
                uVar131 = uVar131 - 0x10;
              } while (uVar129 != uVar131);
              auVar37._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
              auVar37._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
              auVar84._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
              auVar84._0_16_ = auVar37;
              auVar84._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
              auVar3 = vpaddq_avx(auVar37,auVar84._16_16_);
              auVar4 = vpshufd_avx(auVar3,0xee);
              auVar3 = vpaddq_avx(auVar3,auVar4);
              uVar131 = auVar3._0_8_;
              lVar112 = lVar133;
              if ((uint)uVar129 < 5) goto LAB_00632641;
            }
            uVar129 = (ulong)((uint)uVar115 & 3);
            if ((uVar115 & 3) == 0) {
              uVar129 = 4;
            }
            lVar133 = uVar115 - uVar129;
            auVar147 = ZEXT864(uVar131);
            lVar125 = (uVar129 + lVar112) - uVar115;
            pauVar135 = (undefined1 (*) [64])(lVar120 + lVar112 * 0x10 + 8);
            do {
              auVar141 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
              auVar38._0_8_ = auVar147._0_8_ + auVar106._0_8_;
              auVar38._8_8_ = auVar147._8_8_ + auVar106._8_8_;
              auVar85._16_8_ = auVar147._16_8_ + auVar106._16_8_;
              auVar85._0_16_ = auVar38;
              auVar85._24_8_ = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(auVar85);
              pauVar135 = pauVar135 + 1;
              lVar125 = lVar125 + 4;
            } while (lVar125 != 0);
            auVar3 = vpaddq_avx(auVar38,auVar85._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar131 = auVar3._0_8_;
          }
LAB_00632641:
          lVar112 = uVar115 - lVar133;
          puVar111 = (uint *)(lVar120 + lVar133 * 0x10 + 8);
          do {
            uVar131 = uVar131 + *puVar111;
            puVar111 = puVar111 + 4;
            lVar112 = lVar112 + -1;
          } while (lVar112 != 0);
        }
        if (uVar131 < uVar117) {
          puVar118 = puVar119 + uVar114 * 3;
          uVar1 = *puVar118;
          if (uVar124 == 0) {
            puVar121 = puVar118 + -3;
            puVar118[2] = puVar118[-1];
            *puVar118 = puVar118[-3];
            puVar118[1] = puVar118[-2];
          }
          else {
            uVar117 = (ulong)(uVar128 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar117 = 0x10;
            }
            lVar120 = uVar124 - uVar117;
            uVar115 = (ulong)(uVar128 & 3);
            if ((uVar124 & 3) == 0) {
              uVar115 = 4;
            }
            do {
              puVar121 = puVar118 + -3;
              puVar118[2] = puVar118[-1];
              *puVar118 = puVar118[-3];
              puVar118[1] = puVar118[-2];
              if (puVar121 == puVar119) {
                puVar121 = puVar119;
                break;
              }
              if (uVar124 < 5) {
                uVar131 = 0;
                lVar112 = 0;
              }
              else {
                if (uVar124 < 0x11) {
                  uVar131 = 0;
                  lVar112 = 0;
                }
                else {
                  lVar112 = 0;
                  lVar134 = 0;
                  lVar144 = 0;
                  lVar146 = 0;
                  lVar125 = 0;
                  lVar143 = 0;
                  lVar145 = 0;
                  lVar127 = 0;
                  auVar147 = ZEXT1664((undefined1  [16])0x0);
                  auVar141 = ZEXT1664((undefined1  [16])0x0);
                  lVar133 = lVar120;
                  pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
                  do {
                    auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                    auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                    auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                    auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                    auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                    lVar112 = lVar112 + auVar106._0_8_;
                    lVar134 = lVar134 + auVar106._8_8_;
                    lVar144 = lVar144 + auVar106._16_8_;
                    lVar146 = lVar146 + auVar106._24_8_;
                    auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                    lVar125 = lVar125 + auVar106._0_8_;
                    lVar143 = lVar143 + auVar106._8_8_;
                    lVar145 = lVar145 + auVar106._16_8_;
                    lVar127 = lVar127 + auVar106._24_8_;
                    auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                    lVar113 = auVar147._0_8_ + auVar106._0_8_;
                    lVar99 = auVar147._8_8_ + auVar106._8_8_;
                    lVar101 = auVar147._16_8_ + auVar106._16_8_;
                    lVar105 = auVar147._24_8_ + auVar106._24_8_;
                    auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113)
                                                                   )));
                    auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                    lVar98 = auVar141._0_8_ + auVar106._0_8_;
                    lVar100 = auVar141._8_8_ + auVar106._8_8_;
                    lVar104 = auVar141._16_8_ + auVar106._16_8_;
                    lVar103 = auVar141._24_8_ + auVar106._24_8_;
                    auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98)
                                                                   )));
                    pauVar135 = pauVar135 + 4;
                    lVar133 = lVar133 + -0x10;
                  } while (lVar133 != 0);
                  auVar39._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
                  auVar39._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
                  auVar86._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
                  auVar86._0_16_ = auVar39;
                  auVar86._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
                  auVar3 = vpaddq_avx(auVar39,auVar86._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar131 = auVar3._0_8_;
                  local_98 = (uint)uVar117;
                  lVar112 = lVar120;
                  if (local_98 < 5) goto LAB_00632814;
                }
                auVar147 = ZEXT864(uVar131);
                lVar125 = lVar112 + (uVar115 - uVar124);
                pauVar135 = (undefined1 (*) [64])(lVar112 * 0x10 + lVar126 + 8);
                do {
                  auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                  auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                  auVar40._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                  auVar40._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                  auVar87._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                  auVar87._0_16_ = auVar40;
                  auVar87._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                  auVar147 = ZEXT3264(auVar87);
                  pauVar135 = pauVar135 + 1;
                  lVar125 = lVar125 + 4;
                } while (lVar125 != 0);
                auVar3 = vpaddq_avx(auVar40,auVar87._16_16_);
                auVar4 = vpshufd_avx(auVar3,0xee);
                auVar3 = vpaddq_avx(auVar3,auVar4);
                uVar131 = auVar3._0_8_;
                lVar112 = uVar124 - uVar115;
              }
LAB_00632814:
              lVar125 = puVar118[-5];
              uVar129 = puVar118[-4];
              lVar134 = uVar124 - lVar112;
              puVar111 = (uint *)(lVar112 * 0x10 + lVar126 + 8);
              do {
                uVar131 = uVar131 + *puVar111;
                puVar111 = puVar111 + 4;
                lVar134 = lVar134 + -1;
              } while (lVar134 != 0);
              if (uVar129 == 0) {
                uVar122 = 0;
              }
              else {
                if (uVar129 < 5) {
                  lVar113 = 0;
                  uVar122 = 0;
                }
                else {
                  if (uVar129 < 0x11) {
                    uVar122 = 0;
                    lVar112 = 0;
                  }
                  else {
                    uVar116 = (ulong)((uint)uVar129 & 0xf);
                    if ((uVar129 & 0xf) == 0) {
                      uVar116 = 0x10;
                    }
                    lVar113 = uVar129 - uVar116;
                    pauVar135 = (undefined1 (*) [64])(lVar125 + 200);
                    lVar112 = 0;
                    lVar143 = 0;
                    lVar145 = 0;
                    lVar127 = 0;
                    lVar134 = 0;
                    lVar144 = 0;
                    lVar146 = 0;
                    lVar133 = 0;
                    auVar147 = ZEXT1664((undefined1  [16])0x0);
                    auVar141 = ZEXT1664((undefined1  [16])0x0);
                    uVar122 = uVar129;
                    do {
                      auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
                      auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
                      auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
                      auVar140 = vpermd_avx512f(auVar142,*pauVar135);
                      auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
                      lVar112 = lVar112 + auVar106._0_8_;
                      lVar143 = lVar143 + auVar106._8_8_;
                      lVar145 = lVar145 + auVar106._16_8_;
                      lVar127 = lVar127 + auVar106._24_8_;
                      auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
                      lVar134 = lVar134 + auVar106._0_8_;
                      lVar144 = lVar144 + auVar106._8_8_;
                      lVar146 = lVar146 + auVar106._16_8_;
                      lVar133 = lVar133 + auVar106._24_8_;
                      auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
                      lVar98 = auVar147._0_8_ + auVar106._0_8_;
                      lVar100 = auVar147._8_8_ + auVar106._8_8_;
                      lVar104 = auVar147._16_8_ + auVar106._16_8_;
                      lVar103 = auVar147._24_8_ + auVar106._24_8_;
                      auVar147 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,
                                                  lVar98))));
                      auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
                      lVar99 = auVar141._0_8_ + auVar106._0_8_;
                      lVar101 = auVar141._8_8_ + auVar106._8_8_;
                      lVar105 = auVar141._16_8_ + auVar106._16_8_;
                      lVar102 = auVar141._24_8_ + auVar106._24_8_;
                      auVar141 = ZEXT3264(CONCAT824(lVar102,CONCAT816(lVar105,CONCAT88(lVar101,
                                                  lVar99))));
                      pauVar135 = pauVar135 + 4;
                      uVar122 = uVar122 - 0x10;
                    } while (uVar116 != uVar122);
                    auVar41._0_8_ = lVar99 + lVar98 + lVar134 + lVar112;
                    auVar41._8_8_ = lVar101 + lVar100 + lVar144 + lVar143;
                    auVar88._16_8_ = lVar105 + lVar104 + lVar146 + lVar145;
                    auVar88._0_16_ = auVar41;
                    auVar88._24_8_ = lVar102 + lVar103 + lVar133 + lVar127;
                    auVar3 = vpaddq_avx(auVar41,auVar88._16_16_);
                    auVar4 = vpshufd_avx(auVar3,0xee);
                    auVar3 = vpaddq_avx(auVar3,auVar4);
                    uVar122 = auVar3._0_8_;
                    lVar112 = lVar113;
                    if ((uint)uVar116 < 5) goto LAB_00632981;
                  }
                  uVar116 = (ulong)((uint)uVar129 & 3);
                  if ((uVar129 & 3) == 0) {
                    uVar116 = 4;
                  }
                  lVar113 = uVar129 - uVar116;
                  auVar147 = ZEXT864(uVar122);
                  lVar134 = (uVar116 + lVar112) - uVar129;
                  pauVar135 = (undefined1 (*) [64])(lVar112 * 0x10 + lVar125 + 8);
                  do {
                    auVar141 = vpermd_avx512f(auVar142,*pauVar135);
                    auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
                    auVar42._0_8_ = auVar147._0_8_ + auVar106._0_8_;
                    auVar42._8_8_ = auVar147._8_8_ + auVar106._8_8_;
                    auVar89._16_8_ = auVar147._16_8_ + auVar106._16_8_;
                    auVar89._0_16_ = auVar42;
                    auVar89._24_8_ = auVar147._24_8_ + auVar106._24_8_;
                    auVar147 = ZEXT3264(auVar89);
                    pauVar135 = pauVar135 + 1;
                    lVar134 = lVar134 + 4;
                  } while (lVar134 != 0);
                  auVar3 = vpaddq_avx(auVar42,auVar89._16_16_);
                  auVar4 = vpshufd_avx(auVar3,0xee);
                  auVar3 = vpaddq_avx(auVar3,auVar4);
                  uVar122 = auVar3._0_8_;
                }
LAB_00632981:
                lVar112 = uVar129 - lVar113;
                puVar111 = (uint *)(lVar113 * 0x10 + lVar125 + 8);
                do {
                  uVar122 = uVar122 + *puVar111;
                  puVar111 = puVar111 + 4;
                  lVar112 = lVar112 + -1;
                } while (lVar112 != 0);
              }
              puVar118 = puVar121;
            } while (uVar122 < uVar131);
          }
          *puVar121 = uVar1;
          puVar121[1] = lVar126;
          puVar121[2] = uVar124;
        }
        uVar114 = uVar114 + 1;
      } while (uVar114 != param_2 - uVar108);
    }
    puVar121 = puVar110 + param_2 * 3 + -3;
    puVar118 = param_3 + param_2 * 3 + -3;
    puVar109 = puVar119 + -3;
    uVar114 = 0;
    auVar142 = ZEXT1664(_s__00202430);
    do {
      puVar132 = puVar110;
      uVar124 = puVar119[2];
      if (uVar124 == 0) {
        uVar117 = 0;
      }
      else {
        lVar126 = puVar119[1];
        if (uVar124 < 5) {
          lVar127 = 0;
          uVar117 = 0;
        }
        else {
          if (uVar124 < 0x11) {
            uVar117 = 0;
            lVar120 = 0;
          }
          else {
            uVar115 = (ulong)((uint)uVar124 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar115 = 0x10;
            }
            lVar127 = uVar124 - uVar115;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar117 = uVar124;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar117 = uVar117 - 0x10;
            } while (uVar115 != uVar117);
            auVar43._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar43._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar90._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar90._0_16_ = auVar43;
            auVar90._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar43,auVar90._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar117 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar115 < 5) goto LAB_00632bc1;
          }
          uVar115 = (ulong)((uint)uVar124 & 3);
          if ((uVar124 & 3) == 0) {
            uVar115 = 4;
          }
          lVar127 = uVar124 - uVar115;
          auVar147 = ZEXT864(uVar117);
          lVar112 = (uVar115 + lVar120) - uVar124;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar44._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar44._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar91._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar91._0_16_ = auVar44;
            auVar91._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar91);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar44,auVar91._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar117 = auVar3._0_8_;
        }
LAB_00632bc1:
        lVar120 = uVar124 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar117 = uVar117 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      uVar124 = param_3[2];
      if (uVar124 == 0) {
        uVar115 = 0;
      }
      else {
        lVar126 = param_3[1];
        if (uVar124 < 5) {
          lVar127 = 0;
          uVar115 = 0;
        }
        else {
          if (uVar124 < 0x11) {
            uVar115 = 0;
            lVar120 = 0;
          }
          else {
            uVar131 = (ulong)((uint)uVar124 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar127 = uVar124 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar115 = uVar124;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar115 = uVar115 - 0x10;
            } while (uVar131 != uVar115);
            auVar45._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar45._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar92._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar92._0_16_ = auVar45;
            auVar92._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar45,auVar92._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar131 < 5) goto LAB_00632d41;
          }
          uVar131 = (ulong)((uint)uVar124 & 3);
          if ((uVar124 & 3) == 0) {
            uVar131 = 4;
          }
          lVar127 = uVar124 - uVar131;
          auVar147 = ZEXT864(uVar115);
          lVar112 = (uVar131 + lVar120) - uVar124;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar46._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar46._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar93._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar93._0_16_ = auVar46;
            auVar93._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar93);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar46,auVar93._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar115 = auVar3._0_8_;
        }
LAB_00632d41:
        lVar120 = uVar124 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar115 = uVar115 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      bVar136 = uVar115 < uVar117;
      puVar110 = param_3;
      if (bVar136) {
        puVar110 = puVar119;
      }
      puVar132[2] = puVar110[2];
      uVar1 = puVar110[1];
      *puVar132 = *puVar110;
      puVar132[1] = uVar1;
      uVar124 = puVar118[2];
      lVar126 = puVar109[1];
      uVar117 = puVar109[2];
      if (uVar124 == 0) {
        uVar115 = 0;
      }
      else {
        lVar120 = puVar118[1];
        if (uVar124 < 5) {
          lVar133 = 0;
          uVar115 = 0;
        }
        else {
          if (uVar124 < 0x11) {
            uVar115 = 0;
            lVar112 = 0;
          }
          else {
            uVar131 = (ulong)((uint)uVar124 & 0xf);
            if ((uVar124 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar133 = uVar124 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar120 + 200);
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar127 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar115 = uVar124;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar125 = lVar125 + auVar106._0_8_;
              lVar143 = lVar143 + auVar106._8_8_;
              lVar145 = lVar145 + auVar106._16_8_;
              lVar127 = lVar127 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar113 = auVar147._0_8_ + auVar106._0_8_;
              lVar99 = auVar147._8_8_ + auVar106._8_8_;
              lVar101 = auVar147._16_8_ + auVar106._16_8_;
              lVar105 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar98 = auVar141._0_8_ + auVar106._0_8_;
              lVar100 = auVar141._8_8_ + auVar106._8_8_;
              lVar104 = auVar141._16_8_ + auVar106._16_8_;
              lVar103 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar103,CONCAT816(lVar104,CONCAT88(lVar100,lVar98))));
              pauVar135 = pauVar135 + 4;
              uVar115 = uVar115 - 0x10;
            } while (uVar131 != uVar115);
            auVar47._0_8_ = lVar98 + lVar113 + lVar125 + lVar112;
            auVar47._8_8_ = lVar100 + lVar99 + lVar143 + lVar134;
            auVar94._16_8_ = lVar104 + lVar101 + lVar145 + lVar144;
            auVar94._0_16_ = auVar47;
            auVar94._24_8_ = lVar103 + lVar105 + lVar127 + lVar146;
            auVar3 = vpaddq_avx(auVar47,auVar94._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
            lVar112 = lVar133;
            if ((uint)uVar131 < 5) goto LAB_00632f06;
          }
          uVar131 = (ulong)((uint)uVar124 & 3);
          if ((uVar124 & 3) == 0) {
            uVar131 = 4;
          }
          lVar133 = uVar124 - uVar131;
          auVar147 = ZEXT864(uVar115);
          lVar125 = (uVar131 + lVar112) - uVar124;
          pauVar135 = (undefined1 (*) [64])(lVar120 + lVar112 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar48._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar48._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar95._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar95._0_16_ = auVar48;
            auVar95._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar95);
            pauVar135 = pauVar135 + 1;
            lVar125 = lVar125 + 4;
          } while (lVar125 != 0);
          auVar3 = vpaddq_avx(auVar48,auVar95._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar115 = auVar3._0_8_;
        }
LAB_00632f06:
        lVar112 = uVar124 - lVar133;
        puVar111 = (uint *)(lVar120 + lVar133 * 0x10 + 8);
        do {
          uVar115 = uVar115 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar112 = lVar112 + -1;
        } while (lVar112 != 0);
      }
      if (uVar117 == 0) {
        uVar124 = 0;
      }
      else {
        if (uVar117 < 5) {
          lVar127 = 0;
          uVar124 = 0;
        }
        else {
          if (uVar117 < 0x11) {
            uVar124 = 0;
            lVar120 = 0;
          }
          else {
            uVar131 = (ulong)((uint)uVar117 & 0xf);
            if ((uVar117 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar127 = uVar117 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar124 = uVar117;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar124 = uVar124 - 0x10;
            } while (uVar131 != uVar124);
            auVar49._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar49._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar96._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar96._0_16_ = auVar49;
            auVar96._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar49,auVar96._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar124 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar131 < 5) goto LAB_00633099;
          }
          uVar131 = (ulong)((uint)uVar117 & 3);
          if ((uVar117 & 3) == 0) {
            uVar131 = 4;
          }
          lVar127 = uVar117 - uVar131;
          auVar147 = ZEXT864(uVar124);
          lVar112 = (uVar131 + lVar120) - uVar117;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar50._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar50._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar97._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar97._0_16_ = auVar50;
            auVar97._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar97);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar50,auVar97._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar124 = auVar3._0_8_;
        }
LAB_00633099:
        lVar120 = uVar117 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar124 = uVar124 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      uVar114 = uVar114 + 1;
      puVar119 = puVar119 + (ulong)bVar136 * 3;
      param_3 = param_3 + (ulong)!bVar136 * 3;
      puVar110 = puVar118;
      if (uVar124 < uVar115) {
        puVar110 = puVar109;
      }
      puVar121[2] = puVar110[2];
      uVar1 = puVar110[1];
      *puVar121 = *puVar110;
      puVar121[1] = uVar1;
      puVar118 = puVar118 + ((ulong)(uVar124 < uVar115) - 1) * 3;
      puVar109 = puVar109 + (ulong)(uVar124 < uVar115) * -3;
      puVar121 = puVar121 + -3;
      puVar110 = puVar132 + 3;
    } while (uVar114 != uVar108);
    if ((param_2 & 1) != 0) {
      bVar136 = param_3 < puVar109 + 3;
      puVar110 = puVar119;
      if (bVar136) {
        puVar110 = param_3;
      }
      puVar132[5] = puVar110[2];
      uVar1 = puVar110[1];
      puVar132[3] = *puVar110;
      puVar132[4] = uVar1;
      param_3 = param_3 + (ulong)bVar136 * 3;
      puVar119 = puVar119 + (ulong)!bVar136 * 3;
    }
    if ((param_3 != puVar109 + 3) || (puVar119 != puVar118 + 3)) {
                    /* WARNING: Subroutine does not return */
      shared::smallsort::panic_on_ord_violation();
    }
  }
  return;
LAB_00631410:
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,param_2 * 0x18);
  auVar142 = ZEXT1664(_s__00202430);
  uVar124 = uVar108 - param_2;
  if (uVar124 != 0) {
    if (param_2 - uVar108 < 0xfffffffffffffffd) {
      puVar110 = param_1 + param_2 * 3;
      puVar118 = param_3 + uVar108 * 3 + -3;
      uVar117 = 0;
      do {
        uVar1 = puVar118[2];
        uVar107 = puVar118[1];
        *puVar110 = *puVar118;
        puVar110[1] = uVar107;
        puVar110[2] = uVar1;
        uVar1 = puVar119[(uVar117 ^ 0x1ffffffffffffffe) * 3];
        uVar107 = (puVar119 + (uVar117 ^ 0x1ffffffffffffffe) * 3)[1];
        puVar110[5] = puVar119[(uVar117 ^ 0x1ffffffffffffffe) * 3 + 2];
        puVar110[3] = uVar1;
        puVar110[4] = uVar107;
        puVar110[8] = puVar119[(uVar117 ^ 0x1ffffffffffffffd) * 3 + 2];
        uVar1 = (puVar119 + (uVar117 ^ 0x1ffffffffffffffd) * 3)[1];
        puVar110[6] = puVar119[(uVar117 ^ 0x1ffffffffffffffd) * 3];
        puVar110[7] = uVar1;
        uVar115 = uVar117 + 4;
        uVar1 = (puVar119 + (uVar117 ^ 0x1ffffffffffffffc) * 3)[1];
        puVar110[9] = puVar119[(uVar117 ^ 0x1ffffffffffffffc) * 3];
        puVar110[10] = uVar1;
        puVar110[0xb] = puVar119[(uVar117 ^ 0x1ffffffffffffffc) * 3 + 2];
        puVar110 = puVar110 + 0xc;
        puVar118 = puVar118 + -0xc;
        uVar117 = uVar115;
      } while ((uVar124 & 0xfffffffffffffffc) != uVar115);
      if ((uVar124 & 3) == 0) goto LAB_0063159f;
    }
    else {
      uVar115 = 0;
    }
    lVar126 = param_2 * 0x18 + uVar115 * 0x18;
    puVar119 = param_3 + uVar115 * -3 + uVar108 * 3 + -3;
    lVar120 = 0;
    do {
      uVar1 = *puVar119;
      uVar107 = puVar119[1];
      *(undefined8 *)((long)param_1 + lVar120 + lVar126 + 0x10) = puVar119[2];
      puVar110 = (undefined8 *)((long)param_1 + lVar120 + lVar126);
      *puVar110 = uVar1;
      puVar110[1] = uVar107;
      lVar120 = lVar120 + 0x18;
      puVar119 = puVar119 + -3;
    } while ((ulong)(((uint)uVar124 & 3) << 3) * 3 != lVar120);
  }
LAB_0063159f:
  if (param_2 == 0) goto LAB_00631600;
  if (uVar108 < param_2) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
  }
  <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>,<[alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>]>::sort_by_key<core[62e902411887be45]::cmp::Reverse<u64>,pipeline[509596c7b52975b2]::events::stage3::_closure_5_>::_closure_0_>
            (param_1 + param_2 * 3,uVar124,param_3,param_4);
  uVar108 = param_2;
  auVar3 = _s__00202430;
  if (param_2 < 0x21) goto LAB_0063031f;
  goto LAB_006303a0;
LAB_00631600:
  if (param_4 < uVar108) {
LAB_00633147:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar119 = param_3 + uVar108 * 3;
  uVar124 = 0;
  puVar110 = param_1;
  puVar118 = puVar119;
  do {
    for (; puVar110 < param_1 + uVar114 * 3; puVar110 = puVar110 + 3) {
      uVar117 = puVar109[2];
      if (uVar117 == 0) {
        uVar115 = 0;
      }
      else {
        lVar126 = puVar109[1];
        if (uVar117 < 5) {
          lVar127 = 0;
          uVar115 = 0;
        }
        else {
          if (uVar117 < 0x11) {
            uVar115 = 0;
            lVar120 = 0;
          }
          else {
            uVar131 = (ulong)((uint)uVar117 & 0xf);
            if ((uVar117 & 0xf) == 0) {
              uVar131 = 0x10;
            }
            lVar127 = uVar117 - uVar131;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar115 = uVar117;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar115 = uVar115 - 0x10;
            } while (uVar131 != uVar115);
            auVar23._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar23._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar70._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar70._0_16_ = auVar23;
            auVar70._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar23,auVar70._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar115 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar131 < 5) goto LAB_006317e1;
          }
          uVar131 = (ulong)((uint)uVar117 & 3);
          if ((uVar117 & 3) == 0) {
            uVar131 = 4;
          }
          lVar127 = uVar117 - uVar131;
          auVar147 = ZEXT864(uVar115);
          lVar112 = (uVar131 + lVar120) - uVar117;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar24._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar24._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar71._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar71._0_16_ = auVar24;
            auVar71._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar71);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar24,auVar71._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar115 = auVar3._0_8_;
        }
LAB_006317e1:
        lVar120 = uVar117 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar115 = uVar115 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      uVar117 = puVar110[2];
      if (uVar117 == 0) {
        uVar131 = 0;
      }
      else {
        lVar126 = puVar110[1];
        if (uVar117 < 5) {
          lVar127 = 0;
          uVar131 = 0;
        }
        else {
          if (uVar117 < 0x11) {
            uVar131 = 0;
            lVar120 = 0;
          }
          else {
            uVar129 = (ulong)((uint)uVar117 & 0xf);
            if ((uVar117 & 0xf) == 0) {
              uVar129 = 0x10;
            }
            lVar127 = uVar117 - uVar129;
            pauVar135 = (undefined1 (*) [64])(lVar126 + 200);
            lVar120 = 0;
            lVar125 = 0;
            lVar143 = 0;
            lVar145 = 0;
            lVar112 = 0;
            lVar134 = 0;
            lVar144 = 0;
            lVar146 = 0;
            auVar147 = ZEXT1664((undefined1  [16])0x0);
            auVar141 = ZEXT1664((undefined1  [16])0x0);
            uVar131 = uVar117;
            do {
              auVar137 = vpermd_avx512f(auVar142,pauVar135[-3]);
              auVar138 = vpermd_avx512f(auVar142,pauVar135[-2]);
              auVar139 = vpermd_avx512f(auVar142,pauVar135[-1]);
              auVar140 = vpermd_avx512f(auVar142,*pauVar135);
              auVar106 = vpmovzxdq_avx2(auVar137._0_16_);
              lVar120 = lVar120 + auVar106._0_8_;
              lVar125 = lVar125 + auVar106._8_8_;
              lVar143 = lVar143 + auVar106._16_8_;
              lVar145 = lVar145 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar138._0_16_);
              lVar112 = lVar112 + auVar106._0_8_;
              lVar134 = lVar134 + auVar106._8_8_;
              lVar144 = lVar144 + auVar106._16_8_;
              lVar146 = lVar146 + auVar106._24_8_;
              auVar106 = vpmovzxdq_avx2(auVar139._0_16_);
              lVar133 = auVar147._0_8_ + auVar106._0_8_;
              lVar98 = auVar147._8_8_ + auVar106._8_8_;
              lVar100 = auVar147._16_8_ + auVar106._16_8_;
              lVar104 = auVar147._24_8_ + auVar106._24_8_;
              auVar147 = ZEXT3264(CONCAT824(lVar104,CONCAT816(lVar100,CONCAT88(lVar98,lVar133))));
              auVar106 = vpmovzxdq_avx2(auVar140._0_16_);
              lVar113 = auVar141._0_8_ + auVar106._0_8_;
              lVar99 = auVar141._8_8_ + auVar106._8_8_;
              lVar101 = auVar141._16_8_ + auVar106._16_8_;
              lVar105 = auVar141._24_8_ + auVar106._24_8_;
              auVar141 = ZEXT3264(CONCAT824(lVar105,CONCAT816(lVar101,CONCAT88(lVar99,lVar113))));
              pauVar135 = pauVar135 + 4;
              uVar131 = uVar131 - 0x10;
            } while (uVar129 != uVar131);
            auVar25._0_8_ = lVar113 + lVar133 + lVar112 + lVar120;
            auVar25._8_8_ = lVar99 + lVar98 + lVar134 + lVar125;
            auVar72._16_8_ = lVar101 + lVar100 + lVar144 + lVar143;
            auVar72._0_16_ = auVar25;
            auVar72._24_8_ = lVar105 + lVar104 + lVar146 + lVar145;
            auVar3 = vpaddq_avx(auVar25,auVar72._16_16_);
            auVar4 = vpshufd_avx(auVar3,0xee);
            auVar3 = vpaddq_avx(auVar3,auVar4);
            uVar131 = auVar3._0_8_;
            lVar120 = lVar127;
            if ((uint)uVar129 < 5) goto LAB_00631961;
          }
          uVar129 = (ulong)((uint)uVar117 & 3);
          if ((uVar117 & 3) == 0) {
            uVar129 = 4;
          }
          lVar127 = uVar117 - uVar129;
          auVar147 = ZEXT864(uVar131);
          lVar112 = (uVar129 + lVar120) - uVar117;
          pauVar135 = (undefined1 (*) [64])(lVar126 + lVar120 * 0x10 + 8);
          do {
            auVar141 = vpermd_avx512f(auVar142,*pauVar135);
            auVar106 = vpmovzxdq_avx2(auVar141._0_16_);
            auVar26._0_8_ = auVar147._0_8_ + auVar106._0_8_;
            auVar26._8_8_ = auVar147._8_8_ + auVar106._8_8_;
            auVar73._16_8_ = auVar147._16_8_ + auVar106._16_8_;
            auVar73._0_16_ = auVar26;
            auVar73._24_8_ = auVar147._24_8_ + auVar106._24_8_;
            auVar147 = ZEXT3264(auVar73);
            pauVar135 = pauVar135 + 1;
            lVar112 = lVar112 + 4;
          } while (lVar112 != 0);
          auVar3 = vpaddq_avx(auVar26,auVar73._16_16_);
          auVar4 = vpshufd_avx(auVar3,0xee);
          auVar3 = vpaddq_avx(auVar3,auVar4);
          uVar131 = auVar3._0_8_;
        }
LAB_00631961:
        lVar120 = uVar117 - lVar127;
        puVar111 = (uint *)(lVar126 + lVar127 * 0x10 + 8);
        do {
          uVar131 = uVar131 + *puVar111;
          puVar111 = puVar111 + 4;
          lVar120 = lVar120 + -1;
        } while (lVar120 != 0);
      }
      puVar118 = puVar118 + -3;
      puVar121 = puVar118;
      if (uVar131 >= uVar115) {
        puVar121 = param_3;
      }
      uVar1 = *puVar110;
      uVar107 = puVar110[1];
      puVar121[uVar124 * 3 + 2] = puVar110[2];
      puVar121[uVar124 * 3] = uVar1;
      (puVar121 + uVar124 * 3)[1] = uVar107;
      uVar124 = (uVar124 + 1) - (ulong)(uVar131 < uVar115);
    }
    if (uVar114 == uVar108) break;
    puVar118 = puVar118 + -3;
    param_3[uVar124 * 3 + 2] = puVar110[2];
    uVar1 = puVar110[1];
    param_3[uVar124 * 3] = *puVar110;
    (param_3 + uVar124 * 3)[1] = uVar1;
    uVar124 = uVar124 + 1;
    puVar110 = puVar110 + 3;
    uVar114 = uVar108;
  } while( true );
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar124 * 0x18);
  auVar3 = _s__00202430;
  param_2 = uVar108 - uVar124;
  if (param_2 == 0) {
    return;
  }
  puVar110 = param_1 + uVar124 * 3;
  if (uVar124 - uVar108 < 0xfffffffffffffffd) {
    puVar109 = param_3 + uVar108 * 3 + -3;
    puVar118 = puVar110;
    uVar114 = 0;
    do {
      uVar1 = puVar109[2];
      uVar107 = puVar109[1];
      *puVar118 = *puVar109;
      puVar118[1] = uVar107;
      puVar118[2] = uVar1;
      uVar1 = puVar119[(uVar114 ^ 0x1ffffffffffffffe) * 3];
      uVar107 = (puVar119 + (uVar114 ^ 0x1ffffffffffffffe) * 3)[1];
      puVar118[5] = puVar119[(uVar114 ^ 0x1ffffffffffffffe) * 3 + 2];
      puVar118[3] = uVar1;
      puVar118[4] = uVar107;
      puVar118[8] = puVar119[(uVar114 ^ 0x1ffffffffffffffd) * 3 + 2];
      uVar1 = (puVar119 + (uVar114 ^ 0x1ffffffffffffffd) * 3)[1];
      puVar118[6] = puVar119[(uVar114 ^ 0x1ffffffffffffffd) * 3];
      puVar118[7] = uVar1;
      uVar117 = uVar114 + 4;
      uVar1 = (puVar119 + (uVar114 ^ 0x1ffffffffffffffc) * 3)[1];
      puVar118[9] = puVar119[(uVar114 ^ 0x1ffffffffffffffc) * 3];
      puVar118[10] = uVar1;
      puVar118[0xb] = puVar119[(uVar114 ^ 0x1ffffffffffffffc) * 3 + 2];
      puVar118 = puVar118 + 0xc;
      puVar109 = puVar109 + -0xc;
      uVar114 = uVar117;
    } while ((param_2 & 0xfffffffffffffffc) != uVar117);
    if ((param_2 & 3) == 0) goto LAB_00631b6f;
  }
  else {
    uVar117 = 0;
  }
  lVar126 = uVar124 * 0x18 + uVar117 * 0x18;
  puVar119 = param_3 + uVar117 * -3 + uVar108 * 3 + -3;
  lVar120 = 0;
  do {
    uVar1 = *puVar119;
    uVar107 = puVar119[1];
    *(undefined8 *)((long)param_1 + lVar120 + lVar126 + 0x10) = puVar119[2];
    puVar109 = (undefined8 *)((long)param_1 + lVar120 + lVar126);
    *puVar109 = uVar1;
    puVar109[1] = uVar107;
    lVar120 = lVar120 + 0x18;
    puVar119 = puVar119 + -3;
  } while ((ulong)(((uint)param_2 & 3) << 3) * 3 != lVar120);
LAB_00631b6f:
  if (uVar108 < uVar124) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail
              (uVar124,uVar108,uVar108,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
  }
  param_6 = 0;
  param_1 = puVar110;
  if (param_2 < 0x21) goto LAB_00630322;
  goto LAB_00630389;
}


