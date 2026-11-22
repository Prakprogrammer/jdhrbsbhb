// ==== core::ptr::drop_glue::<alloc::vec::Vec<alloc::vec::Vec<pipeline::Seg>>> @ 00600000 (389 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Seg>>>
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
          uVar2 = puVar4[-1] * 0x10 - 1;
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


// ==== pipeline::run_generic @ 0067cda0 (15370 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::run_generic */

void __rustcall
pipeline[509596c7b52975b2]::run_generic
          (undefined1 (*param_1) [16],undefined1 *param_2,undefined8 param_3,undefined8 param_4,
          long param_5)

{
  undefined1 (*pauVar1) [24];
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  bool bVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar18;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  long lVar17;
  long lVar19;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  uint uVar22;
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
  undefined1 auVar37 [24];
  undefined1 auVar38 [16];
  undefined1 (**ppauVar39) [16];
  char cVar40;
  byte bVar41;
  uint uVar42;
  int iVar43;
  undefined4 *puVar44;
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined1 *puVar48;
  undefined1 (*pauVar49) [64];
  undefined1 (*pauVar50) [16];
  long lVar51;
  ulong uVar52;
  undefined1 *puVar53;
  uint uVar54;
  long lVar55;
  undefined **ppuVar56;
  long lVar57;
  byte bVar58;
  ulong uVar59;
  long lVar60;
  long *plVar61;
  undefined1 (*pauVar62) [16];
  ulong uVar63;
  ushort uVar64;
  int iVar65;
  ulong uVar66;
  short sVar67;
  ulong uVar68;
  undefined1 (*pauVar69) [16];
  ulong uVar70;
  undefined8 uVar71;
  long lVar72;
  long lVar73;
  undefined1 (*pauVar74) [16];
  long in_FS_OFFSET;
  undefined8 uVar75;
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined1 auVar81 [16];
  long lVar82;
  long lVar83;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  long lVar89;
  long lVar90;
  undefined1 auVar88 [64];
  long lVar91;
  long lVar92;
  long lVar93;
  undefined1 auVar94 [16];
  long local_770;
  undefined1 local_761;
  undefined1 (*local_760) [16];
  undefined1 (*local_758) [16];
  undefined1 (*local_750) [16];
  undefined1 (*local_748) [16];
  undefined1 (*local_740) [16];
  undefined1 (*local_738) [16];
  long lStack_730;
  ulong local_728;
  undefined1 (*local_720) [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 (*local_6f0) [16];
  undefined1 (*local_6e8) [16];
  ulong local_6e0;
  long local_6d8;
  ulong local_6d0;
  long local_6c8;
  long local_6c0;
  long local_6b8;
  undefined1 (*local_6b0) [16];
  undefined1 (*local_6a8) [16];
  undefined1 (*pauStack_6a0) [16];
  long lStack_698;
  long lStack_690;
  undefined1 local_688 [8];
  undefined1 (*local_680) [16];
  undefined1 (*local_678) [16];
  undefined1 (*local_670) [16];
  undefined1 (*local_668) [16];
  undefined1 (*pauStack_660) [16];
  undefined1 (*local_658) [16];
  undefined1 (*local_650) [16];
  undefined1 local_638 [16];
  undefined1 (*local_620) [16];
  undefined1 (*local_618) [16];
  undefined1 (*local_610) [16];
  ulong local_608;
  undefined1 (*local_600) [16];
  ulong local_5f8;
  undefined1 (*local_5f0) [16];
  undefined1 (*local_5e8) [16];
  undefined1 (*local_5e0) [16];
  undefined1 (*local_5d8) [16];
  undefined1 local_5d0 [16];
  undefined1 (*local_5c0) [16];
  long lStack_5b8;
  undefined1 (*local_5b0) [16];
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined1 (*local_5a0) [16];
  undefined1 (*local_598) [16];
  undefined1 local_590 [16];
  undefined1 (*local_580) [16];
  long lStack_578;
  undefined1 (*local_570) [16];
  long local_568;
  long lStack_560;
  long local_558;
  undefined1 (*local_550) [16];
  long lStack_548;
  undefined1 (*local_540) [16];
  undefined1 local_538 [16];
  long lStack_528;
  long lStack_520;
  undefined8 local_510;
  undefined1 (*local_508) [16];
  undefined1 (*local_500) [16];
  undefined1 (*pauStack_4f8) [16];
  undefined1 (*pauStack_4f0) [16];
  undefined1 (*pauStack_4e8) [16];
  undefined8 *local_4e0;
  long *plStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 (*local_4a0) [16];
  undefined8 local_498;
  undefined1 uStack_490;
  undefined7 uStack_48f;
  undefined1 (*pauStack_488) [16];
  undefined1 (*pauStack_480) [16];
  undefined1 (*local_478) [16];
  undefined1 (**ppauStack_470) [16];
  long *plStack_468;
  undefined1 (***pppauStack_460) [16];
  undefined1 local_458 [16];
  undefined1 (**ppauStack_448) [16];
  long *plStack_440;
  undefined8 local_438;
  undefined1 local_3d8 [224];
  undefined1 (*local_2f8) [16];
  undefined1 (*local_2f0) [16];
  long lStack_2e8;
  long local_2e0;
  long local_2d8;
  ulong local_2d0;
  long local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 (*local_278) [16];
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 (*local_248) [16];
  undefined8 local_240;
  undefined1 (*local_238) [16];
  undefined1 (*local_230) [16];
  undefined1 (*local_228) [16];
  undefined1 (*local_220) [16];
  undefined1 (*local_218) [16];
  undefined1 (*local_210) [16];
  undefined1 (*local_208) [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 (*local_1f0) [16];
  undefined1 (*local_1e8) [16];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 (*local_1d0) [16];
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 (*local_1a8) [16];
  undefined8 local_1a0;
  ulong local_198;
  ulong local_190;
  long local_188;
  undefined1 (*local_180) [16];
  undefined1 (*local_178) [16];
  undefined1 (*local_170) [16];
  undefined1 (*local_168) [16];
  undefined1 (*local_160) [16];
  undefined1 (*local_158) [16];
  undefined1 (*local_150) [16];
  undefined1 (*local_148) [16];
  undefined1 (*local_140) [16];
  undefined8 local_138;
  long local_130;
  ulong local_128;
  undefined8 local_120;
  long local_118;
  ulong local_110;
  undefined8 local_108;
  undefined1 (*local_100) [16];
  ulong local_f8;
  undefined1 local_f0 [12];
  undefined1 local_e0 [12];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*local_b0) [16];
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 (**local_68) [16];
  undefined1 (*local_60) [16];
  undefined1 (*local_58) [16];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar68 = param_5 + (ulong)(param_5 == 0);
  local_498._0_4_ = 0x444e3156;
  local_498._4_4_ = 0x474f4c5f;
  uStack_490 = 0;
  uVar75 = vptestmb_avx512vl(ZEXT816(0x474f4c5f444e31),ZEXT816(0x474f4c5f444e31));
  uVar71 = vptestnmb_avx512vl(ZEXT816(0x474f4c5f444e31),ZEXT816(0x474f4c5f444e31));
  auVar20 = vpmovm2d_avx512vl(uVar71);
  auVar21 = vpmovm2d_avx512vl(uVar75);
  auVar20 = vpblendd_avx2(auVar21,auVar20,0x80);
  uVar75 = vpmovd2m_avx512vl(auVar20);
  local_200 = param_3;
  local_1f8 = param_4;
  if ((char)uVar75 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_510,&local_498);
    pauVar74 = local_508;
    ppuVar56 = (undefined **)local_508;
    if (local_510 == (undefined1 (*) [16])0xfffffffffffffffe) goto LAB_0067ceea;
    local_761 = local_510 != (undefined1 (*) [16])0xffffffffffffffff;
    if (0 < (long)local_510) {
      if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (local_508 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_508)) {
        free(local_508);
      }
      else {
        pauVar50 = (undefined1 (*) [16])&DAT_00000010;
        if ((undefined1 (*) [16])&DAT_00000010 < local_510) {
          pauVar50 = local_510;
        }
        lVar72 = 0x40 - LZCOUNT(pauVar50[-1] + 0xf);
        if ((local_510 < (undefined1 (*) [16])0x10001) ||
           (cVar40 = sys::big_put(local_508,lVar72), cVar40 == '\0')) {
          *(undefined8 *)*pauVar74 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
          *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar74;
        }
      }
    }
  }
  else {
    ppuVar56 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_0067ceea:
    if ((1 < ((uint)ppuVar56 & 3) - 2) && (((ulong)ppuVar56 & 3) != 0)) {
      (**(code **)(*(undefined1 (*) [16])((long)ppuVar56 + 0x10) + 7))
                (*(undefined1 (*) [16])((long)ppuVar56 + -0x10) + 0xf);
    }
    local_761 = 0;
  }
  local_f0 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  local_2b8 = &local_761;
  local_2b0 = local_e0;
  local_2a8 = local_f0;
  local_e0 = local_f0;
  <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"manifest.json",0xd);
  pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
  <pipeline[509596c7b52975b2]::generic::util::Mapped>::open(&local_510,pauVar50,pauStack_488);
  pauVar74 = local_508;
  if ((int)local_510 == 1) {
    uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
    pauVar45 = local_510;
    if (uVar68 != 0) {
      if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= pauVar50)) {
        free(pauVar50);
        pauVar45 = local_510;
      }
      else {
        uVar52 = 0x10;
        if (0x10 < uVar68) {
          uVar52 = uVar68;
        }
        lVar73 = LZCOUNT(uVar52 - 1);
        lVar72 = 0x40 - lVar73;
        if (0xffff < uVar52 - 1) {
          cVar40 = sys::big_put(pauVar50,lVar72);
          pauVar45 = local_510;
          if (cVar40 != '\0') goto joined_r0x0067d063;
        }
        if (lVar73 == 0) {
LAB_0067dae9:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar72,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
        *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
        pauVar45 = local_510;
      }
    }
  }
  else {
    local_6b0 = local_508;
    local_6e8 = local_500;
    uVar52 = CONCAT44(local_498._4_4_,(undefined4)local_498);
    local_728 = uVar68;
    if (uVar52 != 0) {
      if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= pauVar50)) {
        free(pauVar50);
      }
      else {
        uVar68 = 0x10;
        if (0x10 < uVar52) {
          uVar68 = uVar52;
        }
        lVar72 = LZCOUNT(uVar68 - 1);
        pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
        if (0xffff < uVar68 - 1) {
          cVar40 = sys::big_put(pauVar50,pauVar74);
          if (cVar40 != '\0') goto LAB_0067d143;
        }
        if (lVar72 == 0) goto LAB_0067d9a9;
        *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8);
        *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) = pauVar50;
      }
    }
LAB_0067d143:
    <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"products.csv",0xc);
    pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
    <pipeline[509596c7b52975b2]::generic::util::Mapped>::open(&local_510,pauVar50,pauStack_488);
    local_740 = local_508;
    if ((int)local_510 == 1) {
      uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
      pauVar74 = local_508;
      if (uVar68 != 0) {
        if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pauVar50)) {
          free(pauVar50);
          pauVar74 = local_740;
        }
        else {
          uVar52 = 0x10;
          if (0x10 < uVar68) {
            uVar52 = uVar68;
          }
          lVar73 = LZCOUNT(uVar52 - 1);
          lVar72 = 0x40 - lVar73;
          if (0xffff < uVar52 - 1) {
            cVar40 = sys::big_put(pauVar50,lVar72);
            pauVar74 = local_740;
            if (cVar40 != '\0') goto joined_r0x0067d803;
          }
          if (lVar73 == 0) goto LAB_0067dae9;
          *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
          *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
          pauVar74 = local_740;
        }
      }
    }
    else {
      local_6f0 = local_500;
      uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
      if (uVar68 != 0) {
        if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pauVar50)) {
          free(pauVar50);
        }
        else {
          uVar52 = 0x10;
          if (0x10 < uVar68) {
            uVar52 = uVar68;
          }
          lVar72 = LZCOUNT(uVar52 - 1);
          pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
          if (0xffff < uVar52 - 1) {
            cVar40 = sys::big_put(pauVar50,pauVar74);
            if (cVar40 != '\0') goto LAB_0067d394;
          }
          if (lVar72 == 0) goto LAB_0067d9a9;
          *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8);
          *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) = pauVar50;
        }
      }
LAB_0067d394:
      <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"campaigns.csv",0xd);
      pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
      <pipeline[509596c7b52975b2]::generic::util::Mapped>::open(&local_510,pauVar50,pauStack_488);
      pauVar74 = local_508;
      if ((int)local_510 == 1) {
        uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
        pauVar45 = local_740;
        if (uVar68 != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pauVar50)) {
            free(pauVar50);
            pauVar45 = local_740;
          }
          else {
            uVar52 = 0x10;
            if (0x10 < uVar68) {
              uVar52 = uVar68;
            }
            lVar73 = LZCOUNT(uVar52 - 1);
            lVar72 = 0x40 - lVar73;
            if (0xffff < uVar52 - 1) {
              cVar40 = sys::big_put(pauVar50,lVar72);
              pauVar45 = local_740;
              if (cVar40 != '\0') goto joined_r0x0067d7e3;
            }
            if (lVar73 == 0) goto LAB_0067dae9;
            *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
            *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
            pauVar45 = local_740;
          }
        }
      }
      else {
        local_5e8 = local_508;
        local_610 = local_500;
        uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
        if (uVar68 != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pauVar50)) {
            free(pauVar50);
          }
          else {
            uVar52 = 0x10;
            if (0x10 < uVar68) {
              uVar52 = uVar68;
            }
            lVar72 = LZCOUNT(uVar52 - 1);
            pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
            if (0xffff < uVar52 - 1) {
              cVar40 = sys::big_put(pauVar50,pauVar74);
              if (cVar40 != '\0') goto LAB_0067d5a1;
            }
            if (lVar72 == 0) goto LAB_0067d9a9;
            *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8);
            *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) = pauVar50;
          }
        }
LAB_0067d5a1:
        <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"events",6);
        pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
        generic::util::map_dir(&local_510,pauVar50,pauStack_488);
        pauVar74 = local_508;
        if (local_510 == (undefined1 (*) [16])0xffffffffffffffff) {
          uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
          pauVar45 = local_740;
          if (uVar68 != 0) {
            if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= pauVar50)) {
              free(pauVar50);
              pauVar45 = local_740;
            }
            else {
              uVar52 = 0x10;
              if (0x10 < uVar68) {
                uVar52 = uVar68;
              }
              lVar73 = LZCOUNT(uVar52 - 1);
              lVar72 = 0x40 - lVar73;
              if (0xffff < uVar52 - 1) {
                cVar40 = sys::big_put(pauVar50,lVar72);
                pauVar45 = local_740;
                if (cVar40 != '\0') goto joined_r0x0067dba0;
              }
              if (lVar73 == 0) goto LAB_0067dae9;
              *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
              *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
              pauVar45 = local_740;
            }
          }
        }
        else {
          local_180 = local_510;
          local_208 = local_508;
          local_178 = local_508;
          local_210 = local_500;
          local_170 = local_500;
          uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
          if (uVar68 != 0) {
            if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= pauVar50)) {
              free(pauVar50);
            }
            else {
              uVar52 = 0x10;
              if (0x10 < uVar68) {
                uVar52 = uVar68;
              }
              lVar72 = LZCOUNT(uVar52 - 1);
              pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
              if (0xffff < uVar52 - 1) {
                cVar40 = sys::big_put(pauVar50,pauVar74);
                if (cVar40 != '\0') goto LAB_0067d816;
              }
              if (lVar72 == 0) goto LAB_0067d9a9;
              *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8)
              ;
              *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) = pauVar50;
            }
          }
