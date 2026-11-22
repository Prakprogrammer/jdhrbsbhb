// ==== <hashbrown::map::HashMap<&[u8], u32, core::hash::BuildHasherDefault<pipeline::generic::util::H>>>::get::<[u8]> @ 005d2980 (283 bytes)

/* <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8], u32,
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>::get::<[u8]>
    */

long __rustcall
<hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
::get::<[u8]>(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar17 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar18 [64];
  undefined1 extraout_var [56];
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar9 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
          ::hash_one::<&[u8]>(param_2,param_3);
  puVar6 = PTR_memcmp_00842098;
  lVar10 = *param_1;
  uVar1 = param_1[1];
  auVar3 = vpbroadcastb_avx512vl();
  auVar16 = ZEXT1664(auVar3);
  auVar3 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar18 = ZEXT1664(auVar3);
  lVar12 = 0;
  while( true ) {
    uVar9 = uVar9 & uVar1;
    auVar3 = *(undefined1 (*) [16])(lVar10 + uVar9);
    auVar15 = auVar16._0_16_;
    uVar13 = vpcmpeqb_avx512vl(auVar3,auVar15);
    if ((short)uVar13 != 0) {
      do {
        auVar17 = auVar18._0_16_;
        uVar4 = 0;
        for (uVar5 = (uint)uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar11 = uVar4 + uVar9 & uVar1;
        if (param_3 == *(long *)(lVar10 + -0x10 + uVar11 * -0x18)) {
          lVar14 = lVar10 + uVar11 * -0x18;
          iVar8 = (*(code *)puVar6)(param_2,*(undefined8 *)(lVar14 + -0x18),param_3);
          auVar16._8_56_ = extraout_var;
          auVar16._0_8_ = extraout_XMM1_Qa;
          auVar17 = auVar16._0_16_;
          if (iVar8 == 0) goto LAB_005d2a81;
        }
        iVar8 = (uint)uVar13 - 1;
        uVar7 = (ushort)iVar8 & (ushort)uVar13;
        uVar13 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
        auVar16 = ZEXT1664(auVar15);
        auVar17 = vpcmpeqd_avx(auVar17,auVar17);
        auVar18 = ZEXT1664(auVar17);
      } while (uVar7 != 0);
    }
    uVar2 = vpcmpeqb_avx512vl(auVar3,auVar18._0_16_);
    if ((short)uVar2 != 0) break;
    uVar9 = uVar9 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  }
  lVar14 = 0;
LAB_005d2a81:
  lVar10 = lVar14 + -8;
  if (lVar14 == 0) {
    lVar10 = 0;
  }
  return lVar10;
}


// ==== <hashbrown::raw::RawTable<(&[u8], u32)>>::reserve_rehash::<hashbrown::map::make_hasher<&[u8], u32, core::hash::BuildHasherDefault<pipeline::generic::util::H>>::{closure#0}> @ 005d3d00 (1562 bytes)

/* <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(&[u8],
   u32)>>::reserve_rehash::<hashbrown[ee4ff39ba1229c30]::map::make_hasher<&[u8], u32,
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::{closure#0}>
    */

undefined8 __rustcall
<hashbrown[ee4ff39ba1229c30]::raw::RawTable<(&[u8],u32)>>::reserve_rehash::
<hashbrown[ee4ff39ba1229c30]::map::make_hasher<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
          (undefined8 *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  short sVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  bool bVar24;
  undefined1 extraout_var [56];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 (*local_50) [16];
  ulong local_48;
  ulong local_40;
  long local_38;
  
  lVar18 = param_1[3];
  uVar11 = lVar18 + 1;
  if (uVar11 == 0) {
LAB_005d3e44:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_fmt
              ("Hash table capacity overflow",0x39,&PTR_s__cargo_registry_25cdd57fae9f0462_0058bc80)
    ;
  }
  uVar2 = param_1[1];
  uVar8 = uVar2 + 1;
  uVar15 = (uVar8 & 0xfffffffffffffff8) - (uVar8 >> 3);
  if (uVar2 < 8) {
    uVar15 = uVar2;
  }
  if (uVar15 >> 1 < uVar11) {
    uVar8 = uVar15 + 1;
    if (uVar15 + 1 < uVar11) {
      uVar8 = uVar11;
    }
    if (uVar8 < 0xf) {
      uVar11 = 4;
      if (3 < uVar8) {
        uVar11 = (ulong)((uint)uVar8 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar8) goto LAB_005d3e44;
      uVar11 = 1L << ((ulong)(byte)-(char)LZCOUNT((uVar8 * 8) / 7 - 1) & 0x3f);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    uVar8 = SUB168(auVar4 * ZEXT816(0x18),0);
    if ((SUB168(auVar4 * ZEXT816(0x18),8) == 0) && (uVar8 < 0xfffffffffffffff1)) {
      uVar20 = uVar8 + 8 & 0xfffffffffffffff0;
      uVar8 = uVar11 + 0x10;
      uVar15 = uVar8 + uVar20;
      if (uVar15 < 0x7ffffffffffffff1 && !CARRY8(uVar8,uVar20)) {
        lVar9 = __rustc[45371133cddedda4]::__rust_alloc(uVar15,0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x10,uVar15);
        }
        pauVar22 = (undefined1 (*) [16])(lVar9 + uVar20);
        uVar15 = uVar11 - 1;
        uVar20 = (uVar11 & 0xfffffffffffffff8) - (uVar11 >> 3);
        if (uVar11 < 9) {
          uVar20 = uVar15;
        }
        auVar25._0_8_ = (*(code *)PTR_memset_00841dd0)(pauVar22,0xff,uVar8);
        auVar25._8_56_ = extraout_var;
        local_68 = param_1 + 4;
        local_60 = 0x18;
        local_58 = 0x10;
        local_38 = 0;
        pauVar3 = (undefined1 (*) [16])*param_1;
        if (lVar18 == 0) {
          lVar18 = 0;
        }
        else {
          auVar4 = vpcmpeqd_avx(auVar25._0_16_,auVar25._0_16_);
          uVar11 = vpcmpb_avx512vl(auVar4,*pauVar3,1);
          lVar9 = 0;
          lVar14 = lVar18;
          pauVar23 = pauVar3;
          local_50 = pauVar22;
          local_48 = uVar15;
          local_40 = uVar20;
          do {
            uVar16 = (uint)uVar11;
            sVar19 = (short)uVar11;
            while (sVar19 == 0) {
              uVar6 = vpcmpb_avx512vl(auVar4,pauVar23[1],1);
              uVar16 = (uint)uVar6;
              pauVar23 = pauVar23 + 1;
              lVar9 = lVar9 + 0x10;
              sVar19 = (short)uVar6;
            }
            uVar12 = 0;
            for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar21 = (ulong)uVar12 + lVar9;
            uVar8 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                    ::hash_one::<&&[u8]>
                              (*(undefined8 *)((long)pauVar3 + uVar21 * -0x18 + -0x18),
                               *(undefined8 *)((long)pauVar3 + uVar21 * -0x18 + -0x10));
            uVar11 = uVar8 & uVar15;
            auVar4 = *(undefined1 (*) [16])(*pauVar22 + uVar11);
            uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
            uVar12 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar17 = 0x10;
              do {
                uVar11 = uVar11 + lVar17 & uVar15;
                auVar4 = *(undefined1 (*) [16])(*pauVar22 + uVar11);
                lVar17 = lVar17 + 0x10;
                uVar12 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
              } while (uVar12 == 0);
            }
            uVar10 = 0;
            for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar13 = uVar10 + uVar11 & uVar15;
            if (-1 < (char)(*pauVar22)[uVar13]) {
              auVar4 = *pauVar22;
              uVar12 = 0;
              for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
                  (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              uVar13 = (ulong)uVar12;
            }
            uVar11 = (ulong)(uVar16 - 1 & uVar16);
            lVar14 = lVar14 + -1;
            bVar7 = (byte)(uVar8 >> 0x39);
            (*pauVar22)[uVar13] = bVar7;
            pauVar22[1][uVar13 - 0x10 & uVar15] = bVar7;
            *(undefined8 *)((long)pauVar22 + ~uVar13 * 0x18 + 0x10) =
                 *(undefined8 *)((long)pauVar3 + ~uVar21 * 0x18 + 0x10);
            auVar4 = *(undefined1 (*) [16])((long)pauVar3 + ~uVar21 * 0x18);
            *(undefined1 (*) [16])((long)pauVar22 + ~uVar13 * 0x18) = auVar4;
            auVar4 = vpcmpeqd_avx(auVar4,auVar4);
          } while (lVar14 != 0);
        }
        *param_1 = pauVar22;
        param_1[1] = uVar15;
        local_40 = param_1[2];
        param_1[2] = uVar20 - lVar18;
        local_50 = pauVar3;
        local_48 = uVar2;
        local_38 = lVar18;
        core[62e902411887be45]::ptr::drop_glue::
        <hashbrown[ee4ff39ba1229c30]::scopeguard::ScopeGuard<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner,<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::prepare_resize<alloc[2a0ada2ddd1fabff]::alloc::Global>::_closure_0_>>
                  (&local_68);
        return 0xffffffffffffffff;
      }
    }
    goto LAB_005d3e44;
  }
  if (uVar8 == 0) {
    uVar11 = 0;
    goto LAB_005d42b2;
  }
  pauVar22 = (undefined1 (*) [16])*param_1;
  uVar11 = ((uVar8 >> 4) + 1) - (ulong)((uVar8 & 0xf) == 0);
  if (uVar11 < 4) {
    lVar18 = 0;
LAB_005d40ab:
    uVar15 = 0;
    auVar27._8_8_ = DAT_00201c30;
    auVar27._0_8_ = DAT_00201c30;
    do {
      auVar4 = vpcmpgtb_avx((undefined1  [16])0x0,
                            *(undefined1 (*) [16])(*pauVar22 + uVar15 + lVar18));
      auVar4 = vpor_avx(auVar4,auVar27);
      *(undefined1 (*) [16])(*pauVar22 + uVar15 + lVar18) = auVar4;
      uVar15 = uVar15 + 0x10;
    } while (((uint)uVar11 & 3) << 4 != uVar15);
  }
  else {
    uVar15 = uVar11 & 0x1ffffffffffffffc;
    lVar18 = 0;
    auVar26._8_8_ = DAT_00201c30;
    auVar26._0_8_ = DAT_00201c30;
    do {
      auVar4 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(*pauVar22 + lVar18));
      auVar4 = vpor_avx(auVar4,auVar26);
      *(undefined1 (*) [16])(*pauVar22 + lVar18) = auVar4;
      auVar4 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar22[1] + lVar18));
      auVar4 = vpor_avx(auVar4,auVar26);
      *(undefined1 (*) [16])(pauVar22[1] + lVar18) = auVar4;
      auVar4 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar22[2] + lVar18));
      auVar4 = vpor_avx(auVar4,auVar26);
      *(undefined1 (*) [16])(pauVar22[2] + lVar18) = auVar4;
      auVar4 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar22[3] + lVar18));
      auVar4 = vpor_avx(auVar4,auVar26);
      *(undefined1 (*) [16])(pauVar22[3] + lVar18) = auVar4;
      lVar18 = lVar18 + 0x40;
      uVar15 = uVar15 - 4;
    } while (uVar15 != 0);
    if ((uVar11 & 3) != 0) goto LAB_005d40ab;
  }
  uVar11 = 0x10;
  if (0x10 < uVar8) {
    uVar11 = uVar8;
  }
  uVar15 = 0x10;
  if (uVar8 < 0x10) {
    uVar15 = uVar8;
  }
  (*(code *)PTR_memmove_00841dd8)(*pauVar22 + uVar11,pauVar22,uVar15);
  uVar11 = 0;
  do {
    if (SBORROW1('\0',(*pauVar22)[uVar11])) {
      pauVar3 = (undefined1 (*) [16])((long)pauVar22 + ~uVar11 * 0x18);
      while( true ) {
        uVar20 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                 ::hash_one::<&&[u8]>
                           (*(undefined8 *)((long)pauVar22 + uVar11 * -0x18 + -0x18),
                            *(undefined8 *)((long)pauVar22 + uVar11 * -0x18 + -0x10));
        uVar8 = param_1[1];
        uVar21 = uVar8 & uVar20;
        auVar4 = *(undefined1 (*) [16])(*pauVar22 + uVar21);
        uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
        uVar16 = (uint)uVar5;
        uVar15 = uVar21;
        if (uVar5 == 0) {
          lVar18 = 0x10;
          do {
            uVar15 = uVar15 + lVar18 & uVar8;
            auVar4 = *(undefined1 (*) [16])(*pauVar22 + uVar15);
            lVar18 = lVar18 + 0x10;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
          } while (uVar16 == 0);
        }
        uVar12 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar15 = uVar12 + uVar15 & uVar8;
        if (-1 < (char)(*pauVar22)[uVar15]) {
          auVar4 = *pauVar22;
          uVar16 = 0;
          for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar4[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar15 = (ulong)uVar16;
        }
        bVar7 = (byte)(uVar20 >> 0x38);
        if (((uVar15 - uVar21 ^ uVar11 - uVar21) & uVar8) < 0x10) {
          bVar7 = bVar7 >> 1;
          (*pauVar22)[uVar11] = bVar7;
          pauVar22 = (undefined1 (*) [16])*param_1;
          pauVar22[1][uVar8 & uVar11 - 0x10] = bVar7;
          goto LAB_005d423e;
        }
        pauVar23 = (undefined1 (*) [16])((long)pauVar22 + ~uVar15 * 0x18);
        cVar1 = (*pauVar22)[uVar15];
        bVar7 = bVar7 >> 1;
        (*pauVar22)[uVar15] = bVar7;
        pauVar22 = (undefined1 (*) [16])*param_1;
        pauVar22[1][uVar15 - 0x10 & uVar8] = bVar7;
        if (cVar1 == -1) break;
        uVar6 = *(undefined8 *)*pauVar3;
        *(undefined8 *)*pauVar3 = *(undefined8 *)*pauVar23;
        *(undefined8 *)*pauVar23 = uVar6;
        uVar6 = *(undefined8 *)(*pauVar3 + 8);
        *(undefined8 *)(*pauVar3 + 8) = *(undefined8 *)(*pauVar23 + 8);
        *(undefined8 *)(*pauVar23 + 8) = uVar6;
        uVar6 = *(undefined8 *)pauVar3[1];
        *(undefined8 *)pauVar3[1] = *(undefined8 *)pauVar23[1];
        *(undefined8 *)pauVar23[1] = uVar6;
        pauVar22 = (undefined1 (*) [16])*param_1;
      }
      uVar8 = param_1[1];
      (*pauVar22)[uVar11] = 0xff;
      pauVar22[1][uVar11 - 0x10 & uVar8] = 0xff;
      *(undefined8 *)pauVar23[1] = *(undefined8 *)pauVar3[1];
      *pauVar23 = *pauVar3;
    }
LAB_005d423e:
    bVar24 = uVar11 != uVar2;
    uVar11 = uVar11 + 1;
  } while (bVar24);
  uVar8 = param_1[1];
  uVar11 = (uVar8 + 1 & 0xfffffffffffffff8) - (uVar8 + 1 >> 3);
  if (uVar8 < 8) {
    uVar11 = uVar8;
  }
LAB_005d42b2:
  param_1[2] = uVar11 - param_1[3];
  return 0xffffffffffffffff;
}


// ==== <hashbrown::raw::RawTable<(u64, [u64; 4])>>::reserve_rehash::<hashbrown::map::make_hasher<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>::{closure#0}> @ 005d49a0 (1599 bytes)

/* <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(u64, [u64;
   4usize])>>::reserve_rehash::<hashbrown[ee4ff39ba1229c30]::map::make_hasher<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::{closure#0}>
    */

undefined8 __rustcall
<hashbrown[ee4ff39ba1229c30]::raw::RawTable<(u64,[u64;4usize])>>::reserve_rehash::
<hashbrown[ee4ff39ba1229c30]::map::make_hasher<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  bool bVar28;
  undefined1 extraout_var [56];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long local_80;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 (*local_50) [16];
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar20 = param_1[3];
  uVar14 = lVar20 + 1;
  if (uVar14 == 0) {
LAB_005d4ae2:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_fmt
              ("Hash table capacity overflow",0x39,&PTR_s__cargo_registry_25cdd57fae9f0462_0058bc80)
    ;
  }
  uVar4 = param_1[1];
  uVar12 = uVar4 + 1;
  uVar18 = (uVar12 & 0xfffffffffffffff8) - (uVar12 >> 3);
  if (uVar4 < 8) {
    uVar18 = uVar4;
  }
  if (uVar18 >> 1 < uVar14) {
    uVar12 = uVar18 + 1;
    if (uVar18 + 1 < uVar14) {
      uVar12 = uVar14;
    }
    if (uVar12 < 0xf) {
      uVar14 = 4;
      if (3 < uVar12) {
        uVar14 = (ulong)((uint)uVar12 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar12) goto LAB_005d4ae2;
      uVar14 = 1L << ((ulong)(byte)-(char)LZCOUNT((uVar12 * 8) / 7 - 1) & 0x3f);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    uVar12 = SUB168(auVar5 * ZEXT816(0x28),0);
    if ((SUB168(auVar5 * ZEXT816(0x28),8) == 0) && (uVar12 < 0xfffffffffffffff1)) {
      uVar26 = uVar12 + 8 & 0xfffffffffffffff0;
      uVar12 = uVar14 + 0x10;
      uVar18 = uVar12 + uVar26;
      if (uVar18 < 0x7ffffffffffffff1 && !CARRY8(uVar12,uVar26)) {
        lVar13 = __rustc[45371133cddedda4]::__rust_alloc(uVar18,0x10);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x10,uVar18);
        }
        pauVar27 = (undefined1 (*) [16])(lVar13 + uVar26);
        uVar18 = uVar14 - 1;
        uVar26 = (uVar14 & 0xfffffffffffffff8) - (uVar14 >> 3);
        if (uVar14 < 9) {
          uVar26 = uVar18;
        }
        auVar29._0_8_ = (*(code *)PTR_memset_00841dd0)(pauVar27,0xff,uVar12);
        auVar29._8_56_ = extraout_var;
        local_60 = 0x28;
        local_58 = 0x10;
        local_50 = (undefined1 (*) [16])*param_1;
        if (lVar20 == 0) {
          lVar20 = 0;
        }
        else {
          auVar5 = vpcmpeqd_avx(auVar29._0_16_,auVar29._0_16_);
          uVar14 = vpcmpb_avx512vl(auVar5,*local_50,1);
          lVar13 = 0;
          pauVar21 = local_50;
          lVar22 = lVar20;
          do {
            uVar24 = (uint)uVar14;
            sVar23 = (short)uVar14;
            while (sVar23 == 0) {
              uVar7 = vpcmpb_avx512vl(auVar5,pauVar21[1],1);
              uVar24 = (uint)uVar7;
              pauVar21 = pauVar21 + 1;
              lVar13 = lVar13 + 0x10;
              sVar23 = (short)uVar7;
            }
            uVar25 = 0;
            for (uVar16 = uVar24; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar25 = uVar25 + 1;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *(ulong *)((long)local_50 + ((ulong)uVar25 + lVar13) * -0x28 + -0x28) ^
                           0x243f6a8885a308d3;
            uVar12 = SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),8) ^
                     SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),0);
            uVar14 = uVar18 & uVar12;
            auVar8 = *(undefined1 (*) [16])(*pauVar27 + uVar14);
            uVar6 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
            uVar16 = (uint)uVar6;
            if (uVar6 == 0) {
              local_80 = 0x10;
              do {
                uVar14 = uVar14 + local_80 & uVar18;
                auVar8 = *(undefined1 (*) [16])(*pauVar27 + uVar14);
                local_80 = local_80 + 0x10;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
              } while (uVar16 == 0);
            }
            uVar17 = 0;
            for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            uVar19 = uVar17 + uVar14 & uVar18;
            if (-1 < (char)(*pauVar27)[uVar19]) {
              auVar8 = *pauVar27;
              uVar16 = 0;
              for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
                  (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar19 = (ulong)uVar16;
            }
            uVar14 = (ulong)(uVar24 - 1 & uVar24);
            lVar22 = lVar22 + -1;
            bVar15 = (byte)(uVar12 >> 0x39);
            (*pauVar27)[uVar19] = bVar15;
            pauVar27[1][uVar19 - 0x10 & uVar18] = bVar15;
            uVar12 = ~((ulong)uVar25 + lVar13);
            *(undefined8 *)((long)pauVar27 + ~uVar19 * 0x28 + 0x20) =
                 *(undefined8 *)((long)local_50 + uVar12 * 0x28 + 0x20);
            puVar1 = (undefined8 *)((long)local_50 + uVar12 * 0x28);
            uVar7 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            puVar2 = (undefined8 *)((long)pauVar27 + ~uVar19 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
          } while (lVar22 != 0);
        }
        *param_1 = pauVar27;
        param_1[1] = uVar18;
        local_40 = param_1[2];
        param_1[2] = uVar26 - lVar20;
        local_68 = param_1 + 4;
        local_48 = uVar4;
        local_38 = lVar20;
        core[62e902411887be45]::ptr::drop_glue::
        <hashbrown[ee4ff39ba1229c30]::scopeguard::ScopeGuard<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner,<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::prepare_resize<alloc[2a0ada2ddd1fabff]::alloc::Global>::_closure_0_>>
                  (&local_68);
        return 0xffffffffffffffff;
      }
    }
    goto LAB_005d4ae2;
  }
  if (uVar12 == 0) {
    uVar14 = 0;
    goto LAB_005d4f77;
  }
  pauVar27 = (undefined1 (*) [16])*param_1;
  uVar14 = ((uVar12 >> 4) + 1) - (ulong)((uVar12 & 0xf) == 0);
  if (uVar14 < 4) {
    lVar20 = 0;
LAB_005d4d4b:
    uVar18 = 0;
    auVar31._8_8_ = DAT_00201c30;
    auVar31._0_8_ = DAT_00201c30;
    do {
      auVar5 = vpcmpgtb_avx((undefined1  [16])0x0,
                            *(undefined1 (*) [16])(*pauVar27 + uVar18 + lVar20));
      auVar5 = vpor_avx(auVar5,auVar31);
      *(undefined1 (*) [16])(*pauVar27 + uVar18 + lVar20) = auVar5;
      uVar18 = uVar18 + 0x10;
    } while (((uint)uVar14 & 3) << 4 != uVar18);
  }
  else {
    uVar18 = uVar14 & 0x1ffffffffffffffc;
    lVar20 = 0;
    auVar30._8_8_ = DAT_00201c30;
    auVar30._0_8_ = DAT_00201c30;
    do {
      auVar5 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(*pauVar27 + lVar20));
      auVar5 = vpor_avx(auVar5,auVar30);
      *(undefined1 (*) [16])(*pauVar27 + lVar20) = auVar5;
      auVar5 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar27[1] + lVar20));
      auVar5 = vpor_avx(auVar5,auVar30);
      *(undefined1 (*) [16])(pauVar27[1] + lVar20) = auVar5;
      auVar5 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar27[2] + lVar20));
      auVar5 = vpor_avx(auVar5,auVar30);
      *(undefined1 (*) [16])(pauVar27[2] + lVar20) = auVar5;
      auVar5 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar27[3] + lVar20));
      auVar5 = vpor_avx(auVar5,auVar30);
      *(undefined1 (*) [16])(pauVar27[3] + lVar20) = auVar5;
      lVar20 = lVar20 + 0x40;
      uVar18 = uVar18 - 4;
    } while (uVar18 != 0);
    if ((uVar14 & 3) != 0) goto LAB_005d4d4b;
  }
  uVar14 = 0x10;
  if (0x10 < uVar12) {
    uVar14 = uVar12;
  }
  uVar18 = 0x10;
  if (uVar12 < 0x10) {
    uVar18 = uVar12;
  }
  (*(code *)PTR_memmove_00841dd8)(*pauVar27 + uVar14,pauVar27,uVar18);
  uVar14 = 0;
  do {
    if (SBORROW1('\0',(*pauVar27)[uVar14])) {
      puVar1 = (undefined8 *)((long)pauVar27 + ~uVar14 * 0x28);
      while( true ) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulong *)((long)pauVar27 + uVar14 * -0x28 + -0x28) ^ 0x243f6a8885a308d3;
        uVar26 = SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),8) ^
                 SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),0);
        uVar12 = param_1[1];
        uVar19 = uVar12 & uVar26;
        auVar5 = *(undefined1 (*) [16])(*pauVar27 + uVar19);
        uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
        uVar24 = (uint)uVar6;
        uVar18 = uVar19;
        if (uVar6 == 0) {
          lVar20 = 0x10;
          do {
            uVar18 = uVar18 + lVar20 & uVar12;
            auVar5 = *(undefined1 (*) [16])(*pauVar27 + uVar18);
            lVar20 = lVar20 + 0x10;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar5[0xf] >> 7) << 0xf);
          } while (uVar24 == 0);
        }
        uVar25 = 0;
        for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar18 = uVar25 + uVar18 & uVar12;
        if (-1 < (char)(*pauVar27)[uVar18]) {
          auVar5 = *pauVar27;
          uVar24 = 0;
          for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar5[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          uVar18 = (ulong)uVar24;
        }
        bVar15 = (byte)(uVar26 >> 0x38);
        if (((uVar18 - uVar19 ^ uVar14 - uVar19) & uVar12) < 0x10) {
          bVar15 = bVar15 >> 1;
          (*pauVar27)[uVar14] = bVar15;
          pauVar27 = (undefined1 (*) [16])*param_1;
          pauVar27[1][uVar12 & uVar14 - 0x10] = bVar15;
          goto LAB_005d4f07;
        }
        puVar2 = (undefined8 *)((long)pauVar27 + ~uVar18 * 0x28);
        cVar3 = (*pauVar27)[uVar18];
        bVar15 = bVar15 >> 1;
        (*pauVar27)[uVar18] = bVar15;
        pauVar27 = (undefined1 (*) [16])*param_1;
        pauVar27[1][uVar18 - 0x10 & uVar12] = bVar15;
        if (cVar3 == -1) break;
        uVar7 = *puVar1;
        *puVar1 = *puVar2;
        *puVar2 = uVar7;
        uVar7 = puVar1[1];
        puVar1[1] = puVar2[1];
        puVar2[1] = uVar7;
        uVar7 = puVar1[2];
        puVar1[2] = puVar2[2];
        puVar2[2] = uVar7;
        uVar7 = puVar1[3];
        puVar1[3] = puVar2[3];
        puVar2[3] = uVar7;
        uVar7 = puVar1[4];
        puVar1[4] = puVar2[4];
        puVar2[4] = uVar7;
        pauVar27 = (undefined1 (*) [16])*param_1;
      }
      uVar12 = param_1[1];
      (*pauVar27)[uVar14] = 0xff;
      pauVar27[1][uVar14 - 0x10 & uVar12] = 0xff;
      puVar2[4] = puVar1[4];
      uVar7 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
    }
LAB_005d4f07:
    bVar28 = uVar14 != uVar4;
    uVar14 = uVar14 + 1;
  } while (bVar28);
  uVar12 = param_1[1];
  uVar14 = (uVar12 + 1 & 0xfffffffffffffff8) - (uVar12 + 1 >> 3);
  if (uVar12 < 8) {
    uVar14 = uVar12;
  }
LAB_005d4f77:
  param_1[2] = uVar14 - param_1[3];
  return 0xffffffffffffffff;
}


// ==== core::ptr::drop_glue::<core::option::Option<core::result::Result<(alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>)), alloc::boxed::Box<dyn core::any::Any + core::marker::Send>>>> @ 005ff7e0 (212 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)),
   alloc[2a0ada2ddd1fabff]::boxed::Box<dyn core[62e902411887be45]::any::Any +
   core[62e902411887be45]::marker::Send>>>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  if (*param_1 != -2) {
    if (*param_1 != -1) {
      <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
                ();
      return;
    }
    __ptr = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(__ptr);
    }
    uVar4 = puVar1[1];
    if (uVar4 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar3 = puVar1[2];
      if ((ulong)puVar1[2] < uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = 0x40 - LZCOUNT(uVar4 - 1);
      if ((uVar3 < 0x10001) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar2 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<core::option::Option<core::result::Result<(alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs), alloc::boxed::Box<dyn core::any::Any + core::marker::Send>>>> @ 005ff9a0 (212 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P1)>, pipeline[509596c7b52975b2]::generic::P1Bufs),
   alloc[2a0ada2ddd1fabff]::boxed::Box<dyn core[62e902411887be45]::any::Any +
   core[62e902411887be45]::marker::Send>>>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  if (*param_1 != -2) {
    if (*param_1 != -1) {
      <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>
                ();
      return;
    }
    __ptr = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(__ptr);
    }
    uVar4 = puVar1[1];
    if (uVar4 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar3 = puVar1[2];
      if ((ulong)puVar1[2] < uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = 0x40 - LZCOUNT(uVar4 - 1);
      if ((uVar3 < 0x10001) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar2 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<core::option::Option<core::result::Result<(alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs), alloc::boxed::Box<dyn core::any::Any + core::marker::Send>>>> @ 005ffa80 (212 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P2)>, pipeline[509596c7b52975b2]::generic::P2Bufs),
   alloc[2a0ada2ddd1fabff]::boxed::Box<dyn core[62e902411887be45]::any::Any +
   core[62e902411887be45]::marker::Send>>>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  if (*param_1 != -2) {
    if (*param_1 != -1) {
      <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>
                ();
      return;
    }
    __ptr = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(__ptr);
    }
    uVar4 = puVar1[1];
    if (uVar4 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar3 = puVar1[2];
      if ((ulong)puVar1[2] < uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = 0x40 - LZCOUNT(uVar4 - 1);
      if ((uVar3 < 0x10001) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar2 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<alloc::vec::Vec<pipeline::generic::core::Ck0>>> @ 006001a0 (393 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Ck0>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Ck0>>>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    puVar4 = __ptr + 1;
    do {
      if (puVar4[-1] != 0) {
        __ptr_00 = (undefined8 *)*puVar4;
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          uVar2 = puVar4[-1] * 0x18 - 1;
          lVar3 = LZCOUNT(uVar2);
          lVar6 = 0x40 - lVar3;
          if ((uVar2 < 0x10000) ||
             (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr_00,lVar6), cVar1 == '\0')) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *__ptr_00 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
            *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr_00;
          }
        }
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x18 - 1;
    lVar3 = LZCOUNT(uVar2);
    lVar5 = 0x40 - lVar3;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar1 != '\0')) {
      return;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<alloc::vec::Vec<pipeline::generic::core::UserRow>>> @ 00600340 (389 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>>>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    puVar4 = __ptr + 1;
    do {
      if (puVar4[-1] != 0) {
        __ptr_00 = (undefined8 *)*puVar4;
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          uVar2 = puVar4[-1] * 0x38 - 1;
          lVar3 = LZCOUNT(uVar2);
          lVar6 = 0x40 - lVar3;
          if ((uVar2 < 0x10000) ||
             (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr_00,lVar6), cVar1 == '\0')) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *__ptr_00 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
            *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr_00;
          }
        }
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x18 - 1;
    lVar3 = LZCOUNT(uVar2);
    lVar5 = 0x40 - lVar3;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar1 != '\0')) {
      return;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::core::Parts<pipeline::generic::core::Ck>>> @ 00600ae0 (209 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
          (long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = __ptr;
    do {
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>
                (puVar4);
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x30 - 1;
    lVar5 = LZCOUNT(uVar2);
    lVar3 = 0x40 - lVar5;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::core::Parts<pipeline::generic::core::Ev>>> @ 00600bc0 (209 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>>
          (long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = __ptr;
    do {
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>
                (puVar4);
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x30 - 1;
    lVar5 = LZCOUNT(uVar2);
    lVar3 = 0x40 - lVar5;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::core::Parts<pipeline::generic::core::Rec>>> @ 00600ca0 (209 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>>
          (long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = __ptr;
    do {
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>
                (puVar4);
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x30 - 1;
    lVar5 = LZCOUNT(uVar2);
    lVar3 = 0x40 - lVar5;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::P1Bufs>> @ 006011a0 (393 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P1Bufs>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P1Bufs>>(long *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    puVar4 = __ptr + 1;
    do {
      if (puVar4[-1] != 0) {
        __ptr_00 = (undefined8 *)*puVar4;
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          uVar2 = puVar4[-1] * 0x28 - 1;
          lVar3 = LZCOUNT(uVar2);
          lVar6 = 0x40 - lVar3;
          if ((uVar2 < 0x10000) ||
             (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr_00,lVar6), cVar1 == '\0')) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *__ptr_00 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
            *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr_00;
          }
        }
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x18 - 1;
    lVar3 = LZCOUNT(uVar2);
    lVar5 = 0x40 - lVar3;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar1 != '\0')) {
      return;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::P2Bufs>> @ 00601340 (207 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P2Bufs>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P2Bufs>>(long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = __ptr;
    do {
      <pipeline[509596c7b52975b2]::generic::P2Bufs>(puVar4);
      puVar4 = puVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x80 - 1;
    lVar5 = LZCOUNT(uVar2);
    lVar3 = 0x40 - lVar5;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::generic::util::Mapped>> @ 00601420 (224 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
          (long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  size_t *psVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    psVar3 = __ptr + 1;
    do {
      if (*psVar3 != 0) {
        munmap((void *)psVar3[-1],*psVar3);
      }
      psVar3 = psVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar2 = *param_1 * 0x10 - 1;
    lVar5 = LZCOUNT(uVar2);
    lVar4 = 0x40 - lVar5;
    if ((0xffff < uVar2) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar4), cVar1 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::into_iter::IntoIter<pipeline::generic::P1>> @ 00602000 (224 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P1>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P1>>
          (undefined8 *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar2 = param_1[1];
  if (param_1[3] - lVar2 != 0) {
    uVar3 = (ulong)(param_1[3] - lVar2) / 0x30;
    do {
      <pipeline[509596c7b52975b2]::generic::P1>(lVar2);
      lVar2 = lVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_1[2] != 0) {
    __ptr = (undefined8 *)*param_1;
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar3 = param_1[2] * 0x30 - 1;
    lVar4 = LZCOUNT(uVar3);
    lVar2 = 0x40 - lVar4;
    if ((0xffff < uVar3) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar2), cVar1 != '\0')) {
      return;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar2 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar2 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::into_iter::IntoIter<pipeline::generic::P2>> @ 006020e0 (244 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P2>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P2>>
          (undefined8 *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar2 = param_1[1];
  uVar3 = (ulong)(param_1[3] - lVar2) / 0x38;
  if (param_1[3] != lVar2) {
    lVar2 = lVar2 + 8;
    do {
      while (*(char *)(lVar2 + -8) != '\0') {
        <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>
                  (lVar2);
        lVar2 = lVar2 + 0x38;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) goto LAB_00602149;
      }
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>
                (lVar2);
      lVar2 = lVar2 + 0x38;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
LAB_00602149:
  if (param_1[2] != 0) {
    __ptr = (undefined8 *)*param_1;
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar3 = param_1[2] * 0x38 - 1;
    lVar4 = LZCOUNT(uVar3);
    lVar2 = 0x40 - lVar4;
    if ((0xffff < uVar3) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar2), cVar1 != '\0')) {
      return;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar2 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar2 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::into_iter::IntoIter<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>)>> @ 00602420 (224 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>
          (undefined8 *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar2 = param_1[1];
  uVar3 = (ulong)(param_1[3] - lVar2) / 0x1c0;
  if (param_1[3] != lVar2) {
    do {
      <(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>
                (lVar2);
      lVar2 = lVar2 + 0x1c0;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_1[2] != 0) {
    __ptr = (undefined8 *)*param_1;
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
      return;
    }
    uVar3 = param_1[2] * 0x1c0 - 1;
    lVar4 = LZCOUNT(uVar3);
    lVar2 = 0x40 - lVar4;
    if ((0xffff < uVar3) &&
       (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar2), cVar1 != '\0')) {
      return;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar2 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar2 * 8 + -0x3c8) = __ptr;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::Parts<pipeline::generic::core::Ck>> @ 00602500 (346 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x30 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[3] << 2;
    uVar3 = 0x10;
    if (0x10 < uVar4) {
      uVar3 = uVar4;
    }
    lVar6 = LZCOUNT(uVar3 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::Parts<pipeline::generic::core::Ev>> @ 00602660 (346 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x20 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[3] << 2;
    uVar3 = 0x10;
    if (0x10 < uVar4) {
      uVar3 = uVar4;
    }
    lVar6 = LZCOUNT(uVar3 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::Parts<pipeline::generic::core::Rec>> @ 006027c0 (346 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x28 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[3] << 2;
    uVar3 = 0x10;
    if (0x10 < uVar4) {
      uVar3 = uVar4;
    }
    lVar6 = LZCOUNT(uVar3 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::sync::poison::PoisonError<core::option::Option<pipeline::generic::core::LinkMap>>> @ 00602920 (11 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::sync::poison::PoisonError<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::generic::core::LinkMap>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::sync::poison::PoisonError<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::generic::core::LinkMap>>>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 == -1) {
    return;
  }
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609996;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[5];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[4] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar4);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609996;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[7] != 0) {
    puVar1 = (undefined8 *)param_1[8];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[7] << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00609996:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[10] != 0) {
    puVar1 = (undefined8 *)param_1[0xb];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = param_1[10] << 2;
    uVar4 = 0x10;
    if (0x10 < uVar3) {
      uVar4 = uVar3;
    }
    lVar6 = LZCOUNT(uVar4 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar4 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::collections::hash::map::HashMap<&[u8], u32, core::hash::BuildHasherDefault<pipeline::generic::util::H>>> @ 006029a0 (173 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],
   u32, 
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
          (long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *__ptr;
  long in_FS_OFFSET;
  
  if (param_2 != 0) {
    uVar2 = param_2 * 0x18 & 0xfffffffffffffff0;
    uVar4 = param_2 + uVar2 + 0x31;
    if (uVar4 != 0) {
      __ptr = (undefined8 *)((param_1 - uVar2) + -0x20);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar2 = 0x10;
      if (0x10 < uVar4) {
        uVar2 = uVar4;
      }
      lVar3 = 0x40 - LZCOUNT(uVar2 - 1);
      if ((0x10000 < uVar4) &&
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
        return;
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>> @ 00602a60 (173 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,
   [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
          (long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *__ptr;
  long in_FS_OFFSET;
  
  if (param_2 != 0) {
    uVar2 = param_2 * 0x28 & 0xfffffffffffffff0;
    uVar4 = param_2 + uVar2 + 0x41;
    if (uVar4 != 0) {
      __ptr = (undefined8 *)((param_1 - uVar2) + -0x30);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar2 = 0x10;
      if (0x10 < uVar4) {
        uVar2 = uVar4;
      }
      lVar3 = 0x40 - LZCOUNT(uVar2 - 1);
      if ((0x10000 < uVar4) &&
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
        return;
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)>::{closure#1}> @ 00602b20 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P1)>,
   pipeline[509596c7b52975b2]::generic::P1Bufs)>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>>>
    ::drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<pipeline::generic::P2Bufs, pipeline::generic::P2, <pipeline::generic::P2Bufs as core::default::Default>::default, pipeline::generic::run::{closure#10}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs)>::{closure#1}> @ 00602b40 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,
   pipeline[509596c7b52975b2]::generic::P2, <pipeline[509596c7b52975b2]::generic::P2Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#10}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P2)>,
   pipeline[509596c7b52975b2]::generic::P2Bufs)>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>>>
    ::drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>), alloc::vec::Vec<pipeline::generic::core::UserRow>, pipeline::generic::run::{closure#11}, pipeline::generic::run::{closure#12}>::{closure#0}, (alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>))>::{closure#1}> @ 00602b60 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,
   pipeline[509596c7b52975b2]::generic::run::{closure#11},
   pipeline[509596c7b52975b2]::generic::run::{closure#12}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>::{closure#1}>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>
    ::drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<(), core::result::Result<(), core::io::error::Error>, pipeline::generic::run::{closure#13}, pipeline::generic::run::{closure#14}>::{closure#0}, (alloc::vec::Vec<(usize, core::result::Result<(), core::io::error::Error>)>, ())>::{closure#1}> @ 00602b80 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(),
   core[62e902411887be45]::result::Result<(), core[62e902411887be45]::io::error::Error>,
   pipeline[509596c7b52975b2]::generic::run::{closure#13},
   pipeline[509596c7b52975b2]::generic::run::{closure#14}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, core[62e902411887be45]::result::Result<(),
   core[62e902411887be45]::io::error::Error>)>, ())>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>>>
    ::drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::P1> @ 006090a0 (215 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::P1> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::P1>(ulong *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  uVar2 = 1;
  if ((long)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x8000000000000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>
                ();
      return;
    }
    if (param_1[1] != 0) {
      __ptr = (undefined8 *)param_1[2];
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar2 = param_1[1] * 0x18 - 1;
      lVar4 = LZCOUNT(uVar2);
      lVar3 = 0x40 - lVar4;
      if ((0xffff < uVar2) &&
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 != '\0')) {
        return;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
    }
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::P2Bufs> @ 00609180 (788 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::P2Bufs> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::P2Bufs>(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609470;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[5];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[4] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609470;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = param_1[7];
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)param_1[8];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609470;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[10] != 0) {
    puVar1 = (undefined8 *)param_1[0xb];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[10] * 0x30 - 1;
      lVar5 = LZCOUNT(uVar4);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00609470:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0xd] != 0) {
    puVar1 = (undefined8 *)param_1[0xe];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[0xd] * 0x38 - 1;
    lVar6 = LZCOUNT(uVar4);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar4) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::LinkMap> @ 00609720 (666 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::LinkMap> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::LinkMap>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609996;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[5];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[4] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar4);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609996;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[7] != 0) {
    puVar1 = (undefined8 *)param_1[8];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[7] << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00609996:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[10] != 0) {
    puVar1 = (undefined8 *)param_1[0xb];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = param_1[10] << 2;
    uVar4 = 0x10;
    if (0x10 < uVar3) {
      uVar4 = uVar3;
    }
    lVar6 = LZCOUNT(uVar4 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar4 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::Scratch> @ 006099c0 (1274 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::Scratch> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::Scratch>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x18 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[3] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[6] != 0) {
    puVar1 = (undefined8 *)param_1[7];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[6] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[9] != 0) {
    puVar1 = (undefined8 *)param_1[10];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[9] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0xc] != 0) {
    puVar1 = (undefined8 *)param_1[0xd];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[0xc] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0xf] != 0) {
    puVar1 = (undefined8 *)param_1[0x10];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[0xf] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609e96;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x12] != 0) {
    puVar1 = (undefined8 *)param_1[0x13];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[0x12] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00609e96:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x15] != 0) {
    puVar1 = (undefined8 *)param_1[0x16];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[0x15] << 2;
    uVar3 = 0x10;
    if (0x10 < uVar4) {
      uVar3 = uVar4;
    }
    lVar6 = LZCOUNT(uVar3 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3 - 1) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<pipeline::generic::core::ShardBufs> @ 00609ec0 (1407 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::ShardBufs> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::core::ShardBufs>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 << 3;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[5];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[4] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar4);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[7] != 0) {
    puVar1 = (undefined8 *)param_1[8];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[7] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[10] != 0) {
    puVar1 = (undefined8 *)param_1[0xb];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[10] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0xd] != 0) {
    puVar1 = (undefined8 *)param_1[0xe];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[0xd] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x10] != 0) {
    puVar1 = (undefined8 *)param_1[0x11];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[0x10] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar4);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x13] != 0) {
    puVar1 = (undefined8 *)param_1[0x14];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[0x13] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_0060a41b;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x16] != 0) {
    puVar1 = (undefined8 *)param_1[0x17];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[0x16] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_0060a41b:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x19] != 0) {
    puVar1 = (undefined8 *)param_1[0x1a];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar4 = param_1[0x19] * 0x20 - 1;
    lVar6 = LZCOUNT(uVar4);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar4) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<(alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>))> @ 0060a6e0 (362 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
          (long *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar3 = __ptr + 2;
    do {
      if (puVar3[-1] != 0) {
        __ptr_00 = (undefined8 *)*puVar3;
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          uVar2 = puVar3[-1] * 0x38 - 1;
          lVar5 = LZCOUNT(uVar2);
          lVar6 = 0x40 - lVar5;
          if (0xffff < uVar2) {
            cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr_00,lVar6);
            if (cVar1 != '\0') goto LAB_0060a725;
          }
          if (lVar5 == 0) goto LAB_0060a845;
          *__ptr_00 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr_00;
        }
      }
LAB_0060a725:
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
    }
    else {
      uVar2 = *param_1 * 0x20 - 1;
      lVar4 = LZCOUNT(uVar2);
      lVar6 = 0x40 - lVar4;
      if (0xffff < uVar2) {
        cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar6);
        if (cVar1 != '\0') goto LAB_0060a829;
      }
      if (lVar4 == 0) {
LAB_0060a845:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr;
    }
  }
LAB_0060a829:
  <(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>
            (param_1 + 3);
  return;
}


// ==== core::ptr::drop_glue::<(alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)> @ 0060a960 (354 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P1)>, pipeline[509596c7b52975b2]::generic::P1Bufs)> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = puVar1 + 1;
    do {
      <pipeline[509596c7b52975b2]::generic::P1>(puVar5);
      puVar5 = puVar5 + 7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x38 - 1;
      lVar4 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar4;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = param_1[3] * 0x28 - 1;
    lVar6 = LZCOUNT(uVar3);
    lVar4 = 0x40 - lVar6;
    if ((0xffff < uVar3) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar4), cVar2 != '\0')) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== core::ptr::drop_glue::<(alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs)> @ 0060aae0 (235 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P2)>, pipeline[509596c7b52975b2]::generic::P2Bufs)> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>
          (long *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  __ptr = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = __ptr + 2;
    do {
      while (*(char *)(puVar4 + -1) == '\0') {
        <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>
                  (puVar4);
        puVar4 = puVar4 + 8;
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) goto LAB_0060ab29;
      }
      <pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>
                (puVar4);
      puVar4 = puVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
LAB_0060ab29:
  if (*param_1 != 0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
    }
    else {
      uVar2 = *param_1 * 0x40 - 1;
      lVar3 = LZCOUNT(uVar2);
      lVar5 = 0x40 - lVar3;
      if (0xffff < uVar2) {
        cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5);
        if (cVar1 != '\0') goto LAB_0060aba4;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
    }
  }
LAB_0060aba4:
  <pipeline[509596c7b52975b2]::generic::P2Bufs>(param_1 + 3);
  return;
}


// ==== core::ptr::drop_glue::<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>)> @ 0060abe0 (214 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>
          (long param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *__ptr;
  long in_FS_OFFSET;
  
  <pipeline[509596c7b52975b2]::generic::core::Scratch>();
  <pipeline[509596c7b52975b2]::generic::core::ShardBufs>(param_1 + 0xc0);
  lVar4 = *(long *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    uVar3 = lVar4 * 0x28 & 0xfffffffffffffff0;
    uVar2 = lVar4 + uVar3 + 0x41;
    if (uVar2 != 0) {
      __ptr = (undefined8 *)((*(long *)(param_1 + 0x1a0) - uVar3) + -0x30);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar3 = 0x10;
      if (0x10 < uVar2) {
        uVar3 = uVar2;
      }
      lVar4 = 0x40 - LZCOUNT(uVar3 - 1);
      if ((0x10000 < uVar2) &&
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar4), cVar1 != '\0')) {
        return;
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = __ptr;
    }
  }
  return;
}


// ==== pipeline::generic::util::par_run::<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}> @ 0060de00 (5682 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}> */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>
          (Elf64_Ehdr *param_1,undefined **param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 auVar7 [32];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  long *plVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined **ppuVar22;
  qword qVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  int *piVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined4 *puVar33;
  long *unaff_R12;
  char *pcVar34;
  long *plVar35;
  undefined **ppuVar36;
  long in_FS_OFFSET;
  bool bVar37;
  undefined1 auVar38 [32];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar39 [32];
  undefined1 in_ZMM1 [64];
  undefined1 extraout_var [56];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 local_2d9;
  long local_2d8;
  long local_2d0;
  undefined **local_2c8;
  long *local_2c0;
  undefined1 local_2b8 [16];
  Elf64_Ehdr *local_2a8;
  undefined **local_2a0;
  undefined **local_298;
  long local_290;
  undefined **local_288;
  long *local_280;
  long *local_278;
  qword qStack_270;
  long *local_268 [3];
  undefined1 local_250;
  undefined **local_248;
  long *local_240;
  undefined8 local_238;
  long *local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined *local_218;
  undefined *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined1 *local_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 *local_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  int local_1b8;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  long *plStack_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  
  plVar35 = (long *)((long)param_2 + (ulong)(param_2 == (undefined **)0x0));
  if (param_3 < plVar35) {
    plVar35 = param_3;
  }
  local_238 = 0;
  local_1d8 = &local_2d9;
  puStack_1d0 = &local_238;
  local_280 = plVar35;
  plStack_1c8 = param_4;
  ppuStack_1c0 = param_2;
  if (plVar35 == (long *)&DAT_00000001) {
    local_2c8 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(0x30,8);
    if (local_2c8 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x30);
    }
    <pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#8}>
    ::_closure_0_(local_2c8,&local_1d8);
    plVar35 = (long *)&DAT_00000001;
LAB_0060dea9:
    auVar39 = in_ZMM1._0_32_;
    ppuVar32 = param_2;
    if ((undefined **)0x2aaaaaaaaaaaaaa < param_2) goto LAB_0060e529;
    local_290 = (long)param_2 * 0x30;
    if (local_290 == 0) {
      unaff_R12 = (long *)&DAT_00000008;
      local_298 = (undefined **)0x0;
      if (param_2 == (undefined **)0x0) goto LAB_0060e650;
LAB_0060e036:
      if ((undefined **)0x3 < param_2) goto LAB_0060e52e;
      ppuVar22 = (undefined **)0x0;
      goto LAB_0060e62b;
    }
    unaff_R12 = (long *)__rustc[45371133cddedda4]::__rust_alloc(local_290,8);
    auVar39 = in_ZMM1._0_32_;
    local_298 = param_2;
    if (unaff_R12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_290);
    }
    if (param_2 != (undefined **)0x0) goto LAB_0060e036;
  }
  else {
    uVar24 = *(ulong *)(in_FS_OFFSET + -0x30);
    local_2a8 = param_1;
    if (uVar24 < 3) {
      if (uVar24 == 2) {
        if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
          lVar27 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          do {
            param_1 = (Elf64_Ehdr *)&_nl_current_LC_CTYPE_used;
            ppuVar32 = param_2;
            if (lVar27 == -1) goto LAB_0060e545;
            lVar28 = lVar27 + 1;
            LOCK();
            bVar37 = lVar27 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            if (bVar37) {
              <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar28;
            }
            else {
              lVar27 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            }
            UNLOCK();
          } while (!bVar37);
          *(long *)(in_FS_OFFSET + -0x28) = lVar28;
        }
        param_1 = (Elf64_Ehdr *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
      }
      else {
        param_1 = (Elf64_Ehdr *)std[c60ef17cbf7de79f]::thread::current::init_current(uVar24);
      }
    }
    else {
      LOCK();
      plVar17 = (long *)(uVar24 - 0x10);
      lVar27 = *plVar17;
      *plVar17 = *plVar17 + 1;
      UNLOCK();
      if (*plVar17 == 0 || SCARRY8(lVar27,1) != *plVar17 < 0) {
LAB_0060f340:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      param_1 = (Elf64_Ehdr *)(uVar24 - 0x10);
    }
    ppuVar32 = (undefined **)&DAT_00000008;
    plVar17 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x28);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
    }
    *plVar17 = 1;
    plVar17[1] = 1;
    plVar17[2] = (long)param_1;
    plVar17[3] = 0;
    *(undefined1 *)(plVar17 + 4) = 0;
    param_4 = (long *)0x555555555555556;
    if (plVar35 < (long *)0x555555555555556) {
      local_2b8._0_8_ = (long)plVar35 * 0x18;
      if ((long)plVar35 * 0x18 == 0) {
        ppuVar18 = (undefined **)&DAT_00000008;
        local_2c0 = (long *)0x0;
      }
      else {
        ppuVar32 = (undefined **)&DAT_00000008;
        ppuVar18 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc();
        local_2c0 = plVar35;
        if (ppuVar18 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_2b8._0_8_);
        }
      }
      plVar29 = (long *)0x0;
      do {
        local_268[0] = (long *)0xffffffffffffffff;
        local_278 = (long *)0x0;
        local_250 = 0;
        LOCK();
        lVar27 = *plVar17;
        *plVar17 = *plVar17 + 1;
        UNLOCK();
        if (*plVar17 == 0 || SCARRY8(lVar27,1) != *plVar17 < 0) goto LAB_0060f340;
        if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 ==
            (char *)0x0) {
          uStack_1b0 = 0x4154535f;
          uStack_1ac = 0x43;
          uStack_1ab = 0x4b;
          local_1b8 = 0x54535552;
          uStack_1b4 = 0x4d5f;
          uStack_1b2 = 0x4e49;
          uStack_1aa = 0;
          uVar8 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
          auVar43[7] = uStack_1a9;
          auVar43._0_7_ = 0x4b434154535f;
          auVar43._8_8_ = 0;
          uVar9 = vptestmb_avx512vl(auVar43,auVar43);
          bVar37 = (byte)((char)((ushort)uVar8 >> 4) << 4 | (byte)uVar8 & (byte)uVar9 & 0xf) == 0xff
          ;
          param_4 = (long *)CONCAT71((int7)((ulong)param_4 >> 8),bVar37);
          if (bVar37) {
            ppuVar32 = (undefined **)&local_1b8;
            std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_230);
            ppuVar22 = local_228;
            plVar35 = local_230;
            if (local_230 == (long *)0xfffffffffffffffe) goto LAB_0060e1fd;
            if (local_230 == (long *)0xffffffffffffffff) goto LAB_0060e218;
            ppuVar32 = local_228;
            core[62e902411887be45]::str::converts::from_utf8(&local_1b8,local_228,local_220);
            if ((local_1b8 == 1) || (param_4 = plStack_1a8, plStack_1a8 == (long *)0x0)) {
LAB_0060e464:
              param_1 = &__preinit_array_end;
            }
            else {
              ppuVar32 = (undefined **)
                         CONCAT17(uStack_1a9,
                                  CONCAT16(uStack_1aa,
                                           CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0))));
              if (plStack_1a8 == (long *)&DAT_00000001) {
                cVar15 = *(char *)ppuVar32;
                if ((cVar15 == '+') || (cVar15 == '-')) goto LAB_0060e464;
              }
              else {
                cVar15 = *(char *)ppuVar32;
              }
              plVar19 = (long *)(ulong)(cVar15 == '+');
              ppuVar32 = (undefined **)((long)ppuVar32 + (long)plVar19);
              if (0x10 < (ulong)((long)plStack_1a8 - (long)plVar19)) {
                lVar27 = (long)plStack_1a8 + -(long)plVar19;
                param_4 = (long *)-lVar27;
                lVar28 = 0;
                param_1 = (Elf64_Ehdr *)0x0;
                while( true ) {
                  if (lVar28 == lVar27) goto joined_r0x0060e487;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = param_1;
                  uVar24 = SUB168(auVar5 * ZEXT816(10),0);
                  if (SUB168(auVar5 * ZEXT816(10),8) != 0) break;
                  uVar16 = *(byte *)((long)ppuVar32 + lVar28) - 0x30;
                  param_1 = (Elf64_Ehdr *)(uVar24 + uVar16);
                  if ((9 < uVar16) || (lVar28 = lVar28 + 1, CARRY8(uVar24,(ulong)uVar16))) break;
                }
                goto LAB_0060e464;
              }
              if (plStack_1a8 == plVar19) {
                param_1 = (Elf64_Ehdr *)0x0;
              }
              else {
                lVar28 = (long)plStack_1a8 + -(long)plVar19;
                param_4 = (long *)-lVar28;
                lVar27 = 0;
                param_1 = (Elf64_Ehdr *)0x0;
                do {
                  uVar16 = *(byte *)((long)ppuVar32 + lVar27) - 0x30;
                  if (9 < uVar16) {
                    param_1 = &__preinit_array_end;
                    break;
                  }
                  param_1 = (Elf64_Ehdr *)((ulong)uVar16 + (long)param_1 * 10);
                  lVar27 = lVar27 + 1;
                } while (lVar27 != lVar28);
              }
            }
joined_r0x0060e487:
            if (plVar35 != (long *)0x0) {
              if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar22 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= ppuVar22)) {
                free(ppuVar22);
              }
              else {
                if (plVar35 < &DAT_00000011) {
                  plVar35 = (long *)&DAT_00000010;
                }
                ppuVar36 = (undefined **)(0x40 - LZCOUNT((undefined1 *)((long)plVar35 + -1)));
                if ((undefined1 *)0xffff < (undefined1 *)((long)plVar35 + -1)) {
                  ppuVar32 = ppuVar36;
                  cVar15 = sys::big_put(ppuVar22);
                  if (cVar15 != '\0') goto LAB_0060e21d;
                }
                *ppuVar22 = *(undefined **)(in_FS_OFFSET + (long)ppuVar36 * 8 + -0x3c8);
                *(undefined ***)(in_FS_OFFSET + (long)ppuVar36 * 8 + -0x3c8) = ppuVar22;
              }
            }
          }
          else {
            ppuVar22 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_0060e1fd:
            uVar16 = ((uint)ppuVar22 & 3) - 2;
            param_4 = (long *)(ulong)uVar16;
            if ((1 < uVar16) && (((ulong)ppuVar22 & 3) != 0)) {
              (**(code **)((long)ppuVar22 + 0x17))((char *)((long)ppuVar22 + -1));
              in_ZMM1._8_56_ = extraout_var;
              in_ZMM1._0_8_ = extraout_XMM1_Qa;
            }
LAB_0060e218:
            param_1 = &__preinit_array_end;
          }
LAB_0060e21d:
          std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 =
               param_1->e_ident_magic_str;
        }
        else {
          param_1 = (Elf64_Ehdr *)
                    (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 +
                    -1);
        }
        unaff_R12 = (long *)((long)plVar29 + 1);
        lVar27 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        do {
          plVar35 = plVar17;
          if (lVar27 == -1) goto LAB_0060e545;
          lVar28 = lVar27 + 1;
          LOCK();
          bVar37 = lVar27 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          if (bVar37) {
            <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar28;
          }
          else {
            lVar27 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          }
          UNLOCK();
        } while (!bVar37);
        plVar19 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar28,local_268);
        local_230 = plVar19;
        std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_1b8,&local_230);
        plVar20 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x48,8);
        if (plVar20 == (long *)0x0) goto LAB_0060f2bc;
        *plVar20 = 1;
        plVar20[1] = 1;
        plVar20[2] = -2;
        plVar20[8] = (long)plVar17;
        LOCK();
        lVar27 = *plVar20;
        *plVar20 = *plVar20 + 1;
        UNLOCK();
        if (*plVar20 == 0 || SCARRY8(lVar27,1) != *plVar20 < 0) goto LAB_0060f340;
        local_1f8 = local_1d8;
        puStack_1f0 = puStack_1d0;
        plStack_1e8 = plStack_1c8;
        ppuStack_1e0 = ppuStack_1c0;
        local_218 = (undefined *)CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
        puStack_210 = (undefined *)
                      CONCAT17(uStack_1a9,
                               CONCAT16(uStack_1aa,
                                        CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0))));
        plStack_208 = plStack_1a8;
        puStack_200 = puStack_1a0;
        LOCK();
        plVar1 = plVar17 + 3;
        lVar27 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (*plVar1 == 0 || SCARRY8(lVar27,1) != *plVar1 < 0) {
          uVar16 = <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(plVar17 + 2);
          goto LAB_0060f2e9;
        }
        puVar21 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x48,8);
        if (puVar21 == (undefined8 *)0x0) goto LAB_0060f2bc;
        auVar14._8_8_ = puStack_1f0;
        auVar14._0_8_ = local_1f8;
        auVar39._16_8_ = plStack_1e8;
        auVar39._0_16_ = auVar14;
        auVar39._24_8_ = ppuStack_1e0;
        *(undefined1 (*) [32])(puVar21 + 4) = auVar39;
        *puVar21 = local_218;
        puVar21[1] = puStack_210;
        puVar21[2] = plStack_208;
        puVar21[3] = puStack_200;
        puVar21[8] = plVar20;
        LOCK();
        lVar27 = *plVar19;
        *plVar19 = *plVar19 + 1;
        UNLOCK();
        if (*plVar19 == 0 || SCARRY8(lVar27,1) != *plVar19 < 0) goto LAB_0060f340;
        in_ZMM1 = ZEXT1664(auVar14);
        ppuVar32 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
        if (ppuVar32 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
        }
        *ppuVar32 = (undefined *)plVar19;
        ppuVar32[1] = (undefined *)puVar21;
        ppuVar32[2] = (undefined *)
                      &
                      PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_>_0020ffc8
        ;
        auVar43 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(param_1);
        if ((auVar43._0_8_ & 1) != 0) {
          LOCK();
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (*plVar20 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>>>
            ::drop_slow(plVar20);
          }
          LOCK();
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
            ::drop_slow(plVar19);
          }
          local_1b8 = auVar43._8_4_;
          uStack_1b4 = auVar43._12_2_;
          uStack_1b2 = auVar43._14_2_;
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::result::unwrap_failed
                    ("failed to spawn thread",0x16,&local_1b8,
                     &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                     &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
        }
        ppuVar18[(long)plVar29 * 3] = (undefined *)plVar19;
        ppuVar18[(long)plVar29 * 3 + 1] = (undefined *)plVar20;
        ppuVar18[(long)plVar29 * 3 + 2] = auVar43._8_8_;
        param_4 = local_280;
        plVar29 = unaff_R12;
      } while (unaff_R12 != local_280);
      if (local_280 < (long *)0x2aaaaaaaaaaaaab) {
        plVar29 = (long *)((long)local_280 * 0x30);
        ppuVar32 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(plVar29,8);
        if (ppuVar32 == (undefined **)0x0) goto LAB_0060f44a;
        pcVar34 = (char *)((long)ppuVar18 + local_2b8._0_8_);
        plVar35 = (long *)0x0;
        lVar27 = 0;
        local_2c8 = ppuVar32;
        do {
          plVar19 = *(long **)((long)ppuVar18 + lVar27);
          plVar29 = *(long **)((long)ppuVar18 + lVar27 + 8);
          uVar16 = (*(code *)PTR_pthread_join_00841df0)
                             (*(undefined8 *)((long)ppuVar18 + lVar27 + 0x10),0);
          if (uVar16 != 0) {
LAB_0060f2e9:
            if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
                &PTR_format_error_0058cdd8) {
              core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
                   (undefined *)&PTR_format_error_0058cdd8;
            }
            local_218 = (undefined *)((ulong)uVar16 << 0x20 | 2);
            local_1b8 = (int)&local_218;
            uStack_1b4 = (undefined2)((ulong)&local_218 >> 0x20);
            uStack_1b2 = (undefined2)((ulong)&local_218 >> 0x30);
            uStack_1b0 = 0x748ee0;
            uStack_1ac = 0;
            uStack_1ab = 0;
            uStack_1aa = 0;
            uStack_1a9 = 0;
                    /* try { // try from 0060f329 to 0060f33f has its CatchHandler @ 0060f48c */
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_fmt
                      (&DAT_0020c8a1,&local_1b8,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058d618);
          }
          LOCK();
          bVar37 = plVar29[1] == 1;
          if (bVar37) {
            plVar29[1] = -1;
          }
          UNLOCK();
          if ((!bVar37) || (plVar29[1] = 1, *plVar29 != 1)) {
            core[62e902411887be45]::option::expect_failed
                      ("threads should not terminate unexpectedly",0x29,
                       &PTR_s__rustc_0ef1bc386059596dada8fb65b_002123e8);
LAB_0060f356:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::option::unwrap_failed
                      (&PTR_s__rustc_0ef1bc386059596dada8fb65b_00212400);
          }
          unaff_R12 = (long *)plVar29[2];
          plVar29[2] = -2;
          if (unaff_R12 == (long *)0xfffffffffffffffe) goto LAB_0060f356;
          local_2b8 = *(undefined1 (*) [16])(plVar29 + 3);
          lVar28 = plVar29[5];
          lVar11 = plVar29[6];
          plStack_1a8 = (long *)plVar29[7];
          local_1b8 = (int)lVar28;
          uStack_1b4 = (undefined2)((ulong)lVar28 >> 0x20);
          uStack_1b2 = (undefined2)((ulong)lVar28 >> 0x30);
          uStack_1b0 = (undefined4)lVar11;
          uStack_1ac = (undefined1)((ulong)lVar11 >> 0x20);
          uStack_1ab = (undefined1)((ulong)lVar11 >> 0x28);
          uStack_1aa = (undefined1)((ulong)lVar11 >> 0x30);
          uStack_1a9 = (undefined1)((ulong)lVar11 >> 0x38);
          LOCK();
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
            ::drop_slow(plVar19);
            LOCK();
            *plVar29 = *plVar29 + -1;
            lVar28 = *plVar29;
            UNLOCK();
          }
          else {
            LOCK();
            *plVar29 = *plVar29 + -1;
            lVar28 = *plVar29;
            UNLOCK();
          }
          plVar19 = plStack_208;
          plVar20 = plStack_1a8;
          if (lVar28 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>>>
            ::drop_slow(plVar29);
            plVar19 = plStack_208;
            plVar20 = plStack_1a8;
          }
          plStack_208 = plVar20;
          plStack_1a8 = plStack_208;
          if (unaff_R12 == (long *)0xffffffffffffffff) {
            plStack_208 = plVar19;
            std[c60ef17cbf7de79f]::panic::resume_unwind(local_2b8._0_8_,local_2b8._8_8_);
            goto LAB_0060f44a;
          }
          in_ZMM1 = ZEXT1664(local_2b8);
          local_218 = (undefined *)CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
          puStack_210 = (undefined *)
                        CONCAT17(uStack_1a9,
                                 CONCAT16(uStack_1aa,
                                          CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0))));
          *(long **)((long)local_2c8 + lVar27 * 2) = unaff_R12;
          *(undefined1 (*) [16])((long)local_2c8 + lVar27 * 2 + 8) = local_2b8;
          pcVar2 = (char *)((long)local_2c8 + lVar27 * 2 + 0x18);
          *(undefined **)pcVar2 = local_218;
          *(undefined **)(pcVar2 + 8) = puStack_210;
          *(long **)((long)local_2c8 + lVar27 * 2 + 0x28) = plStack_208;
          plVar35 = (long *)((long)plVar35 + 1);
          lVar28 = lVar27 + 0x18;
          lVar27 = lVar27 + 0x18;
        } while ((char *)((long)ppuVar18 + lVar28) != pcVar34);
        if (((undefined **)((long)sys::A_BASE_0 + -1) < ppuVar18) && (ppuVar18 < sys::A_END_0)) {
          lVar27 = 0x40 - LZCOUNT((long)local_2c0 * 0x18 + -1);
          if ((local_2c0 < (long *)0xaab) ||
             (cVar15 = sys::big_put(ppuVar18,lVar27), cVar15 == '\0')) {
            *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar27 * 8 + -0x3c8);
            *(undefined ***)(in_FS_OFFSET + lVar27 * 8 + -0x3c8) = ppuVar18;
          }
        }
        else {
          free(ppuVar18);
        }
        if (plVar17[3] != 0) {
          unaff_R12 = (long *)0x0;
          do {
            lVar27 = plVar17[2];
            LOCK();
            piVar30 = (int *)(lVar27 + 0x38);
            *piVar30 = *piVar30 + -1;
            UNLOCK();
            if (*piVar30 != 0) {
              piVar30 = (int *)(lVar27 + 0x38);
              do {
                local_1b8 = 0;
                uStack_1b4 = 0;
                uStack_1b2 = 0;
                while (*piVar30 == -1) {
                  puVar33 = (undefined4 *)0x0;
                  if ((char)local_1b8 != '\0') {
                    puVar33 = &uStack_1b0;
                  }
                  lVar27 = syscall(0xca,piVar30,0x89,0xffffffff,puVar33,0,0xffffffff);
                  if ((-1 < lVar27) || (piVar25 = __errno_location(), *piVar25 != 4)) break;
                }
                LOCK();
                iVar3 = *piVar30;
                if (iVar3 == 1) {
                  *piVar30 = 0;
                }
                UNLOCK();
              } while (iVar3 != 1);
            }
          } while (plVar17[3] != 0);
        }
        param_1 = local_2a8;
        if ((char)plVar17[4] != '\0') {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_fmt
                    (&DAT_0020ffb0,0x31,&PTR_s_src_generic_util_rs_0020ff20);
        }
        LOCK();
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
          drop_slow();
        }
        goto LAB_0060dea9;
      }
    }
LAB_0060e529:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    auVar39 = in_ZMM1._0_32_;
LAB_0060e52e:
    param_4 = (long *)0x3fffffffffffff0;
    if (&DAT_0000000f < ppuVar32) goto LAB_0060e54a;
    ppuVar18 = (undefined **)0x0;
LAB_0060e5cf:
    ppuVar22 = (undefined **)((ulong)((long)param_4 + 0xc) & (ulong)ppuVar32);
    auVar38 = vpbroadcastq_avx512vl();
    auVar38 = vpor_avx2(auVar38,_DAT_00203760);
    lVar27 = (long)ppuVar18 - (long)ppuVar22;
    auVar39 = vpcmpeqd_avx2(auVar39,auVar39);
    do {
      auVar40 = vpsllq_avx2(auVar38,4);
      auVar42 = vpsllq_avx2(auVar38,5);
      auVar41._0_8_ = auVar42._0_8_ + auVar40._0_8_;
      auVar41._8_8_ = auVar42._8_8_ + auVar40._8_8_;
      auVar41._16_8_ = auVar42._16_8_ + auVar40._16_8_;
      auVar41._24_8_ = auVar42._24_8_ + auVar40._24_8_;
      vpscatterqq_avx512vl(ZEXT832(unaff_R12) + auVar41,0xffff,auVar39);
      auVar7._0_8_ = auVar38._0_8_ + DAT_00201e20;
      auVar7._8_8_ = auVar38._8_8_ + DAT_00201e20;
      auVar7._16_8_ = auVar38._16_8_ + DAT_00201e20;
      auVar7._24_8_ = auVar38._24_8_ + DAT_00201e20;
      lVar27 = lVar27 + 4;
      auVar38 = auVar7;
    } while (lVar27 != 0);
    if (ppuVar32 != ppuVar22) goto LAB_0060e62b;
  }
LAB_0060e650:
  plVar29 = (long *)((long)plVar35 * 0x18);
  local_2a8 = param_1;
  qVar23 = __rustc[45371133cddedda4]::__rust_alloc(plVar29,8);
  if (qVar23 != 0) {
    local_268[0] = (long *)0x0;
    local_288 = local_2c8 + (long)plVar35 * 6;
    uVar24 = (long)plVar35 * 0x30;
    ppuVar18 = local_2c8;
    ppuVar32 = local_2c8;
    local_278 = plVar35;
    qStack_270 = qVar23;
    do {
      ppuVar32 = ppuVar32 + 6;
      uVar24 = uVar24 - 0x30;
      ppuVar22 = ppuVar18 + 6;
      plVar35 = (long *)*ppuVar18;
      if (plVar35 == (long *)0xffffffffffffffff) break;
      local_2b8._0_8_ = uVar24;
      ppuVar36 = (undefined **)ppuVar18[1];
      plStack_208 = (long *)ppuVar18[5];
      local_218 = ppuVar18[3];
      puStack_210 = ppuVar18[4];
      ppuVar31 = ppuVar36 + (long)ppuVar18[2] * 7;
      ppuVar10 = ppuVar36;
      local_2c0 = plVar35;
      local_2a0 = ppuVar36;
      local_248 = ppuVar22;
      local_240 = local_268[0];
      if (ppuVar18[2] == (undefined *)0x0) {
LAB_0060e9f0:
        uVar24 = (ulong)((long)ppuVar31 - (long)ppuVar36) / 0x38;
        if (ppuVar31 != ppuVar36) {
          ppuVar36 = ppuVar36 + 5;
          do {
            puVar4 = ppuVar36[-4];
            uVar26 = (ulong)puVar4 ^ 0x8000000000000000;
            if (-1 < (long)puVar4) {
              uVar26 = 1;
            }
            if (uVar26 != 0) {
              if (uVar26 == 1) {
                if (puVar4 != (undefined *)0x0) {
                  ppuVar18 = (undefined **)ppuVar36[-3];
                  if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar18 < sys::A_BASE_0)) ||
                     (sys::A_END_0 <= ppuVar18)) {
                    free(ppuVar18);
                  }
                  else {
                    uVar26 = (long)puVar4 * 0x20 - 1;
                    lVar27 = LZCOUNT(uVar26);
                    lVar28 = 0x40 - lVar27;
                    if ((uVar26 < 0x10000) ||
                       (cVar15 = sys::big_put(ppuVar18,lVar28), cVar15 == '\0')) {
                      if (lVar27 == 0) goto LAB_0060f3fb;
                      *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
                      *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = ppuVar18;
                    }
                  }
                }
                if (ppuVar36[-1] != (undefined *)0x0) {
                  ppuVar18 = (undefined **)*ppuVar36;
                  if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar18 < sys::A_BASE_0)) ||
                     (sys::A_END_0 <= ppuVar18)) goto LAB_0060ea1b;
                  uVar26 = (long)ppuVar36[-1] << 2;
                  if (uVar26 < 0x11) {
                    uVar26 = 0x10;
                  }
                  lVar27 = LZCOUNT(uVar26 - 1);
                  lVar28 = 0x40 - lVar27;
                  if ((uVar26 - 1 < 0x10000) ||
                     (cVar15 = sys::big_put(ppuVar18,lVar28), cVar15 == '\0')) {
                    if (lVar27 == 0) goto LAB_0060f425;
                    *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
                    *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = ppuVar18;
                  }
                }
              }
              else if (ppuVar36[-3] != (undefined *)0x0) {
                ppuVar18 = (undefined **)ppuVar36[-2];
                if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar18 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= ppuVar18)) {
LAB_0060ea1b:
                  free(ppuVar18);
                }
                else {
                  uVar26 = (long)ppuVar36[-3] * 0x18 - 1;
                  lVar27 = LZCOUNT(uVar26);
                  lVar28 = 0x40 - lVar27;
                  if ((uVar26 < 0x10000) || (cVar15 = sys::big_put(ppuVar18,lVar28), cVar15 == '\0')
                     ) {
                    if (lVar27 == 0) {
LAB_0060f3fb:
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (lVar28,0x40,&PTR_s_src_sys_rs_002110f0);
                    }
                    *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
                    *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = ppuVar18;
                  }
                }
              }
            }
            ppuVar36 = ppuVar36 + 7;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      else {
        do {
          ppuVar36 = ppuVar10 + 7;
          puVar4 = ppuVar10[1];
          if (puVar4 == (undefined *)0xffffffffffffffff) goto LAB_0060e9f0;
          ppuVar18 = (undefined **)*ppuVar10;
          local_198 = ppuVar10[6];
          puVar12 = ppuVar10[2];
          puVar13 = ppuVar10[3];
          plStack_1a8 = (long *)ppuVar10[4];
          puStack_1a0 = ppuVar10[5];
          local_1b8 = (int)puVar12;
          uStack_1b4 = (undefined2)((ulong)puVar12 >> 0x20);
          uStack_1b2 = (undefined2)((ulong)puVar12 >> 0x30);
          uStack_1b0 = SUB84(puVar13,0);
          uStack_1ac = (undefined1)((ulong)puVar13 >> 0x20);
          uStack_1ab = (undefined1)((ulong)puVar13 >> 0x28);
          uStack_1aa = (undefined1)((ulong)puVar13 >> 0x30);
          uStack_1a9 = (undefined1)((ulong)puVar13 >> 0x38);
          if (param_2 <= ppuVar18) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (ppuVar18,param_2,&PTR_s_src_generic_util_rs_0020ff38);
          }
          plVar35 = unaff_R12 + (long)ppuVar18 * 6;
          uVar24 = unaff_R12[(long)ppuVar18 * 6];
          if (uVar24 != 0xffffffffffffffff) {
            uVar26 = uVar24 ^ 0x8000000000000000;
            if (-1 < (long)uVar24) {
              uVar26 = 1;
            }
            if (uVar26 != 0) {
              if (uVar26 == 1) {
                if (uVar24 != 0) {
                  ppuVar18 = (undefined **)plVar35[1];
                  if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar18 < sys::A_BASE_0)) ||
                     (sys::A_END_0 <= ppuVar18)) {
                    free(ppuVar18);
                  }
                  else {
                    uVar24 = uVar24 * 0x20 - 1;
                    lVar28 = LZCOUNT(uVar24);
                    lVar27 = 0x40 - lVar28;
                    if (0xffff < uVar24) {
                      local_2d8 = lVar28;
                      local_2d0 = lVar27;
                      cVar15 = sys::big_put(ppuVar18,lVar27);
                      lVar27 = local_2d0;
                      lVar28 = local_2d8;
                      if (cVar15 != '\0') goto LAB_0060e91c;
                    }
                    if (lVar28 == 0) goto LAB_0060f410;
                    *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar27 * 8 + -0x3c8);
                    *(undefined ***)(in_FS_OFFSET + lVar27 * 8 + -0x3c8) = ppuVar18;
                  }
                }
LAB_0060e91c:
                if (plVar35[3] != 0) {
                  ppuVar18 = (undefined **)plVar35[4];
                  if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar18 < sys::A_BASE_0)) ||
                     (sys::A_END_0 <= ppuVar18)) goto LAB_0060e740;
                  uVar24 = plVar35[3] << 2;
                  if (uVar24 < 0x11) {
                    uVar24 = 0x10;
                  }
LAB_0060e96a:
                  lVar28 = LZCOUNT(uVar24 - 1);
                  lVar27 = 0x40 - lVar28;
                  if (0xffff < uVar24 - 1) {
                    local_2d8 = lVar28;
                    local_2d0 = lVar27;
                    cVar15 = sys::big_put(ppuVar18,lVar27);
                    lVar27 = local_2d0;
                    lVar28 = local_2d8;
                    if (cVar15 != '\0') goto LAB_0060e748;
                  }
                  if (lVar28 == 0) {
LAB_0060f410:
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (lVar27,0x40,&PTR_s_src_sys_rs_002110f0);
                  }
                  *ppuVar18 = *(undefined **)(in_FS_OFFSET + lVar27 * 8 + -0x3c8);
                  *(undefined ***)(in_FS_OFFSET + lVar27 * 8 + -0x3c8) = ppuVar18;
                }
              }
              else if (plVar35[1] != 0) {
                ppuVar18 = (undefined **)plVar35[2];
                if (((sys::A_BASE_0 != (undefined **)0x0) && (sys::A_BASE_0 <= ppuVar18)) &&
                   (ppuVar18 < sys::A_END_0)) {
                  uVar24 = plVar35[1] * 0x18;
                  goto LAB_0060e96a;
                }
LAB_0060e740:
                free(ppuVar18);
              }
            }
          }
LAB_0060e748:
          *plVar35 = (long)puVar4;
          plVar35[1] = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
          plVar35[2] = CONCAT17(uStack_1a9,
                                CONCAT16(uStack_1aa,
                                         CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0))));
          plVar35[3] = (long)plStack_1a8;
          plVar35[4] = (long)puStack_1a0;
          plVar35[5] = (long)local_198;
          ppuVar10 = ppuVar36;
        } while (ppuVar36 != ppuVar31);
      }
      uVar24 = local_2b8._0_8_;
      if (local_2c0 != (long *)0x0) {
        if (((sys::A_BASE_0 == (undefined **)0x0) || (local_2a0 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= local_2a0)) {
          free(local_2a0);
        }
        else {
          uVar26 = (long)local_2c0 * 0x38 - 1;
          lVar27 = LZCOUNT(uVar26);
          lVar28 = 0x40 - lVar27;
          if ((uVar26 < 0x10000) || (cVar15 = sys::big_put(local_2a0,lVar28), cVar15 == '\0')) {
            if (lVar27 == 0) {
LAB_0060f425:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar28,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *local_2a0 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
            *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = local_2a0;
          }
        }
      }
      plVar35 = local_240;
      if (local_240 == local_278) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(&local_278);
        qVar23 = qStack_270;
      }
      *(long **)(qVar23 + 0x10 + (long)plVar35 * 0x18) = plStack_208;
      puVar21 = (undefined8 *)(qVar23 + (long)plVar35 * 0x18);
      *puVar21 = local_218;
      puVar21[1] = puStack_210;
      local_268[0] = (long *)((long)plVar35 + 1);
      ppuVar18 = local_248;
      ppuVar22 = local_248;
    } while (local_248 != local_288);
    if (local_288 != ppuVar22) {
      uVar24 = uVar24 / 0x30;
      do {
        core[62e902411887be45]::ptr::drop_glue::
        <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>
                  (ppuVar32);
        ppuVar32 = ppuVar32 + 6;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (((sys::A_BASE_0 == (undefined **)0x0) || (local_2c8 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= local_2c8)) {
      free(local_2c8);
    }
    else {
      uVar24 = (long)local_280 * 0x30 - 1;
      lVar28 = LZCOUNT(uVar24);
      lVar27 = 0x40 - lVar28;
      if ((uVar24 < 0x10000) || (cVar15 = sys::big_put(local_2c8,lVar27), cVar15 == '\0')) {
        if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *local_2c8 = *(undefined **)(in_FS_OFFSET + lVar27 * 8 + -0x3c8);
        *(undefined ***)(in_FS_OFFSET + lVar27 * 8 + -0x3c8) = local_2c8;
      }
    }
    plVar29 = (long *)(local_290 + (long)unaff_R12);
    plVar35 = unaff_R12;
    plVar17 = unaff_R12;
    if (param_2 != (undefined **)0x0) {
      for (uVar24 = (ulong)param_2 & 7; uVar24 != 0; uVar24 = uVar24 - 1) {
        if (*plVar35 == -1) goto LAB_0060f2a5;
        plVar35 = plVar35 + 6;
      }
      plVar17 = plVar29;
      if (6 < ((ulong)((long)param_2 + -1) & 0xfffffffffffffff)) {
        do {
          if (((*plVar35 == -1) || (plVar35[6] == -1)) ||
             ((plVar35[0xc] == -1 ||
              ((((plVar35[0x12] == -1 || (plVar35[0x18] == -1)) || (plVar35[0x1e] == -1)) ||
               ((plVar35[0x24] == -1 || (plVar35[0x2a] == -1)))))))) {
LAB_0060f2a5:
            core[62e902411887be45]::option::expect_failed
                      ("job result",10,&PTR_s_src_generic_util_rs_00210548);
LAB_0060f2bc:
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x48);
          }
          plVar35 = plVar35 + 0x30;
        } while (plVar35 != plVar29);
      }
    }
    if ((long)plVar29 - (long)plVar35 != 0) {
      uVar24 = (ulong)((long)plVar29 - (long)plVar35) / 0x30;
      do {
        if (*plVar35 != -1) {
          core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::generic::P1>(plVar35)
          ;
        }
        plVar35 = plVar35 + 6;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    local_2a8->e_shoff = (qword)local_268[0];
    local_2a8->e_entry = (qword)local_278;
    local_2a8->e_phoff = qStack_270;
    *(undefined ***)local_2a8 = local_298;
    *(long **)&local_2a8->e_ident_abiversion = unaff_R12;
    *(ulong *)&local_2a8->e_type =
         ((ulong)((long)plVar17 - (long)unaff_R12) >> 4) * -0x5555555555555555;
    return;
  }
LAB_0060f44a:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,plVar29);
LAB_0060e545:
  <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
  auVar39 = in_ZMM1._0_32_;
LAB_0060e54a:
  ppuVar22 = (undefined **)((ulong)ppuVar32 & (ulong)param_4);
  auVar39 = vpcmpeqd_avx2(auVar39,auVar39);
  ppuVar18 = ppuVar22;
  auVar38 = _DAT_00203760;
  do {
    auVar42 = vpsllq_avx2(auVar38,4);
    auVar41 = vpsllq_avx2(auVar38,5);
    auVar40._0_8_ = auVar41._0_8_ + auVar42._0_8_;
    auVar40._8_8_ = auVar41._8_8_ + auVar42._8_8_;
    auVar40._16_8_ = auVar41._16_8_ + auVar42._16_8_;
    auVar40._24_8_ = auVar41._24_8_ + auVar42._24_8_;
    vpscatterqq_avx512vl(ZEXT832(unaff_R12) + auVar40,0xffff,auVar39);
    vpscatterqq_avx512vl(ZEXT832(unaff_R12) + ZEXT832(0xc0) + auVar40,0xffff,auVar39);
    vpscatterqq_avx512vl(ZEXT832(unaff_R12) + ZEXT832(0x180) + auVar40,0xffff,auVar39);
    vpscatterqq_avx512vl(ZEXT832(unaff_R12) + ZEXT832(0x240) + auVar40,0xffff,auVar39);
    auVar42._0_8_ = auVar38._0_8_ + DAT_00201e58;
    auVar42._8_8_ = auVar38._8_8_ + DAT_00201e58;
    auVar42._16_8_ = auVar38._16_8_ + DAT_00201e58;
    auVar42._24_8_ = auVar38._24_8_ + DAT_00201e58;
    ppuVar18 = ppuVar18 + -2;
    auVar38 = auVar42;
  } while (ppuVar18 != (undefined **)0x0);
  if (ppuVar32 != ppuVar22) {
    ppuVar18 = ppuVar22;
    if (((ulong)ppuVar32 & 0xc) != 0) goto LAB_0060e5cf;
LAB_0060e62b:
    plVar17 = unaff_R12 + (long)ppuVar22 * 6;
    lVar27 = (long)ppuVar32 - (long)ppuVar22;
    do {
      *plVar17 = -1;
      plVar17 = plVar17 + 6;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  goto LAB_0060e650;
}


// ==== pipeline::generic::util::par_run::<pipeline::generic::P2Bufs, pipeline::generic::P2, <pipeline::generic::P2Bufs as core::default::Default>::default, pipeline::generic::run::{closure#10}> @ 0060f4e0 (6011 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<pipeline[509596c7b52975b2]::generic::P2Bufs,
   pipeline[509596c7b52975b2]::generic::P2, <pipeline[509596c7b52975b2]::generic::P2Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#10}> */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>
          (Elf64_Ehdr *param_1,Elf64_Ehdr *param_2,Elf64_Ehdr *param_3,Elf64_Ehdr *param_4)

{
  qword *pqVar1;
  int iVar2;
  qword qVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 auVar8 [32];
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  Elf64_Ehdr *pEVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Elf64_Ehdr *pEVar18;
  qword qVar19;
  long *plVar20;
  long *plVar21;
  Elf64_Ehdr *pEVar22;
  Elf64_Ehdr *pEVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  byte bVar32;
  char cVar33;
  uint uVar34;
  long *plVar35;
  undefined8 *puVar36;
  Elf64_Ehdr *pEVar37;
  Elf64_Ehdr *pEVar38;
  ulong uVar39;
  ulong uVar40;
  Elf64_Ehdr *pEVar41;
  int *piVar42;
  Elf64_Ehdr *pEVar43;
  long lVar44;
  Elf64_Ehdr *pEVar45;
  long lVar46;
  long lVar47;
  int *piVar48;
  undefined **ppuVar49;
  undefined1 *puVar50;
  long *unaff_R13;
  Elf64_Ehdr *pEVar51;
  dword *pdVar52;
  long lVar53;
  long in_FS_OFFSET;
  bool bVar54;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [16];
  Elf64_Ehdr *local_3b8;
  undefined1 local_391;
  Elf64_Ehdr *local_390;
  Elf64_Ehdr *local_388;
  Elf64_Ehdr *local_380;
  Elf64_Ehdr *local_378;
  Elf64_Ehdr *local_370;
  Elf64_Ehdr *local_368;
  Elf64_Ehdr *local_360;
  ulong local_358;
  Elf64_Ehdr *local_350;
  undefined1 local_348 [16];
  Elf64_Ehdr *local_338;
  Elf64_Ehdr *local_330;
  long local_328;
  undefined1 local_320 [24];
  Elf64_Ehdr *local_308;
  Elf64_Ehdr *pEStack_300;
  Elf64_Ehdr *pEStack_2f8;
  qword qStack_2f0;
  long *local_2e8;
  long *plStack_2e0;
  Elf64_Ehdr *pEStack_2d8;
  Elf64_Ehdr *pEStack_2d0;
  long local_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long local_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long *local_288;
  long *plStack_280;
  Elf64_Ehdr *pEStack_278;
  Elf64_Ehdr *pEStack_270;
  undefined1 local_268 [24];
  qword qStack_250;
  long *plStack_248;
  long *plStack_240;
  Elf64_Ehdr *pEStack_238;
  Elf64_Ehdr *pEStack_230;
  long local_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 local_e8;
  undefined8 local_d8 [3];
  undefined1 local_c0;
  undefined *local_b8;
  qword qStack_b0;
  qword qStack_a8;
  qword qStack_a0;
  qword local_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  qword qStack_70;
  qword qStack_68;
  qword qStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  pEVar51 = param_2;
  if (param_3 < param_2) {
    pEVar51 = param_3;
  }
  local_328 = 0;
  local_288 = (long *)&local_391;
  plStack_280 = &local_328;
  pEVar41 = param_2;
  pEStack_278 = param_4;
  pEStack_270 = param_2;
  if (param_3 == (Elf64_Ehdr *)&DAT_00000001) {
    local_388 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(0x98,8);
    if (local_388 == (Elf64_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x98);
    }
    <pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#10}>
    ::_closure_0_(local_388,&local_288);
    pEVar51 = (Elf64_Ehdr *)&DAT_00000001;
    pEVar37 = (Elf64_Ehdr *)&DAT_00000001;
    if ((Elf64_Ehdr *)0x249249249249249 < param_2) goto LAB_0060fbae;
    goto LAB_0060f5a9;
  }
  uVar39 = *(ulong *)(in_FS_OFFSET + -0x30);
  local_368 = param_1;
  if (uVar39 < 3) {
    if (uVar39 == 2) {
      if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
        pEVar37 = (Elf64_Ehdr *)0x0;
        lVar46 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        do {
          pEVar38 = (Elf64_Ehdr *)&_nl_current_LC_CTYPE_used;
          if (lVar46 == -1) {
LAB_0060fcad:
            <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
            goto LAB_0060fcb5;
          }
          pEVar37 = (Elf64_Ehdr *)(lVar46 + 1);
          LOCK();
          bVar54 = lVar46 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          if (bVar54) {
            <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = (long)pEVar37;
          }
          else {
            lVar46 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          }
          UNLOCK();
        } while (!bVar54);
        *(Elf64_Ehdr **)(in_FS_OFFSET + -0x28) = pEVar37;
      }
      param_1 = (Elf64_Ehdr *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
    }
    else {
      param_1 = (Elf64_Ehdr *)std[c60ef17cbf7de79f]::thread::current::init_current(uVar39);
    }
  }
  else {
    LOCK();
    plVar35 = (long *)(uVar39 - 0x10);
    lVar46 = *plVar35;
    *plVar35 = *plVar35 + 1;
    UNLOCK();
    if (*plVar35 == 0 || SCARRY8(lVar46,1) != *plVar35 < 0) {
LAB_00610b70:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    param_1 = (Elf64_Ehdr *)(uVar39 - 0x10);
  }
  pEVar41 = (Elf64_Ehdr *)&DAT_00000008;
  pEVar38 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc();
  if (pEVar38 == (Elf64_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
  }
  *(undefined **)pEVar38 = (undefined *)0x1;
  pEVar38->e_ident_abiversion = 1;
  pEVar38->e_ident_pad[0] = 0;
  pEVar38->e_ident_pad[1] = 0;
  pEVar38->e_ident_pad[2] = 0;
  pEVar38->e_ident_pad[3] = 0;
  pEVar38->e_ident_pad[4] = 0;
  pEVar38->e_ident_pad[5] = 0;
  pEVar38->e_ident_pad[6] = 0;
  *(Elf64_Ehdr **)&pEVar38->e_type = param_1;
  pEVar38->e_entry = 0;
  *(undefined1 *)&pEVar38->e_phoff = 0;
  param_4 = (Elf64_Ehdr *)0x555555555555556;
  if ((Elf64_Ehdr *)0x555555555555555 < pEVar51) goto LAB_0060fbae;
  pEVar45 = (Elf64_Ehdr *)((long)pEVar51 * 0x18);
  pEVar41 = (Elf64_Ehdr *)&DAT_00000008;
  local_380 = pEVar45;
  pEVar37 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc();
  if (pEVar37 == (Elf64_Ehdr *)0x0) {
LAB_00610c81:
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_380);
  }
  lVar46 = 0;
  local_378 = pEVar37;
  local_370 = pEVar51;
  do {
    local_d8[0] = 0xffffffffffffffff;
    local_e8 = 0;
    local_c0 = 0;
    LOCK();
    puVar5 = *(undefined **)pEVar38;
    *(undefined **)pEVar38 = *(undefined **)pEVar38 + 1;
    UNLOCK();
    if (*(undefined **)pEVar38 == (undefined *)0x0 ||
        SCARRY8((long)puVar5,1) != (long)*(undefined **)pEVar38 < 0) goto LAB_00610b70;
    if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == (char *)0x0
       ) {
      local_268[8] = 0x5f;
      local_268[9] = 0x53;
      local_268[10] = 0x54;
      local_268[0xb] = 0x41;
      local_268[0xc] = 0x43;
      local_268[0xd] = 0x4b;
      local_268._0_4_ = 0x54535552;
      local_268[4] = 0x5f;
      local_268[5] = 0x4d;
      local_268[6] = 0x49;
      local_268[7] = 0x4e;
      local_268[0xe] = 0;
      uVar9 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
      auVar59[7] = local_268[0xf];
      auVar59._0_7_ = 0x4b434154535f;
      auVar59._8_8_ = 0;
      uVar10 = vptestmb_avx512vl(auVar59,auVar59);
      bVar54 = (byte)((char)((ushort)uVar9 >> 4) << 4 | (byte)uVar9 & (byte)uVar10 & 0xf) == 0xff;
      param_4 = (Elf64_Ehdr *)CONCAT71((int7)((ulong)param_4 >> 8),bVar54);
      if (bVar54) {
        pEVar45 = (Elf64_Ehdr *)local_320;
        pEVar41 = (Elf64_Ehdr *)local_268;
        std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_();
        pEVar51 = (Elf64_Ehdr *)local_320._8_8_;
        unaff_R13 = (long *)local_320._0_8_;
        ppuVar49 = (undefined **)local_320._8_8_;
        if ((long *)local_320._0_8_ == (long *)0xfffffffffffffffe) goto LAB_0060f88a;
        if ((long *)local_320._0_8_ == (long *)0xffffffffffffffff) goto LAB_0060f8a3;
        pEVar45 = (Elf64_Ehdr *)local_268;
        pEVar41 = (Elf64_Ehdr *)local_320._8_8_;
        core[62e902411887be45]::str::converts::from_utf8(pEVar45,local_320._8_8_,local_320._16_8_);
        if ((local_268._0_4_ == 1) ||
           (param_4 = (Elf64_Ehdr *)local_268._16_8_,
           (Elf64_Ehdr *)local_268._16_8_ == (Elf64_Ehdr *)0x0)) {
LAB_0060fae4:
          pEVar43 = &__preinit_array_end;
        }
        else {
          pEVar41 = (Elf64_Ehdr *)
                    CONCAT17(local_268[0xf],
                             CONCAT16(local_268[0xe],
                                      CONCAT15(local_268[0xd],
                                               CONCAT14(local_268[0xc],local_268._8_4_))));
          if ((Elf64_Ehdr *)local_268._16_8_ == (Elf64_Ehdr *)&DAT_00000001) {
            bVar32 = pEVar41->e_ident_magic_num;
            if ((bVar32 == 0x2b) || (bVar32 == 0x2d)) goto LAB_0060fae4;
          }
          else {
            bVar32 = pEVar41->e_ident_magic_num;
          }
          pEVar45 = (Elf64_Ehdr *)(ulong)(bVar32 == 0x2b);
          pEVar41 = (Elf64_Ehdr *)
                    (pEVar45->e_ident_magic_str + (long)(pEVar41->e_ident_magic_str + -2));
          if (0x10 < (ulong)(local_268._16_8_ - (long)pEVar45)) {
            pEVar37 = (Elf64_Ehdr *)(local_268._16_8_ + -(long)pEVar45);
            param_4 = (Elf64_Ehdr *)-(long)pEVar37;
            pEVar45 = (Elf64_Ehdr *)0x0;
            pEVar43 = (Elf64_Ehdr *)0x0;
            while( true ) {
              if (pEVar45 == pEVar37) goto joined_r0x0060fb0e;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = pEVar43;
              uVar39 = SUB168(auVar6 * ZEXT816(10),0);
              if (SUB168(auVar6 * ZEXT816(10),8) != 0) break;
              uVar34 = (byte)pEVar45->e_ident_magic_str[(long)(pEVar41->e_ident_magic_str + -2)] -
                       0x30;
              pEVar43 = (Elf64_Ehdr *)(uVar39 + uVar34);
              if ((9 < uVar34) ||
                 (pEVar45 = (Elf64_Ehdr *)pEVar45->e_ident_magic_str, CARRY8(uVar39,(ulong)uVar34)))
              break;
            }
            goto LAB_0060fae4;
          }
          if ((Elf64_Ehdr *)local_268._16_8_ == pEVar45) {
            pEVar43 = (Elf64_Ehdr *)0x0;
          }
          else {
            lVar44 = local_268._16_8_ + -(long)pEVar45;
            param_4 = (Elf64_Ehdr *)-lVar44;
            lVar53 = 0;
            pEVar43 = (Elf64_Ehdr *)0x0;
            do {
              uVar34 = (byte)pEVar41->e_ident_magic_str[lVar53 + -1] - 0x30;
              if (9 < uVar34) {
                pEVar43 = &__preinit_array_end;
                break;
              }
              pEVar45 = (Elf64_Ehdr *)((long)pEVar43 * 5);
              pEVar43 = (Elf64_Ehdr *)((ulong)uVar34 + (long)pEVar43 * 10);
              lVar53 = lVar53 + 1;
            } while (lVar53 != lVar44);
          }
        }
joined_r0x0060fb0e:
        if (unaff_R13 != (long *)0x0) {
          if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar51 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pEVar51)) {
            free(pEVar51);
            pEVar45 = pEVar51;
          }
          else {
            if (unaff_R13 < &DAT_00000011) {
              unaff_R13 = (long *)&DAT_00000010;
            }
            unaff_R13 = (long *)((long)unaff_R13 + -1);
            pEVar37 = (Elf64_Ehdr *)(0x40 - LZCOUNT(unaff_R13));
            if ((long *)0xffff < unaff_R13) {
              pEVar41 = pEVar37;
              pEVar45 = pEVar51;
              cVar33 = sys::big_put();
              if (cVar33 != '\0') goto LAB_0060f8a9;
            }
            *(undefined **)pEVar51 = *(undefined **)(in_FS_OFFSET + (long)pEVar37 * 8 + -0x3c8);
            *(Elf64_Ehdr **)(in_FS_OFFSET + (long)pEVar37 * 8 + -0x3c8) = pEVar51;
          }
        }
      }
      else {
        ppuVar49 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_0060f88a:
        uVar34 = ((uint)ppuVar49 & 3) - 2;
        param_4 = (Elf64_Ehdr *)(ulong)uVar34;
        if ((1 < uVar34) && (((ulong)ppuVar49 & 3) != 0)) {
          pEVar45 = (Elf64_Ehdr *)((long)&((Elf64_Ehdr *)((long)ppuVar49 + -0x40))->e_shstrndx + 1);
          (**(code **)((long)&((Elf64_Ehdr *)ppuVar49)->e_version + 3))();
        }
LAB_0060f8a3:
        pEVar43 = &__preinit_array_end;
      }
LAB_0060f8a9:
      std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 =
           pEVar43->e_ident_magic_str;
      pEVar37 = pEVar45;
      pEVar45 = pEVar43;
    }
    else {
      pEVar37 = pEVar45;
      pEVar45 = (Elf64_Ehdr *)
                (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 + -1)
      ;
    }
    pEVar51 = (Elf64_Ehdr *)(lVar46 + 1);
    lVar53 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
    do {
      local_3b8 = pEVar38;
      if (lVar53 == -1) goto LAB_0060fcad;
      pEVar37 = (Elf64_Ehdr *)(lVar53 + 1);
      LOCK();
      bVar54 = lVar53 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      if (bVar54) {
        <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = (long)pEVar37;
      }
      else {
        lVar53 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar54);
    plVar35 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(pEVar37,local_d8);
    local_320._0_8_ = plVar35;
    std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(local_268,local_320);
    unaff_R13 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0xb0,8);
    if (unaff_R13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0xb0);
    }
    *unaff_R13 = 1;
    unaff_R13[1] = 1;
    unaff_R13[2] = (long)pEVar38;
    unaff_R13[3] = -2;
    LOCK();
    lVar53 = *unaff_R13;
    *unaff_R13 = *unaff_R13 + 1;
    UNLOCK();
    if (*unaff_R13 == 0 || SCARRY8(lVar53,1) != *unaff_R13 < 0) goto LAB_00610b70;
    local_2e8 = local_288;
    plStack_2e0 = plStack_280;
    pEStack_2d8 = pEStack_278;
    pEStack_2d0 = pEStack_270;
    local_308 = (Elf64_Ehdr *)CONCAT26(local_268._6_2_,CONCAT24(local_268._4_2_,local_268._0_4_));
    pEStack_300 = (Elf64_Ehdr *)
                  CONCAT17(local_268[0xf],
                           CONCAT16(local_268[0xe],
                                    CONCAT15(local_268[0xd],CONCAT14(local_268[0xc],local_268._8_4_)
                                            )));
    pEStack_2f8 = (Elf64_Ehdr *)local_268._16_8_;
    qStack_2f0 = qStack_250;
    LOCK();
    pqVar1 = &pEVar38->e_entry;
    qVar3 = *pqVar1;
    *pqVar1 = *pqVar1 + 1;
    UNLOCK();
    if (*pqVar1 == 0 || SCARRY8(qVar3,1) != (long)*pqVar1 < 0) {
      uVar34 = <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(&pEVar38->e_type);
LAB_00610b0e:
      if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
          &PTR_format_error_0058cdd8) {
        core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
             (undefined *)&PTR_format_error_0058cdd8;
      }
      local_308 = (Elf64_Ehdr *)((ulong)uVar34 << 0x20 | 2);
      local_268._0_4_ = SUB84(&local_308,0);
      local_268._4_2_ = SUB82((ulong)&local_308 >> 0x20,0);
      local_268._6_2_ = SUB82((ulong)&local_308 >> 0x30,0);
      local_268[8] = 0xe0;
      local_268[9] = 0x8e;
      local_268[10] = 0x74;
      local_268[0xb] = 0;
      local_268[0xc] = 0;
      local_268[0xd] = 0;
      local_268[0xe] = 0;
      local_268[0xf] = 0;
                    /* try { // try from 00610b59 to 00610b6f has its CatchHandler @ 00610ca5 */
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt
                (&DAT_0020c8a1,local_268,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058d618);
    }
    puVar36 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x48,8);
    if (puVar36 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x48);
    }
    puVar36[4] = local_2e8;
    puVar36[5] = plStack_2e0;
    puVar36[6] = pEStack_2d8;
    puVar36[7] = pEStack_2d0;
    *puVar36 = local_308;
    puVar36[1] = pEStack_300;
    puVar36[2] = pEStack_2f8;
    puVar36[3] = qStack_2f0;
    puVar36[8] = unaff_R13;
    LOCK();
    lVar53 = *plVar35;
    *plVar35 = *plVar35 + 1;
    UNLOCK();
    if (*plVar35 == 0 || SCARRY8(lVar53,1) != *plVar35 < 0) goto LAB_00610b70;
    pEVar41 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
    if (pEVar41 == (Elf64_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
    }
    *(long **)pEVar41 = plVar35;
    *(undefined8 **)&pEVar41->e_ident_abiversion = puVar36;
    *(undefined ***)&pEVar41->e_type =
         &
         PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>::_closure_1_>_0020ffe8
    ;
    auVar59 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new();
    pEVar43 = local_370;
    pEVar37 = local_378;
    if ((auVar59._0_8_ & 1) != 0) {
      LOCK();
      *unaff_R13 = *unaff_R13 + -1;
      UNLOCK();
      if (*unaff_R13 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>>>
        ::drop_slow(unaff_R13);
      }
      LOCK();
      *plVar35 = *plVar35 + -1;
      UNLOCK();
      if (*plVar35 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
        ::drop_slow(plVar35);
      }
      local_268._0_4_ = auVar59._8_4_;
      local_268._4_2_ = auVar59._12_2_;
      local_268._6_2_ = auVar59._14_2_;
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::result::unwrap_failed
                ("failed to spawn thread",0x16,local_268,
                 &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                 &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
    }
    *(long **)(local_378->e_ident_magic_str + lVar46 * 0x18 + -1) = plVar35;
    *(long **)(local_378->e_ident_pad + lVar46 * 0x18 + -1) = unaff_R13;
    *(long *)(local_378->e_ident_pad + lVar46 * 0x18 + 7) = auVar59._8_8_;
    lVar46 = (long)pEVar51;
  } while (pEVar51 != local_370);
  param_1 = pEVar38;
  pEVar51 = local_370;
  if ((Elf64_Ehdr *)0xd79435e50d7943 < local_370) goto LAB_0060fbae;
  lVar46 = (long)local_370 * 0x98;
  if (lVar46 == 0) goto LAB_00610780;
  pEVar41 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar46,8);
  local_390 = pEVar43;
  if (pEVar41 == (Elf64_Ehdr *)0x0) {
LAB_0061075c:
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar46);
  }
  do {
    local_360 = (Elf64_Ehdr *)
                (pEVar37->e_ident_magic_str + (long)(local_380->e_ident_magic_str + -2));
    pEVar51 = (Elf64_Ehdr *)0x0;
    local_388 = pEVar41;
    do {
      plVar35 = *(long **)pEVar37;
      plVar4 = *(long **)&pEVar37->e_ident_abiversion;
      uVar9._0_2_ = pEVar37->e_type;
      uVar9._2_2_ = pEVar37->e_machine;
      uVar9._4_4_ = pEVar37->e_version;
      uVar34 = (*(code *)PTR_pthread_join_00841df0)(uVar9,0);
      if (uVar34 != 0) goto LAB_00610b0e;
      LOCK();
      bVar54 = plVar4[1] == 1;
      if (bVar54) {
        plVar4[1] = -1;
      }
      UNLOCK();
      if ((!bVar54) || (plVar4[1] = 1, *plVar4 != 1)) {
        core[62e902411887be45]::option::expect_failed
                  ("threads should not terminate unexpectedly",0x29,
                   &PTR_s__rustc_0ef1bc386059596dada8fb65b_002123e8);
LAB_00610b86:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::option::unwrap_failed
                  (&PTR_s__rustc_0ef1bc386059596dada8fb65b_00212400);
      }
      puVar5 = (undefined *)plVar4[3];
      plVar4[3] = -2;
      if (puVar5 == (undefined *)0xfffffffffffffffe) goto LAB_00610b86;
      local_348 = *(undefined1 (*) [16])(plVar4 + 4);
      local_208 = plVar4[0x12];
      lStack_200 = plVar4[0x13];
      lStack_1f8 = plVar4[0x14];
      lStack_1f0 = plVar4[0x15];
      local_228 = plVar4[0xe];
      lStack_220 = plVar4[0xf];
      lStack_218 = plVar4[0x10];
      lStack_210 = plVar4[0x11];
      plStack_248 = (long *)plVar4[10];
      plStack_240 = (long *)plVar4[0xb];
      pEStack_238 = (Elf64_Ehdr *)plVar4[0xc];
      pEStack_230 = (Elf64_Ehdr *)plVar4[0xd];
      lVar46 = plVar4[6];
      lVar53 = plVar4[7];
      local_268._16_8_ = plVar4[8];
      qStack_250 = plVar4[9];
      local_268._0_4_ = SUB84(lVar46,0);
      local_268._4_2_ = SUB82((ulong)lVar46 >> 0x20,0);
      local_268._6_2_ = SUB82((ulong)lVar46 >> 0x30,0);
      local_268._8_4_ = SUB84(lVar53,0);
      local_268[0xc] = (byte)((ulong)lVar53 >> 0x20);
      local_268[0xd] = (byte)((ulong)lVar53 >> 0x28);
      local_268[0xe] = (byte)((ulong)lVar53 >> 0x30);
      local_268[0xf] = (byte)((ulong)lVar53 >> 0x38);
      LOCK();
      *plVar35 = *plVar35 + -1;
      UNLOCK();
      if (*plVar35 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
        ::drop_slow(plVar35);
        LOCK();
        *plVar4 = *plVar4 + -1;
        lVar46 = *plVar4;
        UNLOCK();
      }
      else {
        LOCK();
        *plVar4 = *plVar4 + -1;
        lVar46 = *plVar4;
        UNLOCK();
      }
      pEVar38 = local_378;
      pEVar45 = pEStack_2f8;
      qVar3 = qStack_2f0;
      plVar35 = local_2e8;
      plVar11 = plStack_2e0;
      pEVar43 = pEStack_2d8;
      pEVar12 = pEStack_2d0;
      lVar53 = local_2c8;
      lVar44 = lStack_2c0;
      lVar47 = lStack_2b8;
      lVar13 = lStack_2b0;
      lVar14 = local_2a8;
      lVar15 = lStack_2a0;
      lVar16 = lStack_298;
      lVar17 = lStack_290;
      pEVar18 = (Elf64_Ehdr *)local_268._16_8_;
      qVar19 = qStack_250;
      plVar20 = plStack_248;
      plVar21 = plStack_240;
      pEVar22 = pEStack_238;
      pEVar23 = pEStack_230;
      lVar24 = local_228;
      lVar25 = lStack_220;
      lVar26 = lStack_218;
      lVar27 = lStack_210;
      lVar28 = local_208;
      lVar29 = lStack_200;
      lVar30 = lStack_1f8;
      lVar31 = lStack_1f0;
      if (lVar46 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>>>
        ::drop_slow(plVar4);
        pEVar38 = local_378;
        pEVar45 = pEStack_2f8;
        qVar3 = qStack_2f0;
        plVar35 = local_2e8;
        plVar11 = plStack_2e0;
        pEVar43 = pEStack_2d8;
        pEVar12 = pEStack_2d0;
        lVar53 = local_2c8;
        lVar44 = lStack_2c0;
        lVar47 = lStack_2b8;
        lVar13 = lStack_2b0;
        lVar14 = local_2a8;
        lVar15 = lStack_2a0;
        lVar16 = lStack_298;
        lVar17 = lStack_290;
        pEVar18 = (Elf64_Ehdr *)local_268._16_8_;
        qVar19 = qStack_250;
        plVar20 = plStack_248;
        plVar21 = plStack_240;
        pEVar22 = pEStack_238;
        pEVar23 = pEStack_230;
        lVar24 = local_228;
        lVar25 = lStack_220;
        lVar26 = lStack_218;
        lVar27 = lStack_210;
        lVar28 = local_208;
        lVar29 = lStack_200;
        lVar30 = lStack_1f8;
        lVar31 = lStack_1f0;
      }
      lStack_290 = lVar31;
      lStack_298 = lVar30;
      lStack_2a0 = lVar29;
      local_2a8 = lVar28;
      lStack_2b0 = lVar27;
      lStack_2b8 = lVar26;
      lStack_2c0 = lVar25;
      local_2c8 = lVar24;
      pEStack_2d0 = pEVar23;
      pEStack_2d8 = pEVar22;
      plStack_2e0 = plVar21;
      local_2e8 = plVar20;
      qStack_2f0 = qVar19;
      pEStack_2f8 = pEVar18;
      local_378 = pEVar38;
      local_268._16_8_ = pEStack_2f8;
      qStack_250 = qStack_2f0;
      plStack_248 = local_2e8;
      plStack_240 = plStack_2e0;
      pEStack_238 = pEStack_2d8;
      pEStack_230 = pEStack_2d0;
      local_228 = local_2c8;
      lStack_220 = lStack_2c0;
      lStack_218 = lStack_2b8;
      lStack_210 = lStack_2b0;
      local_208 = local_2a8;
      lStack_200 = lStack_2a0;
      lStack_1f8 = lStack_298;
      lStack_1f0 = lStack_290;
      if (puVar5 == (undefined *)0xffffffffffffffff) {
        pEStack_2f8 = pEVar45;
        qStack_2f0 = qVar3;
        local_2e8 = plVar35;
        plStack_2e0 = plVar11;
        pEStack_2d8 = pEVar43;
        pEStack_2d0 = pEVar12;
        local_2c8 = lVar53;
        lStack_2c0 = lVar44;
        lStack_2b8 = lVar47;
        lStack_2b0 = lVar13;
        local_2a8 = lVar14;
        lStack_2a0 = lVar15;
        lStack_298 = lVar16;
        lStack_290 = lVar17;
        std[c60ef17cbf7de79f]::panic::resume_unwind(local_348._0_8_,local_348._8_8_);
        goto LAB_00610c81;
      }
      local_308 = (Elf64_Ehdr *)CONCAT26(local_268._6_2_,CONCAT24(local_268._4_2_,local_268._0_4_));
      pEStack_300 = (Elf64_Ehdr *)
                    CONCAT17(local_268[0xf],
                             CONCAT16(local_268[0xe],
                                      CONCAT15(local_268[0xd],
                                               CONCAT14(local_268[0xc],local_268._8_4_))));
      *(undefined **)pEVar41 = puVar5;
      pEVar41->e_ident_abiversion = local_348[0];
      pEVar41->e_ident_pad[0] = local_348[1];
      pEVar41->e_ident_pad[1] = local_348[2];
      pEVar41->e_ident_pad[2] = local_348[3];
      pEVar41->e_ident_pad[3] = local_348[4];
      pEVar41->e_ident_pad[4] = local_348[5];
      pEVar41->e_ident_pad[5] = local_348[6];
      pEVar41->e_ident_pad[6] = local_348[7];
      pEVar41->e_type = local_348._8_2_;
      pEVar41->e_machine = local_348._10_2_;
      pEVar41->e_version = local_348._12_4_;
      auVar55._8_8_ = plStack_2e0;
      auVar55._0_8_ = local_2e8;
      auVar55._16_8_ = pEStack_2d8;
      auVar55._24_8_ = pEStack_2d0;
      auVar57._8_8_ = lStack_2a0;
      auVar57._0_8_ = local_2a8;
      auVar57._16_8_ = lStack_298;
      auVar57._24_8_ = lStack_290;
      pEVar41->e_entry = (qword)local_308;
      pEVar41->e_phoff = (qword)pEStack_300;
      pEVar41->e_shoff = (qword)pEStack_2f8;
      pEVar41->e_flags = (int)qStack_2f0;
      pEVar41->e_ehsize = (short)(qStack_2f0 >> 0x20);
      pEVar41->e_phentsize = (short)(qStack_2f0 >> 0x30);
      *(undefined1 (*) [32])&pEVar41->e_phnum = auVar55;
      pEVar41[1].e_entry = local_2c8;
      pEVar41[1].e_phoff = lStack_2c0;
      pEVar41[1].e_shoff = lStack_2b8;
      pEVar41[1].e_flags = (int)lStack_2b0;
      pEVar41[1].e_ehsize = (short)((ulong)lStack_2b0 >> 0x20);
      pEVar41[1].e_phentsize = (short)((ulong)lStack_2b0 >> 0x30);
      *(undefined1 (*) [32])&pEVar41[1].e_phnum = auVar57;
      pEVar51 = (Elf64_Ehdr *)((long)pEVar51 + 1);
      pEVar41 = (Elf64_Ehdr *)&pEVar41[2].e_entry;
      pEVar37 = (Elf64_Ehdr *)&pEVar37->e_entry;
    } while (pEVar37 != local_360);
    if (((Elf64_Ehdr *)((long)&sys::A_BASE_0[-1].e_shstrndx + 1) < pEVar38) &&
       (pEVar38 < sys::A_END_0)) {
      lVar46 = 0x40 - LZCOUNT((undefined1 *)((long)&local_380[-1].e_shstrndx + 1));
      if ((local_370 < (Elf64_Ehdr *)0xaab) ||
         (cVar33 = sys::big_put(pEVar38,lVar46), cVar33 == '\0')) {
        *(undefined **)pEVar38 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = pEVar38;
      }
    }
    else {
      free(pEVar38);
    }
    if (local_3b8->e_entry != 0) {
      do {
        lVar46 = *(long *)&local_3b8->e_type;
        LOCK();
        piVar48 = (int *)(lVar46 + 0x38);
        *piVar48 = *piVar48 + -1;
        UNLOCK();
        if (*piVar48 != 0) {
          piVar48 = (int *)(lVar46 + 0x38);
          do {
            local_268._0_4_ = 0;
            local_268[4] = 0;
            local_268[5] = 0;
            local_268[6] = 0;
            local_268[7] = 0;
            while (*piVar48 == -1) {
              puVar50 = (undefined1 *)0x0;
              if (local_268[0] != 0) {
                puVar50 = local_268 + 8;
              }
              lVar46 = syscall(0xca,piVar48,0x89,0xffffffff,puVar50,0,0xffffffff);
              if ((-1 < lVar46) || (piVar42 = __errno_location(), *piVar42 != 4)) break;
            }
            LOCK();
            iVar2 = *piVar48;
            if (iVar2 == 1) {
              *piVar48 = 0;
            }
            UNLOCK();
          } while (iVar2 != 1);
        }
      } while (local_3b8->e_entry != 0);
    }
    param_1 = local_368;
    if ((char)local_3b8->e_phoff != '\0') {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt
                (&DAT_0020ffb0,0x31,&PTR_s_src_generic_util_rs_0020ff20);
    }
    LOCK();
    *(undefined **)local_3b8 = *(undefined **)local_3b8 + -1;
    UNLOCK();
    if (*(undefined **)local_3b8 == (undefined *)0x0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow();
    }
    pEVar37 = local_390;
    pEVar41 = param_2;
    if (param_2 < (Elf64_Ehdr *)0x24924924924924a) {
LAB_0060f5a9:
      local_358 = (long)param_2 * 0x38;
      pEVar41 = param_2;
      local_390 = pEVar37;
      if (local_358 == 0) goto LAB_0060fbb6;
      unaff_R13 = (long *)__rustc[45371133cddedda4]::__rust_alloc(local_358,8);
      pEVar38 = param_1;
      pEVar37 = param_2;
      if (unaff_R13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_358);
      }
    }
    else {
LAB_0060fbae:
      alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_0060fbb6:
      unaff_R13 = (long *)&DAT_00000008;
      pEVar37 = (Elf64_Ehdr *)0x0;
      pEVar38 = param_1;
    }
    pEVar43 = (Elf64_Ehdr *)((ulong)pEVar41 & 0x3fffffffffffff0);
    auVar56._8_8_ = DAT_00201cc8;
    auVar56._0_8_ = DAT_00201cc8;
    auVar56._16_8_ = DAT_00201cc8;
    auVar56._24_8_ = DAT_00201cc8;
    pEVar45 = pEVar43;
    auVar55 = _DAT_00203760;
    do {
      auVar57 = vpsllq_avx2(auVar55,3);
      auVar58 = vpsllq_avx2(auVar55,6);
      auVar57 = vpsubq_avx2(auVar58,auVar57);
      vpscatterqq_avx512vl(ZEXT832(unaff_R13) + auVar57,0xffff,auVar56);
      vpscatterqq_avx512vl(ZEXT832(unaff_R13) + ZEXT832(0xe0) + auVar57,0xffff,auVar56);
      vpscatterqq_avx512vl(ZEXT832(unaff_R13) + ZEXT832(0x1c0) + auVar57,0xffff,auVar56);
      vpscatterqq_avx512vl(ZEXT832(unaff_R13) + ZEXT832(0x2a0) + auVar57,0xffff,auVar56);
      auVar58._0_8_ = auVar55._0_8_ + DAT_00201e58;
      auVar58._8_8_ = auVar55._8_8_ + DAT_00201e58;
      auVar58._16_8_ = auVar55._16_8_ + DAT_00201e58;
      auVar58._24_8_ = auVar55._24_8_ + DAT_00201e58;
      pEVar45 = (Elf64_Ehdr *)&pEVar45[-1].e_flags;
      auVar55 = auVar58;
    } while (pEVar45 != (Elf64_Ehdr *)0x0);
    if (pEVar41 != pEVar43) {
      param_4 = pEVar43;
      if (((ulong)pEVar41 & 0xc) != 0) {
        param_4 = (Elf64_Ehdr *)((ulong)pEVar41 & 0x3fffffffffffffc);
        auVar55 = vpbroadcastq_avx512vl();
        auVar55 = vpor_avx2(auVar55,_DAT_00203760);
        lVar46 = (long)param_4 - (long)pEVar43;
        do {
          auVar57 = vpsllq_avx2(auVar55,3);
          auVar58 = vpsllq_avx2(auVar55,6);
          auVar57 = vpsubq_avx2(auVar58,auVar57);
          vpscatterqq_avx512vl(ZEXT832(unaff_R13) + auVar57,0xffff,auVar56);
          auVar8._0_8_ = auVar55._0_8_ + DAT_00201e20;
          auVar8._8_8_ = auVar55._8_8_ + DAT_00201e20;
          auVar8._16_8_ = auVar55._16_8_ + DAT_00201e20;
          auVar8._24_8_ = auVar55._24_8_ + DAT_00201e20;
          lVar46 = lVar46 + -4;
          auVar55 = auVar8;
        } while (lVar46 != 0);
        if (pEVar41 == param_4) goto LAB_0060fce5;
      }
LAB_0060fcb5:
      plVar35 = unaff_R13 + (long)param_4 * 7;
      lVar46 = (long)pEVar41 - (long)param_4;
      do {
        *plVar35 = 2;
        plVar35 = plVar35 + 7;
        lVar46 = lVar46 + -1;
      } while (lVar46 != 0);
    }
LAB_0060fce5:
    lVar46 = (long)pEVar51 << 7;
    local_368 = pEVar38;
    local_338 = pEVar37;
    pEVar37 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar46,8);
    if (pEVar37 == (Elf64_Ehdr *)0x0) goto LAB_0061075c;
    pEStack_2f8 = (Elf64_Ehdr *)0x0;
    pEVar38 = (Elf64_Ehdr *)((long)pEVar51 * 0x98);
    local_350 = (Elf64_Ehdr *)
                (local_388->e_ident_magic_str + (long)(pEVar38->e_ident_magic_str + -2));
    pEVar45 = local_388;
    pEVar41 = local_388;
    local_308 = pEVar51;
    pEStack_300 = pEVar37;
    do {
      pEVar41 = (Elf64_Ehdr *)&pEVar41[2].e_entry;
      pEVar38 = (Elf64_Ehdr *)&pEVar38[-3].e_shoff;
      local_378 = *(Elf64_Ehdr **)pEVar45;
      pEVar51 = *(Elf64_Ehdr **)&pEVar45->e_ident_abiversion;
      lVar46 = *(long *)&pEVar45->e_type;
      local_58._0_2_ = pEVar45[1].e_phnum;
      local_58._2_2_ = pEVar45[1].e_shentsize;
      local_58._4_2_ = pEVar45[1].e_shnum;
      local_58._6_2_ = pEVar45[1].e_shstrndx;
      puStack_50 = *(undefined **)(pEVar45 + 2);
      uStack_48._0_1_ = pEVar45[2].e_ident_abiversion;
      uStack_48._1_1_ = pEVar45[2].e_ident_pad[0];
      uStack_48._2_1_ = pEVar45[2].e_ident_pad[1];
      uStack_48._3_1_ = pEVar45[2].e_ident_pad[2];
      uStack_48._4_1_ = pEVar45[2].e_ident_pad[3];
      uStack_48._5_1_ = pEVar45[2].e_ident_pad[4];
      uStack_48._6_1_ = pEVar45[2].e_ident_pad[5];
      uStack_48._7_1_ = pEVar45[2].e_ident_pad[6];
      uStack_40._0_2_ = pEVar45[2].e_type;
      uStack_40._2_2_ = pEVar45[2].e_machine;
      uStack_40._4_4_ = pEVar45[2].e_version;
      local_78 = (undefined *)pEVar45[1].e_entry;
      qStack_70 = pEVar45[1].e_phoff;
      qStack_68 = pEVar45[1].e_shoff;
      qStack_60._0_4_ = pEVar45[1].e_flags;
      qStack_60._4_2_ = pEVar45[1].e_ehsize;
      qStack_60._6_2_ = pEVar45[1].e_phentsize;
      local_98._0_2_ = pEVar45->e_phnum;
      local_98._2_2_ = pEVar45->e_shentsize;
      local_98._4_2_ = pEVar45->e_shnum;
      local_98._6_2_ = pEVar45->e_shstrndx;
      puStack_90 = *(undefined **)(pEVar45 + 1);
      uStack_88._0_1_ = pEVar45[1].e_ident_abiversion;
      uStack_88._1_1_ = pEVar45[1].e_ident_pad[0];
      uStack_88._2_1_ = pEVar45[1].e_ident_pad[1];
      uStack_88._3_1_ = pEVar45[1].e_ident_pad[2];
      uStack_88._4_1_ = pEVar45[1].e_ident_pad[3];
      uStack_88._5_1_ = pEVar45[1].e_ident_pad[4];
      uStack_88._6_1_ = pEVar45[1].e_ident_pad[5];
      uStack_88._7_1_ = pEVar45[1].e_ident_pad[6];
      uStack_80._0_2_ = pEVar45[1].e_type;
      uStack_80._2_2_ = pEVar45[1].e_machine;
      uStack_80._4_4_ = pEVar45[1].e_version;
      local_b8 = (undefined *)pEVar45->e_entry;
      qStack_b0 = pEVar45->e_phoff;
      qStack_a8 = pEVar45->e_shoff;
      qStack_a0._0_4_ = pEVar45->e_flags;
      qStack_a0._4_2_ = pEVar45->e_ehsize;
      qStack_a0._6_2_ = pEVar45->e_phentsize;
      pEVar45 = (Elf64_Ehdr *)&pEVar45[2].e_entry;
      if (local_378 == (Elf64_Ehdr *)0xffffffffffffffff) break;
      local_348._0_8_ = pEVar37;
      pEVar37 = pEVar51;
      local_380 = pEVar38;
      local_370 = pEVar41;
      local_360 = pEStack_2f8;
      local_330 = pEVar45;
      if (lVar46 == 0) {
LAB_006100f0:
        uVar39 = (long)(pEVar51 + lVar46) - (long)pEVar37;
        if (uVar39 != 0) {
          uVar39 = uVar39 >> 6;
          pdVar52 = &pEVar37->e_flags;
          do {
            if (*(byte *)(pdVar52 + -10) == 0) {
              if (*(long *)(pdVar52 + -8) != 0) {
                pEVar41 = *(Elf64_Ehdr **)(pdVar52 + -6);
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar41)) {
                  free(pEVar41);
                }
                else {
                  uVar40 = *(long *)(pdVar52 + -8) * 0x28 - 1;
                  lVar46 = LZCOUNT(uVar40);
                  lVar53 = 0x40 - lVar46;
                  if ((uVar40 < 0x10000) || (cVar33 = sys::big_put(pEVar41,lVar53), cVar33 == '\0'))
                  {
                    if (lVar46 == 0) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                    }
                    *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar53 * 8 + -0x3c8);
                    *(Elf64_Ehdr **)(in_FS_OFFSET + lVar53 * 8 + -0x3c8) = pEVar41;
                  }
                }
              }
              if (*(qword *)(pdVar52 + -2) != 0) {
                pEVar41 = *(Elf64_Ehdr **)pdVar52;
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar41)) goto LAB_00610106;
                uVar40 = *(qword *)(pdVar52 + -2) << 2;
                if (uVar40 < 0x11) {
                  uVar40 = 0x10;
                }
                lVar53 = LZCOUNT(uVar40 - 1);
                lVar46 = 0x40 - lVar53;
                if ((uVar40 - 1 < 0x10000) ||
                   (cVar33 = sys::big_put(pEVar41,lVar46), cVar33 == '\0')) {
                  if (lVar53 == 0) goto LAB_00610be4;
                  *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
                  *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = pEVar41;
                }
              }
            }
            else {
              if (*(long *)(pdVar52 + -8) != 0) {
                pEVar41 = *(Elf64_Ehdr **)(pdVar52 + -6);
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar41)) {
                  free(pEVar41);
                }
                else {
                  uVar40 = *(long *)(pdVar52 + -8) * 0x30 - 1;
                  lVar53 = LZCOUNT(uVar40);
                  lVar46 = 0x40 - lVar53;
                  if ((uVar40 < 0x10000) || (cVar33 = sys::big_put(pEVar41,lVar46), cVar33 == '\0'))
                  {
                    if (lVar53 == 0) goto LAB_00610be4;
                    *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
                    *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = pEVar41;
                  }
                }
              }
              if (*(qword *)(pdVar52 + -2) != 0) {
                pEVar41 = *(Elf64_Ehdr **)pdVar52;
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar41)) {
LAB_00610106:
                  free(pEVar41);
                }
                else {
                  uVar40 = *(qword *)(pdVar52 + -2) << 2;
                  if (uVar40 < 0x11) {
                    uVar40 = 0x10;
                  }
                  lVar53 = LZCOUNT(uVar40 - 1);
                  lVar46 = 0x40 - lVar53;
                  if ((uVar40 - 1 < 0x10000) ||
                     (cVar33 = sys::big_put(pEVar41,lVar46), cVar33 == '\0')) {
                    if (lVar53 == 0) goto LAB_00610be4;
                    *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
                    *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = pEVar41;
                  }
                }
              }
            }
            pdVar52 = pdVar52 + 0x10;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
      }
      else {
        pEVar41 = pEVar51;
        do {
          pEVar37 = pEVar41 + 1;
          lVar53._0_1_ = pEVar41->e_ident_abiversion;
          lVar53._1_1_ = pEVar41->e_ident_pad[0];
          lVar53._2_1_ = pEVar41->e_ident_pad[1];
          lVar53._3_1_ = pEVar41->e_ident_pad[2];
          lVar53._4_1_ = pEVar41->e_ident_pad[3];
          lVar53._5_1_ = pEVar41->e_ident_pad[4];
          lVar53._6_1_ = pEVar41->e_ident_pad[5];
          lVar53._7_1_ = pEVar41->e_ident_pad[6];
          if (lVar53 == 2) goto LAB_006100f0;
          uVar10._0_2_ = pEVar41->e_type;
          uVar10._2_2_ = pEVar41->e_machine;
          uVar10._4_4_ = pEVar41->e_version;
          qVar3 = pEVar41->e_entry;
          local_268._16_8_ = pEVar41->e_phoff;
          qStack_250 = pEVar41->e_shoff;
          plStack_248 = *(long **)&pEVar41->e_flags;
          plStack_240 = *(long **)&pEVar41->e_phnum;
          pEVar41 = *(Elf64_Ehdr **)pEVar41;
          local_268._0_4_ = SUB84(uVar10,0);
          local_268._4_2_ = SUB42(uVar10._4_4_,0);
          local_268._6_2_ = SUB42((uint)uVar10._4_4_ >> 0x10,0);
          local_268._8_4_ = SUB84(qVar3,0);
          local_268[0xc] = (byte)(qVar3 >> 0x20);
          local_268[0xd] = (byte)(qVar3 >> 0x28);
          local_268[0xe] = (byte)(qVar3 >> 0x30);
          local_268[0xf] = (byte)(qVar3 >> 0x38);
          if (param_2 <= pEVar41) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (pEVar41,param_2,&PTR_s_src_generic_util_rs_0020ff38);
          }
          plVar35 = unaff_R13 + (long)pEVar41 * 7;
          if (unaff_R13[(long)pEVar41 * 7] != 2) {
            if (unaff_R13[(long)pEVar41 * 7] == 0) {
              if (plVar35[1] != 0) {
                pEVar41 = (Elf64_Ehdr *)plVar35[2];
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar41)) goto LAB_00610010;
                uVar39 = plVar35[1] * 0x28 - 1;
                lVar47 = LZCOUNT(uVar39);
                lVar44 = 0x40 - lVar47;
                if ((uVar39 < 0x10000) || (cVar33 = sys::big_put(pEVar41,lVar44), cVar33 == '\0')) {
                  if (lVar47 == 0) goto LAB_00610c44;
                  goto LAB_0060fff0;
                }
              }
            }
            else if (plVar35[1] != 0) {
              pEVar41 = (Elf64_Ehdr *)plVar35[2];
              if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= pEVar41)) {
LAB_00610010:
                free(pEVar41);
              }
              else {
                uVar39 = plVar35[1] * 0x30 - 1;
                lVar47 = LZCOUNT(uVar39);
                lVar44 = 0x40 - lVar47;
                if ((uVar39 < 0x10000) || (cVar33 = sys::big_put(pEVar41,lVar44), cVar33 == '\0')) {
                  if (lVar47 == 0) {
                    lVar44 = 0x40;
                    goto LAB_00610c44;
                  }
LAB_0060fff0:
                  *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar44 * 8 + -0x3c8);
                  *(Elf64_Ehdr **)(in_FS_OFFSET + lVar44 * 8 + -0x3c8) = pEVar41;
                }
              }
            }
            if (plVar35[4] != 0) {
              pEVar41 = (Elf64_Ehdr *)plVar35[5];
              if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar41 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= pEVar41)) {
                free(pEVar41);
              }
              else {
                uVar39 = plVar35[4] << 2;
                if (uVar39 < 0x11) {
                  uVar39 = 0x10;
                }
                lVar47 = LZCOUNT(uVar39 - 1);
                lVar44 = 0x40 - lVar47;
                if ((uVar39 - 1 < 0x10000) ||
                   (cVar33 = sys::big_put(pEVar41,lVar44), cVar33 == '\0')) {
                  if (lVar47 == 0) {
LAB_00610c44:
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (lVar44,0x40,&PTR_s_src_sys_rs_002110f0);
                  }
                  *(undefined **)pEVar41 = *(undefined **)(in_FS_OFFSET + lVar44 * 8 + -0x3c8);
                  *(Elf64_Ehdr **)(in_FS_OFFSET + lVar44 * 8 + -0x3c8) = pEVar41;
                }
              }
            }
          }
          *plVar35 = lVar53;
          plVar35[1] = CONCAT26(local_268._6_2_,CONCAT24(local_268._4_2_,local_268._0_4_));
          plVar35[2] = CONCAT17(local_268[0xf],
                                CONCAT16(local_268[0xe],
                                         CONCAT15(local_268[0xd],
                                                  CONCAT14(local_268[0xc],local_268._8_4_))));
          plVar35[3] = local_268._16_8_;
          plVar35[4] = qStack_250;
          plVar35[3] = local_268._16_8_;
          plVar35[4] = qStack_250;
          plVar35[5] = (long)plStack_248;
          plVar35[6] = (long)plStack_240;
          pEVar41 = pEVar37;
        } while (pEVar37 != pEVar51 + lVar46);
      }
      pEVar45 = local_330;
      pEVar38 = local_380;
      pEVar37 = (Elf64_Ehdr *)local_348._0_8_;
      if (local_378 != (Elf64_Ehdr *)0x0) {
        if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar51 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pEVar51)) {
          free(pEVar51);
        }
        else {
          uVar39 = (long)local_378 * 0x40 - 1;
          lVar53 = LZCOUNT(uVar39);
          lVar46 = 0x40 - lVar53;
          if ((uVar39 < 0x10000) || (cVar33 = sys::big_put(pEVar51,lVar46), cVar33 == '\0')) {
            if (lVar53 == 0) goto LAB_00610be4;
            *(undefined **)pEVar51 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
            *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = pEVar51;
          }
        }
      }
      pEVar41 = local_360;
      if (local_360 == local_308) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::P2Bufs>>::
        grow_one(&local_308);
        pEVar37 = pEStack_300;
      }
      pEVar43 = pEVar37 + (long)pEVar41 * 2 + 1;
      pEVar43->e_phoff = local_58;
      pEVar43->e_shoff = (qword)puStack_50;
      pEVar43->e_flags = (int)uStack_48;
      pEVar43->e_ehsize = (short)((ulong)uStack_48 >> 0x20);
      pEVar43->e_phentsize = (short)((ulong)uStack_48 >> 0x30);
      pEVar43->e_phnum = (short)uStack_40;
      pEVar43->e_shentsize = (short)((ulong)uStack_40 >> 0x10);
      pEVar43->e_shnum = (short)((ulong)uStack_40 >> 0x20);
      pEVar43->e_shstrndx = (short)((ulong)uStack_40 >> 0x30);
      pEVar43 = pEVar37 + (long)pEVar41 * 2 + 1;
      *(undefined **)pEVar43 = local_78;
      pEVar43->e_ident_abiversion = (undefined1)qStack_70;
      pEVar43->e_ident_pad[0] = qStack_70._1_1_;
      pEVar43->e_ident_pad[1] = qStack_70._2_1_;
      pEVar43->e_ident_pad[2] = qStack_70._3_1_;
      pEVar43->e_ident_pad[3] = qStack_70._4_1_;
      pEVar43->e_ident_pad[4] = qStack_70._5_1_;
      pEVar43->e_ident_pad[5] = qStack_70._6_1_;
      pEVar43->e_ident_pad[6] = qStack_70._7_1_;
      pEVar43->e_type = (undefined2)qStack_68;
      pEVar43->e_machine = qStack_68._2_2_;
      pEVar43->e_version = qStack_68._4_4_;
      pEVar43->e_entry = qStack_60;
      pqVar1 = &pEVar37[(long)pEVar41 * 2].e_phoff;
      *pqVar1 = local_98;
      pqVar1[1] = (qword)puStack_90;
      pqVar1[2] = uStack_88;
      pqVar1[3] = uStack_80;
      pEVar43 = pEVar37 + (long)pEVar41 * 2;
      *(undefined **)pEVar43 = local_b8;
      pEVar43->e_ident_abiversion = (undefined1)qStack_b0;
      pEVar43->e_ident_pad[0] = qStack_b0._1_1_;
      pEVar43->e_ident_pad[1] = qStack_b0._2_1_;
      pEVar43->e_ident_pad[2] = qStack_b0._3_1_;
      pEVar43->e_ident_pad[3] = qStack_b0._4_1_;
      pEVar43->e_ident_pad[4] = qStack_b0._5_1_;
      pEVar43->e_ident_pad[5] = qStack_b0._6_1_;
      pEVar43->e_ident_pad[6] = qStack_b0._7_1_;
      pEVar43->e_type = (undefined2)qStack_a8;
      pEVar43->e_machine = qStack_a8._2_2_;
      pEVar43->e_version = qStack_a8._4_4_;
      pEVar43->e_entry = qStack_a0;
      pEStack_2f8 = (Elf64_Ehdr *)pEVar41->e_ident_magic_str;
      pEVar41 = local_370;
      local_3b8 = pEVar51;
    } while (pEVar45 != local_350);
    if (local_350 != pEVar45) {
      uVar39 = (ulong)pEVar38 / 0x98;
      do {
        core[62e902411887be45]::ptr::drop_glue::
        <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>
                  (pEVar41);
        pEVar41 = (Elf64_Ehdr *)&pEVar41[2].e_entry;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    if (local_390 != (Elf64_Ehdr *)0x0) {
      if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (local_388 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_388)) {
        free(local_388);
      }
      else {
        uVar39 = (long)local_390 * 0x98 - 1;
        lVar53 = LZCOUNT(uVar39);
        lVar46 = 0x40 - lVar53;
        if ((uVar39 < 0x10000) || (cVar33 = sys::big_put(local_388,lVar46), cVar33 == '\0')) {
          if (lVar53 == 0) {
LAB_00610be4:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar46,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(undefined **)local_388 = *(undefined **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8);
          *(Elf64_Ehdr **)(in_FS_OFFSET + lVar46 * 8 + -0x3c8) = local_388;
        }
      }
    }
    uVar39 = (ulong)param_2 & 7;
    plVar35 = unaff_R13;
    if (uVar39 != 0) {
      do {
        if (*plVar35 == 2) goto LAB_00610769;
        plVar35 = plVar35 + 7;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    if (((ulong)((long)&param_2[-1].e_shstrndx + 1U) & 0x1fffffffffffffff) < 7) {
LAB_006106e5:
      local_368->e_shoff = (qword)pEStack_2f8;
      local_368->e_entry = (qword)local_308;
      local_368->e_phoff = (qword)pEStack_300;
      *(Elf64_Ehdr **)local_368 = local_338;
      *(long **)&local_368->e_ident_abiversion = unaff_R13;
      *(ulong *)&local_368->e_type = (local_358 >> 3) * 0x6db6db6db6db6db7;
      return;
    }
    while (((*plVar35 != 2 && (plVar35[7] != 2)) &&
           ((plVar35[0xe] != 2 &&
            ((((plVar35[0x15] != 2 && (plVar35[0x1c] != 2)) && (plVar35[0x23] != 2)) &&
             ((plVar35[0x2a] != 2 && (plVar35[0x31] != 2))))))))) {
      plVar35 = plVar35 + 0x38;
      if (plVar35 == (long *)(local_358 + (long)unaff_R13)) goto LAB_006106e5;
    }
LAB_00610769:
    core[62e902411887be45]::option::expect_failed
              ("job result",10,&PTR_s_src_generic_util_rs_00210548);
LAB_00610780:
    pEVar41 = (Elf64_Ehdr *)&DAT_00000008;
    local_390 = (Elf64_Ehdr *)0x0;
  } while( true );
}


// ==== pipeline::generic::util::par_run::<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>), alloc::vec::Vec<pipeline::generic::core::UserRow>, pipeline::generic::run::{closure#11}, pipeline::generic::run::{closure#12}> @ 00610ce0 (5373 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,
   pipeline[509596c7b52975b2]::generic::run::{closure#11},
   pipeline[509596c7b52975b2]::generic::run::{closure#12}> */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>
          (undefined8 *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined **__ptr;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined **ppuVar30;
  int *piVar31;
  undefined **ppuVar32;
  undefined4 *puVar33;
  ulong uVar34;
  code *pcVar35;
  undefined **ppuVar36;
  long lVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  ulong local_488;
  undefined8 local_430;
  undefined8 local_428;
  long *local_420;
  undefined **local_418;
  undefined8 local_410;
  undefined8 *local_408;
  undefined8 *puStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined *local_3e8;
  undefined *puStack_3e0;
  undefined8 local_3d8 [3];
  undefined1 local_3c0;
  int local_3b8;
  undefined2 uStack_3b4;
  undefined2 uStack_3b2;
  undefined4 uStack_3b0;
  undefined1 uStack_3ac;
  undefined1 uStack_3ab;
  undefined1 uStack_3aa;
  undefined1 uStack_3a9;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong local_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  
  uVar23 = 0x100;
  if (param_2 < 0x100) {
    uVar23 = param_2;
  }
  local_428 = 0;
  local_408 = &local_430;
  puStack_400 = &local_428;
  uStack_3f0 = 0x100;
  local_430 = param_3;
  uStack_3f8 = param_4;
  if (param_2 == 1) {
    ppuVar14 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(0x1d8,8);
    if (ppuVar14 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x1d8);
    }
    <(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::{closure#11},pipeline[509596c7b52975b2]::generic::run::{closure#12}>
    ::_closure_0_(ppuVar14,&local_408);
    local_488 = 0x1d7;
    uVar34 = 1;
  }
  else {
    uVar34 = *(ulong *)(in_FS_OFFSET + -0x30);
    if (uVar34 < 3) {
      if (uVar34 == 2) {
        if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
          lVar28 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          do {
            if (lVar28 == -1) goto LAB_00612026;
            lVar37 = lVar28 + 1;
            LOCK();
            bVar38 = lVar28 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            if (bVar38) {
              <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar37;
            }
            else {
              lVar28 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            }
            UNLOCK();
          } while (!bVar38);
          *(long *)(in_FS_OFFSET + -0x28) = lVar37;
        }
        lVar28 = <std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
      }
      else {
        lVar28 = std[c60ef17cbf7de79f]::thread::current::init_current(uVar34);
      }
    }
    else {
      LOCK();
      plVar15 = (long *)(uVar34 - 0x10);
      lVar28 = *plVar15;
      *plVar15 = *plVar15 + 1;
      UNLOCK();
      if (*plVar15 == 0 || SCARRY8(lVar28,1) != *plVar15 < 0) {
LAB_006120d2:
                    /* WARNING: Does not return */
        pcVar35 = (code *)invalidInstructionException();
        (*pcVar35)();
      }
      lVar28 = uVar34 - 0x10;
    }
    plVar15 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x28,8);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
    }
    *plVar15 = 1;
    plVar15[1] = 1;
    plVar15[2] = lVar28;
    plVar15[3] = 0;
    *(undefined1 *)(plVar15 + 4) = 0;
    lVar28 = uVar23 * 0x18;
    ppuVar16 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(lVar28,8);
    if (ppuVar16 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar28);
    }
    uVar34 = 0;
    do {
      local_3d8[0] = 0xffffffffffffffff;
      local_3e8 = (undefined *)0x0;
      local_3c0 = 0;
      LOCK();
      lVar37 = *plVar15;
      *plVar15 = *plVar15 + 1;
      UNLOCK();
      if (*plVar15 == 0 || SCARRY8(lVar37,1) != *plVar15 < 0) goto LAB_006120d2;
      if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == 0) {
        uStack_3b0 = 0x4154535f;
        uStack_3ac = 0x43;
        uStack_3ab = 0x4b;
        local_3b8 = 0x54535552;
        uStack_3b4 = 0x4d5f;
        uStack_3b2 = 0x4e49;
        uStack_3aa = 0;
        uVar9 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
        auVar40[7] = uStack_3a9;
        auVar40._0_7_ = 0x4b434154535f;
        auVar40._8_8_ = 0;
        uVar10 = vptestmb_avx512vl(auVar40,auVar40);
        if ((byte)((char)((ushort)uVar9 >> 4) << 4 | (byte)uVar9 & (byte)uVar10 & 0xf) == 0xff) {
          std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_420,&local_3b8);
          ppuVar14 = local_418;
          plVar18 = local_420;
          if (local_420 == (long *)0xfffffffffffffffe) goto LAB_00610f9c;
          if (local_420 == (long *)0xffffffffffffffff) {
            uVar24 = 0x200000;
          }
          else {
            core[62e902411887be45]::str::converts::from_utf8(&local_3b8,local_418,local_410);
            if ((local_3b8 == 1) || (uStack_3a8 == 0)) {
LAB_006110e4:
              uVar24 = 0x200000;
            }
            else {
              pcVar11 = (char *)CONCAT17(uStack_3a9,
                                         CONCAT16(uStack_3aa,
                                                  CONCAT15(uStack_3ab,
                                                           CONCAT14(uStack_3ac,uStack_3b0))));
              if (uStack_3a8 == 1) {
                cVar12 = *pcVar11;
                if ((cVar12 == '+') || (cVar12 == '-')) goto LAB_006110e4;
              }
              else {
                cVar12 = *pcVar11;
              }
              uVar25 = (ulong)(cVar12 == '+');
              if (0x10 < uStack_3a8 - uVar25) {
                lVar37 = 0;
                uVar24 = 0;
                while( true ) {
                  if (lVar37 == uStack_3a8 + -uVar25) goto joined_r0x00611104;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar24;
                  uVar17 = SUB168(auVar7 * ZEXT816(10),0);
                  if (SUB168(auVar7 * ZEXT816(10),8) != 0) break;
                  uVar13 = (byte)pcVar11[lVar37 + uVar25] - 0x30;
                  uVar24 = uVar17 + uVar13;
                  if ((9 < uVar13) || (lVar37 = lVar37 + 1, CARRY8(uVar17,(ulong)uVar13))) break;
                }
                goto LAB_006110e4;
              }
              if (uStack_3a8 == uVar25) {
                uVar24 = 0;
              }
              else {
                lVar37 = 0;
                uVar24 = 0;
                do {
                  if (9 < (byte)pcVar11[lVar37 + uVar25] - 0x30) {
                    uVar24 = 0x200000;
                    break;
                  }
                  uVar24 = (ulong)((byte)pcVar11[lVar37 + uVar25] - 0x30) + uVar24 * 10;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != uStack_3a8 + -uVar25);
              }
            }
joined_r0x00611104:
            if (plVar18 != (long *)0x0) {
              if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar14 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= ppuVar14)) {
                free(ppuVar14);
              }
              else {
                if (plVar18 < &DAT_00000011) {
                  plVar18 = (long *)&DAT_00000010;
                }
                lVar37 = 0x40 - LZCOUNT((undefined1 *)((long)plVar18 + -1));
                if (((undefined1 *)((long)plVar18 + -1) < (undefined1 *)0x10000) ||
                   (cVar12 = sys::big_put(ppuVar14,lVar37), cVar12 == '\0')) {
                  *ppuVar14 = *(undefined **)(in_FS_OFFSET + lVar37 * 8 + -0x3c8);
                  *(undefined ***)(in_FS_OFFSET + lVar37 * 8 + -0x3c8) = ppuVar14;
                }
              }
            }
          }
        }
        else {
          ppuVar14 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00610f9c:
          if ((1 < ((uint)ppuVar14 & 3) - 2) && (((ulong)ppuVar14 & 3) != 0)) {
            (**(code **)((long)ppuVar14 + 0x17))((long)ppuVar14 + -1);
          }
          uVar24 = 0x200000;
        }
        std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 = uVar24 + 1;
      }
      else {
        uVar24 = std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 - 1;
      }
      uVar25 = uVar34 + 1;
      lVar37 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      do {
        if (lVar37 == -1) goto LAB_00612026;
        lVar29 = lVar37 + 1;
        LOCK();
        bVar38 = lVar37 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        if (bVar38) {
          <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar29;
        }
        else {
          lVar37 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        }
        UNLOCK();
      } while (!bVar38);
      plVar18 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar29,local_3d8);
      local_420 = plVar18;
      std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_3b8,&local_420);
      plVar19 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x1f0,8);
      if (plVar19 == (long *)0x0) goto LAB_0061203f;
      *plVar19 = 1;
      plVar19[1] = 1;
      plVar19[2] = (long)plVar15;
      plVar19[3] = -2;
      LOCK();
      lVar37 = *plVar19;
      *plVar19 = *plVar19 + 1;
      UNLOCK();
      if (*plVar19 == 0 || SCARRY8(lVar37,1) != *plVar19 < 0) goto LAB_006120d2;
      local_1d8 = local_408;
      puStack_1d0 = puStack_400;
      uStack_1c8 = uStack_3f8;
      uStack_1c0 = uStack_3f0;
      local_1f8 = CONCAT26(uStack_3b2,CONCAT24(uStack_3b4,local_3b8));
      uStack_1f0 = CONCAT17(uStack_3a9,
                            CONCAT16(uStack_3aa,CONCAT15(uStack_3ab,CONCAT14(uStack_3ac,uStack_3b0))
                                    ));
      uStack_1e8 = uStack_3a8;
      uStack_1e0 = uStack_3a0;
      LOCK();
      plVar1 = plVar15 + 3;
      lVar37 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (*plVar1 == 0 || SCARRY8(lVar37,1) != *plVar1 < 0) {
        uVar13 = <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(plVar15 + 2);
        goto LAB_0061207b;
      }
      puVar20 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(0x48,8);
      if (puVar20 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x48);
      }
      puVar20[4] = (ulong)local_1d8;
      puVar20[5] = (ulong)puStack_1d0;
      puVar20[6] = uStack_1c8;
      puVar20[7] = uStack_1c0;
      *puVar20 = local_1f8;
      puVar20[1] = uStack_1f0;
      puVar20[2] = uStack_1e8;
      puVar20[3] = uStack_1e0;
      puVar20[8] = (ulong)plVar19;
      LOCK();
      lVar37 = *plVar18;
      *plVar18 = *plVar18 + 1;
      UNLOCK();
      if (*plVar18 == 0 || SCARRY8(lVar37,1) != *plVar18 < 0) goto LAB_006120d2;
      puVar21 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
      if (puVar21 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
      }
      *puVar21 = plVar18;
      puVar21[1] = puVar20;
      puVar21[2] = &
                   PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>::_closure_1_>_00210008
      ;
      auVar40 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(uVar24,puVar21);
      if ((auVar40._0_8_ & 1) != 0) {
        LOCK();
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>
          ::drop_slow(plVar19);
        }
        LOCK();
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
          ::drop_slow(plVar18);
        }
        local_3b8 = auVar40._8_4_;
        uStack_3b4 = auVar40._12_2_;
        uStack_3b2 = auVar40._14_2_;
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::result::unwrap_failed
                  ("failed to spawn thread",0x16,&local_3b8,
                   &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                   &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
      }
      ppuVar16[uVar34 * 3] = (undefined *)plVar18;
      ppuVar16[uVar34 * 3 + 1] = (undefined *)plVar19;
      ppuVar16[uVar34 * 3 + 2] = auVar40._8_8_;
      uVar34 = uVar25;
    } while (uVar25 != uVar23);
    lVar37 = uVar23 * 0x1d8;
    ppuVar14 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(lVar37,8);
    if (ppuVar14 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar37);
    }
    uVar34 = 0;
    ppuVar30 = ppuVar14;
    ppuVar36 = ppuVar16;
    do {
      plVar18 = (long *)*ppuVar36;
      plVar19 = (long *)ppuVar36[1];
      uVar13 = (*(code *)PTR_pthread_join_00841df0)(ppuVar36[2],0);
      if (uVar13 != 0) {
LAB_0061207b:
        if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
            &PTR_format_error_0058cdd8) {
LAB_006121c3:
          core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
               (undefined *)&PTR_format_error_0058cdd8;
        }
        local_1f8 = (ulong)uVar13 << 0x20 | 2;
        local_3b8 = (int)&local_1f8;
        uStack_3b4 = (undefined2)((ulong)&local_1f8 >> 0x20);
        uStack_3b2 = (undefined2)((ulong)&local_1f8 >> 0x30);
        uStack_3b0 = 0x748ee0;
        uStack_3ac = 0;
        uStack_3ab = 0;
        uStack_3aa = 0;
        uStack_3a9 = 0;
                    /* try { // try from 006120bb to 006120d1 has its CatchHandler @ 00612220 */
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_fmt
                  (&DAT_0020c8a1,&local_3b8,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058d618);
      }
      LOCK();
      bVar38 = plVar19[1] == 1;
      if (bVar38) {
        plVar19[1] = -1;
      }
      UNLOCK();
      if ((!bVar38) || (plVar19[1] = 1, *plVar19 != 1)) {
        core[62e902411887be45]::option::expect_failed
                  ("threads should not terminate unexpectedly",0x29,
                   &PTR_s__rustc_0ef1bc386059596dada8fb65b_002123e8);
LAB_006120e8:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::option::unwrap_failed
                  (&PTR_s__rustc_0ef1bc386059596dada8fb65b_00212400);
      }
      puVar3 = (undefined *)plVar19[3];
      plVar19[3] = -2;
      if (puVar3 == (undefined *)0xfffffffffffffffe) goto LAB_006120e8;
      puVar4 = (undefined *)plVar19[4];
      puVar5 = (undefined *)plVar19[5];
      (*(code *)PTR_memcpy_00841de0)(&local_3b8,plVar19 + 6,0x1c0);
      LOCK();
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
        ::drop_slow(plVar18);
        LOCK();
        *plVar19 = *plVar19 + -1;
        lVar29 = *plVar19;
        UNLOCK();
      }
      else {
        LOCK();
        *plVar19 = *plVar19 + -1;
        lVar29 = *plVar19;
        UNLOCK();
      }
      pcVar35 = (code *)PTR_memcpy_00841de0;
      if (lVar29 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>
        ::drop_slow(plVar19);
        pcVar35 = (code *)PTR_memcpy_00841de0;
      }
      PTR_memcpy_00841de0 = pcVar35;
      if (puVar3 == (undefined *)0xffffffffffffffff) {
        uVar13 = std[c60ef17cbf7de79f]::panic::resume_unwind(puVar4,puVar5);
        goto LAB_006121c3;
      }
      (*pcVar35)(&local_1f8,&local_3b8,0x1c0);
      *ppuVar30 = puVar3;
      ppuVar30[1] = puVar4;
      ppuVar30[2] = puVar5;
      (*pcVar35)(ppuVar30 + 3,&local_1f8,0x1c0);
      uVar34 = uVar34 + 1;
      ppuVar30 = ppuVar30 + 0x3b;
      ppuVar36 = ppuVar36 + 3;
    } while (ppuVar36 != ppuVar16 + uVar23 * 3);
    if (((undefined **)((long)sys::A_BASE_0 + -1) < ppuVar16) && (ppuVar16 < sys::A_END_0)) {
      uVar23 = (ulong)(uint)((0x40 - (int)LZCOUNT(lVar28 + -1)) * 8);
      *ppuVar16 = *(undefined **)(in_FS_OFFSET + (uVar23 - 0x3c8));
      *(undefined ***)(in_FS_OFFSET + (uVar23 - 0x3c8)) = ppuVar16;
      lVar28 = plVar15[3];
    }
    else {
      free(ppuVar16);
      lVar28 = plVar15[3];
    }
    if (lVar28 != 0) {
      do {
        lVar28 = plVar15[2];
        LOCK();
        piVar31 = (int *)(lVar28 + 0x38);
        *piVar31 = *piVar31 + -1;
        UNLOCK();
        if (*piVar31 != 0) {
          piVar31 = (int *)(lVar28 + 0x38);
          do {
            local_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3b2 = 0;
            while (*piVar31 == -1) {
              puVar33 = (undefined4 *)0x0;
              if ((char)local_3b8 != '\0') {
                puVar33 = &uStack_3b0;
              }
              lVar28 = syscall(0xca,piVar31,0x89,0xffffffff,puVar33,0,0xffffffff);
              if ((-1 < lVar28) || (piVar22 = __errno_location(), *piVar22 != 4)) break;
            }
            LOCK();
            iVar2 = *piVar31;
            if (iVar2 == 1) {
              *piVar31 = 0;
            }
            UNLOCK();
          } while (iVar2 != 1);
        }
      } while (plVar15[3] != 0);
    }
    if ((char)plVar15[4] != '\0') {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt
                (&DAT_0020ffb0,0x31,&PTR_s_src_generic_util_rs_0020ff20);
    }
    LOCK();
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow(plVar15);
    }
    local_488 = lVar37 - 1;
  }
  uVar23 = __rustc[45371133cddedda4]::__rust_alloc(0x1800,8);
  auVar39._8_56_ = extraout_var;
  auVar39._0_8_ = extraout_XMM0_Qa;
  if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x1800);
  }
  auVar8 = vpcmpeqd_avx2(auVar39._0_32_,auVar39._0_32_);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202850),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202040),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202ca0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202440),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202860),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202290),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002022a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202790),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002021e0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002021f0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202800),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202900),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202810),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002023d0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202bc0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202910),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002022b0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202cb0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002020a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202350),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002022c0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002026f0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201ee0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202050),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202b30),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002027a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202b40),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201ef0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202920),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201f30),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002029a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002029b0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202450),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202bd0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202ab0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201fd0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202640),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002029c0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202700),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202870),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002024d0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202880),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202480),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201f70),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202530),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002029d0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202890),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202a60),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002025b0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201f80),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002029e0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202930),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202190),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202ac0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002028a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002021a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00201f40),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002026a0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202820),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202360),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202540),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202c50),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_002024e0),0xffff,auVar8);
  vpscatterdq_avx512vl(ZEXT832(uVar23) + ZEXT1632(_DAT_00202b50),0xffff,auVar8);
  uVar24 = __rustc[45371133cddedda4]::__rust_alloc(uVar34 * 0x1c0,8);
  if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar34 * 0x1c0);
  }
  uStack_1e8 = 0;
  uVar25 = uVar34 * 0x1d8;
  ppuVar30 = ppuVar14;
  pcVar35 = (code *)PTR_memcpy_00841de0;
  ppuVar16 = ppuVar14;
  local_1f8 = uVar34;
  uStack_1f0 = uVar24;
  do {
    uVar17 = uStack_1e8;
    ppuVar16 = ppuVar16 + 0x3b;
    uVar25 = uVar25 - 0x1d8;
    ppuVar36 = ppuVar30 + 0x3b;
    puVar3 = *ppuVar30;
    if (puVar3 == (undefined *)0xffffffffffffffff) break;
    __ptr = (undefined **)ppuVar30[1];
    puVar4 = ppuVar30[2];
    (*pcVar35)(&local_3b8,ppuVar30 + 3,0x1c0);
    ppuVar32 = __ptr;
    ppuVar30 = __ptr;
    if (puVar4 == (undefined *)0x0) {
LAB_00611cb0:
      uVar26 = (long)(__ptr + (long)puVar4 * 4) - (long)ppuVar32;
      if (uVar26 != 0) {
        uVar26 = uVar26 >> 5;
        ppuVar32 = ppuVar32 + 2;
        do {
          if (ppuVar32[-1] != (undefined *)0x0) {
            ppuVar30 = (undefined **)*ppuVar32;
            if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar30 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= ppuVar30)) {
              free(ppuVar30);
            }
            else {
              uVar27 = (long)ppuVar32[-1] * 0x38 - 1;
              lVar37 = LZCOUNT(uVar27);
              lVar28 = 0x40 - lVar37;
              if ((uVar27 < 0x10000) || (cVar12 = sys::big_put(ppuVar30,lVar28), cVar12 == '\0')) {
                if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                }
                *ppuVar30 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
                *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = ppuVar30;
              }
            }
          }
          ppuVar32 = ppuVar32 + 4;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    else {
      do {
        ppuVar32 = ppuVar30 + 4;
        puVar5 = ppuVar30[1];
        if (puVar5 == (undefined *)0xffffffffffffffff) goto LAB_00611cb0;
        puVar6 = *ppuVar30;
        local_3e8 = ppuVar30[2];
        puStack_3e0 = ppuVar30[3];
        if ((undefined *)0xff < puVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (puVar6,0x100,&PTR_s_src_generic_util_rs_0020ff38);
        }
        lVar28 = *(long *)(uVar23 + (long)puVar6 * 0x18);
        if (0 < lVar28) {
          ppuVar30 = *(undefined ***)(uVar23 + 8 + (long)puVar6 * 0x18);
          if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar30 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= ppuVar30)) {
            free(ppuVar30);
          }
          else {
            uVar26 = lVar28 * 0x38 - 1;
            lVar28 = LZCOUNT(uVar26);
            lVar37 = 0x40 - lVar28;
            if ((uVar26 < 0x10000) || (cVar12 = sys::big_put(ppuVar30,lVar37), cVar12 == '\0')) {
              if (lVar28 == 0) goto LAB_00612152;
              *ppuVar30 = *(undefined **)(in_FS_OFFSET + lVar37 * 8 + -0x3c8);
              *(undefined ***)(in_FS_OFFSET + lVar37 * 8 + -0x3c8) = ppuVar30;
            }
          }
        }
        puVar20 = (ulong *)(uVar23 + (long)puVar6 * 0x18);
        *puVar20 = (ulong)puVar5;
        puVar20[1] = (ulong)local_3e8;
        puVar20[2] = (ulong)puStack_3e0;
        ppuVar30 = ppuVar32;
      } while (ppuVar32 != __ptr + (long)puVar4 * 4);
    }
    pcVar35 = (code *)PTR_memcpy_00841de0;
    if (puVar3 != (undefined *)0x0) {
      if (((sys::A_BASE_0 == (undefined **)0x0) || (__ptr < sys::A_BASE_0)) ||
         (sys::A_END_0 <= __ptr)) {
        free(__ptr);
      }
      else {
        uVar26 = (long)puVar3 * 0x20 - 1;
        lVar28 = LZCOUNT(uVar26);
        lVar37 = 0x40 - lVar28;
        if ((uVar26 < 0x10000) || (cVar12 = sys::big_put(__ptr,lVar37), cVar12 == '\0')) {
          if (lVar28 == 0) {
LAB_00612152:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar37,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *__ptr = *(undefined **)(in_FS_OFFSET + lVar37 * 8 + -0x3c8);
          *(undefined ***)(in_FS_OFFSET + lVar37 * 8 + -0x3c8) = __ptr;
        }
      }
    }
    if (uVar17 == local_1f8) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>
      ::grow_one(&local_1f8);
      uVar24 = uStack_1f0;
    }
    (*pcVar35)(uVar17 * 0x1c0 + uVar24,&local_3b8,0x1c0);
    uStack_1e8 = uVar17 + 1;
    ppuVar30 = ppuVar36;
  } while (ppuVar36 != ppuVar14 + uVar34 * 0x3b);
  if (ppuVar14 + uVar34 * 0x3b != ppuVar36) {
    uVar25 = uVar25 / 0x1d8;
    do {
      core[62e902411887be45]::ptr::drop_glue::
      <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
                (ppuVar16);
      ppuVar16 = ppuVar16 + 0x3b;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar14 < sys::A_BASE_0)) ||
     (sys::A_END_0 <= ppuVar14)) {
    free(ppuVar14);
  }
  else {
    lVar28 = 0x40 - LZCOUNT(local_488);
    if ((local_488 < 0x10000) || (cVar12 = sys::big_put(ppuVar14,lVar28), cVar12 == '\0')) {
      if (LZCOUNT(local_488) == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *ppuVar14 = *(undefined **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
      *(undefined ***)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = ppuVar14;
    }
  }
  lVar28 = 0;
  while( true ) {
    lVar29 = lVar28;
    plVar15 = (long *)(uVar23 + 8 + lVar29);
    lVar28 = *plVar15;
    lVar37 = plVar15[1];
    local_3b8 = (int)lVar28;
    uStack_3b4 = (undefined2)((ulong)lVar28 >> 0x20);
    uStack_3b2 = (undefined2)((ulong)lVar28 >> 0x30);
    uStack_3b0 = (undefined4)lVar37;
    uStack_3ac = (undefined1)((ulong)lVar37 >> 0x20);
    uStack_3ab = (undefined1)((ulong)lVar37 >> 0x28);
    uStack_3aa = (undefined1)((ulong)lVar37 >> 0x30);
    uStack_3a9 = (undefined1)((ulong)lVar37 >> 0x38);
    if (*(long *)(uVar23 + lVar29) == -1) break;
    plVar15 = (long *)(uVar23 + lVar29);
    *plVar15 = *(long *)(uVar23 + lVar29);
    plVar15[1] = lVar28;
    plVar15[2] = lVar37;
    lVar28 = plVar15[4];
    lVar37 = plVar15[5];
    local_3b8 = (int)lVar28;
    uStack_3b4 = (undefined2)((ulong)lVar28 >> 0x20);
    uStack_3b2 = (undefined2)((ulong)lVar28 >> 0x30);
    uStack_3b0 = (undefined4)lVar37;
    uStack_3ac = (undefined1)((ulong)lVar37 >> 0x20);
    uStack_3ab = (undefined1)((ulong)lVar37 >> 0x28);
    uStack_3aa = (undefined1)((ulong)lVar37 >> 0x30);
    uStack_3a9 = (undefined1)((ulong)lVar37 >> 0x38);
    if (plVar15[3] == -1) break;
    *(long *)(uVar23 + 0x18 + lVar29) = plVar15[3];
    plVar15[4] = lVar28;
    plVar15[5] = lVar37;
    lVar28 = lVar29 + 0x30;
    if (lVar29 + 0x30 == 0x1800) {
      param_1[5] = uStack_1e8;
      param_1[3] = local_1f8;
      param_1[4] = uStack_1f0;
      *param_1 = 0x100;
      param_1[1] = uVar23;
      param_1[2] = (lVar29 + 0x30U >> 3) * -0x5555555555555555;
      return;
    }
  }
LAB_0061202b:
  core[62e902411887be45]::option::expect_failed("job result",10,&PTR_s_src_generic_util_rs_00210548)
  ;
LAB_0061203f:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x1f0);
LAB_00612026:
  <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
  goto LAB_0061202b;
}


// ==== pipeline::generic::util::par_run::<(), core::result::Result<(), core::io::error::Error>, pipeline::generic::run::{closure#13}, pipeline::generic::run::{closure#14}> @ 00612260 (3691 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<(),
   core[62e902411887be45]::result::Result<(), core[62e902411887be45]::io::error::Error>,
   pipeline[509596c7b52975b2]::generic::run::{closure#13},
   pipeline[509596c7b52975b2]::generic::run::{closure#14}> */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>
          (long *param_1,undefined *param_2,undefined *param_3,ulong param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined **__ptr;
  undefined *puVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  undefined *puVar20;
  int *piVar21;
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  undefined **ppuVar25;
  uint uVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined **ppuVar30;
  long lVar31;
  undefined *puVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [16];
  undefined1 local_2d1;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined **local_2c0;
  undefined **local_2b8;
  long local_2b0;
  long local_2a8;
  undefined **local_2a0;
  undefined *local_298;
  undefined *puStack_290;
  undefined *local_280;
  long *local_278;
  undefined *local_270;
  undefined8 local_268;
  long *local_260;
  undefined **local_258;
  undefined8 local_250;
  undefined1 *local_248;
  undefined8 *puStack_240;
  ulong uStack_238;
  undefined *puStack_230;
  ulong local_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined1 *local_208;
  undefined8 *puStack_200;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e0;
  undefined8 local_1d0 [3];
  undefined1 local_1b8;
  int local_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  ulong uStack_1a0;
  ulong uStack_198;
  
  local_2d0 = param_2;
  if (param_3 < param_2) {
    local_2d0 = param_3;
  }
  local_268 = 0;
  local_248 = &local_2d1;
  puStack_240 = &local_268;
  local_2c8 = param_2;
  local_278 = param_1;
  uStack_238 = param_4;
  puStack_230 = param_2;
  if (param_3 == (undefined *)0x1) {
    ppuVar11 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
    if (ppuVar11 == (undefined **)0x0) goto LAB_00612f71;
    local_2b8 = ppuVar11;
    <(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::{closure#13},pipeline[509596c7b52975b2]::generic::run::{closure#14}>
    ::_closure_0_(ppuVar11,&local_248);
    local_2b0 = 5;
    local_2d0 = (undefined *)0x1;
  }
  else {
    uVar23 = *(ulong *)(in_FS_OFFSET + -0x30);
    if (uVar23 < 3) {
      if (uVar23 == 2) {
        if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
          lVar31 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          do {
            if (lVar31 == -1) goto LAB_00612f55;
            lVar24 = lVar31 + 1;
            LOCK();
            bVar33 = lVar31 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            if (bVar33) {
              <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar24;
            }
            else {
              lVar31 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            }
            UNLOCK();
          } while (!bVar33);
          *(long *)(in_FS_OFFSET + -0x28) = lVar24;
        }
        lVar31 = <std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
      }
      else {
        lVar31 = std[c60ef17cbf7de79f]::thread::current::init_current(uVar23);
      }
    }
    else {
      LOCK();
      plVar12 = (long *)(uVar23 - 0x10);
      lVar31 = *plVar12;
      *plVar12 = *plVar12 + 1;
      UNLOCK();
      if (*plVar12 == 0 || SCARRY8(lVar31,1) != *plVar12 < 0) {
LAB_00613001:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar31 = uVar23 - 0x10;
    }
    plVar12 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x28,8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
    }
    *plVar12 = 1;
    plVar12[1] = 1;
    plVar12[2] = lVar31;
    plVar12[3] = 0;
    *(undefined1 *)(plVar12 + 4) = 0;
    local_2c0 = (undefined **)((long)local_2d0 * 0x18);
    local_2b8 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(local_2c0,8);
    if (local_2b8 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_2c0);
    }
    puVar27 = (undefined *)0x0;
    do {
      local_1d0[0] = 0xffffffffffffffff;
      local_1e0 = 0;
      local_1b8 = 0;
      LOCK();
      lVar31 = *plVar12;
      *plVar12 = *plVar12 + 1;
      UNLOCK();
      if (*plVar12 == 0 || SCARRY8(lVar31,1) != *plVar12 < 0) goto LAB_00613001;
      if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == 0) {
        uStack_1a8 = 0x4154535f;
        uStack_1a4 = 0x43;
        uStack_1a3 = 0x4b;
        local_1b0 = 0x54535552;
        uStack_1ac = 0x4d5f;
        uStack_1aa = 0x4e49;
        uStack_1a2 = 0;
        uVar8 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
        auVar37[7] = uStack_1a1;
        auVar37._0_7_ = 0x4b434154535f;
        auVar37._8_8_ = 0;
        uVar9 = vptestmb_avx512vl(auVar37,auVar37);
        if ((byte)((char)((ushort)uVar8 >> 4) << 4 | (byte)uVar8 & (byte)uVar9 & 0xf) == 0xff) {
          std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_260,&local_1b0);
          ppuVar11 = local_258;
          plVar13 = local_260;
          if (local_260 == (long *)0xfffffffffffffffe) goto LAB_0061259d;
          if (local_260 == (long *)0xffffffffffffffff) goto LAB_006125b8;
          core[62e902411887be45]::str::converts::from_utf8(&local_1b0,local_258,local_250);
          if ((local_1b0 == 1) || (uStack_1a0 == 0)) {
LAB_00612805:
            uVar23 = 0x200000;
          }
          else {
            pcVar22 = (char *)CONCAT17(uStack_1a1,
                                       CONCAT16(uStack_1a2,
                                                CONCAT15(uStack_1a3,CONCAT14(uStack_1a4,uStack_1a8))
                                               ));
            if (uStack_1a0 == 1) {
              cVar10 = *pcVar22;
              if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00612805;
            }
            else {
              cVar10 = *pcVar22;
            }
            uVar28 = (ulong)(cVar10 == '+');
            if (0x10 < uStack_1a0 - uVar28) {
              lVar31 = 0;
              uVar23 = 0;
              while( true ) {
                if (lVar31 == uStack_1a0 + -uVar28) goto joined_r0x0061282d;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar23;
                uVar17 = SUB168(auVar6 * ZEXT816(10),0);
                if (SUB168(auVar6 * ZEXT816(10),8) != 0) break;
                uVar26 = (byte)pcVar22[lVar31 + uVar28] - 0x30;
                uVar23 = uVar17 + uVar26;
                if ((9 < uVar26) || (lVar31 = lVar31 + 1, CARRY8(uVar17,(ulong)uVar26))) break;
              }
              goto LAB_00612805;
            }
            if (uStack_1a0 == uVar28) {
              uVar23 = 0;
            }
            else {
              lVar31 = 0;
              uVar23 = 0;
              do {
                if (9 < (byte)pcVar22[lVar31 + uVar28] - 0x30) {
                  uVar23 = 0x200000;
                  break;
                }
                uVar23 = (ulong)((byte)pcVar22[lVar31 + uVar28] - 0x30) + uVar23 * 10;
                lVar31 = lVar31 + 1;
              } while (lVar31 != uStack_1a0 + -uVar28);
            }
          }
joined_r0x0061282d:
          if (plVar13 != (long *)0x0) {
            if (((sys::A_BASE_0 == (undefined **)0x0) || (ppuVar11 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= ppuVar11)) {
              free(ppuVar11);
            }
            else {
              if (plVar13 < &DAT_00000011) {
                plVar13 = (long *)&DAT_00000010;
              }
              lVar31 = 0x40 - LZCOUNT((undefined1 *)((long)plVar13 + -1));
              if (((undefined1 *)((long)plVar13 + -1) < (undefined1 *)0x10000) ||
                 (cVar10 = sys::big_put(ppuVar11,lVar31), cVar10 == '\0')) {
                *ppuVar11 = *(undefined **)(in_FS_OFFSET + lVar31 * 8 + -0x3c8);
                *(undefined ***)(in_FS_OFFSET + lVar31 * 8 + -0x3c8) = ppuVar11;
              }
            }
          }
        }
        else {
          ppuVar11 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_0061259d:
          if ((1 < ((uint)ppuVar11 & 3) - 2) && (((ulong)ppuVar11 & 3) != 0)) {
            (**(code **)((long)ppuVar11 + 0x17))((long)ppuVar11 + -1);
          }
LAB_006125b8:
          uVar23 = 0x200000;
        }
        std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 = uVar23 + 1;
      }
      else {
        uVar23 = std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 - 1;
      }
      puVar20 = puVar27 + 1;
      lVar31 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      do {
        if (lVar31 == -1) goto LAB_00612f55;
        lVar24 = lVar31 + 1;
        LOCK();
        bVar33 = lVar31 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        if (bVar33) {
          <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar24;
        }
        else {
          lVar31 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        }
        UNLOCK();
      } while (!bVar33);
      plVar13 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar24,local_1d0);
      local_260 = plVar13;
      std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_1b0,&local_260);
      plVar14 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x30,8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x30);
      }
      *plVar14 = 1;
      plVar14[1] = 1;
      plVar14[2] = (long)plVar12;
      plVar14[3] = -2;
      LOCK();
      lVar31 = *plVar14;
      *plVar14 = *plVar14 + 1;
      UNLOCK();
      if (*plVar14 == 0 || SCARRY8(lVar31,1) != *plVar14 < 0) goto LAB_00613001;
      local_208 = local_248;
      puStack_200 = puStack_240;
      uStack_1f8 = uStack_238;
      puStack_1f0 = puStack_230;
      local_228 = CONCAT26(uStack_1aa,CONCAT24(uStack_1ac,local_1b0));
      uStack_220 = CONCAT17(uStack_1a1,
                            CONCAT16(uStack_1a2,CONCAT15(uStack_1a3,CONCAT14(uStack_1a4,uStack_1a8))
                                    ));
      uStack_218 = uStack_1a0;
      uStack_210 = uStack_198;
      LOCK();
      plVar1 = plVar12 + 3;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (*plVar1 == 0 || SCARRY8(lVar31,1) != *plVar1 < 0) {
        uVar26 = <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(plVar12 + 2);
        goto LAB_00612faa;
      }
      puVar15 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(0x48,8);
      if (puVar15 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x48);
      }
      puVar15[4] = (ulong)local_208;
      puVar15[5] = (ulong)puStack_200;
      puVar15[6] = uStack_1f8;
      puVar15[7] = (ulong)puStack_1f0;
      *puVar15 = local_228;
      puVar15[1] = uStack_220;
      puVar15[2] = uStack_218;
      puVar15[3] = uStack_210;
      puVar15[8] = (ulong)plVar14;
      LOCK();
      lVar31 = *plVar13;
      *plVar13 = *plVar13 + 1;
      UNLOCK();
      if (*plVar13 == 0 || SCARRY8(lVar31,1) != *plVar13 < 0) goto LAB_00613001;
      puVar16 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
      if (puVar16 == (undefined8 *)0x0) goto LAB_00612f71;
      *puVar16 = plVar13;
      puVar16[1] = puVar15;
      puVar16[2] = &
                   PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>::_closure_1_>_00210028
      ;
      auVar37 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(uVar23,puVar16);
      if ((auVar37._0_8_ & 1) != 0) {
        LOCK();
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>>>
          ::drop_slow(plVar14);
        }
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
          ::drop_slow(plVar13);
        }
        local_1b0 = auVar37._8_4_;
        uStack_1ac = auVar37._12_2_;
        uStack_1aa = auVar37._14_2_;
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::result::unwrap_failed
                  ("failed to spawn thread",0x16,&local_1b0,
                   &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                   &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
      }
      local_2b8[(long)puVar27 * 3] = (undefined *)plVar13;
      local_2b8[(long)puVar27 * 3 + 1] = (undefined *)plVar14;
      local_2b8[(long)puVar27 * 3 + 2] = auVar37._8_8_;
      puVar27 = puVar20;
    } while (puVar20 != local_2d0);
    ppuVar25 = (undefined **)((long)local_2b8 + (long)local_2c0);
    ppuVar11 = local_2b8;
    do {
      plVar13 = (long *)*ppuVar11;
      plVar14 = (long *)ppuVar11[1];
      uVar26 = (*(code *)PTR_pthread_join_00841df0)(ppuVar11[2],0);
      if (uVar26 != 0) {
LAB_00612faa:
        if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
            &PTR_format_error_0058cdd8) {
LAB_006130bf:
          core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
               (undefined *)&PTR_format_error_0058cdd8;
        }
        local_228 = (ulong)uVar26 << 0x20 | 2;
        local_1b0 = (int)&local_228;
        uStack_1ac = (undefined2)((ulong)&local_228 >> 0x20);
        uStack_1aa = (undefined2)((ulong)&local_228 >> 0x30);
        uStack_1a8 = 0x748ee0;
        uStack_1a4 = 0;
        uStack_1a3 = 0;
        uStack_1a2 = 0;
        uStack_1a1 = 0;
                    /* try { // try from 00612fea to 00613000 has its CatchHandler @ 00613101 */
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_fmt
                  (&DAT_0020c8a1,&local_1b0,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058d618);
      }
      LOCK();
      bVar33 = plVar14[1] == 1;
      if (bVar33) {
        plVar14[1] = -1;
      }
      UNLOCK();
      if ((!bVar33) || (plVar14[1] = 1, *plVar14 != 1)) {
        core[62e902411887be45]::option::expect_failed
                  ("threads should not terminate unexpectedly",0x29,
                   &PTR_s__rustc_0ef1bc386059596dada8fb65b_002123e8);
LAB_00613017:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::option::unwrap_failed
                  (&PTR_s__rustc_0ef1bc386059596dada8fb65b_00212400);
      }
      puVar27 = (undefined *)plVar14[3];
      plVar14[3] = -2;
      if (puVar27 == (undefined *)0xfffffffffffffffe) goto LAB_00613017;
      local_298 = (undefined *)plVar14[4];
      puStack_290 = (undefined *)plVar14[5];
      LOCK();
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
        ::drop_slow(plVar13);
        LOCK();
        *plVar14 = *plVar14 + -1;
        lVar31 = *plVar14;
        UNLOCK();
      }
      else {
        LOCK();
        *plVar14 = *plVar14 + -1;
        lVar31 = *plVar14;
        UNLOCK();
      }
      if (lVar31 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>>>
        ::drop_slow(plVar14);
      }
      if (puVar27 == (undefined *)0xffffffffffffffff) {
        uVar26 = std[c60ef17cbf7de79f]::panic::resume_unwind(local_298,puStack_290);
        goto LAB_006130bf;
      }
      *ppuVar11 = puVar27;
      ppuVar11[1] = local_298;
      ppuVar11[2] = puStack_290;
      ppuVar11 = ppuVar11 + 3;
    } while (ppuVar11 != ppuVar25);
    if (plVar12[3] != 0) {
      do {
        lVar31 = plVar12[2];
        LOCK();
        piVar19 = (int *)(lVar31 + 0x38);
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (*piVar19 != 0) {
          piVar19 = (int *)(lVar31 + 0x38);
          do {
            local_1b0 = 0;
            uStack_1ac = 0;
            uStack_1aa = 0;
            while (*piVar19 == -1) {
              puVar29 = (undefined4 *)0x0;
              if ((char)local_1b0 != '\0') {
                puVar29 = &uStack_1a8;
              }
              lVar31 = syscall(0xca,piVar19,0x89,0xffffffff,puVar29,0,0xffffffff);
              if ((-1 < lVar31) || (piVar18 = __errno_location(), *piVar18 != 4)) break;
            }
            LOCK();
            iVar3 = *piVar19;
            if (iVar3 == 1) {
              *piVar19 = 0;
            }
            UNLOCK();
          } while (iVar3 != 1);
        }
      } while (plVar12[3] != 0);
    }
    if ((char)plVar12[4] != '\0') {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt
                (&DAT_0020ffb0,0x31,&PTR_s_src_generic_util_rs_0020ff20);
    }
    LOCK();
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow();
    }
    local_2b0 = 0x40 - LZCOUNT((long)local_2c0 + -1);
  }
  puVar27 = local_2c8;
  lVar31 = (long)local_2c8 << 4;
  piVar19 = (int *)__rustc[45371133cddedda4]::__rust_alloc(lVar31,8);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar31);
  }
  if (puVar27 < (undefined *)0x4) {
    puVar32 = (undefined *)0x0;
  }
  else {
    if (puVar27 < (undefined *)0x10) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar32 = (undefined *)(ulong)((uint)puVar27 & 0x1f0);
      puVar20 = puVar32;
      auVar34 = _DAT_00203760;
      do {
        auVar35 = vpsllq_avx2(auVar34,4);
        auVar36 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        vpscatterqq_avx512vl(ZEXT832(piVar19) + auVar35,0xffff,auVar36);
        vpscatterqq_avx512vl(ZEXT832(piVar19) + ZEXT832(0x40) + auVar35,0xffff,auVar36);
        vpscatterqq_avx512vl(ZEXT832(piVar19) + ZEXT832(0x80) + auVar35,0xffff,auVar36);
        vpscatterqq_avx512vl(ZEXT832(piVar19) + ZEXT832(0xc0) + auVar35,0xffff,auVar36);
        auVar36._0_8_ = auVar34._0_8_ + DAT_00201e58;
        auVar36._8_8_ = auVar34._8_8_ + DAT_00201e58;
        auVar36._16_8_ = auVar34._16_8_ + DAT_00201e58;
        auVar36._24_8_ = auVar34._24_8_ + DAT_00201e58;
        puVar20 = puVar20 + -0x10;
        auVar34 = auVar36;
      } while (puVar20 != (undefined *)0x0);
      if (puVar27 == puVar32) goto LAB_00612bb0;
      puVar20 = puVar32;
      if (((ulong)puVar27 & 0xc) == 0) goto LAB_00612b90;
    }
    puVar32 = (undefined *)(ulong)((uint)puVar27 & 0x1fc);
    auVar34 = vpbroadcastq_avx512vl();
    auVar34 = vpor_avx2(auVar34,_DAT_00203760);
    lVar24 = (long)puVar20 - (long)puVar32;
    do {
      auVar36 = vpsllq_avx2(auVar34,4);
      vpscatterqq_avx512vl
                (ZEXT832(piVar19) + auVar36,0xffff,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar35._0_8_ = auVar34._0_8_ + DAT_00201e20;
      auVar35._8_8_ = auVar34._8_8_ + DAT_00201e20;
      auVar35._16_8_ = auVar34._16_8_ + DAT_00201e20;
      auVar35._24_8_ = auVar34._24_8_ + DAT_00201e20;
      lVar24 = lVar24 + 4;
      auVar34 = auVar35;
    } while (lVar24 != 0);
    if (puVar27 == puVar32) goto LAB_00612bb0;
  }
LAB_00612b90:
  pcVar22 = (char *)((ulong)(uint)((int)puVar32 << 4) + (long)piVar19);
  lVar24 = (long)puVar27 - (long)puVar32;
  do {
    pcVar22[0] = '\0';
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar22 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
LAB_00612bb0:
  local_2a0 = local_2b8 + (long)local_2d0 * 3;
  local_280 = (undefined *)(((ulong)(local_2d0 + -1) & 0x1fffffffffffffff) + 1);
  puVar32 = (undefined *)0x0;
  ppuVar25 = local_2b8;
  puVar20 = (undefined *)((long)local_2d0 * 0x18);
  ppuVar11 = local_2b8;
  local_2a8 = lVar31;
  do {
    ppuVar11 = ppuVar11 + 3;
    puVar20 = puVar20 + -0x18;
    ppuVar30 = ppuVar25 + 3;
    puVar4 = *ppuVar25;
    if (puVar4 == (undefined *)0xffffffffffffffff) goto LAB_00612d95;
    __ptr = (undefined **)ppuVar25[1];
    puVar5 = ppuVar25[2];
    local_2d0 = puVar20;
    local_2c0 = ppuVar30;
    local_298 = puVar32;
    local_270 = puVar4;
    if (puVar5 != (undefined *)0x0) {
      ppuVar25 = __ptr;
      do {
        puVar20 = *ppuVar25;
        if (puVar27 <= puVar20) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (puVar20,puVar27,&PTR_s_src_generic_util_rs_0020ff38);
        }
        puVar32 = ppuVar25[1];
        if (*(long *)(piVar19 + (long)puVar20 * 4) != 0) {
          uVar23 = *(ulong *)(piVar19 + (long)puVar20 * 4 + 2);
          if (uVar23 != 0) {
            if ((1 < ((uint)uVar23 & 3) - 2) && ((uVar23 & 3) != 0)) {
              (**(code **)(uVar23 + 0x17))(uVar23 - 1);
              puVar27 = local_2c8;
            }
          }
        }
        piVar18 = piVar19 + (long)puVar20 * 4;
        piVar18[0] = 1;
        piVar18[1] = 0;
        *(undefined **)(piVar18 + 2) = puVar32;
        ppuVar25 = ppuVar25 + 2;
      } while (ppuVar25 != __ptr + (long)puVar5 * 2);
    }
    if (local_270 != (undefined *)0x0) {
      if (((sys::A_BASE_0 == (undefined **)0x0) || (__ptr < sys::A_BASE_0)) ||
         (sys::A_END_0 <= __ptr)) {
        free(__ptr);
        puVar27 = local_2c8;
      }
      else {
        uVar23 = (long)local_270 * 0x10 - 1;
        lVar31 = LZCOUNT(uVar23);
        lVar24 = 0x40 - lVar31;
        if (0xffff < uVar23) {
          cVar10 = sys::big_put(__ptr,lVar24);
          puVar27 = local_2c8;
          if (cVar10 != '\0') goto LAB_00612c0d;
        }
        if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *__ptr = *(undefined **)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
        *(undefined ***)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = __ptr;
      }
    }
LAB_00612c0d:
    puVar32 = local_298 + 1;
    ppuVar25 = local_2c0;
    puVar20 = local_2d0;
  } while (local_2c0 != local_2a0);
  ppuVar30 = local_2c0;
  puVar32 = local_280;
LAB_00612d95:
  if (local_2a0 != ppuVar30) {
    uVar23 = (ulong)puVar20 / 0x18;
    do {
      core[62e902411887be45]::ptr::drop_glue::
      <(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>
                (ppuVar11);
      ppuVar11 = ppuVar11 + 3;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (((sys::A_BASE_0 == (undefined **)0x0) || (local_2b8 < sys::A_BASE_0)) ||
     (sys::A_END_0 <= local_2b8)) {
    free(local_2b8);
  }
  else {
    *local_2b8 = *(undefined **)(in_FS_OFFSET + local_2b0 * 8 + -0x3c8);
    *(undefined ***)(in_FS_OFFSET + local_2b0 * 8 + -0x3c8) = local_2b8;
  }
  uVar26 = ((uint)(local_2a8 - 0x10U >> 4) & 0xfffffff) + 1 & 7;
  piVar18 = piVar19;
  piVar21 = piVar19;
  if (uVar26 != 0) {
    uVar23 = (ulong)(uVar26 * 2);
    do {
      if (*piVar18 != 1) goto LAB_00612f5a;
      piVar2 = piVar18 + 2;
      piVar18 = piVar18 + 4;
      *(undefined8 *)piVar21 = *(undefined8 *)piVar2;
      piVar21 = piVar21 + 2;
      uVar23 = uVar23 - 2;
    } while (uVar23 != 0);
  }
  if (0x6f < local_2a8 - 0x10U) {
    do {
      if ((((char)*piVar18 == '\0') ||
          (*(undefined8 *)piVar21 = *(undefined8 *)(piVar18 + 2), piVar18[4] != 1)) ||
         ((*(undefined8 *)(piVar21 + 2) = *(undefined8 *)(piVar18 + 6), piVar18[8] != 1 ||
          ((((*(undefined8 *)(piVar21 + 4) = *(undefined8 *)(piVar18 + 10), piVar18[0xc] != 1 ||
             (*(undefined8 *)(piVar21 + 6) = *(undefined8 *)(piVar18 + 0xe), piVar18[0x10] != 1)) ||
            (*(undefined8 *)(piVar21 + 8) = *(undefined8 *)(piVar18 + 0x12), piVar18[0x14] != 1)) ||
           ((*(undefined8 *)(piVar21 + 10) = *(undefined8 *)(piVar18 + 0x16), piVar18[0x18] != 1 ||
            (*(undefined8 *)(piVar21 + 0xc) = *(undefined8 *)(piVar18 + 0x1a), piVar18[0x1c] != 1)))
           ))))) goto LAB_00612f5a;
      piVar2 = piVar18 + 0x1e;
      piVar18 = piVar18 + 0x20;
      *(undefined8 *)(piVar21 + 0xe) = *(undefined8 *)piVar2;
      piVar21 = piVar21 + 0x10;
    } while (piVar18 != (int *)(local_2a8 + (long)piVar19));
  }
  *local_278 = (long)local_2c8 * 2;
  local_278[1] = (long)piVar19;
  local_278[2] = (ulong)((long)piVar21 - (long)piVar19) >> 3;
  local_278[3] = 0;
  local_278[4] = 1;
  local_278[5] = (long)puVar32;
  return;
LAB_00612f55:
  <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
LAB_00612f5a:
  core[62e902411887be45]::option::expect_failed("job result",10,&PTR_s_src_generic_util_rs_00210548)
  ;
LAB_00612f71:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
}


// ==== pipeline::generic::parse::split::<2> @ 00613140 (680 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::parse::split::<2usize> */

void __rustcall
pipeline[509596c7b52975b2]::generic::parse::split::<2usize>
          (long *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_3 != 0) {
    bVar2 = false;
    uVar3 = 1;
    do {
      if (param_2[uVar3 - 1] == '\"') {
        bVar2 = true;
      }
      else if (param_2[uVar3 - 1] == ',') {
        uVar7 = uVar3 - 1;
        if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (0,uVar7,param_3,&PTR_s_src_generic_parse_rs_0020ff80);
        }
        pcVar8 = param_2;
        uVar9 = uVar7;
        if (!bVar2) goto LAB_006132d3;
        if (((1 < uVar7) && (*param_2 == '\"')) && (param_2[uVar3 - 2] == '\"')) {
          uVar9 = uVar3 - 3;
          pcVar8 = param_2 + 1;
          if (uVar7 < 0x12) {
            if (uVar9 != 0) {
              uVar6 = 2;
              goto LAB_006131fc;
            }
            uVar9 = 0;
            goto LAB_006132d3;
          }
          uVar6 = ((ulong)(param_2 + 8) & 0xfffffffffffffff8) - (long)pcVar8;
          if (uVar6 == 0) {
            uVar6 = 0;
            goto LAB_0061322d;
          }
          lVar5 = 1;
          goto LAB_00613290;
        }
        break;
      }
      bVar10 = uVar3 != param_3;
      uVar3 = uVar3 + 1;
    } while (bVar10);
  }
  goto LAB_006133cd;
  while (lVar5 = lVar5 + 1, ((ulong)(param_2 + 8) & 0xfffffffffffffff8) - (long)param_2 != lVar5) {
LAB_00613290:
    if (param_2[lVar5] == '\"') goto LAB_006133cd;
  }
  if (uVar6 <= uVar3 - 0x13) {
LAB_0061322d:
    auVar12._8_8_ = DAT_00201b58;
    auVar12._0_8_ = DAT_00201b58;
    auVar13._8_8_ = DAT_00201d50;
    auVar13._0_8_ = DAT_00201d50;
    do {
      auVar11 = vpaddq_avx(*(undefined1 (*) [16])(pcVar8 + uVar6) ^ auVar12,auVar13);
      auVar11 = vpternlogq_avx512vl(auVar11,*(undefined1 (*) [16])(pcVar8 + uVar6),_DAT_002028b0,
                                    0xf6);
      if ((auVar11._8_8_ & auVar11._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
      uVar6 = uVar6 + 0x10;
    } while (uVar6 <= uVar3 - 0x13);
  }
  if (uVar9 != uVar6) {
    do {
      if (pcVar8[uVar6] == '\"') goto LAB_006133cd;
      uVar6 = uVar6 + 1;
    } while (uVar3 - 3 != uVar6);
  }
  goto LAB_006132d3;
  while (uVar6 = uVar6 + 1, uVar7 != uVar6) {
LAB_006131fc:
    if (param_2[uVar6 - 1] == '\"') goto LAB_006133cd;
  }
LAB_006132d3:
  pcVar4 = param_2 + uVar3;
  if (pcVar4 == param_2 + param_3) {
    if (uVar7 < param_3) {
      uVar7 = param_3 - uVar3;
      goto LAB_0061339f;
    }
  }
  else {
    bVar2 = false;
    uVar7 = uVar3;
    do {
      if (param_2[uVar7] == '\"') {
        bVar2 = true;
      }
      else if (param_2[uVar7] == ',') goto LAB_006133cd;
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
    uVar6 = param_3 - uVar3;
    if (uVar3 <= param_3) {
      if (bVar2) {
        if (((uVar6 < 2) || (*pcVar4 != '\"')) || ((param_2 + param_3)[-1] != '\"')) {
LAB_006133cd:
          *param_1 = 0;
          return;
        }
        uVar7 = uVar6 - 2;
        pcVar4 = pcVar4 + 1;
        if (uVar6 < 0x12) {
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            lVar5 = 0;
            do {
              if (param_2[uVar3 + 1 + lVar5] == '\"') goto LAB_006133cd;
              lVar1 = (uVar3 - param_3) + lVar5;
              lVar5 = lVar5 + 1;
            } while (lVar1 != -3);
          }
        }
        else {
          uVar3 = core[62e902411887be45]::slice::memchr::memchr_aligned(0x22,pcVar4,uVar7);
          if ((uVar3 & 1) != 0) goto LAB_006133cd;
        }
      }
      else {
        uVar7 = uVar6;
      }
LAB_0061339f:
      *param_1 = (long)pcVar8;
      param_1[1] = uVar9;
      param_1[2] = (long)pcVar4;
      param_1[3] = uVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core[62e902411887be45]::slice::index::slice_index_fail
            (uVar3,param_3,param_3,&PTR_s_src_generic_parse_rs_0020ff50);
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::generic::util::par_run<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)> @ 00613410 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P1)>,
   pipeline[509596c7b52975b2]::generic::P1Bufs)> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::generic::util::par_run::
  <pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#8}>
  ::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::generic::util::par_run<pipeline::generic::P2Bufs, pipeline::generic::P2, <pipeline::generic::P2Bufs as core::default::Default>::default, pipeline::generic::run::{closure#10}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs)> @ 00613418 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,
   pipeline[509596c7b52975b2]::generic::P2, <pipeline[509596c7b52975b2]::generic::P2Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#10}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P2)>,
   pipeline[509596c7b52975b2]::generic::P2Bufs)> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::generic::util::par_run::
  <pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#10}>
  ::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::generic::util::par_run<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>), alloc::vec::Vec<pipeline::generic::core::UserRow>, pipeline::generic::run::{closure#11}, pipeline::generic::run::{closure#12}>::{closure#0}, (alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>))> @ 00613420 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,
   pipeline[509596c7b52975b2]::generic::run::{closure#11},
   pipeline[509596c7b52975b2]::generic::run::{closure#12}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
    */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::generic::util::par_run::
  <(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::{closure#11},pipeline[509596c7b52975b2]::generic::run::{closure#12}>
  ::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::generic::util::par_run<(), core::result::Result<(), core::io::error::Error>, pipeline::generic::run::{closure#13}, pipeline::generic::run::{closure#14}>::{closure#0}, (alloc::vec::Vec<(usize, core::result::Result<(), core::io::error::Error>)>, ())> @ 00613428 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::generic::util::par_run<(),
   core[62e902411887be45]::result::Result<(), core[62e902411887be45]::io::error::Error>,
   pipeline[509596c7b52975b2]::generic::run::{closure#13},
   pipeline[509596c7b52975b2]::generic::run::{closure#14}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, core[62e902411887be45]::result::Result<(),
   core[62e902411887be45]::io::error::Error>)>, ())> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::generic::util::par_run<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::generic::util::par_run::
  <(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::{closure#13},pipeline[509596c7b52975b2]::generic::run::{closure#14}>
  ::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)>::{closure#1}::{closure#0}::{closure#0}, ()> @ 00613580 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P1)>,
   pipeline[509596c7b52975b2]::generic::P1Bufs)>::{closure#1}::{closure#0}::{closure#0}, ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>::inherit_and_run();
  return in_RAX;
}


// ==== core::slice::sort::unstable::ipnsort::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 00617460 (553 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  
  lVar15 = param_1[6];
  if (lVar15 == param_1[2]) {
    uVar19 = param_1[1];
    uVar17 = param_1[5];
    uVar12 = uVar19;
    if (uVar17 < uVar19) {
      uVar12 = uVar17;
    }
    iVar11 = (*(code *)PTR_memcmp_008420a0)(param_1[4],*param_1,uVar12);
    lVar18 = uVar17 - uVar19;
    if (iVar11 != 0) {
      lVar18 = (long)iVar11;
    }
    if (lVar18 < 0) {
LAB_006175f7:
      puVar10 = PTR_memcmp_008420a0;
      plVar20 = param_1 + 10;
      uVar19 = 2;
      do {
        lVar18 = *plVar20;
        if (lVar18 == lVar15) {
          uVar17 = plVar20[-5];
          uVar12 = plVar20[-1];
          uVar14 = uVar17;
          if (uVar12 < uVar17) {
            uVar14 = uVar12;
          }
          iVar11 = (*(code *)puVar10)(plVar20[-2],plVar20[-6],uVar14);
          lVar15 = uVar12 - uVar17;
          if (iVar11 != 0) {
            lVar15 = (long)iVar11;
          }
          if (-1 < lVar15) goto LAB_00617657;
        }
        else if (lVar15 <= lVar18) {
LAB_00617657:
          bVar9 = true;
          goto joined_r0x00617663;
        }
        uVar19 = uVar19 + 1;
        plVar20 = plVar20 + 4;
        lVar15 = lVar18;
      } while (param_2 != uVar19);
LAB_00617531:
      puVar13 = param_1 + 4;
      puVar16 = param_1 + param_2 * 4 + -4;
      uVar19 = 0;
      do {
        uVar17 = uVar19;
        uVar2 = puVar16[1];
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        uVar5 = puVar13[-4];
        uVar6 = puVar13[-3];
        uVar7 = puVar13[-2];
        uVar8 = puVar13[-1];
        puVar13[-4] = *puVar16;
        puVar13[-3] = uVar2;
        puVar13[-2] = uVar3;
        puVar13[-1] = uVar4;
        *puVar16 = uVar5;
        puVar16[1] = uVar6;
        puVar16[2] = uVar7;
        puVar16[3] = uVar8;
        uVar2 = *puVar13;
        uVar3 = puVar13[1];
        uVar4 = puVar13[2];
        uVar5 = puVar13[3];
        puVar1 = param_1 + param_2 * 4 + (uVar17 ^ 0x7fffffffffffffe) * 4;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        *puVar13 = *puVar1;
        puVar13[1] = uVar6;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
        puVar1 = param_1 + param_2 * 4 + (uVar17 ^ 0x7fffffffffffffe) * 4;
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar19 = uVar17 + 2;
        puVar13 = puVar13 + 8;
        puVar16 = puVar16 + -8;
      } while (((uint)(param_2 >> 1) & 0x7ffffffe) != uVar19);
      if ((param_2 & 2) == 0) {
        return;
      }
      puVar13 = param_1 + uVar19 * 4;
      uVar2 = *puVar13;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      puVar13 = param_1 + param_2 * 4 + (-3 - uVar17) * 4;
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      puVar16 = param_1 + uVar19 * 4;
      *puVar16 = *puVar13;
      puVar16[1] = uVar6;
      puVar16[2] = uVar7;
      puVar16[3] = uVar8;
      param_1 = param_1 + param_2 * 4 + (-3 - uVar17) * 4;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      return;
    }
  }
  else if (lVar15 < (long)param_1[2]) goto LAB_006175f7;
  puVar10 = PTR_memcmp_008420a0;
  plVar20 = param_1 + 10;
  uVar19 = 2;
  do {
    lVar18 = *plVar20;
    if (lVar18 == lVar15) {
      uVar17 = plVar20[-5];
      uVar12 = plVar20[-1];
      uVar14 = uVar17;
      if (uVar12 < uVar17) {
        uVar14 = uVar12;
      }
      iVar11 = (*(code *)puVar10)(plVar20[-2],plVar20[-6],uVar14);
      lVar15 = uVar12 - uVar17;
      if (iVar11 != 0) {
        lVar15 = (long)iVar11;
      }
      if (lVar15 < 0) goto LAB_0061751e;
    }
    else if (lVar18 < lVar15) {
LAB_0061751e:
      bVar9 = false;
joined_r0x00617663:
      if (uVar19 != param_2) {
        quicksort::quicksort::
        <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                  (param_1,param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e);
        return;
      }
      if (!bVar9) {
        return;
      }
      goto LAB_00617531;
    }
    uVar19 = uVar19 + 1;
    plVar20 = plVar20 + 4;
    lVar15 = lVar18;
    if (param_2 == uVar19) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::ipnsort::<pipeline::generic::core::PE, <[pipeline::generic::core::PE]>::sort_unstable_by_key<i64, pipeline::generic::core::person::{closure#0}>::{closure#0}> @ 006176a0 (295 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<pipeline[509596c7b52975b2]::generic::core::PE,
   <[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,
   pipeline[509596c7b52975b2]::generic::core::person::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = param_1[2];
  plVar7 = param_1 + 4;
  uVar6 = 2;
  lVar9 = lVar1;
  if (lVar1 < *param_1) {
    do {
      lVar2 = *plVar7;
      if (lVar9 <= lVar2) goto code_r0x00617700;
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 2;
      lVar9 = lVar2;
    } while (param_2 != uVar6);
  }
  else {
    do {
      lVar2 = *plVar7;
      if (lVar2 < lVar9) goto code_r0x00617700;
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 2;
      lVar9 = lVar2;
    } while (param_2 != uVar6);
  }
LAB_00617709:
  if (lVar1 < *param_1) {
    plVar8 = param_1 + param_2 * 2 + -2;
    uVar6 = 0;
    plVar7 = param_1;
    do {
      uVar10 = uVar6;
      lVar1 = *plVar8;
      lVar9 = plVar8[1];
      lVar2 = plVar7[1];
      *plVar8 = *plVar7;
      plVar8[1] = lVar2;
      lVar2 = param_1[param_2 * 2 + (uVar10 ^ 0xffffffffffffffe) * 2];
      lVar3 = (param_1 + param_2 * 2 + (uVar10 ^ 0xffffffffffffffe) * 2)[1];
      lVar4 = plVar7[2];
      lVar5 = plVar7[3];
      *plVar7 = lVar1;
      plVar7[1] = lVar9;
      plVar7[2] = lVar2;
      plVar7[3] = lVar3;
      param_1[param_2 * 2 + (uVar10 ^ 0xffffffffffffffe) * 2] = lVar4;
      (param_1 + param_2 * 2 + (uVar10 ^ 0xffffffffffffffe) * 2)[1] = lVar5;
      uVar6 = uVar10 + 2;
      plVar7 = plVar7 + 4;
      plVar8 = plVar8 + -4;
    } while (((uint)param_2 >> 1 & 0xfffffffe) != uVar6);
    if ((param_2 & 2) != 0) {
      lVar1 = param_1[uVar6 * 2];
      lVar9 = (param_1 + uVar6 * 2)[1];
      lVar2 = (param_1 + param_2 * 2 + (-3 - uVar10) * 2)[1];
      param_1[uVar6 * 2] = param_1[param_2 * 2 + (-3 - uVar10) * 2];
      (param_1 + uVar6 * 2)[1] = lVar2;
      param_1[param_2 * 2 + (-3 - uVar10) * 2] = lVar1;
      (param_1 + param_2 * 2 + (-3 - uVar10) * 2)[1] = lVar9;
    }
  }
  return;
code_r0x00617700:
  if (uVar6 != param_2) {
    quicksort::quicksort::
    <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
              (param_1,(uint)param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e);
    return;
  }
  goto LAB_00617709;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 00619de0 (341 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

undefined8 * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (undefined8 *)
              <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                        (param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c);
    param_2 = (undefined8 *)
              <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                        (param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,param_4);
    param_3 = (undefined8 *)
              <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                        (param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,param_4);
  }
  lVar1 = param_1[2];
  lVar2 = param_2[2];
  bVar8 = lVar1 < lVar2;
  if (lVar1 == lVar2) {
    uVar4 = param_2[1];
    uVar5 = param_1[1];
    uVar7 = uVar4;
    if (uVar5 < uVar4) {
      uVar7 = uVar5;
    }
    iVar6 = (*(code *)PTR_memcmp_008420a0)(*param_1,*param_2,uVar7);
    bVar9 = (byte)(uVar5 - uVar4 >> 0x38);
    if (iVar6 != 0) {
      bVar9 = (byte)((ulong)(long)iVar6 >> 0x38);
    }
    bVar8 = (bool)(bVar9 >> 7);
    lVar3 = param_3[2];
  }
  else {
    lVar3 = param_3[2];
  }
  if (lVar1 == lVar3) {
    uVar4 = param_3[1];
    uVar5 = param_1[1];
    uVar7 = uVar4;
    if (uVar5 < uVar4) {
      uVar7 = uVar5;
    }
    iVar6 = (*(code *)PTR_memcmp_008420a0)(*param_1,*param_3,uVar7);
    cVar10 = (char)(uVar5 - uVar4 >> 0x38);
    if (iVar6 != 0) {
      cVar10 = (char)((ulong)(long)iVar6 >> 0x38);
    }
    if (bVar8 != (bool)-(cVar10 >> 7)) {
      return param_1;
    }
  }
  else if (bVar8 != lVar1 < lVar3) {
    return param_1;
  }
  bVar11 = lVar2 < lVar3;
  if (lVar2 == lVar3) {
    uVar4 = param_3[1];
    uVar5 = param_2[1];
    uVar7 = uVar4;
    if (uVar5 < uVar4) {
      uVar7 = uVar5;
    }
    iVar6 = (*(code *)PTR_memcmp_008420a0)(*param_2,*param_3,uVar7);
    bVar9 = (byte)(uVar5 - uVar4 >> 0x38);
    if (iVar6 != 0) {
      bVar9 = (byte)((ulong)(long)iVar6 >> 0x38);
    }
    bVar11 = (bool)(bVar9 >> 7);
  }
  if (bVar8 != bVar11) {
    param_2 = param_3;
  }
  return param_2;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::generic::core::PE, <[pipeline::generic::core::PE]>::sort_unstable_by_key<i64, pipeline::generic::core::person::{closure#0}>::{closure#0}> @ 00619f40 (167 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::generic::core::PE,
   <[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,
   pipeline[509596c7b52975b2]::generic::core::person::{closure#0}>::{closure#0}> */

long * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
          (long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (long *)<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                                (param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe);
    param_2 = (long *)<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                                (param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (long *)<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                                (param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar2 < *param_3 != lVar1 < lVar2) {
    param_2 = param_3;
  }
  if (lVar1 < *param_3 != lVar1 < lVar2) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 0061d500 (515 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  
  uVar12 = (uint)((long)param_1[6] < (long)param_1[2]);
  if (param_1[6] == param_1[2]) {
    uVar8 = param_1[1];
    uVar1 = param_1[5];
    uVar9 = uVar8;
    if (uVar1 < uVar8) {
      uVar9 = uVar1;
    }
    iVar7 = (*(code *)PTR_memcmp_008420a0)(param_1[4],*param_1,uVar9);
    uVar12 = (uint)(uVar1 - uVar8 >> 0x20);
    if (iVar7 != 0) {
      uVar12 = iVar7 >> 0x1f;
    }
    uVar12 = uVar12 >> 0x1f;
  }
  uVar18 = (uint)((long)param_1[0xe] < (long)param_1[10]);
  if (param_1[0xe] == param_1[10]) {
    uVar8 = param_1[9];
    uVar1 = param_1[0xd];
    uVar9 = uVar8;
    if (uVar1 < uVar8) {
      uVar9 = uVar1;
    }
    iVar7 = (*(code *)PTR_memcmp_008420a0)(param_1[0xc],param_1[8],uVar9);
    uVar18 = (uint)(uVar1 - uVar8 >> 0x20);
    if (iVar7 != 0) {
      uVar18 = iVar7 >> 0x1f;
    }
    uVar18 = uVar18 >> 0x1f;
  }
  puVar10 = (undefined8 *)((long)param_1 + (ulong)(uVar12 << 5));
  puVar21 = param_1 + (ulong)(byte)((byte)uVar12 ^ 1) * 4;
  uVar8 = (ulong)(uVar18 << 5);
  puVar19 = (undefined8 *)((long)param_1 + uVar8 + 0x40);
  puVar14 = (undefined8 *)((ulong)((uVar18 ^ 3) << 5) + (long)param_1);
  lVar2 = *(long *)((long)param_1 + uVar8 + 0x50);
  lVar3 = *(long *)((long)param_1 + (ulong)(uVar12 << 5) + 0x10);
  bVar16 = lVar2 < lVar3;
  if (lVar2 == lVar3) {
    uVar1 = puVar10[1];
    uVar8 = *(ulong *)((long)param_1 + uVar8 + 0x48);
    uVar9 = uVar1;
    if (uVar8 < uVar1) {
      uVar9 = uVar8;
    }
    iVar7 = (*(code *)PTR_memcmp_008420a0)(*puVar19,*puVar10,uVar9);
    bVar13 = (byte)(uVar8 - uVar1 >> 0x38);
    if (iVar7 != 0) {
      bVar13 = (byte)((ulong)(long)iVar7 >> 0x38);
    }
    bVar16 = (bool)(bVar13 >> 7);
  }
  bVar11 = (long)puVar14[2] < (long)puVar21[2];
  if (puVar14[2] == puVar21[2]) {
    uVar8 = puVar21[1];
    uVar1 = puVar14[1];
    uVar9 = uVar8;
    if (uVar1 < uVar8) {
      uVar9 = uVar1;
    }
    iVar7 = (*(code *)PTR_memcmp_008420a0)(*puVar14,*puVar21,uVar9);
    bVar13 = (byte)(uVar1 - uVar8 >> 0x38);
    if (iVar7 != 0) {
      bVar13 = (byte)((ulong)(long)iVar7 >> 0x38);
    }
    bVar11 = (bool)(bVar13 >> 7);
  }
  puVar15 = puVar21;
  if (bVar11 != false) {
    puVar15 = puVar19;
  }
  puVar20 = puVar19;
  if (bVar16 != false) {
    puVar20 = puVar21;
    puVar15 = puVar10;
  }
  if (bVar11 != false) {
    puVar20 = puVar14;
  }
  bVar17 = (long)puVar20[2] < (long)puVar15[2];
  if (puVar20[2] == puVar15[2]) {
    uVar8 = puVar15[1];
    uVar1 = puVar20[1];
    uVar9 = uVar8;
    if (uVar1 < uVar8) {
      uVar9 = uVar1;
    }
    iVar7 = (*(code *)PTR_memcmp_008420a0)(*puVar20,*puVar15,uVar9);
    bVar13 = (byte)(uVar1 - uVar8 >> 0x38);
    if (iVar7 != 0) {
      bVar13 = (byte)((ulong)(long)iVar7 >> 0x38);
    }
    bVar17 = (bool)(bVar13 >> 7);
  }
  if (bVar11 != false) {
    puVar14 = puVar21;
  }
  if (bVar16 != false) {
    puVar10 = puVar19;
  }
  puVar21 = puVar20;
  if (bVar17 != false) {
    puVar21 = puVar15;
    puVar15 = puVar20;
  }
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *param_2 = *puVar10;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  param_2[4] = *puVar15;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = uVar6;
  uVar4 = puVar21[1];
  uVar5 = puVar21[2];
  uVar6 = puVar21[3];
  param_2[8] = *puVar21;
  param_2[9] = uVar4;
  param_2[10] = uVar5;
  param_2[0xb] = uVar6;
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  param_2[0xc] = *puVar14;
  param_2[0xd] = uVar4;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar6;
  return;
}


// ==== core::slice::sort::shared::smallsort::sort8_stable::<pipeline::generic::core::PE, <[pipeline::generic::core::PE]>::sort_unstable_by_key<i64, pipeline::generic::core::person::{closure#0}>::{closure#0}> @ 0061ef80 (841 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::<pipeline[509596c7b52975b2]::generic::core::PE,
   <[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,
   pipeline[509596c7b52975b2]::generic::core::person::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::
<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
          (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  uVar7 = (ulong)(param_1[2] < *param_1);
  uVar8 = (ulong)(*param_1 <= param_1[2]);
  plVar14 = param_1 + uVar8 * 2;
  uVar9 = (ulong)(param_1[6] < param_1[4]);
  plVar15 = param_1 + uVar9 * 2 + 4;
  uVar11 = (ulong)((param_1[6] < param_1[4] ^ 3) << 4);
  plVar12 = (long *)((long)param_1 + uVar11);
  lVar1 = *(long *)((long)param_1 + uVar11);
  plVar18 = plVar14;
  if (lVar1 < param_1[uVar8 * 2]) {
    plVar18 = plVar15;
  }
  plVar16 = plVar15;
  plVar17 = param_1 + uVar7 * 2;
  if (param_1[uVar9 * 2 + 4] < param_1[uVar7 * 2]) {
    plVar16 = plVar14;
    plVar17 = plVar15;
    plVar18 = param_1 + uVar7 * 2;
  }
  if (lVar1 < param_1[uVar8 * 2]) {
    plVar16 = plVar12;
  }
  else {
    plVar14 = plVar12;
  }
  plVar12 = plVar16;
  if (*plVar16 < *plVar18) {
    plVar12 = plVar18;
    plVar18 = plVar16;
  }
  lVar1 = plVar17[1];
  *param_3 = *plVar17;
  param_3[1] = lVar1;
  lVar1 = plVar18[1];
  param_3[2] = *plVar18;
  param_3[3] = lVar1;
  lVar1 = plVar12[1];
  param_3[4] = *plVar12;
  param_3[5] = lVar1;
  lVar1 = plVar14[1];
  param_3[6] = *plVar14;
  param_3[7] = lVar1;
  uVar7 = (ulong)(param_1[10] < param_1[8]);
  uVar8 = (ulong)(param_1[8] <= param_1[10]);
  plVar12 = param_1 + uVar8 * 2 + 8;
  uVar9 = (ulong)(param_1[0xe] < param_1[0xc]);
  plVar18 = param_1 + uVar9 * 2 + 0xc;
  uVar11 = (ulong)((param_1[0xe] < param_1[0xc] ^ 3) << 4);
  lVar1 = *(long *)((long)param_1 + uVar11 + 0x40);
  plVar14 = plVar12;
  if (lVar1 < param_1[uVar8 * 2 + 8]) {
    plVar14 = plVar18;
  }
  plVar17 = plVar18;
  plVar15 = param_1 + uVar7 * 2 + 8;
  if (param_1[uVar9 * 2 + 0xc] < param_1[uVar7 * 2 + 8]) {
    plVar17 = plVar12;
    plVar15 = plVar18;
    plVar14 = param_1 + uVar7 * 2 + 8;
  }
  plVar18 = (long *)((long)param_1 + uVar11 + 0x40);
  if (lVar1 < param_1[uVar8 * 2 + 8]) {
    plVar17 = plVar18;
  }
  else {
    plVar12 = plVar18;
  }
  plVar18 = plVar17;
  if (*plVar17 < *plVar14) {
    plVar18 = plVar14;
    plVar14 = plVar17;
  }
  lVar1 = plVar15[1];
  param_3[8] = *plVar15;
  param_3[9] = lVar1;
  lVar1 = plVar14[1];
  param_3[10] = *plVar14;
  param_3[0xb] = lVar1;
  lVar1 = plVar18[1];
  param_3[0xc] = *plVar18;
  param_3[0xd] = lVar1;
  lVar1 = plVar12[1];
  param_3[0xe] = *plVar12;
  param_3[0xf] = lVar1;
  lVar1 = param_3[8];
  lVar2 = *param_3;
  plVar14 = param_3 + 8;
  if (lVar2 <= lVar1) {
    plVar14 = param_3;
  }
  lVar3 = plVar14[1];
  *param_2 = *plVar14;
  param_2[1] = lVar3;
  plVar18 = param_3 + (ulong)(lVar1 < lVar2) * 2 + 8;
  plVar14 = param_3 + (ulong)(lVar2 <= lVar1) * 2;
  lVar3 = param_3[0xe];
  lVar4 = param_3[6];
  plVar12 = param_3 + 0xe;
  if (lVar3 < lVar4) {
    plVar12 = param_3 + 6;
  }
  lVar5 = plVar12[1];
  param_2[0xe] = *plVar12;
  param_2[0xf] = lVar5;
  plVar17 = param_3 + 0xe + (ulong)(lVar4 <= lVar3) * -2;
  plVar15 = param_3 + 6 + (ulong)(lVar3 < lVar4) * -2;
  lVar3 = param_3[(ulong)(lVar1 < lVar2) * 2 + 8];
  lVar1 = param_3[(ulong)(lVar2 <= lVar1) * 2];
  plVar12 = plVar14;
  if (lVar3 < lVar1) {
    plVar12 = plVar18;
  }
  lVar2 = plVar12[1];
  param_2[2] = *plVar12;
  param_2[3] = lVar2;
  plVar12 = plVar18 + (ulong)(lVar3 < lVar1) * 2;
  plVar16 = plVar14 + (ulong)(lVar1 <= lVar3) * 2;
  lVar2 = *plVar17;
  lVar4 = *plVar15;
  plVar13 = plVar17;
  if (lVar2 < lVar4) {
    plVar13 = plVar15;
  }
  lVar5 = plVar13[1];
  param_2[0xc] = *plVar13;
  param_2[0xd] = lVar5;
  plVar17 = plVar17 + (ulong)(lVar4 <= lVar2) * -2;
  plVar15 = plVar15 + (ulong)(lVar2 < lVar4) * -2;
  lVar2 = plVar18[(ulong)(lVar3 < lVar1) * 2];
  lVar1 = plVar14[(ulong)(lVar1 <= lVar3) * 2];
  plVar14 = plVar16;
  if (lVar2 < lVar1) {
    plVar14 = plVar12;
  }
  lVar3 = plVar14[1];
  param_2[4] = *plVar14;
  param_2[5] = lVar3;
  lVar3 = *plVar17;
  lVar4 = *plVar15;
  plVar14 = plVar17;
  if (lVar3 < lVar4) {
    plVar14 = plVar15;
  }
  lVar5 = plVar14[1];
  param_2[10] = *plVar14;
  param_2[0xb] = lVar5;
  plVar17 = plVar17 + (ulong)(lVar4 <= lVar3) * -2;
  plVar15 = plVar15 + (ulong)(lVar3 < lVar4) * -2;
  lVar3 = plVar12[(ulong)(lVar2 < lVar1) * 2];
  lVar4 = plVar16[(ulong)(lVar1 <= lVar2) * 2];
  plVar14 = plVar16 + (ulong)(lVar1 <= lVar2) * 2;
  if (lVar3 < lVar4) {
    plVar14 = plVar12 + (ulong)(lVar2 < lVar1) * 2;
  }
  lVar5 = plVar14[1];
  param_2[6] = *plVar14;
  param_2[7] = lVar5;
  lVar5 = *plVar17;
  lVar6 = *plVar15;
  plVar14 = plVar17;
  if (lVar5 < lVar6) {
    plVar14 = plVar15;
  }
  lVar10 = plVar14[1];
  param_2[8] = *plVar14;
  param_2[9] = lVar10;
  if ((plVar16 + (ulong)(lVar1 <= lVar2) * 2 + (ulong)(lVar4 <= lVar3) * 2 !=
       plVar15 + (ulong)(lVar5 < lVar6) * -2 + 2) ||
     (plVar12 + (ulong)(lVar2 < lVar1) * 2 + (ulong)(lVar3 < lVar4) * 2 !=
      plVar17 + (ulong)(lVar6 <= lVar5) * -2 + 2)) {
                    /* WARNING: Subroutine does not return */
    panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::small_sort_general::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 00621340 (1348 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (ulong *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  bool bVar23;
  ulong *local_690;
  ulong local_680;
  ulong local_670 [3];
  ulong *local_658;
  ulong local_650 [196];
  
  if (1 < param_2) {
    uVar2 = param_2 >> 1;
    local_650[0] = uVar2;
    lVar3 = uVar2 * 0x20;
    puVar4 = param_1 + uVar2 * 4;
    puVar15 = local_650 + uVar2 * 4 + 3;
    local_658 = puVar4;
    if (param_2 < 8) {
      local_650[3] = *param_1;
      local_650[4] = param_1[1];
      local_650[5] = param_1[2];
      local_650[6] = param_1[3];
      uVar6 = puVar4[1];
      uVar16 = puVar4[2];
      uVar22 = puVar4[3];
      *puVar15 = *puVar4;
      local_650[uVar2 * 4 + 4] = uVar6;
      local_650[uVar2 * 4 + 5] = uVar16;
      local_650[uVar2 * 4 + 6] = uVar22;
      uVar6 = 1;
    }
    else {
      sort4_stable::
      <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                (param_1,local_650 + 3);
      sort4_stable::
      <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                (puVar4,puVar15);
      uVar6 = 4;
    }
    local_650[1] = param_2;
    local_650[2] = param_2 - local_650[0];
    if (uVar6 < local_650[0]) {
      lVar21 = (ulong)(uint)((int)uVar6 << 5) - 0x20;
      uVar16 = uVar6;
      do {
        puVar4 = param_1 + uVar16 * 4;
        uVar22 = puVar4[1];
        uVar13 = puVar4[2];
        uVar8 = puVar4[3];
        puVar11 = local_650 + uVar16 * 4 + 3;
        local_650[uVar16 * 4 + 3] = *puVar4;
        local_650[uVar16 * 4 + 4] = uVar22;
        local_650[uVar16 * 4 + 5] = uVar13;
        local_650[uVar16 * 4 + 6] = uVar8;
        uVar22 = local_650[uVar16 * 4 + 5];
        if (uVar22 == local_650[uVar16 * 4 + 1]) {
          uVar8 = local_650[uVar16 * 4];
          uVar13 = local_650[uVar16 * 4 + 4];
          local_670[0] = *puVar11;
          uVar9 = uVar8;
          if (uVar13 < uVar8) {
            uVar9 = uVar13;
          }
          iVar1 = (*(code *)PTR_memcmp_008420a0)(local_670[0],local_650[uVar16 * 4 + -1],uVar9);
          lVar17 = uVar13 - uVar8;
          if (iVar1 != 0) {
            lVar17 = (long)iVar1;
          }
          if (lVar17 < 0) goto LAB_006214d2;
        }
        else if ((long)uVar22 < (long)local_650[uVar16 * 4 + 1]) {
          local_670[0] = *puVar11;
          uVar13 = local_650[uVar16 * 4 + 4];
LAB_006214d2:
          puVar4 = local_650 + uVar16 * 4 + -1;
          uVar8 = local_650[uVar16 * 4 + 6];
          uVar9 = local_650[uVar16 * 4];
          *puVar11 = *puVar4;
          local_650[uVar16 * 4 + 4] = uVar9;
          local_650[uVar16 * 4 + 5] = local_650[uVar16 * 4 + 1];
          local_650[uVar16 * 4 + 6] = local_650[uVar16 * 4 + 2];
          puVar11 = puVar4;
          lVar17 = lVar21;
          if (uVar16 != 1) {
            do {
              puVar4 = (ulong *)((long)local_650 + lVar17 + 0x18);
              uVar9 = *(ulong *)((long)local_650 + lVar17 + 8);
              if (uVar22 == uVar9) {
                uVar9 = *(ulong *)((long)local_650 + lVar17);
                uVar7 = uVar9;
                if (uVar13 < uVar9) {
                  uVar7 = uVar13;
                }
                iVar1 = (*(code *)PTR_memcmp_008420a0)
                                  (local_670[0],*(undefined8 *)((long)local_650 + lVar17 + -8),uVar7
                                  );
                lVar14 = uVar13 - uVar9;
                if (iVar1 != 0) {
                  lVar14 = (long)iVar1;
                }
                if (-1 < lVar14) {
                  puVar4 = puVar11;
                  goto LAB_00621413;
                }
              }
              else if ((long)uVar9 <= (long)uVar22) goto LAB_00621413;
              *puVar4 = *(ulong *)((long)local_650 + lVar17 + -8);
              *(undefined8 *)((long)local_650 + lVar17 + 0x20) =
                   *(undefined8 *)((long)local_650 + lVar17);
              *(undefined8 *)((long)local_650 + lVar17 + 0x28) =
                   *(undefined8 *)((long)local_650 + lVar17 + 8);
              *(undefined8 *)((long)local_650 + lVar17 + 0x30) =
                   *(undefined8 *)((long)local_650 + lVar17 + 0x10);
              lVar17 = lVar17 + -0x20;
              puVar11 = puVar11 + -4;
            } while (lVar17 != 0);
            puVar4 = local_650 + 3;
          }
LAB_00621413:
          *puVar4 = local_670[0];
          puVar4[1] = uVar13;
          puVar4[2] = uVar22;
          puVar4[3] = uVar8;
        }
        uVar16 = uVar16 + 1;
        lVar21 = lVar21 + 0x20;
      } while (uVar16 != local_650[0]);
    }
    if (uVar6 < local_650[2]) {
      lVar21 = (ulong)(uint)((int)uVar6 << 5) - 0x20;
      puVar4 = local_658;
      do {
        puVar11 = puVar4 + uVar6 * 4;
        uVar16 = puVar11[1];
        uVar22 = puVar11[2];
        uVar13 = puVar11[3];
        puVar10 = puVar15 + uVar6 * 4;
        puVar5 = puVar15 + uVar6 * 4;
        *puVar5 = *puVar11;
        puVar5[1] = uVar16;
        puVar5[2] = uVar22;
        puVar5[3] = uVar13;
        uVar16 = local_650[uVar2 * 4 + uVar6 * 4 + 5];
        if (uVar16 == local_650[uVar2 * 4 + uVar6 * 4 + 1]) {
          uVar13 = puVar10[-3];
          uVar22 = puVar10[1];
          local_680 = *puVar10;
          uVar8 = uVar13;
          if (uVar22 < uVar13) {
            uVar8 = uVar22;
          }
          iVar1 = (*(code *)PTR_memcmp_008420a0)(local_680,puVar10[-4],uVar8);
          lVar17 = uVar22 - uVar13;
          if (iVar1 != 0) {
            lVar17 = (long)iVar1;
          }
          puVar4 = local_658;
          if (lVar17 < 0) goto LAB_00621663;
        }
        else if ((long)uVar16 < (long)local_650[uVar2 * 4 + uVar6 * 4 + 1]) {
          local_680 = *puVar10;
          uVar22 = puVar10[1];
LAB_00621663:
          puVar4 = puVar15 + uVar6 * 4 + -4;
          uVar13 = puVar10[3];
          uVar8 = puVar15[uVar6 * 4 + -3];
          uVar9 = puVar15[uVar6 * 4 + -2];
          uVar7 = puVar15[uVar6 * 4 + -1];
          *puVar10 = *puVar4;
          puVar10[1] = uVar8;
          puVar10[2] = uVar9;
          puVar10[3] = uVar7;
          if (uVar6 == 1) {
LAB_006215a0:
            puVar11 = puVar4;
          }
          else {
            lVar17 = lVar21;
            do {
              puVar11 = (ulong *)((long)puVar15 + lVar17);
              uVar8 = *(ulong *)((long)local_650 + lVar17 + lVar3 + 8);
              if (uVar16 == uVar8) {
                uVar8 = *(ulong *)((long)local_650 + lVar17 + lVar3);
                uVar9 = uVar8;
                if (uVar22 < uVar8) {
                  uVar9 = uVar22;
                }
                iVar1 = (*(code *)PTR_memcmp_008420a0)
                                  (local_680,*(undefined8 *)((long)local_650 + lVar17 + lVar3 + -8),
                                   uVar9);
                lVar14 = uVar22 - uVar8;
                if (iVar1 != 0) {
                  lVar14 = (long)iVar1;
                }
                if (-1 < lVar14) goto LAB_006215a0;
              }
              else if ((long)uVar8 <= (long)uVar16) goto LAB_006215a3;
              puVar4 = puVar4 + -4;
              uVar8 = *(ulong *)((long)puVar15 + lVar17 + -0x10);
              uVar9 = *(ulong *)((long)puVar15 + lVar17 + -8);
              *puVar11 = *(ulong *)((long)puVar15 + lVar17 + -0x20);
              puVar11[1] = *(ulong *)((long)puVar15 + lVar17 + -0x18);
              puVar11[2] = uVar8;
              puVar11[3] = uVar9;
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != 0);
            puVar11 = puVar15;
          }
LAB_006215a3:
          *puVar11 = local_680;
          puVar11[1] = uVar22;
          puVar11[2] = uVar16;
          puVar11[3] = uVar13;
          puVar4 = local_658;
        }
        uVar6 = uVar6 + 1;
        lVar21 = lVar21 + 0x20;
      } while (uVar6 != local_650[2]);
    }
    puVar19 = local_650 + local_650[1] * 4 + -1;
    puVar4 = local_650 + uVar2 * 4 + -1;
    puVar11 = local_650 + 3;
    puVar10 = param_1 + local_650[1] * 4;
    puVar5 = param_1;
    do {
      local_690 = puVar5;
      uVar20 = (uint)((long)puVar15[2] < (long)puVar11[2]);
      if (puVar15[2] == puVar11[2]) {
        uVar2 = puVar11[1];
        uVar6 = puVar15[1];
        uVar16 = uVar2;
        if (uVar6 < uVar2) {
          uVar16 = uVar6;
        }
        iVar1 = (*(code *)PTR_memcmp_008420a0)(*puVar15,*puVar11,uVar16);
        uVar20 = (uint)(uVar6 - uVar2 >> 0x20);
        if (iVar1 != 0) {
          uVar20 = iVar1 >> 0x1f;
        }
        uVar20 = uVar20 >> 0x1f;
      }
      puVar5 = puVar11;
      if ((byte)uVar20 != 0) {
        puVar5 = puVar15;
      }
      uVar2 = puVar5[1];
      uVar6 = puVar5[2];
      uVar16 = puVar5[3];
      *local_690 = *puVar5;
      local_690[1] = uVar2;
      local_690[2] = uVar6;
      local_690[3] = uVar16;
      bVar23 = (long)puVar19[2] < (long)puVar4[2];
      if (puVar19[2] == puVar4[2]) {
        uVar2 = puVar4[1];
        uVar6 = puVar19[1];
        uVar16 = uVar2;
        if (uVar6 < uVar2) {
          uVar16 = uVar6;
        }
        iVar1 = (*(code *)PTR_memcmp_008420a0)(*puVar19,*puVar4,uVar16);
        bVar12 = (byte)(uVar6 - uVar2 >> 0x38);
        if (iVar1 != 0) {
          bVar12 = (byte)((ulong)(long)iVar1 >> 0x38);
        }
        bVar23 = (bool)(bVar12 >> 7);
      }
      puVar15 = (ulong *)((long)puVar15 + (ulong)(uVar20 << 5));
      puVar11 = puVar11 + (ulong)(byte)((byte)uVar20 ^ 1) * 4;
      puVar5 = puVar19;
      if (bVar23 != false) {
        puVar5 = puVar4;
      }
      uVar2 = puVar5[1];
      uVar6 = puVar5[2];
      uVar16 = puVar5[3];
      puVar10[-4] = *puVar5;
      puVar10[-3] = uVar2;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar16;
      puVar18 = puVar19 + (ulong)bVar23 * 4;
      puVar19 = puVar18 + -4;
      puVar4 = puVar4 + (ulong)bVar23 * -4;
      local_650[0] = local_650[0] - 1;
      puVar10 = puVar10 + -4;
      puVar5 = local_690 + 4;
    } while (local_650[0] != 0);
    if ((local_650[1] & 1) != 0) {
      bVar23 = puVar11 < puVar4 + 4;
      puVar10 = puVar15;
      if (bVar23) {
        puVar10 = puVar11;
      }
      uVar2 = puVar10[1];
      uVar6 = puVar10[2];
      uVar16 = puVar10[3];
      local_690[4] = *puVar10;
      local_690[5] = uVar2;
      local_690[6] = uVar6;
      local_690[7] = uVar16;
      puVar11 = puVar11 + (ulong)bVar23 * 4;
      puVar15 = puVar15 + (ulong)!bVar23 * 4;
    }
    if ((puVar11 != puVar4 + 4) || (puVar15 != puVar18)) {
                    /* WARNING: Subroutine does not return */
      panic_on_ord_violation();
    }
  }
  return;
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 0063bb00 (514 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  uVar13 = (param_2 >> 1) + param_2;
  do {
    uVar13 = uVar13 - 1;
    uVar21 = uVar13 - param_2;
    uVar16 = param_2;
    if (uVar13 < param_2) {
      uVar17 = *param_1;
      uVar18 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      puVar1 = param_1 + uVar13 * 4;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      puVar1 = param_1 + uVar13 * 4;
      *puVar1 = uVar17;
      puVar1[1] = uVar18;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar21 = 0;
      uVar16 = uVar13;
    }
    uVar12 = uVar21 * 2 + 1;
    if (uVar12 < uVar16) {
      do {
        uVar19 = uVar12;
        uVar12 = uVar21 * 2 + 2;
        if (uVar12 < uVar16) {
          uVar15 = (ulong)((long)param_1[uVar19 * 4 + 2] < (long)param_1[uVar12 * 4 + 2]);
          if (param_1[uVar19 * 4 + 2] == param_1[uVar12 * 4 + 2]) {
            uVar15 = (param_1 + uVar12 * 4)[1];
            uVar3 = (param_1 + uVar19 * 4)[1];
            uVar14 = uVar15;
            if (uVar3 < uVar15) {
              uVar14 = uVar3;
            }
            iVar11 = (*(code *)PTR_memcmp_008420a0)(param_1[uVar19 * 4],param_1[uVar12 * 4],uVar14);
            uVar15 = uVar3 - uVar15;
            if (iVar11 != 0) {
              uVar15 = (long)iVar11;
            }
            uVar15 = uVar15 >> 0x3f;
          }
          uVar19 = uVar19 + uVar15;
        }
        puVar1 = param_1 + uVar21 * 4;
        puVar2 = param_1 + uVar19 * 4;
        lVar4 = param_1[uVar21 * 4 + 2];
        lVar5 = param_1[uVar19 * 4 + 2];
        if (lVar4 == lVar5) {
          uVar18 = *puVar2;
          uVar12 = puVar2[1];
          uVar17 = *puVar1;
          uVar21 = puVar1[1];
          uVar15 = uVar12;
          if (uVar21 < uVar12) {
            uVar15 = uVar21;
          }
          iVar11 = (*(code *)PTR_memcmp_008420a0)(uVar17,uVar18,uVar15);
          lVar20 = uVar21 - uVar12;
          if (iVar11 != 0) {
            lVar20 = (long)iVar11;
          }
          if (-1 < lVar20) break;
        }
        else {
          if (lVar5 <= lVar4) break;
          uVar17 = *puVar1;
          uVar21 = puVar1[1];
          uVar18 = *puVar2;
          uVar12 = puVar2[1];
        }
        *puVar1 = uVar18;
        *puVar2 = uVar17;
        puVar1[1] = uVar12;
        puVar2[1] = uVar21;
        puVar1[2] = lVar5;
        puVar2[2] = lVar4;
        uVar17 = puVar1[3];
        puVar1[3] = puVar2[3];
        puVar2[3] = uVar17;
        uVar12 = uVar19 * 2 + 1;
        uVar21 = uVar19;
      } while (uVar12 < uVar16);
    }
    if (uVar13 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<pipeline::generic::core::PE, <[pipeline::generic::core::PE]>::sort_unstable_by_key<i64, pipeline::generic::core::person::{closure#0}>::{closure#0}> @ 0063bd20 (232 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<pipeline[509596c7b52975b2]::generic::core::PE,
   <[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,
   pipeline[509596c7b52975b2]::generic::core::person::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar5 = (param_2 >> 1) + param_2;
  do {
    uVar5 = uVar5 - 1;
    uVar6 = uVar5 - param_2;
    uVar8 = param_2;
    if (uVar5 < param_2) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar5 * 2)[1];
      *param_1 = param_1[uVar5 * 2];
      param_1[1] = uVar4;
      param_1[uVar5 * 2] = uVar2;
      (param_1 + uVar5 * 2)[1] = uVar3;
      uVar6 = 0;
      uVar8 = uVar5;
    }
    uVar9 = uVar6 * 2 + 1;
    if (uVar9 < uVar8) {
      do {
        uVar11 = uVar6 * 2 + 2;
        if (uVar11 < uVar8) {
          uVar11 = ((long)param_1[uVar9 * 2] < (long)param_1[uVar11 * 2]) + uVar9;
        }
        else {
          uVar11 = uVar9;
        }
        lVar1 = param_1[uVar6 * 2];
        if ((long)param_1[uVar11 * 2] <= lVar1) break;
        plVar7 = param_1 + uVar6 * 2;
        plVar10 = param_1 + uVar11 * 2;
        *plVar7 = param_1[uVar11 * 2];
        *plVar10 = lVar1;
        lVar1 = plVar7[1];
        plVar7[1] = plVar10[1];
        plVar10[1] = lVar1;
        uVar9 = uVar11 * 2 + 1;
        uVar6 = uVar11;
      } while (uVar9 < uVar8);
    }
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<pipeline::generic::core::PC, <[pipeline::generic::core::PC]>::sort_unstable_by<pipeline::generic::core::person::{closure#1}>::{closure#0}> @ 0063f280 (1594 bytes)

/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<pipeline[509596c7b52975b2]::generic::core::PC,
   <[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  byte bVar16;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  long lVar21;
  long lVar22;
  char cVar25;
  long lVar23;
  long lVar24;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  
  do {
    if (param_2 < 0x21) {
      shared::smallsort::small_sort_general::
      <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                (param_1,param_2);
      return;
    }
    if (param_4 == 0) {
      heapsort::heapsort::
      <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                (param_1,param_2);
      return;
    }
    local_38 = param_3;
    puVar15 = param_1 + (param_2 >> 3) * 0x10;
    puVar14 = param_1 + (param_2 >> 3) * 0x1c;
    if (param_2 < 0x40) {
      lVar21 = param_1[2];
      lVar23 = puVar15[2];
      bVar13 = lVar21 < lVar23;
      puVar10 = param_1;
      if (lVar21 == lVar23) {
        uVar11 = puVar15[1];
        uVar19 = param_1[1];
        uVar18 = uVar11;
        if (uVar19 < uVar11) {
          uVar18 = uVar19;
        }
        iVar9 = (*(code *)PTR_memcmp_008420a0)(*param_1,*puVar15,uVar18);
        bVar16 = (byte)(uVar19 - uVar11 >> 0x38);
        if (iVar9 != 0) {
          bVar16 = (byte)((ulong)(long)iVar9 >> 0x38);
        }
        bVar13 = (bool)(bVar16 >> 7);
        lVar17 = puVar14[2];
        bVar20 = (bool)(bVar16 >> 7);
        if (lVar21 == lVar17) goto LAB_0063f3aa;
LAB_0063f329:
        if (bVar13 != lVar21 < lVar17) goto LAB_0063f439;
      }
      else {
        lVar17 = puVar14[2];
        bVar20 = bVar13;
        if (lVar21 != lVar17) goto LAB_0063f329;
LAB_0063f3aa:
        bVar13 = bVar20;
        uVar11 = puVar14[1];
        uVar19 = param_1[1];
        uVar18 = uVar11;
        if (uVar19 < uVar11) {
          uVar18 = uVar19;
        }
        iVar9 = (*(code *)PTR_memcmp_008420a0)(*param_1,*puVar14,uVar18);
        cVar25 = (char)(uVar19 - uVar11 >> 0x38);
        if (iVar9 != 0) {
          cVar25 = (char)((ulong)(long)iVar9 >> 0x38);
        }
        if (bVar13 != (bool)-(cVar25 >> 7)) goto LAB_0063f439;
      }
      bVar20 = lVar23 < lVar17;
      if (lVar23 == lVar17) {
        uVar11 = puVar14[1];
        uVar19 = puVar15[1];
        uVar18 = uVar11;
        if (uVar19 < uVar11) {
          uVar18 = uVar19;
        }
        iVar9 = (*(code *)PTR_memcmp_008420a0)(*puVar15,*puVar14,uVar18);
        bVar16 = (byte)(uVar19 - uVar11 >> 0x38);
        if (iVar9 != 0) {
          bVar16 = (byte)((ulong)(long)iVar9 >> 0x38);
        }
        bVar20 = (bool)(bVar16 >> 7);
      }
      if (bVar13 != bVar20) {
        puVar15 = puVar14;
      }
      puVar10 = puVar15;
    }
    else {
      puVar10 = (undefined8 *)
                shared::pivot::median3_rec::
                <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                          (param_1,puVar15,puVar14);
    }
LAB_0063f439:
    param_4 = param_4 + -1;
    lVar21 = (long)puVar10 - (long)param_1;
    if (local_38 == (undefined8 *)0x0) {
LAB_0063f6ab:
      uVar1 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      puVar15 = (undefined8 *)((long)param_1 + lVar21);
      uVar6 = puVar15[1];
      uVar7 = puVar15[2];
      uVar8 = puVar15[3];
      *param_1 = *puVar15;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      puVar15 = (undefined8 *)((long)param_1 + lVar21);
      *puVar15 = uVar1;
      puVar15[1] = uVar3;
      puVar15[2] = uVar4;
      puVar15[3] = uVar5;
      local_58 = param_1[4];
      uStack_50 = param_1[5];
      uStack_48 = param_1[6];
      uStack_40 = param_1[7];
      puVar15 = param_1 + 8;
      lVar21 = param_1[2];
      uVar1 = *param_1;
      uVar11 = param_1[1];
      lVar23 = param_2 * 0x20 + -0x60;
      lVar17 = param_2 * 0x20 + -0x40;
      uVar19 = 0;
      do {
        lVar24 = lVar17;
        lVar22 = lVar23;
        uVar18 = (ulong)((long)puVar15[2] < lVar21);
        if (puVar15[2] == lVar21) {
          uVar18 = puVar15[1];
          uVar12 = uVar18;
          if (uVar11 <= uVar18) {
            uVar12 = uVar11;
          }
          iVar9 = (*(code *)PTR_memcmp_008420a0)(*puVar15,uVar1,uVar12);
          uVar18 = uVar18 - uVar11;
          if (iVar9 != 0) {
            uVar18 = (long)iVar9;
          }
          uVar18 = uVar18 >> 0x3f;
        }
        uVar18 = uVar18 + uVar19;
        puVar14 = param_1 + uVar19 * 4 + 4;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        puVar15[-4] = *puVar14;
        puVar15[-3] = uVar3;
        puVar15[-2] = uVar4;
        puVar15[-1] = uVar5;
        uVar3 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[3];
        puVar14 = param_1 + uVar19 * 4 + 4;
        *puVar14 = *puVar15;
        puVar14[1] = uVar3;
        puVar14[2] = uVar4;
        puVar14[3] = uVar5;
        puVar15 = puVar15 + 4;
        lVar23 = lVar22 + -0x20;
        lVar17 = lVar24 + -0x20;
        uVar19 = uVar18;
      } while (puVar15 < param_1 + param_2 * 4);
      do {
        puVar14 = puVar15;
        if (lVar22 == 0) {
          puVar14 = &local_58;
        }
        uVar19 = (ulong)((long)puVar14[2] < lVar21);
        if (puVar14[2] == lVar21) {
          puVar10 = puVar15;
          if (lVar22 == 0) {
            puVar10 = &local_58;
          }
          uVar19 = puVar10[1];
          uVar12 = uVar19;
          if (uVar11 <= uVar19) {
            uVar12 = uVar11;
          }
          iVar9 = (*(code *)PTR_memcmp_008420a0)(*puVar14,uVar1,uVar12);
          uVar19 = uVar19 - uVar11;
          if (iVar9 != 0) {
            uVar19 = (long)iVar9;
          }
          uVar19 = uVar19 >> 0x3f;
        }
        puVar10 = param_1 + uVar18 * 4 + 4;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        puVar15[-4] = *puVar10;
        puVar15[-3] = uVar3;
        puVar15[-2] = uVar4;
        puVar15[-1] = uVar5;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        puVar10 = param_1 + uVar18 * 4 + 4;
        *puVar10 = *puVar14;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar18 = uVar18 + uVar19;
        puVar15 = puVar15 + 4;
        lVar22 = lVar22 + -0x20;
        lVar24 = lVar24 + -0x20;
      } while (lVar24 != 0);
      if (param_2 <= uVar18) goto LAB_0063f8e5;
      local_58 = *param_1;
      uStack_50 = param_1[1];
      uStack_48 = param_1[2];
      uStack_40 = param_1[3];
      puVar15 = param_1 + uVar18 * 4;
      uVar1 = puVar15[1];
      uVar3 = puVar15[2];
      uVar4 = puVar15[3];
      *param_1 = *puVar15;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_3 = param_1 + uVar18 * 4;
      puVar15 = param_1 + uVar18 * 4;
      *puVar15 = local_58;
      puVar15[1] = uStack_50;
      puVar15[2] = uStack_48;
      puVar15[3] = uStack_40;
      lVar21 = uVar18 * 4 + 4;
      uVar11 = ~uVar18;
      <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                (param_1,uVar18,local_38,param_4);
    }
    else {
      puVar15 = (undefined8 *)((long)param_1 + lVar21);
      lVar23 = *(long *)((long)param_1 + lVar21 + 0x10);
      if (local_38[2] == lVar23) {
        uVar11 = puVar15[1];
        uVar19 = local_38[1];
        uVar18 = uVar11;
        if (uVar19 < uVar11) {
          uVar18 = uVar19;
        }
        iVar9 = (*(code *)PTR_memcmp_008420a0)(*local_38,*puVar15,uVar18);
        lVar23 = uVar19 - uVar11;
        if (iVar9 != 0) {
          lVar23 = (long)iVar9;
        }
        if (lVar23 < 0) goto LAB_0063f6ab;
      }
      else if ((long)local_38[2] < lVar23) goto LAB_0063f6ab;
      uVar1 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = puVar15[1];
      uVar7 = puVar15[2];
      uVar8 = puVar15[3];
      *param_1 = *puVar15;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      *puVar15 = uVar1;
      puVar15[1] = uVar3;
      puVar15[2] = uVar4;
      puVar15[3] = uVar5;
      local_58 = param_1[4];
      uStack_50 = param_1[5];
      uStack_48 = param_1[6];
      uStack_40 = param_1[7];
      puVar15 = param_1 + 8;
      lVar21 = param_1[2];
      uVar1 = *param_1;
      uVar11 = param_1[1];
      lVar23 = param_2 * 0x20 + -0x60;
      lVar17 = param_2 * 0x20 + -0x40;
      uVar19 = 0;
      do {
        lVar24 = lVar17;
        lVar22 = lVar23;
        bVar13 = lVar21 < (long)puVar15[2];
        if (lVar21 == puVar15[2]) {
          uVar18 = puVar15[1];
          uVar12 = uVar18;
          if (uVar11 < uVar18) {
            uVar12 = uVar11;
          }
          iVar9 = (*(code *)PTR_memcmp_008420a0)(uVar1,*puVar15,uVar12);
          bVar16 = (byte)(uVar11 - uVar18 >> 0x38);
          if (iVar9 != 0) {
            bVar16 = (byte)((ulong)(long)iVar9 >> 0x38);
          }
          bVar13 = (bool)(bVar16 >> 7);
        }
        uVar18 = (bVar13 ^ 1) + uVar19;
        puVar14 = param_1 + uVar19 * 4 + 4;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        puVar15[-4] = *puVar14;
        puVar15[-3] = uVar3;
        puVar15[-2] = uVar4;
        puVar15[-1] = uVar5;
        uVar3 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[3];
        puVar14 = param_1 + uVar19 * 4 + 4;
        *puVar14 = *puVar15;
        puVar14[1] = uVar3;
        puVar14[2] = uVar4;
        puVar14[3] = uVar5;
        puVar15 = puVar15 + 4;
        lVar23 = lVar22 + -0x20;
        lVar17 = lVar24 + -0x20;
        uVar19 = uVar18;
      } while (puVar15 < param_1 + param_2 * 4);
      do {
        puVar14 = puVar15;
        if (lVar22 == 0) {
          puVar14 = &local_58;
        }
        bVar13 = lVar21 < (long)puVar14[2];
        if (lVar21 == puVar14[2]) {
          puVar10 = puVar15;
          if (lVar22 == 0) {
            puVar10 = &local_58;
          }
          uVar19 = puVar10[1];
          uVar12 = uVar19;
          if (uVar11 < uVar19) {
            uVar12 = uVar11;
          }
          iVar9 = (*(code *)PTR_memcmp_008420a0)(uVar1,*puVar14,uVar12);
          bVar16 = (byte)(uVar11 - uVar19 >> 0x38);
          if (iVar9 != 0) {
            bVar16 = (byte)((ulong)(long)iVar9 >> 0x38);
          }
          bVar13 = (bool)(bVar16 >> 7);
        }
        puVar10 = param_1 + uVar18 * 4 + 4;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        puVar15[-4] = *puVar10;
        puVar15[-3] = uVar3;
        puVar15[-2] = uVar4;
        puVar15[-1] = uVar5;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        puVar10 = param_1 + uVar18 * 4 + 4;
        *puVar10 = *puVar14;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar18 = uVar18 + (bVar13 ^ 1);
        puVar15 = puVar15 + 4;
        lVar22 = lVar22 + -0x20;
        lVar24 = lVar24 + -0x20;
      } while (lVar24 != 0);
      if (param_2 <= uVar18) {
LAB_0063f8e5:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_58 = *param_1;
      uStack_50 = param_1[1];
      uStack_48 = param_1[2];
      uStack_40 = param_1[3];
      puVar15 = param_1 + uVar18 * 4;
      uVar1 = puVar15[1];
      uVar3 = puVar15[2];
      uVar4 = puVar15[3];
      *param_1 = *puVar15;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      puVar15 = param_1 + uVar18 * 4;
      *puVar15 = local_58;
      puVar15[1] = uStack_50;
      puVar15[2] = uStack_48;
      puVar15[3] = uStack_40;
      uVar11 = -(uVar18 + 1);
      lVar21 = (uVar18 + 1) * 4;
      param_3 = (undefined8 *)0x0;
    }
    param_1 = param_1 + lVar21;
    param_2 = param_2 + uVar11;
  } while( true );
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<pipeline::generic::core::PE, <[pipeline::generic::core::PE]>::sort_unstable_by_key<i64, pipeline::generic::core::person::{closure#0}>::{closure#0}> @ 0063f900 (2300 bytes)

/* WARNING: Type propagation algorithm not settling */
/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<pipeline[509596c7b52975b2]::generic::core::PE,
   <[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,
   pipeline[509596c7b52975b2]::generic::core::person::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
          (long *param_1,ulong param_2,long *param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  long alStack_388 [9];
  code *pcStack_340;
  long local_338 [16];
  undefined1 auStack_2b8 [648];
  
  plVar15 = local_338;
  if (0x20 < param_2) {
    plVar10 = param_1;
    do {
      while( true ) {
        if (param_4 == 0) {
          heapsort::heapsort::
          <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                    (plVar10,param_2);
          return;
        }
        if (param_2 < 0x40) break;
        pcStack_340 = (code *)0x63fa5e;
        lVar7 = shared::pivot::median3_rec::
                <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                          ();
        lVar7 = lVar7 - (long)plVar10;
        if (param_3 != (long *)0x0) goto LAB_0063fa6c;
LAB_0063fa7a:
        lVar3 = *plVar10;
        lVar19 = plVar10[1];
        lVar5 = ((long *)((long)plVar10 + lVar7))[1];
        *plVar10 = *(long *)((long)plVar10 + lVar7);
        plVar10[1] = lVar5;
        *(long *)((long)plVar10 + lVar7) = lVar3;
        ((long *)((long)plVar10 + lVar7))[1] = lVar19;
        local_338[0] = plVar10[2];
        local_338[1] = plVar10[3];
        plVar8 = plVar10 + 2;
        plVar13 = plVar10 + 4;
        lVar7 = *plVar10;
        if (plVar13 < plVar10 + param_2 * 2 + -2) {
          uVar22 = 0;
          do {
            plVar17 = plVar13;
            lVar19 = (*plVar17 < lVar7) + uVar22;
            lVar3 = (plVar8 + uVar22 * 2)[1];
            plVar17[-2] = plVar8[uVar22 * 2];
            plVar17[-1] = lVar3;
            lVar3 = plVar17[1];
            plVar8[uVar22 * 2] = *plVar17;
            (plVar8 + uVar22 * 2)[1] = lVar3;
            uVar22 = (ulong)(plVar17[2] < lVar7) + lVar19;
            lVar3 = (plVar8 + lVar19 * 2)[1];
            *plVar17 = plVar8[lVar19 * 2];
            plVar17[1] = lVar3;
            lVar3 = plVar17[3];
            plVar8[lVar19 * 2] = plVar17[2];
            (plVar8 + lVar19 * 2)[1] = lVar3;
            plVar13 = plVar17 + 4;
          } while (plVar13 < plVar10 + param_2 * 2 + -2);
          plVar17 = plVar17 + 2;
        }
        else {
          uVar22 = 0;
          plVar17 = plVar8;
        }
        do {
          plVar18 = plVar13;
          plVar13 = plVar18;
          if (plVar18 == plVar10 + param_2 * 2) {
            plVar13 = local_338;
          }
          uVar11 = (*plVar13 < lVar7) + uVar22;
          lVar3 = (plVar8 + uVar22 * 2)[1];
          *plVar17 = plVar8[uVar22 * 2];
          plVar17[1] = lVar3;
          lVar3 = plVar13[1];
          plVar8[uVar22 * 2] = *plVar13;
          (plVar8 + uVar22 * 2)[1] = lVar3;
          plVar13 = plVar18 + 2;
          uVar22 = uVar11;
          plVar17 = plVar18;
        } while (plVar18 != plVar10 + param_2 * 2);
        if (param_2 <= uVar11) {
LAB_0063fcf8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_338[0] = *plVar10;
        local_338[1] = plVar10[1];
        lVar7 = (plVar10 + uVar11 * 2)[1];
        *plVar10 = plVar10[uVar11 * 2];
        plVar10[1] = lVar7;
        plVar10[uVar11 * 2] = local_338[0];
        (plVar10 + uVar11 * 2)[1] = local_338[1];
        param_1 = plVar10 + uVar11 * 2 + 2;
        param_2 = param_2 + ~uVar11;
        pcStack_340 = (code *)0x63fbd6;
        <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                  (plVar10,uVar11,param_3,param_4 + -1);
        param_3 = plVar10 + uVar11 * 2;
        plVar10 = param_1;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto code_r0x0063f920;
      }
      lVar7 = *plVar10;
      lVar3 = plVar10[(param_2 >> 3) * 8];
      lVar19 = plVar10[(param_2 >> 3) * 0xe];
      plVar8 = plVar10 + (param_2 >> 3) * 8;
      if (lVar3 < lVar19 != lVar7 < lVar3) {
        plVar8 = plVar10 + (param_2 >> 3) * 0xe;
      }
      if (lVar7 < lVar19 != lVar7 < lVar3) {
        plVar8 = plVar10;
      }
      lVar7 = (long)plVar8 - (long)plVar10;
      if (param_3 == (long *)0x0) goto LAB_0063fa7a;
LAB_0063fa6c:
      if (*param_3 < *(long *)((long)plVar10 + lVar7)) goto LAB_0063fa7a;
      plVar8 = (long *)(lVar7 + (long)plVar10);
      lVar7 = *plVar10;
      lVar3 = plVar10[1];
      lVar19 = plVar8[1];
      *plVar10 = *plVar8;
      plVar10[1] = lVar19;
      *plVar8 = lVar7;
      plVar8[1] = lVar3;
      local_338[0] = plVar10[2];
      local_338[1] = plVar10[3];
      plVar8 = plVar10 + 2;
      plVar13 = plVar10 + 4;
      lVar7 = *plVar10;
      if (plVar13 < plVar10 + param_2 * 2 + -2) {
        uVar22 = 0;
        do {
          plVar17 = plVar13;
          lVar19 = (*plVar17 <= lVar7) + uVar22;
          lVar3 = (plVar8 + uVar22 * 2)[1];
          plVar17[-2] = plVar8[uVar22 * 2];
          plVar17[-1] = lVar3;
          lVar3 = plVar17[1];
          plVar8[uVar22 * 2] = *plVar17;
          (plVar8 + uVar22 * 2)[1] = lVar3;
          uVar22 = (ulong)(plVar17[2] <= lVar7) + lVar19;
          lVar3 = (plVar8 + lVar19 * 2)[1];
          *plVar17 = plVar8[lVar19 * 2];
          plVar17[1] = lVar3;
          lVar3 = plVar17[3];
          plVar8[lVar19 * 2] = plVar17[2];
          (plVar8 + lVar19 * 2)[1] = lVar3;
          plVar13 = plVar17 + 4;
        } while (plVar13 < plVar10 + param_2 * 2 + -2);
        plVar17 = plVar17 + 2;
      }
      else {
        uVar22 = 0;
        plVar17 = plVar8;
      }
      do {
        plVar18 = plVar13;
        plVar13 = plVar18;
        if (plVar18 == plVar10 + param_2 * 2) {
          plVar13 = local_338;
        }
        uVar11 = (*plVar13 <= lVar7) + uVar22;
        lVar3 = (plVar8 + uVar22 * 2)[1];
        *plVar17 = plVar8[uVar22 * 2];
        plVar17[1] = lVar3;
        lVar3 = plVar13[1];
        plVar8[uVar22 * 2] = *plVar13;
        (plVar8 + uVar22 * 2)[1] = lVar3;
        plVar13 = plVar18 + 2;
        uVar22 = uVar11;
        plVar17 = plVar18;
      } while (plVar18 != plVar10 + param_2 * 2);
      if (param_2 <= uVar11) goto LAB_0063fcf8;
      local_338[0] = *plVar10;
      local_338[1] = plVar10[1];
      lVar7 = (plVar10 + uVar11 * 2)[1];
      *plVar10 = plVar10[uVar11 * 2];
      plVar10[1] = lVar7;
      plVar10[uVar11 * 2] = local_338[0];
      (plVar10 + uVar11 * 2)[1] = local_338[1];
      param_2 = param_2 - (uVar11 + 1);
      param_1 = plVar10 + (uVar11 + 1) * 2;
      param_3 = (long *)0x0;
      plVar10 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
code_r0x0063f920:
  if (param_2 < 2) {
    return;
  }
  uVar22 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      local_338[0] = *param_1;
      local_338[1] = param_1[1];
      lVar7 = (param_1 + uVar22 * 2)[1];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 8) * 8 + 0x10) = param_1[uVar22 * 2];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 9) * 8 + 0x10) = lVar7;
      uVar11 = 1;
      uVar12 = param_2 - uVar22;
      if (1 < uVar22) goto LAB_0063feeb;
    }
    else {
      uVar11 = (ulong)(param_1[2] < *param_1);
      uVar12 = (ulong)(*param_1 <= param_1[2]);
      plVar10 = param_1 + uVar12 * 2;
      uVar16 = (ulong)(param_1[6] < param_1[4]);
      plVar17 = param_1 + uVar16 * 2 + 4;
      uVar9 = (ulong)((param_1[6] < param_1[4] ^ 3) << 4);
      plVar8 = (long *)((long)param_1 + uVar9);
      lVar7 = *(long *)((long)param_1 + uVar9);
      plVar13 = plVar10;
      if (lVar7 < param_1[uVar12 * 2]) {
        plVar13 = plVar17;
      }
      plVar14 = plVar17;
      plVar18 = param_1 + uVar11 * 2;
      if (param_1[uVar16 * 2 + 4] < param_1[uVar11 * 2]) {
        plVar14 = plVar10;
        plVar18 = plVar17;
        plVar13 = param_1 + uVar11 * 2;
      }
      if (lVar7 < param_1[uVar12 * 2]) {
        plVar14 = plVar8;
      }
      else {
        plVar10 = plVar8;
      }
      plVar8 = plVar14;
      if (*plVar14 < *plVar13) {
        plVar8 = plVar13;
        plVar13 = plVar14;
      }
      local_338[0] = *plVar18;
      local_338[1] = plVar18[1];
      local_338[2] = *plVar13;
      local_338[3] = plVar13[1];
      local_338[4] = *plVar8;
      local_338[5] = plVar8[1];
      local_338[6] = *plVar10;
      local_338[7] = plVar10[1];
      uVar11 = (ulong)(param_1[uVar22 * 2 + 2] < param_1[uVar22 * 2]);
      uVar12 = (ulong)(param_1[uVar22 * 2] <= param_1[uVar22 * 2 + 2]);
      plVar10 = param_1 + uVar22 * 2 + uVar12 * 2;
      uVar16 = (ulong)(param_1[uVar22 * 2 + 6] < param_1[uVar22 * 2 + 4]);
      plVar13 = param_1 + uVar22 * 2 + uVar16 * 2 + 4;
      uVar9 = (ulong)((param_1[uVar22 * 2 + 6] < param_1[uVar22 * 2 + 4] ^ 3) << 4);
      lVar7 = *(long *)((long)param_1 + uVar9 + uVar22 * 0x10);
      plVar8 = plVar10;
      if (lVar7 < param_1[uVar22 * 2 + uVar12 * 2]) {
        plVar8 = plVar13;
      }
      plVar17 = (long *)((long)param_1 + uVar9 + uVar22 * 0x10);
      plVar14 = plVar13;
      plVar18 = param_1 + uVar22 * 2 + uVar11 * 2;
      if (param_1[uVar22 * 2 + uVar16 * 2 + 4] < param_1[uVar22 * 2 + uVar11 * 2]) {
        plVar14 = plVar10;
        plVar18 = plVar13;
        plVar8 = param_1 + uVar22 * 2 + uVar11 * 2;
      }
      if (lVar7 < param_1[uVar22 * 2 + uVar12 * 2]) {
        plVar14 = plVar17;
      }
      else {
        plVar10 = plVar17;
      }
      plVar13 = plVar14;
      if (*plVar14 < *plVar8) {
        plVar13 = plVar8;
        plVar8 = plVar14;
      }
      lVar7 = plVar18[1];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 8) * 8 + 0x10) = *plVar18;
      *(long *)((long)alStack_388 + (uVar22 * 2 + 9) * 8 + 0x10) = lVar7;
      lVar7 = plVar8[1];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 10) * 8 + 0x10) = *plVar8;
      *(long *)((long)alStack_388 + (uVar22 * 2 + 0xb) * 8 + 0x10) = lVar7;
      lVar7 = plVar13[1];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 0xc) * 8 + 0x10) = *plVar13;
      *(long *)((long)alStack_388 + (uVar22 * 2 + 0xd) * 8 + 0x10) = lVar7;
      lVar7 = plVar10[1];
      *(long *)((long)alStack_388 + (uVar22 * 2 + 0xe) * 8 + 0x10) = *plVar10;
      *(long *)((long)alStack_388 + (uVar22 * 2 + 0xf) * 8 + 0x10) = lVar7;
      uVar11 = 4;
      uVar12 = param_2 - uVar22;
      if (4 < uVar22) {
LAB_0063feeb:
        uVar9 = (ulong)(uint)((int)uVar11 << 4);
        uVar16 = uVar11;
        do {
          lVar7 = (param_1 + uVar16 * 2)[1];
          *(long *)((long)alStack_388 + (uVar16 * 2 + 8) * 8 + 0x10) = param_1[uVar16 * 2];
          *(long *)((long)alStack_388 + (uVar16 * 2 + 9) * 8 + 0x10) = lVar7;
          lVar7 = *(long *)((long)alStack_388 + (uVar16 * 2 + 8) * 8 + 0x10);
          if (lVar7 < *(long *)((long)alStack_388 + (uVar16 * 2 + 6) * 8 + 0x10)) {
            lVar3 = *(long *)((long)alStack_388 + (uVar16 * 2 + 9) * 8 + 0x10);
            uVar1 = uVar9;
            do {
              uVar20 = uVar1;
              uVar6 = *(undefined8 *)((long)alStack_388 + uVar20 + 0x48);
              *(undefined8 *)((long)local_338 + uVar20) =
                   *(undefined8 *)((long)alStack_388 + uVar20 + 0x40);
              *(undefined8 *)((long)local_338 + uVar20 + 8) = uVar6;
              if (uVar20 == 0x10) {
                plVar10 = local_338;
                goto LAB_0063ff03;
              }
              uVar1 = uVar20 - 0x10;
            } while (lVar7 < *(long *)((long)alStack_388 + uVar20 + 0x30));
            plVar10 = (long *)((long)alStack_388 + uVar20 + 0x40);
LAB_0063ff03:
            *plVar10 = lVar7;
            plVar10[1] = lVar3;
          }
          uVar16 = uVar16 + 1;
          uVar9 = uVar9 + 0x10;
        } while (uVar16 != uVar22);
      }
    }
  }
  else {
    pcStack_340 = (code *)0x63f950;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
              (param_1,local_338,(long *)((long)alStack_388 + (param_2 * 2 + 8) * 8 + 0x10));
    pcStack_340 = (code *)0x63f96f;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
              (param_1 + uVar22 * 2,(long *)((long)alStack_388 + (uVar22 * 2 + 8) * 8 + 0x10),
               auStack_2b8 + param_2 * 0x10);
    uVar11 = 8;
    uVar12 = param_2 - uVar22;
    if (8 < uVar22) goto LAB_0063feeb;
  }
  plVar10 = (long *)((long)alStack_388 + (uVar22 * 2 + 8) * 8 + 0x10);
  if (uVar11 < uVar12) {
    uVar16 = (ulong)(uint)((int)uVar11 << 4);
    do {
      lVar7 = (param_1 + uVar22 * 2 + uVar11 * 2)[1];
      plVar10[uVar11 * 2] = param_1[uVar22 * 2 + uVar11 * 2];
      (plVar10 + uVar11 * 2)[1] = lVar7;
      lVar7 = plVar10[uVar11 * 2];
      if (lVar7 < *(long *)((long)alStack_388 + (uVar22 * 2 + uVar11 * 2 + 6) * 8 + 0x10)) {
        lVar3 = plVar10[uVar11 * 2 + 1];
        uVar9 = uVar16;
        do {
          puVar2 = (undefined8 *)((long)alStack_388 + uVar9 + uVar22 * 0x10 + 0x40);
          uVar6 = puVar2[1];
          *(undefined8 *)((long)plVar10 + uVar9) = *puVar2;
          ((undefined8 *)((long)plVar10 + uVar9))[1] = uVar6;
          if (uVar9 == 0x10) {
            plVar8 = plVar10;
            goto LAB_0063ff93;
          }
          uVar1 = uVar9 - 0x10;
          lVar19 = uVar9 + uVar22 * 0x10;
          uVar9 = uVar1;
        } while (lVar7 < *(long *)((long)alStack_388 + lVar19 + 0x30U));
        plVar8 = (long *)(uVar1 + (long)plVar10);
LAB_0063ff93:
        *plVar8 = lVar7;
        plVar8[1] = lVar3;
      }
      uVar11 = uVar11 + 1;
      uVar16 = uVar16 + 0x10;
    } while (uVar11 != uVar12);
  }
  plVar17 = param_1 + param_2 * 2 + -2;
  plVar13 = (long *)((long)alStack_388 + (param_2 * 2 + 6) * 8 + 0x10);
  plVar8 = (long *)((long)alStack_388 + (uVar22 * 2 + 6) * 8 + 0x10);
  if (uVar22 == 1) {
LAB_0064015a:
    lVar7 = *plVar10;
    lVar3 = *plVar15;
    plVar18 = plVar15;
    if (lVar7 < lVar3) {
      plVar18 = plVar10;
    }
    lVar19 = plVar18[1];
    *param_1 = *plVar18;
    param_1[1] = lVar19;
    plVar10 = plVar10 + (ulong)(lVar7 < lVar3) * 2;
    plVar15 = plVar15 + (ulong)(lVar3 <= lVar7) * 2;
    param_1 = param_1 + 2;
    lVar7 = *plVar13;
    lVar3 = *plVar8;
    plVar18 = plVar13;
    if (lVar7 < lVar3) {
      plVar18 = plVar8;
    }
    lVar19 = plVar18[1];
    *plVar17 = *plVar18;
    plVar17[1] = lVar19;
    plVar8 = plVar8 + (ulong)(lVar7 < lVar3) * -2 + 2;
    plVar13 = plVar13 + (ulong)(lVar3 <= lVar7) * -2 + 2;
    if ((param_2 & 1) == 0) goto LAB_0064012e;
LAB_006401d4:
    bVar23 = plVar15 < plVar8;
    plVar17 = plVar10;
    if (bVar23) {
      plVar17 = plVar15;
    }
    lVar7 = plVar17[1];
    *param_1 = *plVar17;
    param_1[1] = lVar7;
    bVar24 = plVar10 + (ulong)!bVar23 * 2 != plVar13;
    if (plVar15 + (ulong)bVar23 * 2 != plVar8) goto LAB_0064021b;
  }
  else {
    uVar22 = (ulong)((uint)uVar22 & 0x1e);
    plVar15 = local_338;
    do {
      lVar7 = *plVar10;
      lVar3 = *plVar15;
      plVar18 = plVar15;
      if (lVar7 < lVar3) {
        plVar18 = plVar10;
      }
      lVar19 = plVar18[1];
      *param_1 = *plVar18;
      param_1[1] = lVar19;
      uVar11 = (ulong)(lVar7 < lVar3);
      plVar18 = plVar10 + uVar11 * 2;
      uVar12 = (ulong)(lVar3 <= lVar7);
      plVar14 = plVar15 + uVar12 * 2;
      lVar7 = *plVar13;
      lVar3 = *plVar8;
      plVar21 = plVar13;
      if (lVar7 < lVar3) {
        plVar21 = plVar8;
      }
      lVar19 = plVar21[1];
      *plVar17 = *plVar21;
      plVar17[1] = lVar19;
      plVar13 = plVar13 + (ulong)(lVar3 <= lVar7) * -2;
      plVar8 = plVar8 + (ulong)(lVar7 < lVar3) * -2;
      lVar7 = plVar10[uVar11 * 2];
      lVar3 = plVar15[uVar12 * 2];
      plVar21 = plVar14;
      if (lVar7 < lVar3) {
        plVar21 = plVar18;
      }
      lVar19 = plVar21[1];
      plVar15 = plVar15 + uVar12 * 2 + 2;
      if (lVar7 < lVar3) {
        plVar15 = plVar14;
      }
      param_1[2] = *plVar21;
      param_1[3] = lVar19;
      plVar10 = plVar10 + uVar11 * 2 + 2;
      if (lVar3 <= lVar7) {
        plVar10 = plVar18;
      }
      param_1 = param_1 + 4;
      lVar7 = *plVar13;
      lVar3 = *plVar8;
      plVar18 = plVar13;
      if (lVar7 < lVar3) {
        plVar18 = plVar8;
      }
      lVar19 = plVar18[1];
      plVar17[-2] = *plVar18;
      plVar17[-1] = lVar19;
      plVar13 = plVar13 + (ulong)(lVar3 <= lVar7) * -2;
      plVar8 = plVar8 + (ulong)(lVar7 < lVar3) * -2;
      plVar17 = plVar17 + -4;
      uVar22 = uVar22 - 2;
    } while (uVar22 != 0);
    if ((param_2 & 2) != 0) goto LAB_0064015a;
    plVar8 = plVar8 + 2;
    plVar13 = plVar13 + 2;
    if ((param_2 & 1) != 0) goto LAB_006401d4;
LAB_0064012e:
    bVar24 = plVar10 != plVar13;
    if (plVar15 != plVar8) goto LAB_0064021b;
  }
  if (!bVar24) {
    return;
  }
LAB_0064021b:
                    /* WARNING: Subroutine does not return */
  pcStack_340 = <&[u8],<&[u8]as_core[62e902411887be45]::cmp::PartialOrd>::lt>;
  shared::smallsort::panic_on_ord_violation();
}


// ==== <core::hash::BuildHasherDefault<pipeline::generic::util::H> as core::hash::BuildHasher>::hash_one::<&&[u8]> @ 006450a0 (432 bytes)

/* <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>
   as core[62e902411887be45]::hash::BuildHasher>::hash_one::<&&[u8]> */

ulong __rustcall
<core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
::hash_one::<&&[u8]>(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  
  if (param_2 < 0x11) {
    if (param_2 < 8) {
      if (param_2 < 4) {
        if (param_2 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulong)*(byte *)((long)param_1 + (param_2 - 1)) |
                   (ulong)((uint)*(byte *)((long)param_1 + (param_2 >> 1)) << 8 |
                          (uint)(byte)*param_1 << 0x10);
        }
        uVar16 = 0;
      }
      else {
        uVar18 = (ulong)(uint)*param_1;
        uVar16 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
      }
    }
    else {
      uVar18 = *param_1;
      uVar16 = *(ulong *)((long)param_1 + (param_2 - 8));
    }
    uVar18 = uVar18 ^ 0x243f6a8885a308d3;
    uVar16 = param_2 ^ 0x13198a2e03707344 ^ uVar16;
    goto LAB_00645216;
  }
  uVar16 = param_2 ^ 0x452821e638d01377;
  uVar20 = (param_2 - 0x11 >> 4) + 1;
  uVar18 = (ulong)((uint)uVar20 & 3);
  if (param_2 - 0x11 < 0x30) {
    lVar17 = 0;
    lVar19 = 0x10;
LAB_006451a0:
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16 ^ *(ulong *)((long)param_1 + lVar17 + 8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulong *)((long)param_1 + lVar17) ^ 0x243f6a8885a308d3;
      uVar16 = SUB168(auVar5 * auVar14,8) ^ SUB168(auVar5 * auVar14,0);
      uVar18 = uVar18 - 1;
      lVar17 = lVar19;
      lVar19 = lVar19 + 0x10;
    } while (uVar18 != 0);
  }
  else {
    uVar20 = uVar20 & 0xfffffffffffffffc;
    lVar17 = 0;
    do {
      lVar19 = lVar17;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar16 ^ *(ulong *)((long)param_1 + lVar19 + 8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong *)((long)param_1 + lVar19) ^ 0x243f6a8885a308d3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar10,8) ^ SUB168(auVar1 * auVar10,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x18);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x10) ^ 0x243f6a8885a308d3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = SUB168(auVar2 * auVar11,8) ^ SUB168(auVar2 * auVar11,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x28);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x20) ^ 0x243f6a8885a308d3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar3 * auVar12,8) ^ SUB168(auVar3 * auVar12,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x38);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x30) ^ 0x243f6a8885a308d3;
      uVar16 = SUB168(auVar4 * auVar13,8) ^ SUB168(auVar4 * auVar13,0);
      lVar17 = lVar19 + 0x40;
      uVar20 = uVar20 - 4;
    } while (uVar20 != 0);
    if (uVar18 != 0) {
      lVar19 = lVar19 + 0x50;
      goto LAB_006451a0;
    }
  }
  uVar18 = *(ulong *)((long)param_1 + (param_2 - 0x10)) ^ 0x13198a2e03707344;
  uVar16 = uVar16 ^ *(ulong *)((long)param_1 + (param_2 - 8)) ^ 0xa4093822299f31d0;
LAB_00645216:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2 ^ 0x243f6a8885a308d3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar16;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar18;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar7 * auVar15,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar7 * auVar15,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),0) ^
                 SUB168(auVar6 * ZEXT816(0x82efa98ec4e6c89),0) ^
                 SUB168(auVar6 * ZEXT816(0x82efa98ec4e6c89),8) ^
                 SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),8);
  return SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),8) ^
         SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),0);
}


// ==== <core::hash::BuildHasherDefault<pipeline::generic::util::H> as core::hash::BuildHasher>::hash_one::<&[u8]> @ 00645260 (432 bytes)

/* <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>
   as core[62e902411887be45]::hash::BuildHasher>::hash_one::<&[u8]> */

ulong __rustcall
<core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
::hash_one::<&[u8]>(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  
  if (param_2 < 0x11) {
    if (param_2 < 8) {
      if (param_2 < 4) {
        if (param_2 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulong)*(byte *)((long)param_1 + (param_2 - 1)) |
                   (ulong)((uint)*(byte *)((long)param_1 + (param_2 >> 1)) << 8 |
                          (uint)(byte)*param_1 << 0x10);
        }
        uVar16 = 0;
      }
      else {
        uVar18 = (ulong)(uint)*param_1;
        uVar16 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
      }
    }
    else {
      uVar18 = *param_1;
      uVar16 = *(ulong *)((long)param_1 + (param_2 - 8));
    }
    uVar18 = uVar18 ^ 0x243f6a8885a308d3;
    uVar16 = param_2 ^ 0x13198a2e03707344 ^ uVar16;
    goto LAB_006453d6;
  }
  uVar16 = param_2 ^ 0x452821e638d01377;
  uVar20 = (param_2 - 0x11 >> 4) + 1;
  uVar18 = (ulong)((uint)uVar20 & 3);
  if (param_2 - 0x11 < 0x30) {
    lVar17 = 0;
    lVar19 = 0x10;
LAB_00645360:
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16 ^ *(ulong *)((long)param_1 + lVar17 + 8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulong *)((long)param_1 + lVar17) ^ 0x243f6a8885a308d3;
      uVar16 = SUB168(auVar5 * auVar14,8) ^ SUB168(auVar5 * auVar14,0);
      uVar18 = uVar18 - 1;
      lVar17 = lVar19;
      lVar19 = lVar19 + 0x10;
    } while (uVar18 != 0);
  }
  else {
    uVar20 = uVar20 & 0xfffffffffffffffc;
    lVar17 = 0;
    do {
      lVar19 = lVar17;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar16 ^ *(ulong *)((long)param_1 + lVar19 + 8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong *)((long)param_1 + lVar19) ^ 0x243f6a8885a308d3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar1 * auVar10,8) ^ SUB168(auVar1 * auVar10,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x18);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x10) ^ 0x243f6a8885a308d3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = SUB168(auVar2 * auVar11,8) ^ SUB168(auVar2 * auVar11,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x28);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x20) ^ 0x243f6a8885a308d3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar3 * auVar12,8) ^ SUB168(auVar3 * auVar12,0) ^
                     *(ulong *)((long)param_1 + lVar19 + 0x38);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulong *)((long)param_1 + lVar19 + 0x30) ^ 0x243f6a8885a308d3;
      uVar16 = SUB168(auVar4 * auVar13,8) ^ SUB168(auVar4 * auVar13,0);
      lVar17 = lVar19 + 0x40;
      uVar20 = uVar20 - 4;
    } while (uVar20 != 0);
    if (uVar18 != 0) {
      lVar19 = lVar19 + 0x50;
      goto LAB_00645360;
    }
  }
  uVar18 = *(ulong *)((long)param_1 + (param_2 - 0x10)) ^ 0x13198a2e03707344;
  uVar16 = uVar16 ^ *(ulong *)((long)param_1 + (param_2 - 8)) ^ 0xa4093822299f31d0;
LAB_006453d6:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2 ^ 0x243f6a8885a308d3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar16;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar18;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar7 * auVar15,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar7 * auVar15,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),0) ^
                 SUB168(auVar6 * ZEXT816(0x82efa98ec4e6c89),0) ^
                 SUB168(auVar6 * ZEXT816(0x82efa98ec4e6c89),8) ^
                 SUB168(auVar8 * ZEXT816(0x82efa98ec4e6c89),8);
  return SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),8) ^
         SUB168(auVar9 * ZEXT816(0x82efa98ec4e6c89),0);
}


// ==== pipeline::generic::util::par_run::<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}>::{closure#0} @ 006484a0 (6658 bytes)

/* WARNING: Type propagation algorithm not settling */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#8}>
::_closure_0_(long *param_1,long param_2)

{
  int *******pppppppiVar1;
  int *piVar2;
  int iVar3;
  int *******pppppppiVar4;
  int ******ppppppiVar5;
  int ****ppppiVar6;
  int ******ppppppiVar7;
  int ******ppppppiVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  char cVar21;
  byte bVar22;
  int *****pppppiVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  int *****pppppiVar28;
  int *******pppppppiVar29;
  int *******pppppppiVar30;
  int *****pppppiVar31;
  int *******pppppppiVar32;
  ulong uVar33;
  int *****pppppiVar34;
  long lVar35;
  int *****pppppiVar36;
  int *******unaff_R13;
  int *******pppppppiVar37;
  int *******pppppppiVar38;
  int *****pppppiVar39;
  long unaff_R14;
  int *******pppppppiVar40;
  int *****pppppiVar41;
  long in_FS_OFFSET;
  bool bVar42;
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  int *****local_170;
  int *******local_150;
  int *******local_148;
  long lStack_140;
  int *******local_138;
  int *******local_130;
  int *******local_128;
  long *local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  int *******pppppppiStack_e8;
  long local_e0;
  int *******local_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  int *******pppppppiStack_c8;
  int *******pppppppiStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  int *****local_78;
  int ******local_68;
  byte local_60;
  long local_58;
  int *****local_50;
  ulong *local_48;
  long local_40;
  int *****local_38;
  
  local_f0 = 0;
  pppppppiStack_e8 = (int *******)&DAT_00000008;
  local_e0 = 0;
  local_118 = 0;
  local_110 = 8;
  local_48 = *(ulong **)(param_2 + 8);
  local_50 = *(int ******)(param_2 + 0x18);
  local_108 = 0;
  LOCK();
  pppppiVar34 = (int *****)*local_48;
  *local_48 = *local_48 + 1;
  UNLOCK();
  if (pppppiVar34 < local_50) {
    pppppppiVar4 = *(int ********)(param_2 + 0x10);
    auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
    auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                 CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
    auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                 CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
    local_58 = -0x8000000000000000;
    local_120 = param_1;
    do {
      ppppppiVar5 = *pppppppiVar4;
      pppppiVar36 = *ppppppiVar5;
      pppppppiVar32 = (int *******)((long)pppppiVar34 - (long)pppppiVar36);
      auVar50 = auVar52._0_16_;
      local_40 = local_108;
      if (pppppiVar34 < pppppiVar36) {
        pppppiVar36 = pppppppiVar4[1][2];
        if (pppppiVar36 <= pppppiVar34) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (pppppiVar34,pppppiVar36,&PTR_s_src_generic_mod_rs_00210f40);
        }
        pppppiVar36 = pppppppiVar4[1][1];
        ppppiVar6 = pppppiVar36[(long)pppppiVar34 * 2];
        pppppppiVar32 = (int *******)pppppiVar36[(long)pppppiVar34 * 2 + 1];
        if (pppppppiVar32 < (int *******)0x40) {
          pppppppiVar40 = (int *******)0x0;
          lVar35 = 0;
        }
        else {
          if ((ulong)pppppppiVar32 >> 6 <= (ulong)(pppppppiVar32 + -8) >> 6) {
LAB_00649d6e:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic
                      ("assertion failed: p.len() >= 64",0x1f,&PTR_s_src_generic_util_rs_00589980);
          }
          pppppppiVar30 = (int *******)&DAT_00000040;
          lVar35 = 0;
          do {
            uVar15 = vpcmpeqb_avx512bw(auVar43,*(undefined1 (*) [64])
                                                ((long)(ppppiVar6 + -8) + (long)pppppppiVar30));
            lVar35 = lVar35 + POPCOUNT(uVar15);
            pppppppiVar30 = pppppppiVar30 + 8;
          } while (pppppppiVar30 <= pppppppiVar32);
          pppppppiVar40 = (int *******)(((ulong)(pppppppiVar32 + -8) & 0xffffffffffffffc0) + 0x40);
          if (pppppppiVar32 < pppppppiVar40) {
LAB_00649d85:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (pppppppiVar40,pppppppiVar32,pppppppiVar32,&PTR_s_src_generic_util_rs_00589948
                      );
          }
        }
        uVar27 = (long)pppppppiVar32 - (long)pppppppiVar40;
        if (uVar27 == 0) {
          pppppppiVar29 = (int *******)0x0;
        }
        else {
          if (uVar27 < 4) {
            uVar26 = 0;
            pppppppiVar29 = (int *******)0x0;
          }
          else {
            if (uVar27 < 0x10) {
              pppppppiVar29 = (int *******)0x0;
              uVar33 = 0;
            }
            else {
              uVar26 = uVar27 & 0xfffffffffffffff0;
              auVar44 = ZEXT1664((undefined1  [16])0x0);
              uVar33 = 0;
              auVar45 = ZEXT1664((undefined1  [16])0x0);
              auVar46 = ZEXT1664((undefined1  [16])0x0);
              auVar47 = ZEXT1664((undefined1  [16])0x0);
              do {
                uVar15 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                            uVar33 + (long)ppppiVar6)),auVar50);
                uVar12 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                            (long)ppppiVar6 + uVar33 + 4)),auVar50);
                uVar13 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                            (long)ppppiVar6 + uVar33 + 8)),auVar50);
                uVar14 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                            (long)ppppiVar6 + uVar33 + 0xc)),auVar50
                                          );
                auVar19 = vpmovm2q_avx512vl(uVar15);
                auVar19 = vpsubq_avx2(auVar44._0_32_,auVar19);
                auVar44 = ZEXT3264(auVar19);
                auVar16 = vpmovm2q_avx512vl(uVar12);
                auVar16 = vpsubq_avx2(auVar45._0_32_,auVar16);
                auVar45 = ZEXT3264(auVar16);
                auVar17 = vpmovm2q_avx512vl(uVar13);
                auVar17 = vpsubq_avx2(auVar46._0_32_,auVar17);
                auVar46 = ZEXT3264(auVar17);
                auVar18 = vpmovm2q_avx512vl(uVar14);
                auVar18 = vpsubq_avx2(auVar47._0_32_,auVar18);
                auVar47 = ZEXT3264(auVar18);
                uVar33 = uVar33 + 0x10;
              } while (uVar26 != uVar33);
              auVar9._0_8_ = auVar18._0_8_ + auVar17._0_8_ + auVar16._0_8_ + auVar19._0_8_;
              auVar9._8_8_ = auVar18._8_8_ + auVar17._8_8_ + auVar16._8_8_ + auVar19._8_8_;
              auVar10._16_8_ = auVar18._16_8_ + auVar17._16_8_ + auVar16._16_8_ + auVar19._16_8_;
              auVar10._0_16_ = auVar9;
              auVar10._24_8_ = auVar18._24_8_ + auVar17._24_8_ + auVar16._24_8_ + auVar19._24_8_;
              auVar50 = vpaddq_avx(auVar9,auVar10._16_16_);
              auVar9 = vpshufd_avx(auVar50,0xee);
              auVar50 = vpaddq_avx(auVar50,auVar9);
              pppppppiVar29 = auVar50._0_8_;
              if (uVar27 == uVar26) goto LAB_00648af4;
              uVar33 = uVar26;
              if ((uVar27 & 0xc) == 0) goto LAB_00648adc;
            }
            uVar26 = uVar27 & 0xfffffffffffffffc;
            auVar44 = ZEXT864(pppppppiVar29);
            do {
              uVar15 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                          uVar33 + (long)ppppiVar6)),auVar49._0_16_)
              ;
              auVar19 = vpmovm2q_avx512vl(uVar15);
              auVar19 = vpsubq_avx2(auVar44._0_32_,auVar19);
              auVar44 = ZEXT3264(auVar19);
              uVar33 = uVar33 + 4;
            } while (uVar26 != uVar33);
            auVar50 = vpaddq_avx(auVar19._0_16_,auVar19._16_16_);
            auVar9 = vpshufd_avx(auVar50,0xee);
            auVar50 = vpaddq_avx(auVar50,auVar9);
            pppppppiVar29 = auVar50._0_8_;
            if (uVar27 == uVar26) goto LAB_00648af4;
          }
LAB_00648adc:
          pppppppiVar40 = (int *******)(uVar26 + (long)pppppppiVar40);
          do {
            pppppppiVar29 =
                 (int *******)
                 ((long)pppppppiVar29 +
                 (ulong)(*(char *)((long)ppppiVar6 + (long)pppppppiVar40) == '\n'));
            pppppppiVar40 = (int *******)((long)pppppppiVar40 + 1);
          } while (pppppppiVar32 != pppppppiVar40);
        }
LAB_00648af4:
        pppppppiVar40 = (int *******)((long)pppppppiVar29 + lVar35 + 1);
        pppppppiVar30 = pppppppiVar4;
        if ((int *******)0x2aaaaaaaaaaaaaa < pppppppiVar40) goto LAB_00649d3a;
        lVar35 = (long)pppppppiVar40 * 0x30;
        if (lVar35 == 0) {
          lVar24 = 8;
          pppppppiVar40 = (int *******)0x0;
          local_128 = unaff_R13;
        }
        else {
          local_128 = unaff_R13;
          lVar24 = __rustc[45371133cddedda4]::__rust_alloc(lVar35);
          if (lVar24 == 0) {
LAB_00649e88:
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar35);
          }
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
        }
        bStack_d0 = (byte)lVar24;
        uStack_cf = (undefined7)((ulong)lVar24 >> 8);
        pppppppiStack_c8 = (int *******)0x0;
        local_d8 = pppppppiVar40;
        if (pppppppiVar32 < (int *******)0x40) {
          pppppppiVar38 = (int *******)0x0;
          pppppppiVar29 = (int *******)0x0;
        }
        else {
          pppppppiVar29 = (int *******)0x0;
          pppppppiVar30 = (int *******)&DAT_00000040;
          pppppppiVar40 = (int *******)0x0;
          do {
            pppppppiVar38 = pppppppiVar30;
            if ((ulong)((long)pppppppiVar32 - (long)pppppppiVar40) < 0x40) goto LAB_00649d6e;
            uVar27 = vpcmpeqb_avx512bw(auVar43,*(undefined1 (*) [64])
                                                ((long)ppppiVar6 + (long)pppppppiVar40));
            if (uVar27 != 0) {
              do {
                uVar26 = 0;
                for (uVar33 = uVar27; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x8000000000000000)
                {
                  uVar26 = uVar26 + 1;
                }
                pppppppiVar30 = (int *******)(uVar26 | (ulong)pppppppiVar40);
                if (pppppppiVar29 < pppppppiVar30) {
                  if (pppppppiVar32 < pppppppiVar30) goto LAB_00649d42;
                  core::parse_links::_closure_0_
                            (&local_d8,(undefined1 *)((long)pppppppiVar29 + (long)ppppiVar6));
                  auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                }
                pppppppiVar29 = (int *******)((long)pppppppiVar30 + 1);
                uVar27 = uVar27 - 1 & uVar27;
              } while (uVar27 != 0);
            }
            pppppppiVar30 = pppppppiVar38 + 8;
            pppppppiVar40 = pppppppiVar38;
          } while (pppppppiVar38 + 8 <= pppppppiVar32);
        }
        pppppppiVar30 = pppppppiVar29;
        if (pppppppiVar38 < pppppppiVar32) {
          do {
            pppppppiVar40 = (int *******)((long)pppppppiVar38 + 1);
            if (*(char *)((long)ppppiVar6 + (long)pppppppiVar38) == '\n') {
              pppppppiVar29 = pppppppiVar40;
              if (pppppppiVar30 <= pppppppiVar38 && (long)pppppppiVar38 - (long)pppppppiVar30 != 0)
              {
                core::parse_links::_closure_0_
                          (&local_d8,(undefined1 *)((long)pppppppiVar30 + (long)ppppiVar6),
                           (long)pppppppiVar38 - (long)pppppppiVar30);
                auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
              }
            }
            else {
              pppppppiVar29 = pppppppiVar30;
            }
            pppppppiVar30 = pppppppiVar29;
            pppppppiVar38 = pppppppiVar40;
          } while (pppppppiVar32 != pppppppiVar40);
        }
        if (pppppppiVar29 <= pppppppiVar32 && (long)pppppppiVar32 - (long)pppppppiVar29 != 0) {
          core::parse_links::_closure_0_
                    (&local_d8,(undefined1 *)((long)ppppiVar6 + (long)pppppppiVar29),
                     (long)pppppppiVar32 - (long)pppppppiVar29);
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
        }
        lStack_140 = CONCAT71(uStack_cf,bStack_d0);
        local_138 = pppppppiStack_c8;
        local_148 = local_d8;
        ppppppiVar7 = pppppppiVar4[2];
        if (ppppppiVar7[2] <= pppppiVar34) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (pppppiVar34,ppppppiVar7[2],&PTR_s_src_generic_mod_rs_00210f58);
        }
        ppppppiVar8 = (int ******)(ppppppiVar7[1] + (long)pppppiVar34 * 4);
        pppppiVar36 = ppppppiVar7[1] + (long)pppppiVar34 * 4;
        LOCK();
        bVar42 = *(int *)pppppiVar36 == 0;
        if (bVar42) {
          *(int *)pppppiVar36 = 1;
        }
        UNLOCK();
        if (bVar42) {
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) == 0) goto LAB_00648c3d;
LAB_00649ba9:
          bVar22 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          bVar22 = bVar22 ^ 1;
          cVar21 = *(char *)((long)ppppppiVar8 + 4);
        }
        else {
          <std[c60ef17cbf7de79f]::sys::sync::mutex::futex::Mutex>::lock_contended(ppppppiVar8);
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) != 0) goto LAB_00649ba9;
LAB_00648c3d:
          bVar22 = 0;
          cVar21 = *(char *)((long)ppppppiVar8 + 4);
        }
        if (cVar21 != '\0') {
          local_d8 = (int *******)ppppppiVar8;
          bStack_d0 = bVar22;
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::result::unwrap_failed
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_d8,
                     &
                     PTR_<std[c60ef17cbf7de79f]::sync::poison::PoisonError<std[c60ef17cbf7de79f]::sync::poison::mutex::MutexGuard<[i64_4usize]>>>_00212010
                     ,&PTR_s_src_generic_mod_rs_00210f70);
        }
        if (ppppppiVar8[1] != (int *****)0x0) {
          pppppiVar36 = ppppppiVar8[2];
          if (((sys::A_BASE_0 == (int *****)0x0) || (pppppiVar36 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pppppiVar36)) {
            free(pppppiVar36);
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          }
          else {
            uVar27 = (long)ppppppiVar8[1] * 0x30 - 1;
            lVar24 = LZCOUNT(uVar27);
            lVar35 = 0x40 - lVar24;
            if (0xffff < uVar27) {
              cVar21 = sys::big_put(pppppiVar36,lVar35);
              auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
              if (cVar21 != '\0') goto LAB_00648e5e;
            }
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *pppppiVar36 = *(int *****)(in_FS_OFFSET + lVar35 * 8 + -0x3c8);
            *(int ******)(in_FS_OFFSET + lVar35 * 8 + -0x3c8) = pppppiVar36;
          }
        }
LAB_00648e5e:
        ppppppiVar8[3] = (int *****)local_138;
        auVar20._8_8_ = lStack_140;
        auVar20._0_8_ = local_148;
        *(undefined1 (*) [16])(ppppppiVar8 + 1) = auVar20;
        if ((bVar22 == 0) &&
           ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7fffffffffffffff)
            != 0)) {
          cVar21 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          if (cVar21 == '\0') {
            *(undefined1 *)((long)ppppppiVar8 + 4) = 1;
          }
        }
        LOCK();
        iVar3 = *(int *)ppppppiVar8;
        *(int *)ppppppiVar8 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          syscall(0xca,ppppppiVar8,0x81,1);
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
        }
        ppppppiVar8 = pppppppiVar4[3];
        LOCK();
        pppppiVar36 = *ppppppiVar8;
        *ppppppiVar8 = (int *****)((long)*ppppppiVar8 + 1);
        UNLOCK();
        if ((int *****)((long)pppppiVar36 + 1U) == *ppppppiVar5) {
          pppppiVar36 = ppppppiVar7[2];
          local_100 = (long)pppppiVar36 * 0x18;
          if (pppppiVar36 == (int *****)0x0) {
            local_170 = (int *****)&DAT_00000008;
            core::build_links(&local_d8,8,0);
          }
          else {
            pppppiVar23 = ppppppiVar7[1];
            local_170 = (int *****)__rustc[45371133cddedda4]::__rust_alloc(local_100,8);
            if (local_170 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,local_100);
            }
            pppppiVar31 = (int *****)0x0;
            pppppiVar28 = pppppiVar23;
            pppppiVar39 = local_170;
            do {
              LOCK();
              iVar3 = *(int *)pppppiVar28;
              if (iVar3 == 0) {
                *(int *)pppppiVar28 = 1;
              }
              UNLOCK();
              if (iVar3 == 0) {
                if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
                    0x7fffffffffffffff) == 0) goto LAB_00648f39;
LAB_00648fe9:
                cVar21 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
                pppppppiStack_c8 = (int *******)pppppiVar28[3];
                local_d8 = (int *******)pppppiVar28[1];
                bStack_d0 = (byte)pppppiVar28[2];
                uStack_cf = (undefined7)((ulong)pppppiVar28[2] >> 8);
                pppppiVar28[1] = (int ****)0x0;
                pppppiVar28[2] = (int ****)0x8;
                pppppiVar28[3] = (int ****)0x0;
                if (cVar21 != '\0') {
                  pppppiVar41 = pppppiVar23 + (long)pppppiVar31 * 4;
                  goto joined_r0x00648f83;
                }
              }
              else {
                <std[c60ef17cbf7de79f]::sys::sync::mutex::futex::Mutex>::lock_contended(pppppiVar28)
                ;
                if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
                    0x7fffffffffffffff) != 0) goto LAB_00648fe9;
LAB_00648f39:
                pppppppiStack_c8 = (int *******)pppppiVar28[3];
                local_d8 = (int *******)pppppiVar28[1];
                bStack_d0 = (byte)pppppiVar28[2];
                uStack_cf = (undefined7)((ulong)pppppiVar28[2] >> 8);
                pppppiVar28[1] = (int ****)0x0;
                pppppiVar28[2] = (int ****)0x8;
                pppppiVar28[3] = (int ****)0x0;
                pppppiVar41 = pppppiVar28;
joined_r0x00648f83:
                if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
                    0x7fffffffffffffff) != 0) {
                  cVar21 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
                  if (cVar21 == '\0') {
                    *(undefined1 *)((long)pppppiVar41 + 4) = 1;
                  }
                }
              }
              LOCK();
              iVar3 = *(int *)pppppiVar28;
              *(int *)pppppiVar28 = 0;
              UNLOCK();
              if (iVar3 == 2) {
                syscall(0xca,pppppiVar28,0x81,1);
              }
              pppppiVar39[2] = (int ****)pppppppiStack_c8;
              *pppppiVar39 = (int ****)local_d8;
              pppppiVar39[1] = (int ****)CONCAT71(uStack_cf,bStack_d0);
              pppppiVar31 = (int *****)((long)pppppiVar31 + 1);
              pppppiVar39 = pppppiVar39 + 3;
              pppppiVar28 = pppppiVar28 + 4;
            } while (pppppiVar36 != pppppiVar31);
            core::build_links(&local_d8,local_170,pppppiVar36);
          }
          ppppppiVar5 = pppppppiVar4[4];
          LOCK();
          iVar3 = *(int *)ppppppiVar5;
          if (iVar3 == 0) {
            *(int *)ppppppiVar5 = 1;
          }
          UNLOCK();
          if (iVar3 == 0) {
            if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
                0x7fffffffffffffff) == 0) goto LAB_0064920e;
LAB_00649c75:
            local_60 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
            local_60 = local_60 ^ 1;
            cVar21 = *(char *)((long)ppppppiVar5 + 4);
          }
          else {
            <std[c60ef17cbf7de79f]::sys::sync::mutex::futex::Mutex>::lock_contended(ppppppiVar5);
            if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
                0x7fffffffffffffff) != 0) goto LAB_00649c75;
LAB_0064920e:
            local_60 = 0;
            cVar21 = *(char *)((long)ppppppiVar5 + 4);
          }
          if (cVar21 != '\0') {
            local_68 = ppppppiVar5;
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::result::unwrap_failed
                      ("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,
                       &
                       PTR_<std[c60ef17cbf7de79f]::sync::poison::PoisonError<std[c60ef17cbf7de79f]::sync::poison::mutex::MutexGuard<[i64_4usize]>>>_00211fd0
                       ,&PTR_s_src_generic_mod_rs_00210f88);
          }
          if (ppppppiVar5[1] != (int *****)0xffffffffffffffff) {
            core[62e902411887be45]::ptr::drop_glue::
            <pipeline[509596c7b52975b2]::generic::core::LinkMap>
                      ((undefined1 (*) [32])(ppppppiVar5 + 1));
          }
          ppppppiVar5[0xd] = local_78;
          auVar19[8] = bStack_d0;
          auVar19._0_8_ = local_d8;
          auVar19._9_7_ = uStack_cf;
          auVar19._16_8_ = pppppppiStack_c8;
          auVar19._24_8_ = pppppppiStack_c0;
          *(undefined1 (*) [32])(ppppppiVar5 + 9) = local_98;
          *(undefined1 (*) [32])(ppppppiVar5 + 5) = local_b8;
          *(undefined1 (*) [32])(ppppppiVar5 + 1) = auVar19;
          if (((local_60 == 0) &&
              ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
               0x7fffffffffffffff) != 0)) &&
             (cVar21 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path(),
             cVar21 == '\0')) {
            *(undefined1 *)((long)ppppppiVar5 + 4) = 1;
          }
          LOCK();
          iVar3 = *(int *)ppppppiVar5;
          *(int *)ppppppiVar5 = 0;
          UNLOCK();
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          auVar48._4_4_ = DAT_002064e8;
          auVar48._0_4_ = DAT_002064e8;
          auVar48._8_4_ = DAT_002064e8;
          auVar48._12_4_ = DAT_002064e8;
          auVar51._4_4_ = DAT_002064e8;
          auVar51._0_4_ = DAT_002064e8;
          auVar51._8_4_ = DAT_002064e8;
          auVar51._12_4_ = DAT_002064e8;
          if (iVar3 == 2) {
            syscall(0xca,ppppppiVar5,0x81,1);
            auVar51._4_4_ = DAT_002064e8;
            auVar51._0_4_ = DAT_002064e8;
            auVar51._8_4_ = DAT_002064e8;
            auVar51._12_4_ = DAT_002064e8;
            auVar48._4_4_ = DAT_002064e8;
            auVar48._0_4_ = DAT_002064e8;
            auVar48._8_4_ = DAT_002064e8;
            auVar48._12_4_ = DAT_002064e8;
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          }
          auVar49 = ZEXT1664(auVar48);
          auVar52 = ZEXT1664(auVar51);
          if (pppppiVar36 != (int *****)0x0) {
            pppppiVar23 = local_170 + 1;
            do {
              if (pppppiVar23[-1] != (int ****)0x0) {
                pppppiVar28 = (int *****)*pppppiVar23;
                if (((sys::A_BASE_0 == (int *****)0x0) || (pppppiVar28 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pppppiVar28)) {
                  free(pppppiVar28);
                  auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                }
                else {
                  uVar27 = (long)pppppiVar23[-1] * 0x30 - 1;
                  lVar35 = LZCOUNT(uVar27);
                  lVar24 = 0x40 - lVar35;
                  if (0xffff < uVar27) {
                    cVar21 = sys::big_put(pppppiVar28,lVar24);
                    auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                    if (cVar21 != '\0') goto LAB_00649304;
                  }
                  if (lVar35 == 0) goto LAB_00649ea5;
                  *pppppiVar28 = *(int *****)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
                  *(int ******)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = pppppiVar28;
                }
              }
LAB_00649304:
              pppppiVar23 = pppppiVar23 + 3;
              pppppiVar36 = (int *****)((long)pppppiVar36 + -1);
            } while (pppppiVar36 != (int *****)0x0);
            if (((sys::A_BASE_0 == (int *****)0x0) || (local_170 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= local_170)) {
              free(local_170);
              auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
            }
            else {
              lVar35 = LZCOUNT(local_100 - 1U);
              lVar24 = 0x40 - lVar35;
              if (0xffff < local_100 - 1U) {
                cVar21 = sys::big_put(local_170,lVar24);
                auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                if (cVar21 != '\0') goto LAB_00649489;
              }
              if (lVar35 == 0) {
LAB_00649ea5:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar24,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *local_170 = *(int *****)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
              *(int ******)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = local_170;
            }
          }
        }
LAB_00649489:
        lVar35 = local_58;
        param_1 = local_120;
        if (local_40 == local_118) {
LAB_00649b0b:
          lVar24 = local_40;
          param_1 = local_120;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::
          grow_one(&local_118);
          auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                       CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8))));
          auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          local_40 = lVar24;
        }
      }
      else {
        pppppiVar23 = (int *****)((long)pppppiVar34 - ((long)pppppiVar36 + (long)*pppppppiVar4[5]));
        if (pppppiVar34 < (int *****)((long)pppppiVar36 + (long)*pppppppiVar4[5])) {
          pppppppiVar29 = (int *******)pppppppiVar4[6][2];
          if (pppppppiVar29 <= pppppppiVar32) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (pppppppiVar32,pppppppiVar29,&PTR_s_src_generic_mod_rs_00210f28);
          }
          pppppiVar36 = pppppppiVar4[6][1];
          ppppiVar6 = pppppiVar36[(long)pppppppiVar32 * 2];
          pppppppiVar32 = (int *******)pppppiVar36[(long)pppppppiVar32 * 2 + 1];
          local_d8 = (int *******)pppppppiVar4[7];
          local_148 = (int *******)&DAT_00000100;
          local_e0 = 0;
          bStack_d0 = (byte)&local_f0;
          uStack_cf = (undefined7)((ulong)&local_f0 >> 8);
          pppppppiStack_c8 = (int *******)&local_148;
          if (pppppppiVar32 < (int *******)0x40) {
            pppppppiVar37 = (int *******)0x0;
            pppppppiVar30 = (int *******)0x0;
          }
          else {
            pppppppiVar30 = (int *******)0x0;
            pppppppiVar40 = (int *******)&DAT_00000040;
            pppppppiVar38 = (int *******)0x0;
            do {
              pppppppiVar37 = pppppppiVar40;
              if ((ulong)((long)pppppppiVar32 - (long)pppppppiVar38) < 0x40) goto LAB_00649d6e;
              uVar27 = vpcmpeqb_avx512bw(auVar43,*(undefined1 (*) [64])
                                                  ((long)ppppiVar6 + (long)pppppppiVar38));
              if (uVar27 != 0) {
                do {
                  uVar26 = 0;
                  for (uVar33 = uVar27; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x8000000000000000
                      ) {
                    uVar26 = uVar26 + 1;
                  }
                  pppppppiVar40 = (int *******)(uVar26 | (ulong)pppppppiVar38);
                  if (pppppppiVar30 < pppppppiVar40) {
                    if (pppppppiVar32 < pppppppiVar40) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::slice::index::slice_index_fail
                                (pppppppiVar30,pppppppiVar40,pppppppiVar32,
                                 &PTR_s_src_generic_parse_rs_0020ff98);
                    }
                    core::parse_events::_closure_0_
                              (&local_d8,(undefined1 *)((long)pppppppiVar30 + (long)ppppiVar6));
                    auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                  }
                  pppppppiVar30 = (int *******)((long)pppppppiVar40 + 1);
                  uVar27 = uVar27 - 1 & uVar27;
                } while (uVar27 != 0);
              }
              pppppppiVar40 = pppppppiVar37 + 8;
              pppppppiVar29 = pppppppiVar30;
              pppppppiVar38 = pppppppiVar37;
            } while (pppppppiVar37 + 8 <= pppppppiVar32);
          }
          pppppppiVar40 = pppppppiVar30;
          if (pppppppiVar37 < pppppppiVar32) {
            do {
              pppppppiVar38 = (int *******)((long)pppppppiVar37 + 1);
              if (*(char *)((long)ppppiVar6 + (long)pppppppiVar37) == '\n') {
                pppppppiVar30 = pppppppiVar38;
                if (pppppppiVar40 <= pppppppiVar37 && (long)pppppppiVar37 - (long)pppppppiVar40 != 0
                   ) {
                  pppppppiVar29 = (int *******)((long)pppppppiVar40 + (long)ppppiVar6);
                  core::parse_events::_closure_0_
                            (&local_d8,pppppppiVar29,(long)pppppppiVar37 - (long)pppppppiVar40);
                  auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                }
              }
              else {
                pppppppiVar30 = pppppppiVar40;
              }
              pppppppiVar40 = pppppppiVar30;
              pppppppiVar37 = pppppppiVar38;
            } while (pppppppiVar32 != pppppppiVar38);
          }
          if (pppppppiVar30 <= pppppppiVar32 && (long)pppppppiVar32 - (long)pppppppiVar30 != 0) {
            pppppppiVar29 = (int *******)((long)ppppiVar6 + (long)pppppppiVar30);
            core::parse_events::_closure_0_
                      (&local_d8,pppppppiVar29,(long)pppppppiVar32 - (long)pppppppiVar30);
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          }
          lVar35 = local_e0;
          pppppppiVar37 = pppppppiStack_e8;
          pppppppiVar38 = local_148;
          pppppppiVar40 = (int *******)((long)local_148 + 1);
          pppppppiVar32 = (int *******)((long)local_148 * 4 + 4);
          if ((ulong)pppppppiVar40 >> 0x3e != 0 || (int *******)0x7ffffffffffffffc < pppppppiVar32)
          goto LAB_00649d3a;
          if (pppppppiVar32 == (int *******)0x0) {
            lVar24 = 4;
            local_130 = (int *******)0x0;
          }
          else {
            pppppppiVar29 = (int *******)&DAT_00000004;
            lVar24 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(pppppppiVar32);
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,pppppppiVar32);
            }
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            local_130 = pppppppiVar40;
          }
          local_128 = pppppppiVar40;
          local_f8 = lVar24;
          if (lVar35 == 0) {
            if (pppppppiVar38 != (int *******)0x0) goto LAB_00649129;
            bVar42 = true;
            local_150 = (int *******)&DAT_00000008;
          }
          else {
            lVar25 = 0;
            do {
              uVar27 = (ulong)*(uint *)((long)pppppppiVar37 + lVar25 + 0x20);
              pppppppiVar32 = (int *******)(uVar27 + 1);
              if (pppppppiVar40 <= pppppppiVar32) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppppppiVar32,pppppppiVar40,&PTR_s_src_generic_core_rs_002122f8);
              }
              piVar2 = (int *)(lVar24 + 4 + uVar27 * 4);
              *piVar2 = *piVar2 + 1;
              lVar25 = lVar25 + 0x28;
            } while (lVar35 * 0x28 != lVar25);
LAB_00649129:
            pppppppiVar32 = pppppppiVar38;
            if (pppppppiVar40 == (int *******)0x0) {
              pppppppiVar32 = (int *******)0x0;
            }
            pppppppiVar30 = (int *******)0x0;
            do {
              if (pppppppiVar40 == pppppppiVar30) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppppppiVar40,pppppppiVar40,&PTR_s_src_generic_core_rs_00212340);
              }
              pppppppiVar1 = (int *******)((long)pppppppiVar30 + 1);
              if (pppppppiVar32 == pppppppiVar30) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppppppiVar1,pppppppiVar40,&PTR_s_src_generic_core_rs_00212358);
              }
              piVar2 = (int *)(lVar24 + (long)pppppppiVar1 * 4);
              *piVar2 = *piVar2 + *(int *)(lVar24 + (long)pppppppiVar30 * 4);
              pppppppiVar30 = pppppppiVar1;
            } while (pppppppiVar38 != pppppppiVar1);
            if (lVar35 == 0) {
              local_150 = (int *******)&DAT_00000008;
              pppppppiVar32 = (int *******)0x0;
            }
            else {
              pppppppiVar32 = (int *******)(lVar35 << 5);
              pppppppiVar29 = (int *******)&DAT_00000008;
              local_150 = (int *******)__rustc[45371133cddedda4]::__rust_alloc(pppppppiVar32);
              if (local_150 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,pppppppiVar32);
              }
              auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
              auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
            }
            if (pppppppiVar38 == (int *******)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::slice::index::slice_index_fail
                        (0,0xffffffffffffffff,0,&PTR_s_src_generic_core_rs_00212328);
            }
            bVar42 = false;
          }
          uVar27 = (long)pppppppiVar38 * 4;
          pppppppiVar30 = pppppppiVar37;
          if ((int *******)0x3fffffffffffffff < pppppppiVar38 || 0x7ffffffffffffffc < uVar27) {
LAB_00649d3a:
            alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_00649d42:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (pppppppiVar29,pppppppiVar30,pppppppiVar32,
                       &PTR_s_src_generic_parse_rs_0020ff98);
          }
          if (uVar27 == 0) {
            pppppiVar36 = (int *****)&DAT_00000004;
            pppppppiVar32 = (int *******)0x0;
          }
          else {
            pppppiVar36 = (int *****)__rustc[45371133cddedda4]::__rust_alloc(uVar27,4);
            if (pppppiVar36 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar27);
            }
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            pppppppiVar32 = pppppppiVar38;
          }
          if (!bVar42) {
            (*(code *)PTR_memcpy_00841de0)(pppppiVar36,local_f8,uVar27);
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          }
          if (lVar35 != 0) {
            lVar24 = 0;
            do {
              pppppppiVar30 = (int *******)(ulong)*(uint *)((long)pppppppiVar37 + lVar24 + 0x20);
              if (pppppppiVar38 <= pppppppiVar30) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppppppiVar30,pppppppiVar38,&PTR_s_src_generic_core_rs_00212310);
              }
              *(undefined1 (*) [32])
               (local_150 + (ulong)*(uint *)((long)pppppiVar36 + (long)pppppppiVar30 * 4) * 4) =
                   *(undefined1 (*) [32])((long)pppppppiVar37 + lVar24);
              piVar2 = (int *)((long)pppppiVar36 + (long)pppppppiVar30 * 4);
              *piVar2 = *piVar2 + 1;
              lVar24 = lVar24 + 0x28;
            } while (lVar35 * 0x28 != lVar24);
          }
          if (pppppppiVar32 != (int *******)0x0) {
            if (((int *****)((long)sys::A_BASE_0 + -1) < pppppiVar36) &&
               (pppppiVar36 < sys::A_END_0)) {
              uVar27 = (long)pppppppiVar32 << 2;
              if (uVar27 < 0x11) {
                uVar27 = 0x10;
              }
              lVar25 = LZCOUNT(uVar27 - 1);
              lVar24 = 0x40 - lVar25;
              if (0xffff < uVar27 - 1) {
                cVar21 = sys::big_put(pppppiVar36,lVar24);
                auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                             CONCAT48(DAT_002064e8,
                                                      CONCAT44(DAT_002064e8,DAT_002064e8))));
                auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                if (cVar21 != '\0') goto LAB_00649ae1;
              }
              if (lVar25 == 0) goto LAB_00649ea5;
              *pppppiVar36 = *(int *****)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
              *(int ******)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = pppppiVar36;
            }
            else {
              free(pppppiVar36);
              auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                           CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)
                                                   )));
              auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
            }
          }
LAB_00649ae1:
          param_1 = local_120;
          unaff_R14 = lVar35;
          if (local_40 == local_118) goto LAB_00649b0b;
        }
        else {
          pppppiVar36 = pppppppiVar4[8][2];
          if (pppppiVar36 <= pppppiVar23) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (pppppiVar23,pppppiVar36,&PTR_s_src_generic_mod_rs_00210f10);
          }
          pppppiVar36 = pppppppiVar4[8][1];
          ppppiVar6 = pppppiVar36[(long)pppppiVar23 * 2];
          pppppppiVar32 = (int *******)pppppiVar36[(long)pppppiVar23 * 2 + 1];
          local_68 = (int ******)(*pppppppiVar4[9] + -75600000);
          local_38 = *pppppppiVar4[10];
          pppppppiVar30 = (int *******)pppppppiVar4[0xb];
          if (pppppppiVar32 < (int *******)0x40) {
            pppppppiVar40 = (int *******)0x0;
            lVar35 = 0;
          }
          else {
            if ((ulong)pppppppiVar32 >> 6 <= (ulong)(pppppppiVar32 + -8) >> 6) goto LAB_00649d6e;
            pppppppiVar40 = (int *******)&DAT_00000040;
            lVar35 = 0;
            do {
              uVar15 = vpcmpeqb_avx512bw(auVar43,*(undefined1 (*) [64])
                                                  ((long)(ppppiVar6 + -8) + (long)pppppppiVar40));
              lVar35 = lVar35 + POPCOUNT(uVar15);
              pppppppiVar40 = pppppppiVar40 + 8;
            } while (pppppppiVar40 <= pppppppiVar32);
            pppppppiVar40 = (int *******)(((ulong)(pppppppiVar32 + -8) & 0xffffffffffffffc0) + 0x40)
            ;
            if (pppppppiVar32 < pppppppiVar40) goto LAB_00649d85;
          }
          uVar27 = (long)pppppppiVar32 - (long)pppppppiVar40;
          if (uVar27 == 0) {
            pppppppiVar29 = (int *******)0x0;
          }
          else {
            if (uVar27 < 4) {
              uVar26 = 0;
              pppppppiVar29 = (int *******)0x0;
            }
            else {
              if (uVar27 < 0x10) {
                pppppppiVar29 = (int *******)0x0;
                uVar33 = 0;
              }
              else {
                uVar26 = uVar27 & 0xfffffffffffffff0;
                auVar44 = ZEXT1664((undefined1  [16])0x0);
                uVar33 = 0;
                auVar45 = ZEXT1664((undefined1  [16])0x0);
                auVar46 = ZEXT1664((undefined1  [16])0x0);
                auVar47 = ZEXT1664((undefined1  [16])0x0);
                do {
                  uVar15 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                              uVar33 + (long)ppppiVar6)),auVar50);
                  uVar12 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                              (long)ppppiVar6 + uVar33 + 4)),auVar50
                                            );
                  uVar13 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                              (long)ppppiVar6 + uVar33 + 8)),auVar50
                                            );
                  uVar14 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                              (long)ppppiVar6 + uVar33 + 0xc)),
                                             auVar50);
                  auVar19 = vpmovm2q_avx512vl(uVar15);
                  auVar19 = vpsubq_avx2(auVar44._0_32_,auVar19);
                  auVar44 = ZEXT3264(auVar19);
                  auVar16 = vpmovm2q_avx512vl(uVar12);
                  auVar16 = vpsubq_avx2(auVar45._0_32_,auVar16);
                  auVar45 = ZEXT3264(auVar16);
                  auVar17 = vpmovm2q_avx512vl(uVar13);
                  auVar17 = vpsubq_avx2(auVar46._0_32_,auVar17);
                  auVar46 = ZEXT3264(auVar17);
                  auVar18 = vpmovm2q_avx512vl(uVar14);
                  auVar18 = vpsubq_avx2(auVar47._0_32_,auVar18);
                  auVar47 = ZEXT3264(auVar18);
                  uVar33 = uVar33 + 0x10;
                } while (uVar26 != uVar33);
                auVar50._0_8_ = auVar18._0_8_ + auVar17._0_8_ + auVar16._0_8_ + auVar19._0_8_;
                auVar50._8_8_ = auVar18._8_8_ + auVar17._8_8_ + auVar16._8_8_ + auVar19._8_8_;
                auVar11._16_8_ = auVar18._16_8_ + auVar17._16_8_ + auVar16._16_8_ + auVar19._16_8_;
                auVar11._0_16_ = auVar50;
                auVar11._24_8_ = auVar18._24_8_ + auVar17._24_8_ + auVar16._24_8_ + auVar19._24_8_;
                auVar50 = vpaddq_avx(auVar50,auVar11._16_16_);
                auVar9 = vpshufd_avx(auVar50,0xee);
                auVar50 = vpaddq_avx(auVar50,auVar9);
                pppppppiVar29 = auVar50._0_8_;
                if (uVar27 == uVar26) goto LAB_006497b4;
                uVar33 = uVar26;
                if ((uVar27 & 0xc) == 0) goto LAB_0064979c;
              }
              uVar26 = uVar27 & 0xfffffffffffffffc;
              auVar44 = ZEXT864(pppppppiVar29);
              do {
                uVar15 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)((long)pppppppiVar40 +
                                                            uVar33 + (long)ppppiVar6)),
                                           auVar49._0_16_);
                auVar19 = vpmovm2q_avx512vl(uVar15);
                auVar19 = vpsubq_avx2(auVar44._0_32_,auVar19);
                auVar44 = ZEXT3264(auVar19);
                uVar33 = uVar33 + 4;
              } while (uVar26 != uVar33);
              auVar50 = vpaddq_avx(auVar19._0_16_,auVar19._16_16_);
              auVar9 = vpshufd_avx(auVar50,0xee);
              auVar50 = vpaddq_avx(auVar50,auVar9);
              pppppppiVar29 = auVar50._0_8_;
              if (uVar27 == uVar26) goto LAB_006497b4;
            }
LAB_0064979c:
            pppppppiVar40 = (int *******)(uVar26 + (long)pppppppiVar40);
            do {
              pppppppiVar29 =
                   (int *******)
                   ((long)pppppppiVar29 +
                   (ulong)(*(char *)((long)ppppiVar6 + (long)pppppppiVar40) == '\n'));
              pppppppiVar40 = (int *******)((long)pppppppiVar40 + 1);
            } while (pppppppiVar32 != pppppppiVar40);
          }
LAB_006497b4:
          pppppppiVar40 = (int *******)((long)pppppppiVar29 + lVar35 + 1);
          if ((int *******)0x555555555555555 < pppppppiVar40) goto LAB_00649d3a;
          lVar35 = ((long)(lVar35 + (long)pppppppiVar29) * 8 + 8) * 3;
          if (lVar35 == 0) {
            lVar24 = 8;
            pppppppiVar40 = (int *******)0x0;
            local_128 = unaff_R13;
          }
          else {
            local_128 = unaff_R13;
            lVar24 = __rustc[45371133cddedda4]::__rust_alloc(lVar35);
            if (lVar24 == 0) goto LAB_00649e88;
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
          }
          local_138 = (int *******)0x0;
          local_d8 = &local_68;
          bStack_d0 = (byte)&local_38;
          uStack_cf = (undefined7)((ulong)&local_38 >> 8);
          pppppppiStack_c0 = (int *******)&local_148;
          local_148 = pppppppiVar40;
          lStack_140 = lVar24;
          pppppppiStack_c8 = pppppppiVar30;
          if (pppppppiVar32 < (int *******)0x40) {
            pppppppiVar38 = (int *******)0x0;
            pppppppiVar29 = (int *******)0x0;
          }
          else {
            pppppppiVar29 = (int *******)0x0;
            pppppppiVar30 = (int *******)&DAT_00000040;
            pppppppiVar40 = (int *******)0x0;
            do {
              pppppppiVar38 = pppppppiVar30;
              if ((ulong)((long)pppppppiVar32 - (long)pppppppiVar40) < 0x40) goto LAB_00649d6e;
              uVar27 = vpcmpeqb_avx512bw(auVar43,*(undefined1 (*) [64])
                                                  ((long)ppppiVar6 + (long)pppppppiVar40));
              if (uVar27 != 0) {
                do {
                  uVar26 = 0;
                  for (uVar33 = uVar27; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x8000000000000000
                      ) {
                    uVar26 = uVar26 + 1;
                  }
                  pppppppiVar30 = (int *******)(uVar26 | (ulong)pppppppiVar40);
                  if (pppppppiVar29 < pppppppiVar30) {
                    if (pppppppiVar32 < pppppppiVar30) goto LAB_00649d42;
                    core::parse_clicks::_closure_0_
                              (&local_d8,(undefined1 *)((long)pppppppiVar29 + (long)ppppiVar6));
                    auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                                 CONCAT48(DAT_002064e8,
                                                          CONCAT44(DAT_002064e8,DAT_002064e8))));
                    auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                  }
                  pppppppiVar29 = (int *******)((long)pppppppiVar30 + 1);
                  uVar27 = uVar27 - 1 & uVar27;
                } while (uVar27 != 0);
              }
              pppppppiVar30 = pppppppiVar38 + 8;
              pppppppiVar40 = pppppppiVar38;
            } while (pppppppiVar38 + 8 <= pppppppiVar32);
          }
          pppppppiVar30 = pppppppiVar29;
          if (pppppppiVar38 < pppppppiVar32) {
            do {
              pppppppiVar40 = (int *******)((long)pppppppiVar38 + 1);
              if (*(char *)((long)ppppiVar6 + (long)pppppppiVar38) == '\n') {
                pppppppiVar29 = pppppppiVar40;
                if (pppppppiVar30 <= pppppppiVar38 && (long)pppppppiVar38 - (long)pppppppiVar30 != 0
                   ) {
                  core::parse_clicks::_closure_0_
                            (&local_d8,(undefined1 *)((long)pppppppiVar30 + (long)ppppiVar6),
                             (long)pppppppiVar38 - (long)pppppppiVar30);
                  auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                               CONCAT48(DAT_002064e8,
                                                        CONCAT44(DAT_002064e8,DAT_002064e8))));
                  auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                }
              }
              else {
                pppppppiVar29 = pppppppiVar30;
              }
              pppppppiVar30 = pppppppiVar29;
              pppppppiVar38 = pppppppiVar40;
            } while (pppppppiVar32 != pppppppiVar40);
          }
          if (pppppppiVar29 <= pppppppiVar32 && (long)pppppppiVar32 - (long)pppppppiVar29 != 0) {
            core::parse_clicks::_closure_0_
                      (&local_d8,(undefined1 *)((long)ppppiVar6 + (long)pppppppiVar29),
                       (long)pppppppiVar32 - (long)pppppppiVar29);
            auVar52 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar49 = ZEXT1664(CONCAT412(DAT_002064e8,
                                         CONCAT48(DAT_002064e8,CONCAT44(DAT_002064e8,DAT_002064e8)))
                              );
            auVar43 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
          }
          local_150 = local_148;
          local_130 = local_138;
          lVar35 = -0x7ffffffffffffffe;
          param_1 = local_120;
          unaff_R14 = lStack_140;
          if (local_40 == local_118) goto LAB_00649b0b;
        }
      }
      lVar24 = local_40 * 0x38;
      *(int ******)(local_110 + lVar24) = pppppiVar34;
      *(long *)(local_110 + 8 + lVar24) = lVar35;
      *(int ********)(local_110 + 0x10 + lVar24) = local_150;
      *(long *)(local_110 + 0x18 + lVar24) = unaff_R14;
      *(int ********)(local_110 + 0x20 + lVar24) = local_130;
      *(long *)(local_110 + 0x28 + lVar24) = local_f8;
      *(int ********)(local_110 + 0x30 + lVar24) = local_128;
      local_108 = local_40 + 1;
      LOCK();
      pppppiVar34 = (int *****)*local_48;
      *local_48 = *local_48 + 1;
      UNLOCK();
      unaff_R13 = local_128;
    } while (pppppiVar34 < local_50);
  }
  param_1[2] = local_108;
  *param_1 = local_118;
  param_1[1] = local_110;
  param_1[3] = local_f0;
  param_1[4] = (long)pppppppiStack_e8;
  param_1[5] = local_e0;
  return;
}


// ==== pipeline::generic::util::par_run::<pipeline::generic::P2Bufs, pipeline::generic::P2, <pipeline::generic::P2Bufs as core::default::Default>::default, pipeline::generic::run::{closure#10}>::{closure#0} @ 00649f20 (6945 bytes)

/* pipeline[509596c7b52975b2]::generic::util::par_run::<pipeline[509596c7b52975b2]::generic::P2Bufs,
   pipeline[509596c7b52975b2]::generic::P2, <pipeline[509596c7b52975b2]::generic::P2Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#10}>::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#10}>
::_closure_0_(long *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
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
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 *puVar58;
  int iVar59;
  int iVar60;
  undefined8 *puVar61;
  long lVar62;
  ulong uVar63;
  ulong uVar64;
  char *pcVar65;
  long lVar66;
  undefined8 *puVar67;
  ulong uVar68;
  ulong uVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong *puVar77;
  ulong *puVar78;
  ulong *puVar79;
  long lVar80;
  ulong uVar81;
  undefined8 *puVar82;
  byte *pbVar83;
  char *pcVar84;
  ulong uVar85;
  long lVar86;
  long lVar87;
  ulong uVar88;
  ulong uVar89;
  ulong *puVar90;
  undefined1 *puVar91;
  undefined8 uVar92;
  uint uVar93;
  long in_FS_OFFSET;
  ulong local_180;
  ulong *local_178;
  ulong local_160;
  ulong local_110;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 *local_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  ulong local_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  long *local_50;
  long *local_48;
  ulong local_40;
  ulong *local_38;
  
  local_d0 = 0;
  lStack_c8 = 8;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  lStack_a8 = 4;
  local_90 = &DAT_00000001;
  lStack_78 = 8;
  lStack_60 = 8;
  uStack_58 = 0;
  local_e8 = 0;
  local_e0 = 8;
  local_38 = *(ulong **)(param_2 + 8);
  local_40 = *(ulong *)(param_2 + 0x18);
  local_d8 = 0;
  LOCK();
  uVar69 = *local_38;
  *local_38 = *local_38 + 1;
  UNLOCK();
  local_50 = param_1;
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  auStack_88._0_8_ = uStack_a0;
  auStack_88._8_8_ = uStack_98;
  local_70 = uStack_a0;
  uStack_68 = uStack_98;
  if (uVar69 < local_40) {
    local_48 = *(long **)(param_2 + 0x10);
    do {
      if (uVar69 < 0x100) {
        lVar66 = local_48[1];
        lVar86 = *(long *)(*local_48 + 8);
        uVar85 = *(ulong *)(*local_48 + 0x10);
        uStack_a0 = 0;
        lVar72 = uVar85 * 0x30;
        if (uVar85 == 0) {
          uVar76 = 0;
        }
        else {
          lVar87 = 0;
          uVar76 = 0;
          do {
            while( true ) {
              uVar88 = uStack_a0;
              if (uStack_a0 == local_b0) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_b0);
              }
              *(int *)(lStack_a8 + uVar88 * 4) = (int)uVar76;
              uStack_a0 = uVar88 + 1;
              uVar88 = *(ulong *)(lVar86 + 0x28 + lVar87);
              if (uVar88 == 0) break;
              if (uVar88 <= uVar69) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar69,uVar88,&PTR_s_src_generic_core_rs_00212370);
              }
              if (uVar88 <= uVar69 + 1) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar69 + 1,uVar88,&PTR_s_src_generic_core_rs_00212388);
              }
              lVar80 = *(long *)(lVar86 + 0x20 + lVar87);
              uVar5 = *(uint *)(lVar80 + uVar69 * 4);
              uVar6 = *(uint *)(lVar80 + 4 + uVar69 * 4);
              if ((uVar6 < uVar5) || (*(ulong *)(lVar86 + 0x10 + lVar87) < (ulong)uVar6))
              goto LAB_0064b8cd;
              uVar76 = uVar76 + ((ulong)uVar6 - (ulong)uVar5);
              lVar87 = lVar87 + 0x30;
              if (lVar72 == lVar87) goto LAB_0064a617;
            }
            lVar87 = lVar87 + 0x30;
          } while (lVar72 != lVar87);
        }
LAB_0064a617:
        uVar88 = uStack_a0;
        if (uStack_a0 == local_b0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_b0);
        }
        *(int *)(lStack_a8 + uVar88 * 4) = (int)uVar76;
        uStack_a0 = uVar88 + 1;
        <pipeline[509596c7b52975b2]::generic::util::Tab>::reset(&local_d0,uVar76);
        uVar92 = auStack_88._8_8_;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = auStack_88._8_8_;
        auStack_88 = auVar57 << 0x40;
        if (uVar76 == 0) {
          auStack_88._0_8_ = 0;
          lVar87 = lStack_c8;
          lVar80 = lStack_a8;
          puVar91 = local_90;
          uVar76 = uStack_a0;
          uVar88 = auStack_88._0_8_;
          auStack_88._8_8_ = uVar92;
          uVar10 = uStack_c0;
          uVar11 = uStack_b8;
        }
        else {
          if (uStack_98 < uVar76) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(&uStack_98,0,uVar76,1,1);
            puVar91 = local_90 + auStack_88._0_8_;
            lVar87 = auStack_88._0_8_;
            puVar58 = local_90;
          }
          else {
            lVar87 = 0;
            puVar91 = local_90;
            puVar58 = local_90;
          }
          local_90 = puVar58;
          if (uVar76 != 1) {
            (*(code *)PTR_memset_00841dd0)(puVar91,1,uVar76 - 1);
            lVar87 = lVar87 + uVar76 + -1;
            puVar91 = puVar58 + lVar87;
          }
          *puVar91 = 1;
          uVar88 = lVar87 + 1;
          lVar87 = lStack_c8;
          lVar80 = lStack_a8;
          puVar91 = local_90;
          uVar76 = uStack_a0;
          uVar10 = uStack_c0;
          uVar11 = uStack_b8;
        }
        lStack_c8 = lVar87;
        lStack_a8 = lVar80;
        local_90 = puVar91;
        uStack_a0 = uVar76;
        uStack_c0 = uVar10;
        uStack_b8 = uVar11;
        auStack_88._0_8_ = uVar88;
        if (uVar85 == 0) {
          local_70 = 0;
          local_180 = 0;
        }
        else {
          lVar72 = lVar72 + lVar86;
          uVar1 = uVar69 + 1;
          local_110 = 0;
          lVar62 = lVar86;
          do {
            uVar63 = *(ulong *)(lVar62 + 0x28);
            if (uVar63 != 0) {
              if (uVar63 <= uVar69) goto LAB_0064b90a;
              if (uVar63 <= uVar1) goto LAB_0064b917;
              uVar5 = *(uint *)(*(long *)(lVar62 + 0x20) + uVar69 * 4);
              uVar6 = *(uint *)(*(long *)(lVar62 + 0x20) + 4 + uVar69 * 4);
              if ((uVar6 < uVar5) || (*(ulong *)(lVar62 + 0x10) < (ulong)uVar6)) {
LAB_0064b8cd:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::slice::index::slice_index_fail();
              }
              if (uVar6 != uVar5) {
                puVar82 = (undefined8 *)((ulong)uVar5 * 0x20 + *(long *)(lVar62 + 8));
                puVar67 = puVar82;
                iVar60 = 0;
                do {
                  local_178 = (ulong *)*puVar67;
                  pbVar83 = (byte *)((long)local_178 + -1);
                  do {
                    pbVar2 = pbVar83 + 1;
                    pbVar83 = pbVar83 + 1;
                  } while (*pbVar2 != 0x2c);
                  local_160 = (long)pbVar83 - (long)local_178;
                  if (local_160 == 0) {
                    local_160 = 0;
                    uVar63 = 0;
                    uVar74 = 0;
LAB_0064a860:
                    uVar63 = uVar63 ^ 0x243f6a8885a308d3;
                    uVar74 = uVar74 ^ local_160 ^ 0x13198a2e03707344;
                  }
                  else {
                    if ((byte)*local_178 == 0x22) {
                      if (local_160 == 1) goto LAB_0064b8b4;
                      local_160 = local_160 - 2;
                      local_178 = (ulong *)((long)local_178 + 1);
                    }
                    if (local_160 < 0x11) {
                      if (local_160 < 8) {
                        if (local_160 < 4) {
                          if (local_160 == 0) {
                            local_160 = 0;
                            uVar63 = 0;
                          }
                          else {
                            uVar63 = (ulong)*(byte *)((long)local_178 + (local_160 - 1)) |
                                     (ulong)((uint)*(byte *)((long)local_178 + (local_160 >> 1)) <<
                                             8 | (uint)(byte)*local_178 << 0x10);
                          }
                          uVar74 = 0;
                        }
                        else {
                          uVar63 = (ulong)(uint)*local_178;
                          uVar74 = (ulong)*(uint *)((long)local_178 + (local_160 - 4));
                        }
                      }
                      else {
                        uVar63 = *local_178;
                        uVar74 = *(ulong *)((long)local_178 + (local_160 - 8));
                      }
                      goto LAB_0064a860;
                    }
                    uVar74 = local_160 ^ 0x452821e638d01377;
                    uVar89 = (local_160 - 0x11 >> 4) + 1;
                    uVar63 = (ulong)((uint)uVar89 & 3);
                    if (local_160 - 0x11 < 0x30) {
                      lVar70 = 0;
                      lVar71 = 0x10;
LAB_0064a970:
                      do {
                        lVar73 = lVar71;
                        auVar23._8_8_ = 0;
                        auVar23._0_8_ = uVar74 ^ *(ulong *)((long)local_178 + lVar70 + 8);
                        auVar43._8_8_ = 0;
                        auVar43._0_8_ = *(ulong *)((long)local_178 + lVar70) ^ 0x243f6a8885a308d3;
                        uVar74 = SUB168(auVar23 * auVar43,8) ^ SUB168(auVar23 * auVar43,0);
                        uVar63 = uVar63 - 1;
                        lVar71 = lVar73 + 0x10;
                        lVar70 = lVar73;
                      } while (uVar63 != 0);
                    }
                    else {
                      uVar89 = uVar89 & 0x1ffffffffffffffc;
                      lVar70 = 0;
                      do {
                        lVar71 = lVar70;
                        auVar19._8_8_ = 0;
                        auVar19._0_8_ = uVar74 ^ *(ulong *)((long)local_178 + lVar71 + 8);
                        auVar39._8_8_ = 0;
                        auVar39._0_8_ = *(ulong *)((long)local_178 + lVar71) ^ 0x243f6a8885a308d3;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ =
                             SUB168(auVar19 * auVar39,8) ^ SUB168(auVar19 * auVar39,0) ^
                             *(ulong *)((long)local_178 + lVar71 + 0x18);
                        auVar40._8_8_ = 0;
                        auVar40._0_8_ =
                             *(ulong *)((long)local_178 + lVar71 + 0x10) ^ 0x243f6a8885a308d3;
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ =
                             SUB168(auVar20 * auVar40,8) ^ SUB168(auVar20 * auVar40,0) ^
                             *(ulong *)((long)local_178 + lVar71 + 0x28);
                        auVar41._8_8_ = 0;
                        auVar41._0_8_ =
                             *(ulong *)((long)local_178 + lVar71 + 0x20) ^ 0x243f6a8885a308d3;
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ =
                             SUB168(auVar21 * auVar41,8) ^ SUB168(auVar21 * auVar41,0) ^
                             *(ulong *)((long)local_178 + lVar71 + 0x38);
                        auVar42._8_8_ = 0;
                        auVar42._0_8_ =
                             *(ulong *)((long)local_178 + lVar71 + 0x30) ^ 0x243f6a8885a308d3;
                        uVar74 = SUB168(auVar22 * auVar42,8) ^ SUB168(auVar22 * auVar42,0);
                        lVar70 = lVar71 + 0x40;
                        uVar89 = uVar89 - 4;
                      } while (uVar89 != 0);
                      if (uVar63 != 0) {
                        lVar71 = lVar71 + 0x50;
                        goto LAB_0064a970;
                      }
                    }
                    uVar63 = *(ulong *)((long)local_178 + (local_160 - 0x10)) ^ 0x13198a2e03707344;
                    uVar74 = uVar74 ^ *(ulong *)((long)local_178 + (local_160 - 8)) ^
                             0xa4093822299f31d0;
                  }
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar74;
                  auVar44._8_8_ = 0;
                  auVar44._0_8_ = uVar63;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ =
                       SUB168(auVar24 * auVar44,0) ^ 0xa4093822299f31d0 ^
                       SUB168(auVar24 * auVar44,8);
                  if (uVar76 <= local_110) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (local_110,uVar76,&PTR_s_src_generic_core_rs_005895d0);
                  }
                  uVar74 = SUB168(auVar25 * ZEXT816(0x82efa98ec4e6c89),8) ^
                           SUB168(auVar25 * ZEXT816(0x82efa98ec4e6c89),0);
                  uVar89 = uVar11 & uVar74;
                  if (uVar10 <= uVar89) {
LAB_0064b8e7:
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar89,uVar10,&PTR_s_src_generic_util_rs_0020f838);
                  }
                  puVar61 = puVar67 + 4;
                  uVar68 = (ulong)(uint)(iVar60 + *(int *)(lVar80 + local_110 * 4));
                  while (uVar63 = *(ulong *)(lVar87 + uVar89 * 8), uVar63 != 0) {
                    if ((uVar63 ^ uVar74) >> 0x20 != 0) goto LAB_0064aa40;
                    uVar93 = (int)uVar63 - 1;
                    if (uVar76 == 1) {
                      lVar70 = 0;
                    }
                    else {
                      if (uVar76 == 0) {
                        uVar75 = 0xffffffffffffffff;
                        goto LAB_0064b969;
                      }
                      uVar63 = uVar76;
                      lVar71 = 0;
                      do {
                        lVar70 = lVar71 + (uVar63 >> 1);
                        if (uVar93 < *(uint *)(lVar80 + lVar70 * 4)) {
                          lVar70 = lVar71;
                        }
                        uVar63 = uVar63 - (uVar63 >> 1);
                        lVar71 = lVar70;
                      } while (1 < uVar63);
                    }
                    lVar70 = (lVar70 + 1) - (ulong)(uVar93 < *(uint *)(lVar80 + lVar70 * 4));
                    uVar75 = lVar70 - 1;
                    if (uVar76 <= uVar75) goto LAB_0064b969;
                    if (uVar85 <= uVar75) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar75,uVar85,&PTR_s_src_generic_core_rs_00211018);
                    }
                    uVar81 = (ulong)(uVar93 - *(int *)(lVar80 + -4 + lVar70 * 4));
                    uVar63 = *(ulong *)(lVar86 + 0x28 + uVar75 * 0x30);
                    if (uVar63 == 0) {
                      uVar63 = 0;
LAB_0064b928:
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar81,uVar63,&PTR_s_src_generic_core_rs_00211018);
                    }
                    if (uVar63 <= uVar69) goto LAB_0064b90a;
                    if (uVar63 <= uVar1) goto LAB_0064b917;
                    lVar70 = uVar75 * 0x30 + lVar86;
                    uVar7 = *(uint *)(*(long *)(lVar70 + 0x20) + uVar69 * 4);
                    uVar64 = (ulong)uVar7;
                    uVar8 = *(uint *)(*(long *)(lVar70 + 0x20) + 4 + uVar69 * 4);
                    uVar63 = (ulong)uVar8;
                    uVar75 = *(ulong *)(lVar70 + 0x10);
                    if ((uVar8 < uVar7) || (uVar75 < uVar63)) goto LAB_0064b8a7;
                    uVar63 = uVar63 - uVar64;
                    if (uVar63 <= uVar81) goto LAB_0064b928;
                    pcVar84 = *(char **)(uVar81 * 0x20 + uVar64 * 0x20 + *(long *)(lVar70 + 8));
                    pcVar65 = pcVar84 + -1;
                    do {
                      pcVar3 = pcVar65 + 1;
                      pcVar65 = pcVar65 + 1;
                    } while (*pcVar3 != ',');
                    uVar63 = (long)pcVar65 - (long)pcVar84;
                    if (uVar63 != 0) goto code_r0x0064ab64;
                    if (local_160 == 0) goto LAB_0064ab9a;
LAB_0064aa40:
                    uVar89 = uVar89 + 1 & uVar11;
                    if (uVar10 <= uVar89) goto LAB_0064b8e7;
                  }
                  if (uVar10 <= uVar89) {
LAB_0064b9c7:
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar89,uVar10,&PTR_s_src_generic_util_rs_00210fe8);
                  }
                  *(ulong *)(lVar87 + uVar89 * 8) = uVar74 & 0xffffffff00000000 | uVar68 + 1;
LAB_0064ac2f:
                  puVar67 = puVar61;
                  iVar60 = iVar60 + 1;
                } while (puVar61 != puVar82 + ((ulong)uVar6 - (ulong)uVar5) * 4);
              }
            }
            lVar62 = lVar62 + 0x30;
            local_110 = local_110 + 1;
          } while (lVar62 != lVar72);
          local_70 = 0;
          uVar85 = *(ulong *)(lVar66 + 0x18);
          lVar87 = *(long *)(lVar66 + 8);
          uVar76 = *(ulong *)(lVar66 + 0x10);
          uVar88 = *(ulong *)(lVar66 + 0x30);
          lVar80 = *(long *)(lVar66 + 0x28);
          uVar10 = *(ulong *)(lVar66 + 0x60);
          lVar62 = *(long *)(lVar66 + 0x58);
          uVar11 = *(ulong *)(lVar66 + 0x48);
          lVar66 = *(long *)(lVar66 + 0x40);
          local_180 = 0;
          uVar74 = 0;
          do {
            uVar63 = *(ulong *)(lVar86 + 0x28);
            uVar89 = uVar74;
            if (uVar63 != 0) {
              if (uVar63 <= uVar69) {
LAB_0064b90a:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar69,uVar63,&PTR_s_src_generic_core_rs_00212370);
              }
              if (uVar63 <= uVar1) {
LAB_0064b917:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar1,uVar63,&PTR_s_src_generic_core_rs_00212388);
              }
              uVar5 = *(uint *)(*(long *)(lVar86 + 0x20) + uVar69 * 4);
              uVar63 = (ulong)uVar5;
              uVar6 = *(uint *)(*(long *)(lVar86 + 0x20) + 4 + uVar69 * 4);
              uVar68 = (ulong)uVar6;
              if ((uVar6 < uVar5) || (*(ulong *)(lVar86 + 0x10) < uVar68)) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::slice::index::slice_index_fail
                          (uVar63,uVar68,*(ulong *)(lVar86 + 0x10),
                           &PTR_s_src_generic_core_rs_002123a0);
              }
              if (uVar6 != uVar5) {
                puVar82 = (undefined8 *)(uVar63 * 0x20 + *(long *)(lVar86 + 8));
                puVar67 = puVar82 + (uVar68 - uVar63) * 4;
                uVar89 = uVar74 + ((uVar68 - uVar63) * 0x20 - 0x20 >> 5) + 1;
LAB_0064b449:
                if ((ulong)auStack_88._0_8_ <= uVar74) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar74,auStack_88._0_8_,&PTR_s_src_generic_core_rs_005895b8);
                }
                if ((local_90[uVar74] == '\0') ||
                   (uVar5 = *(uint *)(puVar82 + 3), 0x2ffffff < uVar5)) goto LAB_0064b434;
                puVar79 = (ulong *)*puVar82;
                puVar90 = puVar79;
                do {
                  puVar78 = puVar90;
                  puVar90 = (ulong *)((long)puVar78 + 1);
                } while ((byte)*puVar78 != 0x2c);
                puVar77 = puVar78;
                do {
                  pbVar83 = (byte *)((long)puVar77 + 1);
                  puVar77 = (ulong *)((long)puVar77 + 1);
                } while (*pbVar83 != 0x2c);
                if (((puVar78 != puVar79) && ((long)puVar78 - (long)puVar79 == 1)) &&
                   ((byte)*puVar79 == 0x22)) goto LAB_0064b8b4;
                uVar63 = (long)puVar77 - (long)puVar90;
                if (uVar63 == 0) {
LAB_0064b66b:
                  uVar63 = 0;
                  uVar68 = 0;
LAB_0064b66f:
                  uVar75 = 0;
                }
                else {
                  if (*(byte *)puVar90 == 0x22) {
                    if (uVar63 == 1) goto LAB_0064b8b4;
                    uVar63 = uVar63 - 2;
                    puVar90 = (ulong *)((long)puVar78 + 2);
                  }
                  if (0x10 < uVar63) {
                    uVar75 = uVar63 ^ 0x452821e638d01377;
                    uVar81 = (uVar63 - 0x11 >> 4) + 1;
                    uVar68 = (ulong)((uint)uVar81 & 3);
                    if (uVar63 - 0x11 < 0x30) {
                      lVar71 = 0x10;
                      lVar70 = 0;
LAB_0064b5f0:
                      do {
                        lVar73 = lVar71;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar75 ^ *(ulong *)((long)puVar90 + lVar70 + 8);
                        auVar49._8_8_ = 0;
                        auVar49._0_8_ = *(ulong *)((long)puVar90 + lVar70) ^ 0x243f6a8885a308d3;
                        uVar75 = SUB168(auVar30 * auVar49,8) ^ SUB168(auVar30 * auVar49,0);
                        uVar68 = uVar68 - 1;
                        lVar71 = lVar73 + 0x10;
                        lVar70 = lVar73;
                      } while (uVar68 != 0);
                    }
                    else {
                      uVar81 = uVar81 & 0x1ffffffffffffffc;
                      lVar70 = 0;
                      do {
                        lVar71 = lVar70;
                        auVar26._8_8_ = 0;
                        auVar26._0_8_ = uVar75 ^ *(ulong *)((long)puVar90 + lVar71 + 8);
                        auVar45._8_8_ = 0;
                        auVar45._0_8_ = *(ulong *)((long)puVar90 + lVar71) ^ 0x243f6a8885a308d3;
                        auVar27._8_8_ = 0;
                        auVar27._0_8_ =
                             SUB168(auVar26 * auVar45,8) ^ SUB168(auVar26 * auVar45,0) ^
                             *(ulong *)((long)puVar90 + lVar71 + 0x18);
                        auVar46._8_8_ = 0;
                        auVar46._0_8_ =
                             *(ulong *)((long)puVar90 + lVar71 + 0x10) ^ 0x243f6a8885a308d3;
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ =
                             SUB168(auVar27 * auVar46,8) ^ SUB168(auVar27 * auVar46,0) ^
                             *(ulong *)((long)puVar90 + lVar71 + 0x28);
                        auVar47._8_8_ = 0;
                        auVar47._0_8_ =
                             *(ulong *)((long)puVar90 + lVar71 + 0x20) ^ 0x243f6a8885a308d3;
                        auVar29._8_8_ = 0;
                        auVar29._0_8_ =
                             SUB168(auVar28 * auVar47,8) ^ SUB168(auVar28 * auVar47,0) ^
                             *(ulong *)((long)puVar90 + lVar71 + 0x38);
                        auVar48._8_8_ = 0;
                        auVar48._0_8_ =
                             *(ulong *)((long)puVar90 + lVar71 + 0x30) ^ 0x243f6a8885a308d3;
                        uVar75 = SUB168(auVar29 * auVar48,8) ^ SUB168(auVar29 * auVar48,0);
                        lVar70 = lVar71 + 0x40;
                        uVar81 = uVar81 - 4;
                      } while (uVar81 != 0);
                      if (uVar68 != 0) {
                        lVar71 = lVar71 + 0x50;
                        goto LAB_0064b5f0;
                      }
                    }
                    uVar68 = *(ulong *)((long)puVar90 + (uVar63 - 0x10)) ^ 0x13198a2e03707344;
                    uVar75 = uVar75 ^ *(ulong *)((long)puVar90 + (uVar63 - 8)) ^ 0xa4093822299f31d0;
                    goto LAB_0064b684;
                  }
                  if (uVar63 < 8) {
                    if (uVar63 < 4) {
                      if (uVar63 == 0) goto LAB_0064b66b;
                      uVar68 = (ulong)*(byte *)((long)puVar90 + (uVar63 - 1)) |
                               (ulong)((uint)*(byte *)((long)puVar90 + (uVar63 >> 1)) << 8 |
                                      (uint)(byte)*puVar90 << 0x10);
                      goto LAB_0064b66f;
                    }
                    uVar68 = (ulong)(uint)*puVar90;
                    uVar75 = (ulong)*(uint *)((long)puVar90 + (uVar63 - 4));
                  }
                  else {
                    uVar68 = *puVar90;
                    uVar75 = *(ulong *)((long)puVar90 + (uVar63 - 8));
                  }
                }
                uVar68 = uVar68 ^ 0x243f6a8885a308d3;
                uVar75 = uVar75 ^ uVar63 ^ 0x13198a2e03707344;
LAB_0064b684:
                auVar31._8_8_ = 0;
                auVar31._0_8_ = uVar75;
                auVar50._8_8_ = 0;
                auVar50._0_8_ = uVar68;
                auVar32._8_8_ = 0;
                auVar32._0_8_ =
                     SUB168(auVar31 * auVar50,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar31 * auVar50,8);
                uVar68 = SUB168(auVar32 * ZEXT816(0x82efa98ec4e6c89),8) ^
                         SUB168(auVar32 * ZEXT816(0x82efa98ec4e6c89),0);
                uVar75 = uVar68;
                do {
                  uVar75 = uVar85 & uVar75;
                  if (uVar76 <= uVar75) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar75,uVar76,&PTR_s_src_generic_util_rs_0020f838);
                  }
                  uVar81 = *(ulong *)(lVar87 + uVar75 * 8);
                  if (uVar81 == 0) goto LAB_0064b3b0;
                  if ((uVar81 ^ uVar68) >> 0x20 == 0) {
                    uVar81 = (ulong)((int)uVar81 - 1);
                    if (uVar88 <= uVar81) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar81,uVar88,&PTR_s_src_generic_core_rs_002106c0);
                    }
                    if ((*(ulong *)(lVar80 + 8 + uVar81 * 0x10) == uVar63) &&
                       (iVar60 = (*(code *)PTR_memcmp_00842098)
                                           (*(undefined8 *)(uVar81 * 0x10 + lVar80),puVar90,uVar63),
                       iVar60 == 0)) goto code_r0x0064b750;
                  }
                  uVar75 = uVar75 + 1;
                } while( true );
              }
            }
LAB_0064b315:
            lVar86 = lVar86 + 0x30;
            uVar74 = uVar89;
          } while (lVar86 != lVar72);
        }
        lVar72 = lStack_78;
        lVar66 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x404,4);
        if (lVar66 == 0) goto LAB_0064ba8a;
        if (local_180 != 0) {
          lVar86 = 0;
          do {
            uVar85 = (ulong)*(uint *)(lVar72 + 0x28 + lVar86);
            if (0xff < uVar85) goto LAB_0064b9a3;
            piVar4 = (int *)(lVar66 + 4 + uVar85 * 4);
            *piVar4 = *piVar4 + 1;
            lVar86 = lVar86 + 0x30;
          } while (local_180 * 0x30 != lVar86);
        }
        iVar60 = 0;
        lVar86 = 8;
        do {
          iVar60 = iVar60 + *(int *)(lVar66 + -0x1c + lVar86 * 4);
          *(int *)(lVar66 + -0x1c + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x18 + lVar86 * 4);
          *(int *)(lVar66 + -0x18 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x14 + lVar86 * 4);
          *(int *)(lVar66 + -0x14 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x10 + lVar86 * 4);
          *(int *)(lVar66 + -0x10 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0xc + lVar86 * 4);
          *(int *)(lVar66 + -0xc + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -8 + lVar86 * 4);
          *(int *)(lVar66 + -8 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -4 + lVar86 * 4);
          *(int *)(lVar66 + -4 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + lVar86 * 4);
          *(int *)(lVar66 + lVar86 * 4) = iVar60;
          lVar86 = lVar86 + 8;
        } while (lVar86 != 0x108);
        if (local_180 == 0) {
          lVar86 = 8;
        }
        else {
          lVar87 = local_180 * 0x28;
          lVar86 = __rustc[45371133cddedda4]::__rust_alloc(lVar87,8);
          if (lVar86 == 0) goto LAB_0064bab5;
        }
        puVar67 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x400,4);
        if (puVar67 == (undefined8 *)0x0) goto LAB_0064ba99;
        (*(code *)PTR_memcpy_00841de0)(puVar67,lVar66,0x400);
        if (local_180 != 0) {
          lVar87 = 0;
          do {
            uVar85 = (ulong)*(uint *)(lVar72 + 0x28 + lVar87);
            if (0xff < uVar85) goto LAB_0064b9b5;
            puVar82 = (undefined8 *)(lVar87 + lVar72);
            uVar5 = *(uint *)((long)puVar67 + uVar85 * 4);
            *(undefined8 *)(lVar86 + 0x20 + (ulong)uVar5 * 0x28) = puVar82[4];
            uVar92 = puVar82[1];
            uVar51 = puVar82[2];
            uVar52 = puVar82[3];
            puVar61 = (undefined8 *)(lVar86 + (ulong)uVar5 * 0x28);
            *puVar61 = *puVar82;
            puVar61[1] = uVar92;
            puVar61[2] = uVar51;
            puVar61[3] = uVar52;
            *(uint *)((long)puVar67 + uVar85 * 4) = uVar5 + 1;
            lVar87 = lVar87 + 0x30;
          } while (local_180 * 0x30 != lVar87);
        }
        if (((undefined8 *)(sys::A_BASE_0 + -1) < puVar67) && (puVar67 < sys::A_END_0)) {
          *puVar67 = *(undefined8 *)(in_FS_OFFSET + -0x378);
          *(undefined8 **)(in_FS_OFFSET + -0x378) = puVar67;
        }
        else {
          free(puVar67);
        }
        uVar92 = 0;
        if (local_d8 == local_e8) goto LAB_0064b278;
      }
      else {
        uVar85 = uVar69 - 0x100;
        uVar76 = *(ulong *)(local_48[2] + 0x10);
        if (uVar76 <= uVar85) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar85,uVar76,&PTR_s_src_generic_mod_rs_00210fa0);
        }
        lVar72 = *(long *)(local_48[2] + 8);
        puVar67 = *(undefined8 **)(lVar72 + 8 + uVar85 * 0x18);
        lVar72 = *(long *)(lVar72 + 0x10 + uVar85 * 0x18);
        lVar66 = local_48[1];
        uStack_58 = 0;
        if (lVar72 != 0) {
          uVar85 = *(ulong *)(lVar66 + 0x18);
          lVar86 = *(long *)(lVar66 + 8);
          uVar76 = *(ulong *)(lVar66 + 0x10);
          uVar88 = *(ulong *)(lVar66 + 0x30);
          lVar87 = *(long *)(lVar66 + 0x28);
          uVar10 = *(ulong *)(lVar66 + 0x60);
          lVar80 = *(long *)(lVar66 + 0x58);
          uVar11 = *(ulong *)(lVar66 + 0x48);
          lVar66 = *(long *)(lVar66 + 0x40);
          puVar82 = puVar67;
          do {
            uVar1 = uStack_58;
            puVar90 = (ulong *)*puVar82;
            puVar79 = puVar90;
            do {
              puVar78 = puVar79;
              puVar79 = (ulong *)((long)puVar78 + 1);
            } while ((byte)*puVar78 != 0x2c);
            puVar77 = puVar78;
            do {
              pbVar83 = (byte *)((long)puVar77 + 1);
              puVar77 = (ulong *)((long)puVar77 + 1);
            } while (*pbVar83 != 0x2c);
            if (((puVar78 != puVar90) && ((long)puVar78 - (long)puVar90 == 1)) &&
               ((byte)*puVar90 == 0x22)) goto LAB_0064b8b4;
            uVar63 = (long)puVar77 - (long)puVar79;
            if (uVar63 == 0) {
LAB_0064a4c0:
              uVar63 = 0;
              uVar74 = 0;
LAB_0064a4c5:
              uVar89 = 0;
LAB_0064a4c7:
              uVar74 = uVar74 ^ 0x243f6a8885a308d3;
              uVar89 = uVar89 ^ uVar63 ^ 0x13198a2e03707344;
            }
            else {
              if (*(byte *)puVar79 == 0x22) {
                if (uVar63 == 1) {
LAB_0064b8b4:
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::slice::index::slice_index_fail
                            (1,0,1,&PTR_s_src_generic_parse_rs_005899b0);
                }
                uVar63 = uVar63 - 2;
                puVar79 = (ulong *)((long)puVar78 + 2);
              }
              if (uVar63 < 0x11) {
                if (uVar63 < 8) {
                  if (uVar63 < 4) {
                    if (uVar63 == 0) goto LAB_0064a4c0;
                    uVar74 = (ulong)*(byte *)((long)puVar79 + (uVar63 - 1)) |
                             (ulong)((uint)*(byte *)((long)puVar79 + (uVar63 >> 1)) << 8 |
                                    (uint)(byte)*puVar79 << 0x10);
                    goto LAB_0064a4c5;
                  }
                  uVar74 = (ulong)(uint)*puVar79;
                  uVar89 = (ulong)*(uint *)((long)puVar79 + (uVar63 - 4));
                }
                else {
                  uVar74 = *puVar79;
                  uVar89 = *(ulong *)((long)puVar79 + (uVar63 - 8));
                }
                goto LAB_0064a4c7;
              }
              uVar89 = uVar63 ^ 0x452821e638d01377;
              uVar68 = (uVar63 - 0x11 >> 4) + 1;
              uVar74 = (ulong)((uint)uVar68 & 3);
              if (uVar63 - 0x11 < 0x30) {
                lVar70 = 0x10;
                lVar62 = 0;
LAB_0064a440:
                do {
                  lVar71 = lVar70;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar89 ^ *(ulong *)((long)puVar79 + lVar62 + 8);
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = *(ulong *)((long)puVar79 + lVar62) ^ 0x243f6a8885a308d3;
                  uVar89 = SUB168(auVar16 * auVar37,8) ^ SUB168(auVar16 * auVar37,0);
                  uVar74 = uVar74 - 1;
                  lVar70 = lVar71 + 0x10;
                  lVar62 = lVar71;
                } while (uVar74 != 0);
              }
              else {
                uVar68 = uVar68 & 0x1ffffffffffffffc;
                lVar62 = 0;
                do {
                  lVar70 = lVar62;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = uVar89 ^ *(ulong *)((long)puVar79 + lVar70 + 8);
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = *(ulong *)((long)puVar79 + lVar70) ^ 0x243f6a8885a308d3;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ =
                       SUB168(auVar12 * auVar33,8) ^ SUB168(auVar12 * auVar33,0) ^
                       *(ulong *)((long)puVar79 + lVar70 + 0x18);
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = *(ulong *)((long)puVar79 + lVar70 + 0x10) ^ 0x243f6a8885a308d3;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ =
                       SUB168(auVar13 * auVar34,8) ^ SUB168(auVar13 * auVar34,0) ^
                       *(ulong *)((long)puVar79 + lVar70 + 0x28);
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = *(ulong *)((long)puVar79 + lVar70 + 0x20) ^ 0x243f6a8885a308d3;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ =
                       SUB168(auVar14 * auVar35,8) ^ SUB168(auVar14 * auVar35,0) ^
                       *(ulong *)((long)puVar79 + lVar70 + 0x38);
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = *(ulong *)((long)puVar79 + lVar70 + 0x30) ^ 0x243f6a8885a308d3;
                  uVar89 = SUB168(auVar15 * auVar36,8) ^ SUB168(auVar15 * auVar36,0);
                  lVar62 = lVar70 + 0x40;
                  uVar68 = uVar68 - 4;
                } while (uVar68 != 0);
                if (uVar74 != 0) {
                  lVar70 = lVar70 + 0x50;
                  goto LAB_0064a440;
                }
              }
              uVar74 = *(ulong *)((long)puVar79 + (uVar63 - 0x10)) ^ 0x13198a2e03707344;
              uVar89 = uVar89 ^ *(ulong *)((long)puVar79 + (uVar63 - 8)) ^ 0xa4093822299f31d0;
            }
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar89;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar74;
            auVar18._8_8_ = 0;
            auVar18._0_8_ =
                 SUB168(auVar17 * auVar38,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar17 * auVar38,8);
            uVar74 = SUB168(auVar18 * ZEXT816(0x82efa98ec4e6c89),8) ^
                     SUB168(auVar18 * ZEXT816(0x82efa98ec4e6c89),0);
            uVar89 = uVar85 & uVar74;
            if (uVar76 <= uVar89) {
LAB_0064b8f7:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar89,uVar76,&PTR_s_src_generic_util_rs_0020f838);
            }
            puVar61 = puVar82 + 3;
            while (uVar68 = *(ulong *)(lVar86 + uVar89 * 8), uVar68 != 0) {
              if ((uVar68 ^ uVar74) >> 0x20 == 0) {
                uVar68 = (ulong)((int)uVar68 - 1);
                if (uVar88 <= uVar68) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar68,uVar88,&PTR_s_src_generic_core_rs_002106c0);
                }
                if ((*(ulong *)(lVar87 + 8 + uVar68 * 0x10) == uVar63) &&
                   (iVar60 = (*(code *)PTR_memcmp_00842098)
                                       (*(undefined8 *)(uVar68 * 0x10 + lVar87),puVar79,uVar63),
                   iVar60 == 0)) {
                  if (uVar10 <= uVar68) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar68,uVar10,&PTR_s_src_generic_core_rs_00212090);
                  }
                  uVar74 = (ulong)*(uint *)(lVar80 + uVar68 * 4);
                  if (uVar88 <= uVar74) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar74,uVar88,&PTR_s_src_generic_core_rs_002120a8);
                  }
                  if (uVar11 <= uVar74) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar74,uVar11,&PTR_s_src_generic_core_rs_002120c0);
                  }
                  puVar79 = *(ulong **)(lVar87 + uVar74 * 0x10);
                  uVar63 = *(ulong *)(lVar87 + 8 + uVar74 * 0x10);
                  uVar74 = *(ulong *)(lVar66 + uVar74 * 8);
                  break;
                }
              }
              uVar89 = uVar89 + 1 & uVar85;
              if (uVar76 <= uVar89) goto LAB_0064b8f7;
            }
            uVar92 = puVar82[1];
            uVar9 = *(undefined4 *)(puVar82 + 2);
            if (uVar1 == uStack_68) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::
              grow_one(&uStack_68);
            }
            lVar62 = uVar1 * 0x38;
            *(ulong **)(lStack_60 + lVar62) = puVar79;
            *(ulong *)(lStack_60 + 8 + lVar62) = uVar63;
            *(ulong **)(lStack_60 + 0x10 + lVar62) = puVar90;
            *(ulong *)(lStack_60 + 0x18 + lVar62) = uVar74;
            *(undefined8 *)(lStack_60 + 0x20 + lVar62) = uVar92;
            *(undefined4 *)(lStack_60 + 0x28 + lVar62) = uVar9;
            *(uint *)(lStack_60 + 0x30 + lVar62) = (uint)(byte)(uVar74 >> 0x20);
            uStack_58 = uVar1 + 1;
            puVar82 = puVar61;
          } while (puVar61 != puVar67 + lVar72 * 3);
        }
        local_180 = uStack_58;
        lVar72 = lStack_60;
        lVar66 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x404,4);
        if (lVar66 == 0) {
LAB_0064ba8a:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,0x404);
        }
        if (local_180 != 0) {
          lVar86 = 0;
          do {
            uVar85 = (ulong)*(uint *)(lVar72 + 0x30 + lVar86);
            if (0xff < uVar85) {
LAB_0064b9a3:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar85 + 1,0x101,&PTR_s_src_generic_core_rs_002122f8);
            }
            piVar4 = (int *)(lVar66 + 4 + uVar85 * 4);
            *piVar4 = *piVar4 + 1;
            lVar86 = lVar86 + 0x38;
          } while (local_180 * 0x38 != lVar86);
        }
        iVar60 = 0;
        lVar86 = 8;
        do {
          iVar60 = iVar60 + *(int *)(lVar66 + -0x1c + lVar86 * 4);
          *(int *)(lVar66 + -0x1c + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x18 + lVar86 * 4);
          *(int *)(lVar66 + -0x18 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x14 + lVar86 * 4);
          *(int *)(lVar66 + -0x14 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0x10 + lVar86 * 4);
          *(int *)(lVar66 + -0x10 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -0xc + lVar86 * 4);
          *(int *)(lVar66 + -0xc + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -8 + lVar86 * 4);
          *(int *)(lVar66 + -8 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + -4 + lVar86 * 4);
          *(int *)(lVar66 + -4 + lVar86 * 4) = iVar60;
          iVar60 = iVar60 + *(int *)(lVar66 + lVar86 * 4);
          *(int *)(lVar66 + lVar86 * 4) = iVar60;
          lVar86 = lVar86 + 8;
        } while (lVar86 != 0x108);
        if (local_180 == 0) {
          lVar86 = 8;
        }
        else {
          lVar87 = local_180 * 0x30;
          lVar86 = __rustc[45371133cddedda4]::__rust_alloc(lVar87,8);
          if (lVar86 == 0) {
LAB_0064bab5:
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar87);
          }
        }
        puVar67 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x400,4);
        if (puVar67 == (undefined8 *)0x0) {
LAB_0064ba99:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,0x400);
        }
        (*(code *)PTR_memcpy_00841de0)(puVar67,lVar66,0x400);
        if (local_180 != 0) {
          lVar87 = 0;
          do {
            uVar85 = (ulong)*(uint *)(lVar72 + 0x30 + lVar87);
            if (0xff < uVar85) {
LAB_0064b9b5:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar85,0x100,&PTR_s_src_generic_core_rs_00212310);
            }
            puVar82 = (undefined8 *)(lVar87 + lVar72);
            uVar5 = *(uint *)((long)puVar67 + uVar85 * 4);
            lVar80 = (ulong)uVar5 * 0x30;
            uVar92 = *puVar82;
            uVar51 = puVar82[1];
            uVar52 = puVar82[2];
            uVar53 = puVar82[3];
            uVar54 = puVar82[3];
            uVar55 = puVar82[4];
            uVar56 = puVar82[5];
            puVar61 = (undefined8 *)(lVar86 + 0x10 + lVar80);
            *puVar61 = puVar82[2];
            puVar61[1] = uVar54;
            puVar61[2] = uVar55;
            puVar61[3] = uVar56;
            puVar82 = (undefined8 *)(lVar86 + lVar80);
            *puVar82 = uVar92;
            puVar82[1] = uVar51;
            puVar82[2] = uVar52;
            puVar82[3] = uVar53;
            *(uint *)((long)puVar67 + uVar85 * 4) = uVar5 + 1;
            lVar87 = lVar87 + 0x38;
          } while (local_180 * 0x38 != lVar87);
        }
        if (((undefined8 *)(sys::A_BASE_0 + -1) < puVar67) && (puVar67 < sys::A_END_0)) {
          *puVar67 = *(undefined8 *)(in_FS_OFFSET + -0x378);
          *(undefined8 **)(in_FS_OFFSET + -0x378) = puVar67;
        }
        else {
          free(puVar67);
        }
        uVar92 = 1;
        if (local_d8 == local_e8) {
LAB_0064b278:
          lVar72 = local_d8;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(usize,pipeline[509596c7b52975b2]::generic::P2)>>
          ::grow_one(&local_e8);
          local_d8 = lVar72;
        }
      }
      lVar72 = local_d8 * 0x40;
      *(ulong *)(local_e0 + lVar72) = uVar69;
      *(undefined8 *)(local_e0 + 8 + lVar72) = uVar92;
      *(ulong *)(local_e0 + 0x10 + lVar72) = local_180;
      *(long *)(local_e0 + 0x18 + lVar72) = lVar86;
      *(ulong *)(local_e0 + 0x20 + lVar72) = local_180;
      *(undefined8 *)(local_e0 + 0x28 + lVar72) = 0x101;
      *(long *)(local_e0 + 0x30 + lVar72) = lVar66;
      *(undefined8 *)(local_e0 + 0x38 + lVar72) = 0x101;
      local_d8 = local_d8 + 1;
      LOCK();
      uVar69 = *local_38;
      *local_38 = *local_38 + 1;
      UNLOCK();
    } while (uVar69 < local_40);
  }
  local_50[2] = local_d8;
  *local_50 = local_e8;
  local_50[1] = local_e0;
  local_50[3] = local_d0;
  local_50[4] = lStack_c8;
  local_50[5] = uStack_c0;
  local_50[6] = uStack_b8;
  local_50[7] = local_b0;
  local_50[8] = lStack_a8;
  local_50[9] = uStack_a0;
  local_50[10] = uStack_98;
  local_50[0xb] = (long)local_90;
  local_50[0xc] = auStack_88._0_8_;
  local_50[0xd] = auStack_88._8_8_;
  local_50[0xe] = lStack_78;
  local_50[0xf] = local_70;
  local_50[0x10] = uStack_68;
  local_50[0x11] = lStack_60;
  local_50[0x12] = uStack_58;
  return;
code_r0x0064b750:
  if (uVar10 <= uVar81) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar81,uVar10,&PTR_s_src_generic_core_rs_00212090);
  }
  uVar68 = (ulong)*(uint *)(lVar62 + uVar81 * 4);
  if (uVar88 <= uVar68) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar68,uVar88,&PTR_s_src_generic_core_rs_002120a8);
  }
  if (uVar11 <= uVar68) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar68,uVar11,&PTR_s_src_generic_core_rs_002120c0);
  }
  puVar90 = *(ulong **)(lVar80 + uVar68 * 0x10);
  uVar63 = *(ulong *)(lVar80 + 8 + uVar68 * 0x10);
  uVar68 = *(ulong *)(lVar66 + uVar68 * 8);
LAB_0064b3b0:
  uVar92 = puVar82[2];
  uVar9 = *(undefined4 *)((long)puVar82 + 0x1c);
  if (local_180 == auStack_88._8_8_) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
    ::grow_one(auStack_88 + 8);
  }
  lVar70 = local_180 * 0x30;
  *(ulong **)(lStack_78 + lVar70) = puVar90;
  *(ulong *)(lStack_78 + 8 + lVar70) = uVar63;
  *(ulong *)(lStack_78 + 0x10 + lVar70) = uVar68;
  *(undefined8 *)(lStack_78 + 0x18 + lVar70) = uVar92;
  *(uint *)(lStack_78 + 0x20 + lVar70) = uVar5;
  *(undefined4 *)(lStack_78 + 0x24 + lVar70) = uVar9;
  *(uint *)(lStack_78 + 0x28 + lVar70) = (uint)(byte)(uVar68 >> 0x20);
  local_180 = local_180 + 1;
  local_70 = local_180;
LAB_0064b434:
  puVar82 = puVar82 + 4;
  uVar74 = uVar74 + 1;
  if (puVar82 == puVar67) goto LAB_0064b315;
  goto LAB_0064b449;
code_r0x0064ab64:
  if (*pcVar84 == '\"') {
    if (uVar63 == 1) goto LAB_0064b8b4;
    uVar63 = uVar63 - 2;
    pcVar84 = pcVar84 + 1;
  }
  if (uVar63 != local_160) goto LAB_0064aa40;
LAB_0064ab9a:
  iVar59 = (*(code *)PTR_memcmp_00842098)(pcVar84,local_178,local_160);
  if (iVar59 != 0) goto LAB_0064aa40;
  if (uVar76 == 1) {
    lVar71 = 0;
  }
  else {
    uVar63 = uVar76;
    lVar70 = 0;
    do {
      lVar71 = lVar70 + (uVar63 >> 1);
      if (uVar93 < *(uint *)(lVar80 + lVar71 * 4)) {
        lVar71 = lVar70;
      }
      uVar63 = uVar63 - (uVar63 >> 1);
      lVar70 = lVar71;
    } while (1 < uVar63);
  }
  lVar70 = (lVar71 + 1) - (ulong)(uVar93 < *(uint *)(lVar80 + lVar71 * 4));
  uVar75 = lVar70 - 1;
  if (uVar75 < uVar76) {
    if (uVar85 <= uVar75) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar75,uVar85,&PTR_s_src_generic_core_rs_005895e8);
    }
    uVar81 = (ulong)(uVar93 - *(int *)(lVar80 + -4 + lVar70 * 4));
    uVar63 = *(ulong *)(lVar86 + 0x28 + uVar75 * 0x30);
    if (uVar63 == 0) {
      uVar63 = 0;
LAB_0064b9f9:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar81,uVar63,&PTR_s_src_generic_core_rs_005895e8);
    }
    if (uVar63 <= uVar69) goto LAB_0064b90a;
    if (uVar63 <= uVar1) goto LAB_0064b917;
    lVar70 = uVar75 * 0x30 + lVar86;
    uVar7 = *(uint *)(*(long *)(lVar70 + 0x20) + uVar69 * 4);
    uVar64 = (ulong)uVar7;
    uVar8 = *(uint *)(*(long *)(lVar70 + 0x20) + 4 + uVar69 * 4);
    uVar63 = (ulong)uVar8;
    uVar75 = *(ulong *)(lVar70 + 0x10);
    if ((uVar7 <= uVar8) && (uVar63 <= uVar75)) {
      uVar63 = uVar63 - uVar64;
      if (uVar63 <= uVar81) goto LAB_0064b9f9;
      if ((long)puVar67[1] < *(long *)(uVar81 * 0x20 + 8 + uVar64 * 0x20 + *(long *)(lVar70 + 8))) {
        uVar63 = (ulong)uVar93;
        if (uVar88 <= uVar63) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar63,uVar88,&PTR_s_src_generic_core_rs_00589618);
        }
        puVar91[uVar63] = 0;
        if (uVar10 <= uVar89) goto LAB_0064b9c7;
        *(ulong *)(lVar87 + uVar89 * 8) = uVar74 & 0xffffffff00000000 | uVar68 + 1;
      }
      else {
        if (uVar88 <= uVar68) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar68,uVar88,&PTR_s_src_generic_core_rs_00589600);
        }
        puVar91[uVar68] = 0;
      }
      goto LAB_0064ac2f;
    }
LAB_0064b8a7:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar64,uVar63,uVar75,&PTR_s_src_generic_core_rs_002123a0);
  }
LAB_0064b969:
                    /* WARNING: Subroutine does not return */
  core[62e902411887be45]::panicking::panic_bounds_check
            (uVar75,uVar76,&PTR_s_src_generic_core_rs_00211000);
}


// ==== pipeline::generic::util::par_run::<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>), alloc::vec::Vec<pipeline::generic::core::UserRow>, pipeline::generic::run::{closure#11}, pipeline::generic::run::{closure#12}>::{closure#0} @ 0064bae0 (12234 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,
   pipeline[509596c7b52975b2]::generic::run::{closure#11},
   pipeline[509596c7b52975b2]::generic::run::{closure#12}>::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::{closure#11},pipeline[509596c7b52975b2]::generic::run::{closure#12}>
::_closure_0_(char **param_1,long *param_2)

{
  undefined8 *puVar1;
  char **ppcVar2;
  char *pcVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  undefined1 (*pauVar28) [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  uint *puVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  int iVar34;
  long lVar35;
  long lVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  char **ppcVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  int iVar43;
  long lVar44;
  char **ppcVar45;
  undefined4 *puVar46;
  uint uVar47;
  long lVar48;
  long *plVar49;
  ulong uVar50;
  ulong uVar51;
  uint *puVar52;
  char **ppcVar53;
  undefined1 auVar54 [8];
  char *pcVar55;
  long *plVar56;
  ulong uVar57;
  long *plVar58;
  byte bVar59;
  long lVar60;
  uint uVar61;
  ulong uVar62;
  char **ppcVar63;
  undefined1 (*pauVar64) [16];
  ulong uVar65;
  ulong uVar66;
  undefined1 (*pauVar67) [64];
  byte bVar68;
  ushort uVar69;
  char *pcVar70;
  long lVar71;
  undefined1 (*pauVar72) [64];
  ulong uVar73;
  undefined4 *puVar74;
  uint *puVar75;
  long *plVar76;
  ulong uVar77;
  uint uVar78;
  ulong uVar79;
  int iVar80;
  ulong uVar81;
  long *plVar82;
  undefined4 uVar83;
  ulong uVar84;
  long lVar85;
  long *plVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  bool bVar90;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar97 [64];
  undefined1 auVar98 [64];
  undefined1 auVar99 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar100 [64];
  char **local_308;
  ulong local_2e8;
  long local_298;
  char *local_288;
  char **local_280;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined1 (*local_248) [64];
  undefined1 local_240 [16];
  long *local_230;
  undefined1 local_228 [16];
  long local_218;
  undefined1 local_210 [16];
  undefined4 *local_200;
  ulong local_1f8;
  long *local_1f0;
  long local_1e8;
  long *local_1e0;
  long local_1d8;
  uint *local_1d0;
  undefined1 local_1c8 [16];
  uint *local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  long local_188;
  undefined1 local_180 [16];
  ulong local_170;
  long local_168;
  undefined1 local_160 [16];
  long local_150;
  undefined1 local_148 [16];
  long local_138;
  undefined1 local_130 [16];
  long local_120;
  undefined1 local_118 [16];
  long local_108;
  undefined1 local_100 [16];
  long local_f0;
  undefined1 local_e8 [16];
  long *local_d8;
  undefined1 local_d0 [8];
  char *pcStack_c8;
  long *local_c0;
  char *local_b8;
  undefined1 (*local_b0) [16];
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  char **local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  long *local_70;
  ulong *local_68;
  char **local_60;
  long local_58;
  long *local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  plVar86 = (long *)**(undefined8 **)*param_2;
  pcVar55 = (char *)((long)plVar86 * 8);
  ppcVar63 = param_1;
  if (plVar86 < (long *)0x2000000000000000 && pcVar55 < (char *)0x7ffffffffffffff9)
  goto LAB_0064bb2e;
LAB_0064bb29:
  alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  ppcVar63 = param_1;
LAB_0064bb2e:
  if (pcVar55 == (char *)0x0) {
    lVar35 = 8;
    local_1f0 = (long *)0x0;
  }
  else {
    lVar35 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(pcVar55,8);
    if (lVar35 == 0) {
LAB_0064eb89:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,pcVar55);
    }
    local_1f0 = plVar86;
  }
  local_240 = ZEXT816(0);
  local_250 = 0;
  local_248 = (undefined1 (*) [64])&DAT_00000008;
  local_230 = (long *)&DAT_00000008;
  local_218 = 4;
  local_200 = (undefined4 *)&DAT_00000004;
  local_1f8 = 0;
  local_1d8 = 0;
  local_1d0 = (uint *)&DAT_00000004;
  local_1b8 = (uint *)&DAT_00000008;
  local_1a0 = 4;
  local_188 = 8;
  local_170 = 0;
  local_168 = 8;
  local_150 = 4;
  local_138 = 4;
  local_120 = 4;
  local_108 = 8;
  local_f0 = 4;
  local_d8 = (long *)&DAT_00000004;
  local_c0 = (long *)&DAT_00000008;
  local_b8 = (char *)0x0;
  local_b0 = (undefined1 (*) [16])PTR_DAT_0020fa68;
  uStack_a8 = _UNK_0020fa70;
  lStack_a0 = _UNK_0020fa78;
  lStack_98 = _UNK_0020fa80;
  local_88 = (char *)0x0;
  local_80 = (char *)0x8;
  local_78 = (char *)0x0;
  puVar37 = (ulong *)param_2[1];
  local_60 = (char **)param_2[3];
  LOCK();
  local_308 = (char **)*puVar37;
  *puVar37 = *puVar37 + 1;
  UNLOCK();
  local_228 = local_240;
  local_210 = local_240;
  local_1e8 = lVar35;
  local_1e0 = plVar86;
  local_1c8 = local_240;
  local_1b0 = local_240;
  local_198 = local_240;
  local_180 = local_240;
  local_160 = local_240;
  local_148 = local_240;
  local_130 = local_240;
  local_118 = local_240;
  local_100 = local_240;
  local_e8 = local_240;
  _local_d0 = local_240;
  if (local_60 <= local_308) {
LAB_0064e8dd:
    ppcVar63[2] = local_78;
    *ppcVar63 = local_88;
    ppcVar63[1] = local_80;
    (*(code *)PTR_memcpy_00841de0)(ppcVar63 + 3,&local_250,0x1c0);
    return;
  }
  local_70 = (long *)param_2[2];
  local_68 = puVar37;
  do {
    local_288 = local_78;
    lVar35 = *(long *)(*local_70 + 8);
    lVar41 = *(long *)(*local_70 + 0x10);
    lVar71 = *(long *)(local_70[1] + 8);
    lVar60 = *(long *)(local_70[1] + 0x10);
    uVar7 = *(undefined4 *)local_70[2];
    lVar36 = lVar41 * 0x30 + lVar35;
    if (lVar41 == 0) {
      in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
      <pipeline[509596c7b52975b2]::generic::util::Tab>::reset(local_198 + 8,0);
      auVar99._8_8_ = 0;
      auVar99._0_8_ = local_160._8_8_;
      local_160 = auVar99 << 0x40;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_148._8_8_;
      local_148 = auVar15 << 0x40;
      uVar77 = 0;
      ppcVar39 = (char **)0x0;
    }
    else {
      puVar37 = (ulong *)(lVar35 + 0x28);
      uVar77 = 0;
      lVar44 = lVar41;
      do {
        while (ppcVar53 = (char **)*puVar37, ppcVar53 == (char **)0x0) {
          puVar37 = puVar37 + 6;
          lVar44 = lVar44 + -1;
          if (lVar44 == 0) goto LAB_0064be4e;
        }
        if (ppcVar53 <= local_308) goto LAB_0064eaa5;
        if (ppcVar53 <= (char **)((long)local_308 + 1U)) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    ((char **)((long)local_308 + 1U),ppcVar53,&PTR_s_src_generic_core_rs_00212388);
        }
        uVar61 = *(uint *)(puVar37[-1] + (long)local_308 * 4);
        uVar47 = *(uint *)(puVar37[-1] + 4 + (long)local_308 * 4);
        if ((uVar47 < uVar61) || (puVar37[-3] < (ulong)uVar47)) goto LAB_0064e92f;
        uVar77 = uVar77 + ((ulong)uVar47 - (ulong)uVar61);
        puVar37 = puVar37 + 6;
        lVar44 = lVar44 + -1;
      } while (lVar44 != 0);
LAB_0064be4e:
      in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
      <pipeline[509596c7b52975b2]::generic::util::Tab>::reset(local_198 + 8,uVar77);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = local_160._8_8_;
      local_160 = auVar33 << 0x40;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_148._8_8_;
      local_148 = auVar14 << 0x40;
      lVar85 = 0;
      lVar44 = lVar35;
      do {
        local_280 = (char **)((long)local_308 + 1);
        ppcVar53 = *(char ***)(lVar44 + 0x28);
        if (ppcVar53 != (char **)0x0) {
          if (ppcVar53 <= local_308) goto LAB_0064eaa5;
          if (ppcVar53 <= local_280) goto LAB_0064ead4;
          uVar61 = *(uint *)(*(long *)(lVar44 + 0x20) + (long)local_308 * 4);
          uVar47 = *(uint *)(*(long *)(lVar44 + 0x20) + 4 + (long)local_308 * 4);
          if ((uVar47 < uVar61) || (*(ulong *)(lVar44 + 0x10) < (ulong)uVar47)) goto LAB_0064e92f;
          if (uVar47 != uVar61) {
            puVar38 = (undefined8 *)((ulong)uVar61 * 0x28 + *(long *)(lVar44 + 8));
            puVar42 = puVar38;
            do {
              auVar99 = local_160;
              lVar48 = local_168;
              lVar40 = local_188;
              uVar88 = puVar42[2];
              uVar11 = local_180._0_8_;
              uVar12 = local_180._8_8_;
              uVar84 = local_180._8_8_ & uVar88;
              if ((ulong)local_180._0_8_ <= uVar84) {
LAB_0064e992:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar84,uVar11,&PTR_s_src_generic_util_rs_0020f838);
              }
              puVar1 = puVar42 + 5;
              uVar32 = local_160._0_8_;
              uVar9 = *puVar42;
              lVar10 = puVar42[1];
              while (uVar51 = *(ulong *)(lVar40 + uVar84 * 8), uVar51 != 0) {
                if ((uVar51 ^ uVar88) >> 0x20 == 0) {
                  uVar78 = (int)uVar51 - 1;
                  uVar51 = (ulong)uVar78;
                  if ((ulong)uVar32 <= uVar51) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar51,uVar32,&PTR_s_src_generic_core_rs_00211078);
                  }
                  if ((*(long *)(lVar48 + 8 + uVar51 * 0x10) == lVar10) &&
                     (iVar34 = (*(code *)PTR_memcmp_00842098)
                                         (*(undefined8 *)(uVar51 * 0x10 + lVar48),uVar9,lVar10),
                     iVar34 == 0)) {
                    if (lVar85 != local_160._8_8_) goto LAB_0064c0ce;
                    goto LAB_0064bf2f;
                  }
                }
                uVar84 = uVar84 + 1 & uVar12;
                if ((ulong)uVar11 <= uVar84) goto LAB_0064e992;
              }
              if (uVar32 == local_170) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_170);
                lVar48 = local_168;
              }
              *(undefined8 *)(lVar48 + uVar32 * 0x10) = uVar9;
              *(long *)(lVar48 + 8 + uVar32 * 0x10) = lVar10;
              local_160._0_8_ = uVar32 + 1;
              if ((ulong)local_180._0_8_ <= uVar84) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar84,local_180._0_8_,&PTR_s_src_generic_util_rs_00210fe8);
              }
              *(ulong *)(local_188 + uVar84 * 8) =
                   uVar88 & 0xffffffff00000000 | (uVar32 & 0xffffffff) + 1;
              uVar78 = auVar99._0_4_;
              lVar85 = local_148._0_8_;
              if (local_148._0_8_ == local_160._8_8_) {
LAB_0064bf2f:
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(local_160 + 8);
              }
LAB_0064c0ce:
              *(uint *)(local_150 + lVar85 * 4) = uVar78;
              lVar85 = lVar85 + 1;
              local_148._0_8_ = lVar85;
              puVar42 = puVar1;
            } while (puVar1 != puVar38 + ((ulong)uVar47 - (ulong)uVar61) * 5);
          }
        }
        lVar44 = lVar44 + 0x30;
      } while (lVar44 != lVar36);
      ppcVar39 = (char **)local_160._0_8_;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_130._8_8_;
    local_130 = auVar16 << 0x40;
    if (ppcVar39 < (ulong)local_148._8_8_) {
      lVar44 = 0;
    }
    else {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_148 + 8,0,(long)ppcVar39 + 1U,4);
      lVar44 = local_130._0_8_;
    }
    lVar85 = local_138;
    puVar46 = (undefined4 *)(local_138 + lVar44 * 4);
    if (ppcVar39 != (char **)0x0) {
      (*(code *)PTR_memset_00841dd0)(puVar46,0,(long)ppcVar39 * 4);
      lVar44 = lVar44 + (long)ppcVar39;
      puVar46 = (undefined4 *)(lVar85 + lVar44 * 4);
    }
    lVar85 = local_138;
    *puVar46 = 0;
    ppcVar53 = (char **)(lVar44 + 1);
    local_130._0_8_ = ppcVar53;
    if (local_148._0_8_ != 0) {
      lVar44 = 0;
      do {
        ppcVar45 = (char **)((ulong)*(uint *)(local_150 + lVar44) + 1);
        if (ppcVar53 <= ppcVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar45,ppcVar53,&PTR_s_src_generic_core_rs_00589720);
        }
        piVar6 = (int *)(local_138 + 4 + (ulong)*(uint *)(local_150 + lVar44) * 4);
        *piVar6 = *piVar6 + 1;
        lVar44 = lVar44 + 4;
      } while (local_148._0_8_ * 4 != lVar44);
    }
    if (ppcVar39 != (char **)0x0) {
      ppcVar45 = (char **)0x0;
      do {
        if (ppcVar53 <= ppcVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar45,ppcVar53,&PTR_s_src_generic_core_rs_00589918);
        }
        ppcVar2 = (char **)((long)ppcVar45 + 1);
        if (ppcVar53 <= ppcVar2) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar2,ppcVar53,&PTR_s_src_generic_core_rs_00589930);
        }
        piVar6 = (int *)(local_138 + 4 + (long)ppcVar45 * 4);
        *piVar6 = *piVar6 + *(int *)(local_138 + (long)ppcVar45 * 4);
        ppcVar45 = ppcVar2;
      } while (ppcVar39 != ppcVar2);
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_118._8_8_;
    local_118 = auVar17 << 0x40;
    if (ppcVar53 < ppcVar39) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (0,ppcVar39,ppcVar53,&PTR_s_src_generic_core_rs_00589900);
    }
    if ((ulong)local_130._8_8_ < ppcVar39) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_130 + 8,0,ppcVar39,4);
      lVar44 = local_118._0_8_;
LAB_0064c2bd:
      lVar40 = lVar44;
      (*(code *)PTR_memcpy_00841de0)(lVar40 * 4 + local_120,lVar85,(long)ppcVar39 * 4);
    }
    else {
      lVar40 = 0;
      lVar44 = 0;
      if (ppcVar39 != (char **)0x0) goto LAB_0064c2bd;
    }
    local_118._0_8_ = lVar40 + (long)ppcVar39;
    uVar11 = local_100._8_8_;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_100._8_8_;
    local_100 = auVar18 << 0x40;
    if (uVar77 == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar11;
      local_100 = auVar19 << 0x40;
    }
    else {
      if ((ulong)local_118._8_8_ < uVar77) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_118 + 8,0,uVar77,8);
        lVar44 = local_100._0_8_;
      }
      else {
        lVar44 = 0;
      }
      lVar85 = local_108;
      pauVar64 = (undefined1 (*) [16])(lVar44 * 0x10 + local_108);
      if (uVar77 != 1) {
        (*(code *)PTR_memset_00841dd0)(pauVar64,0,uVar77 * 0x10 + -0x10);
        pauVar64 = (undefined1 (*) [16])(lVar85 + (lVar44 + uVar77) * 0x10 + -0x10);
        lVar44 = lVar44 + uVar77 + -1;
      }
      *pauVar64 = (undefined1  [16])0x0;
      local_100._0_8_ = lVar44 + 1;
    }
    if (lVar41 != 0) {
      uVar77 = 0;
      do {
        ppcVar53 = *(char ***)(lVar35 + 0x28);
        if (ppcVar53 != (char **)0x0) {
          if (ppcVar53 <= local_308) goto LAB_0064eaa5;
          if (ppcVar53 <= (char **)((long)local_308 + 1U)) goto LAB_0064ead4;
          uVar61 = *(uint *)(*(long *)(lVar35 + 0x20) + (long)local_308 * 4);
          uVar88 = (ulong)uVar61;
          uVar47 = *(uint *)(*(long *)(lVar35 + 0x20) + 4 + (long)local_308 * 4);
          param_2 = (long *)(ulong)uVar47;
          plVar56 = *(long **)(lVar35 + 0x10);
          if ((uVar47 < uVar61) || (plVar56 < param_2)) goto LAB_0064e949;
          if (uVar47 != uVar61) {
            lVar41 = *(long *)(lVar35 + 8);
            lVar44 = uVar88 * 0x28;
            do {
              if ((ulong)local_148._0_8_ <= uVar77) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar77,local_148._0_8_,&PTR_s_src_generic_core_rs_00589738);
              }
              uVar88 = (ulong)*(uint *)(local_150 + uVar77 * 4);
              if ((ulong)local_118._0_8_ <= uVar88) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar88,local_118._0_8_,&PTR_s_src_generic_core_rs_00589750);
              }
              uVar84 = (ulong)*(uint *)(local_120 + uVar88 * 4);
              if ((ulong)local_100._0_8_ <= uVar84) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar84,local_100._0_8_,&PTR_s_src_generic_core_rs_00589768);
              }
              uVar11 = *(undefined8 *)(lVar41 + 0x20 + lVar44);
              *(undefined8 *)(local_108 + uVar84 * 0x10) = *(undefined8 *)(lVar41 + 0x18 + lVar44);
              *(undefined8 *)(local_108 + 8 + uVar84 * 0x10) = uVar11;
              if ((ulong)local_118._0_8_ <= uVar88) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar88,local_118._0_8_,&PTR_s_src_generic_core_rs_00589780);
              }
              piVar6 = (int *)(local_120 + uVar88 * 4);
              *piVar6 = *piVar6 + 1;
              lVar44 = lVar44 + 0x28;
              uVar77 = uVar77 + 1;
            } while ((long)param_2 * 0x28 != lVar44);
          }
        }
        lVar35 = lVar35 + 0x30;
      } while (lVar35 != lVar36);
    }
    uVar11 = local_e8._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = local_e8._8_8_;
    local_e8 = auVar20 << 0x40;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = pcStack_c8;
    _local_d0 = auVar21 << 0x40;
    if (ppcVar39 < (ulong)uVar11) {
      auVar54 = (undefined1  [8])0;
    }
    else {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_e8 + 8,0,(long)ppcVar39 + 1U,4);
      auVar54 = local_d0;
    }
    plVar86 = local_d8;
    pcVar55 = (char *)((long)local_d8 + (long)auVar54 * 4);
    if (ppcVar39 != (char **)0x0) {
      (*(code *)PTR_memset_00841dd0)(pcVar55,0,(long)ppcVar39 * 4);
      auVar54 = (undefined1  [8])((long)auVar54 + (long)ppcVar39);
      pcVar55 = (char *)((long)plVar86 + (long)auVar54 * 4);
    }
    pcVar55[0] = '\0';
    pcVar55[1] = '\0';
    pcVar55[2] = '\0';
    pcVar55[3] = '\0';
    local_d0 = (undefined1  [8])((long)auVar54 + 1);
    lVar35 = lVar60 * 0x30 + lVar71;
    if (lVar60 != 0) {
      lVar41 = lVar71;
      do {
        ppcVar53 = *(char ***)(lVar41 + 0x28);
        if (ppcVar53 != (char **)0x0) {
          if (ppcVar53 <= local_308) goto LAB_0064eaa5;
          if (ppcVar53 <= (char **)((long)local_308 + 1U)) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      ((char **)((long)local_308 + 1U),ppcVar53,&PTR_s_src_generic_core_rs_00212388)
            ;
          }
          uVar61 = *(uint *)(*(long *)(lVar41 + 0x20) + (long)local_308 * 4);
          uVar47 = *(uint *)(*(long *)(lVar41 + 0x20) + 4 + (long)local_308 * 4);
          if ((uVar47 < uVar61) || (*(ulong *)(lVar41 + 0x10) < (ulong)uVar47)) {
LAB_0064e92f:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail();
          }
          if (uVar47 != uVar61) {
            puVar38 = (undefined8 *)((ulong)uVar61 * 0x30 + *(long *)(lVar41 + 8));
            puVar42 = puVar38;
            do {
              lVar44 = local_168;
              lVar36 = local_188;
              uVar77 = puVar42[3];
              uVar11 = local_180._0_8_;
              uVar12 = local_180._8_8_;
              uVar88 = local_180._8_8_ & uVar77;
              if ((ulong)local_180._0_8_ <= uVar88) {
LAB_0064e9a2:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar88,uVar11,&PTR_s_src_generic_util_rs_0020f838);
              }
              puVar1 = puVar42 + 6;
              uVar32 = local_160._0_8_;
              uVar9 = *puVar42;
              plVar86 = (long *)puVar42[1];
              while (uVar84 = *(ulong *)(lVar36 + uVar88 * 8), uVar84 != 0) {
                if ((uVar84 ^ uVar77) >> 0x20 == 0) {
                  uVar78 = (int)uVar84 - 1;
                  uVar84 = (ulong)uVar78;
                  if ((ulong)uVar32 <= uVar84) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar84,uVar32,&PTR_s_src_generic_core_rs_00211060);
                  }
                  if ((*(long **)(lVar44 + 8 + uVar84 * 0x10) == plVar86) &&
                     (iVar34 = (*(code *)PTR_memcmp_00842098)
                                         (*(undefined8 *)(uVar84 * 0x10 + lVar44),uVar9,plVar86),
                     iVar34 == 0)) {
                    if ((ulong)local_d0 <= uVar84 + 1) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar84 + 1,local_d0,&PTR_s_src_generic_core_rs_00589798);
                    }
                    piVar6 = (int *)((long)local_d8 + uVar84 * 4 + 4);
                    *piVar6 = *piVar6 + 1;
                    lVar36 = local_e8._0_8_;
                    uVar8 = uVar78;
                    if (local_e8._0_8_ != local_100._8_8_) goto LAB_0064c67c;
                    goto LAB_0064c7ce;
                  }
                }
                uVar88 = uVar88 + 1 & uVar12;
                if ((ulong)uVar11 <= uVar88) goto LAB_0064e9a2;
              }
              uVar78 = 0xffffffff;
              lVar36 = local_e8._0_8_;
              uVar8 = 0xffffffff;
              if (local_e8._0_8_ == local_100._8_8_) {
LAB_0064c7ce:
                uVar78 = uVar8;
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one();
              }
LAB_0064c67c:
              *(uint *)(local_f0 + lVar36 * 4) = uVar78;
              local_e8._0_8_ = lVar36 + 1;
              puVar42 = puVar1;
            } while (puVar1 != puVar38 + ((ulong)uVar47 - (ulong)uVar61) * 6);
          }
        }
        lVar41 = lVar41 + 0x30;
      } while (lVar41 != lVar35);
    }
    param_2 = local_d8;
    if (ppcVar39 != (char **)0x0) {
      ppcVar53 = (char **)0x0;
      do {
        if ((ulong)local_d0 <= ppcVar53) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar53,local_d0,&PTR_s_src_generic_core_rs_005898d0);
        }
        ppcVar45 = (char **)((long)ppcVar53 + 1);
        if ((ulong)local_d0 <= ppcVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar45,local_d0,&PTR_s_src_generic_core_rs_005898e8);
        }
        piVar6 = (int *)((long)local_d8 + (long)ppcVar53 * 4 + 4);
        *piVar6 = *piVar6 + *(int *)((long)local_d8 + (long)ppcVar53 * 4);
        ppcVar53 = ppcVar45;
      } while (ppcVar39 != ppcVar45);
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = local_118._8_8_;
    local_118 = auVar22 << 0x40;
    if ((ulong)local_d0 < ppcVar39) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (0,ppcVar39,local_d0,&PTR_s_src_generic_core_rs_005897b0);
    }
    if ((ulong)local_130._8_8_ < ppcVar39) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_130 + 8,0,ppcVar39,4);
      lVar41 = local_118._0_8_;
LAB_0064c87e:
      lVar36 = lVar41;
      (*(code *)PTR_memcpy_00841de0)(lVar36 * 4 + local_120,param_2,(long)ppcVar39 * 4);
    }
    else {
      lVar36 = 0;
      lVar41 = 0;
      if (ppcVar39 != (char **)0x0) goto LAB_0064c87e;
    }
    local_118._0_8_ = lVar36 + (long)ppcVar39;
    if ((ulong)local_d0 <= ppcVar39) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (ppcVar39,local_d0,&PTR_s_src_generic_core_rs_005897c8);
    }
    uVar61 = *(uint *)((long)local_d8 + (long)ppcVar39 * 4);
    pcVar55 = (char *)(ulong)uVar61;
    local_b8 = (char *)0x0;
    param_1 = ppcVar39;
    if (pcVar55 == (char *)0x0) {
      local_b8 = (char *)0x0;
    }
    else {
      if (pcStack_c8 < pcVar55) {
        param_1 = &pcStack_c8;
        param_2 = (long *)0x0;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_1,0,pcVar55,8);
      }
      else {
        local_b8 = (char *)0x0;
      }
      plVar56 = local_c0 + (long)local_b8 * 4;
      if (uVar61 != 1) {
        param_2 = (long *)(pcVar55 + -1);
        uVar77 = (ulong)((uint)param_2 & 7);
        if (uVar61 < 9) goto LAB_0064ca10;
        uVar88 = (ulong)param_2 & 0xfffffffffffffff8;
        do {
          *plVar56 = 1;
          *(undefined1 (*) [16])(plVar56 + 1) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 3) = 0;
          plVar56[4] = 1;
          *(undefined1 (*) [16])(plVar56 + 5) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 7) = 0;
          plVar56[8] = 1;
          *(undefined1 (*) [16])(plVar56 + 9) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0xb) = 0;
          plVar56[0xc] = 1;
          *(undefined1 (*) [16])(plVar56 + 0xd) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0xf) = 0;
          plVar56[0x10] = 1;
          *(undefined1 (*) [16])(plVar56 + 0x11) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0x13) = 0;
          plVar56[0x14] = 1;
          *(undefined1 (*) [16])(plVar56 + 0x15) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0x17) = 0;
          plVar56[0x18] = 1;
          *(undefined1 (*) [16])(plVar56 + 0x19) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0x1b) = 0;
          plVar56[0x1c] = 1;
          *(undefined1 (*) [16])(plVar56 + 0x1d) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 0x1f) = 0;
          plVar56 = plVar56 + 0x20;
          uVar88 = uVar88 - 8;
        } while (uVar88 != 0);
        param_2 = (long *)0x0;
        for (; uVar77 != 0; uVar77 = uVar77 - 1) {
LAB_0064ca10:
          *plVar56 = 1;
          *(undefined1 (*) [16])(plVar56 + 1) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar56 + 3) = 0;
          plVar56 = plVar56 + 4;
        }
        local_b8 = pcVar55 + (long)(local_b8 + -1);
      }
      *plVar56 = 1;
      local_b8 = local_b8 + 1;
      *(undefined1 (*) [16])(plVar56 + 1) = (undefined1  [16])0x0;
      *(undefined4 *)(plVar56 + 3) = 0;
    }
    if (lVar60 != 0) {
      param_1 = (char **)((long)local_308 + 1);
      uVar77 = 0;
      do {
        ppcVar53 = *(char ***)(lVar71 + 0x28);
        param_2 = (long *)0x0;
        if (ppcVar53 != (char **)0x0) {
          if (ppcVar53 <= local_308) {
LAB_0064eaa5:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (local_308,ppcVar53,&PTR_s_src_generic_core_rs_00212370);
          }
          if (ppcVar53 <= param_1) {
LAB_0064ead4:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      ((long)local_308 + 1,ppcVar53,&PTR_s_src_generic_core_rs_00212388);
          }
          uVar61 = *(uint *)(*(long *)(lVar71 + 0x20) + (long)local_308 * 4);
          uVar88 = (ulong)uVar61;
          uVar47 = *(uint *)(*(long *)(lVar71 + 0x20) + 4 + (long)local_308 * 4);
          param_2 = (long *)(ulong)uVar47;
          plVar56 = *(long **)(lVar71 + 0x10);
          if ((uVar47 < uVar61) || (plVar56 < param_2)) {
LAB_0064e949:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (uVar88,param_2,plVar56,&PTR_s_src_generic_core_rs_002123a0);
          }
          if (uVar47 != uVar61) {
            lVar41 = uVar88 * 0x30 + *(long *)(lVar71 + 8);
            lVar60 = ((long)param_2 - uVar88) * 0x30 + lVar41;
            do {
              if ((ulong)local_e8._0_8_ <= uVar77) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar77,local_e8._0_8_,&PTR_s_src_generic_core_rs_005897e0);
              }
              uVar88 = (ulong)*(uint *)(local_f0 + uVar77 * 4);
              param_2 = (long *)0xffffffff;
              if (uVar88 != 0xffffffff) {
                if ((ulong)local_118._0_8_ <= uVar88) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar88,local_118._0_8_,&PTR_s_src_generic_core_rs_005897f8);
                }
                pcVar55 = *(char **)(lVar41 + 0x10);
                lVar36 = *(long *)(lVar41 + 0x20);
                pcVar70 = pcVar55 + -1;
                do {
                  pcVar3 = pcVar70 + 1;
                  pcVar70 = pcVar70 + 1;
                } while (*pcVar3 != ',');
                plVar86 = (long *)(pcVar70 + -(long)pcVar55);
                if (plVar86 == (long *)0x0) {
                  plVar86 = (long *)0x0;
                }
                else if (*pcVar55 == '\"') {
                  if (plVar86 == (long *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::slice::index::slice_index_fail
                              (1,0,1,&PTR_s_src_generic_parse_rs_005899b0);
                  }
                  plVar86 = (long *)((long)plVar86 + -2);
                  pcVar55 = pcVar55 + 1;
                }
                pcVar70 = (char *)(ulong)*(uint *)(local_120 + uVar88 * 4);
                if (local_b8 <= pcVar70) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (pcVar70,local_b8,&PTR_s_src_generic_core_rs_00589810);
                }
                uVar83 = *(undefined4 *)(lVar41 + 0x28);
                local_c0[(long)pcVar70 * 4] = (long)pcVar55;
                local_c0[(long)pcVar70 * 4 + 1] = (long)plVar86;
                local_c0[(long)pcVar70 * 4 + 2] = lVar36;
                *(undefined4 *)(local_c0 + (long)pcVar70 * 4 + 3) = uVar83;
                piVar6 = (int *)(local_120 + uVar88 * 4);
                *piVar6 = *piVar6 + 1;
                param_2 = local_c0;
              }
              lVar41 = lVar41 + 0x30;
              uVar77 = uVar77 + 1;
            } while (lVar41 != lVar60);
          }
        }
        lVar71 = lVar71 + 0x30;
      } while (lVar71 != lVar35);
    }
    if ((char **)0x124924924924924 < ppcVar39) goto LAB_0064bb29;
    pcVar55 = (char *)((long)ppcVar39 * 0x70);
    if (pcVar55 == (char *)0x0) {
      lVar35 = 8;
      local_268 = 0;
    }
    else {
      lVar35 = __rustc[45371133cddedda4]::__rust_alloc(pcVar55);
      if (lVar35 == 0) goto LAB_0064eb89;
      local_268 = (long)ppcVar39 * 2;
    }
    local_258 = 0;
    local_260 = lVar35;
    if (ppcVar39 != (char **)0x0) {
      lVar41 = 0;
      ppcVar53 = (char **)0x0;
      do {
        plVar86 = local_c0;
        if ((ulong)local_130._0_8_ <= ppcVar53) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar53,local_130._0_8_,&PTR_s_src_generic_core_rs_00589828);
        }
        ppcVar45 = (char **)((long)ppcVar53 + 1);
        if ((ulong)local_130._0_8_ <= ppcVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar45,local_130._0_8_,&PTR_s_src_generic_core_rs_00589840);
        }
        uVar61 = *(uint *)(local_138 + (long)ppcVar53 * 4);
        uVar77 = (ulong)uVar61;
        uVar47 = *(uint *)(local_138 + (long)ppcVar45 * 4);
        uVar88 = (ulong)uVar47;
        if ((uVar47 < uVar61) || ((ulong)local_100._0_8_ < uVar88)) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar77,uVar88,local_100._0_8_,&PTR_s_src_generic_core_rs_005898b8);
        }
        if ((ulong)local_d0 <= ppcVar53) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar53,local_d0,&PTR_s_src_generic_core_rs_00589858);
        }
        if ((ulong)local_d0 <= ppcVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar45,local_d0,&PTR_s_src_generic_core_rs_00589870);
        }
        uVar78 = *(uint *)((long)local_d8 + (long)ppcVar53 * 4);
        uVar84 = (ulong)uVar78;
        uVar8 = *(uint *)((long)local_d8 + (long)ppcVar45 * 4);
        pcVar55 = (char *)(ulong)uVar8;
        if ((uVar8 < uVar78) || (local_b8 < pcVar55)) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar84,pcVar55,local_b8,&PTR_s_src_generic_core_rs_005898a0);
        }
        if ((ulong)local_160._0_8_ <= ppcVar53) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (ppcVar53,local_160._0_8_,&PTR_s_src_generic_core_rs_00589888);
        }
        if (uVar47 != uVar61) {
          lVar71 = uVar88 - uVar77;
          plVar56 = (long *)(uVar77 * 0x10 + local_108);
          uVar11 = *(undefined8 *)(local_168 + (long)ppcVar53 * 0x10);
          uVar12 = *(undefined8 *)(local_168 + 8 + (long)ppcVar53 * 0x10);
          local_90 = ppcVar45;
          if ((uint)lVar71 != 1) {
            if ((uint)lVar71 < 0x15) {
              lVar60 = 0;
              plVar49 = plVar56 + 2;
              plVar58 = plVar56;
              do {
                plVar82 = plVar49;
                lVar36 = plVar58[2];
                if (lVar36 < *plVar58) {
                  lVar44 = plVar58[3];
                  lVar85 = 0;
                  do {
                    pcVar70 = (char *)((long)plVar82 + lVar85 + -0x10);
                    uVar9 = *(undefined8 *)(pcVar70 + 8);
                    *(undefined8 *)((long)plVar82 + lVar85) = *(undefined8 *)pcVar70;
                    *(undefined8 *)((char *)((long)plVar82 + lVar85) + 8) = uVar9;
                    if (lVar60 == lVar85) {
                      plVar49 = plVar56;
                      goto LAB_0064e1de;
                    }
                    lVar40 = lVar85 + -0x10;
                    lVar48 = lVar85 + -0x20;
                    lVar85 = lVar40;
                  } while (lVar36 < *(long *)((long)plVar82 + lVar48));
                  plVar49 = (long *)(lVar40 + (long)plVar82);
LAB_0064e1de:
                  *plVar49 = lVar36;
                  plVar49[1] = lVar44;
                }
                lVar60 = lVar60 + -0x10;
                plVar49 = plVar82 + 2;
                plVar58 = plVar82;
              } while (plVar82 + 2 != plVar56 + lVar71 * 2);
            }
            else {
              in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
              core[62e902411887be45]::slice::sort::unstable::ipnsort::
              <pipeline[509596c7b52975b2]::generic::core::PE,<[pipeline[509596c7b52975b2]::generic::core::PE]>::sort_unstable_by_key<i64,pipeline[509596c7b52975b2]::generic::core::person::_closure_0_>::_closure_0_>
                        (plVar56);
            }
          }
          uVar77 = (long)pcVar55 - uVar84;
          local_58 = uVar84 * 0x20;
          local_50 = plVar86;
          plVar86 = plVar86 + uVar84 * 4;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = local_240._8_8_;
          local_240 = auVar23 << 0x40;
          plVar82 = plVar56 + lVar71 * 2;
          lVar71 = *plVar56;
          iVar43 = (int)(lVar71 % 86400000 >> 0x3f) + (int)(lVar71 / 86400000);
          lVar36 = 0;
          plVar49 = (long *)0x0;
          lVar60 = 0;
          plVar58 = (long *)0x0;
          lVar44 = 0;
          iVar34 = iVar43;
          do {
            auVar99 = in_ZMM2._0_16_;
            lVar85 = *plVar56;
            if ((lVar44 == 0) || (1800000 < lVar85 - lVar71)) {
              iVar80 = (int)(lVar85 % 86400000 >> 0x3f) + (int)(lVar85 / 86400000);
              if (iVar34 == iVar80) {
                lVar71 = local_240._0_8_;
                if (local_240._0_8_ == local_250) goto LAB_0064d26e;
              }
              else {
                if (local_1c8._0_8_ == 0) {
                  uVar83 = 0;
                }
                else {
                  plVar49 = (long *)(ulong)*local_1d0;
                  plVar76 = plVar49;
                  if (local_1e0 <= plVar49) {
LAB_0064ea0d:
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (plVar76,local_1e0,&PTR_s_src_generic_core_rs_00589708);
                  }
                  uVar88 = *(ulong *)(local_1e8 + (long)plVar49 * 8);
                  *(undefined8 *)(local_1e8 + (long)plVar49 * 8) = 0;
                  if (local_1c8._0_8_ != 1) {
                    lVar71 = 4;
                    do {
                      plVar76 = (long *)(ulong)*(uint *)((long)local_1d0 + lVar71);
                      if (local_1e0 <= plVar76) goto LAB_0064ea0d;
                      uVar51 = *(ulong *)(local_1e8 + (long)plVar76 * 8);
                      if (uVar88 < uVar51) {
LAB_0064d110:
                        uVar88 = uVar51;
                        plVar49 = plVar76;
                      }
                      else if ((uVar51 == uVar88) &&
                              (*(uint *)((long)local_1d0 + lVar71) < (uint)plVar49))
                      goto LAB_0064d110;
                      *(undefined8 *)(local_1e8 + (long)plVar76 * 8) = 0;
                      lVar71 = lVar71 + 4;
                    } while (local_1c8._0_8_ * 4 != lVar71);
                  }
                  uVar83 = 1;
                }
                auVar27._8_8_ = 0;
                auVar27._0_8_ = local_1c8._8_8_;
                local_1c8 = auVar27 << 0x40;
                if (lVar41 == local_268) {
                  in_ZMM2 = ZEXT1664(auVar99);
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>
                  ::grow_one(&local_268);
                  lVar35 = local_260;
                }
                auVar99 = in_ZMM2._0_16_;
                lVar71 = lVar41 * 0x38;
                *(undefined4 *)(lVar35 + lVar71) = uVar83;
                *(int *)(lVar35 + 4 + lVar71) = (int)plVar49;
                *(undefined8 *)(lVar35 + 8 + lVar71) = uVar11;
                *(undefined8 *)(lVar35 + 0x10 + lVar71) = uVar12;
                *(long *)(lVar35 + 0x18 + lVar71) = lVar36;
                *(long *)(lVar35 + 0x20 + lVar71) = lVar60;
                *(long **)(lVar35 + 0x28 + lVar71) = plVar58;
                *(int *)(lVar35 + 0x30 + lVar71) = iVar43;
                lVar41 = lVar41 + 1;
                plVar58 = (long *)0x0;
                plVar49 = (long *)0x0;
                lVar60 = 0;
                lVar36 = 0;
                lVar71 = local_240._0_8_;
                iVar43 = iVar80;
                local_258 = lVar41;
                iVar34 = iVar80;
                if (local_240._0_8_ == local_250) {
LAB_0064d26e:
                  in_ZMM2 = ZEXT1664(auVar99);
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(&local_250);
                }
              }
              lVar36 = lVar36 + 1;
              *(long *)(*local_248 + lVar71 * 0x18) = lVar85;
              *(undefined8 *)(*local_248 + lVar71 * 0x18 + 8) = 0;
              *(int *)(*local_248 + lVar71 * 0x18 + 0x10) = iVar80;
              (*local_248)[lVar71 * 0x18 + 0x14] = 0;
              local_240._0_8_ = lVar71 + 1;
              lVar71 = *plVar56;
            }
            else {
              lVar71 = lVar85;
            }
            if ((*(uint *)(plVar56 + 1) & 0xff000000) == 0x2000000) {
              if (local_240._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_generic_core_rs_005896c0);
              }
              uVar88 = (ulong)(*(uint *)(plVar56 + 1) & 0xffffff);
              *(ulong *)(local_248[-1] + local_240._0_8_ * 0x18 + 0x30) =
                   *(long *)(local_248[-1] + local_240._0_8_ * 0x18 + 0x30) + uVar88;
              local_248[-1][local_240._0_8_ * 0x18 + 0x3c] = 1;
              uVar61 = *(uint *)((long)plVar56 + 0xc);
              plVar58 = (long *)(ulong)uVar61;
              if (local_1e0 <= plVar58) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (plVar58,local_1e0,&PTR_s_src_generic_core_rs_005896d8);
              }
              if (*(long *)(local_1e8 + (long)plVar58 * 8) == 0) {
                uVar9 = local_1c8._0_8_;
                if (local_1c8._0_8_ == local_1d8) {
                  in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_1d8);
                }
                local_1d0[uVar9] = uVar61;
                local_1c8._0_8_ = uVar9 + 1;
              }
              if (local_1e0 <= plVar58) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (plVar58,local_1e0,&PTR_s_src_generic_core_rs_005896f0);
              }
              plVar49 = (long *)((long)plVar49 + uVar88);
              plVar58 = (long *)(local_1e8 + (long)plVar58 * 8);
              *plVar58 = *plVar58 + uVar88;
              plVar58 = plVar49;
            }
            plVar56 = plVar56 + 2;
            lVar44 = lVar44 + 1;
            lVar60 = lVar60 + 1;
          } while (plVar56 != plVar82);
          if (local_1c8._0_8_ == 0) {
            uVar83 = 0;
joined_r0x0064d370:
            uVar61 = (uint)plVar56;
          }
          else {
            uVar61 = *local_1d0;
            plVar56 = (long *)(ulong)uVar61;
            plVar49 = plVar56;
            if (local_1e0 <= plVar56) {
LAB_0064eaba:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (plVar49,local_1e0,&PTR_s_src_generic_core_rs_00589708);
            }
            uVar88 = *(ulong *)(local_1e8 + (long)plVar56 * 8);
            *(undefined8 *)(local_1e8 + (long)plVar56 * 8) = 0;
            uVar83 = 1;
            if (local_1c8._0_8_ != 1) {
              lVar71 = 4;
              do {
                plVar49 = (long *)(ulong)*(uint *)((long)local_1d0 + lVar71);
                if (local_1e0 <= plVar49) goto LAB_0064eaba;
                uVar51 = *(ulong *)(local_1e8 + (long)plVar49 * 8);
                if (uVar88 < uVar51) {
LAB_0064d4f0:
                  plVar56 = plVar49;
                  uVar88 = uVar51;
                }
                else if ((uVar51 == uVar88) && (*(uint *)((long)local_1d0 + lVar71) < (uint)plVar56)
                        ) goto LAB_0064d4f0;
                *(undefined8 *)(local_1e8 + (long)plVar49 * 8) = 0;
                lVar71 = lVar71 + 4;
              } while (local_1c8._0_8_ * 4 != lVar71);
              goto joined_r0x0064d370;
            }
          }
          auVar29._8_8_ = 0;
          auVar29._0_8_ = local_1c8._8_8_;
          local_1c8 = auVar29 << 0x40;
          if (lVar41 == local_268) {
            in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::
            grow_one(&local_268);
            lVar35 = local_260;
          }
          lVar71 = lVar41 * 0x38;
          *(undefined4 *)(lVar35 + lVar71) = uVar83;
          *(uint *)(lVar35 + 4 + lVar71) = uVar61;
          *(undefined8 *)(lVar35 + 8 + lVar71) = uVar11;
          *(undefined8 *)(lVar35 + 0x10 + lVar71) = uVar12;
          *(long *)(lVar35 + 0x18 + lVar71) = lVar36;
          *(long *)(lVar35 + 0x20 + lVar71) = lVar60;
          *(long **)(lVar35 + 0x28 + lVar71) = plVar58;
          *(int *)(lVar35 + 0x30 + lVar71) = iVar43;
          lVar41 = lVar41 + 1;
          auVar99 = in_ZMM2._0_16_;
          local_258 = lVar41;
          if (uVar8 == uVar78) {
            in_ZMM2 = ZEXT1664(auVar99);
            core::credit(local_248,local_240._0_8_,plVar86,0,local_1b0 + 8,uVar7,&local_b0);
            ppcVar45 = local_90;
          }
          else {
            if (uVar77 != 1) {
              if (uVar77 < 0x15) {
                plVar56 = plVar86 + 4;
                lVar71 = 0;
                plVar49 = plVar86;
                do {
                  lVar60 = plVar49[6];
                  if (lVar60 == plVar49[2]) {
                    uVar88 = plVar49[1];
                    local_2e8 = plVar49[5];
                    local_298 = *plVar56;
                    uVar51 = uVar88;
                    if (local_2e8 < uVar88) {
                      uVar51 = local_2e8;
                    }
                    in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
                    iVar34 = (*(code *)PTR_memcmp_008420a0)(local_298,*plVar49,uVar51);
                    lVar36 = local_2e8 - uVar88;
                    if (iVar34 != 0) {
                      lVar36 = (long)iVar34;
                    }
                    if (lVar36 < 0) goto LAB_0064e3a6;
                  }
                  else if (lVar60 < plVar49[2]) {
                    local_298 = *plVar56;
                    local_2e8 = plVar49[5];
LAB_0064e3a6:
                    lVar36 = plVar49[7];
                    lVar44 = plVar49[1];
                    lVar85 = plVar49[2];
                    lVar40 = plVar49[3];
                    *plVar56 = *plVar49;
                    plVar56[1] = lVar44;
                    plVar56[2] = lVar85;
                    plVar56[3] = lVar40;
                    plVar58 = plVar86;
                    if (plVar49 != plVar86) {
                      lVar44 = 0;
                      plVar82 = plVar49;
                      do {
                        plVar58 = (long *)(lVar44 + (long)plVar49);
                        lVar85 = *(long *)((long)plVar49 + lVar44 + -0x10);
                        if (lVar60 == lVar85) {
                          uVar88 = *(ulong *)((long)plVar49 + lVar44 + -0x18);
                          uVar51 = uVar88;
                          if (local_2e8 < uVar88) {
                            uVar51 = local_2e8;
                          }
                          in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
                          iVar34 = (*(code *)PTR_memcmp_008420a0)
                                             (local_298,
                                              *(undefined8 *)((long)plVar49 + lVar44 + -0x20),uVar51
                                             );
                          lVar85 = local_2e8 - uVar88;
                          if (iVar34 != 0) {
                            lVar85 = (long)iVar34;
                          }
                          if (-1 < lVar85) {
                            plVar58 = plVar82;
                            goto LAB_0064e2e5;
                          }
                        }
                        else if (lVar85 <= lVar60) goto LAB_0064e2e5;
                        plVar82 = plVar82 + -4;
                        lVar85 = *(long *)((long)plVar49 + lVar44 + -0x10);
                        lVar40 = *(long *)((long)plVar49 + lVar44 + -8);
                        *plVar58 = *(long *)((long)plVar49 + lVar44 + -0x20);
                        plVar58[1] = *(long *)((long)plVar49 + lVar44 + -0x18);
                        plVar58[2] = lVar85;
                        plVar58[3] = lVar40;
                        lVar44 = lVar44 + -0x20;
                      } while (lVar71 != lVar44);
                      plVar58 = plVar86;
                    }
LAB_0064e2e5:
                    *plVar58 = local_298;
                    plVar58[1] = local_2e8;
                    plVar58[2] = lVar60;
                    plVar58[3] = lVar36;
                  }
                  auVar99 = in_ZMM2._0_16_;
                  plVar56 = plVar56 + 4;
                  plVar49 = plVar49 + 4;
                  lVar71 = lVar71 + -0x20;
                } while (plVar56 != plVar86 + uVar77 * 4);
              }
              else {
                auVar100 = ZEXT1664(auVar99);
                core[62e902411887be45]::slice::sort::unstable::ipnsort::
                <pipeline[509596c7b52975b2]::generic::core::PC,<[pipeline[509596c7b52975b2]::generic::core::PC]>::sort_unstable_by<pipeline[509596c7b52975b2]::generic::core::person::_closure_1_>::_closure_0_>
                          (plVar86,uVar77);
                auVar99 = auVar100._0_16_;
              }
            }
            auVar100 = ZEXT1664(auVar99);
            core::credit(local_248,local_240._0_8_,plVar86,uVar77,local_1b0 + 8,uVar7,&local_b0);
            auVar15 = local_240;
            pauVar67 = local_248;
            auVar99 = auVar100._0_16_;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = local_228._8_8_;
            local_228 = auVar24 << 0x40;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = local_210._8_8_;
            local_210 = auVar25 << 0x40;
            uVar11 = local_240._0_8_;
            uVar61 = local_240._0_4_;
            if ((ulong)local_240._8_8_ < (ulong)local_240._0_8_) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_240 + 8,0,local_240._0_8_,8,8);
              auVar99 = auVar100._0_16_;
              lVar71 = local_228._0_8_;
              pauVar28 = local_248;
              auVar33 = local_240;
joined_r0x0064e4c6:
              if ((ulong)uVar11 < 5) {
LAB_0064d4c9:
                lVar36 = 0;
                lVar60 = lVar71;
              }
              else {
                auVar100 = ZEXT3264(_DAT_002030c0);
                if ((local_230 + lVar71 < pauVar67[-1] + uVar11 * 0x18 + 0x30) &&
                   (pauVar67 < (undefined1 (*) [64])(local_230 + lVar71 + uVar11)))
                goto LAB_0064d4c9;
                if ((ulong)uVar11 < 0x11) {
                  lVar44 = 0;
LAB_0064d66c:
                  uVar88 = (ulong)(uVar61 & 3);
                  if (((ulong)(byte)auVar15[0] & 3) == 0) {
                    uVar88 = 4;
                  }
                  lVar36 = uVar11 - uVar88;
                  lVar60 = lVar71 + lVar36;
                  pauVar72 = (undefined1 (*) [64])(*pauVar67 + lVar44 * 0x18);
                  do {
                    auVar98 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar72[1]),auVar100,
                                               *pauVar72);
                    *(undefined1 (*) [32])(local_230 + lVar71 + lVar44) = auVar98._0_32_;
                    lVar44 = lVar44 + 4;
                    pauVar72 = (undefined1 (*) [64])(pauVar72[1] + 0x20);
                  } while (lVar36 != lVar44);
                }
                else {
                  uVar88 = (ulong)(uVar61 & 0xf);
                  if (((ulong)(byte)auVar15[0] & 0xf) == 0) {
                    uVar88 = 0x10;
                  }
                  lVar36 = uVar11 - uVar88;
                  lVar60 = lVar71 + lVar36;
                  lVar44 = 0;
                  pauVar72 = pauVar67;
                  do {
                    auVar98 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar72[1]),auVar100,
                                               *pauVar72);
                    auVar97 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar72[2] + 0x20)),
                                               auVar100,*(undefined1 (*) [64])(pauVar72[1] + 0x20));
                    auVar95 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar72[4]),auVar100,
                                               pauVar72[3]);
                    auVar99 = auVar95._0_16_;
                    auVar96 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar72[5] + 0x20)),
                                               auVar100,*(undefined1 (*) [64])(pauVar72[4] + 0x20));
                    *(undefined1 (*) [32])(local_230 + lVar71 + lVar44) = auVar98._0_32_;
                    *(undefined1 (*) [32])(local_230 + lVar71 + lVar44 + 4) = auVar97._0_32_;
                    *(undefined1 (*) [32])(local_230 + lVar71 + lVar44 + 8) = auVar95._0_32_;
                    *(undefined1 (*) [32])(local_230 + lVar71 + lVar44 + 0xc) = auVar96._0_32_;
                    lVar44 = lVar44 + 0x10;
                    pauVar72 = pauVar72 + 6;
                  } while (lVar36 != lVar44);
                  lVar44 = lVar36;
                  if (4 < (uint)uVar88) goto LAB_0064d66c;
                }
              }
              uVar61 = uVar61 - (int)lVar36 & 7;
              lVar71 = lVar36;
              if (uVar61 != 0) {
                plVar56 = local_230 + lVar60;
                plVar49 = (long *)(*pauVar67 + lVar36 * 0x18);
                lVar71 = 0;
                do {
                  *plVar56 = *plVar49;
                  lVar71 = lVar71 + -1;
                  plVar56 = plVar56 + 1;
                  plVar49 = plVar49 + 3;
                } while (-lVar71 != (ulong)uVar61);
                lVar60 = lVar60 - lVar71;
                lVar71 = lVar36 - lVar71;
              }
              if ((ulong)(lVar36 - uVar11) < 0xfffffffffffffff9) {
                plVar56 = (long *)(*pauVar67 + lVar71 * 0x18);
                lVar71 = uVar11 - lVar71;
                do {
                  local_230[lVar60] = *plVar56;
                  local_230[lVar60 + 1] = plVar56[3];
                  local_230[lVar60 + 2] = plVar56[6];
                  local_230[lVar60 + 3] = plVar56[9];
                  local_230[lVar60 + 4] = plVar56[0xc];
                  local_230[lVar60 + 5] = plVar56[0xf];
                  local_230[lVar60 + 6] = plVar56[0x12];
                  local_230[lVar60 + 7] = plVar56[0x15];
                  lVar60 = lVar60 + 8;
                  plVar56 = plVar56 + 0x18;
                  lVar71 = lVar71 + -8;
                } while (lVar71 != 0);
              }
              local_240._0_8_ = auVar33._0_8_;
              uVar11 = local_240._0_8_;
              local_228._0_8_ = lVar60;
              uVar61 = auVar33._0_4_;
              local_248 = pauVar28;
              local_240 = auVar33;
              if ((ulong)local_240._0_8_ <= (ulong)(local_228._8_8_ - local_210._0_8_)) {
                uVar88 = local_210._0_8_;
                if (local_240._0_8_ != 0) {
                  bVar90 = 8 < (ulong)local_240._0_8_;
                  uVar51 = local_210._0_8_;
                  if (bVar90) goto LAB_0064d7e4;
                  goto LAB_0064d812;
                }
                goto LAB_0064d81c;
              }
              auVar100 = ZEXT1664(auVar99);
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_228 + 8,local_210._0_8_,uVar11,4,4);
              auVar99 = auVar100._0_16_;
              uVar51 = local_210._0_8_;
              if ((ulong)uVar11 < 9) {
LAB_0064d812:
                lVar71 = 0;
              }
              else {
LAB_0064d7e4:
                auVar30 = _DAT_002034c0;
                puVar5 = (undefined1 *)(local_218 + local_210._0_8_ * 4);
                if ((puVar5 < pauVar28[-1] + uVar11 * 0x18 + 0x3c) &&
                   (uVar51 = local_210._0_8_,
                   *pauVar28 + 0x10 < (undefined1 *)(local_218 + (local_210._0_8_ + uVar11) * 4)))
                goto LAB_0064d812;
                if ((ulong)uVar11 < 0x21) {
                  lVar60 = 0;
LAB_0064df56:
                  auVar30 = _DAT_002034c0;
                  uVar88 = (ulong)(uVar61 & 7);
                  if (((ulong)(byte)auVar33[0] & 7) == 0) {
                    uVar88 = 8;
                  }
                  lVar71 = uVar11 - uVar88;
                  uVar51 = local_210._0_8_ + lVar71;
                  pauVar67 = (undefined1 (*) [64])(*pauVar28 + lVar60 * 0x18 + 0x10);
                  auVar100 = ZEXT3264(_DAT_00203280);
                  auVar99 = DAT_00203280._0_16_;
                  do {
                    auVar98 = vmovdqu64_avx512f(*pauVar67);
                    auVar94 = vpblendd_avx2(*(undefined1 (*) [32])(pauVar67[2] + 0x20),
                                            *(undefined1 (*) [32])pauVar67[2],0xf0);
                    auVar98 = vpermt2d_avx512f(auVar98,auVar100,pauVar67[1]);
                    auVar94 = vpermt2d_avx512vl(auVar98._0_32_,auVar30,auVar94);
                    *(undefined1 (*) [32])(puVar5 + lVar60 * 4) = auVar94;
                    lVar60 = lVar60 + 8;
                    pauVar67 = pauVar67 + 3;
                  } while (lVar71 != lVar60);
                }
                else {
                  uVar88 = (ulong)(uVar61 & 0x1f);
                  if (((ulong)(byte)auVar33[0] & 0x1f) == 0) {
                    uVar88 = 0x20;
                  }
                  lVar71 = uVar11 - uVar88;
                  uVar51 = local_210._0_8_ + lVar71;
                  lVar60 = local_218 + local_210._0_8_ * 4;
                  pauVar67 = (undefined1 (*) [64])(pauVar28[9] + 0x10);
                  lVar36 = 0;
                  auVar100 = ZEXT3264(_DAT_00203280);
                  do {
                    auVar98 = vmovdqu64_avx512f(pauVar67[-9]);
                    auVar94 = vpblendd_avx2(*(undefined1 (*) [32])(pauVar67[-7] + 0x20),
                                            *(undefined1 (*) [32])pauVar67[-7],0xf0);
                    auVar98 = vpermt2d_avx512f(auVar98,auVar100,pauVar67[-8]);
                    auVar91 = vpermt2d_avx512vl(auVar98._0_32_,auVar30,auVar94);
                    auVar98 = vmovdqu64_avx512f(pauVar67[-6]);
                    auVar94 = vpblendd_avx2(*(undefined1 (*) [32])(pauVar67[-4] + 0x20),
                                            *(undefined1 (*) [32])pauVar67[-4],0xf0);
                    auVar98 = vpermt2d_avx512f(auVar98,auVar100,pauVar67[-5]);
                    auVar97 = vmovdqu64_avx512f(pauVar67[-3]);
                    auVar93 = vpblendd_avx2(*(undefined1 (*) [32])(pauVar67[-1] + 0x20),
                                            *(undefined1 (*) [32])pauVar67[-1],0xf0);
                    auVar92 = vpermt2d_avx512vl(auVar98._0_32_,auVar30,auVar94);
                    auVar98 = vpermt2d_avx512f(auVar97,auVar100,pauVar67[-2]);
                    auVar93 = vpermt2d_avx512vl(auVar98._0_32_,auVar30,auVar93);
                    auVar98 = vmovdqu64_avx512f(*pauVar67);
                    auVar94 = vpblendd_avx2(*(undefined1 (*) [32])(pauVar67[2] + 0x20),
                                            *(undefined1 (*) [32])pauVar67[2],0xf0);
                    auVar98 = vpermt2d_avx512f(auVar98,auVar100,pauVar67[1]);
                    *(undefined1 (*) [32])(lVar60 + lVar36 * 4) = auVar91;
                    *(undefined1 (*) [32])(lVar60 + 0x20 + lVar36 * 4) = auVar92;
                    *(undefined1 (*) [32])(lVar60 + 0x40 + lVar36 * 4) = auVar93;
                    auVar94 = vpermt2d_avx512vl(auVar98._0_32_,auVar30,auVar94);
                    auVar99 = auVar94._0_16_;
                    *(undefined1 (*) [32])(lVar60 + 0x60 + lVar36 * 4) = auVar94;
                    lVar36 = lVar36 + 0x20;
                    pauVar67 = pauVar67 + 0xc;
                  } while (lVar71 != lVar36);
                  lVar60 = lVar71;
                  if (8 < (uint)uVar88) goto LAB_0064df56;
                }
              }
              uVar61 = uVar61 - (int)lVar71 & 7;
              if (uVar61 == 0) {
                auVar99 = vpcmpeqd_avx(auVar99,auVar99);
                lVar60 = lVar71;
                uVar88 = 0;
              }
              else {
                puVar46 = (undefined4 *)(local_218 + uVar51 * 4);
                puVar74 = (undefined4 *)(*pauVar28 + lVar71 * 0x18 + 0x10);
                lVar60 = 0;
                auVar99 = vpcmpeqd_avx(auVar99,auVar99);
                do {
                  *puVar46 = *puVar74;
                  lVar60 = lVar60 + -1;
                  puVar46 = puVar46 + 1;
                  puVar74 = puVar74 + 6;
                } while (-lVar60 != (ulong)uVar61);
                uVar51 = uVar51 - lVar60;
                lVar60 = lVar71 - lVar60;
                uVar88 = uVar51;
              }
              in_ZMM2 = ZEXT1664(auVar99);
              if ((ulong)(lVar71 - uVar11) < 0xfffffffffffffff9) {
                puVar46 = (undefined4 *)(pauVar28[2] + lVar60 * 0x18 + 0x38);
                lVar60 = uVar11 - lVar60;
                uVar88 = uVar51;
                do {
                  *(undefined4 *)(local_218 + uVar88 * 4) = puVar46[-0x2a];
                  *(undefined4 *)(local_218 + 4 + uVar88 * 4) = puVar46[-0x24];
                  *(undefined4 *)(local_218 + 8 + uVar88 * 4) = puVar46[-0x1e];
                  *(undefined4 *)(local_218 + 0xc + uVar88 * 4) = puVar46[-0x18];
                  *(undefined4 *)(local_218 + 0x10 + uVar88 * 4) = puVar46[-0x12];
                  *(undefined4 *)(local_218 + 0x14 + uVar88 * 4) = puVar46[-0xc];
                  *(undefined4 *)(local_218 + 0x18 + uVar88 * 4) = puVar46[-6];
                  *(undefined4 *)(local_218 + 0x1c + uVar88 * 4) = *puVar46;
                  uVar88 = uVar88 + 8;
                  puVar46 = puVar46 + 0x30;
                  lVar60 = lVar60 + -8;
                } while (lVar60 != 0);
              }
              uVar11 = local_240._0_8_;
              local_210._0_8_ = uVar88;
              local_1f8 = 0;
              if (local_240._0_8_ != 0) {
                if ((ulong)local_210._8_8_ < (ulong)local_240._0_8_) {
                  auVar100 = ZEXT1664(auVar99);
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[2a0ada2ddd1fabff]::alloc::Global>(local_210 + 8,0,local_240._0_8_,4,4);
                  auVar99 = vpcmpeqd_avx(auVar100._0_16_,auVar100._0_16_);
                  in_ZMM2 = ZEXT1664(auVar99);
                  puVar46 = local_200 + local_1f8;
                  puVar74 = local_200;
                  uVar88 = local_1f8;
                }
                else {
                  uVar88 = 0;
                  puVar46 = local_200;
                  puVar74 = local_200;
                }
                local_200 = puVar74;
                if (uVar11 != 1) {
                  auVar100 = ZEXT1664(auVar99);
                  local_1f8 = uVar88;
                  (*(code *)PTR_memset_00841dd0)(puVar46,0,uVar11 * 4 + -4);
                  auVar99 = vpcmpeqd_avx(auVar100._0_16_,auVar100._0_16_);
                  in_ZMM2 = ZEXT1664(auVar99);
                  puVar46 = puVar74 + uVar11 + uVar88 + -1;
                  uVar88 = (uVar88 + uVar11) - 1;
                }
                *puVar46 = 0;
                local_1f8 = uVar88 + 1;
                uVar62 = uVar11 & 0xffffffff;
                uVar51 = uVar11;
                do {
                  uVar50 = uVar51 - 1;
                  if (uVar51 < (ulong)uVar11) {
                    if ((ulong)local_210._0_8_ <= uVar51) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar51,local_210._0_8_,&PTR_s_src_generic_core_rs_005896a8);
                    }
                    uVar88 = uVar51 & 0xffffffff;
                    if (*(int *)(local_218 + uVar51 * 4) == *(int *)(local_218 + uVar50 * 4)) {
                      uVar88 = uVar62;
                    }
                    uVar62 = uVar88;
                  }
                  puVar74[uVar50] = (int)uVar62;
                  uVar88 = local_210._0_8_;
                  uVar51 = uVar50;
                } while (uVar50 != 0);
              }
            }
            else {
              lVar71 = 0;
              uVar88 = 0;
              auVar33 = local_240;
              pauVar28 = local_248;
              if (local_240._0_8_ != 0) goto joined_r0x0064e4c6;
LAB_0064d81c:
              local_240 = auVar33;
              local_210._0_8_ = uVar88;
              local_1f8 = 0;
              auVar99 = vpcmpeqd_avx(auVar99,auVar99);
              in_ZMM2 = ZEXT1664(auVar99);
            }
            uVar51 = local_1f8;
            puVar46 = local_200;
            lVar71 = local_218;
            plVar56 = local_230;
            uVar11 = local_228._0_8_;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = local_1b0._8_8_;
            local_1b0 = auVar26 << 0x40;
            if ((ulong)local_1c8._8_8_ < uVar77) {
              auVar100 = ZEXT1664(in_ZMM2._0_16_);
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_1c8 + 8,0,uVar77,8,0x10);
              auVar99 = vpcmpeqd_avx(auVar100._0_16_,auVar100._0_16_);
              in_ZMM2 = ZEXT1664(auVar99);
              local_288 = (char *)local_1b0._0_8_;
            }
            else {
              local_288 = (char *)0x0;
            }
            puVar31 = local_1b8;
            uVar61 = (uint)uVar77 & 3;
            if (uVar84 - (long)pcVar55 < 0xfffffffffffffffd) {
              lVar60 = 0x38;
              uVar84 = 0;
              do {
                uVar62 = uVar84;
                uVar12 = *(undefined8 *)((long)plVar86 + lVar60 * 2 + -0x60);
                *(undefined4 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x38) =
                     *(undefined4 *)((long)plVar86 + lVar60 * 2 + -0x58);
                *(undefined8 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x30) = uVar12;
                uVar12 = *(undefined8 *)((long)plVar86 + lVar60 * 2 + -0x40);
                *(undefined4 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x28) =
                     *(undefined4 *)((long)plVar86 + lVar60 * 2 + -0x38);
                *(undefined8 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x20) = uVar12;
                uVar12 = *(undefined8 *)((long)plVar86 + lVar60 * 2 + -0x20);
                *(undefined4 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x18) =
                     *(undefined4 *)((long)plVar86 + lVar60 * 2 + -0x18);
                *(undefined8 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -0x10) = uVar12;
                uVar12 = *(undefined8 *)((long)plVar86 + lVar60 * 2);
                *(undefined4 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10 + -8) =
                     *(undefined4 *)((long)plVar86 + lVar60 * 2 + 8);
                *(undefined8 *)((long)local_1b8 + lVar60 + (long)local_288 * 0x10) = uVar12;
                uVar84 = uVar62 + 4;
                lVar60 = lVar60 + 0x40;
              } while ((uVar77 & 0xfffffffffffffffc) != uVar84);
              pcVar55 = (char *)((long)local_288 + uVar62 + 4);
              uVar62 = (ulong)pcVar55;
              if ((ulong)uVar61 != 0) goto LAB_0064d983;
            }
            else {
              uVar84 = 0;
              pcVar55 = local_288;
LAB_0064d983:
              lVar60 = uVar84 * 0x20 + local_58;
              uVar62 = (long)pcVar55 + (ulong)uVar61;
              uVar84 = 0;
              do {
                uVar12 = *(undefined8 *)((long)local_50 + uVar84 * 2 + lVar60 + 0x10);
                *(undefined4 *)((long)local_1b8 + uVar84 + (long)pcVar55 * 0x10) =
                     *(undefined4 *)((long)local_50 + uVar84 * 2 + lVar60 + 0x18);
                *(undefined8 *)((long)local_1b8 + uVar84 + (long)pcVar55 * 0x10 + 8) = uVar12;
                uVar84 = uVar84 + 0x10;
              } while (uVar61 << 4 != uVar84);
            }
            local_1b0._0_8_ = uVar62;
            if (uVar62 < 2) {
              if (uVar62 != 0) goto LAB_0064da09;
            }
            else {
              if (uVar62 < 0x15) {
                lVar60 = 0x10;
                puVar52 = local_1b8;
                puVar75 = local_1b8 + 4;
                do {
                  uVar61 = puVar52[4];
                  lVar36 = *(long *)(puVar52 + 6);
                  bVar90 = uVar61 < *puVar52;
                  if (uVar61 == *puVar52) {
                    bVar90 = lVar36 < *(long *)(puVar52 + 2);
                  }
                  if (bVar90) {
                    lVar44 = lVar60;
                    do {
                      *(undefined1 (*) [16])((long)local_1b8 + lVar44) =
                           *(undefined1 (*) [16])((long)local_1b8 + lVar44 + -0x10);
                      if (lVar44 == 0x10) {
                        puVar52 = local_1b8;
                        goto LAB_0064e54c;
                      }
                      uVar47 = *(uint *)((long)local_1b8 + lVar44 + -0x20);
                      bVar90 = uVar61 < uVar47;
                      if (uVar61 == uVar47) {
                        bVar90 = lVar36 < *(long *)((long)local_1b8 + lVar44 + -0x18);
                      }
                      lVar44 = lVar44 + -0x10;
                    } while (bVar90);
                    puVar52 = (uint *)(lVar44 + (long)local_1b8);
LAB_0064e54c:
                    *puVar52 = uVar61;
                    *(long *)(puVar52 + 2) = lVar36;
                  }
                  puVar4 = puVar75 + 4;
                  lVar60 = lVar60 + 0x10;
                  puVar52 = puVar75;
                  puVar75 = puVar4;
                } while (puVar4 != local_1b8 + uVar62 * 4);
              }
              else {
                auVar100 = ZEXT1664(in_ZMM2._0_16_);
                core[62e902411887be45]::slice::sort::unstable::ipnsort::
                <(u32,i64),<(u32,i64)as_core[62e902411887be45]::cmp::PartialOrd>::lt>();
                auVar99 = vpcmpeqd_avx(auVar100._0_16_,auVar100._0_16_);
                in_ZMM2 = ZEXT1664(auVar99);
              }
LAB_0064da09:
              uVar84 = 0;
              do {
                uVar61 = puVar31[uVar84 * 4];
                lVar36 = *(long *)(puVar31 + uVar84 * 4 + 2);
                lVar60 = lVar36 + 0x240c8400;
                uVar50 = uVar84 + 1;
                uVar65 = uVar50;
                if (uVar50 < uVar62) {
                  uVar81 = uVar84 + 2;
                  if (uVar84 + 2 < (long)local_288 + uVar77) {
                    uVar81 = (long)local_288 + uVar77;
                  }
                  puVar52 = puVar31 + uVar84 * 4 + 6;
                  do {
                    uVar65 = uVar50;
                    if ((puVar52[-2] != uVar61) || (lVar60 < *(long *)puVar52)) break;
                    lVar44 = *(long *)puVar52 + 0x240c8400;
                    if (lVar60 <= lVar44) {
                      lVar60 = lVar44;
                    }
                    uVar50 = uVar50 + 1;
                    puVar52 = puVar52 + 4;
                    uVar65 = uVar81;
                  } while (uVar81 != uVar50);
                }
                uVar84 = uVar65;
                if (uVar11 != 0) {
                  if (uVar11 == 1) {
                    lVar85 = *plVar56;
                    uVar65 = (ulong)(lVar85 < lVar36);
                    lVar44 = 0;
                  }
                  else {
                    lVar44 = 0;
                    uVar50 = uVar11;
                    do {
                      lVar85 = (uVar50 >> 1) + lVar44;
                      if (plVar56[lVar85] < lVar36) {
                        lVar44 = lVar85;
                      }
                      uVar50 = uVar50 - (uVar50 >> 1);
                    } while (1 < uVar50);
                    uVar65 = (ulong)(plVar56[lVar44] < lVar36) + lVar44;
                    lVar36 = 0;
                    uVar50 = uVar11;
                    do {
                      lVar44 = lVar36 + (uVar50 >> 1);
                      if (lVar60 < plVar56[lVar44]) {
                        lVar44 = lVar36;
                      }
                      uVar50 = uVar50 - (uVar50 >> 1);
                      lVar36 = lVar44;
                    } while (1 < uVar50);
                    lVar85 = plVar56[lVar44];
                  }
                  uVar50 = (ulong)(lVar85 <= lVar60) + lVar44;
                  if (uVar65 < uVar50) {
                    do {
                      if (uVar51 <= uVar65) {
                    /* WARNING: Subroutine does not return */
                        core[62e902411887be45]::panicking::panic_bounds_check
                                  (uVar65,uVar51,&PTR_s_src_generic_core_rs_00211030);
                      }
                      uVar89 = (ulong)(uint)puVar46[uVar65];
                      uVar81 = uVar50;
                      if (uVar89 < uVar50) {
                        uVar81 = uVar89;
                      }
                      if (uVar88 <= uVar65) {
                    /* WARNING: Subroutine does not return */
                        core[62e902411887be45]::panicking::panic_bounds_check
                                  (uVar65,uVar88,&PTR_s_src_generic_core_rs_00211048);
                      }
                      uVar87 = CONCAT44(uVar61,*(undefined4 *)(lVar71 + uVar65 * 4));
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = uVar87 ^ 0x243f6a8885a308d3;
                      uVar79 = SUB168(auVar13 * ZEXT816(0x82efa98ec4e6c89),8) ^
                               SUB168(auVar13 * ZEXT816(0x82efa98ec4e6c89),0);
                      auVar99 = vpbroadcastb_avx512vl();
                      lVar60 = 0;
                      uVar57 = uVar79;
                      while( true ) {
                        uVar57 = uVar57 & uStack_a8;
                        uVar66 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*local_b0 + uVar57),
                                                   auVar99);
                        if ((short)uVar66 != 0) {
                          do {
                            uVar47 = 0;
                            for (uVar78 = (uint)uVar66; (uVar78 & 1) == 0;
                                uVar78 = uVar78 >> 1 | 0x80000000) {
                              uVar47 = uVar47 + 1;
                            }
                            uVar73 = uVar47 + uVar57 & uStack_a8;
                            if (*(ulong *)((long)local_b0 + uVar73 * -0x28 + -0x28) == uVar87) {
                              lVar60 = (long)local_b0 + uVar73 * -0x28;
                              goto LAB_0064dc4e;
                            }
                            iVar34 = (uint)uVar66 - 1;
                            uVar69 = (ushort)iVar34 & (ushort)uVar66;
                            uVar66 = (ulong)CONCAT22((short)((uint)iVar34 >> 0x10),uVar69);
                          } while (uVar69 != 0);
                        }
                        uVar12 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*local_b0 + uVar57),
                                                   in_ZMM2._0_16_);
                        if ((short)uVar12 != 0) break;
                        uVar57 = uVar57 + lVar60 + 0x10;
                        lVar60 = lVar60 + 0x10;
                      }
                      if (lStack_a0 == 0) {
                        auVar100 = ZEXT1664(in_ZMM2._0_16_);
                        <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(u64,[u64;4usize])>>::
                        reserve_rehash::
                        <hashbrown[ee4ff39ba1229c30]::map::make_hasher<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
                                  (&local_b0,&local_90);
                        auVar99 = vpcmpeqd_avx(auVar100._0_16_,auVar100._0_16_);
                        in_ZMM2 = ZEXT1664(auVar99);
                      }
                      uVar57 = uVar79 & uStack_a8;
                      auVar99 = *(undefined1 (*) [16])(*local_b0 + uVar57);
                      uVar69 = (ushort)(SUB161(auVar99 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar99 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar99 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar99[0xf] >> 7) << 0xf;
                      uVar47 = (uint)uVar69;
                      if (uVar69 == 0) {
                        lVar60 = 0x10;
                        do {
                          uVar57 = uVar57 + lVar60 & uStack_a8;
                          auVar99 = *(undefined1 (*) [16])(*local_b0 + uVar57);
                          lVar60 = lVar60 + 0x10;
                          uVar47 = (uint)(ushort)((ushort)(SUB161(auVar99 >> 7,0) & 1) |
                                                  (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
                                                  (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
                                                  (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
                                                  (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
                                                  (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
                                                  (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
                                                  (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
                                                  (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
                                                  (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
                                                  (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
                                                  (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb |
                                                  (ushort)(SUB161(auVar99 >> 0x67,0) & 1) << 0xc |
                                                  (ushort)(SUB161(auVar99 >> 0x6f,0) & 1) << 0xd |
                                                  (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe |
                                                 (ushort)(byte)(auVar99[0xf] >> 7) << 0xf);
                        } while (uVar47 == 0);
                      }
                      uVar78 = 0;
                      for (; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                        uVar78 = uVar78 + 1;
                      }
                      uVar57 = uVar78 + uVar57 & uStack_a8;
                      bVar68 = (*local_b0)[uVar57];
                      if (-1 < (char)bVar68) {
                        auVar99 = *local_b0;
                        uVar47 = 0;
                        for (uVar78 = (uint)(ushort)((ushort)(SUB161(auVar99 >> 7,0) & 1) |
                                                     (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
                                                     (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
                                                     (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
                                                     (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
                                                     (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
                                                     (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
                                                     (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
                                                     (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
                                                     (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
                                                     (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
                                                     (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb
                                                     | (ushort)(SUB161(auVar99 >> 0x67,0) & 1) <<
                                                       0xc | (ushort)(SUB161(auVar99 >> 0x6f,0) & 1)
                                                             << 0xd |
                                                     (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe
                                                    | (ushort)(byte)(auVar99[0xf] >> 7) << 0xf);
                            (uVar78 & 1) == 0; uVar78 = uVar78 >> 1 | 0x80000000) {
                          uVar47 = uVar47 + 1;
                        }
                        uVar57 = (ulong)uVar47;
                        bVar68 = (*local_b0)[uVar57];
                      }
                      bVar59 = (byte)(uVar79 >> 0x39);
                      (*local_b0)[uVar57] = bVar59;
                      local_b0[1][uVar57 - 0x10 & uStack_a8] = bVar59;
                      lVar60 = (long)local_b0 + uVar57 * -0x28;
                      lStack_a0 = lStack_a0 - (ulong)(bVar68 & 1);
                      *(ulong *)((long)local_b0 + uVar57 * -0x28 + -0x28) = uVar87;
                      puVar42 = (undefined8 *)((long)local_b0 + uVar57 * -0x28 + -0x20);
                      *puVar42 = 0;
                      puVar42[1] = 0;
                      puVar42[2] = 0;
                      puVar42[3] = 0;
                      lStack_98 = lStack_98 + 1;
LAB_0064dc4e:
                      *(long *)(lVar60 + -8) = *(long *)(lVar60 + -8) + (uVar81 - uVar65);
                      uVar65 = uVar81;
                    } while (uVar89 < uVar50);
                  }
                }
              } while (uVar84 < uVar62);
            }
            ppcVar45 = local_90;
          }
        }
        ppcVar53 = ppcVar45;
      } while (ppcVar45 != ppcVar39);
      local_288 = local_78;
    }
    local_38 = local_258;
    local_48 = local_268;
    lStack_40 = local_260;
    if (local_288 == local_88) {
      in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                (&local_88);
    }
    lVar35 = (long)local_288 * 0x20;
    *(char ***)(local_80 + lVar35) = local_308;
    *(long *)(local_80 + lVar35 + 8) = local_48;
    *(long *)((long)(local_80 + lVar35 + 8) + 8) = lStack_40;
    *(long *)(local_80 + lVar35 + 0x18) = local_38;
    local_78 = local_288 + 1;
    LOCK();
    local_308 = (char **)*local_68;
    *local_68 = *local_68 + 1;
    UNLOCK();
    if (local_60 <= local_308) goto LAB_0064e8dd;
  } while( true );
}


// ==== pipeline::generic::util::par_run::<(), core::result::Result<(), core::io::error::Error>, pipeline::generic::run::{closure#13}, pipeline::generic::run::{closure#14}>::{closure#0} @ 0064ebc0 (12241 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::util::par_run::<(),
   core[62e902411887be45]::result::Result<(), core[62e902411887be45]::io::error::Error>,
   pipeline[509596c7b52975b2]::generic::run::{closure#13},
   pipeline[509596c7b52975b2]::generic::run::{closure#14}>::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::util::par_run::
<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::{closure#13},pipeline[509596c7b52975b2]::generic::run::{closure#14}>
::_closure_0_(long *param_1,long param_2)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulong *puVar12;
  char cVar13;
  int iVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  long *plVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  code *pcVar24;
  long lVar25;
  code *pcVar26;
  undefined1 (*pauVar27) [64];
  code *pcVar28;
  long lVar29;
  undefined1 (*pauVar30) [16];
  undefined8 uVar31;
  code *pcVar32;
  ulong uVar33;
  short sVar34;
  uint uVar35;
  code *pcVar36;
  code *pcVar37;
  long lVar38;
  undefined1 (*pauVar39) [16];
  undefined4 uVar40;
  long lVar41;
  code *pcVar42;
  long in_FS_OFFSET;
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined8 extraout_XMM0_Qa;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined1 extraout_var [56];
  undefined1 auVar46 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar47 [64];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 auVar48 [64];
  undefined1 extraout_var_06 [56];
  undefined1 auVar49 [64];
  undefined1 extraout_var_07 [56];
  undefined1 auVar50 [64];
  undefined1 extraout_var_08 [56];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  undefined1 auVar66 [16];
  code *local_448;
  code *local_430;
  code *local_410;
  code *local_408;
  code *local_400;
  code *local_3f8;
  code *local_3f0;
  code *local_3e8;
  code *local_3e0;
  code *local_3d8;
  code *local_3d0;
  code *local_3c8;
  code *pcStack_3c0;
  code *local_3b8;
  code *local_3b0;
  code *local_3a8;
  code *local_3a0;
  code *local_398;
  code *local_390;
  code *local_388;
  code *local_380;
  code *local_378;
  code *local_370;
  code *local_368;
  code *local_360;
  code *local_358;
  code *local_350;
  code *local_348;
  code *pcStack_340;
  long local_338;
  code *local_330;
  code *pcStack_328;
  code *local_320;
  code *local_318;
  code *pcStack_310;
  long lStack_308;
  code *pcStack_300;
  long lStack_2f8;
  long *local_2f0;
  code *local_2e8;
  code *local_2e0;
  long local_2d8;
  long local_2d0;
  long local_2c8;
  ulong local_2c0;
  code *local_2b8;
  ulong local_2b0;
  ulong *local_2a8;
  ulong local_2a0;
  ulong local_298;
  code *local_290;
  code *local_288;
  code *local_280;
  ulong local_278;
  code *local_270;
  undefined8 local_268;
  ulong *local_260;
  code *local_258;
  code *pcStack_250;
  code *local_248;
  code *pcStack_240;
  code *local_238;
  code *pcStack_230;
  undefined2 local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8;
  long lStack_1f0;
  char *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 local_1a8;
  char *local_180;
  undefined8 local_178;
  undefined4 local_170;
  code *local_168;
  code *local_160;
  undefined1 local_158;
  char *local_130;
  undefined8 local_128;
  undefined4 local_120;
  code *local_118;
  code *local_110;
  undefined1 local_108;
  char *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  long lStack_a0;
  undefined2 local_98;
  char *local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  code *local_70;
  undefined1 local_68;
  char *local_40;
  undefined8 local_38;
  
  local_2d8 = 0;
  local_2d0 = 8;
  local_2a8 = *(ulong **)(param_2 + 8);
  local_2b0 = *(ulong *)(param_2 + 0x18);
  local_2c8 = 0;
  LOCK();
  local_2a0 = *local_2a8;
  *local_2a8 = *local_2a8 + 1;
  UNLOCK();
  if (local_2a0 < local_2b0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    local_2c0 = 0x7ffffffffffffffc;
    local_2f0 = param_1;
    do {
      local_298 = local_2a0;
      if (local_2a0 != *(ulong *)*puVar4) {
        pcVar28 = (code *)(*(long *)puVar4[6] * local_2a0);
        if ((code *)0xff < pcVar28) {
          pcVar28 = (code *)&DAT_00000100;
        }
        pcVar15 = (code *)((local_2a0 + 1) * *(long *)puVar4[6]);
        pcVar18 = (code *)&DAT_00000100;
        if (pcVar15 < &DAT_00000100) {
          pcVar18 = pcVar15;
        }
        if ((pcVar15 < pcVar28) || (*(code **)(puVar4[5] + 0x10) < pcVar18)) goto LAB_00651b20;
        lVar25 = *(long *)(puVar4[5] + 8);
        uVar31 = *(undefined8 *)(puVar4[7] + 8);
        uVar6 = *(undefined8 *)(puVar4[7] + 0x10);
        local_260 = &local_298;
        local_258 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
        alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_278,&DAT_0020c382,&local_260);
        pcVar15 = local_270;
        <std[c60ef17cbf7de79f]::path::Path>::_join(&local_290,uVar31,uVar6,local_270,local_268);
        if (local_278 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar15 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar15)) {
            free(pcVar15);
          }
          else {
            uVar22 = local_278;
            if (local_278 < 0x11) {
              uVar22 = 0x10;
            }
            lVar41 = LZCOUNT(uVar22 - 1);
            lVar29 = 0x40 - lVar41;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar15,lVar29), cVar13 == '\0')) {
              if (lVar41 == 0) goto LAB_00651ba2;
              *(undefined8 *)pcVar15 = *(undefined8 *)(in_FS_OFFSET + lVar29 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar29 * 8 + -0x3c8) = pcVar15;
            }
          }
        }
        local_358 = *(code **)(puVar4[8] + 8);
        pcVar15 = *(code **)(puVar4[8] + 0x10);
        uVar22 = (long)pcVar18 - (long)pcVar28;
        local_3d8 = local_288;
        local_3a0 = local_280;
        if (uVar22 == 0) {
          pcVar16 = (code *)0x0;
        }
        else {
          if (uVar22 < 5) {
            lVar19 = 0;
            pcVar16 = (code *)0x0;
          }
          else {
            auVar46 = ZEXT3264(_DAT_002030c0);
            if (uVar22 < 0x11) {
              pcVar16 = (code *)0x0;
              lVar29 = 0;
            }
            else {
              uVar23 = (ulong)((uint)uVar22 & 0xf);
              if ((uVar22 & 0xf) == 0) {
                uVar23 = 0x10;
              }
              lVar19 = uVar22 - uVar23;
              pauVar27 = (undefined1 (*) [64])(lVar25 + (long)pcVar28 * 0x18 + 0x130);
              lVar29 = 0;
              lVar53 = 0;
              lVar54 = 0;
              lVar55 = 0;
              lVar41 = 0;
              lVar56 = 0;
              lVar57 = 0;
              lVar58 = 0;
              lVar38 = 0;
              lVar59 = 0;
              lVar60 = 0;
              lVar61 = 0;
              lVar62 = 0;
              lVar63 = 0;
              lVar64 = 0;
              lVar65 = 0;
              uVar33 = uVar22;
              do {
                auVar52 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar27[-4] + 0x20)),
                                           auVar46,*(undefined1 (*) [64])(pauVar27[-5] + 0x20));
                auVar45 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar27[-2]),auVar46,
                                           pauVar27[-3]);
                auVar43 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar27[-1] + 0x20)),
                                           auVar46,*(undefined1 (*) [64])(pauVar27[-2] + 0x20));
                auVar44 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar27[1]),auVar46,
                                           *pauVar27);
                lVar29 = auVar52._0_8_ + lVar29;
                lVar53 = auVar52._8_8_ + lVar53;
                lVar54 = auVar52._16_8_ + lVar54;
                lVar55 = auVar52._24_8_ + lVar55;
                lVar41 = auVar45._0_8_ + lVar41;
                lVar56 = auVar45._8_8_ + lVar56;
                lVar57 = auVar45._16_8_ + lVar57;
                lVar58 = auVar45._24_8_ + lVar58;
                lVar38 = auVar43._0_8_ + lVar38;
                lVar59 = auVar43._8_8_ + lVar59;
                lVar60 = auVar43._16_8_ + lVar60;
                lVar61 = auVar43._24_8_ + lVar61;
                lVar62 = auVar44._0_8_ + lVar62;
                lVar63 = auVar44._8_8_ + lVar63;
                lVar64 = auVar44._16_8_ + lVar64;
                lVar65 = auVar44._24_8_ + lVar65;
                pauVar27 = pauVar27 + 6;
                uVar33 = uVar33 - 0x10;
              } while (uVar23 != uVar33);
              auVar66._0_8_ = lVar62 + lVar38 + lVar41 + lVar29;
              auVar66._8_8_ = lVar63 + lVar59 + lVar56 + lVar53;
              auVar1._16_8_ = lVar64 + lVar60 + lVar57 + lVar54;
              auVar1._0_16_ = auVar66;
              auVar1._24_8_ = lVar65 + lVar61 + lVar58 + lVar55;
              auVar66 = vpaddq_avx(auVar66,auVar1._16_16_);
              auVar7 = vpshufd_avx(auVar66,0xee);
              auVar66 = vpaddq_avx(auVar66,auVar7);
              pcVar16 = auVar66._0_8_;
              lVar29 = lVar19;
              if ((uint)uVar23 < 5) goto LAB_0064f6d1;
            }
            uVar23 = (ulong)((uint)uVar22 & 3);
            if ((uVar22 & 3) == 0) {
              uVar23 = 4;
            }
            auVar52 = ZEXT864(pcVar16);
            lVar19 = uVar22 - uVar23;
            pcVar16 = pcVar28 + ((uVar23 + lVar29) - (long)pcVar18);
            pauVar27 = (undefined1 (*) [64])((long)pcVar28 * 0x18 + lVar29 * 0x18 + lVar25 + 0x10);
            do {
              auVar45 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar27[1]),auVar46,
                                         *pauVar27);
              auVar7._0_8_ = auVar45._0_8_ + auVar52._0_8_;
              auVar7._8_8_ = auVar45._8_8_ + auVar52._8_8_;
              auVar2._16_8_ = auVar45._16_8_ + auVar52._16_8_;
              auVar2._0_16_ = auVar7;
              auVar2._24_8_ = auVar45._24_8_ + auVar52._24_8_;
              auVar52 = ZEXT3264(auVar2);
              pauVar27 = (undefined1 (*) [64])(pauVar27[1] + 0x20);
              pcVar16 = pcVar16 + 4;
            } while (pcVar16 != (code *)0x0);
            auVar66 = vpaddq_avx(auVar7,auVar2._16_16_);
            auVar7 = vpshufd_avx(auVar66,0xee);
            auVar66 = vpaddq_avx(auVar66,auVar7);
            pcVar16 = auVar66._0_8_;
          }
LAB_0064f6d1:
          pcVar17 = pcVar28 + (lVar19 - (long)pcVar18);
          plVar20 = (long *)((long)pcVar28 * 0x18 + lVar19 * 0x18 + lVar25 + 0x10);
          do {
            pcVar16 = pcVar16 + *plVar20;
            plVar20 = plVar20 + 3;
            pcVar17 = pcVar17 + 1;
          } while (pcVar17 != (code *)0x0);
        }
        uVar23 = (long)pcVar16 * 4;
        <pipeline[509596c7b52975b2]::generic::StrBuf>::new
                  (&local_350,(ulong)pcVar16 >> 1,(long)pcVar16 * 0xc);
        if (pcVar16 < (code *)0x4000000000000000 && uVar23 <= local_2c0) {
          if (uVar23 == 0) {
            local_3d0 = (code *)0x0;
            local_3c8 = (code *)&DAT_00000004;
            pcStack_3c0 = (code *)0x0;
            local_448 = (code *)&DAT_00000004;
          }
          else {
            pcVar17 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar23,4);
            if (pcVar17 == (code *)0x0) goto LAB_00651b4f;
            pcStack_3c0 = (code *)0x0;
            local_3d0 = pcVar16;
            local_3c8 = pcVar17;
            local_448 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar23,4);
            if (local_448 == (code *)0x0) goto LAB_00651b4f;
          }
          local_368 = (code *)0x0;
          uVar33 = (long)pcVar16 * 8;
          local_378 = pcVar16;
          local_370 = local_448;
          if ((ulong)pcVar16 >> 0x3d == 0 && uVar33 < 0x7ffffffffffffff9) {
            if (uVar33 == 0) {
              local_408 = (code *)0x0;
              local_400 = (code *)&DAT_00000008;
              local_3f8 = (code *)0x0;
              local_3f0 = (code *)0x0;
              local_3e8 = (code *)&DAT_00000008;
              local_3e0 = (code *)0x0;
              pcVar21 = (code *)&DAT_00000008;
              pcVar17 = (code *)&DAT_00000008;
              pcVar36 = (code *)&DAT_00000008;
            }
            else {
              pcVar17 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar33,8);
              if (pcVar17 == (code *)0x0) {
LAB_00651b69:
                    /* WARNING: Subroutine does not return */
                alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar33);
              }
              local_3f8 = (code *)0x0;
              local_408 = pcVar16;
              local_400 = pcVar17;
              pcVar21 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar33,8);
              if (pcVar21 == (code *)0x0) goto LAB_00651b69;
              local_3e0 = (code *)0x0;
              local_3f0 = pcVar16;
              local_3e8 = pcVar21;
              pcVar36 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar33,8);
              if (pcVar36 == (code *)0x0) goto LAB_00651b69;
            }
            local_3a8 = (code *)0x0;
            local_3b8 = pcVar16;
            local_3b0 = pcVar36;
            local_360 = pcVar15;
            if (uVar23 == 0) {
              pcVar15 = (code *)&DAT_00000004;
              local_390 = (code *)0x0;
            }
            else {
              pcVar15 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar23,4);
              if (pcVar15 == (code *)0x0) goto LAB_00651b4f;
              local_390 = pcVar16;
            }
            local_380 = (code *)0x0;
            local_388 = pcVar15;
            if (pcVar18 == pcVar28) {
              pcVar16 = (code *)0x0;
              pcVar18 = (code *)0x0;
              pcVar42 = (code *)0x0;
              local_430 = (code *)0x0;
              pcVar37 = (code *)0x0;
            }
            else {
              pcVar28 = (code *)(lVar25 + (long)pcVar28 * 0x18);
              local_2e8 = pcVar28 + uVar22 * 0x18;
              pcVar16 = (code *)0x0;
              pcVar18 = (code *)0x0;
              pcVar42 = (code *)0x0;
              pcVar37 = (code *)0x0;
              local_430 = (code *)0x0;
              lVar25 = 0;
              do {
                lVar29 = *(long *)(pcVar28 + 0x10);
                local_2e0 = pcVar28;
                if (lVar29 != 0) {
                  lVar41 = *(long *)(pcVar28 + 8);
                  lVar38 = 0;
                  do {
                    uVar31 = *(undefined8 *)(lVar41 + 8 + lVar38);
                    uVar22 = *(ulong *)(lVar41 + 0x10 + lVar38);
                    if ((lVar25 == 0) || (uVar23 != uVar22)) {
LAB_0064fbeb:
                      if ((ulong)(local_338 - (long)pcStack_328) < uVar22) {
                        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                        do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                                  (&local_338,pcStack_328,uVar22,1,1);
LAB_0064fc0e:
                        pcVar28 = pcStack_328;
                        (*(code *)PTR_memcpy_00841de0)(local_330 + (long)pcStack_328,uVar31,uVar22);
                      }
                      else {
                        pcVar28 = pcStack_328;
                        if (uVar22 != 0) goto LAB_0064fc0e;
                      }
                      pcVar18 = pcStack_340;
                      pcVar28 = pcVar28 + uVar22;
                      pcStack_328 = pcVar28;
                      if (pcStack_340 == local_350) {
                        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_350);
                      }
                      *(int *)(local_348 + (long)pcVar18 * 4) = (int)pcVar28;
                      pcStack_340 = pcVar18 + 1;
                      lVar25 = *(long *)(lVar41 + 8 + lVar38);
                      uVar23 = *(ulong *)(lVar41 + 0x10 + lVar38);
                      pcVar28 = pcStack_340;
                      if (pcStack_3c0 == local_3d0) {
LAB_0064fdae:
                        pcVar28 = pcStack_340;
                        pcVar18 = pcStack_3c0;
                        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_3d0);
                        pcStack_3c0 = pcVar18;
                      }
                    }
                    else {
                      iVar14 = (*(code *)PTR_memcmp_00842098)(lVar25,uVar31,uVar23);
                      if (iVar14 != 0) {
                        uVar22 = uVar23;
                        goto LAB_0064fbeb;
                      }
                      pcVar28 = pcStack_340;
                      if (pcStack_3c0 == local_3d0) goto LAB_0064fdae;
                    }
                    *(int *)(local_3c8 + (long)pcStack_3c0 * 4) = (int)pcVar28 + -2;
                    pcStack_3c0 = pcStack_3c0 + 1;
                    uVar40 = *(undefined4 *)(lVar41 + 0x30 + lVar38);
                    if (local_430 == local_378) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_378);
                      local_448 = local_370;
                    }
                    pcVar18 = local_3f8;
                    *(undefined4 *)(local_448 + (long)local_430 * 4) = uVar40;
                    local_430 = local_430 + 1;
                    uVar31 = *(undefined8 *)(lVar41 + 0x18 + lVar38);
                    local_368 = local_430;
                    if (local_3f8 == local_408) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_408);
                    }
                    pcVar16 = local_3e0;
                    pcVar17 = local_400;
                    *(undefined8 *)(local_400 + (long)pcVar18 * 8) = uVar31;
                    pcVar18 = pcVar18 + 1;
                    uVar31 = *(undefined8 *)(lVar41 + 0x20 + lVar38);
                    local_3f8 = pcVar18;
                    if (local_3e0 == local_3f0) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_3f0);
                    }
                    pcVar42 = local_3a8;
                    pcVar21 = local_3e8;
                    *(undefined8 *)(local_3e8 + (long)pcVar16 * 8) = uVar31;
                    pcVar16 = pcVar16 + 1;
                    uVar31 = *(undefined8 *)(lVar41 + 0x28 + lVar38);
                    local_3e0 = pcVar16;
                    if (local_3a8 == local_3b8) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_3b8);
                    }
                    pcVar37 = local_380;
                    *(undefined8 *)(local_3b0 + (long)pcVar42 * 8) = uVar31;
                    pcVar42 = pcVar42 + 1;
                    uVar40 = 0xffffffff;
                    if (*(int *)(lVar41 + lVar38) == 1) {
                      uVar40 = *(undefined4 *)(lVar41 + 4 + lVar38);
                    }
                    pcVar36 = local_3b0;
                    local_3a8 = pcVar42;
                    if (local_380 == local_390) {
                      local_398 = local_3b0;
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_390);
                      pcVar36 = local_398;
                    }
                    *(undefined4 *)(local_388 + (long)pcVar37 * 4) = uVar40;
                    pcVar37 = pcVar37 + 1;
                    lVar38 = lVar38 + 0x38;
                    pcVar15 = local_388;
                    local_380 = pcVar37;
                  } while (lVar29 * 0x38 != lVar38);
                }
                pcVar28 = local_2e0 + 0x18;
              } while (pcVar28 != local_2e8);
            }
            pcVar28 = local_360;
            uVar23 = (long)local_360 * 4 + 4;
            local_398 = pcVar36;
            pcVar36 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar23,4);
            if (pcVar36 == (code *)0x0) {
LAB_00651b4f:
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar23);
            }
            local_320 = pcVar28 + 1;
            *(undefined4 *)pcVar36 = 0;
            pcStack_310 = _DAT_002025c0;
            lStack_308 = _UNK_002025c8;
            pcStack_300 = _DAT_002025c0;
            lStack_2f8 = _UNK_002025c8;
            pcVar24 = (code *)&DAT_00000001;
            local_318 = pcVar36;
            if (pcVar28 == (code *)0x0) {
LAB_00650ac5:
              pcVar32 = local_318;
              bVar10 = true;
              if (pcVar37 != (code *)0x0) {
                pcVar28 = (code *)__rustc[45371133cddedda4]::__rust_alloc(pcVar37,1);
                if (pcVar28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,pcVar37);
                }
                bVar10 = true;
                if ((pcVar37 < &DAT_00000008) ||
                   ((pcVar28 < pcVar15 + (long)pcVar37 * 4 && (pcVar15 < pcVar28 + (long)pcVar37))))
                {
                  pcVar36 = (code *)0x0;
LAB_00650b2b:
                  uVar22 = (ulong)pcVar37 & 7;
                  pcVar26 = pcVar36;
                  if (uVar22 != 0) {
                    do {
                      pcVar28[(long)pcVar26] = pcVar15[(long)pcVar26 * 4];
                      pcVar26 = pcVar26 + 1;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  if ((ulong)((long)pcVar36 - (long)pcVar37) < 0xfffffffffffffff9) {
                    do {
                      pcVar28[(long)pcVar26] = pcVar15[(long)pcVar26 * 4];
                      (pcVar28 + 1)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 4];
                      (pcVar28 + 2)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 8];
                      (pcVar28 + 3)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 0xc];
                      (pcVar28 + 4)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 0x10];
                      (pcVar28 + 5)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 0x14];
                      (pcVar28 + 6)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 0x18];
                      (pcVar28 + 7)[(long)pcVar26] = pcVar15[(long)pcVar26 * 4 + 0x1c];
                      pcVar26 = pcVar26 + 8;
                    } while (pcVar37 != pcVar26);
                    bVar11 = false;
                    uVar40 = 0;
                    goto LAB_00650bcd;
                  }
                }
                else if (&DAT_0000001f < pcVar37) {
                  pcVar36 = (code *)((ulong)pcVar37 & 0xffffffffffffffe0);
                  pcVar26 = (code *)0x0;
                  do {
                    auVar1 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x20);
                    auVar2 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x40);
                    auVar3 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x60);
                    auVar66 = vpmovdb_avx512vl(*(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4));
                    *(long *)(pcVar28 + (long)pcVar26) = auVar66._0_8_;
                    auVar66 = vpmovdb_avx512vl(auVar1);
                    *(long *)(pcVar28 + 8 + (long)pcVar26) = auVar66._0_8_;
                    auVar66 = vpmovdb_avx512vl(auVar2);
                    *(long *)(pcVar28 + 0x10 + (long)pcVar26) = auVar66._0_8_;
                    auVar66 = vpmovdb_avx512vl(auVar3);
                    *(long *)(pcVar28 + 0x18 + (long)pcVar26) = auVar66._0_8_;
                    pcVar26 = pcVar26 + 0x20;
                  } while (pcVar36 != pcVar26);
                  if (pcVar37 != pcVar36) {
                    pcVar26 = pcVar36;
                    if (((ulong)pcVar37 & 0x18) == 0) goto LAB_00650b2b;
                    goto LAB_00651a13;
                  }
                }
                else {
                  pcVar26 = (code *)0x0;
LAB_00651a13:
                  pcVar36 = (code *)((ulong)pcVar37 & 0xfffffffffffffff8);
                  do {
                    auVar66 = vpmovdb_avx512vl(*(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4));
                    *(long *)(pcVar28 + (long)pcVar26) = auVar66._0_8_;
                    pcVar26 = pcVar26 + 8;
                  } while (pcVar36 != pcVar26);
                  if (pcVar37 != pcVar36) goto LAB_00650b2b;
                }
                bVar11 = false;
                uVar40 = 0;
                goto LAB_00650bcd;
              }
              bVar11 = false;
              pcVar37 = (code *)0x0;
              uVar40 = 0;
              pcVar28 = (code *)&DAT_00000001;
              local_b8 = local_318;
            }
            else {
              pcVar36 = local_358 + (long)pcVar28 * 0x10;
              pcVar28 = local_358;
              do {
                uVar31 = *(undefined8 *)pcVar28;
                uVar22 = *(ulong *)(pcVar28 + 8);
                if ((ulong)(lStack_308 - lStack_2f8) < uVar22) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[2a0ada2ddd1fabff]::alloc::Global>(&lStack_308,lStack_2f8,uVar22,1,1);
                  pcVar24 = pcStack_310;
LAB_006508d0:
                  lVar25 = lStack_2f8;
                  (*(code *)PTR_memcpy_00841de0)(pcStack_300 + lStack_2f8,uVar31,uVar22);
                  lStack_2f8 = lVar25;
                }
                else if (uVar22 != 0) goto LAB_006508d0;
                lVar25 = lStack_2f8 + uVar22;
                lStack_2f8 = lVar25;
                if (pcVar24 == local_320) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_320);
                }
                pcVar32 = local_318;
                *(int *)(local_318 + (long)pcVar24 * 4) = (int)lVar25;
                pcVar24 = pcVar24 + 1;
                pcVar28 = pcVar28 + 0x10;
                pcStack_310 = pcVar24;
              } while (pcVar28 != pcVar36);
              if (local_360 < (code *)0xff) goto LAB_00650ac5;
              uVar40 = 2;
              bVar11 = true;
              if ((code *)0xfffe < local_360) {
                bVar10 = true;
                local_b8 = local_318;
                pcVar28 = pcVar15;
                goto LAB_00650c1d;
              }
              uVar40 = 1;
              if (pcVar37 == (code *)0x0) {
                pcVar37 = (code *)0x0;
                bVar10 = false;
                local_b8 = local_318;
                pcVar28 = (code *)&_nl_current_LC_CTYPE_used;
                goto LAB_00650c1d;
              }
              lVar25 = (long)pcVar37 * 2;
              pcVar28 = (code *)__rustc[45371133cddedda4]::__rust_alloc(lVar25,2);
              if (pcVar28 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(2,lVar25);
              }
              if ((pcVar37 < &DAT_00000008) ||
                 ((pcVar28 < pcVar15 + (long)pcVar37 * 4 && (pcVar15 < pcVar28 + lVar25)))) {
                pcVar36 = (code *)0x0;
LAB_00650a2b:
                uVar22 = (ulong)pcVar37 & 7;
                pcVar26 = pcVar36;
                if (uVar22 != 0) {
                  do {
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4);
                    pcVar26 = pcVar26 + 1;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
                if ((ulong)((long)pcVar36 - (long)pcVar37) < 0xfffffffffffffff9) {
                  do {
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 2) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 4);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 4) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 8);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 6) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 0xc);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 8) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 0x10);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 10) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 0x14);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 0xc) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 0x18);
                    *(undefined2 *)(pcVar28 + (long)pcVar26 * 2 + 0xe) =
                         *(undefined2 *)(pcVar15 + (long)pcVar26 * 4 + 0x1c);
                    pcVar26 = pcVar26 + 8;
                  } while (pcVar37 != pcVar26);
                }
              }
              else if (&DAT_0000001f < pcVar37) {
                pcVar36 = (code *)((ulong)pcVar37 & 0xffffffffffffffe0);
                pcVar26 = (code *)0x0;
                do {
                  auVar1 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x20);
                  auVar2 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x40);
                  auVar3 = *(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4 + 0x60);
                  auVar66 = vpmovdw_avx512vl(*(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4));
                  *(undefined1 (*) [16])(pcVar28 + (long)pcVar26 * 2) = auVar66;
                  auVar66 = vpmovdw_avx512vl(auVar1);
                  *(undefined1 (*) [16])(pcVar28 + (long)pcVar26 * 2 + 0x10) = auVar66;
                  auVar66 = vpmovdw_avx512vl(auVar2);
                  *(undefined1 (*) [16])(pcVar28 + (long)pcVar26 * 2 + 0x20) = auVar66;
                  auVar66 = vpmovdw_avx512vl(auVar3);
                  *(undefined1 (*) [16])(pcVar28 + (long)pcVar26 * 2 + 0x30) = auVar66;
                  pcVar26 = pcVar26 + 0x20;
                } while (pcVar36 != pcVar26);
                if (pcVar37 != pcVar36) {
                  pcVar26 = pcVar36;
                  if (((ulong)pcVar37 & 0x18) == 0) goto LAB_00650a2b;
                  goto LAB_00651ab3;
                }
              }
              else {
                pcVar26 = (code *)0x0;
LAB_00651ab3:
                pcVar36 = (code *)((ulong)pcVar37 & 0xfffffffffffffff8);
                do {
                  auVar66 = vpmovdw_avx512vl(*(undefined1 (*) [32])(pcVar15 + (long)pcVar26 * 4));
                  *(undefined1 (*) [16])(pcVar28 + (long)pcVar26 * 2) = auVar66;
                  pcVar26 = pcVar26 + 8;
                } while (pcVar36 != pcVar26);
                if (pcVar37 != pcVar36) goto LAB_00650a2b;
              }
              uVar40 = 1;
              bVar10 = false;
              bVar11 = true;
LAB_00650bcd:
              local_b8 = pcVar32;
            }
LAB_00650c1d:
            local_260 = (ulong *)CONCAT44(local_260._4_4_,2);
            local_258 = local_3c8;
            pcStack_250 = pcStack_3c0;
            local_248 = local_348;
            pcStack_240 = pcStack_340;
            local_238 = local_330;
            pcStack_230 = pcStack_328;
            local_228 = 0;
            local_220 = "user_id";
            local_218 = 7;
            local_210 = 6;
            local_208 = local_370;
            pcStack_200 = local_430;
            local_1f8 = (code *)CONCAT71(local_1f8._1_7_,1);
            local_1d0 = "day";
            local_1c8 = 3;
            local_1c0 = 5;
            local_1a8 = 3;
            local_180 = "sessions\x04";
            local_178 = 8;
            local_170 = 5;
            local_158 = 3;
            local_130 = "events";
            local_128 = 6;
            local_120 = 5;
            local_118 = local_398;
            local_108 = 0;
            local_e0 = "revenue_cents";
            local_d8 = 0xd;
            local_a8 = pcStack_300;
            lStack_a0 = lStack_2f8;
            local_98 = 1;
            local_90 = "top_category";
            local_88 = 0xc;
            local_1b8 = pcVar17;
            local_1b0 = pcVar18;
            local_168 = pcVar21;
            local_160 = pcVar16;
            local_110 = pcVar42;
            local_d0 = uVar40;
            local_c8 = pcVar28;
            local_c0 = pcVar37;
            local_b0 = pcVar24;
            auVar66 = pqw::write_file(local_3d8,local_3a0,&local_260,6,&DAT_00202b70);
            uVar31 = auVar66._8_8_;
            if (auVar66._0_8_ == 1) {
              if (pcVar37 != (code *)0x0 && !bVar10) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar28 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar28)) {
                  free(pcVar28);
                }
                else {
                  uVar22 = (long)pcVar37 * 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(pcVar28,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              if (!bVar11 && pcVar37 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar28 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar28)) {
                  free(pcVar28);
                }
                else {
                  if (pcVar37 < &DAT_00000011) {
                    pcVar37 = (code *)&DAT_00000010;
                  }
                  lVar29 = LZCOUNT(pcVar37 + -1);
                  lVar25 = 0x40 - lVar29;
                  if ((pcVar37 + -1 < (code *)0x10000) ||
                     (cVar13 = sys::big_put(pcVar28,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::v3b::StrBuf>
                        (&local_320);
              if (local_390 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar15 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar15)) {
                  free(pcVar15);
                }
                else {
                  uVar22 = (long)local_390 << 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(pcVar15,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar15 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar15;
                  }
                }
              }
              param_1 = local_2f0;
              pcVar28 = local_3b0;
              if (local_3b8 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3b0 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3b0)) {
                  free(local_3b0);
                }
                else {
                  uVar22 = (long)local_3b8 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_3b0,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_3e8;
              if (local_3f0 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3e8 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3e8)) {
                  free(local_3e8);
                }
                else {
                  uVar22 = (long)local_3f0 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_3e8,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_400;
              if (local_408 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_400 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_400)) {
                  free(local_400);
                }
                else {
                  uVar22 = (long)local_408 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_400,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_370;
              if (local_378 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_370 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_370)) {
                  free(local_370);
                }
                else {
                  uVar22 = (long)local_378 << 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_370,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_3c8;
              if (local_3d0 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3c8 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3c8)) {
                  free(local_3c8);
                }
                else {
                  uVar22 = (long)local_3d0 << 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_3c8,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
            }
            else {
              if (pcVar37 != (code *)0x0 && !bVar10) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar28 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar28)) {
                  free(pcVar28);
                }
                else {
                  uVar22 = (long)pcVar37 * 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(pcVar28,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              if (!bVar11 && pcVar37 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar28 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar28)) {
                  free(pcVar28);
                }
                else {
                  if (pcVar37 < &DAT_00000011) {
                    pcVar37 = (code *)&DAT_00000010;
                  }
                  lVar29 = LZCOUNT(pcVar37 + -1);
                  lVar25 = 0x40 - lVar29;
                  if ((pcVar37 + -1 < (code *)0x10000) ||
                     (cVar13 = sys::big_put(pcVar28,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::v3b::StrBuf>
                        (&local_320);
              if (local_390 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (pcVar15 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pcVar15)) {
                  free(pcVar15);
                }
                else {
                  uVar22 = (long)local_390 << 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(pcVar15,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar15 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar15;
                  }
                }
              }
              param_1 = local_2f0;
              pcVar28 = local_3b0;
              if (local_3b8 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3b0 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3b0)) {
                  free(local_3b0);
                }
                else {
                  uVar22 = (long)local_3b8 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_3b0,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_3e8;
              if (local_3f0 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3e8 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3e8)) {
                  free(local_3e8);
                }
                else {
                  uVar22 = (long)local_3f0 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_3e8,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_400;
              if (local_408 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_400 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_400)) {
                  free(local_400);
                }
                else {
                  uVar22 = (long)local_408 << 3;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_400,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_370;
              if (local_378 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_370 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_370)) {
                  free(local_370);
                }
                else {
                  uVar22 = (long)local_378 << 2;
                  if (uVar22 < 0x11) {
                    uVar22 = 0x10;
                  }
                  lVar29 = LZCOUNT(uVar22 - 1);
                  lVar25 = 0x40 - lVar29;
                  if ((uVar22 - 1 < 0x10000) ||
                     (cVar13 = sys::big_put(local_370,lVar25), cVar13 == '\0')) {
                    if (lVar29 == 0) goto LAB_00651b83;
                    *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                    *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                  }
                }
              }
              pcVar28 = local_3c8;
              if (local_3d0 != (code *)0x0) {
                if (((sys::A_BASE_0 == (code *)0x0) || (local_3c8 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= local_3c8)) {
                  free(local_3c8);
                  uVar31 = 0;
                  goto LAB_00651879;
                }
                uVar22 = (long)local_3d0 << 2;
                if (uVar22 < 0x11) {
                  uVar22 = 0x10;
                }
                lVar29 = LZCOUNT(uVar22 - 1);
                lVar25 = 0x40 - lVar29;
                if ((uVar22 - 1 < 0x10000) ||
                   (cVar13 = sys::big_put(local_3c8,lVar25), cVar13 == '\0')) {
                  if (lVar29 == 0) goto LAB_00651b83;
                  *(undefined8 *)pcVar28 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                  *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar28;
                }
              }
              uVar31 = 0;
            }
LAB_00651879:
            core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::v3b::StrBuf>
                      (&local_350);
            pcVar28 = local_290;
            pcVar18 = local_288;
            goto joined_r0x00651894;
          }
        }
LAB_00651b1b:
        alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_00651b20:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail(pcVar28);
      }
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (&local_3d0,*(undefined8 *)(puVar4[1] + 8),*(undefined8 *)(puVar4[1] + 0x10),
                 &DAT_002109aa,0xe);
      pcVar21 = local_3c8;
      local_358 = pcStack_3c0;
      puVar5 = (undefined8 *)puVar4[2];
      lVar25 = *(long *)(puVar4[3] + 8);
      pcVar18 = *(code **)(puVar4[3] + 0x10);
      pcVar15 = *(code **)(puVar4[4] + 8);
      pcVar16 = *(code **)(puVar4[4] + 0x10);
      pcVar17 = (code *)puVar5[3];
      <pipeline[509596c7b52975b2]::generic::StrBuf>::new(&local_350,pcVar17,(long)pcVar17 * 8);
      <pipeline[509596c7b52975b2]::generic::StrBuf>::new(&local_320,pcVar17,(long)pcVar17 * 8);
      uVar22 = (long)pcVar17 * 4;
      pcVar28 = pcVar16;
      if ((code *)0x3fffffffffffffff < pcVar17 || local_2c0 < uVar22) goto LAB_00651b1b;
      pcVar28 = (code *)((long)pcVar17 * 8);
      local_3d8 = pcVar17;
      local_398 = pcVar18;
      local_2e8 = pcVar15;
      local_2e0 = pcVar16;
      if (uVar22 == 0) {
        local_448 = (code *)&DAT_00000004;
        local_378 = (code *)0x0;
      }
      else {
        local_448 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar22,4);
        if (local_448 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar22);
        }
        local_378 = local_3d8;
      }
      pcVar18 = local_3d8;
      local_368 = (code *)0x0;
      local_370 = local_448;
      if ((ulong)local_3d8 >> 0x3d != 0 || (code *)0x7ffffffffffffff8 < pcVar28) goto LAB_00651b1b;
      if (pcVar28 == (code *)0x0) {
        local_408 = (code *)0x0;
        local_400 = (code *)&DAT_00000008;
        local_3f8 = (code *)0x0;
        local_3f0 = (code *)0x0;
        local_3e8 = (code *)&DAT_00000008;
        local_3e0 = (code *)0x0;
        local_3b8 = (code *)0x0;
        local_3b0 = (code *)&DAT_00000008;
        local_3a8 = (code *)0x0;
        local_390 = (code *)0x0;
        local_388 = (code *)&DAT_00000008;
        local_380 = (code *)0x0;
        pcVar18 = (code *)0x0;
        pcVar17 = (code *)&DAT_00000008;
        pcVar36 = (code *)0x0;
        pcVar16 = (code *)&DAT_00000008;
        pcVar28 = (code *)0x0;
        pcVar15 = (code *)&DAT_00000008;
      }
      else {
        pcVar15 = (code *)__rustc[45371133cddedda4]::__rust_alloc(pcVar28,8);
        if (pcVar15 == (code *)0x0) {
LAB_00651b5c:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,pcVar28);
        }
        local_3f8 = (code *)0x0;
        local_408 = pcVar18;
        local_400 = pcVar15;
        pcVar16 = (code *)__rustc[45371133cddedda4]::__rust_alloc(pcVar28,8);
        if (pcVar16 == (code *)0x0) goto LAB_00651b5c;
        local_3e0 = (code *)0x0;
        local_3f0 = pcVar18;
        local_3e8 = pcVar16;
        pcVar17 = (code *)__rustc[45371133cddedda4]::__rust_alloc(pcVar28,8);
        if (pcVar17 == (code *)0x0) goto LAB_00651b5c;
        local_3a8 = (code *)0x0;
        local_3b8 = pcVar18;
        local_3b0 = pcVar17;
        pcVar18 = (code *)__rustc[45371133cddedda4]::__rust_alloc(pcVar28,8);
        auVar46._8_56_ = extraout_var;
        auVar46._0_8_ = extraout_XMM0_Qa;
        if (pcVar18 == (code *)0x0) goto LAB_00651b5c;
        local_390 = local_3d8;
        local_380 = (code *)0x0;
        auVar66 = vpcmpeqd_avx(auVar46._0_16_,auVar46._0_16_);
        auVar46 = ZEXT1664(auVar66);
        local_388 = pcVar18;
        if (local_3d8 == (code *)0x0) {
          pcVar18 = (code *)0x0;
          pcVar36 = (code *)0x0;
          pcVar28 = (code *)0x0;
        }
        else {
          pauVar30 = (undefined1 (*) [16])*puVar5;
          uVar22 = vpcmpb_avx512vl(auVar66,*pauVar30,1);
          pauVar39 = pauVar30 + 1;
          local_410 = (code *)0x0;
          pcVar42 = local_3d8;
          do {
            uVar35 = (uint)uVar22;
            sVar34 = (short)uVar22;
            while (sVar34 == 0) {
              uVar31 = vpcmpb_avx512vl(auVar46._0_16_,*pauVar39,1);
              uVar35 = (uint)uVar31;
              pauVar30 = pauVar30 + -0x28;
              pauVar39 = pauVar39 + 1;
              sVar34 = (short)uVar31;
            }
            uVar8 = 0;
            for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar23 = (ulong)uVar8;
            uVar22 = *(ulong *)((long)pauVar30 + uVar23 * -0x28 + -0x28);
            pcVar28 = (code *)(uVar22 >> 0x20);
            if (local_398 <= pcVar28) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (pcVar28,local_398,&PTR_s_src_generic_mod_rs_00589398);
            }
            pcVar18 = *(code **)(lVar25 + (long)pcVar28 * 0x10);
            uVar33 = *(ulong *)(lVar25 + 8 + (long)pcVar28 * 0x10);
            if ((ulong)(local_338 - (long)pcStack_328) < uVar33) {
              local_3a0 = pcVar18;
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_338,pcStack_328,uVar33,1,1);
              pcVar18 = local_3a0;
LAB_0064f1ef:
              pcVar15 = pcStack_328;
              auVar52._0_8_ =
                   (*(code *)PTR_memcpy_00841de0)(local_330 + (long)pcStack_328,pcVar18,uVar33);
              auVar52._8_56_ = extraout_var_00;
              auVar66 = vpcmpeqd_avx(auVar52._0_16_,auVar52._0_16_);
              auVar46 = ZEXT1664(auVar66);
            }
            else {
              pcVar15 = pcStack_328;
              if (uVar33 != 0) goto LAB_0064f1ef;
            }
            pcVar18 = pcStack_340;
            pcVar15 = pcVar15 + uVar33;
            pcStack_328 = pcVar15;
            if (pcStack_340 == local_350) {
              auVar45._0_8_ = <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_350);
              auVar45._8_56_ = extraout_var_03;
              auVar66 = vpcmpeqd_avx(auVar45._0_16_,auVar45._0_16_);
              auVar46 = ZEXT1664(auVar66);
            }
            *(int *)(local_348 + (long)pcVar18 * 4) = (int)pcVar15;
            pcStack_340 = pcVar18 + 1;
            if (local_2e0 <= pcVar28) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (pcVar28,local_2e0,&PTR_s_src_generic_mod_rs_005893b0);
            }
            uVar31 = *(undefined8 *)(local_2e8 + (long)pcVar28 * 0x10);
            uVar33 = *(ulong *)(local_2e8 + ((long)pcVar28 * 2 + 1) * 8);
            if ((ulong)(lStack_308 - lStack_2f8) < uVar33) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(&lStack_308,lStack_2f8,uVar33,1,1);
LAB_0064f28d:
              lVar29 = lStack_2f8;
              auVar43._0_8_ = (*(code *)PTR_memcpy_00841de0)(pcStack_300 + lStack_2f8,uVar31,uVar33)
              ;
              auVar43._8_56_ = extraout_var_01;
              auVar66 = vpcmpeqd_avx(auVar43._0_16_,auVar43._0_16_);
              auVar46 = ZEXT1664(auVar66);
            }
            else {
              lVar29 = lStack_2f8;
              if (uVar33 != 0) goto LAB_0064f28d;
            }
            pcVar28 = pcStack_310;
            lVar29 = lVar29 + uVar33;
            lStack_2f8 = lVar29;
            if (pcStack_310 == local_320) {
              auVar44._0_8_ = <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_320);
              auVar44._8_56_ = extraout_var_04;
              auVar66 = vpcmpeqd_avx(auVar44._0_16_,auVar44._0_16_);
              auVar46 = ZEXT1664(auVar66);
            }
            *(int *)(local_318 + (long)pcVar28 * 4) = (int)lVar29;
            pcStack_310 = pcVar28 + 1;
            if (local_410 == local_378) {
              auVar48._0_8_ = <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_378);
              auVar48._8_56_ = extraout_var_05;
              auVar66 = vpcmpeqd_avx(auVar48._0_16_,auVar48._0_16_);
              auVar46 = ZEXT1664(auVar66);
              local_448 = local_370;
            }
            pcVar28 = local_3f8;
            *(int *)(local_448 + (long)local_410 * 4) = (int)uVar22;
            local_410 = local_410 + 1;
            uVar31 = *(undefined8 *)((long)pauVar30 + uVar23 * -0x28 + -0x20);
            local_368 = local_410;
            if (local_3f8 == local_408) {
              auVar49._0_8_ =
                   <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_408);
              auVar49._8_56_ = extraout_var_06;
              auVar66 = vpcmpeqd_avx(auVar49._0_16_,auVar49._0_16_);
              auVar46 = ZEXT1664(auVar66);
            }
            pcVar15 = local_400;
            *(undefined8 *)(local_400 + (long)pcVar28 * 8) = uVar31;
            pcVar28 = pcVar28 + 1;
            uVar31 = *(undefined8 *)((long)pauVar30 + uVar23 * -0x28 + -0x18);
            local_3f8 = pcVar28;
            if (local_3e0 == local_3f0) {
              local_360 = local_3e0;
              auVar50._0_8_ =
                   <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_3f0);
              auVar50._8_56_ = extraout_var_07;
              auVar66 = vpcmpeqd_avx(auVar50._0_16_,auVar50._0_16_);
              auVar46 = ZEXT1664(auVar66);
              local_3e0 = local_360;
            }
            pcVar18 = local_3a8;
            pcVar16 = local_3e8;
            *(undefined8 *)(local_3e8 + (long)local_3e0 * 8) = uVar31;
            pcVar36 = local_3e0 + 1;
            uVar31 = *(undefined8 *)((long)pauVar30 + uVar23 * -0x28 + -0x10);
            local_3e0 = pcVar36;
            if (local_3a8 == local_3b8) {
              local_3a0 = pcVar28;
              auVar51._0_8_ =
                   <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_3b8);
              auVar51._8_56_ = extraout_var_08;
              auVar66 = vpcmpeqd_avx(auVar51._0_16_,auVar51._0_16_);
              auVar46 = ZEXT1664(auVar66);
              pcVar28 = local_3a0;
            }
            pcVar37 = local_380;
            *(undefined8 *)(local_3b0 + (long)pcVar18 * 8) = uVar31;
            pcVar18 = pcVar18 + 1;
            uVar31 = *(undefined8 *)((long)pauVar30 + uVar23 * -0x28 + -8);
            pcVar17 = local_3b0;
            local_3a8 = pcVar18;
            if (local_380 == local_390) {
              local_2b8 = local_3b0;
              local_3a0 = pcVar28;
              local_360 = pcVar36;
              auVar47._0_8_ =
                   <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_390);
              auVar47._8_56_ = extraout_var_02;
              auVar66 = vpcmpeqd_avx(auVar47._0_16_,auVar47._0_16_);
              auVar46 = ZEXT1664(auVar66);
              pcVar17 = local_2b8;
              pcVar28 = local_3a0;
              pcVar36 = local_360;
            }
            uVar22 = (ulong)(uVar35 - 1 & uVar35);
            pcVar42 = pcVar42 + -1;
            *(undefined8 *)(local_388 + (long)pcVar37 * 8) = uVar31;
            local_380 = pcVar37 + 1;
          } while (pcVar42 != (code *)0x0);
          local_448 = local_370;
        }
      }
      pcVar42 = local_388;
      local_260 = (ulong *)CONCAT44(local_260._4_4_,7);
      local_258 = local_348;
      pcStack_250 = pcStack_340;
      local_248 = local_330;
      pcStack_240 = pcStack_328;
      local_220 = "campaign_id";
      local_218 = 0xb;
      local_210 = 7;
      local_208 = local_318;
      pcStack_200 = pcStack_310;
      local_1f8 = pcStack_300;
      lStack_1f0 = lStack_2f8;
      local_1d0 = "channel";
      local_1c8 = 7;
      local_1c0 = 6;
      local_1a8 = 1;
      local_180 = "day";
      local_178 = 3;
      local_170 = 5;
      local_158 = 3;
      local_130 = "sessions\x04";
      local_128 = 8;
      local_120 = 5;
      local_108 = 3;
      local_e0 = "purchasing_sessions";
      local_d8 = 0x13;
      local_d0 = 5;
      local_b8 = (code *)((ulong)local_b8 & 0xffffffffffffff00);
      local_90 = "revenue_cents";
      local_88 = 0xd;
      local_80 = 5;
      local_68 = 3;
      local_40 = "assisted_sessions";
      local_38 = 0x11;
      local_1b8 = local_448;
      local_1b0 = local_3d8;
      local_168 = pcVar15;
      local_160 = pcVar28;
      local_118 = pcVar16;
      local_110 = pcVar36;
      local_c8 = pcVar17;
      local_c0 = pcVar18;
      local_78 = local_388;
      local_70 = local_380;
      auVar66 = pqw::write_file(pcVar21,local_358,&local_260,7,&DAT_00202b70);
      param_1 = local_2f0;
      uVar31 = auVar66._8_8_;
      if (auVar66._0_8_ == 1) {
        if (local_390 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar42 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar42)) {
            free(pcVar42);
          }
          else {
            uVar22 = (long)local_390 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar25 = LZCOUNT(uVar22 - 1);
            lVar29 = 0x40 - lVar25;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar42,lVar29), cVar13 == '\0')) {
              if (lVar25 == 0) goto LAB_00651ba2;
              *(undefined8 *)pcVar42 = *(undefined8 *)(in_FS_OFFSET + lVar29 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar29 * 8 + -0x3c8) = pcVar42;
            }
          }
        }
        if (local_3b8 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar17 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar17)) {
            free(pcVar17);
          }
          else {
            uVar22 = (long)local_3b8 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar17,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar17 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar17;
            }
          }
        }
        if (local_3f0 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar16 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar16)) {
            free(pcVar16);
          }
          else {
            uVar22 = (long)local_3f0 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar16,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar16 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar16;
            }
          }
        }
        if (local_408 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar15 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar15)) {
            free(pcVar15);
          }
          else {
            uVar22 = (long)local_408 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar15,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar15 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar15;
            }
          }
        }
        if (local_378 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_448 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_448)) {
            free(local_448);
          }
          else {
            uVar22 = (long)local_378 << 2;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(local_448,lVar25), cVar13 == '\0'))
            {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)local_448 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = local_448;
            }
          }
        }
      }
      else {
        if (local_390 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar42 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar42)) {
            free(pcVar42);
          }
          else {
            uVar22 = (long)local_390 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar25 = LZCOUNT(uVar22 - 1);
            lVar29 = 0x40 - lVar25;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar42,lVar29), cVar13 == '\0')) {
              if (lVar25 == 0) {
LAB_00651ba2:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar29,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(undefined8 *)pcVar42 = *(undefined8 *)(in_FS_OFFSET + lVar29 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar29 * 8 + -0x3c8) = pcVar42;
            }
          }
        }
        if (local_3b8 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar17 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar17)) {
            free(pcVar17);
          }
          else {
            uVar22 = (long)local_3b8 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar17,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar17 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar17;
            }
          }
        }
        if (local_3f0 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar16 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar16)) {
            free(pcVar16);
          }
          else {
            uVar22 = (long)local_3f0 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar16,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar16 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar16;
            }
          }
        }
        if (local_408 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (pcVar15 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pcVar15)) {
            free(pcVar15);
          }
          else {
            uVar22 = (long)local_408 << 3;
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            lVar29 = LZCOUNT(uVar22 - 1);
            lVar25 = 0x40 - lVar29;
            if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(pcVar15,lVar25), cVar13 == '\0')) {
              if (lVar29 == 0) goto LAB_00651b83;
              *(undefined8 *)pcVar15 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar15;
            }
          }
        }
        if (local_378 != (code *)0x0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_448 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_448)) {
            free(local_448);
            uVar31 = 0;
            goto LAB_00650845;
          }
          uVar22 = (long)local_378 << 2;
          if (uVar22 < 0x11) {
            uVar22 = 0x10;
          }
          lVar29 = LZCOUNT(uVar22 - 1);
          lVar25 = 0x40 - lVar29;
          if ((uVar22 - 1 < 0x10000) || (cVar13 = sys::big_put(local_448,lVar25), cVar13 == '\0')) {
            if (lVar29 == 0) goto LAB_00651b83;
            *(undefined8 *)local_448 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
            *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = local_448;
          }
        }
        uVar31 = 0;
      }
LAB_00650845:
      core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::v3b::StrBuf>(&local_320);
      core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::v3b::StrBuf>(&local_350);
      pcVar28 = local_3d0;
      pcVar18 = local_3c8;
joined_r0x00651894:
      if (pcVar28 != (code *)0x0) {
        if (((sys::A_BASE_0 == (code *)0x0) || (pcVar18 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pcVar18)) {
          free(pcVar18);
        }
        else {
          if (pcVar28 < &DAT_00000011) {
            pcVar28 = (code *)&DAT_00000010;
          }
          lVar29 = LZCOUNT(pcVar28 + -1);
          lVar25 = 0x40 - lVar29;
          if ((pcVar28 + -1 < (code *)0x10000) ||
             (cVar13 = sys::big_put(pcVar18,lVar25), cVar13 == '\0')) {
            if (lVar29 == 0) {
LAB_00651b83:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar25,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(undefined8 *)pcVar18 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
            *(code **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar18;
          }
        }
      }
      puVar12 = local_2a8;
      lVar25 = local_2c8;
      if (local_2c8 == local_2d8) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_2d8);
      }
      lVar29 = lVar25 * 0x10;
      *(ulong *)(local_2d0 + lVar29) = local_2a0;
      *(undefined8 *)(local_2d0 + 8 + lVar29) = uVar31;
      local_2c8 = lVar25 + 1;
      LOCK();
      local_2a0 = *puVar12;
      *puVar12 = *puVar12 + 1;
      UNLOCK();
    } while (local_2a0 < local_2b0);
  }
  param_1[2] = local_2c8;
  *param_1 = local_2d8;
  param_1[1] = local_2d0;
  return;
}


// ==== pipeline::generic::run::{closure#0} @ 00678b20 (341 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::run::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::run::_closure_0_
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar4 [12];
  long local_88;
  undefined4 local_80;
  undefined1 local_78 [12];
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)*param_1 != '\0') {
    local_30 = param_2;
    local_28 = param_3;
    auVar4 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    pauVar1 = (undefined1 (*) [12])param_1[1];
    local_88 = *(long *)*pauVar1;
    local_80 = *(undefined4 *)(*pauVar1 + 8);
    local_78 = auVar4;
    <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
              (&local_68,local_78,&local_88);
    auVar2._8_8_ = unaff_XMM15_Qb;
    auVar2._0_8_ = unaff_XMM15_Qa;
    auVar2 = vcvtusi2sd_avx512f(auVar2,local_60);
    local_38 = (ulong)!(bool)((byte)local_68 & 1) *
               (long)(((double)(int)local_58 / _DAT_00201a48 + auVar2._0_8_) * DAT_00201e30);
    local_88 = *(long *)param_1[2];
    local_80 = (undefined4)((long *)param_1[2])[1];
    local_78 = auVar4;
    <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
              (&local_68,local_78,&local_88);
    auVar3._8_8_ = unaff_XMM15_Qb;
    auVar3._0_8_ = unaff_XMM15_Qa;
    auVar2 = vcvtusi2sd_avx512f(auVar3,local_60);
    local_88 = (ulong)!(bool)((byte)local_68 & 1) *
               (long)(((double)(int)local_58 / _DAT_00201a48 + auVar2._0_8_) * DAT_00201e30);
    local_68 = &local_30;
    local_60 = <&str_as_core[62e902411887be45]::fmt::Display>::fmt;
    local_58 = &local_38;
    local_50 = <f64_as_core[62e902411887be45]::fmt::Display>::fmt;
    local_40 = <f64_as_core[62e902411887be45]::fmt::Display>::fmt;
    local_48 = (undefined1 *)&local_88;
    std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_00210ed8,&local_68);
    *pauVar1 = auVar4;
  }
  return;
}


// ==== pipeline::generic::run::{closure#3} @ 00678c80 (462 bytes)

/* pipeline[509596c7b52975b2]::generic::run::{closure#3} */

void __rustcall pipeline[509596c7b52975b2]::generic::run::_closure_3_(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [64];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar16 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar17 [64];
  undefined1 extraout_var [56];
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  parse::split::<2usize>(&local_78);
  if (local_78 != 0) {
    plVar1 = (long *)*param_1;
    if (plVar1[3] != 0) {
      uVar11 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
               ::hash_one::<&[u8]>(local_78,local_70);
      puVar8 = PTR_memcmp_00842098;
      lVar2 = *plVar1;
      uVar3 = plVar1[1];
      auVar16 = vpbroadcastb_avx512vl();
      auVar15 = ZEXT1664(auVar16);
      lVar13 = 0;
      auVar16 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      auVar17 = ZEXT1664(auVar16);
      while( true ) {
        uVar11 = uVar11 & uVar3;
        auVar16 = *(undefined1 (*) [16])(lVar2 + uVar11);
        uVar14 = vpcmpeqb_avx512vl(auVar16,auVar15._0_16_);
        if ((short)uVar14 != 0) {
          local_58 = auVar16;
          local_48 = auVar15._0_16_;
          do {
            auVar16 = auVar17._0_16_;
            uVar6 = 0;
            for (uVar7 = (uint)uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar12 = uVar6 + uVar11 & uVar3;
            if (local_70 == *(long *)(lVar2 + -0x10 + uVar12 * -0x18)) {
              iVar10 = (*(code *)puVar8)(local_78,*(undefined8 *)(uVar12 * -0x18 + lVar2 + -0x18),
                                         local_70);
              auVar15._8_56_ = extraout_var;
              auVar15._0_8_ = extraout_XMM1_Qa;
              auVar16 = auVar15._0_16_;
              if (iVar10 == 0) {
                return;
              }
            }
            iVar10 = (uint)uVar14 - 1;
            uVar9 = (ushort)iVar10 & (ushort)uVar14;
            uVar14 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar9);
            auVar15 = ZEXT1664(local_48);
            auVar16 = vpcmpeqd_avx(auVar16,auVar16);
            auVar17 = ZEXT1664(auVar16);
            auVar16 = local_58;
          } while (uVar9 != 0);
        }
        uVar5 = vpcmpeqb_avx512vl(auVar16,auVar17._0_16_);
        if ((short)uVar5 != 0) break;
        uVar11 = uVar11 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
    plVar4 = (long *)param_1[1];
    <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
    ::insert(plVar1,local_78,local_70,(int)plVar4[2]);
    lVar2 = plVar4[2];
    if (lVar2 == *plVar4) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(plVar4);
    }
    lVar13 = plVar4[1];
    *(long *)(lVar13 + lVar2 * 0x10) = local_78;
    *(long *)(lVar13 + 8 + lVar2 * 0x10) = local_70;
    plVar4[2] = lVar2 + 1;
    plVar1 = (long *)param_1[2];
    lVar2 = plVar1[2];
    if (lVar2 == *plVar1) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(plVar1);
    }
    lVar13 = plVar1[1];
    *(undefined8 *)(lVar13 + lVar2 * 0x10) = local_68;
    *(undefined8 *)(lVar13 + 8 + lVar2 * 0x10) = local_60;
    plVar1[2] = lVar2 + 1;
  }
  return;
}


// ==== pipeline::generic::core::parse_links::{closure#0} @ 00679020 (947 bytes)

/* pipeline[509596c7b52975b2]::generic::core::parse_links::{closure#0} */

void __rustcall pipeline[509596c7b52975b2]::generic::core::parse_links::_closure_0_(long *param_1)

{
  undefined1 auVar1 [16];
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
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong *local_50;
  ulong local_48;
  ulong *local_40;
  ulong local_38;
  
  parse::split::<2usize>(&local_50);
  if (local_50 == (ulong *)0x0) {
    return;
  }
  if (local_48 == 0) {
    return;
  }
  if (local_38 == 0) {
    return;
  }
  if (local_48 < 0x11) {
    if (local_48 < 8) {
      if (local_48 < 4) {
        uVar29 = (ulong)*(byte *)((long)local_50 + (local_48 - 1)) |
                 (ulong)((uint)*(byte *)((long)local_50 + (local_48 >> 1)) << 8 |
                        (uint)(byte)*local_50 << 0x10);
        uVar28 = 0;
      }
      else {
        uVar29 = (ulong)(uint)*local_50;
        uVar28 = (ulong)*(uint *)((long)local_50 + (local_48 - 4));
      }
    }
    else {
      uVar29 = *local_50;
      uVar28 = *(ulong *)((long)local_50 + (local_48 - 8));
    }
    uVar29 = uVar29 ^ 0x243f6a8885a308d3;
    uVar28 = local_48 ^ 0x13198a2e03707344 ^ uVar28;
  }
  else {
    uVar28 = local_48 ^ 0x452821e638d01377;
    uVar32 = (local_48 - 0x11 >> 4) + 1;
    uVar29 = (ulong)((uint)uVar32 & 3);
    if (local_48 - 0x11 < 0x30) {
      lVar30 = 0x10;
      lVar31 = 0;
LAB_00679170:
      do {
        lVar27 = lVar30;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar28 ^ *(ulong *)((long)local_50 + lVar31 + 8);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulong *)((long)local_50 + lVar31) ^ 0x243f6a8885a308d3;
        uVar28 = SUB168(auVar5 * auVar19,8) ^ SUB168(auVar5 * auVar19,0);
        uVar29 = uVar29 - 1;
        lVar30 = lVar27 + 0x10;
        lVar31 = lVar27;
      } while (uVar29 != 0);
    }
    else {
      uVar32 = uVar32 & 0xfffffffffffffffc;
      lVar31 = 0;
      do {
        lVar30 = lVar31;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar28 ^ *(ulong *)((long)local_50 + lVar30 + 8);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulong *)((long)local_50 + lVar30) ^ 0x243f6a8885a308d3;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = SUB168(auVar1 * auVar15,8) ^ SUB168(auVar1 * auVar15,0) ^
                       *(ulong *)((long)local_50 + lVar30 + 0x18);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulong *)((long)local_50 + lVar30 + 0x10) ^ 0x243f6a8885a308d3;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = SUB168(auVar2 * auVar16,8) ^ SUB168(auVar2 * auVar16,0) ^
                       *(ulong *)((long)local_50 + lVar30 + 0x28);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulong *)((long)local_50 + lVar30 + 0x20) ^ 0x243f6a8885a308d3;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = SUB168(auVar3 * auVar17,8) ^ SUB168(auVar3 * auVar17,0) ^
                       *(ulong *)((long)local_50 + lVar30 + 0x38);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulong *)((long)local_50 + lVar30 + 0x30) ^ 0x243f6a8885a308d3;
        uVar28 = SUB168(auVar4 * auVar18,8) ^ SUB168(auVar4 * auVar18,0);
        lVar31 = lVar30 + 0x40;
        uVar32 = uVar32 - 4;
      } while (uVar32 != 0);
      if (uVar29 != 0) {
        lVar30 = lVar30 + 0x50;
        goto LAB_00679170;
      }
    }
    uVar29 = *(ulong *)((long)local_50 + (local_48 - 0x10)) ^ 0x13198a2e03707344;
    uVar28 = uVar28 ^ *(ulong *)((long)local_50 + (local_48 - 8)) ^ 0xa4093822299f31d0;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar28;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar29;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar6 * auVar20,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar6 * auVar20,8);
  if (local_38 < 0x11) {
    if (local_38 < 8) {
      if (local_38 < 4) {
        uVar29 = (ulong)*(byte *)((long)local_40 + (local_38 - 1)) |
                 (ulong)((uint)*(byte *)((long)local_40 + (local_38 >> 1)) << 8 |
                        (uint)(byte)*local_40 << 0x10);
        uVar28 = 0;
      }
      else {
        uVar29 = (ulong)(uint)*local_40;
        uVar28 = (ulong)*(uint *)((long)local_40 + (local_38 - 4));
      }
    }
    else {
      uVar29 = *local_40;
      uVar28 = *(ulong *)((long)local_40 + (local_38 - 8));
    }
    uVar29 = uVar29 ^ 0x243f6a8885a308d3;
    uVar28 = uVar28 ^ local_38 ^ 0x13198a2e03707344;
    goto LAB_0067934f;
  }
  uVar28 = local_38 ^ 0x452821e638d01377;
  uVar32 = (local_38 - 0x11 >> 4) + 1;
  uVar29 = (ulong)((uint)uVar32 & 3);
  if (local_38 - 0x11 < 0x30) {
    lVar31 = 0;
    lVar30 = 0x10;
LAB_006792e0:
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28 ^ *(ulong *)((long)local_40 + lVar31 + 8);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = *(ulong *)((long)local_40 + lVar31) ^ 0x243f6a8885a308d3;
      uVar28 = SUB168(auVar12 * auVar25,8) ^ SUB168(auVar12 * auVar25,0);
      uVar29 = uVar29 - 1;
      lVar31 = lVar30;
      lVar30 = lVar30 + 0x10;
    } while (uVar29 != 0);
  }
  else {
    uVar32 = uVar32 & 0xfffffffffffffffc;
    lVar31 = 0;
    do {
      lVar30 = lVar31;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar28 ^ *(ulong *)((long)local_40 + lVar30 + 8);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = *(ulong *)((long)local_40 + lVar30) ^ 0x243f6a8885a308d3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = SUB168(auVar8 * auVar21,8) ^ SUB168(auVar8 * auVar21,0) ^
                     *(ulong *)((long)local_40 + lVar30 + 0x18);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *(ulong *)((long)local_40 + lVar30 + 0x10) ^ 0x243f6a8885a308d3;
      auVar10._8_8_ = 0;
      auVar10._0_8_ =
           SUB168(auVar9 * auVar22,8) ^ SUB168(auVar9 * auVar22,0) ^
           *(ulong *)((long)local_40 + lVar30 + 0x28);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *(ulong *)((long)local_40 + lVar30 + 0x20) ^ 0x243f6a8885a308d3;
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           SUB168(auVar10 * auVar23,8) ^ SUB168(auVar10 * auVar23,0) ^
           *(ulong *)((long)local_40 + lVar30 + 0x38);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulong *)((long)local_40 + lVar30 + 0x30) ^ 0x243f6a8885a308d3;
      uVar28 = SUB168(auVar11 * auVar24,8) ^ SUB168(auVar11 * auVar24,0);
      lVar31 = lVar30 + 0x40;
      uVar32 = uVar32 - 4;
    } while (uVar32 != 0);
    if (uVar29 != 0) {
      lVar30 = lVar30 + 0x50;
      goto LAB_006792e0;
    }
  }
  uVar29 = *(ulong *)((long)local_40 + (local_38 - 0x10)) ^ 0x13198a2e03707344;
  uVar28 = uVar28 ^ *(ulong *)((long)local_40 + (local_38 - 8)) ^ 0xa4093822299f31d0;
LAB_0067934f:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar28;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar29;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = SUB168(auVar13 * auVar26,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar13 * auVar26,8);
  lVar31 = param_1[2];
  if (lVar31 == *param_1) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
    ::grow_one(param_1);
  }
  lVar30 = param_1[1];
  lVar27 = lVar31 * 0x30;
  *(ulong **)(lVar30 + lVar27) = local_50;
  *(ulong *)(lVar30 + 8 + lVar27) = local_48;
  *(ulong **)(lVar30 + 0x10 + lVar27) = local_40;
  *(ulong *)(lVar30 + 0x18 + lVar27) = local_38;
  *(ulong *)(lVar30 + 0x20 + lVar27) =
       SUB168(auVar7 * ZEXT816(0x82efa98ec4e6c89),8) ^ SUB168(auVar7 * ZEXT816(0x82efa98ec4e6c89),0)
  ;
  *(ulong *)(lVar30 + 0x28 + lVar27) =
       SUB168(auVar14 * ZEXT816(0x82efa98ec4e6c89),8) ^
       SUB168(auVar14 * ZEXT816(0x82efa98ec4e6c89),0);
  param_1[2] = lVar31 + 1;
  return;
}


// ==== pipeline::generic::core::parse_clicks::{closure#0} @ 006793e0 (1240 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::core::parse_clicks::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::core::parse_clicks::_closure_0_
          (undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 extraout_var [56];
  undefined1 auVar27 [16];
  ulong local_98 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_98[0] = 1;
  local_98[1] = 0;
  local_98[3] = 0;
  local_98[4] = 1;
  local_98[5] = 0;
  if (param_3 != 0) {
    uVar15 = 0;
    auVar27._8_8_ = DAT_00201b58;
    auVar27._0_8_ = DAT_00201b58;
    auVar25._8_8_ = DAT_00201d50;
    auVar25._0_8_ = DAT_00201d50;
    auVar26 = ZEXT1664(auVar25);
    uVar13 = 0;
    bVar9 = false;
    pcVar18 = param_2;
    uVar22 = 0;
    do {
      if (*pcVar18 == '\"') {
        bVar9 = true;
      }
      else if (*pcVar18 == ',') {
        if (3 < uVar15 + 1) {
          return;
        }
        if ((param_3 < uVar22) || (uVar19 = uVar22 - uVar13, uVar22 < uVar13)) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar13,uVar22,param_3,&PTR_s_src_generic_parse_rs_0020ff80);
        }
        pcVar1 = param_2 + uVar13;
        uVar20 = uVar19;
        pcVar21 = pcVar1;
        if (bVar9) {
          if (uVar19 < 2) {
            return;
          }
          if (*pcVar1 != '\"') {
            return;
          }
          if (param_2[uVar22 - 1] != '\"') {
            return;
          }
          uVar20 = uVar19 - 2;
          pcVar21 = pcVar1 + 1;
          if (uVar19 < 0x12) {
            if (uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              do {
                if (param_2[uVar13 + 1] == '\"') {
                  return;
                }
                uVar13 = uVar13 + 1;
              } while (uVar22 - 2 != uVar13);
            }
          }
          else {
            uVar16 = ((ulong)(pcVar1 + 8) & 0xfffffffffffffff8) - (long)pcVar21;
            if (uVar16 != 0) {
              lVar14 = uVar13 + 1;
              while (param_2[lVar14] != '\"') {
                lVar14 = lVar14 + 1;
                if (((ulong)(pcVar1 + 8) & 0xfffffffffffffff8) - (long)param_2 == lVar14)
                goto LAB_00679570;
              }
              return;
            }
            uVar16 = 0;
            do {
              auVar23 = vpaddq_avx(*(undefined1 (*) [16])(pcVar21 + uVar16) ^ auVar27,auVar25);
              auVar23 = vpternlogq_avx512vl(auVar23,*(undefined1 (*) [16])(pcVar21 + uVar16),
                                            _DAT_002028b0,0xf6);
              if ((auVar23._8_8_ & auVar23._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
              uVar16 = uVar16 + 0x10;
LAB_00679570:
            } while (uVar16 <= uVar19 - 0x12);
            if (uVar20 != uVar16) {
              lVar14 = uVar13 + uVar16;
              do {
                if (param_2[lVar14 + 1] == '\"') {
                  return;
                }
                lVar14 = lVar14 + 1;
              } while (uVar22 - 2 != lVar14);
            }
          }
        }
        if (3 < uVar15) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar15,4,&PTR_s_src_generic_parse_rs_0020ff68);
        }
        local_98[uVar15 * 2] = (ulong)pcVar21;
        local_98[uVar15 * 2 + 1] = uVar20;
        bVar9 = false;
        uVar13 = uVar22 + 1;
        uVar15 = uVar15 + 1;
      }
      pcVar18 = pcVar18 + 1;
      uVar22 = uVar22 + 1;
    } while (pcVar18 != param_2 + param_3);
    if (uVar15 == 3) {
      uVar15 = param_3 - uVar13;
      if (param_3 < uVar13) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar13,param_3,param_3,&PTR_s_src_generic_parse_rs_0020ff50);
      }
      pcVar18 = param_2 + uVar13;
      if (bVar9) {
        if (uVar15 < 2) {
          return;
        }
        if (*pcVar18 != '\"') {
          return;
        }
        if (param_2[param_3 - 1] != '\"') {
          return;
        }
        uVar22 = uVar15 - 2;
        pcVar18 = pcVar18 + 1;
        if (uVar15 < 0x12) {
          if (uVar22 == 0) {
            uVar22 = 0;
          }
          else {
            do {
              if (param_2[uVar13 + 1] == '\"') {
                return;
              }
              uVar13 = uVar13 + 1;
            } while (param_3 - 2 != uVar13);
          }
        }
        else {
          uVar13 = core[62e902411887be45]::slice::memchr::memchr_aligned(0x22,pcVar18,uVar22);
          if ((uVar13 & 1) != 0) {
            return;
          }
        }
      }
      else {
        uVar22 = uVar15;
      }
      uVar15 = local_98[5];
      uVar13 = local_98[4];
      if (((local_98[0] != 0) && (local_98[1] != 0)) && (local_98[3] != 0)) {
        auVar27 = parse::parse_ts(pcVar18,uVar22);
        lVar14 = auVar27._8_8_;
        if (((auVar27._0_8_ == 1) && (*(long *)*param_1 <= lVar14)) &&
           ((lVar14 < *(long *)param_1[1] && (plVar4 = (long *)param_1[2], plVar4[3] != 0)))) {
          uVar19 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                   ::hash_one::<&[u8]>(uVar13,uVar15);
          puVar10 = PTR_memcmp_00842098;
          lVar5 = *plVar4;
          uVar22 = plVar4[1];
          auVar27 = vpbroadcastb_avx512vl();
          auVar24 = ZEXT1664(auVar27);
          lVar17 = 0;
          auVar27 = vpcmpeqd_avx(auVar26._0_16_,auVar26._0_16_);
          auVar26 = ZEXT1664(auVar27);
          while( true ) {
            uVar19 = uVar19 & uVar22;
            local_58 = *(undefined1 (*) [16])(lVar5 + uVar19);
            local_48 = auVar24._0_16_;
            uVar20 = vpcmpeqb_avx512vl(local_58,local_48);
            if ((short)uVar20 != 0) {
              do {
                auVar27 = auVar26._0_16_;
                uVar7 = 0;
                for (uVar8 = (uint)uVar20; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar16 = uVar7 + uVar19 & uVar22;
                if (uVar15 == *(long *)(lVar5 + -0x10 + uVar16 * -0x18)) {
                  lVar2 = lVar5 + uVar16 * -0x18;
                  iVar12 = (*(code *)puVar10)(uVar13,*(undefined8 *)(lVar2 + -0x18),uVar15);
                  auVar26._8_56_ = extraout_var;
                  auVar26._0_8_ = extraout_XMM1_Qa;
                  auVar27 = auVar26._0_16_;
                  if (iVar12 == 0) {
                    uVar3 = *(undefined4 *)(lVar2 + -8);
                    plVar4 = (long *)param_1[3];
                    lVar5 = plVar4[2];
                    if (lVar5 == *plVar4) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(plVar4);
                    }
                    lVar17 = plVar4[1];
                    *(char **)(lVar17 + lVar5 * 0x18) = param_2;
                    *(long *)(lVar17 + 8 + lVar5 * 0x18) = lVar14;
                    *(undefined4 *)(lVar17 + 0x10 + lVar5 * 0x18) = uVar3;
                    plVar4[2] = lVar5 + 1;
                    return;
                  }
                }
                iVar12 = (uint)uVar20 - 1;
                uVar11 = (ushort)iVar12 & (ushort)uVar20;
                uVar20 = (ulong)CONCAT22((short)((uint)iVar12 >> 0x10),uVar11);
                auVar24 = ZEXT1664(local_48);
                auVar27 = vpcmpeqd_avx(auVar27,auVar27);
                auVar26 = ZEXT1664(auVar27);
              } while (uVar11 != 0);
            }
            uVar6 = vpcmpeqb_avx512vl(local_58,auVar26._0_16_);
            if ((short)uVar6 != 0) break;
            uVar19 = uVar19 + lVar17 + 0x10;
            lVar17 = lVar17 + 0x10;
          }
        }
      }
    }
  }
  return;
}


// ==== pipeline::generic::core::parse_events::{closure#0} @ 006798c0 (1959 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::core::parse_events::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::generic::core::parse_events::_closure_0_
          (long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
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
  bool bVar16;
  char *pcVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint extraout_EDX;
  char *pcVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  char *pcVar32;
  undefined4 uVar33;
  ulong uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong *local_a0;
  ulong local_98 [3];
  char *pcStack_80;
  long lStack_78;
  char *pcStack_70;
  long local_68;
  char *pcStack_60;
  long lStack_58;
  char *pcStack_50;
  long local_48;
  
  local_a0 = (ulong *)&DAT_00000001;
  local_98[0] = 0;
  local_98[2] = _DAT_00202200;
  pcStack_80 = _UNK_00202208;
  lStack_78 = _DAT_00202200;
  pcStack_70 = _UNK_00202208;
  local_68 = _DAT_00202200;
  pcStack_60 = _UNK_00202208;
  lStack_58 = _DAT_00202200;
  pcStack_50 = _UNK_00202208;
  local_48 = 0;
  if (param_3 == 0) {
    return;
  }
  uVar24 = 0;
  auVar37._8_8_ = DAT_00201b58;
  auVar37._0_8_ = DAT_00201b58;
  auVar38._8_8_ = DAT_00201d50;
  auVar38._0_8_ = DAT_00201d50;
  uVar19 = 0;
  bVar16 = false;
  pcVar25 = param_2;
  uVar34 = 0;
  do {
    if (*pcVar25 == '\"') {
      bVar16 = true;
    }
    else if (*pcVar25 == ',') {
      if (6 < uVar24 + 1) {
        return;
      }
      if ((param_3 < uVar34) || (uVar27 = uVar34 - uVar19, uVar34 < uVar19)) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar19,uVar34,param_3,&PTR_s_src_generic_parse_rs_0020ff80);
      }
      pcVar1 = param_2 + uVar19;
      uVar22 = uVar27;
      pcVar32 = pcVar1;
      if (bVar16) {
        if (uVar27 < 2) {
          return;
        }
        if (*pcVar1 != '\"') {
          return;
        }
        if (param_2[uVar34 - 1] != '\"') {
          return;
        }
        uVar22 = uVar27 - 2;
        pcVar32 = pcVar1 + 1;
        if (uVar27 < 0x12) {
          if (uVar22 == 0) {
            uVar22 = 0;
          }
          else {
            do {
              if (param_2[uVar19 + 1] == '\"') {
                return;
              }
              uVar19 = uVar19 + 1;
            } while (uVar34 - 2 != uVar19);
          }
        }
        else {
          uVar31 = ((ulong)(pcVar1 + 8) & 0xfffffffffffffff8) - (long)pcVar32;
          if (uVar31 != 0) {
            lVar20 = uVar19 + 1;
            while (param_2[lVar20] != '\"') {
              lVar20 = lVar20 + 1;
              if (((ulong)(pcVar1 + 8) & 0xfffffffffffffff8) - (long)param_2 == lVar20)
              goto LAB_00679a60;
            }
            return;
          }
          uVar31 = 0;
          do {
            auVar36 = vpaddq_avx(*(undefined1 (*) [16])(pcVar32 + uVar31) ^ auVar37,auVar38);
            auVar36 = vpternlogq_avx512vl(auVar36,*(undefined1 (*) [16])(pcVar32 + uVar31),
                                          _DAT_002028b0,0xf6);
            if ((auVar36._8_8_ & auVar36._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
            uVar31 = uVar31 + 0x10;
LAB_00679a60:
          } while (uVar31 <= uVar27 - 0x12);
          if (uVar22 != uVar31) {
            lVar20 = uVar19 + uVar31;
            do {
              if (param_2[lVar20 + 1] == '\"') {
                return;
              }
              lVar20 = lVar20 + 1;
            } while (uVar34 - 2 != lVar20);
          }
        }
      }
      if (6 < uVar24) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar24,7,&PTR_s_src_generic_parse_rs_0020ff68);
      }
      local_98[uVar24 * 2 + -1] = (ulong)pcVar32;
      local_98[uVar24 * 2] = uVar22;
      bVar16 = false;
      uVar19 = uVar34 + 1;
      uVar24 = uVar24 + 1;
    }
    pcVar25 = pcVar25 + 1;
    uVar34 = uVar34 + 1;
  } while (pcVar25 != param_2 + param_3);
  if (uVar24 != 6) {
    return;
  }
  uVar24 = param_3 - uVar19;
  if (param_3 < uVar19) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar19,param_3,param_3,&PTR_s_src_generic_parse_rs_0020ff50);
  }
  pcVar25 = param_2 + uVar19;
  if (bVar16) {
    if (uVar24 < 2) {
      return;
    }
    if (*pcVar25 != '\"') {
      return;
    }
    if (param_2[param_3 - 1] != '\"') {
      return;
    }
    uVar34 = uVar24 - 2;
    pcVar25 = pcVar25 + 1;
    if (uVar24 < 0x12) {
      if (uVar34 == 0) {
        uVar34 = 0;
      }
      else {
        do {
          if (param_2[uVar19 + 1] == '\"') {
            return;
          }
          uVar19 = uVar19 + 1;
        } while (param_3 - 2 != uVar19);
      }
    }
    else {
      uVar19 = core[62e902411887be45]::slice::memchr::memchr_aligned(0x22,pcVar25,uVar34);
      if ((uVar19 & 1) != 0) {
        return;
      }
    }
  }
  else {
    uVar34 = uVar24;
  }
  lVar3 = local_48;
  pcVar17 = pcStack_50;
  lVar28 = lStack_58;
  pcVar32 = pcStack_60;
  lVar20 = lStack_78;
  pcVar1 = pcStack_80;
  uVar24 = local_98[2];
  uVar19 = local_98[0];
  if (local_a0 == (ulong *)0x0) {
    return;
  }
  if (local_98[0] == 0) {
    return;
  }
  auVar37 = parse::parse_ts(pcStack_70,local_68);
  if (auVar37._0_8_ != 1) {
    return;
  }
  if (uVar19 < 0x11) {
    if (uVar19 < 8) {
      if (uVar19 < 4) {
        uVar22 = (ulong)*(byte *)((long)local_a0 + (uVar19 - 1)) |
                 (ulong)((uint)*(byte *)((long)local_a0 + (uVar19 >> 1)) << 8 |
                        (uint)(byte)*local_a0 << 0x10);
        uVar27 = 0;
      }
      else {
        uVar22 = (ulong)(uint)*local_a0;
        uVar27 = (ulong)*(uint *)((long)local_a0 + (uVar19 - 4));
      }
    }
    else {
      uVar22 = *local_a0;
      uVar27 = *(ulong *)((long)local_a0 + (uVar19 - 8));
    }
    uVar22 = uVar22 ^ 0x243f6a8885a308d3;
    uVar27 = uVar19 ^ 0x13198a2e03707344 ^ uVar27;
  }
  else {
    uVar27 = uVar19 ^ 0x452821e638d01377;
    uVar31 = (uVar19 - 0x11 >> 4) + 1;
    uVar22 = (ulong)((uint)uVar31 & 3);
    if (uVar19 - 0x11 < 0x30) {
      lVar21 = 0;
      lVar30 = 0x10;
LAB_00679d37:
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar27 ^ *(ulong *)((long)local_a0 + lVar21 + 8);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulong *)((long)local_a0 + lVar21) ^ 0x243f6a8885a308d3;
        uVar27 = SUB168(auVar7 * auVar14,8) ^ SUB168(auVar7 * auVar14,0);
        uVar22 = uVar22 - 1;
        lVar21 = lVar30;
        lVar30 = lVar30 + 0x10;
      } while (uVar22 != 0);
    }
    else {
      uVar31 = uVar31 & 0xfffffffffffffffc;
      lVar21 = 0;
      do {
        lVar30 = lVar21;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar27 ^ *(ulong *)((long)local_a0 + lVar30 + 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulong *)((long)local_a0 + lVar30) ^ 0x243f6a8885a308d3;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = SUB168(auVar36 * auVar10,8) ^ SUB168(auVar36 * auVar10,0) ^
                       *(ulong *)((long)local_a0 + lVar30 + 0x18);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulong *)((long)local_a0 + lVar30 + 0x10) ^ 0x243f6a8885a308d3;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = SUB168(auVar4 * auVar11,8) ^ SUB168(auVar4 * auVar11,0) ^
                       *(ulong *)((long)local_a0 + lVar30 + 0x28);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulong *)((long)local_a0 + lVar30 + 0x20) ^ 0x243f6a8885a308d3;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = SUB168(auVar5 * auVar12,8) ^ SUB168(auVar5 * auVar12,0) ^
                       *(ulong *)((long)local_a0 + lVar30 + 0x38);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulong *)((long)local_a0 + lVar30 + 0x30) ^ 0x243f6a8885a308d3;
        uVar27 = SUB168(auVar6 * auVar13,8) ^ SUB168(auVar6 * auVar13,0);
        lVar21 = lVar30 + 0x40;
        uVar31 = uVar31 - 4;
      } while (uVar31 != 0);
      if (uVar22 != 0) {
        lVar30 = lVar30 + 0x50;
        goto LAB_00679d37;
      }
    }
    uVar22 = *(ulong *)((long)local_a0 + (uVar19 - 0x10)) ^ 0x13198a2e03707344;
    uVar27 = uVar27 ^ *(ulong *)((long)local_a0 + (uVar19 - 8)) ^ 0xa4093822299f31d0;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar27;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar22;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar8 * auVar15,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar8 * auVar15,8);
  if ((uVar24 != 0) && (lVar3 != 0)) {
    auVar38 = parse::parse_ts(pcVar1,lVar20);
    lVar20 = auVar38._8_8_;
    if (auVar38._0_8_ != 1) {
LAB_00679f5d:
      lVar28 = 0;
      uVar33 = 0;
      uVar29 = 0xff000000;
      goto LAB_00679f76;
    }
    puVar26 = (undefined8 *)*param_1;
    if (((long)puVar26[1] <= lVar20) && (lVar20 < (long)puVar26[2])) {
      uVar29 = 0xff000000;
      if (lVar28 == 8) {
        if ((*pcVar32 == 'p') && (pcVar32[1] == 'u')) {
          if ((pcVar32[2] != 'r') ||
             ((((pcVar32[3] != 'c' || (pcVar32[4] != 'h')) || (pcVar32[5] != 'a')) ||
              ((pcVar32[6] != 's' || (pcVar32[7] != 'e')))))) goto LAB_0067a037;
          iVar18 = parse::parse_price(pcVar25,uVar34);
          if (iVar18 == 1) {
            puVar23 = (undefined8 *)
                      <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      ::get::<[u8]>(*puVar26,pcVar17,lVar3);
            puVar26 = puVar26 + 3;
            if (puVar23 != (undefined8 *)0x0) {
              puVar26 = puVar23;
            }
            uVar33 = *(undefined4 *)puVar26;
            uVar35 = extraout_EDX | 0x2000000;
            goto LAB_0067a014;
          }
          goto LAB_00679f5d;
        }
      }
      else if (lVar28 == 4) {
        if (*pcVar32 == 'c') {
          if ((pcVar32[1] != 'a') || (pcVar32[2] != 'r')) {
LAB_0067a037:
            uVar33 = 0;
            lVar28 = 0;
            goto LAB_00679f76;
          }
          uVar35 = 0x1000000;
          uVar33 = 0;
          if (pcVar32[3] != 't') {
LAB_0067a05b:
            uVar33 = 0;
            lVar28 = 0;
            goto LAB_00679f76;
          }
        }
        else {
          if (*pcVar32 != 'v') goto LAB_00679f73;
          if ((pcVar32[1] != 'i') || (pcVar32[2] != 'e')) goto LAB_0067a037;
          uVar33 = 0;
          if (pcVar32[3] != 'w') goto LAB_0067a05b;
          uVar35 = 0;
        }
LAB_0067a014:
        lVar28 = 0;
        uVar29 = 0xff000000;
        if (auVar37._8_8_ - lVar20 < 0x5265c01) {
          lVar28 = lVar20;
          uVar29 = uVar35;
        }
        goto LAB_00679f76;
      }
    }
  }
LAB_00679f73:
  uVar29 = 0xff000000;
  lVar28 = 0;
  uVar33 = 0;
LAB_00679f76:
  plVar2 = (long *)param_1[1];
  iVar18 = *(int *)param_1[2];
  lVar20 = plVar2[2];
  if (lVar20 == *plVar2) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::pqw::Meta>>::grow_one
              (plVar2);
  }
  lVar3 = plVar2[1];
  *(char **)(lVar3 + lVar20 * 0x28) = param_2;
  *(long *)(lVar3 + 8 + lVar20 * 0x28) = auVar37._8_8_;
  *(long *)(lVar3 + 0x10 + lVar20 * 0x28) = lVar28;
  *(uint *)(lVar3 + 0x18 + lVar20 * 0x28) = uVar29;
  *(undefined4 *)(lVar3 + 0x1c + lVar20 * 0x28) = uVar33;
  *(uint *)(lVar3 + 0x20 + lVar20 * 0x28) =
       (SUB164(auVar9 * ZEXT816(0x82efa98ec4e6c89),0xc) ^
       SUB164(auVar9 * ZEXT816(0x82efa98ec4e6c89),4)) & iVar18 - 1U;
  plVar2[2] = lVar20 + 1;
  return;
}


// ==== pipeline::generic::parse::manifest::{closure#0} @ 0067a080 (1580 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::manifest::{closure#0} */

undefined1  [16] __rustcall
pipeline[509596c7b52975b2]::generic::parse::manifest::_closure_0_
          (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined1 uVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  ulong *local_98;
  code *local_90;
  ulong local_80;
  undefined8 *puStack_78;
  ulong local_70;
  ulong local_68;
  undefined8 *puStack_60;
  long local_48;
  ulong *local_40;
  code *local_38;
  
  <alloc[2a0ada2ddd1fabff]::string::String>::from_utf8_lossy(&local_80,param_3,param_4);
  if (local_80 == 0xffffffffffffffff) {
    uVar21 = local_70 == 0;
    if ((long)local_70 < 0) {
      alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    }
    puVar3 = puStack_78;
    if ((bool)uVar21) {
      puVar6 = (undefined8 *)&DAT_00000001;
    }
    else {
      puVar6 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(local_70,1);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,local_70);
      }
      (*(code *)PTR_memcpy_00841de0)(puVar6,puVar3,local_70);
    }
    puStack_60 = puVar6;
    local_68 = local_70;
    pcVar2 = (code *)PTR_memcmp_00842098;
  }
  else {
    puStack_60 = puStack_78;
    local_68 = local_80;
    pcVar2 = (code *)PTR_memcmp_00842098;
  }
  PTR_memcmp_00842098 = pcVar2;
  if (param_4 <= param_2) {
    lVar19 = param_2 - param_4;
    lVar17 = 1;
    local_48 = param_1;
    do {
      lVar13 = local_48;
      if (lVar19 + lVar17 == 1) {
        iVar5 = (*(code *)PTR_memcmp_00842098)(lVar19 + local_48,param_3,param_4);
        if (iVar5 == 0) goto LAB_0067a2ab;
        goto LAB_0067a1c6;
      }
      iVar5 = (*pcVar2)(param_1,param_3,param_4);
      lVar17 = lVar17 + -1;
      param_1 = param_1 + 1;
    } while (iVar5 != 0);
    lVar19 = -lVar17;
    lVar13 = local_48;
LAB_0067a2ab:
    uVar8 = lVar19 + param_4;
    uVar10 = param_2 - uVar8;
    if (param_2 < uVar8) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar8,param_2,param_2,&PTR_s_src_generic_parse_rs_002110d8);
    }
    lVar17 = uVar8 + lVar13;
    uVar15 = uVar10 & 0x7fffffffffffffc0;
    auVar22 = vpbroadcastd_avx512f(ZEXT416(DAT_00206490));
    uVar11 = 0x40;
    do {
      uVar9 = uVar11;
      if (uVar10 < uVar9) {
        if (uVar15 == uVar10) goto LAB_0067a445;
        lVar18 = 0;
        goto LAB_0067a430;
      }
      uVar16 = vpcmpeqb_avx512bw(auVar22,*(undefined1 (*) [64])(lVar17 + -0x40 + uVar9));
      uVar11 = uVar9 + 0x40;
    } while (uVar16 == 0);
    uVar15 = 0;
    for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
      uVar15 = uVar15 + 1;
    }
    uVar15 = uVar15 | uVar9 - 0x40;
joined_r0x0067a547:
    uVar8 = uVar15 + 1;
    if (uVar10 < uVar8) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar8,uVar10,uVar10,&PTR_s_src_generic_parse_rs_002110c0);
    }
    uVar10 = uVar10 - uVar8;
    uVar11 = uVar10 & 0x7fffffffffffffc0;
    auVar22 = vpbroadcastd_avx512f(ZEXT416(DAT_00206400));
    uVar9 = 0x40;
    do {
      uVar16 = uVar9;
      if (uVar10 < uVar16) {
        if (uVar11 == uVar10) goto LAB_0067a4a5;
        lVar18 = 0;
        goto LAB_0067a490;
      }
      uVar1 = vpcmpeqb_avx512bw(auVar22,*(undefined1 (*) [64])
                                         (param_4 + lVar13 + lVar19 + uVar15 + -0x3f + uVar16));
      uVar9 = uVar16 + 0x40;
    } while (uVar1 == 0);
    uVar11 = 0;
    for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 | uVar16 - 0x40;
joined_r0x0067a623:
    uVar9 = uVar11 + 1;
    if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar9,uVar10,uVar10,&PTR_s_src_generic_parse_rs_002110a8);
    }
    uVar10 = uVar10 - uVar9;
    lVar18 = lVar17 + uVar8 + uVar9;
    uVar8 = uVar10 & 0x7fffffffffffffc0;
    lVar17 = lVar19 + uVar15 + uVar11;
    uVar9 = 0x40;
    do {
      uVar16 = uVar9;
      if (uVar10 < uVar16) {
        if (uVar8 == uVar10) goto LAB_0067a513;
        lVar20 = 0;
        goto LAB_0067a500;
      }
      uVar1 = vpcmpeqb_avx512bw(auVar22,*(undefined1 (*) [64])
                                         (param_4 + lVar13 + lVar17 + -0x3e + uVar16));
      uVar9 = uVar16 + 0x40;
    } while (uVar1 == 0);
    uVar8 = 0;
    for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = uVar8 | uVar16 - 0x40;
joined_r0x0067a665:
    if (uVar10 < uVar8) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (0,uVar8,uVar10,&PTR_s_src_generic_parse_rs_00211090);
    }
    auVar23 = parse_ts(lVar18,uVar8);
    uVar7 = auVar23._8_8_;
    if (auVar23._0_8_ == 1) {
      uVar12 = 0;
    }
    else {
      <alloc[2a0ada2ddd1fabff]::string::String>::from_utf8_lossy(&local_80,lVar18,uVar8);
      local_38 = <alloc[2a0ada2ddd1fabff]::borrow::Cow<str>as_core[62e902411887be45]::fmt::Display>
                 ::fmt;
      local_40 = &local_80;
      alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_98,&DAT_0020f125,&local_40);
      if (0 < (long)local_80) {
        if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puStack_78 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puStack_78)) {
          free(puStack_78);
        }
        else {
          uVar8 = 0x10;
          if (0x10 < local_80) {
            uVar8 = local_80;
          }
          lVar17 = 0x40 - LZCOUNT(uVar8 - 1);
          if ((local_80 < 0x10001) || (cVar4 = sys::big_put(puStack_78,lVar17), cVar4 == '\0')) {
            *puStack_78 = *(undefined8 *)(in_FS_OFFSET + lVar17 * 8 + -0x3c8);
            *(undefined8 **)(in_FS_OFFSET + lVar17 * 8 + -0x3c8) = puStack_78;
          }
        }
      }
      uVar7 = <core[62e902411887be45]::io::error::Error>::new::
              <alloc[2a0ada2ddd1fabff]::string::String>(0x15,&local_98);
      uVar12 = 1;
    }
    goto LAB_0067a20d;
  }
LAB_0067a1c6:
  puVar14 = &DAT_0020b284;
  goto LAB_0067a1e8;
  while (lVar18 = lVar18 + 1, param_2 - (uVar8 + uVar15) != lVar18) {
LAB_0067a430:
    if (*(char *)(uVar15 + lVar17 + lVar18) == ':') {
      uVar15 = lVar18 + uVar15;
      goto joined_r0x0067a547;
    }
  }
LAB_0067a445:
  puVar14 = &DAT_0020da8c;
  goto LAB_0067a1e8;
  while (lVar18 = lVar18 + 1, (((~uVar15 + param_2) - lVar19) - param_4) - uVar11 != lVar18) {
LAB_0067a490:
    if (*(char *)(uVar11 + lVar17 + uVar8 + lVar18) == '\"') {
      uVar11 = lVar18 + uVar11;
      goto joined_r0x0067a623;
    }
  }
LAB_0067a4a5:
  puVar14 = &DAT_0020b294;
  goto LAB_0067a1e8;
  while (lVar20 = lVar20 + 1,
        (((((param_2 - uVar11) - lVar19) - uVar15) - param_4) - uVar8) + -2 != lVar20) {
LAB_0067a500:
    if (*(char *)(lVar17 + param_4 + uVar8 + lVar13 + 2 + lVar20) == '\"') {
      uVar8 = lVar20 + uVar8;
      goto joined_r0x0067a665;
    }
  }
LAB_0067a513:
  puVar14 = &DAT_0020d145;
LAB_0067a1e8:
  local_98 = &local_68;
  local_90 = <alloc[2a0ada2ddd1fabff]::string::String_as_core[62e902411887be45]::fmt::Display>::fmt;
  alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_80,puVar14,&local_98);
  uVar7 = <core[62e902411887be45]::io::error::Error>::new::<alloc[2a0ada2ddd1fabff]::string::String>
                    (0x15,&local_80);
  uVar12 = 1;
LAB_0067a20d:
  puVar3 = puStack_60;
  if (local_68 != 0) {
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puStack_60 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= puStack_60)) {
      free(puStack_60);
    }
    else {
      uVar8 = 0x10;
      if (0x10 < local_68) {
        uVar8 = local_68;
      }
      lVar17 = LZCOUNT(uVar8 - 1);
      lVar19 = 0x40 - lVar17;
      if ((uVar8 - 1 < 0x10000) || (cVar4 = sys::big_put(puStack_60,lVar19), cVar4 == '\0')) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar19 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar19 * 8 + -0x3c8) = puVar3;
      }
    }
  }
  auVar23._8_8_ = uVar7;
  auVar23._0_8_ = uVar12;
  return auVar23;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<pipeline::generic::P1Bufs, pipeline::generic::P1, <pipeline::generic::P1Bufs as core::default::Default>::default, pipeline::generic::run::{closure#8}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067aa20 (156 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,
   pipeline[509596c7b52975b2]::generic::P1, <pipeline[509596c7b52975b2]::generic::P1Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P1)>,
   pipeline[509596c7b52975b2]::generic::P1Bufs)>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#8}>::{closure#0},(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(long *param_1)

{
  long *plVar1;
  long local_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  
  local_78 = param_1[4];
  lStack_70 = param_1[5];
  lStack_68 = param_1[6];
  lStack_60 = param_1[7];
  local_98 = *param_1;
  lStack_90 = param_1[1];
  lStack_88 = param_1[2];
  lStack_80 = param_1[3];
  local_58 = local_98;
  lStack_50 = lStack_90;
  lStack_48 = lStack_88;
  lStack_40 = lStack_80;
  local_38 = local_78;
  lStack_30 = lStack_70;
  lStack_28 = lStack_68;
  lStack_20 = lStack_60;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_98);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>
            (&local_98,&local_38);
  plVar1 = (long *)param_1[8];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (plVar1 + 2);
  plVar1[4] = lStack_88;
  plVar1[5] = lStack_80;
  plVar1[6] = local_78;
  plVar1[7] = lStack_70;
  plVar1[2] = local_98;
  plVar1[3] = lStack_90;
  plVar1[4] = lStack_88;
  plVar1[5] = lStack_80;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>>>
    ::drop_slow(plVar1);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<pipeline::generic::P2Bufs, pipeline::generic::P2, <pipeline::generic::P2Bufs as core::default::Default>::default, pipeline::generic::run::{closure#10}>::{closure#0}, (alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs)>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067aac0 (197 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,
   pipeline[509596c7b52975b2]::generic::P2, <pipeline[509596c7b52975b2]::generic::P2Bufs as
   core[62e902411887be45]::default::Default>::default,
   pipeline[509596c7b52975b2]::generic::run::{closure#10}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, pipeline[509596c7b52975b2]::generic::P2)>,
   pipeline[509596c7b52975b2]::generic::P2Bufs)>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::{closure#10}>::{closure#0},(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(long *param_1)

{
  long *plVar1;
  long local_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  local_c8 = param_1[4];
  lStack_c0 = param_1[5];
  lStack_b8 = param_1[6];
  lStack_b0 = param_1[7];
  local_e8 = *param_1;
  lStack_e0 = param_1[1];
  lStack_d8 = param_1[2];
  lStack_d0 = param_1[3];
  local_a8 = local_e8;
  lStack_a0 = lStack_e0;
  lStack_98 = lStack_d8;
  lStack_90 = lStack_d0;
  local_88 = local_c8;
  lStack_80 = lStack_c0;
  lStack_78 = lStack_b8;
  lStack_70 = lStack_b0;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_e8);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>
            (&local_a8,&local_c8);
  plVar1 = (long *)param_1[8];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (plVar1 + 3);
  plVar1[0x12] = local_30;
  plVar1[0x13] = lStack_28;
  plVar1[0x14] = lStack_20;
  plVar1[0x15] = lStack_18;
  plVar1[0xf] = lStack_48;
  plVar1[0x10] = lStack_40;
  plVar1[0x11] = lStack_38;
  plVar1[0x12] = local_30;
  plVar1[0xb] = local_68;
  plVar1[0xc] = lStack_60;
  plVar1[0xd] = lStack_58;
  plVar1[0xe] = lStack_50;
  plVar1[7] = local_88;
  plVar1[8] = lStack_80;
  plVar1[9] = lStack_78;
  plVar1[10] = lStack_70;
  plVar1[3] = local_a8;
  plVar1[4] = lStack_a0;
  plVar1[5] = lStack_98;
  plVar1[6] = lStack_90;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>>>
    ::drop_slow(plVar1);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>), alloc::vec::Vec<pipeline::generic::core::UserRow>, pipeline::generic::run::{closure#11}, pipeline::generic::run::{closure#12}>::{closure#0}, (alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>))>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067aba0 (151 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,
   pipeline[509596c7b52975b2]::generic::run::{closure#11},
   pipeline[509596c7b52975b2]::generic::run::{closure#12}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>::{closure#1}
   as core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::{closure#11},pipeline[509596c7b52975b2]::generic::run::{closure#12}>::{closure#0},(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  long *plVar1;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  
  local_218 = param_1[4];
  uStack_210 = param_1[5];
  uStack_208 = param_1[6];
  uStack_200 = param_1[7];
  local_238 = *param_1;
  uStack_230 = param_1[1];
  uStack_228 = param_1[2];
  uStack_220 = param_1[3];
  local_1f8 = local_238;
  uStack_1f0 = uStack_230;
  uStack_1e8 = uStack_228;
  uStack_1e0 = uStack_220;
  local_1d8 = local_218;
  uStack_1d0 = uStack_210;
  uStack_1c8 = uStack_208;
  uStack_1c0 = uStack_200;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_238);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::generic::util::par_run<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>
            (&local_1f8,&local_218);
  plVar1 = (long *)param_1[8];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (plVar1 + 3);
  (*(code *)PTR_memcpy_00841de0)(plVar1 + 3,&local_1f8,0x1d8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>
    ::drop_slow(plVar1);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::generic::util::par_run<(), core::result::Result<(), core::io::error::Error>, pipeline::generic::run::{closure#13}, pipeline::generic::run::{closure#14}>::{closure#0}, (alloc::vec::Vec<(usize, core::result::Result<(), core::io::error::Error>)>, ())>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067ac40 (148 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(),
   core[62e902411887be45]::result::Result<(), core[62e902411887be45]::io::error::Error>,
   pipeline[509596c7b52975b2]::generic::run::{closure#13},
   pipeline[509596c7b52975b2]::generic::run::{closure#14}>::{closure#0},
   (alloc[2a0ada2ddd1fabff]::vec::Vec<(usize, core[62e902411887be45]::result::Result<(),
   core[62e902411887be45]::io::error::Error>)>, ())>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::{closure#13},pipeline[509596c7b52975b2]::generic::run::{closure#14}>::{closure#0},(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(long *param_1)

{
  long *plVar1;
  long local_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  
  local_78 = param_1[4];
  lStack_70 = param_1[5];
  lStack_68 = param_1[6];
  lStack_60 = param_1[7];
  local_98 = *param_1;
  lStack_90 = param_1[1];
  lStack_88 = param_1[2];
  lStack_80 = param_1[3];
  local_58 = local_98;
  lStack_50 = lStack_90;
  lStack_48 = lStack_88;
  lStack_40 = lStack_80;
  local_38 = local_78;
  lStack_30 = lStack_70;
  lStack_28 = lStack_68;
  lStack_20 = lStack_60;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_98);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::generic::util::par_run<(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>
            (&local_98,&local_38);
  plVar1 = (long *)param_1[8];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,()),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (plVar1 + 3);
  plVar1[5] = lStack_88;
  plVar1[3] = local_98;
  plVar1[4] = lStack_90;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>)>,())>>>
    ::drop_slow(plVar1);
    return;
  }
  return;
}


// ==== <pipeline::generic::StrBuf>::new @ 00698120 (296 bytes)

/* <pipeline[509596c7b52975b2]::generic::StrBuf>::new */

void __rustcall
<pipeline[509596c7b52975b2]::generic::StrBuf>::new(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong unaff_RBX;
  ulong *unaff_R14;
  ulong uVar2;
  ulong local_38;
  undefined4 *puStack_30;
  ulong local_28;
  
  uVar1 = param_2 * 4 + 4;
  uVar2 = param_2 + 1;
  if (uVar2 >> 0x3e == 0 && uVar1 < 0x7ffffffffffffffd) {
    if (uVar1 == 0) goto LAB_006981ab;
    puStack_30 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(uVar1,4);
    if (puStack_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar1);
    }
    local_38 = uVar2;
    if (uVar2 == 0) goto LAB_006981c5;
    *puStack_30 = 0;
    local_28 = 1;
    unaff_RBX = param_3;
    unaff_R14 = param_1;
    if (-1 < (long)param_3) goto LAB_006981e6;
  }
  do {
    param_1 = unaff_R14;
    param_3 = unaff_RBX;
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_006981ab:
    local_38 = 0;
    puStack_30 = (undefined4 *)&DAT_00000004;
LAB_006981c5:
    local_28 = 0;
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_38);
    *puStack_30 = 0;
    local_28 = 1;
    unaff_RBX = param_3;
    unaff_R14 = param_1;
  } while ((long)param_3 < 0);
LAB_006981e6:
  local_28 = 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = __rustc[45371133cddedda4]::__rust_alloc(param_3,1);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,param_3);
    }
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = (ulong)puStack_30;
  param_1[3] = param_3;
  param_1[4] = uVar1;
  param_1[5] = 0;
  return;
}


// ==== <pipeline::generic::util::Tab>::reset @ 00698700 (452 bytes)

/* <pipeline[509596c7b52975b2]::generic::util::Tab>::reset */

void __rustcall <pipeline[509596c7b52975b2]::generic::util::Tab>::reset(ulong *param_1,long param_2)

{
  undefined8 *__ptr;
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  
  if (param_2 < 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = param_2 * 2;
  }
  uVar6 = 0x10;
  if (0x10 < uVar7) {
    uVar6 = uVar7;
  }
  lVar2 = uVar6 - 1;
  lVar5 = LZCOUNT(lVar2);
  uVar6 = 1L << (-lVar5 & 0x3fU);
  uVar8 = ~(lVar2 >> 0x3f) & uVar6;
  uVar7 = *param_1;
  if (uVar7 < uVar8) {
    uVar4 = uVar8 * 8;
    lVar5 = CONCAT71(0x7fffffffffffff,uVar4 < 0x7ffffffffffffff9);
    if (uVar8 >> 0x3d == 0 && uVar4 < 0x7ffffffffffffff9) {
      uVar3 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar4,8);
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar4);
      }
      if (uVar7 != 0) {
        __ptr = (undefined8 *)param_1[1];
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
          free(__ptr);
        }
        else {
          uVar4 = 0x10;
          if (0x10 < uVar7 << 3) {
            uVar4 = uVar7 << 3;
          }
          lVar2 = LZCOUNT(uVar4 - 1);
          lVar5 = 0x40 - lVar2;
          if (0xffff < uVar4 - 1) {
            cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5);
            if (cVar1 != '\0') goto LAB_00698875;
          }
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
        }
      }
LAB_00698875:
      *param_1 = uVar6;
      param_1[1] = uVar3;
      param_1[2] = uVar8;
      goto LAB_00698880;
    }
    lVar2 = alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if (lVar2 < 0) {
    param_1[2] = 0;
  }
  else {
    uVar7 = param_1[1];
    lVar2 = 8L << (0x40U - lVar5 & 0x3f);
    (*(code *)PTR_memset_00841dd0)(uVar7,0,lVar2 + -8);
    *(undefined8 *)((uVar7 - 8) + lVar2) = 0;
    param_1[2] = uVar6;
  }
LAB_00698880:
  param_1[3] = uVar8 - 1;
  return;
}


// ==== <hashbrown::map::HashMap<&[u8], u32, core::hash::BuildHasherDefault<pipeline::generic::util::H>>>::insert @ 0069aa40 (531 bytes)

/* <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8], u32,
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>::insert
    */

void __rustcall
<hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
::insert(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar21 [64];
  undefined1 extraout_var [56];
  ulong local_88;
  
  uVar11 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
           ::hash_one::<&&[u8]>(param_2,param_3);
  auVar20 = in_ZMM1._0_16_;
  if (param_1[2] == 0) {
    <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(&[u8],u32)>>::reserve_rehash::
    <hashbrown[ee4ff39ba1229c30]::map::make_hasher<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
              (param_1,param_1 + 4);
    auVar20 = in_ZMM1._0_16_;
  }
  puVar6 = PTR_memcmp_00842098;
  pauVar1 = (undefined1 (*) [16])*param_1;
  uVar2 = param_1[1];
  auVar17 = vpbroadcastb_avx512vl();
  auVar18 = ZEXT1664(auVar17);
  bVar5 = false;
  auVar20 = vpcmpeqd_avx(auVar20,auVar20);
  auVar21 = ZEXT1664(auVar20);
  lVar15 = 0;
  uVar12 = uVar11;
  do {
    uVar12 = uVar12 & uVar2;
    auVar20 = *(undefined1 (*) [16])(*pauVar1 + uVar12);
    auVar17 = auVar18._0_16_;
    uVar13 = vpcmpeqb_avx512vl(auVar20,auVar17);
    if ((short)uVar13 != 0) {
      do {
        auVar19 = auVar21._0_16_;
        uVar4 = 0;
        for (uVar10 = (uint)uVar13; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar16 = uVar4 + uVar12 & uVar2;
        if (param_3 == *(long *)((long)pauVar1 + uVar16 * -0x18 + -0x10)) {
          iVar9 = (*(code *)puVar6)(param_2,*(undefined8 *)((long)pauVar1 + uVar16 * -0x18 + -0x18),
                                    param_3);
          auVar18._8_56_ = extraout_var;
          auVar18._0_8_ = extraout_XMM1_Qa;
          auVar19 = auVar18._0_16_;
          if (iVar9 == 0) goto LAB_0069ac05;
        }
        iVar9 = (uint)uVar13 - 1;
        uVar8 = (ushort)iVar9 & (ushort)uVar13;
        uVar13 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar8);
        auVar18 = ZEXT1664(auVar17);
        auVar19 = vpcmpeqd_avx(auVar19,auVar19);
        auVar21 = ZEXT1664(auVar19);
      } while (uVar8 != 0);
    }
    if (bVar5) goto LAB_0069ab7e;
    uVar8 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar20[0xf] >> 7) << 0xf;
    if (uVar8 == 0) {
      bVar5 = false;
    }
    else {
      uVar4 = 0;
      for (uVar10 = (uint)uVar8; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      local_88 = uVar4 + uVar12 & uVar2;
LAB_0069ab7e:
      uVar3 = vpcmpeqb_avx512vl(auVar20,auVar21._0_16_);
      if ((short)uVar3 != 0) {
        bVar7 = (*pauVar1)[local_88];
        if (-1 < (char)bVar7) {
          auVar20 = *pauVar1;
          uVar4 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar20[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          local_88 = (ulong)uVar4;
          bVar7 = (*pauVar1)[local_88];
        }
        bVar14 = (byte)(uVar11 >> 0x39);
        (*pauVar1)[local_88] = bVar14;
        pauVar1[1][local_88 - 0x10 & uVar2] = bVar14;
        auVar17._1_7_ = 0;
        auVar17[0] = bVar7 & 1;
        auVar20._4_4_ = DAT_00206410;
        auVar20._0_4_ = DAT_00206410;
        auVar20._8_4_ = DAT_00206410;
        auVar20._12_4_ = DAT_00206410;
        auVar17._8_8_ = auVar20._8_8_;
        auVar20 = vpsubq_avx(*(undefined1 (*) [16])(param_1 + 2),auVar17);
        *(undefined1 (*) [16])(param_1 + 2) = auVar20;
        *(undefined8 *)((long)pauVar1 + local_88 * -0x18 + -0x18) = param_2;
        *(long *)((long)pauVar1 + local_88 * -0x18 + -0x10) = param_3;
        uVar16 = local_88;
LAB_0069ac05:
        *(undefined4 *)((long)pauVar1 + uVar16 * -0x18 + -8) = param_4;
        return;
      }
      bVar5 = true;
    }
    uVar12 = uVar12 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while( true );
}


// ==== <pipeline::generic::util::Mapped>::open @ 0069e240 (839 bytes)

/* <pipeline[509596c7b52975b2]::generic::util::Mapped>::open */

void __rustcall
<pipeline[509596c7b52975b2]::generic::util::Mapped>::open
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __len;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  int local_198;
  int local_194;
  ulong local_190;
  undefined1 local_188 [16];
  ulong *puStack_178;
  code *pcStack_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 auStack_128 [16];
  undefined1 local_118 [16];
  undefined1 auStack_108 [16];
  undefined1 local_f0 [24];
  long local_d8;
  ulong local_d0;
  size_t local_88;
  
  local_188._8_8_ = 1;
  local_188._0_8_ = 0x1b600000000;
  <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(&local_198,local_188,param_2,param_3);
  if (local_198 == 1) {
    local_1b0 = local_190;
    switch((uint)local_190 & 3) {
    case 0:
      local_190 = (ulong)*(byte *)(local_190 + 0x10);
      break;
    case 1:
      local_190 = (ulong)*(byte *)(local_190 + 0x1f);
      break;
    case 2:
      uVar3 = (**(code **)(core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS + 8))
                        (local_190 >> 0x20);
      local_190 = (ulong)uVar3;
      break;
    case 3:
      local_190 = local_190 >> 0x20;
    }
    local_188._8_8_ =
         <std[c60ef17cbf7de79f]::path::Display_as_core[62e902411887be45]::fmt::Display>::fmt;
    local_188._0_8_ = &local_1a8;
    puStack_178 = &local_1b0;
    pcStack_170 = <core[62e902411887be45]::io::error::Error_as_core[62e902411887be45]::fmt::Display>
                  ::fmt;
    local_1a8 = param_2;
    local_1a0 = param_3;
    alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(local_f0,&DAT_0020a7c2,local_188);
    uVar6 = <core[62e902411887be45]::io::error::Error>::new::
            <alloc[2a0ada2ddd1fabff]::string::String>(local_190 & 0xff,local_f0);
    if ((1 < ((uint)local_1b0 & 3) - 2) && ((local_1b0 & 3) != 0)) {
      (**(code **)(local_1b0 + 0x17))(local_1b0 - 1);
    }
    param_1[1] = uVar6;
    *param_1 = 1;
    return;
  }
  std[c60ef17cbf7de79f]::sys::fs::unix::try_statx(&local_d8,local_194,&DAT_0020bcf0,0x1000);
  if (local_d8 == -1) {
    auStack_128 = ZEXT416(0);
    auStack_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    _local_188 = ZEXT1632(auStack_128);
    local_168 = _local_188;
    local_148 = _local_188;
    iVar2 = (*(code *)PTR_fstat_00841df8)(local_194,local_188);
    if (iVar2 == -1) {
      piVar5 = __errno_location();
      if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
          &PTR_format_error_0058cdd8) {
        core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
             (undefined *)&PTR_format_error_0058cdd8;
      }
      local_d0 = (long)*piVar5 << 0x20 | 2;
      goto LAB_0069e463;
    }
    __len = local_168._16_8_;
joined_r0x0069e334:
    if (__len != 0) {
      pvVar4 = mmap64((void *)0x0,__len,1,2,local_194,0);
      if (pvVar4 != (void *)0xffffffffffffffff) {
        param_1[1] = pvVar4;
        param_1[2] = __len;
        *param_1 = 0;
        close(local_194);
        return;
      }
      piVar5 = __errno_location();
      if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
          &PTR_format_error_002124a8) {
        core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
             (undefined *)&PTR_format_error_002124a8;
      }
      local_1b0 = (long)*piVar5 << 0x20 | 2;
      uVar1 = (**(code **)(core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS + 8))();
      local_188._8_8_ =
           <std[c60ef17cbf7de79f]::path::Display_as_core[62e902411887be45]::fmt::Display>::fmt;
      local_188._0_8_ = &local_1a8;
      puStack_178 = &local_1b0;
      pcStack_170 = <core[62e902411887be45]::io::error::Error_as_core[62e902411887be45]::fmt::Display>
                    ::fmt;
      local_1a8 = param_2;
      local_1a0 = param_3;
      alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(local_f0,&DAT_0020a7c2,local_188);
      uVar6 = <core[62e902411887be45]::io::error::Error>::new::
              <alloc[2a0ada2ddd1fabff]::string::String>(uVar1,local_f0);
      if ((1 < ((uint)local_1b0 & 3) - 2) && ((local_1b0 & 3) != 0)) {
        (**(code **)(local_1b0 + 0x17))(local_1b0 - 1);
      }
      param_1[1] = uVar6;
      uVar6 = 1;
      goto LAB_0069e487;
    }
  }
  else {
    __len = local_88;
    if ((int)local_d8 != 2) goto joined_r0x0069e334;
LAB_0069e463:
    if ((1 < ((uint)local_d0 & 3) - 2) && ((local_d0 & 3) != 0)) {
      (**(code **)(local_d0 + 0x17))(local_d0 - 1);
    }
  }
  *(undefined1 (*) [16])(param_1 + 1) = ZEXT816(0);
  uVar6 = 0;
LAB_0069e487:
  *param_1 = uVar6;
  close(local_194);
  return;
}


// ==== <alloc::raw_vec::RawVec<pipeline::generic::core::Parts<pipeline::generic::core::Ck>>>::grow_one @ 006a04a0 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>::grow_one
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
::grow_one(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_28 [2];
  ulong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar2,8,0x30);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


// ==== <alloc::raw_vec::RawVec<pipeline::generic::P2Bufs>>::grow_one @ 006a0a20 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::P2Bufs>>::grow_one
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::P2Bufs>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_28 [2];
  ulong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar2,8,0x80);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


// ==== <alloc::raw_vec::RawVec<(pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>)>>::grow_one @ 006a0b20 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>::grow_one
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>
::grow_one(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_28 [2];
  ulong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar2,8,0x1c0);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


// ==== <alloc::raw_vec::RawVec<(usize, pipeline::generic::P2)>>::grow_one @ 006a0c20 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(usize,
   pipeline[509596c7b52975b2]::generic::P2)>>::grow_one */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(usize,pipeline[509596c7b52975b2]::generic::P2)>>::
grow_one(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_28 [2];
  ulong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar2,8,0x40);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


// ==== <alloc::sync::Arc<std::thread::lifecycle::Packet<(alloc::vec::Vec<(usize, alloc::vec::Vec<pipeline::generic::core::UserRow>)>, (pipeline::generic::core::Scratch, pipeline::generic::core::ShardBufs, std::collections::hash::map::HashMap<u64, [u64; 4], core::hash::BuildHasherDefault<pipeline::generic::util::H>>))>>>::drop_slow @ 006a5f80 (234 bytes)

/* <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,
   (pipeline[509596c7b52975b2]::generic::core::Scratch,
   pipeline[509596c7b52975b2]::generic::core::ShardBufs,
   std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64, [u64; 4usize],
   core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>::drop_slow
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64;4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>))>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  
  lVar4 = param_1[3];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 3);
  param_1[3] = 0xfffffffffffffffe;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    if (lVar4 == -1) {
      *(undefined1 *)(plVar5 + 4) = 1;
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    else {
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      lVar4 = plVar5[2];
      LOCK();
      piVar2 = (int *)(lVar4 + 0x38);
      iVar3 = *piVar2;
      *piVar2 = 1;
      UNLOCK();
      if (iVar3 == -1) {
        syscall(0xca,lVar4 + 0x38,0x81,1);
      }
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow(param_1[2]);
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>)>,(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 3);
  if (param_1 != (undefined8 *)0xffffffffffffffff) {
    LOCK();
    plVar5 = param_1 + 1;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (param_1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= param_1)) {
        free(param_1);
        return;
      }
      *param_1 = *(undefined8 *)(in_FS_OFFSET + -0x380);
      *(undefined8 **)(in_FS_OFFSET + -0x380) = param_1;
    }
  }
  return;
}


// ==== <alloc::sync::Arc<std::thread::lifecycle::Packet<(alloc::vec::Vec<(usize, pipeline::generic::P1)>, pipeline::generic::P1Bufs)>>>::drop_slow @ 006a6180 (234 bytes)

/* <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P1)>,
   pipeline[509596c7b52975b2]::generic::P1Bufs)>>>::drop_slow */

void __rustcall
<alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  
  lVar4 = param_1[2];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 2);
  param_1[2] = 0xfffffffffffffffe;
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    if (lVar4 == -1) {
      *(undefined1 *)(plVar5 + 4) = 1;
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    else {
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      lVar4 = plVar5[2];
      LOCK();
      piVar2 = (int *)(lVar4 + 0x38);
      iVar3 = *piVar2;
      *piVar2 = 1;
      UNLOCK();
      if (iVar3 == -1) {
        syscall(0xca,lVar4 + 0x38,0x81,1);
      }
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow(param_1[8]);
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 2);
  if (param_1 != (undefined8 *)0xffffffffffffffff) {
    LOCK();
    plVar5 = param_1 + 1;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (param_1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= param_1)) {
        free(param_1);
        return;
      }
      *param_1 = *(undefined8 *)(in_FS_OFFSET + -0x390);
      *(undefined8 **)(in_FS_OFFSET + -0x390) = param_1;
    }
  }
  return;
}


// ==== <alloc::sync::Arc<std::thread::lifecycle::Packet<(alloc::vec::Vec<(usize, pipeline::generic::P2)>, pipeline::generic::P2Bufs)>>>::drop_slow @ 006a6280 (234 bytes)

/* <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,
   pipeline[509596c7b52975b2]::generic::P2)>,
   pipeline[509596c7b52975b2]::generic::P2Bufs)>>>::drop_slow */

void __rustcall
<alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs)>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  
  lVar4 = param_1[3];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 3);
  param_1[3] = 0xfffffffffffffffe;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    if (lVar4 == -1) {
      *(undefined1 *)(plVar5 + 4) = 1;
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    else {
      LOCK();
      plVar1 = plVar5 + 3;
      *plVar1 = *plVar1 + -1;
      lVar4 = *plVar1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      lVar4 = plVar5[2];
      LOCK();
      piVar2 = (int *)(lVar4 + 0x38);
      iVar3 = *piVar2;
      *piVar2 = 1;
      UNLOCK();
      if (iVar3 == -1) {
        syscall(0xca,lVar4 + 0x38,0x81,1);
      }
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow(param_1[2]);
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P2)>,pipeline[509596c7b52975b2]::generic::P2Bufs),alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (param_1 + 3);
  if (param_1 != (undefined8 *)0xffffffffffffffff) {
    LOCK();
    plVar5 = param_1 + 1;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (param_1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= param_1)) {
        free(param_1);
        return;
      }
      *param_1 = *(undefined8 *)(in_FS_OFFSET + -0x388);
      *(undefined8 **)(in_FS_OFFSET + -0x388) = param_1;
    }
  }
  return;
}


// ==== pipeline::generic::clear_parquet @ 0073aa80 (1195 bytes)

/* pipeline[509596c7b52975b2]::generic::clear_parquet */

long * __rustcall
pipeline[509596c7b52975b2]::generic::clear_parquet(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  char *__ptr;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long *local_198;
  char local_190;
  ulong local_188;
  char *local_180;
  long local_178;
  long local_170;
  long *local_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  int local_148 [2];
  long local_140;
  long *local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 uStack_108;
  uint uStack_100;
  undefined1 auStack_107 [15];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 auStack_b8 [16];
  undefined1 local_a8 [16];
  undefined1 auStack_98 [16];
  char local_68 [8];
  short *local_60;
  long local_58;
  
  std[c60ef17cbf7de79f]::sys::fs::read_dir(local_118,param_1,param_2);
  plVar7 = (long *)local_118._0_8_;
  if (local_118[8] != '\x02') {
    local_198 = (long *)local_118._0_8_;
    local_190 = local_118[8];
    while (<std[c60ef17cbf7de79f]::fs::ReadDir_as_core[62e902411887be45]::iter::traits::iterator::Iterator>
           ::next(local_148,&local_198), plVar7 = local_138, lVar10 = local_140, local_148[0] == 1)
    {
      if (local_140 == 0) {
LAB_0073aed4:
        LOCK();
        *local_198 = *local_198 + -1;
        lVar10 = *local_198;
        UNLOCK();
        goto joined_r0x0073aedc;
      }
      local_150 = local_120;
      local_160 = local_130;
      uStack_158 = uStack_128;
      local_170 = local_140;
      local_168 = local_138;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (&local_188,*(undefined8 *)(local_140 + 0x18),*(undefined8 *)(local_140 + 0x20),
                 local_138,local_130 + -1);
      bVar3 = (char)local_150 - 1;
      if ((bVar3 < 0xc) && ((0xaabU >> (bVar3 & 0x1f) & 1) != 0)) {
        __ptr = local_180;
        if (bVar3 == 7) {
LAB_0073ac4d:
          auVar2 = local_f8;
          auVar1 = _local_118;
          lVar10 = local_178;
          __ptr = local_180;
          if (local_178 == 0) {
            bVar13 = false;
          }
          else {
            bVar13 = *local_180 == '/';
          }
          local_118._8_8_ = local_178;
          local_118._0_8_ = local_180;
          auStack_107 = auVar1._17_15_;
          uStack_108 = 0xff;
          local_f8[0x1a] = bVar13;
          local_f8._0_24_ = auVar2._0_24_;
          local_f8._24_2_ = 0x201;
          <std[c60ef17cbf7de79f]::path::Components_as_core[62e902411887be45]::iter::traits::double_ended::DoubleEndedIterator>
          ::next_back(local_68,local_118);
          if (((local_68[0] != -1) && (local_68[0] == '\t')) &&
             ((local_58 != 2 || (*local_60 != 0x2e2e)))) {
            lVar12 = local_58;
            do {
              lVar11 = lVar12;
              if (lVar11 == 0) goto LAB_0073ad40;
              lVar12 = lVar11 + -1;
            } while (*(char *)((long)local_60 + lVar11 + -1) != '.');
            if ((((lVar12 != 0) && (local_58 + -8 == lVar12)) &&
                (*(int *)((long)local_60 + lVar11 + 3) == 0x74657571 &&
                 *(int *)((long)local_60 + lVar11) == 0x71726170)) &&
               (plVar7 = (long *)std[c60ef17cbf7de79f]::sys::fs::remove_file(__ptr,lVar10),
               plVar7 != (long *)0x0)) goto joined_r0x0073ae43;
          }
        }
      }
      else {
        iVar5 = (*(code *)PTR_dirfd_00841e00)(*(undefined8 *)(lVar10 + 0x28));
        if (iVar5 == -1) {
LAB_0073adeb:
          piVar9 = __errno_location();
          if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
              &PTR_format_error_0058cdd8) {
            core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
                 (undefined *)&PTR_format_error_0058cdd8;
          }
          plVar7 = (long *)((long)*piVar9 << 0x20 | 2);
          __ptr = local_180;
joined_r0x0073ae43:
          if (local_188 != 0) {
            if (((sys::A_BASE_0 == (char *)0x0) || (__ptr < sys::A_BASE_0)) ||
               (sys::A_END_0 <= __ptr)) {
              free(__ptr);
            }
            else {
              uVar8 = 0x10;
              if (0x10 < local_188) {
                uVar8 = local_188;
              }
              lVar12 = LZCOUNT(uVar8 - 1);
              lVar10 = 0x40 - lVar12;
              if ((uVar8 - 1 < 0x10000) || (cVar4 = sys::big_put(__ptr,lVar10), cVar4 == '\0')) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                }
                *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar10 * 8 + -0x3c8);
                *(char **)(in_FS_OFFSET + lVar10 * 8 + -0x3c8) = __ptr;
              }
            }
          }
          core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(&local_170);
          goto LAB_0073aed4;
        }
        std[c60ef17cbf7de79f]::sys::fs::unix::try_statx(local_118,iVar5,plVar7,0x100);
        if (local_118._0_8_ == -1) {
          auStack_b8 = ZEXT416(0);
          auStack_98 = (undefined1  [16])0x0;
          local_a8 = (undefined1  [16])0x0;
          _local_118 = ZEXT1632(auStack_b8);
          local_f8 = _local_118;
          local_d8 = _local_118;
          iVar5 = (*(code *)PTR_fstatat_00841e08)(iVar5,plVar7,local_118,0x100);
          if (iVar5 == -1) goto LAB_0073adeb;
          uVar6 = uStack_100;
        }
        else {
          if (local_118._0_4_ == 2) {
            plVar7 = (long *)local_118._8_8_;
            __ptr = local_180;
            goto joined_r0x0073ae43;
          }
          uVar6 = local_f8._24_4_;
        }
        __ptr = local_180;
        if ((uVar6 & 0xf000) == 0x8000) goto LAB_0073ac4d;
      }
LAB_0073ad40:
      if (local_188 != 0) {
        if (((sys::A_BASE_0 == (char *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr))
        {
          free(__ptr);
        }
        else {
          uVar8 = local_188;
          if (local_188 < 0x11) {
            uVar8 = 0x10;
          }
          lVar12 = LZCOUNT(uVar8 - 1);
          lVar10 = 0x40 - lVar12;
          if ((uVar8 - 1 < 0x10000) || (cVar4 = sys::big_put(__ptr,lVar10), cVar4 == '\0')) {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar10 * 8 + -0x3c8);
            *(char **)(in_FS_OFFSET + lVar10 * 8 + -0x3c8) = __ptr;
          }
        }
      }
      core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(&local_170);
    }
    plVar7 = (long *)0x0;
    LOCK();
    *local_198 = *local_198 + -1;
    lVar10 = *local_198;
    UNLOCK();
joined_r0x0073aedc:
    if (lVar10 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::sys::fs::unix::InnerReadDir>>::
      drop_slow();
    }
  }
  return plVar7;
}


// ==== pipeline::generic::core::build_links @ 0073bb80 (4016 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::generic::core::build_links */

void __rustcall
pipeline[509596c7b52975b2]::generic::core::build_links
          (ulong *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  char cVar33;
  int iVar34;
  uint uVar35;
  long lVar36;
  long *plVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *__ptr;
  undefined8 *puVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 (*pauVar46) [64];
  ulong uVar47;
  ulong uVar48;
  ulong *puVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  long in_FS_OFFSET;
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  long lVar61;
  long lVar62;
  undefined1 auVar60 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  ulong local_f8;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong *local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  undefined8 *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 *local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if (param_3 == 0) {
    uVar41 = 0x20;
    uVar51 = 0;
  }
  else {
    if (param_3 < 5) {
      lVar36 = 0;
      uVar51 = 0;
    }
    else {
      if (param_3 < 0x11) {
        uVar51 = 0;
        lVar43 = 0;
      }
      else {
        uVar41 = 0x10;
        if ((param_3 & 0xf) != 0) {
          uVar41 = (ulong)((uint)param_3 & 0xf);
        }
        lVar36 = param_3 - uVar41;
        pauVar46 = (undefined1 (*) [64])(param_2 + 0x130);
        lVar43 = 0;
        lVar53 = 0;
        lVar61 = 0;
        lVar62 = 0;
        auVar60 = ZEXT3264(_DAT_002030c0);
        auVar59 = ZEXT1664((undefined1  [16])0x0);
        auVar63 = ZEXT1664((undefined1  [16])0x0);
        auVar64 = ZEXT1664((undefined1  [16])0x0);
        uVar51 = param_3;
        do {
          auVar55 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar46[-4] + 0x20)),auVar60,
                                     *(undefined1 (*) [64])(pauVar46[-5] + 0x20));
          auVar56 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar46[-2]),auVar60,
                                     pauVar46[-3]);
          auVar57 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar46[-1] + 0x20)),auVar60,
                                     *(undefined1 (*) [64])(pauVar46[-2] + 0x20));
          auVar58 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar46[1]),auVar60,*pauVar46);
          lVar43 = auVar55._0_8_ + lVar43;
          lVar53 = auVar55._8_8_ + lVar53;
          lVar61 = auVar55._16_8_ + lVar61;
          lVar62 = auVar55._24_8_ + lVar62;
          lVar15 = auVar56._0_8_ + auVar59._0_8_;
          lVar20 = auVar56._8_8_ + auVar59._8_8_;
          lVar23 = auVar56._16_8_ + auVar59._16_8_;
          lVar26 = auVar56._24_8_ + auVar59._24_8_;
          auVar59 = ZEXT3264(CONCAT824(lVar26,CONCAT816(lVar23,CONCAT88(lVar20,lVar15))));
          lVar16 = auVar57._0_8_ + auVar63._0_8_;
          lVar21 = auVar57._8_8_ + auVar63._8_8_;
          lVar24 = auVar57._16_8_ + auVar63._16_8_;
          lVar27 = auVar57._24_8_ + auVar63._24_8_;
          auVar63 = ZEXT3264(CONCAT824(lVar27,CONCAT816(lVar24,CONCAT88(lVar21,lVar16))));
          lVar17 = auVar58._0_8_ + auVar64._0_8_;
          lVar22 = auVar58._8_8_ + auVar64._8_8_;
          lVar25 = auVar58._16_8_ + auVar64._16_8_;
          lVar28 = auVar58._24_8_ + auVar64._24_8_;
          auVar64 = ZEXT3264(CONCAT824(lVar28,CONCAT816(lVar25,CONCAT88(lVar22,lVar17))));
          pauVar46 = pauVar46 + 6;
          uVar51 = uVar51 - 0x10;
        } while (uVar41 != uVar51);
        auVar54._0_8_ = lVar17 + lVar16 + lVar15 + lVar43;
        auVar54._8_8_ = lVar22 + lVar21 + lVar20 + lVar53;
        auVar18._16_8_ = lVar25 + lVar24 + lVar23 + lVar61;
        auVar18._0_16_ = auVar54;
        auVar18._24_8_ = lVar28 + lVar27 + lVar26 + lVar62;
        auVar54 = vpaddq_avx(auVar54,auVar18._16_16_);
        auVar6 = vpshufd_avx(auVar54,0xee);
        auVar54 = vpaddq_avx(auVar54,auVar6);
        uVar51 = auVar54._0_8_;
        lVar43 = lVar36;
        if ((uint)uVar41 < 5) goto LAB_0073bd01;
      }
      uVar41 = 4;
      if ((param_3 & 3) != 0) {
        uVar41 = (ulong)((uint)param_3 & 3);
      }
      lVar36 = param_3 - uVar41;
      auVar60 = ZEXT864(uVar51);
      lVar53 = (uVar41 + lVar43) - param_3;
      pauVar46 = (undefined1 (*) [64])(lVar43 * 0x18 + 0x10 + param_2);
      do {
        auVar59 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar46[1]),
                                   ZEXT3264(_DAT_002030c0),*pauVar46);
        auVar6._0_8_ = auVar59._0_8_ + auVar60._0_8_;
        auVar6._8_8_ = auVar59._8_8_ + auVar60._8_8_;
        auVar19._16_8_ = auVar59._16_8_ + auVar60._16_8_;
        auVar19._0_16_ = auVar6;
        auVar19._24_8_ = auVar59._24_8_ + auVar60._24_8_;
        auVar60 = ZEXT3264(auVar19);
        pauVar46 = (undefined1 (*) [64])(pauVar46[1] + 0x20);
        lVar53 = lVar53 + 4;
      } while (lVar53 != 0);
      auVar54 = vpaddq_avx(auVar6,auVar19._16_16_);
      auVar6 = vpshufd_avx(auVar54,0xee);
      auVar54 = vpaddq_avx(auVar54,auVar6);
      uVar51 = auVar54._0_8_;
    }
LAB_0073bd01:
    lVar43 = param_3 - lVar36;
    plVar37 = (long *)(lVar36 * 0x18 + 0x10 + param_2);
    do {
      uVar51 = uVar51 + *plVar37;
      plVar37 = plVar37 + 3;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    if ((long)(uVar51 * 2 + 0x10) < 0) {
      uVar41 = 0xffffffffffffffff;
    }
    else {
      uVar41 = uVar51 * 4 + 0x20;
    }
  }
  uVar48 = 0x10;
  if (0x10 < uVar41) {
    uVar48 = uVar41;
  }
  lVar43 = uVar48 - 1;
  uVar41 = 0;
  if (-1 < lVar43) {
    uVar41 = 1L << ((ulong)(byte)-(char)LZCOUNT(lVar43) & 0x3f);
  }
  uVar48 = uVar41 * 8;
  if (uVar41 >> 0x3d == 0 && uVar48 < 0x7ffffffffffffff9) {
    local_48 = lVar43;
    if (uVar48 == 0) {
      param_6 = 8;
      local_68 = 0;
    }
    else {
      param_6 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar48,8);
      if (param_6 == 0) goto LAB_0073cb31;
      local_68 = uVar41;
    }
    uVar48 = uVar51 * 0x10;
    local_d8 = uVar41;
    if (uVar51 >> 0x3c != 0 || 0x7ffffffffffffff8 < uVar48) goto LAB_0073be08;
  }
  else {
LAB_0073be08:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if (uVar48 == 0) {
    local_e8 = 8;
    local_a0 = 0;
  }
  else {
    local_e8 = __rustc[45371133cddedda4]::__rust_alloc(uVar48,8);
    if (local_e8 == 0) goto LAB_0073cb31;
    local_a0 = uVar51;
  }
  local_90 = 0;
  local_b0 = param_1;
  uStack_98 = local_e8;
  if (uVar51 == 0) {
    local_c8 = 0;
    uStack_c0 = 8;
    local_b8 = 0;
    puVar38 = (undefined8 *)&DAT_00000004;
    local_e0 = 8;
  }
  else {
    uVar48 = uVar51 * 8;
    local_e0 = __rustc[45371133cddedda4]::__rust_alloc(uVar48,8);
    if (local_e0 == 0) {
LAB_0073cb31:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar48);
    }
    local_b8 = 0;
    local_c8 = uVar51;
    uStack_c0 = local_e0;
    puVar38 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar51 * 4,4);
    if (puVar38 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar51 * 4);
    }
  }
  uVar41 = local_d8 - 1;
  local_78 = 0;
  local_88 = uVar51;
  local_80 = puVar38;
  if (param_3 == 0) {
LAB_0073c52a:
    uVar44 = 0;
    uVar51 = 0;
    puVar39 = (undefined8 *)&DAT_00000004;
    __ptr = (undefined8 *)&DAT_00000004;
    uVar52 = 4;
    bVar29 = true;
    puVar49 = local_b0;
    goto LAB_0073c800;
  }
  local_58 = param_3 * 0x18 + param_2;
  local_f8 = 0;
  local_70 = 0;
  uVar51 = 0;
  do {
    local_50 = param_2;
    if (*(long *)(param_2 + 0x10) != 0) {
      local_40 = *(undefined8 **)(param_2 + 8) + *(long *)(param_2 + 0x10) * 6;
      puVar39 = *(undefined8 **)(param_2 + 8);
      do {
        uVar48 = puVar39[4];
        uVar52 = uVar41 & uVar48;
        local_60 = puVar38;
        if (local_48 < 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar52,local_d8,&PTR_s_src_generic_util_rs_0020f838);
        }
        local_38 = puVar39 + 6;
        uVar3 = *puVar39;
        lVar43 = puVar39[1];
        local_a8 = puVar39[2];
        lVar53 = puVar39[3];
        uVar44 = puVar39[5];
        for (; uVar45 = *(ulong *)(param_6 + uVar52 * 8), uVar45 != 0; uVar52 = uVar52 + 1 & uVar41)
        {
          if ((uVar45 ^ uVar48) >> 0x20 == 0) {
            uVar45 = (ulong)((int)uVar45 - 1);
            if (uVar51 <= uVar45) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar45,uVar51,&PTR_s_src_generic_core_rs_00210688);
            }
            if ((*(long *)(local_e8 + 8 + uVar45 * 0x10) == lVar43) &&
               (iVar34 = (*(code *)PTR_memcmp_00842098)
                                   (*(undefined8 *)(uVar45 * 0x10 + local_e8),uVar3,lVar43),
               iVar34 == 0)) goto LAB_0073c184;
          }
        }
        if (uVar51 == local_a0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_a0);
          local_e8 = uStack_98;
        }
        uVar45 = local_70;
        *(undefined8 *)(local_e8 + uVar51 * 0x10) = uVar3;
        *(long *)(local_e8 + 8 + uVar51 * 0x10) = lVar43;
        local_90 = uVar51 + 1;
        if (local_70 == local_c8) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_c8);
          local_e0 = uStack_c0;
        }
        *(ulong *)(local_e0 + uVar45 * 8) = uVar48;
        local_b8 = uVar45 + 1;
        local_70 = local_b8;
        if (local_f8 == local_88) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_88);
          local_60 = local_80;
        }
        *(int *)((long)local_60 + local_f8 * 4) = (int)uVar51;
        local_f8 = local_f8 + 1;
        local_78 = local_f8;
        if (local_d8 <= uVar52) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar52,local_d8,&PTR_s_src_generic_util_rs_00210fe8);
        }
        *(ulong *)(param_6 + uVar52 * 8) = uVar48 & 0xffffffff00000000 | (uVar51 & 0xffffffff) + 1;
        uVar45 = uVar51 & 0xffffffff;
LAB_0073c184:
        uVar52 = local_90;
        local_e8 = uStack_98;
        uVar48 = uVar44;
        while( true ) {
          uVar48 = uVar41 & uVar48;
          uVar51 = *(ulong *)(param_6 + uVar48 * 8);
          if (uVar51 == 0) break;
          if ((uVar51 ^ uVar44) >> 0x20 == 0) {
            uVar50 = (ulong)((int)uVar51 - 1);
            if (uVar52 <= uVar50) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar50,uVar52,&PTR_s_src_generic_core_rs_00210688);
            }
            if ((*(long *)(local_e8 + 8 + uVar50 * 0x10) == lVar53) &&
               (iVar34 = (*(code *)PTR_memcmp_00842098)
                                   (*(undefined8 *)(uVar50 * 0x10 + local_e8),local_a8,lVar53),
               iVar34 == 0)) {
              uVar51 = uVar52;
              goto LAB_0073c2e8;
            }
          }
          uVar48 = uVar48 + 1;
        }
        if (uVar52 == local_a0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_a0);
          local_e8 = uStack_98;
        }
        uVar50 = local_b8;
        *(ulong *)(local_e8 + uVar52 * 0x10) = local_a8;
        *(long *)(local_e8 + 8 + uVar52 * 0x10) = lVar53;
        uVar51 = uVar52 + 1;
        local_90 = uVar51;
        if (local_b8 == local_c8) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_c8);
        }
        local_e0 = uStack_c0;
        *(ulong *)(uStack_c0 + uVar50 * 8) = uVar44;
        local_b8 = uVar50 + 1;
        local_70 = local_b8;
        if (local_f8 == local_88) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_88);
        }
        *(int *)((long)local_80 + local_f8 * 4) = (int)uVar52;
        local_f8 = local_f8 + 1;
        local_78 = local_f8;
        if (local_d8 <= uVar48) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar48,local_d8,&PTR_s_src_generic_util_rs_00210fe8);
        }
        *(ulong *)(param_6 + uVar48 * 8) = uVar44 & 0xffffffff00000000 | (uVar52 & 0xffffffff) + 1;
        uVar50 = uVar52;
LAB_0073c2e8:
        uVar48 = uVar45;
        do {
          uVar52 = uVar48;
          uVar35 = (uint)uVar52;
          if (local_f8 <= uVar52) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar52,local_f8,&PTR_s_src_generic_core_rs_00589630);
          }
          uVar42 = *(uint *)((long)local_80 + uVar52 * 4);
          uVar48 = (ulong)uVar42;
        } while (uVar42 != uVar35);
        while( true ) {
          if (local_f8 <= uVar45) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar45,local_f8,&PTR_s_src_generic_core_rs_00589648);
          }
          uVar42 = *(uint *)((long)local_80 + uVar45 * 4);
          if (uVar42 == uVar35) break;
          *(uint *)((long)local_80 + uVar45 * 4) = uVar35;
          uVar45 = (ulong)uVar42;
        }
        uVar48 = uVar50 & 0xffffffff;
        do {
          uVar44 = uVar48;
          uVar42 = (uint)uVar44;
          if (local_f8 <= uVar44) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar44,local_f8,&PTR_s_src_generic_core_rs_00589630);
          }
          uVar2 = *(uint *)((long)local_80 + uVar44 * 4);
          uVar48 = (ulong)uVar2;
        } while (uVar2 != uVar42);
        uVar48 = uVar50 & 0xffffffff;
        while( true ) {
          if (local_f8 <= uVar48) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar48,local_f8,&PTR_s_src_generic_core_rs_00589648);
          }
          uVar2 = *(uint *)((long)local_80 + uVar48 * 4);
          if (uVar2 == uVar42) break;
          *(uint *)((long)local_80 + uVar48 * 4) = uVar42;
          uVar48 = (ulong)uVar2;
        }
        if (uVar35 != uVar42) {
          if (uVar35 < uVar42) {
            *(uint *)((long)local_80 + uVar44 * 4) = uVar35;
          }
          else {
            *(uint *)((long)local_80 + uVar52 * 4) = uVar42;
          }
        }
        puVar39 = local_38;
        puVar38 = local_80;
      } while (local_38 != local_40);
    }
    param_2 = local_50 + 0x18;
  } while (param_2 != local_58);
  uVar48 = uVar51 & 0xffffffff;
  uVar35 = (uint)uVar51;
  if (uVar48 == 0) {
    if (uVar51 == 0) goto LAB_0073c52a;
    puVar39 = (undefined8 *)&DAT_00000004;
    __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar51 * 4,4);
    if (__ptr == (undefined8 *)0x0) goto LAB_0073cb50;
  }
  else {
    puVar39 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar48 * 4,4);
    iVar32 = DAT_0020650c;
    iVar31 = DAT_00206508;
    iVar30 = DAT_002064fc;
    iVar34 = DAT_002064b4;
    if (puVar39 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar48 * 4);
    }
    if (uVar35 < 4) {
      uVar52 = 0;
LAB_0073c640:
      do {
        *(int *)((long)puVar39 + uVar52 * 4) = (int)uVar52;
        uVar52 = uVar52 + 1;
      } while (uVar48 != uVar52);
    }
    else if (uVar35 < 0x20) {
      uVar44 = 0;
LAB_0073c5fa:
      iVar34 = DAT_0020641c;
      uVar52 = (ulong)(uVar35 & 0xfffffffc);
      auVar54 = vpbroadcastd_avx512vl();
      auVar54 = vpor_avx(auVar54,_DAT_00202120);
      do {
        *(undefined1 (*) [16])((long)puVar39 + uVar44 * 4) = auVar54;
        uVar44 = uVar44 + 4;
        auVar5._0_4_ = auVar54._0_4_ + iVar34;
        auVar5._4_4_ = auVar54._4_4_ + iVar34;
        auVar5._8_4_ = auVar54._8_4_ + iVar34;
        auVar5._12_4_ = auVar54._12_4_ + iVar34;
        auVar54 = auVar5;
      } while (uVar52 != uVar44);
      if (uVar35 != (uVar35 & 0xfffffffc)) goto LAB_0073c640;
    }
    else {
      uVar52 = (ulong)(uVar35 & 0xffffffe0);
      uVar44 = 0;
      iVar7 = _DAT_00203020;
      iVar8 = _UNK_00203024;
      iVar9 = _UNK_00203028;
      iVar10 = _UNK_0020302c;
      iVar11 = _UNK_00203030;
      iVar12 = _UNK_00203034;
      iVar13 = _UNK_00203038;
      iVar14 = _UNK_0020303c;
      do {
        piVar1 = (int *)((long)puVar39 + uVar44 * 4);
        *piVar1 = iVar7;
        piVar1[1] = iVar8;
        piVar1[2] = iVar9;
        piVar1[3] = iVar10;
        piVar1[4] = iVar11;
        piVar1[5] = iVar12;
        piVar1[6] = iVar13;
        piVar1[7] = iVar14;
        piVar1 = (int *)((long)puVar39 + uVar44 * 4 + 0x20);
        *piVar1 = iVar7 + iVar32;
        piVar1[1] = iVar8 + iVar32;
        piVar1[2] = iVar9 + iVar32;
        piVar1[3] = iVar10 + iVar32;
        piVar1[4] = iVar11 + iVar32;
        piVar1[5] = iVar12 + iVar32;
        piVar1[6] = iVar13 + iVar32;
        piVar1[7] = iVar14 + iVar32;
        piVar1 = (int *)((long)puVar39 + uVar44 * 4 + 0x40);
        *piVar1 = iVar7 + iVar34;
        piVar1[1] = iVar8 + iVar34;
        piVar1[2] = iVar9 + iVar34;
        piVar1[3] = iVar10 + iVar34;
        piVar1[4] = iVar11 + iVar34;
        piVar1[5] = iVar12 + iVar34;
        piVar1[6] = iVar13 + iVar34;
        piVar1[7] = iVar14 + iVar34;
        piVar1 = (int *)((long)puVar39 + uVar44 * 4 + 0x60);
        *piVar1 = iVar7 + iVar31;
        piVar1[1] = iVar8 + iVar31;
        piVar1[2] = iVar9 + iVar31;
        piVar1[3] = iVar10 + iVar31;
        piVar1[4] = iVar11 + iVar31;
        piVar1[5] = iVar12 + iVar31;
        piVar1[6] = iVar13 + iVar31;
        piVar1[7] = iVar14 + iVar31;
        uVar44 = uVar44 + 0x20;
        iVar7 = iVar7 + iVar30;
        iVar8 = iVar8 + iVar30;
        iVar9 = iVar9 + iVar30;
        iVar10 = iVar10 + iVar30;
        iVar11 = iVar11 + iVar30;
        iVar12 = iVar12 + iVar30;
        iVar13 = iVar13 + iVar30;
        iVar14 = iVar14 + iVar30;
      } while (uVar52 != uVar44);
      if (uVar35 != (uVar35 & 0xffffffe0)) {
        uVar44 = uVar52;
        if ((uVar51 & 0x1c) == 0) goto LAB_0073c640;
        goto LAB_0073c5fa;
      }
    }
    __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar51 * 4,4);
    if (__ptr == (undefined8 *)0x0) goto LAB_0073cb50;
    uVar52 = 0;
    do {
      uVar44 = uVar52 & 0xffffffff;
      do {
        uVar45 = uVar44;
        uVar42 = (uint)uVar45;
        if (local_f8 <= uVar45) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar45,local_f8,&PTR_s_src_generic_core_rs_00589630);
        }
        uVar2 = *(uint *)((long)puVar38 + uVar45 * 4);
        uVar44 = (ulong)uVar2;
      } while (uVar2 != uVar42);
      uVar44 = uVar52;
      if (uVar52 == local_f8) {
        uVar50 = local_f8;
LAB_0073caf9:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar50,local_f8,&PTR_s_src_generic_core_rs_00589648);
      }
      while (uVar2 = *(uint *)((long)puVar38 + uVar44 * 4), uVar50 = (ulong)uVar2, uVar2 != uVar42)
      {
        *(uint *)((long)puVar38 + uVar44 * 4) = uVar42;
        uVar44 = uVar50;
        if (local_f8 <= uVar50) goto LAB_0073caf9;
      }
      if (uVar52 == uVar51) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar51,uVar51,&PTR_s_src_generic_core_rs_00589570);
      }
      *(uint *)((long)__ptr + uVar52 * 4) = uVar42;
      if (uVar35 <= uVar42) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar45,uVar48,&PTR_s_src_generic_core_rs_00589588);
      }
      uVar44 = (ulong)*(uint *)((long)puVar39 + uVar45 * 4);
      local_a8 = uVar52 + 1;
      if (uVar51 <= uVar44) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar44,uVar51,&PTR_s_src_generic_core_rs_005895a0);
      }
      puVar40 = (undefined8 *)(uVar52 * 0x10 + local_e8);
      uVar50 = *(ulong *)(local_e8 + 8 + uVar44 * 0x10);
      uVar4 = puVar40[1];
      uVar47 = uVar50;
      if (uVar4 < uVar50) {
        uVar47 = uVar4;
      }
      iVar34 = (*(code *)PTR_memcmp_008420a0)
                         (*puVar40,*(undefined8 *)(local_e8 + uVar44 * 0x10),uVar47);
      lVar43 = uVar4 - uVar50;
      if (iVar34 != 0) {
        lVar43 = (long)iVar34;
      }
      if (lVar43 < 0) {
        *(int *)((long)puVar39 + uVar45 * 4) = (int)uVar52;
      }
      uVar52 = local_a8;
    } while (local_a8 != uVar48);
  }
  puVar49 = local_b0;
  uVar44 = uVar48 * 4;
  uVar52 = __rustc[45371133cddedda4]::__rust_alloc(uVar51 * 4,4);
  if (uVar52 != 0) {
    uVar45 = 0;
    do {
      uVar42 = *(uint *)((long)__ptr + uVar45 * 4);
      if (uVar35 <= uVar42) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  ((ulong)uVar42,uVar48,&PTR_s_src_generic_core_rs_00210fd0);
      }
      *(undefined4 *)(uVar52 + uVar45 * 4) = *(undefined4 *)((long)puVar39 + (ulong)uVar42 * 4);
      uVar45 = uVar45 + 1;
    } while (uVar51 != uVar45);
    bVar29 = false;
LAB_0073c800:
    *puVar49 = local_68;
    puVar49[1] = param_6;
    puVar49[2] = local_d8;
    puVar49[3] = uVar41;
    puVar49[4] = local_a0;
    puVar49[5] = uStack_98;
    puVar49[6] = local_90;
    puVar49[7] = local_c8;
    puVar49[8] = uStack_c0;
    puVar49[9] = local_b8;
    puVar49[10] = uVar51;
    puVar49[0xb] = uVar52;
    puVar49[0xc] = uVar51;
    if (uVar51 != 0) {
      if (((undefined8 *)((long)sys::A_BASE_0 + -1) < __ptr) && (__ptr < sys::A_END_0)) {
        uVar41 = 0x10;
        if (0x10 < uVar51 << 2) {
          uVar41 = uVar51 << 2;
        }
        lVar43 = 0x40 - LZCOUNT(uVar41 - 1);
        if ((uVar41 - 1 < 0x10000) || (cVar33 = sys::big_put(__ptr,lVar43), cVar33 == '\0')) {
          *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar43 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar43 * 8 + -0x3c8) = __ptr;
        }
      }
      else {
        free(__ptr);
      }
    }
    if (!bVar29) {
      if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar39 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= puVar39)) {
        free(puVar39);
      }
      else {
        uVar41 = 0x10;
        if (0x10 < uVar44) {
          uVar41 = uVar44;
        }
        lVar43 = 0x40 - LZCOUNT(uVar41 - 1);
        if ((uVar41 - 1 < 0x10000) || (cVar33 = sys::big_put(puVar39,lVar43), cVar33 == '\0')) {
          *puVar39 = *(undefined8 *)(in_FS_OFFSET + lVar43 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar43 * 8 + -0x3c8) = puVar39;
        }
      }
    }
    puVar38 = local_80;
    if (local_88 != 0) {
      if (((sys::A_BASE_0 == (undefined8 *)0x0) || (local_80 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_80)) {
        free(local_80);
        return;
      }
      uVar41 = 0x10;
      if (0x10 < local_88 << 2) {
        uVar41 = local_88 << 2;
      }
      lVar53 = LZCOUNT(uVar41 - 1);
      lVar43 = 0x40 - lVar53;
      if ((uVar41 - 1 < 0x10000) || (cVar33 = sys::big_put(local_80,lVar43), cVar33 == '\0')) {
        if (lVar53 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar38 = *(undefined8 *)(in_FS_OFFSET + lVar43 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar43 * 8 + -0x3c8) = puVar38;
      }
    }
    return;
  }
LAB_0073cb50:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar51 * 4);
}


// ==== pipeline::generic::core::credit @ 0073cb80 (1124 bytes)

/* pipeline[509596c7b52975b2]::generic::core::credit */

void __rustcall
pipeline[509596c7b52975b2]::generic::core::credit
          (long *param_1,long param_2,long param_3,ulong param_4,ulong *param_5,undefined4 param_6,
          undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar25 [64];
  undefined8 uVar26;
  
  auVar24 = in_ZMM2._0_16_;
  param_5[2] = 0;
  if (param_4 != 0) {
    if (*param_5 == 0) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(param_5);
    }
    auVar24 = in_ZMM2._0_16_;
    puVar4 = (undefined4 *)param_5[1];
    *puVar4 = 0;
    param_5[2] = 1;
    if (param_4 != 1) {
      plVar10 = (long *)(param_3 + 0x30);
      uVar9 = 1;
      lVar7 = *(long *)(param_3 + 0x10);
      do {
        uVar12 = uVar9 + 1;
        lVar1 = *plVar10;
        if (lVar1 == lVar7) {
          uVar11 = puVar4[uVar9 - 1];
          if (uVar9 == *param_5) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(param_5);
            puVar4 = (undefined4 *)param_5[1];
          }
        }
        else {
          if (uVar9 == *param_5) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(param_5);
          }
          puVar4 = (undefined4 *)param_5[1];
          uVar11 = (undefined4)uVar9;
        }
        auVar24 = in_ZMM2._0_16_;
        puVar4[uVar9] = uVar11;
        param_5[2] = uVar12;
        plVar10 = plVar10 + 4;
        uVar9 = uVar12;
        lVar7 = lVar1;
      } while (param_4 != uVar12);
    }
  }
  if (param_2 != 0) {
    uVar12 = 0;
    auVar24 = vpcmpeqd_avx(auVar24,auVar24);
    auVar25 = ZEXT1664(auVar24);
    uVar9 = 0;
    plVar10 = param_1;
    uVar26 = DAT_00201bc0;
    do {
      if (uVar9 < param_4) {
        plVar8 = (long *)(uVar9 * 0x20 + param_3 + 0x10);
        do {
          if (*plVar10 < *plVar8) goto LAB_0073cd14;
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 4;
        } while (param_4 != uVar9);
        uVar9 = param_4;
      }
LAB_0073cd14:
      if (uVar12 < uVar9) {
        uVar16 = param_4;
        if (param_4 < uVar12) {
          uVar16 = uVar12;
        }
        plVar8 = (long *)(uVar12 * 0x20 + param_3 + 0x10);
        do {
          if (uVar16 == uVar12) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar16,param_4,&PTR_s_src_generic_core_rs_00589660);
          }
          if (*plVar10 + -0x240c8400 <= *plVar8) {
            if (param_5[2] <= uVar9 - 1) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar9 - 1,param_5[2],&PTR_s_src_generic_core_rs_00589678);
            }
            uVar16 = (ulong)*(uint *)((param_5[1] - 4) + uVar9 * 4);
            if (param_4 <= uVar16) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar16,param_4,&PTR_s_src_generic_core_rs_00589690);
            }
            uVar11 = *(undefined4 *)(param_3 + 0x18 + uVar16 * 0x20);
            goto LAB_0073ce28;
          }
          uVar12 = uVar12 + 1;
          plVar8 = plVar8 + 4;
        } while (uVar9 != uVar12);
        uVar12 = uVar9;
      }
      uVar11 = param_6;
LAB_0073ce28:
      plVar8 = plVar10 + 3;
      uVar22 = CONCAT44(uVar11,(int)plVar10[2]);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar22 ^ 0x243f6a8885a308d3;
      uVar20 = SUB168(auVar24 * ZEXT816(0x82efa98ec4e6c89),8) ^
               SUB168(auVar24 * ZEXT816(0x82efa98ec4e6c89),0);
      pauVar3 = (undefined1 (*) [16])*param_7;
      uVar16 = param_7[1];
      auVar24 = vpbroadcastb_avx512vl();
      lVar7 = 0;
      uVar14 = uVar20;
      while( true ) {
        uVar14 = uVar14 & uVar16;
        uVar15 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*pauVar3 + uVar14),auVar24);
        if ((short)uVar15 != 0) {
          do {
            uVar5 = 0;
            for (uVar6 = (uint)uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar19 = uVar5 + uVar14 & uVar16;
            if (*(ulong *)((long)pauVar3 + uVar19 * -0x28 + -0x28) == uVar22) {
              lVar7 = (long)pauVar3 + uVar19 * -0x28;
              goto LAB_0073cca9;
            }
            iVar18 = (uint)uVar15 - 1;
            uVar17 = (ushort)iVar18 & (ushort)uVar15;
            uVar15 = (ulong)CONCAT22((short)((uint)iVar18 >> 0x10),uVar17);
          } while (uVar17 != 0);
        }
        uVar2 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*pauVar3 + uVar14),auVar25._0_16_);
        if ((short)uVar2 != 0) break;
        uVar14 = uVar14 + lVar7 + 0x10;
        lVar7 = lVar7 + 0x10;
      }
      if (param_7[2] == 0) {
        auVar25 = ZEXT1664(auVar25._0_16_);
        <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(u64,[u64;4usize])>>::reserve_rehash::
        <hashbrown[ee4ff39ba1229c30]::map::make_hasher<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
                  (param_7,param_7 + 4);
        auVar24 = vpcmpeqd_avx(auVar25._0_16_,auVar25._0_16_);
        auVar25 = ZEXT1664(auVar24);
        pauVar3 = (undefined1 (*) [16])*param_7;
        uVar16 = param_7[1];
        uVar26 = DAT_00201bc0;
      }
      uVar14 = uVar20 & uVar16;
      auVar24 = *(undefined1 (*) [16])(*pauVar3 + uVar14);
      uVar17 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
      uVar5 = (uint)uVar17;
      if (uVar17 == 0) {
        lVar7 = 0x10;
        do {
          uVar14 = uVar14 + lVar7 & uVar16;
          auVar24 = *(undefined1 (*) [16])(*pauVar3 + uVar14);
          lVar7 = lVar7 + 0x10;
          uVar5 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
        } while (uVar5 == 0);
      }
      uVar6 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar14 = uVar6 + uVar14 & uVar16;
      bVar13 = (*pauVar3)[uVar14];
      if (-1 < (char)bVar13) {
        auVar24 = *pauVar3;
        uVar5 = 0;
        for (uVar6 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar6 & 1) == 0;
            uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar14 = (ulong)uVar5;
        bVar13 = (*pauVar3)[uVar14];
      }
      bVar21 = (byte)(uVar20 >> 0x39);
      (*pauVar3)[uVar14] = bVar21;
      pauVar3[1][uVar14 - 0x10 & uVar16] = bVar21;
      lVar7 = (long)pauVar3 + uVar14 * -0x28;
      param_7[2] = param_7[2] - (ulong)(bVar13 & 1);
      *(ulong *)((long)pauVar3 + uVar14 * -0x28 + -0x28) = uVar22;
      *(undefined1 (*) [32])((long)pauVar3 + uVar14 * -0x28 + -0x20) = SUB6432(ZEXT864(0),0);
      param_7[3] = param_7[3] + 1;
LAB_0073cca9:
      auVar23[8] = *(undefined1 *)((long)plVar10 + 0x14);
      auVar23._0_8_ = uVar26;
      auVar23._9_7_ = 0;
      auVar24 = vpaddq_avx(auVar23,*(undefined1 (*) [16])(lVar7 + -0x20));
      *(undefined1 (*) [16])(lVar7 + -0x20) = auVar24;
      *(long *)(lVar7 + -0x10) = *(long *)(lVar7 + -0x10) + plVar10[1];
      plVar10 = plVar8;
    } while (plVar8 != param_1 + param_2 * 3);
  }
  return;
}


// ==== pipeline::generic::util::map_dir @ 0073d020 (934 bytes)

/* pipeline[509596c7b52975b2]::generic::util::map_dir */

void __rustcall pipeline[509596c7b52975b2]::generic::util::map_dir(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_b0;
  long *plStack_a8;
  long local_a0;
  long *local_98;
  ulong local_90;
  long *local_88;
  ulong local_80;
  byte local_78;
  undefined7 uStack_77;
  char cStack_70;
  undefined7 uStack_6f;
  long local_68;
  long *local_60;
  long *local_58;
  char local_50;
  long local_48;
  long *local_40;
  char local_38;
  
  std[c60ef17cbf7de79f]::sys::fs::read_dir(&local_78);
  local_58 = (long *)CONCAT71(uStack_77,local_78);
  local_60 = param_1;
  if (cStack_70 == '\x02') {
    local_90 = 0;
    local_88 = (long *)&DAT_00000008;
    local_80 = 0;
    if ((1 < ((uint)local_58 & 3) - 2) && ((local_78 & 3) != 0)) {
      (**(code **)((long)local_58 + 0x17))((long)local_58 + -1);
    }
LAB_0073d23c:
    local_b0 = 0;
    plStack_a8 = (long *)&DAT_00000008;
    local_a0 = 0;
  }
  else {
    local_50 = cStack_70;
    <core[62e902411887be45]::iter::adapters::filter::Filter<core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::iter::adapters::filter_map::FilterMap<std[c60ef17cbf7de79f]::fs::ReadDir,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#0}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#1}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#2}>as_core[62e902411887be45]::iter::traits::iterator::Iterator>
    ::next(&local_b0,&local_58);
    if (local_b0 == -1) {
      local_90 = 0;
      local_88 = (long *)&DAT_00000008;
      local_80 = 0;
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::sys::fs::unix::InnerReadDir>>::
        drop_slow();
      }
      goto LAB_0073d23c;
    }
    plVar5 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x60,8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x60);
    }
    plVar5[2] = local_a0;
    *plVar5 = local_b0;
    plVar5[1] = (long)plStack_a8;
    local_90 = 4;
    local_80 = 1;
    local_40 = local_58;
    local_38 = local_50;
    lVar6 = 0;
    local_88 = plVar5;
    while (uVar3 = local_80,
          <core[62e902411887be45]::iter::adapters::filter::Filter<core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::iter::adapters::filter_map::FilterMap<std[c60ef17cbf7de79f]::fs::ReadDir,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#0}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#1}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#2}>as_core[62e902411887be45]::iter::traits::iterator::Iterator>
          ::next(&local_78,&local_40), CONCAT71(uStack_77,local_78) != -1) {
      if (uVar3 == local_90) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_90,uVar3,1,8,0x18);
        plVar5 = local_88;
      }
      *(long *)(lVar6 + 0x28 + (long)plVar5) = local_68;
      puVar1 = (undefined8 *)(lVar6 + 0x18 + (long)plVar5);
      *puVar1 = CONCAT71(uStack_77,local_78);
      puVar1[1] = CONCAT71(uStack_6f,cStack_70);
      local_80 = uVar3 + 1;
      lVar6 = lVar6 + 0x18;
    }
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::sys::fs::unix::InnerReadDir>>::
      drop_slow();
    }
    local_98 = local_88;
    if (1 < uVar3) {
      if (uVar3 < 0x15) {
        core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
        <std[c60ef17cbf7de79f]::path::PathBuf,<std[c60ef17cbf7de79f]::path::PathBuf_as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                  (local_88,uVar3);
      }
      else {
        core[62e902411887be45]::slice::sort::stable::driftsort_main::
        <std[c60ef17cbf7de79f]::path::PathBuf,<std[c60ef17cbf7de79f]::path::PathBuf_as_core[62e902411887be45]::cmp::PartialOrd>::lt,alloc[2a0ada2ddd1fabff]::vec::Vec<std[c60ef17cbf7de79f]::path::PathBuf>>
                  (local_88,uVar3);
      }
    }
    <pipeline[509596c7b52975b2]::generic::util::Mapped>::open(&local_78,local_98[1],local_98[2]);
    lVar7 = local_68;
    lVar6 = CONCAT71(uStack_6f,cStack_70);
    if ((local_78 & 1) != 0) {
      local_b0 = 0;
      plStack_a8 = (long *)&DAT_00000008;
      local_a0 = 0;
LAB_0073d1f5:
      local_60[1] = lVar6;
      *local_60 = -1;
      core[62e902411887be45]::ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                (&local_b0);
      goto LAB_0073d276;
    }
    plVar5 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x40,8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x40);
    }
    *plVar5 = lVar6;
    plVar5[1] = lVar7;
    local_b0 = 4;
    local_a0 = 1;
    plStack_a8 = plVar5;
    if (uVar3 != 1) {
      local_48 = uVar3 * 0x18 + -0x18;
      lVar8 = 0x18;
      lVar7 = 0;
      do {
        lVar2 = local_a0;
        <pipeline[509596c7b52975b2]::generic::util::Mapped>::open
                  (&local_78,*(undefined8 *)((long)local_98 + lVar7 + 0x20),
                   *(undefined8 *)((long)local_98 + lVar7 + 0x28));
        lVar4 = local_68;
        lVar6 = CONCAT71(uStack_6f,cStack_70);
        if (CONCAT71(uStack_77,local_78) == 1) goto LAB_0073d1f5;
        if (lVar2 == local_b0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_b0,lVar2,1,8,0x10);
          plVar5 = plStack_a8;
        }
        *(long *)((long)plVar5 + lVar8 + -8) = lVar6;
        *(long *)((long)plVar5 + lVar8) = lVar4;
        local_a0 = lVar2 + 1;
        lVar8 = lVar8 + 0x10;
        lVar7 = lVar7 + 0x18;
      } while (local_48 != lVar7);
    }
  }
  local_60[2] = local_a0;
  *local_60 = local_b0;
  local_60[1] = (long)plStack_a8;
LAB_0073d276:
  core[62e902411887be45]::ptr::drop_glue::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_90);
  return;
}


// ==== pipeline::generic::parse::parse_price @ 0073d3e0 (378 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::parse_price */

bool __rustcall pipeline[509596c7b52975b2]::generic::parse::parse_price(long param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  
  if (param_2 == 0) {
    return false;
  }
  uVar9 = 0;
  while (param_2 != uVar9) {
    pcVar13 = (char *)(param_1 + uVar9);
    uVar9 = uVar9 + 1;
    if (9 < (byte)(*pcVar13 - 0x30U)) {
      return false;
    }
  }
  uVar9 = 0;
  do {
    if (*(char *)(param_1 + uVar9) != '0') {
      if (param_2 < uVar9) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar9,param_2,param_2,&PTR_s_src_generic_parse_rs_00589998);
      }
      goto LAB_0073d42c;
    }
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
  uVar9 = param_2;
LAB_0073d42c:
  if (8 < param_2 - uVar9) {
    return false;
  }
  iVar12 = 0;
  if (uVar9 != param_2) {
    pcVar13 = (char *)(param_1 + uVar9);
    uVar11 = (uint)(param_2 - uVar9);
    uVar10 = (ulong)(uVar11 & 7);
    iVar12 = 0;
    if (uVar9 - param_2 < 0xfffffffffffffff9) {
      uVar9 = (ulong)(uVar11 & 8);
      iVar12 = 0;
      do {
        cVar8 = *pcVar13;
        pcVar1 = pcVar13 + 1;
        pcVar2 = pcVar13 + 2;
        pcVar3 = pcVar13 + 3;
        pcVar4 = pcVar13 + 4;
        pcVar5 = pcVar13 + 5;
        pcVar6 = pcVar13 + 6;
        pcVar7 = pcVar13 + 7;
        pcVar13 = pcVar13 + 8;
        iVar12 = (uint)(byte)(*pcVar7 - 0x30) +
                 ((uint)(byte)(*pcVar6 - 0x30) +
                 ((uint)(byte)(*pcVar5 - 0x30) +
                 ((uint)(byte)(*pcVar4 - 0x30) +
                 ((uint)(byte)(*pcVar3 - 0x30) +
                 ((uint)(byte)(*pcVar2 - 0x30) +
                 ((uint)(byte)(*pcVar1 - 0x30) + ((uint)(byte)(cVar8 - 0x30) + iVar12 * 10) * 10) *
                 10) * 10) * 10) * 10) * 10) * 10;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
      if (uVar10 == 0) goto LAB_0073d53a;
    }
    uVar9 = 0;
    do {
      iVar12 = (uint)(byte)(pcVar13[uVar9] - 0x30) + iVar12 * 10;
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
LAB_0073d53a:
  return iVar12 - 1U < 10000000;
}


// ==== pipeline::generic::parse::days_from_civil @ 0073d560 (176 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::days_from_civil */

long __rustcall
pipeline[509596c7b52975b2]::generic::parse::days_from_civil(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = param_1 - (ulong)(param_2 < 3);
  uVar2 = 0xffffffffffffffff;
  if (-1 < (long)uVar5) {
    uVar2 = (ulong)((uint)((uVar5 & 0xffff) >> 4) / 0x19);
  }
  lVar3 = uVar2 * -400 + uVar5;
  bVar4 = (char)param_2 + 9;
  iVar6 = (int)lVar3 + 3;
  if (-1 < lVar3) {
    iVar6 = (int)lVar3;
  }
  iVar1 = (int)((ulong)(lVar3 * -0x51eb851f) >> 0x20);
  return uVar2 * 0x23ab1 + param_3 + lVar3 * 0x16d + (long)(iVar6 >> 2) +
         (ulong)(((uint)(byte)(bVar4 + (bVar4 / 3 & 0xfc) * -3) * 0x99 + 2 & 0xffff) * 0x3334 >>
                0x10) + (long)((iVar1 >> 5) - (iVar1 >> 0x1f)) + -0xafa6d;
}


// ==== pipeline::generic::parse::civil @ 0073d620 (729 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::civil */

undefined1  [16] __rustcall
pipeline[509596c7b52975b2]::generic::parse::civil
          (char *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  short sVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  
  if ((((param_1[4] != '-') || (param_1[7] != '-')) || (param_1[10] != 'T')) ||
     ((param_1[0xd] != ':' || (param_1[0x10] != ':')))) {
LAB_0073d852:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_4;
    return auVar1 << 0x40;
  }
  iVar8 = (byte)param_1[1] - 0x30;
  bVar6 = 9 < (byte)iVar8 || 9 < (byte)(*param_1 - 0x30U);
  param_4 = (ulong)CONCAT31((int3)((uint)iVar8 >> 8),bVar6);
  if (bVar6) goto LAB_0073d852;
  iVar8 = (byte)param_1[3] - 0x30;
  bVar6 = 9 < (byte)iVar8 || 9 < (byte)(param_1[2] - 0x30U);
  param_4 = (ulong)CONCAT31((int3)((uint)iVar8 >> 8),bVar6);
  if (bVar6) goto LAB_0073d852;
  bVar16 = param_1[6];
  uVar10 = (ulong)bVar16;
  if ((byte)(bVar16 - 0x30) < 10 && (byte)(param_1[5] - 0x30U) < 10) {
    if ((byte)(param_1[9] - 0x30U) < 10 && (byte)(param_1[8] - 0x30U) < 10) {
      bVar15 = param_1[0xb];
      if ((byte)(param_1[0xc] - 0x30U) < 10 && (byte)(bVar15 - 0x30) < 10) {
        bVar14 = param_1[0xe];
        if ((byte)(param_1[0xf] - 0x30U) < 10 && (byte)(bVar14 - 0x30) < 10) {
          if ((byte)(param_1[0x12] - 0x30U) < 10 && (byte)(param_1[0x11] - 0x30U) < 10) {
            cVar3 = param_1[9] + param_1[8] * '\n';
            uVar5 = 0;
            if (cVar3 == '\x10') goto LAB_0073d89b;
            iVar8 = (uint)(byte)param_1[5] * 10;
            cVar11 = (char)iVar8 + bVar16;
            iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),cVar11);
            uVar9 = iVar8 - 0x1d;
            uVar10 = (ulong)uVar9;
            if ((byte)uVar9 < 0xf4) goto LAB_0073d89b;
            uVar10 = (ulong)((uint)bVar15 * 2);
            bVar16 = bVar15 * '\n' + param_1[0xc];
            if (0x27 < bVar16) goto LAB_0073d89b;
            uVar10 = (ulong)((uint)bVar14 * 2);
            bVar15 = bVar14 * '\n' + param_1[0xf];
            if (0x4b < bVar15) goto LAB_0073d89b;
            uVar9 = (uint)(byte)param_1[0x11] * 10;
            uVar10 = (ulong)uVar9;
            bVar14 = param_1[0x12] + (char)uVar9;
            if (0x4b < bVar14) goto LAB_0073d89b;
            bVar13 = (param_1[3] + param_1[2] * '\n') - 0x10;
            uVar10 = (ulong)bVar13;
            lVar12 = (ulong)(byte)((param_1[1] + *param_1 * '\n') - 0x10) * 100 + uVar10;
            uVar9 = iVar8 - 0x11;
            if ((0xffdU >> (uVar9 & 0x1f) & 1) == 0) {
              bVar4 = 0x1c;
              if ((bVar13 & 3) == 0) {
                sVar2 = (short)lVar12;
                uVar7 = (ushort)(sVar2 * 0x5c29) >> 2 | sVar2 * 0x4000;
                uVar10 = (ulong)CONCAT11((char)(uVar7 >> 8),0x28f < uVar7);
                bVar4 = ((ushort)((ushort)(sVar2 * 0x5c29) >> 4 | sVar2 * -0x7000) < 0xa4 ||
                        0x28f < uVar7) | 0x1c;
              }
            }
            else {
              bVar4 = (&DAT_0058e908)[uVar9 & 0xff];
            }
            if ((byte)(cVar3 - 0x10U) <= bVar4) {
              lVar12 = days_from_civil(lVar12,cVar11 + -0x10);
              uVar10 = ((ulong)(byte)(bVar15 - 0x10) * 0x3c + (ulong)(byte)(bVar16 - 0x10) * 0xe10 +
                        (ulong)(byte)(bVar14 - 0x10) + lVar12 * 0x15180) * 1000;
              uVar5 = 1;
              goto LAB_0073d89b;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0073d89b:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = uVar5;
  return auVar17;
}


// ==== pipeline::generic::parse::chunks @ 0073d900 (728 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::chunks */

void __rustcall
pipeline[509596c7b52975b2]::generic::parse::chunks
          (long *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [64];
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  ulong local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  local_70 = 0;
  local_68 = 8;
  local_60 = 0;
  local_58 = param_1;
  if (param_3 == 0) {
LAB_0073dba5:
    local_58[2] = local_60;
    *local_58 = local_70;
    local_58[1] = local_68;
    return;
  }
  local_48 = param_2 + param_3 * 2;
  lVar5 = 8;
  lVar14 = 0;
  auVar17 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
  local_50 = param_4;
LAB_0073d970:
  lVar1 = *param_2;
  uVar2 = param_2[1];
  local_40 = param_2 + 2;
  uVar10 = uVar2 & 0x7fffffffffffffc0;
  uVar8 = 0x40;
  do {
    uVar7 = uVar8;
    if (uVar2 < uVar7) {
      if (uVar2 == uVar10) goto LAB_0073d960;
      lVar11 = 0;
      goto LAB_0073da00;
    }
    uVar15 = vpcmpeqb_avx512bw(auVar17,*(undefined1 (*) [64])(lVar1 + -0x40 + uVar7));
    uVar8 = uVar7 + 0x40;
  } while (uVar15 == 0);
  uVar10 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = uVar10 | uVar7 - 0x40;
  uVar8 = uVar10 + 1;
  if (uVar2 < uVar8) {
LAB_0073dbec:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar8,uVar2,uVar2,&PTR_s_src_generic_parse_rs_005899e0);
  }
LAB_0073da29:
  uVar7 = uVar2 - uVar8;
  if (uVar7 != 0) {
    local_38 = lVar1 + uVar10;
    uVar15 = 0;
LAB_0073da89:
    uVar13 = uVar15 + param_4;
    if (CARRY8(uVar15,param_4)) {
      uVar13 = 0xffffffffffffffff;
    }
    uVar16 = uVar7;
    if (uVar13 < uVar7) {
      uVar9 = uVar7 - uVar13;
      uVar6 = uVar9 & 0x7fffffffffffffc0;
      uVar4 = 0x40;
      do {
        uVar12 = uVar4;
        if (uVar9 < uVar12) {
          if (uVar6 == uVar9) goto LAB_0073db60;
          lVar11 = 0;
          goto LAB_0073db40;
        }
        uVar3 = vpcmpeqb_avx512bw(auVar17,*(undefined1 (*) [64])(local_38 + uVar13 + -0x3f + uVar12)
                                 );
        uVar4 = uVar12 + 0x40;
      } while (uVar3 == 0);
      uVar16 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        uVar16 = uVar16 + 1;
      }
      uVar16 = uVar13 + (uVar16 | uVar12 - 0x40) + 1;
    }
    goto LAB_0073db60;
  }
  goto LAB_0073d960;
  while (lVar11 = lVar11 + 1, uVar2 - uVar10 != lVar11) {
LAB_0073da00:
    if (*(char *)(lVar1 + uVar10 + lVar11) == '\n') {
      uVar10 = lVar11 + uVar10;
      uVar8 = uVar10 + 1;
      if (uVar2 < uVar8) goto LAB_0073dbec;
      goto LAB_0073da29;
    }
  }
LAB_0073d960:
  param_2 = local_40;
  if (local_40 == local_48) goto LAB_0073dba5;
  goto LAB_0073d970;
  while (lVar11 = lVar11 + 1, ((~uVar10 + uVar2) - uVar13) - uVar6 != lVar11) {
LAB_0073db40:
    if (*(char *)(uVar8 + lVar1 + uVar13 + uVar6 + lVar11) == '\n') {
      uVar16 = uVar13 + lVar11 + uVar6 + 1;
      break;
    }
  }
LAB_0073db60:
  if ((uVar16 < uVar15) || (uVar7 < uVar16)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar15,uVar16,uVar7,&PTR_s_src_generic_parse_rs_005899c8);
  }
  if (lVar14 == local_70) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_70);
    auVar17 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
    lVar5 = local_68;
    param_4 = local_50;
  }
  *(ulong *)(lVar5 + lVar14 * 0x10) = uVar15 + uVar8 + lVar1;
  *(ulong *)(lVar5 + 8 + lVar14 * 0x10) = uVar16 - uVar15;
  lVar14 = lVar14 + 1;
  uVar15 = uVar16;
  local_60 = lVar14;
  if (uVar7 <= uVar16) goto LAB_0073d960;
  goto LAB_0073da89;
}


// ==== pipeline::generic::parse::parse_ts @ 0073dc00 (681 bytes)

/* pipeline[509596c7b52975b2]::generic::parse::parse_ts */

undefined8 __rustcall
pipeline[509596c7b52975b2]::generic::parse::parse_ts(long param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = 0;
  while (param_2 != uVar2) {
    pcVar1 = (char *)(param_1 + uVar2);
    uVar2 = uVar2 + 1;
    if (9 < (byte)(*pcVar1 - 0x30U)) {
      if (param_2 != 0x19) {
        if (param_2 != 0x14) {
          return 0;
        }
        if (*(char *)(param_1 + 0x13) == 'Z') {
          uVar3 = civil();
          return uVar3;
        }
        return 0;
      }
      if ((*(char *)(param_1 + 0x13) != '+') && (*(char *)(param_1 + 0x13) != '-')) {
        return 0;
      }
      if (*(char *)(param_1 + 0x16) != ':') {
        return 0;
      }
      if (9 < (byte)(*(char *)(param_1 + 0x15) - 0x30U) ||
          9 < (byte)(*(char *)(param_1 + 0x14) - 0x30U)) {
        return 0;
      }
      if (9 < (byte)(*(char *)(param_1 + 0x18) - 0x30U) ||
          9 < (byte)(*(char *)(param_1 + 0x17) - 0x30U)) {
        return 0;
      }
      if (0x4b < (byte)(*(char *)(param_1 + 0x17) * '\n' + *(char *)(param_1 + 0x18)) ||
          0x27 < (byte)(*(char *)(param_1 + 0x14) * '\n' + *(char *)(param_1 + 0x15))) {
        return 0;
      }
      lVar4 = civil();
      if (lVar4 == 1) {
        return 1;
      }
      return 0;
    }
  }
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2) != '0') {
      if (param_2 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar2,param_2,param_2,&PTR_s_src_generic_parse_rs_005899f8);
      }
      goto LAB_0073dc6c;
    }
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  uVar2 = param_2;
LAB_0073dc6c:
  if (0x12 < param_2 - uVar2) {
    return 0;
  }
  if (uVar2 == param_2) {
    return 1;
  }
  uVar6 = (uint)(param_2 - uVar2);
  uVar5 = (ulong)(uVar6 & 7);
  if (uVar2 - param_2 < 0xfffffffffffffff9) {
    uVar2 = (ulong)(uVar6 & 0x18);
    do {
      uVar2 = uVar2 - 8;
    } while (uVar2 != 0);
    if (uVar5 == 0) {
      return 1;
    }
  }
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar5 != uVar2);
  return 1;
}


// ==== <core::iter::adapters::filter::Filter<core::iter::adapters::map::Map<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir, pipeline::generic::util::map_dir::{closure#0}>, pipeline::generic::util::map_dir::{closure#1}>, pipeline::generic::util::map_dir::{closure#2}> as core::iter::traits::iterator::Iterator>::next @ 0073dfc0 (667 bytes)

/* <core[62e902411887be45]::iter::adapters::filter::Filter<core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::iter::adapters::filter_map::FilterMap<std[c60ef17cbf7de79f]::fs::ReadDir,
   pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#0}>,
   pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#1}>,
   pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#2}> as
   core[62e902411887be45]::iter::traits::iterator::Iterator>::next */

void __rustcall
<core[62e902411887be45]::iter::adapters::filter::Filter<core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::iter::adapters::filter_map::FilterMap<std[c60ef17cbf7de79f]::fs::ReadDir,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#0}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#1}>,pipeline[509596c7b52975b2]::generic::util::map_dir::{closure#2}>as_core[62e902411887be45]::iter::traits::iterator::Iterator>
::next(ulong *param_1,undefined8 param_2)

{
  char *__ptr;
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  ulong local_160;
  char *local_158;
  ulong local_150;
  int local_148 [2];
  char *local_140;
  ulong local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *local_118;
  ulong local_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e0;
  char local_68 [8];
  long local_60;
  ulong local_58;
  
  do {
    while( true ) {
      while( true ) {
        <std[c60ef17cbf7de79f]::fs::ReadDir_as_core[62e902411887be45]::iter::traits::iterator::Iterator>
        ::next(local_148,param_2);
        if (local_148[0] != 1) {
          *param_1 = 0xffffffffffffffff;
          return;
        }
        if (local_140 != (char *)0x0) break;
        if ((1 < ((uint)local_138 & 3) - 2) && ((local_138 & 3) != 0)) {
          (**(code **)(local_138 + 0x17))(local_138 - 1);
        }
      }
      local_f8 = local_120;
      local_108 = local_130;
      uStack_100 = uStack_128;
      local_118 = local_140;
      local_110 = local_138;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (&local_160,*(undefined8 *)(local_140 + 0x18),*(undefined8 *)(local_140 + 0x20),
                 local_138,local_130 + -1);
      core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(&local_118);
      uVar1 = local_150;
      __ptr = local_158;
      uVar4 = local_160;
      std[c60ef17cbf7de79f]::sys::fs::metadata(&local_118,local_158,local_150);
      if ((int)local_118 != 2) break;
      if ((1 < ((uint)local_110 & 3) - 2) && ((local_110 & 3) != 0)) {
        (**(code **)(local_110 + 0x17))(local_110 - 1);
      }
LAB_0073e190:
      if (uVar4 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (char *)0x0) ||
            (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
          free(__ptr);
        }
        else {
          if (uVar4 < 0x11) {
            uVar4 = 0x10;
          }
          lVar5 = LZCOUNT(uVar4 - 1);
          lVar3 = 0x40 - lVar5;
          if ((uVar4 - 1 < 0x10000) ||
             (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar2 == '\0')) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
            *(char **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
          }
        }
      }
    }
    if ((local_e0 & 0xf000) != 0x8000) goto LAB_0073e190;
    if (uVar1 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *__ptr == '/';
    }
    local_118 = __ptr;
    local_110 = uVar1;
    local_108 = CONCAT71(local_108._1_7_,0xff);
    local_e0 = CONCAT22(CONCAT11(local_e0._3_1_,bVar6),0x201);
    <std[c60ef17cbf7de79f]::path::Components_as_core[62e902411887be45]::iter::traits::double_ended::DoubleEndedIterator>
    ::next_back(local_68,&local_118);
    if (((local_68[0] == -1) || (local_58 < 4 || local_68[0] != '\t')) ||
       (*(int *)(local_60 + -4 + local_58) != 0x7673632e)) goto LAB_0073e190;
    if (uVar4 != 0xffffffffffffffff) {
      *param_1 = uVar4;
      param_1[1] = (ulong)__ptr;
      param_1[2] = uVar1;
      return;
    }
  } while( true );
}


// ==== <alloc::vec::Vec<std::sync::poison::mutex::Mutex<alloc::vec::Vec<(&[u8], u64, &[u8], u64)>>> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<std::sync::poison::mutex::Mutex<alloc::vec::Vec<(&[u8], u64, &[u8], u64)>>, core::iter::adapters::map::Map<core::ops::range::Range<usize>, pipeline::generic::run::{closure#7}>>>::from_iter @ 0073f300 (409 bytes)

/* <alloc[2a0ada2ddd1fabff]::vec::Vec<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],
   u64, &[u8], u64)>>> as
   alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],
   u64, &[u8], u64)>>,
   core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::ops::range::Range<usize>,
   pipeline[509596c7b52975b2]::generic::run::{closure#7}>>>::from_iter */

void __rustcall
<alloc[2a0ada2ddd1fabff]::vec::Vec<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],u64,&[u8],u64)>>>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],u64,&[u8],u64)>>,core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::ops::range::Range<usize>,pipeline[509596c7b52975b2]::generic::run::{closure#7}>>>
::from_iter(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (0x3ffffffffffffff < param_2) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if (param_2 == 0) {
    uVar1 = 8;
    uVar2 = 0;
    goto LAB_0073f475;
  }
  uVar1 = __rustc[45371133cddedda4]::__rust_alloc(param_2 << 5,8);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,param_2 << 5);
  }
  if (param_2 < 4) {
    uVar2 = 0;
LAB_0073f42e:
    lVar4 = uVar1 + uVar2 * 0x20;
    uVar2 = 0;
    do {
      *(undefined4 *)(lVar4 + uVar2) = 0;
      *(undefined1 *)(lVar4 + 4 + uVar2) = 0;
      *(undefined8 *)(lVar4 + 8 + uVar2) = 0;
      *(undefined8 *)(lVar4 + 0x10 + uVar2) = 8;
      *(undefined8 *)(lVar4 + 0x18 + uVar2) = 0;
      uVar2 = uVar2 + 0x20;
    } while (((uint)param_2 & 3) << 5 != uVar2);
  }
  else {
    puVar3 = (undefined8 *)(uVar1 + 0x78);
    uVar2 = 0;
    do {
      *(undefined4 *)(puVar3 + -0xf) = 0;
      *(undefined1 *)((long)puVar3 + -0x74) = 0;
      puVar3[-0xe] = 0;
      puVar3[-0xd] = 8;
      puVar3[-0xc] = 0;
      *(undefined4 *)(puVar3 + -0xb) = 0;
      *(undefined1 *)((long)puVar3 + -0x54) = 0;
      puVar3[-10] = 0;
      puVar3[-9] = 8;
      puVar3[-8] = 0;
      *(undefined4 *)(puVar3 + -7) = 0;
      *(undefined1 *)((long)puVar3 + -0x34) = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 8;
      puVar3[-4] = 0;
      uVar2 = uVar2 + 4;
      *(undefined4 *)(puVar3 + -3) = 0;
      *(undefined1 *)((long)puVar3 + -0x14) = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 8;
      *puVar3 = 0;
      puVar3 = puVar3 + 0x10;
    } while ((param_2 & 0x3fffffffffffffc) != uVar2);
    if ((param_2 & 3) != 0) goto LAB_0073f42e;
  }
  uVar2 = param_2;
LAB_0073f475:
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = param_2;
  return;
}


// ==== <alloc::vec::Vec<&[u8]> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<&[u8], core::iter::adapters::map::Map<core::slice::iter::Iter<pipeline::generic::util::Mapped>, pipeline::generic::run::{closure#4}>>>::from_iter @ 0073f4a0 (374 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]> as
   alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],
   core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::generic::util::Mapped>,
   pipeline[509596c7b52975b2]::generic::run::{closure#4}>>>::from_iter */

void __rustcall
<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::generic::util::Mapped>,pipeline[509596c7b52975b2]::generic::run::{closure#4}>>>
::from_iter(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_RDX;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  
  uVar5 = param_3 - param_2;
  if (0x7ffffffffffffff8 < uVar5) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    param_3 = extraout_RDX;
  }
  if (param_3 == param_2) {
    uVar3 = 8;
    uVar4 = 0;
  }
  else {
    uVar3 = __rustc[45371133cddedda4]::__rust_alloc(uVar5);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar5);
    }
    uVar4 = uVar5 >> 4;
    if (uVar5 < 0x80) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0x7fffffffffffff8;
      lVar7 = 0x40;
      auVar18 = ZEXT3264(_DAT_00203b20);
      auVar19 = ZEXT3264(_DAT_00203780);
      auVar20 = ZEXT3264(CONCAT824(DAT_00201bc0,
                                   CONCAT816(DAT_00201bc0,CONCAT88(DAT_00201bc0,DAT_00201bc0))));
      auVar11 = vmovdqa64_avx512f(_DAT_002063c0);
      uVar5 = uVar6;
      do {
        auVar12 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + -0x40 + lVar7));
        auVar13 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + lVar7));
        auVar14 = vpermq_avx512f(auVar18,auVar12);
        auVar15 = vpermq_avx512f(auVar19,auVar12);
        auVar16 = vpermq_avx512f(auVar18,auVar13);
        auVar17 = vpermq_avx512f(auVar19,auVar13);
        uVar9 = vptestnmq_avx512vl(auVar15._0_32_,auVar15._0_32_);
        uVar9 = uVar9 & 0xf;
        uVar10 = vptestnmq_avx512vl(auVar17._0_32_,auVar17._0_32_);
        uVar10 = uVar10 & 0xf;
        auVar15 = vmovdqa64_avx512f(auVar20);
        bVar2 = (bool)((byte)uVar9 & 1);
        auVar17._0_8_ = (ulong)bVar2 * auVar15._0_8_ | (ulong)!bVar2 * auVar14._0_8_;
        bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
        auVar17._8_8_ = (ulong)bVar2 * auVar15._8_8_ | (ulong)!bVar2 * auVar14._8_8_;
        bVar2 = (bool)((byte)(uVar9 >> 2) & 1);
        auVar17._16_8_ = (ulong)bVar2 * auVar15._16_8_ | (ulong)!bVar2 * auVar14._16_8_;
        auVar17._24_8_ =
             (uVar9 >> 3) * auVar15._24_8_ | (ulong)!SUB81(uVar9 >> 3,0) * auVar14._24_8_;
        auVar17._32_8_ = auVar14._32_8_;
        auVar17._40_8_ = auVar14._40_8_;
        auVar17._48_8_ = auVar14._48_8_;
        auVar17._56_8_ = auVar14._56_8_;
        auVar12 = vpermt2q_avx512f(auVar17,auVar11,auVar12);
        auVar12 = vmovdqu64_avx512f(auVar12);
        *(undefined1 (*) [64])((uVar3 - 0x40) + lVar7) = auVar12;
        auVar12 = vmovdqa64_avx512f(auVar20);
        bVar2 = (bool)((byte)uVar10 & 1);
        auVar14._0_8_ = (ulong)bVar2 * auVar12._0_8_ | (ulong)!bVar2 * auVar16._0_8_;
        bVar2 = (bool)((byte)(uVar10 >> 1) & 1);
        auVar14._8_8_ = (ulong)bVar2 * auVar12._8_8_ | (ulong)!bVar2 * auVar16._8_8_;
        bVar2 = (bool)((byte)(uVar10 >> 2) & 1);
        auVar14._16_8_ = (ulong)bVar2 * auVar12._16_8_ | (ulong)!bVar2 * auVar16._16_8_;
        auVar14._24_8_ =
             (uVar10 >> 3) * auVar12._24_8_ | (ulong)!SUB81(uVar10 >> 3,0) * auVar16._24_8_;
        auVar14._32_8_ = auVar16._32_8_;
        auVar14._40_8_ = auVar16._40_8_;
        auVar14._48_8_ = auVar16._48_8_;
        auVar14._56_8_ = auVar16._56_8_;
        auVar12 = vpermt2q_avx512f(auVar14,auVar11,auVar13);
        auVar12 = vmovdqu64_avx512f(auVar12);
        *(undefined1 (*) [64])(uVar3 + lVar7) = auVar12;
        lVar7 = lVar7 + 0x80;
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
      if (uVar4 == uVar6) goto LAB_0073f5b9;
    }
    lVar7 = uVar4 - uVar6;
    uVar5 = uVar6 << 4 | 8;
    do {
      lVar1 = *(long *)(param_2 + uVar5);
      uVar8 = 1;
      if (lVar1 != 0) {
        uVar8 = *(undefined8 *)(param_2 + -8 + uVar5);
      }
      *(undefined8 *)((uVar3 - 8) + uVar5) = uVar8;
      *(long *)(uVar3 + uVar5) = lVar1;
      uVar5 = uVar5 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_0073f5b9:
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}


// ==== <alloc::vec::Vec<&[u8]> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<&[u8], core::iter::adapters::map::Map<core::slice::iter::Iter<(&[u8], &[u8])>, pipeline::generic::run::{closure#2}>>>::from_iter @ 0073f620 (298 bytes)

/* <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]> as
   alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],
   core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<(&[u8],
   &[u8])>, pipeline[509596c7b52975b2]::generic::run::{closure#2}>>>::from_iter */

void __rustcall
<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<(&[u8],&[u8])>,pipeline[509596c7b52975b2]::generic::run::{closure#2}>>>
::from_iter(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  
  if (param_3 == param_2) {
    uVar9 = 0;
    uVar4 = 8;
  }
  else {
    uVar9 = (ulong)(param_3 - param_2) >> 1;
    uVar4 = __rustc[45371133cddedda4]::__rust_alloc(uVar9,8);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar9);
    }
    uVar9 = (ulong)(param_3 - param_2) >> 5;
    if ((ulong)(param_3 - param_2) < 0x120) {
      lVar5 = 0;
    }
    else {
      uVar6 = 8;
      if ((uVar9 & 7) != 0) {
        uVar6 = (ulong)((uint)uVar9 & 7);
      }
      lVar5 = uVar9 - uVar6;
      lVar7 = 0x40;
      lVar8 = lVar5;
      do {
        auVar10 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + -0x70 + lVar7 * 2));
        auVar11 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x10 + lVar7 * 2));
        auVar10 = vshufi64x2_avx512f(auVar10,ZEXT3264(*(undefined1 (*) [32])
                                                       (param_2 + -0x30 + lVar7 * 2)),200);
        auVar10 = vinserti32x4_avx512f(auVar10,*(undefined1 (*) [16])(param_2 + -8 + lVar7 * 2),3);
        auVar11 = vshufi64x2_avx512f(auVar11,ZEXT3264(*(undefined1 (*) [32])
                                                       (param_2 + 0x50 + lVar7 * 2)),200);
        auVar11 = vinserti32x4_avx512f(auVar11,*(undefined1 (*) [16])(param_2 + 0x38 + lVar7 * 2),3)
        ;
        auVar10 = vmovdqu64_avx512f(auVar10);
        *(undefined1 (*) [64])((uVar4 - 0x40) + lVar7) = auVar10;
        auVar10 = vmovdqu64_avx512f(auVar11);
        *(undefined1 (*) [64])(uVar4 + lVar7) = auVar10;
        lVar7 = lVar7 + 0x80;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar8 = uVar9 - lVar5;
    uVar6 = lVar5 << 4 | 8;
    do {
      puVar1 = (undefined8 *)(param_2 + uVar6 * 2);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)((uVar4 - 8) + uVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      uVar6 = uVar6 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *param_1 = uVar9;
  param_1[1] = uVar4;
  param_1[2] = uVar9;
  return;
}


