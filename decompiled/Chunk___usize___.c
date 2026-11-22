// ==== <std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::initialize::<<std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::get_or_init<pipeline::parse::work_queue::{closure#0}>::{closure#0}, !> @ 005d2460 (77 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>
::initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::_closure_0_>::_closure_0_,_>
          (undefined8 param_1)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::work_queue::Q._32_4_ == 0) {
    return;
  }
  local_20 = &local_18;
  local_10 = pipeline[509596c7b52975b2]::parse::work_queue::Q;
  local_8 = &local_21;
  local_18 = param_1;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x8447a0,1,&local_20,&DAT_0020f940,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::initialize<<std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::get_or_init<pipeline::parse::work_queue::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00647040 (2917 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 ****ppppuVar16;
  char cVar17;
  byte bVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  undefined8 ***pppuVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  undefined8 ***pppuVar29;
  uint *puVar30;
  undefined8 ***pppuVar31;
  long lVar32;
  undefined8 **ppuVar33;
  undefined1 (*pauVar34) [32];
  ulong uVar35;
  uint *puVar36;
  undefined8 ***pppuVar37;
  ulong uVar38;
  undefined8 ****ppppuVar39;
  ulong *puVar40;
  undefined8 **ppuVar41;
  ulong *puVar42;
  ulong *puVar43;
  byte bVar44;
  undefined8 **ppuVar45;
  long in_FS_OFFSET;
  bool bVar46;
  undefined1 auVar47 [16];
  int iVar48;
  int iVar50;
  int iVar51;
  int iVar53;
  long lVar52;
  int iVar54;
  int iVar56;
  long lVar55;
  int iVar57;
  int iVar59;
  long lVar58;
  undefined1 auVar49 [64];
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  uint local_a4;
  ulong *local_a0;
  undefined8 ****local_98;
  uint *local_90;
  undefined8 ****local_88;
  uint *local_80;
  undefined8 *****local_78;
  ulong *puStack_70;
  undefined8 ****local_68;
  uint *local_60;
  undefined8 *****local_58;
  uint *local_50;
  ulong local_48;
  ulong local_40;
  ulong ****local_38;
  
  puVar40 = (ulong *)*param_1;
  ppppuVar5 = (undefined8 ****)*puVar40;
  puVar42 = (ulong *)puVar40[1];
  *puVar40 = 0;
  if (ppppuVar5 == (undefined8 ****)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  if (DAT_00843ab0 != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
    initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
              ();
  }
  uVar35 = DAT_00843a98;
  local_a4 = DAT_00843aa4;
  local_80 = &local_a4;
  local_88 = ppppuVar5;
  if (DAT_00843a98 == 0) {
    pppppuVar28 = (undefined8 *****)ppppuVar5[0x11];
    ppppuVar39 = pppppuVar28;
    if (pppppuVar28 != (undefined8 *****)0x0) {
      pppuVar29 = ppppuVar5[0x10];
      lVar20 = (long)pppppuVar28 * 0x18;
      puVar40 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(lVar20,8);
      if (puVar40 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar20);
      }
      (*(code *)PTR_memcpy_00841de0)(puVar40,pppuVar29,lVar20);
      if (local_a4 == 0) {
      }
      else {
        local_38 = (ulong ****)&local_88;
        local_58 = &local_38;
        if (pppppuVar28 != (undefined8 *****)0x1) {
          if ((undefined8 ****)0x14 < pppppuVar28) {
            local_a0 = puVar42;
            core[62e902411887be45]::slice::sort::stable::driftsort_main::
            <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>>
                      (puVar40,pppppuVar28,&local_58);
            puVar42 = local_a0;
            goto LAB_0064771d;
          }
          pppuVar29 = local_88[0xe];
          lVar20 = 0x18;
          local_98 = local_88;
          puVar25 = puVar40 + 3;
          puVar43 = puVar40;
          do {
            puVar23 = puVar25;
            uVar35 = puVar43[5];
            pppuVar22 = (undefined8 ***)(ulong)(uint)uVar35;
            if (pppuVar29 <= pppuVar22) {
              local_a0 = puVar42;
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (pppuVar22,pppuVar29,&PTR_s_src_parse_rs_00210c28);
            }
            pppuVar31 = local_88[0xd];
            cVar17 = *(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3);
            if (cVar17 == '\0') {
              bVar44 = (*local_80 == 2) * '\x03';
            }
            else {
              bVar44 = 1;
              if (cVar17 != '\x01') {
                bVar44 = 2;
              }
            }
            pppuVar22 = (undefined8 ***)(ulong)(uint)puVar43[2];
            if (pppuVar29 <= pppuVar22) {
LAB_00647b9d:
              local_a0 = puVar42;
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (pppuVar22,pppuVar29,&PTR_s_src_parse_rs_00210c28);
            }
            if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) == '\0') {
              bVar18 = (*local_80 == 2) * '\x03';
            }
            else {
              bVar18 = 1;
              if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) != '\x01') {
                bVar18 = 2;
              }
            }
            if (bVar44 < bVar18) {
              local_78 = (undefined8 *****)*puVar23;
              puStack_70 = (ulong *)puVar23[1];
              uVar4 = *(undefined4 *)((long)puVar43 + 0x2c);
              lVar32 = lVar20;
              do {
                lVar63 = lVar32;
                *(undefined8 *)((long)puVar40 + lVar63 + 0x10) =
                     *(undefined8 *)((long)puVar40 + lVar63 + -8);
                puVar2 = (undefined8 *)((long)puVar40 + lVar63 + -0x18);
                uVar11 = puVar2[1];
                *(undefined8 *)((long)puVar40 + lVar63) = *puVar2;
                ((undefined8 *)((long)puVar40 + lVar63))[1] = uVar11;
                if (lVar63 == 0x18) {
                  puVar25 = puVar40;
                  goto LAB_00647988;
                }
                if (cVar17 == '\x02') {
                  bVar44 = 2;
                }
                else {
                  bVar44 = 1;
                  if (cVar17 != '\x01') {
                    bVar44 = (*local_80 == 2) * '\x03';
                  }
                }
                pppuVar22 = (undefined8 ***)(ulong)*(uint *)((long)puVar40 + lVar63 + -0x20);
                if (pppuVar29 <= pppuVar22) goto LAB_00647b9d;
                if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) == '\0') {
                  bVar18 = (*local_80 == 2) * '\x03';
                }
                else {
                  bVar18 = 1;
                  if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) != '\x01') {
                    bVar18 = 2;
                  }
                }
                lVar32 = lVar63 + -0x18;
              } while (bVar44 < bVar18);
              puVar25 = (ulong *)(lVar63 + -0x18 + (long)puVar40);