LAB_0067d816:
          <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"clicks",6);
          pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
          generic::util::map_dir(&local_510,pauVar50,pauStack_488);
          pauVar74 = local_508;
          if (local_510 == (undefined1 (*) [16])0xffffffffffffffff) {
            uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            if (uVar68 != 0) {
              if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= pauVar50)) {
                free(pauVar50);
              }
              else {
                uVar52 = 0x10;
                if (0x10 < uVar68) {
                  uVar52 = uVar68;
                }
                lVar73 = LZCOUNT(uVar52 - 1);
                lVar72 = 0x40 - lVar73;
                if (0xffff < uVar52 - 1) {
                  cVar40 = sys::big_put(pauVar50,lVar72);
                  if (cVar40 != '\0') goto LAB_0067d9c6;
                }
                if (lVar73 == 0) goto LAB_0067dae9;
                *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
                *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
              }
            }
LAB_0067d9c6:
            pauVar45 = local_740;
          }
          else {
            local_168 = local_510;
            local_218 = local_508;
            local_160 = local_508;
            local_220 = local_500;
            local_158 = local_500;
            uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            if (uVar68 == 0) goto LAB_0067d9db;
            if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= pauVar50)) {
              free(pauVar50);
              goto LAB_0067d9db;
            }
            uVar52 = 0x10;
            if (0x10 < uVar68) {
              uVar52 = uVar68;
            }
            lVar72 = LZCOUNT(uVar52 - 1);
            pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
            if (0xffff < uVar52 - 1) {
              cVar40 = sys::big_put(pauVar50,pauVar74);
              if (cVar40 != '\0') goto LAB_0067d9db;
            }
            if (lVar72 == 0) {
LAB_0067d9a9:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (pauVar74,0x40,&PTR_s_src_sys_rs_002110f0);
            }
LAB_0067eac1:
            *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8);
            *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) = pauVar50;
LAB_0067d9db:
            <std[c60ef17cbf7de79f]::path::Path>::_join(&local_498,param_1,param_2,"links",5);
            pauVar50 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
            generic::util::map_dir(&local_510,pauVar50,pauStack_488);
            pauVar74 = local_508;
            if (local_510 == (undefined1 (*) [16])0xffffffffffffffff) {
              core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::string::String>
                        (CONCAT44(local_498._4_4_,(undefined4)local_498),pauVar50);
              pauVar45 = local_740;
              goto LAB_0067db70;
            }
            local_150 = local_510;
            local_228 = local_508;
            local_148 = local_508;
            local_230 = local_500;
            local_140 = local_500;
            uVar68 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            if (uVar68 != 0) {
              if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar50 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= pauVar50)) {
                free(pauVar50);
              }
              else {
                uVar52 = 0x10;
                if (0x10 < uVar68) {
                  uVar52 = uVar68;
                }
                lVar73 = LZCOUNT(uVar52 - 1);
                lVar72 = 0x40 - lVar73;
                if (0xffff < uVar52 - 1) {
                  cVar40 = sys::big_put(pauVar50,lVar72);
                  if (cVar40 != '\0') goto LAB_0067db03;
                }
                if (lVar73 == 0) goto LAB_0067dae9;
                *(undefined8 *)*pauVar50 = *(undefined8 *)(in_FS_OFFSET + lVar72 * 8 + -0x3c8);
                *(undefined1 (**) [16])(in_FS_OFFSET + lVar72 * 8 + -0x3c8) = pauVar50;
              }
            }
