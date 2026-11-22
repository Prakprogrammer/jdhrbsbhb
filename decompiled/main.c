// ==== <core::result::Result<alloc::string::String, std::env::VarError>>::map_or::<bool, pipeline::main::{closure#33}> @ 005d2080 (216 bytes)

/* <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,
   std[c60ef17cbf7de79f]::env::VarError>>::map_or::<bool,
   pipeline[509596c7b52975b2]::main::{closure#33}> */

bool __rustcall
<core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
::map_or::<bool,pipeline[509596c7b52975b2]::main::_closure_33_>(char *param_1)

{
  ulong uVar1;
  char *__ptr;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  if (*param_1 == '\0') {
    uVar1 = *(ulong *)(param_1 + 8);
    __ptr = *(char **)(param_1 + 0x10);
    bVar6 = true;
    if (*(long *)(param_1 + 0x18) == 1) {
      bVar6 = *__ptr != '0';
    }
    if (uVar1 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (char *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
      }
      else {
        uVar3 = 0x10;
        if (0x10 < uVar1) {
          uVar3 = uVar1;
        }
        lVar5 = LZCOUNT(uVar3 - 1);
        lVar4 = 0x40 - lVar5;
        if ((0xffff < uVar3 - 1) &&
           (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar4), cVar2 != '\0')) {
          return bVar6;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
        *(char **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  else {
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
              ();
    bVar6 = true;
  }
  return bVar6;
}


// ==== pipeline::main::{closure#1} @ 00652190 (55 bytes)

/* pipeline[509596c7b52975b2]::main::{closure#1} */

void __rustcall pipeline[509596c7b52975b2]::main::_closure_1_(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 *local_10;
  code *local_8;
  
  local_10 = (undefined1 *)&local_18;
  local_8 = <&std[c60ef17cbf7de79f]::panic::PanicHookInfo_as_core[62e902411887be45]::fmt::Display>::
            fmt;
  local_18 = param_2;
  std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020cce4,&local_10);
                    /* WARNING: Subroutine does not return */
  sys::fallback("panic",5);
}


// ==== pipeline::main::{closure#22} @ 006521e0 (6847 bytes)

/* WARNING: Type propagation algorithm not settling */
/* pipeline[509596c7b52975b2]::main::{closure#22} */

void __rustcall pipeline[509596c7b52975b2]::main::_closure_22_(long *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  undefined8 *__ptr_01;
  long lVar8;
  long lVar9;
  long lVar10;
  ssize_t sVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  size_t __len;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long in_FS_OFFSET;
  bool bVar32;
  int local_50c;
  long local_4d8;
  long local_4d0;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  undefined8 *local_4b8;
  undefined1 *local_4b0;
  ulong local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  ulong local_488;
  ulong local_480;
  undefined8 local_478;
  ulong local_470;
  ulong local_468;
  undefined8 local_460;
  uint local_454;
  long local_450;
  long local_448;
  undefined1 (*local_440) [16];
  long local_438;
  undefined8 *local_430;
  undefined8 *local_428;
  long local_420;
  ulong local_418;
  ulong local_410;
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 local_368 [16];
  undefined8 uStack_358;
  undefined1 auStack_350 [16];
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined1 local_2c0 [16];
  undefined8 local_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined1 local_290 [16];
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined1 local_260 [16];
  undefined8 local_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined1 local_218;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  lVar4 = *param_1;
  if (DAT_00843ab0 != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
    initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
              ();
  }
  local_50c = DAT_00843aa0;
  local_78 = ZEXT1232(ZEXT812(0)) << 0x20;
  local_b8 = ZEXT1232(ZEXT812(0)) << 0x20;
  local_98 = local_b8;
  local_58 = local_78;
  if (param_2 - 1 < 0xf) {
    if (!(DAT_00843aa0 == 0 || sys::PINNED[param_2] != '\0')) goto LAB_00652277;
LAB_006522fd:
    local_454 = 0;
    uVar18 = *(ulong *)(lVar4 + 0xa0);
  }
  else {
    if (DAT_00843aa0 == 0) {
      local_50c = 0;
      goto LAB_006522fd;
    }
LAB_00652277:
    if (parse::cpu_order::O._24_4_ != 0) {
      <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::
      initialize::
      <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::_closure_0_>::_closure_0_,_>
                ();
      if (parse::cpu_order::O._16_8_ != 0) goto LAB_00652292;
      goto LAB_006522fd;
    }
    if (parse::cpu_order::O._16_8_ == 0) goto LAB_006522fd;
LAB_00652292:
    lVar26 = syscall(0xcc,0,0x80,local_b8);
    if (lVar26 < 1) goto LAB_006522fd;
    if (parse::cpu_order::O._16_8_ == 0) {
      core[62e902411887be45]::panicking::panic_const::panic_const_rem_by_zero
                (&PTR_s_src_parse_rs_00226340);
LAB_00653ce0:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check();
    }
    if ((param_2 | parse::cpu_order::O._16_8_) >> 0x20 == 0) {
      uVar18 = (param_2 & 0xffffffff) % (parse::cpu_order::O._16_8_ & 0xffffffff);
    }
    else {
      uVar18 = param_2 % (ulong)parse::cpu_order::O._16_8_;
    }
    uVar18 = *(ulong *)(parse::cpu_order::O._8_8_ + uVar18 * 8);
    uStack_3a8 = 0;
    local_3c8 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    local_3e8 = ZEXT832(0);
    local_408 = ZEXT832(0);
    uStack_3c0 = uStack_3a0;
    uStack_3b8 = uStack_398;
    uStack_3b0 = uStack_390;
    uStack_3a8 = local_3c8;
    if (0x3ff < uVar18) goto LAB_00653ce0;
    *(ulong *)(local_408 + (uVar18 >> 6) * 8) =
         *(ulong *)(local_408 + (uVar18 >> 6) * 8) | 1L << (uVar18 & 0x3f);
    lVar26 = syscall(0xcb,0,0x80,local_408);
    local_454 = (uint)(lVar26 == 0);
    uVar18 = *(ulong *)(lVar4 + 0xa0);
  }
  if (uVar18 <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,uVar18,&PTR_s_src_main_rs_00210588);
  }
  if (0x7fffffff < *(ulong *)(lVar4 + 0x1e8)) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("window too long for 12-byte event records",0x29);
  }
  lVar26 = param_2 * 0x7a0 + *(long *)(lVar4 + 0x98);
  if (parse::PARTS_READY_0 == '\0') {
    <pipeline[509596c7b52975b2]::parse::EvPart>::build
              (local_408,lVar4 + 0x280,*(undefined8 *)(lVar4 + 0x270));
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart>(lVar26);
    (*(code *)PTR_memcpy_00841de0)(lVar26,local_408,0x140);
    <pipeline[509596c7b52975b2]::parse::Part>::build
              (local_408,lVar4 + 0x298,*(undefined8 *)(lVar4 + 0x278));
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part>
              (lVar26 + 0x140);
    *(undefined8 *)(lVar26 + 0x210) = auStack_338._0_8_;
    *(undefined8 *)(lVar26 + 0x218) = auStack_338._8_8_;
    *(undefined8 *)(lVar26 + 0x220) = uStack_328;
    *(undefined8 *)(lVar26 + 0x228) = auStack_320._0_8_;
    *(undefined8 *)(lVar26 + 0x200) = auStack_350._8_8_;
    *(undefined8 *)(lVar26 + 0x208) = uStack_340;
    *(undefined8 *)(lVar26 + 0x210) = auStack_338._0_8_;
    *(undefined8 *)(lVar26 + 0x218) = auStack_338._8_8_;
    *(undefined8 *)(lVar26 + 0x1e0) = local_368._0_8_;
    *(undefined8 *)(lVar26 + 0x1e8) = local_368._8_8_;
    *(undefined8 *)(lVar26 + 0x1f0) = uStack_358;
    *(undefined8 *)(lVar26 + 0x1f8) = auStack_350._0_8_;
    *(undefined8 *)(lVar26 + 0x1c0) = local_388;
    *(undefined8 *)(lVar26 + 0x1c8) = auStack_380._0_8_;
    *(undefined8 *)(lVar26 + 0x1d0) = auStack_380._8_8_;
    *(undefined8 *)(lVar26 + 0x1d8) = uStack_370;
    *(undefined8 *)(lVar26 + 0x1a0) = uStack_3a8;
    *(undefined8 *)(lVar26 + 0x1a8) = uStack_3a0;
    *(undefined8 *)(lVar26 + 0x1b0) = uStack_398;
    *(undefined8 *)(lVar26 + 0x1b8) = uStack_390;
    *(undefined8 *)(lVar26 + 0x180) = local_3c8;
    *(undefined8 *)(lVar26 + 0x188) = uStack_3c0;
    *(undefined8 *)(lVar26 + 400) = uStack_3b8;
    *(undefined8 *)(lVar26 + 0x198) = uStack_3b0;
    *(undefined8 *)(lVar26 + 0x160) = local_3e8._0_8_;
    *(undefined8 *)(lVar26 + 0x168) = local_3e8._8_8_;
    *(undefined8 *)(lVar26 + 0x170) = local_3e8._16_8_;
    *(undefined8 *)(lVar26 + 0x178) = local_3e8._24_8_;
    *(undefined8 *)(lVar26 + 0x140) = local_408._0_8_;
    *(undefined8 *)(lVar26 + 0x148) = local_408._8_8_;
    *(undefined8 *)(lVar26 + 0x150) = local_408._16_8_;
    *(undefined8 *)(lVar26 + 0x158) = local_408._24_8_;
  }
  else {
    *(long *)(lVar26 + 0x110) = lVar4 + 0x280;
    *(long *)(lVar26 + 0x208) = lVar4 + 0x298;
  }
  if (parse::CORE_READY_0 == '\0') {
    <pipeline[509596c7b52975b2]::core::Core>::new
              (local_408,*(undefined8 *)(lVar4 + 0x248),*(undefined8 *)(lVar4 + 0x210),
               *(undefined8 *)(lVar4 + 0x268),*(undefined8 *)(lVar4 + 0x208),
               *(undefined4 *)(lVar4 + 0x2f0));
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::core::Core>(lVar26 + 0x3c8)
    ;
    (*(code *)PTR_memcpy_00841de0)(lVar26 + 0x3c8,local_408,0x348);
  }
  __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x1c00,0x200);
  puVar5 = PTR_memset_00841dd0;
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x200,0x1c00);
  }
  (*(code *)PTR_memset_00841dd0)(__ptr,0,0x1c00);
  (*(code *)puVar5)(__ptr + 0x148,0x2c,0x800);
  __ptr[0x14a] = 0;
  __ptr[0x14b] = 0;
  __ptr[0x209] = 0x2c2c2c2c2c2c2d2c;
  __ptr_00 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x1a00,0x200);
  if (__ptr_00 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x200,0x1a00);
  }
  (*(code *)puVar5)(__ptr_00,0,0x1a00);
  (*(code *)puVar5)(__ptr_00 + 0x100,0x2c,0x800);
  __ptr_00[0x102] = 0;
  __ptr_00[0x103] = 0;
  __ptr_00[0x1c1] = 0x2c2c2c2c2c2c2d2c;
  __ptr_01 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0xf00,0x40);
  if (__ptr_01 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(0x40,0xf00);
  }
  (*(code *)PTR_memset_00841dd0)(__ptr_01,0,0xf00);
  if (parse::TABS._72_4_ == 0) {
    if (parse::DRV == 0) goto LAB_0065270a;
LAB_006524da:
    uVar18 = parse::DRV;
LAB_0065272c:
    local_470 = DAT_00843ac8;
    local_448 = DAT_00843ac0;
    if (DAT_00843ac8 == *(ulong *)(lVar4 + 0x70)) {
      uVar21 = DAT_00843ac8;
      lVar8 = sys::anon();
      lVar8 = lVar8 + 0x1000;
      local_460 = CONCAT71((int7)(uVar21 >> 8),1);
      local_478 = 0;
      goto LAB_00652799;
    }
    local_478 = 0;
  }
  else {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::
    initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::_closure_0_>::_closure_0_,_>
              ();
    if (parse::DRV != 0) goto LAB_006524da;
LAB_0065270a:
    local_448 = DAT_00843ac0;
    uVar18 = parse::RD_AUTO_0;
    if (parse::RD_AUTO_0 != 0) goto LAB_0065272c;
    local_470 = DAT_00843ac8;
    local_478 = CONCAT71((int7)((ulong)DAT_00843ac0 >> 8),1);
    uVar18 = 0;
  }
  lVar8 = 0;
  local_460 = 0;
  DAT_00843ac0 = local_448;
  DAT_00843ac8 = local_470;
