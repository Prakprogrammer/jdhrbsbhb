// ==== <hashbrown::raw::RawTable<(alloc::vec::Vec<u8>, pipeline::OddEv)>>::reserve_rehash::<hashbrown::map::make_hasher<alloc::vec::Vec<u8>, pipeline::OddEv, std::hash::random::RandomState>::{closure#0}> @ 005d2fa0 (1723 bytes)

/* <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,
   pipeline[509596c7b52975b2]::OddEv)>>::reserve_rehash::<hashbrown[ee4ff39ba1229c30]::map::make_hasher<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,
   pipeline[509596c7b52975b2]::OddEv,
   std[c60ef17cbf7de79f]::hash::random::RandomState>::{closure#0}> */

undefined8 __rustcall
<hashbrown[ee4ff39ba1229c30]::raw::RawTable<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,pipeline[509596c7b52975b2]::OddEv)>>
::reserve_rehash::
<hashbrown[ee4ff39ba1229c30]::map::make_hasher<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,pipeline[509596c7b52975b2]::OddEv,std[c60ef17cbf7de79f]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [32];
  char cVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  uint uVar28;
  long lVar29;
  short sVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [16];
  long lVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 extraout_var [56];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 (*local_50) [16];
  ulong local_48;
  ulong local_40;
  long local_38;
  
  lVar29 = param_1[3];
  uVar20 = lVar29 + 1;
  if (uVar20 == 0) {
LAB_005d30ef:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_fmt
              ("Hash table capacity overflow",0x39,&PTR_s__cargo_registry_25cdd57fae9f0462_0058bc80)
    ;
  }
  uVar3 = param_1[1];
  uVar16 = uVar3 + 1;
  uVar25 = (uVar16 & 0xfffffffffffffff8) - (uVar16 >> 3);
  if (uVar3 < 8) {
    uVar25 = uVar3;
  }
  if (uVar25 >> 1 < uVar20) {
    uVar16 = uVar25 + 1;
    if (uVar25 + 1 < uVar20) {
      uVar16 = uVar20;
    }
    if (uVar16 < 0xf) {
      uVar20 = 4;
      if (3 < uVar16) {
        uVar20 = (ulong)((uint)uVar16 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar16) goto LAB_005d30ef;
      uVar20 = 1L << ((ulong)(byte)-(char)LZCOUNT((uVar16 * 8) / 7 - 1) & 0x3f);
    }
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar20;
    uVar16 = SUB168(auVar35 * ZEXT816(0x38),0);
    if ((SUB168(auVar35 * ZEXT816(0x38),8) == 0) && (uVar16 < 0xfffffffffffffff1)) {
      uVar31 = uVar16 + 8 & 0xfffffffffffffff0;
      uVar16 = uVar20 + 0x10;
      uVar25 = uVar16 + uVar31;
      if (uVar25 < 0x7ffffffffffffff1 && !CARRY8(uVar16,uVar31)) {
        lVar17 = __rustc[45371133cddedda4]::__rust_alloc(uVar25,0x10);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x10,uVar25);
        }
        pauVar32 = (undefined1 (*) [16])(lVar17 + uVar31);
        uVar25 = uVar20 - 1;
        uVar31 = (uVar20 & 0xfffffffffffffff8) - (uVar20 >> 3);
        if (uVar20 < 9) {
          uVar31 = uVar25;
        }
        auVar36._0_8_ = (*(code *)PTR_memset_00841dd0)(pauVar32,0xff,uVar16);
        auVar36._8_56_ = extraout_var;
        local_60 = 0x38;
        local_58 = 0x10;
        local_38 = 0;
        pauVar4 = (undefined1 (*) [16])*param_1;
        local_68 = param_1 + 4;
        if (lVar29 == 0) {
          lVar29 = 0;
        }
        else {
          auVar35 = vpcmpeqd_avx(auVar36._0_16_,auVar36._0_16_);
          uVar20 = vpcmpb_avx512vl(auVar35,*pauVar4,1);
          uVar5 = *param_2;
          uVar6 = param_2[1];
          lVar17 = 0;
          pauVar26 = pauVar4;
          lVar33 = lVar29;
          local_50 = pauVar32;
          local_48 = uVar25;
          local_40 = uVar31;
          do {
            uVar27 = (uint)uVar20;
            sVar30 = (short)uVar20;
            while (sVar30 == 0) {
              uVar8 = vpcmpb_avx512vl(auVar35,pauVar26[1],1);
              uVar27 = (uint)uVar8;
              pauVar26 = pauVar26 + 1;
              lVar17 = lVar17 + 0x10;
              sVar30 = (short)uVar8;
            }
            uVar28 = 0;
            for (uVar21 = uVar27; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            lVar18 = ((ulong)uVar28 + lVar17) * -0x38;
            uVar16 = <std[c60ef17cbf7de79f]::hash::random::RandomState_as_core[62e902411887be45]::hash::BuildHasher>
                     ::hash_one::<&alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>
                               (uVar5,uVar6,*(undefined8 *)((long)pauVar4 + lVar18 + -0x30),
                                *(undefined8 *)((long)pauVar4 + lVar18 + -0x28));
            uVar20 = uVar16 & uVar25;
            auVar35 = *(undefined1 (*) [16])(*pauVar32 + uVar20);
            uVar7 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
            uVar21 = (uint)uVar7;
            if (uVar7 == 0) {
              lVar18 = 0x10;
              do {
                uVar20 = uVar20 + lVar18 & uVar25;
                auVar35 = *(undefined1 (*) [16])(*pauVar32 + uVar20);
                lVar18 = lVar18 + 0x10;
                uVar21 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
              } while (uVar21 == 0);
            }
            uVar19 = 0;
            for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              uVar19 = uVar19 + 1;
            }
            uVar22 = uVar19 + uVar20 & uVar25;
            if (-1 < (char)(*pauVar32)[uVar22]) {
              auVar35 = *pauVar32;
              uVar21 = 0;
              for (uVar19 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
                  (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                uVar21 = uVar21 + 1;
              }
              uVar22 = (ulong)uVar21;
            }
            uVar20 = (ulong)(uVar27 - 1 & uVar27);
            lVar33 = lVar33 + -1;
            bVar15 = (byte)(uVar16 >> 0x39);
            (*pauVar32)[uVar22] = bVar15;
            pauVar32[1][uVar22 - 0x10 & uVar25] = bVar15;
            lVar18 = ~((ulong)uVar28 + lVar17) * 0x38;
            auVar1 = *(undefined1 (*) [32])((long)pauVar4 + lVar18);
            puVar24 = (undefined8 *)((long)pauVar4 + lVar18 + 0x18);
            uVar8 = puVar24[1];
            uVar9 = puVar24[2];
            uVar10 = puVar24[3];
            puVar23 = (undefined8 *)((long)pauVar32 + ~uVar22 * 0x38 + 0x18);
            *puVar23 = *puVar24;
            puVar23[1] = uVar8;
            puVar23[2] = uVar9;
            puVar23[3] = uVar10;
            *(undefined1 (*) [32])((long)pauVar32 + ~uVar22 * 0x38) = auVar1;
            auVar35 = auVar1._0_16_;
            auVar35 = vpcmpeqd_avx(auVar35,auVar35);
          } while (lVar33 != 0);
        }
        *param_1 = pauVar32;
        param_1[1] = uVar25;
        local_40 = param_1[2];
        param_1[2] = uVar31 - lVar29;
        local_50 = pauVar4;
        local_48 = uVar3;
        local_38 = lVar29;
        core[62e902411887be45]::ptr::drop_glue::
        <hashbrown[ee4ff39ba1229c30]::scopeguard::ScopeGuard<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner,<hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::prepare_resize<alloc[2a0ada2ddd1fabff]::alloc::Global>::_closure_0_>>
                  (&local_68);
        return 0xffffffffffffffff;
      }
    }
    goto LAB_005d30ef;
  }
  if (uVar16 == 0) {
    uVar20 = 0;
    goto LAB_005d35f0;
  }
  pauVar32 = (undefined1 (*) [16])*param_1;
  uVar20 = ((uVar16 >> 4) + 1) - (ulong)((uVar16 & 0xf) == 0);
  if (uVar20 < 4) {
    lVar29 = 0;
LAB_005d3378:
    uVar25 = 0;
    auVar38._8_8_ = DAT_00201c30;
    auVar38._0_8_ = DAT_00201c30;
    do {
      auVar35 = vpcmpgtb_avx((undefined1  [16])0x0,
                             *(undefined1 (*) [16])(*pauVar32 + uVar25 + lVar29));
      auVar35 = vpor_avx(auVar35,auVar38);
      *(undefined1 (*) [16])(*pauVar32 + uVar25 + lVar29) = auVar35;
      uVar25 = uVar25 + 0x10;
    } while (((uint)uVar20 & 3) << 4 != uVar25);
  }
  else {
    uVar25 = uVar20 & 0x1ffffffffffffffc;
    lVar29 = 0;
    auVar37._8_8_ = DAT_00201c30;
    auVar37._0_8_ = DAT_00201c30;
    do {
      auVar35 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(*pauVar32 + lVar29));
      auVar35 = vpor_avx(auVar35,auVar37);
      *(undefined1 (*) [16])(*pauVar32 + lVar29) = auVar35;
      auVar35 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar32[1] + lVar29));
      auVar35 = vpor_avx(auVar35,auVar37);
      *(undefined1 (*) [16])(pauVar32[1] + lVar29) = auVar35;
      auVar35 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar32[2] + lVar29));
      auVar35 = vpor_avx(auVar35,auVar37);
      *(undefined1 (*) [16])(pauVar32[2] + lVar29) = auVar35;
      auVar35 = vpcmpgtb_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(pauVar32[3] + lVar29));
      auVar35 = vpor_avx(auVar35,auVar37);
      *(undefined1 (*) [16])(pauVar32[3] + lVar29) = auVar35;
      lVar29 = lVar29 + 0x40;
      uVar25 = uVar25 - 4;
    } while (uVar25 != 0);
    if ((uVar20 & 3) != 0) goto LAB_005d3378;
  }
  uVar20 = 0x10;
  if (0x10 < uVar16) {
    uVar20 = uVar16;
  }
  uVar25 = 0x10;
  if (uVar16 < 0x10) {
    uVar25 = uVar16;
  }
  (*(code *)PTR_memmove_00841dd8)(*pauVar32 + uVar20,pauVar32,uVar25);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar20 = 0;
  do {
    if (SBORROW1('\0',(*pauVar32)[uVar20])) {
      puVar24 = (undefined8 *)(~uVar20 * 0x38 + (long)pauVar32);
      while( true ) {
        uVar31 = <std[c60ef17cbf7de79f]::hash::random::RandomState_as_core[62e902411887be45]::hash::BuildHasher>
                 ::hash_one::<&alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>
                           (uVar5,uVar6,*(undefined8 *)((long)pauVar32 + uVar20 * -0x38 + -0x30),
                            *(undefined8 *)((long)pauVar32 + uVar20 * -0x38 + -0x28));
        uVar16 = param_1[1];
        uVar22 = uVar16 & uVar31;
        auVar35 = *(undefined1 (*) [16])(*pauVar32 + uVar22);
        uVar7 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
        uVar27 = (uint)uVar7;
        uVar25 = uVar22;
        if (uVar7 == 0) {
          lVar29 = 0x10;
          do {
            uVar25 = uVar25 + lVar29 & uVar16;
            auVar35 = *(undefined1 (*) [16])(*pauVar32 + uVar25);
            lVar29 = lVar29 + 0x10;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
          } while (uVar27 == 0);
        }
        uVar28 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar25 = uVar28 + uVar25 & uVar16;
        if (-1 < (char)(*pauVar32)[uVar25]) {
          auVar35 = *pauVar32;
          uVar27 = 0;
          for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar35[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
              uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar25 = (ulong)uVar27;
        }
        bVar15 = (byte)(uVar31 >> 0x38);
        if (((uVar25 - uVar22 ^ uVar20 - uVar22) & uVar16) < 0x10) {
          bVar15 = bVar15 >> 1;
          (*pauVar32)[uVar20] = bVar15;
          pauVar32 = (undefined1 (*) [16])*param_1;
          pauVar32[1][uVar16 & uVar20 - 0x10] = bVar15;
          goto LAB_005d357d;
        }
        puVar23 = (undefined8 *)(~uVar25 * 0x38 + (long)pauVar32);
        cVar2 = (*pauVar32)[uVar25];
        bVar15 = bVar15 >> 1;
        (*pauVar32)[uVar25] = bVar15;
        pauVar32 = (undefined1 (*) [16])*param_1;
        pauVar32[1][uVar25 - 0x10 & uVar16] = bVar15;
        if (cVar2 == -1) break;
        uVar8 = *puVar24;
        *puVar24 = *puVar23;
        *puVar23 = uVar8;
        uVar8 = puVar24[1];
        puVar24[1] = puVar23[1];
        puVar23[1] = uVar8;
        uVar8 = puVar24[2];
        puVar24[2] = puVar23[2];
        puVar23[2] = uVar8;
        uVar8 = puVar24[3];
        puVar24[3] = puVar23[3];
        puVar23[3] = uVar8;
        uVar8 = puVar24[4];
        puVar24[4] = puVar23[4];
        puVar23[4] = uVar8;
        uVar8 = puVar24[5];
        puVar24[5] = puVar23[5];
        puVar23[5] = uVar8;
        uVar8 = puVar24[6];
        puVar24[6] = puVar23[6];
        puVar23[6] = uVar8;
        pauVar32 = (undefined1 (*) [16])*param_1;
      }
      uVar16 = param_1[1];
      (*pauVar32)[uVar20] = 0xff;
      pauVar32[1][uVar20 - 0x10 & uVar16] = 0xff;
      uVar8 = *puVar24;
      uVar9 = puVar24[1];
      uVar10 = puVar24[2];
      uVar11 = puVar24[3];
      uVar12 = puVar24[4];
      uVar13 = puVar24[5];
      uVar14 = puVar24[6];
      puVar23[3] = puVar24[3];
      puVar23[4] = uVar12;
      puVar23[5] = uVar13;
      puVar23[6] = uVar14;
      *puVar23 = uVar8;
      puVar23[1] = uVar9;
      puVar23[2] = uVar10;
      puVar23[3] = uVar11;
    }
LAB_005d357d:
    bVar34 = uVar20 != uVar3;
    uVar20 = uVar20 + 1;
  } while (bVar34);
  uVar16 = param_1[1];
  uVar20 = (uVar16 + 1 & 0xfffffffffffffff8) - (uVar16 + 1 >> 3);
  if (uVar16 < 8) {
    uVar20 = uVar16;
  }
LAB_005d35f0:
  param_1[2] = uVar20 - param_1[3];
  return 0xffffffffffffffff;
}