LAB_0067db03:
            pauVar50 = local_6e8;
            pauVar45 = (undefined1 (*) [16])&DAT_00000001;
            if (local_6e8 != (undefined1 (*) [16])0x0) {
              pauVar45 = local_6b0;
            }
            auVar94 = generic::parse::manifest::_closure_0_
                                (pauVar45,local_6e8,"\"window_start\"",0xe);
            pauVar74 = auVar94._8_8_;
            if ((auVar94._0_8_ & 1) != 0) goto LAB_0067db5e;
            local_4a0 = pauVar74;
            auVar94 = generic::parse::manifest::_closure_0_(pauVar45,pauVar50,"\"window_end\"",0xc);
            pauVar74 = auVar94._8_8_;
            if ((auVar94._0_8_ & 1) != 0) goto LAB_0067db5e;
            local_1f0 = local_4a0;
            local_680 = (undefined1 (*) [16])0x0;
            local_678 = (undefined1 (*) [16])&DAT_00000008;
            local_670 = (undefined1 (*) [16])0x0;
            local_510 = (undefined1 (*) [16])&DAT_00000001;
            if (local_6f0 != (undefined1 (*) [16])0x0) {
              local_510 = local_740;
            }
            local_508 = local_6f0;
            local_238 = pauVar74;
            local_1e8 = pauVar74;
            generic::parse::chunks(&local_498,&local_510,1);
            plVar61 = (long *)CONCAT71(uStack_48f,uStack_490);
            if (pauStack_488 == (undefined1 (*) [16])0x0) {
              pauVar74 = (undefined1 (*) [16])0x0;
              uVar75 = CONCAT44(local_498._4_4_,(undefined4)local_498);
              pauVar50 = (undefined1 (*) [16])&DAT_00000008;
            }
            else {
              local_718._0_8_ = CONCAT44(local_498._4_4_,(undefined4)local_498);
              local_758 = (undefined1 (*) [16])&DAT_00000008;
              pauVar74 = (undefined1 (*) [16])0x0;
              local_638._0_8_ = plVar61;
              local_538._0_8_ = plVar61 + (long)pauStack_488 * 2;
              do {
                lVar72 = *plVar61;
                local_708._0_8_ = plVar61;
                pauVar50 = (undefined1 (*) [16])plVar61[1];
                local_760 = pauVar50;
                if (pauVar50 < (undefined1 (*) [16])0x40) {
                  pauVar47 = (undefined1 (*) [16])0x0;
                  pauVar62 = (undefined1 (*) [16])0x0;
                }
                else {
                  pauVar45 = (undefined1 (*) [16])&DAT_00000040;
                  pauVar47 = (undefined1 (*) [16])0x0;
                  pauVar62 = (undefined1 (*) [16])0x0;
                  do {
                    if ((ulong)((long)pauVar50 - (long)pauVar62) < 0x40) goto LAB_0067eed7;
                    auVar88 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                    uVar68 = vpcmpeqb_avx512bw(auVar88,*(undefined1 (*) [64])(*pauVar62 + lVar72));
                    local_748 = pauVar45;
                    if (uVar68 != 0) {
                      local_738 = pauVar62;
                      do {
                        uVar52 = 0;
                        for (uVar59 = uVar68; (uVar59 & 1) == 0;
                            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                          uVar52 = uVar52 + 1;
                        }
                        pauVar45 = (undefined1 (*) [16])(uVar52 | (ulong)pauVar62);
                        if (pauVar47 < pauVar45) {
                          if (pauVar50 < pauVar45) {
                    /* WARNING: Subroutine does not return */
                            core[62e902411887be45]::slice::index::slice_index_fail
                                      (pauVar47,pauVar45,pauVar50,
                                       &PTR_s_src_generic_parse_rs_0020ff98);
                          }
                          generic::parse::split::<2usize>(&local_498,*pauVar47 + lVar72);
                          pauVar47 = pauStack_480;
                          lVar73 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                          if (lVar73 != 0) {
                            uVar75 = CONCAT71(uStack_48f,uStack_490);
                            pauVar50 = pauStack_488;
                            if (pauVar74 == local_680) {
                              local_750 = pauStack_488;
                              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>
                              ::grow_one(&local_680);
                              local_758 = local_678;
                              pauVar50 = local_750;
                            }
                            *(long *)local_758[(long)pauVar74 * 2] = lVar73;
                            *(undefined8 *)(local_758[(long)pauVar74 * 2] + 8) = uVar75;
                            *(undefined1 (**) [16])local_758[(long)pauVar74 * 2 + 1] = pauVar50;
                            *(undefined1 (**) [16])(local_758[(long)pauVar74 * 2 + 1] + 8) =
                                 pauVar47;
                            pauVar74 = (undefined1 (*) [16])(*pauVar74 + 1);
                            pauVar50 = local_760;
                            pauVar62 = local_738;
                            local_670 = pauVar74;
                          }
                        }
                        pauVar47 = (undefined1 (*) [16])(*pauVar45 + 1);
                        uVar68 = uVar68 - 1 & uVar68;
                      } while (uVar68 != 0);
                    }
                    pauVar45 = local_748 + 4;
                    pauVar62 = local_748;
                  } while (pauVar45 <= pauVar50);
                }
                if (pauVar62 < pauVar50) {
                  do {
                    pauVar45 = (undefined1 (*) [16])(*pauVar62 + 1);
                    if ((*pauVar62)[lVar72] == '\n') {
                      if (pauVar47 < pauVar62) {
                        generic::parse::split::<2usize>(&local_498);
                        pauVar47 = pauStack_480;
                        pauVar62 = pauStack_488;
                        lVar73 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                        if (lVar73 != 0) {
                          uVar75 = CONCAT71(uStack_48f,uStack_490);
                          if (pauVar74 == local_680) {
                            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>
                            ::grow_one(&local_680);
                            local_758 = local_678;
                          }
                          *(long *)local_758[(long)pauVar74 * 2] = lVar73;
                          *(undefined8 *)(local_758[(long)pauVar74 * 2] + 8) = uVar75;
                          *(undefined1 (**) [16])local_758[(long)pauVar74 * 2 + 1] = pauVar62;
                          *(undefined1 (**) [16])(local_758[(long)pauVar74 * 2 + 1] + 8) = pauVar47;
                          pauVar74 = (undefined1 (*) [16])(*pauVar74 + 1);
                          pauVar50 = local_760;
                          local_670 = pauVar74;
                        }
                      }
                      pauVar47 = pauVar45;
                    }
                    pauVar62 = pauVar45;
                  } while (pauVar50 != pauVar45);
                }
                if (pauVar47 <= pauVar50 && (long)pauVar50 - (long)pauVar47 != 0) {
                  generic::parse::split::<2usize>
                            (&local_498,*pauVar47 + lVar72,(long)pauVar50 - (long)pauVar47);
                  pauVar45 = pauStack_480;
                  pauVar50 = pauStack_488;
                  lVar72 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                  if (lVar72 != 0) {
                    uVar75 = CONCAT71(uStack_48f,uStack_490);
                    if (pauVar74 == local_680) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>
                      ::grow_one(&local_680);
                      local_758 = local_678;
                    }
                    *(long *)local_758[(long)pauVar74 * 2] = lVar72;
                    *(undefined8 *)(local_758[(long)pauVar74 * 2] + 8) = uVar75;
                    *(undefined1 (**) [16])local_758[(long)pauVar74 * 2 + 1] = pauVar50;
                    *(undefined1 (**) [16])(local_758[(long)pauVar74 * 2 + 1] + 8) = pauVar45;
                    pauVar74 = (undefined1 (*) [16])(*pauVar74 + 1);
                    local_670 = pauVar74;
                  }
                }
                plVar61 = (long *)(local_708._0_8_ + 0x10);
              } while (plVar61 != (long *)local_538._0_8_);
              uVar75 = local_718._0_8_;
              plVar61 = (long *)local_638._0_8_;
              pauVar50 = local_678;
            }
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<&[u8]>>(plVar61,uVar75);
            local_620 = pauVar50 + (long)pauVar74 * 2;
            local_5f0 = pauVar74;
            <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<(&[u8],&[u8])>,pipeline[509596c7b52975b2]::generic::run::{closure#2}>>>
            ::from_iter(&local_608,pauVar50);
            uVar68 = local_5f8;
            if (local_5f8 == local_608) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_608);
            }
            *(char **)local_600[uVar68] = "unknown";
            *(undefined8 *)(local_600[uVar68] + 8) = 7;
            local_5f8 = uVar68 + 1;
            local_618 = pauVar50;
            if (1 < local_5f8) {
              if (local_5f8 < 0x15) {
                core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
                <&[u8],<&[u8]as_core[62e902411887be45]::cmp::PartialOrd>::lt>();
              }
              else {
                core[62e902411887be45]::slice::sort::unstable::ipnsort::
                <&[u8],<&[u8]as_core[62e902411887be45]::cmp::PartialOrd>::lt>(local_600,local_5f8);
              }
            }
            <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>::dedup_by::
            <<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>::dedup::_closure_0_>(&local_608);
            uVar68 = local_5f8;
            auVar88._0_8_ =
                 <hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::fallible_with_capacity::
                 <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_5e0,0x18,local_5f8);
            auVar88._8_56_ = extraout_var;
            if (uVar68 != 0) {
              local_758 = local_600 + uVar68;
              pauVar74 = local_600;
              iVar65 = 0;
LAB_0067e50b:
              puVar4 = *(ulong **)*pauVar74;
              pauVar50 = *(undefined1 (**) [16])(*pauVar74 + 8);
              if (pauVar50 < (undefined1 (*) [16])&DAT_00000011) {
                if (pauVar50 < (undefined1 (*) [16])&DAT_00000008) {
                  if (pauVar50 < (undefined1 (*) [16])&DAT_00000004) {
                    if (pauVar50 == (undefined1 (*) [16])0x0) {
                      uVar68 = 0;
                    }
                    else {
                      uVar68 = (ulong)((byte *)((long)puVar4 + -1))[(long)pauVar50] |
                               (ulong)((uint)*(byte *)((long)puVar4 + ((ulong)pauVar50 >> 1)) << 8 |
                                      (uint)(byte)*puVar4 << 0x10);
                    }
                    uVar52 = 0;
                  }
                  else {
                    uVar68 = (ulong)(uint)*puVar4;
                    uVar52 = (ulong)*(uint *)((long)((long)puVar4 + -4) + (long)pauVar50);
                  }
                }
                else {
                  uVar68 = *puVar4;
                  uVar52 = *(ulong *)((long)(puVar4 + -1) + (long)pauVar50);
                }
                uVar68 = uVar68 ^ 0x243f6a8885a308d3;
                uVar52 = (ulong)pauVar50 ^ 0x13198a2e03707344 ^ uVar52;
                goto LAB_0067e690;
              }
              uVar52 = (ulong)pauVar50 ^ 0x452821e638d01377;
              uVar59 = ((ulong)(pauVar50[-2] + 0xf) >> 4) + 1;
              uVar68 = (ulong)((uint)uVar59 & 3);
              if (pauVar50[-2] + 0xf < (undefined1 *)0x30) {
                lVar73 = 0x10;
                lVar72 = 0;
LAB_0067e610:
                do {
                  lVar57 = lVar73;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar52 ^ *(ulong *)((long)puVar4 + lVar72 + 8);
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = *(ulong *)((long)puVar4 + lVar72) ^ 0x243f6a8885a308d3;
                  uVar52 = SUB168(auVar25 * auVar35,8) ^ SUB168(auVar25 * auVar35,0);
                  uVar68 = uVar68 - 1;
                  lVar73 = lVar57 + 0x10;
                  lVar72 = lVar57;
                } while (uVar68 != 0);
              }
              else {
                uVar59 = uVar59 & 0xfffffffffffffffc;
                lVar72 = 0;
                do {
                  lVar73 = lVar72;
                  auVar94._8_8_ = 0;
                  auVar94._0_8_ = uVar52 ^ *(ulong *)((long)puVar4 + lVar73 + 8);
                  auVar31._8_8_ = 0;
                  auVar31._0_8_ = *(ulong *)((long)puVar4 + lVar73) ^ 0x243f6a8885a308d3;
                  auVar81._8_8_ = 0;
                  auVar81._0_8_ =
                       SUB168(auVar94 * auVar31,8) ^ SUB168(auVar94 * auVar31,0) ^
                       *(ulong *)((long)puVar4 + lVar73 + 0x18);
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = *(ulong *)((long)puVar4 + lVar73 + 0x10) ^ 0x243f6a8885a308d3;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ =
                       SUB168(auVar81 * auVar32,8) ^ SUB168(auVar81 * auVar32,0) ^
                       *(ulong *)((long)puVar4 + lVar73 + 0x28);
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = *(ulong *)((long)puVar4 + lVar73 + 0x20) ^ 0x243f6a8885a308d3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ =
                       SUB168(auVar23 * auVar33,8) ^ SUB168(auVar23 * auVar33,0) ^
                       *(ulong *)((long)puVar4 + lVar73 + 0x38);
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = *(ulong *)((long)puVar4 + lVar73 + 0x30) ^ 0x243f6a8885a308d3;
                  uVar52 = SUB168(auVar24 * auVar34,8) ^ SUB168(auVar24 * auVar34,0);
                  lVar72 = lVar73 + 0x40;
                  uVar59 = uVar59 - 4;
                } while (uVar59 != 0);
                if (uVar68 != 0) {
                  lVar73 = lVar73 + 0x50;
                  goto LAB_0067e610;
                }
              }
              uVar68 = *(ulong *)((long)(puVar4 + -2) + (long)pauVar50) ^ 0x13198a2e03707344;
              uVar52 = uVar52 ^ *(ulong *)((long)(puVar4 + -1) + (long)pauVar50) ^
                       0xa4093822299f31d0;
LAB_0067e690:
              auVar26._8_8_ = 0;
              auVar26._0_8_ = (ulong)pauVar50 ^ 0x243f6a8885a308d3;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar52;
              auVar36._8_8_ = 0;
              auVar36._0_8_ = uVar68;
              auVar28._8_8_ = 0;
              auVar28._0_8_ =
                   SUB168(auVar27 * auVar36,0) ^ 0xa4093822299f31d0 ^ SUB168(auVar27 * auVar36,8);
              auVar29._8_8_ = 0;
              auVar29._0_8_ =
                   SUB168(auVar28 * ZEXT816(0x82efa98ec4e6c89),0) ^
                   SUB168(auVar26 * ZEXT816(0x82efa98ec4e6c89),0) ^
                   SUB168(auVar26 * ZEXT816(0x82efa98ec4e6c89),8) ^
                   SUB168(auVar28 * ZEXT816(0x82efa98ec4e6c89),8);
              if (local_5d0._0_8_ == 0) {
                local_738 = pauVar50;
                auVar88._0_8_ =
                     <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(&[u8],u32)>>::reserve_rehash::
                     <hashbrown[ee4ff39ba1229c30]::map::make_hasher<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
                               (&local_5e0,&local_5c0);
                auVar88._8_56_ = extraout_var_01;
                pauVar50 = local_738;
              }
              pauVar74 = pauVar74 + 1;
              uVar68 = SUB168(auVar29 * ZEXT816(0x82efa98ec4e6c89),8) ^
                       SUB168(auVar29 * ZEXT816(0x82efa98ec4e6c89),0);
              pauVar62 = (undefined1 (*) [16])(uVar68 >> 0x39);
              auVar94 = vpbroadcastb_avx512vl();
              auVar80 = ZEXT1664(auVar94);
              lVar73 = 0;
              lVar72 = 0;
              pauVar45 = local_5e0;
              pauVar47 = local_5d8;
              do {
                uVar68 = uVar68 & (ulong)pauVar47;
                auVar94 = *(undefined1 (*) [16])(*pauVar45 + uVar68);
                pauVar46 = (undefined1 (*) [16])vpcmpeqb_avx512vl(auVar94,auVar80._0_16_);
                if ((short)pauVar46 != 0) {
                  local_538._0_8_ = lVar72;
                  local_718._0_8_ = lVar73;
                  local_750 = pauVar47;
                  local_748 = pauVar62;
                  local_708 = auVar80._0_16_;
                  local_638 = auVar94;
                  do {
                    uVar54 = 0;
                    for (uVar42 = (uint)pauVar46; (uVar42 & 1) == 0;
                        uVar42 = uVar42 >> 1 | 0x80000000) {
                      uVar54 = uVar54 + 1;
                    }
                    pauVar69 = (undefined1 (*) [16])(uVar54 + uVar68 & (ulong)local_750);
                    local_760 = pauVar46;
                    if (pauVar50 ==
                        *(undefined1 (**) [16])((long)pauVar45 + (long)pauVar69 * -0x18 + -0x10)) {
                      local_738 = pauVar45;
                      iVar43 = (*(code *)PTR_memcmp_00842098)
                                         (puVar4,*(undefined8 *)
                                                  ((long)pauVar45 + (long)pauVar69 * -0x18 + -0x18),
                                          pauVar50);
                      auVar88._8_56_ = extraout_var_00;
                      auVar88._0_8_ = extraout_XMM0_Qa;
                      pauVar45 = local_738;
                      if (iVar43 == 0) goto LAB_0067e4f4;
                    }
                    iVar43 = (int)local_760 + -1;
                    uVar64 = (ushort)iVar43 & (ushort)local_760;
                    pauVar46 = (undefined1 (*) [16])
                               (ulong)CONCAT22((short)((uint)iVar43 >> 0x10),uVar64);
                    auVar80 = ZEXT1664(local_708);
                    lVar72 = local_538._0_8_;
                    pauVar62 = local_748;
                    pauVar47 = local_750;
                    lVar73 = local_718._0_8_;
                    auVar94 = local_638;
                  } while (uVar64 != 0);
                }
                if (lVar73 == 1) {
LAB_0067e45d:
                  auVar81 = vpcmpeqd_avx(auVar88._0_16_,auVar88._0_16_);
                  auVar88 = ZEXT1664(auVar81);
                  uVar75 = vpcmpeqb_avx512vl(auVar94,auVar81);
                  if ((short)uVar75 != 0) goto LAB_0067e490;
                  lVar73 = 1;
                }
                else {
                  uVar64 = (ushort)(SUB161(auVar94 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar94[0xf] >> 7) << 0xf;
                  if (uVar64 != 0) {
                    uVar54 = 0;
                    for (uVar42 = (uint)uVar64; (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x80000000
                        ) {
                      uVar54 = uVar54 + 1;
                    }
                    local_720 = (undefined1 (*) [16])(uVar54 + uVar68 & (ulong)pauVar47);
                    goto LAB_0067e45d;
                  }
                  lVar73 = 0;
                }
                uVar68 = uVar68 + lVar72 + 0x10;
                lVar72 = lVar72 + 0x10;
              } while( true );
            }
LAB_0067dd29:
            pauVar74 = local_5f0;
            <hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::fallible_with_capacity::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_5a0,0x18,local_5f0);
            if (pauVar74 != (undefined1 (*) [16])0x0) {
              pauVar45 = local_618;
              do {
                local_770 = *(long *)*pauVar45;
                local_738 = *(undefined1 (**) [16])(*pauVar45 + 8);
                local_758 = *(undefined1 (**) [16])pauVar45[1];
                local_760 = *(undefined1 (**) [16])(pauVar45[1] + 8);
                pauVar45 = pauVar45 + 2;
                pauVar47 = (undefined1 (*) [16])
                           <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                           ::hash_one::<&&[u8]>();
                pauVar50 = local_598;
                pauVar74 = local_5a0;
                auVar80._8_56_ = extraout_var_02;
                auVar80._0_8_ = extraout_XMM0_Qa_00;
                auVar94 = vpbroadcastb_avx512vl();
                auVar88 = ZEXT1664(auVar94);
                lVar72 = 0;
                pauVar62 = pauVar47;
                while( true ) {
                  auVar81 = auVar80._0_16_;
                  param_2 = (undefined1 *)((ulong)pauVar62 & (ulong)pauVar50);
                  auVar94 = *(undefined1 (*) [16])(*pauVar74 + (long)param_2);
                  uVar68 = vpcmpeqb_avx512vl(auVar94,auVar88._0_16_);
                  if ((short)uVar68 != 0) {
                    local_538._0_8_ = lVar72;
                    local_748 = pauVar45;
                    local_718 = auVar94;
                    local_708 = auVar88._0_16_;
                    do {
                      uVar54 = 0;
                      for (uVar42 = (uint)uVar68; (uVar42 & 1) == 0;
                          uVar42 = uVar42 >> 1 | 0x80000000) {
                        uVar54 = uVar54 + 1;
                      }
                      if (*(undefined1 (**) [16])
                           ((long)pauVar74 +
                           ((ulong)(param_2 + uVar54) & (ulong)pauVar50) * -0x18 + -0x10) ==
                          local_738) {
                        pauVar45 = (undefined1 (*) [16])
                                   ((long)pauVar74 +
                                   ((ulong)(param_2 + uVar54) & (ulong)pauVar50) * -0x18);
                        iVar65 = (*(code *)PTR_memcmp_00842098)
                                           (*(undefined8 *)(pauVar45[-2] + 8),local_770);
                        auVar80._8_56_ = extraout_var_03;
                        auVar80._0_8_ = extraout_XMM0_Qa_01;
                        if (iVar65 == 0) {
                          local_770 = 0;
                          local_738 = pauVar45;
                          param_1 = local_760;
                          pauVar45 = local_748;
                          goto joined_r0x0067e868;
                        }
                      }
                      auVar81 = auVar80._0_16_;
                      iVar65 = (uint)uVar68 - 1;
                      uVar64 = (ushort)iVar65 & (ushort)uVar68;
                      uVar68 = (ulong)CONCAT22((short)((uint)iVar65 >> 0x10),uVar64);
                      auVar88 = ZEXT1664(local_708);
                      lVar72 = local_538._0_8_;
                      pauVar45 = local_748;
                      auVar94 = local_718;
                    } while (uVar64 != 0);
                  }
                  auVar81 = vpcmpeqd_avx(auVar81,auVar81);
                  auVar80 = ZEXT1664(auVar81);
                  uVar75 = vpcmpeqb_avx512vl(auVar94,auVar81);
                  if ((short)uVar75 != 0) break;
                  pauVar62 = (undefined1 (*) [16])(param_2 + lVar72 + 0x10);
                  lVar72 = lVar72 + 0x10;
                }
                if (local_590._0_8_ == 0) {
                  <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(&[u8],u32)>>::reserve_rehash::
                  <hashbrown[ee4ff39ba1229c30]::map::make_hasher<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
                            (&local_5a0,&local_580);
                  param_1 = local_760;
                  local_750 = pauVar47;
                }
                else {
                  param_1 = local_760;
                  local_750 = pauVar47;
                }
joined_r0x0067e868:
                local_760 = param_1;
                if (local_5d0._8_8_ == 0) goto LAB_0067eaad;
                puVar48 = (undefined1 *)
                          <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                          ::hash_one::<&[u8]>(local_758,param_1);
                pauVar50 = local_5d8;
                pauVar74 = local_5e0;
                auVar76._8_56_ = extraout_var_04;
                auVar76._0_8_ = extraout_XMM0_Qa_02;
                auVar94 = vpbroadcastb_avx512vl();
                auVar88 = ZEXT1664(auVar94);
                lVar72 = 0;
                while( true ) {
                  auVar81 = auVar76._0_16_;
                  pauVar62 = (undefined1 (*) [16])((ulong)puVar48 & (ulong)pauVar50);
                  auVar94 = *(undefined1 (*) [16])(*pauVar62 + (long)*pauVar74);
                  uVar68 = vpcmpeqb_avx512vl(auVar94,auVar88._0_16_);
                  if ((short)uVar68 != 0) break;
LAB_0067e94f:
                  auVar81 = vpcmpeqd_avx(auVar81,auVar81);
                  auVar76 = ZEXT1664(auVar81);
                  uVar75 = vpcmpeqb_avx512vl(auVar94,auVar81);
                  if ((short)uVar75 != 0) goto LAB_0067eaad;
                  puVar48 = pauVar62[1] + lVar72;
                  lVar72 = lVar72 + 0x10;
                }
                local_538._0_8_ = lVar72;
                local_760 = pauVar62;
                local_718 = auVar94;
                local_708 = auVar88._0_16_;
LAB_0067e8f5:
                uVar54 = 0;
                for (uVar42 = (uint)uVar68; (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x80000000) {
                  uVar54 = uVar54 + 1;
                }
                uVar52 = (ulong)(*local_760 + uVar54) & (ulong)pauVar50;
                if (param_1 != *(undefined1 (**) [16])((long)pauVar74 + uVar52 * -0x18 + -0x10))
                goto LAB_0067e928;
                param_2 = (undefined1 *)((long)pauVar74 + uVar52 * -0x18);
                iVar65 = (*(code *)PTR_memcmp_00842098)
                                   (local_758,*(undefined8 *)(param_2 + -0x18),param_1);
                auVar76._8_56_ = extraout_var_05;
                auVar76._0_8_ = extraout_XMM0_Qa_03;
                if (iVar65 != 0) goto LAB_0067e928;
                if (local_770 != 0) {
                  uVar68 = (ulong)local_598 & (ulong)local_750;
                  auVar94 = *(undefined1 (*) [16])(*local_5a0 + uVar68);
                  uVar64 = (ushort)(SUB161(auVar94 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar94[0xf] >> 7) << 0xf;
                  uVar54 = (uint)uVar64;
                  if (uVar64 == 0) {
                    lVar72 = 0x10;
                    do {
                      uVar68 = uVar68 + lVar72 & (ulong)local_598;
                      auVar94 = *(undefined1 (*) [16])(*local_5a0 + uVar68);
                      lVar72 = lVar72 + 0x10;
                      uVar54 = (uint)(ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(auVar94[0xf] >> 7) << 0xf);
                    } while (uVar54 == 0);
                  }
                  uVar42 = 0;
                  for (; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
                    uVar42 = uVar42 + 1;
                  }
                  uVar68 = uVar42 + uVar68 & (ulong)local_598;
                  bVar41 = (*local_5a0)[uVar68];
                  if (-1 < (char)bVar41) {
                    auVar94 = *local_5a0;
                    uVar54 = 0;
                    for (uVar42 = (uint)(ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) |
                                                 (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                                                 (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                                                 (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                                                 (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                                                 (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                                                 (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                                                 (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                                                 (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                                                 (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                                                 (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                                                 (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                                                 (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                                                 (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                                                 (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                                                (ushort)(byte)(auVar94[0xf] >> 7) << 0xf);
                        (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x80000000) {
                      uVar54 = uVar54 + 1;
                    }
                    uVar68 = (ulong)uVar54;
                    bVar41 = (*local_5a0)[uVar68];
                  }
                  uVar3 = *(undefined4 *)(param_2 + -8);
                  bVar58 = (byte)((ulong)local_750 >> 0x39);
                  (*local_5a0)[uVar68] = bVar58;
                  local_5a0[1][uVar68 - 0x10 & (ulong)local_598] = bVar58;
                  *(long *)((long)local_5a0 + uVar68 * -0x18 + -0x18) = local_770;
                  *(undefined1 (**) [16])((long)local_5a0 + uVar68 * -0x18 + -0x10) = local_738;
                  *(undefined4 *)((long)local_5a0 + uVar68 * -0x18 + -8) = uVar3;
                  auVar86._4_4_ = DAT_00206410;
                  auVar86._0_4_ = DAT_00206410;
                  auVar86._8_4_ = DAT_00206410;
                  auVar86._12_4_ = DAT_00206410;
                  auVar87._8_8_ = auVar86._8_8_;
                  auVar87._0_8_ = (ulong)bVar41 & 0xffffffffffffff01;
                  local_590 = vpsubq_avx(local_590,auVar87);
                }
                if (pauVar45 == local_620) break;
              } while( true );
            }
            puVar44 = (undefined4 *)
                      <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      ::get::<[u8]>(&local_5e0,"unknown",7);
            uVar68 = local_728;
            if (puVar44 == (undefined4 *)0x0) {
              core[62e902411887be45]::option::expect_failed
                        ("no entry found for key",0x16,&PTR_s_src_generic_mod_rs_005893e0);
              goto LAB_00680928;
            }
            local_5a8 = *puVar44;
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],&[u8])>>(local_680,local_618);
            local_6e0 = 0;
            local_6d8 = 8;
            local_6d0 = 0;
            local_6c8 = 0;
            local_6c0 = 8;
            local_6b8 = 0;
            <hashbrown[ee4ff39ba1229c30]::raw::RawTableInner>::fallible_with_capacity::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_2d8,0x18,0x400);
            local_d0 = (undefined1 (*) [16])&DAT_00000001;
            if (local_610 != (undefined1 (*) [16])0x0) {
              local_d0 = local_5e8;
            }
            pauStack_c8 = local_610;
            generic::parse::chunks(&local_498,&local_d0,1,0x7fffffffffffffff);
            local_240 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            pauVar74 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
            local_620 = pauVar74;
            if (pauStack_488 != (undefined1 (*) [16])0x0) {
              local_618 = pauVar74 + (long)pauStack_488;
              do {
                lVar72 = *(long *)*pauVar74;
                pauVar50 = *(undefined1 (**) [16])(*pauVar74 + 8);
                local_510 = (undefined1 (*) [16])&local_2d8;
                local_508 = (undefined1 (*) [16])&local_6e0;
                local_500 = (undefined1 (*) [16])&local_6c8;
                local_5f0 = pauVar74;
                if (pauVar50 < (undefined1 (*) [16])0x40) {
                  pauVar45 = (undefined1 (*) [16])0x0;
                  pauVar62 = (undefined1 (*) [16])0x0;
                }
                else {
                  pauVar74 = (undefined1 (*) [16])&DAT_00000040;
                  pauVar45 = (undefined1 (*) [16])0x0;
                  pauVar62 = (undefined1 (*) [16])0x0;
                  local_748 = pauVar50;
                  do {
                    if ((ulong)((long)pauVar50 - (long)pauVar62) < 0x40) {
LAB_0067eed7:
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic
                                ("assertion failed: p.len() >= 64",0x1f,
                                 &PTR_s_src_generic_util_rs_00589980);
                    }
                    auVar88 = vpbroadcastd_avx512f(ZEXT416(DAT_002064e8));
                    uVar68 = vpcmpeqb_avx512bw(auVar88,*(undefined1 (*) [64])(*pauVar62 + lVar72));
                    local_720 = pauVar74;
                    if (uVar68 != 0) {
                      local_738 = pauVar62;
                      do {
                        uVar52 = 0;
                        for (uVar59 = uVar68; (uVar59 & 1) == 0;
                            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                          uVar52 = uVar52 + 1;
                        }
                        pauVar74 = (undefined1 (*) [16])(uVar52 | (ulong)pauVar62);
                        if (pauVar45 < pauVar74) {
                          if (pauVar50 < pauVar74) {
                    /* WARNING: Subroutine does not return */
                            core[62e902411887be45]::slice::index::slice_index_fail
                                      (pauVar45,pauVar74,pauVar50,
                                       &PTR_s_src_generic_parse_rs_0020ff98);
                          }
                          generic::parse::split::<2usize>(&local_498,*pauVar45 + lVar72);
                          lVar73 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                          if (lVar73 != 0) {
                            lVar57 = CONCAT71(uStack_48f,uStack_490);
                            local_758 = pauStack_488;
                            local_760 = pauStack_480;
                            if (local_2c0 != 0) {
                              uVar59 = <core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>as_core[62e902411887be45]::hash::BuildHasher>
                                       ::hash_one::<&[u8]>(lVar73,lVar57);
                              lVar93 = local_2d8;
                              auVar77._8_56_ = extraout_var_07;
                              auVar77._0_8_ = extraout_XMM0_Qa_05;
                              auVar94 = vpbroadcastb_avx512vl();
                              auVar88 = ZEXT1664(auVar94);
                              lVar55 = 0;
                              uVar52 = local_2d0;
                              while( true ) {
                                auVar81 = auVar77._0_16_;
                                uVar59 = uVar59 & uVar52;
                                auVar94 = *(undefined1 (*) [16])(lVar93 + uVar59);
                                pauVar50 = (undefined1 (*) [16])
                                           vpcmpeqb_avx512vl(auVar94,auVar88._0_16_);
                                if ((short)pauVar50 != 0) {
                                  local_708._0_8_ = uVar52;
                                  local_718._0_8_ = lVar55;
                                  local_638 = auVar94;
                                  local_538 = auVar88._0_16_;
                                  do {
                                    uVar54 = 0;
                                    for (uVar42 = (uint)pauVar50; (uVar42 & 1) == 0;
                                        uVar42 = uVar42 >> 1 | 0x80000000) {
                                      uVar54 = uVar54 + 1;
                                    }
                                    uVar52 = uVar54 + uVar59 & uVar52;
                                    local_750 = pauVar50;
                                    if (lVar57 == *(long *)(lVar93 + -0x10 + uVar52 * -0x18)) {
                                      iVar65 = (*(code *)PTR_memcmp_00842098)
                                                         (lVar73,*(undefined8 *)
                                                                  (lVar93 + uVar52 * -0x18 + -0x18),
                                                          lVar57);
                                      auVar77._8_56_ = extraout_var_06;
                                      auVar77._0_8_ = extraout_XMM0_Qa_04;
                                      if (iVar65 == 0) goto LAB_0067ee57;
                                    }
                                    auVar81 = auVar77._0_16_;
                                    iVar65 = (int)local_750 + -1;
                                    uVar64 = (ushort)iVar65 & (ushort)local_750;
                                    pauVar50 = (undefined1 (*) [16])
                                               (ulong)CONCAT22((short)((uint)iVar65 >> 0x10),uVar64)
                                    ;
                                    auVar88 = ZEXT1664(local_538);
                                    lVar55 = local_718._0_8_;
                                    uVar52 = local_708._0_8_;
                                    auVar94 = local_638;
                                  } while (uVar64 != 0);
                                }
                                auVar81 = vpcmpeqd_avx(auVar81,auVar81);
                                auVar77 = ZEXT1664(auVar81);
                                uVar75 = vpcmpeqb_avx512vl(auVar94,auVar81);
                                if ((short)uVar75 != 0) break;
                                uVar59 = uVar59 + lVar55 + 0x10;
                                lVar55 = lVar55 + 0x10;
                              }
                            }
                            <hashbrown[ee4ff39ba1229c30]::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                            ::insert(&local_2d8,lVar73,lVar57,local_6d0 & 0xffffffff);
                            uVar52 = local_6d0;
                            if (local_6d0 == local_6e0) {
                              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one
                                        (&local_6e0);
                            }
                            lVar93 = local_6b8;
                            lVar55 = uVar52 * 0x10;
                            *(long *)(local_6d8 + lVar55) = lVar73;
                            *(long *)(local_6d8 + 8 + lVar55) = lVar57;
                            local_6d0 = uVar52 + 1;
                            if (local_6b8 == local_6c8) {
                              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one
                                        (&local_6c8);
                            }
                            lVar73 = lVar93 * 0x10;
                            *(undefined1 (**) [16])(local_6c0 + lVar73) = local_758;
                            *(undefined1 (**) [16])(local_6c0 + 8 + lVar73) = local_760;
                            local_6b8 = lVar93 + 1;
                          }
LAB_0067ee57:
                          pauVar62 = local_738;
                          pauVar50 = local_748;
                        }
                        pauVar45 = (undefined1 (*) [16])(*pauVar74 + 1);
                        uVar68 = uVar68 - 1 & uVar68;
                      } while (uVar68 != 0);
                    }
                    pauVar74 = local_720 + 4;
                    pauVar62 = local_720;
                    uVar68 = local_728;
                  } while (pauVar74 <= pauVar50);
                }
                if (pauVar62 < pauVar50) {
                  do {
                    pauVar74 = (undefined1 (*) [16])(*pauVar62 + 1);
                    if (((*pauVar62)[lVar72] == '\n') &&
                       (bVar5 = pauVar45 < pauVar62, pauVar45 = pauVar74, bVar5)) {
                      generic::run::_closure_3_(&local_510);
                    }
                    pauVar62 = pauVar74;
                  } while (pauVar50 != pauVar74);
                }
                if (pauVar45 <= pauVar50 && (long)pauVar50 - (long)pauVar45 != 0) {
                  generic::run::_closure_3_
                            (&local_510,*pauVar45 + lVar72,(long)pauVar50 - (long)pauVar45);
                }
                pauVar74 = local_5f0 + 1;
              } while (pauVar74 != local_618);
            }
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<&[u8]>>(local_620,local_240);
            uVar52 = local_6d0;
            local_5a4 = (undefined4)local_6d0;
            if (local_6d0 == local_6e0) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_6e0);
            }
            lVar72 = local_6b8;
            lVar73 = uVar52 * 0x10;
            *(char **)(local_6d8 + lVar73) = "organic";
            *(undefined8 *)(local_6d8 + 8 + lVar73) = 7;
            local_6d0 = uVar52 + 1;
            if (local_6b8 == local_6c8) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(&local_6c8);
            }
            lVar73 = lVar72 * 0x10;
            *(char **)(local_6c0 + lVar73) = "organic";
            *(undefined8 *)(local_6c0 + 8 + lVar73) = 7;
            local_6b8 = lVar72 + 1;
            <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::generic::util::Mapped>,pipeline[509596c7b52975b2]::generic::run::{closure#4}>>>
            ::from_iter(&local_138,local_208,local_208 + (long)local_210);
            <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::generic::util::Mapped>,pipeline[509596c7b52975b2]::generic::run::{closure#4}>>>
            ::from_iter(&local_120,local_218,local_218 + (long)local_220);
            <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<&[u8],core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::generic::util::Mapped>,pipeline[509596c7b52975b2]::generic::run::{closure#4}>>>
            ::from_iter(&local_108,local_228,local_228 + (long)local_230);
            local_718._0_8_ = local_130;
            if (local_128 != 0) {
              if (local_128 < 5) {
                lVar51 = 0;
              }
              else {
                if (local_128 < 0x11) {
                  uVar59 = 0;
                  lVar72 = 0;
                }
                else {
                  uVar52 = 0x10;
                  if ((local_128 & 0xf) != 0) {
                    uVar52 = (ulong)((uint)local_128 & 0xf);
                  }
                  lVar51 = local_128 - uVar52;
                  pauVar49 = (undefined1 (*) [64])(local_130 + 200);
                  lVar72 = 0;
                  lVar93 = 0;
                  lVar82 = 0;
                  lVar83 = 0;
                  auVar88 = ZEXT3264(_DAT_00203b20);
                  lVar73 = 0;
                  lVar55 = 0;
                  lVar89 = 0;
                  lVar90 = 0;
                  auVar80 = ZEXT1664((undefined1  [16])0x0);
                  lVar57 = 0;
                  lVar60 = 0;
                  lVar91 = 0;
                  lVar92 = 0;
                  uVar68 = local_128;
                  do {
                    auVar76 = vpermq_avx512f(auVar88,pauVar49[-3]);
                    auVar77 = vpermq_avx512f(auVar88,pauVar49[-2]);
                    auVar78 = vpermq_avx512f(auVar88,pauVar49[-1]);
                    auVar79 = vpermq_avx512f(auVar88,*pauVar49);
                    lVar72 = auVar76._0_8_ + lVar72;
                    lVar93 = auVar76._8_8_ + lVar93;
                    lVar82 = auVar76._16_8_ + lVar82;
                    lVar83 = auVar76._24_8_ + lVar83;
                    lVar73 = auVar77._0_8_ + lVar73;
                    lVar55 = auVar77._8_8_ + lVar55;
                    lVar89 = auVar77._16_8_ + lVar89;
                    lVar90 = auVar77._24_8_ + lVar90;
                    lVar6 = auVar78._0_8_ + auVar80._0_8_;
                    lVar17 = auVar78._8_8_ + auVar80._8_8_;
                    lVar18 = auVar78._16_8_ + auVar80._16_8_;
                    lVar19 = auVar78._24_8_ + auVar80._24_8_;
                    auVar80 = ZEXT3264(CONCAT824(lVar19,CONCAT816(lVar18,CONCAT88(lVar17,lVar6))));
                    lVar57 = auVar79._0_8_ + lVar57;
                    lVar60 = auVar79._8_8_ + lVar60;
                    lVar91 = auVar79._16_8_ + lVar91;
                    lVar92 = auVar79._24_8_ + lVar92;
                    pauVar49 = pauVar49 + 4;
                    uVar68 = uVar68 - 0x10;
                  } while (uVar52 != uVar68);
                  auVar7._0_8_ = lVar57 + lVar6 + lVar73 + lVar72;
                  auVar7._8_8_ = lVar60 + lVar17 + lVar55 + lVar93;
                  auVar20._16_8_ = lVar91 + lVar18 + lVar89 + lVar82;
                  auVar20._0_16_ = auVar7;
                  auVar20._24_8_ = lVar92 + lVar19 + lVar90 + lVar83;
                  auVar94 = vpaddq_avx(auVar7,auVar20._16_16_);
                  auVar81 = vpshufd_avx(auVar94,0xee);
                  auVar94 = vpaddq_avx(auVar94,auVar81);
                  uVar59 = auVar94._0_8_;
                  lVar72 = lVar51;
                  uVar68 = local_728;
                  if ((uint)uVar52 < 5) goto LAB_0067f01e;
                }
                uVar52 = 4;
                if ((local_128 & 3) != 0) {
                  uVar52 = (ulong)((uint)local_128 & 3);
                }
                lVar51 = local_128 - uVar52;
                auVar88 = ZEXT864(uVar59);
                lVar73 = (uVar52 + lVar72) - local_128;
                pauVar49 = (undefined1 (*) [64])(lVar72 * 0x10 + local_130 + 8);
                do {
                  auVar80 = vpermq_avx512f(ZEXT3264(_DAT_00203b20),*pauVar49);
                  auVar8._0_8_ = auVar80._0_8_ + auVar88._0_8_;
                  auVar8._8_8_ = auVar80._8_8_ + auVar88._8_8_;
                  auVar21._16_8_ = auVar80._16_8_ + auVar88._16_8_;
                  auVar21._0_16_ = auVar8;
                  auVar21._24_8_ = auVar80._24_8_ + auVar88._24_8_;
                  auVar88 = ZEXT3264(auVar21);
                  pauVar49 = pauVar49 + 1;
                  lVar73 = lVar73 + 4;
                } while (lVar73 != 0);
                auVar94 = vpaddq_avx(auVar8,auVar21._16_16_);
                auVar81 = vpshufd_avx(auVar94,0xee);
                vpaddq_avx(auVar94,auVar81);
              }
LAB_0067f01e:
              lVar51 = local_128 - lVar51;
              do {
                lVar51 = lVar51 + -1;
              } while (lVar51 != 0);
            }
            uVar68 = uVar68 * 0x10 + (ulong)(uVar68 * 0x10 == 0);
            generic::parse::chunks(&local_288,local_130,local_128);
            local_638._0_8_ = local_118;
            if (local_110 != 0) {
              if (local_110 < 5) {
                lVar51 = 0;
              }
              else {
                if (local_110 < 0x11) {
                  uVar59 = 0;
                  lVar72 = 0;
                }
                else {
                  uVar52 = 0x10;
                  if ((local_110 & 0xf) != 0) {
                    uVar52 = (ulong)((uint)local_110 & 0xf);
                  }
                  lVar51 = local_110 - uVar52;
                  pauVar49 = (undefined1 (*) [64])(local_118 + 200);
                  lVar72 = 0;
                  lVar93 = 0;
                  lVar82 = 0;
                  lVar83 = 0;
                  auVar88 = ZEXT3264(_DAT_00203b20);
                  lVar73 = 0;
                  lVar55 = 0;
                  lVar89 = 0;
                  lVar90 = 0;
                  auVar80 = ZEXT1664((undefined1  [16])0x0);
                  lVar57 = 0;
                  lVar60 = 0;
                  lVar91 = 0;
                  lVar92 = 0;
                  uVar59 = local_110;
                  do {
                    auVar76 = vpermq_avx512f(auVar88,pauVar49[-3]);
                    auVar77 = vpermq_avx512f(auVar88,pauVar49[-2]);
                    auVar78 = vpermq_avx512f(auVar88,pauVar49[-1]);
                    auVar79 = vpermq_avx512f(auVar88,*pauVar49);
                    lVar72 = auVar76._0_8_ + lVar72;
                    lVar93 = auVar76._8_8_ + lVar93;
                    lVar82 = auVar76._16_8_ + lVar82;
                    lVar83 = auVar76._24_8_ + lVar83;
                    lVar73 = auVar77._0_8_ + lVar73;
                    lVar55 = auVar77._8_8_ + lVar55;
                    lVar89 = auVar77._16_8_ + lVar89;
                    lVar90 = auVar77._24_8_ + lVar90;
                    lVar6 = auVar78._0_8_ + auVar80._0_8_;
                    lVar17 = auVar78._8_8_ + auVar80._8_8_;
                    lVar18 = auVar78._16_8_ + auVar80._16_8_;
                    lVar19 = auVar78._24_8_ + auVar80._24_8_;
                    auVar80 = ZEXT3264(CONCAT824(lVar19,CONCAT816(lVar18,CONCAT88(lVar17,lVar6))));
                    lVar57 = auVar79._0_8_ + lVar57;
                    lVar60 = auVar79._8_8_ + lVar60;
                    lVar91 = auVar79._16_8_ + lVar91;
                    lVar92 = auVar79._24_8_ + lVar92;
                    pauVar49 = pauVar49 + 4;
                    uVar59 = uVar59 - 0x10;
                  } while (uVar52 != uVar59);
                  auVar9._0_8_ = lVar57 + lVar6 + lVar73 + lVar72;
                  auVar9._8_8_ = lVar60 + lVar17 + lVar55 + lVar93;
                  auVar13._16_8_ = lVar91 + lVar18 + lVar89 + lVar82;
                  auVar13._0_16_ = auVar9;
                  auVar13._24_8_ = lVar92 + lVar19 + lVar90 + lVar83;
                  auVar94 = vpaddq_avx(auVar9,auVar13._16_16_);
                  auVar81 = vpshufd_avx(auVar94,0xee);
                  auVar94 = vpaddq_avx(auVar94,auVar81);
                  uVar59 = auVar94._0_8_;
                  lVar72 = lVar51;
                  if ((uint)uVar52 < 5) goto LAB_0067f1ec;
                }
                uVar52 = 4;
                if ((local_110 & 3) != 0) {
                  uVar52 = (ulong)((uint)local_110 & 3);
                }
                lVar51 = local_110 - uVar52;
                auVar88 = ZEXT864(uVar59);
                lVar73 = (uVar52 + lVar72) - local_110;
                pauVar49 = (undefined1 (*) [64])(lVar72 * 0x10 + local_118 + 8);
                do {
                  auVar80 = vpermq_avx512f(ZEXT3264(_DAT_00203b20),*pauVar49);
                  auVar10._0_8_ = auVar80._0_8_ + auVar88._0_8_;
                  auVar10._8_8_ = auVar80._8_8_ + auVar88._8_8_;
                  auVar14._16_8_ = auVar80._16_8_ + auVar88._16_8_;
                  auVar14._0_16_ = auVar10;
                  auVar14._24_8_ = auVar80._24_8_ + auVar88._24_8_;
                  auVar88 = ZEXT3264(auVar14);
                  pauVar49 = pauVar49 + 1;
                  lVar73 = lVar73 + 4;
                } while (lVar73 != 0);
                auVar94 = vpaddq_avx(auVar10,auVar14._16_16_);
                auVar81 = vpshufd_avx(auVar94,0xee);
                vpaddq_avx(auVar94,auVar81);
              }
LAB_0067f1ec:
              lVar51 = local_110 - lVar51;
              do {
                lVar51 = lVar51 + -1;
              } while (lVar51 != 0);
            }
            generic::parse::chunks(&local_1e0,local_118,local_110);
            local_720 = local_100;
            if (local_f8 == 0) {
              uVar59 = 0;
            }
            else {
              if (local_f8 < 5) {
                lVar51 = 0;
                uVar59 = 0;
              }
              else {
                if (local_f8 < 0x11) {
                  uVar59 = 0;
                  lVar72 = 0;
                }
                else {
                  uVar52 = 0x10;
                  if ((local_f8 & 0xf) != 0) {
                    uVar52 = (ulong)((uint)local_f8 & 0xf);
                  }
                  lVar51 = local_f8 - uVar52;
                  pauVar49 = (undefined1 (*) [64])(local_100[0xc] + 8);
                  lVar72 = 0;
                  lVar93 = 0;
                  lVar82 = 0;
                  lVar83 = 0;
                  auVar88 = ZEXT3264(_DAT_00203b20);
                  lVar73 = 0;
                  lVar55 = 0;
                  lVar89 = 0;
                  lVar90 = 0;
                  auVar80 = ZEXT1664((undefined1  [16])0x0);
                  lVar57 = 0;
                  lVar60 = 0;
                  lVar91 = 0;
                  lVar92 = 0;
                  uVar59 = local_f8;
                  do {
                    auVar76 = vpermq_avx512f(auVar88,pauVar49[-3]);
                    auVar77 = vpermq_avx512f(auVar88,pauVar49[-2]);
                    auVar78 = vpermq_avx512f(auVar88,pauVar49[-1]);
                    auVar79 = vpermq_avx512f(auVar88,*pauVar49);
                    lVar72 = auVar76._0_8_ + lVar72;
                    lVar93 = auVar76._8_8_ + lVar93;
                    lVar82 = auVar76._16_8_ + lVar82;
                    lVar83 = auVar76._24_8_ + lVar83;
                    lVar73 = auVar77._0_8_ + lVar73;
                    lVar55 = auVar77._8_8_ + lVar55;
                    lVar89 = auVar77._16_8_ + lVar89;
                    lVar90 = auVar77._24_8_ + lVar90;
                    lVar6 = auVar78._0_8_ + auVar80._0_8_;
                    lVar17 = auVar78._8_8_ + auVar80._8_8_;
                    lVar18 = auVar78._16_8_ + auVar80._16_8_;
                    lVar19 = auVar78._24_8_ + auVar80._24_8_;
                    auVar80 = ZEXT3264(CONCAT824(lVar19,CONCAT816(lVar18,CONCAT88(lVar17,lVar6))));
                    lVar57 = auVar79._0_8_ + lVar57;
                    lVar60 = auVar79._8_8_ + lVar60;
                    lVar91 = auVar79._16_8_ + lVar91;
                    lVar92 = auVar79._24_8_ + lVar92;
                    pauVar49 = pauVar49 + 4;
                    uVar59 = uVar59 - 0x10;
                  } while (uVar52 != uVar59);
                  auVar11._0_8_ = lVar57 + lVar6 + lVar73 + lVar72;
                  auVar11._8_8_ = lVar60 + lVar17 + lVar55 + lVar93;
                  auVar15._16_8_ = lVar91 + lVar18 + lVar89 + lVar82;
                  auVar15._0_16_ = auVar11;
                  auVar15._24_8_ = lVar92 + lVar19 + lVar90 + lVar83;
                  auVar94 = vpaddq_avx(auVar11,auVar15._16_16_);
                  auVar81 = vpshufd_avx(auVar94,0xee);
                  auVar94 = vpaddq_avx(auVar94,auVar81);
                  uVar59 = auVar94._0_8_;
                  lVar72 = lVar51;
                  if ((uint)uVar52 < 5) goto LAB_0067f39e;
                }
                uVar52 = 4;
                if ((local_f8 & 3) != 0) {
                  uVar52 = (ulong)((uint)local_f8 & 3);
                }
                lVar51 = local_f8 - uVar52;
                auVar88 = ZEXT864(uVar59);
                lVar73 = (uVar52 + lVar72) - local_f8;
                pauVar49 = (undefined1 (*) [64])(local_100[lVar72] + 8);
                do {
                  auVar80 = vpermq_avx512f(ZEXT3264(_DAT_00203b20),*pauVar49);
                  auVar12._0_8_ = auVar80._0_8_ + auVar88._0_8_;
                  auVar12._8_8_ = auVar80._8_8_ + auVar88._8_8_;
                  auVar16._16_8_ = auVar80._16_8_ + auVar88._16_8_;
                  auVar16._0_16_ = auVar12;
                  auVar16._24_8_ = auVar80._24_8_ + auVar88._24_8_;
                  auVar88 = ZEXT3264(auVar16);
                  pauVar49 = pauVar49 + 1;
                  lVar73 = lVar73 + 4;
                } while (lVar73 != 0);
                auVar94 = vpaddq_avx(auVar12,auVar16._16_16_);
                auVar81 = vpshufd_avx(auVar94,0xee);
                auVar94 = vpaddq_avx(auVar94,auVar81);
                uVar59 = auVar94._0_8_;
              }
LAB_0067f39e:
              lVar72 = local_f8 - lVar51;
              plVar61 = (long *)(local_100[lVar51] + 8);
              do {
                uVar59 = uVar59 + *plVar61;
                plVar61 = plVar61 + 2;
                lVar72 = lVar72 + -1;
              } while (lVar72 != 0);
            }
            if ((uVar59 | uVar68) >> 0x20 == 0) {
              uVar59 = (uVar59 & 0xffffffff) / (uVar68 & 0xffffffff);
            }
            else {
              uVar59 = uVar59 / uVar68;
            }
            uVar68 = 0x100000;
            if (0x100000 < uVar59) {
              uVar68 = uVar59;
            }
            uVar52 = 0x1000000;
            if (uVar68 < 0x1000000) {
              uVar52 = uVar68;
            }
            generic::parse::chunks(&local_1c8,local_100,local_f8,uVar52);
            generic::run::_closure_0_(&local_2b8,&DAT_00211151,5);
            local_60 = local_4a0;
            local_58 = local_238;
            local_68 = &local_5a0;
            local_50 = local_5a8;
            local_1b0 = local_1b8;
            local_1a8 = local_278;
            <alloc[2a0ada2ddd1fabff]::vec::Vec<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],u64,&[u8],u64)>>>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],u64,&[u8],u64)>>,core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::ops::range::Range<usize>,pipeline[509596c7b52975b2]::generic::run::{closure#7}>>>
            ::from_iter(&local_48,local_1b8);
            local_1a0 = 0;
            local_510 = (undefined1 (*) [16])((ulong)local_510 & 0xffffff0000000000);
            local_508 = (undefined1 (*) [16])0xffffffffffffffff;
            local_498 = (ulong *)&local_1b0;
            uStack_490 = SUB81(&local_1c8,0);
            uStack_48f = (undefined7)((ulong)&local_1c8 >> 8);
            pauStack_480 = (undefined1 (*) [16])&local_1a0;
            local_478 = (undefined1 (*) [16])&local_510;
            ppauStack_470 = &local_1a8;
            plStack_468 = &local_288;
            pppauStack_460 = &local_68;
            local_458._8_8_ = &local_1f0;
            local_458._0_8_ = &local_1e0;
            ppauStack_448 = &local_1e8;
            plStack_440 = &local_2d8;
            pauStack_488 = (undefined1 (*) [16])&local_48;
            generic::util::par_run::
            <pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>
                      (&local_d0,*local_1d0 + (long)(*local_278 + local_1b8),local_728,&local_498);
            pauVar45 = pauStack_c0;
            pauVar74 = pauStack_c8;
            pauVar50 = local_d0;
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P1Bufs>>
                      (&pauStack_b8);
            if (local_510._4_1_ != '\0') {
              local_498._0_4_ = SUB84(local_508,0);
              local_498._4_4_ = (undefined4)((ulong)local_508 >> 0x20);
              uStack_490 = SUB81(local_500,0);
              uStack_48f = (undefined7)((ulong)local_500 >> 8);
              pauStack_488 = pauStack_4f8;
              pauStack_480 = pauStack_4f0;
              local_478 = pauStack_4e8;
              ppauStack_470 = (undefined1 (**) [16])local_4e0;
              plStack_468 = plStack_4d8;
              pppauStack_460 = (undefined1 (***) [16])puStack_4d0;
              local_438 = uStack_4a8;
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::result::unwrap_failed
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_498,
                         &
                         PTR_<std[c60ef17cbf7de79f]::sync::poison::PoisonError<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::generic::core::LinkMap>>>_00211f70
                         ,&PTR_s_src_generic_mod_rs_005893f8);
            }
            if (local_508 == (undefined1 (*) [16])0xffffffffffffffff) {
              generic::core::build_links(&local_d0,8,0);
            }
            else {
              local_d0 = local_508;
              pauStack_c8 = local_500;
              pauStack_c0 = pauStack_4f8;
              pauStack_b8 = pauStack_4f0;
              local_b0 = pauStack_4e8;
              puStack_a8 = local_4e0;
              plStack_a0 = plStack_4d8;
              puStack_98 = puStack_4d0;
              local_90 = uStack_4c8;
              uStack_88 = local_4c0;
              uStack_80 = uStack_4b8;
              uStack_78 = uStack_4b0;
              local_70 = uStack_4a8;
            }
            pauStack_488 = (undefined1 (*) [16])local_38;
            local_498._0_4_ = (undefined4)local_48;
            local_498._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
            uStack_490 = (undefined1)uStack_40;
            uStack_48f = (undefined7)((ulong)uStack_40 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<std[c60ef17cbf7de79f]::sync::poison::mutex::Mutex<alloc[2a0ada2ddd1fabff]::vec::Vec<(&[u8],u64,&[u8],u64)>>>>
                      (&local_498);
            pauVar62 = (undefined1 (*) [16])((long)local_278 * 0x30);
            if ((undefined1 (*) [16])0x2aaaaaaaaaaaaaa < local_278) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0,pauVar62);
            }
            if (pauVar62 == (undefined1 (*) [16])0x0) {
              lVar72 = 8;
              local_278 = (undefined1 (*) [16])0x0;
            }
            else {
              uVar75 = 8;
              lVar72 = __rustc[45371133cddedda4]::__rust_alloc(pauVar62,8);
              if (lVar72 == 0) goto LAB_0067f6d5;
            }
            local_570 = (undefined1 (*) [16])0x0;
            local_580 = local_278;
            lStack_578 = lVar72;
            if ((undefined1 (*) [16])0x555555555555555 < local_1d0) {
              uVar75 = 0;
LAB_0067f6d5:
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(uVar75,pauVar62);
            }
            if (local_1d0 == (undefined1 (*) [16])0x0) {
              lStack_5b8 = 8;
              local_1d0 = (undefined1 (*) [16])0x0;
            }
            else {
              pauVar62 = (undefined1 (*) [16])((long)local_1d0 * 0x18);
              uVar75 = 8;
              lStack_5b8 = __rustc[45371133cddedda4]::__rust_alloc(pauVar62,8);
              if (lStack_5b8 == 0) goto LAB_0067f6d5;
            }
            local_5b0 = (undefined1 (*) [16])0x0;
            lVar72 = (long)pauVar45 * 0x30;
            local_738 = pauVar74 + (long)pauVar45 * 3;
            local_498._0_4_ = SUB84(pauVar74,0);
            local_498._4_4_ = (undefined4)((ulong)pauVar74 >> 0x20);
            pauStack_488 = pauVar50;
            pauVar50 = pauVar74;
            local_5c0 = local_1d0;
            pauStack_480 = local_738;
            if (pauVar45 != (undefined1 (*) [16])0x0) {
              do {
                pauVar47 = local_570;
                pauVar45 = local_5b0;
                uVar68 = *(ulong *)*pauVar74;
                pauVar50 = pauVar74 + 3;
                if (uVar68 == 0xffffffffffffffff) goto LAB_0067f8f1;
                uVar52 = uVar68 ^ 0x8000000000000000;
                if (-1 < (long)uVar68) {
                  uVar52 = 1;
                }
                if (uVar52 != 0) {
                  if (uVar52 == 1) {
                    local_668 = *(undefined1 (**) [16])(*pauVar74 + 8);
                    pauStack_660 = *(undefined1 (**) [16])pauVar74[1];
                    local_658 = *(undefined1 (**) [16])(pauVar74[1] + 8);
                    local_6a8 = *(undefined1 (**) [16])pauVar74[2];
                    pauStack_6a0 = *(undefined1 (**) [16])(pauVar74[2] + 8);
                    if (local_570 == local_580) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
                      ::grow_one(&local_580);
                    }
                    lVar73 = (long)pauVar47 * 0x30;
                    *(ulong *)(lStack_578 + lVar73) = uVar68;
                    *(undefined1 (**) [16])(lStack_578 + 0x18 + lVar73) = local_658;
                    puVar2 = (undefined8 *)(lStack_578 + 8 + lVar73);
                    *puVar2 = local_668;
                    puVar2[1] = pauStack_660;
                    puVar2 = (undefined8 *)(lStack_578 + 0x20 + lVar73);
                    *puVar2 = local_6a8;
                    puVar2[1] = pauStack_6a0;
                    pauVar62 = (undefined1 (*) [16])(*pauVar47 + 1);
                    local_570 = pauVar62;
                  }
                  else {
                    local_658 = *(undefined1 (**) [16])(pauVar74[1] + 8);
                    local_668 = *(undefined1 (**) [16])(*pauVar74 + 8);
                    pauStack_660 = *(undefined1 (**) [16])pauVar74[1];
                    if (local_5b0 == local_5c0) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(&local_5c0)
                      ;
                    }
                    *(undefined1 (**) [16])(lStack_5b8 + 0x10 + (long)pauVar45 * 0x18) = local_658;
                    puVar2 = (undefined8 *)(lStack_5b8 + (long)pauVar45 * 0x18);
                    *puVar2 = local_668;
                    puVar2[1] = pauStack_660;
                    pauVar62 = (undefined1 (*) [16])(*pauVar45 + 1);
                    local_5b0 = pauVar62;
                  }
                }
                lVar72 = lVar72 + -0x30;
                pauVar74 = pauVar74 + 3;
              } while (lVar72 != 0);
              pauVar50 = local_738;
            }
LAB_0067f8f1:
            uStack_490 = SUB81(pauVar50,0);
            uStack_48f = (undefined7)((ulong)pauVar50 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P1>>
                      (&local_498);
            generic::run::_closure_0_(&local_2b8,"parse+links",0xb);
            pauVar50 = local_5b0;
            local_668 = (undefined1 (*) [16])&local_580;
            pauStack_660 = (undefined1 (*) [16])&local_d0;
            local_658 = (undefined1 (*) [16])&local_5c0;
            generic::util::par_run::
            <pipeline[509596c7b52975b2]::generic::P2Bufs,pipeline[509596c7b52975b2]::generic::P2,<pipeline[509596c7b52975b2]::generic::P2Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_10_>
                      (&local_498,local_5b0 + 0x10,local_728,&local_668);
            pauVar45 = pauStack_488;
            uVar75 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            pauVar74 = (undefined1 (*) [16])CONCAT71(uStack_48f,uStack_490);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::P2Bufs>>
                      (&pauStack_480);
            pauStack_488 = local_570;
            local_498._0_4_ = SUB84(local_580,0);
            local_498._4_4_ = (undefined4)((ulong)local_580 >> 0x20);
            uStack_490 = (undefined1)lStack_578;
            uStack_48f = (undefined7)((ulong)lStack_578 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ev>>>
                      (&local_498);
            pauStack_488 = local_5b0;
            local_498._0_4_ = SUB84(local_5c0,0);
            local_498._4_4_ = (undefined4)((ulong)local_5c0 >> 0x20);
            uStack_490 = (undefined1)lStack_5b8;
            uStack_48f = (undefined7)((ulong)lStack_5b8 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Ck0>>>
                      (&local_498);
            local_438 = local_70;
            auVar38._8_8_ = uStack_88;
            auVar38._0_8_ = local_90;
            ppauStack_448 = (undefined1 (**) [16])uStack_80;
            local_458 = auVar38;
            plStack_440 = (long *)uStack_78;
            local_478 = local_b0;
            ppauStack_470 = (undefined1 (**) [16])puStack_a8;
            plStack_468 = plStack_a0;
            pppauStack_460 = (undefined1 (***) [16])puStack_98;
            local_498._0_4_ = SUB84(local_d0,0);
            local_498._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
            uStack_490 = SUB81(pauStack_c8,0);
            uStack_48f = (undefined7)((ulong)pauStack_c8 >> 8);
            pauStack_488 = pauStack_c0;
            pauStack_480 = pauStack_b8;
            auVar88 = ZEXT1664(auVar38);
            core[62e902411887be45]::ptr::drop_glue::
            <pipeline[509596c7b52975b2]::generic::core::LinkMap>(&local_498);
            lStack_560 = __rustc[45371133cddedda4]::__rust_alloc(0x3000,8);
            if (lStack_560 == 0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x3000);
            }
            local_568 = 0x100;
            local_558 = 0;
            if ((undefined1 (*) [16])0x2aaaaaaaaaaaaaa < pauVar50) {
              uVar71 = 0;
LAB_0067faa8:
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(uVar71,pauVar62);
            }
            if (pauVar50 == (undefined1 (*) [16])0x0) {
              lStack_548 = 8;
              pauVar50 = (undefined1 (*) [16])0x0;
            }
            else {
              pauVar62 = (undefined1 (*) [16])((long)pauVar50 * 0x30);
              uVar71 = 8;
              lStack_548 = __rustc[45371133cddedda4]::__rust_alloc(pauVar62,8);
              if (lStack_548 == 0) goto LAB_0067faa8;
            }
            auVar94 = auVar88._0_16_;
            local_540 = (undefined1 (*) [16])0x0;
            lVar72 = (long)pauVar45 * 0x38;
            pauVar62 = (undefined1 (*) [16])((long)pauVar74 + lVar72);
            local_668 = pauVar74;
            local_658 = (undefined1 (*) [16])uVar75;
            local_650 = pauVar62;
            local_550 = pauVar50;
            if (pauVar45 != (undefined1 (*) [16])0x0) {
              pauVar74 = (undefined1 (*) [16])(pauVar74[3] + 8);
              do {
                while( true ) {
                  pauVar50 = local_540;
                  lVar73 = local_558;
                  auVar94 = auVar88._0_16_;
                  if (*(long *)(pauVar74[-4] + 8) == 0) break;
                  if (*(long *)(pauVar74[-4] + 8) == 2) goto LAB_0067fc9b;
                  uVar75 = *(undefined8 *)pauVar74[-3];
                  pauStack_488 = *(undefined1 (**) [16])pauVar74[-2];
                  pauStack_480 = *(undefined1 (**) [16])(pauVar74[-2] + 8);
                  local_478 = *(undefined1 (**) [16])pauVar74[-1];
                  ppauStack_470 = *(undefined1 (***) [16])(pauVar74[-1] + 8);
                  local_498._0_4_ = (undefined4)uVar75;
                  local_498._4_4_ = (undefined4)((ulong)uVar75 >> 0x20);
                  uStack_490 = (undefined1)*(undefined8 *)(pauVar74[-3] + 8);
                  uStack_48f = (undefined7)((ulong)*(undefined8 *)(pauVar74[-3] + 8) >> 8);
                  if (local_540 == local_550) {
                    auVar88 = ZEXT1664(auVar94);
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
                    ::grow_one(&local_550);
                  }
                  auVar94 = auVar88._0_16_;
                  lVar73 = (long)pauVar50 * 0x30;
                  puVar2 = (undefined8 *)(lStack_548 + 0x10 + lVar73);
                  *puVar2 = pauStack_488;
                  puVar2[1] = pauStack_480;
                  puVar2[2] = local_478;
                  puVar2[3] = ppauStack_470;
                  puVar2 = (undefined8 *)(lStack_548 + lVar73);
                  *puVar2 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                  puVar2[1] = CONCAT71(uStack_48f,uStack_490);
                  puVar2[2] = pauStack_488;
                  puVar2[3] = pauStack_480;
                  local_540 = (undefined1 (*) [16])(*pauVar50 + 1);
                  pauVar74 = (undefined1 (*) [16])(pauVar74[3] + 8);
                  lVar72 = lVar72 + -0x38;
                  if (lVar72 == 0) goto LAB_0067fc96;
                }
                uVar75 = *(undefined8 *)pauVar74[-3];
                pauStack_488 = *(undefined1 (**) [16])pauVar74[-2];
                pauStack_480 = *(undefined1 (**) [16])(pauVar74[-2] + 8);
                local_478 = *(undefined1 (**) [16])pauVar74[-1];
                ppauStack_470 = *(undefined1 (***) [16])(pauVar74[-1] + 8);
                local_498._0_4_ = (undefined4)uVar75;
                local_498._4_4_ = (undefined4)((ulong)uVar75 >> 0x20);
                uStack_490 = (undefined1)*(undefined8 *)(pauVar74[-3] + 8);
                uStack_48f = (undefined7)((ulong)*(undefined8 *)(pauVar74[-3] + 8) >> 8);
                if (local_558 == local_568) {
                  auVar88 = ZEXT1664(auVar94);
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
                  ::grow_one(&local_568);
                }
                auVar94 = auVar88._0_16_;
                lVar57 = lVar73 * 0x30;
                puVar2 = (undefined8 *)(lStack_560 + 0x10 + lVar57);
                *puVar2 = pauStack_488;
                puVar2[1] = pauStack_480;
                puVar2[2] = local_478;
                puVar2[3] = ppauStack_470;
                puVar2 = (undefined8 *)(lStack_560 + lVar57);
                *puVar2 = CONCAT44(local_498._4_4_,(undefined4)local_498);
                puVar2[1] = CONCAT71(uStack_48f,uStack_490);
                puVar2[2] = pauStack_488;
                puVar2[3] = pauStack_480;
                local_558 = lVar73 + 1;
                pauVar74 = (undefined1 (*) [16])(pauVar74[3] + 8);
                lVar72 = lVar72 + -0x38;
              } while (lVar72 != 0);
LAB_0067fc96:
              pauVar74 = pauVar62;
            }
LAB_0067fc9b:
            auVar88 = ZEXT1664(auVar94);
            pauStack_660 = pauVar74;
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<pipeline[509596c7b52975b2]::generic::P2>>
                      (&local_668);
            generic::run::_closure_0_(&local_2b8,"dedup+route",0xb);
            local_198 = local_5f8;
            local_668 = (undefined1 (*) [16])&local_568;
            pauStack_660 = (undefined1 (*) [16])&local_550;
            local_658 = (undefined1 (*) [16])&local_5a4;
            generic::util::par_run::
            <(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>),alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>,pipeline[509596c7b52975b2]::generic::run::_closure_11_,pipeline[509596c7b52975b2]::generic::run::_closure_12_>
                      (&local_498,local_728,&local_198,&local_668);
            ppauVar39 = ppauStack_470;
            pauVar50 = local_478;
            pauVar74 = pauStack_480;
            local_258 = CONCAT44(local_498._4_4_,(undefined4)local_498);
            uStack_250 = CONCAT71(uStack_48f,uStack_490);
            local_248 = pauStack_488;
            pauStack_488 = (undefined1 (*) [16])local_558;
            local_498._0_4_ = (undefined4)local_568;
            local_498._4_4_ = (undefined4)((ulong)local_568 >> 0x20);
            uStack_490 = (undefined1)lStack_560;
            uStack_48f = (undefined7)((ulong)lStack_560 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Rec>>>
                      (&local_498);
            pauStack_488 = local_540;
            local_498._0_4_ = SUB84(local_550,0);
            local_498._4_4_ = (undefined4)((ulong)local_550 >> 0x20);
            uStack_490 = (undefined1)lStack_548;
            uStack_48f = (undefined7)((ulong)lStack_548 >> 8);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::Parts<pipeline[509596c7b52975b2]::generic::core::Ck>>>
                      (&local_498);
            local_6a8 = (undefined1 (*) [16])PTR_DAT_0020fa68;
            pauStack_6a0 = _UNK_0020fa70;
            lStack_698 = _UNK_0020fa78;
            lStack_690 = _UNK_0020fa80;
            local_758 = pauVar50 + (long)ppauVar39 * 0x1c;
            local_668 = pauVar50;
            pauStack_660 = pauVar50;
            local_658 = pauVar74;
            local_650 = local_758;
            if (ppauVar39 != (undefined1 (**) [16])0x0) {
              do {
                pauVar45 = pauVar50 + 0x1c;
                auVar88 = ZEXT1664(auVar88._0_16_);
                pauStack_660 = pauVar45;
                (*(code *)PTR_memcpy_00841de0)(&local_498,pauVar50,0x1c0);
                auVar94 = auVar88._0_16_;
                if (CONCAT44(local_498._4_4_,(undefined4)local_498) == -1) break;
                pauVar74 = local_2f8;
                lVar72 = local_2e0;
                if (lStack_690 == 0) {
                  pauVar50 = local_2f0;
                  lVar73 = lStack_2e8;
                  if (pauStack_6a0 != (undefined1 (*) [16])0x0) {
                    uVar68 = (long)pauStack_6a0 * 0x28 & 0xfffffffffffffff0;
                    puVar48 = pauStack_6a0[4] + uVar68 + 1;
                    if (puVar48 != (undefined1 *)0x0) {
                      pauVar62 = (undefined1 (*) [16])((long)local_6a8 + (-0x30 - uVar68));
                      local_738 = local_2f0;
                      lStack_730 = lStack_2e8;
                      if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) || (pauVar62 < sys::A_BASE_0)
                          ) || (sys::A_END_0 <= pauVar62)) {
                        free(pauVar62);
                        auVar94 = auVar88._0_16_;
                        pauVar50 = local_738;
                        lVar73 = lStack_730;
                      }
                      else {
                        puVar53 = (undefined1 *)0x10;
                        if ((undefined1 *)0x10 < puVar48) {
                          puVar53 = puVar48;
                        }
                        lVar57 = 0x40 - LZCOUNT(puVar53 + -1);
                        if ((undefined1 *)0x10000 < puVar48) {
                          local_760 = pauVar62;
                          cVar40 = sys::big_put(pauVar62,lVar57);
                          auVar94 = auVar88._0_16_;
                          pauVar62 = local_760;
                          pauVar50 = local_738;
                          lVar73 = lStack_730;
                          if (cVar40 != '\0') goto LAB_006803d0;
                        }
                        *(undefined8 *)*pauVar62 =
                             *(undefined8 *)(in_FS_OFFSET + lVar57 * 8 + -0x3c8);
                        *(undefined1 (**) [16])(in_FS_OFFSET + lVar57 * 8 + -0x3c8) = pauVar62;
                        pauVar50 = local_738;
                        lVar73 = lStack_730;
                      }
                    }
                  }
LAB_006803d0:
                  local_6a8 = pauVar74;
                  pauStack_6a0 = pauVar50;
                  lStack_698 = lVar73;
                  lStack_690 = lVar72;
                }
                else {
                  auVar94 = vpcmpeqd_avx(auVar94,auVar94);
                  auVar88 = ZEXT1664(auVar94);
                  local_738 = local_2f0;
                  if (local_2f0 == (undefined1 (*) [16])0x0) {
                    local_748 = (undefined1 (*) [16])0xfffffffffffffffe;
                  }
                  else {
                    uVar68 = (long)local_2f0 * 0x28 & 0xfffffffffffffff0;
                    puVar53 = local_2f0[4] + uVar68 + 1;
                    local_750 = (undefined1 (*) [16])((long)local_2f8 + (-0x30 - uVar68));
                    puVar48 = (undefined1 *)0x10;
                    if ((undefined1 *)0x10 < puVar53) {
                      puVar48 = puVar53;
                    }
                    local_760 = (undefined1 (*) [16])
                                CONCAT71(local_760._1_7_,puVar53 == (undefined1 *)0x0);
                    local_748 = (undefined1 (*) [16])(puVar48 + -1);
                  }
                  if (local_2e0 != 0) {
                    uVar68 = vpcmpb_avx512vl(auVar94,*local_2f8,1);
                    pauVar74 = local_2f8 + 1;
                    pauVar50 = local_2f8;
                    do {
                      uVar54 = (uint)uVar68;
                      auVar94 = auVar88._0_16_;
                      sVar67 = (short)uVar68;
                      while (sVar67 == 0) {
                        uVar75 = vpcmpb_avx512vl(auVar94,*pauVar74,1);
                        uVar54 = (uint)uVar75;
                        pauVar50 = pauVar50 + -0x28;
                        pauVar74 = pauVar74 + 1;
                        sVar67 = (short)uVar75;
                      }
                      uVar42 = 0;
                      for (uVar22 = uVar54; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
                        uVar42 = uVar42 + 1;
                      }
                      uVar68 = (ulong)(uVar54 - 1 & uVar54);
                      lVar72 = lVar72 + -1;
                      uVar52 = *(ulong *)((long)pauVar50 + (ulong)uVar42 * -0x28 + -0x28);
                      pauVar62 = (undefined1 (*) [16])
                                 ((long)pauVar50 + (ulong)uVar42 * -0x28 + -0x20);
                      lVar73 = *(long *)(*pauVar62 + 8);
                      lVar57 = *(long *)pauVar62[1];
                      lVar93 = *(long *)(pauVar62[1] + 8);
                      auVar30._8_8_ = 0;
                      auVar30._0_8_ = uVar52 ^ 0x243f6a8885a308d3;
                      uVar70 = SUB168(auVar30 * ZEXT816(0x82efa98ec4e6c89),8) ^
                               SUB168(auVar30 * ZEXT816(0x82efa98ec4e6c89),0);
                      auVar81 = vpbroadcastb_avx512vl();
                      lVar55 = 0;
                      uVar59 = uVar70;
                      while( true ) {
                        uVar59 = uVar59 & (ulong)pauStack_6a0;
                        uVar63 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*local_6a8 + uVar59),
                                                   auVar81);
                        if ((short)uVar63 != 0) {
                          do {
                            uVar54 = 0;
                            for (uVar42 = (uint)uVar63; (uVar42 & 1) == 0;
                                uVar42 = uVar42 >> 1 | 0x80000000) {
                              uVar54 = uVar54 + 1;
                            }
                            uVar66 = uVar54 + uVar59 & (ulong)pauStack_6a0;
                            if (*(ulong *)((long)local_6a8 + uVar66 * -0x28 + -0x28) == uVar52) {
                              pauVar1 = (undefined1 (*) [24])
                                        ((long)local_6a8 + uVar66 * -0x28 + -0x20);
                              auVar37 = *pauVar1;
                              *(long *)((long)local_6a8 + uVar66 * -0x28 + -0x20) =
                                   *(long *)*pauVar62 + *(long *)*pauVar1;
                              *(long *)((long)local_6a8 + uVar66 * -0x28 + -0x18) =
                                   lVar73 + *(long *)((long)local_6a8 + uVar66 * -0x28 + -0x18);
                              *(long *)((long)local_6a8 + uVar66 * -0x28 + -0x10) =
                                   lVar57 + auVar37._16_8_;
                              *(long *)((long)local_6a8 + uVar66 * -0x28 + -8) =
                                   lVar93 + *(long *)((long)local_6a8 + uVar66 * -0x28 + -8);
                              goto joined_r0x00680691;
                            }
                            iVar65 = (uint)uVar63 - 1;
                            uVar64 = (ushort)iVar65 & (ushort)uVar63;
                            uVar63 = (ulong)CONCAT22((short)((uint)iVar65 >> 0x10),uVar64);
                          } while (uVar64 != 0);
                        }
                        uVar75 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*local_6a8 + uVar59),
                                                   auVar94);
                        if ((short)uVar75 != 0) break;
                        uVar59 = uVar59 + lVar55 + 0x10;
                        lVar55 = lVar55 + 0x10;
                      }
                      lVar55 = *(long *)*pauVar62;
                      if (lStack_698 == 0) {
                        local_708._0_8_ = lVar72;
                        auVar88 = ZEXT1664(auVar94);
                        local_538 = *pauVar62;
                        lStack_528 = lVar57;
                        lStack_520 = lVar93;
                        <hashbrown[ee4ff39ba1229c30]::raw::RawTable<(u64,[u64;4usize])>>::
                        reserve_rehash::
                        <hashbrown[ee4ff39ba1229c30]::map::make_hasher<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>::_closure_0_>
                                  (&local_6a8,local_688);
                        auVar94 = vpcmpeqd_avx(auVar88._0_16_,auVar88._0_16_);
                        auVar88 = ZEXT1664(auVar94);
                        lVar72 = local_708._0_8_;
                        lVar55 = local_538._0_8_;
                        lVar73 = local_538._8_8_;
                        lVar57 = lStack_528;
                        lVar93 = lStack_520;
                      }
                      auVar94 = auVar88._0_16_;
                      uVar59 = uVar70 & (ulong)pauStack_6a0;
                      auVar81 = *(undefined1 (*) [16])(*local_6a8 + uVar59);
                      uVar64 = (ushort)(SUB161(auVar81 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar81[0xf] >> 7) << 0xf;
                      uVar54 = (uint)uVar64;
                      if (uVar64 == 0) {
                        lVar60 = 0x10;
                        do {
                          uVar59 = uVar59 + lVar60 & (ulong)pauStack_6a0;
                          auVar81 = *(undefined1 (*) [16])(*local_6a8 + uVar59);
                          lVar60 = lVar60 + 0x10;
                          uVar54 = (uint)(ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) |
                                                  (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                                                  (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                                                  (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                                                  (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                                                  (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                                                  (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                                                  (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                                                  (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                                                  (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                                                  (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                                                  (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                                                  (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                                                  (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                                                  (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                                                 (ushort)(byte)(auVar81[0xf] >> 7) << 0xf);
                        } while (uVar54 == 0);
                      }
                      uVar42 = 0;
                      for (; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
                        uVar42 = uVar42 + 1;
                      }
                      uVar59 = uVar42 + uVar59 & (ulong)pauStack_6a0;
                      bVar41 = (*local_6a8)[uVar59];
                      if (-1 < (char)bVar41) {
                        auVar81 = *local_6a8;
                        uVar54 = 0;
                        for (uVar42 = (uint)(ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) |
                                                     (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                                                     (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                                                     (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                                                     (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                                                     (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                                                     (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                                                     (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                                                     (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                                                     (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                                                     (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                                                     (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb
                                                     | (ushort)(SUB161(auVar81 >> 0x67,0) & 1) <<
                                                       0xc | (ushort)(SUB161(auVar81 >> 0x6f,0) & 1)
                                                             << 0xd |
                                                     (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe
                                                    | (ushort)(byte)(auVar81[0xf] >> 7) << 0xf);
                            (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x80000000) {
                          uVar54 = uVar54 + 1;
                        }
                        uVar59 = (ulong)uVar54;
                        bVar41 = (*local_6a8)[uVar59];
                      }
                      bVar58 = (byte)(uVar70 >> 0x39);
                      (*local_6a8)[uVar59] = bVar58;
                      local_6a8[1][uVar59 - 0x10 & (ulong)pauStack_6a0] = bVar58;
                      lStack_698 = lStack_698 - (ulong)(bVar41 & 1);
                      *(ulong *)((long)local_6a8 + uVar59 * -0x28 + -0x28) = uVar52;
                      puVar2 = (undefined8 *)((long)local_6a8 + uVar59 * -0x28 + -0x20);
                      *puVar2 = 0;
                      puVar2[1] = 0;
                      puVar2[2] = 0;
                      puVar2[3] = 0;
                      lStack_690 = lStack_690 + 1;
                      pauVar1 = (undefined1 (*) [24])((long)local_6a8 + uVar59 * -0x28 + -0x20);
                      auVar37 = *pauVar1;
                      *(long *)((long)local_6a8 + uVar59 * -0x28 + -0x20) =
                           lVar55 + *(long *)*pauVar1;
                      *(long *)((long)local_6a8 + uVar59 * -0x28 + -0x18) =
                           lVar73 + *(long *)((long)local_6a8 + uVar59 * -0x28 + -0x18);
                      *(long *)((long)local_6a8 + uVar59 * -0x28 + -0x10) = lVar57 + auVar37._16_8_;
                      *(long *)((long)local_6a8 + uVar59 * -0x28 + -8) =
                           lVar93 + *(long *)((long)local_6a8 + uVar59 * -0x28 + -8);
joined_r0x00680691:
                    } while (lVar72 != 0);
                  }
                  if (local_738 != (undefined1 (*) [16])0x0) {
                    if (((ulong)local_760 & 1) == 0) {
                      if (((sys::A_BASE_0 == (undefined1 (*) [16])0x0) ||
                          (local_750 < sys::A_BASE_0)) || (sys::A_END_0 <= local_750)) {
                        auVar88 = ZEXT1664(auVar94);
                        free(local_750);
                        auVar94 = auVar88._0_16_;
                      }
                      else {
                        lVar72 = LZCOUNT(local_748);
                        pauVar74 = (undefined1 (*) [16])(0x40 - lVar72);
                        if ((undefined1 (*) [16])0xffff < local_748) {
                          auVar88 = ZEXT1664(auVar94);
                          cVar40 = sys::big_put(local_750,pauVar74);
                          auVar94 = auVar88._0_16_;
                          if (cVar40 != '\0') goto LAB_006803e9;
                        }
                        if (lVar72 == 0) goto LAB_0067d9a9;
                        *(undefined8 *)*local_750 =
                             *(undefined8 *)(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8);
                        *(undefined1 (**) [16])(in_FS_OFFSET + (long)pauVar74 * 8 + -0x3c8) =
                             local_750;
                      }
                    }
                  }
                }
LAB_006803e9:
                auVar88 = ZEXT1664(auVar94);
                core[62e902411887be45]::ptr::drop_glue::
                <pipeline[509596c7b52975b2]::generic::core::Scratch>(&local_498);
                core[62e902411887be45]::ptr::drop_glue::
                <pipeline[509596c7b52975b2]::generic::core::ShardBufs>(local_3d8);
                pauVar50 = pauVar45;
              } while (pauVar45 != local_758);
            }
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(pipeline[509596c7b52975b2]::generic::core::Scratch,pipeline[509596c7b52975b2]::generic::core::ShardBufs,std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>)>>
                      (&local_668);
            generic::run::_closure_0_(&local_2b8,&DAT_00201e18,8);
            uVar71 = local_1f8;
            uVar75 = local_200;
            <std[c60ef17cbf7de79f]::path::Path>::_join
                      (&local_2a0,local_200,local_1f8,"user_daily",10);
            <std[c60ef17cbf7de79f]::path::Path>::_join
                      (&local_270,uVar75,uVar71,"campaign_daily",0xe);
            uVar75 = local_298;
            local_498._0_4_ = 0x1ff;
            local_498._4_4_ = CONCAT31(local_498._5_3_,1);
            pauVar74 = (undefined1 (*) [16])
                       <std[c60ef17cbf7de79f]::fs::DirBuilder>::_create
                                 (&local_498,local_298,local_290);
            uVar71 = local_268;
            if (pauVar74 == (undefined1 (*) [16])0x0) {
              local_498._0_4_ = 0x1ff;
              local_498._4_4_ = CONCAT31(local_498._5_3_,1);
              pauVar74 = (undefined1 (*) [16])
                         <std[c60ef17cbf7de79f]::fs::DirBuilder>::_create
                                   (&local_498,local_268,local_260);
              if (pauVar74 == (undefined1 (*) [16])0x0) {
                pauVar74 = (undefined1 (*) [16])generic::clear_parquet(uVar75,local_290);
                if (pauVar74 == (undefined1 (*) [16])0x0) {
                  pauVar74 = (undefined1 (*) [16])generic::clear_parquet(uVar71,local_260);
                  if (pauVar74 == (undefined1 (*) [16])0x0) {
                    local_190 = 0x100;
                    if (local_728 < 0x100) {
                      local_190 = local_728;
                    }
                    local_188 = ((ulong)(ushort)(0x100 / (ushort)local_190) + 1) -
                                (ulong)((short)(0x100 % (uint)(ushort)local_190) == 0);
                    local_498 = &local_190;
                    uStack_490 = SUB81(&local_270,0);
                    uStack_48f = (undefined7)((ulong)&local_270 >> 8);
                    pauStack_488 = (undefined1 (*) [16])&local_6a8;
                    pauStack_480 = (undefined1 (*) [16])&local_6e0;
                    local_478 = (undefined1 (*) [16])&local_6c8;
                    ppauStack_470 = (undefined1 (**) [16])&local_258;
                    plStack_468 = &local_188;
                    pppauStack_460 = (undefined1 (***) [16])&local_2a0;
                    local_458._0_8_ = &local_608;
                    generic::util::par_run::
                    <(),core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>,pipeline[509596c7b52975b2]::generic::run::_closure_13_,pipeline[509596c7b52975b2]::generic::run::_closure_14_>
                              (&local_668,local_190 + 1,local_728,&local_498);
                    pauStack_480 = (undefined1 (*) [16])(*pauStack_660 + (long)local_658 * 8);
                    local_498._0_4_ = SUB84(pauStack_660,0);
                    local_498._4_4_ = (undefined4)((ulong)pauStack_660 >> 0x20);
                    pauStack_488 = local_668;
                    pauVar74 = pauStack_660;
                    if (local_658 != (undefined1 (*) [16])0x0) {
                      lVar72 = (long)local_658 << 3;
                      do {
                        pauVar50 = (undefined1 (*) [16])(*pauVar74 + 8);
                        pauVar74 = *(undefined1 (**) [16])*pauVar74;
                        if (pauVar74 != (undefined1 (*) [16])0x0) {
                          uStack_490 = SUB81(pauVar50,0);
                          uStack_48f = (undefined7)((ulong)pauVar50 >> 8);
                          core[62e902411887be45]::ptr::drop_glue::
                          <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>>>
                                    (&local_498);
                          goto LAB_0068026e;
                        }
                        lVar72 = lVar72 + -8;
                        pauVar74 = pauVar50;
                      } while (lVar72 != 0);
                      pauVar74 = pauStack_480;
                    }
                    uStack_490 = SUB81(pauVar74,0);
                    uStack_48f = (undefined7)((ulong)pauVar74 >> 8);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>>>
                              (&local_498);
                    generic::run::_closure_0_(&local_2b8,&DAT_00211169,5);
                    pauStack_488 = local_248;
                    local_498._0_4_ = (undefined4)local_258;
                    local_498._4_4_ = (undefined4)((ulong)local_258 >> 0x20);
                    uStack_490 = (undefined1)uStack_250;
                    uStack_48f = (undefined7)((ulong)uStack_250 >> 8);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>>>
                              (&local_498);
                    core[62e902411887be45]::ptr::drop_glue::
                    <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                              (local_6a8,pauStack_6a0);
                    generic::run::_closure_0_(&local_2b8,&DAT_00206488,4);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::string::String>(local_270,local_268);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::string::String>(local_2a0,local_298);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_1c8,local_1c0);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_1e0,local_1d8);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_288,local_280);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_108,local_720);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_120,local_638._0_8_);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_138,local_718._0_8_);
                    core[62e902411887be45]::ptr::drop_glue::
                    <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                              (local_2d8,local_2d0);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_6c8,local_6c0);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_6e0,local_6d8);
                    core[62e902411887be45]::ptr::drop_glue::
                    <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                              (local_5a0,local_598);
                    core[62e902411887be45]::ptr::drop_glue::
                    <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                              (local_5e0,local_5d8);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>(local_608,local_600);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                              (&local_150);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                              (&local_168);
                    core[62e902411887be45]::ptr::drop_glue::
                    <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                              ();
                    if (local_610 != (undefined1 (*) [16])0x0) {
LAB_00680928:
                      munmap(local_5e8,(size_t)local_610);
                    }
                    if (local_6f0 != (undefined1 (*) [16])0x0) {
                      munmap(local_740,(size_t)local_6f0);
                    }
                    pauVar45 = local_510;
                    if (local_6e8 != (undefined1 (*) [16])0x0) {
                      munmap(local_6b0,(size_t)local_6e8);
                    /* WARNING: Subroutine does not return */
                      _Exit(0);
                    }
                    goto LAB_0067d345;
                  }
                }
              }
            }
LAB_0068026e:
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::string::String>
                      (local_270,local_268);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::string::String>
                      (local_2a0,local_298);
            core[62e902411887be45]::ptr::drop_glue::
            <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<u64,[u64_4usize],core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      (local_6a8,pauStack_6a0);
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::core::UserRow>>>
                      (&local_258);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_1c8,local_1c0);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_1e0,local_1d8);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_288,local_280);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_108,local_720);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_120,local_638._0_8_);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_138,local_718._0_8_);
            core[62e902411887be45]::ptr::drop_glue::
            <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      (local_2d8,local_2d0);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_6c8,local_6c0);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_6e0,local_6d8);
            core[62e902411887be45]::ptr::drop_glue::
            <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      (local_5a0,local_598);
            core[62e902411887be45]::ptr::drop_glue::
            <std[c60ef17cbf7de79f]::collections::hash::map::HashMap<&[u8],u32,core[62e902411887be45]::hash::BuildHasherDefault<pipeline[509596c7b52975b2]::generic::util::H>>>
                      (local_5e0,local_5d8);
            core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<&[u8]>>
                      (local_608,local_600);
LAB_0067db5e:
            pauVar45 = local_740;
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                      (&local_150);
LAB_0067db70:
            core[62e902411887be45]::ptr::drop_glue::
            <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                      (&local_168);
          }
          core[62e902411887be45]::ptr::drop_glue::
          <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::generic::util::Mapped>>
                    (&local_180);
        }
joined_r0x0067dba0:
        if (local_610 != (undefined1 (*) [16])0x0) {
          munmap(local_5e8,(size_t)local_610);
        }
      }
joined_r0x0067d7e3:
      if (local_6f0 != (undefined1 (*) [16])0x0) {
        munmap(pauVar45,(size_t)local_6f0);
      }
    }
joined_r0x0067d803:
    pauVar45 = local_510;
    if (local_6e8 != (undefined1 (*) [16])0x0) {
      munmap(local_6b0,(size_t)local_6e8);
      pauVar45 = local_510;
    }
  }
joined_r0x0067d063:
  local_510 = pauVar74;
  if (local_510 != (undefined1 (*) [16])0x0) {
    local_498 = &local_510;
    uStack_490 = 0xe0;
    uStack_48f = 0x748e;
    std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020e702,&local_498);
                    /* WARNING: Subroutine does not return */
    _Exit(1);
  }
LAB_0067d345:
  local_510 = pauVar45;
                    /* WARNING: Subroutine does not return */
  _Exit(0);
LAB_0067e490:
  bVar41 = (*local_720)[(long)*pauVar45];
  pauVar69 = local_720;
  if (-1 < (char)bVar41) {
    auVar94 = *pauVar45;
    uVar54 = 0;
    for (uVar42 = (uint)(ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar94[0xf] >> 7) << 0xf); (uVar42 & 1) == 0;
        uVar42 = uVar42 >> 1 | 0x80000000) {
      uVar54 = uVar54 + 1;
    }
    pauVar69 = (undefined1 (*) [16])(ulong)uVar54;
    bVar41 = (*pauVar69)[(long)*pauVar45];
  }
  auVar85._1_7_ = 0;
  auVar85[0] = bVar41 & 1;
  (*pauVar69)[(long)*pauVar45] = (char)pauVar62;
  pauVar45[1][(ulong)(pauVar69 + -1) & (ulong)pauVar47] = (char)pauVar62;
  auVar84._4_4_ = DAT_00206410;
  auVar84._0_4_ = DAT_00206410;
  auVar84._8_4_ = DAT_00206410;
  auVar84._12_4_ = DAT_00206410;
  auVar85._8_8_ = auVar84._8_8_;
  local_5d0 = vpsubq_avx(local_5d0,auVar85);
  auVar88 = ZEXT1664(local_5d0);
  *(ulong **)((long)pauVar45 + (long)pauVar69 * -0x18 + -0x18) = puVar4;
  *(undefined1 (**) [16])((long)pauVar45 + (long)pauVar69 * -0x18 + -0x10) = pauVar50;
LAB_0067e4f4:
  *(int *)((long)pauVar45 + (long)pauVar69 * -0x18 + -8) = iVar65;
  iVar65 = iVar65 + 1;
  if (pauVar74 == local_758) goto LAB_0067dd29;
  goto LAB_0067e50b;
LAB_0067e928:
  auVar81 = auVar76._0_16_;
  iVar65 = (uint)uVar68 - 1;
  uVar64 = (ushort)iVar65 & (ushort)uVar68;
  uVar68 = (ulong)CONCAT22((short)((uint)iVar65 >> 0x10),uVar64);
  auVar88 = ZEXT1664(local_708);
  pauVar62 = local_760;
  lVar72 = local_538._0_8_;
  auVar94 = local_718;
  if (uVar64 == 0) goto LAB_0067e94f;
  goto LAB_0067e8f5;
LAB_0067eaad:
  core[62e902411887be45]::option::expect_failed
            ("no entry found for key",0x16,&PTR_s_src_generic_mod_rs_005893c8);
  goto LAB_0067eac1;
}


// ==== pipeline::dirs @ 00680a40 (1123 bytes)

/* pipeline[509596c7b52975b2]::dirs */

void __rustcall
pipeline[509596c7b52975b2]::dirs(ulong *param_1,long param_2,ulong param_3,long param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  char cVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **__ptr;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  ulong local_1d8;
  undefined **local_1d0;
  ulong local_1c8;
  long local_1c0;
  undefined **local_1b8;
  int local_1b0 [2];
  undefined1 local_1a8;
  undefined1 uStack_1a7;
  undefined1 local_1a6;
  
  if (param_4 + 3U <= param_3) {
    uVar8 = *(ulong *)(param_2 + -0x20 + param_3 * 0x18);
    ppuVar5 = (undefined **)&DAT_00000001;
    uVar10 = 1;
    if (uVar8 != 0) {
      uVar11 = *(undefined8 *)(param_2 + -0x28 + param_3 * 0x18);
      uVar10 = __rustc[45371133cddedda4]::__rust_alloc(uVar8,1);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar8);
      }
      (*(code *)PTR_memcpy_00841de0)(uVar10,uVar11,uVar8);
    }
    param_2 = param_2 + param_3 * 0x18;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar8;
    uVar8 = *(ulong *)(param_2 + -8);
    if (uVar8 != 0) {
      uVar11 = *(undefined8 *)(param_2 + -0x10);
      ppuVar5 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(uVar8,1);
      if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar8);
      }
      (*(code *)PTR_memcpy_00841de0)(ppuVar5,uVar11,uVar8);
    }
    param_1[3] = uVar8;
    goto LAB_00680e2d;
  }
  local_1b0[0] = 0x41544144;
  local_1b0[1] = 0x5249445f;
  local_1a8 = 0;
  uVar11 = vptestmb_avx512vl(ZEXT816(0x5249445f415441),ZEXT816(0x5249445f415441));
  uVar3 = vptestnmb_avx512vl(ZEXT816(0x5249445f415441),ZEXT816(0x5249445f415441));
  auVar1 = vpmovm2d_avx512vl(uVar3);
  auVar2 = vpmovm2d_avx512vl(uVar11);
  auVar1 = vpblendd_avx2(auVar2,auVar1,0x80);
  uVar11 = vpmovd2m_avx512vl(auVar1);
  if ((char)uVar11 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1d8,local_1b0);
    uVar10 = local_1c8;
    ppuVar5 = local_1d0;
    uVar8 = local_1d8;
    __ptr = local_1d0;
    if (local_1d8 == 0xfffffffffffffffe) goto LAB_00680b71;
    if (local_1d8 == 0xffffffffffffffff) goto LAB_00680bbe;
    core[62e902411887be45]::str::converts::from_utf8(local_1b0,local_1d0,local_1c8);
    __ptr = ppuVar5;
    if ((char)local_1b0[0] != '\0') goto LAB_00680bc5;
  }
  else {
    __ptr = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00680b71:
    if ((1 < ((uint)__ptr & 3) - 2) && (((ulong)__ptr & 3) != 0)) {
      (**(code **)((long)__ptr + 0x17))((undefined1 *)((long)__ptr + -1));
    }
LAB_00680bbe:
    uVar8 = 0xffffffffffffffff;
LAB_00680bc5:
    uVar10 = 5;
    ppuVar5 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(5,1);
    if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,5);
    }
    *(undefined1 *)((long)ppuVar5 + 4) = 0x61;
    *(undefined4 *)ppuVar5 = 0x7461642f;
    if (uVar8 - 1 < 0xfffffffffffffffe) {
      if (((sys::A_BASE_0 == (undefined **)0x0) || (__ptr < sys::A_BASE_0)) ||
         (sys::A_END_0 <= __ptr)) {
        free(__ptr);
      }
      else {
        uVar6 = 0x10;
        if (0x10 < uVar8) {
          uVar6 = uVar8;
        }
        lVar9 = LZCOUNT(uVar6 - 1);
        lVar7 = 0x40 - lVar9;
        if ((uVar6 - 1 < 0x10000) || (cVar4 = sys::big_put(__ptr,lVar7), cVar4 == '\0')) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *__ptr = *(undefined **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
          *(undefined ***)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = __ptr;
        }
      }
    }
    uVar8 = 5;
  }
  local_1b0[0] = 0x5054554f;
  local_1b0[1] = 0x445f5455;
  local_1a8 = 0x49;
  uStack_1a7 = 0x52;
  local_1a6 = 0;
  uVar11 = vptestnmb_avx512vl(SUB6416(ZEXT864(0x445f54555054554f),0),
                              SUB6416(ZEXT864(0x445f54555054554f),0));
  local_1b8 = ppuVar5;
  if ((char)uVar11 == '\0') {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1d8,local_1b0);
    if (local_1d8 == 0xfffffffffffffffe) goto LAB_00680d2a;
    if (local_1d8 == 0xffffffffffffffff) goto LAB_00680d43;
    core[62e902411887be45]::str::converts::from_utf8(local_1b0,local_1d0,local_1c8);
    if (local_1b0[0] == 1) goto LAB_00680d4a;
  }
  else {
    local_1d0 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00680d2a:
    if ((1 < ((uint)local_1d0 & 3) - 2) && (((ulong)local_1d0 & 3) != 0)) {
      (**(code **)((long)local_1d0 + 0x17))((undefined1 *)((long)local_1d0 + -1));
    }
LAB_00680d43:
    local_1d8 = 0xffffffffffffffff;
LAB_00680d4a:
    ppuVar5 = (undefined **)__rustc[45371133cddedda4]::__rust_alloc(7,1);
    if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,7);
    }
    *(undefined4 *)((long)ppuVar5 + 3) = 0x74757074;
    *(undefined4 *)ppuVar5 = 0x74756f2f;
    if (local_1d8 - 1 < 0xfffffffffffffffe) {
      if (((sys::A_BASE_0 == (undefined **)0x0) || (local_1d0 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_1d0)) {
        free(local_1d0);
      }
      else {
        uVar6 = 0x10;
        if (0x10 < local_1d8) {
          uVar6 = local_1d8;
        }
        lVar9 = LZCOUNT(uVar6 - 1);
        lVar7 = 0x40 - lVar9;
        if ((uVar6 - 1 < 0x10000) ||
           (local_1c0 = lVar7, cVar4 = sys::big_put(local_1d0,lVar7), lVar7 = local_1c0,
           cVar4 == '\0')) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar7,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *local_1d0 = *(undefined **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
          *(undefined ***)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = local_1d0;
        }
      }
    }
    local_1d8 = 7;
    local_1d0 = ppuVar5;
    local_1c8 = 7;
  }
  *param_1 = uVar8;
  param_1[1] = (ulong)local_1b8;
  param_1[2] = uVar10;
  param_1[3] = local_1d8;
  ppuVar5 = local_1d0;
  uVar8 = local_1c8;