LAB_00652799:
  local_488 = uVar18;
  if (parse::work_queue::Q._32_4_ != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>
    ::initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<(alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,usize)>>::get_or_init<pipeline[509596c7b52975b2]::parse::work_queue::_closure_0_>::_closure_0_,_>
              ();
  }
  bVar6 = DAT_00843aa8;
  local_410 = parse::work_queue::Q._24_8_;
  local_408._0_16_ = ZEXT816(4) << 0x40;
  auStack_380 = ZEXT816(0);
  local_408._16_16_ = auStack_380;
  local_218 = 0;
  local_3e8._8_16_ = auStack_380;
  local_3e8._0_8_ = 8;
  local_3e8._24_8_ = 8;
  local_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 4;
  uStack_3a0 = 4;
  local_388 = 4;
  uStack_370 = 4;
  uStack_358 = 4;
  uStack_340 = 1;
  uStack_328 = 4;
  local_310 = 8;
  local_2f8 = 8;
  local_2e0 = 8;
  local_2c8 = 8;
  local_2b0 = 4;
  local_298 = 8;
  local_280 = 8;
  local_268 = 4;
  local_250 = 8;
  local_238 = 8;
  local_230 = 0;
  bVar12 = DAT_00843aa8 ^ 1;
  local_440 = (undefined1 (*) [16])(__ptr_01 + 0x106);
  local_428 = __ptr_01 + 400;
  local_430 = __ptr_01 + 0x100;
  local_420 = lVar8 + -1;
  bVar32 = true;
  uStack_3b0 = local_3c8;
  uStack_3a8 = uStack_3c0;
  uStack_398 = local_3c8;
  uStack_390 = uStack_3c0;
  local_368 = auStack_380;
  auStack_350 = auStack_380;
  auStack_338 = auStack_380;
  auStack_320 = auStack_380;
  local_308 = auStack_380;
  local_2f0 = auStack_380;
  local_2d8 = auStack_380;
  local_2c0 = auStack_380;
  local_2a8 = auStack_380;
  local_290 = auStack_380;
  local_278 = auStack_380;
  local_260 = auStack_380;
  local_248 = auStack_380;
  local_228 = auStack_380;
