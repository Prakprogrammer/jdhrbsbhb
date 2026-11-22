// ==== core::ptr::drop_glue::<core::option::Option<core::result::Result<pipeline::setup::Lookups, alloc::boxed::Box<dyn core::any::Any + core::marker::Send>>>> @ 005ff580 (588 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<pipeline[509596c7b52975b2]::setup::Lookups,
   alloc[2a0ada2ddd1fabff]::boxed::Box<dyn core[62e902411887be45]::any::Any +
   core[62e902411887be45]::marker::Send>>>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<pipeline[509596c7b52975b2]::setup::Lookups,alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
          (ulong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  uVar5 = *param_1;
  if (uVar5 == 0xfffffffffffffffe) {
    return;
  }
  if (uVar5 != 0xffffffffffffffff) {
    if (uVar5 != 0) {
      puVar1 = (undefined8 *)param_1[1];
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
        free(puVar1);
      }
      else {
        uVar4 = 0x10;
        if (0x10 < uVar5) {
          uVar4 = uVar5;
        }
        lVar6 = 0x40 - LZCOUNT(uVar4 - 1);
        if ((uVar5 < 0x10001) ||
           (cVar3 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar3 == '\0')) {
          *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
        }
      }
    }
    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(param_1 + 3);
    uVar5 = param_1[6];
    if (uVar5 != 0) {
      puVar1 = (undefined8 *)param_1[7];
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
        free(puVar1);
      }
      else {
        uVar4 = 0x10;
        if (0x10 < uVar5) {
          uVar4 = uVar5;
        }
        lVar6 = LZCOUNT(uVar4 - 1);
        lVar7 = 0x40 - lVar6;
        if ((uVar4 - 1 < 0x10000) ||
           (cVar3 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar7), cVar3 == '\0')) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = puVar1;
        }
      }
    }
    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(param_1 + 9);
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(puVar1);
  }
  uVar5 = puVar2[1];
  if (uVar5 == 0) {
    return;
  }
  if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
      (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
     (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
    free(puVar1);
    return;
  }
  uVar4 = puVar2[2];
  if ((ulong)puVar2[2] < uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = 0x10;
  if (0x10 < uVar4) {
    uVar5 = uVar4;
  }
  lVar6 = 0x40 - LZCOUNT(uVar5 - 1);
  if ((uVar4 < 0x10001) ||
     (cVar3 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar3 == '\0')) {
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<alloc::vec::Vec<pipeline::setup::LFile>> @ 00601000 (405 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>(long *param_1)

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
      uVar2 = puVar4[-1];
      if (uVar2 != 0) {
        __ptr_00 = (undefined8 *)*puVar4;
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
            (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr_00)) {
          free(__ptr_00);
        }
        else {
          if (uVar2 < 0x11) {
            uVar2 = 0x10;
          }
          lVar3 = LZCOUNT(uVar2 - 1);
          lVar6 = 0x40 - lVar3;
          if ((uVar2 - 1 < 0x10000) ||
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
      puVar4 = puVar4 + 7;
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
    uVar2 = *param_1 * 0x38 - 1;
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


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::setup::setup::{closure#2}, pipeline::setup::Lookups>::{closure#1}> @ 00602c40 (209 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::setup::setup::{closure#2},
   pipeline[509596c7b52975b2]::setup::Lookups>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::setup::setup::_closure_2_,pipeline[509596c7b52975b2]::setup::Lookups>::_closure_1_>
          (ulong *param_1)

{
  ulong uVar1;
  undefined8 *__ptr;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    __ptr = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
    }
    else {
      uVar4 = 0x10;
      if (0x10 < uVar1) {
        uVar4 = uVar1;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if (0xffff < uVar4 - 1) {
        cVar3 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar6);
        if (cVar3 != '\0') goto LAB_00602cd0;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = __ptr;
    }
  }
LAB_00602cd0:
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>(param_1 + 3);
  plVar2 = (long *)param_1[7];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>
    ::drop_slow();
    return;
  }
  return;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::setup::setup::{closure#2}, pipeline::setup::Lookups> @ 006135e0 (5780 bytes)

/* WARNING: Removing unreachable block (ram,0x00613949) */
/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::setup::setup::{closure#2},
   pipeline[509596c7b52975b2]::setup::Lookups> */

void __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::setup::setup::_closure_2_,pipeline[509596c7b52975b2]::setup::Lookups>
          (undefined8 *param_1,ulong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  undefined1 (*pauVar22) [64];
  byte bVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [64];
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  char *pcVar33;
  undefined4 uVar34;
  long lVar35;
  ulong uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [32];
  undefined1 extraout_var [56];
  undefined1 auVar41 [64];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  char local_1b9;
  long *local_1b8;
  long *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long *local_198;
  long local_190;
  ulong local_188;
  ulong local_180;
  long *local_178;
  char *local_170;
  long local_168;
  long local_160;
  ulong local_158;
  ulong local_150;
  long *local_148;
  long *plStack_140;
  long *local_138;
  undefined4 local_12c;
  undefined8 local_128;
  long local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  ulong uStack_100;
  long *local_f8;
  short *local_f0;
  ulong local_e8;
  char *local_e0;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  long *local_c0;
  ulong *local_b8;
  undefined8 *local_b0;
  ulong local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  long *local_88;
  ulong local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  plVar21 = (long *)param_2[1];
  uVar26 = param_2[2];
  local_b0 = param_1;
  pipeline[509596c7b52975b2]::setup::lookups::_closure_0_(&local_a8,plVar21,uVar26,"products.csv");
  plVar37 = (long *)&DAT_00000001;
  local_190 = __rustc[45371133cddedda4]::__rust_alloc(0x20001,1);
  if (local_190 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x20001);
  }
  local_150 = uVar26;
  auVar38._0_8_ = (*(code *)PTR_memset_00841dd0)(local_190,0xff,0x20001);
  auVar38._8_56_ = extraout_var;
  local_78 = vpcmpeqd_avx2(auVar38._0_32_,auVar38._0_32_);
  local_1b9 = '\0';
  local_c0 = local_a0;
  if (local_98 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = 0;
    uVar24 = 0;
    do {
      if ((char)*local_a0 == '\n') {
        uVar26 = ~uVar24 + local_98;
        plVar37 = (long *)((long)local_a0 + 1);
        break;
      }
      uVar24 = uVar24 + 1;
      local_a0 = (long *)((long)local_a0 + 1);
    } while (local_98 != uVar24);
  }
  local_128 = 0;
  local_120 = 8;
  local_118 = (long *)0x0;
  local_1b8 = (long *)0xffffffff;
  auVar42._4_4_ = DAT_002064e8;
  auVar42._0_4_ = DAT_002064e8;
  auVar42._8_4_ = DAT_002064e8;
  auVar42._12_4_ = DAT_002064e8;
  auVar42._16_4_ = DAT_002064e8;
  auVar42._20_4_ = DAT_002064e8;
  auVar42._24_4_ = DAT_002064e8;
  auVar42._28_4_ = DAT_002064e8;
  auVar45._4_4_ = DAT_00206444;
  auVar45._0_4_ = DAT_00206444;
  auVar45._8_4_ = DAT_00206444;
  auVar45._12_4_ = DAT_00206444;
  auVar45._16_4_ = DAT_00206444;
  auVar45._20_4_ = DAT_00206444;
  auVar45._24_4_ = DAT_00206444;
  auVar45._28_4_ = DAT_00206444;
  auVar47._4_4_ = DAT_00206400;
  auVar47._0_4_ = DAT_00206400;
  auVar47._8_4_ = DAT_00206400;
  auVar47._12_4_ = DAT_00206400;
  auVar47._16_4_ = DAT_00206400;
  auVar47._20_4_ = DAT_00206400;
  auVar47._24_4_ = DAT_00206400;
  auVar47._28_4_ = DAT_00206400;
  uVar24 = 0;
  local_1a8 = plVar21;
  local_b8 = param_2;
  local_58 = local_78;
LAB_0061376e:
  uVar32 = uVar24;
  if (uVar32 < uVar26) {
    uVar24 = uVar32;
    do {
      uVar36 = uVar24;
      uVar24 = uVar36 + 0x20;
      if (uVar26 < uVar24) {
        uVar30 = uVar36;
        if (uVar36 < uVar26) goto LAB_006137fc;
        goto LAB_00613990;
      }
      auVar40 = *(undefined1 (*) [32])((long)plVar37 + uVar36);
      uVar8 = vpcmpeqb_avx512vl(auVar40,auVar42);
      uVar9 = vpcmpeqb_avx512vl(auVar40,auVar45);
      uVar20 = (uint)uVar9 | (uint)uVar8;
      uVar8 = vpcmpeqb_avx512vl(auVar40,auVar47);
    } while ((uint)uVar8 == 0 && uVar20 == 0);
    uVar10 = 0;
    for (uVar20 = (uint)uVar8 | uVar20; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar13 = (ulong)uVar10;
    uVar30 = (uVar13 + uVar24) - 0x20;
    if (uVar26 <= uVar30) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar13 + uVar24 + -0x20,uVar26,&PTR_s_src_setup_rs_00226700);
    }
    bVar23 = *(byte *)((long)plVar37 + uVar36 + uVar13);
LAB_0061380d:
    if ((bVar23 == 0x2c) && (*(char *)((long)plVar37 + uVar32) == 'p')) {
      uVar24 = (uVar30 - uVar32) - 2;
      if (uVar24 < 8) {
        uVar36 = uVar32 + 1;
        if (uVar26 <= uVar36) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar36,uVar26,&PTR_s_src_setup_rs_002267b0);
        }
        if ((uVar30 - uVar32 == 2) || (*(char *)((long)plVar37 + uVar36) != '0')) {
          if ((uVar30 <= uVar32) || (uVar26 < uVar30)) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (uVar36,uVar30,uVar26,&PTR_s_src_setup_rs_002267e0);
          }
          pcVar33 = (char *)((long)plVar37 + uVar36);
          uVar13 = uVar36;
          do {
            if (uVar30 == uVar13) {
              lVar29 = 1;
              lVar16 = -0x1f;
              lVar28 = 0x21;
              plVar21 = plVar37;
              goto LAB_006138c0;
            }
            pcVar18 = (char *)((long)plVar37 + uVar13);
            uVar13 = uVar13 + 1;
          } while ((byte)(*pcVar18 - 0x30U) < 10);
        }
      }
    }
    goto LAB_00613990;
  }
  if (local_118 == (long *)0x0) {
    plVar21 = (long *)&DAT_00000008;
    uVar34 = (undefined4)CONCAT71((int7)(uVar32 >> 8),1);
    plVar17 = (long *)0x0;
    local_178 = (long *)&DAT_00000008;
    plVar37 = (long *)0x0;
    goto LAB_00613ce6;
  }
  goto LAB_00613e18;
  while (uVar30 = uVar30 + 1, uVar26 != uVar30) {
LAB_006137fc:
    bVar23 = *(byte *)((long)plVar37 + uVar30);
    if (((ulong)bVar23 < 0x2d) && ((0x100400000400U >> ((ulong)bVar23 & 0x3f) & 1) != 0))
    goto LAB_0061380d;
  }
  goto LAB_00613990;
  while( true ) {
    auVar40 = *(undefined1 (*) [32])((long)plVar17 + uVar30 + 1);
    uVar8 = vpcmpeqb_avx512vl(auVar40,auVar42);
    uVar9 = vpcmpeqb_avx512vl(auVar40,auVar45);
    uVar20 = (uint)uVar9 | (uint)uVar8;
    uVar8 = vpcmpeqb_avx512vl(auVar40,auVar47);
    lVar29 = lVar29 + 0x20;
    lVar16 = lVar16 + 0x20;
    lVar28 = lVar28 + 0x20;
    plVar21 = plVar17 + 4;
    if ((uint)uVar8 != 0 || uVar20 != 0) break;
LAB_006138c0:
    plVar17 = plVar21;
    if (uVar26 < uVar30 + lVar28) {
      uVar13 = lVar29 + uVar30;
      if (uVar13 < uVar26) goto LAB_00613958;
      goto LAB_00613942;
    }
  }
  uVar10 = 0;
  for (uVar20 = (uint)uVar8 | uVar20; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
    uVar10 = uVar10 + 1;
  }
  uVar14 = (ulong)uVar10;
  uVar13 = uVar30 + lVar16 + uVar14;
  if (uVar26 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar14 + uVar30 + lVar16,uVar26,&PTR_s_src_setup_rs_00226700);
  }
  bVar23 = *(byte *)((long)plVar17 + uVar14 + uVar30 + 1);
joined_r0x00613971:
  if (bVar23 == 10) goto LAB_00613973;
LAB_00613990:
  lVar28 = 0;
  do {
    cVar11 = ((char *)((long)plVar37 + uVar32))[lVar28];
    if (cVar11 == '\n') break;
    lVar28 = lVar28 + 1;
  } while (uVar26 - uVar32 != lVar28);
  uVar13 = lVar28 + uVar32;
  if (cVar11 != '\n') {
    uVar13 = uVar26;
  }
  if ((uVar13 < uVar32) || (uVar26 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar32,uVar13,uVar26,&PTR_s_src_setup_rs_00226858);
  }
  pipeline[509596c7b52975b2]::setup::split2
            (&local_f0,(char *)((long)plVar37 + uVar32),uVar13 - uVar32);
  if ((local_f0 == (short *)0x0) || (local_d8 == 0)) {
    local_1b9 = '\x01';
  }
  else {
    plVar21 = local_1b8;
    pcVar33 = local_e0;
    lVar28 = local_d8;
    if (((local_e8 != 0) && (plVar21 = (long *)0xfffffffe, (char)*local_f0 == 'p')) &&
       (local_e8 - 2 < 8)) {
      uVar24 = 1;
      do {
        if (local_e8 == uVar24) {
          if (local_e8 == 1) {
LAB_00614c0a:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_k_ref_rs_00214608);
          }
          if ((local_e8 == 2) ||
             (plVar21 = (long *)0xfffffffe, *(char *)((long)local_f0 + 1) != '0')) {
            bVar23 = *(char *)((long)local_f0 + 1) - 0x30;
            uVar20 = (uint)bVar23;
            if ((((local_e8 != 2) &&
                 ((uVar20 = (uint)(byte)((char)local_f0[1] - 0x30) + (uint)bVar23 * 10,
                  local_e8 != 3 &&
                  (uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 3) - 0x30) + uVar20 * 10,
                  local_e8 != 4)))) &&
                (uVar20 = (uint)(byte)((char)local_f0[2] - 0x30) + uVar20 * 10, local_e8 != 5)) &&
               (((uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 5) - 0x30) + uVar20 * 10,
                 local_e8 != 6 &&
                 (uVar20 = (uint)(byte)((char)local_f0[3] - 0x30) + uVar20 * 10, local_e8 != 7)) &&
                (uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 7) - 0x30) + uVar20 * 10,
                local_e8 != 8)))) {
              uVar20 = (uint)(byte)((char)local_f0[4] - 0x30) + uVar20 * 10;
            }
            plVar21 = (long *)(ulong)uVar20;
          }
          goto LAB_00613c80;
        }
        pcVar18 = (char *)((long)local_f0 + uVar24);
        uVar24 = uVar24 + 1;
      } while ((byte)(*pcVar18 - 0x30U) < 10);
      plVar21 = (long *)0xfffffffe;
    }
LAB_00613c80:
    pipeline[509596c7b52975b2]::setup::lookups::_closure_2_
              (local_190,0x20001,local_78,plVar21,pcVar33,lVar28,&local_1b9,&local_128);
  }
  auVar42._4_4_ = DAT_002064e8;
  auVar42._0_4_ = DAT_002064e8;
  auVar42._8_4_ = DAT_002064e8;
  auVar42._12_4_ = DAT_002064e8;
  auVar42._16_4_ = DAT_002064e8;
  auVar42._20_4_ = DAT_002064e8;
  auVar42._24_4_ = DAT_002064e8;
  auVar42._28_4_ = DAT_002064e8;
  auVar45._4_4_ = DAT_00206444;
  auVar45._0_4_ = DAT_00206444;
  auVar45._8_4_ = DAT_00206444;
  auVar45._12_4_ = DAT_00206444;
  auVar45._16_4_ = DAT_00206444;
  auVar45._20_4_ = DAT_00206444;
  auVar45._24_4_ = DAT_00206444;
  auVar45._28_4_ = DAT_00206444;
  auVar47._4_4_ = DAT_00206400;
  auVar47._0_4_ = DAT_00206400;
  auVar47._8_4_ = DAT_00206400;
  auVar47._12_4_ = DAT_00206400;
  auVar47._16_4_ = DAT_00206400;
  auVar47._20_4_ = DAT_00206400;
  auVar47._24_4_ = DAT_00206400;
  auVar47._28_4_ = DAT_00206400;
  uVar24 = uVar13 + 1;
  if (local_1b9 != '\0') goto LAB_00613e07;
  goto LAB_0061376e;
  while (uVar13 = uVar13 + 1, uVar26 != uVar13) {
LAB_00613958:
    bVar23 = *(byte *)((long)plVar37 + uVar13);
    if (((ulong)bVar23 < 0x2d) && ((0x100400000400U >> ((ulong)bVar23 & 0x3f) & 1) != 0))
    goto joined_r0x00613971;
  }
LAB_00613942:
  uVar13 = uVar26;
LAB_00613973:
  uVar14 = uVar30 + 1;
  lVar28 = uVar13 - uVar14;
  if (uVar13 < uVar14 || lVar28 == 0) goto LAB_00613990;
  if (uVar36 == uVar30) {
    plVar21 = (long *)0x0;
  }
  else {
    uVar36 = (ulong)(~((int)uVar32 - (int)uVar30) & 7);
    if (uVar24 == 7) {
      uVar24 = uVar30 + ~uVar32 & 0xfffffffffffffff8;
      plVar21 = (long *)0x0;
      do {
        cVar11 = *pcVar33;
        pcVar18 = pcVar33 + 1;
        pcVar1 = pcVar33 + 2;
        pcVar2 = pcVar33 + 3;
        pcVar3 = pcVar33 + 4;
        pcVar4 = pcVar33 + 5;
        pcVar5 = pcVar33 + 6;
        pcVar6 = pcVar33 + 7;
        pcVar33 = pcVar33 + 8;
        plVar21 = (long *)((ulong)(byte)(*pcVar6 - 0x30) +
                          ((ulong)(byte)(*pcVar5 - 0x30) +
                          ((ulong)(byte)(*pcVar4 - 0x30) +
                          ((ulong)(byte)(*pcVar3 - 0x30) +
                          ((ulong)(byte)(*pcVar2 - 0x30) +
                          ((ulong)(byte)(*pcVar1 - 0x30) +
                          ((ulong)(byte)(*pcVar18 - 0x30) +
                          ((ulong)(byte)(cVar11 - 0x30) + (long)plVar21 * 10) * 10) * 10) * 10) * 10
                          ) * 10) * 10) * 10);
        uVar24 = uVar24 - 8;
      } while (uVar24 != 0);
      if (uVar36 == 0) goto LAB_00613c6c;
    }
    else {
      plVar21 = (long *)0x0;
    }
    uVar24 = 0;
    do {
      plVar21 = (long *)((ulong)(byte)(pcVar33[uVar24] - 0x30) + (long)plVar21 * 10);
      uVar24 = uVar24 + 1;
    } while (uVar36 != uVar24);
  }
LAB_00613c6c:
  if (uVar26 < uVar13) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar14,uVar13,uVar26,&PTR_s_src_setup_rs_002267c8);
  }
  pcVar33 = (char *)(uVar14 + (long)plVar37);
  goto LAB_00613c80;
LAB_0061462a:
  do {
    if (*(long *)(uVar32 + 0x10 + uVar36) == lVar29) {
      iVar12 = (*(code *)PTR_memcmp_00842098)(*(undefined8 *)(uVar32 + 8 + uVar36),pcVar33,lVar29);
      uVar32 = local_188;
      uVar26 = local_c8;
      lVar29 = local_168;
      pcVar33 = local_170;
      if (iVar12 == 0) {
        plVar17 = plVar21;
        lVar28 = local_190;
        plVar21 = local_110;
        goto LAB_0061470d;
      }
    }
    plVar21 = (long *)((long)plVar21 + 1);
    uVar36 = uVar36 + 0x18;
  } while (uVar26 != uVar36);
LAB_00614685:
  if (lVar29 < 0) goto LAB_0061401e;
  pcVar18 = (char *)__rustc[45371133cddedda4]::__rust_alloc(lVar29,1);
  if (pcVar18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar29);
  }
  local_170 = pcVar18;
  (*(code *)PTR_memcpy_00841de0)(pcVar18,pcVar33,lVar29);
  plVar21 = local_110;
  lVar28 = local_190;
  if (plVar17 == local_108) {
    local_168 = lVar29;
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
              (&local_108);
    local_188 = uStack_100;
    lVar29 = local_168;
  }
  *(long *)(local_188 + (long)plVar17 * 0x18) = lVar29;
  *(char **)(local_188 + 8 + (long)plVar17 * 0x18) = local_170;
  *(long *)(local_188 + 0x10 + (long)plVar17 * 0x18) = lVar29;
  plVar19 = (long *)((long)plVar17 + 1);
  uVar26 = local_188;
  local_f8 = plVar19;
LAB_0061470d:
  if (plVar17 < (long *)0xfa) {
    *(char *)(local_160 + local_d0) = (char)plVar17;
    if (local_180 <= local_d0 + 1) {
      local_180 = local_d0 + 1;
    }
    plVar17 = plVar19;
    uVar32 = local_158;
  }
  else {
LAB_006145d3:
    plVar17 = plVar19;
    uVar32 = CONCAT71((int7)(uVar26 >> 8),1);
  }
LAB_006143cd:
  plVar27 = (long *)((long)plVar37 + 1);
  if (plVar31 <= plVar27) {
    uVar26 = local_180;
    plVar19 = local_198;
    if ((uVar32 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      pipeline[509596c7b52975b2]::sys::fallback("campaigns.csv is not canonical",0x1e);
    }
    goto LAB_00614786;
  }
  goto LAB_006143df;
LAB_00613e07:
  if (local_118 != (long *)0x0) {
LAB_00613e18:
    plVar21 = local_118;
    lVar28 = local_120;
    lVar29 = (long)local_118 * 0x10;
    plVar37 = (long *)__rustc[45371133cddedda4]::__rust_alloc(lVar29,8);
    if (plVar37 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar29);
    }
    if (&DAT_0000000c < plVar21) {
      if ((plVar37 < (long *)(lVar28 + (long)plVar21 * 0x18)) &&
         ((long *)(lVar28 + 8) < plVar37 + (long)plVar21 * 2)) {
        lVar16 = 0;
      }
      else {
        uVar24 = 8;
        if (((ulong)plVar21 & 7) != 0) {
          uVar24 = (ulong)((uint)plVar21 & 7);
        }
        lVar16 = (long)plVar21 - uVar24;
        pauVar22 = (undefined1 (*) [64])(lVar28 + 0x68);
        pauVar25 = (undefined1 (*) [64])(plVar37 + 8);
        lVar29 = lVar16;
        do {
          auVar38 = vmovdqu64_avx512f(*(undefined1 (*) [64])(pauVar22[-2] + 0x20));
          auVar38 = valignq_avx512f(auVar38,auVar38,3);
          auVar39 = vmovdqu64_avx512f(*pauVar22);
          auVar43._8_8_ = 0;
          auVar43._0_8_ = *(ulong *)(pauVar22[-1] + 0x30);
          auVar43 = vpalignr_avx(auVar43,*(undefined1 (*) [16])(pauVar22[-1] + 0x20),8);
          auVar39 = valignq_avx512f(auVar39,auVar39,3);
          auVar46._16_16_ = ZEXT116(1) * auVar43;
          auVar46._0_16_ = ZEXT116(1) * *(undefined1 (*) [16])(pauVar22[-1] + 0x10);
          auVar41._32_32_ = auVar38._32_32_;
          auVar41._16_16_ = ZEXT116(1) * auVar38._0_16_;
          auVar41._0_16_ = ZEXT116(1) * SUB3216(*(undefined1 (*) [32])(pauVar22[-2] + 0x20),0);
          auVar38 = vinserti64x4_avx512f(auVar41,auVar46,1);
          auVar44._8_8_ = 0;
          auVar44._0_8_ = *(ulong *)(pauVar22[1] + 0x10);
          auVar44 = vpalignr_avx(auVar44,*(undefined1 (*) [16])pauVar22[1],8);
          auVar42 = *(undefined1 (*) [32])*pauVar22;
          auVar43 = *(undefined1 (*) [16])(*pauVar22 + 0x30);
          auVar38 = vmovdqu64_avx512f(auVar38);
          pauVar25[-1] = auVar38;
          auVar40._16_16_ = ZEXT116(1) * auVar44;
          auVar40._0_16_ = ZEXT116(1) * auVar43;
          auVar39._16_16_ = ZEXT116(1) * auVar39._0_16_;
          auVar39._0_16_ = ZEXT116(1) * auVar42._0_16_;
          auVar38 = vinserti64x4_avx512f(auVar39,auVar40,1);
          auVar38 = vmovdqu64_avx512f(auVar38);
          *pauVar25 = auVar38;
          pauVar22 = pauVar22 + 3;
          pauVar25 = pauVar25 + 2;
          lVar29 = lVar29 + -8;
        } while (lVar29 != 0);
      }
    }
    else {
      lVar16 = 0;
    }
    uVar20 = (uint)plVar21 - (int)lVar16 & 3;
    lVar29 = lVar16;
    if (uVar20 != 0) {
      plVar17 = plVar37 + lVar16 * 2 + 1;
      plVar31 = (long *)(lVar28 + lVar16 * 0x18 + 0x10);
      lVar29 = 0;
      do {
        lVar35 = *plVar31;
        plVar17[-1] = plVar31[-1];
        *plVar17 = lVar35;
        lVar29 = lVar29 + -1;
        plVar17 = plVar17 + 2;
        plVar31 = plVar31 + 3;
      } while (-lVar29 != (ulong)uVar20);
      lVar29 = lVar16 - lVar29;
    }
    if ((ulong)(lVar16 - (long)plVar21) < 0xfffffffffffffffd) {
      lVar16 = (long)plVar21 - lVar29;
      plVar17 = plVar37 + lVar29 * 2 + 7;
      plVar31 = (long *)(lVar28 + lVar29 * 0x18 + 0x58);
      do {
        lVar28 = plVar31[-9];
        plVar17[-7] = plVar31[-10];
        plVar17[-6] = lVar28;
        lVar28 = plVar31[-6];
        plVar17[-5] = plVar31[-7];
        plVar17[-4] = lVar28;
        lVar28 = plVar31[-3];
        plVar17[-3] = plVar31[-4];
        plVar17[-2] = lVar28;
        lVar28 = *plVar31;
        plVar17[-1] = plVar31[-1];
        *plVar17 = lVar28;
        plVar17 = plVar17 + 8;
        plVar31 = plVar31 + 0xc;
        lVar16 = lVar16 + -4;
      } while (lVar16 != 0);
    }
    if (uVar26 <= uVar32) {
      plVar31 = plVar37;
      if (plVar21 < (long *)0x555555555555556) goto LAB_00614026;
LAB_0061401e:
      alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_00614026:
      lVar28 = (long)plVar21 * 0x18;
      local_1b0 = plVar21;
      if (lVar28 == 0) {
        plVar17 = (long *)&DAT_00000008;
        local_1a0 = (long *)0x0;
      }
      else {
        plVar17 = (long *)__rustc[45371133cddedda4]::__rust_alloc(lVar28,8);
        local_1a0 = plVar21;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar28);
        }
      }
      plVar21 = plVar17 + 2;
      plVar19 = plVar37 + 1;
      plVar27 = (long *)0x0;
      local_198 = plVar17;
      do {
        lVar28 = *plVar19;
        if (lVar28 < 0) goto LAB_0061401e;
        if (lVar28 == 0) {
          plVar37 = (long *)&DAT_00000001;
        }
        else {
          local_1b8 = (long *)plVar19[-1];
          plVar37 = (long *)__rustc[45371133cddedda4]::__rust_alloc(lVar28,1);
          if (plVar37 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar28);
          }
          (*(code *)PTR_memcpy_00841de0)(plVar37,local_1b8,lVar28);
        }
        plVar21[-2] = lVar28;
        plVar21[-1] = (long)plVar37;
        *plVar21 = lVar28;
        plVar27 = (long *)((long)plVar27 + 1);
        plVar21 = plVar21 + 3;
        plVar19 = plVar19 + 2;
      } while (local_1b0 != plVar27);
      uVar34 = 0;
      plVar21 = local_198;
      plVar37 = local_1b0;
      plVar17 = local_1a0;
      local_178 = plVar31;
LAB_00613ce6:
      plVar19 = local_178;
      local_148 = plVar17;
      plStack_140 = plVar21;
      local_138 = plVar37;
      puVar15 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(7,1);
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,7);
      }
      *(undefined4 *)((long)puVar15 + 3) = 0x6e776f6e;
      *puVar15 = 0x6e6b6e75;
      if (plVar37 == plVar17) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
                  (&local_148);
        plVar21 = plStack_140;
      }
      plVar21[(long)plVar37 * 3] = 7;
      plVar21[(long)plVar37 * 3 + 1] = (long)puVar15;
      plVar21[(long)plVar37 * 3 + 2] = 7;
      local_138 = (long *)((long)plVar37 + 1);
      if (plVar37 != (long *)0x0) {
        if (plVar37 < (long *)0x14) {
          core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
          <alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                    ();
        }
        else {
          core[62e902411887be45]::slice::sort::unstable::ipnsort::
          <alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                    (plStack_140);
        }
      }
      local_1b0 = plVar37;
      <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::dedup_by::
      <<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::dedup::_closure_0_>
                (&local_148);
      plVar21 = plStack_140;
      if (&DAT_0000001f < local_138) {
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("too many categories",0x13);
      }
      if (local_138 == (long *)0x0) {
LAB_00614bb2:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_002267f8);
      }
      lVar28 = (long)local_138 * 0x18;
      uVar26 = 0;
      lVar29 = 0;
      while ((*(long *)((long)plStack_140 + lVar29 + 0x10) != 7 ||
             (piVar7 = *(int **)((long)plStack_140 + lVar29 + 8),
             *(int *)((long)piVar7 + 3) != 0x6e776f6e || *piVar7 != 0x6e6b6e75))) {
        uVar26 = uVar26 - 1;
        lVar29 = lVar29 + 0x18;
        if (lVar28 == lVar29) goto LAB_00614bb2;
      }
      local_12c = uVar34;
      if ((char)uVar34 == '\0') {
        local_158 = uVar26;
        plVar37 = (long *)__rustc[45371133cddedda4]::__rust_alloc(local_1b0,1);
        if (plVar37 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,local_1b0);
        }
        plVar17 = (long *)0x0;
        local_1a0 = plVar37;
        local_198 = plVar19;
        do {
          lVar29 = local_198[(long)plVar17 * 2];
          lVar16 = local_198[(long)plVar17 * 2 + 1];
          lVar35 = 0;
          cVar11 = '\0';
          local_1b8 = plVar17;
          while ((*(long *)((long)plVar21 + lVar35 + 0x10) != lVar16 ||
                 (iVar12 = (*(code *)PTR_memcmp_00842098)
                                     (*(undefined8 *)((long)plVar21 + lVar35 + 8),lVar29,lVar16),
                 iVar12 != 0))) {
            cVar11 = cVar11 + -1;
            lVar35 = lVar35 + 0x18;
            if (lVar28 == lVar35) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00210d08);
            }
          }
          *(char *)((long)local_1a0 + (long)local_1b8) = -cVar11;
          plVar17 = (long *)((long)local_1b8 + 1);
        } while (plVar17 != local_1b0);
        plVar21 = local_1a0;
        plVar19 = local_198;
        plVar37 = local_1b0;
        uVar26 = local_158;
      }
      else {
        plVar21 = (long *)&DAT_00000001;
        plVar37 = (long *)0x0;
      }
      lVar28 = local_190;
      cVar11 = -(char)uVar26;
      lVar29 = 2;
      do {
        while (plVar17 = (long *)(ulong)*(byte *)(local_190 + -2 + lVar29), plVar17 == (long *)0xff)
        {
          *(char *)(local_190 + -2 + lVar29) = cVar11;
          plVar17 = (long *)(ulong)*(byte *)(local_190 + -1 + lVar29);
          if (plVar17 != (long *)0xff) goto LAB_00614189;
LAB_006141c9:
          *(char *)(local_190 + -1 + lVar29) = cVar11;
          plVar17 = (long *)(ulong)*(byte *)(local_190 + lVar29);
          if (plVar17 == (long *)0xff) goto LAB_00614130;
LAB_006141ed:
          if (plVar37 <= plVar17) {
LAB_00614bbc:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (plVar17,plVar37,&PTR_s_src_setup_rs_00226810);
          }
          *(char *)(local_190 + lVar29) = *(char *)((long)plVar21 + (long)plVar17);
          lVar29 = lVar29 + 3;
          if (lVar29 == 0x20003) goto LAB_0061420e;
        }
        if (plVar37 <= plVar17) goto LAB_00614bbc;
        *(char *)(local_190 + -2 + lVar29) = *(char *)((long)plVar21 + (long)plVar17);
        plVar17 = (long *)(ulong)*(byte *)(local_190 + -1 + lVar29);
        if (plVar17 == (long *)0xff) goto LAB_006141c9;
LAB_00614189:
        if (plVar37 <= plVar17) goto LAB_00614bbc;
        *(char *)(local_190 + -1 + lVar29) = *(char *)((long)plVar21 + (long)plVar17);
        plVar17 = (long *)(ulong)*(byte *)(local_190 + lVar29);
        if (plVar17 != (long *)0xff) goto LAB_006141ed;
LAB_00614130:
        *(char *)(local_190 + lVar29) = cVar11;
        lVar29 = lVar29 + 3;
      } while (lVar29 != 0x20003);
LAB_0061420e:
      pipeline[509596c7b52975b2]::setup::lookups::_closure_0_
                (&local_90,local_1a8,local_150,"campaigns.csv",0xd);
      lVar29 = __rustc[45371133cddedda4]::__rust_alloc(0x4000,1);
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x4000);
      }
      local_160 = lVar29;
      (*(code *)PTR_memset_00841dd0)(lVar29,0xff,0x4000);
      local_108 = (long *)0x0;
      uStack_100 = 8;
      local_f8 = (long *)0x0;
      local_1b8 = local_88;
      local_1a0 = plVar21;
      if (local_80 != 0) {
        uVar26 = 0;
        uVar24 = 0;
        while (*(char *)((long)local_88 + uVar24) != '\n') {
          uVar24 = uVar24 + 1;
          if (local_80 == uVar24) goto LAB_00614786;
        }
        if (local_80 - 1 != uVar24) {
          plVar31 = (long *)(~uVar24 + local_80);
          local_150 = local_80 - uVar24;
          plVar21 = (long *)((long)local_88 + uVar24);
          local_188 = 8;
          plVar17 = (long *)0x0;
          uVar32 = 0;
          local_180 = 0;
          plVar27 = (long *)0x0;
          local_198 = plVar19;
LAB_006143df:
          lVar29 = 0;
          do {
            lVar16 = uVar24 + 1 + lVar29;
            uVar26 = 0;
            if (((char *)((long)local_1b8 + (long)plVar27))[lVar16] == '\n') break;
            lVar29 = lVar29 + 1;
          } while (~(ulong)plVar27 + local_150 != lVar29);
          plVar37 = (long *)(lVar29 + (long)plVar27);
          if (((char *)((long)local_1b8 + (long)plVar27))[lVar16] != '\n') {
            plVar37 = plVar31;
          }
          local_158 = uVar32;
          if ((plVar37 < plVar27) || (plVar31 < plVar37)) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (plVar27,plVar37,plVar31,&PTR_s_src_setup_rs_002104f0);
          }
          pipeline[509596c7b52975b2]::setup::split2
                    (&local_f0,(char *)((long)plVar21 + (long)plVar27) + 1,
                     (long)plVar37 - (long)plVar27);
          if (local_f0 != (short *)0x0) {
            plVar19 = plVar17;
            if ((((local_d8 != 0) && (1 < local_e8)) && (*local_f0 == 0x5f63)) &&
               (uVar26 = local_e8 - 3, uVar26 < 8)) {
              uVar26 = local_e8 - 2;
              uVar32 = 2;
              do {
                if (local_e8 == uVar32) {
                  if (uVar26 == 0) goto LAB_00614c0a;
                  if ((uVar26 != 1) && ((char)local_f0[1] == '0')) break;
                  bVar23 = (char)local_f0[1] - 0x30;
                  uVar32 = (ulong)bVar23;
                  if (uVar26 != 1) {
                    uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 3) - 0x30) + (uint)bVar23 * 10;
                    uVar32 = (ulong)uVar20;
                    if (uVar26 != 2) {
                      uVar20 = (uint)(byte)((char)local_f0[2] - 0x30) + uVar20 * 10;
                      uVar32 = (ulong)uVar20;
                      if (uVar26 != 3) {
                        uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 5) - 0x30) + uVar20 * 10;
                        uVar32 = (ulong)uVar20;
                        if (uVar26 != 4) {
                          uVar20 = (uint)(byte)((char)local_f0[3] - 0x30) + uVar20 * 10;
                          uVar32 = (ulong)uVar20;
                          if (uVar26 != 5) {
                            uVar20 = (uint)(byte)(*(char *)((long)local_f0 + 7) - 0x30) +
                                     uVar20 * 10;
                            uVar32 = (ulong)uVar20;
                            if (uVar26 != 6) {
                              uVar20 = (uint)(byte)((char)local_f0[4] - 0x30) + uVar20 * 10;
                              uVar32 = (ulong)uVar20;
                              if (uVar26 != 7) {
                                uVar26 = (ulong)(uVar20 * 5);
                                uVar32 = (ulong)((uint)(byte)(*(char *)((long)local_f0 + 9) - 0x30)
                                                + uVar20 * 10);
                              }
                            }
                          }
                        }
                      }
                      if (0x3fff < (uint)uVar32) break;
                    }
                  }
                  uVar26 = uVar32;
                  if (*(char *)(local_160 + uVar26) == -1) {
                    lVar29 = local_d8;
                    pcVar33 = local_e0;
                    local_110 = plVar21;
                    local_d0 = uVar26;
                    if (plVar17 == (long *)0x0) goto LAB_00614685;
                    uVar26 = (long)plVar17 * 0x18;
                    uVar36 = 0;
                    local_168 = local_d8;
                    local_170 = local_e0;
                    uVar32 = local_188;
                    plVar21 = (long *)0x0;
                    local_c8 = uVar26;
                    goto LAB_0061462a;
                  }
                  break;
                }
                pcVar33 = (char *)((long)local_f0 + uVar32);
                uVar32 = uVar32 + 1;
              } while ((byte)(*pcVar33 - 0x30U) < 10);
            }
            goto LAB_006145d3;
          }
          uVar32 = CONCAT71((int7)(uVar26 >> 8),1);
          goto LAB_006143cd;
        }
      }
      uVar26 = 0;
LAB_00614786:
      *local_b0 = 0x20001;
      local_b0[1] = lVar28;
      local_b0[2] = 0x20001;
      local_b0[3] = local_148;
      local_b0[4] = plStack_140;
      local_b0[5] = local_138;
      local_b0[9] = local_108;
      local_b0[10] = uStack_100;
      local_b0[0xb] = local_f8;
      local_b0[6] = 0x4000;
      local_b0[7] = local_160;
      local_b0[8] = 0x4000;
      local_b0[0xc] = uVar26;
      if (local_90 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (long *)0x0) ||
            (local_1b8 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_1b8)) {
          free(local_1b8);
        }
        else {
          uVar26 = 0x10;
          if (0x10 < local_90) {
            uVar26 = local_90;
          }
          lVar28 = LZCOUNT(uVar26 - 1);
          lVar29 = 0x40 - lVar28;
          if ((uVar26 - 1 < 0x10000) ||
             (cVar11 = pipeline[509596c7b52975b2]::sys::big_put(local_1b8,lVar29), cVar11 == '\0'))
          {
            if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *local_1b8 = *(long *)(in_FS_OFFSET + lVar29 * 8 + -0x3c8);
            *(long **)(in_FS_OFFSET + lVar29 * 8 + -0x3c8) = local_1b8;
          }
        }
      }
      plVar21 = local_1a0;
      if ((char)local_12c == '\0') {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (long *)0x0) ||
            (local_1a0 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_1a0)) {
          free(local_1a0);
        }
        else {
          plVar37 = (long *)&DAT_00000010;
          if (&DAT_00000010 < local_1b0) {
            plVar37 = local_1b0;
          }
          lVar28 = 0x40 - LZCOUNT((char *)((long)plVar37 + -1));
          if (((char *)((long)plVar37 + -1) < (char *)0x10000) ||
             (cVar11 = pipeline[509596c7b52975b2]::sys::big_put(local_1a0,lVar28), cVar11 == '\0'))
          {
            *plVar21 = *(long *)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
            *(long **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = plVar21;
          }
        }
        if (((long *)((long)pipeline[509596c7b52975b2]::sys::A_BASE_0 + -1) < local_178) &&
           (local_178 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          uVar26 = (long)local_1b0 * 0x10 - 1;
          lVar28 = 0x40 - LZCOUNT(uVar26);
          if ((uVar26 < 0x10000) ||
             (cVar11 = pipeline[509596c7b52975b2]::sys::big_put(local_178,lVar28), cVar11 == '\0'))
          {
            *plVar19 = *(long *)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
            *(long **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = local_178;
          }
        }
        else {
          free(plVar19);
        }
      }
      core[62e902411887be45]::ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_128);
      plVar21 = local_c0;
      if (local_a8 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (long *)0x0) ||
            (local_c0 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_c0)) {
          free(local_c0);
        }
        else {
          uVar26 = 0x10;
          if (0x10 < local_a8) {
            uVar26 = local_a8;
          }
          lVar29 = LZCOUNT(uVar26 - 1);
          lVar28 = 0x40 - lVar29;
          if ((uVar26 - 1 < 0x10000) ||
             (cVar11 = pipeline[509596c7b52975b2]::sys::big_put(local_c0,lVar28), cVar11 == '\0')) {
            if (lVar29 == 0) goto LAB_00614c75;
            *plVar21 = *(long *)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
            *(long **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = plVar21;
          }
        }
      }
      uVar26 = *local_b8;
      if (uVar26 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (long *)0x0) ||
            (local_1a8 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_1a8)) {
          free(local_1a8);
        }
        else {
          uVar24 = 0x10;
          if (0x10 < uVar26) {
            uVar24 = uVar26;
          }
          lVar29 = LZCOUNT(uVar24 - 1);
          lVar28 = 0x40 - lVar29;
          if ((uVar24 - 1 < 0x10000) ||
             (cVar11 = pipeline[509596c7b52975b2]::sys::big_put(local_1a8,lVar28), cVar11 == '\0'))
          {
            if (lVar29 == 0) {
LAB_00614c75:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar28,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *local_1a8 = *(long *)(in_FS_OFFSET + lVar28 * 8 + -0x3c8);
            *(long **)(in_FS_OFFSET + lVar28 * 8 + -0x3c8) = local_1a8;
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pipeline[509596c7b52975b2]::sys::fallback
            ("products.csv is not canonical, or has too many categories",0x39);
}


// ==== core::slice::sort::stable::driftsort_main::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}, alloc::vec::Vec<pipeline::setup::LFile>> @ 006163c0 (248 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>
          (undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_1020;
  long local_1018;
  undefined8 local_1010;
  
  local_1020 = 0;
  uVar1 = param_2 - (param_2 >> 1);
  uVar2 = 0x22e09;
  if (param_2 < 0x22e09) {
    uVar2 = param_2;
  }
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  if (0x49 < uVar2) {
    if (uVar1 < 0x24924924924924a) {
      lVar3 = uVar2 * 0x38;
      if (lVar3 == 0) {
        local_1018 = 8;
        uVar2 = 0;
      }
      else {
        local_1018 = __rustc[45371133cddedda4]::__rust_alloc(lVar3,8);
        if (local_1018 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar3);
        }
      }
      local_1010 = 0;
      local_1020 = uVar2;
      drift::sort::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                (param_1,param_2,local_1018,uVar2,param_2 < 0x41);
      ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>
                (&local_1020);
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}> @ 006199c0 (506 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}>
    */

long __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
          (long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar8 = param_4 * 0xe0;
    lVar9 = param_4 * 0x188;
    param_1 = <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                        (param_1,param_1 + lVar8,param_1 + lVar9);
    param_2 = <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                        (param_2,param_2 + lVar8,param_2 + lVar9,param_4);
    param_3 = <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                        (param_3,lVar8 + param_3,lVar9 + param_3,param_4);
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x28);
  bVar10 = uVar1 < uVar2;
  if (uVar1 == uVar2) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x20);
    uVar6 = uVar3;
    if (uVar7 < uVar3) {
      uVar6 = uVar7;
    }
    iVar5 = (*(code *)PTR_memcmp_008420a0)
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),uVar6);
    lVar8 = uVar7 - uVar3;
    if (iVar5 != 0) {
      lVar8 = (long)iVar5;
    }
    if (lVar8 == 0) {
      uVar7 = *(ulong *)(param_2 + 0x10);
      uVar3 = *(ulong *)(param_1 + 0x10);
      uVar6 = uVar7;
      if (uVar3 < uVar7) {
        uVar6 = uVar3;
      }
      iVar5 = (*(code *)PTR_memcmp_008420a0)
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),uVar6);
      lVar8 = uVar3 - uVar7;
      if (iVar5 != 0) {
        lVar8 = (long)iVar5;
      }
    }
    bVar10 = SUB81((ulong)lVar8 >> 0x3f,0);
    uVar7 = *(ulong *)(param_3 + 0x28);
  }
  else {
    uVar7 = *(ulong *)(param_3 + 0x28);
  }
  if (uVar7 == uVar2) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(ulong *)(param_3 + 0x20);
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = uVar2;
    }
    iVar5 = (*(code *)PTR_memcmp_008420a0)
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_3 + 0x18),uVar6);
    lVar8 = uVar2 - uVar3;
    if (iVar5 != 0) {
      lVar8 = (long)iVar5;
    }
    if (lVar8 == 0) {
      uVar2 = *(ulong *)(param_3 + 0x10);
      uVar3 = *(ulong *)(param_1 + 0x10);
      uVar6 = uVar2;
      if (uVar3 < uVar2) {
        uVar6 = uVar3;
      }
      iVar5 = (*(code *)PTR_memcmp_008420a0)
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8),uVar6);
      cVar4 = (char)(uVar3 - uVar2 >> 0x38);
      if (iVar5 != 0) {
        cVar4 = (char)((ulong)(long)iVar5 >> 0x38);
      }
    }
    else {
      cVar4 = (char)((ulong)lVar8 >> 0x38);
    }
    if (bVar10 != (bool)-(cVar4 >> 7)) {
      return param_1;
    }
  }
  else if (bVar10 != uVar7 < uVar2) {
    return param_1;
  }
  bVar11 = uVar7 < uVar1;
  if (uVar7 == uVar1) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_3 + 0x20);
    uVar7 = uVar2;
    if (uVar1 < uVar2) {
      uVar7 = uVar1;
    }
    iVar5 = (*(code *)PTR_memcmp_008420a0)
                      (*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18),uVar7);
    lVar8 = uVar1 - uVar2;
    if (iVar5 != 0) {
      lVar8 = (long)iVar5;
    }
    if (lVar8 == 0) {
      uVar1 = *(ulong *)(param_3 + 0x10);
      uVar2 = *(ulong *)(param_2 + 0x10);
      uVar7 = uVar1;
      if (uVar2 < uVar1) {
        uVar7 = uVar2;
      }
      iVar5 = (*(code *)PTR_memcmp_008420a0)
                        (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8),uVar7);
      lVar8 = uVar2 - uVar1;
      if (iVar5 != 0) {
        lVar8 = (long)iVar5;
      }
    }
    bVar11 = SUB81((ulong)lVar8 >> 0x3f,0);
  }
  if (bVar10 != bVar11) {
    param_2 = param_3;
  }
  return param_2;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}> @ 0061ce80 (806 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
          (long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
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
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  uVar13 = (ulong)(*(ulong *)(param_1 + 0x28) < *(ulong *)(param_1 + 0x60));
  if (*(ulong *)(param_1 + 0x28) == *(ulong *)(param_1 + 0x60)) {
    uVar13 = *(ulong *)(param_1 + 0x58);
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar12 = uVar1;
    if (uVar13 < uVar1) {
      uVar12 = uVar13;
    }
    iVar9 = (*(code *)PTR_memcmp_008420a0)
                      (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x18),uVar12);
    uVar13 = uVar13 - uVar1;
    if (iVar9 != 0) {
      uVar13 = (long)iVar9;
    }
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(param_1 + 0x10);
      uVar1 = *(ulong *)(param_1 + 0x48);
      uVar12 = uVar13;
      if (uVar1 < uVar13) {
        uVar12 = uVar1;
      }
      iVar9 = (*(code *)PTR_memcmp_008420a0)
                        (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 8),uVar12);
      uVar13 = uVar1 - uVar13;
      if (iVar9 != 0) {
        uVar13 = (long)iVar9;
      }
    }
    uVar13 = uVar13 >> 0x3f;
  }
  bVar20 = *(ulong *)(param_1 + 0x98) < *(ulong *)(param_1 + 0xd0);
  if (*(ulong *)(param_1 + 0x98) == *(ulong *)(param_1 + 0xd0)) {
    uVar1 = *(ulong *)(param_1 + 200);
    uVar12 = *(ulong *)(param_1 + 0x90);
    uVar11 = uVar12;
    if (uVar1 < uVar12) {
      uVar11 = uVar1;
    }
    iVar9 = (*(code *)PTR_memcmp_008420a0)
                      (*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x88),uVar11);
    lVar14 = uVar1 - uVar12;
    if (iVar9 != 0) {
      lVar14 = (long)iVar9;
    }
    if (lVar14 == 0) {
      uVar1 = *(ulong *)(param_1 + 0x80);
      uVar12 = *(ulong *)(param_1 + 0xb8);
      uVar11 = uVar1;
      if (uVar12 < uVar1) {
        uVar11 = uVar12;
      }
      iVar9 = (*(code *)PTR_memcmp_008420a0)
                        (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x78),uVar11);
      lVar14 = uVar12 - uVar1;
      if (iVar9 != 0) {
        lVar14 = (long)iVar9;
      }
    }
    bVar20 = SUB81((ulong)lVar14 >> 0x3f,0);
  }
  puVar10 = (undefined8 *)(param_1 + uVar13 * 0x38);
  puVar17 = (undefined8 *)((ulong)(byte)((byte)uVar13 ^ 1) * 0x38 + param_1);
  puVar19 = (undefined8 *)(param_1 + 0xa8);
  puVar16 = (undefined8 *)(param_1 + 0x70);
  if (bVar20 != false) {
    puVar19 = (undefined8 *)(param_1 + 0x70);
    puVar16 = (undefined8 *)(param_1 + 0xa8);
  }
  uVar13 = *(ulong *)(param_1 + 0x28 + uVar13 * 0x38);
  bVar20 = uVar13 < (ulong)puVar16[5];
  if (uVar13 == puVar16[5]) {
    uVar13 = puVar16[4];
    uVar1 = puVar10[4];
    uVar12 = uVar1;
    if (uVar13 < uVar1) {
      uVar12 = uVar13;
    }
    iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar16[3],puVar10[3],uVar12);
    lVar14 = uVar13 - uVar1;
    if (iVar9 != 0) {
      lVar14 = (long)iVar9;
    }
    if (lVar14 == 0) {
      uVar13 = puVar10[2];
      uVar1 = puVar16[2];
      uVar12 = uVar13;
      if (uVar1 < uVar13) {
        uVar12 = uVar1;
      }
      iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar16[1],puVar10[1],uVar12);
      lVar14 = uVar1 - uVar13;
      if (iVar9 != 0) {
        lVar14 = (long)iVar9;
      }
    }
    bVar20 = SUB81((ulong)lVar14 >> 0x3f,0);
  }
  bVar21 = (ulong)puVar17[5] < (ulong)puVar19[5];
  if (puVar17[5] == puVar19[5]) {
    uVar13 = puVar19[4];
    uVar1 = puVar17[4];
    uVar12 = uVar1;
    if (uVar13 < uVar1) {
      uVar12 = uVar13;
    }
    iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar19[3],puVar17[3],uVar12);
    lVar14 = uVar13 - uVar1;
    if (iVar9 != 0) {
      lVar14 = (long)iVar9;
    }
    if (lVar14 == 0) {
      uVar13 = puVar17[2];
      uVar1 = puVar19[2];
      uVar12 = uVar13;
      if (uVar1 < uVar13) {
        uVar12 = uVar1;
      }
      iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar19[1],puVar17[1],uVar12);
      lVar14 = uVar1 - uVar13;
      if (iVar9 != 0) {
        lVar14 = (long)iVar9;
      }
    }
    bVar21 = SUB81((ulong)lVar14 >> 0x3f,0);
  }
  puVar18 = puVar17;
  if (bVar21 != false) {
    puVar18 = puVar16;
  }
  puVar15 = puVar16;
  if (bVar20 != false) {
    puVar15 = puVar17;
    puVar18 = puVar10;
  }
  if (bVar21 != false) {
    puVar15 = puVar19;
  }
  bVar22 = (ulong)puVar18[5] < (ulong)puVar15[5];
  if (puVar18[5] == puVar15[5]) {
    uVar13 = puVar15[4];
    uVar1 = puVar18[4];
    uVar12 = uVar1;
    if (uVar13 < uVar1) {
      uVar12 = uVar13;
    }
    iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar15[3],puVar18[3],uVar12);
    lVar14 = uVar13 - uVar1;
    if (iVar9 != 0) {
      lVar14 = (long)iVar9;
    }
    if (lVar14 == 0) {
      uVar13 = puVar18[2];
      uVar1 = puVar15[2];
      uVar12 = uVar13;
      if (uVar1 < uVar13) {
        uVar12 = uVar1;
      }
      iVar9 = (*(code *)PTR_memcmp_008420a0)(puVar15[1],puVar18[1],uVar12);
      lVar14 = uVar1 - uVar13;
      if (iVar9 != 0) {
        lVar14 = (long)iVar9;
      }
    }
    bVar22 = SUB81((ulong)lVar14 >> 0x3f,0);
  }
  if (bVar21 != false) {
    puVar19 = puVar17;
  }
  if (bVar20 != false) {
    puVar10 = puVar16;
  }
  puVar16 = puVar15;
  if (bVar22 != false) {
    puVar16 = puVar18;
    puVar18 = puVar15;
  }
  uVar2 = *puVar10;
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  param_2[3] = puVar10[3];
  param_2[4] = uVar6;
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  uVar2 = *puVar18;
  uVar3 = puVar18[1];
  uVar4 = puVar18[2];
  uVar5 = puVar18[3];
  uVar6 = puVar18[4];
  uVar7 = puVar18[5];
  uVar8 = puVar18[6];
  param_2[10] = puVar18[3];
  param_2[0xb] = uVar6;
  param_2[0xc] = uVar7;
  param_2[0xd] = uVar8;
  param_2[7] = uVar2;
  param_2[8] = uVar3;
  param_2[9] = uVar4;
  param_2[10] = uVar5;
  uVar2 = *puVar16;
  uVar3 = puVar16[1];
  uVar4 = puVar16[2];
  uVar5 = puVar16[3];
  uVar6 = puVar16[4];
  uVar7 = puVar16[5];
  uVar8 = puVar16[6];
  param_2[0x11] = puVar16[3];
  param_2[0x12] = uVar6;
  param_2[0x13] = uVar7;
  param_2[0x14] = uVar8;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  param_2[0x10] = uVar4;
  param_2[0x11] = uVar5;
  uVar2 = puVar19[1];
  uVar3 = puVar19[2];
  uVar4 = puVar19[3];
  uVar5 = puVar19[3];
  uVar6 = puVar19[4];
  uVar7 = puVar19[5];
  uVar8 = puVar19[6];
  param_2[0x15] = *puVar19;
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar3;
  param_2[0x18] = uVar4;
  param_2[0x18] = uVar5;
  param_2[0x19] = uVar6;
  param_2[0x1a] = uVar7;
  param_2[0x1b] = uVar8;
  return;
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}> @ 00623c80 (695 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
          (undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  undefined8 local_48;
  ulong local_40;
  
  puVar12 = PTR_memcmp_008420a0;
  lVar20 = 0;
  puVar17 = param_1 + 7;
  puVar15 = param_1;
  do {
    puVar14 = puVar17;
    uVar1 = puVar15[0xc];
    bVar23 = (ulong)puVar15[5] < uVar1;
    if (puVar15[5] == uVar1) {
      uVar19 = puVar15[10];
      uVar18 = puVar15[0xb];
      uVar2 = puVar15[4];
      uVar16 = uVar2;
      if (uVar18 < uVar2) {
        uVar16 = uVar18;
      }
      iVar13 = (*(code *)puVar12)(uVar19,puVar15[3],uVar16);
      lVar21 = uVar18 - uVar2;
      if (iVar13 != 0) {
        lVar21 = (long)iVar13;
      }
      if (lVar21 != 0) {
        bVar23 = SUB81((ulong)lVar21 >> 0x3f,0);
        goto code_r0x00623d80;
      }
      uVar2 = puVar15[2];
      local_40 = puVar15[9];
      local_48 = puVar15[8];
      uVar16 = uVar2;
      if (local_40 < uVar2) {
        uVar16 = local_40;
      }
      iVar13 = (*(code *)puVar12)(local_48,puVar15[1],uVar16);
      lVar21 = local_40 - uVar2;
      if (iVar13 != 0) {
        lVar21 = (long)iVar13;
      }
      if (lVar21 < 0) goto LAB_00623da6;
    }
    else {
code_r0x00623d80:
      if (bVar23 != false) {
        local_48 = puVar15[8];
        local_40 = puVar15[9];
        uVar19 = puVar15[10];
        uVar18 = puVar15[0xb];
LAB_00623da6:
        uVar3 = puVar15[7];
        uVar5 = *puVar15;
        uVar6 = puVar15[1];
        uVar7 = puVar15[2];
        uVar8 = puVar15[3];
        uVar9 = puVar15[4];
        uVar10 = puVar15[5];
        uVar11 = puVar15[6];
        uVar4 = puVar15[0xd];
        puVar14[3] = puVar15[3];
        puVar14[4] = uVar9;
        puVar14[5] = uVar10;
        puVar14[6] = uVar11;
        *puVar14 = uVar5;
        puVar14[1] = uVar6;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
        puVar17 = param_1;
        lVar21 = lVar20;
        if (puVar15 != param_1) {
          do {
            puVar17 = (undefined8 *)((long)param_1 + lVar21);
            uVar2 = *(ulong *)((long)param_1 + lVar21 + -0x10);
            bVar23 = uVar2 < uVar1;
            if (uVar2 == uVar1) {
              uVar2 = *(ulong *)((long)param_1 + lVar21 + -0x18);
              uVar16 = uVar2;
              if (uVar18 < uVar2) {
                uVar16 = uVar18;
              }
              iVar13 = (*(code *)puVar12)(uVar19,*(undefined8 *)((long)param_1 + lVar21 + -0x20),
                                          uVar16);
              lVar22 = uVar18 - uVar2;
              if (iVar13 != 0) {
                lVar22 = (long)iVar13;
              }
              if (lVar22 != 0) {
                bVar23 = SUB81((ulong)lVar22 >> 0x3f,0);
                goto LAB_00623e16;
              }
              uVar2 = *(ulong *)((long)param_1 + lVar21 + -0x28);
              uVar16 = uVar2;
              if (local_40 < uVar2) {
                uVar16 = local_40;
              }
              iVar13 = (*(code *)puVar12)(local_48,*(undefined8 *)((long)param_1 + lVar21 + -0x30),
                                          uVar16);
              lVar22 = local_40 - uVar2;
              if (iVar13 != 0) {
                lVar22 = (long)iVar13;
              }
              if (-1 < lVar22) goto LAB_00623ccc;
            }
            else {
LAB_00623e16:
              if (bVar23 == false) {
                puVar17 = puVar15;
                goto LAB_00623ccc;
              }
            }
            uVar5 = *(undefined8 *)((long)param_1 + lVar21 + -0x38);
            uVar6 = *(undefined8 *)((long)param_1 + lVar21 + -0x30);
            uVar7 = *(undefined8 *)((long)param_1 + lVar21 + -0x28);
            uVar8 = *(undefined8 *)((long)param_1 + lVar21 + -0x20);
            uVar9 = *(undefined8 *)((long)param_1 + lVar21 + -0x18);
            uVar10 = *(undefined8 *)((long)param_1 + lVar21 + -0x10);
            uVar11 = *(undefined8 *)((long)param_1 + lVar21 + -8);
            puVar15 = puVar15 + -7;
            puVar17[3] = *(undefined8 *)((long)param_1 + lVar21 + -0x20);
            puVar17[4] = uVar9;
            puVar17[5] = uVar10;
            puVar17[6] = uVar11;
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            puVar17[2] = uVar7;
            puVar17[3] = uVar8;
            lVar21 = lVar21 + -0x38;
          } while (lVar21 != 0);
          puVar17 = param_1;
        }
LAB_00623ccc:
        *puVar17 = uVar3;
        puVar17[1] = local_48;
        puVar17[2] = local_40;
        puVar17[3] = uVar19;
        puVar17[4] = uVar18;
        puVar17[5] = uVar1;
        puVar17[6] = uVar4;
      }
    }
    lVar20 = lVar20 + 0x38;
    puVar17 = puVar14 + 7;
    puVar15 = puVar14;
    if (puVar14 + 7 == param_1 + param_2 * 7) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::stable::drift::sort::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}> @ 006290e0 (2437 bytes)

/* WARNING: Type propagation algorithm not settling */
/* core[62e902411887be45]::slice::sort::stable::drift::sort::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
          (long param_1,ulong param_2,undefined8 *param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong uVar31;
  bool bVar32;
  ulong local_318;
  byte abStack_283 [67];
  ulong auStack_240 [66];
  
  uVar12 = param_2 + 0x3fffffffffffffff;
  if ((uVar12 | param_2) >> 0x20 == 0) {
    uVar12 = (uVar12 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    uVar12 = uVar12 / param_2;
  }
  if (param_2 < 0x1001) {
    uVar14 = param_2 - (param_2 >> 1);
    uVar13 = 0x40;
    if (uVar14 < 0x40) {
      uVar13 = uVar14;
    }
  }
  else {
    uVar10 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar13 = (ulong)(uVar10 - (uVar10 >> 1));
    uVar13 = (param_2 >> (uVar13 & 0x3f)) + (1L << (uVar13 & 0x3f)) >> 1;
  }
  uVar14 = 1;
  uVar20 = 0;
  uVar26 = 0;
  uVar28 = param_2;
  pcVar24 = (code *)PTR_memcmp_008420a0;
  if (param_2 == 0) goto LAB_00629260;
LAB_006291e0:
  lVar25 = uVar20 * 0x38;
  lVar15 = param_1 + lVar25;
  if (uVar28 < uVar13) {
LAB_00629206:
    if (param_5 == '\0') {
      if (uVar13 < uVar28) {
        uVar28 = uVar13;
      }
      local_318 = uVar28 * 2;
    }
    else {
      if (0x1f < uVar28) {
        uVar28 = 0x20;
      }
      quicksort::quicksort::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                (lVar15,uVar28,param_3,param_4,0,0);
      local_318 = (uVar28 & 0xffffffff) * 2 + 1;
      pcVar24 = (code *)PTR_memcmp_008420a0;
    }
    goto LAB_006292c7;
  }
  local_318 = uVar28;
  if (uVar28 < 2) {
LAB_0062928e:
  }
  else {
    uVar27 = *(ulong *)(lVar15 + 0x60);
    bVar32 = *(ulong *)(lVar15 + 0x28) < uVar27;
    if (*(ulong *)(lVar15 + 0x28) == uVar27) {
      uVar1 = *(ulong *)(lVar15 + 0x58);
      uVar30 = *(ulong *)(lVar15 + 0x20);
      uVar31 = uVar30;
      if (uVar1 < uVar30) {
        uVar31 = uVar1;
      }
      iVar11 = (*pcVar24)(*(undefined8 *)(lVar15 + 0x50),*(undefined8 *)(lVar15 + 0x18),uVar31);
      lVar21 = uVar1 - uVar30;
      if (iVar11 != 0) {
        lVar21 = (long)iVar11;
      }
      if (lVar21 != 0) {
        bVar32 = SUB81((ulong)lVar21 >> 0x3f,0);
        goto LAB_00629762;
      }
      uVar1 = *(ulong *)(lVar15 + 0x10);
      uVar30 = *(ulong *)(lVar15 + 0x48);
      uVar31 = uVar1;
      if (uVar30 < uVar1) {
        uVar31 = uVar30;
      }
      iVar11 = (*pcVar24)(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 8),uVar31);
      lVar21 = uVar30 - uVar1;
      if (iVar11 != 0) {
        lVar21 = (long)iVar11;
      }
      if (lVar21 < 0) goto LAB_0062976a;
LAB_00629895:
      if (uVar28 == 2) {
        bVar32 = false;
        goto joined_r0x006298ad;
      }
      puVar22 = (ulong *)(param_1 + 0x98 + lVar25);
      local_318 = 2;
      do {
        uVar1 = *puVar22;
        bVar32 = uVar27 < uVar1;
        if (uVar27 == uVar1) {
          uVar27 = puVar22[-1];
          uVar30 = puVar22[-8];
          uVar31 = uVar30;
          if (uVar27 < uVar30) {
            uVar31 = uVar27;
          }
          iVar11 = (*pcVar24)(puVar22[-2],puVar22[-9],uVar31);
          lVar21 = uVar27 - uVar30;
          if (iVar11 != 0) {
            lVar21 = (long)iVar11;
          }
          if (lVar21 != 0) {
            bVar32 = SUB81((ulong)lVar21 >> 0x3f,0);
            goto LAB_006298e0;
          }
          uVar27 = puVar22[-10];
          uVar30 = puVar22[-3];
          uVar31 = uVar27;
          if (uVar30 < uVar27) {
            uVar31 = uVar30;
          }
          iVar11 = (*pcVar24)(puVar22[-4],puVar22[-0xb],uVar31);
          lVar21 = uVar30 - uVar27;
          if (iVar11 != 0) {
            lVar21 = (long)iVar11;
          }
          if (lVar21 < 0) goto LAB_0062996e;
        }
        else {
LAB_006298e0:
          if (bVar32 != false) {
LAB_0062996e:
            goto LAB_00629977;
          }
        }
        local_318 = local_318 + 1;
        puVar22 = puVar22 + 7;
        uVar27 = uVar1;
      } while (uVar28 != local_318);
      local_318 = uVar28;
LAB_00629977:
      bVar32 = false;
joined_r0x0062998b:
      if (local_318 < uVar13) goto LAB_00629206;
    }
    else {
LAB_00629762:
      if (bVar32 == false) goto LAB_00629895;
LAB_0062976a:
      local_318 = 2;
      bVar32 = true;
      if (uVar28 != 2) {
        puVar22 = (ulong *)(param_1 + 0x98 + lVar25);
        do {
          uVar1 = *puVar22;
          bVar32 = uVar27 < uVar1;
          if (uVar27 == uVar1) {
            uVar27 = puVar22[-1];
            uVar30 = puVar22[-8];
            uVar31 = uVar30;
            if (uVar27 < uVar30) {
              uVar31 = uVar27;
            }
            iVar11 = (*pcVar24)(puVar22[-2],puVar22[-9],uVar31);
            lVar21 = uVar27 - uVar30;
            if (iVar11 != 0) {
              lVar21 = (long)iVar11;
            }
            if (lVar21 != 0) {
              bVar32 = SUB81((ulong)lVar21 >> 0x3f,0);
              goto LAB_006297c0;
            }
            uVar27 = puVar22[-10];
            uVar30 = puVar22[-3];
            uVar31 = uVar27;
            if (uVar30 < uVar27) {
              uVar31 = uVar30;
            }
            iVar11 = (*pcVar24)(puVar22[-4],puVar22[-0xb],uVar31);
            lVar21 = uVar30 - uVar27;
            if (iVar11 != 0) {
              lVar21 = (long)iVar11;
            }
            if (-1 < lVar21) goto LAB_00629996;
          }
          else {
LAB_006297c0:
            if (bVar32 == false) goto LAB_00629996;
          }
          local_318 = local_318 + 1;
          puVar22 = puVar22 + 7;
          uVar27 = uVar1;
        } while (uVar28 != local_318);
        local_318 = uVar28;
LAB_00629996:
        bVar32 = true;
        goto joined_r0x0062998b;
      }
joined_r0x006298ad:
      local_318 = 2;
      if (2 < uVar13) goto LAB_00629206;
    }
    if (!bVar32) goto LAB_0062928e;
    uVar28 = local_318 >> 1;
    if (uVar28 != 0) {
      puVar19 = (undefined8 *)(param_1 + 0x30 + lVar25);
      puVar17 = (undefined8 *)(local_318 * 0x38 + lVar25 + param_1 + -8);
      do {
        uVar2 = puVar19[-6];
        uVar3 = puVar19[-5];
        uVar4 = puVar19[-4];
        uVar5 = puVar19[-3];
        uVar6 = puVar17[-5];
        uVar7 = puVar17[-4];
        uVar8 = puVar17[-3];
        puVar19[-6] = puVar17[-6];
        puVar19[-5] = uVar6;
        puVar19[-4] = uVar7;
        puVar19[-3] = uVar8;
        puVar17[-6] = uVar2;
        puVar17[-5] = uVar3;
        puVar17[-4] = uVar4;
        puVar17[-3] = uVar5;
        uVar2 = puVar19[-2];
        uVar3 = puVar19[-1];
        uVar4 = puVar17[-1];
        puVar19[-2] = puVar17[-2];
        puVar19[-1] = uVar4;
        puVar17[-2] = uVar2;
        puVar17[-1] = uVar3;
        uVar2 = *puVar19;
        *puVar19 = *puVar17;
        *puVar17 = uVar2;
        puVar19 = puVar19 + 7;
        puVar17 = puVar17 + -7;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      pcVar24 = (code *)PTR_memcmp_008420a0;
    }
  }
  local_318 = local_318 * 2 + 1;
LAB_006292c7:
  lVar15 = LZCOUNT(((local_318 >> 1) + uVar20 * 2) * uVar12 ^ (uVar20 * 2 - (uVar14 >> 1)) * uVar12)
  ;
  uVar28 = uVar14;
  do {
    uVar14 = local_318;
    if (1 < uVar26) {
      do {
        while( true ) {
          if (abStack_283[uVar26] < (byte)lVar15) goto LAB_006296b6;
          uVar26 = uVar26 - 1;
          uVar1 = auStack_240[uVar26];
          uVar30 = uVar1 >> 1;
          uVar31 = uVar28 >> 1;
          uVar27 = uVar30 + uVar31;
          if ((param_4 < uVar27) || ((((uint)uVar1 | (uint)uVar28) & 1) != 0)) break;
          uVar28 = uVar27 * 2;
          if (uVar26 < 2) goto LAB_006296b0;
        }
        puVar19 = (undefined8 *)((uVar20 - uVar27) * 0x38 + param_1);
        if ((uVar1 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                    (puVar19,uVar30,param_3,param_4,(int)LZCOUNT(uVar30 | 1) * 2 ^ 0x7e,0);
          pcVar24 = (code *)PTR_memcmp_008420a0;
        }
        if ((uVar28 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                    (puVar19 + uVar30 * 7,uVar31,param_3,param_4,(int)LZCOUNT(uVar31 | 1) * 2 ^ 0x7e
                     ,0);
          pcVar24 = (code *)PTR_memcmp_008420a0;
        }
        if ((uVar31 != 0) && (uVar30 != 0)) {
          uVar28 = uVar31;
          if (uVar30 < uVar31) {
            uVar28 = uVar30;
          }
          if (uVar28 <= param_4) {
            puVar29 = puVar19 + uVar30 * 7;
            puVar17 = puVar19;
            if (uVar31 < uVar30) {
              puVar17 = puVar29;
            }
            (*(code *)PTR_memcpy_00841de0)(param_3,puVar17,uVar28 * 0x38);
            puVar23 = param_3 + uVar28 * 7;
            puVar17 = param_3;
            if (uVar31 < uVar30) {
              puVar18 = puVar29;
              puVar29 = (undefined8 *)(uVar20 * 0x38 + param_1 + -0x38);
              do {
                puVar9 = PTR_memcmp_008420a0;
                bVar32 = (ulong)puVar18[-2] < (ulong)puVar23[-2];
                if (puVar18[-2] == puVar23[-2]) {
                  uVar28 = puVar23[-3];
                  uVar1 = puVar18[-3];
                  uVar30 = uVar1;
                  if (uVar28 < uVar1) {
                    uVar30 = uVar28;
                  }
                  iVar11 = (*(code *)PTR_memcmp_008420a0)(puVar23[-4],puVar18[-4],uVar30);
                  lVar25 = uVar28 - uVar1;
                  if (iVar11 != 0) {
                    lVar25 = (long)iVar11;
                  }
                  if (lVar25 == 0) {
                    uVar28 = puVar18[-5];
                    uVar1 = puVar23[-5];
                    uVar30 = uVar28;
                    if (uVar1 < uVar28) {
                      uVar30 = uVar1;
                    }
                    iVar11 = (*(code *)puVar9)(puVar23[-6],puVar18[-6],uVar30);
                    lVar25 = uVar1 - uVar28;
                    if (iVar11 != 0) {
                      lVar25 = (long)iVar11;
                    }
                  }
                  bVar32 = SUB81((ulong)lVar25 >> 0x3f,0);
                }
                puVar16 = puVar23 + -7;
                if (bVar32 != false) {
                  puVar16 = puVar18 + -7;
                }
                uVar2 = *puVar16;
                uVar3 = puVar16[1];
                uVar4 = puVar16[2];
                uVar5 = puVar16[3];
                uVar6 = puVar16[4];
                uVar7 = puVar16[5];
                uVar8 = puVar16[6];
                puVar29[3] = puVar16[3];
                puVar29[4] = uVar6;
                puVar29[5] = uVar7;
                puVar29[6] = uVar8;
                *puVar29 = uVar2;
                puVar29[1] = uVar3;
                puVar29[2] = uVar4;
                puVar29[3] = uVar5;
                puVar18 = puVar18 + -7 + (ulong)(bVar32 ^ 1) * 7;
                puVar23 = puVar23 + -7 + (ulong)bVar32 * 7;
              } while ((puVar18 != puVar19) && (puVar29 = puVar29 + -7, puVar23 != param_3));
            }
            else {
              puVar18 = puVar19;
              do {
                puVar9 = PTR_memcmp_008420a0;
                uVar28 = (ulong)((ulong)puVar17[5] < (ulong)puVar29[5]);
                if (puVar17[5] == puVar29[5]) {
                  uVar28 = puVar29[4];
                  uVar1 = puVar17[4];
                  uVar30 = uVar1;
                  if (uVar28 < uVar1) {
                    uVar30 = uVar28;
                  }
                  iVar11 = (*(code *)PTR_memcmp_008420a0)(puVar29[3],puVar17[3],uVar30);
                  uVar28 = uVar28 - uVar1;
                  if (iVar11 != 0) {
                    uVar28 = (long)iVar11;
                  }
                  if (uVar28 == 0) {
                    uVar28 = puVar17[2];
                    uVar1 = puVar29[2];
                    uVar30 = uVar28;
                    if (uVar1 < uVar28) {
                      uVar30 = uVar1;
                    }
                    iVar11 = (*(code *)puVar9)(puVar29[1],puVar17[1],uVar30);
                    uVar28 = uVar1 - uVar28;
                    if (iVar11 != 0) {
                      uVar28 = (long)iVar11;
                    }
                  }
                  uVar28 = uVar28 >> 0x3f;
                }
                puVar19 = puVar17;
                if ((byte)uVar28 != 0) {
                  puVar19 = puVar29;
                }
                uVar2 = *puVar19;
                uVar3 = puVar19[1];
                uVar4 = puVar19[2];
                uVar5 = puVar19[3];
                uVar6 = puVar19[4];
                uVar7 = puVar19[5];
                uVar8 = puVar19[6];
                puVar18[3] = puVar19[3];
                puVar18[4] = uVar6;
                puVar18[5] = uVar7;
                puVar18[6] = uVar8;
                *puVar18 = uVar2;
                puVar18[1] = uVar3;
                puVar18[2] = uVar4;
                puVar18[3] = uVar5;
                puVar17 = puVar17 + (ulong)(byte)((byte)uVar28 ^ 1) * 7;
                puVar18 = puVar18 + 7;
              } while ((puVar17 != puVar23) &&
                      (puVar29 = puVar29 + uVar28 * 7,
                      puVar29 != (undefined8 *)(param_1 + uVar20 * 0x38)));
            }
            (*(code *)PTR_memcpy_00841de0)(puVar18,puVar17,(long)puVar23 - (long)puVar17);
            pcVar24 = (code *)PTR_memcmp_008420a0;
          }
        }
        uVar28 = uVar27 * 2 + 1;
      } while (1 < uVar26);
LAB_006296b0:
      uVar26 = 1;
    }
LAB_006296b6:
    auStack_240[uVar26] = uVar28;
    abStack_283[uVar26 + 1] = (byte)lVar15;
    if (param_2 <= uVar20) {
      if ((uVar28 & 1) == 0) {
        quicksort::quicksort::
        <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                  (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0);
        return;
      }
      return;
    }
    uVar26 = uVar26 + 1;
    uVar20 = uVar20 + (uVar14 >> 1);
    uVar28 = param_2 - uVar20;
    if (uVar20 <= param_2 && uVar28 != 0) goto LAB_006291e0;
LAB_00629260:
    lVar15 = 0;
    local_318 = 1;
    uVar28 = uVar14;
  } while( true );
}


// ==== core::slice::sort::stable::quicksort::quicksort::<pipeline::setup::LFile, <[pipeline::setup::LFile]>::sort_by<pipeline::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}> @ 00634fa0 (4584 bytes)

/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<pipeline[509596c7b52975b2]::setup::LFile,
   <[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  bool bVar29;
  bool bVar30;
  undefined8 *local_b8;
  ulong local_b0;
  ulong local_a0;
  undefined8 local_90;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 < 0x21) {
LAB_00634fcc:
    puVar17 = param_1;
  }
  else {
    do {
      uVar13 = param_2;
LAB_00635040:
      if (param_5 == 0) {
        drift::sort::
        <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                  (param_1,uVar13,param_3,param_4,1);
        return;
      }
      puVar17 = param_1 + (uVar13 >> 3) * 0x1c;
      puVar18 = param_1 + (uVar13 >> 3) * 0x31;
      if (uVar13 < 0x40) {
        uVar22 = puVar17[5];
        uVar26 = param_1[5];
        bVar30 = uVar22 < uVar26;
        if (uVar22 == uVar26) {
          uVar16 = param_1[4];
          uVar23 = puVar17[4];
          uVar20 = uVar23;
          if (uVar16 < uVar23) {
            uVar20 = uVar16;
          }
          iVar12 = (*(code *)PTR_memcmp_008420a0)(param_1[3],puVar17[3],uVar20);
          lVar19 = uVar16 - uVar23;
          if (iVar12 != 0) {
            lVar19 = (long)iVar12;
          }
          if (lVar19 == 0) {
            uVar16 = puVar17[2];
            uVar23 = param_1[2];
            uVar20 = uVar16;
            if (uVar23 < uVar16) {
              uVar20 = uVar23;
            }
            iVar12 = (*(code *)PTR_memcmp_008420a0)(param_1[1],puVar17[1],uVar20);
            lVar19 = uVar23 - uVar16;
            if (iVar12 != 0) {
              lVar19 = (long)iVar12;
            }
          }
          bVar30 = SUB81((ulong)lVar19 >> 0x3f,0);
        }
        uVar16 = puVar18[5];
        bVar29 = uVar16 < uVar26;
        if (uVar16 == uVar26) {
          uVar26 = param_1[4];
          uVar23 = puVar18[4];
          uVar20 = uVar23;
          if (uVar26 < uVar23) {
            uVar20 = uVar26;
          }
          iVar12 = (*(code *)PTR_memcmp_008420a0)(param_1[3],puVar18[3],uVar20);
          lVar19 = uVar26 - uVar23;
          if (iVar12 != 0) {
            lVar19 = (long)iVar12;
          }
          if (lVar19 == 0) {
            uVar26 = puVar18[2];
            uVar23 = param_1[2];
            uVar20 = uVar26;
            if (uVar23 < uVar26) {
              uVar20 = uVar23;
            }
            iVar12 = (*(code *)PTR_memcmp_008420a0)(param_1[1],puVar18[1],uVar20);
            lVar19 = uVar23 - uVar26;
            if (iVar12 != 0) {
              lVar19 = (long)iVar12;
            }
          }
          bVar29 = SUB81((ulong)lVar19 >> 0x3f,0);
        }
        puVar11 = PTR_memcmp_008420a0;
        puVar14 = param_1;
        if (bVar30 == bVar29) {
          bVar29 = uVar16 < uVar22;
          if (uVar16 == uVar22) {
            uVar22 = puVar17[4];
            uVar26 = puVar18[4];
            uVar16 = uVar26;
            if (uVar22 < uVar26) {
              uVar16 = uVar22;
            }
            iVar12 = (*(code *)PTR_memcmp_008420a0)(puVar17[3],puVar18[3],uVar16);
            lVar19 = uVar22 - uVar26;
            if (iVar12 != 0) {
              lVar19 = (long)iVar12;
            }
            if (lVar19 == 0) {
              uVar22 = puVar18[2];
              uVar26 = puVar17[2];
              uVar16 = uVar22;
              if (uVar26 < uVar22) {
                uVar16 = uVar26;
              }
              iVar12 = (*(code *)puVar11)(puVar17[1],puVar18[1],uVar16);
              lVar19 = uVar26 - uVar22;
              if (iVar12 != 0) {
                lVar19 = (long)iVar12;
              }
            }
            bVar29 = SUB81((ulong)lVar19 >> 0x3f,0);
          }
          puVar14 = puVar17;
          if (bVar30 != bVar29) {
            puVar14 = puVar18;
          }
        }
      }
      else {
        puVar14 = (undefined8 *)
                  shared::pivot::median3_rec::
                  <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                            (param_1,puVar17,puVar18);
      }
      puVar11 = PTR_memcmp_008420a0;
      param_5 = param_5 + -1;
      local_68 = *puVar14;
      uStack_60 = puVar14[1];
      uStack_58 = puVar14[2];
      uStack_50 = puVar14[3];
      uStack_48 = puVar14[4];
      uStack_40 = puVar14[5];
      uStack_38 = puVar14[6];
      uVar22 = ((ulong)((long)puVar14 - (long)param_1) >> 3) * 0x6db6db6db6db6db7;
      if (param_6 == 0) goto LAB_006352cf;
      bVar30 = (ulong)puVar14[5] < *(ulong *)(param_6 + 0x28);
      if (puVar14[5] != *(ulong *)(param_6 + 0x28)) {
LAB_006352c2:
        if (bVar30 == false) goto LAB_00635630;
LAB_006352cf:
        if (param_4 < uVar13) goto LAB_006361ac;
        puVar18 = param_3 + uVar13 * 7;
        param_2 = 0;
        uVar26 = uVar22;
        puVar17 = puVar18;
        puVar21 = param_1;
        while( true ) {
          pcVar24 = (code *)PTR_memcmp_008420a0;
          for (; PTR_memcmp_008420a0 = pcVar24, puVar21 < param_1 + uVar26 * 7;
              puVar21 = puVar21 + 7) {
            bVar30 = (ulong)puVar14[5] < (ulong)puVar21[5];
            if (puVar14[5] == puVar21[5]) {
              uVar16 = puVar21[4];
              uVar23 = puVar14[4];
              uVar20 = uVar23;
              if (uVar16 < uVar23) {
                uVar20 = uVar16;
              }
              iVar12 = (*pcVar24)(puVar21[3],puVar14[3],uVar20);
              lVar19 = uVar16 - uVar23;
              if (iVar12 != 0) {
                lVar19 = (long)iVar12;
              }
              if (lVar19 == 0) {
                uVar16 = puVar14[2];
                uVar23 = puVar21[2];
                uVar20 = uVar16;
                if (uVar23 < uVar16) {
                  uVar20 = uVar23;
                }
                iVar12 = (*pcVar24)(puVar21[1],puVar14[1],uVar20);
                lVar19 = uVar23 - uVar16;
                if (iVar12 != 0) {
                  lVar19 = (long)iVar12;
                }
              }
              bVar30 = SUB81((ulong)lVar19 >> 0x3f,0);
            }
            puVar17 = puVar17 + -7;
            puVar15 = puVar17;
            if (bVar30 != false) {
              puVar15 = param_3;
            }
            uVar27 = *puVar21;
            uVar2 = puVar21[1];
            uVar3 = puVar21[2];
            uVar4 = puVar21[3];
            uVar5 = puVar21[4];
            uVar6 = puVar21[5];
            uVar7 = puVar21[6];
            puVar1 = puVar15 + param_2 * 7 + 3;
            *puVar1 = puVar21[3];
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar15 = puVar15 + param_2 * 7;
            *puVar15 = uVar27;
            puVar15[1] = uVar2;
            puVar15[2] = uVar3;
            puVar15[3] = uVar4;
            param_2 = param_2 + bVar30;
            pcVar24 = (code *)PTR_memcmp_008420a0;
          }
          if (uVar26 == uVar13) break;
          uVar27 = *puVar21;
          uVar2 = puVar21[1];
          uVar3 = puVar21[2];
          uVar4 = puVar21[3];
          uVar5 = puVar21[4];
          uVar6 = puVar21[5];
          uVar7 = puVar21[6];
          puVar15 = puVar17 + param_2 * 7 + -4;
          *puVar15 = puVar21[3];
          puVar15[1] = uVar5;
          puVar15[2] = uVar6;
          puVar15[3] = uVar7;
          puVar15 = puVar17 + param_2 * 7 + -7;
          *puVar15 = uVar27;
          puVar15[1] = uVar2;
          puVar15[2] = uVar3;
          puVar15[3] = uVar4;
          puVar17 = puVar17 + -7;
          puVar21 = puVar21 + 7;
          uVar26 = uVar13;
        }
        (*(code *)PTR_memcpy_00841de0)(param_1,param_3);
        uVar26 = uVar13 - param_2;
        if (uVar26 != 0) {
          uVar16 = (ulong)((uint)uVar26 & 3);
          if (param_2 - uVar13 < 0xfffffffffffffffd) {
            puVar17 = param_1 + param_2 * 7;
            puVar21 = param_3 + uVar13 * 7 + -7;
            uVar23 = 0;
            do {
              uVar27 = *puVar21;
              uVar2 = puVar21[1];
              uVar3 = puVar21[2];
              uVar4 = puVar21[3];
              uVar5 = puVar21[4];
              uVar6 = puVar21[5];
              uVar7 = puVar21[6];
              puVar17[3] = puVar21[3];
              puVar17[4] = uVar5;
              puVar17[5] = uVar6;
              puVar17[6] = uVar7;
              *puVar17 = uVar27;
              puVar17[1] = uVar2;
              puVar17[2] = uVar3;
              puVar17[3] = uVar4;
              puVar15 = puVar18 + (uVar23 ^ 0x1ffffffffffffffe) * 7;
              uVar27 = *puVar15;
              uVar2 = puVar15[1];
              uVar3 = puVar15[2];
              uVar4 = puVar15[3];
              puVar15 = puVar18 + (uVar23 ^ 0x1ffffffffffffffe) * 7 + 3;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              puVar17[10] = *puVar15;
              puVar17[0xb] = uVar5;
              puVar17[0xc] = uVar6;
              puVar17[0xd] = uVar7;
              puVar17[7] = uVar27;
              puVar17[8] = uVar2;
              puVar17[9] = uVar3;
              puVar17[10] = uVar4;
              puVar15 = puVar18 + (uVar23 ^ 0x1ffffffffffffffd) * 7;
              uVar27 = *puVar15;
              uVar2 = puVar15[1];
              uVar3 = puVar15[2];
              uVar4 = puVar15[3];
              puVar15 = puVar18 + (uVar23 ^ 0x1ffffffffffffffd) * 7 + 3;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              puVar17[0x11] = *puVar15;
              puVar17[0x12] = uVar5;
              puVar17[0x13] = uVar6;
              puVar17[0x14] = uVar7;
              puVar17[0xe] = uVar27;
              puVar17[0xf] = uVar2;
              puVar17[0x10] = uVar3;
              puVar17[0x11] = uVar4;
              uVar20 = uVar23 + 4;
              puVar15 = puVar18 + (uVar23 ^ 0x1ffffffffffffffc) * 7;
              uVar27 = puVar15[1];
              uVar2 = puVar15[2];
              uVar3 = puVar15[3];
              puVar1 = puVar18 + (uVar23 ^ 0x1ffffffffffffffc) * 7 + 3;
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              puVar17[0x15] = *puVar15;
              puVar17[0x16] = uVar27;
              puVar17[0x17] = uVar2;
              puVar17[0x18] = uVar3;
              puVar17[0x18] = uVar4;
              puVar17[0x19] = uVar5;
              puVar17[0x1a] = uVar6;
              puVar17[0x1b] = uVar7;
              puVar17 = puVar17 + 0x1c;
              puVar21 = puVar21 + -0x1c;
              uVar23 = uVar20;
            } while ((uVar26 & 0xfffffffffffffffc) != uVar20);
            if (uVar16 == 0) goto LAB_006355a5;
          }
          else {
            uVar20 = 0;
          }
          lVar19 = uVar20 * 0x38 + param_2 * 0x38;
          puVar18 = param_3 + uVar20 * -7 + uVar13 * 7 + -7;
          lVar28 = 0;
          do {
            uVar27 = *puVar18;
            uVar2 = puVar18[1];
            uVar3 = puVar18[2];
            uVar4 = puVar18[3];
            uVar5 = puVar18[4];
            uVar6 = puVar18[5];
            uVar7 = puVar18[6];
            puVar17 = (undefined8 *)((long)param_1 + lVar28 + lVar19 + 0x18);
            *puVar17 = puVar18[3];
            puVar17[1] = uVar5;
            puVar17[2] = uVar6;
            puVar17[3] = uVar7;
            puVar17 = (undefined8 *)((long)param_1 + lVar28 + lVar19);
            *puVar17 = uVar27;
            puVar17[1] = uVar2;
            puVar17[2] = uVar3;
            puVar17[3] = uVar4;
            lVar28 = lVar28 + 0x38;
            puVar18 = puVar18 + -7;
          } while (uVar16 * 0x38 != lVar28);
        }
LAB_006355a5:
        if (param_2 == 0) goto LAB_00635630;
        if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
        }
        <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                  (param_1 + param_2 * 7,uVar26,param_3,param_4,param_5,&local_68);
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_00634fcc;
        goto LAB_00635040;
      }
      uVar26 = *(ulong *)(param_6 + 0x20);
      uVar16 = puVar14[4];
      uVar23 = uVar16;
      if (uVar26 < uVar16) {
        uVar23 = uVar26;
      }
      iVar12 = (*(code *)PTR_memcmp_008420a0)(*(undefined8 *)(param_6 + 0x18),puVar14[3],uVar23);
      lVar19 = uVar26 - uVar16;
      if (iVar12 != 0) {
        lVar19 = (long)iVar12;
      }
      if (lVar19 != 0) {
        bVar30 = SUB81((ulong)lVar19 >> 0x3f,0);
        goto LAB_006352c2;
      }
      uVar26 = puVar14[2];
      uVar16 = *(ulong *)(param_6 + 0x10);
      uVar23 = uVar26;
      if (uVar16 < uVar26) {
        uVar23 = uVar16;
      }
      iVar12 = (*(code *)puVar11)(*(undefined8 *)(param_6 + 8),puVar14[1],uVar23);
      lVar19 = uVar16 - uVar26;
      if (iVar12 != 0) {
        lVar19 = (long)iVar12;
      }
      if (lVar19 < 0) goto LAB_006352cf;
LAB_00635630:
      if (param_4 < uVar13) {
LAB_006361ac:
                    /* WARNING: Does not return */
        pcVar24 = (code *)invalidInstructionException();
        (*pcVar24)();
      }
      puVar18 = param_3 + uVar13 * 7;
      uVar26 = 0;
      puVar17 = puVar18;
      puVar21 = param_1;
      while( true ) {
        pcVar24 = (code *)PTR_memcmp_008420a0;
        for (; PTR_memcmp_008420a0 = pcVar24, puVar21 < param_1 + uVar22 * 7; puVar21 = puVar21 + 7)
        {
          bVar30 = (ulong)puVar21[5] < (ulong)puVar14[5];
          if (puVar21[5] == puVar14[5]) {
            uVar16 = puVar14[4];
            uVar23 = puVar21[4];
            uVar20 = uVar23;
            if (uVar16 < uVar23) {
              uVar20 = uVar16;
            }
            iVar12 = (*pcVar24)(puVar14[3],puVar21[3],uVar20);
            lVar19 = uVar16 - uVar23;
            if (iVar12 != 0) {
              lVar19 = (long)iVar12;
            }
            if (lVar19 == 0) {
              uVar16 = puVar21[2];
              uVar23 = puVar14[2];
              uVar20 = uVar16;
              if (uVar23 < uVar16) {
                uVar20 = uVar23;
              }
              iVar12 = (*pcVar24)(puVar14[1],puVar21[1],uVar20);
              lVar19 = uVar23 - uVar16;
              if (iVar12 != 0) {
                lVar19 = (long)iVar12;
              }
            }
            bVar30 = SUB81((ulong)lVar19 >> 0x3f,0);
          }
          puVar17 = puVar17 + -7;
          puVar15 = param_3;
          if (bVar30 != false) {
            puVar15 = puVar17;
          }
          uVar27 = *puVar21;
          uVar2 = puVar21[1];
          uVar3 = puVar21[2];
          uVar4 = puVar21[3];
          uVar5 = puVar21[4];
          uVar6 = puVar21[5];
          uVar7 = puVar21[6];
          puVar1 = puVar15 + uVar26 * 7 + 3;
          *puVar1 = puVar21[3];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          puVar15 = puVar15 + uVar26 * 7;
          *puVar15 = uVar27;
          puVar15[1] = uVar2;
          puVar15[2] = uVar3;
          puVar15[3] = uVar4;
          uVar26 = uVar26 + (bVar30 ^ 1);
          pcVar24 = (code *)PTR_memcmp_008420a0;
        }
        if (uVar22 == uVar13) break;
        puVar17 = puVar17 + -7;
        uVar27 = *puVar21;
        uVar2 = puVar21[1];
        uVar3 = puVar21[2];
        uVar4 = puVar21[3];
        uVar5 = puVar21[4];
        uVar6 = puVar21[5];
        uVar7 = puVar21[6];
        puVar15 = param_3 + uVar26 * 7 + 3;
        *puVar15 = puVar21[3];
        puVar15[1] = uVar5;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
        puVar15 = param_3 + uVar26 * 7;
        *puVar15 = uVar27;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar26 = uVar26 + 1;
        puVar21 = puVar21 + 7;
        uVar22 = uVar13;
      }
      (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar26 * 0x38);
      param_2 = uVar13 - uVar26;
      if (param_2 == 0) {
        return;
      }
      puVar17 = param_1 + uVar26 * 7;
      uVar22 = (ulong)((uint)param_2 & 3);
      if (uVar26 - uVar13 < 0xfffffffffffffffd) {
        puVar21 = param_3 + uVar13 * 7 + -7;
        puVar14 = puVar17;
        uVar16 = 0;
        do {
          uVar27 = *puVar21;
          uVar2 = puVar21[1];
          uVar3 = puVar21[2];
          uVar4 = puVar21[3];
          uVar5 = puVar21[4];
          uVar6 = puVar21[5];
          uVar7 = puVar21[6];
          puVar14[3] = puVar21[3];
          puVar14[4] = uVar5;
          puVar14[5] = uVar6;
          puVar14[6] = uVar7;
          *puVar14 = uVar27;
          puVar14[1] = uVar2;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          puVar15 = puVar18 + (uVar16 ^ 0x1ffffffffffffffe) * 7;
          uVar27 = *puVar15;
          uVar2 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          puVar15 = puVar18 + (uVar16 ^ 0x1ffffffffffffffe) * 7 + 3;
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          puVar14[10] = *puVar15;
          puVar14[0xb] = uVar5;
          puVar14[0xc] = uVar6;
          puVar14[0xd] = uVar7;
          puVar14[7] = uVar27;
          puVar14[8] = uVar2;
          puVar14[9] = uVar3;
          puVar14[10] = uVar4;
          puVar15 = puVar18 + (uVar16 ^ 0x1ffffffffffffffd) * 7;
          uVar27 = *puVar15;
          uVar2 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          puVar15 = puVar18 + (uVar16 ^ 0x1ffffffffffffffd) * 7 + 3;
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          puVar14[0x11] = *puVar15;
          puVar14[0x12] = uVar5;
          puVar14[0x13] = uVar6;
          puVar14[0x14] = uVar7;
          puVar14[0xe] = uVar27;
          puVar14[0xf] = uVar2;
          puVar14[0x10] = uVar3;
          puVar14[0x11] = uVar4;
          uVar23 = uVar16 + 4;
          puVar15 = puVar18 + (uVar16 ^ 0x1ffffffffffffffc) * 7;
          uVar27 = puVar15[1];
          uVar2 = puVar15[2];
          uVar3 = puVar15[3];
          puVar1 = puVar18 + (uVar16 ^ 0x1ffffffffffffffc) * 7 + 3;
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar14[0x15] = *puVar15;
          puVar14[0x16] = uVar27;
          puVar14[0x17] = uVar2;
          puVar14[0x18] = uVar3;
          puVar14[0x18] = uVar4;
          puVar14[0x19] = uVar5;
          puVar14[0x1a] = uVar6;
          puVar14[0x1b] = uVar7;
          puVar14 = puVar14 + 0x1c;
          puVar21 = puVar21 + -0x1c;
          uVar16 = uVar23;
        } while ((param_2 & 0xfffffffffffffffc) != uVar23);
        if (uVar22 != 0) goto LAB_006358ce;
      }
      else {
        uVar23 = 0;
LAB_006358ce:
        lVar19 = uVar23 * 0x38 + uVar26 * 0x38;
        puVar18 = param_3 + uVar13 * 7 + uVar23 * -7 + -7;
        lVar28 = 0;
        do {
          uVar27 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[2];
          uVar4 = puVar18[3];
          uVar5 = puVar18[4];
          uVar6 = puVar18[5];
          uVar7 = puVar18[6];
          puVar14 = (undefined8 *)((long)param_1 + lVar28 + lVar19 + 0x18);
          *puVar14 = puVar18[3];
          puVar14[1] = uVar5;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          puVar14 = (undefined8 *)((long)param_1 + lVar28 + lVar19);
          *puVar14 = uVar27;
          puVar14[1] = uVar2;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          lVar28 = lVar28 + 0x38;
          puVar18 = puVar18 + -7;
        } while (uVar22 * 0x38 != lVar28);
      }
      if (uVar13 < uVar26) {
                    /* WARNING: Subroutine does not return */
        index::slice_index_fail
                  (uVar26,uVar13,uVar13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
      }
      param_6 = 0;
      param_1 = puVar17;
    } while (0x20 < param_2);
  }
  if (1 < param_2) {
    local_b0 = param_2 >> 1;
    puVar18 = puVar17 + local_b0 * 7;
    puVar14 = param_3 + local_b0 * 7;
    if (param_2 < 8) {
      uVar27 = *puVar17;
      uVar2 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      uVar5 = puVar17[4];
      uVar6 = puVar17[5];
      uVar7 = puVar17[6];
      param_3[3] = puVar17[3];
      param_3[4] = uVar5;
      param_3[5] = uVar6;
      param_3[6] = uVar7;
      *param_3 = uVar27;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      uVar27 = *puVar18;
      uVar2 = puVar18[1];
      uVar3 = puVar18[2];
      uVar4 = puVar18[3];
      uVar5 = puVar18[4];
      uVar6 = puVar18[5];
      uVar7 = puVar18[6];
      puVar14[3] = puVar18[3];
      puVar14[4] = uVar5;
      puVar14[5] = uVar6;
      puVar14[6] = uVar7;
      *puVar14 = uVar27;
      puVar14[1] = uVar2;
      puVar14[2] = uVar3;
      puVar14[3] = uVar4;
      uVar13 = 1;
    }
    else {
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                (puVar17,param_3);
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                (puVar18,puVar14);
      uVar13 = 4;
    }
    puVar11 = PTR_memcmp_008420a0;
    if (uVar13 < local_b0) {
      lVar19 = uVar13 * 0x38 + -0x38;
      uVar22 = uVar13;
      do {
        puVar21 = param_3 + uVar22 * 7;
        puVar15 = puVar17 + uVar22 * 7;
        uVar27 = *puVar15;
        uVar2 = puVar15[1];
        uVar3 = puVar15[2];
        uVar4 = puVar15[3];
        puVar15 = puVar17 + uVar22 * 7 + 3;
        uVar5 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        puVar1 = param_3 + uVar22 * 7 + 3;
        *puVar1 = *puVar15;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar15 = param_3 + uVar22 * 7;
        *puVar15 = uVar27;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar26 = param_3[uVar22 * 7 + 5];
        bVar30 = (ulong)param_3[uVar22 * 7 + -2] < uVar26;
        if (param_3[uVar22 * 7 + -2] == uVar26) {
          uVar27 = puVar21[3];
          uVar23 = puVar21[4];
          uVar16 = puVar21[-3];
          uVar20 = uVar16;
          if (uVar23 < uVar16) {
            uVar20 = uVar23;
          }
          iVar12 = (*(code *)puVar11)(uVar27,puVar21[-4],uVar20);
          lVar28 = uVar23 - uVar16;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
          if (lVar28 != 0) {
            bVar30 = SUB81((ulong)lVar28 >> 0x3f,0);
            goto LAB_00635aad;
          }
          uVar16 = puVar21[-5];
          local_a0 = puVar21[2];
          local_90 = puVar21[1];
          uVar20 = uVar16;
          if (local_a0 < uVar16) {
            uVar20 = local_a0;
          }
          iVar12 = (*(code *)puVar11)(local_90,puVar21[-6],uVar20);
          lVar28 = local_a0 - uVar16;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
          if (lVar28 < 0) goto LAB_00635ad0;
        }
        else {
LAB_00635aad:
          if (bVar30 != false) {
            local_90 = puVar21[1];
            local_a0 = puVar21[2];
            uVar27 = puVar21[3];
            uVar23 = puVar21[4];
LAB_00635ad0:
            puVar15 = param_3 + uVar22 * 7 + -7;
            uVar2 = *puVar21;
            uVar4 = param_3[uVar22 * 7 + -6];
            uVar5 = param_3[uVar22 * 7 + -5];
            uVar6 = param_3[uVar22 * 7 + -4];
            uVar7 = param_3[uVar22 * 7 + -4];
            uVar8 = param_3[uVar22 * 7 + -3];
            uVar9 = param_3[uVar22 * 7 + -2];
            uVar10 = param_3[uVar22 * 7 + -1];
            uVar3 = puVar21[6];
            *puVar21 = *puVar15;
            puVar21[1] = uVar4;
            puVar21[2] = uVar5;
            puVar21[3] = uVar6;
            puVar21[3] = uVar7;
            puVar21[4] = uVar8;
            puVar21[5] = uVar9;
            puVar21[6] = uVar10;
            if (uVar22 != 1) {
              puVar21 = puVar15;
              lVar28 = lVar19;
              do {
                puVar15 = (undefined8 *)((long)param_3 + lVar28);
                uVar16 = *(ulong *)((long)param_3 + lVar28 + -0x10);
                bVar30 = uVar16 < uVar26;
                if (uVar16 == uVar26) {
                  uVar16 = *(ulong *)((long)param_3 + lVar28 + -0x18);
                  uVar20 = uVar16;
                  if (uVar23 < uVar16) {
                    uVar20 = uVar23;
                  }
                  iVar12 = (*(code *)puVar11)(uVar27,*(undefined8 *)((long)param_3 + lVar28 + -0x20)
                                              ,uVar20);
                  lVar25 = uVar23 - uVar16;
                  if (iVar12 != 0) {
                    lVar25 = (long)iVar12;
                  }
                  if (lVar25 != 0) {
                    bVar30 = SUB81((ulong)lVar25 >> 0x3f,0);
                    goto LAB_00635b4a;
                  }
                  uVar16 = *(ulong *)((long)param_3 + lVar28 + -0x28);
                  uVar20 = uVar16;
                  if (local_a0 < uVar16) {
                    uVar20 = local_a0;
                  }
                  iVar12 = (*(code *)puVar11)(local_90,*(undefined8 *)
                                                        ((long)param_3 + lVar28 + -0x30),uVar20);
                  lVar25 = local_a0 - uVar16;
                  if (iVar12 != 0) {
                    lVar25 = (long)iVar12;
                  }
                  if (-1 < lVar25) {
                    puVar15 = puVar21;
                    goto LAB_006359d3;
                  }
                }
                else {
LAB_00635b4a:
                  if (bVar30 == false) goto LAB_006359d3;
                }
                uVar4 = *(undefined8 *)((long)param_3 + lVar28 + -0x38);
                uVar5 = *(undefined8 *)((long)param_3 + lVar28 + -0x30);
                uVar6 = *(undefined8 *)((long)param_3 + lVar28 + -0x28);
                uVar7 = *(undefined8 *)((long)param_3 + lVar28 + -0x20);
                uVar8 = *(undefined8 *)((long)param_3 + lVar28 + -0x18);
                uVar9 = *(undefined8 *)((long)param_3 + lVar28 + -0x10);
                uVar10 = *(undefined8 *)((long)param_3 + lVar28 + -8);
                puVar21 = puVar21 + -7;
                puVar15[3] = *(undefined8 *)((long)param_3 + lVar28 + -0x20);
                puVar15[4] = uVar8;
                puVar15[5] = uVar9;
                puVar15[6] = uVar10;
                *puVar15 = uVar4;
                puVar15[1] = uVar5;
                puVar15[2] = uVar6;
                puVar15[3] = uVar7;
                lVar28 = lVar28 + -0x38;
              } while (lVar28 != 0);
              puVar15 = param_3;
            }
LAB_006359d3:
            *puVar15 = uVar2;
            puVar15[1] = local_90;
            puVar15[2] = local_a0;
            puVar15[3] = uVar27;
            puVar15[4] = uVar23;
            puVar15[5] = uVar26;
            puVar15[6] = uVar3;
          }
        }
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 0x38;
      } while (uVar22 != local_b0);
    }
    if (uVar13 < param_2 - local_b0) {
      lVar19 = uVar13 * 0x38 + -0x38;
      pcVar24 = (code *)PTR_memcmp_008420a0;
      do {
        puVar21 = puVar14 + uVar13 * 7;
        puVar15 = puVar18 + uVar13 * 7;
        uVar27 = *puVar15;
        uVar2 = puVar15[1];
        uVar3 = puVar15[2];
        uVar4 = puVar15[3];
        puVar15 = puVar18 + uVar13 * 7 + 3;
        uVar5 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        puVar1 = puVar14 + uVar13 * 7 + 3;
        *puVar1 = *puVar15;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar15 = puVar14 + uVar13 * 7;
        *puVar15 = uVar27;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar22 = puVar14[uVar13 * 7 + 5];
        bVar30 = (ulong)puVar14[uVar13 * 7 + -2] < uVar22;
        if (puVar14[uVar13 * 7 + -2] == uVar22) {
          uVar27 = puVar21[3];
          uVar16 = puVar21[4];
          uVar26 = puVar21[-3];
          uVar23 = uVar26;
          if (uVar16 < uVar26) {
            uVar23 = uVar16;
          }
          iVar12 = (*pcVar24)(uVar27,puVar21[-4],uVar23);
          lVar28 = uVar16 - uVar26;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
          if (lVar28 != 0) {
            bVar30 = SUB81((ulong)lVar28 >> 0x3f,0);
            goto LAB_00635d87;
          }
          uVar26 = puVar21[-5];
          local_a0 = puVar21[2];
          local_90 = puVar21[1];
          uVar23 = uVar26;
          if (local_a0 < uVar26) {
            uVar23 = local_a0;
          }
          iVar12 = (*pcVar24)(local_90,puVar21[-6],uVar23);
          lVar28 = local_a0 - uVar26;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
          if (lVar28 < 0) goto LAB_00635daf;
        }
        else {
LAB_00635d87:
          if (bVar30 != false) {
            local_90 = puVar21[1];
            local_a0 = puVar21[2];
            uVar27 = puVar21[3];
            uVar16 = puVar21[4];
LAB_00635daf:
            puVar15 = puVar14 + uVar13 * 7 + -7;
            uVar2 = *puVar21;
            uVar4 = puVar14[uVar13 * 7 + -6];
            uVar5 = puVar14[uVar13 * 7 + -5];
            uVar6 = puVar14[uVar13 * 7 + -4];
            uVar7 = puVar14[uVar13 * 7 + -4];
            uVar8 = puVar14[uVar13 * 7 + -3];
            uVar9 = puVar14[uVar13 * 7 + -2];
            uVar10 = puVar14[uVar13 * 7 + -1];
            uVar3 = puVar21[6];
            *puVar21 = *puVar15;
            puVar21[1] = uVar4;
            puVar21[2] = uVar5;
            puVar21[3] = uVar6;
            puVar21[3] = uVar7;
            puVar21[4] = uVar8;
            puVar21[5] = uVar9;
            puVar21[6] = uVar10;
            if (uVar13 != 1) {
              puVar21 = puVar15;
              lVar28 = lVar19;
              do {
                puVar11 = PTR_memcmp_008420a0;
                puVar15 = (undefined8 *)((long)puVar14 + lVar28);
                uVar26 = *(ulong *)((long)puVar14 + lVar28 + -0x10);
                bVar30 = uVar26 < uVar22;
                if (uVar26 == uVar22) {
                  uVar26 = *(ulong *)((long)puVar14 + lVar28 + -0x18);
                  uVar23 = uVar26;
                  if (uVar16 < uVar26) {
                    uVar23 = uVar16;
                  }
                  iVar12 = (*(code *)PTR_memcmp_008420a0)
                                     (uVar27,*(undefined8 *)((long)puVar14 + lVar28 + -0x20),uVar23)
                  ;
                  lVar25 = uVar16 - uVar26;
                  if (iVar12 != 0) {
                    lVar25 = (long)iVar12;
                  }
                  if (lVar25 != 0) {
                    bVar30 = SUB81((ulong)lVar25 >> 0x3f,0);
                    goto code_r0x00635e20;
                  }
                  uVar26 = *(ulong *)((long)puVar14 + lVar28 + -0x28);
                  uVar23 = uVar26;
                  if (local_a0 < uVar26) {
                    uVar23 = local_a0;
                  }
                  iVar12 = (*(code *)puVar11)(local_90,*(undefined8 *)
                                                        ((long)puVar14 + lVar28 + -0x30),uVar23);
                  lVar25 = local_a0 - uVar26;
                  if (iVar12 != 0) {
                    lVar25 = (long)iVar12;
                  }
                  if (-1 < lVar25) {
                    puVar15 = puVar21;
                    goto LAB_00635f48;
                  }
                }
                else {
code_r0x00635e20:
                  if (bVar30 == false) goto LAB_00635f48;
                }
                uVar4 = *(undefined8 *)((long)puVar14 + lVar28 + -0x38);
                uVar5 = *(undefined8 *)((long)puVar14 + lVar28 + -0x30);
                uVar6 = *(undefined8 *)((long)puVar14 + lVar28 + -0x28);
                uVar7 = *(undefined8 *)((long)puVar14 + lVar28 + -0x20);
                uVar8 = *(undefined8 *)((long)puVar14 + lVar28 + -0x18);
                uVar9 = *(undefined8 *)((long)puVar14 + lVar28 + -0x10);
                uVar10 = *(undefined8 *)((long)puVar14 + lVar28 + -8);
                puVar21 = puVar21 + -7;
                puVar15[3] = *(undefined8 *)((long)puVar14 + lVar28 + -0x20);
                puVar15[4] = uVar8;
                puVar15[5] = uVar9;
                puVar15[6] = uVar10;
                *puVar15 = uVar4;
                puVar15[1] = uVar5;
                puVar15[2] = uVar6;
                puVar15[3] = uVar7;
                lVar28 = lVar28 + -0x38;
              } while (lVar28 != 0);
              puVar15 = puVar14;
LAB_00635f48:
              pcVar24 = (code *)PTR_memcmp_008420a0;
            }
            *puVar15 = uVar2;
            puVar15[1] = local_90;
            puVar15[2] = local_a0;
            puVar15[3] = uVar27;
            puVar15[4] = uVar16;
            puVar15[5] = uVar22;
            puVar15[6] = uVar3;
          }
        }
        uVar13 = uVar13 + 1;
        lVar19 = lVar19 + 0x38;
      } while (uVar13 != param_2 - local_b0);
    }
    puVar21 = param_3 + param_2 * 7;
    puVar18 = puVar14 + -7;
    pcVar24 = (code *)PTR_memcmp_008420a0;
    puVar15 = puVar17 + param_2 * 7;
    do {
      local_b8 = puVar17;
      uVar13 = (ulong)((ulong)param_3[5] < (ulong)puVar14[5]);
      if (param_3[5] == puVar14[5]) {
        uVar13 = puVar14[4];
        uVar22 = param_3[4];
        uVar26 = uVar22;
        if (uVar13 < uVar22) {
          uVar26 = uVar13;
        }
        iVar12 = (*pcVar24)(puVar14[3],param_3[3],uVar26);
        uVar13 = uVar13 - uVar22;
        if (iVar12 != 0) {
          uVar13 = (long)iVar12;
        }
        if (uVar13 == 0) {
          uVar13 = param_3[2];
          uVar22 = puVar14[2];
          uVar26 = uVar13;
          if (uVar22 < uVar13) {
            uVar26 = uVar22;
          }
          iVar12 = (*(code *)PTR_memcmp_008420a0)(puVar14[1],param_3[1],uVar26);
          uVar13 = uVar22 - uVar13;
          if (iVar12 != 0) {
            uVar13 = (long)iVar12;
          }
        }
        uVar13 = uVar13 >> 0x3f;
        pcVar24 = (code *)PTR_memcmp_008420a0;
      }
      puVar17 = param_3;
      if ((byte)uVar13 != 0) {
        puVar17 = puVar14;
      }
      uVar27 = *puVar17;
      uVar2 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      uVar5 = puVar17[4];
      uVar6 = puVar17[5];
      uVar7 = puVar17[6];
      local_b8[3] = puVar17[3];
      local_b8[4] = uVar5;
      local_b8[5] = uVar6;
      local_b8[6] = uVar7;
      *local_b8 = uVar27;
      local_b8[1] = uVar2;
      local_b8[2] = uVar3;
      local_b8[3] = uVar4;
      bVar30 = (ulong)puVar18[5] < (ulong)puVar21[-2];
      if (puVar18[5] == puVar21[-2]) {
        uVar22 = puVar21[-3];
        uVar26 = puVar18[4];
        uVar16 = uVar26;
        if (uVar22 < uVar26) {
          uVar16 = uVar22;
        }
        iVar12 = (*pcVar24)(puVar21[-4],puVar18[3],uVar16);
        lVar19 = uVar22 - uVar26;
        if (iVar12 != 0) {
          lVar19 = (long)iVar12;
        }
        if (lVar19 == 0) {
          uVar22 = puVar18[2];
          uVar26 = puVar21[-5];
          uVar16 = uVar22;
          if (uVar26 < uVar22) {
            uVar16 = uVar26;
          }
          iVar12 = (*(code *)PTR_memcmp_008420a0)(puVar21[-6],puVar18[1],uVar16);
          lVar19 = uVar26 - uVar22;
          if (iVar12 != 0) {
            lVar19 = (long)iVar12;
          }
        }
        bVar30 = SUB81((ulong)lVar19 >> 0x3f,0);
        pcVar24 = (code *)PTR_memcmp_008420a0;
      }
      puVar14 = puVar14 + uVar13 * 7;
      param_3 = param_3 + (ulong)(byte)((byte)uVar13 ^ 1) * 7;
      puVar17 = puVar21 + -7;
      if (bVar30 != false) {
        puVar17 = puVar18;
      }
      uVar27 = *puVar17;
      uVar2 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      uVar5 = puVar17[4];
      uVar6 = puVar17[5];
      uVar7 = puVar17[6];
      puVar15[-4] = puVar17[3];
      puVar15[-3] = uVar5;
      puVar15[-2] = uVar6;
      puVar15[-1] = uVar7;
      puVar15[-7] = uVar27;
      puVar15[-6] = uVar2;
      puVar15[-5] = uVar3;
      puVar15[-4] = uVar4;
      puVar21 = puVar21 + -7 + (ulong)bVar30 * 7;
      puVar18 = puVar18 + (ulong)bVar30 * -7;
      local_b0 = local_b0 - 1;
      puVar15 = puVar15 + -7;
      puVar17 = local_b8 + 7;
    } while (local_b0 != 0);
    if ((param_2 & 1) != 0) {
      bVar30 = param_3 < puVar18 + 7;
      puVar17 = puVar14;
      if (bVar30) {
        puVar17 = param_3;
      }
      uVar27 = *puVar17;
      uVar2 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      uVar5 = puVar17[4];
      uVar6 = puVar17[5];
      uVar7 = puVar17[6];
      local_b8[10] = puVar17[3];
      local_b8[0xb] = uVar5;
      local_b8[0xc] = uVar6;
      local_b8[0xd] = uVar7;
      local_b8[7] = uVar27;
      local_b8[8] = uVar2;
      local_b8[9] = uVar3;
      local_b8[10] = uVar4;
      param_3 = param_3 + (ulong)bVar30 * 7;
      puVar14 = puVar14 + (ulong)!bVar30 * 7;
    }
    if ((param_3 != puVar18 + 7) || (puVar14 != puVar21)) {
                    /* WARNING: Subroutine does not return */
      shared::smallsort::panic_on_ord_violation();
    }
  }
  return;
}


// ==== pipeline::setup::setup_par::{closure#11}::{closure#7} @ 00651e00 (902 bytes)

/* pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::{closure#7} */

void __rustcall
pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::_closure_7_(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int __fd;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char local_78;
  undefined7 uStack_77;
  undefined8 *local_70;
  long local_68;
  long local_60;
  char local_58 [4];
  int local_54;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar4 = *param_1;
  if (*(ulong *)(lVar4 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,*(ulong *)(lVar4 + 0x10),&PTR_s_src_setup_rs_002105f0);
  }
  lVar11 = param_2 * 0x38;
  __fd = *(int *)(*(long *)(lVar4 + 8) + 0x30 + lVar11);
  lVar10 = *(long *)(lVar4 + 8) + lVar11;
  if (-1 < __fd) goto LAB_0065201e;
  lVar1 = param_1[1];
  local_60 = param_1[2];
  core[62e902411887be45]::str::converts::from_utf8
            (&local_78,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x20));
  lVar9 = 0;
  if (local_78 == '\0') {
    lVar9 = local_68;
  }
  puVar6 = (undefined8 *)&DAT_00000001;
  if (local_78 == '\0') {
    puVar6 = local_70;
  }
  <std[c60ef17cbf7de79f]::path::Path>::_join(&local_78,lVar1,local_60,puVar6,lVar9);
  if (*(ulong *)(lVar4 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,*(ulong *)(lVar4 + 0x10),&PTR_s_src_setup_rs_00210608);
  }
  lVar4 = *(long *)(lVar4 + 8);
  uVar2 = *(ulong *)(lVar4 + 0x10 + lVar11);
  if (local_68 == 0) {
    bVar12 = false;
    pcVar8 = *(char **)(lVar4 + 8 + lVar11);
    if (uVar2 != 0) goto LAB_00651ed5;
LAB_00651ef1:
    lVar4 = CONCAT71(uStack_77,local_78);
    if (bVar12) {
      if (lVar4 == local_68) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_78,local_68,1,1,1);
        lVar4 = CONCAT71(uStack_77,local_78);
      }
      *(undefined1 *)((long)local_70 + local_68) = 0x2f;
      local_68 = local_68 + 1;
    }
    if ((ulong)(lVar4 - local_68) < uVar2) goto LAB_006520dc;
    if (uVar2 != 0) goto LAB_00651f2e;
    lVar4 = local_68;
  }
  else {
    bVar12 = *(char *)((long)local_70 + local_68 + -1) != '/';
    pcVar8 = *(char **)(lVar4 + 8 + lVar11);
    if (uVar2 == 0) goto LAB_00651ef1;
LAB_00651ed5:
    if (*pcVar8 != '/') goto LAB_00651ef1;
    local_68 = 0;
    if (uVar2 <= CONCAT71(uStack_77,local_78)) goto LAB_00651f2e;
LAB_006520dc:
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_78,local_68,uVar2,1,1);
LAB_00651f2e:
    lVar4 = local_68;
    (*(code *)PTR_memcpy_00841de0)((undefined1 *)((long)local_70 + local_68),pcVar8,uVar2);
  }
  local_48 = 0x1b600000000;
  local_40 = 1;
  <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(local_58,&local_48,local_70,lVar4 + uVar2);
  if (local_58[0] != '\0') {
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::File,core[62e902411887be45]::io::error::Error>>
              (local_58);
                    /* WARNING: Subroutine does not return */
    sys::fallback("open input",10);
  }
  uVar2 = CONCAT71(uStack_77,local_78);
  __fd = local_54;
  if (uVar2 != 0) {
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (local_70 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= local_70)) {
      free(local_70);
    }
    else {
      uVar7 = 0x10;
      if (0x10 < uVar2) {
        uVar7 = uVar2;
      }
      lVar4 = LZCOUNT(uVar7 - 1);
      lVar11 = 0x40 - lVar4;
      if ((uVar7 - 1 < 0x10000) ||
         (local_60 = lVar4, cVar3 = sys::big_put(local_70,lVar11), lVar4 = local_60, cVar3 == '\0'))
      {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar11,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *local_70 = *(undefined8 *)(in_FS_OFFSET + lVar11 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar11 * 8 + -0x3c8) = local_70;
      }
    }
  }
LAB_0065201e:
  uVar2 = *(ulong *)(param_1[4] + 0x10);
  if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,uVar2,&PTR_s_src_setup_rs_00210630);
  }
  pvVar5 = mmap64((void *)(*(long *)param_1[3] +
                          *(long *)(*(long *)(param_1[4] + 8) + param_2 * 0x20)),
                  *(size_t *)(lVar10 + 0x28),1,0x12,__fd,0);
  if (pvVar5 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("mmap input",10);
  }
  if ((899 < param_2) || (sys::FD_ALL_0 == '\0')) {
    if (DAT_00843ab0 != 0) {
      <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
      initialize::
      <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
                ();
    }
    if ((0x27 < param_2) || (parse::DRV == 0)) {
      close(__fd);
      return;
    }
  }
  *(int *)(DAT_00843ac0 + param_2 * 4) = __fd;
  return;
}


// ==== pipeline::setup::products_part::{closure#0} @ 0066a240 (627 bytes)

/* pipeline[509596c7b52975b2]::setup::products_part::{closure#0} */

undefined8 __rustcall
pipeline[509596c7b52975b2]::setup::products_part::_closure_0_
          (long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5,long *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (0x1ffff < param_2) {
    return 0;
  }
  if (param_4 == 0) {
    uVar16 = 0x32;
    goto LAB_0066a357;
  }
  uVar16 = 0xcbf29ce484222325;
  uVar11 = (ulong)((uint)param_4 & 7);
  pbVar12 = param_3;
  if (param_4 < 8) {
LAB_0066a33a:
    uVar14 = 0;
    do {
      uVar16 = (uVar16 ^ pbVar12[uVar14]) * 0x100000001b3;
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar14);
  }
  else {
    uVar14 = param_4 & 0x7ffffffffffffff8;
    do {
      bVar13 = *pbVar12;
      pbVar1 = pbVar12 + 1;
      pbVar2 = pbVar12 + 2;
      pbVar3 = pbVar12 + 3;
      pbVar4 = pbVar12 + 4;
      pbVar5 = pbVar12 + 5;
      pbVar6 = pbVar12 + 6;
      pbVar7 = pbVar12 + 7;
      pbVar12 = pbVar12 + 8;
      uVar16 = ((ulong)*pbVar7 ^
               ((ulong)*pbVar6 ^
               ((ulong)*pbVar5 ^
               ((ulong)*pbVar4 ^
               ((ulong)*pbVar3 ^
               ((ulong)*pbVar2 ^
               ((ulong)*pbVar1 ^ (bVar13 ^ uVar16) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
               ) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
      ;
      uVar14 = uVar14 - 8;
    } while (uVar14 != 0);
    if (uVar11 != 0) goto LAB_0066a33a;
  }
  uVar16 = uVar16 >> 0x3a;
LAB_0066a357:
  bVar13 = *(byte *)(param_1 + uVar16);
  uVar11 = param_5[2];
  if (bVar13 != 0xff) {
    uVar14 = param_5[1];
    do {
      uVar15 = (ulong)bVar13;
      if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar15,uVar11,&PTR_s_src_setup_rs_00210c90);
      }
      if ((*(ulong *)(uVar14 + 0x10 + uVar15 * 0x18) == param_4) &&
         (iVar9 = (*(code *)PTR_memcmp_00842098)
                            (*(undefined8 *)(uVar15 * 0x18 + uVar14 + 8),param_3,param_4),
         iVar9 == 0)) goto LAB_0066a44c;
      uVar16 = (ulong)((int)uVar16 + 1U & 0x3f);
      bVar13 = *(byte *)(param_1 + uVar16);
    } while (bVar13 != 0xff);
  }
  if (0x1e < uVar11) {
    return 0;
  }
  if (param_4 == 0) {
    lVar10 = 1;
    uVar14 = *param_5;
  }
  else {
    lVar10 = __rustc[45371133cddedda4]::__rust_alloc(param_4,1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,param_4);
    }
    (*(code *)PTR_memcpy_00841de0)(lVar10,param_3,param_4);
    uVar14 = *param_5;
  }
  if (uVar11 == uVar14) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
              (param_5);
  }
  uVar14 = param_5[1];
  *(ulong *)(uVar14 + uVar11 * 0x18) = param_4;
  *(long *)(uVar14 + 8 + uVar11 * 0x18) = lVar10;
  *(ulong *)(uVar14 + 0x10 + uVar11 * 0x18) = param_4;
  param_5[2] = uVar11 + 1;
  bVar13 = (char)(uVar11 + 1) - 1;
  *(byte *)(param_1 + uVar16) = bVar13;
LAB_0066a44c:
  lVar10 = param_6[2];
  if (lVar10 == *param_6) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(u32,u8)>>::grow_one(param_6);
  }
  lVar8 = param_6[1];
  *(int *)(lVar8 + lVar10 * 8) = (int)param_2;
  *(byte *)(lVar8 + 4 + lVar10 * 8) = bVar13;
  param_6[2] = lVar10 + 1;
  return CONCAT71((int7)((ulong)lVar8 >> 8),1);
}


// ==== pipeline::setup::lookups::{closure#0} @ 0066a4e0 (248 bytes)

/* pipeline[509596c7b52975b2]::setup::lookups::{closure#0} */

void __rustcall pipeline[509596c7b52975b2]::setup::lookups::_closure_0_(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  long lStack_48;
  long local_40;
  ulong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  <std[c60ef17cbf7de79f]::path::Path>::_join(&local_38);
  std[c60ef17cbf7de79f]::fs::read::inner(&local_50,local_30,local_28);
  if (local_38 != 0) {
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (local_30 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= local_30)) {
      free(local_30);
    }
    else {
      uVar2 = 0x10;
      if (0x10 < local_38) {
        uVar2 = local_38;
      }
      lVar3 = LZCOUNT(uVar2 - 1);
      lVar4 = 0x40 - lVar3;
      if (0xffff < uVar2 - 1) {
        cVar1 = sys::big_put(local_30,lVar4);
        if (cVar1 != '\0') goto LAB_0066a590;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *local_30 = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = local_30;
    }
  }
LAB_0066a590:
  if (local_50 == -1) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("cannot read a lookup file",0x19);
  }
  param_1[2] = local_40;
  *param_1 = local_50;
  param_1[1] = lStack_48;
  return;
}


// ==== pipeline::setup::lookups::{closure#2} @ 0066a5e0 (621 bytes)

/* pipeline[509596c7b52975b2]::setup::lookups::{closure#2} */

void __rustcall
pipeline[509596c7b52975b2]::setup::lookups::_closure_2_
          (long param_1,ulong param_2,long param_3,ulong param_4,byte *param_5,ulong param_6,
          undefined1 *param_7,ulong *param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  
  if (0x1ffff < param_4) goto LAB_0066a618;
  if (param_2 <= param_4) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_4,param_2,&PTR_s_src_setup_rs_00210cd8);
  }
  if (*(char *)(param_1 + param_4) != -1) goto LAB_0066a618;
  if (param_6 == 0) {
    uVar15 = 0x32;
    bVar14 = *(byte *)(param_3 + 0x32);
    uVar10 = param_8[2];
  }
  else {
    uVar15 = 0xcbf29ce484222325;
    uVar10 = (ulong)((uint)param_6 & 7);
    pbVar11 = param_5;
    if (param_6 < 8) {
LAB_0066a70b:
      uVar12 = 0;
      do {
        uVar15 = (uVar15 ^ pbVar11[uVar12]) * 0x100000001b3;
        uVar12 = uVar12 + 1;
      } while (uVar10 != uVar12);
    }
    else {
      uVar12 = param_6 & 0x7ffffffffffffff8;
      do {
        bVar14 = *pbVar11;
        pbVar1 = pbVar11 + 1;
        pbVar2 = pbVar11 + 2;
        pbVar3 = pbVar11 + 3;
        pbVar4 = pbVar11 + 4;
        pbVar5 = pbVar11 + 5;
        pbVar6 = pbVar11 + 6;
        pbVar7 = pbVar11 + 7;
        pbVar11 = pbVar11 + 8;
        uVar15 = ((ulong)*pbVar7 ^
                 ((ulong)*pbVar6 ^
                 ((ulong)*pbVar5 ^
                 ((ulong)*pbVar4 ^
                 ((ulong)*pbVar3 ^
                 ((ulong)*pbVar2 ^
                 ((ulong)*pbVar1 ^ (bVar14 ^ uVar15) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3)
                 * 0x100000001b3;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      if (uVar10 != 0) goto LAB_0066a70b;
    }
    uVar15 = uVar15 >> 0x3a;
    bVar14 = *(byte *)(param_3 + uVar15);
    uVar10 = param_8[2];
  }
  if (bVar14 != 0xff) {
    uVar12 = param_8[1];
    do {
      uVar13 = (ulong)bVar14;
      if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar13,uVar10,&PTR_s_src_setup_rs_00210cf0);
      }
      if ((*(ulong *)(uVar12 + 0x10 + uVar13 * 0x18) == param_6) &&
         (iVar8 = (*(code *)PTR_memcmp_00842098)
                            (*(undefined8 *)(uVar12 + uVar13 * 0x18 + 8),param_5,param_6),
         iVar8 == 0)) goto LAB_0066a7fc;
      uVar15 = (ulong)((int)uVar15 + 1U & 0x3f);
      bVar14 = *(byte *)(param_3 + uVar15);
    } while (bVar14 != 0xff);
  }
  if (uVar10 < 0x1f) {
    if (param_6 == 0) {
      lVar9 = 1;
      uVar12 = *param_8;
    }
    else {
      lVar9 = __rustc[45371133cddedda4]::__rust_alloc(param_6,1);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,param_6);
      }
      (*(code *)PTR_memcpy_00841de0)(lVar9,param_5,param_6);
      uVar12 = *param_8;
    }
    if (uVar10 == uVar12) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
                (param_8);
    }
    uVar12 = param_8[1];
    *(ulong *)(uVar12 + uVar10 * 0x18) = param_6;
    *(long *)(uVar12 + 8 + uVar10 * 0x18) = lVar9;
    *(ulong *)(uVar12 + 0x10 + uVar10 * 0x18) = param_6;
    param_8[2] = uVar10 + 1;
    bVar14 = (char)(uVar10 + 1) - 1;
    *(byte *)(param_3 + uVar15) = bVar14;
LAB_0066a7fc:
    *(byte *)(param_1 + param_4) = bVar14;
    return;
  }
LAB_0066a618:
  *param_7 = 1;
  return;
}


// ==== pipeline::setup::setup_par::{closure#4} @ 0066a860 (473 bytes)

/* pipeline[509596c7b52975b2]::setup::setup_par::{closure#4} */

void __rustcall pipeline[509596c7b52975b2]::setup::setup_par::_closure_4_(undefined8 *param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  long local_30;
  long local_28;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1[0x18] == '\0') {
    return;
  }
  LOCK();
  cVar4 = *(char *)param_1[1];
  *(char *)param_1[1] = '\x01';
  UNLOCK();
  if (cVar4 != '\0') {
    return;
  }
  do {
  } while (pcVar1[0x18] == '\0');
  if (*pcVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
  }
  local_50 = 0;
  local_48 = (undefined8 *)&DAT_00000008;
  local_40 = ZEXT816(0);
  local_30 = 8;
  local_28 = 0;
  <pipeline[509596c7b52975b2]::keyrec::Sample>::add_click_lines
            (&local_50,*(undefined8 *)(pcVar1 + 8),*(undefined8 *)(pcVar1 + 0x10));
  plVar2 = (long *)param_1[2];
  if (0 < *plVar2) {
    puVar3 = (undefined8 *)plVar2[1];
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar3 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= puVar3)) {
      free(puVar3);
    }
    else {
      uVar5 = *plVar2 * 0x18 - 1;
      lVar7 = LZCOUNT(uVar5);
      lVar6 = 0x40 - lVar7;
      if ((uVar5 < 0x10000) || (cVar4 = sys::big_put(puVar3,lVar6), cVar4 == '\0')) {
        if (lVar7 == 0) goto LAB_0066aa27;
        *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar3;
      }
    }
  }
  puVar3 = local_48;
  plVar2[2] = local_28;
  *plVar2 = local_40._8_8_;
  plVar2[1] = local_30;
  *(undefined1 *)(plVar2 + 3) = 1;
  if (local_50 != 0) {
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (local_48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= local_48)) {
      free(local_48);
      return;
    }
    uVar5 = local_50 * 0x28 - 1;
    lVar7 = LZCOUNT(uVar5);
    lVar6 = 0x40 - lVar7;
    if ((0xffff < uVar5) && (cVar4 = sys::big_put(local_48,lVar6), cVar4 != '\0')) {
      return;
    }
    if (lVar7 == 0) {
LAB_0066aa27:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar3;
  }
  return;
}


// ==== pipeline::setup::setup_par::{closure#5} @ 0066aa40 (501 bytes)

/* pipeline[509596c7b52975b2]::setup::setup_par::{closure#5} */

void __rustcall
pipeline[509596c7b52975b2]::setup::setup_par::_closure_5_(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar8 = (char *)*param_1;
  cVar2 = pcVar8[0x18];
  while (cVar2 == '\0') {
    cVar2 = pcVar8[0x18];
  }
  if (*pcVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
  }
  uVar10 = *(ulong *)param_1[1];
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00226718);
  }
  lVar3 = *(long *)(pcVar8 + 8);
  uVar4 = *(ulong *)(pcVar8 + 0x10);
  uVar7 = uVar4 * param_2;
  if ((uVar7 | uVar10) >> 0x20 == 0) {
    uVar5 = (uVar7 & 0xffffffff) / (uVar10 & 0xffffffff);
  }
  else {
    uVar5 = uVar7 / uVar10;
  }
  if (uVar7 < uVar10) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar4;
    if (uVar5 < uVar4) {
      pcVar8 = (char *)(uVar5 + lVar3 + -1);
      lVar9 = 0;
      do {
        cVar2 = *pcVar8;
        if (cVar2 == '\n') break;
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (pcVar8 != (char *)(lVar3 + uVar4));
      uVar7 = lVar9 + uVar5;
      if (cVar2 != '\n') {
        uVar7 = uVar4;
      }
    }
  }
  uVar5 = (param_2 + 1) * uVar4;
  if ((uVar5 | uVar10) >> 0x20 == 0) {
    uVar6 = (uVar5 & 0xffffffff) / (uVar10 & 0xffffffff);
  }
  else {
    uVar6 = uVar5 / uVar10;
  }
  if (uVar5 < uVar10) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar4;
    if (uVar6 < uVar4) {
      pcVar8 = (char *)(uVar6 + lVar3 + -1);
      lVar9 = 0;
      do {
        cVar2 = *pcVar8;
        if (cVar2 == '\n') break;
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (pcVar8 != (char *)(lVar3 + uVar4));
      uVar10 = lVar9 + uVar6;
      if (cVar2 != '\n') {
        uVar10 = uVar4;
      }
    }
  }
  local_40 = 0;
  uStack_38 = 8;
  auStack_30 = ZEXT816(0);
  local_20 = 8;
  local_18 = 0;
  if ((uVar10 < uVar7) || (uVar4 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar7,uVar10,uVar4,&PTR_s_src_setup_rs_00210d38);
  }
  <pipeline[509596c7b52975b2]::keyrec::Sample>::add_event_lines
            (&local_40,lVar3 + uVar7,uVar10 - uVar7);
  uVar10 = *(ulong *)(param_1[2] + 0x10);
  if (uVar10 <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,uVar10,&PTR_s_src_setup_rs_00210d20);
  }
  lVar3 = *(long *)(param_1[2] + 8);
  puVar1 = (undefined8 *)(lVar3 + param_2 * 0x38);
  if (*(long *)(lVar3 + param_2 * 0x38) != -1) {
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>(puVar1);
  }
  puVar1[2] = auStack_30._0_8_;
  puVar1[3] = auStack_30._8_8_;
  puVar1[4] = local_20;
  puVar1[5] = local_18;
  *puVar1 = local_40;
  puVar1[1] = uStack_38;
  puVar1[2] = auStack_30._0_8_;
  puVar1[3] = auStack_30._8_8_;
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}


// ==== pipeline::setup::setup_par::{closure#10} @ 0066ac40 (7616 bytes)

/* pipeline[509596c7b52975b2]::setup::setup_par::{closure#10} */

bool __rustcall pipeline[509596c7b52975b2]::setup::setup_par::_closure_10_(char *param_1)

{
  undefined1 auVar1 [32];
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 __fd;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  bool bVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  undefined8 uVar22;
  char *pcVar23;
  long *plVar24;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  char *pcVar34;
  ulong *puVar35;
  long lVar36;
  undefined8 uVar37;
  size_t __len;
  ulong uVar38;
  undefined8 uVar39;
  char *pcVar40;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar41 [64];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  char *local_4f8;
  char *pcStack_4f0;
  char *pcStack_4e8;
  long lStack_4e0;
  long local_4d8;
  undefined1 local_4c8 [16];
  long local_4b8;
  long *local_4b0;
  char *local_4a8;
  char *local_4a0;
  long local_498;
  char *local_490;
  char *local_488;
  ulong local_480;
  ulong local_478;
  char *local_470;
  char *local_468;
  long local_460;
  char *local_458;
  char *pcStack_450;
  ulong local_448;
  long local_440;
  undefined8 local_438;
  ulong *local_430;
  undefined1 local_428 [16];
  char *pcStack_418;
  long lStack_410;
  undefined1 local_408 [32];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 local_2e8 [520];
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  size_t local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _closure_4_();
  if (**(char **)(param_1 + 8) != '\0') {
    puVar35 = *(ulong **)(param_1 + 0x10);
    puVar2 = *(ulong **)(param_1 + 0x18);
    LOCK();
    uVar8 = *puVar35;
    *puVar35 = *puVar35 + 1;
    UNLOCK();
    local_4a8 = param_1;
    if (uVar8 < *puVar2) {
      do {
        _closure_5_();
        LOCK();
        uVar8 = *puVar35;
        *puVar35 = *puVar35 + 1;
        UNLOCK();
      } while (uVar8 < *puVar2);
    }
    param_1 = local_4a8;
    if ((**(char **)(local_4a8 + 0x28) != '\0') &&
       (pcVar23 = *(char **)(local_4a8 + 0x30), *pcVar23 == '\0')) {
      LOCK();
      cVar6 = *pcVar23;
      *pcVar23 = '\x01';
      UNLOCK();
      if (cVar6 == '\0') {
        puVar3 = *(undefined8 **)(local_4a8 + 0x38);
        puVar35 = (ulong *)*puVar3;
        puVar2 = (ulong *)puVar3[1];
        LOCK();
        uVar8 = *puVar35;
        *puVar35 = *puVar35 + 1;
        UNLOCK();
        if (uVar8 < *puVar2) {
          uVar37 = puVar3[2];
          do {
            _closure_5_(uVar37);
            LOCK();
            uVar8 = *puVar35;
            *puVar35 = *puVar35 + 1;
            UNLOCK();
          } while (uVar8 < *puVar2);
        }
        local_428 = ZEXT816(8) << 0x40;
        _local_428 = ZEXT1632(local_428);
        local_408._0_16_ = ZEXT816(8);
        lVar25 = *(long *)(puVar3[3] + 0x10);
        if (lVar25 == 0) {
          uVar8 = 0;
        }
        else {
          plVar18 = *(long **)(puVar3[3] + 8);
          local_4b0 = plVar18 + lVar25 * 7;
LAB_0066ad82:
          do {
            do {
            } while ((char)plVar18[6] == '\0');
            lVar25 = *plVar18;
            if (lVar25 == -1) goto LAB_0066c825;
            pcVar23 = (char *)plVar18[1];
            uVar38 = plVar18[2];
            lVar36 = plVar18[3];
            local_4a0 = (char *)plVar18[4];
            *plVar18 = -1;
            if ((ulong)(local_428._0_8_ - (long)pcStack_418) < uVar38) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_428,pcStack_418,uVar38,8);
              pcVar10 = pcStack_418;
LAB_0066add5:
              (*(code *)PTR_memcpy_00841de0)
                        ((long)pcVar10 * 0x28 + local_428._8_8_,pcVar23,uVar38 * 0x28);
            }
            else {
              pcVar10 = pcStack_418;
              if (uVar38 != 0) goto LAB_0066add5;
            }
            uVar38 = (long)pcVar10 + uVar38;
            pcStack_418 = (char *)uVar38;
            if (lVar25 != 0) {
              if ((sys::A_BASE_0 + -1 < pcVar23) && (pcVar23 < sys::A_END_0)) {
                uVar8 = lVar25 * 0x28 - 1;
                lVar33 = LZCOUNT(uVar8);
                lVar25 = 0x40 - lVar33;
                if ((uVar8 < 0x10000) || (cVar6 = sys::big_put(pcVar23,lVar25), cVar6 == '\0')) {
                  if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                  }
                  *(undefined8 *)pcVar23 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
                  *(char **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar23;
                }
              }
              else {
                free(pcVar23);
              }
            }
            if (lVar36 == 0) {
LAB_0066af08:
              plVar18 = plVar18 + 7;
              if (plVar18 == local_4b0) break;
              goto LAB_0066ad82;
            }
            if (((sys::A_BASE_0 != (char *)0x0) && (sys::A_BASE_0 <= local_4a0)) &&
               (local_4a0 < sys::A_END_0)) {
              uVar8 = lVar36 * 0x18 - 1;
              lVar25 = LZCOUNT(uVar8);
              lVar36 = 0x40 - lVar25;
              if ((uVar8 < 0x10000) || (cVar6 = sys::big_put(local_4a0,lVar36), cVar6 == '\0')) {
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                }
                *(undefined8 *)local_4a0 = *(undefined8 *)(in_FS_OFFSET + lVar36 * 8 + -0x3c8);
                *(char **)(in_FS_OFFSET + lVar36 * 8 + -0x3c8) = local_4a0;
              }
              goto LAB_0066af08;
            }
            free(local_4a0);
            plVar18 = plVar18 + 7;
          } while (plVar18 != local_4b0);
          uVar8 = 5000;
          if (uVar38 < 5000) {
            uVar8 = uVar38;
          }
        }
        pcStack_418 = (char *)uVar8;
        plVar18 = (long *)puVar3[4];
        cVar6 = (char)plVar18[5];
        while (cVar6 == '\0') {
          cVar6 = (char)plVar18[5];
        }
        if (*plVar18 == -1) goto LAB_0066c825;
        if ((uVar8 < 5000) && (1 < (ulong)plVar18[2])) {
          cVar6 = *(char *)puVar3[5];
          while (cVar6 == '\0') {
            cVar6 = *(char *)puVar3[5];
          }
          plVar30 = (long *)plVar18[1];
          plVar24 = plVar30 + plVar18[2] * 2;
          uVar8 = 1;
          bVar15 = false;
          do {
            if (bVar15) {
              if (plVar30 == plVar24) break;
            }
            else {
              if ((ulong)((long)plVar24 - (long)plVar30) >> 4 <= uVar8) break;
              plVar30 = plVar30 + uVar8 * 2;
            }
            if (4999 < pcStack_418) break;
            lVar36 = plVar30[1];
            lVar25 = plVar18[3] + *plVar30;
            lVar33 = 0;
            if (lVar36 != 0) {
              do {
                if (*(char *)(lVar25 + lVar33) == '\n') {
                  lVar33 = lVar33 + 1;
                  goto LAB_0066b076;
                }
                lVar33 = lVar33 + 1;
              } while (lVar36 != lVar33);
              lVar33 = lVar36;
            }
LAB_0066b076:
            uVar38 = lVar36 - lVar33;
            uVar8 = 600000;
            if (uVar38 < 600000) {
              uVar8 = uVar38;
            }
            if (600000 < uVar38) {
              do {
                uVar31 = uVar8 - 1;
                if (uVar38 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0xffffffffffffffff,uVar38,&PTR_s_src_setup_rs_002265a0);
                }
                if (*(char *)(*plVar30 + lVar33 + plVar18[3] + -1 + uVar8) == '\n')
                goto LAB_0066b010;
                uVar8 = uVar31;
              } while (uVar31 != 0);
              uVar8 = 0;
            }
LAB_0066b010:
            plVar30 = plVar30 + 2;
            <pipeline[509596c7b52975b2]::keyrec::Sample>::add_event_lines
                      (local_428,lVar25 + lVar33,uVar8);
            bVar15 = true;
            uVar8 = 0;
          } while( true );
        }
        local_4c8 = (undefined1  [16])0x0;
        local_4b8 = 0;
        cVar6 = v3b::forced();
        if (cVar6 == '\0') {
          auVar45 = keyrec::recover_user_key(local_428,local_4c8);
          uVar37 = auVar45._8_8_;
          if ((auVar45._0_8_ & 1) == 0) goto LAB_0066b156;
          auVar45 = keyrec::recover_event_key
                              (local_428._8_8_,pcStack_418,uVar37,*(undefined8 *)puVar3[6]);
          uVar39 = auVar45._8_8_;
          if ((auVar45._0_8_ & 1) == 0) goto LAB_0066b156;
        }
        else {
LAB_0066b156:
          LOCK();
          v3b::ON_0 = 1;
          UNLOCK();
          uVar37 = 0;
          uVar39 = 0;
        }
        _closure_4_(puVar3[7]);
        uVar8 = plVar18[4];
        if ((uVar8 < 0x9fffebb14) && (iVar7 = ckix_mode(), iVar7 != 0)) {
          uVar8 = uVar8 / 0x14 + 0x103f & 0x1ffffffc0;
        }
        else {
          uVar8 = 0;
        }
        puVar4 = (undefined8 *)puVar3[8];
        cVar6 = *(char *)(puVar4 + 3);
        while (cVar6 == '\0') {
          cVar6 = *(char *)(puVar4 + 3);
        }
        pcVar23 = (char *)*puVar4;
        if (pcVar23 == (char *)0xffffffffffffffff) goto LAB_0066c825;
        pcStack_4f0 = (char *)puVar4[1];
        pcStack_4e8 = (char *)puVar4[2];
        *puVar4 = 0xffffffffffffffff;
        local_4f8 = pcVar23;
        auVar45 = click_key(&local_4f8,uVar37,uVar8);
        uVar22 = auVar45._8_8_;
        if ((auVar45._0_8_ & 1) == 0) {
          uVar8 = 0;
          uVar22 = 0;
        }
        puVar3 = (undefined8 *)puVar3[9];
        *puVar3 = 1;
        puVar3[1] = uVar37;
        puVar3[2] = uVar39;
        puVar3[3] = uVar22;
        puVar3[4] = uVar8;
        *(undefined1 *)(puVar3 + 5) = 1;
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>();
        param_1 = local_4a8;
      }
    }
  }
  plVar18 = *(long **)(param_1 + 0x40);
  LOCK();
  local_4a0 = (char *)*plVar18;
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  local_4a8 = (char *)**(undefined8 **)(param_1 + 0x48);
  if (local_4a8 <= local_4a0) goto LAB_0066c75d;
  plVar18 = (long *)**(undefined8 **)(param_1 + 0x50);
  if (local_4a0 == (char *)0x0) {
    puVar3 = (undefined8 *)plVar18[3];
    <std[c60ef17cbf7de79f]::path::Path>::_join(&local_4f8,plVar18[1],plVar18[2],"products.csv",0xc);
    pcVar23 = pcStack_4f0;
    local_428._8_8_ = 1;
    local_428._0_8_ = 0x1b600000000;
    <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(local_4c8,local_428,pcStack_4f0,pcStack_4e8);
    if (local_4c8[0] != '\0') {
      core[62e902411887be45]::ptr::drop_glue::
      <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::File,core[62e902411887be45]::io::error::Error>>
                (local_4c8);
      goto LAB_0066c84c;
    }
    __fd = local_4c8._4_4_;
    std[c60ef17cbf7de79f]::sys::fs::unix::try_statx(&local_e0,local_4c8._4_4_,&DAT_0020bcf0,0x1000);
    if (local_e0 == -1) {
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      local_408 = ZEXT832(0);
      _local_428 = ZEXT832(0);
      iVar7 = (*(code *)PTR_fstat_00841df8)(__fd,local_428);
      if (iVar7 == -1) {
        piVar14 = __errno_location();
        if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
            &PTR_format_error_0058cdd8) {
          core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
               (undefined *)&PTR_format_error_0058cdd8;
        }
        core[62e902411887be45]::ptr::drop_glue::
        <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                  ((long)*piVar14 << 0x20 | 2);
                    /* WARNING: Subroutine does not return */
        sys::fallback("cannot read a lookup file",0x19);
      }
      uStack_a0 = local_408._0_8_;
      uStack_98 = local_408._8_8_;
      uStack_c0 = local_428._0_8_;
      uStack_b8 = local_428._8_8_;
      local_b0 = pcStack_418;
      uStack_a8 = lStack_410;
      local_68 = uStack_3d0;
      uStack_60 = uStack_3c8;
      uStack_58 = uStack_3c0;
      uStack_50 = local_3b8;
      uStack_48 = uStack_3b0;
      uStack_40 = uStack_3a8;
      uStack_38 = uStack_3a0;
      local_88 = local_408._24_8_;
      uStack_80 = local_3e8;
      uStack_78 = uStack_3e0;
      uStack_70 = uStack_3d8;
      local_90 = local_408._16_8_;
      __len = local_408._16_8_;
      if (local_408._16_8_ == 0) goto LAB_0066b698;
LAB_0066b43a:
      puVar9 = mmap64((void *)0x0,__len,1,2,__fd,0);
      if (puVar9 == (undefined1 *)0xffffffffffffffff) {
LAB_0066c84c:
                    /* WARNING: Subroutine does not return */
        sys::fallback("cannot read a lookup file",0x19);
      }
    }
    else {
      if ((int)local_e0 == 2) {
        core[62e902411887be45]::ptr::drop_glue::
        <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                  (local_d8);
                    /* WARNING: Subroutine does not return */
        sys::fallback("cannot read a lookup file",0x19);
      }
      __len = local_90;
      if (local_90 != 0) goto LAB_0066b43a;
LAB_0066b698:
      puVar9 = &DAT_00000008;
      __len = local_90;
    }
    close(__fd);
    *puVar3 = 1;
    puVar3[1] = puVar9;
    puVar3[2] = __len;
    *(undefined1 *)(puVar3 + 3) = 1;
    if (local_4f8 != (char *)0x0) {
      if (((sys::A_BASE_0 == (char *)0x0) || (pcVar23 < sys::A_BASE_0)) || (sys::A_END_0 <= pcVar23)
         ) {
        free(pcVar23);
      }
      else {
        pcVar10 = &DAT_00000010;
        if (&DAT_00000010 < local_4f8) {
          pcVar10 = local_4f8;
        }
        lVar36 = LZCOUNT(pcVar10 + -1);
        lVar25 = 0x40 - lVar36;
        if ((pcVar10 + -1 < (char *)0x10000) ||
           (cVar6 = sys::big_put(pcVar23,lVar25), cVar6 == '\0')) {
          if (lVar36 == 0) {
LAB_0066c9c9:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar25,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(undefined8 *)pcVar23 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
          *(char **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar23;
        }
      }
    }
    goto LAB_0066c75d;
  }
  if (local_4a0 == &DAT_00000001) {
    puVar35 = (ulong *)*plVar18;
    <std[c60ef17cbf7de79f]::path::Path>::_join(local_428,plVar18[1],plVar18[2],"campaigns.csv",0xd);
    uVar37 = local_428._8_8_;
    std[c60ef17cbf7de79f]::fs::read::inner(&local_4f8,local_428._8_8_,pcStack_418);
    if (local_428._0_8_ != 0) {
      if (((sys::A_BASE_0 == (char *)0x0) || ((ulong)uVar37 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= (ulong)uVar37)) {
        free((void *)uVar37);
      }
      else {
        uVar8 = 0x10;
        if (0x10 < (ulong)local_428._0_8_) {
          uVar8 = local_428._0_8_;
        }
        lVar36 = LZCOUNT(uVar8 - 1);
        lVar25 = 0x40 - lVar36;
        if ((uVar8 - 1 < 0x10000) || (cVar6 = sys::big_put(uVar37,lVar25), cVar6 == '\0')) {
          if (lVar36 == 0) goto LAB_0066c9c9;
          *(undefined8 *)uVar37 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
          *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = uVar37;
        }
      }
    }
    pcVar17 = pcStack_4e8;
    pcVar10 = pcStack_4f0;
    pcVar23 = local_4f8;
    if (local_4f8 == (char *)0xffffffffffffffff) goto LAB_0066c84c;
    uVar8 = __rustc[45371133cddedda4]::__rust_alloc(0x4040,1);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x4040);
    }
    (*(code *)PTR_memset_00841dd0)(uVar8,0xff,0x4040);
    local_4f8 = (char *)0x0;
    pcStack_4f0 = &DAT_00000008;
    pcStack_4e8 = (char *)0x0;
    if (pcVar17 == (char *)0x0) {
      uVar38 = 0;
    }
    else {
      local_470 = pcVar23;
      pcVar40 = (char *)0x0;
      do {
        if (pcVar10[(long)pcVar40] == '\n') {
          if (pcVar17 + -1 == pcVar40) {
            uVar38 = 0;
            goto LAB_0066c4ae;
          }
          pcVar34 = pcVar17 + ~(ulong)pcVar40;
          local_4b0 = (long *)(pcVar10 + (long)pcVar40);
          local_490 = &DAT_00000008;
          bVar15 = false;
          local_480 = 0;
          pcVar27 = (char *)0x0;
          pcVar23 = (char *)0x0;
          local_478 = uVar8;
          local_430 = puVar35;
          goto LAB_0066b8c0;
        }
        pcVar40 = pcVar40 + 1;
      } while (pcVar17 != pcVar40);
      uVar38 = 0;
    }
    goto LAB_0066c4ae;
  }
  if (*(char **)plVar18[4] <= local_4a0) {
    if (local_4a0 == *(char **)plVar18[4]) {
      if (DAT_00843ab0 != 0) {
        <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
        initialize::
        <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
                  ();
      }
      if ((DAT_00843aa0 != 0) && (parse::cpu_order::O._24_4_ != 0)) {
        <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>
        ::initialize::
        <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::_closure_0_>::_closure_0_,_>
                  ();
      }
    }
    else {
      if (*(char **)plVar18[8] <= local_4a0) {
        plVar30 = (long *)*plVar18;
        cVar6 = (char)plVar30[7];
        while (cVar6 == '\0') {
          cVar6 = (char)plVar30[7];
        }
        if (*plVar30 != -1) {
          uVar38 = (long)local_4a0 - *(long *)plVar18[8];
          uVar8 = *(ulong *)(plVar18[9] + 0x10);
          if (uVar8 <= uVar38) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar38,uVar8,&PTR_s_src_setup_rs_00210d60);
          }
          plVar24 = (long *)(uVar38 * 0x350 + *(long *)(plVar18[9] + 8));
          pcVar23 = (char *)plVar18[0xb];
          cVar6 = pcVar23[0x10];
          while (cVar6 == '\0') {
            cVar6 = pcVar23[0x10];
          }
          if (*pcVar23 != '\0') {
            <pipeline[509596c7b52975b2]::core::Core>::new
                      (local_428,plVar30[6],*(undefined8 *)plVar18[10],*(undefined8 *)(pcVar23 + 8),
                       *(undefined8 *)plVar18[0xc],*(undefined4 *)plVar18[0xd]);
            if (*plVar24 != -1) {
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::core::Core>
                        (plVar24);
            }
            (*(code *)PTR_memcpy_00841de0)(plVar24,local_428,0x348);
            *(undefined1 *)(plVar24 + 0x69) = 1;
            goto LAB_0066c75d;
          }
        }
LAB_0066c825:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
      }
      if (local_4a0 == *(char **)plVar18[0xe]) {
        pcVar23 = (char *)plVar18[0xf];
        cVar6 = pcVar23[0x18];
        while (cVar6 == '\0') {
          cVar6 = pcVar23[0x18];
        }
        if (*pcVar23 == '\0') goto LAB_0066c825;
        lVar25 = *(long *)(plVar18[0x10] + 0x10);
        if (lVar25 != 0) {
          uVar37 = *(undefined8 *)(pcVar23 + 8);
          uVar39 = *(undefined8 *)(pcVar23 + 0x10);
          lVar25 = lVar25 * 0x238;
          plVar18 = *(long **)(plVar18[0x10] + 8);
          do {
            <pipeline[509596c7b52975b2]::parse::EvPart>::build(local_428,0,uVar37);
            <pipeline[509596c7b52975b2]::parse::Part>::build(local_2e8,0,uVar39);
            if (*plVar18 != -1) {
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart>
                        (plVar18);
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part>
                        (plVar18 + 0x28);
            }
            (*(code *)PTR_memcpy_00841de0)(plVar18,local_428,0x230);
            *(undefined1 *)(plVar18 + 0x46) = 1;
            lVar25 = lVar25 + -0x238;
            plVar18 = plVar18 + 0x47;
          } while (lVar25 != 0);
        }
      }
      else if (local_4a0 == *(char **)plVar18[0x11]) {
        lVar25 = *(long *)(plVar18[7] + 8);
        <alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>,core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::setup::Slot<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>>,pipeline[509596c7b52975b2]::setup::setup_par::{closure#7}::{closure#1}>>>
        ::from_iter(&local_4f8,lVar25,*(long *)(plVar18[7] + 0x10) * 0x38 + lVar25);
        products_merge(local_428,pcStack_4f0,pcStack_4e8);
        uVar39 = local_428._8_8_;
        pcVar23 = pcStack_418;
        lVar25 = *plVar18;
        <pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>,usize)>>
        ::get(lVar25);
        uVar37 = *(undefined8 *)(lVar25 + 8);
        <pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>,usize)>>
        ::get(lVar25);
        parse::init_tabs_shared(uVar39,pcVar23,uVar37,*(undefined8 *)(lVar25 + 0x10));
        <pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>
        ::set(plVar18[0x12],local_428);
        core[62e902411887be45]::ptr::drop_glue::
        <alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>>
                  (&local_4f8);
      }
    }
    goto LAB_0066c75d;
  }
  pcVar23 = (char *)plVar18[3];
  cVar6 = pcVar23[0x18];
  while (cVar6 == '\0') {
    cVar6 = pcVar23[0x18];
  }
  if (*pcVar23 == '\0') goto LAB_0066c825;
  uVar8 = *(ulong *)(pcVar23 + 0x10);
  pcVar10 = &DAT_00000001;
  if (uVar8 == 0) {
    uVar38 = 0;
  }
  else {
    uVar38 = 0;
    uVar31 = 0;
    pcVar23 = *(char **)(pcVar23 + 8);
    do {
      if (*pcVar23 == '\n') {
        if (uVar8 <= uVar31) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar31 + 1,uVar8,uVar8,&PTR_s_src_setup_rs_00210da8);
        }
        uVar38 = ~uVar31 + uVar8;
        pcVar10 = pcVar23 + 1;
        break;
      }
      uVar31 = uVar31 + 1;
      pcVar23 = pcVar23 + 1;
    } while (uVar8 != uVar31);
  }
  uVar8 = *(ulong *)plVar18[6];
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00226718);
  }
  uVar32 = (long)local_4a0 - *(long *)plVar18[5];
  uVar31 = uVar32 * uVar38;
  if ((uVar31 | uVar8) >> 0x20 == 0) {
    uVar12 = (uVar31 & 0xffffffff) / (uVar8 & 0xffffffff);
    if (uVar8 <= uVar31) goto LAB_0066bca5;
LAB_0066bc94:
    uVar31 = 0;
  }
  else {
    uVar12 = uVar31 / uVar8;
    if (uVar31 < uVar8) goto LAB_0066bc94;
LAB_0066bca5:
    uVar31 = uVar38;
    if (uVar12 < uVar38) {
      pcVar23 = pcVar10 + (uVar12 - 1);
      lVar25 = 0;
      do {
        cVar6 = *pcVar23;
        if (cVar6 == '\n') break;
        pcVar23 = pcVar23 + 1;
        lVar25 = lVar25 + 1;
      } while (pcVar23 != pcVar10 + uVar38);
      uVar31 = lVar25 + uVar12;
      if (cVar6 != '\n') {
        uVar31 = uVar38;
      }
    }
  }
  uVar12 = (uVar32 + 1) * uVar38;
  if ((uVar12 | uVar8) >> 0x20 == 0) {
    uVar13 = (uVar12 & 0xffffffff) / (uVar8 & 0xffffffff);
    pcVar23 = (char *)((uVar12 & 0xffffffff) % (uVar8 & 0xffffffff));
    if (uVar8 <= uVar12) goto LAB_0066bd14;
LAB_0066bd05:
    uVar8 = 0;
  }
  else {
    uVar13 = uVar12 / uVar8;
    pcVar23 = (char *)(uVar12 % uVar8);
    if (uVar12 < uVar8) goto LAB_0066bd05;
LAB_0066bd14:
    uVar8 = uVar38;
    if (uVar13 < uVar38) {
      pcVar17 = pcVar10 + (uVar13 - 1);
      pcVar23 = pcVar10 + uVar38;
      lVar25 = 0;
      do {
        cVar6 = *pcVar17;
        if (cVar6 == '\n') break;
        pcVar17 = pcVar17 + 1;
        lVar25 = lVar25 + 1;
      } while (pcVar17 != pcVar23);
      uVar8 = lVar25 + uVar13;
      if (cVar6 != '\n') {
        uVar8 = uVar38;
      }
    }
  }
  uVar12 = *(ulong *)(plVar18[7] + 0x10);
  if (uVar12 <= uVar32) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar32,uVar12,&PTR_s_src_setup_rs_00210d78);
  }
  uVar12 = uVar8 - uVar31;
  if ((uVar8 < uVar31) || (uVar38 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar31,uVar8,uVar38,&PTR_s_src_setup_rs_00210d90);
  }
  plVar18 = (long *)(uVar32 * 0x38 + *(long *)(plVar18[7] + 8));
  lVar25 = (uVar12 >> 4) * 8 + 0x80;
  local_458 = (char *)__rustc[45371133cddedda4]::__rust_alloc(lVar25,4,pcVar23);
  auVar41._8_56_ = extraout_var;
  auVar41._0_8_ = extraout_XMM0_Qa;
  if (local_458 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,lVar25);
  }
  local_460 = (uVar12 >> 4) + 0x10;
  pcStack_450 = (char *)0x0;
  local_4c8 = ZEXT816(8) << 0x40;
  local_4b8 = 0;
  _local_428 = vpcmpeqd_avx2(auVar41._0_32_,auVar41._0_32_);
  local_408 = _local_428;
  if (uVar12 != 0) {
    pcVar10 = pcVar10 + uVar31;
    uVar38 = 0;
    local_4b0 = (long *)0xffffffff;
    auVar42._4_4_ = DAT_002064e8;
    auVar42._0_4_ = DAT_002064e8;
    auVar42._8_4_ = DAT_002064e8;
    auVar42._12_4_ = DAT_002064e8;
    auVar42._16_4_ = DAT_002064e8;
    auVar42._20_4_ = DAT_002064e8;
    auVar42._24_4_ = DAT_002064e8;
    auVar42._28_4_ = DAT_002064e8;
    auVar43._4_4_ = DAT_00206444;
    auVar43._0_4_ = DAT_00206444;
    auVar43._8_4_ = DAT_00206444;
    auVar43._12_4_ = DAT_00206444;
    auVar43._16_4_ = DAT_00206444;
    auVar43._20_4_ = DAT_00206444;
    auVar43._24_4_ = DAT_00206444;
    auVar43._28_4_ = DAT_00206444;
    auVar44._4_4_ = DAT_00206400;
    auVar44._0_4_ = DAT_00206400;
    auVar44._8_4_ = DAT_00206400;
    auVar44._12_4_ = DAT_00206400;
    auVar44._16_4_ = DAT_00206400;
    auVar44._20_4_ = DAT_00206400;
    auVar44._24_4_ = DAT_00206400;
    auVar44._28_4_ = DAT_00206400;
LAB_0066be50:
    uVar32 = uVar38;
    do {
      uVar13 = uVar32;
      uVar32 = uVar13 + 0x20;
      if (uVar12 < uVar32) {
        uVar29 = uVar13;
        if (uVar13 < uVar12) goto LAB_0066bedc;
        goto LAB_0066c060;
      }
      auVar1 = *(undefined1 (*) [32])(pcVar10 + uVar13);
      uVar37 = vpcmpeqb_avx512vl(auVar1,auVar42);
      uVar39 = vpcmpeqb_avx512vl(auVar1,auVar43);
      uVar28 = (uint)uVar39 | (uint)uVar37;
      uVar37 = vpcmpeqb_avx512vl(auVar1,auVar44);
    } while ((uint)uVar37 == 0 && uVar28 == 0);
    uVar5 = 0;
    for (uVar28 = (uint)uVar37 | uVar28; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar19 = (ulong)uVar5;
    uVar29 = (uVar19 + uVar32) - 0x20;
    if (uVar12 <= uVar29) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar19 + uVar32 + -0x20,uVar12,&PTR_s_src_setup_rs_00226700);
    }
    bVar21 = pcVar10[uVar13 + uVar19];
LAB_0066beee:
    if ((bVar21 == 0x2c) && (pcVar10[uVar38] == 'p')) {
      uVar32 = (uVar29 - uVar38) - 2;
      if (uVar32 < 8) {
        uVar13 = uVar38 + 1;
        if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar13,uVar12,&PTR_s_src_setup_rs_002265b8);
        }
        if ((uVar29 - uVar38 == 2) || (pcVar10[uVar13] != '0')) {
          if ((uVar29 <= uVar38) || (uVar12 < uVar29)) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (uVar13,uVar29,uVar12,&PTR_s_src_setup_rs_002265e8);
          }
          pcVar23 = pcVar10 + uVar13;
          uVar19 = uVar13;
          do {
            if (uVar29 == uVar19) {
              lVar33 = 1;
              lVar36 = -0x1f;
              lVar25 = 0x21;
              pcVar17 = pcVar10;
              goto LAB_0066bf93;
            }
            pcVar17 = pcVar10 + uVar19;
            uVar19 = uVar19 + 1;
          } while ((byte)(*pcVar17 - 0x30U) < 10);
        }
      }
    }
    goto LAB_0066c060;
  }
LAB_0066c6ee:
  local_4f8 = local_458;
  pcStack_4f0 = pcStack_450;
  pcStack_4e8 = (char *)local_4c8._0_8_;
  lStack_4e0 = local_4c8._8_8_;
  local_4d8 = local_4b8;
  lVar25 = local_460;
LAB_0066c723:
  if (*plVar18 != -2) {
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>
              (plVar18);
  }
  *plVar18 = lVar25;
  plVar18[1] = (long)local_4f8;
  plVar18[2] = (long)pcStack_4f0;
  plVar18[3] = (long)pcStack_4e8;
  plVar18[4] = lStack_4e0;
  plVar18[5] = local_4d8;
  *(undefined1 *)(plVar18 + 6) = 1;
LAB_0066c75d:
  return local_4a0 < local_4a8;
LAB_0066b8c0:
  pcVar26 = (char *)0x0;
  do {
    pcVar11 = pcVar10 + (long)pcVar27 + (long)pcVar26;
    if ((pcVar40 + 1)[(long)pcVar11] == '\n') break;
    pcVar26 = pcVar26 + 1;
  } while (pcVar17 + (~(ulong)pcVar27 - (long)pcVar40) != pcVar26);
  pcVar26 = pcVar27 + (long)pcVar26;
  if ((pcVar40 + 1)[(long)pcVar11] != '\n') {
    pcVar26 = pcVar34;
  }
  if ((pcVar26 < pcVar27) || (pcVar34 < pcVar26)) goto LAB_0066c815;
  split2(local_428,(char *)((long)local_4b0 + (long)pcVar27) + 1,(long)pcVar26 - (long)pcVar27);
  pcVar11 = pcVar23;
  if (((short *)local_428._0_8_ != (short *)0x0) &&
     ((((lStack_410 != 0 && (1 < (ulong)local_428._8_8_)) && (*(short *)local_428._0_8_ == 0x5f63))
      && (local_428._8_8_ - 3 < 8)))) {
    uVar8 = 2;
    do {
      if (local_428._8_8_ == uVar8) {
        if (local_428._8_8_ == 2) goto LAB_0066c9a8;
        if ((local_428._8_8_ != 3) && ((char)*(short *)(local_428._0_8_ + 2) == '0')) break;
        bVar21 = (char)*(short *)(local_428._0_8_ + 2) - 0x30;
        uVar8 = (ulong)bVar21;
        if (local_428._8_8_ != 3) {
          uVar28 = (uint)(byte)(*(char *)(local_428._0_8_ + 3) - 0x30) + (uint)bVar21 * 10;
          uVar8 = (ulong)uVar28;
          if (local_428._8_8_ != 4) {
            uVar28 = (uint)(byte)((char)*(short *)(local_428._0_8_ + 4) - 0x30) + uVar28 * 10;
            uVar8 = (ulong)uVar28;
            if (local_428._8_8_ != 5) {
              uVar28 = (uint)(byte)(*(char *)(local_428._0_8_ + 5) - 0x30) + uVar28 * 10;
              uVar8 = (ulong)uVar28;
              if (local_428._8_8_ != 6) {
                uVar28 = (uint)(byte)((char)*(short *)(local_428._0_8_ + 6) - 0x30) + uVar28 * 10;
                uVar8 = (ulong)uVar28;
                if (local_428._8_8_ != 7) {
                  uVar28 = (uint)(byte)(*(char *)(local_428._0_8_ + 7) - 0x30) + uVar28 * 10;
                  uVar8 = (ulong)uVar28;
                  if (local_428._8_8_ != 8) {
                    uVar28 = (uint)(byte)((char)*(short *)(local_428._0_8_ + 8) - 0x30) +
                             uVar28 * 10;
                    uVar8 = (ulong)uVar28;
                    if (local_428._8_8_ != 9) {
                      uVar8 = (ulong)((uint)(byte)(*(char *)(local_428._0_8_ + 9) - 0x30) +
                                     uVar28 * 10);
                    }
                  }
                }
              }
            }
            if (0x3fff < (uint)uVar8) break;
          }
        }
        if (*(char *)(local_478 + uVar8) == -1) {
          local_498 = lStack_410;
          lVar25 = lStack_410;
          pcVar27 = pcStack_418;
          local_468 = pcVar10;
          local_448 = uVar8;
          if (pcVar23 == (char *)0x0) goto LAB_0066bb67;
          lVar36 = (long)pcVar23 * 0x18;
          lVar33 = 0;
          pcVar16 = (char *)0x0;
          local_438 = pcStack_418;
          pcVar10 = local_490;
          local_440 = lVar36;
          goto LAB_0066bb0e;
        }
        break;
      }
      pcVar27 = (char *)(local_428._0_8_ + uVar8);
      uVar8 = uVar8 + 1;
    } while ((byte)(*pcVar27 - 0x30U) < 10);
  }
  goto LAB_0066baa3;
LAB_0066bb0e:
  do {
    if (*(long *)(pcVar10 + lVar33 + 0x10) == lVar25) {
      local_488 = pcVar16;
      iVar7 = (*(code *)PTR_memcmp_00842098)(*(undefined8 *)(pcVar10 + lVar33 + 8),pcVar27,lVar25);
      pcVar10 = local_490;
      pcVar16 = local_488;
      lVar36 = local_440;
      lVar25 = local_498;
      pcVar27 = (char *)local_438;
      if (iVar7 == 0) {
        pcVar23 = local_488;
        pcVar10 = local_468;
        goto LAB_0066bbe5;
      }
    }
    pcVar16 = pcVar16 + 1;
    lVar33 = lVar33 + 0x18;
  } while (lVar36 != lVar33);
LAB_0066bb67:
  if (lVar25 < 0) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
LAB_0066c815:
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail();
  }
  pcVar10 = (char *)__rustc[45371133cddedda4]::__rust_alloc(lVar25,1);
  if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,local_498);
  }
  local_488 = pcVar10;
  (*(code *)PTR_memcpy_00841de0)(pcVar10,pcVar27,local_498);
  pcVar10 = local_468;
  if (pcVar23 == local_4f8) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
              (&local_4f8);
    local_490 = pcStack_4f0;
  }
  *(long *)(local_490 + (long)pcVar23 * 0x18) = local_498;
  *(char **)(local_490 + (long)pcVar23 * 0x18 + 8) = local_488;
  *(long *)(local_490 + (long)pcVar23 * 0x18 + 0x10) = local_498;
  pcVar11 = pcVar23 + 1;
  pcStack_4e8 = pcVar11;
LAB_0066bbe5:
  if (pcVar23 < (char *)0xfa) {
    *(char *)(local_478 + local_448) = (char)pcVar23;
    if (local_480 <= local_448 + 1) {
      local_480 = local_448 + 1;
    }
  }
  else {
LAB_0066baa3:
    bVar15 = true;
  }
  pcVar27 = pcVar26 + 1;
  pcVar23 = pcVar11;
  if (pcVar34 <= pcVar27) goto LAB_0066c485;
  goto LAB_0066b8c0;
LAB_0066c485:
  uVar38 = local_480;
  puVar35 = local_430;
  uVar8 = local_478;
  pcVar23 = local_470;
  if (bVar15) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("campaigns.csv is not canonical",0x1e);
  }
LAB_0066c4ae:
  pcStack_418 = pcStack_4e8;
  local_428._8_8_ = pcStack_4f0;
  local_428._0_8_ = local_4f8;
  if (pcVar23 != (char *)0x0) {
    if (((sys::A_BASE_0 == (char *)0x0) || (pcVar10 < sys::A_BASE_0)) || (sys::A_END_0 <= pcVar10))
    {
      free(pcVar10);
    }
    else {
      pcVar17 = &DAT_00000010;
      if (&DAT_00000010 < pcVar23) {
        pcVar17 = pcVar23;
      }
      lVar25 = 0x40 - LZCOUNT(pcVar17 + -1);
      if ((pcVar17 + -1 < (char *)0x10000) || (cVar6 = sys::big_put(pcVar10,lVar25), cVar6 == '\0'))
      {
        *(undefined8 *)pcVar10 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
        *(char **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar10;
      }
    }
  }
  uVar31 = *puVar35;
  if (uVar31 != 0xffffffffffffffff) {
    if (uVar31 != 0) {
      pcVar23 = (char *)puVar35[1];
      if (((sys::A_BASE_0 == (char *)0x0) || (pcVar23 < sys::A_BASE_0)) || (sys::A_END_0 <= pcVar23)
         ) {
        free(pcVar23);
      }
      else {
        uVar32 = 0x10;
        if (0x10 < uVar31) {
          uVar32 = uVar31;
        }
        lVar25 = 0x40 - LZCOUNT(uVar32 - 1);
        if ((uVar31 < 0x10001) || (cVar6 = sys::big_put(pcVar23,lVar25), cVar6 == '\0')) {
          *(undefined8 *)pcVar23 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
          *(char **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = pcVar23;
        }
      }
    }
    core[62e902411887be45]::ptr::drop_glue::
    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(puVar35 + 3);
  }
  *puVar35 = 0x4040;
  puVar35[1] = uVar8;
  puVar35[2] = 0x4040;
  puVar35[3] = local_428._0_8_;
  puVar35[4] = local_428._8_8_;
  puVar35[5] = (ulong)pcStack_418;
  puVar35[6] = uVar38;
  *(undefined1 *)(puVar35 + 7) = 1;
  goto LAB_0066c75d;
  while (uVar29 = uVar29 + 1, uVar12 != uVar29) {
LAB_0066bedc:
    bVar21 = pcVar10[uVar29];
    if (((ulong)bVar21 < 0x2d) && ((0x100400000400U >> ((ulong)bVar21 & 0x3f) & 1) != 0))
    goto LAB_0066beee;
  }
  goto LAB_0066c060;
  while( true ) {
    auVar1 = *(undefined1 (*) [32])(pcVar40 + uVar29 + 1);
    uVar37 = vpcmpeqb_avx512vl(auVar1,auVar42);
    uVar39 = vpcmpeqb_avx512vl(auVar1,auVar43);
    uVar28 = (uint)uVar39 | (uint)uVar37;
    uVar37 = vpcmpeqb_avx512vl(auVar1,auVar44);
    lVar33 = lVar33 + 0x20;
    lVar36 = lVar36 + 0x20;
    lVar25 = lVar25 + 0x20;
    pcVar17 = pcVar40 + 0x20;
    if ((uint)uVar37 != 0 || uVar28 != 0) break;
LAB_0066bf93:
    pcVar40 = pcVar17;
    if (uVar12 < uVar29 + lVar25) {
      uVar19 = lVar33 + uVar29;
      if (uVar12 <= uVar19) goto LAB_0066c013;
      goto LAB_0066c025;
    }
  }
  uVar5 = 0;
  for (uVar28 = (uint)uVar37 | uVar28; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
    uVar5 = uVar5 + 1;
  }
  uVar20 = (ulong)uVar5;
  uVar19 = uVar29 + lVar36 + uVar20;
  if (uVar12 <= uVar19) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar20 + uVar29 + lVar36,uVar12,&PTR_s_src_setup_rs_00226700);
  }
  bVar21 = pcVar40[uVar20 + uVar29 + 1];
  goto LAB_0066c03a;
  while (uVar19 = uVar19 + 1, uVar12 != uVar19) {
LAB_0066c025:
    bVar21 = pcVar10[uVar19];
    if (((ulong)bVar21 < 0x2d) && ((0x100400000400U >> ((ulong)bVar21 & 0x3f) & 1) != 0))
    goto LAB_0066c03a;
  }
LAB_0066c013:
  uVar19 = uVar12;
  bVar21 = 10;
LAB_0066c03a:
  uVar20 = uVar29 + 1;
  if ((bVar21 == 10) && (lVar25 = uVar19 - uVar20, uVar20 <= uVar19 && lVar25 != 0)) {
    if (uVar13 == uVar29) {
      plVar30 = (long *)0x0;
    }
    else {
      uVar13 = (ulong)(~((int)uVar38 - (int)uVar29) & 7);
      if (uVar32 == 7) {
        uVar38 = uVar29 + ~uVar38 & 0xfffffffffffffff8;
        plVar30 = (long *)0x0;
        do {
          cVar6 = *pcVar23;
          pcVar17 = pcVar23 + 1;
          pcVar40 = pcVar23 + 2;
          pcVar27 = pcVar23 + 3;
          pcVar34 = pcVar23 + 4;
          pcVar26 = pcVar23 + 5;
          pcVar11 = pcVar23 + 6;
          pcVar16 = pcVar23 + 7;
          pcVar23 = pcVar23 + 8;
          plVar30 = (long *)((ulong)(byte)(*pcVar16 - 0x30) +
                            ((ulong)(byte)(*pcVar11 - 0x30) +
                            ((ulong)(byte)(*pcVar26 - 0x30) +
                            ((ulong)(byte)(*pcVar34 - 0x30) +
                            ((ulong)(byte)(*pcVar27 - 0x30) +
                            ((ulong)(byte)(*pcVar40 - 0x30) +
                            ((ulong)(byte)(*pcVar17 - 0x30) +
                            ((ulong)(byte)(cVar6 - 0x30) + (long)plVar30 * 10) * 10) * 10) * 10) *
                            10) * 10) * 10) * 10);
          uVar38 = uVar38 - 8;
        } while (uVar38 != 0);
        if (uVar13 == 0) goto LAB_0066c397;
      }
      else {
        plVar30 = (long *)0x0;
      }
      uVar38 = 0;
      do {
        plVar30 = (long *)((ulong)(byte)(pcVar23[uVar38] - 0x30) + (long)plVar30 * 10);
        uVar38 = uVar38 + 1;
      } while (uVar13 != uVar38);
    }
LAB_0066c397:
    if (uVar12 < uVar19) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar20,uVar19,uVar12,&PTR_s_src_setup_rs_002265d0);
    }
    pcVar23 = pcVar10 + uVar20;
  }
  else {
LAB_0066c060:
    lVar25 = 0;
    do {
      cVar6 = (pcVar10 + uVar38)[lVar25];
      if (cVar6 == '\n') break;
      lVar25 = lVar25 + 1;
    } while ((uVar8 - uVar31) - uVar38 != lVar25);
    uVar19 = lVar25 + uVar38;
    if (cVar6 != '\n') {
      uVar19 = uVar12;
    }
    if ((uVar19 < uVar38) || (uVar12 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar38,uVar19,uVar12,&PTR_s_src_setup_rs_00226600);
    }
    split2(&local_4f8,pcVar10 + uVar38,uVar19 - uVar38);
    if ((local_4f8 == (char *)0x0) || (lStack_4e0 == 0)) goto LAB_0066c3bc;
    plVar30 = local_4b0;
    if ((pcStack_4f0 != (char *)0x0) &&
       ((plVar30 = (long *)0xfffffffe, *local_4f8 == 'p' && (pcStack_4f0 + -2 < &DAT_00000008)))) {
      pcVar23 = &DAT_00000001;
      do {
        if (pcStack_4f0 == pcVar23) {
          if (pcStack_4f0 == &DAT_00000001) {
LAB_0066c9a8:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_k_ref_rs_00214608);
          }
          if ((pcStack_4f0 == &_nl_current_LC_CTYPE_used) ||
             (plVar30 = (long *)0xfffffffe, local_4f8[1] != '0')) {
            uVar28 = (uint)(byte)(local_4f8[1] - 0x30U);
            if (((pcStack_4f0 != &_nl_current_LC_CTYPE_used) &&
                (((uVar28 = (uint)(byte)(local_4f8[2] - 0x30) +
                            (uint)(byte)(local_4f8[1] - 0x30U) * 10, pcStack_4f0 != (char *)0x3 &&
                  (uVar28 = (uint)(byte)(local_4f8[3] - 0x30) + uVar28 * 10,
                  pcStack_4f0 != &DAT_00000004)) &&
                 (uVar28 = (uint)(byte)(local_4f8[4] - 0x30) + uVar28 * 10,
                 pcStack_4f0 != &DAT_00000005)))) &&
               (((uVar28 = (uint)(byte)(local_4f8[5] - 0x30) + uVar28 * 10,
                 pcStack_4f0 != &DAT_00000006 &&
                 (uVar28 = (uint)(byte)(local_4f8[6] - 0x30) + uVar28 * 10,
                 pcStack_4f0 != &DAT_00000007)) &&
                (uVar28 = (uint)(byte)(local_4f8[7] - 0x30) + uVar28 * 10,
                pcStack_4f0 != &DAT_00000008)))) {
              uVar28 = (uint)(byte)(local_4f8[8] - 0x30) + uVar28 * 10;
            }
            plVar30 = (long *)(ulong)uVar28;
          }
          goto LAB_0066c240;
        }
        pcVar17 = local_4f8 + (long)pcVar23;
        pcVar23 = pcVar23 + 1;
      } while ((byte)(*pcVar17 - 0x30U) < 10);
      plVar30 = (long *)0xfffffffe;
    }
LAB_0066c240:
    lVar25 = lStack_4e0;
    pcVar23 = pcStack_4e8;
  }
  cVar6 = products_part::_closure_0_(local_428,plVar30,pcVar23,lVar25,local_4c8,&local_460);
  if (cVar6 != '\0') {
    uVar38 = uVar19 + 1;
    auVar42._4_4_ = DAT_002064e8;
    auVar42._0_4_ = DAT_002064e8;
    auVar42._8_4_ = DAT_002064e8;
    auVar42._12_4_ = DAT_002064e8;
    auVar42._16_4_ = DAT_002064e8;
    auVar42._20_4_ = DAT_002064e8;
    auVar42._24_4_ = DAT_002064e8;
    auVar42._28_4_ = DAT_002064e8;
    auVar43._4_4_ = DAT_00206444;
    auVar43._0_4_ = DAT_00206444;
    auVar43._8_4_ = DAT_00206444;
    auVar43._12_4_ = DAT_00206444;
    auVar43._16_4_ = DAT_00206444;
    auVar43._20_4_ = DAT_00206444;
    auVar43._24_4_ = DAT_00206444;
    auVar43._28_4_ = DAT_00206444;
    auVar44._4_4_ = DAT_00206400;
    auVar44._0_4_ = DAT_00206400;
    auVar44._8_4_ = DAT_00206400;
    auVar44._12_4_ = DAT_00206400;
    auVar44._16_4_ = DAT_00206400;
    auVar44._20_4_ = DAT_00206400;
    auVar44._24_4_ = DAT_00206400;
    auVar44._28_4_ = DAT_00206400;
    if (uVar12 <= uVar38) goto LAB_0066c6ee;
    goto LAB_0066be50;
  }
LAB_0066c3bc:
  core[62e902411887be45]::ptr::drop_glue::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(local_4c8);
  pcVar23 = local_458;
  lVar25 = -1;
  if (local_460 == 0) goto LAB_0066c723;
  if (((sys::A_BASE_0 == (char *)0x0) || (local_458 < sys::A_BASE_0)) || (sys::A_END_0 <= local_458)
     ) {
    free(local_458);
    goto LAB_0066c723;
  }
  uVar8 = 0x10;
  if (0x10 < (ulong)(local_460 << 3)) {
    uVar8 = local_460 << 3;
  }
  lVar33 = LZCOUNT(uVar8 - 1);
  lVar36 = 0x40 - lVar33;
  if (0xffff < uVar8 - 1) {
    cVar6 = sys::big_put(local_458,lVar36);
    if (cVar6 != '\0') goto LAB_0066c723;
  }
  if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
  }
  *(undefined8 *)pcVar23 = *(undefined8 *)(in_FS_OFFSET + lVar36 * 8 + -0x3c8);
  *(char **)(in_FS_OFFSET + lVar36 * 8 + -0x3c8) = pcVar23;
  goto LAB_0066c723;
}


// ==== pipeline::setup::setup_par::{closure#11} @ 0066ca40 (7251 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::setup::setup_par::{closure#11} */

void __rustcall
pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte *pbVar1;
  undefined1 uVar2;
  ushort uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  void *pvVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined8 *puVar43;
  undefined1 *puVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  undefined1 *puVar48;
  int iVar49;
  ulong *puVar50;
  ulong *puVar51;
  long lVar52;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar53;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [64];
  long lVar59;
  long lVar60;
  undefined1 auVar61 [32];
  long lVar62;
  long lVar63;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined1 auVar64 [32];
  long lVar68;
  long lVar69;
  long lVar70;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar73 [16];
  undefined1 auVar74 [12];
  undefined1 auStack_8030 [32768];
  
  puVar42 = auStack_8030 + 0x8000;
  do {
    puVar41 = puVar42;
    *(undefined8 *)(puVar41 + -0x1000) = 0;
    puVar42 = puVar41 + -0x1000;
  } while (puVar41 + -0x1000 != auStack_8030);
  if (param_2 != 0) {
    auVar73._0_8_ = *param_1;
    do {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66ca88;
      cVar21 = _closure_10_(auVar73._0_8_);
    } while (cVar21 != '\0');
    cVar21 = *(char *)(param_1[1] + 0x18);
    while (((cVar21 == '\0' || (*(char *)(param_1[2] + 0x18) == '\0')) &&
           (*(char *)param_1[3] == '\0'))) {
      cVar21 = *(char *)(param_1[1] + 0x18);
    }
    do {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cae8;
      cVar21 = _closure_10_(auVar73._0_8_);
    } while (cVar21 != '\0');
    return;
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66cb0d;
  lVar23 = __rustc[45371133cddedda4]::__rust_alloc(0x3800,8);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e631;
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x3800);
  }
  *(undefined8 *)(puVar41 + -0x11a0) = 0x100;
  *(long *)(puVar41 + -0x1198) = lVar23;
  *(undefined8 *)(puVar41 + -0x1190) = 0;
  *(undefined8 *)(puVar41 + -0x1060) = 0;
  *(undefined8 *)(puVar41 + -0x1058) = 3;
  puVar41[-0x1050] = 0;
  *(char **)(puVar41 + -0x1048) = "events";
  *(undefined8 *)(puVar41 + -0x1040) = 6;
  puVar41[-0x1038] = 1;
  *(char **)(puVar41 + -0x1030) = "clicks";
  *(undefined8 *)(puVar41 + -0x1028) = 6;
  puVar41[-0x1020] = 2;
  *(char **)(puVar41 + -0x1018) = "links";
  *(undefined8 *)(puVar41 + -0x1010) = 5;
  *(undefined8 *)(puVar41 + -0x1160) = param_1[4];
  *(undefined8 *)(puVar41 + -0x1158) = param_1[5];
  lVar23 = 0;
  *(undefined8 **)(puVar41 + -0x11b0) = param_1;
  do {
    cVar21 = puVar41[lVar23 * 0x18 + -0x1050];
    puVar41[-0x1120] = cVar21;
    if (cVar21 == -1) break;
    *(long *)(puVar41 + -0x1100) = lVar23;
    uVar25 = *(ulong *)(puVar41 + lVar23 * 0x18 + -0x1048);
    param_5 = *(ulong *)(puVar41 + lVar23 * 0x18 + -0x1040);
    *(ulong *)(puVar41 + -0x1128) = param_5;
    if (sys::FD_ALL_0 == '\0') {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cc2c;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (puVar41 + -0x1118,*(undefined8 *)(puVar41 + -0x1160),
                 *(undefined8 *)(puVar41 + -0x1158),uVar25);
      *(undefined8 *)(puVar41 + -0x1168) = *(undefined8 *)(puVar41 + -0x1110);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cc4e;
      list(puVar41 + -0x1008,*(undefined8 *)(puVar41 + -0x1110),*(undefined8 *)(puVar41 + -0x1108));
      puVar43 = *(undefined8 **)(puVar41 + -0x1000);
      lVar32 = *(long *)(puVar41 + -0xff8);
      *(undefined8 **)(puVar41 + -0x1188) = puVar43;
      *(undefined8 *)(puVar41 + -0x1178) = *(undefined8 *)(puVar41 + -0x1008);
      *(undefined8 **)(puVar41 + -0x11c8) = puVar43 + lVar32 * 4;
      *(undefined8 **)(puVar41 + -0x1170) = puVar43 + lVar32 * 4;
      if (lVar32 != 0) {
        *(ulong *)(puVar41 + -0x1150) = uVar25;
        puVar30 = puVar43;
        do {
          puVar43 = puVar30 + 4;
          param_1 = (undefined8 *)*puVar30;
          if (param_1 == (undefined8 *)0xffffffffffffffff) goto LAB_0066cebc;
          puVar26 = (ulong *)puVar30[1];
          unaff_R15 = (ulong *)puVar30[3];
          if (unaff_R15 != (ulong *)0x0) {
            lVar23 = puVar30[2];
            if (lVar23 == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = CONCAT71((int7)((ulong)lVar32 >> 8),(char)*puVar26 == '/');
            }
            *(ulong **)(puVar41 + -0x11a8) = puVar26;
            *(ulong **)(puVar41 + -0x1008) = puVar26;
            *(long *)(puVar41 + -0x1000) = lVar23;
            puVar41[-0xff8] = 0xff;
            puVar41[-0xfce] = (char)uVar37;
            *(undefined2 *)(puVar41 + -0xfd0) = 0x201;
            puVar42 = puVar41 + -0x10f8;
            puVar30 = (undefined8 *)(puVar41 + -0x1008);
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd35;
            <std[c60ef17cbf7de79f]::path::Components_as_core[62e902411887be45]::iter::traits::double_ended::DoubleEndedIterator>
            ::next_back();
            if ((puVar41[-0x10f8] == -1) || (puVar41[-0x10f8] != '\t')) {
LAB_0066cdb0:
              lVar24 = 1;
              uVar33 = 0;
              lVar23 = *(long *)(puVar41 + -0x1190);
              if (lVar23 == *(long *)(puVar41 + -0x11a0)) {
LAB_0066cd97:
                *(undefined8 *)(puVar41 + -0x11d0) = 0x66cda1;
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>
                ::grow_one(puVar41 + -0x11a0);
              }
            }
            else {
              uVar33 = *(ulong *)(puVar41 + -0x10e8);
              if ((long)uVar33 < 0) goto LAB_0066d650;
              if (uVar33 == 0) goto LAB_0066cdb0;
              auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x10f0);
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd70;
              lVar24 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
              if (lVar24 == 0) goto LAB_0066e615;
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd8b;
              (*(code *)PTR_memcpy_00841de0)(lVar24,auVar73._0_8_,uVar33);
              lVar23 = *(long *)(puVar41 + -0x1190);
              if (lVar23 == *(long *)(puVar41 + -0x11a0)) goto LAB_0066cd97;
            }
            lVar47 = *(long *)(puVar41 + -0x1198);
            lVar32 = lVar23 * 0x38;
            *(ulong *)(lVar47 + lVar32) = uVar33;
            *(long *)(lVar47 + 8 + lVar32) = lVar24;
            *(ulong *)(lVar47 + 0x10 + lVar32) = uVar33;
            *(undefined8 *)(lVar47 + 0x18 + lVar32) = *(undefined8 *)(puVar41 + -0x1150);
            *(undefined8 *)(lVar47 + 0x20 + lVar32) = *(undefined8 *)(puVar41 + -0x1128);
            *(ulong **)(lVar47 + 0x28 + lVar32) = unaff_R15;
            *(undefined4 *)(lVar47 + 0x30 + lVar32) = 0xffffffff;
            *(undefined1 *)(lVar47 + 0x34 + lVar32) = puVar41[-0x1120];
            *(long *)(puVar41 + -0x1190) = lVar23 + 1;
            puVar26 = *(ulong **)(puVar41 + -0x11a8);
          }
          if (param_1 != (undefined8 *)0x0) {
            if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= puVar26)) {
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cca5;
              free(puVar26);
            }
            else {
              if (param_1 < &DAT_00000011) {
                param_1 = (undefined8 *)&DAT_00000010;
              }
              lVar24 = LZCOUNT((undefined1 *)((long)param_1 + -1));
              lVar23 = 0x40 - lVar24;
              if ((undefined1 *)0xffff < (undefined1 *)((long)param_1 + -1)) {
                *(undefined8 *)(puVar41 + -0x11d0) = 0x66ce8a;
                cVar21 = sys::big_put(puVar26,lVar23);
                unaff_R15 = puVar26;
                if (cVar21 != '\0') goto LAB_0066cca5;
              }
              if (lVar24 == 0) goto LAB_0066e631;
              *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
              *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
            }
          }
LAB_0066cca5:
          puVar30 = puVar43;
        } while (puVar43 != *(undefined8 **)(puVar41 + -0x11c8));
        puVar43 = *(undefined8 **)(puVar41 + -0x11c8);
LAB_0066cebc:
        param_1 = *(undefined8 **)(puVar41 + -0x11b0);
      }
      *(undefined8 **)(puVar41 + -0x1180) = puVar43;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66ced0;
      core[62e902411887be45]::ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
                (puVar41 + -0x1188);
      uVar25 = *(ulong *)(puVar41 + -0x1118);
      if (uVar25 != 0) {
        puVar26 = *(ulong **)(puVar41 + -0x1168);
        if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puVar26)) {
LAB_0066d490:
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d495;
          free(puVar26);
        }
        else {
          if (uVar25 < 0x11) {
            uVar25 = 0x10;
          }
          lVar32 = LZCOUNT(uVar25 - 1);
          lVar23 = 0x40 - lVar32;
          if (0xffff < uVar25 - 1) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66cf4b;
            cVar21 = sys::big_put(*(undefined8 *)(puVar41 + -0x1168),lVar23);
            if (cVar21 != '\0') goto LAB_0066d495;
          }
          if (lVar32 == 0) goto LAB_0066e631;
          puVar30 = *(undefined8 **)(puVar41 + -0x1168);
          *puVar30 = *(undefined8 *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar30;
        }
      }
    }
    else {
      puVar42 = puVar41 + -0x1008;
      puVar30 = *(undefined8 **)(puVar41 + -0x1160);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cf95;
      uVar37 = uVar25;
      <std[c60ef17cbf7de79f]::path::Path>::_join(puVar42,puVar30,*(undefined8 *)(puVar41 + -0x1158))
      ;
      uVar33 = *(ulong *)(puVar41 + -0xff8);
      if ((long)uVar33 < 0) {
LAB_0066d650:
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66d655;
        uVar25 = alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
        goto LAB_0066d655;
      }
      puVar26 = *(ulong **)(puVar41 + -0x1000);
      if (uVar33 == 0) {
        *(undefined8 *)(puVar41 + -0x1188) = 0;
        *(undefined8 *)(puVar41 + -0x1180) = 1;
      }
      else {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66cfd4;
        lVar23 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
        if (lVar23 == 0) {
LAB_0066e615:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e622;
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar33);
        }
        *(ulong *)(puVar41 + -0x1188) = uVar33;
        *(long *)(puVar41 + -0x1180) = lVar23;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66cff6;
        (*(code *)PTR_memcpy_00841de0)(lVar23,puVar26,uVar33);
      }
      *(ulong *)(puVar41 + -0x1178) = uVar33;
      uVar37 = *(ulong *)(puVar41 + -0x1008);
      if (uVar37 != 0) {
        if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puVar26)) {
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d08a;
          free(puVar26);
        }
        else {
          if (uVar37 < 0x11) {
            uVar37 = 0x10;
          }
          unaff_R15 = (ulong *)LZCOUNT(uVar37 - 1);
          lVar23 = 0x40 - (long)unaff_R15;
          if (0xffff < uVar37 - 1) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d05a;
            cVar21 = sys::big_put(puVar26,lVar23);
            if (cVar21 != '\0') goto LAB_0066d08a;
          }
          if (unaff_R15 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6a3;
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
        }
      }
LAB_0066d08a:
      *(ulong *)(puVar41 + -0x1150) = uVar25;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d099;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(puVar41 + -0x1188);
      lVar23 = *(long *)(puVar41 + -0x1180);
      *(undefined1 *)(lVar23 + uVar33) = 0;
      *(ulong *)(puVar41 + -0x1178) = uVar33 + 1;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d0c2;
      lVar23 = syscall(0x101,0xffffffffffffff9c,lVar23,0x90000);
      *(long *)(puVar41 + -0x11c8) = lVar23;
      if (lVar23 < 0) {
LAB_0066e5a9:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5b8;
        sys::fallback("cannot list an input folder",0x1b);
      }
LAB_0066d0d0:
      auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c8);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d0f0;
      puVar26 = (ulong *)syscall(0xd9,auVar73._0_8_,puVar41 + -0x1008,0x8000);
      if ((long)puVar26 < 0) goto LAB_0066e5a9;
      if (puVar26 != (ulong *)0x0) {
        puVar50 = (ulong *)0x0;
        do {
          while( true ) {
            uVar3 = *(ushort *)(puVar41 + -0xff8 + (long)puVar50);
            puVar42 = puVar41 + -0x11c8 + (long)puVar50 + 0x1d3;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d189;
            uVar33 = (*(code *)PTR_strlen_008420a8)(puVar42);
            puVar51 = (ulong *)((ulong)uVar3 + (long)puVar50);
            unaff_R15 = puVar50;
            if (1 < uVar33 - 1) break;
LAB_0066d160:
            puVar50 = puVar51;
            if (puVar26 <= puVar51) goto LAB_0066d0d0;
          }
          if (uVar33 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d79a;
            core[62e902411887be45]::slice::index::slice_index_fail
                      (0,0xffffffffffffffff,0,&PTR_s_src_setup_rs_00226870);
          }
          if ((uVar33 < 4) ||
             (*(int *)(puVar41 + -0x11c8 + (long)puVar50 + uVar33 + 0x1cf) != 0x7673632e))
          goto LAB_0066d160;
          cVar21 = (puVar41 + -0xff6)[(long)puVar50];
          if (cVar21 == '\0') {
LAB_0066d107:
            auVar73 = ZEXT816(0);
            *(undefined1 (*) [32])(puVar41 + -0x1088) = ZEXT1632(auVar73);
            *(undefined1 (*) [32])(puVar41 + -0x1098) = ZEXT1632(auVar73);
            auVar57 = ZEXT1632(auVar73);
            *(undefined1 (*) [32])(puVar41 + -0x10b8) = auVar57;
            *(undefined1 (*) [32])(puVar41 + -0x10d8) = auVar57;
            *(undefined1 (*) [32])(puVar41 + -0x10f8) = auVar57;
            param_5 = 0;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d159;
            lVar23 = syscall(0x106,*(undefined8 *)(puVar41 + -0x11c8),puVar42,puVar41 + -0x10f8);
            if ((lVar23 != 0) || ((*(uint *)(puVar41 + -0x10e0) & 0xf000) != 0x8000))
            goto LAB_0066d160;
          }
          else if (cVar21 != '\b') {
            if (cVar21 != '\n') goto LAB_0066d160;
            goto LAB_0066d107;
          }
          puVar50 = *(ulong **)(puVar41 + -0x11c8);
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d20f;
          unaff_R15 = (ulong *)syscall(0x101,puVar50,puVar42,0x80000);
          if ((long)unaff_R15 < 0) {
            *(undefined8 *)(puVar41 + -0x1088) = 0;
            *(undefined8 *)(puVar41 + -0x1080) = 0;
            *(undefined8 *)(puVar41 + -0x1078) = 0;
            *(undefined8 *)(puVar41 + -0x1070) = 0;
            *(undefined8 *)(puVar41 + -0x1098) = 0;
            *(undefined8 *)(puVar41 + -0x1090) = 0;
            *(undefined8 *)(puVar41 + -0x1088) = 0;
            *(undefined8 *)(puVar41 + -0x1080) = 0;
            *(undefined8 *)(puVar41 + -0x10b8) = 0;
            *(undefined8 *)(puVar41 + -0x10b0) = 0;
            *(undefined8 *)(puVar41 + -0x10a8) = 0;
            *(undefined8 *)(puVar41 + -0x10a0) = 0;
            *(undefined8 *)(puVar41 + -0x10d8) = 0;
            *(undefined8 *)(puVar41 + -0x10d0) = 0;
            *(undefined8 *)(puVar41 + -0x10c8) = 0;
            *(undefined8 *)(puVar41 + -0x10c0) = 0;
            *(undefined8 *)(puVar41 + -0x10f8) = 0;
            *(undefined8 *)(puVar41 + -0x10f0) = 0;
            *(undefined8 *)(puVar41 + -0x10e8) = 0;
            *(undefined8 *)(puVar41 + -0x10e0) = 0;
            param_5 = 0;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d300;
            lVar23 = syscall(0x106,puVar50,puVar42,puVar41 + -0x10f8);
            unaff_R15 = puVar50;
            if (((lVar23 == 0) && ((*(uint *)(puVar41 + -0x10e0) & 0xf000) == 0x8000)) &&
               (*(long *)(puVar41 + -0x10c8) != 0)) goto LAB_0066e5b8;
            goto LAB_0066d160;
          }
          *(undefined8 *)(puVar41 + -0x1088) = 0;
          *(undefined8 *)(puVar41 + -0x1080) = 0;
          *(undefined8 *)(puVar41 + -0x1078) = 0;
          *(undefined8 *)(puVar41 + -0x1070) = 0;
          *(undefined8 *)(puVar41 + -0x1098) = 0;
          *(undefined8 *)(puVar41 + -0x1090) = 0;
          *(undefined8 *)(puVar41 + -0x1088) = 0;
          *(undefined8 *)(puVar41 + -0x1080) = 0;
          *(undefined8 *)(puVar41 + -0x10b8) = 0;
          *(undefined8 *)(puVar41 + -0x10b0) = 0;
          *(undefined8 *)(puVar41 + -0x10a8) = 0;
          *(undefined8 *)(puVar41 + -0x10a0) = 0;
          *(undefined8 *)(puVar41 + -0x10d8) = 0;
          *(undefined8 *)(puVar41 + -0x10d0) = 0;
          *(undefined8 *)(puVar41 + -0x10c8) = 0;
          *(undefined8 *)(puVar41 + -0x10c0) = 0;
          *(undefined8 *)(puVar41 + -0x10f8) = 0;
          *(undefined8 *)(puVar41 + -0x10f0) = 0;
          *(undefined8 *)(puVar41 + -0x10e8) = 0;
          *(undefined8 *)(puVar41 + -0x10e0) = 0;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d266;
          lVar23 = syscall(5,unaff_R15,puVar41 + -0x10f8);
          if (lVar23 != 0) {
LAB_0066e5b8:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5c7;
            sys::fallback("open input",10);
          }
          if (*(long *)(puVar41 + -0x10c8) == 0 || (*(uint *)(puVar41 + -0x10e0) & 0xf000) != 0x8000
             ) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d2aa;
            syscall(3,unaff_R15);
            goto LAB_0066d160;
          }
          *(long *)(puVar41 + -0x11a8) = *(long *)(puVar41 + -0x10c8);
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d351;
          lVar23 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
          if (lVar23 == 0) goto LAB_0066e615;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d36c;
          (*(code *)PTR_memcpy_00841de0)(lVar23,puVar42,uVar33);
          lVar32 = *(long *)(puVar41 + -0x1190);
          if (lVar32 == *(long *)(puVar41 + -0x11a0)) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d3e6;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::
            grow_one(puVar41 + -0x11a0);
          }
          lVar24 = *(long *)(puVar41 + -0x1198);
          lVar47 = lVar32 * 0x38;
          *(ulong *)(lVar24 + lVar47) = uVar33;
          *(long *)(lVar24 + 8 + lVar47) = lVar23;
          *(ulong *)(lVar24 + 0x10 + lVar47) = uVar33;
          *(undefined8 *)(lVar24 + 0x18 + lVar47) = *(undefined8 *)(puVar41 + -0x1150);
          *(undefined8 *)(lVar24 + 0x20 + lVar47) = *(undefined8 *)(puVar41 + -0x1128);
          *(undefined8 *)(lVar24 + 0x28 + lVar47) = *(undefined8 *)(puVar41 + -0x11a8);
          *(int *)(lVar24 + 0x30 + lVar47) = (int)unaff_R15;
          *(undefined1 *)(lVar24 + 0x34 + lVar47) = puVar41[-0x1120];
          *(long *)(puVar41 + -0x1190) = lVar32 + 1;
          param_1 = *(undefined8 **)(puVar41 + -0x11b0);
          puVar50 = puVar51;
        } while (puVar51 < puVar26);
        goto LAB_0066d0d0;
      }
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d3f7;
      syscall(3,auVar73._0_8_);
      uVar25 = *(ulong *)(puVar41 + -0x1188);
      if (uVar25 != 0) {
        puVar26 = *(ulong **)(puVar41 + -0x1180);
        if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puVar26)) goto LAB_0066d490;
        if (uVar25 < 0x11) {
          uVar25 = 0x10;
        }
        unaff_R15 = (ulong *)LZCOUNT(uVar25 - 1);
        lVar23 = 0x40 - (long)unaff_R15;
        if (0xffff < uVar25 - 1) {
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d461;
          cVar21 = sys::big_put(puVar26,lVar23);
          if (cVar21 != '\0') goto LAB_0066d495;
        }
        if (unaff_R15 == (ulong *)0x0) {
LAB_0066e631:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e643;
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar23,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
      }
    }
LAB_0066d495:
    lVar23 = *(long *)(puVar41 + -0x1100) + 1;
  } while (lVar23 != 3);
  lVar23 = *(long *)(puVar41 + -0x1198);
  uVar25 = *(ulong *)(puVar41 + -0x1190);
  if (1 < uVar25) {
    if (uVar25 < 0x15) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5d6;
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                ();
    }
    else {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6a8;
      core[62e902411887be45]::slice::sort::stable::driftsort_main::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>
                ();
    }
    lVar23 = *(long *)(puVar41 + -0x1198);
    uVar25 = *(ulong *)(puVar41 + -0x1190);
    param_1 = *(undefined8 **)(puVar41 + -0x11b0);
  }
  *(undefined8 *)(puVar41 + -0x1148) = 0;
  *(undefined8 *)(puVar41 + -0x1140) = 0;
  *(undefined8 *)(puVar41 + -0x1138) = 0;
  if (uVar25 != 0) {
    uVar33 = uVar25 * 0x38 - 0x38;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar33 >> 3;
    uVar36 = SUB164(auVar73 * ZEXT816(0x2492492492492493),8) + 1U & 7;
    lVar32 = lVar23;
    if (uVar36 != 0) {
      lVar24 = (ulong)uVar36 * 0x38;
      do {
        param_5 = (ulong)*(byte *)(lVar32 + 0x34);
        plVar34 = (long *)(lVar32 + 0x28);
        lVar32 = lVar32 + 0x38;
        *(long *)(puVar41 + param_5 * 8 + -0x1148) =
             *(long *)(puVar41 + param_5 * 8 + -0x1148) + *plVar34;
        lVar24 = lVar24 + -0x38;
      } while (lVar24 != 0);
    }
    if (0x187 < uVar33) {
      do {
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x34) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x34) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x28);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x6c) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x6c) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x60);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xa4) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xa4) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x98);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xdc) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xdc) * 8 + -0x1148) +
             *(long *)(lVar32 + 0xd0);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x114) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x114) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x108);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x14c) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x14c) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x140);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x184) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x184) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x178);
        pbVar1 = (byte *)(lVar32 + 0x1bc);
        plVar34 = (long *)(lVar32 + 0x1b0);
        lVar32 = lVar32 + 0x1c0;
        *(long *)(puVar41 + (ulong)*pbVar1 * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*pbVar1 * 8 + -0x1148) + *plVar34;
      } while (lVar32 != lVar23 + uVar25 * 0x38);
    }
  }
  unaff_R15 = (ulong *)param_1[7];
  puVar42 = (undefined1 *)*unaff_R15;
  if (puVar42 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e65e;
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00210dd8);
  }
  uVar37 = *(ulong *)(puVar41 + -0x1148);
  uVar25 = uVar37 / 0x28;
  puVar30 = (undefined8 *)param_1[6];
  if ((uVar25 | (ulong)puVar42) >> 0x20 == 0) {
LAB_0066d655:
    uVar25 = (uVar25 & 0xffffffff) / ((ulong)puVar42 & 0xffffffff);
  }
  else {
    uVar25 = uVar25 / (ulong)puVar42;
  }
  *puVar30 = 1;
  puVar30[1] = uVar25 * 2 + 0x10000;
  *(undefined1 *)(puVar30 + 2) = 1;
  puVar30 = (undefined8 *)param_1[8];
  uVar33 = (uVar37 >> 6) + 0x8fff;
  uVar37 = (uVar33 >> 4) + 0x1800 & 0xfffffffffffff000;
  uVar25 = 0x4000000;
  if (uVar37 < 0x4000000) {
    uVar25 = uVar37;
  }
  *puVar30 = 1;
  puVar30[1] = uVar33 >> 0xf;
  puVar30[2] = uVar25 >> 0xc & 0xfffff;
  *(undefined1 *)(puVar30 + 3) = 1;
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66d6c4;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  uVar25 = auVar73._8_8_ & 0xffffffff;
  if (sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66d6e5;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,uVar25,sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar12._8_8_ = unaff_XMM15_Qb;
    auVar12._0_8_ = unaff_XMM15_Qa;
    auVar12 = vcvtusi2sd_avx512f(auVar12,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar12._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e56d;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one();
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "s.list";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 6;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  uVar33 = *(ulong *)(puVar41 + -0x1190);
  sys::LAST_1 = auVar73._8_4_;
  sys::LAST_0 = auVar73._0_8_;
  if (uVar33 == 0) {
    uVar37 = 0;
  }
  else {
    lVar23 = *(long *)(puVar41 + -0x1198);
    if (uVar33 < 5) {
      lVar38 = 0;
      uVar37 = 0;
    }
    else {
      if (uVar33 < 0x11) {
        uVar37 = 0;
        lVar32 = 0;
      }
      else {
        uVar45 = 0x10;
        if ((uVar33 & 0xf) != 0) {
          uVar45 = (ulong)((uint)uVar33 & 0xf);
        }
        lVar38 = uVar33 - uVar45;
        auVar57._8_8_ = _UNK_00203768;
        auVar57._0_8_ = _DAT_00203760;
        auVar57._16_8_ = _UNK_00203770;
        auVar57._24_8_ = _UNK_00203778;
        auVar64._8_8_ = DAT_00201b08;
        auVar64._0_8_ = DAT_00201b08;
        auVar64._16_8_ = DAT_00201b08;
        auVar64._24_8_ = DAT_00201b08;
        lVar32 = 0;
        lVar39 = 0;
        lVar59 = 0;
        lVar60 = 0;
        lVar24 = 0;
        lVar52 = 0;
        lVar62 = 0;
        lVar63 = 0;
        lVar47 = 0;
        lVar65 = 0;
        lVar66 = 0;
        lVar67 = 0;
        lVar46 = 0;
        lVar68 = 0;
        lVar69 = 0;
        lVar70 = 0;
        uVar37 = uVar33;
        do {
          auVar71 = vpsllq_avx2(auVar57,3);
          auVar72 = vpsllq_avx2(auVar57,6);
          vpsubq_avx2(auVar72,auVar71);
          auVar72 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x28 + param_5));
          auVar54 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x108 + param_5));
          auVar55 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x1e8 + param_5));
          auVar56 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x2c8 + param_5));
          auVar71._0_8_ = auVar72._0_8_ + DAT_00201e98;
          auVar71._8_8_ = auVar72._8_8_ + DAT_00201e98;
          auVar71._16_8_ = auVar72._16_8_ + DAT_00201e98;
          auVar71._24_8_ = auVar72._24_8_ + DAT_00201e98;
          auVar72._0_8_ = auVar54._0_8_ + DAT_00201e98;
          auVar72._8_8_ = auVar54._8_8_ + DAT_00201e98;
          auVar72._16_8_ = auVar54._16_8_ + DAT_00201e98;
          auVar72._24_8_ = auVar54._24_8_ + DAT_00201e98;
          auVar54._0_8_ = auVar55._0_8_ + DAT_00201e98;
          auVar54._8_8_ = auVar55._8_8_ + DAT_00201e98;
          auVar54._16_8_ = auVar55._16_8_ + DAT_00201e98;
          auVar54._24_8_ = auVar55._24_8_ + DAT_00201e98;
          auVar55._0_8_ = auVar56._0_8_ + DAT_00201e98;
          auVar55._8_8_ = auVar56._8_8_ + DAT_00201e98;
          auVar55._16_8_ = auVar56._16_8_ + DAT_00201e98;
          auVar55._24_8_ = auVar56._24_8_ + DAT_00201e98;
          auVar71 = vpand_avx2(auVar71,auVar64);
          lVar32 = auVar71._0_8_ + lVar32;
          lVar39 = auVar71._8_8_ + lVar39;
          lVar59 = auVar71._16_8_ + lVar59;
          lVar60 = auVar71._24_8_ + lVar60;
          auVar71 = vpand_avx2(auVar72,auVar64);
          lVar24 = auVar71._0_8_ + lVar24;
          lVar52 = auVar71._8_8_ + lVar52;
          lVar62 = auVar71._16_8_ + lVar62;
          lVar63 = auVar71._24_8_ + lVar63;
          auVar71 = vpand_avx2(auVar54,auVar64);
          lVar47 = auVar71._0_8_ + lVar47;
          lVar65 = auVar71._8_8_ + lVar65;
          lVar66 = auVar71._16_8_ + lVar66;
          lVar67 = auVar71._24_8_ + lVar67;
          auVar71 = vpand_avx2(auVar55,auVar64);
          lVar46 = auVar71._0_8_ + lVar46;
          lVar68 = auVar71._8_8_ + lVar68;
          lVar69 = auVar71._16_8_ + lVar69;
          lVar70 = auVar71._24_8_ + lVar70;
          auVar56._0_8_ = auVar57._0_8_ + DAT_00201e58;
          auVar56._8_8_ = auVar57._8_8_ + DAT_00201e58;
          auVar56._16_8_ = auVar57._16_8_ + DAT_00201e58;
          auVar56._24_8_ = auVar57._24_8_ + DAT_00201e58;
          uVar37 = uVar37 - 0x10;
          auVar57 = auVar56;
        } while (uVar45 != uVar37);
        auVar5._0_8_ = lVar46 + lVar47 + lVar24 + lVar32;
        auVar5._8_8_ = lVar68 + lVar65 + lVar52 + lVar39;
        auVar7._16_8_ = lVar69 + lVar66 + lVar62 + lVar59;
        auVar7._0_16_ = auVar5;
        auVar7._24_8_ = lVar70 + lVar67 + lVar63 + lVar60;
        auVar73 = vpaddq_avx(auVar5,auVar7._16_16_);
        auVar12 = vpshufd_avx(auVar73,0xee);
        auVar73 = vpaddq_avx(auVar73,auVar12);
        uVar37 = auVar73._0_8_;
        lVar32 = lVar38;
        if ((uint)uVar45 < 5) goto LAB_0066d95e;
      }
      uVar45 = 4;
      if ((uVar33 & 3) != 0) {
        uVar45 = (ulong)((uint)uVar33 & 3);
      }
      lVar38 = uVar33 - uVar45;
      auVar58 = ZEXT864(uVar37);
      auVar57 = vpbroadcastq_avx512vl();
      auVar8._0_8_ = auVar57._0_8_ + _DAT_00203760;
      auVar8._8_8_ = auVar57._8_8_ + _UNK_00203768;
      auVar8._16_8_ = auVar57._16_8_ + _UNK_00203770;
      auVar8._24_8_ = auVar57._24_8_ + _UNK_00203778;
      lVar32 = (uVar45 + lVar32) - uVar33;
      auVar61._8_8_ = DAT_00201b08;
      auVar61._0_8_ = DAT_00201b08;
      auVar61._16_8_ = DAT_00201b08;
      auVar61._24_8_ = DAT_00201b08;
      do {
        auVar57 = vpsllq_avx2(auVar8,3);
        auVar64 = vpsllq_avx2(auVar8,6);
        vpsubq_avx2(auVar64,auVar57);
        auVar57 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x28 + uVar25));
        auVar9._0_8_ = auVar57._0_8_ + DAT_00201e98;
        auVar9._8_8_ = auVar57._8_8_ + DAT_00201e98;
        auVar9._16_8_ = auVar57._16_8_ + DAT_00201e98;
        auVar9._24_8_ = auVar57._24_8_ + DAT_00201e98;
        auVar57 = vpand_avx2(auVar9,auVar61);
        auVar6._0_8_ = auVar57._0_8_ + auVar58._0_8_;
        auVar6._8_8_ = auVar57._8_8_ + auVar58._8_8_;
        auVar10._16_8_ = auVar57._16_8_ + auVar58._16_8_;
        auVar10._0_16_ = auVar6;
        auVar10._24_8_ = auVar57._24_8_ + auVar58._24_8_;
        auVar58 = ZEXT3264(auVar10);
        auVar11._0_8_ = auVar8._0_8_ + DAT_00201e20;
        auVar11._8_8_ = auVar8._8_8_ + DAT_00201e20;
        auVar11._16_8_ = auVar8._16_8_ + DAT_00201e20;
        auVar11._24_8_ = auVar8._24_8_ + DAT_00201e20;
        lVar32 = lVar32 + 4;
        auVar8 = auVar11;
      } while (lVar32 != 0);
      auVar73 = vpaddq_avx(auVar6,auVar10._16_16_);
      auVar12 = vpshufd_avx(auVar73,0xee);
      auVar73 = vpaddq_avx(auVar73,auVar12);
      uVar37 = auVar73._0_8_;
    }
LAB_0066d95e:
    lVar32 = uVar33 - lVar38;
    plVar34 = (long *)(lVar23 + lVar38 * 0x38 + 0x28);
    do {
      uVar37 = uVar37 + (*plVar34 + 0x200fffU & 0xffffffffffe00000);
      plVar34 = plVar34 + 7;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    if ((uint)(uVar37 - 0xffffc00000 >> 0x28) < 0xffffff) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5fc;
      sys::fallback(&DAT_00210e80,0xf);
    }
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66d9e0;
  pvVar27 = mmap64((void *)0x0,uVar37 + 0x600000,1,0x4022,-1,0);
  if (pvVar27 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e60b;
    sys::fallback("mmap region",0xb);
  }
  *(ulong *)(puVar41 + -0x1118) = (long)pvVar27 + 0x1fffffU & 0xffffffffffe00000;
  lVar23 = *(long *)(puVar41 + -0x1190);
  *(ulong **)(puVar41 + -0x1120) = unaff_R15;
  if (lVar23 == 0) {
    puVar28 = (undefined4 *)&DAT_00000004;
    puVar26 = DAT_00843ac0;
  }
  else {
    lVar32 = lVar23 * 4;
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66da25;
    puVar28 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(lVar32);
    if (puVar28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e675;
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,lVar32);
    }
    puVar29 = puVar28;
    if (lVar23 != 1) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66da49;
      (*(code *)PTR_memset_00841dd0)(puVar28,0xff,lVar32 + -4);
      puVar29 = puVar28 + lVar23 + -1;
    }
    *puVar29 = 0xffffffff;
    puVar26 = DAT_00843ac0;
  }
  if (parse::FDS != 0) {
    DAT_00843ac0 = puVar26;
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar26))
    {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66db09;
      free(puVar26);
    }
    else {
      uVar25 = 0x10;
      if (0x10 < (ulong)(parse::FDS << 2)) {
        uVar25 = parse::FDS << 2;
      }
      lVar32 = LZCOUNT(uVar25 - 1);
      lVar24 = 0x40 - lVar32;
      if (0xffff < uVar25 - 1) {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66dadb;
        cVar21 = sys::big_put();
        if (cVar21 != '\0') goto LAB_0066db09;
      }
      if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6d9;
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar26 = *(ulong *)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
      *(ulong **)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = puVar26;
    }
  }
LAB_0066db09:
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66db23;
  parse::FDS = lVar23;
  DAT_00843ac0 = (ulong *)puVar28;
  DAT_00843ac8 = lVar23;
  uVar22 = ckix_mode();
  lVar23 = *(long *)(puVar41 + -0x1190);
  *(undefined4 *)(puVar41 + -0x1150) = uVar22;
  if (lVar23 == 0) {
    *(undefined8 *)(puVar41 + -0x1188) = 0;
    *(undefined8 *)(puVar41 + -0x1180) = 8;
    *(undefined8 *)(puVar41 + -0x1178) = 0;
    puVar30 = (undefined8 *)&DAT_00000008;
LAB_0066dc4b:
    lVar24 = 0x200000;
    lVar47 = 0;
  }
  else {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66db4e;
    puVar30 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(lVar23 << 5);
    if (puVar30 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e682;
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar23 << 5);
    }
    lVar32 = *(long *)(puVar41 + -0x1198);
    *(long *)(puVar41 + -0x1188) = lVar23;
    *(undefined8 **)(puVar41 + -0x1180) = puVar30;
    *(undefined8 *)(puVar41 + -0x1178) = 0;
    if (*(long *)(puVar41 + -0x1190) == 0) goto LAB_0066dc4b;
    lVar46 = *(long *)(puVar41 + -0x1190) * 0x38;
    lVar24 = 0x200000;
    lVar47 = 0;
    lVar39 = 0;
    lVar52 = 0;
    *(long *)(puVar41 + -0x11c8) = lVar46;
    do {
      uVar2 = *(undefined1 *)(lVar32 + 0x34 + lVar39);
      auVar73._0_8_ = *(undefined8 *)(lVar32 + 0x28 + lVar39);
      if (lVar47 == lVar23) {
        *(long *)(puVar41 + -0x11a8) = lVar24;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66dbfd;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                  (puVar41 + -0x1188);
        lVar46 = *(long *)(puVar41 + -0x11c8);
        lVar24 = *(long *)(puVar41 + -0x11a8);
        lVar23 = *(long *)(puVar41 + -0x1188);
        puVar30 = *(undefined8 **)(puVar41 + -0x1180);
      }
      *(long *)((long)puVar30 + lVar52) = lVar24;
      *(undefined8 *)((long)puVar30 + lVar52 + 8) = auVar73._0_8_;
      *(undefined8 *)((long)puVar30 + lVar52 + 0x10) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar30 + lVar52 + 0x18) = uVar2;
      lVar47 = lVar47 + 1;
      *(long *)(puVar41 + -0x1178) = lVar47;
      lVar24 = lVar24 + (*(long *)(lVar32 + 0x28 + lVar39) + 0x200fffU & 0xffffffffffe00000);
      lVar52 = lVar52 + 0x20;
      lVar39 = lVar39 + 0x38;
    } while (lVar46 != lVar39);
    puVar30 = *(undefined8 **)(puVar41 + -0x1180);
  }
  *(long *)(puVar41 + -0x11a8) = lVar24;
  plVar34 = *(long **)(*(long *)(puVar41 + -0x11b0) + 0x48);
  lVar23 = *(long *)(puVar41 + -0x1118);
  lVar32 = lVar47 * 0x20;
  puVar42 = (undefined1 *)0x0;
  puVar43 = puVar30;
  while (puVar31 = puVar43, lVar32 != 0) {
    puVar43 = puVar31 + 4;
    lVar32 = lVar32 + -0x20;
    if (*(char *)(puVar31 + 3) == '\0') {
      auVar73._0_8_ = puVar31[1];
      *(undefined8 *)(puVar41 + -0x11c8) = *puVar31;
      *(undefined8 *)(puVar41 + -0x11c0) = auVar73._0_8_;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66dca3;
      puVar31 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x40);
      if (puVar31 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e691;
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x40);
      }
      auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c0);
      *puVar31 = *(undefined8 *)(puVar41 + -0x11c8);
      puVar31[1] = auVar73._0_8_;
      *(undefined8 *)(puVar41 + -0x1008) = 4;
      *(undefined8 **)(puVar41 + -0x1000) = puVar31;
      *(undefined8 *)(puVar41 + -0xff8) = 1;
      lVar32 = 1;
      puVar48 = puVar41 + -0x1008;
      do {
        do {
          puVar35 = puVar43;
          if (puVar35 == puVar30 + lVar47 * 4) {
            puVar42 = *(undefined1 **)(puVar41 + -0x1008);
            lVar24 = *(long *)(puVar41 + -0x1000);
            goto LAB_0066dd73;
          }
          puVar43 = puVar35 + 4;
        } while (*(char *)(puVar35 + 3) != '\0');
        auVar73._0_8_ = *puVar35;
        uVar15 = puVar35[1];
        if (lVar32 == *(long *)(puVar41 + -0x1008)) {
          *(undefined8 *)(puVar41 + -0x11c8) = auVar73._0_8_;
          *(undefined8 *)(puVar41 + -0x11c0) = uVar15;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66dd4a;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(puVar48,lVar32,1,8,0x10);
          auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c8);
          uVar15 = *(undefined8 *)(puVar41 + -0x11c0);
          puVar31 = *(undefined8 **)(puVar41 + -0x1000);
        }
        puVar31[lVar32 * 2] = auVar73._0_8_;
        (puVar31 + lVar32 * 2)[1] = uVar15;
        lVar32 = lVar32 + 1;
        *(long *)(puVar41 + -0xff8) = lVar32;
      } while( true );
    }
  }
  lVar24 = 8;
  lVar32 = 0;
  puVar48 = (undefined1 *)0x0;
LAB_0066dd73:
  puVar44 = *(undefined1 **)(puVar41 + -0x1140);
  if (0 < *plVar34) {
    puVar26 = (ulong *)plVar34[1];
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar26 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar26))
    {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66de2c;
      free(puVar26);
      puVar48 = puVar42;
    }
    else {
      uVar25 = *plVar34 * 0x10 - 1;
      lVar47 = LZCOUNT(uVar25);
      puVar48 = (undefined1 *)(0x40 - lVar47);
      if (0xffff < uVar25) {
        *(ulong **)(puVar41 + -0x11c8) = puVar26;
        *(undefined1 **)(puVar41 + -0x1100) = puVar42;
        *(long *)(puVar41 + -0x1168) = lVar47;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66ddeb;
        cVar21 = sys::big_put(*(undefined8 *)(puVar41 + -0x11c8));
        lVar47 = *(long *)(puVar41 + -0x1168);
        puVar42 = *(undefined1 **)(puVar41 + -0x1100);
        puVar26 = *(ulong **)(puVar41 + -0x11c8);
        if (cVar21 != '\0') goto LAB_0066de2f;
      }
      if (lVar47 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar41 + -0x11d0) = &UNK_0066e6eb;
        core[62e902411887be45]::panicking::panic_bounds_check
                  (puVar48,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar26 = *(ulong *)(in_FS_OFFSET + (long)puVar48 * 8 + -0x3c8);
      *(ulong **)(in_FS_OFFSET + (long)puVar48 * 8 + -0x3c8) = puVar26;
    }
  }
LAB_0066de2f:
  *plVar34 = (long)puVar42;
  plVar34[1] = lVar24;
  plVar34[2] = lVar32;
  plVar34[3] = lVar23;
  plVar34[4] = (long)puVar44;
  *(undefined1 *)(plVar34 + 5) = 1;
  *(undefined1 **)(puVar41 + -0x1128) = puVar44;
  if (*(long *)(puVar41 + -0x1190) == 0) {
    *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
    *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
    *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
    *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
    *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
    bVar53 = false;
  }
  else {
    lVar32 = *(long *)(puVar41 + -0x1190) * 0x38;
    puVar48 = (undefined1 *)0x0;
    lVar24 = 0;
    do {
      cVar21 = *(char *)(*(long *)(puVar41 + -0x1198) + 0x34 + lVar24);
      bVar53 = cVar21 == '\0';
      if (bVar53) break;
      puVar48 = puVar48 + 1;
      lVar24 = lVar24 + 0x38;
    } while (lVar32 != lVar24);
    puVar44 = (undefined1 *)0x0;
    lVar24 = 0;
    do {
      if (*(char *)(*(long *)(puVar41 + -0x1198) + 0x34 + lVar24) == '\x01') {
        *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
        *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
        *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
        *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
        *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
        if (cVar21 == '\0') {
          *(undefined8 *)(puVar41 + -0x11c8) = 1;
          goto LAB_0066dfeb;
        }
        puVar30 = *(undefined8 **)(*(long *)(puVar41 + -0x11b0) + 8);
        *puVar30 = 1;
        puVar30[1] = lVar23;
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 1;
        *(ulong *)(puVar41 + -0x11c8) = CONCAT71((int7)((ulong)puVar30 >> 8),1);
        goto LAB_0066e0ad;
      }
      puVar44 = puVar44 + 1;
      lVar24 = lVar24 + 0x38;
    } while (lVar32 != lVar24);
    *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
    *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
    *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
    *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
    *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
    if (cVar21 == '\0') {
      *(undefined8 *)(puVar41 + -0x11c8) = 0;
LAB_0066dfeb:
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66dffb;
      {closure#11}::_closure_7_(puVar41 + -0x10f8,puVar48);
      if (*(undefined1 **)(puVar41 + -0x1178) <= puVar48) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6ba;
        core[62e902411887be45]::panicking::panic_bounds_check
                  (puVar48,*(undefined1 **)(puVar41 + -0x1178),&PTR_s_src_setup_rs_00210e08);
      }
      lVar24 = *(long *)(*(long *)(puVar41 + -0x1180) + (long)puVar48 * 0x20);
      lVar47 = *(long *)(*(long *)(puVar41 + -0x1180) + 8 + (long)puVar48 * 0x20);
      lVar32 = *(long *)(puVar41 + -0x1118) + lVar24;
      lVar46 = 0;
      if (lVar47 != 0) {
        do {
          if (*(char *)(lVar32 + lVar46) == '\n') {
            lVar46 = lVar46 + 1;
            goto LAB_0066e047;
          }
          lVar46 = lVar46 + 1;
        } while (lVar47 != lVar46);
        lVar46 = lVar47;
      }
LAB_0066e047:
      uVar33 = lVar47 - lVar46;
      uVar25 = 600000;
      if (uVar33 < 600000) {
        uVar25 = uVar33;
      }
      if (600000 < uVar33) {
        do {
          uVar37 = uVar25 - 1;
          if (uVar33 <= uVar37) goto LAB_0066e643;
          if (*(char *)(*(long *)(puVar41 + -0x1118) + lVar24 + lVar46 + -1 + uVar25) == '\n')
          goto LAB_0066e088;
          uVar25 = uVar37;
        } while (uVar37 != 0);
        uVar25 = 0;
      }
LAB_0066e088:
      puVar30 = *(undefined8 **)(*(long *)(puVar41 + -0x11b0) + 8);
      *puVar30 = 1;
      puVar30[1] = lVar32 + lVar46;
      puVar30[2] = uVar25;
      *(undefined1 *)(puVar30 + 3) = 1;
      if (puVar41[-0x11c8] == '\0') {
LAB_0066e10f:
        uVar25 = 0;
      }
      else {
LAB_0066e0ad:
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e0bd;
        {closure#11}::_closure_7_(puVar41 + -0x10f8,puVar44);
        if (*(int *)(puVar41 + -0x1150) == 0) goto LAB_0066e10f;
        if (*(undefined1 **)(puVar41 + -0x1178) <= puVar44) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6c7;
          core[62e902411887be45]::panicking::panic_bounds_check
                    (puVar44,*(undefined1 **)(puVar41 + -0x1178),&PTR_s_src_setup_rs_00210e20);
        }
        lVar32 = *(long *)(*(long *)(puVar41 + -0x1180) + (long)puVar44 * 0x20);
        lVar24 = *(long *)(*(long *)(puVar41 + -0x1180) + 8 + (long)puVar44 * 0x20);
        lVar23 = *(long *)(puVar41 + -0x1118) + lVar32;
        lVar47 = 0;
        if (lVar24 != 0) {
          do {
            if (*(char *)(lVar23 + lVar47) == '\n') {
              lVar47 = lVar47 + 1;
              goto LAB_0066e116;
            }
            lVar47 = lVar47 + 1;
          } while (lVar24 != lVar47);
          lVar47 = lVar24;
        }
LAB_0066e116:
        uVar33 = lVar24 - lVar47;
        uVar25 = 600000;
        if (uVar33 < 600000) {
          uVar25 = uVar33;
        }
        if (600000 < uVar33) {
          do {
            uVar37 = uVar25 - 1;
            if (uVar33 <= uVar37) {
LAB_0066e643:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66e654;
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0xffffffffffffffff,uVar33,&PTR_s_src_setup_rs_002265a0);
            }
            if (*(char *)(*(long *)(puVar41 + -0x1118) + lVar32 + lVar47 + -1 + uVar25) == '\n')
            goto LAB_0066e159;
            uVar25 = uVar37;
          } while (uVar37 != 0);
          uVar25 = 0;
        }
LAB_0066e159:
        lVar23 = lVar23 + lVar47;
      }
      lVar32 = *(long *)(puVar41 + -0x11b0);
      goto LAB_0066e161;
    }
  }
  lVar32 = *(long *)(puVar41 + -0x11b0);
  puVar30 = *(undefined8 **)(lVar32 + 8);
  *puVar30 = 1;
  puVar30[1] = lVar23;
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 1;
  *(undefined8 *)(puVar41 + -0x11c8) = 0;
  uVar25 = 0;
LAB_0066e161:
  puVar30 = *(undefined8 **)(lVar32 + 0x10);
  *puVar30 = 1;
  puVar30[1] = lVar23;
  puVar30[2] = uVar25;
  *(undefined1 *)(puVar30 + 3) = 1;
  puVar42 = *(undefined1 **)(puVar41 + -0x1190);
  if (puVar42 != (undefined1 *)0x0) {
    puVar40 = (undefined1 *)0x0;
    do {
      if ((!(bool)(bVar53 & puVar48 == puVar40)) && ((puVar44 == puVar40 & puVar41[-0x11c8]) == 0))
      {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e1c9;
        {closure#11}::_closure_7_(puVar41 + -0x10f8,puVar40);
      }
      puVar40 = puVar40 + 1;
    } while (puVar42 != puVar40);
  }
  **(undefined1 **)(*(long *)(puVar41 + -0x11b0) + 0x50) = 1;
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e1e9;
  io_advise(*(undefined8 *)(puVar41 + -0x1118),*(undefined8 *)(puVar41 + -0x11a8));
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e200;
  parse::fault_around_check
            (*(undefined8 *)(puVar41 + -0x1118),*(undefined8 *)(puVar41 + -0x1180),
             *(undefined8 *)(puVar41 + -0x1178));
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e205;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  plVar34 = *(long **)(puVar41 + -0x1120);
  iVar49 = auVar73._8_4_;
  if (sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e22e;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,auVar73._8_8_ & 0xffffffff,sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar13._8_8_ = unaff_XMM15_Qb;
    auVar13._0_8_ = unaff_XMM15_Qa;
    auVar73 = vcvtusi2sd_avx512f(auVar13,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar73._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e586;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "s.mmap";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 6;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  uVar25 = *plVar34 << 4;
  sys::LAST_1 = iVar49;
  sys::LAST_0 = auVar73._0_8_;
  if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e668;
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00210e40);
  }
  uVar33 = *(long *)(puVar41 + -0x1128) + *(long *)(puVar41 + -0x1148) +
           *(long *)(puVar41 + -0x1138);
  if ((uVar33 | uVar25) >> 0x20 == 0) {
    uVar33 = (uVar33 & 0xffffffff) / (uVar25 & 0xffffffff);
  }
  else {
    uVar33 = uVar33 / uVar25;
  }
  uVar25 = 0x10000;
  if (0x10000 < uVar33) {
    uVar25 = uVar33;
  }
  uVar33 = 0x200000;
  if (uVar25 < 0x200000) {
    uVar33 = uVar25;
  }
  *(undefined8 *)(puVar41 + -0x1060) = 0;
  *(undefined8 *)(puVar41 + -0x1058) = 8;
  *(undefined8 *)(puVar41 + -0x1050) = 0;
  if (*(long *)(puVar41 + -0x1178) != 0) {
    lVar23 = *(long *)(puVar41 + -0x1180);
    *(long *)(puVar41 + -0x11c8) = *(long *)(puVar41 + -0x1178) * 0x20 + lVar23;
    iVar49 = 0;
    lVar24 = 8;
    lVar32 = 0;
    lVar47 = 0;
    *(ulong *)(puVar41 + -0x11a8) = uVar33;
    do {
      uVar25 = *(ulong *)(lVar23 + 8);
      if (1 < uVar25) {
        lVar46 = lVar47 * 0x18 + 0x10;
        uVar37 = 1;
        do {
          uVar45 = uVar25;
          if (uVar37 + uVar33 < uVar25) {
            uVar45 = uVar37 + uVar33;
          }
          if (lVar47 == lVar32) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e3ea;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(puVar41 + -0x1060);
            uVar33 = *(ulong *)(puVar41 + -0x11a8);
            lVar32 = *(long *)(puVar41 + -0x1060);
            lVar24 = *(long *)(puVar41 + -0x1058);
          }
          *(ulong *)(lVar24 + -0x10 + lVar46) = uVar37;
          *(ulong *)(lVar24 + -8 + lVar46) = uVar45;
          *(int *)(lVar24 + lVar46) = iVar49;
          lVar47 = lVar47 + 1;
          *(long *)(puVar41 + -0x1050) = lVar47;
          uVar25 = *(ulong *)(lVar23 + 8);
          lVar46 = lVar46 + 0x18;
          uVar37 = uVar45;
        } while (uVar45 < uVar25);
      }
      lVar23 = lVar23 + 0x20;
      iVar49 = iVar49 + 1;
    } while (lVar23 != *(long *)(puVar41 + -0x11c8));
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e407;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  puVar30 = *(undefined8 **)(puVar41 + -0x11b0);
  if (sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e42d;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,auVar73._8_8_ & 0xffffffff,sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar14._8_8_ = unaff_XMM15_Qb;
    auVar14._0_8_ = unaff_XMM15_Qa;
    auVar12 = vcvtusi2sd_avx512f(auVar14,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar12._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e59f;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "maps+keys";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 9;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  lVar23 = *(long *)(puVar41 + -0x1118);
  sys::LAST_1 = auVar73._8_4_;
  sys::LAST_0 = auVar73._0_8_;
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e615;
    core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00210e68);
  }
  puVar43 = (undefined8 *)puVar30[0xb];
  *(undefined8 *)(puVar41 + -0xff8) = *(undefined8 *)(puVar41 + -0x1178);
  *(undefined8 *)(puVar41 + -0x1008) = *(undefined8 *)(puVar41 + -0x1188);
  *(undefined8 *)(puVar41 + -0x1000) = *(undefined8 *)(puVar41 + -0x1180);
  *(undefined8 *)(puVar41 + -0xff0) = *(undefined8 *)(puVar41 + -0x1060);
  *(undefined8 *)(puVar41 + -0xfe8) = *(undefined8 *)(puVar41 + -0x1058);
  *(undefined8 *)(puVar41 + -0xfe0) = *(undefined8 *)(puVar41 + -0x1050);
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e4f3;
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<(core[62e902411887be45]::ptr::non_null::NonNull<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::FileInfo>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,[usize_3usize],u64,u64)>>
            (puVar43);
  auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x1008);
  uVar15 = *(undefined8 *)(puVar41 + -0x1000);
  uVar16 = *(undefined8 *)(puVar41 + -0xff8);
  uVar17 = *(undefined8 *)(puVar41 + -0xff0);
  uVar18 = *(undefined8 *)(puVar41 + -0xff0);
  uVar19 = *(undefined8 *)(puVar41 + -0xfe8);
  uVar20 = *(undefined8 *)(puVar41 + -0xfe0);
  puVar43[2] = *(undefined8 *)(puVar41 + -0xff8);
  puVar43[3] = uVar18;
  puVar43[4] = uVar19;
  puVar43[5] = uVar20;
  *puVar43 = auVar73._0_8_;
  puVar43[1] = uVar15;
  puVar43[2] = uVar16;
  puVar43[3] = uVar17;
  puVar43[6] = lVar23;
  auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x1140);
  puVar43[7] = *(undefined8 *)(puVar41 + -0x1148);
  puVar43[8] = auVar73._0_8_;
  puVar43[9] = *(undefined8 *)(puVar41 + -0x1138);
  *(undefined1 (*) [16])(puVar43 + 10) = ZEXT816(0);
  *(undefined1 *)(puVar43 + 0xc) = 1;
  auVar73._0_8_ = *puVar30;
  do {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e54b;
    cVar21 = _closure_10_(auVar73._0_8_);
  } while (cVar21 != '\0');
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e559;
  core[62e902411887be45]::ptr::drop_glue::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>(puVar41 + -0x11a0);
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::setup::setup::{closure#2}, pipeline::setup::Lookups>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067c2e0 (211 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::setup::setup::{closure#2},
   pipeline[509596c7b52975b2]::setup::Lookups>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::setup::setup::{closure#2},pipeline[509596c7b52975b2]::setup::Lookups>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(long *param_1)

{
  long *plVar1;
  long local_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
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
  long local_18;
  
  local_b8 = param_1[3];
  lStack_b0 = param_1[4];
  lStack_a8 = param_1[5];
  lStack_a0 = param_1[6];
  local_98 = *param_1;
  lStack_90 = param_1[1];
  local_88 = param_1[2];
  local_78 = local_b8;
  lStack_70 = lStack_b0;
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  local_58 = local_98;
  lStack_50 = lStack_90;
  lStack_48 = local_88;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_b8);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::setup::setup::_closure_2_,pipeline[509596c7b52975b2]::setup::Lookups>
            (&local_78,&local_98);
  plVar1 = (long *)param_1[7];
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<pipeline[509596c7b52975b2]::setup::Lookups,alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
            (plVar1 + 3);
  plVar1[0xf] = local_18;
  plVar1[0xb] = local_38;
  plVar1[0xc] = lStack_30;
  plVar1[0xd] = lStack_28;
  plVar1[0xe] = lStack_20;
  plVar1[7] = local_58;
  plVar1[8] = lStack_50;
  plVar1[9] = lStack_48;
  plVar1[10] = lStack_40;
  plVar1[3] = local_78;
  plVar1[4] = lStack_70;
  plVar1[5] = lStack_68;
  plVar1[6] = lStack_60;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>
    ::drop_slow(plVar1);
    return;
  }
  return;
}


// ==== <pipeline::setup::setup_par::{closure#11} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c560 (5 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::setup::setup_par::{closure#11} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte *pbVar1;
  undefined1 uVar2;
  ushort uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  void *pvVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined8 *puVar43;
  undefined1 *puVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  undefined1 *puVar48;
  int iVar49;
  ulong *puVar50;
  ulong *puVar51;
  long lVar52;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar53;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [64];
  long lVar59;
  long lVar60;
  undefined1 auVar61 [32];
  long lVar62;
  long lVar63;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined1 auVar64 [32];
  long lVar68;
  long lVar69;
  long lVar70;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar73 [16];
  undefined1 auVar74 [12];
  undefined1 auStack_8030 [32768];
  
  puVar42 = auStack_8030 + 0x8000;
  do {
    puVar41 = puVar42;
    *(undefined8 *)(puVar41 + -0x1000) = 0;
    puVar42 = puVar41 + -0x1000;
  } while (puVar41 + -0x1000 != auStack_8030);
  if (param_2 != 0) {
    auVar73._0_8_ = *param_1;
    do {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66ca88;
      cVar21 = pipeline[509596c7b52975b2]::setup::setup_par::_closure_10_(auVar73._0_8_);
    } while (cVar21 != '\0');
    cVar21 = *(char *)(param_1[1] + 0x18);
    while (((cVar21 == '\0' || (*(char *)(param_1[2] + 0x18) == '\0')) &&
           (*(char *)param_1[3] == '\0'))) {
      cVar21 = *(char *)(param_1[1] + 0x18);
    }
    do {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cae8;
      cVar21 = pipeline[509596c7b52975b2]::setup::setup_par::_closure_10_(auVar73._0_8_);
    } while (cVar21 != '\0');
    return;
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66cb0d;
  lVar23 = __rustc[45371133cddedda4]::__rust_alloc(0x3800,8);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e631;
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x3800);
  }
  *(undefined8 *)(puVar41 + -0x11a0) = 0x100;
  *(long *)(puVar41 + -0x1198) = lVar23;
  *(undefined8 *)(puVar41 + -0x1190) = 0;
  *(undefined8 *)(puVar41 + -0x1060) = 0;
  *(undefined8 *)(puVar41 + -0x1058) = 3;
  puVar41[-0x1050] = 0;
  *(char **)(puVar41 + -0x1048) = "events";
  *(undefined8 *)(puVar41 + -0x1040) = 6;
  puVar41[-0x1038] = 1;
  *(char **)(puVar41 + -0x1030) = "clicks";
  *(undefined8 *)(puVar41 + -0x1028) = 6;
  puVar41[-0x1020] = 2;
  *(char **)(puVar41 + -0x1018) = "links";
  *(undefined8 *)(puVar41 + -0x1010) = 5;
  *(undefined8 *)(puVar41 + -0x1160) = param_1[4];
  *(undefined8 *)(puVar41 + -0x1158) = param_1[5];
  lVar23 = 0;
  *(undefined8 **)(puVar41 + -0x11b0) = param_1;
  do {
    cVar21 = puVar41[lVar23 * 0x18 + -0x1050];
    puVar41[-0x1120] = cVar21;
    if (cVar21 == -1) break;
    *(long *)(puVar41 + -0x1100) = lVar23;
    uVar25 = *(ulong *)(puVar41 + lVar23 * 0x18 + -0x1048);
    param_5 = *(ulong *)(puVar41 + lVar23 * 0x18 + -0x1040);
    *(ulong *)(puVar41 + -0x1128) = param_5;
    if (pipeline[509596c7b52975b2]::sys::FD_ALL_0 == '\0') {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cc2c;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (puVar41 + -0x1118,*(undefined8 *)(puVar41 + -0x1160),
                 *(undefined8 *)(puVar41 + -0x1158),uVar25);
      *(undefined8 *)(puVar41 + -0x1168) = *(undefined8 *)(puVar41 + -0x1110);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cc4e;
      pipeline[509596c7b52975b2]::setup::list
                (puVar41 + -0x1008,*(undefined8 *)(puVar41 + -0x1110),
                 *(undefined8 *)(puVar41 + -0x1108));
      puVar43 = *(undefined8 **)(puVar41 + -0x1000);
      lVar32 = *(long *)(puVar41 + -0xff8);
      *(undefined8 **)(puVar41 + -0x1188) = puVar43;
      *(undefined8 *)(puVar41 + -0x1178) = *(undefined8 *)(puVar41 + -0x1008);
      *(undefined8 **)(puVar41 + -0x11c8) = puVar43 + lVar32 * 4;
      *(undefined8 **)(puVar41 + -0x1170) = puVar43 + lVar32 * 4;
      if (lVar32 != 0) {
        *(ulong *)(puVar41 + -0x1150) = uVar25;
        puVar30 = puVar43;
        do {
          puVar43 = puVar30 + 4;
          param_1 = (undefined8 *)*puVar30;
          if (param_1 == (undefined8 *)0xffffffffffffffff) goto LAB_0066cebc;
          puVar26 = (ulong *)puVar30[1];
          unaff_R15 = (ulong *)puVar30[3];
          if (unaff_R15 != (ulong *)0x0) {
            lVar23 = puVar30[2];
            if (lVar23 == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = CONCAT71((int7)((ulong)lVar32 >> 8),(char)*puVar26 == '/');
            }
            *(ulong **)(puVar41 + -0x11a8) = puVar26;
            *(ulong **)(puVar41 + -0x1008) = puVar26;
            *(long *)(puVar41 + -0x1000) = lVar23;
            puVar41[-0xff8] = 0xff;
            puVar41[-0xfce] = (char)uVar37;
            *(undefined2 *)(puVar41 + -0xfd0) = 0x201;
            puVar42 = puVar41 + -0x10f8;
            puVar30 = (undefined8 *)(puVar41 + -0x1008);
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd35;
            <std[c60ef17cbf7de79f]::path::Components_as_core[62e902411887be45]::iter::traits::double_ended::DoubleEndedIterator>
            ::next_back();
            if ((puVar41[-0x10f8] == -1) || (puVar41[-0x10f8] != '\t')) {
LAB_0066cdb0:
              lVar24 = 1;
              uVar33 = 0;
              lVar23 = *(long *)(puVar41 + -0x1190);
              if (lVar23 == *(long *)(puVar41 + -0x11a0)) {
LAB_0066cd97:
                *(undefined8 *)(puVar41 + -0x11d0) = 0x66cda1;
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>
                ::grow_one(puVar41 + -0x11a0);
              }
            }
            else {
              uVar33 = *(ulong *)(puVar41 + -0x10e8);
              if ((long)uVar33 < 0) goto LAB_0066d650;
              if (uVar33 == 0) goto LAB_0066cdb0;
              auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x10f0);
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd70;
              lVar24 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
              if (lVar24 == 0) goto LAB_0066e615;
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cd8b;
              (*(code *)PTR_memcpy_00841de0)(lVar24,auVar73._0_8_,uVar33);
              lVar23 = *(long *)(puVar41 + -0x1190);
              if (lVar23 == *(long *)(puVar41 + -0x11a0)) goto LAB_0066cd97;
            }
            lVar47 = *(long *)(puVar41 + -0x1198);
            lVar32 = lVar23 * 0x38;
            *(ulong *)(lVar47 + lVar32) = uVar33;
            *(long *)(lVar47 + 8 + lVar32) = lVar24;
            *(ulong *)(lVar47 + 0x10 + lVar32) = uVar33;
            *(undefined8 *)(lVar47 + 0x18 + lVar32) = *(undefined8 *)(puVar41 + -0x1150);
            *(undefined8 *)(lVar47 + 0x20 + lVar32) = *(undefined8 *)(puVar41 + -0x1128);
            *(ulong **)(lVar47 + 0x28 + lVar32) = unaff_R15;
            *(undefined4 *)(lVar47 + 0x30 + lVar32) = 0xffffffff;
            *(undefined1 *)(lVar47 + 0x34 + lVar32) = puVar41[-0x1120];
            *(long *)(puVar41 + -0x1190) = lVar23 + 1;
            puVar26 = *(ulong **)(puVar41 + -0x11a8);
          }
          if (param_1 != (undefined8 *)0x0) {
            if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
                (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
               (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) {
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66cca5;
              free(puVar26);
            }
            else {
              if (param_1 < &DAT_00000011) {
                param_1 = (undefined8 *)&DAT_00000010;
              }
              lVar24 = LZCOUNT((undefined1 *)((long)param_1 + -1));
              lVar23 = 0x40 - lVar24;
              if ((undefined1 *)0xffff < (undefined1 *)((long)param_1 + -1)) {
                *(undefined8 *)(puVar41 + -0x11d0) = 0x66ce8a;
                cVar21 = pipeline[509596c7b52975b2]::sys::big_put(puVar26,lVar23);
                unaff_R15 = puVar26;
                if (cVar21 != '\0') goto LAB_0066cca5;
              }
              if (lVar24 == 0) goto LAB_0066e631;
              *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
              *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
            }
          }
LAB_0066cca5:
          puVar30 = puVar43;
        } while (puVar43 != *(undefined8 **)(puVar41 + -0x11c8));
        puVar43 = *(undefined8 **)(puVar41 + -0x11c8);
LAB_0066cebc:
        param_1 = *(undefined8 **)(puVar41 + -0x11b0);
      }
      *(undefined8 **)(puVar41 + -0x1180) = puVar43;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66ced0;
      core[62e902411887be45]::ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
                (puVar41 + -0x1188);
      uVar25 = *(ulong *)(puVar41 + -0x1118);
      if (uVar25 != 0) {
        puVar26 = *(ulong **)(puVar41 + -0x1168);
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
            (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) {
LAB_0066d490:
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d495;
          free(puVar26);
        }
        else {
          if (uVar25 < 0x11) {
            uVar25 = 0x10;
          }
          lVar32 = LZCOUNT(uVar25 - 1);
          lVar23 = 0x40 - lVar32;
          if (0xffff < uVar25 - 1) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66cf4b;
            cVar21 = pipeline[509596c7b52975b2]::sys::big_put
                               (*(undefined8 *)(puVar41 + -0x1168),lVar23);
            if (cVar21 != '\0') goto LAB_0066d495;
          }
          if (lVar32 == 0) goto LAB_0066e631;
          puVar30 = *(undefined8 **)(puVar41 + -0x1168);
          *puVar30 = *(undefined8 *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar30;
        }
      }
    }
    else {
      puVar42 = puVar41 + -0x1008;
      puVar30 = *(undefined8 **)(puVar41 + -0x1160);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66cf95;
      uVar37 = uVar25;
      <std[c60ef17cbf7de79f]::path::Path>::_join(puVar42,puVar30,*(undefined8 *)(puVar41 + -0x1158))
      ;
      uVar33 = *(ulong *)(puVar41 + -0xff8);
      if ((long)uVar33 < 0) {
LAB_0066d650:
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66d655;
        uVar25 = alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
        goto LAB_0066d655;
      }
      puVar26 = *(ulong **)(puVar41 + -0x1000);
      if (uVar33 == 0) {
        *(undefined8 *)(puVar41 + -0x1188) = 0;
        *(undefined8 *)(puVar41 + -0x1180) = 1;
      }
      else {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66cfd4;
        lVar23 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
        if (lVar23 == 0) {
LAB_0066e615:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e622;
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar33);
        }
        *(ulong *)(puVar41 + -0x1188) = uVar33;
        *(long *)(puVar41 + -0x1180) = lVar23;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66cff6;
        (*(code *)PTR_memcpy_00841de0)(lVar23,puVar26,uVar33);
      }
      *(ulong *)(puVar41 + -0x1178) = uVar33;
      uVar37 = *(ulong *)(puVar41 + -0x1008);
      if (uVar37 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
            (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) {
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d08a;
          free(puVar26);
        }
        else {
          if (uVar37 < 0x11) {
            uVar37 = 0x10;
          }
          unaff_R15 = (ulong *)LZCOUNT(uVar37 - 1);
          lVar23 = 0x40 - (long)unaff_R15;
          if (0xffff < uVar37 - 1) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d05a;
            cVar21 = pipeline[509596c7b52975b2]::sys::big_put(puVar26,lVar23);
            if (cVar21 != '\0') goto LAB_0066d08a;
          }
          if (unaff_R15 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6a3;
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
        }
      }
LAB_0066d08a:
      *(ulong *)(puVar41 + -0x1150) = uVar25;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d099;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(puVar41 + -0x1188);
      lVar23 = *(long *)(puVar41 + -0x1180);
      *(undefined1 *)(lVar23 + uVar33) = 0;
      *(ulong *)(puVar41 + -0x1178) = uVar33 + 1;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d0c2;
      lVar23 = syscall(0x101,0xffffffffffffff9c,lVar23,0x90000);
      *(long *)(puVar41 + -0x11c8) = lVar23;
      if (lVar23 < 0) {
LAB_0066e5a9:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5b8;
        pipeline[509596c7b52975b2]::sys::fallback("cannot list an input folder",0x1b);
      }
LAB_0066d0d0:
      auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c8);
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d0f0;
      puVar26 = (ulong *)syscall(0xd9,auVar73._0_8_,puVar41 + -0x1008,0x8000);
      if ((long)puVar26 < 0) goto LAB_0066e5a9;
      if (puVar26 != (ulong *)0x0) {
        puVar50 = (ulong *)0x0;
        do {
          while( true ) {
            uVar3 = *(ushort *)(puVar41 + -0xff8 + (long)puVar50);
            puVar42 = puVar41 + -0x11c8 + (long)puVar50 + 0x1d3;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d189;
            uVar33 = (*(code *)PTR_strlen_008420a8)(puVar42);
            puVar51 = (ulong *)((ulong)uVar3 + (long)puVar50);
            unaff_R15 = puVar50;
            if (1 < uVar33 - 1) break;
LAB_0066d160:
            puVar50 = puVar51;
            if (puVar26 <= puVar51) goto LAB_0066d0d0;
          }
          if (uVar33 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d79a;
            core[62e902411887be45]::slice::index::slice_index_fail
                      (0,0xffffffffffffffff,0,&PTR_s_src_setup_rs_00226870);
          }
          if ((uVar33 < 4) ||
             (*(int *)(puVar41 + -0x11c8 + (long)puVar50 + uVar33 + 0x1cf) != 0x7673632e))
          goto LAB_0066d160;
          cVar21 = (puVar41 + -0xff6)[(long)puVar50];
          if (cVar21 == '\0') {
LAB_0066d107:
            auVar73 = ZEXT816(0);
            *(undefined1 (*) [32])(puVar41 + -0x1088) = ZEXT1632(auVar73);
            *(undefined1 (*) [32])(puVar41 + -0x1098) = ZEXT1632(auVar73);
            auVar57 = ZEXT1632(auVar73);
            *(undefined1 (*) [32])(puVar41 + -0x10b8) = auVar57;
            *(undefined1 (*) [32])(puVar41 + -0x10d8) = auVar57;
            *(undefined1 (*) [32])(puVar41 + -0x10f8) = auVar57;
            param_5 = 0;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d159;
            lVar23 = syscall(0x106,*(undefined8 *)(puVar41 + -0x11c8),puVar42,puVar41 + -0x10f8);
            if ((lVar23 != 0) || ((*(uint *)(puVar41 + -0x10e0) & 0xf000) != 0x8000))
            goto LAB_0066d160;
          }
          else if (cVar21 != '\b') {
            if (cVar21 != '\n') goto LAB_0066d160;
            goto LAB_0066d107;
          }
          puVar50 = *(ulong **)(puVar41 + -0x11c8);
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d20f;
          unaff_R15 = (ulong *)syscall(0x101,puVar50,puVar42,0x80000);
          if ((long)unaff_R15 < 0) {
            *(undefined8 *)(puVar41 + -0x1088) = 0;
            *(undefined8 *)(puVar41 + -0x1080) = 0;
            *(undefined8 *)(puVar41 + -0x1078) = 0;
            *(undefined8 *)(puVar41 + -0x1070) = 0;
            *(undefined8 *)(puVar41 + -0x1098) = 0;
            *(undefined8 *)(puVar41 + -0x1090) = 0;
            *(undefined8 *)(puVar41 + -0x1088) = 0;
            *(undefined8 *)(puVar41 + -0x1080) = 0;
            *(undefined8 *)(puVar41 + -0x10b8) = 0;
            *(undefined8 *)(puVar41 + -0x10b0) = 0;
            *(undefined8 *)(puVar41 + -0x10a8) = 0;
            *(undefined8 *)(puVar41 + -0x10a0) = 0;
            *(undefined8 *)(puVar41 + -0x10d8) = 0;
            *(undefined8 *)(puVar41 + -0x10d0) = 0;
            *(undefined8 *)(puVar41 + -0x10c8) = 0;
            *(undefined8 *)(puVar41 + -0x10c0) = 0;
            *(undefined8 *)(puVar41 + -0x10f8) = 0;
            *(undefined8 *)(puVar41 + -0x10f0) = 0;
            *(undefined8 *)(puVar41 + -0x10e8) = 0;
            *(undefined8 *)(puVar41 + -0x10e0) = 0;
            param_5 = 0;
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d300;
            lVar23 = syscall(0x106,puVar50,puVar42,puVar41 + -0x10f8);
            unaff_R15 = puVar50;
            if (((lVar23 == 0) && ((*(uint *)(puVar41 + -0x10e0) & 0xf000) == 0x8000)) &&
               (*(long *)(puVar41 + -0x10c8) != 0)) goto LAB_0066e5b8;
            goto LAB_0066d160;
          }
          *(undefined8 *)(puVar41 + -0x1088) = 0;
          *(undefined8 *)(puVar41 + -0x1080) = 0;
          *(undefined8 *)(puVar41 + -0x1078) = 0;
          *(undefined8 *)(puVar41 + -0x1070) = 0;
          *(undefined8 *)(puVar41 + -0x1098) = 0;
          *(undefined8 *)(puVar41 + -0x1090) = 0;
          *(undefined8 *)(puVar41 + -0x1088) = 0;
          *(undefined8 *)(puVar41 + -0x1080) = 0;
          *(undefined8 *)(puVar41 + -0x10b8) = 0;
          *(undefined8 *)(puVar41 + -0x10b0) = 0;
          *(undefined8 *)(puVar41 + -0x10a8) = 0;
          *(undefined8 *)(puVar41 + -0x10a0) = 0;
          *(undefined8 *)(puVar41 + -0x10d8) = 0;
          *(undefined8 *)(puVar41 + -0x10d0) = 0;
          *(undefined8 *)(puVar41 + -0x10c8) = 0;
          *(undefined8 *)(puVar41 + -0x10c0) = 0;
          *(undefined8 *)(puVar41 + -0x10f8) = 0;
          *(undefined8 *)(puVar41 + -0x10f0) = 0;
          *(undefined8 *)(puVar41 + -0x10e8) = 0;
          *(undefined8 *)(puVar41 + -0x10e0) = 0;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d266;
          lVar23 = syscall(5,unaff_R15,puVar41 + -0x10f8);
          if (lVar23 != 0) {
LAB_0066e5b8:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5c7;
            pipeline[509596c7b52975b2]::sys::fallback("open input",10);
          }
          if (*(long *)(puVar41 + -0x10c8) == 0 || (*(uint *)(puVar41 + -0x10e0) & 0xf000) != 0x8000
             ) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d2aa;
            syscall(3,unaff_R15);
            goto LAB_0066d160;
          }
          *(long *)(puVar41 + -0x11a8) = *(long *)(puVar41 + -0x10c8);
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d351;
          lVar23 = __rustc[45371133cddedda4]::__rust_alloc(uVar33,1);
          if (lVar23 == 0) goto LAB_0066e615;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d36c;
          (*(code *)PTR_memcpy_00841de0)(lVar23,puVar42,uVar33);
          lVar32 = *(long *)(puVar41 + -0x1190);
          if (lVar32 == *(long *)(puVar41 + -0x11a0)) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66d3e6;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::
            grow_one(puVar41 + -0x11a0);
          }
          lVar24 = *(long *)(puVar41 + -0x1198);
          lVar47 = lVar32 * 0x38;
          *(ulong *)(lVar24 + lVar47) = uVar33;
          *(long *)(lVar24 + 8 + lVar47) = lVar23;
          *(ulong *)(lVar24 + 0x10 + lVar47) = uVar33;
          *(undefined8 *)(lVar24 + 0x18 + lVar47) = *(undefined8 *)(puVar41 + -0x1150);
          *(undefined8 *)(lVar24 + 0x20 + lVar47) = *(undefined8 *)(puVar41 + -0x1128);
          *(undefined8 *)(lVar24 + 0x28 + lVar47) = *(undefined8 *)(puVar41 + -0x11a8);
          *(int *)(lVar24 + 0x30 + lVar47) = (int)unaff_R15;
          *(undefined1 *)(lVar24 + 0x34 + lVar47) = puVar41[-0x1120];
          *(long *)(puVar41 + -0x1190) = lVar32 + 1;
          param_1 = *(undefined8 **)(puVar41 + -0x11b0);
          puVar50 = puVar51;
        } while (puVar51 < puVar26);
        goto LAB_0066d0d0;
      }
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66d3f7;
      syscall(3,auVar73._0_8_);
      uVar25 = *(ulong *)(puVar41 + -0x1188);
      if (uVar25 != 0) {
        puVar26 = *(ulong **)(puVar41 + -0x1180);
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
            (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) goto LAB_0066d490;
        if (uVar25 < 0x11) {
          uVar25 = 0x10;
        }
        unaff_R15 = (ulong *)LZCOUNT(uVar25 - 1);
        lVar23 = 0x40 - (long)unaff_R15;
        if (0xffff < uVar25 - 1) {
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66d461;
          cVar21 = pipeline[509596c7b52975b2]::sys::big_put(puVar26,lVar23);
          if (cVar21 != '\0') goto LAB_0066d495;
        }
        if (unaff_R15 == (ulong *)0x0) {
LAB_0066e631:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e643;
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar23,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar26 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar26;
      }
    }
LAB_0066d495:
    lVar23 = *(long *)(puVar41 + -0x1100) + 1;
  } while (lVar23 != 3);
  lVar23 = *(long *)(puVar41 + -0x1198);
  uVar25 = *(ulong *)(puVar41 + -0x1190);
  if (1 < uVar25) {
    if (uVar25 < 0x15) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5d6;
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_>
                ();
    }
    else {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6a8;
      core[62e902411887be45]::slice::sort::stable::driftsort_main::
      <pipeline[509596c7b52975b2]::setup::LFile,<[pipeline[509596c7b52975b2]::setup::LFile]>::sort_by<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_::_closure_1_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>
                ();
    }
    lVar23 = *(long *)(puVar41 + -0x1198);
    uVar25 = *(ulong *)(puVar41 + -0x1190);
    param_1 = *(undefined8 **)(puVar41 + -0x11b0);
  }
  *(undefined8 *)(puVar41 + -0x1148) = 0;
  *(undefined8 *)(puVar41 + -0x1140) = 0;
  *(undefined8 *)(puVar41 + -0x1138) = 0;
  if (uVar25 != 0) {
    uVar33 = uVar25 * 0x38 - 0x38;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar33 >> 3;
    uVar36 = SUB164(auVar73 * ZEXT816(0x2492492492492493),8) + 1U & 7;
    lVar32 = lVar23;
    if (uVar36 != 0) {
      lVar24 = (ulong)uVar36 * 0x38;
      do {
        param_5 = (ulong)*(byte *)(lVar32 + 0x34);
        plVar34 = (long *)(lVar32 + 0x28);
        lVar32 = lVar32 + 0x38;
        *(long *)(puVar41 + param_5 * 8 + -0x1148) =
             *(long *)(puVar41 + param_5 * 8 + -0x1148) + *plVar34;
        lVar24 = lVar24 + -0x38;
      } while (lVar24 != 0);
    }
    if (0x187 < uVar33) {
      do {
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x34) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x34) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x28);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x6c) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x6c) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x60);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xa4) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xa4) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x98);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xdc) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0xdc) * 8 + -0x1148) +
             *(long *)(lVar32 + 0xd0);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x114) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x114) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x108);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x14c) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x14c) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x140);
        *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x184) * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*(byte *)(lVar32 + 0x184) * 8 + -0x1148) +
             *(long *)(lVar32 + 0x178);
        pbVar1 = (byte *)(lVar32 + 0x1bc);
        plVar34 = (long *)(lVar32 + 0x1b0);
        lVar32 = lVar32 + 0x1c0;
        *(long *)(puVar41 + (ulong)*pbVar1 * 8 + -0x1148) =
             *(long *)(puVar41 + (ulong)*pbVar1 * 8 + -0x1148) + *plVar34;
      } while (lVar32 != lVar23 + uVar25 * 0x38);
    }
  }
  unaff_R15 = (ulong *)param_1[7];
  puVar42 = (undefined1 *)*unaff_R15;
  if (puVar42 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e65e;
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00210dd8);
  }
  uVar37 = *(ulong *)(puVar41 + -0x1148);
  uVar25 = uVar37 / 0x28;
  puVar30 = (undefined8 *)param_1[6];
  if ((uVar25 | (ulong)puVar42) >> 0x20 == 0) {
LAB_0066d655:
    uVar25 = (uVar25 & 0xffffffff) / ((ulong)puVar42 & 0xffffffff);
  }
  else {
    uVar25 = uVar25 / (ulong)puVar42;
  }
  *puVar30 = 1;
  puVar30[1] = uVar25 * 2 + 0x10000;
  *(undefined1 *)(puVar30 + 2) = 1;
  puVar30 = (undefined8 *)param_1[8];
  uVar33 = (uVar37 >> 6) + 0x8fff;
  uVar37 = (uVar33 >> 4) + 0x1800 & 0xfffffffffffff000;
  uVar25 = 0x4000000;
  if (uVar37 < 0x4000000) {
    uVar25 = uVar37;
  }
  *puVar30 = 1;
  puVar30[1] = uVar33 >> 0xf;
  puVar30[2] = uVar25 >> 0xc & 0xfffff;
  *(undefined1 *)(puVar30 + 3) = 1;
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66d6c4;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  uVar25 = auVar73._8_8_ & 0xffffffff;
  if (pipeline[509596c7b52975b2]::sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66d6e5;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,uVar25,pipeline[509596c7b52975b2]::sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar12._8_8_ = unaff_XMM15_Qb;
    auVar12._0_8_ = unaff_XMM15_Qa;
    auVar12 = vcvtusi2sd_avx512f(auVar12,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar12._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == pipeline[509596c7b52975b2]::sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e56d;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one();
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "s.list";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 6;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  uVar33 = *(ulong *)(puVar41 + -0x1190);
  pipeline[509596c7b52975b2]::sys::LAST_1 = auVar73._8_4_;
  pipeline[509596c7b52975b2]::sys::LAST_0 = auVar73._0_8_;
  if (uVar33 == 0) {
    uVar37 = 0;
  }
  else {
    lVar23 = *(long *)(puVar41 + -0x1198);
    if (uVar33 < 5) {
      lVar38 = 0;
      uVar37 = 0;
    }
    else {
      if (uVar33 < 0x11) {
        uVar37 = 0;
        lVar32 = 0;
      }
      else {
        uVar45 = 0x10;
        if ((uVar33 & 0xf) != 0) {
          uVar45 = (ulong)((uint)uVar33 & 0xf);
        }
        lVar38 = uVar33 - uVar45;
        auVar57._8_8_ = _UNK_00203768;
        auVar57._0_8_ = _DAT_00203760;
        auVar57._16_8_ = _UNK_00203770;
        auVar57._24_8_ = _UNK_00203778;
        auVar64._8_8_ = DAT_00201b08;
        auVar64._0_8_ = DAT_00201b08;
        auVar64._16_8_ = DAT_00201b08;
        auVar64._24_8_ = DAT_00201b08;
        lVar32 = 0;
        lVar39 = 0;
        lVar59 = 0;
        lVar60 = 0;
        lVar24 = 0;
        lVar52 = 0;
        lVar62 = 0;
        lVar63 = 0;
        lVar47 = 0;
        lVar65 = 0;
        lVar66 = 0;
        lVar67 = 0;
        lVar46 = 0;
        lVar68 = 0;
        lVar69 = 0;
        lVar70 = 0;
        uVar37 = uVar33;
        do {
          auVar71 = vpsllq_avx2(auVar57,3);
          auVar72 = vpsllq_avx2(auVar57,6);
          vpsubq_avx2(auVar72,auVar71);
          auVar72 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x28 + param_5));
          auVar54 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x108 + param_5));
          auVar55 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x1e8 + param_5));
          auVar56 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x2c8 + param_5));
          auVar71._0_8_ = auVar72._0_8_ + DAT_00201e98;
          auVar71._8_8_ = auVar72._8_8_ + DAT_00201e98;
          auVar71._16_8_ = auVar72._16_8_ + DAT_00201e98;
          auVar71._24_8_ = auVar72._24_8_ + DAT_00201e98;
          auVar72._0_8_ = auVar54._0_8_ + DAT_00201e98;
          auVar72._8_8_ = auVar54._8_8_ + DAT_00201e98;
          auVar72._16_8_ = auVar54._16_8_ + DAT_00201e98;
          auVar72._24_8_ = auVar54._24_8_ + DAT_00201e98;
          auVar54._0_8_ = auVar55._0_8_ + DAT_00201e98;
          auVar54._8_8_ = auVar55._8_8_ + DAT_00201e98;
          auVar54._16_8_ = auVar55._16_8_ + DAT_00201e98;
          auVar54._24_8_ = auVar55._24_8_ + DAT_00201e98;
          auVar55._0_8_ = auVar56._0_8_ + DAT_00201e98;
          auVar55._8_8_ = auVar56._8_8_ + DAT_00201e98;
          auVar55._16_8_ = auVar56._16_8_ + DAT_00201e98;
          auVar55._24_8_ = auVar56._24_8_ + DAT_00201e98;
          auVar71 = vpand_avx2(auVar71,auVar64);
          lVar32 = auVar71._0_8_ + lVar32;
          lVar39 = auVar71._8_8_ + lVar39;
          lVar59 = auVar71._16_8_ + lVar59;
          lVar60 = auVar71._24_8_ + lVar60;
          auVar71 = vpand_avx2(auVar72,auVar64);
          lVar24 = auVar71._0_8_ + lVar24;
          lVar52 = auVar71._8_8_ + lVar52;
          lVar62 = auVar71._16_8_ + lVar62;
          lVar63 = auVar71._24_8_ + lVar63;
          auVar71 = vpand_avx2(auVar54,auVar64);
          lVar47 = auVar71._0_8_ + lVar47;
          lVar65 = auVar71._8_8_ + lVar65;
          lVar66 = auVar71._16_8_ + lVar66;
          lVar67 = auVar71._24_8_ + lVar67;
          auVar71 = vpand_avx2(auVar55,auVar64);
          lVar46 = auVar71._0_8_ + lVar46;
          lVar68 = auVar71._8_8_ + lVar68;
          lVar69 = auVar71._16_8_ + lVar69;
          lVar70 = auVar71._24_8_ + lVar70;
          auVar56._0_8_ = auVar57._0_8_ + DAT_00201e58;
          auVar56._8_8_ = auVar57._8_8_ + DAT_00201e58;
          auVar56._16_8_ = auVar57._16_8_ + DAT_00201e58;
          auVar56._24_8_ = auVar57._24_8_ + DAT_00201e58;
          uVar37 = uVar37 - 0x10;
          auVar57 = auVar56;
        } while (uVar45 != uVar37);
        auVar5._0_8_ = lVar46 + lVar47 + lVar24 + lVar32;
        auVar5._8_8_ = lVar68 + lVar65 + lVar52 + lVar39;
        auVar7._16_8_ = lVar69 + lVar66 + lVar62 + lVar59;
        auVar7._0_16_ = auVar5;
        auVar7._24_8_ = lVar70 + lVar67 + lVar63 + lVar60;
        auVar73 = vpaddq_avx(auVar5,auVar7._16_16_);
        auVar12 = vpshufd_avx(auVar73,0xee);
        auVar73 = vpaddq_avx(auVar73,auVar12);
        uVar37 = auVar73._0_8_;
        lVar32 = lVar38;
        if ((uint)uVar45 < 5) goto LAB_0066d95e;
      }
      uVar45 = 4;
      if ((uVar33 & 3) != 0) {
        uVar45 = (ulong)((uint)uVar33 & 3);
      }
      lVar38 = uVar33 - uVar45;
      auVar58 = ZEXT864(uVar37);
      auVar57 = vpbroadcastq_avx512vl();
      auVar8._0_8_ = auVar57._0_8_ + _DAT_00203760;
      auVar8._8_8_ = auVar57._8_8_ + _UNK_00203768;
      auVar8._16_8_ = auVar57._16_8_ + _UNK_00203770;
      auVar8._24_8_ = auVar57._24_8_ + _UNK_00203778;
      lVar32 = (uVar45 + lVar32) - uVar33;
      auVar61._8_8_ = DAT_00201b08;
      auVar61._0_8_ = DAT_00201b08;
      auVar61._16_8_ = DAT_00201b08;
      auVar61._24_8_ = DAT_00201b08;
      do {
        auVar57 = vpsllq_avx2(auVar8,3);
        auVar64 = vpsllq_avx2(auVar8,6);
        vpsubq_avx2(auVar64,auVar57);
        auVar57 = vpgatherqq_avx512vl(*(undefined8 *)(lVar23 + 0x28 + uVar25));
        auVar9._0_8_ = auVar57._0_8_ + DAT_00201e98;
        auVar9._8_8_ = auVar57._8_8_ + DAT_00201e98;
        auVar9._16_8_ = auVar57._16_8_ + DAT_00201e98;
        auVar9._24_8_ = auVar57._24_8_ + DAT_00201e98;
        auVar57 = vpand_avx2(auVar9,auVar61);
        auVar6._0_8_ = auVar57._0_8_ + auVar58._0_8_;
        auVar6._8_8_ = auVar57._8_8_ + auVar58._8_8_;
        auVar10._16_8_ = auVar57._16_8_ + auVar58._16_8_;
        auVar10._0_16_ = auVar6;
        auVar10._24_8_ = auVar57._24_8_ + auVar58._24_8_;
        auVar58 = ZEXT3264(auVar10);
        auVar11._0_8_ = auVar8._0_8_ + DAT_00201e20;
        auVar11._8_8_ = auVar8._8_8_ + DAT_00201e20;
        auVar11._16_8_ = auVar8._16_8_ + DAT_00201e20;
        auVar11._24_8_ = auVar8._24_8_ + DAT_00201e20;
        lVar32 = lVar32 + 4;
        auVar8 = auVar11;
      } while (lVar32 != 0);
      auVar73 = vpaddq_avx(auVar6,auVar10._16_16_);
      auVar12 = vpshufd_avx(auVar73,0xee);
      auVar73 = vpaddq_avx(auVar73,auVar12);
      uVar37 = auVar73._0_8_;
    }
LAB_0066d95e:
    lVar32 = uVar33 - lVar38;
    plVar34 = (long *)(lVar23 + lVar38 * 0x38 + 0x28);
    do {
      uVar37 = uVar37 + (*plVar34 + 0x200fffU & 0xffffffffffe00000);
      plVar34 = plVar34 + 7;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    if ((uint)(uVar37 - 0xffffc00000 >> 0x28) < 0xffffff) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e5fc;
      pipeline[509596c7b52975b2]::sys::fallback(&DAT_00210e80,0xf);
    }
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66d9e0;
  pvVar27 = mmap64((void *)0x0,uVar37 + 0x600000,1,0x4022,-1,0);
  if (pvVar27 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e60b;
    pipeline[509596c7b52975b2]::sys::fallback("mmap region",0xb);
  }
  *(ulong *)(puVar41 + -0x1118) = (long)pvVar27 + 0x1fffffU & 0xffffffffffe00000;
  lVar23 = *(long *)(puVar41 + -0x1190);
  *(ulong **)(puVar41 + -0x1120) = unaff_R15;
  if (lVar23 == 0) {
    puVar28 = (undefined4 *)&DAT_00000004;
    puVar26 = DAT_00843ac0;
  }
  else {
    lVar32 = lVar23 * 4;
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66da25;
    puVar28 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(lVar32);
    if (puVar28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e675;
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,lVar32);
    }
    puVar29 = puVar28;
    if (lVar23 != 1) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66da49;
      (*(code *)PTR_memset_00841dd0)(puVar28,0xff,lVar32 + -4);
      puVar29 = puVar28 + lVar23 + -1;
    }
    *puVar29 = 0xffffffff;
    puVar26 = DAT_00843ac0;
  }
  if (pipeline[509596c7b52975b2]::parse::FDS != 0) {
    DAT_00843ac0 = puVar26;
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
        (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66db09;
      free(puVar26);
    }
    else {
      uVar25 = 0x10;
      if (0x10 < (ulong)(pipeline[509596c7b52975b2]::parse::FDS << 2)) {
        uVar25 = pipeline[509596c7b52975b2]::parse::FDS << 2;
      }
      lVar32 = LZCOUNT(uVar25 - 1);
      lVar24 = 0x40 - lVar32;
      if (0xffff < uVar25 - 1) {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66dadb;
        cVar21 = pipeline[509596c7b52975b2]::sys::big_put();
        if (cVar21 != '\0') goto LAB_0066db09;
      }
      if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6d9;
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar26 = *(ulong *)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
      *(ulong **)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = puVar26;
    }
  }
LAB_0066db09:
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66db23;
  pipeline[509596c7b52975b2]::parse::FDS = lVar23;
  DAT_00843ac0 = (ulong *)puVar28;
  DAT_00843ac8 = lVar23;
  uVar22 = pipeline[509596c7b52975b2]::setup::ckix_mode();
  lVar23 = *(long *)(puVar41 + -0x1190);
  *(undefined4 *)(puVar41 + -0x1150) = uVar22;
  if (lVar23 == 0) {
    *(undefined8 *)(puVar41 + -0x1188) = 0;
    *(undefined8 *)(puVar41 + -0x1180) = 8;
    *(undefined8 *)(puVar41 + -0x1178) = 0;
    puVar30 = (undefined8 *)&DAT_00000008;
LAB_0066dc4b:
    lVar24 = 0x200000;
    lVar47 = 0;
  }
  else {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66db4e;
    puVar30 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(lVar23 << 5);
    if (puVar30 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e682;
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar23 << 5);
    }
    lVar32 = *(long *)(puVar41 + -0x1198);
    *(long *)(puVar41 + -0x1188) = lVar23;
    *(undefined8 **)(puVar41 + -0x1180) = puVar30;
    *(undefined8 *)(puVar41 + -0x1178) = 0;
    if (*(long *)(puVar41 + -0x1190) == 0) goto LAB_0066dc4b;
    lVar46 = *(long *)(puVar41 + -0x1190) * 0x38;
    lVar24 = 0x200000;
    lVar47 = 0;
    lVar39 = 0;
    lVar52 = 0;
    *(long *)(puVar41 + -0x11c8) = lVar46;
    do {
      uVar2 = *(undefined1 *)(lVar32 + 0x34 + lVar39);
      auVar73._0_8_ = *(undefined8 *)(lVar32 + 0x28 + lVar39);
      if (lVar47 == lVar23) {
        *(long *)(puVar41 + -0x11a8) = lVar24;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66dbfd;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                  (puVar41 + -0x1188);
        lVar46 = *(long *)(puVar41 + -0x11c8);
        lVar24 = *(long *)(puVar41 + -0x11a8);
        lVar23 = *(long *)(puVar41 + -0x1188);
        puVar30 = *(undefined8 **)(puVar41 + -0x1180);
      }
      *(long *)((long)puVar30 + lVar52) = lVar24;
      *(undefined8 *)((long)puVar30 + lVar52 + 8) = auVar73._0_8_;
      *(undefined8 *)((long)puVar30 + lVar52 + 0x10) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar30 + lVar52 + 0x18) = uVar2;
      lVar47 = lVar47 + 1;
      *(long *)(puVar41 + -0x1178) = lVar47;
      lVar24 = lVar24 + (*(long *)(lVar32 + 0x28 + lVar39) + 0x200fffU & 0xffffffffffe00000);
      lVar52 = lVar52 + 0x20;
      lVar39 = lVar39 + 0x38;
    } while (lVar46 != lVar39);
    puVar30 = *(undefined8 **)(puVar41 + -0x1180);
  }
  *(long *)(puVar41 + -0x11a8) = lVar24;
  plVar34 = *(long **)(*(long *)(puVar41 + -0x11b0) + 0x48);
  lVar23 = *(long *)(puVar41 + -0x1118);
  lVar32 = lVar47 * 0x20;
  puVar42 = (undefined1 *)0x0;
  puVar43 = puVar30;
  while (puVar31 = puVar43, lVar32 != 0) {
    puVar43 = puVar31 + 4;
    lVar32 = lVar32 + -0x20;
    if (*(char *)(puVar31 + 3) == '\0') {
      auVar73._0_8_ = puVar31[1];
      *(undefined8 *)(puVar41 + -0x11c8) = *puVar31;
      *(undefined8 *)(puVar41 + -0x11c0) = auVar73._0_8_;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66dca3;
      puVar31 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x40);
      if (puVar31 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e691;
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x40);
      }
      auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c0);
      *puVar31 = *(undefined8 *)(puVar41 + -0x11c8);
      puVar31[1] = auVar73._0_8_;
      *(undefined8 *)(puVar41 + -0x1008) = 4;
      *(undefined8 **)(puVar41 + -0x1000) = puVar31;
      *(undefined8 *)(puVar41 + -0xff8) = 1;
      lVar32 = 1;
      puVar48 = puVar41 + -0x1008;
      do {
        do {
          puVar35 = puVar43;
          if (puVar35 == puVar30 + lVar47 * 4) {
            puVar42 = *(undefined1 **)(puVar41 + -0x1008);
            lVar24 = *(long *)(puVar41 + -0x1000);
            goto LAB_0066dd73;
          }
          puVar43 = puVar35 + 4;
        } while (*(char *)(puVar35 + 3) != '\0');
        auVar73._0_8_ = *puVar35;
        uVar15 = puVar35[1];
        if (lVar32 == *(long *)(puVar41 + -0x1008)) {
          *(undefined8 *)(puVar41 + -0x11c8) = auVar73._0_8_;
          *(undefined8 *)(puVar41 + -0x11c0) = uVar15;
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66dd4a;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(puVar48,lVar32,1,8,0x10);
          auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x11c8);
          uVar15 = *(undefined8 *)(puVar41 + -0x11c0);
          puVar31 = *(undefined8 **)(puVar41 + -0x1000);
        }
        puVar31[lVar32 * 2] = auVar73._0_8_;
        (puVar31 + lVar32 * 2)[1] = uVar15;
        lVar32 = lVar32 + 1;
        *(long *)(puVar41 + -0xff8) = lVar32;
      } while( true );
    }
  }
  lVar24 = 8;
  lVar32 = 0;
  puVar48 = (undefined1 *)0x0;
LAB_0066dd73:
  puVar44 = *(undefined1 **)(puVar41 + -0x1140);
  if (0 < *plVar34) {
    puVar26 = (ulong *)plVar34[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (ulong *)0x0) ||
        (puVar26 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar26)) {
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66de2c;
      free(puVar26);
      puVar48 = puVar42;
    }
    else {
      uVar25 = *plVar34 * 0x10 - 1;
      lVar47 = LZCOUNT(uVar25);
      puVar48 = (undefined1 *)(0x40 - lVar47);
      if (0xffff < uVar25) {
        *(ulong **)(puVar41 + -0x11c8) = puVar26;
        *(undefined1 **)(puVar41 + -0x1100) = puVar42;
        *(long *)(puVar41 + -0x1168) = lVar47;
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66ddeb;
        cVar21 = pipeline[509596c7b52975b2]::sys::big_put(*(undefined8 *)(puVar41 + -0x11c8));
        lVar47 = *(long *)(puVar41 + -0x1168);
        puVar42 = *(undefined1 **)(puVar41 + -0x1100);
        puVar26 = *(ulong **)(puVar41 + -0x11c8);
        if (cVar21 != '\0') goto LAB_0066de2f;
      }
      if (lVar47 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar41 + -0x11d0) = &UNK_0066e6eb;
        core[62e902411887be45]::panicking::panic_bounds_check
                  (puVar48,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar26 = *(ulong *)(in_FS_OFFSET + (long)puVar48 * 8 + -0x3c8);
      *(ulong **)(in_FS_OFFSET + (long)puVar48 * 8 + -0x3c8) = puVar26;
    }
  }
LAB_0066de2f:
  *plVar34 = (long)puVar42;
  plVar34[1] = lVar24;
  plVar34[2] = lVar32;
  plVar34[3] = lVar23;
  plVar34[4] = (long)puVar44;
  *(undefined1 *)(plVar34 + 5) = 1;
  *(undefined1 **)(puVar41 + -0x1128) = puVar44;
  if (*(long *)(puVar41 + -0x1190) == 0) {
    *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
    *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
    *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
    *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
    *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
    bVar53 = false;
  }
  else {
    lVar32 = *(long *)(puVar41 + -0x1190) * 0x38;
    puVar48 = (undefined1 *)0x0;
    lVar24 = 0;
    do {
      cVar21 = *(char *)(*(long *)(puVar41 + -0x1198) + 0x34 + lVar24);
      bVar53 = cVar21 == '\0';
      if (bVar53) break;
      puVar48 = puVar48 + 1;
      lVar24 = lVar24 + 0x38;
    } while (lVar32 != lVar24);
    puVar44 = (undefined1 *)0x0;
    lVar24 = 0;
    do {
      if (*(char *)(*(long *)(puVar41 + -0x1198) + 0x34 + lVar24) == '\x01') {
        *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
        *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
        *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
        *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
        *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
        if (cVar21 == '\0') {
          *(undefined8 *)(puVar41 + -0x11c8) = 1;
          goto LAB_0066dfeb;
        }
        puVar30 = *(undefined8 **)(*(long *)(puVar41 + -0x11b0) + 8);
        *puVar30 = 1;
        puVar30[1] = lVar23;
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 1;
        *(ulong *)(puVar41 + -0x11c8) = CONCAT71((int7)((ulong)puVar30 >> 8),1);
        goto LAB_0066e0ad;
      }
      puVar44 = puVar44 + 1;
      lVar24 = lVar24 + 0x38;
    } while (lVar32 != lVar24);
    *(undefined1 **)(puVar41 + -0x10f8) = puVar41 + -0x11a0;
    *(undefined8 *)(puVar41 + -0x10f0) = *(undefined8 *)(puVar41 + -0x1160);
    *(undefined8 *)(puVar41 + -0x10e8) = *(undefined8 *)(puVar41 + -0x1158);
    *(undefined1 **)(puVar41 + -0x10e0) = puVar41 + -0x1118;
    *(undefined1 **)(puVar41 + -0x10d8) = puVar41 + -0x1188;
    if (cVar21 == '\0') {
      *(undefined8 *)(puVar41 + -0x11c8) = 0;
LAB_0066dfeb:
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66dffb;
      pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::_closure_7_
                (puVar41 + -0x10f8,puVar48);
      if (*(undefined1 **)(puVar41 + -0x1178) <= puVar48) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6ba;
        core[62e902411887be45]::panicking::panic_bounds_check
                  (puVar48,*(undefined1 **)(puVar41 + -0x1178),&PTR_s_src_setup_rs_00210e08);
      }
      lVar24 = *(long *)(*(long *)(puVar41 + -0x1180) + (long)puVar48 * 0x20);
      lVar47 = *(long *)(*(long *)(puVar41 + -0x1180) + 8 + (long)puVar48 * 0x20);
      lVar32 = *(long *)(puVar41 + -0x1118) + lVar24;
      lVar46 = 0;
      if (lVar47 != 0) {
        do {
          if (*(char *)(lVar32 + lVar46) == '\n') {
            lVar46 = lVar46 + 1;
            goto LAB_0066e047;
          }
          lVar46 = lVar46 + 1;
        } while (lVar47 != lVar46);
        lVar46 = lVar47;
      }
LAB_0066e047:
      uVar33 = lVar47 - lVar46;
      uVar25 = 600000;
      if (uVar33 < 600000) {
        uVar25 = uVar33;
      }
      if (600000 < uVar33) {
        do {
          uVar37 = uVar25 - 1;
          if (uVar33 <= uVar37) goto LAB_0066e643;
          if (*(char *)(*(long *)(puVar41 + -0x1118) + lVar24 + lVar46 + -1 + uVar25) == '\n')
          goto LAB_0066e088;
          uVar25 = uVar37;
        } while (uVar37 != 0);
        uVar25 = 0;
      }
LAB_0066e088:
      puVar30 = *(undefined8 **)(*(long *)(puVar41 + -0x11b0) + 8);
      *puVar30 = 1;
      puVar30[1] = lVar32 + lVar46;
      puVar30[2] = uVar25;
      *(undefined1 *)(puVar30 + 3) = 1;
      if (puVar41[-0x11c8] == '\0') {
LAB_0066e10f:
        uVar25 = 0;
      }
      else {
LAB_0066e0ad:
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e0bd;
        pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::_closure_7_
                  (puVar41 + -0x10f8,puVar44);
        if (*(int *)(puVar41 + -0x1150) == 0) goto LAB_0066e10f;
        if (*(undefined1 **)(puVar41 + -0x1178) <= puVar44) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar41 + -0x11d0) = 0x66e6c7;
          core[62e902411887be45]::panicking::panic_bounds_check
                    (puVar44,*(undefined1 **)(puVar41 + -0x1178),&PTR_s_src_setup_rs_00210e20);
        }
        lVar32 = *(long *)(*(long *)(puVar41 + -0x1180) + (long)puVar44 * 0x20);
        lVar24 = *(long *)(*(long *)(puVar41 + -0x1180) + 8 + (long)puVar44 * 0x20);
        lVar23 = *(long *)(puVar41 + -0x1118) + lVar32;
        lVar47 = 0;
        if (lVar24 != 0) {
          do {
            if (*(char *)(lVar23 + lVar47) == '\n') {
              lVar47 = lVar47 + 1;
              goto LAB_0066e116;
            }
            lVar47 = lVar47 + 1;
          } while (lVar24 != lVar47);
          lVar47 = lVar24;
        }
LAB_0066e116:
        uVar33 = lVar24 - lVar47;
        uVar25 = 600000;
        if (uVar33 < 600000) {
          uVar25 = uVar33;
        }
        if (600000 < uVar33) {
          do {
            uVar37 = uVar25 - 1;
            if (uVar33 <= uVar37) {
LAB_0066e643:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar41 + -0x11d0) = 0x66e654;
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0xffffffffffffffff,uVar33,&PTR_s_src_setup_rs_002265a0);
            }
            if (*(char *)(*(long *)(puVar41 + -0x1118) + lVar32 + lVar47 + -1 + uVar25) == '\n')
            goto LAB_0066e159;
            uVar25 = uVar37;
          } while (uVar37 != 0);
          uVar25 = 0;
        }
LAB_0066e159:
        lVar23 = lVar23 + lVar47;
      }
      lVar32 = *(long *)(puVar41 + -0x11b0);
      goto LAB_0066e161;
    }
  }
  lVar32 = *(long *)(puVar41 + -0x11b0);
  puVar30 = *(undefined8 **)(lVar32 + 8);
  *puVar30 = 1;
  puVar30[1] = lVar23;
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 1;
  *(undefined8 *)(puVar41 + -0x11c8) = 0;
  uVar25 = 0;
LAB_0066e161:
  puVar30 = *(undefined8 **)(lVar32 + 0x10);
  *puVar30 = 1;
  puVar30[1] = lVar23;
  puVar30[2] = uVar25;
  *(undefined1 *)(puVar30 + 3) = 1;
  puVar42 = *(undefined1 **)(puVar41 + -0x1190);
  if (puVar42 != (undefined1 *)0x0) {
    puVar40 = (undefined1 *)0x0;
    do {
      if ((!(bool)(bVar53 & puVar48 == puVar40)) && ((puVar44 == puVar40 & puVar41[-0x11c8]) == 0))
      {
        *(undefined8 *)(puVar41 + -0x11d0) = 0x66e1c9;
        pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}::_closure_7_
                  (puVar41 + -0x10f8,puVar40);
      }
      puVar40 = puVar40 + 1;
    } while (puVar42 != puVar40);
  }
  **(undefined1 **)(*(long *)(puVar41 + -0x11b0) + 0x50) = 1;
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e1e9;
  pipeline[509596c7b52975b2]::setup::io_advise
            (*(undefined8 *)(puVar41 + -0x1118),*(undefined8 *)(puVar41 + -0x11a8));
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e200;
  pipeline[509596c7b52975b2]::parse::fault_around_check
            (*(undefined8 *)(puVar41 + -0x1118),*(undefined8 *)(puVar41 + -0x1180),
             *(undefined8 *)(puVar41 + -0x1178));
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e205;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  plVar34 = *(long **)(puVar41 + -0x1120);
  iVar49 = auVar73._8_4_;
  if (pipeline[509596c7b52975b2]::sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e22e;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,auVar73._8_8_ & 0xffffffff,
                         pipeline[509596c7b52975b2]::sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar13._8_8_ = unaff_XMM15_Qb;
    auVar13._0_8_ = unaff_XMM15_Qa;
    auVar73 = vcvtusi2sd_avx512f(auVar13,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar73._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == pipeline[509596c7b52975b2]::sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e586;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one
                (&pipeline[509596c7b52975b2]::sys::LAPS);
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "s.mmap";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 6;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  uVar25 = *plVar34 << 4;
  pipeline[509596c7b52975b2]::sys::LAST_1 = iVar49;
  pipeline[509596c7b52975b2]::sys::LAST_0 = auVar73._0_8_;
  if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e668;
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_setup_rs_00210e40);
  }
  uVar33 = *(long *)(puVar41 + -0x1128) + *(long *)(puVar41 + -0x1148) +
           *(long *)(puVar41 + -0x1138);
  if ((uVar33 | uVar25) >> 0x20 == 0) {
    uVar33 = (uVar33 & 0xffffffff) / (uVar25 & 0xffffffff);
  }
  else {
    uVar33 = uVar33 / uVar25;
  }
  uVar25 = 0x10000;
  if (0x10000 < uVar33) {
    uVar25 = uVar33;
  }
  uVar33 = 0x200000;
  if (uVar25 < 0x200000) {
    uVar33 = uVar25;
  }
  *(undefined8 *)(puVar41 + -0x1060) = 0;
  *(undefined8 *)(puVar41 + -0x1058) = 8;
  *(undefined8 *)(puVar41 + -0x1050) = 0;
  if (*(long *)(puVar41 + -0x1178) != 0) {
    lVar23 = *(long *)(puVar41 + -0x1180);
    *(long *)(puVar41 + -0x11c8) = *(long *)(puVar41 + -0x1178) * 0x20 + lVar23;
    iVar49 = 0;
    lVar24 = 8;
    lVar32 = 0;
    lVar47 = 0;
    *(ulong *)(puVar41 + -0x11a8) = uVar33;
    do {
      uVar25 = *(ulong *)(lVar23 + 8);
      if (1 < uVar25) {
        lVar46 = lVar47 * 0x18 + 0x10;
        uVar37 = 1;
        do {
          uVar45 = uVar25;
          if (uVar37 + uVar33 < uVar25) {
            uVar45 = uVar37 + uVar33;
          }
          if (lVar47 == lVar32) {
            *(undefined8 *)(puVar41 + -0x11d0) = 0x66e3ea;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(puVar41 + -0x1060);
            uVar33 = *(ulong *)(puVar41 + -0x11a8);
            lVar32 = *(long *)(puVar41 + -0x1060);
            lVar24 = *(long *)(puVar41 + -0x1058);
          }
          *(ulong *)(lVar24 + -0x10 + lVar46) = uVar37;
          *(ulong *)(lVar24 + -8 + lVar46) = uVar45;
          *(int *)(lVar24 + lVar46) = iVar49;
          lVar47 = lVar47 + 1;
          *(long *)(puVar41 + -0x1050) = lVar47;
          uVar25 = *(ulong *)(lVar23 + 8);
          lVar46 = lVar46 + 0x18;
          uVar37 = uVar45;
        } while (uVar45 < uVar25);
      }
      lVar23 = lVar23 + 0x20;
      iVar49 = iVar49 + 1;
    } while (lVar23 != *(long *)(puVar41 + -0x11c8));
  }
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e407;
  auVar73 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  auVar73._0_8_ = auVar73._0_8_;
  puVar30 = *(undefined8 **)(puVar41 + -0x11b0);
  if (pipeline[509596c7b52975b2]::sys::LAST_1 != -1) {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e42d;
    auVar74 = <std[c60ef17cbf7de79f]::time::Instant_as_core[62e902411887be45]::ops::arith::Sub>::sub
                        (auVar73._0_8_,auVar73._8_8_ & 0xffffffff,
                         pipeline[509596c7b52975b2]::sys::LAST_0);
    lVar23 = DAT_008437a8;
    auVar14._8_8_ = unaff_XMM15_Qb;
    auVar14._0_8_ = unaff_XMM15_Qa;
    auVar12 = vcvtusi2sd_avx512f(auVar14,auVar74._0_8_);
    dVar4 = ((double)auVar74._8_4_ / _DAT_00201a48 + auVar12._0_8_) * DAT_00201e30;
    if (DAT_008437a8 == pipeline[509596c7b52975b2]::sys::LAPS) {
      *(double *)(puVar41 + -0x11c8) = dVar4;
      *(undefined8 *)(puVar41 + -0x11d0) = 0x66e59f;
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one
                (&pipeline[509596c7b52975b2]::sys::LAPS);
      dVar4 = *(double *)(puVar41 + -0x11c8);
    }
    lVar32 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar23 * 0x18) = "maps+keys";
    *(undefined8 *)(lVar32 + 8 + lVar23 * 0x18) = 9;
    *(double *)(lVar32 + 0x10 + lVar23 * 0x18) = dVar4;
    DAT_008437a8 = lVar23 + 1;
  }
  lVar23 = *(long *)(puVar41 + -0x1118);
  pipeline[509596c7b52975b2]::sys::LAST_1 = auVar73._8_4_;
  pipeline[509596c7b52975b2]::sys::LAST_0 = auVar73._0_8_;
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e615;
    core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00210e68);
  }
  puVar43 = (undefined8 *)puVar30[0xb];
  *(undefined8 *)(puVar41 + -0xff8) = *(undefined8 *)(puVar41 + -0x1178);
  *(undefined8 *)(puVar41 + -0x1008) = *(undefined8 *)(puVar41 + -0x1188);
  *(undefined8 *)(puVar41 + -0x1000) = *(undefined8 *)(puVar41 + -0x1180);
  *(undefined8 *)(puVar41 + -0xff0) = *(undefined8 *)(puVar41 + -0x1060);
  *(undefined8 *)(puVar41 + -0xfe8) = *(undefined8 *)(puVar41 + -0x1058);
  *(undefined8 *)(puVar41 + -0xfe0) = *(undefined8 *)(puVar41 + -0x1050);
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e4f3;
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<(core[62e902411887be45]::ptr::non_null::NonNull<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::FileInfo>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,[usize_3usize],u64,u64)>>
            (puVar43);
  auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x1008);
  uVar15 = *(undefined8 *)(puVar41 + -0x1000);
  uVar16 = *(undefined8 *)(puVar41 + -0xff8);
  uVar17 = *(undefined8 *)(puVar41 + -0xff0);
  uVar18 = *(undefined8 *)(puVar41 + -0xff0);
  uVar19 = *(undefined8 *)(puVar41 + -0xfe8);
  uVar20 = *(undefined8 *)(puVar41 + -0xfe0);
  puVar43[2] = *(undefined8 *)(puVar41 + -0xff8);
  puVar43[3] = uVar18;
  puVar43[4] = uVar19;
  puVar43[5] = uVar20;
  *puVar43 = auVar73._0_8_;
  puVar43[1] = uVar15;
  puVar43[2] = uVar16;
  puVar43[3] = uVar17;
  puVar43[6] = lVar23;
  auVar73._0_8_ = *(undefined8 *)(puVar41 + -0x1140);
  puVar43[7] = *(undefined8 *)(puVar41 + -0x1148);
  puVar43[8] = auVar73._0_8_;
  puVar43[9] = *(undefined8 *)(puVar41 + -0x1138);
  *(undefined1 (*) [16])(puVar43 + 10) = ZEXT816(0);
  *(undefined1 *)(puVar43 + 0xc) = 1;
  auVar73._0_8_ = *puVar30;
  do {
    *(undefined8 *)(puVar41 + -0x11d0) = 0x66e54b;
    cVar21 = pipeline[509596c7b52975b2]::setup::setup_par::_closure_10_(auVar73._0_8_);
  } while (cVar21 != '\0');
  *(undefined8 *)(puVar41 + -0x11d0) = 0x66e559;
  core[62e902411887be45]::ptr::drop_glue::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::setup::LFile>>(puVar41 + -0x11a0);
  return;
}


// ==== <alloc::raw_vec::RawVec<pipeline::setup::LFile>>::grow_one @ 006a09a0 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::grow_one */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::setup::LFile>>::grow_one
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
            (local_28,*param_1,param_1[1],uVar2,8,0x38);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


// ==== <pipeline::setup::Slot<(alloc::vec::Vec<u8>, alloc::vec::Vec<alloc::vec::Vec<u8>>)>>::set @ 006a2ce0 (202 bytes)

/* <pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,
   alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>::set */

void __rustcall
<pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>
::set(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 *__ptr;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffffffffffff) goto LAB_006a2d83;
  if (uVar1 != 0) {
    __ptr = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
      free(__ptr);
    }
    else {
      uVar8 = 0x10;
      if (0x10 < uVar1) {
        uVar8 = uVar1;
      }
      lVar9 = 0x40 - LZCOUNT(uVar8 - 1);
      if (0x10000 < uVar1) {
        cVar7 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar9);
        if (cVar7 != '\0') goto LAB_006a2d7a;
      }
      *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar9 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar9 * 8 + -0x3c8) = __ptr;
    }
  }
LAB_006a2d7a:
  core[62e902411887be45]::ptr::drop_glue::
  <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(param_1 + 3);
LAB_006a2d83:
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


// ==== <pipeline::setup::Slot<(alloc::vec::Vec<u8>, alloc::vec::Vec<alloc::vec::Vec<u8>>, usize)>>::get @ 006a2dc0 (49 bytes)

/* <pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,
   alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>, usize)>>::get */

long * __rustcall
<pipeline[509596c7b52975b2]::setup::Slot<(alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>,usize)>>
::get(long *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[7];
  while (cVar1 == '\0') {
    cVar1 = (char)param_1[7];
  }
  if (*param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
  }
  return param_1;
}


// ==== <alloc::sync::Arc<std::thread::lifecycle::Packet<pipeline::setup::Lookups>>>::drop_slow @ 006a5e80 (234 bytes)

/* <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>::drop_slow
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>
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
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<pipeline[509596c7b52975b2]::setup::Lookups,alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
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
  <core[62e902411887be45]::option::Option<core[62e902411887be45]::result::Result<pipeline[509596c7b52975b2]::setup::Lookups,alloc[2a0ada2ddd1fabff]::boxed::Box<dyn_core[62e902411887be45]::any::Any_core[62e902411887be45]::marker::Send>>>>
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
      *param_1 = *(undefined8 *)(in_FS_OFFSET + -0x390);
      *(undefined8 **)(in_FS_OFFSET + -0x390) = param_1;
    }
  }
  return;
}


// ==== pipeline::setup::manifest_ts @ 00721f00 (1087 bytes)

/* pipeline[509596c7b52975b2]::setup::manifest_ts */

bool __rustcall
pipeline[509596c7b52975b2]::setup::manifest_ts
          (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  lVar10 = param_2 - param_4;
  if (param_4 <= param_2) {
    lVar16 = param_4 - param_2;
    lVar7 = 0;
    uVar17 = param_2;
    lVar18 = param_1;
    while( true ) {
      lVar16 = lVar16 + 1;
      iVar3 = (*(code *)PTR_memcmp_00842098)(lVar18,param_3,param_4);
      if (iVar3 == 0) break;
      lVar18 = lVar18 + 1;
      uVar17 = uVar17 - 1;
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + -1;
      if (uVar17 < param_4) {
        return false;
      }
    }
    uVar8 = lVar7 + param_4;
    if (param_2 < uVar8) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar8,param_2,param_2,&PTR_s_src_setup_rs_00226588);
    }
    if (uVar8 != param_2) {
      lVar7 = 0;
      while (*(char *)(lVar18 + param_4 + lVar7) != ':') {
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 + -1;
        if (uVar17 - param_4 == lVar7) {
          return false;
        }
      }
      lVar13 = uVar8 + lVar7 + 1;
      uVar17 = param_2 - lVar13;
      if (uVar17 != 0) {
        lVar16 = lVar16 + lVar7;
        uVar14 = 0;
        while (*(char *)(lVar7 + 1 + lVar18 + param_4 + uVar14) != '\"') {
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 1;
          if (lVar16 == 0) {
            return false;
          }
        }
        lVar18 = uVar14 + 1;
        if (uVar17 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (lVar18,uVar17,uVar17,&PTR_s_src_setup_rs_00226570);
        }
        if (lVar13 + lVar18 != param_2) {
          lVar10 = (lVar10 - uVar14) + -2;
          pcVar5 = (char *)(param_1 + uVar8 + lVar7 + 1 + lVar18);
          uVar8 = 0;
          pcVar12 = pcVar5;
          while (*pcVar12 != '\"') {
            pcVar12 = pcVar12 + 1;
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + -1;
            if (lVar10 == 0) {
              return false;
            }
          }
          if (uVar17 - lVar18 < uVar8) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::slice::index::slice_index_fail
                      (0,uVar8,uVar17 - lVar18,&PTR_s_src_setup_rs_00226558);
          }
          if ((((((((uVar8 == 0x14) && (pcVar5[0x13] == 'Z')) && (pcVar5[4] == '-')) &&
                 ((pcVar5[7] == '-' && (pcVar5[10] == 'T')))) && (pcVar5[0xd] == ':')) &&
               (((((pcVar5[0x10] == ':' && ((byte)(*pcVar5 - 0x30U) < 10)) &&
                  (((byte)(pcVar5[1] - 0x30U) < 10 &&
                   ((((byte)(pcVar5[2] - 0x30U) < 10 && ((byte)(pcVar5[3] - 0x30U) < 10)) &&
                    ((byte)(pcVar5[5] - 0x30U) < 10)))))) &&
                 (((byte)(pcVar5[6] - 0x30U) < 10 && ((byte)(pcVar5[8] - 0x30U) < 10)))) &&
                ((byte)(pcVar5[9] - 0x30U) < 10)))) &&
              ((((byte)(pcVar5[0xb] - 0x30U) < 10 && ((byte)(pcVar5[0xc] - 0x30U) < 10)) &&
               (((byte)(pcVar5[0xe] - 0x30U) < 10 &&
                ((((byte)(pcVar5[0xf] - 0x30U) < 10 && ((byte)(pcVar5[0x11] - 0x30U) < 10)) &&
                 ((byte)(pcVar5[0x12] - 0x30U) < 10)))))))) &&
             ((bVar11 = (pcVar5[6] - 0x30U) + (pcVar5[5] - 0x30U) * '\n', (byte)(bVar11 - 1) < 0xc
              && (bVar6 = (pcVar5[9] - 0x30U) + (pcVar5[8] - 0x30U) * '\n', bVar6 != 0)))) {
            uVar1 = (ushort)(byte)(pcVar5[3] - 0x30U) +
                    ((ushort)(byte)(pcVar5[2] - 0x30U) +
                    (ushort)(byte)((pcVar5[1] - 0x30U) + (*pcVar5 - 0x30U) * '\n') * 10) * 10;
            bVar15 = (pcVar5[0xc] - 0x30U) + (pcVar5[0xb] - 0x30U) * '\n';
            bVar9 = (pcVar5[0xf] - 0x30U) + (pcVar5[0xe] - 0x30U) * '\n';
            bVar4 = (pcVar5[0x12] - 0x30U) + (pcVar5[0x11] - 0x30U) * '\n';
            bVar2 = 0x1f;
            if ((0x15aaU >> (bVar11 & 0x1f) & 1) == 0) {
              if ((0xa50U >> (bVar11 & 0x1f) & 1) == 0) {
                bVar2 = 0x1c;
                if ((uVar1 & 3) == 0) {
                  bVar2 = ((ushort)((ushort)(uVar1 * 0x5c29) >> 4 | uVar1 * -0x7000) < 0xa4 ||
                          0x28f < (ushort)((ushort)(uVar1 * 0x5c29) >> 2 | uVar1 * 0x4000)) | 0x1c;
                }
              }
              else {
                bVar2 = 0x1e;
              }
            }
            if (((bVar6 <= bVar2) && (bVar15 < 0x18)) && ((bVar9 < 0x3c && (bVar4 < 0x3c)))) {
              lVar10 = k_ref::days_from_civil();
              return (((ulong)bVar15 * 0x3c + (ulong)bVar9) * 0x3c + (ulong)bVar4) * 1000 +
                     lVar10 * 86400000 != -0x8000000000000000;
            }
          }
          return false;
        }
      }
    }
  }
  return false;
}


// ==== pipeline::setup::products_merge @ 00722340 (2426 bytes)

/* pipeline[509596c7b52975b2]::setup::products_merge */

void __rustcall
pipeline[509596c7b52975b2]::setup::products_merge(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined1 auVar3 [32];
  int *piVar4;
  undefined8 uVar5;
  undefined1 auVar6 [32];
  char cVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *__ptr;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [32];
  undefined8 extraout_XMM1_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar25 [64];
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  long *local_48;
  undefined8 *local_40;
  ulong local_38;
  
  local_60 = 0;
  local_58 = 8;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  local_38 = param_3;
  if (param_3 == 0) {
    local_b0 = 0;
    local_a8 = 8;
    local_a0 = 0;
  }
  else {
    lVar13 = 8;
    local_a8 = __rustc[45371133cddedda4]::__rust_alloc(param_3 * 0x18,8);
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,param_3 * 0x18);
    }
    local_a0 = 0;
    local_80 = local_48 + param_3 * 6;
    uVar21 = 0;
    plVar22 = local_48;
    local_b0 = param_3;
    do {
      if (*plVar22 == -1) {
LAB_00722bc2:
                    /* WARNING: Subroutine does not return */
        sys::fallback("products.csv is not canonical, or has too many categories",0x39);
      }
      lVar16 = plVar22[5];
      if (lVar16 == 0) {
        local_98 = 0;
        lStack_90 = 1;
        local_88 = 0;
        if (local_a0 == local_b0) goto LAB_0072261b;
      }
      else {
        lVar9 = __rustc[45371133cddedda4]::__rust_alloc(lVar16,1);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar16);
        }
        local_88 = 0;
        lVar23 = plVar22[4];
        lVar17 = lVar23 + lVar16 * 0x18;
        local_98 = lVar16;
        lStack_90 = lVar9;
        do {
          lVar9 = local_88;
          lVar16 = *(long *)(lVar23 + 0x10);
          if (uVar21 != 0) {
            lVar12 = 0;
            uVar11 = 0;
            do {
              if ((*(long *)(lVar13 + 0x10 + lVar12) == lVar16) &&
                 (iVar8 = (*(code *)PTR_memcmp_00842098)
                                    (*(undefined8 *)(lVar13 + 8 + lVar12),
                                     *(undefined8 *)(lVar23 + 8),lVar16), iVar8 == 0)) {
                uVar19 = uVar21;
                if (lVar9 == local_98) goto LAB_0072273e;
                goto LAB_007227da;
              }
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 0x18;
            } while (uVar21 * 0x18 != lVar12);
            if (0x1e < uVar21) goto LAB_00722bc2;
          }
          if (lVar16 == 0) {
            lVar9 = 1;
          }
          else {
            uVar5 = *(undefined8 *)(lVar23 + 8);
            lVar9 = __rustc[45371133cddedda4]::__rust_alloc(lVar16,1);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar16);
            }
            (*(code *)PTR_memcpy_00841de0)(lVar9,uVar5,lVar16);
          }
          if (uVar21 == local_60) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::
            grow_one(&local_60);
            lVar13 = local_58;
          }
          *(long *)(lVar13 + uVar21 * 0x18) = lVar16;
          *(long *)(lVar13 + 8 + uVar21 * 0x18) = lVar9;
          *(long *)(lVar13 + 0x10 + uVar21 * 0x18) = lVar16;
          uVar19 = uVar21 + 1;
          lVar9 = local_88;
          uVar11 = uVar21;
          uVar21 = uVar19;
          local_50 = uVar19;
          if (local_88 == local_98) {
LAB_0072273e:
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_98);
            uVar21 = uVar19;
          }
LAB_007227da:
          lVar23 = lVar23 + 0x18;
          *(char *)(lStack_90 + lVar9) = (char)uVar11;
          local_88 = lVar9 + 1;
        } while (lVar23 != lVar17);
        if (local_a0 == local_b0) {
LAB_0072261b:
          uVar11 = local_a0;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::
          grow_one(&local_b0);
          local_a0 = uVar11;
        }
      }
      lVar16 = local_58;
      *(long *)(local_a8 + 0x10 + local_a0 * 0x18) = local_88;
      plVar22 = plVar22 + 6;
      plVar1 = (long *)(local_a8 + local_a0 * 0x18);
      *plVar1 = local_98;
      plVar1[1] = lStack_90;
      local_a0 = local_a0 + 1;
    } while (plVar22 != local_80);
    if (uVar21 != 0) {
      lVar13 = uVar21 * 0x18;
      lVar9 = __rustc[45371133cddedda4]::__rust_alloc(lVar13,8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar13);
      }
      lVar17 = 0;
      uVar11 = 0;
      do {
        if (lVar13 == lVar17) break;
        lVar23 = *(long *)(lVar16 + 0x10);
        if (lVar23 == 0) {
          lVar12 = 1;
        }
        else {
          uVar5 = *(undefined8 *)(lVar16 + 8);
          lVar12 = __rustc[45371133cddedda4]::__rust_alloc(lVar23,1);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar23);
          }
          (*(code *)PTR_memcpy_00841de0)(lVar12,uVar5,lVar23);
        }
        lVar16 = lVar16 + 0x18;
        uVar11 = uVar11 + 1;
        *(long *)(lVar9 + lVar17) = lVar23;
        *(long *)(lVar9 + 8 + lVar17) = lVar12;
        *(long *)(lVar9 + 0x10 + lVar17) = lVar23;
        lVar17 = lVar17 + 0x18;
      } while (uVar21 != uVar11);
      goto LAB_007223b6;
    }
  }
  lVar9 = 8;
  uVar21 = 0;
LAB_007223b6:
  local_78 = uVar21;
  lStack_70 = lVar9;
  local_68 = uVar21;
  puVar10 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(7,1);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,7);
  }
  *(undefined4 *)((long)puVar10 + 3) = 0x6e776f6e;
  *puVar10 = 0x6e6b6e75;
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::grow_one
            (&local_78);
  *(undefined8 *)(lStack_70 + uVar21 * 0x18) = 7;
  *(undefined4 **)(lStack_70 + 8 + uVar21 * 0x18) = puVar10;
  *(undefined8 *)(lStack_70 + 0x10 + uVar21 * 0x18) = 7;
  local_68 = uVar21 + 1;
  if (1 < local_68) {
    if (local_68 < 0x15) {
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                ();
    }
    else {
      core[62e902411887be45]::slice::sort::unstable::ipnsort::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<u8>,<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                (lStack_70,local_68);
    }
  }
  <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::dedup_by::
  <<alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>::dedup::_closure_0_>
            (&local_78);
  uVar21 = local_50;
  lVar16 = local_58;
  lVar13 = lStack_70;
  if (0x1f < local_68) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("too many categories",0x13);
  }
  if (local_68 != 0) {
    lVar9 = local_68 * 0x18;
    plVar22 = (long *)0x0;
    lVar17 = 0;
    do {
      if ((*(long *)(lStack_70 + 0x10 + lVar17) == 7) &&
         (piVar4 = *(int **)(lStack_70 + 8 + lVar17),
         *(int *)((long)piVar4 + 3) == 0x6e776f6e && *piVar4 == 0x6e6b6e75)) {
        if (local_50 == 0) {
          __ptr = (undefined8 *)&DAT_00000001;
        }
        else {
          local_80 = plVar22;
          __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(local_50,1);
          if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar21);
          }
          uVar11 = 0;
          do {
            uVar5 = *(undefined8 *)(lVar16 + 8 + uVar11 * 0x18);
            lVar17 = *(long *)(lVar16 + 0x10 + uVar11 * 0x18);
            lVar23 = 0;
            cVar7 = '\0';
            while ((*(long *)(lVar13 + 0x10 + lVar23) != lVar17 ||
                   (iVar8 = (*(code *)PTR_memcmp_00842098)
                                      (*(undefined8 *)(lVar13 + 8 + lVar23),uVar5,lVar17),
                   iVar8 != 0))) {
              cVar7 = cVar7 + -1;
              lVar23 = lVar23 + 0x18;
              if (lVar9 == lVar23) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00210ca8);
              }
            }
            *(char *)((long)__ptr + uVar11) = -cVar7;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar21);
          plVar22 = local_80;
        }
        lVar13 = __rustc[45371133cddedda4]::__rust_alloc(0x20041,1);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x20041);
        }
        (*(code *)PTR_memset_00841dd0)(lVar13,0xff,0x20041);
        auVar25._8_56_ = extraout_var;
        auVar25._0_8_ = extraout_XMM1_Qa;
        uVar11 = local_a0;
        if (local_38 < local_a0) {
          uVar11 = local_38;
        }
        if (uVar11 != 0) {
          uVar19 = 0;
          do {
            if (local_48[uVar19 * 6] == -1) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00226670);
            }
            if (local_48[uVar19 * 6 + 2] != 0) {
              lVar16 = local_a8 + uVar19 * 0x18;
              puVar20 = (uint *)local_48[uVar19 * 6 + 1];
              puVar2 = puVar20 + local_48[uVar19 * 6 + 2] * 2;
              do {
                uVar18 = (ulong)*puVar20;
                if (0x20040 < uVar18) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar18,0x20041,&PTR_s_src_setup_rs_00226688);
                }
                if (*(char *)(lVar13 + uVar18) != -1) goto LAB_00722bc2;
                uVar14 = (ulong)(byte)puVar20[1];
                uVar15 = *(ulong *)(lVar16 + 0x10);
                if (uVar15 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar14,uVar15,&PTR_s_src_setup_rs_002266a0);
                }
                uVar15 = (ulong)*(byte *)(*(long *)(lVar16 + 8) + uVar14);
                if (uVar21 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar15,uVar21,&PTR_s_src_setup_rs_002266b8);
                }
                *(undefined1 *)(lVar13 + uVar18) = *(undefined1 *)((long)__ptr + uVar15);
                puVar20 = puVar20 + 2;
              } while (puVar20 != puVar2);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar11);
        }
        auVar24 = vpbroadcastb_avx512vl();
        lVar16 = 0xe0;
        auVar6 = vpcmpeqd_avx2(auVar25._0_32_,auVar25._0_32_);
        do {
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0xe0 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0xc0 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0xa0 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0x80 + lVar16));
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0xe0 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0xc0 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0xa0 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0x80 + lVar16) = auVar3;
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0x60 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0x40 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + -0x20 + lVar16));
          vpcmpeqb_avx512vl(auVar6,*(undefined1 (*) [32])(lVar13 + lVar16));
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0x60 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0x40 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + -0x20 + lVar16) = auVar3;
          auVar3 = vmovdqu8_avx512vl(auVar24);
          *(undefined1 (*) [32])(lVar13 + lVar16) = auVar3;
          lVar16 = lVar16 + 0x100;
        } while (lVar16 != 0x200e0);
        if (*(char *)(lVar13 + 0x20000) == -1) {
          *(char *)(lVar13 + 0x20000) = -(char)plVar22;
        }
        *(undefined8 *)(lVar13 + 0x20021) = 0;
        *(undefined8 *)(lVar13 + 0x20029) = 0;
        *(undefined8 *)(lVar13 + 0x20031) = 0;
        *(undefined8 *)(lVar13 + 0x20039) = 0;
        *(undefined8 *)(lVar13 + 0x20001) = 0;
        *(undefined8 *)(lVar13 + 0x20009) = 0;
        *(undefined8 *)(lVar13 + 0x20011) = 0;
        *(undefined8 *)(lVar13 + 0x20019) = 0;
        local_40[5] = local_68;
        local_40[3] = local_78;
        local_40[4] = lStack_70;
        *local_40 = 0x20041;
        local_40[1] = lVar13;
        local_40[2] = 0x20041;
        if (uVar21 != 0) {
          if (((sys::A_BASE_0 == (undefined8 *)0x0) || (__ptr < sys::A_BASE_0)) ||
             (sys::A_END_0 <= __ptr)) {
            free(__ptr);
          }
          else {
            uVar11 = 0x10;
            if (0x10 < uVar21) {
              uVar11 = uVar21;
            }
            lVar16 = LZCOUNT(uVar11 - 1);
            lVar13 = 0x40 - lVar16;
            if ((uVar11 - 1 < 0x10000) || (cVar7 = sys::big_put(__ptr,lVar13), cVar7 == '\0')) {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar13 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar13 * 8 + -0x3c8) = __ptr;
            }
          }
        }
        core[62e902411887be45]::ptr::drop_glue::
        <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_b0);
        core[62e902411887be45]::ptr::drop_glue::
        <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_60);
        return;
      }
      plVar22 = (long *)((long)plVar22 + -1);
      lVar17 = lVar17 + 0x18;
    } while (lVar9 != lVar17);
  }
                    /* WARNING: Subroutine does not return */
  core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00226658);
}


// ==== pipeline::setup::list @ 00722d20 (1710 bytes)

/* pipeline[509596c7b52975b2]::setup::list */

void __rustcall pipeline[509596c7b52975b2]::setup::list(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *__ptr;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_1d8;
  undefined1 local_1d0 [8];
  ulong local_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  ulong local_188;
  undefined8 *puStack_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  long local_148 [5];
  long local_120;
  long local_118 [5];
  long *local_f0;
  byte local_e8;
  int local_e0;
  undefined4 uStack_dc;
  byte local_d8;
  undefined7 uStack_d7;
  ulong local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_a8;
  undefined8 local_90;
  
  local_1a0 = 0;
  lStack_198 = 8;
  local_190 = 0;
  std[c60ef17cbf7de79f]::sys::fs::read_dir(&local_e0);
  local_f0 = (long *)CONCAT44(uStack_dc,local_e0);
  if (local_d8 == 2) {
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::ReadDir,core[62e902411887be45]::io::error::Error>>
              ();
                    /* WARNING: Subroutine does not return */
    sys::fallback("cannot list an input folder",0x1b);
  }
  local_150 = 0;
  local_120 = 0;
  local_e8 = local_d8;
  local_1a8 = 8;
  local_1d8 = 0;
  do {
    <std[c60ef17cbf7de79f]::fs::ReadDir_as_core[62e902411887be45]::iter::traits::iterator::Iterator>
    ::next(&local_e0,&local_f0);
    lVar4 = local_c8;
    uVar5 = local_d0;
    if ((char)local_e0 == '\0') {
      if (local_e8 != 2) {
        LOCK();
        *local_f0 = *local_f0 + -1;
        UNLOCK();
        if (*local_f0 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::sys::fs::unix::InnerReadDir>>::
          drop_slow();
        }
      }
      local_e8 = 2;
      break;
    }
    lVar7 = CONCAT71(uStack_d7,local_d8);
    local_168 = local_c8;
    uStack_160 = uStack_c0;
    local_158 = local_b8;
    if (lVar7 == 0) {
      if ((1 < ((uint)local_d0 & 3) - 2) && ((local_d0 & 3) != 0)) {
        (**(code **)(local_d0 + 0x17))(local_d0 - 1);
      }
    }
    else {
      local_1c0 = local_c8;
      uStack_1b8 = uStack_c0;
      local_1b0 = local_b8;
      local_1c8 = local_d0;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (&local_188,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20),local_d0,
                 local_c8 + -1);
      uVar6 = lVar4 - 1;
      if (uVar6 == 0) {
LAB_00722f6b:
        puVar3 = puStack_180;
        if (local_188 != 0) {
          __ptr = puStack_180;
          if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puStack_180 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= puStack_180)) {
LAB_00722dcd:
            free(__ptr);
          }
          else {
            uVar5 = local_188;
            if (local_188 < 0x11) {
              uVar5 = 0x10;
            }
            lVar4 = LZCOUNT(uVar5 - 1);
            lVar7 = 0x40 - lVar4;
            if ((uVar5 - 1 < 0x10000) || (cVar2 = sys::big_put(puStack_180,lVar7), cVar2 == '\0')) {
              if (lVar4 == 0) {
LAB_007233bc:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar7,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = puVar3;
            }
          }
        }
      }
      else {
        puVar3 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar6,1);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar6);
        }
        (*(code *)PTR_memcpy_00841de0)(puVar3,uVar5,uVar6);
        __ptr = puStack_180;
        if ((uVar6 < 4) || (*(int *)((long)puVar3 + lVar4 + -5) != 0x7673632e)) {
LAB_00722ee6:
          if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar3 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= puVar3)) {
            free(puVar3);
          }
          else {
            if (uVar6 < 0x11) {
              uVar6 = 0x10;
            }
            lVar4 = LZCOUNT(uVar6 - 1);
            lVar7 = 0x40 - lVar4;
            if ((uVar6 - 1 < 0x10000) || (cVar2 = sys::big_put(puVar3,lVar7), cVar2 == '\0')) {
              if (lVar4 == 0) {
LAB_007233aa:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar7,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = puVar3;
            }
          }
          goto LAB_00722f6b;
        }
        std[c60ef17cbf7de79f]::sys::fs::metadata(&local_e0,puStack_180,local_178);
        uVar1 = local_90;
        if (local_e0 == 2) {
          lVar4 = CONCAT71(uStack_d7,local_d8);
          if ((1 < ((uint)lVar4 & 3) - 2) && ((local_d8 & 3) != 0)) {
            (**(code **)(lVar4 + 0x17))(lVar4 + -1);
          }
          goto LAB_00722ee6;
        }
        if ((local_a8 & 0xf000) != 0x8000) {
          if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar3 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= puVar3)) {
            free(puVar3);
          }
          else {
            if (uVar6 < 0x11) {
              uVar6 = 0x10;
            }
            lVar4 = LZCOUNT(uVar6 - 1);
            lVar7 = 0x40 - lVar4;
            if ((uVar6 - 1 < 0x10000) ||
               (local_170 = lVar4, cVar2 = sys::big_put(puVar3,lVar7), lVar4 = local_170,
               cVar2 == '\0')) {
              if (lVar4 == 0) goto LAB_007233aa;
              *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = puVar3;
            }
          }
          if (local_188 == 0) goto LAB_00722dd2;
          if (((sys::A_BASE_0 != (undefined8 *)0x0) && (sys::A_BASE_0 <= __ptr)) &&
             (__ptr < sys::A_END_0)) {
            uVar5 = local_188;
            if (local_188 < 0x11) {
              uVar5 = 0x10;
            }
            lVar4 = LZCOUNT(uVar5 - 1);
            lVar7 = 0x40 - lVar4;
            if ((uVar5 - 1 < 0x10000) || (cVar2 = sys::big_put(__ptr,lVar7), cVar2 == '\0')) {
              if (lVar4 == 0) goto LAB_007233bc;
              *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = __ptr;
            }
            goto LAB_00722dd2;
          }
          goto LAB_00722dcd;
        }
        if (local_1d8 == local_1a0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                    (&local_1a0);
          local_1a8 = lStack_198;
        }
        lVar4 = local_1d8 * 0x20;
        *(ulong *)(local_1a8 + lVar4) = local_188;
        ((ulong *)(local_1a8 + lVar4))[1] = (ulong)puStack_180;
        *(undefined8 *)(local_1a8 + 0x10 + lVar4) = local_178;
        *(undefined8 *)(local_1a8 + 0x18 + lVar4) = uVar1;
        local_1d8 = local_1d8 + 1;
        local_190 = local_1d8;
        if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar3 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puVar3)) {
          free(puVar3);
        }
        else {
          if (uVar6 < 0x11) {
            uVar6 = 0x10;
          }
          lVar4 = LZCOUNT(uVar6 - 1);
          lVar7 = 0x40 - lVar4;
          if ((uVar6 - 1 < 0x10000) || (cVar2 = sys::big_put(puVar3,lVar7), cVar2 == '\0')) {
            if (lVar4 == 0) goto LAB_007233aa;
            *puVar3 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
            *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = puVar3;
          }
        }
      }
LAB_00722dd2:
      core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(local_1d0);
    }
  } while (local_e8 != 2);
  if ((local_150 != 0) && (local_148[0] != 0)) {
    core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(local_148);
  }
  if ((local_120 != 0) && (local_118[0] != 0)) {
    core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(local_118);
  }
  param_1[2] = local_190;
  *param_1 = local_1a0;
  param_1[1] = lStack_198;
  return;
}


// ==== pipeline::setup::setup @ 007233e0 (24788 bytes)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::setup::setup */

void __rustcall
pipeline[509596c7b52975b2]::setup::setup
          (undefined8 *param_1,Elf64_Ehdr *param_2,qword param_3,ulong *param_4,undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar12;
  undefined1 auVar7 [32];
  long lVar13;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char *pcVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  char cVar45;
  int iVar46;
  undefined4 uVar47;
  Elf64_Ehdr *pEVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  ulong uVar54;
  int *piVar55;
  ulong uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  qword qVar59;
  qword *pqVar60;
  Elf64_Ehdr *pEVar61;
  long lVar62;
  byte *pbVar63;
  Elf64_Ehdr *pEVar64;
  code *pcVar65;
  undefined1 *puVar66;
  Elf64_Ehdr *pEVar67;
  ulong uVar68;
  uint uVar72;
  Elf64_Ehdr **ppEVar69;
  long lVar70;
  byte bVar71;
  ulong uVar73;
  long lVar74;
  ulong *puVar75;
  ulong uVar76;
  Elf64_Ehdr *pEVar77;
  qword qVar78;
  long lVar79;
  undefined2 *puVar80;
  ulong *puVar81;
  undefined1 *puVar82;
  undefined **ppuVar83;
  undefined1 *puVar84;
  Elf64_Ehdr *pEVar85;
  void *pvVar86;
  Elf64_Ehdr *pEVar87;
  long lVar88;
  ulong *puVar89;
  int *piVar90;
  void *pvVar91;
  Elf64_Ehdr **ppEVar92;
  qword *pqVar93;
  long in_FS_OFFSET;
  bool bVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [64];
  undefined1 auVar98 [16];
  undefined1 auVar99 [64];
  long lVar101;
  long lVar102;
  undefined1 auVar100 [64];
  undefined1 auVar103 [64];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [64];
  long lVar107;
  long lVar108;
  long lVar109;
  undefined1 auVar110 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar111 [64];
  long lVar112;
  long lVar113;
  long lVar114;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [12];
  undefined1 auVar118 [12];
  undefined8 in_stack_fffffffffffff228;
  Elf64_Ehdr *local_dc0;
  undefined1 local_dab;
  undefined1 local_daa;
  undefined1 local_da9;
  undefined1 local_da8 [16];
  qword local_d90;
  Elf64_Ehdr *local_d88;
  long *local_d80;
  undefined4 local_d74;
  long *local_d70;
  undefined1 local_d68 [16];
  Elf64_Ehdr *local_d58;
  Elf64_Ehdr *local_d50;
  ulong local_d48;
  ulong *local_d40;
  ulong local_d38;
  undefined1 *local_d30;
  qword local_d28;
  ulong local_d20;
  Elf64_Ehdr *local_d18;
  undefined1 local_d10 [16];
  int local_d00;
  dword dStack_cfc;
  Elf64_Ehdr *local_cf8;
  ulong *local_cf0;
  qword local_ce8;
  ulong local_ce0;
  ulong local_cd8;
  undefined8 local_cd0;
  Elf64_Ehdr *local_cc8;
  ulong local_cc0;
  ulong *local_cb8;
  long lStack_cb0;
  ulong *local_ca8 [3];
  undefined1 local_c90;
  undefined4 local_c84;
  undefined8 *local_c80;
  ulong *local_c78;
  long lStack_c70;
  ulong *local_c68;
  long local_c60;
  ulong *local_c58;
  Elf64_Ehdr *local_c50;
  ulong *local_c48;
  char *local_c40;
  char *local_c38;
  ulong *local_c30;
  Elf64_Ehdr *local_c28;
  ulong *local_c20;
  undefined8 local_c18;
  undefined1 local_c10 [16];
  Elf64_Ehdr *local_c00;
  Elf64_Ehdr *local_bf8;
  char *pcStack_bf0;
  ulong local_be8;
  Elf64_Ehdr *pEStack_be0;
  qword local_bd8;
  long *local_bd0;
  char local_bc8;
  undefined1 local_bc0 [12];
  undefined4 uStack_bb4;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  char local_b90;
  ulong local_b88;
  Elf64_Ehdr *pEStack_b80;
  qword local_b78;
  Elf64_Ehdr *local_b68;
  Elf64_Ehdr *pEStack_b60;
  Elf64_Ehdr *local_b58;
  ulong **local_b50;
  undefined1 *local_b48;
  undefined1 *local_b40;
  ulong *local_b38;
  Elf64_Ehdr **local_b30;
  qword *local_b28;
  undefined1 *local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  Elf64_Ehdr *local_af0;
  ulong local_ae8;
  char local_ae0;
  undefined1 local_ad8 [48];
  Elf64_Ehdr *local_aa8;
  Elf64_Ehdr *local_aa0;
  ulong local_a98;
  undefined8 *puStack_a90;
  char **local_a88;
  undefined1 *local_a80;
  ulong **local_a78;
  ulong **local_a70;
  char **local_a68;
  ulong **local_a60;
  long *local_a58;
  undefined8 *local_a50;
  ulong *local_a48;
  undefined4 *local_a40;
  char **local_a38;
  undefined8 *local_a30;
  ulong **local_a28;
  char **local_a20;
  undefined1 *local_a18;
  ulong *local_a10;
  Elf64_Ehdr *local_a08;
  ulong *local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  char local_9e8;
  ulong *local_9e0;
  Elf64_Ehdr *local_9d8;
  ulong *local_9d0;
  undefined1 local_9c8 [40];
  undefined1 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  ulong local_980;
  ulong *local_978;
  ulong *local_970;
  undefined1 local_968 [16];
  char *local_958;
  char *local_950;
  char *local_948;
  qword local_940;
  Elf64_Ehdr **local_938;
  undefined1 local_930 [16];
  Elf64_Ehdr *local_920;
  Elf64_Ehdr *local_918;
  Elf64_Ehdr *local_910;
  undefined1 *local_908;
  undefined1 *local_900;
  Elf64_Ehdr **local_8f8;
  qword *local_8f0;
  char **local_8e8;
  Elf64_Ehdr ***local_8e0;
  Elf64_Ehdr *local_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  long *local_8a8;
  ulong *local_8a0;
  ulong local_898;
  ulong local_890;
  char local_878;
  long local_868;
  Elf64_Ehdr *local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  Elf64_Ehdr *local_818;
  undefined1 *local_810;
  qword *local_808;
  Elf64_Ehdr *local_800;
  Elf64_Ehdr *local_7f8;
  ulong **local_7f0;
  Elf64_Ehdr local_7e8;
  int local_7a8;
  undefined2 uStack_7a4;
  undefined2 uStack_7a2;
  undefined2 uStack_7a0;
  undefined2 uStack_79e;
  undefined1 uStack_79c;
  undefined1 uStack_79b;
  undefined1 uStack_79a;
  undefined1 uStack_799;
  Elf64_Ehdr *apEStack_798 [2];
  long local_788;
  long lStack_780;
  char *pcStack_778;
  long lStack_770;
  long lStack_768;
  char *pcStack_760;
  long lStack_758;
  undefined8 local_458;
  undefined8 uStack_450;
  Elf64_Ehdr *local_448;
  char *pcStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [48];
  Elf64_Ehdr *pEStack_3f8;
  Elf64_Ehdr *pEStack_3f0;
  Elf64_Ehdr *local_3e8;
  qword qStack_3e0;
  undefined8 *puStack_3d8;
  ulong **ppuStack_3d0;
  undefined8 *local_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  Elf64_Ehdr **ppEStack_3b0;
  qword local_3a8;
  qword qStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong local_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  qword local_368;
  qword qStack_360;
  qword qStack_358;
  qword qStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong local_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 local_c8 [3];
  undefined1 local_b0;
  qword local_a8;
  qword qStack_a0;
  qword qStack_98;
  qword qStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  Elf64_Ehdr *pEStack_78;
  Elf64_Ehdr *pEStack_70;
  long local_68;
  long lStack_60;
  char *pcStack_58;
  long lStack_50;
  long lStack_48;
  char *pcStack_40;
  long lStack_38;
  
  local_7a8 = 0x505f4c58;
  uStack_7a4 = 0x4553;
  uStack_7a2 = 0x5554;
  uStack_7a0 = 0x50;
  uVar57 = vptestnmb_avx512vl(SUB6416(ZEXT864(0x55544553505f4c58),0),
                              SUB6416(ZEXT864(0x55544553505f4c58),0));
  local_d74 = param_5;
  local_c80 = param_1;
  if ((char)uVar57 == '\0') {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(local_428 + 0x20,&local_7a8);
    pEVar48 = pEStack_3f8;
    uVar58 = local_428._40_8_;
    uVar57 = local_428._32_8_;
    ppuVar83 = (undefined **)local_428._40_8_;
    if ((Elf64_Ehdr *)local_428._32_8_ == (Elf64_Ehdr *)0xfffffffffffffffe) goto LAB_007234f4;
    if ((Elf64_Ehdr *)local_428._32_8_ == (Elf64_Ehdr *)0xffffffffffffffff) goto LAB_00723512;
    core[62e902411887be45]::str::converts::from_utf8(&local_7a8,local_428._40_8_,pEStack_3f8);
    uStack_7a0 = (undefined2)uVar57;
    uStack_79e = SUB82(uVar57,2);
    uStack_79c = SUB81(uVar57,4);
    uStack_79b = SUB81(uVar57,5);
    uStack_79a = SUB81(uVar57,6);
    uStack_799 = SUB81(uVar57,7);
    apEStack_798[0] = (Elf64_Ehdr *)uVar58;
    apEStack_798[1] = pEVar48;
    if (CONCAT26(uStack_7a2,CONCAT24(uStack_7a4,local_7a8)) != 0) goto LAB_0072352a;
    if (pEVar48 == (Elf64_Ehdr *)&DAT_00000001) {
      bVar94 = *(byte *)uVar58 == 0x31;
    }
    else {
      bVar94 = false;
    }
    if ((Elf64_Ehdr *)uVar57 != (Elf64_Ehdr *)0x0) {
      if (((Elf64_Ehdr *)((long)&sys::A_BASE_0[-1].e_shstrndx + 1) < (ulong)uVar58) &&
         ((ulong)uVar58 < sys::A_END_0)) {
        pEVar48 = (Elf64_Ehdr *)&DAT_00000010;
        if ((Elf64_Ehdr *)&DAT_00000010 < (ulong)uVar57) {
          pEVar48 = (Elf64_Ehdr *)uVar57;
        }
        puVar66 = (undefined1 *)((long)&pEVar48[-1].e_shstrndx + 1);
        lVar74 = LZCOUNT(puVar66);
        lVar88 = 0x40 - lVar74;
        if ((puVar66 < (undefined1 *)0x10000) ||
           (cVar45 = sys::big_put(uVar58,lVar88), cVar45 == '\0')) {
          if (lVar74 == 0) goto LAB_00729536;
          *(ulong *)uVar58 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
          *(undefined8 *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = uVar58;
        }
      }
      else {
        free((void *)uVar58);
      }
    }
  }
  else {
    ppuVar83 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_007234f4:
    if ((1 < ((uint)ppuVar83 & 3) - 2) && (((ulong)ppuVar83 & 3) != 0)) {
      (**(code **)((long)&((Elf64_Ehdr *)ppuVar83)->e_version + 3))
                ((undefined1 *)((long)&((Elf64_Ehdr *)((long)ppuVar83 + -0x40))->e_shstrndx + 1));
    }
LAB_00723512:
    uStack_7a0 = 0xffff;
    uStack_79e = 0xffff;
    uStack_79c = 0xff;
    uStack_79b = 0xff;
    uStack_79a = 0xff;
    uStack_799 = 0xff;
    local_7a8 = 1;
    uStack_7a4 = 0;
    uStack_7a2 = 0;
LAB_0072352a:
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
              (&local_7a8);
    bVar94 = true;
  }
  local_d90 = param_3;
  if ((param_4 < &_nl_current_LC_CTYPE_used) || (!bVar94 || (ulong *)(sys::POOL_N_0 + 1) < param_4))
  {
    <std[c60ef17cbf7de79f]::path::Path>::_join(&local_7a8,param_2,param_3,"manifest.json");
    pEVar48 = (Elf64_Ehdr *)
              CONCAT17(uStack_799,
                       CONCAT16(uStack_79a,
                                CONCAT15(uStack_79b,
                                         CONCAT14(uStack_79c,CONCAT22(uStack_79e,uStack_7a0)))));
    std[c60ef17cbf7de79f]::fs::read::inner(local_428 + 0x20,pEVar48,apEStack_798[0]);
    uVar56 = CONCAT26(uStack_7a2,CONCAT24(uStack_7a4,local_7a8));
    if (uVar56 != 0) {
      if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= pEVar48)) {
        free(pEVar48);
      }
      else {
        uVar76 = 0x10;
        if (0x10 < uVar56) {
          uVar76 = uVar56;
        }
        lVar74 = LZCOUNT(uVar76 - 1);
        lVar88 = 0x40 - lVar74;
        if ((uVar76 - 1 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
          if (lVar74 == 0) goto LAB_00729536;
          uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
          pEVar48->e_ident_magic_num = (char)uVar56;
          pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
          pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
          pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
          pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
          pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
          pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
          pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
          *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
        }
      }
    }
    pEVar48 = pEStack_3f8;
    uVar58 = local_428._40_8_;
    uVar57 = local_428._32_8_;
    if ((Elf64_Ehdr *)local_428._32_8_ == (Elf64_Ehdr *)0xffffffffffffffff) goto LAB_007293fd;
    auVar115 = manifest_ts(local_428._40_8_,pEStack_3f8,"\"window_start\"",0xe);
    pEVar85 = auVar115._8_8_;
    auVar116 = manifest_ts(uVar58,pEVar48,"\"window_end\"");
    if (((auVar115._0_8_ & 1) == 0) || ((auVar116._0_8_ & 1) == 0)) goto LAB_0072933b;
    local_d58 = (Elf64_Ehdr *)(auVar116._8_8_ - (long)pEVar85);
    if ((local_d58 == (Elf64_Ehdr *)0x0 || auVar116._8_8_ < (long)pEVar85) ||
       (((long)pEVar85 < 0x2932e000 || (0x7b98a000 < (long)local_d58)))) goto LAB_007291c5;
    local_cc8 = (Elf64_Ehdr *)uVar57;
    local_d10._8_8_ = uVar58;
    LOCK();
    sys::WORKERS_0 = 1;
    UNLOCK();
    if (param_3 == 0) {
      qVar59 = 1;
    }
    else {
      qVar59 = __rustc[45371133cddedda4]::__rust_alloc(param_3,1);
      if (qVar59 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,param_3);
      }
      (*(code *)PTR_memcpy_00841de0)(qVar59,param_2,param_3);
    }
    pEStack_3f8 = (Elf64_Ehdr *)0xffffffffffffffff;
    local_428._32_8_ = (Elf64_Ehdr *)0x0;
    qStack_3e0 = qStack_3e0 & 0xffffffffffffff00;
    if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == 0) {
      uStack_7a0 = 0x535f;
      uStack_79e = 0x4154;
      uStack_79c = 0x43;
      uStack_79b = 0x4b;
      local_7a8 = 0x54535552;
      uStack_7a4 = 0x4d5f;
      uStack_7a2 = 0x4e49;
      uStack_79a = 0;
      uVar57 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
      auVar115[7] = uStack_799;
      auVar115._0_7_ = 0x4b434154535f;
      auVar115._8_8_ = 0;
      uVar58 = vptestmb_avx512vl(auVar115,auVar115);
      if ((byte)((char)((ushort)uVar57 >> 4) << 4 | (byte)uVar57 & (byte)uVar58 & 0xf) == 0xff) {
        std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_aa8,&local_7a8);
        pEVar48 = local_aa0;
        pEVar67 = local_aa8;
        if (local_aa8 == (Elf64_Ehdr *)0xfffffffffffffffe) goto LAB_00723937;
        if (local_aa8 == (Elf64_Ehdr *)0xffffffffffffffff) {
          uVar56 = 0x200000;
        }
        else {
          core[62e902411887be45]::str::converts::from_utf8(&local_7a8,local_aa0,local_a98);
          if ((local_7a8 == 1) || (apEStack_798[0] == (Elf64_Ehdr *)0x0)) {
            uVar56 = 0x200000;
          }
          else {
            pcVar28 = (char *)CONCAT17(uStack_799,
                                       CONCAT16(uStack_79a,
                                                CONCAT15(uStack_79b,
                                                         CONCAT14(uStack_79c,
                                                                  CONCAT22(uStack_79e,uStack_7a0))))
                                      );
            if (apEStack_798[0] == (Elf64_Ehdr *)&DAT_00000001) {
              cVar45 = *pcVar28;
              if ((cVar45 != '+') && (cVar45 != '-')) goto LAB_007267cd;
            }
            else {
              cVar45 = *pcVar28;
LAB_007267cd:
              pEVar64 = (Elf64_Ehdr *)(ulong)(cVar45 == '+');
              if ((ulong)((long)apEStack_798[0] - (long)pEVar64) < 0x11) {
                if (apEStack_798[0] == pEVar64) {
                  uVar56 = 0;
                }
                else {
                  uVar56 = 0;
                  lVar74 = 0;
                  do {
                    uVar72 = (byte)(pcVar28 + (long)pEVar64)[lVar74] - 0x30;
                    if (9 < uVar72) goto LAB_00726864;
                    uVar56 = (ulong)uVar72 + uVar56 * 10;
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != (long)apEStack_798[0] + -(long)pEVar64);
                }
                goto joined_r0x007291b6;
              }
              uVar56 = 0;
              lVar74 = 0;
              while( true ) {
                if (lVar74 == (long)apEStack_798[0] + -(long)pEVar64) goto joined_r0x007291b6;
                auVar116._8_8_ = 0;
                auVar116._0_8_ = uVar56;
                uVar76 = SUB168(auVar116 * ZEXT816(10),0);
                if (SUB168(auVar116 * ZEXT816(10),8) != 0) break;
                uVar72 = (byte)(pcVar28 + (long)pEVar64)[lVar74] - 0x30;
                uVar56 = uVar76 + uVar72;
                if ((9 < uVar72) || (lVar74 = lVar74 + 1, CARRY8(uVar76,(ulong)uVar72))) break;
              }
            }
LAB_00726864:
            uVar56 = 0x200000;
          }
joined_r0x007291b6:
          if (pEVar67 != (Elf64_Ehdr *)0x0) {
            if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= pEVar48)) {
              free(pEVar48);
            }
            else {
              pEVar64 = (Elf64_Ehdr *)&DAT_00000010;
              if ((Elf64_Ehdr *)&DAT_00000010 < pEVar67) {
                pEVar64 = pEVar67;
              }
              puVar66 = (undefined1 *)((long)&pEVar64[-1].e_shstrndx + 1);
              lVar74 = 0x40 - LZCOUNT(puVar66);
              if ((puVar66 < (undefined1 *)0x10000) ||
                 (cVar45 = sys::big_put(pEVar48,lVar74), cVar45 == '\0')) {
                uVar76 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
                pEVar48->e_ident_magic_num = (char)uVar76;
                pEVar48->e_ident_magic_str[0] = (char)(uVar76 >> 8);
                pEVar48->e_ident_magic_str[1] = (char)(uVar76 >> 0x10);
                pEVar48->e_ident_magic_str[2] = (char)(uVar76 >> 0x18);
                pEVar48->e_ident_class = (char)(uVar76 >> 0x20);
                pEVar48->e_ident_data = (char)(uVar76 >> 0x28);
                pEVar48->e_ident_version = (char)(uVar76 >> 0x30);
                pEVar48->e_ident_osabi = (char)(uVar76 >> 0x38);
                *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = pEVar48;
              }
            }
          }
        }
      }
      else {
        pEVar48 = (Elf64_Ehdr *)&PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00723937:
        if ((1 < ((uint)pEVar48 & 3) - 2) && (((ulong)pEVar48 & 3) != 0)) {
          (**(code **)((long)&pEVar48->e_version + 3))
                    ((undefined1 *)((long)&pEVar48[-1].e_shstrndx + 1));
        }
        uVar56 = 0x200000;
      }
      std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 = uVar56 + 1;
    }
    else {
      uVar56 = std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 - 1;
    }
    lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
    do {
      local_d18 = pEVar85;
      if (lVar74 == -1) goto LAB_00729165;
      lVar88 = lVar74 + 1;
      LOCK();
      bVar94 = lVar74 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      if (bVar94) {
        <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar88;
      }
      else {
        lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar94);
    plVar49 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar88,&pEStack_3f8);
    local_7a8 = (int)plVar49;
    uStack_7a4 = (undefined2)((ulong)plVar49 >> 0x20);
    uStack_7a2 = (undefined2)((ulong)plVar49 >> 0x30);
    std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_a8,&local_7a8);
    plVar50 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x80,8);
    lVar70 = _UNK_00203238;
    lVar88 = _UNK_00203230;
    lVar74 = _UNK_00203228;
    if (plVar50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x80);
    }
    *plVar50 = _DAT_00203220;
    plVar50[1] = lVar74;
    plVar50[2] = lVar88;
    plVar50[3] = lVar70;
    LOCK();
    lVar74 = *plVar50;
    *plVar50 = *plVar50 + 1;
    UNLOCK();
    if (*plVar50 == 0 || SCARRY8(lVar74,1) != *plVar50 < 0) goto LAB_007292d3;
    auVar111 = ZEXT1664(in_ZMM5._0_16_);
    pqVar60 = (qword *)__rustc[45371133cddedda4]::__rust_alloc(0x40,8);
    if (pqVar60 == (qword *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x40);
    }
    *pqVar60 = param_3;
    pqVar60[1] = qVar59;
    pqVar60[2] = param_3;
    pqVar60[3] = local_a8;
    pqVar60[4] = qStack_a0;
    pqVar60[5] = qStack_98;
    pqVar60[6] = qStack_90;
    pqVar60[7] = (qword)plVar50;
    LOCK();
    lVar74 = *plVar49;
    *plVar49 = *plVar49 + 1;
    UNLOCK();
    if (*plVar49 == 0 || SCARRY8(lVar74,1) != *plVar49 < 0) goto LAB_007292d3;
    auVar111 = ZEXT1664(auVar111._0_16_);
    puVar52 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
    if (puVar52 == (undefined8 *)0x0) {
LAB_007291d4:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
    }
    *puVar52 = plVar49;
    puVar52[1] = pqVar60;
    puVar52[2] = &
                 PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::setup::setup::_closure_2_,pipeline[509596c7b52975b2]::setup::Lookups>::_closure_1_>_002102a8
    ;
    local_d80 = plVar49;
    local_d70 = plVar50;
    auVar115 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(uVar56);
    local_d30 = auVar115._8_8_;
    if ((auVar115._0_8_ & 1) != 0) {
      LOCK();
      *local_d70 = *local_d70 + -1;
      UNLOCK();
      if (*local_d70 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>
        ::drop_slow(local_d70);
      }
      LOCK();
      *local_d80 = *local_d80 + -1;
      UNLOCK();
      if (*local_d80 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
        ::drop_slow(local_d80);
      }
      local_7a8 = (int)local_d30;
      uStack_7a4 = (undefined2)((ulong)local_d30 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)local_d30 >> 0x30);
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::result::unwrap_failed
                ("failed to spawn thread",0x16,&local_7a8,
                 &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                 &PTR_s__rustc_0ef1bc386059596dada8fb65b_00226758);
    }
    local_c00 = (Elf64_Ehdr *)0x0;
    local_bf8 = (Elf64_Ehdr *)&DAT_00000008;
    pcStack_bf0 = (char *)0x0;
    uStack_7a0 = 3;
    uStack_79e = 0;
    uStack_79c = 0;
    uStack_79b = 0;
    uStack_79a = 0;
    uStack_799 = 0;
    apEStack_798[0] = (Elf64_Ehdr *)((ulong)apEStack_798[0] & 0xffffffffffffff00);
    apEStack_798[1] = (Elf64_Ehdr *)0x210dc0;
    local_788 = 6;
    lStack_780 = CONCAT71(lStack_780._1_7_,1);
    pcStack_778 = "clicks";
    lStack_770 = 6;
    lStack_768 = CONCAT71(lStack_768._1_7_,2);
    pcStack_760 = "links";
    lStack_758 = 5;
    pEVar48 = (Elf64_Ehdr *)&DAT_00000008;
    pEVar67 = (Elf64_Ehdr *)0x0;
    lVar74 = 0;
    do {
      if (*(char *)(apEStack_798 + lVar74 * 3) == -1) break;
      local_da8[0] = *(char *)(apEStack_798 + lVar74 * 3);
      local_d68._0_8_ = lVar74;
      <std[c60ef17cbf7de79f]::path::Path>::_join
                (&local_aa8,param_2,local_d90,apEStack_798[lVar74 * 3 + 1],(&local_788)[lVar74 * 3])
      ;
      pEVar64 = local_aa0;
      list(local_428 + 0x20,local_aa0,local_a98);
      pEVar61 = pEStack_3f8;
      uVar57 = local_428._32_8_;
      pEVar87 = (Elf64_Ehdr *)((char *)(local_428._40_8_ + 1) + (long)pEStack_3f8 * 0x20 + -1);
      local_428._32_8_ = local_428._40_8_;
      pEStack_3f8 = (Elf64_Ehdr *)uVar57;
      pEVar77 = (Elf64_Ehdr *)local_428._40_8_;
      pEStack_3f0 = pEVar87;
      if (pEVar61 != (Elf64_Ehdr *)0x0) {
        pEVar64 = (Elf64_Ehdr *)local_428._40_8_;
        bVar71 = local_da8[0];
        do {
          pEVar77 = (Elf64_Ehdr *)&pEVar64->e_phoff;
          uVar56._0_1_ = pEVar64->e_ident_magic_num;
          uVar56._1_1_ = pEVar64->e_ident_magic_str[0];
          uVar56._2_1_ = pEVar64->e_ident_magic_str[1];
          uVar56._3_1_ = pEVar64->e_ident_magic_str[2];
          uVar56._4_1_ = pEVar64->e_ident_class;
          uVar56._5_1_ = pEVar64->e_ident_data;
          uVar56._6_1_ = pEVar64->e_ident_version;
          uVar56._7_1_ = pEVar64->e_ident_osabi;
          if (uVar56 == 0xffffffffffffffff) goto LAB_00726d36;
          pEVar61 = *(Elf64_Ehdr **)&pEVar64->e_ident_abiversion;
          qVar59 = pEVar64->e_entry;
          if (qVar59 == 0) {
            if (uVar56 != 0) {
              if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar61 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= pEVar61)) {
                free(pEVar61);
                bVar71 = local_da8[0];
              }
              else {
                if (uVar56 < 0x11) {
                  uVar56 = 0x10;
                }
                lVar88 = LZCOUNT(uVar56 - 1);
                lVar74 = 0x40 - lVar88;
                if (0xffff < uVar56 - 1) {
                  local_d88 = pEVar61;
                  cVar45 = sys::big_put(pEVar61,lVar74);
                  pEVar61 = local_d88;
                  bVar71 = local_da8[0];
                  if (cVar45 != '\0') goto LAB_00726cd9;
                }
                if (lVar88 == 0) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                }
                uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
                pEVar61->e_ident_magic_num = (char)uVar56;
                pEVar61->e_ident_magic_str[0] = (char)(uVar56 >> 8);
                pEVar61->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
                pEVar61->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
                pEVar61->e_ident_class = (char)(uVar56 >> 0x20);
                pEVar61->e_ident_data = (char)(uVar56 >> 0x28);
                pEVar61->e_ident_version = (char)(uVar56 >> 0x30);
                pEVar61->e_ident_osabi = (char)(uVar56 >> 0x38);
                *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = pEVar61;
              }
LAB_00726cd9:
            }
          }
          else {
            uVar57 = *(undefined8 *)&pEVar64->e_type;
            if (pEVar67 == local_c00) {
              local_d88 = pEVar61;
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::pqw::Meta>>::
              grow_one(&local_c00);
              pEVar48 = local_bf8;
              pEVar61 = local_d88;
              bVar71 = local_da8[0];
            }
            *(ulong *)(pEVar48->e_ident_magic_str + (long)pEVar67 * 0x28 + -1) = uVar56;
            *(Elf64_Ehdr **)(pEVar48->e_ident_pad + (long)pEVar67 * 0x28 + -1) = pEVar61;
            *(undefined8 *)(pEVar48->e_ident_pad + (long)pEVar67 * 0x28 + 7) = uVar57;
            pEVar48->e_ident_pad[(long)pEVar67 * 0x28 + 0xf] = bVar71;
            *(qword *)(pEVar48->e_ident_pad + (long)pEVar67 * 0x28 + 0x17) = qVar59;
            pEVar67 = (Elf64_Ehdr *)pEVar67->e_ident_magic_str;
            pcStack_bf0 = (char *)pEVar67;
          }
          pEVar64 = pEVar77;
        } while (pEVar77 != pEVar87);
        pEVar77 = pEVar87;
LAB_00726d36:
        pEVar64 = local_aa0;
      }
      local_428._40_8_ = pEVar77;
      core[62e902411887be45]::ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::into_iter::IntoIter<(std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
                ();
      if (local_aa8 != (Elf64_Ehdr *)0x0) {
        if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar64 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pEVar64)) {
          free(pEVar64);
        }
        else {
          pEVar61 = local_aa8;
          if (local_aa8 < (Elf64_Ehdr *)&DAT_00000011) {
            pEVar61 = (Elf64_Ehdr *)&DAT_00000010;
          }
          puVar66 = (undefined1 *)((long)&pEVar61[-1].e_shstrndx + 1);
          lVar74 = LZCOUNT(puVar66);
          lVar88 = 0x40 - lVar74;
          if ((puVar66 < (undefined1 *)0x10000) ||
             (cVar45 = sys::big_put(pEVar64,lVar88), cVar45 == '\0')) {
            if (lVar74 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
            pEVar64->e_ident_magic_num = (char)uVar56;
            pEVar64->e_ident_magic_str[0] = (char)(uVar56 >> 8);
            pEVar64->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
            pEVar64->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
            pEVar64->e_ident_class = (char)(uVar56 >> 0x20);
            pEVar64->e_ident_data = (char)(uVar56 >> 0x28);
            pEVar64->e_ident_version = (char)(uVar56 >> 0x30);
            pEVar64->e_ident_osabi = (char)(uVar56 >> 0x38);
            *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar64;
          }
        }
      }
      lVar74 = local_d68._0_8_ + 1;
    } while (lVar74 != 3);
    pEVar48 = local_bf8;
    if ((Elf64_Ehdr *)&DAT_00000001 < pEVar67) {
      if ((Elf64_Ehdr *)&DAT_00000014 < pEVar67) {
        core[62e902411887be45]::slice::sort::stable::driftsort_main::
        <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
                  ();
      }
      else {
        core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
        <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                  ();
      }
    }
    auVar118 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    iVar46 = auVar118._8_4_;
    pEVar64 = auVar118._0_8_;
    auVar110 = auVar111._0_16_;
    if (sys::LAST_1 != -1) {
      local_aa0 = (Elf64_Ehdr *)CONCAT44(local_aa0._4_4_,iVar46);
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_aa8 = pEVar64;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,&local_aa8,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar110 = auVar111._0_16_;
      auVar23._8_8_ = unaff_XMM15_Qb;
      auVar23._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar23,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar56;
      if (DAT_008437a8 == sys::LAPS) {
        local_da8 = auVar95;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one();
        auVar110 = auVar111._0_16_;
        uVar56 = local_da8._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(char **)(DAT_008437a0 + lVar74 * 0x18) = "s.list";
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 6;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    sys::LAST_1 = iVar46;
    sys::LAST_0 = pEVar64;
    if (pEVar67 == (Elf64_Ehdr *)0x0) {
      uVar56 = 0;
    }
    else {
      if ((Elf64_Ehdr *)&DAT_00000004 < pEVar67) {
        if ((Elf64_Ehdr *)&DAT_00000010 < pEVar67) {
          puVar66 = &DAT_00000010;
          if (((ulong)pEVar67 & 0xf) != 0) {
            puVar66 = (undefined1 *)(ulong)((uint)pEVar67 & 0xf);
          }
          lVar62 = (long)pEVar67 - (long)puVar66;
          pEVar64 = pEVar48 + 8;
          auVar111 = ZEXT3264(_DAT_00203dc0);
          lVar79 = 0;
          lVar74 = 0;
          lVar101 = 0;
          lVar102 = 0;
          auVar104._8_8_ = DAT_00201b08;
          auVar104._0_8_ = DAT_00201b08;
          auVar104._16_8_ = DAT_00201b08;
          auVar104._24_8_ = DAT_00201b08;
          lVar88 = 0;
          lVar107 = 0;
          lVar108 = 0;
          lVar109 = 0;
          auVar99 = ZEXT1664((undefined1  [16])0x0);
          lVar70 = 0;
          lVar112 = 0;
          lVar113 = 0;
          lVar114 = 0;
          pEVar61 = pEVar67;
          do {
            auVar100 = vmovdqu64_avx512f(*(undefined1 (*) [64])&pEVar64[-8].e_phoff);
            auVar103 = vmovdqu64_avx512f((undefined1  [64])pEVar64[-5]);
            auVar106 = vmovdqu64_avx512f(*(undefined1 (*) [64])&pEVar64[-3].e_phoff);
            auVar97 = vmovdqu64_avx512f((undefined1  [64])*pEVar64);
            auVar100 = vpermt2q_avx512f(auVar100,auVar111,*(undefined1 (*) [64])&pEVar64[-7].e_phoff
                                       );
            auVar103 = vpermt2q_avx512f(auVar103,auVar111,(undefined1  [64])pEVar64[-4]);
            auVar106 = vpermt2q_avx512f(auVar106,auVar111,*(undefined1 (*) [64])&pEVar64[-2].e_phoff
                                       );
            auVar97 = vpermt2q_avx512f(auVar97,auVar111,(undefined1  [64])pEVar64[1]);
            auVar17._0_8_ = auVar100._0_8_ + DAT_00201e98;
            auVar17._8_8_ = auVar100._8_8_ + DAT_00201e98;
            auVar17._16_8_ = auVar100._16_8_ + DAT_00201e98;
            auVar17._24_8_ = auVar100._24_8_ + DAT_00201e98;
            auVar18._0_8_ = auVar103._0_8_ + DAT_00201e98;
            auVar18._8_8_ = auVar103._8_8_ + DAT_00201e98;
            auVar18._16_8_ = auVar103._16_8_ + DAT_00201e98;
            auVar18._24_8_ = auVar103._24_8_ + DAT_00201e98;
            auVar19._0_8_ = auVar106._0_8_ + DAT_00201e98;
            auVar19._8_8_ = auVar106._8_8_ + DAT_00201e98;
            auVar19._16_8_ = auVar106._16_8_ + DAT_00201e98;
            auVar19._24_8_ = auVar106._24_8_ + DAT_00201e98;
            auVar7._0_8_ = auVar97._0_8_ + DAT_00201e98;
            auVar7._8_8_ = auVar97._8_8_ + DAT_00201e98;
            auVar7._16_8_ = auVar97._16_8_ + DAT_00201e98;
            auVar7._24_8_ = auVar97._24_8_ + DAT_00201e98;
            auVar17 = vpand_avx2(auVar17,auVar104);
            lVar74 = auVar17._0_8_ + lVar74;
            lVar79 = auVar17._8_8_ + lVar79;
            lVar101 = auVar17._16_8_ + lVar101;
            lVar102 = auVar17._24_8_ + lVar102;
            auVar17 = vpand_avx2(auVar18,auVar104);
            lVar88 = auVar17._0_8_ + lVar88;
            lVar107 = auVar17._8_8_ + lVar107;
            lVar108 = auVar17._16_8_ + lVar108;
            lVar109 = auVar17._24_8_ + lVar109;
            auVar17 = vpand_avx2(auVar19,auVar104);
            auVar110._0_8_ = auVar17._0_8_ + auVar99._0_8_;
            auVar110._8_8_ = auVar17._8_8_ + auVar99._8_8_;
            lVar12 = auVar17._16_8_ + auVar99._16_8_;
            lVar13 = auVar17._24_8_ + auVar99._24_8_;
            auVar99 = ZEXT3264(CONCAT824(lVar13,CONCAT816(lVar12,auVar110)));
            auVar17 = vpand_avx2(auVar7,auVar104);
            lVar70 = auVar17._0_8_ + lVar70;
            lVar112 = auVar17._8_8_ + lVar112;
            lVar113 = auVar17._16_8_ + lVar113;
            lVar114 = auVar17._24_8_ + lVar114;
            pEVar64 = pEVar64 + 10;
            pEVar61 = (Elf64_Ehdr *)&pEVar61[-1].e_flags;
          } while ((Elf64_Ehdr *)puVar66 != pEVar61);
          auVar4._0_8_ = lVar70 + auVar110._0_8_ + lVar88 + lVar74;
          auVar4._8_8_ = lVar112 + auVar110._8_8_ + lVar107 + lVar79;
          auVar8._16_8_ = lVar113 + lVar12 + lVar108 + lVar101;
          auVar8._0_16_ = auVar4;
          auVar8._24_8_ = lVar114 + lVar13 + lVar109 + lVar102;
          auVar115 = vpaddq_avx(auVar4,auVar8._16_16_);
          auVar116 = vpshufd_avx(auVar115,0xee);
          auVar115 = vpaddq_avx(auVar115,auVar116);
          uVar56 = auVar115._0_8_;
          lVar74 = lVar62;
          if ((uint)puVar66 < 5) goto LAB_007270c1;
        }
        else {
          uVar56 = 0;
          lVar74 = 0;
        }
        uVar76 = 4;
        if (((ulong)pEVar67 & 3) != 0) {
          uVar76 = (ulong)((uint)pEVar67 & 3);
        }
        lVar62 = (long)pEVar67 - uVar76;
        auVar111 = ZEXT864(uVar56);
        lVar88 = (uVar76 + lVar74) - (long)pEVar67;
        pbVar63 = pEVar48->e_ident_pad + lVar74 * 0x28 + 0x17;
        auVar105._8_8_ = DAT_00201b08;
        auVar105._0_8_ = DAT_00201b08;
        auVar105._16_8_ = DAT_00201b08;
        auVar105._24_8_ = DAT_00201b08;
        do {
          auVar99 = vmovdqu64_avx512f(*(undefined1 (*) [64])pbVar63);
          auVar99 = vpermt2q_avx512f(auVar99,ZEXT3264(_DAT_00203dc0),
                                     *(undefined1 (*) [64])(pbVar63 + 0x40));
          auVar9._0_8_ = auVar99._0_8_ + DAT_00201e98;
          auVar9._8_8_ = auVar99._8_8_ + DAT_00201e98;
          auVar9._16_8_ = auVar99._16_8_ + DAT_00201e98;
          auVar9._24_8_ = auVar99._24_8_ + DAT_00201e98;
          auVar104 = vpand_avx2(auVar9,auVar105);
          auVar5._0_8_ = auVar104._0_8_ + auVar111._0_8_;
          auVar5._8_8_ = auVar104._8_8_ + auVar111._8_8_;
          auVar10._16_8_ = auVar104._16_8_ + auVar111._16_8_;
          auVar10._0_16_ = auVar5;
          auVar10._24_8_ = auVar104._24_8_ + auVar111._24_8_;
          auVar111 = ZEXT3264(auVar10);
          pbVar63 = *(undefined1 (*) [64])(pbVar63 + 0x80) + 0x20;
          lVar88 = lVar88 + 4;
        } while (lVar88 != 0);
        auVar115 = vpaddq_avx(auVar5,auVar10._16_16_);
        auVar116 = vpshufd_avx(auVar115,0xee);
        auVar115 = vpaddq_avx(auVar115,auVar116);
        uVar56 = auVar115._0_8_;
      }
      else {
        lVar62 = 0;
        uVar56 = 0;
      }
LAB_007270c1:
      lVar74 = (long)pEVar67 - lVar62;
      pbVar63 = pEVar48->e_ident_pad + lVar62 * 0x28 + 0x17;
      do {
        uVar56 = uVar56 + (*(long *)pbVar63 + 0x200fffU & 0xffffffffffe00000);
        pbVar63 = pbVar63 + 0x28;
        lVar74 = lVar74 + -1;
      } while (lVar74 != 0);
      if ((uint)(uVar56 - 0xffffc00000 >> 0x28) < 0xffffff) {
                    /* WARNING: Subroutine does not return */
        sys::fallback(&DAT_00210e80,0xf);
      }
    }
    auVar111 = ZEXT1664(auVar110);
    pvVar91 = mmap64((void *)0x0,uVar56 + 0x600000,1,0x4022,-1,0);
    if (pvVar91 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      sys::fallback("mmap region",0xb);
    }
    uVar56 = (long)pvVar91 + 0x1fffffU & 0xffffffffffe00000;
    local_da8._0_8_ = uVar56;
    if (pEVar67 == (Elf64_Ehdr *)0x0) {
      local_b68 = (Elf64_Ehdr *)0x0;
      pEStack_b60 = (Elf64_Ehdr *)&DAT_00000008;
      local_b58 = (Elf64_Ehdr *)0x0;
      lVar74 = 0x200000;
      local_d90 = 0;
      local_dc0 = (Elf64_Ehdr *)0x0;
      local_d48 = 0;
    }
    else {
      lVar74 = (long)pEVar67 << 5;
      pEVar64 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar74,8);
      if (pEVar64 == (Elf64_Ehdr *)0x0) goto LAB_007293f0;
      local_d68._0_8_ = pEVar48->e_ident_magic_str + (long)pEVar67 * 0x28 + -1;
      local_b58 = (Elf64_Ehdr *)0x0;
      lVar74 = 0x200000;
      local_d48 = 0;
      local_dc0 = (Elf64_Ehdr *)0x0;
      local_d90 = 0;
      local_b68 = pEVar67;
      pEStack_b60 = pEVar64;
      do {
        local_7a8 = 0;
        uStack_7a4 = 0x1b6;
        uStack_7a2 = 0;
        uStack_7a0 = 1;
        uStack_79e = 0;
        uStack_79c = 0;
        uStack_79b = 0;
        uStack_79a = 0;
        uStack_799 = 0;
        uVar57._0_1_ = pEVar48->e_ident_abiversion;
        uVar57._1_1_ = pEVar48->e_ident_pad[0];
        uVar57._2_1_ = pEVar48->e_ident_pad[1];
        uVar57._3_1_ = pEVar48->e_ident_pad[2];
        uVar57._4_1_ = pEVar48->e_ident_pad[3];
        uVar57._5_1_ = pEVar48->e_ident_pad[4];
        uVar57._6_1_ = pEVar48->e_ident_pad[5];
        uVar57._7_1_ = pEVar48->e_ident_pad[6];
        uVar58._0_2_ = pEVar48->e_type;
        uVar58._2_2_ = pEVar48->e_machine;
        uVar58._4_4_ = pEVar48->e_version;
        auVar111 = ZEXT1664(auVar111._0_16_);
        <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(local_428 + 0x20,&local_7a8,uVar57,uVar58);
        if (local_428[0x20] != '\0') goto LAB_0072916a;
        uVar47 = local_428._36_4_;
        pvVar91 = mmap64((void *)(uVar56 + lVar74),pEVar48->e_phoff,1,0x12,local_428._36_4_,0);
        pEVar67 = local_b58;
        if (pvVar91 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          sys::fallback("mmap input",10);
        }
        bVar71 = (byte)pEVar48->e_entry;
        qVar59 = pEVar48->e_phoff;
        auVar115 = auVar111._0_16_;
        if (bVar71 == 0) {
          local_d90 = local_d90 + qVar59;
          auVar115 = vpcmpeqd_avx(auVar115,auVar115);
          auVar111 = ZEXT1664(auVar115);
        }
        else {
          auVar115 = vpcmpeqd_avx(auVar115,auVar115);
          auVar111 = ZEXT1664(auVar115);
          if (bVar71 == 1) {
            local_dc0 = (Elf64_Ehdr *)((long)local_dc0 + qVar59);
          }
          else {
            local_d48 = local_d48 + qVar59;
          }
        }
        if (local_b58 == local_b68) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                    (&local_b68);
          auVar115 = vpcmpeqd_avx(auVar111._0_16_,auVar111._0_16_);
          auVar111 = ZEXT1664(auVar115);
        }
        auVar115 = auVar111._0_16_;
        *(long *)(pEStack_b60->e_ident_magic_str + (long)pEVar67 * 0x20 + -1) = lVar74;
        *(qword *)(pEStack_b60->e_ident_pad + (long)pEVar67 * 0x20 + -1) = qVar59;
        *(undefined8 *)(pEStack_b60->e_ident_pad + (long)pEVar67 * 0x20 + 7) = 0xffffffffffffffff;
        pEStack_b60->e_ident_pad[(long)pEVar67 * 0x20 + 0xf] = bVar71;
        uVar76 = DAT_00843ac8;
        local_b58 = (Elf64_Ehdr *)pEVar67->e_ident_magic_str;
        uVar56 = local_da8._0_8_;
        if ((sys::FD_ALL_0 == '\0') || (899 < DAT_00843ac8)) {
          if (DAT_00843ab0 != 0) {
            <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>
            ::initialize::
            <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
                      ();
            auVar115 = vpcmpeqd_avx(auVar111._0_16_,auVar111._0_16_);
            auVar111 = ZEXT1664(auVar115);
            uVar76 = DAT_00843ac8;
          }
          DAT_00843ac8 = uVar76;
          if (parse::DRV == 0) {
LAB_007271e0:
            if (uVar76 == parse::FDS) {
              auVar111 = ZEXT1664(auVar115);
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&parse::FDS);
              auVar115 = auVar111._0_16_;
            }
            *(undefined4 *)(DAT_00843ac0 + uVar76 * 4) = 0xffffffff;
            DAT_00843ac8 = uVar76 + 1;
            auVar111 = ZEXT1664(auVar115);
            close(uVar47);
          }
          else {
            auVar115 = auVar111._0_16_;
            if (uVar76 != 0) {
              if (uVar76 < 4) {
                uVar68 = 0;
                uVar73 = 0;
LAB_00727570:
                do {
                  uVar73 = uVar73 + (-1 < *(int *)(DAT_00843ac0 + uVar68 * 4));
                  uVar68 = uVar68 + 1;
LAB_00727580:
                } while (uVar76 != uVar68);
              }
              else {
                if (uVar76 < 0x10) {
                  uVar73 = 0;
                  uVar54 = 0;
LAB_007274dc:
                  uVar68 = uVar76 & 0xfffffffffffffffc;
                  auVar99 = ZEXT864(uVar73);
                  do {
                    uVar73 = vpcmpd_avx512vl(auVar115,*(undefined1 (*) [16])
                                                       (DAT_00843ac0 + uVar54 * 4),1);
                    auVar104 = vpmovm2q_avx512vl(uVar73 & 0xf);
                    auVar104 = vpsubq_avx2(auVar99._0_32_,auVar104);
                    auVar99 = ZEXT3264(auVar104);
                    uVar54 = uVar54 + 4;
                  } while (uVar68 != uVar54);
                  auVar116 = vpaddq_avx(auVar104._0_16_,auVar104._16_16_);
                  auVar110 = vpshufd_avx(auVar116,0xee);
                  auVar116 = vpaddq_avx(auVar116,auVar110);
                  uVar73 = auVar116._0_8_;
                  goto LAB_00727580;
                }
                uVar68 = uVar76 & 0xfffffffffffffff0;
                auVar99 = ZEXT1664((undefined1  [16])0x0);
                uVar54 = 0;
                auVar100 = ZEXT1664((undefined1  [16])0x0);
                auVar103 = ZEXT1664((undefined1  [16])0x0);
                auVar106 = ZEXT1664((undefined1  [16])0x0);
                do {
                  uVar73 = vpcmpd_avx512vl(auVar115,*(undefined1 (*) [16])
                                                     (DAT_00843ac0 + uVar54 * 4),1);
                  uVar14 = vpcmpd_avx512vl(auVar115,*(undefined1 (*) [16])
                                                     (DAT_00843ac0 + 0x10 + uVar54 * 4),1);
                  uVar15 = vpcmpd_avx512vl(auVar115,*(undefined1 (*) [16])
                                                     (DAT_00843ac0 + 0x20 + uVar54 * 4),1);
                  uVar16 = vpcmpd_avx512vl(auVar115,*(undefined1 (*) [16])
                                                     (DAT_00843ac0 + 0x30 + uVar54 * 4),1);
                  auVar104 = vpmovm2q_avx512vl(uVar73 & 0xf);
                  auVar104 = vpsubq_avx2(auVar99._0_32_,auVar104);
                  auVar99 = ZEXT3264(auVar104);
                  auVar17 = vpmovm2q_avx512vl(uVar14 & 0xf);
                  auVar17 = vpsubq_avx2(auVar100._0_32_,auVar17);
                  auVar100 = ZEXT3264(auVar17);
                  auVar18 = vpmovm2q_avx512vl(uVar15 & 0xf);
                  auVar18 = vpsubq_avx2(auVar103._0_32_,auVar18);
                  auVar103 = ZEXT3264(auVar18);
                  auVar19 = vpmovm2q_avx512vl(uVar16 & 0xf);
                  auVar19 = vpsubq_avx2(auVar106._0_32_,auVar19);
                  auVar106 = ZEXT3264(auVar19);
                  uVar54 = uVar54 + 0x10;
                } while (uVar68 != uVar54);
                auVar6._0_8_ = auVar19._0_8_ + auVar18._0_8_ + auVar17._0_8_ + auVar104._0_8_;
                auVar6._8_8_ = auVar19._8_8_ + auVar18._8_8_ + auVar17._8_8_ + auVar104._8_8_;
                auVar11._16_8_ = auVar19._16_8_ + auVar18._16_8_ + auVar17._16_8_ + auVar104._16_8_;
                auVar11._0_16_ = auVar6;
                auVar11._24_8_ = auVar19._24_8_ + auVar18._24_8_ + auVar17._24_8_ + auVar104._24_8_;
                auVar116 = vpaddq_avx(auVar6,auVar11._16_16_);
                auVar110 = vpshufd_avx(auVar116,0xee);
                auVar116 = vpaddq_avx(auVar116,auVar110);
                uVar73 = auVar116._0_8_;
                if (uVar76 != uVar68) {
                  uVar54 = uVar68;
                  if ((uVar76 & 0xc) != 0) goto LAB_007274dc;
                  goto LAB_00727570;
                }
              }
              if (0x27 < uVar73) goto LAB_007271e0;
            }
            if (uVar76 == parse::FDS) {
              auVar111 = ZEXT1664(auVar115);
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&parse::FDS);
            }
            *(undefined4 *)(DAT_00843ac0 + uVar76 * 4) = uVar47;
            DAT_00843ac8 = uVar76 + 1;
          }
        }
        else {
          if (DAT_00843ac8 == parse::FDS) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&parse::FDS);
          }
          *(undefined4 *)(DAT_00843ac0 + uVar76 * 4) = uVar47;
          DAT_00843ac8 = uVar76 + 1;
        }
        pqVar60 = &pEVar48->e_phoff;
        pEVar48 = (Elf64_Ehdr *)&pEVar48->e_shoff;
        lVar74 = (*pqVar60 + 0x200fff & 0xffffffffffe00000) + lVar74;
      } while (pEVar48 != (Elf64_Ehdr *)local_d68._0_8_);
    }
    pEVar67 = local_b58;
    pEVar48 = pEStack_b60;
    io_advise(uVar56,lVar74);
    parse::fault_around_check(uVar56,pEVar48,pEVar67);
    auVar118 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    if (sys::LAST_1 != -1) {
      local_aa0 = (Elf64_Ehdr *)CONCAT44(local_aa0._4_4_,auVar118._8_4_);
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_aa8 = auVar118._0_8_;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,&local_aa8,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar24._8_8_ = unaff_XMM15_Qb;
      auVar24._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar24,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar56;
      if (DAT_008437a8 == sys::LAPS) {
        local_d68 = auVar96;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
        uVar56 = local_d68._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(char **)(DAT_008437a0 + lVar74 * 0x18) = "s.mmap";
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 6;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    if (param_4 == (ulong *)0x0) {
      sys::LAST_1 = auVar118._8_4_;
      sys::LAST_0 = auVar118._0_8_;
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                (&PTR_s_src_setup_rs_00226770);
    }
    uVar56 = local_d90 + (long)local_dc0 + local_d48;
    if (uVar56 >> 0x20 == 0) {
      pEVar64 = (Elf64_Ehdr *)((uVar56 & 0xffffffff) / ((long)param_4 << 4 & 0xffffffffU));
    }
    else {
      pEVar64 = (Elf64_Ehdr *)(uVar56 / (ulong)((long)param_4 << 4));
    }
    pEVar61 = (Elf64_Ehdr *)0x10000;
    if ((Elf64_Ehdr *)0x10000 < pEVar64) {
      pEVar61 = pEVar64;
    }
    pEVar64 = &__preinit_array_end;
    if (pEVar61 < &__preinit_array_end) {
      pEVar64 = pEVar61;
    }
    local_930._0_8_ = (Elf64_Ehdr **)0x0;
    local_930._8_8_ = &DAT_00000008;
    local_920 = (Elf64_Ehdr *)0x0;
    local_d38 = (long)pEVar67 * 0x20;
    pEVar61 = (Elf64_Ehdr *)(pEVar48->e_ident_magic_str + (long)pEVar67 * 0x20 + -1);
    local_d50 = pEVar48;
    if (pEVar67 != (Elf64_Ehdr *)0x0) {
      iVar46 = 0;
      pqVar60 = (qword *)&DAT_00000008;
      ppEVar69 = (Elf64_Ehdr **)0x0;
      ppEVar92 = (Elf64_Ehdr **)0x0;
      local_d68._0_8_ = (Elf64_Ehdr *)(pEVar48->e_ident_magic_str + (long)pEVar67 * 0x20 + -1);
      local_d88 = pEVar64;
      do {
        puVar66 = *(undefined1 **)&pEVar48->e_ident_abiversion;
        if (&DAT_00000001 < puVar66) {
          lVar74 = (long)ppEVar92 * 0x18 + 0x10;
          puVar84 = &DAT_00000001;
          do {
            sys::LAST_1 = auVar118._8_4_;
            sys::LAST_0 = auVar118._0_8_;
            puVar82 = puVar66;
            if (puVar84 + (long)(pEVar64->e_ident_magic_str + -1) < puVar66) {
              puVar82 = puVar84 + (long)(pEVar64->e_ident_magic_str + -1);
            }
            if (ppEVar92 == ppEVar69) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(local_930);
              auVar118._8_4_ = sys::LAST_1;
              auVar118._0_8_ = sys::LAST_0;
              pqVar60 = (qword *)local_930._8_8_;
              ppEVar69 = (Elf64_Ehdr **)local_930._0_8_;
              pEVar64 = local_d88;
            }
            sys::LAST_1 = auVar118._8_4_;
            sys::LAST_0 = auVar118._0_8_;
            *(undefined1 **)((long)pqVar60 + lVar74 + -0x10) = puVar84;
            *(undefined1 **)((long)pqVar60 + lVar74 + -8) = puVar82;
            *(int *)((long)pqVar60 + lVar74) = iVar46;
            auVar118._8_4_ = sys::LAST_1;
            auVar118._0_8_ = sys::LAST_0;
            ppEVar92 = (Elf64_Ehdr **)((long)ppEVar92 + 1);
            puVar66 = *(undefined1 **)&pEVar48->e_ident_abiversion;
            lVar74 = lVar74 + 0x18;
            puVar84 = puVar82;
            local_920 = (Elf64_Ehdr *)ppEVar92;
          } while (puVar82 < puVar66);
        }
        pEVar48 = (Elf64_Ehdr *)&pEVar48->e_phoff;
        iVar46 = iVar46 + 1;
        pEVar61 = (Elf64_Ehdr *)local_d68._0_8_;
      } while (pEVar48 != (Elf64_Ehdr *)local_d68._0_8_);
    }
    local_aa8 = (Elf64_Ehdr *)0x0;
    local_aa0 = (Elf64_Ehdr *)&DAT_00000008;
    local_a98 = 0;
    puStack_a90 = (undefined8 *)0x0;
    local_a88 = (char **)&DAT_00000008;
    local_a80 = (undefined1 *)0x0;
    uVar57 = local_da8._0_8_;
    lVar74 = local_da8._0_8_ + -1;
    pEVar48 = local_d50;
    while( true ) {
      pEVar67 = pEVar48;
      sys::LAST_1 = auVar118._8_4_;
      sys::LAST_0 = auVar118._0_8_;
      if (pEVar67 == pEVar61) break;
      pEVar48 = (Elf64_Ehdr *)&pEVar67->e_phoff;
      if ((char)pEVar67->e_entry == '\0') {
        if (4999 < local_a98) break;
        lVar70 = *(long *)&pEVar67->e_ident_abiversion;
        lVar88 = *(ulong *)pEVar67 + uVar57;
        lVar79 = 0;
        if (lVar70 != 0) {
          do {
            if (*(char *)(lVar88 + lVar79) == '\n') {
              lVar79 = lVar79 + 1;
              goto LAB_00727956;
            }
            lVar79 = lVar79 + 1;
          } while (lVar70 != lVar79);
          lVar79 = lVar70;
        }
LAB_00727956:
        uVar76 = lVar70 - lVar79;
        uVar56 = 600000;
        if (uVar76 < 600000) {
          uVar56 = uVar76;
        }
        if (600000 < uVar76) {
          do {
            uVar54 = uVar56 - 1;
            if (uVar76 <= uVar54) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0xffffffffffffffff,uVar76,&PTR_s_src_setup_rs_00226788);
            }
            if (*(char *)(*(ulong *)pEVar67 + lVar79 + lVar74 + uVar56) == '\n') goto LAB_007278f0;
            uVar56 = uVar54;
          } while (uVar54 != 0);
          uVar56 = 0;
        }
LAB_007278f0:
        <pipeline[509596c7b52975b2]::keyrec::Sample>::add_event_lines
                  (&local_aa8,lVar88 + lVar79,uVar56);
        auVar118._8_4_ = sys::LAST_1;
        auVar118._0_8_ = sys::LAST_0;
      }
    }
    auVar118 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    pEVar48 = local_d50;
    if (sys::LAST_1 != -1) {
      uStack_8d0 = CONCAT44(uStack_8d0._4_4_,auVar118._8_4_);
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_8d8 = auVar118._0_8_;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,&local_8d8,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar25._8_8_ = unaff_XMM15_Qb;
      auVar25._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar25,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      if (DAT_008437a8 == sys::LAPS) {
        local_d68._8_8_ = 0;
        local_d68._0_8_ = uVar56;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
        uVar56 = local_d68._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(undefined **)(DAT_008437a0 + lVar74 * 0x18) = &DAT_00201de0;
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 8;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    local_8d8 = (Elf64_Ehdr *)0x0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    sys::LAST_1 = auVar118._8_4_;
    sys::LAST_0 = auVar118._0_8_;
    cVar45 = v3b::forced();
    if (cVar45 == '\0') {
      auVar115 = keyrec::recover_user_key(&local_aa8,&local_8d8);
      local_b18 = auVar115._8_8_;
      if ((auVar115._0_8_ & 1) == 0) goto LAB_00727b7e;
      auVar115 = keyrec::recover_event_key(local_aa0,local_a98,local_b18,local_d18,&local_8d8);
      local_ad8._0_8_ = auVar115._8_8_;
      if ((auVar115._0_8_ & 1) == 0) goto LAB_00727b7e;
      if ((char)local_d74 == '\0') goto LAB_00727ba6;
LAB_00727b13:
      local_7a8 = (int)&local_b18;
      uStack_7a4 = (undefined2)((ulong)&local_b18 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)&local_b18 >> 0x30);
      uStack_7a0 = 0xbf40;
      uStack_79e = 0x74;
      uStack_79c = 0;
      uStack_79b = 0;
      uStack_79a = 0;
      uStack_799 = 0;
      apEStack_798[0] = (Elf64_Ehdr *)local_ad8;
      apEStack_798[1] = (Elf64_Ehdr *)<u64_as_core[62e902411887be45]::fmt::LowerHex>::fmt;
      std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020efcd,&local_7a8);
      if (0x9fffebb13 < local_dc0) goto LAB_00727cba;
LAB_00727bcb:
      iVar46 = ckix_mode();
      plVar50 = local_d70;
      plVar49 = local_d80;
      if (iVar46 == 0) goto LAB_00727cba;
      local_9c8._0_8_ = (ulong)local_dc0 / 0x14 + 0x103f & 0x1ffffffc0;
      local_cb8 = (ulong *)0x0;
      local_868 = 0;
      local_860 = (Elf64_Ehdr *)&DAT_00000008;
      local_858 = 0;
      uStack_850 = 0;
      local_848 = 8;
      local_840 = 0;
      uVar56 = local_d38;
      pqVar60 = &pEVar48[-1].e_phoff;
      do {
        pqVar93 = pqVar60;
        if (uVar56 == 0) goto LAB_00728fe1;
        uVar56 = uVar56 - 0x20;
        pqVar60 = pqVar93 + 4;
      } while ((char)pqVar93[7] != '\x01');
      qVar59 = pqVar93[4];
      lVar88 = pqVar93[5];
      lVar74 = qVar59 + uVar57;
      lVar70 = 0;
      if (lVar88 != 0) {
        do {
          if (*(char *)(lVar74 + lVar70) == '\n') {
            lVar70 = lVar70 + 1;
            goto LAB_00728f78;
          }
          lVar70 = lVar70 + 1;
        } while (lVar88 != lVar70);
        lVar70 = lVar88;
      }
LAB_00728f78:
      uVar76 = lVar88 - lVar70;
      uVar56 = 600000;
      if (uVar76 < 600000) {
        uVar56 = uVar76;
      }
      if (600000 < uVar76) {
        do {
          uVar54 = uVar56 - 1;
          if (uVar76 <= uVar54) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0xffffffffffffffff,uVar76,&PTR_s_src_setup_rs_002265a0);
          }
          if (*(char *)(qVar59 + lVar70 + uVar57 + -1 + uVar56) == '\n') goto LAB_00728fc9;
          uVar56 = uVar54;
        } while (uVar54 != 0);
        uVar56 = 0;
      }
LAB_00728fc9:
      <pipeline[509596c7b52975b2]::keyrec::Sample>::add_click_lines
                (&local_868,lVar74 + lVar70,uVar56);
LAB_00728fe1:
      auVar115 = click_key(&uStack_850,local_b18,local_9c8._0_8_,&local_8d8);
      pEVar48 = local_860;
      puVar89 = auVar115._8_8_;
      if (auVar115._0_8_ != 1) {
        local_9c8._0_8_ = (Elf64_Ehdr *)0x0;
        puVar89 = local_cb8;
      }
      local_cb8 = puVar89;
      if (local_868 != 0) {
        if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (local_860 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= local_860)) {
          free(local_860);
        }
        else {
          uVar56 = local_868 * 0x28 - 1;
          lVar74 = LZCOUNT(uVar56);
          lVar88 = 0x40 - lVar74;
          if (0xffff < uVar56) {
            cVar45 = sys::big_put(local_860,lVar88);
            if (cVar45 != '\0') goto LAB_00727cdc;
          }
          if (lVar74 == 0) goto LAB_00729548;
          uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
          pEVar48->e_ident_magic_num = (char)uVar56;
          pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
          pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
          pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
          pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
          pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
          pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
          pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
          *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
        }
      }
    }
    else {
LAB_00727b7e:
      LOCK();
      v3b::ON_0 = 1;
      UNLOCK();
      local_b18 = 0;
      local_ad8[0] = 0;
      local_ad8[1] = '\0';
      local_ad8[2] = '\0';
      local_ad8[3] = '\0';
      local_ad8[4] = 0;
      local_ad8[5] = 0;
      local_ad8[6] = 0;
      local_ad8[7] = 0;
      if ((char)local_d74 != '\0') goto LAB_00727b13;
LAB_00727ba6:
      if (local_dc0 < 0x9fffebb14) goto LAB_00727bcb;
LAB_00727cba:
      local_9c8._0_8_ = (Elf64_Ehdr *)0x0;
      local_cb8 = (ulong *)0x0;
      plVar50 = local_d70;
      plVar49 = local_d80;
    }
LAB_00727cdc:
    if ((char)local_d74 != '\0') {
      local_7a8 = (int)&local_cb8;
      uStack_7a4 = (undefined2)((ulong)&local_cb8 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)&local_cb8 >> 0x30);
      uStack_7a0 = 0xbf40;
      uStack_79e = 0x74;
      uStack_79c = 0;
      uStack_79b = 0;
      uStack_79a = 0;
      uStack_799 = 0;
      apEStack_798[0] = (Elf64_Ehdr *)local_9c8;
      apEStack_798[1] = (Elf64_Ehdr *)<u64_as_core[62e902411887be45]::fmt::Display>::fmt;
      std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020cab1,&local_7a8);
    }
    auVar118 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    if (sys::LAST_1 != -1) {
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_bc0 = auVar118;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,local_bc0,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar26._8_8_ = unaff_XMM15_Qb;
      auVar26._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar26,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      if (DAT_008437a8 == sys::LAPS) {
        local_d68._8_8_ = 0;
        local_d68._0_8_ = uVar56;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
        uVar56 = local_d68._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(char **)(DAT_008437a0 + lVar74 * 0x18) = "maps+keys";
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 9;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    sys::LAST_1 = auVar118._8_4_;
    sys::LAST_0 = auVar118._0_8_;
    uVar72 = (*(code *)PTR_pthread_join_00841df0)(local_d30,0);
    if (uVar72 != 0) {
      if ((undefined **)core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS !=
          &PTR_format_error_0058cdd8) {
        core[62e902411887be45]::io::error::os_functions::OS_FUNCTIONS =
             (undefined *)&PTR_format_error_0058cdd8;
      }
      local_428._32_8_ = (ulong)uVar72 << 0x20 | 2;
      puVar66 = local_428 + 0x20;
      local_7a8 = (int)puVar66;
      uStack_7a4 = (undefined2)((ulong)puVar66 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)puVar66 >> 0x30);
      uStack_7a0 = 0x8ee0;
      uStack_79e = 0x74;
      uStack_79c = 0;
      uStack_79b = 0;
      uStack_79a = 0;
      uStack_799 = 0;
                    /* try { // try from 007292bc to 007292d2 has its CatchHandler @ 0072956f */
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt
                (&DAT_0020c8a1,&local_7a8,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058d618);
    }
    LOCK();
    bVar94 = plVar50[1] == 1;
    if (bVar94) {
      plVar50[1] = -1;
    }
    UNLOCK();
    if ((!bVar94) || (plVar50[1] = 1, *plVar50 != 1)) {
      core[62e902411887be45]::option::expect_failed
                ("threads should not terminate unexpectedly",0x29,
                 &PTR_s__rustc_0ef1bc386059596dada8fb65b_002123e8);
LAB_007292e9:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::option::unwrap_failed
                (&PTR_s__rustc_0ef1bc386059596dada8fb65b_00212400);
    }
    plVar51 = (long *)plVar50[3];
    plVar50[3] = -2;
    if (plVar51 == (long *)0xfffffffffffffffe) goto LAB_007292e9;
    lVar74 = plVar50[4];
    lVar88 = plVar50[5];
    apEStack_798[0] = (Elf64_Ehdr *)plVar50[6];
    apEStack_798[1] = (Elf64_Ehdr *)plVar50[7];
    local_788 = plVar50[8];
    lStack_780 = plVar50[9];
    pcStack_778 = (char *)plVar50[10];
    lStack_770 = plVar50[0xb];
    lStack_768 = plVar50[0xc];
    pcStack_760 = (char *)plVar50[0xd];
    lStack_758 = plVar50[0xe];
    local_7a8 = (int)lVar74;
    uStack_7a4 = (undefined2)((ulong)lVar74 >> 0x20);
    uStack_7a2 = (undefined2)((ulong)lVar74 >> 0x30);
    uStack_7a0 = (undefined2)lVar88;
    uStack_79e = (undefined2)((ulong)lVar88 >> 0x10);
    uStack_79c = (undefined1)((ulong)lVar88 >> 0x20);
    uStack_79b = (undefined1)((ulong)lVar88 >> 0x28);
    uStack_79a = (undefined1)((ulong)lVar88 >> 0x30);
    uStack_799 = (undefined1)((ulong)lVar88 >> 0x38);
    local_d30 = (undefined1 *)plVar50[0xf];
    LOCK();
    *plVar49 = *plVar49 + -1;
    UNLOCK();
    if (*plVar49 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
      ::drop_slow(plVar49);
      LOCK();
      *plVar50 = *plVar50 + -1;
      lVar74 = *plVar50;
      UNLOCK();
    }
    else {
      LOCK();
      *plVar50 = *plVar50 + -1;
      lVar74 = *plVar50;
      UNLOCK();
    }
    if (lVar74 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<pipeline[509596c7b52975b2]::setup::Lookups>>>
      ::drop_slow(plVar50);
    }
    local_d70 = plVar51;
    if (plVar51 == (long *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      sys::fallback("lookup thread",0xd);
    }
    local_88 = CONCAT26(uStack_7a2,CONCAT24(uStack_7a4,local_7a8));
    uStack_80 = CONCAT17(uStack_799,
                         CONCAT16(uStack_79a,
                                  CONCAT15(uStack_79b,
                                           CONCAT14(uStack_79c,CONCAT22(uStack_79e,uStack_7a0)))));
    pEStack_78 = apEStack_798[0];
    pEStack_70 = apEStack_798[1];
    local_68 = local_788;
    lStack_60 = lStack_780;
    pcStack_58 = pcStack_778;
    lStack_50 = lStack_770;
    lStack_48 = lStack_768;
    pcStack_40 = pcStack_760;
    lStack_38 = lStack_758;
    auVar118 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    if (sys::LAST_1 != -1) {
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_bc0 = auVar118;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,local_bc0,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar27._8_8_ = unaff_XMM15_Qb;
      auVar27._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar27,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      if (DAT_008437a8 == sys::LAPS) {
        local_d68._8_8_ = 0;
        local_d68._0_8_ = uVar56;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
        uVar56 = local_d68._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(char **)(DAT_008437a0 + lVar74 * 0x18) = "lookups";
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 7;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    qVar59 = local_d90;
    uVar56 = (local_d90 >> 6) + 0x8fff;
    pEVar48 = (Elf64_Ehdr *)((uVar56 >> 4) + 0x1800 & 0xfffffffffffff000);
    local_d50 = (Elf64_Ehdr *)0x4000000;
    if (pEVar48 < (Elf64_Ehdr *)0x4000000) {
      local_d50 = pEVar48;
    }
    local_d80 = (long *)(uVar56 >> 0xf);
    pEVar67 = (Elf64_Ehdr *)((ulong)local_d50 >> 0xc & 0xfffff);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_d90 >> 2;
    local_d38 = (long)param_4 * 0x200000 +
                (SUB168(auVar21 * ZEXT816(0x4924924924924925),8) & 0xfffffffffffffffe) * 8 +
                0x1000000 + (long)param_4 * 0x1000 * (long)local_d80;
    sys::LAST_1 = auVar118._8_4_;
    sys::LAST_0 = auVar118._0_8_;
    local_d68._0_8_ = uVar56;
    local_d28 = sys::anon();
    pEVar48 = (Elf64_Ehdr *)(local_d48 / 6 + (ulong)local_dc0 / 10);
    local_d48 = (long)param_4 * 0x200000 + (long)pEVar48 * 0x10 + 0x1000000 +
                (long)param_4 * 0x1000 * (long)pEVar67;
    local_d88 = pEVar67;
    local_cd0 = sys::anon();
    uVar56 = qVar59 / 0x28;
    if ((uVar56 & 0x7ffffff00000000) == 0) {
      uVar56 = (uVar56 & 0xffffffff) / ((ulong)param_4 & 0xffffffff);
    }
    else {
      uVar56 = uVar56 / (ulong)param_4;
    }
    local_cd8 = (ulong)pEVar85 / 86400000;
    local_ce0 = (ulong)pEVar85 % 86400000;
    lVar74 = local_ce0 + 0x36;
    pEVar67 = local_d58 + 0x14996f;
    lStack_c70 = __rustc[45371133cddedda4]::__rust_alloc((long)param_4 * 0x7a0,8);
    if (lStack_c70 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,(long)param_4 * 0x7a0);
    }
    local_d68._0_8_ = local_d68._0_8_ & 0xffffffffffff8000;
    local_ce8 = uVar56 * 2 + 0x10000;
    local_d20 = (long)(pEVar67->e_ident_pad + lVar74) / 86400000;
    local_c68 = (ulong *)0x0;
    sys::ANON_TINY_0 = 1;
    lVar74 = 0;
    local_c78 = param_4;
    do {
      puVar89 = local_c68;
      puVar52 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x600,8);
      uVar35 = _UNK_002032f8;
      uVar34 = _UNK_002032f0;
      uVar58 = _UNK_002032e8;
      uVar57 = _DAT_002032e0;
      if (puVar52 == (undefined8 *)0x0) goto LAB_0072936d;
      puVar52[8] = _DAT_002032e0;
      puVar52[9] = uVar58;
      puVar52[10] = uVar34;
      puVar52[0xb] = uVar35;
      uVar43 = _UNK_00205bf8;
      uVar42 = _UNK_00205bf0;
      uVar41 = _UNK_00205be8;
      uVar40 = _UNK_00205be0;
      uVar39 = _UNK_00205bd8;
      uVar38 = _UNK_00205bd0;
      uVar37 = _UNK_00205bc8;
      uVar36 = _DAT_00205bc0;
      *puVar52 = _DAT_00205bc0;
      puVar52[1] = uVar37;
      puVar52[2] = uVar38;
      puVar52[3] = uVar39;
      puVar52[4] = uVar40;
      puVar52[5] = uVar41;
      puVar52[6] = uVar42;
      puVar52[7] = uVar43;
      puVar52[0x14] = uVar57;
      puVar52[0x15] = uVar58;
      puVar52[0x16] = uVar34;
      puVar52[0x17] = uVar35;
      puVar52[0xc] = uVar36;
      puVar52[0xd] = uVar37;
      puVar52[0xe] = uVar38;
      puVar52[0xf] = uVar39;
      puVar52[0x10] = uVar40;
      puVar52[0x11] = uVar41;
      puVar52[0x12] = uVar42;
      puVar52[0x13] = uVar43;
      puVar52[0x20] = uVar57;
      puVar52[0x21] = uVar58;
      puVar52[0x22] = uVar34;
      puVar52[0x23] = uVar35;
      puVar52[0x18] = uVar36;
      puVar52[0x19] = uVar37;
      puVar52[0x1a] = uVar38;
      puVar52[0x1b] = uVar39;
      puVar52[0x1c] = uVar40;
      puVar52[0x1d] = uVar41;
      puVar52[0x1e] = uVar42;
      puVar52[0x1f] = uVar43;
      puVar52[0x2c] = uVar57;
      puVar52[0x2d] = uVar58;
      puVar52[0x2e] = uVar34;
      puVar52[0x2f] = uVar35;
      puVar52[0x24] = uVar36;
      puVar52[0x25] = uVar37;
      puVar52[0x26] = uVar38;
      puVar52[0x27] = uVar39;
      puVar52[0x28] = uVar40;
      puVar52[0x29] = uVar41;
      puVar52[0x2a] = uVar42;
      puVar52[0x2b] = uVar43;
      puVar52[0x38] = uVar57;
      puVar52[0x39] = uVar58;
      puVar52[0x3a] = uVar34;
      puVar52[0x3b] = uVar35;
      puVar52[0x30] = uVar36;
      puVar52[0x31] = uVar37;
      puVar52[0x32] = uVar38;
      puVar52[0x33] = uVar39;
      puVar52[0x34] = uVar40;
      puVar52[0x35] = uVar41;
      puVar52[0x36] = uVar42;
      puVar52[0x37] = uVar43;
      puVar52[0x44] = uVar57;
      puVar52[0x45] = uVar58;
      puVar52[0x46] = uVar34;
      puVar52[0x47] = uVar35;
      puVar52[0x3c] = uVar36;
      puVar52[0x3d] = uVar37;
      puVar52[0x3e] = uVar38;
      puVar52[0x3f] = uVar39;
      puVar52[0x40] = uVar40;
      puVar52[0x41] = uVar41;
      puVar52[0x42] = uVar42;
      puVar52[0x43] = uVar43;
      puVar52[0x50] = uVar57;
      puVar52[0x51] = uVar58;
      puVar52[0x52] = uVar34;
      puVar52[0x53] = uVar35;
      puVar52[0x48] = uVar36;
      puVar52[0x49] = uVar37;
      puVar52[0x4a] = uVar38;
      puVar52[0x4b] = uVar39;
      puVar52[0x4c] = uVar40;
      puVar52[0x4d] = uVar41;
      puVar52[0x4e] = uVar42;
      puVar52[0x4f] = uVar43;
      puVar52[0x5c] = uVar57;
      puVar52[0x5d] = uVar58;
      puVar52[0x5e] = uVar34;
      puVar52[0x5f] = uVar35;
      puVar52[0x54] = uVar36;
      puVar52[0x55] = uVar37;
      puVar52[0x56] = uVar38;
      puVar52[0x57] = uVar39;
      puVar52[0x58] = uVar40;
      puVar52[0x59] = uVar41;
      puVar52[0x5a] = uVar42;
      puVar52[0x5b] = uVar43;
      puVar52[0x68] = uVar57;
      puVar52[0x69] = uVar58;
      puVar52[0x6a] = uVar34;
      puVar52[0x6b] = uVar35;
      puVar52[0x60] = uVar36;
      puVar52[0x61] = uVar37;
      puVar52[0x62] = uVar38;
      puVar52[99] = uVar39;
      puVar52[100] = uVar40;
      puVar52[0x65] = uVar41;
      puVar52[0x66] = uVar42;
      puVar52[0x67] = uVar43;
      puVar52[0x74] = uVar57;
      puVar52[0x75] = uVar58;
      puVar52[0x76] = uVar34;
      puVar52[0x77] = uVar35;
      puVar52[0x6c] = uVar36;
      puVar52[0x6d] = uVar37;
      puVar52[0x6e] = uVar38;
      puVar52[0x6f] = uVar39;
      puVar52[0x70] = uVar40;
      puVar52[0x71] = uVar41;
      puVar52[0x72] = uVar42;
      puVar52[0x73] = uVar43;
      puVar52[0x80] = uVar57;
      puVar52[0x81] = uVar58;
      puVar52[0x82] = uVar34;
      puVar52[0x83] = uVar35;
      puVar52[0x78] = uVar36;
      puVar52[0x79] = uVar37;
      puVar52[0x7a] = uVar38;
      puVar52[0x7b] = uVar39;
      puVar52[0x7c] = uVar40;
      puVar52[0x7d] = uVar41;
      puVar52[0x7e] = uVar42;
      puVar52[0x7f] = uVar43;
      puVar52[0x8c] = uVar57;
      puVar52[0x8d] = uVar58;
      puVar52[0x8e] = uVar34;
      puVar52[0x8f] = uVar35;
      puVar52[0x84] = uVar36;
      puVar52[0x85] = uVar37;
      puVar52[0x86] = uVar38;
      puVar52[0x87] = uVar39;
      puVar52[0x88] = uVar40;
      puVar52[0x89] = uVar41;
      puVar52[0x8a] = uVar42;
      puVar52[0x8b] = uVar43;
      puVar52[0x98] = uVar57;
      puVar52[0x99] = uVar58;
      puVar52[0x9a] = uVar34;
      puVar52[0x9b] = uVar35;
      puVar52[0x90] = uVar36;
      puVar52[0x91] = uVar37;
      puVar52[0x92] = uVar38;
      puVar52[0x93] = uVar39;
      puVar52[0x94] = uVar40;
      puVar52[0x95] = uVar41;
      puVar52[0x96] = uVar42;
      puVar52[0x97] = uVar43;
      puVar52[0xa4] = uVar57;
      puVar52[0xa5] = uVar58;
      puVar52[0xa6] = uVar34;
      puVar52[0xa7] = uVar35;
      puVar52[0x9c] = uVar36;
      puVar52[0x9d] = uVar37;
      puVar52[0x9e] = uVar38;
      puVar52[0x9f] = uVar39;
      puVar52[0xa0] = uVar40;
      puVar52[0xa1] = uVar41;
      puVar52[0xa2] = uVar42;
      puVar52[0xa3] = uVar43;
      puVar52[0xb0] = uVar57;
      puVar52[0xb1] = uVar58;
      puVar52[0xb2] = uVar34;
      puVar52[0xb3] = uVar35;
      puVar52[0xa8] = uVar36;
      puVar52[0xa9] = uVar37;
      puVar52[0xaa] = uVar38;
      puVar52[0xab] = uVar39;
      puVar52[0xac] = uVar40;
      puVar52[0xad] = uVar41;
      puVar52[0xae] = uVar42;
      puVar52[0xaf] = uVar43;
      puVar52[0xbc] = uVar57;
      puVar52[0xbd] = uVar58;
      puVar52[0xbe] = uVar34;
      puVar52[0xbf] = uVar35;
      puVar52[0xb4] = uVar36;
      puVar52[0xb5] = uVar37;
      puVar52[0xb6] = uVar38;
      puVar52[0xb7] = uVar39;
      puVar52[0xb8] = uVar40;
      puVar52[0xb9] = uVar41;
      puVar52[0xba] = uVar42;
      puVar52[0xbb] = uVar43;
      puVar53 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x600,8);
      uVar35 = _UNK_002032f8;
      uVar34 = _UNK_002032f0;
      uVar58 = _UNK_002032e8;
      uVar57 = _DAT_002032e0;
      if (puVar53 == (undefined8 *)0x0) goto LAB_0072936d;
      puVar53[8] = _DAT_002032e0;
      puVar53[9] = uVar58;
      puVar53[10] = uVar34;
      puVar53[0xb] = uVar35;
      uVar43 = _UNK_00205bf8;
      uVar42 = _UNK_00205bf0;
      uVar41 = _UNK_00205be8;
      uVar40 = _UNK_00205be0;
      uVar39 = _UNK_00205bd8;
      uVar38 = _UNK_00205bd0;
      uVar37 = _UNK_00205bc8;
      uVar36 = _DAT_00205bc0;
      *puVar53 = _DAT_00205bc0;
      puVar53[1] = uVar37;
      puVar53[2] = uVar38;
      puVar53[3] = uVar39;
      puVar53[4] = uVar40;
      puVar53[5] = uVar41;
      puVar53[6] = uVar42;
      puVar53[7] = uVar43;
      puVar53[0x14] = uVar57;
      puVar53[0x15] = uVar58;
      puVar53[0x16] = uVar34;
      puVar53[0x17] = uVar35;
      puVar53[0xc] = uVar36;
      puVar53[0xd] = uVar37;
      puVar53[0xe] = uVar38;
      puVar53[0xf] = uVar39;
      puVar53[0x10] = uVar40;
      puVar53[0x11] = uVar41;
      puVar53[0x12] = uVar42;
      puVar53[0x13] = uVar43;
      puVar53[0x20] = uVar57;
      puVar53[0x21] = uVar58;
      puVar53[0x22] = uVar34;
      puVar53[0x23] = uVar35;
      puVar53[0x18] = uVar36;
      puVar53[0x19] = uVar37;
      puVar53[0x1a] = uVar38;
      puVar53[0x1b] = uVar39;
      puVar53[0x1c] = uVar40;
      puVar53[0x1d] = uVar41;
      puVar53[0x1e] = uVar42;
      puVar53[0x1f] = uVar43;
      puVar53[0x2c] = uVar57;
      puVar53[0x2d] = uVar58;
      puVar53[0x2e] = uVar34;
      puVar53[0x2f] = uVar35;
      puVar53[0x24] = uVar36;
      puVar53[0x25] = uVar37;
      puVar53[0x26] = uVar38;
      puVar53[0x27] = uVar39;
      puVar53[0x28] = uVar40;
      puVar53[0x29] = uVar41;
      puVar53[0x2a] = uVar42;
      puVar53[0x2b] = uVar43;
      puVar53[0x38] = uVar57;
      puVar53[0x39] = uVar58;
      puVar53[0x3a] = uVar34;
      puVar53[0x3b] = uVar35;
      puVar53[0x30] = uVar36;
      puVar53[0x31] = uVar37;
      puVar53[0x32] = uVar38;
      puVar53[0x33] = uVar39;
      puVar53[0x34] = uVar40;
      puVar53[0x35] = uVar41;
      puVar53[0x36] = uVar42;
      puVar53[0x37] = uVar43;
      puVar53[0x44] = uVar57;
      puVar53[0x45] = uVar58;
      puVar53[0x46] = uVar34;
      puVar53[0x47] = uVar35;
      puVar53[0x3c] = uVar36;
      puVar53[0x3d] = uVar37;
      puVar53[0x3e] = uVar38;
      puVar53[0x3f] = uVar39;
      puVar53[0x40] = uVar40;
      puVar53[0x41] = uVar41;
      puVar53[0x42] = uVar42;
      puVar53[0x43] = uVar43;
      puVar53[0x50] = uVar57;
      puVar53[0x51] = uVar58;
      puVar53[0x52] = uVar34;
      puVar53[0x53] = uVar35;
      puVar53[0x48] = uVar36;
      puVar53[0x49] = uVar37;
      puVar53[0x4a] = uVar38;
      puVar53[0x4b] = uVar39;
      puVar53[0x4c] = uVar40;
      puVar53[0x4d] = uVar41;
      puVar53[0x4e] = uVar42;
      puVar53[0x4f] = uVar43;
      puVar53[0x5c] = uVar57;
      puVar53[0x5d] = uVar58;
      puVar53[0x5e] = uVar34;
      puVar53[0x5f] = uVar35;
      puVar53[0x54] = uVar36;
      puVar53[0x55] = uVar37;
      puVar53[0x56] = uVar38;
      puVar53[0x57] = uVar39;
      puVar53[0x58] = uVar40;
      puVar53[0x59] = uVar41;
      puVar53[0x5a] = uVar42;
      puVar53[0x5b] = uVar43;
      puVar53[0x68] = uVar57;
      puVar53[0x69] = uVar58;
      puVar53[0x6a] = uVar34;
      puVar53[0x6b] = uVar35;
      puVar53[0x60] = uVar36;
      puVar53[0x61] = uVar37;
      puVar53[0x62] = uVar38;
      puVar53[99] = uVar39;
      puVar53[100] = uVar40;
      puVar53[0x65] = uVar41;
      puVar53[0x66] = uVar42;
      puVar53[0x67] = uVar43;
      puVar53[0x74] = uVar57;
      puVar53[0x75] = uVar58;
      puVar53[0x76] = uVar34;
      puVar53[0x77] = uVar35;
      puVar53[0x6c] = uVar36;
      puVar53[0x6d] = uVar37;
      puVar53[0x6e] = uVar38;
      puVar53[0x6f] = uVar39;
      puVar53[0x70] = uVar40;
      puVar53[0x71] = uVar41;
      puVar53[0x72] = uVar42;
      puVar53[0x73] = uVar43;
      puVar53[0x80] = uVar57;
      puVar53[0x81] = uVar58;
      puVar53[0x82] = uVar34;
      puVar53[0x83] = uVar35;
      puVar53[0x78] = uVar36;
      puVar53[0x79] = uVar37;
      puVar53[0x7a] = uVar38;
      puVar53[0x7b] = uVar39;
      puVar53[0x7c] = uVar40;
      puVar53[0x7d] = uVar41;
      puVar53[0x7e] = uVar42;
      puVar53[0x7f] = uVar43;
      puVar53[0x8c] = uVar57;
      puVar53[0x8d] = uVar58;
      puVar53[0x8e] = uVar34;
      puVar53[0x8f] = uVar35;
      puVar53[0x84] = uVar36;
      puVar53[0x85] = uVar37;
      puVar53[0x86] = uVar38;
      puVar53[0x87] = uVar39;
      puVar53[0x88] = uVar40;
      puVar53[0x89] = uVar41;
      puVar53[0x8a] = uVar42;
      puVar53[0x8b] = uVar43;
      puVar53[0x98] = uVar57;
      puVar53[0x99] = uVar58;
      puVar53[0x9a] = uVar34;
      puVar53[0x9b] = uVar35;
      puVar53[0x90] = uVar36;
      puVar53[0x91] = uVar37;
      puVar53[0x92] = uVar38;
      puVar53[0x93] = uVar39;
      puVar53[0x94] = uVar40;
      puVar53[0x95] = uVar41;
      puVar53[0x96] = uVar42;
      puVar53[0x97] = uVar43;
      puVar53[0xa4] = uVar57;
      puVar53[0xa5] = uVar58;
      puVar53[0xa6] = uVar34;
      puVar53[0xa7] = uVar35;
      puVar53[0x9c] = uVar36;
      puVar53[0x9d] = uVar37;
      puVar53[0x9e] = uVar38;
      puVar53[0x9f] = uVar39;
      puVar53[0xa0] = uVar40;
      puVar53[0xa1] = uVar41;
      puVar53[0xa2] = uVar42;
      puVar53[0xa3] = uVar43;
      puVar53[0xb0] = uVar57;
      puVar53[0xb1] = uVar58;
      puVar53[0xb2] = uVar34;
      puVar53[0xb3] = uVar35;
      puVar53[0xa8] = uVar36;
      puVar53[0xa9] = uVar37;
      puVar53[0xaa] = uVar38;
      puVar53[0xab] = uVar39;
      puVar53[0xac] = uVar40;
      puVar53[0xad] = uVar41;
      puVar53[0xae] = uVar42;
      puVar53[0xaf] = uVar43;
      puVar53[0xbc] = uVar57;
      puVar53[0xbd] = uVar58;
      puVar53[0xbe] = uVar34;
      puVar53[0xbf] = uVar35;
      puVar53[0xb4] = uVar36;
      puVar53[0xb5] = uVar37;
      puVar53[0xb6] = uVar38;
      puVar53[0xb7] = uVar39;
      puVar53[0xb8] = uVar40;
      puVar53[0xb9] = uVar41;
      puVar53[0xba] = uVar42;
      puVar53[0xbb] = uVar43;
      <pipeline[509596c7b52975b2]::core::Core>::new(&local_7a8,0,1,0x10,0,0);
      local_3e8 = (Elf64_Ehdr *)0x0;
      qStack_3e0 = 0;
      puStack_3d8 = (undefined8 *)0x0;
      ppuStack_3d0 = (ulong **)0x0;
      local_428._32_8_ = (Elf64_Ehdr *)0x0;
      local_428._40_8_ = (Elf64_Ehdr *)0x0;
      pEStack_3f8 = (Elf64_Ehdr *)0x0;
      pEStack_3f0 = (Elf64_Ehdr *)0x0;
      if (puVar89 == local_c78) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::TState>>>
        ::grow_one(&local_c78);
      }
      lVar88 = lStack_c70;
      *(undefined8 *)(lStack_c70 + lVar74) = 0;
      *(undefined8 *)(lStack_c70 + 8 + lVar74) = 0x40;
      auVar115 = ZEXT816(0);
      *(undefined1 (*) [16])(lStack_c70 + 0x10 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x20 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x28 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x38 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x40 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x50 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x58 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x68 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x70 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x80 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x88 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x98 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0xa0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0xb0 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0xb8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 200 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0xd0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0xe0 + lVar74) = 0x40;
      *(undefined1 (*) [16])(lStack_c70 + 0xe8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0xf8 + lVar74) = 8;
      *(undefined8 *)(lStack_c70 + 0x140 + lVar74) = 0;
      puVar2 = (undefined8 *)(lStack_c70 + 0x119 + lVar74);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = (undefined8 *)(lStack_c70 + 0x100 + lVar74);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)(lStack_c70 + 0x148 + lVar74) = 0x40;
      *(undefined1 (*) [16])(lStack_c70 + 0x150 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x160 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x168 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x178 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x180 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 400 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x198 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x1a8 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x1b0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x1c0 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x1c8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x1d8 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x1e0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x1f0 + lVar74) = 0x40;
      *(undefined8 *)(lStack_c70 + 0x230 + lVar74) = 0;
      puVar2 = (undefined8 *)(lStack_c70 + 0x209 + lVar74);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar89 = (ulong *)((long)puVar89 + 1);
      puVar2 = (undefined8 *)(lStack_c70 + 0x1f8 + lVar74);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)(lStack_c70 + 0x238 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x240 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x250 + lVar74) = 1;
      *(undefined1 (*) [16])(lStack_c70 + 600 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x268 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x270 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x280 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x288 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x298 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x2a0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x2b0 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x2b8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x2c8 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x2d0 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x2e0 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x2e8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x2f8 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x300 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x310 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x318 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x328 + lVar74) = 8;
      *(undefined8 *)(lStack_c70 + 0x330 + lVar74) = 0;
      *(undefined8 *)(lStack_c70 + 0x338 + lVar74) = 0x40;
      *(undefined8 **)(lStack_c70 + 0x340 + lVar74) = puVar52;
      *(undefined8 *)(lStack_c70 + 0x348 + lVar74) = 0x40;
      *(undefined8 *)(lStack_c70 + 0x350 + lVar74) = 0x40;
      *(undefined8 **)(lStack_c70 + 0x358 + lVar74) = puVar53;
      *(undefined8 *)(lStack_c70 + 0x360 + lVar74) = 0x40;
      *(undefined8 *)(lStack_c70 + 0x368 + lVar74) = 0;
      *(undefined8 *)(lStack_c70 + 0x370 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x378 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x388 + lVar74) = 8;
      *(undefined1 (*) [16])(lStack_c70 + 0x390 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x3a0 + lVar74) = 4;
      *(undefined1 (*) [16])(lStack_c70 + 0x3a8 + lVar74) = auVar115;
      *(undefined8 *)(lStack_c70 + 0x3b8 + lVar74) = 4;
      *(undefined8 *)(lStack_c70 + 0x3c0 + lVar74) = 0;
      (*(code *)PTR_memcpy_00841de0)(lStack_c70 + 0x3c8 + lVar74,&local_7a8,0x348);
      *(undefined8 *)(lVar88 + 0x710 + lVar74) = 8;
      puVar52 = (undefined8 *)(lVar88 + 0x738 + lVar74);
      *puVar52 = 0;
      puVar52[1] = 0;
      puVar52[2] = 0;
      puVar52[3] = 0;
      puVar52 = (undefined8 *)(lVar88 + 0x718 + lVar74);
      *puVar52 = 0;
      puVar52[1] = 0;
      puVar52[2] = 0;
      puVar52[3] = 0;
      *(undefined8 *)(lVar88 + 0x758 + lVar74) = 0;
      puVar52 = (undefined8 *)(lVar88 + 0x760 + lVar74);
      *puVar52 = local_428._32_8_;
      puVar52[1] = local_428._40_8_;
      puVar52[2] = pEStack_3f8;
      puVar52[3] = pEStack_3f0;
      puVar52 = (undefined8 *)(lVar88 + 0x780 + lVar74);
      *puVar52 = local_3e8;
      puVar52[1] = qStack_3e0;
      puVar52[2] = puStack_3d8;
      puVar52[3] = ppuStack_3d0;
      lVar74 = lVar74 + 0x7a0;
      local_c68 = puVar89;
    } while (param_4 != puVar89);
    sys::ANON_TINY_0 = 0;
    local_cf0 = local_cb8;
    local_cf8 = (Elf64_Ehdr *)local_9c8._0_8_;
    uVar47 = ckix_mode();
    pEVar67 = local_d50;
    local_d00._0_2_ = (short)uVar47;
    local_d00._2_2_ = (short)((uint)uVar47 >> 0x10);
    pEStack_3f8 = local_b58;
    local_428._32_8_ = local_b68;
    local_428._40_8_ = pEStack_b60;
    apEStack_798[0] = local_920;
    local_7a8 = local_930._0_4_;
    uStack_7a4 = local_930._4_2_;
    uStack_7a2 = local_930._6_2_;
    uStack_7a0 = local_930._8_2_;
    uStack_79e = local_930._10_2_;
    uStack_79c = local_930[0xc];
    uStack_79b = local_930[0xd];
    uStack_79a = local_930[0xe];
    uStack_799 = local_930[0xf];
    uVar57 = sys::anon((long)local_d50 * 2);
    uVar56 = (ulong)(((uint)((ulong)pEVar67 >> 3) & 0x1fffffff) + 0x200000 & 0x1e00000);
    if (sys::Z_END_0 == 0) {
LAB_007289c7:
      pvVar91 = (void *)sys::anon(uVar56);
      madvise(pvVar91,uVar56,0xf);
    }
    else {
      uVar76 = sys::Z_NEXT;
      do {
        pvVar91 = (void *)(uVar76 + 0x1fffff & 0xffffffffffe00000);
        if (sys::Z_END_0 < (long)pvVar91 + uVar56) goto LAB_007289c7;
        LOCK();
        bVar94 = uVar76 == sys::Z_NEXT;
        if (bVar94) {
          sys::Z_NEXT = (long)pvVar91 + uVar56;
        }
        else {
          uVar76 = sys::Z_NEXT;
        }
        UNLOCK();
      } while (!bVar94);
      if (pvVar91 == (void *)0x0) goto LAB_007289c7;
    }
    local_988 = sys::anon((long)(pEVar67->e_ident_magic_str +
                                (long)(local_d88->e_ident_magic_str + -2)) * 4 + 0x20);
    pEVar67 = (Elf64_Ehdr *)local_9c8._0_8_;
    if ((Elf64_Ehdr *)local_9c8._0_8_ == (Elf64_Ehdr *)0x0) {
      pEVar67 = pEVar48;
    }
    local_990 = sys::anon((long)pEVar67 * 0x10 + 0x400);
    pEVar67 = (Elf64_Ehdr *)local_9c8._0_8_;
    if ((Elf64_Ehdr *)local_9c8._0_8_ == (Elf64_Ehdr *)0x0) {
      pEVar67 = pEVar48;
    }
    lVar74 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x4000,8);
    if (lVar74 == 0) goto LAB_00729432;
    uVar56 = (long)local_d80 * 0x24 + 0x1ffffcU & 0xffffffffffe00000;
    local_998 = uVar57;
    if (sys::Z_END_0 == 0) {
LAB_00728ab7:
      pvVar86 = (void *)sys::anon(uVar56);
      madvise(pvVar86,uVar56,0xf);
    }
    else {
      uVar76 = sys::Z_NEXT;
      do {
        pvVar86 = (void *)(uVar76 + 0x1fffff & 0xffffffffffe00000);
        if (sys::Z_END_0 < (long)pvVar86 + uVar56) goto LAB_00728ab7;
        LOCK();
        bVar94 = uVar76 == sys::Z_NEXT;
        if (bVar94) {
          sys::Z_NEXT = (long)pvVar86 + uVar56;
        }
        else {
          uVar76 = sys::Z_NEXT;
        }
        UNLOCK();
      } while (!bVar94);
      if (pvVar86 == (void *)0x0) goto LAB_00728ab7;
    }
    pEVar48 = local_d58 + 0x903210;
    if (*(char *)(in_FS_OFFSET + -0x38) == '\x01') {
      auVar115 = *(undefined1 (*) [16])(in_FS_OFFSET + -0x48);
    }
    else {
      auVar115 = std[c60ef17cbf7de79f]::sys::random::linux::hashmap_random_keys();
      *(long *)(in_FS_OFFSET + -0x40) = auVar115._8_8_;
      *(undefined1 *)(in_FS_OFFSET + -0x38) = 1;
    }
    local_c80[0x3b] = param_4;
    *(char *)((long)local_c80 + 0x2f4) = (char)local_d74;
    local_c80[0x3c] = local_d18;
    local_c80[0x3d] = local_d58;
    local_c80[0x3e] = pEVar85 + -0x903210;
    local_c80[0x3f] = pEVar48;
    local_c80[0x40] = pEVar85 + -0x149970;
    local_c80[0x41] = local_ce0;
    *(int *)(local_c80 + 0x5e) = (int)local_cd8;
    local_c80[0x42] = local_d20;
    local_c80[0x43] = local_b18;
    local_c80[0x44] = local_ad8._0_8_;
    local_c80[0x45] = local_cf0;
    local_c80[0x46] = local_cf8;
    *(bool *)((long)local_c80 + 0x2f5) = local_d00 == 2;
    local_c80[0x47] = local_d68._0_8_;
    local_c80[0x48] = local_d50;
    *local_c80 = local_d70;
    local_c80[1] = local_88;
    local_c80[2] = uStack_80;
    local_c80[5] = lStack_50;
    local_c80[3] = lStack_60;
    local_c80[4] = pcStack_58;
    local_c80[0x49] = local_d30;
    local_c80[8] = local_68;
    local_c80[6] = pEStack_78;
    local_c80[7] = pEStack_70;
    local_c80[0xb] = lStack_38;
    local_c80[9] = lStack_48;
    local_c80[10] = pcStack_40;
    local_c80[0x4a] = local_da8._0_8_;
    local_c80[0xe] = pEStack_3f8;
    local_c80[0xc] = local_428._32_8_;
    local_c80[0xd] = local_428._40_8_;
    local_c80[0x11] = apEStack_798[0];
    local_c80[0xf] = CONCAT26(uStack_7a2,CONCAT24(uStack_7a4,local_7a8));
    local_c80[0x10] =
         CONCAT17(uStack_799,
                  CONCAT16(uStack_79a,
                           CONCAT15(uStack_79b,CONCAT14(uStack_79c,CONCAT22(uStack_79e,uStack_7a0)))
                          ));
    local_c80[0x4b] = 0;
    local_c80[0x4c] = local_d90;
    local_c80[0x4d] = local_ce8;
    local_c80[0x4e] = local_d80;
    local_c80[0x4f] = local_d88;
    local_c80[0x50] = local_d28;
    local_c80[0x51] = local_d38;
    local_c80[0x52] = 0;
    local_c80[0x53] = local_cd0;
    local_c80[0x54] = local_d48;
    local_c80[0x55] = 0;
    local_c80[0x14] = local_c68;
    local_c80[0x12] = local_c78;
    local_c80[0x13] = lStack_c70;
    local_c80[0x56] = local_998;
    local_c80[0x57] = pvVar91;
    local_c80[0x58] = local_988;
    local_c80[0x59] = local_990;
    local_c80[0x5a] = pEVar67 + 1;
    uVar34 = _UNK_00203258;
    uVar58 = _UNK_00203250;
    uVar57 = _UNK_00203248;
    local_c80[0x15] = _DAT_00203240;
    local_c80[0x16] = uVar57;
    local_c80[0x17] = uVar58;
    local_c80[0x18] = uVar34;
    local_c80[0x5b] = 0;
    local_c80[0x19] = lVar74;
    local_c80[0x1a] = 0x400;
    local_c80[0x1b] = 0x3ff;
    auVar116 = ZEXT816(0);
    *(undefined1 (*) [16])(local_c80 + 0x1c) = auVar116;
    local_c80[0x1e] = 4;
    *(undefined1 (*) [16])(local_c80 + 0x1f) = auVar116;
    local_c80[0x21] = 8;
    *(undefined1 (*) [16])(local_c80 + 0x22) = auVar116;
    local_c80[0x24] = 4;
    *(undefined1 (*) [16])(local_c80 + 0x25) = auVar116;
    local_c80[0x27] = 4;
    *(undefined1 (*) [16])(local_c80 + 0x28) = auVar116;
    local_c80[0x2a] = 1;
    local_c80[0x2b] = 0;
    local_c80[0x5c] = pvVar86;
    local_c80[0x2c] = 0;
    local_c80[0x2d] = 8;
    *(undefined1 (*) [16])(local_c80 + 0x2e) = auVar116;
    uVar34 = _UNK_00203278;
    uVar58 = _UNK_00203270;
    uVar57 = _UNK_00203268;
    local_c80[0x30] = _DAT_00203260;
    local_c80[0x31] = uVar57;
    local_c80[0x32] = uVar58;
    local_c80[0x33] = uVar34;
    uVar34 = _UNK_0020fa80;
    uVar58 = _UNK_0020fa78;
    uVar57 = _UNK_0020fa70;
    local_c80[0x35] = PTR_DAT_0020fa68;
    local_c80[0x36] = uVar57;
    local_c80[0x37] = uVar58;
    local_c80[0x38] = uVar34;
    *(long *)(in_FS_OFFSET + -0x48) = auVar115._0_8_ + 1;
    *(undefined1 (*) [16])(local_c80 + 0x39) = auVar115;
    local_c80[0x34] = 0;
    local_c80[0x5d] = 0;
    *(undefined1 *)((long)local_c80 + 0x2f6) = 0;
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>(&local_aa8)
    ;
    core[62e902411887be45]::ptr::drop_glue::
    <alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
              (&local_c00);
    if (local_cc8 == (Elf64_Ehdr *)0x0) {
      return;
    }
    pEVar48 = (Elf64_Ehdr *)local_d10._8_8_;
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || ((ulong)local_d10._8_8_ < sys::A_BASE_0)) ||
       (sys::A_END_0 <= (ulong)local_d10._8_8_)) goto LAB_00728f52;
    pEVar48 = (Elf64_Ehdr *)&DAT_00000010;
    if ((Elf64_Ehdr *)&DAT_00000010 < local_cc8) {
      pEVar48 = local_cc8;
    }
    puVar66 = (undefined1 *)((long)&pEVar48[-1].e_shstrndx + 1);
    lVar74 = 0x40 - LZCOUNT(puVar66);
    if ((undefined1 *)0xffff < puVar66) {
      cVar45 = sys::big_put(local_d10._8_8_,lVar74);
      if (cVar45 != '\0') {
        return;
      }
    }
    uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
    local_d58 = (Elf64_Ehdr *)local_d10._8_8_;
    goto LAB_00728f44;
  }
  local_d40 = param_4;
  <std[c60ef17cbf7de79f]::path::Path>::_join(&local_7a8,param_2,param_3,"manifest.json",0xd);
  pEVar48 = (Elf64_Ehdr *)
            CONCAT17(uStack_799,
                     CONCAT16(uStack_79a,
                              CONCAT15(uStack_79b,
                                       CONCAT14(uStack_79c,CONCAT22(uStack_79e,uStack_7a0)))));
  std[c60ef17cbf7de79f]::fs::read::inner(local_428 + 0x20,pEVar48,apEStack_798[0]);
  uVar56 = CONCAT26(uStack_7a2,CONCAT24(uStack_7a4,local_7a8));
  if (uVar56 != 0) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= pEVar48)) {
      free(pEVar48);
    }
    else {
      uVar76 = 0x10;
      if (0x10 < uVar56) {
        uVar76 = uVar56;
      }
      lVar74 = LZCOUNT(uVar76 - 1);
      lVar88 = 0x40 - lVar74;
      if ((uVar76 - 1 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
        if (lVar74 == 0) {
LAB_00729536:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar88,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
        pEVar48->e_ident_magic_num = (char)uVar56;
        pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
        pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
        pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
        pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
        pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
        pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
        pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
      }
    }
  }
  pEVar48 = pEStack_3f8;
  uVar58 = local_428._40_8_;
  uVar57 = local_428._32_8_;
  if ((Elf64_Ehdr *)local_428._32_8_ == (Elf64_Ehdr *)0xffffffffffffffff) {
LAB_007293fd:
                    /* WARNING: Subroutine does not return */
    sys::fallback("cannot read a lookup file",0x19);
  }
  auVar115 = manifest_ts(local_428._40_8_,pEStack_3f8,"\"window_start\"",0xe);
  uVar56 = auVar115._8_8_;
  auVar116 = manifest_ts(uVar58,pEVar48,"\"window_end\"",0xc);
  if (((auVar115._0_8_ & 1) == 0) || ((auVar116._0_8_ & 1) == 0)) {
LAB_0072933b:
                    /* WARNING: Subroutine does not return */
    sys::fallback(&DAT_00201d40,8);
  }
  local_d88 = (Elf64_Ehdr *)(auVar116._8_8_ - uVar56);
  local_cc0 = uVar56;
  if ((local_d88 == (Elf64_Ehdr *)0x0 || auVar116._8_8_ < (long)uVar56) ||
     (((long)uVar56 < 0x2932e000 || (0x7b98a000 < (long)local_d88)))) {
LAB_007291c5:
                    /* WARNING: Subroutine does not return */
    sys::fallback("window",6);
  }
  local_d58 = (Elf64_Ehdr *)uVar58;
  LOCK();
  sys::WORKERS_0 = 1;
  UNLOCK();
  local_d48 = uVar56 % 86400000;
  local_c60 = (long)(local_d88[0x14996f].e_ident_pad + local_d48 + 0x36) / 86400000;
  uVar47 = (undefined4)(uVar56 / 86400000);
  if (sys::SETUP_KP_0 == (ulong *)0x0) {
    puVar89 = (ulong *)((long)param_4 * 2);
    bVar94 = puVar89 < &DAT_00000010;
    puVar75 = (ulong *)&DAT_00000010;
  }
  else {
    bVar94 = sys::SETUP_KP_0 < &DAT_00000040;
    puVar75 = (ulong *)&DAT_00000040;
    puVar89 = sys::SETUP_KP_0;
  }
  if (bVar94) {
    puVar75 = puVar89;
  }
  puVar89 = (ulong *)&DAT_00000008;
  if (param_4 < &DAT_00000008) {
    puVar89 = param_4;
  }
  local_c00 = (Elf64_Ehdr *)0xffffffffffffffff;
  local_bc8 = '\0';
  local_c8[0] = 0;
  local_b0 = 0;
  lVar74 = (long)puVar75 * 0x38;
  local_c84 = uVar47;
  local_980 = local_d48;
  local_978 = puVar75;
  local_970 = puVar89;
  pEVar48 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar74,8);
  if (pEVar48 == (Elf64_Ehdr *)0x0) goto LAB_007293f0;
  uVar56 = (ulong)((uint)puVar75 & 7);
  if (&DAT_00000006 < (undefined1 *)((long)puVar75 + -1)) {
    uVar76 = 0;
    pEVar85 = pEVar48;
    do {
      pEVar85->e_ident_magic_num = 0xfe;
      pEVar85->e_ident_magic_str[0] = -1;
      pEVar85->e_ident_magic_str[1] = -1;
      pEVar85->e_ident_magic_str[2] = -1;
      pEVar85->e_ident_class = 0xff;
      pEVar85->e_ident_data = 0xff;
      pEVar85->e_ident_version = 0xff;
      pEVar85->e_ident_osabi = 0xff;
      *(undefined1 *)&pEVar85->e_flags = 0;
      pEVar85->e_phnum = 0xfffe;
      pEVar85->e_shentsize = 0xffff;
      pEVar85->e_shnum = 0xffff;
      pEVar85->e_shstrndx = 0xffff;
      *(undefined1 *)&pEVar85[1].e_shoff = 0;
      pEVar85[1].e_flags = 0xfffffffe;
      pEVar85[1].e_ehsize = 0xffff;
      pEVar85[1].e_phentsize = 0xffff;
      *(undefined1 *)&pEVar85[2].e_phoff = 0;
      pEVar85[2].e_shoff = 0xfffffffffffffffe;
      *(undefined1 *)&pEVar85[3].e_entry = 0;
      pEVar85[3].e_phoff = 0xfffffffffffffffe;
      *(undefined1 *)&pEVar85[4].e_type = 0;
      pEVar85[4].e_entry = 0xfffffffffffffffe;
      pEVar85[5].e_ident_abiversion = 0;
      pEVar85[5].e_type = 0xfffe;
      pEVar85[5].e_machine = 0xffff;
      pEVar85[5].e_version = 0xffffffff;
      pEVar85[6].e_ident_magic_num = 0;
      uVar76 = uVar76 + 8;
      pEVar85[6].e_ident_abiversion = 0xfe;
      pEVar85[6].e_ident_pad[0] = 0xff;
      pEVar85[6].e_ident_pad[1] = 0xff;
      pEVar85[6].e_ident_pad[2] = 0xff;
      pEVar85[6].e_ident_pad[3] = 0xff;
      pEVar85[6].e_ident_pad[4] = 0xff;
      pEVar85[6].e_ident_pad[5] = 0xff;
      pEVar85[6].e_ident_pad[6] = 0xff;
      *(undefined1 *)&pEVar85[6].e_phnum = 0;
      pEVar85 = pEVar85 + 7;
    } while (((uint)puVar75 & 0x78) != uVar76);
    if (uVar56 != 0) goto LAB_00723bd9;
  }
  else {
    uVar76 = 0;
LAB_00723bd9:
    lVar74 = 0;
    do {
      *(undefined8 *)(pEVar48->e_ident_magic_str + lVar74 + uVar76 * 0x38 + -1) = 0xfffffffffffffffe
      ;
      pEVar48->e_ident_pad[lVar74 + uVar76 * 0x38 + 0x27] = 0;
      lVar74 = lVar74 + 0x38;
    } while (uVar56 * 0x38 != lVar74);
  }
  local_bc0._0_8_ = (undefined1 *)0xffffffffffffffff;
  local_b90 = '\0';
  local_9f8 = 0;
  local_9e8 = '\0';
  lVar74 = (long)param_4 * 0x350;
  local_a10 = puVar75;
  local_a08 = pEVar48;
  local_a00 = puVar75;
  pEVar48 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar74,8);
  if (pEVar48 == (Elf64_Ehdr *)0x0) goto LAB_007293f0;
  uVar56 = (ulong)((uint)param_4 & 7);
  if (&DAT_00000007 < param_4) {
    uVar76 = 0;
    pEVar85 = pEVar48;
    do {
      pEVar85->e_ident_magic_num = 0xff;
      pEVar85->e_ident_magic_str[0] = -1;
      pEVar85->e_ident_magic_str[1] = -1;
      pEVar85->e_ident_magic_str[2] = -1;
      pEVar85->e_ident_class = 0xff;
      pEVar85->e_ident_data = 0xff;
      pEVar85->e_ident_version = 0xff;
      pEVar85->e_ident_osabi = 0xff;
      pEVar85[0xd].e_ident_abiversion = 0;
      pEVar85[0xd].e_type = 0xffff;
      pEVar85[0xd].e_machine = 0xffff;
      pEVar85[0xd].e_version = 0xffffffff;
      *(undefined1 *)&pEVar85[0x1a].e_entry = 0;
      pEVar85[0x1a].e_phoff = 0xffffffffffffffff;
      *(undefined1 *)&pEVar85[0x27].e_shoff = 0;
      pEVar85[0x27].e_flags = 0xffffffff;
      pEVar85[0x27].e_ehsize = 0xffff;
      pEVar85[0x27].e_phentsize = 0xffff;
      *(undefined1 *)&pEVar85[0x34].e_phnum = 0;
      pEVar85[0x35].e_ident_magic_num = 0xff;
      pEVar85[0x35].e_ident_magic_str[0] = -1;
      pEVar85[0x35].e_ident_magic_str[1] = -1;
      pEVar85[0x35].e_ident_magic_str[2] = -1;
      pEVar85[0x35].e_ident_class = 0xff;
      pEVar85[0x35].e_ident_data = 0xff;
      pEVar85[0x35].e_ident_version = 0xff;
      pEVar85[0x35].e_ident_osabi = 0xff;
      pEVar85[0x42].e_ident_abiversion = 0;
      pEVar85[0x42].e_type = 0xffff;
      pEVar85[0x42].e_machine = 0xffff;
      pEVar85[0x42].e_version = 0xffffffff;
      *(undefined1 *)&pEVar85[0x4f].e_entry = 0;
      pEVar85[0x4f].e_phoff = 0xffffffffffffffff;
      *(undefined1 *)&pEVar85[0x5c].e_shoff = 0;
      uVar76 = uVar76 + 8;
      pEVar85[0x5c].e_flags = 0xffffffff;
      pEVar85[0x5c].e_ehsize = 0xffff;
      pEVar85[0x5c].e_phentsize = 0xffff;
      *(undefined1 *)&pEVar85[0x69].e_phnum = 0;
      pEVar85 = pEVar85 + 0x6a;
    } while (((uint)param_4 & 0x18) != uVar76);
    if (uVar56 != 0) goto LAB_00723d35;
  }
  else {
    uVar76 = 0;
LAB_00723d35:
    lVar74 = 0;
    do {
      *(undefined8 *)((long)pEVar48 + lVar74 + uVar76 * 0x350) = 0xffffffffffffffff;
      *(undefined1 *)((long)pEVar48 + lVar74 + uVar76 * 0x350 + 0x348) = 0;
      lVar74 = lVar74 + 0x350;
    } while (uVar56 * 0x350 != lVar74);
  }
  local_7e8.e_ident_magic_num = 0;
  local_7e8.e_ident_magic_str[0] = '\0';
  local_7e8.e_ident_magic_str[1] = '\0';
  local_7e8.e_ident_magic_str[2] = '\0';
  local_7e8.e_ident_class = 0;
  local_7e8.e_ident_data = 0;
  local_7e8.e_ident_version = 0;
  local_7e8.e_ident_osabi = 0;
  local_7e8.e_entry._0_1_ = 0;
  lVar74 = (long)puVar89 * 0x38;
  local_c58 = param_4;
  local_c50 = pEVar48;
  local_c48 = param_4;
  pEVar48 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc(lVar74,8);
  puVar81 = local_d40;
  if (pEVar48 == (Elf64_Ehdr *)0x0) goto LAB_007293f0;
  uVar56 = (ulong)((uint)puVar89 & 7);
  local_d50 = (Elf64_Ehdr *)uVar57;
  if (&DAT_00000007 < param_4) {
    uVar76 = 0;
    pEVar85 = pEVar48;
    do {
      pEVar85->e_ident_magic_num = 0xff;
      pEVar85->e_ident_magic_str[0] = -1;
      pEVar85->e_ident_magic_str[1] = -1;
      pEVar85->e_ident_magic_str[2] = -1;
      pEVar85->e_ident_class = 0xff;
      pEVar85->e_ident_data = 0xff;
      pEVar85->e_ident_version = 0xff;
      pEVar85->e_ident_osabi = 0xff;
      *(undefined1 *)&pEVar85->e_flags = 0;
      pEVar85->e_phnum = 0xffff;
      pEVar85->e_shentsize = 0xffff;
      pEVar85->e_shnum = 0xffff;
      pEVar85->e_shstrndx = 0xffff;
      *(undefined1 *)&pEVar85[1].e_shoff = 0;
      pEVar85[1].e_flags = 0xffffffff;
      pEVar85[1].e_ehsize = 0xffff;
      pEVar85[1].e_phentsize = 0xffff;
      *(undefined1 *)&pEVar85[2].e_phoff = 0;
      pEVar85[2].e_shoff = 0xffffffffffffffff;
      *(undefined1 *)&pEVar85[3].e_entry = 0;
      pEVar85[3].e_phoff = 0xffffffffffffffff;
      *(undefined1 *)&pEVar85[4].e_type = 0;
      pEVar85[4].e_entry = 0xffffffffffffffff;
      pEVar85[5].e_ident_abiversion = 0;
      pEVar85[5].e_type = 0xffff;
      pEVar85[5].e_machine = 0xffff;
      pEVar85[5].e_version = 0xffffffff;
      pEVar85[6].e_ident_magic_num = 0;
      uVar76 = uVar76 + 8;
      pEVar85[6].e_ident_abiversion = 0xff;
      pEVar85[6].e_ident_pad[0] = 0xff;
      pEVar85[6].e_ident_pad[1] = 0xff;
      pEVar85[6].e_ident_pad[2] = 0xff;
      pEVar85[6].e_ident_pad[3] = 0xff;
      pEVar85[6].e_ident_pad[4] = 0xff;
      pEVar85[6].e_ident_pad[5] = 0xff;
      pEVar85[6].e_ident_pad[6] = 0xff;
      *(undefined1 *)&pEVar85[6].e_phnum = 0;
      pEVar85 = pEVar85 + 7;
    } while (((uint)puVar89 & 8) != uVar76);
    if (uVar56 != 0) goto LAB_00723e79;
  }
  else {
    uVar76 = 0;
LAB_00723e79:
    lVar74 = 0;
    do {
      *(undefined8 *)(pEVar48->e_ident_magic_str + lVar74 + uVar76 * 0x38 + -1) = 0xffffffffffffffff
      ;
      pEVar48->e_ident_pad[lVar74 + uVar76 * 0x38 + 0x27] = 0;
      lVar74 = lVar74 + 0x38;
    } while (uVar56 * 0x38 != lVar74);
  }
  local_968[0] = 0;
  local_968[1] = '\0';
  local_968[2] = '\0';
  local_968[3] = '\0';
  local_968[4] = 0;
  local_968[5] = 0;
  local_968[6] = 0;
  local_968[7] = 0;
  local_428[0] = 0;
  local_428[1] = '\0';
  local_428[2] = '\0';
  local_428[3] = '\0';
  local_428[4] = 0;
  local_428[5] = 0;
  local_428[6] = 0;
  local_428[7] = 0;
  local_428[0x18] = 0;
  local_7e8.e_phoff = 0xffffffffffffffff;
  local_7e8.e_phnum._0_1_ = 0;
  local_dab = 0;
  pEVar85 = (Elf64_Ehdr *)local_428;
  local_810 = &local_dab;
  pqVar60 = &local_7e8.e_phoff;
  local_800 = &local_7e8;
  local_958 = (char *)((long)puVar75 + 2);
  local_950 = (char *)((long)puVar75 + 3);
  local_948 = (char *)((long)puVar75 + 4);
  local_968[8] = 2;
  local_968[9] = 0;
  local_968[10] = 0;
  local_968[0xb] = 0;
  local_968[0xc] = 0;
  local_968[0xd] = 0;
  local_968[0xe] = 0;
  local_968[0xf] = 0;
  local_d68[0] = sys::SETUP_PARTS_0;
  local_9e0 = puVar89;
  local_9d8 = pEVar48;
  local_9d0 = puVar89;
  local_818 = pEVar85;
  local_808 = pqVar60;
  local_7f8 = (Elf64_Ehdr *)&local_970;
  local_7f0 = &local_9e0;
  if (sys::SETUP_PARTS_0 == '\0') {
    local_c38 = local_948 + (long)local_d40;
    local_af8 = 0;
    local_ae0 = '\0';
    pEVar48 = (Elf64_Ehdr *)&DAT_00000008;
    puVar89 = (ulong *)0x0;
    puVar81 = (ulong *)0x0;
    local_c40 = local_948;
LAB_00724050:
    puVar75 = local_d40;
    lVar74 = sys::POOL_N_0;
    local_aa8 = (Elf64_Ehdr *)&local_c00;
    local_a98 = local_d90;
    puStack_a90 = local_c8;
    local_a88 = &local_958;
    local_a80 = local_968 + 8;
    local_a78 = &local_978;
    local_a70 = &local_a10;
    local_a68 = &local_c40;
    local_a60 = &local_c58;
    local_a58 = &local_c60;
    local_a50 = &local_9f8;
    local_a48 = &local_980;
    local_a40 = &local_c84;
    local_a38 = &local_948;
    local_a30 = &local_af8;
    local_a28 = &local_c30;
    local_a20 = &local_950;
    local_a18 = local_bc0;
    local_938 = &local_aa8;
    local_b68 = (Elf64_Ehdr *)local_968;
    local_b58 = (Elf64_Ehdr *)&local_800;
    local_b48 = local_9c8;
    local_b40 = &local_daa;
    local_b38 = &local_cc0;
    local_b30 = &local_818;
    local_b20 = local_ad8;
    local_930._8_8_ = &local_7e8.e_entry;
    local_908 = local_428 + 0x18;
    local_900 = &local_da9;
    local_8f8 = &local_b68;
    local_8f0 = &local_940;
    local_8e8 = &local_c38;
    local_8e0 = &local_938;
    local_428._32_8_ = local_930;
    local_428._40_8_ = &local_7e8;
    pEStack_3f0 = (Elf64_Ehdr *)(local_ad8 + 0x28);
    qStack_3e0 = local_d90;
    ppuStack_3d0 = &local_d40;
    local_940 = 0;
    local_8d8 = (Elf64_Ehdr *)0xffffffffffffffff;
    local_878 = '\0';
    local_ad8[0] = 0;
    local_ad8[1] = '\0';
    local_ad8[2] = '\0';
    local_ad8[3] = '\0';
    local_ad8[4] = 0;
    local_ad8[5] = 0;
    local_ad8[6] = 0;
    local_ad8[7] = 0;
    local_ad8[0x28] = '\0';
    local_9c8._0_8_ = (Elf64_Ehdr *)0xffffffffffffffff;
    local_9a0 = 0;
    local_daa = 0;
    local_da9 = 0;
    ppEStack_3b0 = &local_8d8;
    LOCK();
    sys::WORKERS_0 = 1;
    UNLOCK();
    local_c30 = puVar89;
    local_c28 = pEVar48;
    local_c20 = puVar81;
    pEStack_b60 = (Elf64_Ehdr *)&local_970;
    local_b50 = &local_9e0;
    local_b28 = pqVar60;
    local_aa0 = param_2;
    local_930._0_8_ = local_b30;
    local_920 = local_b68;
    local_918 = (Elf64_Ehdr *)&local_970;
    local_910 = local_b58;
    pEStack_3f8 = pEVar85;
    local_3e8 = param_2;
    puStack_3d8 = local_a50;
    local_3c8 = local_a30;
    puStack_3c0 = local_b48;
    puStack_3b8 = local_b40;
    if (sys::POOL_N_0 == 0 || (ulong *)(sys::POOL_N_0 + 1) < local_d40) {
      uVar56 = *(ulong *)(in_FS_OFFSET + -0x30);
      if (uVar56 < 3) {
        if (uVar56 == 2) {
          if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
            lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            do {
              if (lVar74 == -1) {
LAB_00729165:
                <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
LAB_0072916a:
                core[62e902411887be45]::ptr::drop_glue::
                <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::File,core[62e902411887be45]::io::error::Error>>
                          (local_428 + 0x20);
                    /* WARNING: Subroutine does not return */
                sys::fallback("open input",10);
              }
              lVar88 = lVar74 + 1;
              LOCK();
              bVar94 = lVar74 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
              if (bVar94) {
                <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar88;
              }
              else {
                lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
              }
              UNLOCK();
            } while (!bVar94);
            *(long *)(in_FS_OFFSET + -0x28) = lVar88;
          }
          lVar74 = <std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
        }
        else {
          lVar74 = std[c60ef17cbf7de79f]::thread::current::init_current(uVar56);
        }
      }
      else {
        LOCK();
        plVar49 = (long *)(uVar56 - 0x10);
        lVar74 = *plVar49;
        *plVar49 = *plVar49 + 1;
        UNLOCK();
        if (*plVar49 == 0 || SCARRY8(lVar74,1) != *plVar49 < 0) {
LAB_007292d3:
                    /* WARNING: Does not return */
          pcVar65 = (code *)invalidInstructionException();
          (*pcVar65)();
        }
        lVar74 = uVar56 - 0x10;
      }
      plVar49 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x28,8);
      if (plVar49 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
      }
      *plVar49 = 1;
      plVar49[1] = 1;
      plVar49[2] = lVar74;
      plVar49[3] = 0;
      *(undefined1 *)(plVar49 + 4) = 0;
      if (&DAT_00000001 < puVar75) {
        puVar89 = (ulong *)&DAT_00000001;
        do {
          local_ca8[0] = (ulong *)0xffffffffffffffff;
          local_cb8 = (ulong *)0x0;
          local_c90 = 0;
          LOCK();
          lVar74 = *plVar49;
          *plVar49 = *plVar49 + 1;
          UNLOCK();
          if (*plVar49 == 0 || SCARRY8(lVar74,1) != *plVar49 < 0) goto LAB_007292d3;
          if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == 0) {
            uStack_7a0 = 0x535f;
            uStack_79e = 0x4154;
            uStack_79c = 0x43;
            uStack_79b = 0x4b;
            local_7a8 = 0x54535552;
            uStack_7a4 = 0x4d5f;
            uStack_7a2 = 0x4e49;
            uStack_79a = 0;
            uVar57 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
            auVar98[7] = uStack_799;
            auVar98._0_7_ = 0x4b434154535f;
            auVar98._8_8_ = 0;
            uVar58 = vptestmb_avx512vl(auVar98,auVar98);
            if ((byte)((char)((ushort)uVar57 >> 4) << 4 | (byte)uVar57 & (byte)uVar58 & 0xf) == 0xff
               ) {
              std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_b88,&local_7a8);
              pEVar48 = pEStack_b80;
              uVar56 = local_b88;
              ppuVar83 = (undefined **)pEStack_b80;
              if (local_b88 == 0xfffffffffffffffe) goto LAB_007247cb;
              if (local_b88 == 0xffffffffffffffff) goto LAB_007247e6;
              core[62e902411887be45]::str::converts::from_utf8(&local_7a8,pEStack_b80,local_b78);
              if ((local_7a8 == 1) || (apEStack_798[0] == (Elf64_Ehdr *)0x0)) {
LAB_00724a25:
                uVar76 = 0x200000;
              }
              else {
                pcVar28 = (char *)CONCAT17(uStack_799,
                                           CONCAT16(uStack_79a,
                                                    CONCAT15(uStack_79b,
                                                             CONCAT14(uStack_79c,
                                                                      CONCAT22(uStack_79e,uStack_7a0
                                                                              )))));
                if (apEStack_798[0] == (Elf64_Ehdr *)&DAT_00000001) {
                  cVar45 = *pcVar28;
                  if ((cVar45 == '+') || (cVar45 == '-')) goto LAB_00724a25;
                }
                else {
                  cVar45 = *pcVar28;
                }
                pEVar85 = (Elf64_Ehdr *)(ulong)(cVar45 == '+');
                if (0x10 < (ulong)((long)apEStack_798[0] - (long)pEVar85)) {
                  lVar74 = 0;
                  uVar76 = 0;
                  while( true ) {
                    if (lVar74 == (long)apEStack_798[0] + -(long)pEVar85) goto joined_r0x00724a39;
                    auVar3._8_8_ = 0;
                    auVar3._0_8_ = uVar76;
                    uVar54 = SUB168(auVar3 * ZEXT816(10),0);
                    if (SUB168(auVar3 * ZEXT816(10),8) != 0) break;
                    uVar72 = (byte)(pcVar28 + (long)pEVar85)[lVar74] - 0x30;
                    uVar76 = uVar54 + uVar72;
                    if ((9 < uVar72) || (lVar74 = lVar74 + 1, CARRY8(uVar54,(ulong)uVar72))) break;
                  }
                  goto LAB_00724a25;
                }
                if (apEStack_798[0] == pEVar85) {
                  uVar76 = 0;
                }
                else {
                  lVar74 = 0;
                  uVar76 = 0;
                  do {
                    uVar72 = (byte)(pcVar28 + (long)pEVar85)[lVar74] - 0x30;
                    if (9 < uVar72) {
                      uVar76 = 0x200000;
                      break;
                    }
                    uVar76 = (ulong)uVar72 + uVar76 * 10;
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != (long)apEStack_798[0] + -(long)pEVar85);
                }
              }
joined_r0x00724a39:
              if (uVar56 != 0) {
                if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
                   (sys::A_END_0 <= pEVar48)) {
                  free(pEVar48);
                }
                else {
                  local_da8._0_8_ = uVar76;
                  if (uVar56 < 0x11) {
                    uVar56 = 0x10;
                  }
                  lVar74 = 0x40 - LZCOUNT(uVar56 - 1);
                  if ((uVar56 - 1 < 0x10000) ||
                     (cVar45 = sys::big_put(pEVar48,lVar74), cVar45 == '\0')) {
                    uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
                    pEVar48->e_ident_magic_num = (char)uVar56;
                    pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
                    pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
                    pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
                    pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
                    pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
                    pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
                    pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
                    *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = pEVar48;
                  }
                  uVar76 = local_da8._0_8_;
                }
              }
            }
            else {
              ppuVar83 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_007247cb:
              if ((1 < ((uint)ppuVar83 & 3) - 2) && (((ulong)ppuVar83 & 3) != 0)) {
                (**(code **)((long)&((Elf64_Ehdr *)ppuVar83)->e_version + 3))
                          ((undefined1 *)
                           ((long)&((Elf64_Ehdr *)((long)ppuVar83 + -0x40))->e_shstrndx + 1));
              }
LAB_007247e6:
              uVar76 = 0x200000;
            }
            std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 =
                 uVar76 + 1;
          }
          else {
            uVar76 = std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 -
                     1;
          }
          lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          do {
            if (lVar74 == -1) goto LAB_00729165;
            lVar88 = lVar74 + 1;
            LOCK();
            bVar94 = lVar74 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            if (bVar94) {
              <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar88;
            }
            else {
              lVar74 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            }
            UNLOCK();
          } while (!bVar94);
          plVar50 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar88,local_ca8);
          local_7a8 = (int)plVar50;
          uStack_7a4 = (undefined2)((ulong)plVar50 >> 0x20);
          uStack_7a2 = (undefined2)((ulong)plVar50 >> 0x30);
          std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_b18,&local_7a8);
          plVar51 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x30);
          if (plVar51 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x30);
          }
          *plVar51 = 1;
          plVar51[1] = 1;
          plVar51[2] = (long)plVar49;
          plVar51[3] = 0;
          LOCK();
          lVar74 = *plVar51;
          *plVar51 = *plVar51 + 1;
          UNLOCK();
          if (*plVar51 == 0 || SCARRY8(lVar74,1) != *plVar51 < 0) goto LAB_007292d3;
          LOCK();
          plVar1 = plVar49 + 3;
          lVar74 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (*plVar1 == 0 || SCARRY8(lVar74,1) != *plVar1 < 0) {
            <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(plVar49 + 2);
            goto LAB_0072933b;
          }
          local_da8._0_8_ = (undefined1 *)((long)puVar89 + 1);
          puVar52 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x38,8);
          if (puVar52 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x38);
          }
          *puVar52 = local_b18;
          puVar52[1] = uStack_b10;
          puVar52[2] = uStack_b08;
          puVar52[3] = uStack_b00;
          puVar52[4] = local_428 + 0x20;
          puVar52[5] = puVar89;
          puVar52[6] = plVar51;
          LOCK();
          lVar74 = *plVar50;
          *plVar50 = *plVar50 + 1;
          UNLOCK();
          if (*plVar50 == 0 || SCARRY8(lVar74,1) != *plVar50 < 0) goto LAB_007292d3;
          puVar53 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
          if (puVar53 == (undefined8 *)0x0) goto LAB_007291d4;
          *puVar53 = plVar50;
          puVar53[1] = puVar52;
          puVar53[2] = &
                       PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_22_>::_closure_0_::_closure_0_,()>::_closure_1_>_002101a8
          ;
          auVar115 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(uVar76,puVar53);
          if ((auVar115._0_8_ & 1) != 0) {
            LOCK();
            *plVar51 = *plVar51 + -1;
            UNLOCK();
            if (*plVar51 == 0) {
              <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
              ::drop_slow(plVar51);
            }
            LOCK();
            *plVar50 = *plVar50 + -1;
            UNLOCK();
            if (*plVar50 == 0) {
              <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
              ::drop_slow(plVar50);
            }
            local_7a8 = auVar115._8_4_;
            uStack_7a4 = auVar115._12_2_;
            uStack_7a2 = auVar115._14_2_;
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::result::unwrap_failed
                      ("failed to spawn thread",0x16,&local_7a8,
                       &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                       &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
          }
          (*(code *)PTR_pthread_detach_00841de8)(auVar115._8_8_);
          LOCK();
          *plVar50 = *plVar50 + -1;
          UNLOCK();
          puVar89 = (ulong *)local_da8._0_8_;
          if (*plVar50 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
            ::drop_slow(plVar50);
            LOCK();
            *plVar51 = *plVar51 + -1;
            lVar74 = *plVar51;
            UNLOCK();
          }
          else {
            LOCK();
            *plVar51 = *plVar51 + -1;
            lVar74 = *plVar51;
            UNLOCK();
          }
          if (lVar74 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
            ::drop_slow(plVar51);
          }
        } while (puVar89 != puVar75);
      }
      setup_par::_closure_11_(local_428 + 0x20,0);
      if (plVar49[3] != 0) {
        do {
          lVar74 = plVar49[2];
          LOCK();
          piVar90 = (int *)(lVar74 + 0x38);
          *piVar90 = *piVar90 + -1;
          UNLOCK();
          if (*piVar90 != 0) {
            piVar90 = (int *)(lVar74 + 0x38);
            do {
              local_7a8 = 0;
              uStack_7a4 = 0;
              uStack_7a2 = 0;
              while (*piVar90 == -1) {
                puVar80 = (undefined2 *)0x0;
                if ((byte)local_7a8 != '\0') {
                  puVar80 = &uStack_7a0;
                }
                in_stack_fffffffffffff228 =
                     CONCAT44((int)((ulong)in_stack_fffffffffffff228 >> 0x20),0xffffffff);
                lVar74 = syscall(0xca,piVar90,0x89,0xffffffff,puVar80,0,in_stack_fffffffffffff228);
                if ((-1 < lVar74) || (piVar55 = __errno_location(), *piVar55 != 4)) break;
              }
              LOCK();
              iVar46 = *piVar90;
              if (iVar46 == 1) {
                *piVar90 = 0;
              }
              UNLOCK();
            } while (iVar46 != 1);
          }
        } while (plVar49[3] != 0);
      }
      if ((char)plVar49[4] != '\0') {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_fmt(&DAT_0020ffb0,0x31,&PTR_s_src_sys_rs_0020faf0);
      }
      LOCK();
      *plVar49 = *plVar49 + -1;
      UNLOCK();
      if (*plVar49 == 0) {
        <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
        drop_slow(plVar49);
      }
    }
    else {
      sys::JOB_0 = local_428 + 0x20;
      sys::JOB_1 = &DAT_0020fce8;
      sys::JOB_NT_0 = local_d40;
      LOCK();
      sys::DONE = 0;
      UNLOCK();
      LOCK();
      sys::GEN = sys::GEN + 1;
      UNLOCK();
      if (sys::SLEEPERS != 0) {
        syscall(0xca,&sys::GEN,0x81,0x7fffffff,0,0,0);
      }
      setup_par::_closure_11_(local_428 + 0x20,0);
      do {
      } while (sys::DONE != lVar74);
      sys::JOB_0 = (undefined1 *)0x0;
    }
    auVar117 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
    if (sys::LAST_1 != -1) {
      lStack_cb0 = CONCAT44(lStack_cb0._4_4_,auVar117._8_4_);
      local_428._32_8_ = sys::LAST_0;
      local_428._40_4_ = sys::LAST_1;
      local_cb8 = auVar117._0_8_;
      <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
                (&local_7a8,&local_cb8,local_428 + 0x20);
      lVar74 = DAT_008437a8;
      auVar22._8_8_ = unaff_XMM15_Qb;
      auVar22._0_8_ = unaff_XMM15_Qa;
      auVar115 = vcvtusi2sd_avx512f(auVar22,CONCAT17(uStack_799,
                                                     CONCAT16(uStack_79a,
                                                              CONCAT15(uStack_79b,
                                                                       CONCAT14(uStack_79c,
                                                                                CONCAT22(uStack_79e,
                                                                                         uStack_7a0)
                                                                               )))));
      uVar56 = (ulong)!(bool)((byte)local_7a8 & 1) *
               (long)(((double)(int)apEStack_798[0] / _DAT_00201a48 + auVar115._0_8_) * DAT_00201e30
                     );
      if (DAT_008437a8 == sys::LAPS) {
        local_da8._8_8_ = 0;
        local_da8._0_8_ = uVar56;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
        uVar56 = local_da8._0_8_;
      }
      lVar88 = DAT_008437a0;
      *(char **)(DAT_008437a0 + lVar74 * 0x18) = "lookups";
      *(undefined8 *)(lVar88 + 8 + lVar74 * 0x18) = 7;
      *(ulong *)(lVar88 + 0x10 + lVar74 * 0x18) = uVar56;
      DAT_008437a8 = lVar74 + 1;
    }
    do {
      pEVar48 = local_8d8;
    } while (local_878 == '\0');
    if (local_8d8 == (Elf64_Ehdr *)0xffffffffffffffff) goto LAB_007291e3;
    local_d80 = local_8a8;
    local_8d8 = (Elf64_Ehdr *)0xffffffffffffffff;
    local_458 = uStack_8d0;
    uStack_450 = uStack_8c8;
    local_828 = local_8b0;
    local_838 = local_8c0;
    uStack_830 = uStack_8b8;
    if (local_ad8[0x28] == '\0') {
      do {
      } while( true );
    }
    if (local_ad8[0] == 0) goto LAB_007291e3;
    local_ad8[0] = 0;
    local_ad8[1] = '\0';
    local_ad8[2] = '\0';
    local_ad8[3] = '\0';
    local_ad8[4] = 0;
    local_ad8[5] = 0;
    local_ad8[6] = 0;
    local_ad8[7] = 0;
    local_c18._0_1_ = local_ad8[8];
    local_c18._1_1_ = local_ad8[9];
    local_c18._2_1_ = local_ad8[10];
    local_c18._3_1_ = local_ad8[0xb];
    local_c18._4_1_ = local_ad8[0xc];
    local_c18._5_1_ = local_ad8[0xd];
    local_c18._6_1_ = local_ad8[0xe];
    local_c18._7_1_ = local_ad8[0xf];
    local_c10._0_8_ = local_ad8._16_8_;
    local_c10._8_8_ = local_ad8._24_8_;
    local_d10._0_8_ = local_ad8._32_8_;
    if ((char)local_d74 != '\0') {
      local_7a8 = (int)&local_c18;
      uStack_7a4 = (undefined2)((ulong)&local_c18 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)&local_c18 >> 0x30);
      uStack_7a0 = 0xbf40;
      uStack_79e = 0x74;
      uStack_79c = 0;
      uStack_79b = 0;
      uStack_79a = 0;
      uStack_799 = 0;
      apEStack_798[0] = (Elf64_Ehdr *)local_c10;
      apEStack_798[1] = (Elf64_Ehdr *)<u64_as_core[62e902411887be45]::fmt::LowerHex>::fmt;
      sys::LAST_1 = auVar117._8_4_;
      sys::LAST_0 = (Elf64_Ehdr *)auVar117._0_8_;
      std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020efcd,&local_7a8);
      puVar66 = local_c10 + 8;
      local_7a8 = (int)puVar66;
      uStack_7a4 = (undefined2)((ulong)puVar66 >> 0x20);
      uStack_7a2 = (undefined2)((ulong)puVar66 >> 0x30);
      uStack_7a0 = 0xbf40;
      uStack_79e = 0x74;
      uStack_79c = 0;
      uStack_79b = 0;
      uStack_79a = 0;
      uStack_799 = 0;
      apEStack_798[0] = (Elf64_Ehdr *)local_d10;
      apEStack_798[1] = (Elf64_Ehdr *)<u64_as_core[62e902411887be45]::fmt::Display>::fmt;
      std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020cab1,&local_7a8);
      auVar117._8_4_ = sys::LAST_1;
      auVar117._0_8_ = sys::LAST_0;
    }
    do {
      uVar57 = local_bc0._0_8_;
      pEVar85 = local_c00;
      sys::LAST_1 = auVar117._8_4_;
      sys::LAST_0 = auVar117._0_8_;
    } while (local_bc8 == '\0');
    if (local_c00 == (Elf64_Ehdr *)0xffffffffffffffff) goto LAB_007291e3;
    local_c00 = (Elf64_Ehdr *)0xffffffffffffffff;
    local_448 = local_bf8;
    pcStack_440 = pcStack_bf0;
    local_b78 = local_bd8;
    local_b88 = local_be8;
    pEStack_b80 = pEStack_be0;
    if (local_b90 == '\0') {
      do {
      } while( true );
    }
    if ((undefined1 *)local_bc0._0_8_ == (undefined1 *)0xffffffffffffffff) goto LAB_007291e3;
    local_bc0._0_8_ = (undefined1 *)0xffffffffffffffff;
    local_438 = CONCAT44(uStack_bb4,local_bc0._8_4_);
    uStack_430 = uStack_bb0;
    uStack_b08 = local_b98;
    local_b18 = local_ba8;
    uStack_b10 = uStack_ba0;
    do {
    } while (local_9e8 == '\0');
    local_d30 = (undefined1 *)uVar57;
    local_d70 = local_bd0;
    local_cc8 = pEVar85;
    local_d18 = pEVar48;
    if ((char)local_9f8 == '\0') goto LAB_007291e3;
    local_cd0 = local_9f0;
    local_d38 = ((ulong)local_8a0 >> 6) + 0x8fff;
    uVar56 = (local_d38 >> 4) + 0x1800 & 0xfffffffffffff000;
    qVar59 = 0x4000000;
    if (uVar56 < 0x4000000) {
      qVar59 = uVar56;
    }
    local_dc0 = (Elf64_Ehdr *)(local_d38 >> 0xf);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)local_8a0 >> 2;
    lVar74 = (long)local_d40 * 0x200000;
    local_cd8 = lVar74 + (long)local_dc0 * (long)local_d40 * 0x1000 +
                         (SUB168(auVar20 * ZEXT816(0x4924924924924925),8) & 0xfffffffffffffffe) * 8
                + 0x1000000;
    local_ce0 = sys::anon();
    local_d28 = local_890 / 6 + local_898 / 10;
    pEVar85 = (Elf64_Ehdr *)(lVar74 + local_d28 * 0x10 + 0x1000000 + (long)local_d40 * qVar59);
    local_d90 = qVar59;
    local_ce8 = sys::anon(pEVar85);
    puVar75 = local_d40;
    puVar89 = local_8a0;
    if ((ulong *)0x10c9714fbcda3a < local_d40) goto LAB_007250c5;
  }
  else {
    local_c40 = (char *)((long)puVar75 + 5);
    local_c38 = (undefined1 *)((long)local_d40 + (long)puVar75) + 5;
    local_af8 = 0;
    local_ae0 = '\0';
    puVar89 = local_d40;
    local_dc0 = param_2;
    if (local_d40 < (ulong *)0x39b0ad12073616) {
      lVar74 = (long)local_d40 * 0x238;
      if (lVar74 == 0) {
        pEVar48 = (Elf64_Ehdr *)&DAT_00000008;
        puVar89 = (ulong *)0x0;
      }
      else {
        pEVar48 = (Elf64_Ehdr *)__rustc[45371133cddedda4]::__rust_alloc();
        puVar89 = puVar81;
        if (pEVar48 == (Elf64_Ehdr *)0x0) goto LAB_007293f0;
      }
      if (puVar81 == (ulong *)0x0) {
        puVar81 = (ulong *)0x0;
      }
      else {
        uVar56 = (ulong)((uint)puVar81 & 7);
        if (&DAT_00000007 < puVar81) {
          uVar76 = 0;
          pEVar67 = pEVar48;
          do {
            pEVar67->e_ident_magic_num = 0xff;
            pEVar67->e_ident_magic_str[0] = -1;
            pEVar67->e_ident_magic_str[1] = -1;
            pEVar67->e_ident_magic_str[2] = -1;
            pEVar67->e_ident_class = 0xff;
            pEVar67->e_ident_data = 0xff;
            pEVar67->e_ident_version = 0xff;
            pEVar67->e_ident_osabi = 0xff;
            *(undefined1 *)&pEVar67[8].e_flags = 0;
            pEVar67[8].e_phnum = 0xffff;
            pEVar67[8].e_shentsize = 0xffff;
            pEVar67[8].e_shnum = 0xffff;
            pEVar67[8].e_shstrndx = 0xffff;
            *(undefined1 *)&pEVar67[0x11].e_shoff = 0;
            pEVar67[0x11].e_flags = 0xffffffff;
            pEVar67[0x11].e_ehsize = 0xffff;
            pEVar67[0x11].e_phentsize = 0xffff;
            *(undefined1 *)&pEVar67[0x1a].e_phoff = 0;
            pEVar67[0x1a].e_shoff = 0xffffffffffffffff;
            *(undefined1 *)&pEVar67[0x23].e_entry = 0;
            pEVar67[0x23].e_phoff = 0xffffffffffffffff;
            *(undefined1 *)&pEVar67[0x2c].e_type = 0;
            pEVar67[0x2c].e_entry = 0xffffffffffffffff;
            pEVar67[0x35].e_ident_abiversion = 0;
            pEVar67[0x35].e_type = 0xffff;
            pEVar67[0x35].e_machine = 0xffff;
            pEVar67[0x35].e_version = 0xffffffff;
            pEVar67[0x3e].e_ident_magic_num = 0;
            uVar76 = uVar76 + 8;
            pEVar67[0x3e].e_ident_abiversion = 0xff;
            pEVar67[0x3e].e_ident_pad[0] = 0xff;
            pEVar67[0x3e].e_ident_pad[1] = 0xff;
            pEVar67[0x3e].e_ident_pad[2] = 0xff;
            pEVar67[0x3e].e_ident_pad[3] = 0xff;
            pEVar67[0x3e].e_ident_pad[4] = 0xff;
            pEVar67[0x3e].e_ident_pad[5] = 0xff;
            pEVar67[0x3e].e_ident_pad[6] = 0xff;
            *(undefined1 *)&pEVar67[0x46].e_phnum = 0;
            pEVar67 = pEVar67 + 0x47;
          } while (((ulong)puVar81 & 0x3ffffffffffff8) != uVar76);
          if (uVar56 == 0) goto LAB_00724050;
        }
        else {
          uVar76 = 0;
        }
        lVar74 = 0;
        do {
          *(undefined8 *)((long)pEVar48 + lVar74 + uVar76 * 0x238) = 0xffffffffffffffff;
          *(undefined1 *)((long)pEVar48 + lVar74 + uVar76 * 0x238 + 0x230) = 0;
          lVar74 = lVar74 + 0x238;
        } while (uVar56 * 0x238 != lVar74);
      }
      goto LAB_00724050;
    }
LAB_007250c5:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  lVar74 = (long)puVar75 * 0x7a0;
  local_cf8 = pEVar85;
  local_cf0 = puVar89;
  if (lVar74 == 0) {
    lVar88 = 8;
    puVar75 = (ulong *)0x0;
  }
  else {
    lVar88 = __rustc[45371133cddedda4]::__rust_alloc(lVar74,8);
    if (lVar88 == 0) {
LAB_007293f0:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar74);
    }
  }
  local_ca8[0] = (ulong *)0x0;
  local_cb8 = puVar75;
  lStack_cb0 = lVar88;
  if (local_c48 != (ulong *)0x0) {
    puVar89 = (ulong *)((long)local_c50 + (long)local_c48 * 0x350);
    pcVar65 = (code *)PTR_memcpy_00841de0;
    pEVar48 = local_c50;
    do {
      do {
        auVar117._8_4_ = sys::LAST_1;
        auVar117._0_8_ = sys::LAST_0;
      } while (pEVar48[0xd].e_ident_abiversion == 0);
      uVar76._0_1_ = pEVar48->e_ident_magic_num;
      uVar76._1_1_ = pEVar48->e_ident_magic_str[0];
      uVar76._2_1_ = pEVar48->e_ident_magic_str[1];
      uVar76._3_1_ = pEVar48->e_ident_magic_str[2];
      uVar76._4_1_ = pEVar48->e_ident_class;
      uVar76._5_1_ = pEVar48->e_ident_data;
      uVar76._6_1_ = pEVar48->e_ident_version;
      uVar76._7_1_ = pEVar48->e_ident_osabi;
      if (uVar76 == 0xffffffffffffffff) goto LAB_007291e3;
      local_da8._0_8_ = uVar76;
      (*pcVar65)(&local_7a8,&pEVar48->e_ident_abiversion,0x340);
      pEVar48->e_ident_magic_num = 0xff;
      pEVar48->e_ident_magic_str[0] = -1;
      pEVar48->e_ident_magic_str[1] = -1;
      pEVar48->e_ident_magic_str[2] = -1;
      pEVar48->e_ident_class = 0xff;
      pEVar48->e_ident_data = 0xff;
      pEVar48->e_ident_version = 0xff;
      pEVar48->e_ident_osabi = 0xff;
      puVar52 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x600,8);
      uVar35 = _UNK_002032f8;
      uVar34 = _UNK_002032f0;
      uVar58 = _UNK_002032e8;
      uVar57 = _DAT_002032e0;
      if (puVar52 == (undefined8 *)0x0) {
LAB_0072936d:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x600);
      }
      puVar52[8] = _DAT_002032e0;
      puVar52[9] = uVar58;
      puVar52[10] = uVar34;
      puVar52[0xb] = uVar35;
      uVar43 = _UNK_00205bf8;
      uVar42 = _UNK_00205bf0;
      uVar41 = _UNK_00205be8;
      uVar40 = _UNK_00205be0;
      uVar39 = _UNK_00205bd8;
      uVar38 = _UNK_00205bd0;
      uVar37 = _UNK_00205bc8;
      uVar36 = _DAT_00205bc0;
      *puVar52 = _DAT_00205bc0;
      puVar52[1] = uVar37;
      puVar52[2] = uVar38;
      puVar52[3] = uVar39;
      puVar52[4] = uVar40;
      puVar52[5] = uVar41;
      puVar52[6] = uVar42;
      puVar52[7] = uVar43;
      puVar52[0x14] = uVar57;
      puVar52[0x15] = uVar58;
      puVar52[0x16] = uVar34;
      puVar52[0x17] = uVar35;
      puVar52[0xc] = uVar36;
      puVar52[0xd] = uVar37;
      puVar52[0xe] = uVar38;
      puVar52[0xf] = uVar39;
      puVar52[0x10] = uVar40;
      puVar52[0x11] = uVar41;
      puVar52[0x12] = uVar42;
      puVar52[0x13] = uVar43;
      puVar52[0x20] = uVar57;
      puVar52[0x21] = uVar58;
      puVar52[0x22] = uVar34;
      puVar52[0x23] = uVar35;
      puVar52[0x18] = uVar36;
      puVar52[0x19] = uVar37;
      puVar52[0x1a] = uVar38;
      puVar52[0x1b] = uVar39;
      puVar52[0x1c] = uVar40;
      puVar52[0x1d] = uVar41;
      puVar52[0x1e] = uVar42;
      puVar52[0x1f] = uVar43;
      puVar52[0x2c] = uVar57;
      puVar52[0x2d] = uVar58;
      puVar52[0x2e] = uVar34;
      puVar52[0x2f] = uVar35;
      puVar52[0x24] = uVar36;
      puVar52[0x25] = uVar37;
      puVar52[0x26] = uVar38;
      puVar52[0x27] = uVar39;
      puVar52[0x28] = uVar40;
      puVar52[0x29] = uVar41;
      puVar52[0x2a] = uVar42;
      puVar52[0x2b] = uVar43;
      puVar52[0x38] = uVar57;
      puVar52[0x39] = uVar58;
      puVar52[0x3a] = uVar34;
      puVar52[0x3b] = uVar35;
      puVar52[0x30] = uVar36;
      puVar52[0x31] = uVar37;
      puVar52[0x32] = uVar38;
      puVar52[0x33] = uVar39;
      puVar52[0x34] = uVar40;
      puVar52[0x35] = uVar41;
      puVar52[0x36] = uVar42;
      puVar52[0x37] = uVar43;
      puVar52[0x44] = uVar57;
      puVar52[0x45] = uVar58;
      puVar52[0x46] = uVar34;
      puVar52[0x47] = uVar35;
      puVar52[0x3c] = uVar36;
      puVar52[0x3d] = uVar37;
      puVar52[0x3e] = uVar38;
      puVar52[0x3f] = uVar39;
      puVar52[0x40] = uVar40;
      puVar52[0x41] = uVar41;
      puVar52[0x42] = uVar42;
      puVar52[0x43] = uVar43;
      puVar52[0x50] = uVar57;
      puVar52[0x51] = uVar58;
      puVar52[0x52] = uVar34;
      puVar52[0x53] = uVar35;
      puVar52[0x48] = uVar36;
      puVar52[0x49] = uVar37;
      puVar52[0x4a] = uVar38;
      puVar52[0x4b] = uVar39;
      puVar52[0x4c] = uVar40;
      puVar52[0x4d] = uVar41;
      puVar52[0x4e] = uVar42;
      puVar52[0x4f] = uVar43;
      puVar52[0x5c] = uVar57;
      puVar52[0x5d] = uVar58;
      puVar52[0x5e] = uVar34;
      puVar52[0x5f] = uVar35;
      puVar52[0x54] = uVar36;
      puVar52[0x55] = uVar37;
      puVar52[0x56] = uVar38;
      puVar52[0x57] = uVar39;
      puVar52[0x58] = uVar40;
      puVar52[0x59] = uVar41;
      puVar52[0x5a] = uVar42;
      puVar52[0x5b] = uVar43;
      puVar52[0x68] = uVar57;
      puVar52[0x69] = uVar58;
      puVar52[0x6a] = uVar34;
      puVar52[0x6b] = uVar35;
      puVar52[0x60] = uVar36;
      puVar52[0x61] = uVar37;
      puVar52[0x62] = uVar38;
      puVar52[99] = uVar39;
      puVar52[100] = uVar40;
      puVar52[0x65] = uVar41;
      puVar52[0x66] = uVar42;
      puVar52[0x67] = uVar43;
      puVar52[0x74] = uVar57;
      puVar52[0x75] = uVar58;
      puVar52[0x76] = uVar34;
      puVar52[0x77] = uVar35;
      puVar52[0x6c] = uVar36;
      puVar52[0x6d] = uVar37;
      puVar52[0x6e] = uVar38;
      puVar52[0x6f] = uVar39;
      puVar52[0x70] = uVar40;
      puVar52[0x71] = uVar41;
      puVar52[0x72] = uVar42;
      puVar52[0x73] = uVar43;
      puVar52[0x80] = uVar57;
      puVar52[0x81] = uVar58;
      puVar52[0x82] = uVar34;
      puVar52[0x83] = uVar35;
      puVar52[0x78] = uVar36;
      puVar52[0x79] = uVar37;
      puVar52[0x7a] = uVar38;
      puVar52[0x7b] = uVar39;
      puVar52[0x7c] = uVar40;
      puVar52[0x7d] = uVar41;
      puVar52[0x7e] = uVar42;
      puVar52[0x7f] = uVar43;
      puVar52[0x8c] = uVar57;
      puVar52[0x8d] = uVar58;
      puVar52[0x8e] = uVar34;
      puVar52[0x8f] = uVar35;
      puVar52[0x84] = uVar36;
      puVar52[0x85] = uVar37;
      puVar52[0x86] = uVar38;
      puVar52[0x87] = uVar39;
      puVar52[0x88] = uVar40;
      puVar52[0x89] = uVar41;
      puVar52[0x8a] = uVar42;
      puVar52[0x8b] = uVar43;
      puVar52[0x98] = uVar57;
      puVar52[0x99] = uVar58;
      puVar52[0x9a] = uVar34;
      puVar52[0x9b] = uVar35;
      puVar52[0x90] = uVar36;
      puVar52[0x91] = uVar37;
      puVar52[0x92] = uVar38;
      puVar52[0x93] = uVar39;
      puVar52[0x94] = uVar40;
      puVar52[0x95] = uVar41;
      puVar52[0x96] = uVar42;
      puVar52[0x97] = uVar43;
      puVar52[0xa4] = uVar57;
      puVar52[0xa5] = uVar58;
      puVar52[0xa6] = uVar34;
      puVar52[0xa7] = uVar35;
      puVar52[0x9c] = uVar36;
      puVar52[0x9d] = uVar37;
      puVar52[0x9e] = uVar38;
      puVar52[0x9f] = uVar39;
      puVar52[0xa0] = uVar40;
      puVar52[0xa1] = uVar41;
      puVar52[0xa2] = uVar42;
      puVar52[0xa3] = uVar43;
      puVar52[0xb0] = uVar57;
      puVar52[0xb1] = uVar58;
      puVar52[0xb2] = uVar34;
      puVar52[0xb3] = uVar35;
      puVar52[0xa8] = uVar36;
      puVar52[0xa9] = uVar37;
      puVar52[0xaa] = uVar38;
      puVar52[0xab] = uVar39;
      puVar52[0xac] = uVar40;
      puVar52[0xad] = uVar41;
      puVar52[0xae] = uVar42;
      puVar52[0xaf] = uVar43;
      puVar52[0xbc] = uVar57;
      puVar52[0xbd] = uVar58;
      puVar52[0xbe] = uVar34;
      puVar52[0xbf] = uVar35;
      puVar52[0xb4] = uVar36;
      puVar52[0xb5] = uVar37;
      puVar52[0xb6] = uVar38;
      puVar52[0xb7] = uVar39;
      puVar52[0xb8] = uVar40;
      puVar52[0xb9] = uVar41;
      puVar52[0xba] = uVar42;
      puVar52[0xbb] = uVar43;
      puVar53 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x600,8);
      uVar35 = _UNK_002032f8;
      uVar34 = _UNK_002032f0;
      uVar58 = _UNK_002032e8;
      uVar57 = _DAT_002032e0;
      if (puVar53 == (undefined8 *)0x0) goto LAB_0072936d;
      puVar53[8] = _DAT_002032e0;
      puVar53[9] = uVar58;
      puVar53[10] = uVar34;
      puVar53[0xb] = uVar35;
      uVar43 = _UNK_00205bf8;
      uVar42 = _UNK_00205bf0;
      uVar41 = _UNK_00205be8;
      uVar40 = _UNK_00205be0;
      uVar39 = _UNK_00205bd8;
      uVar38 = _UNK_00205bd0;
      uVar37 = _UNK_00205bc8;
      uVar36 = _DAT_00205bc0;
      *puVar53 = _DAT_00205bc0;
      puVar53[1] = uVar37;
      puVar53[2] = uVar38;
      puVar53[3] = uVar39;
      puVar53[4] = uVar40;
      puVar53[5] = uVar41;
      puVar53[6] = uVar42;
      puVar53[7] = uVar43;
      puVar53[0x14] = uVar57;
      puVar53[0x15] = uVar58;
      puVar53[0x16] = uVar34;
      puVar53[0x17] = uVar35;
      puVar53[0xc] = uVar36;
      puVar53[0xd] = uVar37;
      puVar53[0xe] = uVar38;
      puVar53[0xf] = uVar39;
      puVar53[0x10] = uVar40;
      puVar53[0x11] = uVar41;
      puVar53[0x12] = uVar42;
      puVar53[0x13] = uVar43;
      puVar53[0x20] = uVar57;
      puVar53[0x21] = uVar58;
      puVar53[0x22] = uVar34;
      puVar53[0x23] = uVar35;
      puVar53[0x18] = uVar36;
      puVar53[0x19] = uVar37;
      puVar53[0x1a] = uVar38;
      puVar53[0x1b] = uVar39;
      puVar53[0x1c] = uVar40;
      puVar53[0x1d] = uVar41;
      puVar53[0x1e] = uVar42;
      puVar53[0x1f] = uVar43;
      puVar53[0x2c] = uVar57;
      puVar53[0x2d] = uVar58;
      puVar53[0x2e] = uVar34;
      puVar53[0x2f] = uVar35;
      puVar53[0x24] = uVar36;
      puVar53[0x25] = uVar37;
      puVar53[0x26] = uVar38;
      puVar53[0x27] = uVar39;
      puVar53[0x28] = uVar40;
      puVar53[0x29] = uVar41;
      puVar53[0x2a] = uVar42;
      puVar53[0x2b] = uVar43;
      puVar53[0x38] = uVar57;
      puVar53[0x39] = uVar58;
      puVar53[0x3a] = uVar34;
      puVar53[0x3b] = uVar35;
      puVar53[0x30] = uVar36;
      puVar53[0x31] = uVar37;
      puVar53[0x32] = uVar38;
      puVar53[0x33] = uVar39;
      puVar53[0x34] = uVar40;
      puVar53[0x35] = uVar41;
      puVar53[0x36] = uVar42;
      puVar53[0x37] = uVar43;
      puVar53[0x44] = uVar57;
      puVar53[0x45] = uVar58;
      puVar53[0x46] = uVar34;
      puVar53[0x47] = uVar35;
      puVar53[0x3c] = uVar36;
      puVar53[0x3d] = uVar37;
      puVar53[0x3e] = uVar38;
      puVar53[0x3f] = uVar39;
      puVar53[0x40] = uVar40;
      puVar53[0x41] = uVar41;
      puVar53[0x42] = uVar42;
      puVar53[0x43] = uVar43;
      puVar53[0x50] = uVar57;
      puVar53[0x51] = uVar58;
      puVar53[0x52] = uVar34;
      puVar53[0x53] = uVar35;
      puVar53[0x48] = uVar36;
      puVar53[0x49] = uVar37;
      puVar53[0x4a] = uVar38;
      puVar53[0x4b] = uVar39;
      puVar53[0x4c] = uVar40;
      puVar53[0x4d] = uVar41;
      puVar53[0x4e] = uVar42;
      puVar53[0x4f] = uVar43;
      puVar53[0x5c] = uVar57;
      puVar53[0x5d] = uVar58;
      puVar53[0x5e] = uVar34;
      puVar53[0x5f] = uVar35;
      puVar53[0x54] = uVar36;
      puVar53[0x55] = uVar37;
      puVar53[0x56] = uVar38;
      puVar53[0x57] = uVar39;
      puVar53[0x58] = uVar40;
      puVar53[0x59] = uVar41;
      puVar53[0x5a] = uVar42;
      puVar53[0x5b] = uVar43;
      puVar53[0x68] = uVar57;
      puVar53[0x69] = uVar58;
      puVar53[0x6a] = uVar34;
      puVar53[0x6b] = uVar35;
      puVar53[0x60] = uVar36;
      puVar53[0x61] = uVar37;
      puVar53[0x62] = uVar38;
      puVar53[99] = uVar39;
      puVar53[100] = uVar40;
      puVar53[0x65] = uVar41;
      puVar53[0x66] = uVar42;
      puVar53[0x67] = uVar43;
      puVar53[0x74] = uVar57;
      puVar53[0x75] = uVar58;
      puVar53[0x76] = uVar34;
      puVar53[0x77] = uVar35;
      puVar53[0x6c] = uVar36;
      puVar53[0x6d] = uVar37;
      puVar53[0x6e] = uVar38;
      puVar53[0x6f] = uVar39;
      puVar53[0x70] = uVar40;
      puVar53[0x71] = uVar41;
      puVar53[0x72] = uVar42;
      puVar53[0x73] = uVar43;
      puVar53[0x80] = uVar57;
      puVar53[0x81] = uVar58;
      puVar53[0x82] = uVar34;
      puVar53[0x83] = uVar35;
      puVar53[0x78] = uVar36;
      puVar53[0x79] = uVar37;
      puVar53[0x7a] = uVar38;
      puVar53[0x7b] = uVar39;
      puVar53[0x7c] = uVar40;
      puVar53[0x7d] = uVar41;
      puVar53[0x7e] = uVar42;
      puVar53[0x7f] = uVar43;
      puVar53[0x8c] = uVar57;
      puVar53[0x8d] = uVar58;
      puVar53[0x8e] = uVar34;
      puVar53[0x8f] = uVar35;
      puVar53[0x84] = uVar36;
      puVar53[0x85] = uVar37;
      puVar53[0x86] = uVar38;
      puVar53[0x87] = uVar39;
      puVar53[0x88] = uVar40;
      puVar53[0x89] = uVar41;
      puVar53[0x8a] = uVar42;
      puVar53[0x8b] = uVar43;
      puVar53[0x98] = uVar57;
      puVar53[0x99] = uVar58;
      puVar53[0x9a] = uVar34;
      puVar53[0x9b] = uVar35;
      puVar53[0x90] = uVar36;
      puVar53[0x91] = uVar37;
      puVar53[0x92] = uVar38;
      puVar53[0x93] = uVar39;
      puVar53[0x94] = uVar40;
      puVar53[0x95] = uVar41;
      puVar53[0x96] = uVar42;
      puVar53[0x97] = uVar43;
      puVar53[0xa4] = uVar57;
      puVar53[0xa5] = uVar58;
      puVar53[0xa6] = uVar34;
      puVar53[0xa7] = uVar35;
      puVar53[0x9c] = uVar36;
      puVar53[0x9d] = uVar37;
      puVar53[0x9e] = uVar38;
      puVar53[0x9f] = uVar39;
      puVar53[0xa0] = uVar40;
      puVar53[0xa1] = uVar41;
      puVar53[0xa2] = uVar42;
      puVar53[0xa3] = uVar43;
      puVar53[0xb0] = uVar57;
      puVar53[0xb1] = uVar58;
      puVar53[0xb2] = uVar34;
      puVar53[0xb3] = uVar35;
      puVar53[0xa8] = uVar36;
      puVar53[0xa9] = uVar37;
      puVar53[0xaa] = uVar38;
      puVar53[0xab] = uVar39;
      puVar53[0xac] = uVar40;
      puVar53[0xad] = uVar41;
      puVar53[0xae] = uVar42;
      puVar53[0xaf] = uVar43;
      puVar53[0xbc] = uVar57;
      puVar53[0xbd] = uVar58;
      puVar53[0xbe] = uVar34;
      puVar53[0xbf] = uVar35;
      puVar53[0xb4] = uVar36;
      puVar53[0xb5] = uVar37;
      puVar53[0xb6] = uVar38;
      puVar53[0xb7] = uVar39;
      puVar53[0xb8] = uVar40;
      puVar53[0xb9] = uVar41;
      puVar53[0xba] = uVar42;
      puVar53[0xbb] = uVar43;
      (*pcVar65)(local_428 + 0x20,&local_7a8,0x340);
      puVar75 = local_ca8[0];
      if (local_ca8[0] == local_cb8) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::TState>>>
        ::grow_one(&local_cb8);
      }
      lVar74 = lStack_cb0;
      lVar88 = (long)puVar75 * 0x7a0;
      *(undefined8 *)(lStack_cb0 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 8 + lVar88) = 0x40;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x10 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x20 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x28 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x38 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x40 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x50 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x58 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x68 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x70 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x80 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x88 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x98 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0xa0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0xb0 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0xb8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 200 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0xd0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0xe0 + lVar88) = 0x40;
      puVar2 = (undefined8 *)(lStack_cb0 + 0xe8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0xf8 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x119 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x100 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)(lStack_cb0 + 0x140 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 0x148 + lVar88) = 0x40;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x150 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x160 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x168 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x178 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x180 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 400 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x198 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x1a8 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x1b0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x1c0 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x1c8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x1d8 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x1e0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x1f0 + lVar88) = 0x40;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x209 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x1f8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      pEVar48 = (Elf64_Ehdr *)&pEVar48[0xd].e_type;
      *(undefined8 *)(lStack_cb0 + 0x230 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 0x238 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x240 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x250 + lVar88) = 1;
      puVar2 = (undefined8 *)(lStack_cb0 + 600 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x268 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x270 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x280 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x288 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x298 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x2a0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x2b0 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x2b8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x2c8 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x2d0 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x2e0 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x2e8 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x2f8 + lVar88) = 4;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x300 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x310 + lVar88) = 8;
      puVar2 = (undefined8 *)(lStack_cb0 + 0x318 + lVar88);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x328 + lVar88) = 8;
      *(undefined8 *)(lStack_cb0 + 0x330 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 0x338 + lVar88) = 0x40;
      *(undefined8 **)(lStack_cb0 + 0x340 + lVar88) = puVar52;
      *(undefined8 *)(lStack_cb0 + 0x348 + lVar88) = 0x40;
      *(undefined8 *)(lStack_cb0 + 0x350 + lVar88) = 0x40;
      *(undefined8 **)(lStack_cb0 + 0x358 + lVar88) = puVar53;
      *(undefined8 *)(lStack_cb0 + 0x360 + lVar88) = 0x40;
      *(undefined8 *)(lStack_cb0 + 0x368 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 0x370 + lVar88) = 8;
      puVar52 = (undefined8 *)(lStack_cb0 + 0x378 + lVar88);
      *puVar52 = 0;
      puVar52[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x388 + lVar88) = 8;
      puVar52 = (undefined8 *)(lStack_cb0 + 0x390 + lVar88);
      *puVar52 = 0;
      puVar52[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x3a0 + lVar88) = 4;
      puVar52 = (undefined8 *)(lStack_cb0 + 0x3a8 + lVar88);
      *puVar52 = 0;
      puVar52[1] = 0;
      *(undefined8 *)(lStack_cb0 + 0x3b8 + lVar88) = 4;
      *(undefined8 *)(lStack_cb0 + 0x3c0 + lVar88) = 0;
      *(undefined8 *)(lStack_cb0 + 0x3c8 + lVar88) = local_da8._0_8_;
      pcVar65 = (code *)PTR_memcpy_00841de0;
      (*(code *)PTR_memcpy_00841de0)(lStack_cb0 + 0x3d0 + lVar88,local_428 + 0x20,0x340);
      *(undefined8 *)(lVar74 + 0x710 + lVar88) = 8;
      auVar115 = ZEXT816(0);
      *(undefined1 (*) [32])(lVar74 + 0x718 + lVar88) = ZEXT1632(auVar115);
      *(undefined1 (*) [32])(lVar74 + 0x738 + lVar88) = ZEXT1632(auVar115);
      *(undefined1 (*) [32])(lVar74 + 0x758 + lVar88) = ZEXT1632(auVar115);
      local_ca8[0] = (ulong *)((long)puVar75 + 1);
      *(undefined1 (*) [32])(lVar74 + 0x778 + lVar88) = ZEXT1632(auVar115);
      *(undefined8 *)(lVar74 + 0x798 + lVar88) = 0;
    } while (pEVar48 != (Elf64_Ehdr *)puVar89);
  }
  puVar44 = PTR_memcpy_00841de0;
  auVar117._8_4_ = sys::LAST_1;
  auVar117._0_8_ = sys::LAST_0;
  local_d20 = local_d90 >> 0xc & 0xfffff;
  parse::CORE_READY_0 = 1;
  if (local_d68[0] != '\0') {
    do {
    } while (local_ae0 == '\0');
    if ((char)local_af8 == '\0') {
LAB_007291e3:
      sys::LAST_1 = auVar117._8_4_;
      sys::LAST_0 = auVar117._0_8_;
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
    }
    if ((local_af0 == local_dc0) && (local_ae8 == local_d20)) {
      if (local_c20 != (ulong *)0x0) {
        puVar89 = (ulong *)((long)local_c28 + (long)local_c20 * 0x238);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = local_da8._8_8_;
        local_da8 = auVar31 << 0x40;
        pEVar48 = local_c28;
        do {
          do {
            auVar117._8_4_ = sys::LAST_1;
            auVar117._0_8_ = sys::LAST_0;
          } while ((char)pEVar48[8].e_flags == '\0');
          uVar54._0_1_ = pEVar48->e_ident_magic_num;
          uVar54._1_1_ = pEVar48->e_ident_magic_str[0];
          uVar54._2_1_ = pEVar48->e_ident_magic_str[1];
          uVar54._3_1_ = pEVar48->e_ident_magic_str[2];
          uVar54._4_1_ = pEVar48->e_ident_class;
          uVar54._5_1_ = pEVar48->e_ident_data;
          uVar54._6_1_ = pEVar48->e_ident_version;
          uVar54._7_1_ = pEVar48->e_ident_osabi;
          if (uVar54 == 0xffffffffffffffff) goto LAB_007291e3;
          pEVar48->e_ident_magic_num = 0xff;
          pEVar48->e_ident_magic_str[0] = -1;
          pEVar48->e_ident_magic_str[1] = -1;
          pEVar48->e_ident_magic_str[2] = -1;
          pEVar48->e_ident_class = 0xff;
          pEVar48->e_ident_data = 0xff;
          pEVar48->e_ident_version = 0xff;
          pEVar48->e_ident_osabi = 0xff;
          (*(code *)puVar44)(&local_7a8,&pEVar48->e_ident_abiversion,0x138);
          lVar74 = lStack_cb0;
          uStack_328 = pEVar48[8].e_phoff;
          uStack_320 = pEVar48[8].e_shoff;
          uStack_348._0_1_ = pEVar48[8].e_ident_magic_num;
          uStack_348._1_1_ = pEVar48[8].e_ident_magic_str[0];
          uStack_348._2_1_ = pEVar48[8].e_ident_magic_str[1];
          uStack_348._3_1_ = pEVar48[8].e_ident_magic_str[2];
          uStack_348._4_1_ = pEVar48[8].e_ident_class;
          uStack_348._5_1_ = pEVar48[8].e_ident_data;
          uStack_348._6_1_ = pEVar48[8].e_ident_version;
          uStack_348._7_1_ = pEVar48[8].e_ident_osabi;
          uStack_340._0_1_ = pEVar48[8].e_ident_abiversion;
          uStack_340._1_1_ = pEVar48[8].e_ident_pad[0];
          uStack_340._2_1_ = pEVar48[8].e_ident_pad[1];
          uStack_340._3_1_ = pEVar48[8].e_ident_pad[2];
          uStack_340._4_1_ = pEVar48[8].e_ident_pad[3];
          uStack_340._5_1_ = pEVar48[8].e_ident_pad[4];
          uStack_340._6_1_ = pEVar48[8].e_ident_pad[5];
          uStack_340._7_1_ = pEVar48[8].e_ident_pad[6];
          local_338._0_2_ = pEVar48[8].e_type;
          local_338._2_2_ = pEVar48[8].e_machine;
          local_338._4_4_ = pEVar48[8].e_version;
          uStack_330 = pEVar48[8].e_entry;
          local_368 = pEVar48[7].e_phoff;
          qStack_360 = pEVar48[7].e_shoff;
          qStack_358._0_4_ = pEVar48[7].e_flags;
          qStack_358._4_2_ = pEVar48[7].e_ehsize;
          qStack_358._6_2_ = pEVar48[7].e_phentsize;
          qStack_350._0_2_ = pEVar48[7].e_phnum;
          qStack_350._2_2_ = pEVar48[7].e_shentsize;
          qStack_350._4_2_ = pEVar48[7].e_shnum;
          qStack_350._6_2_ = pEVar48[7].e_shstrndx;
          local_388._0_1_ = pEVar48[7].e_ident_magic_num;
          local_388._1_1_ = pEVar48[7].e_ident_magic_str[0];
          local_388._2_1_ = pEVar48[7].e_ident_magic_str[1];
          local_388._3_1_ = pEVar48[7].e_ident_magic_str[2];
          local_388._4_1_ = pEVar48[7].e_ident_class;
          local_388._5_1_ = pEVar48[7].e_ident_data;
          local_388._6_1_ = pEVar48[7].e_ident_version;
          local_388._7_1_ = pEVar48[7].e_ident_osabi;
          uStack_380._0_1_ = pEVar48[7].e_ident_abiversion;
          uStack_380._1_1_ = pEVar48[7].e_ident_pad[0];
          uStack_380._2_1_ = pEVar48[7].e_ident_pad[1];
          uStack_380._3_1_ = pEVar48[7].e_ident_pad[2];
          uStack_380._4_1_ = pEVar48[7].e_ident_pad[3];
          uStack_380._5_1_ = pEVar48[7].e_ident_pad[4];
          uStack_380._6_1_ = pEVar48[7].e_ident_pad[5];
          uStack_380._7_1_ = pEVar48[7].e_ident_pad[6];
          uStack_378._0_2_ = pEVar48[7].e_type;
          uStack_378._2_2_ = pEVar48[7].e_machine;
          uStack_378._4_4_ = pEVar48[7].e_version;
          uStack_370 = pEVar48[7].e_entry;
          local_428._32_8_ = *(undefined8 *)(pEVar48 + 5);
          local_428._40_8_ = *(undefined8 *)&pEVar48[5].e_ident_abiversion;
          pEStack_3f8 = *(Elf64_Ehdr **)&pEVar48[5].e_type;
          pEStack_3f0 = (Elf64_Ehdr *)pEVar48[5].e_entry;
          local_3e8 = (Elf64_Ehdr *)pEVar48[5].e_phoff;
          qStack_3e0 = pEVar48[5].e_shoff;
          puStack_3d8 = *(undefined8 **)&pEVar48[5].e_flags;
          ppuStack_3d0 = *(ulong ***)&pEVar48[5].e_phnum;
          local_3c8 = *(undefined8 **)(pEVar48 + 6);
          puStack_3c0 = *(undefined1 **)&pEVar48[6].e_ident_abiversion;
          puStack_3b8 = *(undefined1 **)&pEVar48[6].e_type;
          ppEStack_3b0 = (Elf64_Ehdr **)pEVar48[6].e_entry;
          local_3a8 = pEVar48[6].e_phoff;
          qStack_3a0 = pEVar48[6].e_shoff;
          uStack_398._0_4_ = pEVar48[6].e_flags;
          uStack_398._4_2_ = pEVar48[6].e_ehsize;
          uStack_398._6_2_ = pEVar48[6].e_phentsize;
          uStack_390._0_2_ = pEVar48[6].e_phnum;
          uStack_390._2_2_ = pEVar48[6].e_shentsize;
          uStack_390._4_2_ = pEVar48[6].e_shnum;
          uStack_390._6_2_ = pEVar48[6].e_shstrndx;
          if (local_ca8[0] <= (ulong)local_da8._0_8_) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (local_da8._0_8_,local_ca8[0],&PTR_s_src_setup_rs_00226888);
          }
          pEVar48 = (Elf64_Ehdr *)&pEVar48[8].e_phnum;
          lVar88 = local_da8._0_8_ * 0x7a0;
          local_da8._0_8_ = (undefined1 *)(local_da8._0_8_ + 1);
          core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart>
                    (lStack_cb0 + lVar88);
          *(ulong *)(lVar74 + lVar88) = uVar54;
          (*(code *)puVar44)(lVar74 + lVar88 + 8,&local_7a8,0x138);
          core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part>
                    (lVar74 + lVar88 + 0x140);
          puVar75 = (ulong *)(lVar74 + 0x210 + lVar88);
          *puVar75 = local_338;
          puVar75[1] = uStack_330;
          puVar75[2] = uStack_328;
          puVar75[3] = uStack_320;
          puVar75 = (ulong *)(lVar74 + 0x200 + lVar88);
          *puVar75 = uStack_348;
          puVar75[1] = uStack_340;
          puVar75[2] = local_338;
          puVar75[3] = uStack_330;
          pqVar60 = (qword *)(lVar74 + 0x1e0 + lVar88);
          *pqVar60 = local_368;
          pqVar60[1] = qStack_360;
          pqVar60[2] = qStack_358;
          pqVar60[3] = qStack_350;
          puVar75 = (ulong *)(lVar74 + 0x1c0 + lVar88);
          *puVar75 = local_388;
          puVar75[1] = uStack_380;
          puVar75[2] = uStack_378;
          puVar75[3] = uStack_370;
          auVar29._8_8_ = puStack_3c0;
          auVar29._0_8_ = local_3c8;
          auVar29._16_8_ = puStack_3b8;
          auVar29._24_8_ = ppEStack_3b0;
          auVar30._8_8_ = qStack_3a0;
          auVar30._0_8_ = local_3a8;
          auVar30._16_8_ = uStack_398;
          auVar30._24_8_ = uStack_390;
          *(undefined1 (*) [32])(lVar74 + 0x1a0 + lVar88) = auVar30;
          *(undefined1 (*) [32])(lVar74 + 0x180 + lVar88) = auVar29;
          puVar52 = (undefined8 *)(lVar74 + 0x160 + lVar88);
          *puVar52 = local_3e8;
          puVar52[1] = qStack_3e0;
          puVar52[2] = puStack_3d8;
          puVar52[3] = ppuStack_3d0;
          puVar52 = (undefined8 *)(lVar74 + 0x140 + lVar88);
          *puVar52 = local_428._32_8_;
          puVar52[1] = local_428._40_8_;
          puVar52[2] = pEStack_3f8;
          puVar52[3] = pEStack_3f0;
        } while (pEVar48 != (Elf64_Ehdr *)puVar89);
      }
      parse::PARTS_READY_0 = 1;
    }
  }
  uVar76 = local_cc0;
  uVar56 = local_d20;
  qVar59 = local_d90;
  iVar46 = ckix_mode();
  uVar57 = sys::anon(qVar59 * 2);
  uVar54 = (ulong)(((uint)(qVar59 >> 3) & 0x1fffffff) + 0x200000 & 0x1e00000);
  local_da8._0_8_ = uVar57;
  if (sys::Z_END_0 == 0) {
LAB_00725b87:
    pvVar91 = (void *)sys::anon(uVar54);
    madvise(pvVar91,uVar54,0xf);
  }
  else {
    uVar73 = sys::Z_NEXT;
    do {
      pvVar91 = (void *)(uVar73 + 0x1fffff & 0xffffffffffe00000);
      if (sys::Z_END_0 < (long)pvVar91 + uVar54) goto LAB_00725b87;
      LOCK();
      bVar94 = uVar73 == sys::Z_NEXT;
      if (bVar94) {
        sys::Z_NEXT = (long)pvVar91 + uVar54;
      }
      else {
        uVar73 = sys::Z_NEXT;
      }
      UNLOCK();
    } while (!bVar94);
    if (pvVar91 == (void *)0x0) goto LAB_00725b87;
  }
  uVar57 = sys::anon((qVar59 + uVar56) * 4 + 0x20);
  qVar59 = local_d28;
  qVar78 = local_d10._0_8_;
  if (local_d10._0_8_ == 0) {
    qVar78 = local_d28;
  }
  uVar58 = sys::anon(qVar78 * 0x10 + 0x400);
  local_d68._0_8_ = uVar58;
  qVar78 = local_d10._0_8_;
  if (local_d10._0_8_ == 0) {
    qVar78 = qVar59;
  }
  qVar59 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x4000,8);
  if (qVar59 == 0) {
LAB_00729432:
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x4000);
  }
  uVar56 = (long)local_dc0 * 0x24 + 0x1ffffcU & 0xffffffffffe00000;
  _local_d00 = uVar57;
  if (sys::Z_END_0 == 0) {
LAB_00725c67:
    pvVar86 = (void *)sys::anon(uVar56);
    madvise(pvVar86,uVar56,0xf);
  }
  else {
    uVar54 = sys::Z_NEXT;
    do {
      pvVar86 = (void *)(uVar54 + 0x1fffff & 0xffffffffffe00000);
      if (sys::Z_END_0 < (long)pvVar86 + uVar56) goto LAB_00725c67;
      LOCK();
      bVar94 = uVar54 == sys::Z_NEXT;
      if (bVar94) {
        sys::Z_NEXT = (long)pvVar86 + uVar56;
      }
      else {
        uVar54 = sys::Z_NEXT;
      }
      UNLOCK();
    } while (!bVar94);
    if (pvVar86 == (void *)0x0) goto LAB_00725c67;
  }
  pEVar48 = local_d88 + 0x903210;
  if (*(char *)(in_FS_OFFSET + -0x38) == '\x01') {
    auVar115 = *(undefined1 (*) [16])(in_FS_OFFSET + -0x48);
    uVar56 = local_d38 & 0xffffffffffff8000;
  }
  else {
    local_d38 = local_d38 & 0xffffffffffff8000;
    local_d28 = qVar59;
    auVar115 = std[c60ef17cbf7de79f]::sys::random::linux::hashmap_random_keys();
    *(long *)(in_FS_OFFSET + -0x40) = auVar115._8_8_;
    *(undefined1 *)(in_FS_OFFSET + -0x38) = 1;
    uVar56 = local_d38;
    qVar59 = local_d28;
  }
  pEVar85 = local_d50;
  local_c80[0x3b] = local_d40;
  *(char *)((long)local_c80 + 0x2f4) = (char)local_d74;
  local_c80[0x3c] = local_cc0;
  local_c80[0x3d] = local_d88;
  local_c80[0x3e] = uVar76 - 0x240c8400;
  local_c80[0x3f] = pEVar48;
  local_c80[0x40] = uVar76 - 86400000;
  local_c80[0x41] = local_d48;
  *(undefined4 *)(local_c80 + 0x5e) = uVar47;
  local_c80[0x42] = local_c60;
  local_c80[0x43] = local_c18;
  local_c80[0x44] = local_c10._0_8_;
  local_c80[0x45] = local_c10._8_8_;
  local_c80[0x46] = local_d10._0_8_;
  *(bool *)((long)local_c80 + 0x2f5) = iVar46 == 2;
  local_c80[0x47] = uVar56;
  local_c80[0x48] = local_d90;
  *local_c80 = local_d30;
  local_c80[1] = local_438;
  local_c80[2] = uStack_430;
  local_c80[3] = local_cc8;
  local_c80[4] = local_448;
  local_c80[5] = pcStack_440;
  local_c80[0x49] = local_d70;
  local_c80[8] = uStack_b08;
  local_c80[6] = local_b18;
  local_c80[7] = uStack_b10;
  local_c80[0xb] = local_b78;
  local_c80[9] = local_b88;
  local_c80[10] = pEStack_b80;
  local_c80[0x4a] = local_d80;
  local_c80[0xc] = local_d18;
  local_c80[0xd] = local_458;
  local_c80[0xe] = uStack_450;
  local_c80[0x11] = local_828;
  local_c80[0xf] = local_838;
  local_c80[0x10] = uStack_830;
  local_c80[0x4b] = 0;
  local_c80[0x4c] = local_cf0;
  local_c80[0x4d] = local_cd0;
  local_c80[0x4e] = local_dc0;
  local_c80[0x4f] = local_d20;
  local_c80[0x50] = local_ce0;
  local_c80[0x51] = local_cd8;
  local_c80[0x52] = 0;
  local_c80[0x53] = local_ce8;
  local_c80[0x54] = local_cf8;
  local_c80[0x55] = 0;
  local_c80[0x14] = local_ca8[0];
  local_c80[0x12] = local_cb8;
  local_c80[0x13] = lStack_cb0;
  local_c80[0x56] = local_da8._0_8_;
  local_c80[0x57] = pvVar91;
  local_c80[0x58] = _local_d00;
  local_c80[0x59] = local_d68._0_8_;
  local_c80[0x5a] = qVar78 + 0x40;
  uVar34 = _UNK_00203258;
  uVar58 = _UNK_00203250;
  uVar57 = _UNK_00203248;
  local_c80[0x15] = _DAT_00203240;
  local_c80[0x16] = uVar57;
  local_c80[0x17] = uVar58;
  local_c80[0x18] = uVar34;
  local_c80[0x5b] = 0;
  local_c80[0x19] = qVar59;
  local_c80[0x1a] = 0x400;
  local_c80[0x1b] = 0x3ff;
  auVar116 = ZEXT816(0);
  *(undefined1 (*) [16])(local_c80 + 0x1c) = auVar116;
  local_c80[0x1e] = 4;
  *(undefined1 (*) [16])(local_c80 + 0x1f) = auVar116;
  local_c80[0x21] = 8;
  *(undefined1 (*) [16])(local_c80 + 0x22) = auVar116;
  local_c80[0x24] = 4;
  *(undefined1 (*) [16])(local_c80 + 0x25) = auVar116;
  local_c80[0x27] = 4;
  *(undefined1 (*) [16])(local_c80 + 0x28) = auVar116;
  local_c80[0x2a] = 1;
  local_c80[0x2b] = 0;
  local_c80[0x5c] = pvVar86;
  local_c80[0x2c] = 0;
  local_c80[0x2d] = 8;
  *(undefined1 (*) [16])(local_c80 + 0x2e) = auVar116;
  uVar34 = _UNK_00203278;
  uVar58 = _UNK_00203270;
  uVar57 = _UNK_00203268;
  local_c80[0x30] = _DAT_00203260;
  local_c80[0x31] = uVar57;
  local_c80[0x32] = uVar58;
  local_c80[0x33] = uVar34;
  *(long *)(in_FS_OFFSET + -0x48) = auVar115._0_8_ + 1;
  uVar34 = _UNK_0020fa80;
  uVar58 = _UNK_0020fa78;
  uVar57 = _UNK_0020fa70;
  local_c80[0x35] = PTR_DAT_0020fa68;
  local_c80[0x36] = uVar57;
  local_c80[0x37] = uVar58;
  local_c80[0x38] = uVar34;
  *(undefined1 (*) [16])(local_c80 + 0x39) = auVar115;
  local_c80[0x34] = 0;
  local_c80[0x5d] = 0;
  *(undefined1 *)((long)local_c80 + 0x2f6) = 0;
  if (0 < (long)local_9c8._0_8_) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || ((ulong)local_9c8._8_8_ < sys::A_BASE_0)) ||
       (sys::A_END_0 <= (ulong)local_9c8._8_8_)) {
      free((void *)local_9c8._8_8_);
    }
    else {
      uVar56 = local_9c8._0_8_ * 0x10 - 1;
      lVar88 = LZCOUNT(uVar56);
      lVar74 = 0x40 - lVar88;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(local_9c8._8_8_,lVar74), cVar45 == '\0')) {
        if (lVar88 == 0) goto LAB_0072955a;
        *(ulong *)local_9c8._8_8_ = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
        *(undefined8 *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = local_9c8._8_8_;
      }
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::option::Option<(core[62e902411887be45]::ptr::non_null::NonNull<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::FileInfo>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,[usize_3usize],u64,u64)>>
            (&local_8d8);
  pEVar48 = local_c28;
  if (local_c20 != (ulong *)0x0) {
    pEVar67 = local_c28;
    puVar89 = local_c20;
    do {
      uVar73._0_1_ = pEVar67->e_ident_magic_num;
      uVar73._1_1_ = pEVar67->e_ident_magic_str[0];
      uVar73._2_1_ = pEVar67->e_ident_magic_str[1];
      uVar73._3_1_ = pEVar67->e_ident_magic_str[2];
      uVar73._4_1_ = pEVar67->e_ident_class;
      uVar73._5_1_ = pEVar67->e_ident_data;
      uVar73._6_1_ = pEVar67->e_ident_version;
      uVar73._7_1_ = pEVar67->e_ident_osabi;
      if (uVar73 != 0xffffffffffffffff) {
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart>(pEVar67)
        ;
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part>
                  (pEVar67 + 5);
      }
      pEVar67 = (Elf64_Ehdr *)&pEVar67[8].e_phnum;
      puVar89 = (ulong *)((long)puVar89 + -1);
    } while (puVar89 != (ulong *)0x0);
  }
  if (local_c30 != (ulong *)0x0) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= pEVar48)) {
      free(pEVar48);
    }
    else {
      uVar56 = (long)local_c30 * 0x238 - 1;
      lVar74 = LZCOUNT(uVar56);
      lVar88 = 0x40 - lVar74;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
        if (lVar74 == 0) goto LAB_00729548;
        uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
        pEVar48->e_ident_magic_num = (char)uVar56;
        pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
        pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
        pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
        pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
        pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
        pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
        pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
      }
    }
  }
  if (0 < (long)local_7e8.e_phoff) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (local_7e8.e_shoff < sys::A_BASE_0)) ||
       (sys::A_END_0 <= local_7e8.e_shoff)) {
      free((void *)local_7e8.e_shoff);
    }
    else {
      uVar56 = local_7e8.e_phoff * 0x18 - 1;
      lVar88 = LZCOUNT(uVar56);
      lVar74 = 0x40 - lVar88;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(local_7e8.e_shoff,lVar74), cVar45 == '\0')) {
        if (lVar88 == 0) {
LAB_0072955a:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar74,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(ulong *)local_7e8.e_shoff = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
        *(qword *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = local_7e8.e_shoff;
      }
    }
  }
  pEVar48 = local_9d8;
  if (local_9d0 != (ulong *)0x0) {
    pEVar67 = local_9d8;
    puVar89 = local_9d0;
    do {
      uVar68._0_1_ = pEVar67->e_ident_magic_num;
      uVar68._1_1_ = pEVar67->e_ident_magic_str[0];
      uVar68._2_1_ = pEVar67->e_ident_magic_str[1];
      uVar68._3_1_ = pEVar67->e_ident_magic_str[2];
      uVar68._4_1_ = pEVar67->e_ident_class;
      uVar68._5_1_ = pEVar67->e_ident_data;
      uVar68._6_1_ = pEVar67->e_ident_version;
      uVar68._7_1_ = pEVar67->e_ident_osabi;
      if (uVar68 != 0xffffffffffffffff) {
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>
                  (pEVar67);
      }
      pEVar67 = (Elf64_Ehdr *)&pEVar67->e_phnum;
      puVar89 = (ulong *)((long)puVar89 + -1);
    } while (puVar89 != (ulong *)0x0);
  }
  if (local_9e0 != (ulong *)0x0) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= pEVar48)) {
      free(pEVar48);
    }
    else {
      uVar56 = (long)local_9e0 * 0x38 - 1;
      lVar74 = LZCOUNT(uVar56);
      lVar88 = 0x40 - lVar74;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
        if (lVar74 == 0) goto LAB_00729548;
        uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
        pEVar48->e_ident_magic_num = (char)uVar56;
        pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
        pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
        pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
        pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
        pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
        pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
        pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
      }
    }
  }
  pEVar48 = local_c50;
  if (local_c48 != (ulong *)0x0) {
    pEVar67 = local_c50;
    puVar89 = local_c48;
    do {
      uVar14._0_1_ = pEVar67->e_ident_magic_num;
      uVar14._1_1_ = pEVar67->e_ident_magic_str[0];
      uVar14._2_1_ = pEVar67->e_ident_magic_str[1];
      uVar14._3_1_ = pEVar67->e_ident_magic_str[2];
      uVar14._4_1_ = pEVar67->e_ident_class;
      uVar14._5_1_ = pEVar67->e_ident_data;
      uVar14._6_1_ = pEVar67->e_ident_version;
      uVar14._7_1_ = pEVar67->e_ident_osabi;
      if (uVar14 != 0xffffffffffffffff) {
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::core::Core>(pEVar67);
      }
      pEVar67 = (Elf64_Ehdr *)&pEVar67[0xd].e_type;
      puVar89 = (ulong *)((long)puVar89 + -1);
    } while (puVar89 != (ulong *)0x0);
  }
  if (local_c58 != (ulong *)0x0) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= pEVar48)) {
      free(pEVar48);
    }
    else {
      uVar56 = (long)local_c58 * 0x350 - 1;
      lVar74 = LZCOUNT(uVar56);
      lVar88 = 0x40 - lVar74;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
        if (lVar74 == 0) goto LAB_00729548;
        uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
        pEVar48->e_ident_magic_num = (char)uVar56;
        pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
        pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
        pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
        pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
        pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
        pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
        pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
      }
    }
  }
  if ((undefined1 *)local_bc0._0_8_ != (undefined1 *)0xffffffffffffffff) {
    if ((undefined1 *)local_bc0._0_8_ != (undefined1 *)0x0) {
      pEVar48 = (Elf64_Ehdr *)CONCAT44(uStack_bb4,local_bc0._8_4_);
      if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= pEVar48)) {
        free(pEVar48);
      }
      else {
        puVar66 = &DAT_00000010;
        if (&DAT_00000010 < (ulong)local_bc0._0_8_) {
          puVar66 = (undefined1 *)local_bc0._0_8_;
        }
        lVar74 = 0x40 - LZCOUNT(puVar66 + -1);
        if (((ulong)local_bc0._0_8_ < (undefined1 *)0x10001) ||
           (cVar45 = sys::big_put(pEVar48,lVar74), cVar45 == '\0')) {
          uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
          pEVar48->e_ident_magic_num = (char)uVar56;
          pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
          pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
          pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
          pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
          pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
          pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
          pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
          *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = pEVar48;
        }
      }
    }
    core[62e902411887be45]::ptr::drop_glue::
    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_ba8);
  }
  pEVar48 = local_a08;
  if (local_a00 != (ulong *)0x0) {
    pEVar67 = local_a08;
    puVar89 = local_a00;
    do {
      uVar15._0_1_ = pEVar67->e_ident_magic_num;
      uVar15._1_1_ = pEVar67->e_ident_magic_str[0];
      uVar15._2_1_ = pEVar67->e_ident_magic_str[1];
      uVar15._3_1_ = pEVar67->e_ident_magic_str[2];
      uVar15._4_1_ = pEVar67->e_ident_class;
      uVar15._5_1_ = pEVar67->e_ident_data;
      uVar15._6_1_ = pEVar67->e_ident_version;
      uVar15._7_1_ = pEVar67->e_ident_osabi;
      if (uVar15 != 0xfffffffffffffffe) {
        core[62e902411887be45]::ptr::drop_glue::
        <core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>
                  (pEVar67);
      }
      pEVar67 = (Elf64_Ehdr *)&pEVar67->e_phnum;
      puVar89 = (ulong *)((long)puVar89 + -1);
    } while (puVar89 != (ulong *)0x0);
  }
  if (local_a10 != (ulong *)0x0) {
    if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (pEVar48 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= pEVar48)) {
      free(pEVar48);
    }
    else {
      uVar56 = (long)local_a10 * 0x38 - 1;
      lVar74 = LZCOUNT(uVar56);
      lVar88 = 0x40 - lVar74;
      if ((uVar56 < 0x10000) || (cVar45 = sys::big_put(pEVar48,lVar88), cVar45 == '\0')) {
        if (lVar74 == 0) {
LAB_00729548:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar88,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        uVar56 = *(ulong *)(in_FS_OFFSET + lVar88 * 8 + -0x3c8);
        pEVar48->e_ident_magic_num = (char)uVar56;
        pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
        pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
        pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
        pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
        pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
        pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
        pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
        *(Elf64_Ehdr **)(in_FS_OFFSET + lVar88 * 8 + -0x3c8) = pEVar48;
      }
    }
  }
  pEVar48 = local_bf8;
  if (local_c00 != (Elf64_Ehdr *)0xffffffffffffffff) {
    if (local_c00 != (Elf64_Ehdr *)0x0) {
      if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (local_bf8 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_bf8)) {
        free(local_bf8);
      }
      else {
        pEVar67 = (Elf64_Ehdr *)&DAT_00000010;
        if ((Elf64_Ehdr *)&DAT_00000010 < local_c00) {
          pEVar67 = local_c00;
        }
        lVar74 = 0x40 - LZCOUNT((undefined1 *)((long)&pEVar67[-1].e_shstrndx + 1));
        if ((local_c00 < (Elf64_Ehdr *)0x10001) ||
           (cVar45 = sys::big_put(local_bf8,lVar74), cVar45 == '\0')) {
          uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
          pEVar48->e_ident_magic_num = (char)uVar56;
          pEVar48->e_ident_magic_str[0] = (char)(uVar56 >> 8);
          pEVar48->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
          pEVar48->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
          pEVar48->e_ident_class = (char)(uVar56 >> 0x20);
          pEVar48->e_ident_data = (char)(uVar56 >> 0x28);
          pEVar48->e_ident_version = (char)(uVar56 >> 0x30);
          pEVar48->e_ident_osabi = (char)(uVar56 >> 0x38);
          *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = pEVar48;
        }
      }
    }
    core[62e902411887be45]::ptr::drop_glue::
    <alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>>(&local_be8);
  }
  auVar33._8_4_ = local_bc0._8_4_;
  auVar33._0_8_ = local_bc0._0_8_;
  auVar32._8_4_ = local_bc0._8_4_;
  auVar32._0_8_ = local_bc0._0_8_;
  if (pEVar85 == (Elf64_Ehdr *)0x0) {
    return;
  }
  pEVar48 = local_d58;
  if (((sys::A_BASE_0 == (Elf64_Ehdr *)0x0) || (local_bc0 = auVar32, local_d58 < sys::A_BASE_0)) ||
     (local_bc0 = auVar33, sys::A_END_0 <= local_d58)) {
LAB_00728f52:
    free(pEVar48);
    return;
  }
  pEVar48 = (Elf64_Ehdr *)&DAT_00000010;
  if ((Elf64_Ehdr *)&DAT_00000010 < pEVar85) {
    pEVar48 = pEVar85;
  }
  puVar66 = (undefined1 *)((long)&pEVar48[-1].e_shstrndx + 1);
  lVar74 = 0x40 - LZCOUNT(puVar66);
  if (((undefined1 *)0xffff < puVar66) && (cVar45 = sys::big_put(local_d58,lVar74), cVar45 != '\0'))
  {
    return;
  }
  uVar56 = *(ulong *)(in_FS_OFFSET + lVar74 * 8 + -0x3c8);
LAB_00728f44:
  local_d58->e_ident_magic_num = (char)uVar56;
  local_d58->e_ident_magic_str[0] = (char)(uVar56 >> 8);
  local_d58->e_ident_magic_str[1] = (char)(uVar56 >> 0x10);
  local_d58->e_ident_magic_str[2] = (char)(uVar56 >> 0x18);
  local_d58->e_ident_class = (char)(uVar56 >> 0x20);
  local_d58->e_ident_data = (char)(uVar56 >> 0x28);
  local_d58->e_ident_version = (char)(uVar56 >> 0x30);
  local_d58->e_ident_osabi = (char)(uVar56 >> 0x38);
  *(Elf64_Ehdr **)(in_FS_OFFSET + lVar74 * 8 + -0x3c8) = local_d58;
  return;
}


// ==== pipeline::setup::split2 @ 007295c0 (1349 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::setup::split2 */

void __rustcall pipeline[509596c7b52975b2]::setup::split2(long *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  
  if (param_3 != 0) {
    pcVar16 = param_2 + 8;
    uVar19 = 0;
    do {
      if (param_2[uVar19] == ',') {
        uVar14 = param_3 - (uVar19 + 1);
        pcVar15 = param_2 + uVar19 + 1;
        uVar1 = ~uVar19 + param_3;
        if (uVar14 < 0x10) {
          if (uVar14 == 0) goto LAB_00729757;
          uVar20 = 0;
          goto LAB_00729640;
        }
        uVar20 = ((ulong)(param_2 + uVar19 + 8) & 0xfffffffffffffff8) - (long)pcVar15;
        if (uVar20 == 0) {
          uVar20 = 0;
          goto LAB_0072966d;
        }
        lVar18 = 0;
        goto LAB_007296f0;
      }
      uVar19 = uVar19 + 1;
      pcVar16 = pcVar16 + 1;
    } while (param_3 != uVar19);
  }
  goto LAB_007295f2;
  while (lVar18 = lVar18 + 1,
        (~(ulong)param_2 + ((ulong)pcVar16 & 0xfffffffffffffff8)) - uVar19 != lVar18) {
LAB_007296f0:
    if (param_2[uVar19 + 1 + lVar18] == ',') goto LAB_007295f2;
  }
  if (uVar20 <= uVar14 - 0x10) {
LAB_0072966d:
    auVar24._8_8_ = DAT_00201e28;
    auVar24._0_8_ = DAT_00201e28;
    auVar26._8_8_ = DAT_00201d50;
    auVar26._0_8_ = DAT_00201d50;
    do {
      auVar23 = vpaddq_avx(*(undefined1 (*) [16])(param_2 + uVar19 + 1 + uVar20) ^ auVar24,auVar26);
      auVar23 = vpternlogq_avx512vl(auVar23,*(undefined1 (*) [16])(param_2 + uVar19 + 1 + uVar20),
                                    _DAT_00202c60,0xf6);
      if ((auVar23._8_8_ & auVar23._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
      uVar20 = uVar20 + 0x10;
    } while (uVar20 <= uVar14 - 0x10);
  }
  if (uVar14 != uVar20) {
    lVar18 = 0;
    do {
      if (param_2[uVar19 + lVar18 + uVar20 + 1] == ',') goto LAB_007295f2;
      lVar18 = lVar18 + 1;
    } while (~uVar19 + (param_3 - uVar20) != lVar18);
  }
  goto LAB_00729757;
  while (uVar20 = uVar20 + 1, uVar1 != uVar20) {
LAB_00729640:
    if (param_2[uVar19 + 1 + uVar20] == ',') goto LAB_007295f2;
  }
LAB_00729757:
  pcVar16 = param_2;
  if (uVar19 == 0) {
    uVar20 = 0;
    if (uVar14 == 0) {
LAB_0072977f:
      uVar14 = 0;
    }
    else {
LAB_00729912:
      if (uVar14 < 4) {
        uVar17 = 0;
        uVar21 = 0;
LAB_00729aa5:
        lVar18 = uVar17 + uVar19;
        do {
          uVar21 = uVar21 + (param_2[lVar18 + 1] == '\"');
          lVar18 = lVar18 + 1;
        } while (param_3 - 1 != lVar18);
      }
      else if (uVar14 < 0x10) {
        uVar21 = 0;
        uVar22 = 0;
LAB_00729a2d:
        uVar17 = uVar14 & 0x7ffffffffffffffc;
        auVar25 = ZEXT864(uVar21);
        auVar29._4_4_ = DAT_00206400;
        auVar29._0_4_ = DAT_00206400;
        auVar29._8_4_ = DAT_00206400;
        auVar29._12_4_ = DAT_00206400;
        do {
          uVar9 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar19 + 1 + uVar22)),auVar29);
          auVar13 = vpmovm2q_avx512vl(uVar9);
          auVar13 = vpsubq_avx2(auVar25._0_32_,auVar13);
          auVar25 = ZEXT3264(auVar13);
          uVar22 = uVar22 + 4;
        } while ((uVar1 & 0x7ffffffffffffffc) != uVar22);
        auVar24 = vpaddq_avx(auVar13._0_16_,auVar13._16_16_);
        auVar26 = vpshufd_avx(auVar24,0xee);
        auVar24 = vpaddq_avx(auVar24,auVar26);
        uVar21 = auVar24._0_8_;
        if (uVar14 != uVar17) goto LAB_00729aa5;
      }
      else {
        uVar17 = uVar14 & 0x7ffffffffffffff0;
        auVar25 = ZEXT1664((undefined1  [16])0x0);
        uVar21 = 0;
        auVar28._4_4_ = DAT_00206400;
        auVar28._0_4_ = DAT_00206400;
        auVar28._8_4_ = DAT_00206400;
        auVar28._12_4_ = DAT_00206400;
        auVar30 = ZEXT1664((undefined1  [16])0x0);
        auVar31 = ZEXT1664((undefined1  [16])0x0);
        auVar32 = ZEXT1664((undefined1  [16])0x0);
        do {
          uVar9 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar19 + 1 + uVar21)),auVar28);
          uVar6 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar19 + 5 + uVar21)),auVar28);
          uVar7 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar19 + 9 + uVar21)),auVar28);
          uVar8 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar19 + 0xd + uVar21)),auVar28);
          auVar13 = vpmovm2q_avx512vl(uVar9);
          auVar13 = vpsubq_avx2(auVar25._0_32_,auVar13);
          auVar25 = ZEXT3264(auVar13);
          auVar10 = vpmovm2q_avx512vl(uVar6);
          auVar10 = vpsubq_avx2(auVar30._0_32_,auVar10);
          auVar30 = ZEXT3264(auVar10);
          auVar11 = vpmovm2q_avx512vl(uVar7);
          auVar11 = vpsubq_avx2(auVar31._0_32_,auVar11);
          auVar31 = ZEXT3264(auVar11);
          auVar12 = vpmovm2q_avx512vl(uVar8);
          auVar12 = vpsubq_avx2(auVar32._0_32_,auVar12);
          auVar32 = ZEXT3264(auVar12);
          uVar21 = uVar21 + 0x10;
        } while ((uVar1 & 0x7ffffffffffffff0) != uVar21);
        auVar3._0_8_ = auVar12._0_8_ + auVar11._0_8_ + auVar10._0_8_ + auVar13._0_8_;
        auVar3._8_8_ = auVar12._8_8_ + auVar11._8_8_ + auVar10._8_8_ + auVar13._8_8_;
        auVar5._16_8_ = auVar12._16_8_ + auVar11._16_8_ + auVar10._16_8_ + auVar13._16_8_;
        auVar5._0_16_ = auVar3;
        auVar5._24_8_ = auVar12._24_8_ + auVar11._24_8_ + auVar10._24_8_ + auVar13._24_8_;
        auVar24 = vpaddq_avx(auVar3,auVar5._16_16_);
        auVar26 = vpshufd_avx(auVar24,0xee);
        auVar24 = vpaddq_avx(auVar24,auVar26);
        uVar21 = auVar24._0_8_;
        if (uVar14 != uVar17) {
          uVar22 = uVar17;
          if ((uVar14 & 0xc) == 0) goto LAB_00729aa5;
          goto LAB_00729a2d;
        }
      }
      if (uVar21 != 0) {
        if (((uVar21 != 2) || (*pcVar15 != '\"')) || (param_2[param_3 - 1] != '\"'))
        goto LAB_007295f2;
        uVar14 = uVar14 - 2;
        pcVar15 = param_2 + uVar19 + 2;
      }
    }
    *param_1 = (long)pcVar16;
    param_1[1] = uVar20;
    param_1[2] = (long)pcVar15;
    param_1[3] = uVar14;
  }
  else {
    if (uVar19 < 4) {
      uVar21 = 0;
      uVar17 = 0;
LAB_007298d9:
      do {
        uVar17 = uVar17 + (param_2[uVar21] == '\"');
        uVar21 = uVar21 + 1;
LAB_007298eb:
      } while (uVar19 != uVar21);
    }
    else {
      if (uVar19 < 0x10) {
        uVar17 = 0;
        uVar20 = 0;
LAB_0072986f:
        uVar21 = uVar19 & 0x7ffffffffffffffc;
        auVar25 = ZEXT864(uVar17);
        auVar27._4_4_ = DAT_00206400;
        auVar27._0_4_ = DAT_00206400;
        auVar27._8_4_ = DAT_00206400;
        auVar27._12_4_ = DAT_00206400;
        do {
          uVar9 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar20)),auVar27);
          auVar13 = vpmovm2q_avx512vl(uVar9);
          auVar13 = vpsubq_avx2(auVar25._0_32_,auVar13);
          auVar25 = ZEXT3264(auVar13);
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
        auVar24 = vpaddq_avx(auVar13._0_16_,auVar13._16_16_);
        auVar26 = vpshufd_avx(auVar24,0xee);
        auVar24 = vpaddq_avx(auVar24,auVar26);
        uVar17 = auVar24._0_8_;
        goto LAB_007298eb;
      }
      uVar21 = uVar19 & 0x7ffffffffffffff0;
      auVar25 = ZEXT1664((undefined1  [16])0x0);
      uVar20 = 0;
      auVar23._4_4_ = DAT_00206400;
      auVar23._0_4_ = DAT_00206400;
      auVar23._8_4_ = DAT_00206400;
      auVar23._12_4_ = DAT_00206400;
      auVar30 = ZEXT1664((undefined1  [16])0x0);
      auVar31 = ZEXT1664((undefined1  [16])0x0);
      auVar32 = ZEXT1664((undefined1  [16])0x0);
      do {
        uVar9 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar20)),auVar23);
        uVar6 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar20 + 4)),auVar23);
        uVar7 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar20 + 8)),auVar23);
        uVar8 = vpcmpeqb_avx512vl(ZEXT416(*(uint *)(param_2 + uVar20 + 0xc)),auVar23);
        auVar13 = vpmovm2q_avx512vl(uVar9);
        auVar13 = vpsubq_avx2(auVar25._0_32_,auVar13);
        auVar25 = ZEXT3264(auVar13);
        auVar10 = vpmovm2q_avx512vl(uVar6);
        auVar10 = vpsubq_avx2(auVar30._0_32_,auVar10);
        auVar30 = ZEXT3264(auVar10);
        auVar11 = vpmovm2q_avx512vl(uVar7);
        auVar11 = vpsubq_avx2(auVar31._0_32_,auVar11);
        auVar31 = ZEXT3264(auVar11);
        auVar12 = vpmovm2q_avx512vl(uVar8);
        auVar12 = vpsubq_avx2(auVar32._0_32_,auVar12);
        auVar32 = ZEXT3264(auVar12);
        uVar20 = uVar20 + 0x10;
      } while ((uVar19 & 0xfffffffffffffff0) != uVar20);
      auVar2._0_8_ = auVar12._0_8_ + auVar11._0_8_ + auVar10._0_8_ + auVar13._0_8_;
      auVar2._8_8_ = auVar12._8_8_ + auVar11._8_8_ + auVar10._8_8_ + auVar13._8_8_;
      auVar4._16_8_ = auVar12._16_8_ + auVar11._16_8_ + auVar10._16_8_ + auVar13._16_8_;
      auVar4._0_16_ = auVar2;
      auVar4._24_8_ = auVar12._24_8_ + auVar11._24_8_ + auVar10._24_8_ + auVar13._24_8_;
      auVar24 = vpaddq_avx(auVar2,auVar4._16_16_);
      auVar26 = vpshufd_avx(auVar24,0xee);
      auVar24 = vpaddq_avx(auVar24,auVar26);
      uVar17 = auVar24._0_8_;
      if (uVar19 != uVar21) {
        uVar20 = uVar21;
        if ((uVar19 & 0xc) != 0) goto LAB_0072986f;
        goto LAB_007298d9;
      }
    }
    if (uVar17 == 2) {
      if ((*param_2 == '\"') && (param_2[uVar19 - 1] == '\"')) {
        uVar20 = uVar19 - 2;
        pcVar16 = param_2 + 1;
        goto joined_r0x00729945;
      }
    }
    else {
      uVar20 = uVar19;
      if (uVar17 == 0) {
joined_r0x00729945:
        if (uVar14 == 0) goto LAB_0072977f;
        goto LAB_00729912;
      }
    }
LAB_007295f2:
    *param_1 = 0;
  }
  return;
}


// ==== pipeline::setup::ckix_mode @ 00729b20 (925 bytes)

/* pipeline[509596c7b52975b2]::setup::ckix_mode */

ulong __rustcall pipeline[509596c7b52975b2]::setup::ckix_mode(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined **local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  
  local_1a0 = 0x435f4c58;
  uStack_19c = 0x58494b;
  uVar16 = vptestmb_avx512vl(ZEXT816(0x58494b435f4c58),ZEXT816(0x58494b435f4c58));
  uVar3 = vptestnmb_avx512vl(ZEXT816(0x58494b435f4c58),ZEXT816(0x58494b435f4c58));
  auVar1 = vpmovm2d_avx512vl(uVar3);
  auVar2 = vpmovm2d_avx512vl(uVar16);
  auVar1 = vpblendd_avx2(auVar2,auVar1,0x80);
  uVar16 = vpmovd2m_avx512vl(auVar1);
  if ((char)uVar16 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1b8,&local_1a0);
    if (local_1b8 == 0xfffffffffffffffe) goto LAB_00729b9c;
    if (local_1b8 != 0xffffffffffffffff) {
      core[62e902411887be45]::str::converts::from_utf8(&local_1a0,local_1b0,local_1a8);
      local_1d8 = CONCAT44(uStack_19c,local_1a0);
      local_1d0 = local_1b8;
      local_1c8 = local_1b0;
      local_1c0 = local_1a8;
      if (local_1d8 == 0) {
        auVar17 = <str>::trim_matches::<<char>::is_whitespace>(local_1b0,local_1a8);
        uVar11 = auVar17._8_8_;
        pcVar8 = auVar17._0_8_;
        if (uVar11 == 0) {
          uVar10 = 0;
          bVar4 = true;
        }
        else {
          if (uVar11 == 1) {
            cVar5 = *pcVar8;
            uVar10 = 0;
            bVar4 = true;
            if ((cVar5 == '+') || (cVar5 == '-')) goto joined_r0x00729ea3;
          }
          else {
            cVar5 = *pcVar8;
          }
          uVar10 = (ulong)(cVar5 == '+');
          uVar13 = uVar11 - uVar10;
          pbVar12 = (byte *)(pcVar8 + uVar10);
          if (uVar13 < 9) {
            if (uVar11 == uVar10) {
              uVar9 = 0;
            }
            else {
              uVar6 = *pbVar12 - 0x30;
              uVar9 = (ulong)uVar6;
              uVar10 = 0;
              bVar4 = true;
              if (9 < uVar6) goto joined_r0x00729ea3;
              if (uVar13 != 1) {
                if (9 < pbVar12[1] - 0x30) goto joined_r0x00729ea3;
                uVar6 = (pbVar12[1] - 0x30) + uVar6 * 10;
                uVar9 = (ulong)uVar6;
                if (uVar13 != 2) {
                  if (9 < pbVar12[2] - 0x30) goto joined_r0x00729ea3;
                  uVar6 = (pbVar12[2] - 0x30) + uVar6 * 10;
                  uVar9 = (ulong)uVar6;
                  if (uVar13 != 3) {
                    if (9 < pbVar12[3] - 0x30) goto joined_r0x00729ea3;
                    uVar6 = (pbVar12[3] - 0x30) + uVar6 * 10;
                    uVar9 = (ulong)uVar6;
                    if (uVar13 != 4) {
                      if (9 < pbVar12[4] - 0x30) goto joined_r0x00729ea3;
                      uVar6 = (pbVar12[4] - 0x30) + uVar6 * 10;
                      uVar9 = (ulong)uVar6;
                      if (uVar13 != 5) {
                        if (9 < pbVar12[5] - 0x30) goto joined_r0x00729ea3;
                        uVar6 = (pbVar12[5] - 0x30) + uVar6 * 10;
                        uVar9 = (ulong)uVar6;
                        if (uVar13 != 6) {
                          if (9 < pbVar12[6] - 0x30) goto joined_r0x00729ea3;
                          uVar6 = (pbVar12[6] - 0x30) + uVar6 * 10;
                          uVar9 = (ulong)uVar6;
                          if (uVar13 != 7) {
                            if (9 < pbVar12[7] - 0x30) goto joined_r0x00729ea3;
                            uVar9 = (ulong)((pbVar12[7] - 0x30) + uVar6 * 10);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00729dec:
            uVar10 = uVar9 << 0x20;
            bVar4 = false;
          }
          else {
            uVar9 = 0;
            lVar14 = 0;
            do {
              if (lVar14 == uVar11 - uVar10) goto LAB_00729dec;
              uVar6 = (uint)(uVar9 * 10);
              if (((int)(uVar9 * 10 >> 0x20) != 0) || (uVar7 = pbVar12[lVar14] - 0x30, 9 < uVar7)) {
                uVar10 = 0;
                bVar4 = true;
                goto joined_r0x00729ea3;
              }
              lVar14 = lVar14 + 1;
              uVar9 = (ulong)(uVar7 + uVar6);
            } while (!CARRY4(uVar7,uVar6));
            uVar10 = 0;
            bVar4 = true;
          }
        }
joined_r0x00729ea3:
        if (local_1b8 != 0) {
          if (((undefined **)(sys::A_BASE_0 + -1) < local_1b0) && (local_1b0 < sys::A_END_0)) {
            uVar11 = 0x10;
            if (0x10 < local_1b8) {
              uVar11 = local_1b8;
            }
            lVar15 = LZCOUNT(uVar11 - 1);
            lVar14 = 0x40 - lVar15;
            if ((uVar11 - 1 < 0x10000) || (cVar5 = sys::big_put(local_1b0,lVar14), cVar5 == '\0')) {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *local_1b0 = *(undefined **)(in_FS_OFFSET + lVar14 * 8 + -0x3c8);
              *(undefined ***)(in_FS_OFFSET + lVar14 * 8 + -0x3c8) = local_1b0;
            }
          }
          else {
            free(local_1b0);
          }
        }
        if (bVar4) {
          return 0;
        }
        return uVar10 >> 0x20;
      }
      goto LAB_00729c45;
    }
  }
  else {
    local_1b0 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00729b9c:
    if ((1 < ((uint)local_1b0 & 3) - 2) && (((ulong)local_1b0 & 3) != 0)) {
      (**(code **)((long)local_1b0 + 0x17))((long)local_1b0 + -1);
    }
  }
  local_1d0 = 0xffffffffffffffff;
  local_1d8 = 1;
LAB_00729c45:
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_1d8);
  return 0;
}


// ==== pipeline::setup::click_key @ 00729ec0 (4133 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::setup::click_key */

undefined1  [16] __rustcall
pipeline[509596c7b52975b2]::setup::click_key
          (long *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [32];
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  ulong *__ptr;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  char cVar12;
  undefined1 (*pauVar13) [64];
  uint uVar14;
  ulong *puVar15;
  ulong **ppuVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *unaff_R15;
  ulong *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  ushort uVar28;
  ushort uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  ulong *local_130;
  ulong *local_128;
  ulong *local_120;
  ulong *local_118;
  ulong *local_110;
  ulong *puStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong *puStack_b0;
  ulong *local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  
  if (param_3 == 0) {
    if (*param_1 != 0) {
      puVar7 = (ulong *)param_1[1];
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar7 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar7))
      {
        free(puVar7);
        uVar22 = 0;
        goto LAB_0072acac;
      }
      uVar6 = *param_1 * 0x18 - 1;
      unaff_R15 = (ulong *)LZCOUNT(uVar6);
      lVar17 = 0x40 - (long)unaff_R15;
      if ((uVar6 < 0x10000) || (cVar12 = sys::big_put(puVar7,lVar17), cVar12 == '\0')) {
        if (unaff_R15 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar7 = *(ulong *)(in_FS_OFFSET + lVar17 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar17 * 8 + -0x3c8) = puVar7;
        uVar22 = 0;
        goto LAB_0072acac;
      }
    }
    uVar22 = 0;
    goto LAB_0072acac;
  }
  local_d0 = 0;
  local_c8 = 8;
  local_b8 = *param_1;
  puVar7 = (ulong *)param_1[1];
  local_c0 = 0;
  unaff_R15 = (ulong *)param_1[2];
  puStack_b0 = puVar7;
  local_a8 = unaff_R15;
  if (unaff_R15 != (ulong *)0x0) {
    uVar6 = (long)unaff_R15 * 8;
    local_120 = param_4;
    local_d8 = param_3;
    __ptr = (ulong *)__rustc[45371133cddedda4]::__rust_alloc();
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar6);
    }
    uVar24 = (long)unaff_R15 * 0x18;
    uVar14 = (uint)unaff_R15;
    if ((unaff_R15 < &DAT_00000005) ||
       (__ptr < puVar7 + (long)unaff_R15 * 3 && puVar7 + 2 < __ptr + (long)unaff_R15)) {
      puVar21 = (ulong *)0x0;
    }
    else {
      if (&DAT_00000010 < unaff_R15) {
        uVar11 = 0x10;
        if (((ulong)unaff_R15 & 0xf) != 0) {
          uVar11 = (ulong)(uVar14 & 0xf);
        }
        puVar21 = (ulong *)((long)unaff_R15 - uVar11);
        pauVar13 = (undefined1 (*) [64])(puVar7 + 0x26);
        puVar9 = (ulong *)0x0;
        auVar37 = ZEXT3264(_DAT_002030c0);
        do {
          in_ZMM1 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])((long)pauVar13[-4] + 0x20)),
                                     auVar37,*(undefined1 (*) [64])((long)pauVar13[-5] + 0x20));
          auVar34 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar13[-2]),auVar37,
                                     pauVar13[-3]);
          auVar35 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])((long)pauVar13[-1] + 0x20)),
                                     auVar37,*(undefined1 (*) [64])((long)pauVar13[-2] + 0x20));
          auVar36 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar13[1]),auVar37,*pauVar13);
          *(undefined1 (*) [32])(__ptr + (long)puVar9) = in_ZMM1._0_32_;
          *(undefined1 (*) [32])(__ptr + (long)((long)puVar9 + 4)) = auVar34._0_32_;
          *(undefined1 (*) [32])(__ptr + (long)(puVar9 + 1)) = auVar35._0_32_;
          *(undefined1 (*) [32])(__ptr + (long)((long)puVar9 + 0xc)) = auVar36._0_32_;
          puVar9 = puVar9 + 2;
          pauVar13 = pauVar13 + 6;
        } while (puVar21 != puVar9);
        puVar9 = puVar21;
        if ((uint)uVar11 < 5) goto LAB_0072a11d;
      }
      else {
        puVar9 = (ulong *)0x0;
      }
      uVar11 = 4;
      if (((ulong)unaff_R15 & 3) != 0) {
        uVar11 = (ulong)(uVar14 & 3);
      }
      puVar21 = (ulong *)((long)unaff_R15 - uVar11);
      pauVar13 = (undefined1 (*) [64])(puVar7 + (long)puVar9 * 3 + 2);
      auVar37 = ZEXT3264(_DAT_002030c0);
      do {
        in_ZMM1 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar13[1]),auVar37,*pauVar13);
        *(undefined1 (*) [32])(__ptr + (long)puVar9) = in_ZMM1._0_32_;
        puVar9 = (ulong *)((long)puVar9 + 4);
        pauVar13 = (undefined1 (*) [64])((long)pauVar13[1] + 0x20);
      } while (puVar21 != puVar9);
    }
LAB_0072a11d:
    uVar14 = uVar14 - (int)puVar21 & 7;
    puVar9 = puVar21;
    if (uVar14 != 0) {
      lVar17 = 0;
      do {
        __ptr[(long)puVar9] = puVar7[(long)puVar21 * 3 + lVar17 + 2];
        puVar9 = (ulong *)((long)puVar9 + 1);
        lVar17 = lVar17 + 3;
      } while ((ulong)uVar14 * 3 != lVar17);
    }
    if ((ulong)((long)puVar21 - (long)unaff_R15) < 0xfffffffffffffff9) {
      puVar21 = puVar7 + (long)puVar9 * 3 + 0x17;
      do {
        __ptr[(long)puVar9] = puVar21[-0x15];
        __ptr[(long)((long)puVar9 + 1)] = puVar21[-0x12];
        __ptr[(long)((long)puVar9 + 2)] = puVar21[-0xf];
        __ptr[(long)((long)puVar9 + 3)] = puVar21[-0xc];
        __ptr[(long)((long)puVar9 + 4)] = puVar21[-9];
        __ptr[(long)((long)puVar9 + 5)] = puVar21[-6];
        __ptr[(long)((long)puVar9 + 6)] = puVar21[-3];
        __ptr[(long)((long)puVar9 + 7)] = *puVar21;
        puVar9 = puVar9 + 1;
        puVar21 = puVar21 + 0x18;
      } while (unaff_R15 != puVar9);
LAB_0072a1db:
      if (&DAT_00000014 < unaff_R15) {
        in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
        core[62e902411887be45]::slice::sort::unstable::ipnsort::
        <u64,<u64_as_core[62e902411887be45]::cmp::PartialOrd>::lt>(__ptr,unaff_R15);
      }
      else {
        if (((ulong)unaff_R15 & 1) == 0) {
          uVar11 = *__ptr;
          uVar20 = __ptr[1];
          if (uVar20 < uVar11) {
            lVar17 = 8;
            do {
              *(ulong *)((long)__ptr + lVar17) = uVar11;
              if (lVar17 == 8) {
                puVar21 = __ptr;
                goto LAB_0072a269;
              }
              uVar11 = *(ulong *)((long)__ptr + lVar17 + -0x10);
              lVar17 = lVar17 + -8;
            } while (uVar20 < uVar11);
            puVar21 = (ulong *)(lVar17 + (long)__ptr);
LAB_0072a269:
            *puVar21 = uVar20;
          }
          puVar21 = __ptr + 2;
        }
        else {
          puVar21 = __ptr + 1;
        }
        if (unaff_R15 != (ulong *)&_nl_current_LC_CTYPE_used) {
          puVar9 = puVar21 + 1;
          do {
            uVar11 = puVar21[-1];
            uVar20 = *puVar21;
            if (uVar20 < uVar11) {
              puVar25 = puVar21;
              do {
                puVar15 = puVar25 + -1;
                *puVar25 = uVar11;
                if (puVar15 == __ptr) {
                  puVar15 = __ptr;
                  break;
                }
                uVar11 = puVar25[-2];
                puVar25 = puVar15;
              } while (uVar20 < uVar11);
              *puVar15 = uVar20;
              uVar20 = *puVar21;
              uVar11 = puVar21[1];
              if (uVar11 < uVar20) goto LAB_0072a3a5;
            }
            else {
              uVar20 = *puVar21;
              uVar11 = puVar21[1];
              if (uVar11 < uVar20) {
LAB_0072a3a5:
                puVar25 = puVar9;
                do {
                  puVar15 = puVar25 + -1;
                  *puVar25 = uVar20;
                  if (puVar15 == __ptr) {
                    puVar15 = __ptr;
                    break;
                  }
                  uVar20 = puVar25[-2];
                  puVar25 = puVar15;
                } while (uVar11 < uVar20);
                *puVar15 = uVar11;
              }
            }
            puVar21 = puVar21 + 2;
            puVar9 = puVar9 + 2;
          } while (puVar21 != __ptr + (long)unaff_R15);
        }
      }
      cVar12 = '\0';
      puVar21 = (ulong *)&DAT_00000001;
LAB_0072a290:
      puVar9 = (ulong *)((long)puVar21 + 1);
      if (__ptr[(long)puVar21] != __ptr[(long)((long)puVar21 + -1)]) goto code_r0x0072a29f;
      if (puVar9 < unaff_R15) {
        puVar1 = (undefined1 *)((long)puVar21 + -1);
        if (((int)((ulong)unaff_R15 ^ 2) - (int)puVar1 & 3U) != 0) {
          uVar11 = (ulong)((byte)((char)((ulong)unaff_R15 ^ 2) + cVar12) & 3);
          do {
            if (__ptr[(long)puVar9] != __ptr[(long)((long)puVar21 + -1)]) {
              __ptr[(long)puVar21] = __ptr[(long)puVar9];
              puVar21 = (ulong *)((long)puVar21 + 1);
            }
            puVar9 = (ulong *)((long)puVar9 + 1);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if ((undefined1 *)0x2 < (undefined1 *)((long)unaff_R15 + (-3 - (long)puVar1))) {
          do {
            if (__ptr[(long)puVar9] == __ptr[(long)((long)puVar21 + -1)]) {
              uVar11 = __ptr[(long)((long)puVar9 + 1)];
              puVar25 = puVar21;
              puVar15 = puVar21;
              if (uVar11 != __ptr[(long)((long)puVar21 + -1)]) goto LAB_0072a4f3;
LAB_0072a4b4:
              uVar11 = __ptr[(long)((long)puVar9 + 2)];
              puVar21 = puVar15;
              if (uVar11 != __ptr[(long)((long)puVar15 + -1)]) goto LAB_0072a507;
LAB_0072a4c7:
              uVar11 = __ptr[(long)((long)puVar9 + 3)];
              if (uVar11 != __ptr[(long)((long)puVar21 + -1)]) goto LAB_0072a51e;
            }
            else {
              __ptr[(long)puVar21] = __ptr[(long)puVar9];
              puVar25 = (ulong *)((long)puVar21 + 1);
              uVar11 = __ptr[(long)((long)puVar9 + 1)];
              puVar15 = puVar25;
              if (uVar11 == __ptr[(long)puVar21]) goto LAB_0072a4b4;
LAB_0072a4f3:
              __ptr[(long)puVar25] = uVar11;
              puVar15 = (ulong *)((long)puVar25 + 1);
              uVar11 = __ptr[(long)((long)puVar9 + 2)];
              puVar21 = puVar15;
              if (uVar11 == __ptr[(long)puVar25]) goto LAB_0072a4c7;
LAB_0072a507:
              __ptr[(long)puVar15] = uVar11;
              puVar21 = (ulong *)((long)puVar15 + 1);
              uVar11 = __ptr[(long)((long)puVar9 + 3)];
              if (uVar11 != __ptr[(long)puVar15]) {
LAB_0072a51e:
                __ptr[(long)puVar21] = uVar11;
                puVar21 = (ulong *)((long)puVar21 + 1);
              }
            }
            puVar9 = (ulong *)((long)puVar9 + 4);
          } while (unaff_R15 != puVar9);
        }
      }
      goto LAB_0072a3ea;
    }
    if (unaff_R15 != (ulong *)&DAT_00000001) goto LAB_0072a1db;
    goto LAB_0072a3f4;
  }
  goto LAB_0072ac99;
code_r0x0072a29f:
  cVar12 = cVar12 + '\x03';
  puVar21 = puVar9;
  if (unaff_R15 == puVar9) goto code_r0x0072a2aa;
  goto LAB_0072a290;
code_r0x0072a2aa:
  puVar21 = unaff_R15;
LAB_0072a3ea:
  if ((ulong *)0x13 < puVar21) {
    uVar11 = uVar6;
    puVar9 = puVar7;
    do {
      puVar25 = puVar9 + 3;
      puVar15 = (ulong *)0x2;
      ppuVar16 = &local_110;
      if ((int)*puVar9 == 1) {
        if (((puVar9[1] ^ param_2) * 0x3dee219263 & 0xfffffffe00) == 0) {
          uVar11 = puVar9[2];
          local_110 = (ulong *)&DAT_00000001;
          puVar15 = (ulong *)puVar9[1];
          ppuVar16 = &local_128;
        }
      }
      *ppuVar16 = puVar15;
      puVar9 = local_110;
      if (local_110 != (ulong *)&_nl_current_LC_CTYPE_used) {
        local_130 = local_110;
        local_110 = local_128;
        local_130._0_4_ = (int)puVar9;
        bVar27 = (int)local_130 == 2;
        local_130 = puVar9;
        if (bVar27) goto LAB_0072a77f;
        in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
        puStack_108 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(0x20,8);
        if (puStack_108 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x20);
        }
        *puStack_108 = uVar11;
        local_110 = (ulong *)&DAT_00000004;
        puStack_100 = (ulong *)&DAT_00000001;
        puVar9 = puStack_108;
        goto joined_r0x0072a685;
      }
      uVar24 = uVar24 - 0x18;
      puVar9 = puVar25;
    } while (uVar24 != 0);
    local_130 = (ulong *)&_nl_current_LC_CTYPE_used;
LAB_0072a77f:
    unaff_R15 = (ulong *)0x0;
    puVar9 = (ulong *)&DAT_00000008;
    puVar7 = (ulong *)0x0;
    goto LAB_0072a796;
  }
LAB_0072a3f4:
  uVar22 = 0;
  puVar26 = unaff_R15;
LAB_0072a3f7:
  unaff_R15 = puVar26;
  if (((sys::A_BASE_0 == (ulong *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)) {
    free(__ptr);
  }
  else {
    uVar24 = 0x10;
    if (0x10 < uVar6) {
      uVar24 = uVar6;
    }
    lVar23 = LZCOUNT(uVar24 - 1);
    lVar17 = 0x40 - lVar23;
    if (0xffff < uVar24 - 1) {
      cVar12 = sys::big_put(__ptr,lVar17);
      if (cVar12 != '\0') goto LAB_0072ac9c;
    }
    if (lVar23 == 0) {
LAB_0072aed8:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(lVar17,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(ulong *)(in_FS_OFFSET + lVar17 * 8 + -0x3c8);
    *(ulong **)(in_FS_OFFSET + lVar17 * 8 + -0x3c8) = __ptr;
  }
  goto LAB_0072ac9c;
joined_r0x0072a685:
  puVar15 = puStack_100;
  if (puVar25 != puVar7 + (long)unaff_R15 * 3) {
    puVar10 = (ulong *)0x2;
    ppuVar16 = &local_128;
    if ((int)*puVar25 == 1) {
      if (((puVar25[1] ^ param_2) * 0x3dee219263 & 0xfffffffe00) == 0) {
        uVar24 = puVar25[2];
        local_128 = (ulong *)&DAT_00000001;
        puVar10 = (ulong *)puVar25[1];
        ppuVar16 = &local_130;
      }
    }
    puVar25 = puVar25 + 3;
    *ppuVar16 = puVar10;
    puVar10 = local_128;
    if (local_128 != (ulong *)&_nl_current_LC_CTYPE_used) {
      local_118 = local_128;
      local_128 = local_130;
      local_118._0_4_ = (int)puVar10;
      bVar27 = (int)local_118 == 2;
      local_118 = puVar10;
      if (bVar27) goto LAB_0072a78c;
      if (puStack_100 == local_110) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_110,puStack_100,1,8,8);
        puVar9 = puStack_108;
      }
      puVar9[(long)puVar15] = uVar24;
      puStack_100 = (ulong *)((long)puVar15 + 1);
    }
    goto joined_r0x0072a685;
  }
  local_118 = (ulong *)&_nl_current_LC_CTYPE_used;
LAB_0072a78c:
  puVar7 = local_110;
  puVar9 = puStack_108;
  unaff_R15 = puStack_100;
LAB_0072a796:
  if (*(char *)(in_FS_OFFSET + -0x38) == '\x01') {
    local_f0 = *(undefined1 (*) [16])(in_FS_OFFSET + -0x48);
  }
  else {
    in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
    local_f0 = std[c60ef17cbf7de79f]::sys::random::linux::hashmap_random_keys();
    *(long *)(in_FS_OFFSET + -0x40) = local_f0._8_8_;
    *(undefined1 *)(in_FS_OFFSET + -0x38) = 1;
  }
  uStack_f8 = _UNK_0020fa80;
  puStack_100 = _UNK_0020fa78;
  puStack_108 = _UNK_0020fa70;
  local_110 = (ulong *)PTR_DAT_0020fa68;
  *(long *)(in_FS_OFFSET + -0x48) = local_f0._0_8_ + 1;
  puVar25 = (ulong *)0x0;
  if (unaff_R15 != (ulong *)0x0) {
    do {
      in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
      cVar12 = <hashbrown[ee4ff39ba1229c30]::map::HashMap<u64,(),std[c60ef17cbf7de79f]::hash::random::RandomState>>
               ::insert(&local_110,puVar9[(long)puVar25]);
      puVar15 = (ulong *)((long)puVar25 + 1);
      if (cVar12 != '\0') {
        if (puVar15 < unaff_R15) {
          do {
            cVar12 = <hashbrown[ee4ff39ba1229c30]::map::HashMap<u64,(),std[c60ef17cbf7de79f]::hash::random::RandomState>>
                     ::insert(&local_110,puVar9[(long)puVar15]);
            if (cVar12 == '\0') {
              puVar9[(long)puVar25] = puVar9[(long)puVar15];
              puVar25 = (ulong *)((long)puVar25 + 1);
            }
            puVar15 = (ulong *)((long)puVar15 + 1);
          } while (unaff_R15 != puVar15);
        }
        goto LAB_0072a823;
      }
      puVar25 = puVar15;
    } while (unaff_R15 != puVar15);
    puVar25 = unaff_R15;
  }
LAB_0072a823:
  puVar15 = local_120;
  if (puStack_108 != (ulong *)0x0) {
    uVar11 = (long)puStack_108 * 8 & 0xfffffffffffffff0;
    uVar24 = (long)puStack_108 + uVar11 + 0x21;
    if (uVar24 != 0) {
      puVar10 = (ulong *)((long)local_110 + (-0x10 - uVar11));
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar10 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= puVar10)) {
        in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
        free(puVar10);
        unaff_R15 = puVar9;
      }
      else {
        uVar11 = 0x10;
        if (0x10 < uVar24) {
          uVar11 = uVar24;
        }
        unaff_R15 = (ulong *)(0x40 - LZCOUNT(uVar11 - 1));
        if (0x10000 < uVar24) {
          in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
          cVar12 = sys::big_put(puVar10,unaff_R15);
          if (cVar12 != '\0') goto LAB_0072a8ee;
        }
        *puVar10 = *(ulong *)(in_FS_OFFSET + (long)unaff_R15 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + (long)unaff_R15 * 8 + -0x3c8) = puVar10;
      }
    }
  }
LAB_0072a8ee:
  auVar38 = in_ZMM1._0_16_;
  uVar24 = 0x8000000;
  if (local_d8 < 0x8000000) {
    uVar24 = local_d8;
  }
  if (puVar25 != (ulong *)0x0) {
    puVar10 = __ptr + (long)puVar21;
    puVar26 = (ulong *)((long)puVar21 * 8);
    puVar8 = __ptr;
    do {
      puVar26 = puVar26 + -1;
      if (puVar8 == puVar10) goto LAB_0072a974;
      uVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      unaff_R15 = puVar26;
    } while (uVar11 == *puVar9);
    if (puVar8 == puVar10) {
LAB_0072a974:
      puVar26 = unaff_R15;
      uVar22 = 0;
    }
    else {
      if ((ulong)((long)puVar10 - (long)puVar8) < 0x60) {
        puVar18 = (ulong *)0x0;
        bVar27 = false;
LAB_0072aad8:
        puVar26 = (ulong *)((ulong)puVar26 >> 3);
        do {
          bVar27 = (bool)(bVar27 | puVar8[(long)puVar18] != *puVar9);
          puVar18 = (ulong *)((long)puVar18 + 1);
        } while (puVar26 != puVar18);
      }
      else {
        puVar19 = (ulong *)((ulong)((long)puVar10 - (long)puVar8) >> 3);
        puVar18 = (ulong *)((ulong)puVar19 & 0xfffffffffffffffc);
        auVar33 = vpbroadcastq_avx512vl();
        uVar11 = 0;
        uVar20 = 0;
        uVar5 = 0;
        do {
          uVar28 = uVar5;
          auVar2 = *(undefined1 (*) [32])(puVar8 + uVar20);
          uVar3 = vpcmpq_avx512vl(auVar2,auVar33,4);
          if (auVar2 != auVar33) {
            in_ZMM1 = ZEXT3264(auVar2);
            uVar11 = uVar3 & 0xf;
          }
          uVar29 = (ushort)(uVar3 & 0xf);
          uVar20 = uVar20 + 4;
          uVar5 = uVar28 | uVar29;
        } while (((ulong)puVar26 >> 3 & 0xfffffffffffffffc) != uVar20);
        local_80 = in_ZMM1._0_32_;
        auVar38 = vpcmpeqd_avx(auVar33._0_16_,auVar33._0_16_);
        auVar31 = vmovdqu8_avx512vl(_DAT_00202bf0);
        bVar4 = (byte)((ushort)((short)uVar11 << 0xc) >> 8);
        bVar27 = (bool)(bVar4 >> 4 & 1);
        auVar30[0] = bVar27 * auVar31[0] | !bVar27 * auVar38[0];
        bVar27 = (bool)(bVar4 >> 5 & 1);
        auVar30[1] = bVar27 * auVar31[1] | !bVar27 * auVar38[1];
        bVar27 = (bool)(bVar4 >> 6 & 1);
        auVar30[2] = bVar27 * auVar31[2] | !bVar27 * auVar38[2];
        auVar30[3] = -((char)bVar4 >> 7) * auVar31[3] | !(bool)-((char)bVar4 >> 7) * auVar38[3];
        auVar30[4] = auVar38[4];
        auVar30[5] = auVar38[5];
        auVar30[6] = auVar38[6];
        auVar30[7] = auVar38[7];
        auVar30[8] = auVar38[8];
        auVar30[9] = auVar38[9];
        auVar30[10] = auVar38[10];
        auVar30[0xb] = auVar38[0xb];
        auVar30[0xc] = auVar38[0xc];
        auVar30[0xd] = auVar38[0xd];
        auVar30[0xe] = auVar38[0xe];
        auVar30[0xf] = auVar38[0xf];
        auVar38 = vpsrlw_avx(auVar30,8);
        auVar31 = vpminub_avx(auVar30,auVar38);
        vphminposuw_avx(auVar31);
        bVar27 = uVar28 != 0 || uVar29 != 0;
        if (puVar19 != puVar18) goto LAB_0072aad8;
      }
      local_120 = puVar10;
      if (bVar27) {
        auVar37 = ZEXT1664(auVar38);
        auVar38 = keyrec::search_key();
        if ((auVar38._0_8_ & 1) == 0) {
          unaff_R15 = puVar26;
          if (puVar25 == (ulong *)&DAT_00000001) goto LAB_0072ab66;
          puVar25 = (ulong *)puVar9[1];
          uVar22 = 0;
          puVar8 = __ptr;
          puVar10 = (ulong *)((long)puVar21 * 8 + -8);
          do {
            unaff_R15 = puVar10;
            if (puVar8 == local_120) goto LAB_0072a979;
            puVar18 = (ulong *)*puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = unaff_R15 + -1;
            puVar26 = unaff_R15;
          } while (puVar18 == puVar25);
          if (puVar8 == local_120) {
            uVar22 = 0;
            goto LAB_0072a979;
          }
          if ((ulong)((long)local_120 - (long)puVar8) < 0x60) {
            puVar19 = (ulong *)0x0;
            bVar27 = false;
LAB_0072ae15:
            unaff_R15 = (ulong *)((ulong)unaff_R15 >> 3);
            do {
              puVar26 = (ulong *)puVar8[(long)puVar19];
              if (puVar26 != puVar25) {
                puVar10 = puVar26;
              }
              bVar27 = (bool)(bVar27 | puVar26 != puVar25);
              puVar19 = (ulong *)((long)puVar19 + 1);
            } while (unaff_R15 != puVar19);
          }
          else {
            puVar26 = (ulong *)((ulong)((long)local_120 - (long)puVar8) >> 3);
            puVar19 = (ulong *)((ulong)puVar26 & 0xfffffffffffffffc);
            auVar33 = vpbroadcastq_avx512vl();
            uVar11 = 0;
            uVar20 = 0;
            uVar5 = 0;
            do {
              uVar28 = uVar5;
              auVar2 = *(undefined1 (*) [32])(puVar8 + uVar20);
              uVar3 = vpcmpq_avx512vl(auVar2,auVar33,4);
              if (auVar2 != auVar33) {
                auVar37 = ZEXT3264(auVar2);
                uVar11 = uVar3 & 0xf;
              }
              uVar29 = (ushort)(uVar3 & 0xf);
              uVar20 = uVar20 + 4;
              uVar5 = uVar28 | uVar29;
            } while (((ulong)unaff_R15 >> 3 & 0xfffffffffffffffc) != uVar20);
            local_a0 = auVar37._0_32_;
            auVar38 = vpcmpeqd_avx(auVar33._0_16_,auVar33._0_16_);
            auVar31 = vmovdqu8_avx512vl(_DAT_00202bf0);
            bVar4 = (byte)((ushort)((short)uVar11 << 0xc) >> 8);
            bVar27 = (bool)(bVar4 >> 4 & 1);
            auVar32[0] = bVar27 * auVar31[0] | !bVar27 * auVar38[0];
            bVar27 = (bool)(bVar4 >> 5 & 1);
            auVar32[1] = bVar27 * auVar31[1] | !bVar27 * auVar38[1];
            bVar27 = (bool)(bVar4 >> 6 & 1);
            auVar32[2] = bVar27 * auVar31[2] | !bVar27 * auVar38[2];
            auVar32[3] = -((char)bVar4 >> 7) * auVar31[3] | !(bool)-((char)bVar4 >> 7) * auVar38[3];
            auVar32[4] = auVar38[4];
            auVar32[5] = auVar38[5];
            auVar32[6] = auVar38[6];
            auVar32[7] = auVar38[7];
            auVar32[8] = auVar38[8];
            auVar32[9] = auVar38[9];
            auVar32[10] = auVar38[10];
            auVar32[0xb] = auVar38[0xb];
            auVar32[0xc] = auVar38[0xc];
            auVar32[0xd] = auVar38[0xd];
            auVar32[0xe] = auVar38[0xe];
            auVar32[0xf] = auVar38[0xf];
            auVar38 = vpsrlw_avx(auVar32,8);
            auVar38 = vpminub_avx(auVar32,auVar38);
            auVar38 = vphminposuw_avx(auVar38);
            puVar10 = *(ulong **)(local_a0 + (ulong)((byte)~auVar38[0] & 3) * 8);
            bVar27 = uVar28 != 0 || uVar29 != 0;
            if (puVar26 != puVar19) goto LAB_0072ae15;
          }
          if (bVar27) {
            auVar38 = keyrec::search_key(puVar25,uVar24,puVar18,puVar10,__ptr,puVar21,puVar15 + 2);
            if ((auVar38._0_8_ & 1) == 0) goto LAB_0072ab66;
            uVar22 = 1;
            puVar26 = auVar38._8_8_;
          }
          else {
            uVar22 = 0;
            puVar26 = unaff_R15;
          }
        }
        else {
          uVar22 = 1;
          puVar26 = auVar38._8_8_;
        }
      }
      else {
        uVar22 = 0;
      }
    }
LAB_0072a979:
    if (puVar7 != (ulong *)0x0) {
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar9 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar9))
      {
        free(puVar9);
      }
      else {
        uVar24 = 0x10;
        if (0x10 < (ulong)((long)puVar7 << 3)) {
          uVar24 = (long)puVar7 << 3;
        }
        lVar23 = LZCOUNT(uVar24 - 1);
        lVar17 = 0x40 - lVar23;
        if (0xffff < uVar24 - 1) {
          cVar12 = sys::big_put(puVar9,lVar17);
          if (cVar12 != '\0') goto LAB_0072a3f7;
        }
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar9 = *(ulong *)(in_FS_OFFSET + lVar17 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar17 * 8 + -0x3c8) = puVar9;
      }
    }
    goto LAB_0072a3f7;
  }
LAB_0072ab66:
  if (puVar7 != (ulong *)0x0) {
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar9 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar9)) {
      free(puVar9);
    }
    else {
      uVar24 = 0x10;
      if (0x10 < (ulong)((long)puVar7 << 3)) {
        uVar24 = (long)puVar7 << 3;
      }
      lVar17 = LZCOUNT(uVar24 - 1);
      unaff_R15 = (ulong *)(0x40 - lVar17);
      if (0xffff < uVar24 - 1) {
        cVar12 = sys::big_put(puVar9,unaff_R15);
        if (cVar12 != '\0') goto LAB_0072ac0f;
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar9 = *(ulong *)(in_FS_OFFSET + (long)unaff_R15 * 8 + -0x3c8);
      *(ulong **)(in_FS_OFFSET + (long)unaff_R15 * 8 + -0x3c8) = puVar9;
    }
  }
LAB_0072ac0f:
  if (((sys::A_BASE_0 == (ulong *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)) {
    free(__ptr);
  }
  else {
    uVar24 = 0x10;
    if (0x10 < uVar6) {
      uVar24 = uVar6;
    }
    unaff_R15 = (ulong *)LZCOUNT(uVar24 - 1);
    lVar17 = 0x40 - (long)unaff_R15;
    if (0xffff < uVar24 - 1) {
      cVar12 = sys::big_put(__ptr,lVar17);
      if (cVar12 != '\0') goto LAB_0072ac99;
    }
    if (unaff_R15 == (ulong *)0x0) goto LAB_0072aed8;
    *__ptr = *(ulong *)(in_FS_OFFSET + lVar17 * 8 + -0x3c8);
    *(ulong **)(in_FS_OFFSET + lVar17 * 8 + -0x3c8) = __ptr;
  }
LAB_0072ac99:
  uVar22 = 0;
LAB_0072ac9c:
  core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>(&local_d0);
LAB_0072acac:
  auVar38._8_8_ = unaff_R15;
  auVar38._0_8_ = uVar22;
  return auVar38;
}


// ==== pipeline::setup::io_advise @ 0072af40 (1030 bytes)

/* pipeline[509596c7b52975b2]::setup::io_advise */

void __rustcall pipeline[509596c7b52975b2]::setup::io_advise(void *param_1,size_t param_2)

{
  byte bVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long local_1e8;
  ulong local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined1 local_1a8;
  
  local_1b0 = 0x58;
  uStack_1af = 0x5644414f495f4c;
  local_1a8 = 0;
  uVar15 = vptestmb_avx512vl(ZEXT816(0x5644414f495f4c),ZEXT816(0x5644414f495f4c));
  uVar4 = vptestnmb_avx512vl(ZEXT816(0x5644414f495f4c),ZEXT816(0x5644414f495f4c));
  auVar2 = vpmovm2d_avx512vl(uVar4);
  auVar3 = vpmovm2d_avx512vl(uVar15);
  auVar2 = vpblendd_avx2(auVar3,auVar2,0x80);
  uVar15 = vpmovd2m_avx512vl(auVar2);
  if ((char)uVar15 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c8,&local_1b0);
    if (local_1c8 == 0xfffffffffffffffe) goto LAB_0072afc6;
    if (local_1c8 == 0xffffffffffffffff) goto LAB_0072b057;
    core[62e902411887be45]::str::converts::from_utf8(&local_1b0,local_1c0,local_1b8);
    local_1e8 = CONCAT71(uStack_1af,local_1b0);
    local_1e0 = local_1c8;
    local_1d8 = local_1c0;
    local_1d0 = local_1b8;
    if (local_1e8 == 0) {
      auVar16 = <str>::trim_matches::<<char>::is_whitespace>(local_1c0,local_1b8);
      uVar8 = auVar16._8_8_;
      pbVar7 = auVar16._0_8_;
      if (uVar8 == 0) {
        uVar11 = 0;
        bVar5 = true;
        goto LAB_0072b24b;
      }
      if (uVar8 == 1) {
        bVar1 = *pbVar7;
        bVar5 = true;
        uVar11 = 0;
        if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_0072b24b;
      }
      else {
        bVar1 = *pbVar7;
      }
      if (bVar1 == 0x2d) {
        lVar13 = uVar8 - 1;
        if (uVar8 < 9) {
          uVar9 = 0;
          if (lVar13 != 0) {
            uVar12 = 1;
            do {
              if (9 < pbVar7[uVar12] - 0x30) goto LAB_0072b23b;
              uVar9 = uVar9 * 10 - (pbVar7[uVar12] - 0x30);
              uVar12 = uVar12 + 1;
            } while (uVar8 != uVar12);
          }
        }
        else {
          uVar9 = 0;
          do {
            pbVar7 = pbVar7 + 1;
            iVar10 = (int)((long)(int)uVar9 * 10);
            if ((long)iVar10 != (long)(int)uVar9 * 10) goto code_r0x0072b325;
            uVar11 = *pbVar7 - 0x30;
            if (9 < uVar11) goto LAB_0072b23b;
            uVar9 = iVar10 - uVar11;
            if (SBORROW4(iVar10,uVar11)) {
              uVar11 = 0;
              bVar5 = true;
              goto LAB_0072b24b;
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      else {
        if (bVar1 == 0x2b) {
          auVar16._8_8_ = uVar8 - 1;
          auVar16._0_8_ = pbVar7 + 1;
        }
        uVar8 = auVar16._8_8_;
        pbVar7 = auVar16._0_8_;
        if (uVar8 < 8) {
          if (uVar8 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *pbVar7 - 0x30;
            uVar11 = 0;
            bVar5 = true;
            if (9 < uVar9) goto LAB_0072b24b;
            if (uVar8 != 1) {
              if (9 < pbVar7[1] - 0x30) goto LAB_0072b24b;
              uVar9 = (pbVar7[1] - 0x30) + uVar9 * 10;
              if (uVar8 != 2) {
                if (9 < pbVar7[2] - 0x30) goto LAB_0072b24b;
                uVar9 = (pbVar7[2] - 0x30) + uVar9 * 10;
                if (uVar8 != 3) {
                  if (9 < pbVar7[3] - 0x30) goto LAB_0072b24b;
                  uVar9 = (pbVar7[3] - 0x30) + uVar9 * 10;
                  if (uVar8 != 4) {
                    if (9 < pbVar7[4] - 0x30) goto LAB_0072b24b;
                    uVar9 = (pbVar7[4] - 0x30) + uVar9 * 10;
                    if (uVar8 != 5) {
                      if (9 < pbVar7[5] - 0x30) goto LAB_0072b24b;
                      uVar9 = (pbVar7[5] - 0x30) + uVar9 * 10;
                      if (uVar8 != 6) {
                        if (9 < pbVar7[6] - 0x30) goto LAB_0072b24b;
                        uVar9 = (pbVar7[6] - 0x30) + uVar9 * 10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar9 = 0;
          do {
            pbVar7 = auVar16._0_8_;
            iVar10 = (int)((long)(int)uVar9 * 10);
            if ((long)iVar10 != (long)(int)uVar9 * 10) goto code_r0x0072b325;
            uVar11 = *pbVar7 - 0x30;
            if (9 < uVar11) goto LAB_0072b23b;
            uVar9 = iVar10 + uVar11;
            if (SCARRY4(iVar10,uVar11)) {
              uVar11 = 0;
              bVar5 = true;
              goto LAB_0072b24b;
            }
            lVar13 = auVar16._8_8_ + -1;
            auVar16._8_8_ = lVar13;
            auVar16._0_8_ = pbVar7 + 1;
          } while (lVar13 != 0);
        }
      }
      bVar5 = false;
      uVar11 = uVar9;
      goto LAB_0072b24b;
    }
  }
  else {
    local_1c0 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_0072afc6:
    if ((1 < ((uint)local_1c0 & 3) - 2) && (((ulong)local_1c0 & 3) != 0)) {
      (**(code **)((long)local_1c0 + 0x17))((long)local_1c0 + -1);
    }
LAB_0072b057:
    local_1e0 = 0xffffffffffffffff;
    local_1e8 = 1;
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_1e8);
  uVar9 = 2;
  goto LAB_0072b078;
code_r0x0072b325:
  uVar11 = 0;
  bVar5 = true;
  goto LAB_0072b24b;
LAB_0072b23b:
  uVar11 = 0;
  bVar5 = true;
LAB_0072b24b:
  if (local_1c8 != 0) {
    if (((undefined **)(sys::A_BASE_0 + -1) < local_1c0) && (local_1c0 < sys::A_END_0)) {
      uVar8 = 0x10;
      if (0x10 < local_1c8) {
        uVar8 = local_1c8;
      }
      lVar14 = LZCOUNT(uVar8 - 1);
      lVar13 = 0x40 - lVar14;
      if ((uVar8 - 1 < 0x10000) || (cVar6 = sys::big_put(local_1c0,lVar13), cVar6 == '\0')) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *local_1c0 = *(undefined **)(in_FS_OFFSET + lVar13 * 8 + -0x3c8);
        *(undefined ***)(in_FS_OFFSET + lVar13 * 8 + -0x3c8) = local_1c0;
      }
    }
    else {
      free(local_1c0);
    }
  }
  uVar9 = 2;
  if ((!bVar5) && (uVar9 = uVar11, 1 < uVar11 - 1)) {
    return;
  }
LAB_0072b078:
  madvise(param_1,param_2,uVar9);
  return;
}


// ==== <alloc::vec::Vec<core::option::Option<(alloc::vec::Vec<(u32, u8)>, alloc::vec::Vec<alloc::vec::Vec<u8>>)>> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<core::option::Option<(alloc::vec::Vec<(u32, u8)>, alloc::vec::Vec<alloc::vec::Vec<u8>>)>, core::iter::adapters::map::Map<core::slice::iter::Iter<pipeline::setup::Slot<core::option::Option<(alloc::vec::Vec<(u32, u8)>, alloc::vec::Vec<alloc::vec::Vec<u8>>)>>>, pipeline::setup::setup_par::{closure#7}::{closure#1}>>>::from_iter @ 0073f100 (511 bytes)

/* <alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,
   u8)>, alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>> as
   alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,
   u8)>, alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>,
   core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::setup::Slot<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,
   u8)>, alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>>,
   pipeline[509596c7b52975b2]::setup::setup_par::{closure#7}::{closure#1}>>>::from_iter */

void __rustcall
<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>as_alloc[2a0ada2ddd1fabff]::vec::spec_from_iter_nested::SpecFromIterNested<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>,core[62e902411887be45]::iter::adapters::map::Map<core[62e902411887be45]::slice::iter::Iter<pipeline[509596c7b52975b2]::setup::Slot<core[62e902411887be45]::option::Option<(alloc[2a0ada2ddd1fabff]::vec::Vec<(u32,u8)>,alloc[2a0ada2ddd1fabff]::vec::Vec<alloc[2a0ada2ddd1fabff]::vec::Vec<u8>>)>>>,pipeline[509596c7b52975b2]::setup::setup_par::{closure#7}::{closure#1}>>>
::from_iter(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_3 - param_2;
  uVar9 = uVar10 / 0x38;
  if (0x9555555555555530 < uVar10) {
    param_3 = alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if (param_3 == param_2) {
    uVar6 = 8;
    uVar9 = 0;
  }
  else {
    uVar6 = __rustc[45371133cddedda4]::__rust_alloc(uVar9 * 0x30,8);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar9 * 0x30);
    }
    if (uVar10 - 0x38 < 0x38) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        plVar1 = (long *)(param_2 + uVar10 * 0x38);
        cVar3 = *(char *)(param_2 + 0x30 + uVar10 * 0x38);
        while (cVar3 == '\0') {
          cVar3 = (char)plVar1[6];
        }
        lVar8 = *plVar1;
        if (lVar8 == -2) goto LAB_0073f2e5;
        *plVar1 = -2;
        lVar7 = uVar10 * 0x30;
        *(long *)(uVar6 + lVar7) = lVar8;
        lVar8 = plVar1[2];
        lVar4 = plVar1[3];
        lVar5 = plVar1[4];
        plVar2 = (long *)(uVar6 + 8 + lVar7);
        *plVar2 = plVar1[1];
        plVar2[1] = lVar8;
        plVar2[2] = lVar4;
        plVar2[3] = lVar5;
        *(long *)(uVar6 + 0x28 + lVar7) = plVar1[5];
        lVar8 = (uVar10 + 1) * 0x38;
        plVar1 = (long *)(param_2 + lVar8);
        cVar3 = *(char *)(param_2 + 0x30 + lVar8);
        while (cVar3 == '\0') {
          cVar3 = (char)plVar1[6];
        }
        lVar8 = *plVar1;
        if (lVar8 == -2) goto LAB_0073f2e5;
        *plVar1 = -2;
        lVar7 = (uVar10 + 1) * 0x30;
        *(long *)(uVar6 + lVar7) = lVar8;
        lVar8 = plVar1[2];
        lVar4 = plVar1[3];
        lVar5 = plVar1[4];
        plVar2 = (long *)(uVar6 + 8 + lVar7);
        *plVar2 = plVar1[1];
        plVar2[1] = lVar8;
        plVar2[2] = lVar4;
        plVar2[3] = lVar5;
        *(long *)(uVar6 + 0x28 + lVar7) = plVar1[5];
        uVar10 = uVar10 + 2;
      } while (uVar10 != (uVar9 & 0xfffffffffffffffe));
      if ((uVar9 & 1) == 0) goto LAB_0073f2cd;
    }
    plVar1 = (long *)(param_2 + uVar10 * 0x38);
    cVar3 = *(char *)(param_2 + 0x30 + uVar10 * 0x38);
    while (cVar3 == '\0') {
      cVar3 = (char)plVar1[6];
    }
    lVar8 = *plVar1;
    if (lVar8 == -2) {
LAB_0073f2e5:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_setup_rs_00212930);
    }
    *plVar1 = -2;
    lVar7 = uVar10 * 0x30;
    *(long *)(uVar6 + lVar7) = lVar8;
    lVar8 = plVar1[2];
    lVar4 = plVar1[3];
    lVar5 = plVar1[4];
    plVar2 = (long *)(uVar6 + 8 + lVar7);
    *plVar2 = plVar1[1];
    plVar2[1] = lVar8;
    plVar2[2] = lVar4;
    plVar2[3] = lVar5;
    *(long *)(uVar6 + 0x28 + lVar7) = plVar1[5];
  }
LAB_0073f2cd:
  *param_1 = uVar9;
  param_1[1] = uVar6;
  param_1[2] = uVar9;
  return;
}