LAB_00680e2d:
  param_1[4] = (ulong)ppuVar5;
  param_1[5] = uVar8;
  return;
}


// ==== pipeline::main @ 00680ec0 (83716 bytes)
// decompile failed: Exception while decompiling 00680ec0: process: timeout

// ==== pipeline::ncpu_env @ 00696180 (682 bytes)

/* pipeline[509596c7b52975b2]::ncpu_env */

ulong __rustcall pipeline[509596c7b52975b2]::ncpu_env(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  
  local_1a8 = 0x5550434e;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  uVar12 = vptestmb_avx512vl(ZEXT416(0x555043),ZEXT416(0x555043));
  uVar2 = vptestnmb_avx512vl(ZEXT416(0x555043),ZEXT416(0x555043));
  auVar13 = vpmovm2d_avx512vl(uVar2);
  auVar1 = vpmovm2d_avx512vl(uVar12);
  auVar13 = vpblendd_avx2(auVar1,auVar13,8);
  uVar12 = vpmovd2m_avx512vl(auVar13);
  if ((~(ushort)uVar12 & 0xf) == 0) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c0,&local_1a8);
    if (local_1c0 == 0xfffffffffffffffe) goto LAB_006961f9;
    if (local_1c0 != 0xffffffffffffffff) {
      core[62e902411887be45]::str::converts::from_utf8(&local_1a8,local_1b8,local_1b0);
      local_1e0 = CONCAT44(uStack_1a4,local_1a8);
      local_1d8 = local_1c0;
      local_1d0 = local_1b8;
      local_1c8 = local_1b0;
      if (local_1e0 == 0) {
        auVar13 = <str>::trim_matches::<<char>::is_whitespace>(local_1b8,local_1b0);
        uVar7 = auVar13._8_8_;
        auVar13._0_8_ = auVar13._0_8_;
        bVar3 = true;
        uVar10 = local_1b0;
        if (uVar7 != 0) {
          if (uVar7 == 1) {
            cVar4 = *auVar13._0_8_;
            if ((cVar4 == '+') || (cVar4 == '-')) goto joined_r0x00696376;
          }
          else {
            cVar4 = *auVar13._0_8_;
          }
          uVar9 = (ulong)(cVar4 == '+');
          if (uVar7 - uVar9 < 0x11) {
            if (uVar7 == uVar9) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              lVar5 = 0;
              do {
                if (9 < (byte)auVar13._0_8_[lVar5 + uVar9] - 0x30) goto joined_r0x00696376;
                uVar10 = (ulong)((byte)auVar13._0_8_[lVar5 + uVar9] - 0x30) + uVar10 * 10;
                lVar5 = lVar5 + 1;
              } while (lVar5 != uVar7 + -uVar9);
            }
LAB_0069640a:
            bVar3 = false;
          }
          else {
            uVar10 = 0;
            lVar5 = 0;
            while( true ) {
              if (lVar5 == uVar7 + -uVar9) goto LAB_0069640a;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar10;
              uVar6 = SUB168(auVar13 * ZEXT816(10),0);
              if (SUB168(auVar13 * ZEXT816(10),8) != 0) break;
              uVar8 = (byte)auVar13._0_8_[lVar5 + uVar9] - 0x30;
              uVar10 = uVar6 + uVar8;
              if ((9 < uVar8) || (lVar5 = lVar5 + 1, CARRY8(uVar6,(ulong)uVar8))) break;
            }
          }
        }
joined_r0x00696376:
        if (local_1c0 != 0) {
          if (((undefined **)(sys::A_BASE_0 + -1) < local_1b8) && (local_1b8 < sys::A_END_0)) {
            uVar7 = 0x10;
            if (0x10 < local_1c0) {
              uVar7 = local_1c0;
            }
            lVar5 = LZCOUNT(uVar7 - 1);
            lVar11 = 0x40 - lVar5;
            if ((uVar7 - 1 < 0x10000) || (cVar4 = sys::big_put(local_1b8,lVar11), cVar4 == '\0')) {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *local_1b8 = *(undefined **)(in_FS_OFFSET + lVar11 * 8 + -0x3c8);
              *(undefined ***)(in_FS_OFFSET + lVar11 * 8 + -0x3c8) = local_1b8;
            }
          }
          else {
            free(local_1b8);
          }
        }
        uVar7 = uVar10;
        if (bVar3) {
          uVar7 = 8;
        }
        if (uVar10 == 0) {
          return 8;
        }
        return uVar7;
      }
      goto LAB_006962a6;
    }
  }
  else {
    local_1b8 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_006961f9:
    if ((1 < ((uint)local_1b8 & 3) - 2) && (((ulong)local_1b8 & 3) != 0)) {
      (**(code **)((long)local_1b8 + 0x17))((long)local_1b8 + -1);
    }
  }
  local_1d8 = 0xffffffffffffffff;
  local_1e0 = 1;
LAB_006962a6:
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_1e0);
  return 8;
}