LAB_00652a04:
  do {
    if ((bVar12 & 1) != 0 || bVar32) {
      LOCK();
      puVar1 = (ulong *)(lVar4 + 600);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (!(bool)(bVar32 & local_410 <= uVar18)) goto LAB_00652ab6;
      uVar21 = *(ulong *)(lVar26 + 0x1c8);
      if (uVar21 != 0) {
        uVar19 = *(ulong *)(lVar26 + 0x168);
        lVar30 = 0x40;
        uVar27 = 0;
        uVar23 = uVar21;
        do {
          if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar27,uVar19,&PTR_s_src_parse_rs_00212858);
          }
          uVar13 = *(int *)(*(long *)(lVar26 + 0x160) + uVar27 * 4) + 0xc0;
          uVar28 = (ulong)(byte)uVar13;
          if ((uVar13 & 0xff) != 0) {
            uVar19 = *(ulong *)(lVar26 + 0x180);
            if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar27,uVar19,&PTR_s_src_parse_rs_00212870);
            }
            lVar9 = *(long *)(*(long *)(lVar26 + 0x178) + uVar27 * 8);
            if (((uint)lVar9 & 0xfff) == 0xfc0) {
              lVar9 = <pipeline[509596c7b52975b2]::parse::Part>::new_chunk
                                (lVar26 + 0x140,uVar27,lVar9);
              uVar19 = *(ulong *)(lVar26 + 0x180);
            }
            (*(code *)PTR_memcpy_00841de0)(lVar9,*(long *)(lVar26 + 0x200) + lVar30,uVar28);
            if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar27,uVar19,&PTR_s_src_parse_rs_00212888);
            }
            *(ulong *)(*(long *)(lVar26 + 0x178) + uVar27 * 8) = lVar9 + uVar28;
            uVar19 = *(ulong *)(lVar26 + 0x168);
            if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar27,uVar19,&PTR_s_src_parse_rs_002128a0);
            }
            *(int *)(*(long *)(lVar26 + 0x160) + uVar27 * 4) = (int)lVar30;
            uVar23 = *(ulong *)(lVar26 + 0x1c8);
          }
          if (uVar23 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar27,uVar23,&PTR_s_src_parse_rs_002128b8);
          }
          if (*(long *)(*(long *)(lVar26 + 0x1c0) + uVar27 * 8) == 0) {
            iVar16 = 0;
            uVar28 = *(ulong *)(lVar26 + 0x1b0);
          }
          else {
            if (*(ulong *)(lVar26 + 0x180) <= uVar27) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar27,*(ulong *)(lVar26 + 0x180),&PTR_s_src_parse_rs_002128d0);
            }
            if (*(ulong *)(lVar26 + 0x198) <= uVar27) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar27,*(ulong *)(lVar26 + 0x198),&PTR_s_src_parse_rs_002128e8);
            }
            lVar9 = *(long *)(*(long *)(lVar26 + 0x178) + uVar27 * 8);
            iVar16 = *(int *)(*(long *)(lVar26 + 400) + uVar27 * 4) * 0xfc +
                     (int)(lVar9 - (lVar9 + 0xfffffffffU & 0xffffff000) >> 4) + -0xfc;
            uVar28 = *(ulong *)(lVar26 + 0x1b0);
          }
          if (uVar28 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar27,uVar28,&PTR_s_src_parse_rs_00212900);
          }
          *(int *)(*(long *)(lVar26 + 0x1a8) + uVar27 * 4) = iVar16;
          uVar27 = uVar27 + 1;
          lVar30 = lVar30 + 0x100;
        } while (uVar21 != uVar27);
      }
      if (*(long *)(lVar4 + 0x230) != 0) {
        uVar21 = __ptr_01[0x1d8];
        if (uVar21 != 0) {
          lVar30 = *(long *)(lVar4 + 0x2c8);
          if (uVar21 < 4) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            pauVar22 = local_440;
            do {
              uVar20 = *(undefined8 *)(pauVar22[-3] + 8);
              puVar2 = (undefined8 *)(lVar30 + __ptr_01[uVar19 + 400] * 0x10);
              *puVar2 = *(undefined8 *)pauVar22[-3];
              puVar2[1] = uVar20;
              uVar20 = *(undefined8 *)(pauVar22[-2] + 8);
              puVar2 = (undefined8 *)(lVar30 + __ptr_01[uVar19 + 0x191] * 0x10);
              *puVar2 = *(undefined8 *)pauVar22[-2];
              puVar2[1] = uVar20;
              uVar20 = *(undefined8 *)(pauVar22[-1] + 8);
              puVar2 = (undefined8 *)(lVar30 + __ptr_01[uVar19 + 0x192] * 0x10);
              *puVar2 = *(undefined8 *)pauVar22[-1];
              puVar2[1] = uVar20;
              lVar9 = uVar19 + 0x193;
              uVar19 = uVar19 + 4;
              *(undefined1 (*) [16])(lVar30 + __ptr_01[lVar9] * 0x10) = *pauVar22;
              pauVar22 = pauVar22 + 4;
            } while ((uVar21 & 0xfffffffffffffffc) != uVar19);
            if ((uVar21 & 3) == 0) goto LAB_0065317c;
          }
          uVar23 = 0;
          do {
            *(undefined1 (*) [16])(lVar30 + *(long *)((long)local_428 + uVar23 + uVar19 * 8) * 0x10)
                 = *(undefined1 (*) [16])((long)local_430 + uVar23 * 2 + uVar19 * 0x10);
            uVar23 = uVar23 + 8;
          } while (((uint)uVar21 & 3) << 3 != uVar23);
        }