LAB_00647988:
              *puVar25 = (ulong)local_78;
              puVar25[1] = (ulong)puStack_70;
              *(uint *)((long)puVar40 + lVar63 + -8) = (uint)uVar35;
              *(undefined4 *)((long)puVar40 + lVar63 + -4) = uVar4;
            }
            lVar20 = lVar20 + 0x18;
            puVar25 = puVar23 + 3;
            puVar43 = puVar23;
            local_a0 = puVar42;
          } while (puVar23 + 3 != puVar40 + (long)pppppuVar28 * 3);
        }
      }
      goto LAB_0064771d;
    }
    if (DAT_00843aa4 != 0) {
      puVar40 = (ulong *)&DAT_00000008;
      goto LAB_0064771d;
    }
  }
  else {
    uVar3 = *(uint *)(ppppuVar5 + 0xe);
    uVar38 = (ulong)uVar3;
    puVar30 = (uint *)&DAT_00000004;
    if (uVar38 != 0) {
      puVar30 = (uint *)__rustc[45371133cddedda4]::__rust_alloc(uVar38 * 4);
      iVar15 = DAT_0020650c;
      iVar14 = DAT_00206508;
      iVar13 = DAT_002064fc;
      iVar12 = DAT_002064b4;
      if (puVar30 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar38 * 4);
      }
      if (uVar3 < 4) {
        uVar19 = 0;
LAB_00647260:
        do {
          puVar30[uVar19] = (uint)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar38 != uVar19);
      }
      else if (uVar3 < 0x20) {
        uVar24 = 0;
LAB_0064721b:
        iVar12 = DAT_0020641c;
        uVar19 = (ulong)(uVar3 & 0xfffffffc);
        auVar47 = vpbroadcastd_avx512vl();
        auVar47 = vpor_avx(auVar47,_DAT_00202120);
        do {
          *(undefined1 (*) [16])(puVar30 + uVar24) = auVar47;
          uVar24 = uVar24 + 4;
          auVar6._0_4_ = auVar47._0_4_ + iVar12;
          auVar6._4_4_ = auVar47._4_4_ + iVar12;
          auVar6._8_4_ = auVar47._8_4_ + iVar12;
          auVar6._12_4_ = auVar47._12_4_ + iVar12;
          auVar47 = auVar6;
        } while (uVar19 != uVar24);
        if (uVar3 != (uVar3 & 0xfffffffc)) goto LAB_00647260;
      }
      else {
        uVar19 = (ulong)(uVar3 & 0xffffffe0);
        uVar24 = 0;
        auVar9 = _DAT_00203020;
        do {
          iVar48 = auVar9._0_4_;
          iVar50 = auVar9._4_4_;
          iVar51 = auVar9._8_4_;
          iVar53 = auVar9._12_4_;
          iVar54 = auVar9._16_4_;
          iVar56 = auVar9._20_4_;
          iVar57 = auVar9._24_4_;
          iVar59 = auVar9._28_4_;
          *(undefined1 (*) [32])(puVar30 + uVar24) = auVar9;
          puVar21 = puVar30 + uVar24 + 8;
          *puVar21 = iVar48 + iVar15;
          puVar21[1] = iVar50 + iVar15;
          puVar21[2] = iVar51 + iVar15;
          puVar21[3] = iVar53 + iVar15;
          puVar21[4] = iVar54 + iVar15;
          puVar21[5] = iVar56 + iVar15;
          puVar21[6] = iVar57 + iVar15;
          puVar21[7] = iVar59 + iVar15;
          puVar21 = puVar30 + uVar24 + 0x10;
          *puVar21 = iVar48 + iVar12;
          puVar21[1] = iVar50 + iVar12;
          puVar21[2] = iVar51 + iVar12;
          puVar21[3] = iVar53 + iVar12;
          puVar21[4] = iVar54 + iVar12;
          puVar21[5] = iVar56 + iVar12;
          puVar21[6] = iVar57 + iVar12;
          puVar21[7] = iVar59 + iVar12;
          puVar21 = puVar30 + uVar24 + 0x18;
          *puVar21 = iVar48 + iVar14;
          puVar21[1] = iVar50 + iVar14;
          puVar21[2] = iVar51 + iVar14;
          puVar21[3] = iVar53 + iVar14;
          puVar21[4] = iVar54 + iVar14;
          puVar21[5] = iVar56 + iVar14;
          puVar21[6] = iVar57 + iVar14;
          puVar21[7] = iVar59 + iVar14;
          uVar24 = uVar24 + 0x20;
          auVar9._0_4_ = iVar48 + iVar13;
          auVar9._4_4_ = iVar50 + iVar13;
          auVar9._8_4_ = iVar51 + iVar13;
          auVar9._12_4_ = iVar53 + iVar13;
          auVar9._16_4_ = iVar54 + iVar13;
          auVar9._20_4_ = iVar56 + iVar13;
          auVar9._24_4_ = iVar57 + iVar13;
          auVar9._28_4_ = iVar59 + iVar13;
        } while (uVar19 != uVar24);
        if (uVar3 != (uVar3 & 0xffffffe0)) {
          uVar24 = uVar19;
          if ((uVar3 & 0x1c) == 0) goto LAB_00647260;
          goto LAB_0064721b;
        }
      }
      if (local_a4 != 0) {
        local_58 = &local_88;
        local_78 = &local_58;
        if (uVar3 != 1) {
          if (uVar3 < 0x15) {
            local_60 = puVar30 + uVar38;
            local_90 = local_80;
            local_98 = local_88;
            pppuVar29 = local_88[0xe];
            lVar20 = 4;
            puVar21 = puVar30;
            puVar36 = puVar30 + 1;
            do {
              uVar3 = puVar21[1];
              pppuVar22 = (undefined8 ***)(ulong)uVar3;
              if (pppuVar29 <= pppuVar22) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppuVar22,pppuVar29,&PTR_s_src_parse_rs_00210c28);
              }
              pppuVar31 = local_88[0xd];
              cVar17 = *(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3);
              if (cVar17 == '\0') {
                bVar44 = (*local_80 == 2) * '\x03';
              }
              else {
                bVar44 = 1;
                if (cVar17 != '\x01') {
                  bVar44 = 2;
                }
              }
              pppuVar22 = (undefined8 ***)(ulong)*puVar21;
              if (pppuVar29 <= pppuVar22) {
LAB_00647b8a:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (pppuVar22,pppuVar29,&PTR_s_src_parse_rs_00210c28);
              }
              if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) == '\0') {
                bVar18 = (*local_80 == 2) * '\x03';
              }
              else {
                bVar18 = 1;
                if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) != '\x01') {
                  bVar18 = 2;
                }
              }
              if (bVar44 < bVar18) {
                lVar32 = lVar20;
                do {
                  *(int *)((long)puVar30 + lVar32) = (int)pppuVar22;
                  if (lVar32 == 4) {
                    puVar21 = puVar30;
                    goto LAB_006477f2;
                  }
                  if (cVar17 == '\x02') {
                    bVar44 = 2;
                  }
                  else {
                    bVar44 = 1;
                    if (cVar17 != '\x01') {
                      bVar44 = (*local_80 == 2) * '\x03';
                    }
                  }
                  pppuVar22 = (undefined8 ***)(ulong)*(uint *)((long)puVar30 + lVar32 + -8);
                  if (pppuVar29 <= pppuVar22) goto LAB_00647b8a;
                  if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) == '\0') {
                    bVar18 = (*local_80 == 2) * '\x03';
                  }
                  else {
                    bVar18 = 1;
                    if (*(char *)(pppuVar31 + (long)pppuVar22 * 4 + 3) != '\x01') {
                      bVar18 = 2;
                    }
                  }
                  lVar32 = lVar32 + -4;
                } while (bVar44 < bVar18);
                puVar21 = (uint *)(lVar32 + (long)puVar30);