LAB_0065317c:
        __ptr_01[0x1d8] = 0;
      }
      uVar21 = links::CEND;
      do {
        uVar19 = __ptr_01[0x1d9];
        if ((ulong)__ptr_01[0x1d9] < uVar21) {
          uVar19 = uVar21;
        }
        LOCK();
        bVar32 = uVar21 == links::CEND;
        if (bVar32) {
          links::CEND = uVar19;
        }
        else {
          uVar21 = links::CEND;
        }
        UNLOCK();
      } while (!bVar32);
      LOCK();
      lVar30 = links::US_FIN + 1;
      UNLOCK();
      if (links::US_FIN + 1 == *(long *)(lVar4 + 0x1d8) && bVar12 == 0) {
        links::US_FIN = lVar30;
        links::prelude(lVar4,1);
LAB_006531fc:
        if (parse::HOLD_FREE_0 == '\0') {
          do {
            cVar7 = links::job(lVar4,lVar26,local_408);
          } while (cVar7 != '\0');
          goto LAB_00652ab3;
        }
        if ((ulong)parse::work_queue::Q._16_8_ <= uVar18) {
          <pipeline[509596c7b52975b2]::parse::EvPart>::finish(lVar26);
          goto LAB_00653a15;
        }
      }
      else {
        links::US_FIN = lVar30;
        if (bVar6 != 0) goto LAB_006531fc;
        if ((ulong)parse::work_queue::Q._16_8_ <= uVar18) {
          <pipeline[509596c7b52975b2]::parse::EvPart>::finish(lVar26);
          uVar18 = local_488;
          goto LAB_006538b2;
        }
      }
      bVar32 = false;
      if ((ulong)parse::work_queue::Q._16_8_ <= uVar18) goto LAB_00653cb7;
    }
    else {
      do {
        cVar7 = links::job(lVar4,lVar26,local_408);
      } while (cVar7 != '\0');
      LOCK();
      puVar1 = (ulong *)(lVar4 + 600);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
LAB_00652ab3:
      bVar32 = false;
LAB_00652ab6:
      if ((ulong)parse::work_queue::Q._16_8_ <= uVar18) {
        <pipeline[509596c7b52975b2]::parse::EvPart>::finish(lVar26);
        uVar18 = local_488;
        if (bVar6 != 0) {
LAB_00653a15:
          uVar18 = local_488;
          do {
            do {
              while( true ) {
                do {
                  do {
                    cVar7 = links::job(lVar4,lVar26,local_408);
                  } while (cVar7 != '\0');
                } while (links::READY_0 == '\0');
                if (*(long *)(lVar4 + 0x230) == 0) break;
                if (*(char *)(lVar4 + 0x2f5) == '\x01') {
                  if (DAT_008439d0 == DAT_00843970) {
                    lVar30 = DAT_00843958 * 0xa0;
                    lVar9 = DAT_00843950;
                    do {
                      if (lVar30 == 0) goto LAB_006538b2;
                      plVar31 = (long *)(lVar9 + 0x78);
                      lVar9 = lVar9 + 0xa0;
                      lVar30 = lVar30 + -0xa0;
                    } while (*plVar31 == 0x7f);
                  }
                }
                else if (DAT_00843a40 == DAT_00843a30) {
                  lVar30 = DAT_00843a18 * 0x60;
                  lVar9 = DAT_00843a10;
                  do {
                    if (lVar30 == 0) goto LAB_006538b2;
                    plVar31 = (long *)(lVar9 + 0x38);
                    lVar9 = lVar9 + 0x60;
                    lVar30 = lVar30 + -0x60;
                  } while (*plVar31 == 0x7f);
                }
              }
            } while (DAT_00843880 != DAT_00843840);
            lVar9 = DAT_00843828 * 200;
            lVar30 = DAT_00843820;
            do {
              if (lVar9 == 0) goto LAB_006538b2;
              plVar31 = (long *)(lVar30 + 0xb8);
              lVar30 = lVar30 + 200;
              lVar9 = lVar9 + -200;
            } while (*plVar31 == 0x7f);
          } while( true );
        }
LAB_006538b2:
        if (lVar8 != 0) {
          madvise((void *)(lVar8 + -0x1000),uVar18 + 0x2000,4);
        }
        if (((char)local_454 != '\0') && ((param_2 == 0 || (local_50c == 1)))) {
          syscall(0xcb,0,0x80,local_b8);
        }
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::links::Scratch>
                  (local_408);
        if (((sys::A_BASE_0 == (undefined8 *)0x0) || (__ptr_01 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= __ptr_01)) {
          free(__ptr_01);
        }
        else {
          *__ptr_01 = *(undefined8 *)(in_FS_OFFSET + -0x368);
          *(undefined8 **)(in_FS_OFFSET + -0x368) = __ptr_01;
        }
        if (((sys::A_BASE_0 == (undefined8 *)0x0) || (__ptr_00 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          *__ptr_00 = *(undefined8 *)(in_FS_OFFSET + -0x360);
          *(undefined8 **)(in_FS_OFFSET + -0x360) = __ptr_00;
        }
        if (((sys::A_BASE_0 == (undefined8 *)0x0) || (__ptr < sys::A_BASE_0)) ||
           (sys::A_END_0 <= __ptr)) {
          free(__ptr);
        }
        else {
          *__ptr = *(undefined8 *)(in_FS_OFFSET + -0x360);
          *(undefined8 **)(in_FS_OFFSET + -0x360) = __ptr;
        }
        return;
      }
      if ((ulong)parse::work_queue::Q._16_8_ <= uVar18) {
LAB_00653cb7:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar18,parse::work_queue::Q._16_8_,&PTR_s_src_parse_rs_00226370);
      }
    }
    uVar21 = local_488;
    uVar19 = (ulong)*(uint *)(parse::work_queue::Q._8_8_ + 0x10 + uVar18 * 0x18);
    if (*(ulong *)(lVar4 + 0x70) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar19,*(ulong *)(lVar4 + 0x70),&PTR_s_src_parse_rs_00226388);
    }
    uVar23 = *(ulong *)(parse::work_queue::Q._8_8_ + uVar18 * 0x18);
    uVar27 = *(ulong *)(parse::work_queue::Q._8_8_ + 8 + uVar18 * 0x18);
    plVar31 = (long *)(uVar19 * 0x20 + *(long *)(lVar4 + 0x68));
    if ((char)local_460 != '\0') {
      if (local_470 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar19,local_470,&PTR_s_src_parse_rs_002263a0);
      }
      iVar16 = *(int *)(local_448 + uVar19 * 4);
      if (iVar16 < 0) goto LAB_00652d40;
      uVar19 = plVar31[1];
      local_480 = uVar19;
      if (uVar27 < uVar19) {
        local_480 = uVar27;
      }
      uVar23 = uVar23 - 1;
      if ((char)local_478 == '\0') {
        uVar28 = 0;
        local_468 = uVar19;
        local_418 = uVar27;
        do {
          lVar30 = pread64(iVar16,(void *)(lVar8 + uVar28),uVar21 - uVar28,uVar23 + uVar28);
          if (lVar30 < 1) {
            if (local_468 <= uVar23 + uVar28) goto joined_r0x006530a9;
            goto LAB_00653b8c;
          }
          uVar28 = uVar28 + lVar30;
          uVar19 = local_468;
        } while (uVar28 < uVar21);
joined_r0x0065328b:
        do {
          local_468 = uVar19;
          if (uVar28 != 0) {
            uVar27 = 0;
            do {
              if (*(char *)(lVar8 + uVar27) == '\n') {
                uVar24 = uVar27 + uVar23 + 1;
                if (local_480 <= uVar24) goto joined_r0x006536e3;
                uVar27 = uVar27 + 1;
                local_490 = *plVar31;
                local_450 = local_490 + uVar19;
                cVar7 = (char)plVar31[3];
                lVar30 = 1 - local_480;
                goto LAB_0065337f;
              }
              uVar27 = uVar27 + 1;
            } while (uVar28 != uVar27);
          }
          uVar23 = uVar23 + uVar28;
          if (uVar19 <= uVar23) goto joined_r0x006536e3;
          uVar28 = 0;
          while( true ) {
            lVar30 = pread64(iVar16,(void *)(lVar8 + uVar28),uVar21 - uVar28,uVar23 + uVar28);
            if (lVar30 < 1) break;
            uVar28 = uVar28 + lVar30;
            uVar19 = local_468;
            if (uVar21 <= uVar28) goto joined_r0x0065328b;
          }
          if (uVar23 + uVar28 < local_468) goto LAB_00653b8c;
joined_r0x006530a9:
          uVar19 = local_468;
          if (lVar30 != 0) {
LAB_00653b8c:
                    /* WARNING: Subroutine does not return */
            sys::fallback("pread",5);
          }
        } while( true );
      }
      if (uVar23 < uVar19) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto joined_r0x006536e3;
    }
LAB_00652d40:
    lVar30 = *(long *)(lVar4 + 0x250);
    lVar9 = *plVar31;
    uVar21 = plVar31[1];
    uVar19 = uVar21;
    if (uVar23 == plVar31[2]) {
      if (uVar21 <= uVar27) goto LAB_00652f00;
LAB_00652dd1:
      uVar28 = uVar27 - 1;
      if (uVar21 < uVar28) {
LAB_00653b7f:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar28,uVar21,uVar21,&PTR_s_src_parse_rs_00215230);
      }
      if (uVar28 == uVar21) goto LAB_00652f00;
      lVar10 = 0;
      do {
        if (*(char *)(lVar9 + uVar27 + lVar30 + -1 + lVar10) == '\n') {
          uVar19 = lVar10 + uVar27;
          lVar10 = uVar19 - uVar23;
          if (!(uVar19 < uVar23 || lVar10 == 0)) goto LAB_00652f0c;
          goto LAB_00653080;
        }
        lVar10 = lVar10 + 1;
      } while ((uVar21 - uVar27) + 1 != lVar10);
      lVar10 = uVar21 - uVar23;
      if (!(uVar21 < uVar23 || lVar10 == 0)) goto LAB_00652f0c;
LAB_00653080:
      if (parse::RELEASE_0 != '\0') goto LAB_006537c6;
    }
    else {
      uVar28 = uVar23 - 1;
      if (uVar21 < uVar28) goto LAB_00653b7f;
      uVar24 = uVar21;
      if (uVar28 != uVar21) {
        lVar10 = 0;
        do {
          if (*(char *)(lVar9 + uVar23 + lVar30 + -1 + lVar10) == '\n') {
            uVar24 = lVar10 + uVar23;
            break;
          }
          lVar10 = lVar10 + 1;
        } while ((uVar21 - uVar23) + 1 != lVar10);
      }
      uVar23 = uVar24;
      if (uVar27 < uVar21) goto LAB_00652dd1;
LAB_00652f00:
      lVar10 = uVar21 - uVar23;
      if (!(uVar23 <= uVar21 && lVar10 != 0)) goto LAB_00653080;
LAB_00652f0c:
      if (uVar21 < uVar19) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar23,uVar19,uVar21,&PTR_s_src_parse_rs_002263b8);
      }
      lVar30 = lVar30 + lVar9 + uVar23;
      lVar29 = uVar23 + lVar9;
      local_498 = uVar21 + lVar9;
      local_4b0 = parse::TABS;
      local_4a0 = lVar29;
      if ((char)plVar31[3] == '\0') {
        local_4d8 = lVar4;
        local_4d0 = lVar26;
        local_4c8 = __ptr;
        local_4c0 = __ptr_00;
        local_4b8 = __ptr_01;
        local_4a8 = param_2;
        k_free::run_events::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>(lVar30,lVar10,&local_4d8);
        <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch(&local_4d8);
        <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch();
      }
      else if ((char)plVar31[3] == '\x01') {
        local_4d8 = lVar4;
        local_4d0 = lVar26;
        local_4c8 = __ptr;
        local_4c0 = __ptr_00;
        local_4b8 = __ptr_01;
        local_4a8 = param_2;
        k_free::run_clicks::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>(lVar30,lVar10,&local_4d8);
        <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch(&local_4d8);
        <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch();
      }
      else {
        local_4d8 = lVar4;
        local_4d0 = lVar26;
        local_4c8 = __ptr;
        local_4c0 = __ptr_00;
        local_4b8 = __ptr_01;
        local_4a8 = param_2;
        parse::links_chunk(&local_4d8,lVar30,lVar10);
      }
      if (parse::RELEASE_0 == '\x01') {
        if (DAT_00843ad8 != 0) {
          <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
          <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::_closure_0_>::_closure_0_,_>
                    ();
          if (parse::FR_K < 2) goto LAB_0065302a;
LAB_006529e7:
          uVar17 = parse::work_queue::Q._16_8_;
          uVar20 = parse::work_queue::Q._8_8_;
          goto LAB_006529f5;
        }
        if (1 < parse::FR_K) goto LAB_006529e7;
LAB_0065302a:
        uVar21 = lVar29 + 0xfffU & 0xfffffffffffff000;
        uVar18 = uVar19 + lVar9 & 0xfffffffffffff000;
        __len = uVar18 - uVar21;
        if (uVar21 <= uVar18 && __len != 0) {
          madvise((void *)(uVar21 + *(long *)(lVar4 + 0x250)),__len,4);
        }
      }
    }
  } while( true );