LAB_006477f2:
                *puVar21 = uVar3;
              }
              puVar1 = puVar36 + 1;
              lVar20 = lVar20 + 4;
              puVar21 = puVar36;
              puVar36 = puVar1;
            } while (puVar1 != local_60);
          }
          else {
            core[62e902411887be45]::slice::sort::stable::driftsort_main::
            <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<u32>>
                      (puVar30,uVar38,&local_78);
          }
        }
      }
    }
    local_48 = uVar38 * 4;
    pppuVar29 = ppppuVar5[0xe];
    if (pppuVar29 == (undefined8 ***)0x0) {
      uVar19 = 0;
    }
    else {
      pppuVar22 = ppppuVar5[0xd];
      if (pppuVar29 < (undefined8 ***)0x5) {
        lVar26 = 0;
        uVar19 = 0;
      }
      else {
        if (pppuVar29 < (undefined8 ***)0x11) {
          uVar19 = 0;
          lVar20 = 0;
        }
        else {
          pppuVar31 = (undefined8 ***)0x10;
          if (((ulong)pppuVar29 & 0xf) != 0) {
            pppuVar31 = (undefined8 ***)(ulong)((uint)pppuVar29 & 0xf);
          }
          lVar26 = (long)pppuVar29 - (long)pppuVar31;
          pauVar34 = (undefined1 (*) [32])(pppuVar22 + 0x31);
          lVar20 = 0;
          lVar52 = 0;
          lVar55 = 0;
          lVar58 = 0;
          lVar32 = 0;
          lVar60 = 0;
          lVar61 = 0;
          lVar62 = 0;
          lVar63 = 0;
          lVar64 = 0;
          lVar65 = 0;
          lVar66 = 0;
          lVar67 = 0;
          lVar68 = 0;
          lVar69 = 0;
          lVar70 = 0;
          pppuVar37 = pppuVar29;
          do {
            auVar9 = vperm2i128_avx2(pauVar34[-0xc],pauVar34[-10],0x20);
            auVar10 = vperm2i128_avx2(pauVar34[-0xb],pauVar34[-9],0x20);
            auVar9 = vpunpcklqdq_avx2(auVar9,auVar10);
            lVar20 = auVar9._0_8_ + lVar20;
            lVar52 = auVar9._8_8_ + lVar52;
            lVar55 = auVar9._16_8_ + lVar55;
            lVar58 = auVar9._24_8_ + lVar58;
            auVar9 = vperm2i128_avx2(pauVar34[-8],pauVar34[-6],0x20);
            auVar10 = vperm2i128_avx2(pauVar34[-7],pauVar34[-5],0x20);
            auVar9 = vpunpcklqdq_avx2(auVar9,auVar10);
            auVar10 = vperm2i128_avx2(pauVar34[-4],pauVar34[-2],0x20);
            lVar32 = auVar9._0_8_ + lVar32;
            lVar60 = auVar9._8_8_ + lVar60;
            lVar61 = auVar9._16_8_ + lVar61;
            lVar62 = auVar9._24_8_ + lVar62;
            auVar9 = vperm2i128_avx2(pauVar34[-3],pauVar34[-1],0x20);
            auVar9 = vpunpcklqdq_avx2(auVar10,auVar9);
            auVar10 = vperm2i128_avx2(*pauVar34,pauVar34[2],0x20);
            auVar8 = vperm2i128_avx2(pauVar34[1],pauVar34[3],0x20);
            lVar63 = auVar9._0_8_ + lVar63;
            lVar64 = auVar9._8_8_ + lVar64;
            lVar65 = auVar9._16_8_ + lVar65;
            lVar66 = auVar9._24_8_ + lVar66;
            auVar9 = vpunpcklqdq_avx2(auVar10,auVar8);
            lVar67 = auVar9._0_8_ + lVar67;
            lVar68 = auVar9._8_8_ + lVar68;
            lVar69 = auVar9._16_8_ + lVar69;
            lVar70 = auVar9._24_8_ + lVar70;
            pauVar34 = pauVar34 + 0x10;
            pppuVar37 = pppuVar37 + -2;
          } while (pppuVar31 != pppuVar37);
          auVar47._0_8_ = lVar67 + lVar63 + lVar32 + lVar20;
          auVar47._8_8_ = lVar68 + lVar64 + lVar60 + lVar52;
          auVar10._16_8_ = lVar69 + lVar65 + lVar61 + lVar55;
          auVar10._0_16_ = auVar47;
          auVar10._24_8_ = lVar70 + lVar66 + lVar62 + lVar58;
          auVar47 = vpaddq_avx(auVar47,auVar10._16_16_);
          auVar6 = vpshufd_avx(auVar47,0xee);
          auVar47 = vpaddq_avx(auVar47,auVar6);
          uVar19 = auVar47._0_8_;
          lVar20 = lVar26;
          if ((uint)pppuVar31 < 5) goto LAB_00647464;
        }
        uVar24 = 4;
        if (((ulong)pppuVar29 & 3) != 0) {
          uVar24 = (ulong)((uint)pppuVar29 & 3);
        }
        lVar26 = (long)pppuVar29 - uVar24;
        auVar49 = ZEXT864(uVar19);
        lVar32 = (uVar24 + lVar20) - (long)pppuVar29;
        pauVar34 = (undefined1 (*) [32])(pppuVar22 + lVar20 * 4 + 1);
        do {
          auVar9 = vperm2i128_avx2(*pauVar34,pauVar34[2],0x20);
          auVar10 = vperm2i128_avx2(pauVar34[1],pauVar34[3],0x20);
          auVar9 = vpunpcklqdq_avx2(auVar9,auVar10);
          auVar7._0_8_ = auVar9._0_8_ + auVar49._0_8_;
          auVar7._8_8_ = auVar9._8_8_ + auVar49._8_8_;
          auVar8._16_8_ = auVar9._16_8_ + auVar49._16_8_;
          auVar8._0_16_ = auVar7;
          auVar8._24_8_ = auVar9._24_8_ + auVar49._24_8_;
          auVar49 = ZEXT3264(auVar8);
          pauVar34 = pauVar34 + 4;
          lVar32 = lVar32 + 4;
        } while (lVar32 != 0);
        auVar47 = vpaddq_avx(auVar7,auVar8._16_16_);
        auVar6 = vpshufd_avx(auVar47,0xee);
        auVar47 = vpaddq_avx(auVar47,auVar6);
        uVar19 = auVar47._0_8_;
      }
LAB_00647464:
      lVar20 = (long)pppuVar29 - lVar26;
      pppuVar22 = pppuVar22 + lVar26 * 4 + 1;
      do {
        uVar19 = uVar19 + (long)*pppuVar22;
        pppuVar22 = pppuVar22 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    local_78 = (undefined8 *****)0x0;
    puStack_70 = (ulong *)&DAT_00000008;
    local_68 = (undefined8 ****)0x0;
    if (uVar38 != 0) {
      local_90 = puVar30 + uVar38;
      uVar38 = 0x40000;
      if (0x40000 < uVar35) {
        uVar38 = uVar35;
      }
      puVar25 = (ulong *)&DAT_00000008;
      ppppuVar39 = (undefined8 ****)0x0;
      local_a0 = puVar42;
      local_50 = puVar30;
      local_40 = uVar38;
      do {
        uVar3 = *puVar30;
        pppuVar29 = (undefined8 ***)(ulong)uVar3;
        if (ppppuVar5[0xe] <= pppuVar29) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (pppuVar29,ppppuVar5[0xe],&PTR_s_src_parse_rs_00215260);
        }
        pppuVar22 = ppppuVar5[0xd];
        ppuVar33 = pppuVar22[(long)pppuVar29 * 4 + 1];
        if ((undefined8 **)0x1 < ppuVar33) {
          lVar20 = (long)ppppuVar39 * 0x18 + 0x10;
          ppuVar41 = (undefined8 **)0x1;
          local_60 = puVar30;
          do {
            uVar35 = (long)ppppuVar5[0x3b] << 2;
            if (uVar35 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                        (&PTR_s_src_parse_rs_00215278);
            }
            if ((uVar19 | uVar35) >> 0x20 == 0) {
              uVar35 = (uVar19 & 0xffffffff) / (uVar35 & 0xffffffff);
            }
            else {
              uVar35 = uVar19 / uVar35;
            }
            uVar24 = uVar35;
            if (uVar38 <= uVar35) {
              uVar24 = uVar38;
            }
            if (uVar35 < 0x40000) {
              ppuVar45 = ppuVar41 + 0x8000;
            }
            else {
              ppuVar45 = (undefined8 **)(uVar24 + (long)ppuVar41);
            }
            if (ppuVar33 <= ppuVar45) {
              ppuVar45 = ppuVar33;
            }
            if ((undefined8 *****)ppppuVar39 == local_78) {
              local_98 = ppppuVar39;
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(&local_78);
              puVar25 = puStack_70;
              uVar38 = local_40;
              ppppuVar39 = local_98;
              puVar30 = local_60;
            }
            *(undefined8 ***)((long)puVar25 + lVar20 + -0x10) = ppuVar41;
            *(undefined8 ***)((long)puVar25 + lVar20 + -8) = ppuVar45;
            *(uint *)((long)puVar25 + lVar20) = uVar3;
            ppppuVar39 = (undefined8 ****)((long)ppppuVar39 + 1);
            bVar46 = uVar19 < (ulong)((long)ppuVar45 - (long)ppuVar41);
            uVar19 = uVar19 - ((long)ppuVar45 - (long)ppuVar41);
            if (bVar46) {
              uVar19 = 0;
            }
            ppuVar33 = pppuVar22[(long)pppuVar29 * 4 + 1];
            lVar20 = lVar20 + 0x18;
            ppuVar41 = ppuVar45;
            local_68 = ppppuVar39;
          } while (ppuVar45 < ppuVar33);
        }
        puVar40 = puStack_70;
        pppppuVar28 = local_78;
        puVar42 = local_a0;
        puVar30 = puVar30 + 1;
        bVar46 = uVar19 == 0;
        uVar19 = uVar19 - 1;
        if (bVar46) {
          uVar19 = 0;
        }
      } while (puVar30 != local_90);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (uint *)0x0) ||
          (local_50 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_50)) {
        free(local_50);
        puVar42 = local_a0;
      }
      else {
        uVar35 = 0x10;
        if (0x10 < local_48) {
          uVar35 = local_48;
        }
        lVar20 = 0x40 - LZCOUNT(uVar35 - 1);
        if ((uVar35 - 1 < 0x10000) ||
           (cVar17 = pipeline[509596c7b52975b2]::sys::big_put(local_50,lVar20), cVar17 == '\0')) {
          *(undefined8 *)local_50 = *(undefined8 *)(in_FS_OFFSET + lVar20 * 8 + -0x3c8);
          *(uint **)(in_FS_OFFSET + lVar20 * 8 + -0x3c8) = local_50;
        }
      }
      goto LAB_0064771d;
    }
  }
  puVar40 = (ulong *)&DAT_00000008;
  pppppuVar28 = (undefined8 *****)0x0;
  ppppuVar39 = (undefined8 ****)0x0;
LAB_0064771d:
  puVar25 = puVar40 + (long)ppppuVar39 * 3;
  lVar20 = (long)ppppuVar39 * -0x18;
  ppppuVar16 = ppppuVar39;
  do {
    ppppuVar27 = ppppuVar16;
    if (lVar20 == 0) {
      ppppuVar27 = (undefined8 ****)0x0;
      break;
    }
    pppuVar29 = (undefined8 ***)(ulong)(uint)puVar25[-1];
    if (ppppuVar5[0xe] <= pppuVar29) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (pppuVar29,ppppuVar5[0xe],&PTR_s_src_parse_rs_002105b8);
    }
    puVar25 = puVar25 + -3;
    lVar20 = lVar20 + 0x18;
    ppppuVar16 = (undefined8 ****)((long)ppppuVar27 - 1);
  } while (*(char *)(ppppuVar5[0xd] + (long)pppuVar29 * 4 + 3) == '\0');
  *puVar42 = (ulong)pppppuVar28;
  puVar42[1] = (ulong)puVar40;
  puVar42[2] = (ulong)ppppuVar39;
  puVar42[3] = (ulong)ppppuVar27;
  return;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::initialize<<std::sync::once_lock::OnceLock<(alloc::vec::Vec<pipeline::Chunk>, usize)>>::get_or_init<pipeline::parse::work_queue::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a980 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,
   usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