LAB_0065337f:
  do {
    uVar14 = local_480 - uVar23;
    if (uVar14 <= uVar28) {
      uVar15 = uVar14 - 1;
      if (uVar28 < uVar15) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar15,uVar28,uVar28,&PTR_s_src_parse_rs_002264b0);
      }
      if (uVar15 != uVar28) {
        lVar9 = 0;
        do {
          if (*(char *)(uVar15 + lVar8 + lVar9) == '\n') {
            lVar30 = (lVar9 + uVar14) - uVar27;
            uVar14 = lVar9 + uVar14;
            goto joined_r0x00653620;
          }
          lVar9 = lVar9 + 1;
        } while (lVar30 + uVar28 + uVar23 != lVar9);
      }
    }
    if (uVar19 <= uVar23 + uVar28) {
      lVar30 = uVar28 - uVar27;
      uVar14 = uVar28;
joined_r0x00653620:
      if ((uVar14 < uVar27) || (uVar28 < uVar14)) {
LAB_00653bab:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar27,uVar14,uVar28,&PTR_s_src_parse_rs_00226498);
      }
      lVar9 = uVar27 + lVar8;
      if (cVar7 == '\x02') goto LAB_00653814;
      goto joined_r0x006536b1;
    }
    if (uVar28 < uVar27) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar27,uVar28,uVar28,&PTR_s_src_parse_rs_00226480);
    }
    pcVar25 = (char *)(local_420 + uVar28);
    uVar14 = uVar28 - uVar27;
    do {
      uVar15 = uVar14;
      if (uVar15 == 0) {
        uVar21 = uVar19;
        if (uVar19 <= local_418) goto LAB_006536f1;
        uVar21 = local_418 - 1;
        if (uVar19 < uVar21) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar21,uVar19,uVar19,&PTR_s_src_parse_rs_00215230);
        }
        if (uVar21 == uVar19) goto LAB_006536f1;
        lVar30 = 0;
        goto LAB_006535f0;
      }
      cVar3 = *pcVar25;
      pcVar25 = pcVar25 + -1;
      uVar14 = uVar15 - 1;
    } while (cVar3 != '\n');
    uVar14 = uVar15 + uVar27;
    if ((CARRY8(uVar15,uVar27)) || (uVar28 < uVar14)) goto LAB_00653bab;
    local_4a0 = uVar24 + local_490;
    local_4b0 = parse::TABS;
    local_498 = local_490 + uVar19;
    local_438 = lVar30;
    if (cVar7 == '\x02') {
      local_4d8 = lVar4;
      local_4d0 = lVar26;
      local_4c8 = __ptr;
      local_4c0 = __ptr_00;
      local_4b8 = __ptr_01;
      local_4a8 = param_2;
      parse::links_chunk(&local_4d8,lVar8 + uVar27);
    }
    else if (cVar7 == '\x01') {
      local_4d8 = lVar4;
      local_4d0 = lVar26;
      local_4c8 = __ptr;
      local_4c0 = __ptr_00;
      local_4b8 = __ptr_01;
      local_4a8 = param_2;
      k_free::run_clicks::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>();
      <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch(&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch(&local_4d8);
    }
    else {
      local_4d8 = lVar4;
      local_4d0 = lVar26;
      local_4c8 = __ptr;
      local_4c0 = __ptr_00;
      local_4b8 = __ptr_01;
      local_4a8 = param_2;
      k_free::run_events::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>
                (lVar8 + uVar27,uVar15,&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch(&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch(&local_4d8);
    }
    uVar24 = uVar23 + uVar14;
    uVar28 = 0;
    do {
      sVar11 = pread64(iVar16,(void *)(lVar8 + uVar28),uVar21 - uVar28,uVar24 + uVar28);
      if (sVar11 < 1) {
        if ((uVar24 + uVar28 < uVar19) || (sVar11 != 0)) goto LAB_00653b8c;
        break;
      }
      uVar28 = uVar28 + sVar11;
    } while (uVar28 < uVar21);
    uVar27 = 0;
    lVar30 = local_438;
    uVar23 = uVar24;
  } while (uVar24 < local_480);
  goto joined_r0x006536e3;
  while (lVar30 = lVar30 + 1, (uVar19 - local_418) + 1 != lVar30) {
LAB_006535f0:
    if (*(char *)(local_490 + local_418 + *(long *)(lVar4 + 0x250) + -1 + lVar30) == '\n') {
      uVar21 = lVar30 + local_418;
      goto LAB_006536f1;
    }
  }
  uVar21 = uVar19;
LAB_006536f1:
  lVar30 = uVar21 - uVar24;
  if ((uVar21 < uVar24) || (uVar19 < uVar21)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar24,uVar21,uVar19,&PTR_s_src_parse_rs_00226468);
  }
  lVar9 = *(long *)(lVar4 + 0x250) + local_490 + uVar24;
  if (cVar7 == '\x02') {
LAB_00653814:
    local_498 = local_450;
    local_4a0 = uVar24 + local_490;
    local_4b0 = parse::TABS;
    local_4d8 = lVar4;
    local_4d0 = lVar26;
    local_4c8 = __ptr;
    local_4c0 = __ptr_00;
    local_4b8 = __ptr_01;
    local_4a8 = param_2;
    parse::links_chunk(&local_4d8,lVar9);
  }
  else {
joined_r0x006536b1:
    if (cVar7 == '\x01') {
      local_498 = local_450;
      local_4a0 = uVar24 + local_490;
      local_4b0 = parse::TABS;
      local_4d8 = lVar4;
      local_4d0 = lVar26;
      local_4c8 = __ptr;
      local_4c0 = __ptr_00;
      local_4b8 = __ptr_01;
      local_4a8 = param_2;
      k_free::run_clicks::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>(lVar9,lVar30,&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch(&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch();
    }
    else {
      local_498 = local_450;
      local_4a0 = uVar24 + local_490;
      local_4b0 = parse::TABS;
      local_4d8 = lVar4;
      local_4d0 = lVar26;
      local_4c8 = __ptr;
      local_4c0 = __ptr_00;
      local_4b8 = __ptr_01;
      local_4a8 = param_2;
      k_free::run_events::<pipeline[509596c7b52975b2]::parse::Ctx,0u8>(lVar9,lVar30,&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch(&local_4d8);
      <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch();
    }
  }
joined_r0x006536e3:
  if (parse::RELEASE_0 == '\x01') {
LAB_006537c6:
    uVar20 = parse::work_queue::Q._8_8_;
    uVar17 = parse::work_queue::Q._16_8_;
    if (DAT_00843ad8 != 0) {
      <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
      <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::_closure_0_>::_closure_0_,_>
                ();
      uVar20 = parse::work_queue::Q._8_8_;
      uVar17 = parse::work_queue::Q._16_8_;
    }
    parse::work_queue::Q._8_8_ = uVar20;
    parse::work_queue::Q._16_8_ = uVar17;
    if (1 < parse::FR_K) {
      if (DAT_00843ad8 != 0) {
        <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
        <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::_closure_0_>::_closure_0_,_>
                  ();
      }
LAB_006529f5:
      parse::fr_done(lVar4,uVar20,uVar17,uVar18,parse::FR_K);
    }
  }
  goto LAB_00652a04;
}


// ==== pipeline::main::{closure#25} @ 00653d00 (1298 bytes)

/* pipeline[509596c7b52975b2]::main::{closure#25} */

void __rustcall pipeline[509596c7b52975b2]::main::_closure_25_(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  undefined8 *__ptr;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  bool bVar19;
  char *pcVar20;
  long lVar21;
  long in_FS_OFFSET;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined8 local_78;
  ulong local_70;
  undefined8 *local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined2 local_38;
  
  __ptr = (undefined8 *)param_2[1];
  local_70 = param_2[2];
  local_78 = 0;
  local_58 = 0;
  local_48 = 0xa0000000a;
  local_40 = 1;
  local_38 = 0;
  local_68 = __ptr;
  local_60 = local_70;
  local_50 = local_70;
  do {
    auVar23 = <core[62e902411887be45]::str::iter::Lines_as_core[62e902411887be45]::iter::traits::iterator::Iterator>
              ::next(&local_78);
    pbVar12 = auVar23._8_8_;
    pbVar5 = auVar23._0_8_;
    if (pbVar5 == (byte *)0x0) {
      *param_1 = -1;
      uVar7 = *param_2;
      if (uVar7 == 0) {
        return;
      }
      goto LAB_0065417d;
    }
  } while ((pbVar12 < (byte *)0x5) || (pbVar5[4] != 0x4d || *(int *)pbVar5 != 0x57486d56));
  pbVar1 = pbVar5 + (long)pbVar12;
  pbVar16 = (byte *)0x0;
  bVar8 = false;
  pbVar18 = (byte *)0x0;
  bVar19 = false;
  pcVar20 = "?";
  pbVar9 = pbVar5;
  pbVar10 = pbVar5;
  pbVar15 = (byte *)0x0;
  do {
    if (bVar19) goto LAB_00654125;
    bVar19 = true;
    pbVar14 = pbVar16;
    if (pbVar9 != pbVar1) {
      do {
        bVar22 = *pbVar9;
        uVar7 = (ulong)bVar22;
        if ((char)bVar22 < '\0') {
          uVar13 = bVar22 & 0x1f;
          if (bVar22 < 0xe0) {
            pbVar10 = pbVar9 + 2;
            uVar7 = (ulong)(uVar13 << 6 | pbVar9[1] & 0x3f);
          }
          else {
            uVar17 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (bVar22 < 0xf0) {
              pbVar10 = pbVar9 + 3;
              uVar7 = (ulong)(uVar17 | uVar13 << 0xc);
            }
            else {
              pbVar10 = pbVar9 + 4;
              uVar7 = (ulong)(pbVar9[3] & 0x3f | uVar17 << 6 | (bVar22 & 7) << 0x12);
            }
          }
        }
        else {
          pbVar10 = pbVar9 + 1;
        }
        pbVar16 = pbVar10 + ((long)pbVar14 - (long)pbVar9);
        uVar13 = (uint)uVar7;
        pbVar9 = pbVar10;
        if ((uVar13 < 0x21) && ((0x100003e00U >> (uVar7 & 0x3f) & 1) != 0)) {
LAB_00653de0:
          bVar19 = false;
          pbVar18 = pbVar16;
          pbVar2 = pbVar16;
          goto joined_r0x00653df2;
        }
        if (0x84 < uVar13) {
          uVar17 = (uint)(uVar7 >> 8);
          if (uVar17 < 0x20) {
            if ((uVar7 & 0xffffff00) == 0) {
              bVar22 = core[62e902411887be45]::unicode::unicode_data::white_space::WHITESPACE_MAP
                       [uVar7 & 0xff];
            }
            else {
              if (uVar17 != 0x16) goto LAB_00653e46;
              bVar22 = uVar13 == 0x1680;
            }
          }
          else if (uVar17 == 0x20) {
            bVar22 = (byte)core[62e902411887be45]::unicode::unicode_data::white_space::
                           WHITESPACE_MAP[uVar7 & 0xff] >> 1;
          }
          else {
            if (uVar17 != 0x30) goto LAB_00653e46;
            bVar22 = uVar13 == 0x3000;
          }
          if ((bVar22 & 1) != 0) goto LAB_00653de0;
        }
LAB_00653e46:
        pbVar14 = pbVar16;
      } while (pbVar10 != pbVar1);
      pbVar10 = pbVar1;
    }
    bVar8 = true;
    pbVar2 = pbVar15;
    pbVar9 = pbVar1;
    pbVar14 = pbVar12;
joined_r0x00653df2:
    bVar3 = pbVar14 == pbVar15;
    pbVar15 = pbVar2;
  } while (bVar3);
  do {
    pbVar9 = pbVar18;
    if (bVar8) goto LAB_00654125;
    bVar8 = true;
    pbVar15 = pbVar16;
    pbVar14 = pbVar10;
    pbVar18 = pbVar9;
    if (pbVar10 == pbVar1) {
      pbVar15 = pbVar12;
    }
    else {
      do {
        bVar22 = *pbVar14;
        uVar7 = (ulong)bVar22;
        if ((char)bVar22 < '\0') {
          uVar13 = bVar22 & 0x1f;
          if (bVar22 < 0xe0) {
            pbVar10 = pbVar14 + 2;
            uVar7 = (ulong)(uVar13 << 6 | pbVar14[1] & 0x3f);
          }
          else {
            uVar17 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
            if (bVar22 < 0xf0) {
              pbVar10 = pbVar14 + 3;
              uVar7 = (ulong)(uVar17 | uVar13 << 0xc);
            }
            else {
              pbVar10 = pbVar14 + 4;
              uVar7 = (ulong)(pbVar14[3] & 0x3f | uVar17 << 6 | (bVar22 & 7) << 0x12);
            }
          }
        }
        else {
          pbVar10 = pbVar14 + 1;
        }
        pbVar16 = pbVar10 + ((long)pbVar15 - (long)pbVar14);
        uVar13 = (uint)uVar7;
        if ((uVar13 < 0x21) && ((0x100003e00U >> (uVar7 & 0x3f) & 1) != 0)) {
LAB_00653fb0:
          bVar8 = false;
          pbVar18 = pbVar16;
          goto LAB_00653fb5;
        }
        if (0x84 < uVar13) {
          uVar17 = (uint)(uVar7 >> 8);
          if (uVar17 < 0x20) {
            if (uVar17 == 0) {
              bVar22 = core[62e902411887be45]::unicode::unicode_data::white_space::WHITESPACE_MAP
                       [uVar7 & 0xff];
            }
            else {
              if (uVar17 != 0x16) goto LAB_00653fec;
              bVar22 = uVar13 == 0x1680;
            }
          }
          else if (uVar17 == 0x20) {
            bVar22 = (byte)core[62e902411887be45]::unicode::unicode_data::white_space::
                           WHITESPACE_MAP[uVar7 & 0xff] >> 1;
          }
          else {
            if (uVar17 != 0x30) goto LAB_00653fec;
            bVar22 = uVar13 == 0x3000;
          }
          if ((bVar22 & 1) != 0) goto LAB_00653fb0;
        }
LAB_00653fec:
        pbVar15 = pbVar16;
        pbVar14 = pbVar10;
      } while (pbVar10 != pbVar1);
      bVar8 = true;
      pbVar15 = pbVar12;
    }
LAB_00653fb5:
    lVar21 = (long)pbVar15 - (long)pbVar9;
  } while (lVar21 == 0);
  if (lVar21 < 0) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    goto LAB_0065421e;
  }
  pcVar20 = (char *)(pbVar5 + (long)pbVar9);
LAB_0065412b:
  lVar6 = __rustc[45371133cddedda4]::__rust_alloc(lVar21,1);
  if (lVar6 != 0) {
    (*(code *)PTR_memcpy_00841de0)(lVar6,pcVar20,lVar21);
    *param_1 = lVar21;
    param_1[1] = lVar6;
    param_1[2] = lVar21;
    uVar7 = *param_2;
    if (uVar7 != 0) {
LAB_0065417d:
      if (((sys::A_BASE_0 == (undefined8 *)0x0) || (__ptr < sys::A_BASE_0)) ||
         (sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar11 = 0x10;
      if (0x10 < uVar7) {
        uVar11 = uVar7;
      }
      lVar21 = LZCOUNT(uVar11 - 1);
      lVar6 = 0x40 - lVar21;
      if ((uVar11 - 1 < 0x10000) || (cVar4 = sys::big_put(__ptr,lVar6), cVar4 == '\0')) {
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr;
      }
    }
    return;
  }
LAB_0065421e:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar21);
LAB_00654125:
  lVar21 = 1;
  goto LAB_0065412b;
}


// ==== pipeline::main::{closure#30} @ 00654260 (927 bytes)

/* pipeline[509596c7b52975b2]::main::{closure#30} */

void __rustcall pipeline[509596c7b52975b2]::main::_closure_30_(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  size_t sVar7;
  void *pvVar8;
  
  if (0xf < param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check(param_2,0x10,&PTR_s_src_main_rs_002106a8);
  }
  plVar1 = (long *)(*param_1 + param_2 * 0xc0);
  lVar4 = *(long *)(*param_1 + 8 + param_2 * 0xc0);
  if (lVar4 != 0) {
    pvVar8 = (void *)(*plVar1 + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(lVar4 + *plVar1 & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[3] != 0) {
    pvVar8 = (void *)(plVar1[2] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[3] + plVar1[2] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[5] != 0) {
    pvVar8 = (void *)(plVar1[4] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[5] + plVar1[4] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[7] != 0) {
    pvVar8 = (void *)(plVar1[6] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[7] + plVar1[6] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[9] != 0) {
    pvVar8 = (void *)(plVar1[8] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[9] + plVar1[8] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0xb] != 0) {
    pvVar8 = (void *)(plVar1[10] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0xb] + plVar1[10] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0xd] != 0) {
    pvVar8 = (void *)(plVar1[0xc] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0xd] + plVar1[0xc] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0xf] != 0) {
    pvVar8 = (void *)(plVar1[0xe] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0xf] + plVar1[0xe] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0x11] != 0) {
    pvVar8 = (void *)(plVar1[0x10] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0x11] + plVar1[0x10] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0x13] != 0) {
    pvVar8 = (void *)(plVar1[0x12] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0x13] + plVar1[0x12] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0x15] != 0) {
    pvVar8 = (void *)(plVar1[0x14] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0x15] + plVar1[0x14] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  if (plVar1[0x17] != 0) {
    pvVar8 = (void *)(plVar1[0x16] + 0xfffU & 0xfffffffffffff000);
    pvVar6 = (void *)(plVar1[0x17] + plVar1[0x16] & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
    }
  }
  uVar2 = *(ulong *)param_1[1];
  if (sys::A_BASE_0 != 0) {
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                (&PTR_s_src_sys_rs_002137b8);
    }
    lVar4 = ((ulong)(sys::A_NEXT - sys::A_BASE_0) >> 0x15) + 1;
    uVar3 = lVar4 * param_2;
    if ((uVar3 | uVar2) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar3 = uVar3 / uVar2;
    }
    uVar5 = lVar4 * (param_2 + 1);
    if ((uVar5 | uVar2) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar2;
    }
    pvVar8 = (void *)(sys::A_BASE_0 + uVar3 * 0x200000 + 0xfff & 0xfffffffffffff000);
    pvVar6 = (void *)(uVar5 * 0x200000 + sys::A_BASE_0 & 0xfffffffffffff000);
    sVar7 = (long)pvVar6 - (long)pvVar8;
    if (pvVar8 <= pvVar6 && sVar7 != 0) {
      madvise(pvVar8,sVar7,4);
      return;
    }
  }
  return;
}


// ==== <pipeline::main::{closure#1} as core::ops::function::FnOnce<(&std::panic::PanicHookInfo,)>>::call_once::{shim:vtable#0} @ 0067c3b8 (7 bytes)

/* <pipeline[509596c7b52975b2]::main::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::panic::PanicHookInfo,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<pipeline[509596c7b52975b2]::main::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::panic::PanicHookInfo,)>>
::call_once::_shim_vtable_0_(void)

{
  code *pcVar1;
  
  pipeline[509596c7b52975b2]::main::_closure_1_();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ==== <pipeline::main::{closure#22} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c3c0 (18 bytes)

/* <pipeline[509596c7b52975b2]::main::{closure#22} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

undefined8 __rustcall
<pipeline[509596c7b52975b2]::main::{closure#22}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  pipeline[509596c7b52975b2]::main::_closure_22_(&local_8);
  return local_8;
}


// ==== <pipeline::main::{closure#30} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c3e0 (26 bytes)

/* <pipeline[509596c7b52975b2]::main::{closure#30} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::main::{closure#30}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *param_1;
  uStack_10 = param_1[1];
  pipeline[509596c7b52975b2]::main::_closure_30_(&local_18);
  return;
}


