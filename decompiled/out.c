// ==== <std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::initialize::<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0}, !> @ 005d22e0 (77 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::
initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::_closure_0_>::_closure_0_,_>
          (undefined8 param_1)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::out::S3CTX._96_4_ == 0) {
    return;
  }
  local_20 = &local_18;
  local_10 = pipeline[509596c7b52975b2]::out::S3CTX;
  local_8 = &local_21;
  local_18 = param_1;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x8431f0,1,&local_20,&DAT_0020f8a0,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sys::thread_local::native::lazy::Storage<core::cell::RefCell<pipeline::out::Split>, ()>>::get_or_init_slow::<pipeline::out::SPLIT::__rust_std_internal_init_fn> @ 005d2740 (188 bytes)

/* <std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::Storage<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>,
   ()>>::get_or_init_slow::<pipeline[509596c7b52975b2]::out::SPLIT::__rust_std_internal_init_fn> */

undefined1 (*) [16] __rustcall
<std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::Storage<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>,()>>
::get_or_init_slow::<pipeline[509596c7b52975b2]::out::SPLIT::__rust_std_internal_init_fn>
          (undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  if (param_1[0xc][8] == '\0') {
    auVar1 = ZEXT816(0);
    *param_1 = auVar1;
    *(undefined8 *)param_1[1] = 4;
    *(undefined1 (*) [16])(param_1[1] + 8) = auVar1;
    *(undefined8 *)(param_1[2] + 8) = 4;
    param_1[3] = auVar1;
    *(undefined8 *)param_1[4] = 4;
    *(undefined1 (*) [16])(param_1[4] + 8) = auVar1;
    *(undefined8 *)(param_1[5] + 8) = 4;
    param_1[6] = auVar1;
    *(undefined8 *)param_1[7] = 4;
    *(undefined1 (*) [16])(param_1[7] + 8) = auVar1;
    *(undefined8 *)(param_1[8] + 8) = 1;
    param_1[9] = auVar1;
    *(undefined8 *)param_1[10] = 1;
    *(undefined1 (*) [16])(param_1[10] + 8) = auVar1;
    *(undefined8 *)(param_1[0xb] + 8) = 4;
    *(undefined8 *)param_1[0xc] = 0;
    param_1[0xc][8] = 1;
    std[c60ef17cbf7de79f]::sys::thread_local::destructors::linux_like::register
              (param_1,std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::destroy::
                       <core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>>
              );
  }
  else if (param_1[0xc][8] != '\x01') {
    return (undefined1 (*) [16])0x0;
  }
  return param_1;
}


// ==== core::ptr::drop_glue::<core::cell::RefCell<pipeline::out::Split>> @ 005ff040 (1338 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>>
    */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>>(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 8) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x20) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x38) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x50) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x68) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x88);
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
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
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
        if (lVar5 == 0) {
LAB_005ff556:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = *(long *)(param_1 + 0xb0) << 2;
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


// ==== core::ptr::drop_glue::<pipeline::out::S3Ctx> @ 00602de0 (649 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::out::S3Ctx> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::out::S3Ctx>(ulong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)param_1[1];
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
        if (lVar5 == 0) goto LAB_00603045;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = param_1[3];
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)param_1[4];
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
        if (lVar5 == 0) goto LAB_00603045;
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
      uVar3 = param_1[6] << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00603045:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = param_1[9];
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)param_1[10];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
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


// ==== std::sys::thread_local::native::lazy::destroy::<core::cell::RefCell<pipeline::out::Split>> @ 00644d60 (23 bytes)

/* std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::destroy::<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>>
    */

void __rustcall
std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::destroy::
<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>>(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  cVar2 = *(char *)(param_1 + 200);
  *(undefined1 *)(param_1 + 200) = 2;
  if (cVar2 != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 8) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x20) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x38) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x50) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x68) << 2;
      uVar4 = 0x10;
      if (0x10 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = LZCOUNT(uVar4 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar4 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x88);
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
        if (lVar5 == 0) goto LAB_005ff556;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
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
        if (lVar5 == 0) {
LAB_005ff556:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = *(long *)(param_1 + 0xb0) << 2;
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
      core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
  }
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::initialize<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00646ba0 (137 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar3 = *plVar1;
  *plVar1 = -1;
  if (lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058cfb0);
  }
  lVar4 = plVar1[1];
  lVar5 = plVar1[2];
  lVar6 = plVar1[3];
  lVar7 = plVar1[4];
  lVar8 = plVar1[5];
  lVar9 = plVar1[6];
  lVar10 = plVar1[7];
  lVar11 = plVar1[8];
  lVar12 = plVar1[9];
  lVar13 = plVar1[10];
  lVar14 = plVar1[0xb];
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  plVar2[2] = lVar5;
  plVar2[3] = lVar6;
  plVar2[4] = lVar7;
  plVar2[5] = lVar8;
  plVar2[6] = lVar9;
  plVar2[7] = lVar10;
  plVar2[8] = lVar11;
  plVar2[8] = lVar11;
  plVar2[9] = lVar12;
  plVar2[10] = lVar13;
  plVar2[0xb] = lVar14;
  return;
}


// ==== <std::sync::once::Once>::call_once::<pipeline::out::s3_prep::{closure#0}>::{closure#0} @ 006483e0 (178 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once::<pipeline[509596c7b52975b2]::out::s3_prep::{closure#0}>::{closure#0}
    */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once::
<pipeline[509596c7b52975b2]::out::s3_prep::{closure#0}>::_closure_0_(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 in_RAX;
  long lVar7;
  undefined5 local_28;
  undefined3 uStack_23;
  
  lVar1 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058cef0);
  }
  uStack_23 = (undefined3)((ulong)in_RAX >> 0x28);
  local_28 = 0x1000001ff;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  lVar7 = <std[c60ef17cbf7de79f]::fs::DirBuilder>::_create(&local_28,uVar2,uVar3);
  if (lVar7 == 0) {
    local_28 = 0x1000001ff;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    lVar7 = <std[c60ef17cbf7de79f]::fs::DirBuilder>::_create(&local_28,uVar4,uVar5);
    if (lVar7 == 0) {
      pipeline[509596c7b52975b2]::out::clear_stale(uVar2,uVar3);
      pipeline[509596c7b52975b2]::out::clear_stale(uVar4,uVar5);
      return;
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>>(lVar7);
  pipeline[509596c7b52975b2]::out::die(&DAT_002039c0,0x20);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


// ==== pipeline::out::stage5::{closure#0} @ 00654600 (7922 bytes)

/* pipeline[509596c7b52975b2]::out::stage5::{closure#0} */

void __rustcall pipeline[509596c7b52975b2]::out::stage5::_closure_0_(undefined8 *param_1)

{
  undefined1 (*pauVar1) [24];
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  long lVar33;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  long lVar34;
  long lVar35;
  undefined1 auVar27 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  code *pcVar38;
  char cVar39;
  ulong uVar40;
  ulong *puVar41;
  code *pcVar42;
  ulong uVar43;
  code *__ptr;
  code *pcVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  undefined1 (*pauVar49) [32];
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long in_FS_OFFSET;
  bool bVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [16];
  ulong local_480;
  code *local_478;
  long local_470;
  ulong local_468;
  code *local_460;
  long local_458;
  long local_450;
  code *local_448;
  ulong local_440;
  ulong local_438;
  long local_430;
  code *local_428;
  long local_420;
  long local_418;
  code *local_410;
  long local_408;
  code *local_400;
  code *local_3f8;
  long local_3f0;
  code *local_3e8;
  ulong local_3e0;
  long local_3d8;
  code *local_3d0;
  long local_3c8;
  ulong local_3c0;
  ulong local_3b8;
  ulong local_3b0;
  long local_3a8;
  long local_3a0;
  undefined1 local_398 [16];
  long local_388;
  undefined1 auStack_380 [16];
  long local_370;
  undefined1 local_368 [16];
  long local_358;
  ulong local_350;
  ulong local_348 [2];
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  ulong *local_300;
  ulong local_2f8;
  ulong local_2f0;
  undefined8 local_2e8;
  ulong *local_2e0;
  code *local_2d8;
  ulong *local_2d0;
  code *local_2c8;
  ulong *local_2c0;
  code *local_2b8;
  ulong *local_2b0;
  code *local_2a8;
  ulong *local_2a0;
  code *local_298;
  ulong *local_290;
  code *local_288;
  ulong local_280;
  code *local_278;
  undefined8 local_270;
  undefined1 local_268 [16];
  long lStack_258;
  code *pcStack_250;
  long local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 local_218;
  code *local_210;
  long local_208;
  code *local_200;
  long local_1f8;
  char *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  code *local_1c0;
  long local_1b8;
  undefined1 local_1b0;
  char *local_188;
  undefined8 local_180;
  undefined4 local_178;
  long local_170;
  ulong local_168;
  undefined1 local_160;
  undefined *local_138;
  undefined8 local_130;
  undefined4 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  char *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  long local_d0;
  ulong local_c8;
  undefined1 local_c0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  ulong local_78;
  undefined1 local_70;
  char *local_48;
  undefined8 local_40;
  
  local_300 = (ulong *)*param_1;
  lVar3 = param_1[1];
  local_308 = param_1[3];
  local_310 = param_1[4];
  local_318 = param_1[5];
  local_320 = param_1[6];
  local_338 = param_1[2];
LAB_0065467d:
  do {
    do {
      while( true ) {
        LOCK();
        uVar43 = *local_300;
        *local_300 = *local_300 + 1;
        UNLOCK();
        if (uVar43 != 0) break;
        uVar4 = *(undefined8 *)(local_338 + 8);
        uVar5 = *(undefined8 *)(local_338 + 0x10);
        lVar46 = *(long *)(lVar3 + 0x210);
        uVar40 = (*(long *)(lVar3 + 0x248) + 1) * lVar46;
        local_268 = ZEXT816(0);
        lStack_258 = 0;
        pcStack_250 = (code *)0x0;
        <[u64;4usize]as_alloc[2a0ada2ddd1fabff]::vec::spec_from_elem::SpecFromElem>::from_elem::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_3f0,local_268,uVar40);
        uVar43 = *(ulong *)(lVar3 + 0x1d8);
        if (uVar43 != 0) {
          if (uVar40 == 0) {
            uVar50 = *(ulong *)(lVar3 + 0xa0);
            uVar47 = uVar50;
            if (uVar50 <= uVar43 - 1) {
LAB_006564f7:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar47,uVar50,&PTR_s_src_main_rs_00210588);
            }
          }
          else {
            uVar47 = 0;
            do {
              uVar50 = *(ulong *)(lVar3 + 0xa0);
              if (uVar50 <= uVar47) goto LAB_006564f7;
              lVar54 = uVar47 * 0x7a0;
              uVar47 = uVar47 + 1;
              lVar54 = lVar54 + *(long *)(lVar3 + 0x98);
              lVar48 = 0;
              uVar50 = 0;
              do {
                if (*(ulong *)(lVar54 + 0x460) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212b78);
                }
                if (local_3e0 == uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (local_3e0,local_3e0,&PTR_s_src_out_rs_00212b90);
                }
                *(ulong *)(local_3e8 + lVar48 * 2) =
                     *(long *)(local_3e8 + lVar48 * 2) +
                     (ulong)*(uint *)(*(long *)(lVar54 + 0x458) + uVar50 * 8);
                if (*(ulong *)(lVar54 + 0x460) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212ba8);
                }
                *(ulong *)(local_3e8 + lVar48 * 2 + 0x18) =
                     *(long *)(local_3e8 + lVar48 * 2 + 0x18) +
                     (ulong)*(uint *)(*(long *)(lVar54 + 0x458) + 4 + uVar50 * 8);
                if (*(ulong *)(lVar54 + 0x470) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212bc0);
                }
                *(long *)(local_3e8 + lVar48 * 2 + 8) =
                     *(long *)(local_3e8 + lVar48 * 2 + 8) +
                     *(long *)(*(long *)(lVar54 + 0x468) + lVar48);
                if (*(ulong *)(lVar54 + 0x470) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212bd8);
                }
                uVar50 = uVar50 + 1;
                *(long *)(local_3e8 + lVar48 * 2 + 0x10) =
                     *(long *)(local_3e8 + lVar48 * 2 + 0x10) +
                     *(long *)(*(long *)(lVar54 + 0x468) + 8 + lVar48);
                lVar48 = lVar48 + 0x10;
              } while (uVar40 != uVar50);
            } while (uVar47 != uVar43);
          }
        }
        pcVar44 = (code *)__rustc[45371133cddedda4]::__rust_alloc(4,4);
        if (pcVar44 == (code *)0x0) {
LAB_00656488:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(4,4);
        }
        *(undefined4 *)pcVar44 = 0;
        pcVar42 = (code *)__rustc[45371133cddedda4]::__rust_alloc(4,4);
        uVar43 = local_3e0;
        pcVar38 = local_3e8;
        if (pcVar42 == (code *)0x0) goto LAB_00656488;
        *(undefined4 *)pcVar42 = 0;
        local_430 = 1;
        local_420 = 1;
        local_468 = 0;
        local_460 = (code *)&DAT_00000001;
        local_458 = 0;
        local_418 = 1;
        local_408 = 1;
        local_480 = 0;
        local_478 = (code *)&DAT_00000001;
        local_470 = 0;
        local_3d8 = 0;
        local_3d0 = (code *)&DAT_00000004;
        local_3c8 = 0;
        local_3a8 = 0;
        local_3a0 = 8;
        local_398 = (undefined1  [16])0x0;
        local_388 = 8;
        auStack_380 = (undefined1  [16])0x0;
        local_370 = 8;
        local_368 = (undefined1  [16])0x0;
        local_358 = 8;
        local_350 = 0;
        local_428 = pcVar44;
        local_410 = pcVar42;
        local_330 = uVar5;
        local_328 = uVar4;
        if (lVar46 == 0) {
          lVar48 = 8;
          __ptr = (code *)&DAT_00000004;
          lVar53 = 0;
          lVar54 = 0;
          uVar40 = 0;
LAB_006553f3:
          lVar55 = 0;
          pcVar44 = (code *)&DAT_00000004;
          lStack_258 = 0;
          local_210 = (code *)&DAT_00000004;
          lVar45 = 0;
        }
        else {
          local_2f8 = *(ulong *)(lVar3 + 0x248);
          lVar45 = 1;
          __ptr = (code *)&DAT_00000004;
          lVar48 = 8;
          uVar40 = 0;
          lVar55 = 0;
          local_450 = 1;
          lVar54 = 0;
          local_448 = (code *)&DAT_00000001;
          lVar53 = 0;
          uVar50 = 0;
          local_400 = pcVar42;
          local_3f8 = pcVar44;
          do {
            local_2f0 = uVar50 + 1;
            lVar56 = 0;
            do {
              uVar47 = lVar56 + uVar50 * lVar46;
              if (uVar43 <= uVar47) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar47,uVar43,&PTR_s_src_out_rs_00212af8);
              }
              lVar65 = *(long *)(pcVar38 + uVar47 * 0x20);
              lVar61 = *(long *)(pcVar38 + (uVar47 * 4 + 3) * 8);
              if (lVar65 != 0 || lVar61 != 0) {
                local_2e8 = *(undefined8 *)(pcVar38 + (uVar47 * 4 + 1) * 8);
                uVar4 = *(undefined8 *)(pcVar38 + (uVar47 * 4 + 2) * 8);
                if (uVar50 == *(ulong *)(lVar3 + 0x248)) {
                  if (local_468 - lVar53 < 7) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&local_468,lVar53,7,1,1);
                    lVar53 = local_458;
                  }
                  lVar48 = local_450;
                  *(undefined4 *)(local_460 + lVar53 + 3) = 0x63696e61;
                  local_448 = local_460;
                  *(undefined4 *)(local_460 + lVar53) = 0x6167726f;
                  lVar53 = lVar53 + 7;
                  local_458 = lVar53;
                  if (local_480 - lVar54 < 7) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&local_480,lVar54,7,1,1);
                    lVar54 = local_470;
                  }
                  *(undefined4 *)(local_478 + lVar54 + 3) = 0x63696e61;
                  *(undefined4 *)(local_478 + lVar54) = 0x6167726f;
                  lVar54 = lVar54 + 7;
                  local_470 = lVar54;
                  if (lVar48 == local_430) goto LAB_0065518e;
                }
                else {
                  local_268 = (undefined1  [16])0x0;
                  lStack_258 = 0;
                  uVar40 = uVar50;
                  uVar47 = 0x19;
                  do {
                    uVar52 = uVar47 - 2;
                    if (0x17 < uVar52) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (0xffffffffffffffff,0x18,&PTR_s_src_out_rs_00212b10);
                    }
                    cVar39 = (char)(uVar40 / 10);
                    local_268[uVar47 - 2] = (char)uVar40 + cVar39 * -10 | 0x30;
                    if (uVar40 < 10) {
                      uVar52 = uVar47 - 1;
                      break;
                    }
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = uVar40 / 10;
                    local_268[uVar47 - 3] =
                         cVar39 + SUB161(auVar8 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
                    bVar57 = 99 < uVar40;
                    uVar40 = uVar40 / 100;
                    uVar47 = uVar52;
                  } while (bVar57);
                  if (0x17 < uVar52 - 3) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar52 - 3,0x18,&PTR_s_src_out_rs_00212b28);
                  }
                  *(undefined2 *)(local_268 + (uVar52 - 3)) = 0x5f63;
                  uVar40 = 0x1b - uVar52;
                  if (local_468 - lVar53 < uVar40) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&local_468,lVar53,uVar40,1,1);
                    local_448 = local_460;
                    lVar53 = local_458;
                  }
                  (*(code *)PTR_memcpy_00841de0)(local_448 + lVar53,local_268 + (uVar52 - 3),uVar40)
                  ;
                  lVar53 = lVar53 + uVar40;
                  local_458 = lVar53;
                  if (*(ulong *)(lVar3 + 0x28) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar50,*(ulong *)(lVar3 + 0x28),&PTR_s_src_out_rs_00212b40);
                  }
                  uVar40 = (ulong)*(byte *)(*(long *)(lVar3 + 0x20) + uVar50);
                  if (*(ulong *)(lVar3 + 0x58) <= uVar40) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar40,*(ulong *)(lVar3 + 0x58),&PTR_s_src_out_rs_00212b58);
                  }
                  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 8 + uVar40 * 0x18);
                  uVar40 = *(ulong *)(*(long *)(lVar3 + 0x50) + 0x10 + uVar40 * 0x18);
                  if (local_480 - local_470 < uVar40) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&local_480,local_470,uVar40,1,1);
LAB_00655139:
                    lVar54 = local_470;
                    (*(code *)PTR_memcpy_00841de0)(local_478 + local_470,uVar5,uVar40);
                  }
                  else {
                    lVar54 = local_470;
                    if (uVar40 != 0) goto LAB_00655139;
                  }
                  lVar54 = lVar54 + uVar40;
                  lVar48 = local_420;
                  local_470 = lVar54;
                  if (local_420 == local_430) {
LAB_0065518e:
                    lVar54 = local_470;
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_430);
                  }
                }
                lVar45 = local_408;
                local_3f8 = local_428;
                *(int *)(local_428 + lVar48 * 4) = (int)lVar53;
                local_450 = lVar48 + 1;
                local_420 = local_450;
                if (local_408 == local_418) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_418);
                }
                lVar55 = local_3c8;
                local_400 = local_410;
                *(int *)(local_410 + lVar45 * 4) = (int)lVar54;
                lVar45 = lVar45 + 1;
                iVar2 = *(int *)(lVar3 + 0x2f0);
                local_408 = lVar45;
                if (local_3c8 == local_3d8) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_3d8);
                }
                __ptr = local_3d0;
                *(int *)(local_3d0 + lVar55 * 4) = iVar2 + (int)lVar56;
                lVar55 = lVar55 + 1;
                uVar5 = local_398._0_8_;
                local_3c8 = lVar55;
                if (local_398._0_8_ == local_3a8) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_3a8);
                }
                *(long *)(local_3a0 + uVar5 * 8) = lVar65;
                local_398._0_8_ = uVar5 + 1;
                uVar5 = auStack_380._0_8_;
                if (auStack_380._0_8_ == local_398._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(local_398 + 8);
                }
                *(undefined8 *)(local_388 + uVar5 * 8) = local_2e8;
                auStack_380._0_8_ = uVar5 + 1;
                uVar5 = local_368._0_8_;
                if (local_368._0_8_ == auStack_380._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(auStack_380 + 8);
                }
                uVar40 = local_350;
                *(undefined8 *)(local_370 + uVar5 * 8) = uVar4;
                local_368._0_8_ = uVar5 + 1;
                if (local_350 == local_368._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(local_368 + 8);
                }
                *(long *)(local_358 + uVar40 * 8) = lVar61;
                uVar40 = uVar40 + 1;
                lVar48 = local_358;
                local_350 = uVar40;
              }
              lVar56 = lVar56 + 1;
            } while (lVar56 != lVar46);
            bVar57 = uVar50 != local_2f8;
            uVar50 = local_2f0;
          } while (bVar57);
          if (lVar55 == 0) {
            goto LAB_006553f3;
          }
          lStack_258 = local_450;
          pcVar44 = local_3f8;
          local_210 = local_400;
        }
        auVar10 = local_368;
        lVar65 = local_370;
        auVar8 = local_398;
        lVar56 = local_3a0;
        local_268._0_4_ = 7;
        local_268._8_8_ = pcVar44;
        pcStack_250 = local_460;
        local_228 = "campaign_id";
        local_220 = 0xb;
        local_218 = CONCAT44(local_218._4_4_,7);
        local_200 = local_478;
        uVar4 = local_398._0_8_;
        local_1d8 = "channel";
        local_1d0 = 7;
        local_1c8 = 6;
        uVar5 = local_368._0_8_;
        local_1b0 = 0;
        local_188 = "day";
        local_180 = 3;
        local_178 = 5;
        local_170 = local_3a0;
        local_168 = local_398._0_8_;
        local_160 = 0;
        local_138 = &DAT_00201e18;
        local_130 = 8;
        local_128 = 5;
        local_120 = local_388;
        uStack_118 = auStack_380._0_8_;
        local_110 = 0;
        local_e8 = "purchasing_sessions";
        local_e0 = 0x13;
        local_d8 = 5;
        local_d0 = local_370;
        local_c8 = local_368._0_8_;
        local_c0 = 0;
        local_98 = "revenue_cents";
        local_90 = 0xd;
        local_88 = 5;
        local_70 = 0;
        local_48 = "assisted_sessions";
        local_40 = 0x11;
        local_248 = lVar53;
        local_208 = lVar45;
        local_1f8 = lVar54;
        local_1c0 = __ptr;
        local_1b8 = lVar55;
        local_80 = lVar48;
        local_78 = uVar40;
        <std[c60ef17cbf7de79f]::path::Path>::_join(&local_2e0,local_328,local_330,&DAT_002109aa,0xe)
        ;
        pcVar44 = local_2d8;
        local_348[0] = local_348[0] & 0xffffffffffffff00;
        auVar69 = pqw::write_file(local_2d8,local_2d0,local_268);
        if (auVar69._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar69._8_8_);
          core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::string::String>
                    (local_2e0,pcVar44);
          die("campaign_daily",0xe);
          goto LAB_00656535;
        }
        if (local_2e0 == (ulong *)0x0) {
LAB_006556f0:
          cVar39 = *(char *)(lVar3 + 0x2f4);
        }
        else {
          if (((sys::A_BASE_0 != (code *)0x0) && (sys::A_BASE_0 <= pcVar44)) &&
             (pcVar44 < sys::A_END_0)) {
            puVar41 = local_2e0;
            if (local_2e0 < &DAT_00000011) {
              puVar41 = (ulong *)&DAT_00000010;
            }
            lVar53 = LZCOUNT((undefined1 *)((long)puVar41 + -1));
            lVar54 = 0x40 - lVar53;
            if (((undefined1 *)((long)puVar41 + -1) < (undefined1 *)0x10000) ||
               (cVar39 = sys::big_put(pcVar44), cVar39 == '\0')) {
              if (lVar53 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(undefined8 *)pcVar44 = *(undefined8 *)(in_FS_OFFSET + lVar54 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar54 * 8 + -0x3c8) = pcVar44;
            }
            goto LAB_006556f0;
          }
          free(pcVar44);
          cVar39 = *(char *)(lVar3 + 0x2f4);
        }
        if (cVar39 != '\0') {
          local_440 = 0;
          local_438 = 0;
          if (*(long *)(lVar3 + 0x1d8) != 0) {
            lVar54 = *(long *)(lVar3 + 0xa0);
            lVar53 = 0;
            do {
              if (lVar53 == lVar54) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar54,lVar54,&PTR_s_src_main_rs_00210588);
              }
              lVar45 = *(long *)(lVar3 + 0x98);
              lVar55 = lVar53 * 0x7a0;
              uVar43 = *(ulong *)(lVar45 + 0x540 + lVar55);
              if (uVar43 == 0) {
                uVar50 = 0;
              }
              else {
                lVar61 = *(long *)(lVar45 + 0x538 + lVar55);
                if (uVar43 < 4) {
                  uVar52 = 0;
                  uVar50 = 0;
                }
                else {
                  if (uVar43 < 0x10) {
                    uVar50 = 0;
                    uVar47 = 0;
LAB_00655886:
                    uVar52 = uVar43 & 0xfffffffffffffffc;
                    auVar67 = ZEXT864(uVar50);
                    do {
                      auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + uVar47 * 4));
                      auVar9._0_8_ = auVar67._0_8_ + auVar36._0_8_;
                      auVar9._8_8_ = auVar67._8_8_ + auVar36._8_8_;
                      auVar37._16_8_ = auVar67._16_8_ + auVar36._16_8_;
                      auVar37._0_16_ = auVar9;
                      auVar37._24_8_ = auVar67._24_8_ + auVar36._24_8_;
                      auVar67 = ZEXT3264(auVar37);
                      uVar47 = uVar47 + 4;
                    } while (uVar52 != uVar47);
                    auVar69 = vpaddq_avx(auVar9,auVar37._16_16_);
                    auVar9 = vpshufd_avx(auVar69,0xee);
                    auVar69 = vpaddq_avx(auVar69,auVar9);
                    uVar50 = auVar69._0_8_;
                    goto LAB_006558da;
                  }
                  uVar52 = uVar43 & 0xfffffffffffffff0;
                  lVar58 = 0;
                  lVar59 = 0;
                  lVar60 = 0;
                  lVar62 = 0;
                  uVar50 = 0;
                  lVar51 = 0;
                  lVar63 = 0;
                  lVar64 = 0;
                  lVar66 = 0;
                  auVar67 = ZEXT1664((undefined1  [16])0x0);
                  auVar68 = ZEXT1664((undefined1  [16])0x0);
                  do {
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + uVar50 * 4));
                    lVar58 = lVar58 + auVar36._0_8_;
                    lVar59 = lVar59 + auVar36._8_8_;
                    lVar60 = lVar60 + auVar36._16_8_;
                    lVar62 = lVar62 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x10 + uVar50 * 4));
                    lVar51 = lVar51 + auVar36._0_8_;
                    lVar63 = lVar63 + auVar36._8_8_;
                    lVar64 = lVar64 + auVar36._16_8_;
                    lVar66 = lVar66 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x20 + uVar50 * 4));
                    lVar34 = auVar67._0_8_ + auVar36._0_8_;
                    lVar33 = auVar67._8_8_ + auVar36._8_8_;
                    lVar31 = auVar67._16_8_ + auVar36._16_8_;
                    lVar29 = auVar67._24_8_ + auVar36._24_8_;
                    auVar67 = ZEXT3264(CONCAT824(lVar29,CONCAT816(lVar31,CONCAT88(lVar33,lVar34))));
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x30 + uVar50 * 4));
                    lVar35 = auVar68._0_8_ + auVar36._0_8_;
                    lVar28 = auVar68._8_8_ + auVar36._8_8_;
                    lVar32 = auVar68._16_8_ + auVar36._16_8_;
                    lVar30 = auVar68._24_8_ + auVar36._24_8_;
                    auVar68 = ZEXT3264(CONCAT824(lVar30,CONCAT816(lVar32,CONCAT88(lVar28,lVar35))));
                    uVar50 = uVar50 + 0x10;
                  } while (uVar52 != uVar50);
                  auVar69._0_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                  auVar69._8_8_ = lVar28 + lVar33 + lVar63 + lVar59;
                  auVar36._16_8_ = lVar32 + lVar31 + lVar64 + lVar60;
                  auVar36._0_16_ = auVar69;
                  auVar36._24_8_ = lVar30 + lVar29 + lVar66 + lVar62;
                  auVar69 = vpaddq_avx(auVar69,auVar36._16_16_);
                  auVar9 = vpshufd_avx(auVar69,0xee);
                  auVar69 = vpaddq_avx(auVar69,auVar9);
                  uVar50 = auVar69._0_8_;
                  if (uVar43 == uVar52) goto LAB_006558df;
                  uVar47 = uVar52;
                  if ((uVar43 & 0xc) != 0) goto LAB_00655886;
                }
                do {
                  uVar50 = uVar50 + (long)*(int *)(lVar61 + uVar52 * 4);
                  uVar52 = uVar52 + 1;
LAB_006558da:
                } while (uVar43 != uVar52);
              }
LAB_006558df:
              local_440 = local_440 + uVar50;
              uVar43 = *(ulong *)(lVar45 + lVar55 + 0x5a0);
              if (uVar43 == 0) {
                uVar50 = 0;
              }
              else {
                lVar45 = *(long *)(lVar45 + lVar55 + 0x598);
                if (uVar43 < 4) {
                  uVar52 = 0;
                  uVar50 = 0;
                }
                else {
                  if (uVar43 < 0x10) {
                    uVar50 = 0;
                    uVar47 = 0;
LAB_006559b8:
                    uVar52 = uVar43 & 0xfffffffffffffffc;
                    auVar67 = ZEXT864(uVar50);
                    do {
                      auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + uVar47 * 4));
                      auVar12._0_8_ = auVar67._0_8_ + auVar36._0_8_;
                      auVar12._8_8_ = auVar67._8_8_ + auVar36._8_8_;
                      auVar20._16_8_ = auVar67._16_8_ + auVar36._16_8_;
                      auVar20._0_16_ = auVar12;
                      auVar20._24_8_ = auVar67._24_8_ + auVar36._24_8_;
                      auVar67 = ZEXT3264(auVar20);
                      uVar47 = uVar47 + 4;
                    } while (uVar52 != uVar47);
                    auVar69 = vpaddq_avx(auVar12,auVar20._16_16_);
                    auVar9 = vpshufd_avx(auVar69,0xee);
                    auVar69 = vpaddq_avx(auVar69,auVar9);
                    uVar50 = auVar69._0_8_;
                    goto LAB_00655a0a;
                  }
                  uVar52 = uVar43 & 0xfffffffffffffff0;
                  lVar55 = 0;
                  lVar58 = 0;
                  lVar59 = 0;
                  lVar60 = 0;
                  uVar50 = 0;
                  lVar61 = 0;
                  lVar51 = 0;
                  lVar63 = 0;
                  lVar64 = 0;
                  auVar67 = ZEXT1664((undefined1  [16])0x0);
                  auVar68 = ZEXT1664((undefined1  [16])0x0);
                  do {
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + uVar50 * 4));
                    lVar55 = lVar55 + auVar36._0_8_;
                    lVar58 = lVar58 + auVar36._8_8_;
                    lVar59 = lVar59 + auVar36._16_8_;
                    lVar60 = lVar60 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x10 + uVar50 * 4));
                    lVar61 = lVar61 + auVar36._0_8_;
                    lVar51 = lVar51 + auVar36._8_8_;
                    lVar63 = lVar63 + auVar36._16_8_;
                    lVar64 = lVar64 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x20 + uVar50 * 4));
                    lVar62 = auVar67._0_8_ + auVar36._0_8_;
                    lVar34 = auVar67._8_8_ + auVar36._8_8_;
                    lVar33 = auVar67._16_8_ + auVar36._16_8_;
                    lVar31 = auVar67._24_8_ + auVar36._24_8_;
                    auVar67 = ZEXT3264(CONCAT824(lVar31,CONCAT816(lVar33,CONCAT88(lVar34,lVar62))));
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x30 + uVar50 * 4));
                    lVar66 = auVar68._0_8_ + auVar36._0_8_;
                    lVar35 = auVar68._8_8_ + auVar36._8_8_;
                    lVar28 = auVar68._16_8_ + auVar36._16_8_;
                    lVar32 = auVar68._24_8_ + auVar36._24_8_;
                    auVar68 = ZEXT3264(CONCAT824(lVar32,CONCAT816(lVar28,CONCAT88(lVar35,lVar66))));
                    uVar50 = uVar50 + 0x10;
                  } while (uVar52 != uVar50);
                  auVar11._0_8_ = lVar66 + lVar62 + lVar61 + lVar55;
                  auVar11._8_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                  auVar19._16_8_ = lVar28 + lVar33 + lVar63 + lVar59;
                  auVar19._0_16_ = auVar11;
                  auVar19._24_8_ = lVar32 + lVar31 + lVar64 + lVar60;
                  auVar69 = vpaddq_avx(auVar11,auVar19._16_16_);
                  auVar9 = vpshufd_avx(auVar69,0xee);
                  auVar69 = vpaddq_avx(auVar69,auVar9);
                  uVar50 = auVar69._0_8_;
                  if (uVar43 == uVar52) goto LAB_00655773;
                  uVar47 = uVar52;
                  if ((uVar43 & 0xc) != 0) goto LAB_006559b8;
                }
                do {
                  uVar50 = uVar50 + (long)*(int *)(lVar45 + uVar52 * 4);
                  uVar52 = uVar52 + 1;
LAB_00655a0a:
                } while (uVar43 != uVar52);
              }
LAB_00655773:
              local_438 = local_438 + uVar50;
              lVar53 = lVar53 + 1;
            } while (lVar53 != *(long *)(lVar3 + 0x1d8));
          }
          if (uVar4 == 0) {
            local_3c0 = 0;
          }
          else {
            if ((ulong)uVar4 < 4) {
              uVar50 = 0;
              local_3c0 = 0;
            }
            else {
              if ((ulong)uVar4 < 0x10) {
                local_3c0 = 0;
                uVar43 = 0;
LAB_00655afc:
                uVar50 = uVar4 & 0xfffffffffffffffc;
                auVar67 = ZEXT864(local_3c0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar56 + uVar43 * 8);
                  auVar14._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                  auVar14._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  auVar22._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  auVar22._0_16_ = auVar14;
                  auVar22._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(auVar22);
                  uVar43 = uVar43 + 4;
                } while (uVar50 != uVar43);
                auVar8 = vpaddq_avx(auVar14,auVar22._16_16_);
                auVar69 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar69);
                local_3c0 = auVar8._0_8_;
                goto LAB_00655f07;
              }
              uVar50 = uVar4 & 0xfffffffffffffff0;
              lVar54 = 0;
              lVar45 = 0;
              lVar61 = 0;
              lVar51 = 0;
              uVar43 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar58 = 0;
              lVar59 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar56 + uVar43 * 8);
                lVar54 = lVar54 + *(long *)*pauVar1;
                lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                lVar61 = lVar61 + SUB248(*pauVar1,0x10);
                lVar51 = lVar51 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x20 + uVar43 * 8);
                lVar53 = lVar53 + *(long *)*pauVar1;
                lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                lVar58 = lVar58 + SUB248(*pauVar1,0x10);
                lVar59 = lVar59 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x40 + uVar43 * 8);
                lVar63 = auVar67._0_8_ + *(long *)*pauVar1;
                lVar64 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                lVar66 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                lVar35 = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x60 + uVar43 * 8);
                lVar60 = auVar68._0_8_ + *(long *)*pauVar1;
                lVar62 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                lVar34 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                lVar33 = auVar68._24_8_ + *(long *)pauVar1[1];
                auVar68 = ZEXT3264(CONCAT824(lVar33,CONCAT816(lVar34,CONCAT88(lVar62,lVar60))));
                uVar43 = uVar43 + 0x10;
              } while (uVar50 != uVar43);
              auVar13._0_8_ = lVar60 + lVar63 + lVar53 + lVar54;
              auVar13._8_8_ = lVar62 + lVar64 + lVar55 + lVar45;
              auVar21._16_8_ = lVar34 + lVar66 + lVar58 + lVar61;
              auVar21._0_16_ = auVar13;
              auVar21._24_8_ = lVar33 + lVar35 + lVar59 + lVar51;
              auVar69 = vpaddq_avx(auVar13,auVar21._16_16_);
              auVar9 = vpshufd_avx(auVar69,0xee);
              auVar69 = vpaddq_avx(auVar69,auVar9);
              local_3c0 = auVar69._0_8_;
              if (uVar4 == uVar50) goto LAB_00655f0c;
              uVar43 = uVar50;
              if (((ulong)(byte)auVar8[0] & 0xc) != 0) goto LAB_00655afc;
            }
            do {
              local_3c0 = local_3c0 + *(long *)(lVar56 + uVar50 * 8);
              uVar50 = uVar50 + 1;
LAB_00655f07:
            } while (uVar4 != uVar50);
          }
LAB_00655f0c:
          if (uVar5 == 0) {
            local_3b8 = 0;
          }
          else {
            if ((ulong)uVar5 < 4) {
              uVar43 = 0;
              local_3b8 = 0;
            }
            else {
              if ((ulong)uVar5 < 0x10) {
                local_3b8 = 0;
                uVar50 = 0;
              }
              else {
                uVar43 = uVar5 & 0xfffffffffffffff0;
                lVar54 = 0;
                lVar45 = 0;
                lVar56 = 0;
                lVar58 = 0;
                uVar50 = 0;
                lVar53 = 0;
                lVar55 = 0;
                lVar61 = 0;
                lVar51 = 0;
                auVar67 = ZEXT1664((undefined1  [16])0x0);
                auVar68 = ZEXT1664((undefined1  [16])0x0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar65 + uVar50 * 8);
                  lVar54 = lVar54 + *(long *)*pauVar1;
                  lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                  lVar56 = lVar56 + SUB248(*pauVar1,0x10);
                  lVar58 = lVar58 + *(long *)pauVar1[1];
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x20 + uVar50 * 8);
                  lVar53 = lVar53 + *(long *)*pauVar1;
                  lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                  lVar61 = lVar61 + SUB248(*pauVar1,0x10);
                  lVar51 = lVar51 + *(long *)pauVar1[1];
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x40 + uVar50 * 8);
                  lVar59 = auVar67._0_8_ + *(long *)*pauVar1;
                  lVar60 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  lVar62 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  lVar34 = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x60 + uVar50 * 8);
                  lVar63 = auVar68._0_8_ + *(long *)*pauVar1;
                  lVar64 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                  lVar66 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                  lVar35 = auVar68._24_8_ + *(long *)pauVar1[1];
                  auVar68 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                  uVar50 = uVar50 + 0x10;
                } while (uVar43 != uVar50);
                auVar15._0_8_ = lVar63 + lVar59 + lVar53 + lVar54;
                auVar15._8_8_ = lVar64 + lVar60 + lVar55 + lVar45;
                auVar23._16_8_ = lVar66 + lVar62 + lVar61 + lVar56;
                auVar23._0_16_ = auVar15;
                auVar23._24_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                auVar8 = vpaddq_avx(auVar15,auVar23._16_16_);
                auVar69 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar69);
                local_3b8 = auVar8._0_8_;
                if (uVar5 == uVar43) goto LAB_0065602c;
                uVar50 = uVar43;
                if (((ulong)(byte)auVar10[0] & 0xc) == 0) goto LAB_00656020;
              }
              uVar43 = uVar5 & 0xfffffffffffffffc;
              auVar67 = ZEXT864(local_3b8);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar65 + uVar50 * 8);
                auVar10._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                auVar10._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                auVar24._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                auVar24._0_16_ = auVar10;
                auVar24._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(auVar24);
                uVar50 = uVar50 + 4;
              } while (uVar43 != uVar50);
              auVar8 = vpaddq_avx(auVar10,auVar24._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              local_3b8 = auVar8._0_8_;
              if (uVar5 == uVar43) goto LAB_0065602c;
            }
LAB_00656020:
            do {
              local_3b8 = local_3b8 + *(long *)(lVar65 + uVar43 * 8);
              uVar43 = uVar43 + 1;
            } while (uVar5 != uVar43);
          }
LAB_0065602c:
          if (uVar40 == 0) {
            local_3b0 = 0;
          }
          else {
            if (uVar40 < 4) {
              uVar50 = 0;
              local_3b0 = 0;
            }
            else {
              if (uVar40 < 0x10) {
                local_3b0 = 0;
                uVar43 = 0;
LAB_006560e4:
                uVar50 = uVar40 & 0xfffffffffffffffc;
                auVar67 = ZEXT864(local_3b0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar48 + uVar43 * 8);
                  auVar17._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                  auVar17._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  auVar26._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  auVar26._0_16_ = auVar17;
                  auVar26._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(auVar26);
                  uVar43 = uVar43 + 4;
                } while (uVar50 != uVar43);
                auVar8 = vpaddq_avx(auVar17,auVar26._16_16_);
                auVar10 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar10);
                local_3b0 = auVar8._0_8_;
                goto LAB_00656137;
              }
              uVar50 = uVar40 & 0xfffffffffffffff0;
              lVar54 = 0;
              lVar45 = 0;
              lVar56 = 0;
              lVar61 = 0;
              uVar43 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar65 = 0;
              lVar58 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar48 + uVar43 * 8);
                lVar54 = lVar54 + *(long *)*pauVar1;
                lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                lVar56 = lVar56 + SUB248(*pauVar1,0x10);
                lVar61 = lVar61 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x20 + uVar43 * 8);
                lVar53 = lVar53 + *(long *)*pauVar1;
                lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                lVar65 = lVar65 + SUB248(*pauVar1,0x10);
                lVar58 = lVar58 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x40 + uVar43 * 8);
                lVar51 = auVar67._0_8_ + *(long *)*pauVar1;
                lVar63 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                lVar64 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                lVar66 = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(CONCAT824(lVar66,CONCAT816(lVar64,CONCAT88(lVar63,lVar51))));
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x60 + uVar43 * 8);
                lVar59 = auVar68._0_8_ + *(long *)*pauVar1;
                lVar60 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                lVar62 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                lVar34 = auVar68._24_8_ + *(long *)pauVar1[1];
                auVar68 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                uVar43 = uVar43 + 0x10;
              } while (uVar50 != uVar43);
              auVar16._0_8_ = lVar59 + lVar51 + lVar53 + lVar54;
              auVar16._8_8_ = lVar60 + lVar63 + lVar55 + lVar45;
              auVar25._16_8_ = lVar62 + lVar64 + lVar65 + lVar56;
              auVar25._0_16_ = auVar16;
              auVar25._24_8_ = lVar34 + lVar66 + lVar58 + lVar61;
              auVar8 = vpaddq_avx(auVar16,auVar25._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              local_3b0 = auVar8._0_8_;
              if (uVar40 == uVar50) goto LAB_0065613c;
              uVar43 = uVar50;
              if ((uVar40 & 0xc) != 0) goto LAB_006560e4;
            }
            do {
              local_3b0 = local_3b0 + *(long *)(lVar48 + uVar50 * 8);
              uVar50 = uVar50 + 1;
LAB_00656137:
            } while (uVar40 != uVar50);
          }
LAB_0065613c:
          if (lVar46 == 0) {
            lVar54 = 0;
          }
          else {
            uVar40 = *(long *)(lVar3 + 0x248) * lVar46;
            uVar43 = local_3e0 - uVar40;
            if (local_3e0 < uVar40) {
              uVar43 = 0;
            }
            if (lVar46 - 1U <= uVar43) {
              uVar43 = lVar46 - 1U;
            }
            lVar54 = 0;
            lVar48 = 0;
            if (0xf < uVar43) {
              uVar43 = uVar43 + 1;
              uVar50 = (ulong)((uint)uVar43 & 0xf);
              if ((uVar43 & 0xf) == 0) {
                uVar50 = 0x10;
              }
              lVar48 = uVar43 - uVar50;
              pauVar49 = (undefined1 (*) [32])(local_3e8 + (uVar40 * 4 + 0x30) * 8);
              lVar54 = 0;
              lVar45 = 0;
              lVar56 = 0;
              lVar61 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar65 = 0;
              lVar58 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              lVar51 = lVar48;
              do {
                auVar36 = vperm2i128_avx2(pauVar49[-0xc],pauVar49[-10],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-0xb],pauVar49[-9],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar54 = auVar36._0_8_ + lVar54;
                lVar45 = auVar36._8_8_ + lVar45;
                lVar56 = auVar36._16_8_ + lVar56;
                lVar61 = auVar36._24_8_ + lVar61;
                auVar36 = vperm2i128_avx2(pauVar49[-8],pauVar49[-6],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-7],pauVar49[-5],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar53 = auVar36._0_8_ + lVar53;
                lVar55 = auVar36._8_8_ + lVar55;
                lVar65 = auVar36._16_8_ + lVar65;
                lVar58 = auVar36._24_8_ + lVar58;
                auVar36 = vperm2i128_avx2(pauVar49[-4],pauVar49[-2],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-3],pauVar49[-1],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar59 = auVar36._0_8_ + auVar67._0_8_;
                lVar60 = auVar36._8_8_ + auVar67._8_8_;
                lVar62 = auVar36._16_8_ + auVar67._16_8_;
                lVar34 = auVar36._24_8_ + auVar67._24_8_;
                auVar67 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                auVar36 = vperm2i128_avx2(*pauVar49,pauVar49[2],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[1],pauVar49[3],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar63 = auVar36._0_8_ + auVar68._0_8_;
                lVar64 = auVar36._8_8_ + auVar68._8_8_;
                lVar66 = auVar36._16_8_ + auVar68._16_8_;
                lVar35 = auVar36._24_8_ + auVar68._24_8_;
                auVar68 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                pauVar49 = pauVar49 + 0x10;
                lVar51 = lVar51 + -0x10;
              } while (lVar51 != 0);
              auVar18._0_8_ = lVar63 + lVar59 + lVar53 + lVar54;
              auVar18._8_8_ = lVar64 + lVar60 + lVar55 + lVar45;
              auVar27._16_8_ = lVar66 + lVar62 + lVar65 + lVar56;
              auVar27._0_16_ = auVar18;
              auVar27._24_8_ = lVar35 + lVar34 + lVar58 + lVar61;
              auVar8 = vpaddq_avx(auVar18,auVar27._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              lVar54 = auVar8._0_8_;
            }
            lVar46 = lVar46 - lVar48;
            uVar40 = uVar40 + lVar48;
            pcVar44 = local_3e8 + uVar40 * 0x20;
            do {
              if (local_3e0 <= uVar40) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar40,local_3e0,&PTR_s_src_out_rs_00210720);
              }
              lVar54 = lVar54 + *(long *)pcVar44;
              uVar40 = uVar40 + 1;
              pcVar44 = pcVar44 + 0x20;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          local_348[0] = local_3c0 - lVar54;
          local_2e0 = &local_440;
          local_2d8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          local_2d0 = &local_3c0;
          local_2c8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          local_2c0 = &local_438;
          local_2b8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          local_2b0 = &local_3b8;
          local_2a8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          local_2a0 = &local_3b0;
          local_298 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          local_290 = local_348;
          local_288 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020c087,&local_2e0);
          if (((local_440 != local_3c0) || (local_438 != local_3b8)) ||
             ((long)local_3b0 < (long)local_348[0])) {
            std[c60ef17cbf7de79f]::io::stdio::_eprint("[v2b] CHECK FAILED\n",0x27);
                    /* WARNING: Subroutine does not return */
            _Exit(5);
          }
        }
        core[62e902411887be45]::ptr::drop_glue::<[alloc[2a0ada2ddd1fabff]::vec::Vec<i64>_4usize]>
                  (&local_3a8);
        if (local_3d8 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)
             ) {
            free(__ptr);
          }
          else {
            uVar43 = local_3d8 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) || (cVar39 = sys::big_put(__ptr,pcVar44), cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = __ptr;
            }
          }
        }
        pcVar38 = local_478;
        if (local_480 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_478 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_478)) {
            free(local_478);
          }
          else {
            uVar43 = local_480;
            if (local_480 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) || (cVar39 = sys::big_put(local_478,pcVar44), cVar39 == '\0')
               ) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = local_410;
        if (local_418 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_410 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_410)) {
            free(local_410);
          }
          else {
            uVar43 = local_418 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) || (cVar39 = sys::big_put(local_410,pcVar44), cVar39 == '\0')
               ) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = local_460;
        if (local_468 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_460 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_460)) {
            free(local_460);
          }
          else {
            uVar43 = local_468;
            if (local_468 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) || (cVar39 = sys::big_put(local_460,pcVar44), cVar39 == '\0')
               ) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = local_428;
        if (local_430 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_428 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_428)) {
            free(local_428);
          }
          else {
            uVar43 = local_430 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) || (cVar39 = sys::big_put(local_428,pcVar44), cVar39 == '\0')
               ) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = local_3e8;
        if (local_3f0 != 0) {
          if (((sys::A_BASE_0 == (code *)0x0) || (local_3e8 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_3e8)) {
            free(local_3e8);
          }
          else {
            uVar43 = local_3f0 * 0x20 - 1;
            lVar46 = LZCOUNT(uVar43);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 < 0x10000) || (cVar39 = sys::big_put(local_3e8,pcVar44), cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
      }
      if (*(ulong *)(local_308 + 0x10) < uVar43) {
        end_user_file();
        return;
      }
      local_2e0 = (ulong *)(uVar43 - 1);
      lVar46 = *(long *)(local_308 + 8);
      uVar43 = *(ulong *)(lVar46 + (long)local_2e0 * 0x18);
      uVar4 = *(undefined8 *)(lVar46 + 8 + (long)local_2e0 * 0x18);
      uVar5 = *(undefined8 *)(lVar46 + 0x10 + (long)local_2e0 * 0x18);
      uVar6 = *(undefined8 *)(local_310 + 8);
      uVar7 = *(undefined8 *)(local_310 + 0x10);
      local_268._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
      local_268._0_8_ = &local_2e0;
      alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_280,&DAT_0020c382,local_268);
      pcVar44 = local_278;
      <std[c60ef17cbf7de79f]::path::Path>::_join(&local_2e0,uVar6,uVar7,local_278,local_270);
      if (local_280 != 0) {
        if (((sys::A_BASE_0 == (code *)0x0) || (pcVar44 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= pcVar44)) {
          free(pcVar44);
        }
        else {
          uVar40 = local_280;
          if (local_280 < 0x11) {
            uVar40 = 0x10;
          }
          lVar46 = LZCOUNT(uVar40 - 1);
          lVar54 = 0x40 - lVar46;
          if ((uVar40 - 1 < 0x10000) || (cVar39 = sys::big_put(pcVar44,lVar54), cVar39 == '\0')) {
            if (lVar46 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(undefined8 *)pcVar44 = *(undefined8 *)(in_FS_OFFSET + lVar54 * 8 + -0x3c8);
            *(code **)(in_FS_OFFSET + lVar54 * 8 + -0x3c8) = pcVar44;
          }
        }
      }
      pcVar38 = local_2d8;
      if (*(ulong *)(lVar3 + 0xa0) <= uVar43) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar43,*(ulong *)(lVar3 + 0xa0),&PTR_s_src_main_rs_00210588);
      }
      lVar46 = *(long *)(lVar3 + 0x98);
      lVar54 = uVar43 * 0x7a0;
      lStack_258 = *(long *)(lVar46 + 0x538 + lVar54);
      pcStack_250 = *(code **)(lVar46 + 0x568 + lVar54);
      local_248 = *(long *)(lVar46 + 0x598 + lVar54);
      local_240 = *(undefined8 *)(lVar46 + 0x5c8 + lVar54);
      local_238 = *(undefined8 *)(lVar46 + 0x4a8 + lVar54);
      local_230 = *(undefined8 *)(lVar46 + 0x4b0 + lVar54);
      local_228 = *(char **)(lVar46 + 0x478 + lVar54);
      local_220 = *(undefined8 *)(lVar46 + 0x480 + lVar54);
      local_218 = *(undefined8 *)(lVar46 + 0x510 + lVar54);
      local_268._8_8_ = *(undefined8 *)(lVar46 + 0x508 + lVar54);
      local_268._0_8_ = *(undefined8 *)(lVar46 + 0x4d8 + lVar54);
      write_rows(local_268,uVar4,uVar5,local_2d8,local_2d0,*(undefined8 *)(local_318 + 8),
                 *(undefined8 *)(local_318 + 0x10),*(undefined8 *)(local_320 + 8),
                 *(undefined8 *)(local_320 + 0x10));
    } while (local_2e0 == (ulong *)0x0);
    if (((sys::A_BASE_0 != (code *)0x0) && (sys::A_BASE_0 <= pcVar38)) && (pcVar38 < sys::A_END_0))
    {
      puVar41 = local_2e0;
      if (local_2e0 < &DAT_00000011) {
        puVar41 = (ulong *)&DAT_00000010;
      }
      lVar46 = LZCOUNT((undefined1 *)((long)puVar41 + -1));
      pcVar44 = (code *)(0x40 - lVar46);
      if (((undefined1 *)((long)puVar41 + -1) < (undefined1 *)0x10000) ||
         (cVar39 = sys::big_put(pcVar38,pcVar44), cVar39 == '\0')) {
        if (lVar46 == 0) {
LAB_00656535:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (pcVar44,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
        *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
      }
      goto LAB_0065467d;
    }
    free(pcVar38);
  } while( true );
}


// ==== pipeline::out::stage45::{closure#8} @ 00656580 (9644 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::out::stage45::{closure#8} */

void __rustcall pipeline[509596c7b52975b2]::out::stage45::_closure_8_(long *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [24];
  int *piVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lVar31;
  long lVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auVar30 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [24];
  bool bVar45;
  undefined1 (*pauVar46) [64];
  char cVar47;
  byte bVar48;
  ulong uVar49;
  ulong uVar50;
  undefined1 (*__ptr) [64];
  undefined1 (*pauVar51) [64];
  undefined1 (*__ptr_00) [64];
  ulong uVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 *puVar61;
  long lVar62;
  long lVar63;
  undefined1 (*pauVar64) [64];
  ulong uVar65;
  ulong uVar66;
  undefined1 auVar78 [16];
  ulong uVar67;
  undefined1 *puVar68;
  undefined1 (*pauVar69) [64];
  undefined1 *puVar70;
  undefined1 (*pauVar71) [32];
  undefined1 *puVar72;
  long lVar73;
  undefined1 (*pauVar74) [64];
  undefined1 *puVar75;
  ulong uVar76;
  long *in_FS_OFFSET;
  bool bVar77;
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  long lVar88;
  undefined1 auVar87 [32];
  long lVar89;
  long lVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  long lVar94;
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar97 [16];
  ulong local_5b0;
  undefined1 (*local_588) [64];
  undefined1 (*local_580) [64];
  long local_570;
  ulong local_548;
  long local_530;
  long local_528;
  ulong local_4d0;
  char *local_4c8;
  long local_4c0;
  undefined1 *local_4b0;
  ulong local_460;
  undefined1 *local_458;
  undefined1 (*pauStack_450) [64];
  ulong uStack_448;
  undefined1 *puStack_440;
  long lStack_438;
  ulong uStack_430;
  undefined1 *puStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined1 *local_410;
  long local_408;
  ulong local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  long local_3e8;
  ulong local_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  ulong local_3c0;
  ulong local_3b8;
  char *local_3b0;
  long local_3a8;
  long *local_3a0;
  long local_398;
  ulong local_390;
  long local_388;
  size_t *local_380;
  undefined8 local_378;
  long lStack_370;
  undefined1 auStack_368 [16];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 local_320;
  ulong local_318;
  undefined1 (*local_310) [64];
  undefined8 local_308;
  ulong local_300;
  undefined1 (*local_2f8) [64];
  undefined8 local_2f0;
  ulong local_2e8;
  undefined1 (*local_2e0) [64];
  undefined8 local_2d8;
  ulong local_2d0;
  undefined1 (*local_2c8) [64];
  undefined8 local_2c0;
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [16];
  long lStack_268;
  undefined1 (*pauStack_260) [64];
  long lStack_258;
  undefined1 local_250 [32];
  undefined8 local_230;
  ulong local_228;
  undefined1 (*local_220) [64];
  long local_218;
  undefined1 (*local_210) [64];
  long local_208;
  char *local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 (*local_1d0) [64];
  ulong local_1c8;
  undefined1 local_1c0;
  char *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 (*local_180) [64];
  ulong local_178;
  undefined1 local_170;
  undefined *local_148;
  undefined8 local_140;
  undefined4 local_138;
  long local_130;
  ulong local_128;
  undefined1 local_120;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  long local_e0;
  ulong local_d8;
  undefined1 local_d0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  ulong local_88;
  undefined1 local_80;
  char *local_58;
  undefined8 local_50;
  undefined1 local_40;
  
  if (param_2 < 0x10) {
    lVar54 = param_2 * 0x50;
    puVar70 = *(undefined1 **)(S3FILE + lVar54);
    *(undefined8 *)(S3FILE + lVar54) = 0xffffffffffffffff;
    if (puVar70 != (undefined1 *)0xffffffffffffffff) {
      local_410 = *(undefined1 **)(S3FILE + lVar54 + 0x48);
      pauStack_450 = *(undefined1 (**) [64])(S3FILE + lVar54 + 8);
      uStack_448 = *(ulong *)(S3FILE + lVar54 + 0x10);
      puStack_440 = *(undefined1 **)(S3FILE + lVar54 + 0x18);
      lStack_438 = *(long *)(S3FILE + lVar54 + 0x20);
      uStack_430 = *(ulong *)(S3FILE + lVar54 + 0x28);
      puStack_428 = *(undefined1 **)(S3FILE + lVar54 + 0x30);
      lStack_420 = *(long *)(S3FILE + lVar54 + 0x38);
      uStack_418 = *(ulong *)(S3FILE + lVar54 + 0x40);
      lVar54 = *in_FS_OFFSET;
      local_458 = puVar70;
      if ((char)in_FS_OFFSET[-0xaa] == '\0') {
        lVar3 = in_FS_OFFSET[-0xb5];
      }
      else {
        if ((char)in_FS_OFFSET[-0xaa] != '\x01') {
          core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::UserFile>
                    (&local_458);
          std[c60ef17cbf7de79f]::thread::local::panic_access_error
                    (&PTR_s__rustc_0ef1bc386059596dada8fb65b_0020fa38);
LAB_006589fe:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check();
        }
        std[c60ef17cbf7de79f]::sys::thread_local::destructors::linux_like::register
                  (lVar54 + -0x5a8,
                   std[c60ef17cbf7de79f]::sys::thread_local::native::eager::destroy::
                   <core[62e902411887be45]::cell::RefCell<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::pqw::UserFile>>>
                  );
        *(undefined1 *)(in_FS_OFFSET + -0xaa) = 0;
        lVar3 = in_FS_OFFSET[-0xb5];
      }
      if (lVar3 != 0) {
        bVar48 = core[62e902411887be45]::cell::panic_already_borrowed(&PTR_s_src_out_rs_00210570);
LAB_006589b3:
        local_278[8] = bVar48;
        local_278._0_8_ = param_1;
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,local_278,
                   &
                   PTR_<std[c60ef17cbf7de79f]::sync::poison::PoisonError<std[c60ef17cbf7de79f]::sync::poison::mutex::MutexGuard<[i64_4usize]>>>_00211fb0
                   ,&PTR_s_src_out_rs_002107b8);
      }
      in_FS_OFFSET[-0xb5] = -1;
      lVar3 = in_FS_OFFSET[-0xb4];
      local_378 = *(undefined8 *)(lVar54 + -0x598);
      lStack_370 = *(long *)(lVar54 + -0x590);
      auStack_368 = *(undefined1 (*) [16])(lVar54 + -0x588);
      local_358 = *(undefined8 *)*(undefined1 (*) [32])(lVar54 + -0x578);
      uStack_350 = *(undefined8 *)(lVar54 + -0x570);
      uStack_348 = *(undefined8 *)(lVar54 + -0x568);
      uStack_340 = *(undefined8 *)(lVar54 + -0x560);
      auVar79 = *(undefined1 (*) [32])(lVar54 + -0x578);
      auVar82._8_8_ = lStack_420;
      auVar82._0_8_ = puStack_428;
      auVar82._16_8_ = uStack_418;
      auVar82._24_8_ = local_410;
      *(long *)(lVar54 + -0x580) = lStack_438;
      *(ulong *)(lVar54 + -0x578) = uStack_430;
      *(undefined1 **)(lVar54 + -0x570) = puStack_428;
      *(long *)(lVar54 + -0x568) = lStack_420;
      local_338._0_8_ = *(undefined8 *)(lVar54 + -0x558);
      *(undefined1 **)(lVar54 + -0x5a0) = local_458;
      *(undefined1 (**) [64])(lVar54 + -0x598) = pauStack_450;
      *(ulong *)(lVar54 + -0x590) = uStack_448;
      *(undefined1 **)(lVar54 + -0x588) = puStack_440;
      *(undefined1 (*) [32])(lVar54 + -0x570) = auVar82;
      if (lVar3 == -1) {
        lVar54 = 0;
      }
      else {
        local_278._8_8_ = local_378;
        local_278._0_8_ = lVar3;
        pauStack_260 = (undefined1 (*) [64])auStack_368._0_8_;
        lStack_258 = auStack_368._8_8_;
        lStack_268 = lStack_370;
        local_250 = auVar79;
        local_230 = *(undefined8 *)(lVar54 + -0x558);
        auVar97 = <pipeline[509596c7b52975b2]::pqw::UserFile>::finish(local_278);
        if (auVar97._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar97._8_8_);
          die("user_daily",10);
LAB_00658aae:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check();
        }
        lVar54 = in_FS_OFFSET[-0xb5] + 1;
      }
      in_FS_OFFSET[-0xb5] = lVar54;
    }
  }
  lVar54 = *param_1;
  local_390 = param_2;
  complex::clicks_a(lVar54);
  puVar4 = (ulong *)param_1[1];
  LOCK();
  *puVar4 = *puVar4 + 1;
  UNLOCK();
  local_378 = 0;
  lStack_370 = 8;
  auStack_368 = (undefined1  [16])0x0;
  local_358 = 8;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0x10;
  local_338 = (undefined1  [16])0x0;
  local_328 = 1;
  local_320 = 0;
  puVar5 = (ulong *)param_1[2];
  puVar6 = (ulong *)param_1[3];
  puVar7 = (ulong *)param_1[4];
  puVar8 = (ulong *)param_1[6];
  puVar9 = (ulong *)param_1[7];
  puVar10 = (ulong *)param_1[8];
  pcVar11 = (char *)param_1[9];
  local_380 = (size_t *)param_1[10];
  puVar12 = (ulong *)param_1[0xb];
  puVar13 = (ulong *)param_1[0xc];
  local_398 = param_1[0xd];
  lVar3 = param_1[0xe];
  lVar14 = param_1[0xf];
  puVar15 = (undefined8 *)param_1[0x10];
  puVar16 = (undefined8 *)param_1[0x11];
  local_3b0 = (char *)param_1[0x15];
  local_3a0 = (long *)param_1[0x12];
  local_3a8 = param_1[0x13];
  local_3c8 = param_1[0x14];
  local_388 = param_1[5];
LAB_006568d7:
  if ((*puVar4 == *puVar5) && (*puVar6 < *puVar7)) {
    LOCK();
    uVar50 = *puVar6;
    *puVar6 = *puVar6 + 1;
    UNLOCK();
    if (uVar50 < *puVar7) {
      if (*(ulong *)(local_388 + 0x10) <= uVar50) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar50,*(ulong *)(local_388 + 0x10),&PTR_s_src_out_rs_00210800);
      }
      complex::person_shard
                (lVar54,local_390,*(undefined8 *)(*(long *)(local_388 + 8) + uVar50 * 8),&local_378)
      ;
      LOCK();
      *puVar8 = *puVar8 + 1;
      UNLOCK();
      goto LAB_006568d7;
    }
  }
  if ((*puVar4 == *puVar5) && (*puVar8 == *puVar7)) {
    bVar45 = true;
    bVar77 = true;
    if (*puVar10 <= *puVar9) {
      cVar47 = *pcVar11;
      goto joined_r0x006569a9;
    }
  }
  else {
    bVar45 = false;
    bVar77 = false;
    cVar47 = *pcVar11;
joined_r0x006569a9:
    if (cVar47 != '\0') {
      LOCK();
      cVar47 = *pcVar11;
      *pcVar11 = '\0';
      UNLOCK();
      bVar77 = bVar45;
      if (cVar47 != '\0') {
        munmap(*(void **)(lVar54 + 0x250),*local_380);
        goto LAB_006568d7;
      }
    }
    if (*puVar12 < *puVar13) {
      LOCK();
      local_458 = (undefined1 *)*puVar12;
      *puVar12 = *puVar12 + 1;
      UNLOCK();
      if (local_458 < (undefined1 *)*puVar13) {
        if (*(undefined1 **)(local_398 + 0x10) <= local_458) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (local_458,*(undefined1 **)(local_398 + 0x10),&PTR_s_src_out_rs_002107d0);
        }
        lVar56 = *(long *)(local_398 + 8);
        uVar50 = *(ulong *)(lVar56 + (long)local_458 * 0x18);
        if (*(ulong *)(lVar3 + 0x10) <= uVar50) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar50,*(ulong *)(lVar3 + 0x10),&PTR_s_src_out_rs_002107e8);
        }
        uVar17 = *(undefined8 *)(lVar56 + 8 + (long)local_458 * 0x18);
        uVar18 = *(undefined8 *)(lVar56 + 0x10 + (long)local_458 * 0x18);
        lVar56 = *(long *)(lVar3 + 8);
        uVar19 = *(undefined8 *)(lVar14 + 8);
        uVar20 = *(undefined8 *)(lVar14 + 0x10);
        local_278._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
        local_278._0_8_ = &local_458;
        alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_318,&DAT_0020c382,local_278);
        pauVar46 = local_310;
        <std[c60ef17cbf7de79f]::path::Path>::_join(local_278,uVar19,uVar20,local_310,local_308);
        if (local_318 != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [64])0x0) || (pauVar46 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar49 = local_318;
            if (local_318 < 0x11) {
              uVar49 = 0x10;
            }
            lVar73 = LZCOUNT(uVar49 - 1);
            lVar63 = -lVar73;
            if ((uVar49 - 1 < 0x10000) ||
               (cVar47 = sys::big_put(pauVar46,lVar63 + 0x40), cVar47 == '\0')) {
              if (lVar73 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(long *)*pauVar46 = in_FS_OFFSET[lVar63 + -0x39];
              in_FS_OFFSET[lVar63 + -0x39] = (long)pauVar46;
            }
          }
        }
        uVar19 = local_278._8_8_;
        write_rows(uVar50 * 0x58 + lVar56,uVar17,uVar18,local_278._8_8_,lStack_268,*puVar15,
                   puVar15[1],*puVar16,puVar16[1]);
        if (local_278._0_8_ != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [64])0x0) || ((ulong)uVar19 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= (ulong)uVar19)) {
            free((void *)uVar19);
          }
          else {
            uVar50 = local_278._0_8_;
            if ((ulong)local_278._0_8_ < 0x11) {
              uVar50 = 0x10;
            }
            lVar73 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 - 1 < 0x10000) || (cVar47 = sys::big_put(uVar19,lVar63), cVar47 == '\0')) {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)(undefined1 *)uVar19 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = uVar19;
            }
          }
        }
        goto LAB_006568d7;
      }
    }
    if (!bVar77) goto LAB_006568d7;
  }
  LOCK();
  local_460 = *puVar9;
  *puVar9 = *puVar9 + 1;
  UNLOCK();
  if (local_460 < *puVar10) {
    uVar50 = *puVar5;
    uVar49 = local_460 - uVar50;
    if (uVar50 <= local_460) {
      if (*(ulong *)(lVar54 + 0xa0) <= uVar49) goto LAB_006589fe;
      lVar56 = *(long *)(lVar54 + 0x98);
      lVar63 = uVar49 * 0x7a0;
      lStack_268 = *(long *)(lVar56 + 0x538 + lVar63);
      pauStack_260 = *(undefined1 (**) [64])(lVar56 + 0x568 + lVar63);
      lStack_258 = *(long *)(lVar56 + 0x598 + lVar63);
      local_230 = *(undefined8 *)(lVar56 + 0x480 + lVar63);
      uVar55 = *(ulong *)(lVar56 + 0x510 + lVar63);
      local_278._8_8_ = *(undefined8 *)(lVar56 + 0x508 + lVar63);
      local_278._0_8_ = *(undefined8 *)(lVar56 + 0x4d8 + lVar63);
      local_250._8_8_ = *(undefined8 *)(lVar56 + 0x4a8 + lVar63);
      local_250._0_8_ = *(undefined8 *)(lVar56 + 0x5c8 + lVar63);
      local_250._16_8_ = *(undefined8 *)(lVar56 + 0x4b0 + lVar63);
      local_250._24_8_ = *(undefined8 *)(lVar56 + 0x478 + lVar63);
      local_228 = uVar55;
      if (*(ulong *)(lVar3 + 0x10) <= uVar49) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar49,*(ulong *)(lVar3 + 0x10),&PTR_s_src_out_rs_00210788);
      }
      uVar59 = *(ulong *)(*(long *)(lVar3 + 8) + 0x50 + uVar49 * 0x58);
      if ((uVar59 < uVar55) || ((local_460 == uVar50 && *puVar13 == 0 && (*local_3b0 != '\x01')))) {
        uVar17 = *(undefined8 *)(lVar14 + 8);
        uVar18 = *(undefined8 *)(lVar14 + 0x10);
        local_298._0_8_ = *puVar13 + uVar49;
        local_458 = local_298;
        pauStack_450 = (undefined1 (*) [64])<u64_as_core[62e902411887be45]::fmt::Display>::fmt;
        alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_2d0,&DAT_0020c382,&local_458);
        pauVar46 = local_2c8;
        <std[c60ef17cbf7de79f]::path::Path>::_join(&local_458,uVar17,uVar18,local_2c8,local_2c0);
        if (local_2d0 != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [64])0x0) || (pauVar46 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar50 = local_2d0;
            if (local_2d0 < 0x11) {
              uVar50 = 0x10;
            }
            lVar63 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar63;
            if ((uVar50 - 1 < 0x10000) ||
               (cVar47 = sys::big_put(pauVar46,lVar56 + 0x40), cVar47 == '\0')) {
              if (lVar63 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            }
          }
        }
        pauVar46 = pauStack_450;
        write_rows(local_278,uVar59,uVar55,pauStack_450,uStack_448,*puVar15,puVar15[1],*puVar16,
                   puVar16[1]);
        if (local_458 != (undefined1 *)0x0) {
          if (((sys::A_BASE_0 != (undefined1 (*) [64])0x0) && (sys::A_BASE_0 <= pauVar46)) &&
             (pauVar46 < sys::A_END_0)) {
            puVar70 = local_458;
            if (local_458 < &DAT_00000011) {
              puVar70 = &DAT_00000010;
            }
            lVar73 = LZCOUNT(puVar70 + -1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((undefined1 *)0xffff < puVar70 + -1) {
              cVar47 = sys::big_put(pauVar46,lVar63);
              if (cVar47 != '\0') goto LAB_006568d7;
            }
            if (lVar73 == 0) {
LAB_00658a85:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar63,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            goto LAB_006568d7;
          }
          free(pauVar46);
        }
      }
      goto LAB_006568d7;
    }
    local_3c0 = *local_3a0 * local_460;
    if ((local_3c0 | uVar50) >> 0x20 == 0) {
      uVar49 = (local_3c0 & 0xffffffff) / (uVar50 & 0xffffffff);
    }
    else {
      uVar49 = local_3c0 / uVar50;
    }
    uVar55 = *local_3a0 * (local_460 + 1);
    if ((uVar55 | uVar50) >> 0x20 == 0) {
      uVar55 = (uVar55 & 0xffffffff) / (uVar50 & 0xffffffff);
    }
    else {
      uVar55 = uVar55 / uVar50;
    }
    uVar17 = *(undefined8 *)(local_3a8 + 8);
    uVar18 = *(undefined8 *)(local_3a8 + 0x10);
    local_278._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
    local_278._0_8_ = &local_460;
    local_3b8 = uVar50;
    alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_2e8,&DAT_0020c382,local_278);
    pauVar46 = local_2e0;
    <std[c60ef17cbf7de79f]::path::Path>::_join(&local_300,uVar17,uVar18,local_2e0,local_2d8);
    if (local_2e8 != 0) {
      if (((sys::A_BASE_0 == (undefined1 (*) [64])0x0) || (pauVar46 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= pauVar46)) {
        free(pauVar46);
      }
      else {
        uVar50 = local_2e8;
        if (local_2e8 < 0x11) {
          uVar50 = 0x10;
        }
        lVar63 = LZCOUNT(uVar50 - 1);
        lVar56 = -lVar63;
        if ((uVar50 - 1 < 0x10000) ||
           (cVar47 = sys::big_put(pauVar46,lVar56 + 0x40), cVar47 == '\0')) {
          if (lVar63 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
          in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
        }
      }
    }
    pauVar46 = local_2f8;
    uVar59 = *(ulong *)(lVar54 + 0x210);
    puVar70 = (undefined1 *)((uVar55 - uVar49) * uVar59);
    uVar50 = (long)puVar70 * 0x20;
    if (puVar70 < (undefined1 *)0x800000000000000 && uVar50 < 0x7ffffffffffffff9) {
      local_3d0 = local_2f0;
      if (uVar50 == 0) {
        __ptr = (undefined1 (*) [64])&DAT_00000008;
        local_4b0 = (undefined1 *)0x0;
      }
      else {
        __ptr = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar50,8);
        if (__ptr == (undefined1 (*) [64])0x0) goto LAB_00658a4c;
        local_4b0 = puVar70;
      }
      (*(code *)PTR_memset_00841dd0)(__ptr,0,uVar50);
      auVar82 = _DAT_002036c0;
      uVar60 = *(ulong *)(lVar54 + 0x1d8);
      auVar95 = ZEXT3264(_DAT_00203b20);
      auVar96 = ZEXT3264(_DAT_00203780);
      auVar83 = vmovdqa64_avx512f(_DAT_00204bc0);
      auVar84 = vmovdqa64_avx512f(_DAT_00204c00);
      pauVar74 = pauVar46;
      if (uVar60 != 0) {
        if (puVar70 == (undefined1 *)0x0) {
          if (*(long *)(lVar54 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_main_rs_00210588);
          }
        }
        else {
          lVar56 = uVar59 * uVar55;
          uVar76 = lVar56 - 1;
          puVar68 = (undefined1 *)((ulong)puVar70 & 0x7fffffffffffffc);
          uVar67 = 0;
          do {
            if (*(ulong *)(lVar54 + 0xa0) <= uVar67) goto LAB_006589fe;
            if (*(ulong *)(*(long *)(lVar54 + 0x98) + 0x460 + uVar67 * 0x7a0) <= uVar76) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic
                        ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212c50);
            }
            lVar63 = *(long *)(lVar54 + 0x98) + uVar67 * 0x7a0;
            if (*(ulong *)(lVar63 + 0x470) <= uVar76) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic
                        ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212c68);
            }
            pauVar64 = (undefined1 (*) [64])
                       ((1 - (long)puVar70) * 0x10 + uVar76 * 0x10 + *(long *)(lVar63 + 0x468));
            pauVar74 = (undefined1 (*) [64])
                       (*(long *)(lVar63 + 0x458) + uVar76 * 8 + (1 - (long)puVar70) * 8);
            if (puVar70 < (undefined1 *)0x4) {
              puVar72 = (undefined1 *)0x0;
LAB_006573b5:
              puVar75 = puVar72;
              if (((ulong)puVar70 & 1) != 0) {
                auVar91._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar72 * 8);
                auVar91._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar72 * 8);
                auVar79 = vpmovzxdq_avx2(auVar91);
                auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                            ZEXT1632(*(undefined1 (*) [16])
                                                      (*pauVar64 + (long)puVar72 * 0x10)));
                pauVar1 = (undefined1 (*) [24])(*__ptr + (long)puVar72 * 0x20);
                auVar80._0_8_ = auVar79._0_8_ + *(long *)*pauVar1;
                auVar80._8_8_ = auVar79._8_8_ + *(long *)(*pauVar1 + 8);
                auVar80._16_8_ = auVar79._16_8_ + SUB248(*pauVar1,0x10);
                auVar80._24_8_ = auVar79._24_8_ + *(long *)pauVar1[1];
                *(undefined1 (*) [32])(*__ptr + (long)puVar72 * 0x20) = auVar80;
                puVar75 = puVar72 + 1;
              }
              if (puVar70 != puVar72 + 1) {
                lVar63 = (long)puVar70 - (long)puVar75;
                pauVar71 = (undefined1 (*) [32])(*__ptr + (long)puVar75 * 0x20 + 0x20);
                do {
                  auVar92._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8);
                  auVar92._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8);
                  auVar79 = vpmovzxdq_avx2(auVar92);
                  auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                              ZEXT1632(*(undefined1 (*) [16])
                                                        (*pauVar64 + (long)puVar75 * 0x10)));
                  lVar57 = *(long *)(pauVar71[-1] + 8);
                  auVar44 = *(undefined1 (*) [24])pauVar71[-1];
                  lVar73 = *(long *)(pauVar71[-1] + 0x18);
                  puVar72 = puVar75 + 1;
                  *(long *)pauVar71[-1] = auVar79._0_8_ + *(long *)pauVar71[-1];
                  *(long *)(pauVar71[-1] + 8) = auVar79._8_8_ + lVar57;
                  *(long *)(pauVar71[-1] + 0x10) = auVar79._16_8_ + auVar44._16_8_;
                  *(long *)(pauVar71[-1] + 0x18) = auVar79._24_8_ + lVar73;
                  auVar93._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8 + 8);
                  auVar93._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8 + 8);
                  puVar75 = puVar75 + 2;
                  auVar79 = vpmovzxdq_avx2(auVar93);
                  auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                              ZEXT1632(*(undefined1 (*) [16])
                                                        (*pauVar64 + (long)puVar72 * 0x10)));
                  auVar38._0_8_ = auVar79._0_8_ + *(long *)*pauVar71;
                  auVar38._8_8_ = auVar79._8_8_ + *(long *)(*pauVar71 + 8);
                  auVar38._16_8_ = auVar79._16_8_ + SUB248(*(undefined1 (*) [24])*pauVar71,0x10);
                  auVar38._24_8_ = auVar79._24_8_ + *(long *)(*pauVar71 + 0x18);
                  *pauVar71 = auVar38;
                  pauVar71 = pauVar71 + 2;
                  lVar63 = lVar63 + -2;
                } while (lVar63 != 0);
              }
            }
            else {
              if (__ptr < (undefined1 (*) [64])(*(long *)(lVar63 + 0x458) + lVar56 * 8) &&
                  pauVar74 < (undefined1 (*) [64])(*__ptr + uVar50)) {
                puVar72 = (undefined1 *)0x0;
                goto LAB_006573b5;
              }
              puVar72 = (undefined1 *)0x0;
              if (__ptr < (undefined1 (*) [64])(*(long *)(lVar63 + 0x468) + lVar56 * 0x10) &&
                  pauVar64 < (undefined1 (*) [64])(*__ptr + uVar50)) goto LAB_006573b5;
              puVar72 = (undefined1 *)0x0;
              pauVar51 = __ptr;
              do {
                auVar40 = vpblendd_avx2(*(undefined1 (*) [32])(*pauVar74 + (long)puVar72 * 8),
                                        SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xaa);
                auVar86 = vmovdqu64_avx512f(*(undefined1 (*) [64])(*pauVar64 + (long)puVar72 * 0x10)
                                           );
                auVar87 = vpsrlq_avx2(*(undefined1 (*) [32])(*pauVar74 + (long)puVar72 * 8),0x20);
                auVar85 = vpermq_avx512f(auVar95,auVar86);
                auVar86 = vpermq_avx512f(auVar96,auVar86);
                auVar79 = vperm2i128_avx2(*(undefined1 (*) [32])*pauVar51,
                                          *(undefined1 (*) [32])pauVar51[1],0x20);
                auVar81 = vperm2i128_avx2(*(undefined1 (*) [32])(*pauVar51 + 0x20),
                                          *(undefined1 (*) [32])(pauVar51[1] + 0x20),0x20);
                auVar41 = vperm2i128_avx2(*(undefined1 (*) [32])*pauVar51,
                                          *(undefined1 (*) [32])pauVar51[1],0x31);
                auVar42 = vperm2i128_avx2(*(undefined1 (*) [32])(*pauVar51 + 0x20),
                                          *(undefined1 (*) [32])(pauVar51[1] + 0x20),0x31);
                auVar38 = vpunpcklqdq_avx2(auVar79,auVar81);
                auVar39 = vpunpcklqdq_avx2(auVar41,auVar42);
                auVar80 = vpunpckhqdq_avx2(auVar79,auVar81);
                auVar81 = vpunpckhqdq_avx2(auVar41,auVar42);
                auVar97._0_8_ = auVar81._0_8_ + auVar87._0_8_;
                auVar97._8_8_ = auVar81._8_8_ + auVar87._8_8_;
                auVar79._16_8_ = auVar81._16_8_ + auVar87._16_8_;
                auVar79._0_16_ = auVar97;
                auVar79._24_8_ = auVar81._24_8_ + auVar87._24_8_;
                auVar78._0_8_ = auVar38._0_8_ + auVar40._0_8_;
                auVar78._8_8_ = auVar38._8_8_ + auVar40._8_8_;
                auVar22._0_8_ = auVar80._0_8_ + auVar85._0_8_;
                auVar22._8_8_ = auVar80._8_8_ + auVar85._8_8_;
                auVar23._0_8_ = auVar39._0_8_ + auVar86._0_8_;
                auVar23._8_8_ = auVar39._8_8_ + auVar86._8_8_;
                auVar81._16_8_ = auVar39._16_8_ + auVar86._16_8_;
                auVar81._0_16_ = auVar23;
                auVar81._24_8_ = auVar39._24_8_ + auVar86._24_8_;
                auVar86 = vinserti64x4_avx512f
                                    (ZEXT3264(CONCAT824(auVar38._24_8_ + auVar40._24_8_,
                                                        CONCAT816(auVar38._16_8_ + auVar40._16_8_,
                                                                  auVar78))),auVar81,1);
                auVar85 = vinserti64x4_avx512f
                                    (ZEXT3264(CONCAT824(auVar80._24_8_ + auVar85._24_8_,
                                                        CONCAT816(auVar80._16_8_ + auVar85._16_8_,
                                                                  auVar22))),auVar79,1);
                auVar86 = vpermt2q_avx512f(auVar86,auVar84,auVar85);
                auVar86 = vmovdqu64_avx512f(auVar86);
                pauVar51[1] = auVar86;
                auVar86 = vpermt2q_avx512f(ZEXT3264(CONCAT1616(ZEXT116(1) * auVar23,
                                                               ZEXT116(1) * auVar78)),auVar83,
                                           ZEXT3264(CONCAT1616(ZEXT116(1) * auVar97,
                                                               ZEXT116(1) * auVar22)));
                auVar86 = vmovdqu64_avx512f(auVar86);
                *pauVar51 = auVar86;
                puVar72 = puVar72 + 4;
                pauVar51 = pauVar51 + 2;
              } while (puVar68 != puVar72);
              puVar72 = puVar68;
              if (puVar70 != puVar68) goto LAB_006573b5;
            }
            uVar67 = uVar67 + 1;
          } while (uVar67 != uVar60);
        }
      }
      lVar56 = *(long *)(lVar54 + 0x58);
      if (lVar56 != 0) {
        lVar63 = *(long *)(lVar54 + 0x50);
        pauVar74 = *(undefined1 (**) [64])(lVar63 + 0x10);
        if (lVar56 != 1) {
          uVar60 = lVar56 * 0x18 - 0x18;
          uVar50 = uVar60 / 0x18;
          if (uVar60 < 0x78) {
            lVar73 = 0;
          }
          else {
            auVar83 = ZEXT3264(_DAT_002030c0);
            if (uVar60 < 0x198) {
              lVar57 = 0;
            }
            else {
              uVar60 = (ulong)((uint)uVar50 & 0xf);
              if ((uVar50 & 0xf) == 0) {
                uVar60 = 0x10;
              }
              lVar73 = uVar50 - uVar60;
              auVar80 = vpbroadcastq_avx512vl();
              pauVar74 = (undefined1 (*) [64])(lVar63 + 0x148);
              uVar76 = uVar50;
              auVar82 = auVar80;
              auVar79 = auVar80;
              auVar81 = auVar80;
              do {
                auVar84 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar74[-4] + 0x20)),
                                           auVar83,*(undefined1 (*) [64])(pauVar74[-5] + 0x20));
                auVar95 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[-2]),auVar83,
                                           pauVar74[-3]);
                auVar96 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar74[-1] + 0x20)),
                                           auVar83,*(undefined1 (*) [64])(pauVar74[-2] + 0x20));
                auVar86 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[1]),auVar83,
                                           *pauVar74);
                auVar80 = vpmaxuq_avx512vl(auVar80,auVar84._0_32_);
                auVar82 = vpmaxuq_avx512vl(auVar82,auVar95._0_32_);
                auVar79 = vpmaxuq_avx512vl(auVar79,auVar96._0_32_);
                auVar81 = vpmaxuq_avx512vl(auVar81,auVar86._0_32_);
                pauVar74 = pauVar74 + 6;
                uVar76 = uVar76 - 0x10;
              } while (uVar60 != uVar76);
              auVar82 = vpmaxuq_avx512vl(auVar80,auVar82);
              auVar79 = vpmaxuq_avx512vl(auVar79,auVar81);
              auVar82 = vpmaxuq_avx512vl(auVar82,auVar79);
              auVar78 = vpmaxuq_avx512vl(auVar82._0_16_,auVar82._16_16_);
              auVar97 = vpshufd_avx(auVar78,0xee);
              auVar97 = vpmaxuq_avx512vl(auVar78,auVar97);
              pauVar74 = auVar97._0_8_;
              lVar57 = lVar73;
              if ((uint)uVar60 < 5) goto LAB_00657798;
            }
            uVar60 = (ulong)((uint)uVar50 & 3);
            if ((uVar50 & 3) == 0) {
              uVar60 = 4;
            }
            lVar73 = uVar50 - uVar60;
            auVar82 = vpbroadcastq_avx512vl();
            lVar62 = (uVar60 + lVar57) - uVar50;
            pauVar74 = (undefined1 (*) [64])(lVar63 + lVar57 * 0x18 + 0x28);
            do {
              auVar84 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[1]),auVar83,
                                         *pauVar74);
              auVar82 = vpmaxuq_avx512vl(auVar82,auVar84._0_32_);
              pauVar74 = (undefined1 (*) [64])(pauVar74[1] + 0x20);
              lVar62 = lVar62 + 4;
            } while (lVar62 != 0);
            auVar78 = vpmaxuq_avx512vl(auVar82._0_16_,auVar82._16_16_);
            auVar97 = vpshufd_avx(auVar78,0xee);
            auVar97 = vpmaxuq_avx512vl(auVar78,auVar97);
            pauVar74 = auVar97._0_8_;
          }
LAB_00657798:
          lVar57 = uVar50 - lVar73;
          puVar61 = (undefined8 *)(lVar63 + lVar73 * 0x18 + 0x28);
          pauVar64 = pauVar74;
          do {
            pauVar74 = (undefined1 (*) [64])*puVar61;
            if ((undefined1 (*) [64])*puVar61 < pauVar64) {
              pauVar74 = pauVar64;
            }
            puVar61 = puVar61 + 3;
            lVar57 = lVar57 + -1;
            pauVar64 = pauVar74;
          } while (lVar57 != 0);
        }
      }
      if (pauVar74 < (undefined1 (*) [64])&DAT_00000008) {
        pauVar74 = (undefined1 (*) [64])&DAT_00000007;
      }
      if (lVar56 == 0) {
        pauVar74 = (undefined1 (*) [64])&DAT_00000007;
      }
      uVar60 = (long)puVar70 * 4 + 4;
      pauVar64 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar60,4);
      if (pauVar64 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar60);
      }
      pauVar51 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar60,4);
      if (pauVar51 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar60);
      }
      uVar50 = (long)puVar70 * 8;
      uVar76 = (long)puVar70 * 0x18 + 0x40;
      if (-1 < (long)uVar76) {
        local_3d8 = (long)puVar70 * 0x18;
        __ptr_00 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar76);
        if (__ptr_00 == (undefined1 (*) [64])0x0) {
LAB_00658a78:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar76);
        }
        uVar76 = (long)pauVar74 * (long)puVar70 + 0x40;
        if ((long)uVar76 < 0) goto LAB_0065891b;
        if (uVar76 == 0) {
          local_580 = (undefined1 (*) [64])&DAT_00000001;
          if (puVar70 != (undefined1 *)0x0) goto LAB_006578b7;
LAB_0065798f:
          lVar63 = 8;
          local_588 = (undefined1 (*) [64])&DAT_00000004;
          pauVar74 = (undefined1 (*) [64])&DAT_00000008;
          lVar56 = 8;
          lVar73 = 8;
        }
        else {
          local_580 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar76);
          if (local_580 == (undefined1 (*) [64])0x0) goto LAB_00658a78;
          if (puVar70 == (undefined1 *)0x0) goto LAB_0065798f;
LAB_006578b7:
          local_588 = (undefined1 (*) [64])
                      __rustc[45371133cddedda4]::__rust_alloc((long)puVar70 * 4,4);
          if (local_588 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,(long)puVar70 * 4);
          }
          pauVar74 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar50,8);
          if (((pauVar74 == (undefined1 (*) [64])0x0) ||
              (lVar56 = __rustc[45371133cddedda4]::__rust_alloc(uVar50,8), lVar56 == 0)) ||
             ((lVar63 = __rustc[45371133cddedda4]::__rust_alloc(uVar50,8), lVar63 == 0 ||
              (lVar73 = __rustc[45371133cddedda4]::__rust_alloc(uVar50), lVar73 == 0)))) {
LAB_00658a4c:
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar50);
          }
        }
        local_4d0 = (long)puVar70 * 4;
        *(undefined4 *)*pauVar64 = 0;
        *(undefined4 *)*pauVar51 = 0;
        local_570 = 0;
        uVar50 = 0;
        local_530 = 0;
        local_528 = 0;
        uVar67 = uVar49;
        local_458 = puVar70;
        pauStack_450 = pauVar74;
        puStack_440 = puVar70;
        lStack_438 = lVar56;
        puStack_428 = puVar70;
        lStack_420 = lVar63;
        local_410 = puVar70;
        local_408 = lVar73;
LAB_00657a59:
        uVar52 = uVar67;
        uVar65 = uVar55;
        if (uVar55 < uVar67) {
          uVar65 = uVar67;
        }
        while (uVar58 = uVar52, uVar58 != uVar65) {
          uVar67 = uVar58 + 1;
          lVar57 = (uVar58 - uVar49) * uVar59;
          uVar52 = 0;
          while (uVar66 = uVar52, uVar59 != uVar66) {
            lVar62 = (uVar66 + lVar57) * 0x20;
            if ((*(long *)(*__ptr + lVar62) != 0) ||
               (uVar52 = uVar66 + 1, *(long *)(*__ptr + lVar62 + 0x18) != 0)) goto LAB_00657a73;
          }
          uVar66 = uVar59;
LAB_00657a73:
          uVar52 = uVar58 + 1;
          if (uVar66 < uVar59) goto LAB_00657ad7;
        }
        lStack_268 = uVar50 + 1;
        local_220 = pauVar51;
        pauVar69 = pauVar64;
        if (uVar50 == 0) {
          pauVar69 = (undefined1 (*) [64])&DAT_00000004;
          local_220 = (undefined1 (*) [64])&DAT_00000004;
          lStack_268 = 0;
        }
        local_278._0_4_ = 7;
        local_278._8_8_ = pauVar69;
        lStack_258 = local_530;
        local_250._24_8_ = "campaign_id";
        local_230 = 0xb;
        local_228 = CONCAT44(local_228._4_4_,7);
        local_210 = local_580;
        local_208 = local_528;
        local_1e8 = "channel";
        local_1e0 = 7;
        local_1d8 = 6;
        local_1d0 = local_588;
        local_1c0 = 0;
        local_198 = "day";
        local_190 = 3;
        local_188 = 5;
        local_170 = 0;
        local_148 = &DAT_00201e18;
        local_140 = 8;
        local_138 = 5;
        local_120 = 0;
        local_f8 = "purchasing_sessions";
        local_f0 = 0x13;
        local_e8 = 5;
        local_d0 = 0;
        local_a8 = "revenue_cents";
        local_a0 = 0xd;
        local_98 = 5;
        local_80 = 0;
        local_58 = "assisted_sessions";
        local_50 = 0x11;
        uStack_448 = uVar50;
        uStack_430 = uVar50;
        uStack_418 = uVar50;
        local_400 = uVar50;
        pauStack_260 = __ptr_00;
        local_218 = lStack_268;
        local_1c8 = uVar50;
        local_180 = pauVar74;
        local_178 = uVar50;
        local_130 = lVar56;
        local_128 = uVar50;
        local_e0 = lVar63;
        local_d8 = uVar50;
        local_90 = lVar73;
        local_88 = uVar50;
        if (local_3b8 <= local_3c0 && uVar50 == 0) {
          uVar55 = 0;
          local_5b0 = 0;
          uVar49 = 0;
          goto LAB_00658425;
        }
        local_40 = 0;
        auVar97 = pqw::write_file(pauVar46,local_3d0,local_278);
        if (auVar97._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar97._8_8_);
          die("campaign_daily",0xe);
          goto LAB_00658b16;
        }
        if (uVar50 == 0) {
          uVar55 = 0;
          local_5b0 = 0;
          uVar49 = 0;
          goto LAB_00658425;
        }
        if (uVar50 < 4) {
          uVar49 = 0;
          local_5b0 = 0;
          goto LAB_00658250;
        }
        if (uVar50 < 0x10) {
          local_5b0 = 0;
          uVar55 = 0;
          goto LAB_0065820f;
        }
        uVar49 = uVar50 & 0xfffffffffffffff0;
        lVar56 = 0;
        lVar62 = 0;
        lVar53 = 0;
        lVar89 = 0;
        uVar55 = 0;
        lVar57 = 0;
        lVar88 = 0;
        lVar90 = 0;
        lVar94 = 0;
        auVar83 = ZEXT1664((undefined1  [16])0x0);
        auVar84 = ZEXT1664((undefined1  [16])0x0);
        do {
          pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8);
          lVar56 = lVar56 + *(long *)*pauVar1;
          lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
          lVar53 = lVar53 + SUB248(*pauVar1,0x10);
          lVar89 = lVar89 + *(long *)pauVar1[1];
          pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8 + 0x20);
          lVar57 = lVar57 + *(long *)*pauVar1;
          lVar88 = lVar88 + *(long *)(*pauVar1 + 8);
          lVar90 = lVar90 + SUB248(*pauVar1,0x10);
          lVar94 = lVar94 + *(long *)pauVar1[1];
          pauVar1 = (undefined1 (*) [24])(pauVar74[1] + uVar55 * 8);
          lVar21 = auVar83._0_8_ + *(long *)*pauVar1;
          lVar32 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
          lVar34 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
          lVar37 = auVar83._24_8_ + *(long *)pauVar1[1];
          auVar83 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
          pauVar1 = (undefined1 (*) [24])(pauVar74[1] + uVar55 * 8 + 0x20);
          lVar31 = auVar84._0_8_ + *(long *)*pauVar1;
          lVar33 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
          lVar36 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
          lVar35 = auVar84._24_8_ + *(long *)pauVar1[1];
          auVar84 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar36,CONCAT88(lVar33,lVar31))));
          uVar55 = uVar55 + 0x10;
        } while (uVar49 != uVar55);
        auVar24._0_8_ = lVar31 + lVar21 + lVar57 + lVar56;
        auVar24._8_8_ = lVar33 + lVar32 + lVar88 + lVar62;
        auVar39._16_8_ = lVar36 + lVar34 + lVar90 + lVar53;
        auVar39._0_16_ = auVar24;
        auVar39._24_8_ = lVar35 + lVar37 + lVar94 + lVar89;
        auVar97 = vpaddq_avx(auVar24,auVar39._16_16_);
        auVar78 = vpshufd_avx(auVar97,0xee);
        auVar97 = vpaddq_avx(auVar97,auVar78);
        local_5b0 = auVar97._0_8_;
        if (uVar50 == uVar49) {
LAB_00658287:
          uVar49 = uVar50 & 0xfffffffffffffff0;
          lVar56 = 0;
          lVar62 = 0;
          lVar53 = 0;
          lVar89 = 0;
          uVar55 = 0;
          lVar57 = 0;
          lVar88 = 0;
          lVar90 = 0;
          lVar94 = 0;
          auVar83 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          do {
            pauVar1 = (undefined1 (*) [24])(lVar63 + uVar55 * 8);
            lVar56 = lVar56 + *(long *)*pauVar1;
            lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
            lVar53 = lVar53 + SUB248(*pauVar1,0x10);
            lVar89 = lVar89 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x20 + uVar55 * 8);
            lVar57 = lVar57 + *(long *)*pauVar1;
            lVar88 = lVar88 + *(long *)(*pauVar1 + 8);
            lVar90 = lVar90 + SUB248(*pauVar1,0x10);
            lVar94 = lVar94 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x40 + uVar55 * 8);
            lVar21 = auVar83._0_8_ + *(long *)*pauVar1;
            lVar32 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
            lVar34 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
            lVar37 = auVar83._24_8_ + *(long *)pauVar1[1];
            auVar83 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x60 + uVar55 * 8);
            lVar31 = auVar84._0_8_ + *(long *)*pauVar1;
            lVar33 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
            lVar36 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
            lVar35 = auVar84._24_8_ + *(long *)pauVar1[1];
            auVar84 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar36,CONCAT88(lVar33,lVar31))));
            uVar55 = uVar55 + 0x10;
          } while (uVar49 != uVar55);
          auVar26._0_8_ = lVar31 + lVar21 + lVar57 + lVar56;
          auVar26._8_8_ = lVar33 + lVar32 + lVar88 + lVar62;
          auVar41._16_8_ = lVar36 + lVar34 + lVar90 + lVar53;
          auVar41._0_16_ = auVar26;
          auVar41._24_8_ = lVar35 + lVar37 + lVar94 + lVar89;
          auVar97 = vpaddq_avx(auVar26,auVar41._16_16_);
          auVar78 = vpshufd_avx(auVar97,0xee);
          auVar97 = vpaddq_avx(auVar97,auVar78);
          uVar55 = auVar97._0_8_;
          if (uVar50 != uVar49) {
            uVar59 = uVar49;
            if ((uVar50 & 0xc) != 0) goto LAB_006582ff;
            goto LAB_00658340;
          }
LAB_0065836d:
          uVar59 = uVar50 & 0xfffffffffffffff0;
          lVar56 = 0;
          lVar57 = 0;
          lVar88 = 0;
          lVar90 = 0;
          uVar49 = 0;
          lVar63 = 0;
          lVar62 = 0;
          lVar53 = 0;
          lVar89 = 0;
          auVar83 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          do {
            pauVar1 = (undefined1 (*) [24])(lVar73 + uVar49 * 8);
            lVar56 = lVar56 + *(long *)*pauVar1;
            lVar57 = lVar57 + *(long *)(*pauVar1 + 8);
            lVar88 = lVar88 + SUB248(*pauVar1,0x10);
            lVar90 = lVar90 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x20 + uVar49 * 8);
            lVar63 = lVar63 + *(long *)*pauVar1;
            lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
            lVar53 = lVar53 + SUB248(*pauVar1,0x10);
            lVar89 = lVar89 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x40 + uVar49 * 8);
            lVar94 = auVar83._0_8_ + *(long *)*pauVar1;
            lVar31 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
            lVar33 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
            lVar36 = auVar83._24_8_ + *(long *)pauVar1[1];
            auVar83 = ZEXT3264(CONCAT824(lVar36,CONCAT816(lVar33,CONCAT88(lVar31,lVar94))));
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x60 + uVar49 * 8);
            lVar21 = auVar84._0_8_ + *(long *)*pauVar1;
            lVar32 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
            lVar34 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
            lVar37 = auVar84._24_8_ + *(long *)pauVar1[1];
            auVar84 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
            uVar49 = uVar49 + 0x10;
          } while (uVar59 != uVar49);
          auVar28._0_8_ = lVar21 + lVar94 + lVar63 + lVar56;
          auVar28._8_8_ = lVar32 + lVar31 + lVar62 + lVar57;
          auVar87._16_8_ = lVar34 + lVar33 + lVar53 + lVar88;
          auVar87._0_16_ = auVar28;
          auVar87._24_8_ = lVar37 + lVar36 + lVar89 + lVar90;
          auVar97 = vpaddq_avx(auVar28,auVar87._16_16_);
          auVar78 = vpshufd_avx(auVar97,0xee);
          auVar97 = vpaddq_avx(auVar97,auVar78);
          uVar49 = auVar97._0_8_;
          if (uVar50 != uVar59) {
            if ((uVar50 & 0xc) != 0) {
LAB_006583df:
              auVar83 = ZEXT864(uVar49);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar73 + uVar59 * 8);
                auVar29._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
                auVar29._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
                auVar30._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
                auVar30._0_16_ = auVar29;
                auVar30._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
                auVar83 = ZEXT3264(auVar30);
                uVar59 = uVar59 + 4;
              } while ((uVar50 & 0xfffffffffffffffc) != uVar59);
              auVar97 = vpaddq_avx(auVar29,auVar30._16_16_);
              auVar78 = vpshufd_avx(auVar97,0xee);
              auVar97 = vpaddq_avx(auVar97,auVar78);
              uVar49 = auVar97._0_8_;
              uVar59 = uVar50 & 0xfffffffffffffffc;
              goto code_r0x00658420;
            }
            goto LAB_00658418;
          }
        }
        else {
          uVar55 = uVar49;
          if ((uVar50 & 0xc) != 0) {
LAB_0065820f:
            uVar49 = uVar50 & 0xfffffffffffffffc;
            auVar83 = ZEXT864(local_5b0);
            do {
              pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8);
              auVar25._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
              auVar25._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
              auVar40._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
              auVar40._0_16_ = auVar25;
              auVar40._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
              auVar83 = ZEXT3264(auVar40);
              uVar55 = uVar55 + 4;
            } while (uVar49 != uVar55);
            auVar97 = vpaddq_avx(auVar25,auVar40._16_16_);
            auVar78 = vpshufd_avx(auVar97,0xee);
            auVar97 = vpaddq_avx(auVar97,auVar78);
            local_5b0 = auVar97._0_8_;
            if (uVar50 != uVar49) goto LAB_00658250;
LAB_00658275:
            if (0xf < uVar50) goto LAB_00658287;
            uVar55 = 0;
            uVar59 = 0;
LAB_006582ff:
            uVar49 = uVar50 & 0xfffffffffffffffc;
            auVar83 = ZEXT864(uVar55);
            do {
              pauVar1 = (undefined1 (*) [24])(lVar63 + uVar59 * 8);
              auVar27._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
              auVar27._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
              auVar42._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
              auVar42._0_16_ = auVar27;
              auVar42._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
              auVar83 = ZEXT3264(auVar42);
              uVar59 = uVar59 + 4;
            } while (uVar49 != uVar59);
            auVar97 = vpaddq_avx(auVar27,auVar42._16_16_);
            auVar78 = vpshufd_avx(auVar97,0xee);
            auVar97 = vpaddq_avx(auVar97,auVar78);
            uVar55 = auVar97._0_8_;
            if (uVar50 != uVar49) goto LAB_00658340;
code_r0x00658360:
            if (uVar50 < 0x10) {
              uVar59 = 0;
              uVar49 = 0;
              goto LAB_006583df;
            }
            goto LAB_0065836d;
          }
LAB_00658250:
          do {
            local_5b0 = local_5b0 + *(long *)(*pauVar74 + uVar49 * 8);
            uVar49 = uVar49 + 1;
          } while (uVar50 != uVar49);
          if (3 < uVar50) goto LAB_00658275;
          uVar49 = 0;
          uVar55 = 0;
LAB_00658340:
          do {
            uVar55 = uVar55 + *(long *)(lVar63 + uVar49 * 8);
            uVar49 = uVar49 + 1;
          } while (uVar50 != uVar49);
          if (3 < uVar50) goto code_r0x00658360;
          uVar59 = 0;
          uVar49 = 0;
LAB_00658418:
          do {
            uVar49 = uVar49 + *(long *)(lVar73 + uVar59 * 8);
            uVar59 = uVar59 + 1;
code_r0x00658420:
          } while (uVar50 != uVar59);
        }
LAB_00658425:
        core[62e902411887be45]::ptr::drop_glue::<[alloc[2a0ada2ddd1fabff]::vec::Vec<i64>_4usize]>
                  (&local_458);
        if (puVar70 != (undefined1 *)0x0) {
          if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < local_588) &&
             (local_588 < sys::A_END_0)) {
            if (local_4d0 < 0x11) {
              local_4d0 = 0x10;
            }
            lVar56 = -LZCOUNT(local_4d0 - 1);
            if ((local_4d0 - 1 < 0x10000) ||
               (cVar47 = sys::big_put(local_588,lVar56 + 0x40), cVar47 == '\0')) {
              *(long *)*local_588 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)local_588;
            }
          }
          else {
            free(local_588);
          }
        }
        if (uVar76 != 0) {
          if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < local_580) &&
             (local_580 < sys::A_END_0)) {
            if (uVar76 < 0x11) {
              uVar76 = 0x10;
            }
            lVar56 = -LZCOUNT(uVar76 - 1);
            if ((uVar76 - 1 < 0x10000) ||
               (cVar47 = sys::big_put(local_580,lVar56 + 0x40), cVar47 == '\0')) {
              *(long *)*local_580 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)local_580;
            }
          }
          else {
            free(local_580);
          }
        }
        if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < __ptr_00) &&
           (__ptr_00 < sys::A_END_0)) {
          lVar56 = -LZCOUNT(local_3d8 + 0x3f);
          if ((puVar70 < (undefined1 *)0xaa9) ||
             (cVar47 = sys::big_put(__ptr_00,lVar56 + 0x40), cVar47 == '\0')) {
            *(long *)*__ptr_00 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)__ptr_00;
          }
        }
        else {
          free(__ptr_00);
        }
        if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < pauVar51) &&
           (pauVar51 < sys::A_END_0)) {
          uVar50 = 0x10;
          if (0x10 < uVar60) {
            uVar50 = uVar60;
          }
          lVar56 = -LZCOUNT(uVar50 - 1);
          if ((uVar50 - 1 < 0x10000) ||
             (cVar47 = sys::big_put(pauVar51,lVar56 + 0x40), cVar47 == '\0')) {
            *(long *)*pauVar51 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar51;
          }
        }
        else {
          free(pauVar51);
        }
        if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < pauVar64) &&
           (pauVar64 < sys::A_END_0)) {
          if (uVar60 < 0x11) {
            uVar60 = 0x10;
          }
          lVar56 = -LZCOUNT(uVar60 - 1);
          if ((uVar60 - 1 < 0x10000) ||
             (cVar47 = sys::big_put(pauVar64,lVar56 + 0x40), cVar47 == '\0')) {
            *(long *)*pauVar64 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar64;
          }
        }
        else {
          free(pauVar64);
        }
        if (local_4b0 != (undefined1 *)0x0) {
          if (((undefined1 (*) [64])(sys::A_BASE_0[-1] + 0x3f) < __ptr) && (__ptr < sys::A_END_0)) {
            uVar50 = (long)local_4b0 * 0x20 - 1;
            lVar73 = LZCOUNT(uVar50);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 < 0x10000) || (cVar47 = sys::big_put(__ptr,lVar63), cVar47 == '\0')) {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)*__ptr = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)__ptr;
            }
          }
          else {
            free(__ptr);
          }
        }
        if (local_300 != 0) {
          if (((sys::A_BASE_0 == (undefined1 (*) [64])0x0) || (pauVar46 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar50 = local_300;
            if (local_300 < 0x11) {
              uVar50 = 0x10;
            }
            lVar73 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 - 1 < 0x10000) || (cVar47 = sys::big_put(pauVar46,lVar63), cVar47 == '\0'))
            {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            }
          }
        }
        if (*(ulong *)(local_3c8 + 0x10) <= local_460) goto LAB_00658aae;
        param_1 = (long *)(*(long *)(local_3c8 + 8) + local_460 * 0x28);
        piVar2 = (int *)(*(long *)(local_3c8 + 8) + local_460 * 0x28);
        LOCK();
        bVar77 = *piVar2 == 0;
        if (bVar77) {
          *piVar2 = 1;
        }
        UNLOCK();
        if (bVar77) {
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) != 0) goto LAB_006588e9;
LAB_00658849:
          bVar48 = 0;
          cVar47 = *(char *)((long)param_1 + 4);
        }
        else {
          <std[c60ef17cbf7de79f]::sys::sync::mutex::futex::Mutex>::lock_contended(param_1);
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) == 0) goto LAB_00658849;
LAB_006588e9:
          bVar48 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
          bVar48 = bVar48 ^ 1;
          cVar47 = *(char *)((long)param_1 + 4);
        }
        if (cVar47 != '\0') goto LAB_006589b3;
        param_1[1] = local_5b0;
        param_1[2] = uVar55;
        param_1[3] = uVar49;
        param_1[4] = local_570;
        if (((bVar48 == 0) &&
            ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7fffffffffffffff
             ) != 0)) &&
           (cVar47 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path(),
           cVar47 == '\0')) {
          *(undefined1 *)((long)param_1 + 4) = 1;
        }
        LOCK();
        lVar56 = *param_1;
        *(int *)param_1 = 0;
        UNLOCK();
        if ((int)lVar56 == 2) {
          syscall(0xca,param_1,0x81,1);
        }
        goto LAB_006568d7;
      }
    }
LAB_0065891b:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    goto LAB_00658920;
  }
  if (*puVar13 <= *puVar12) {
LAB_00658920:
    end_user_file();
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>
              (&local_378);
    return;
  }
  goto LAB_006568d7;
LAB_00657ad7:
  local_298 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (uVar58 == *(ulong *)(lVar54 + 0x248)) {
    local_2b8._7_25_ = SUB6425(ZEXT1664((undefined1  [16])0x0),7);
    local_2b8._0_7_ = 0x63696e61000000;
    local_2b8._0_4_ = 0x6167726f;
    local_4c8 = "organic";
    local_548 = 7;
    local_4c0 = 7;
  }
  else {
    local_278 = (undefined1  [16])0x0;
    lStack_268 = 0;
    uVar52 = uVar58;
    uVar65 = 0x19;
    do {
      uVar66 = uVar65 - 2;
      local_2b8 = local_298;
      if (0x17 < uVar66) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (0xffffffffffffffff,0x18,&PTR_s_src_out_rs_00212bf0);
      }
      cVar47 = (char)(uVar52 / 10);
      local_298[uVar65 + 0x1e] = (char)uVar52 + cVar47 * -10 | 0x30;
      if (uVar52 < 10) {
        uVar66 = uVar65 - 1;
        break;
      }
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar52 / 10;
      local_298[uVar65 + 0x1d] =
           cVar47 + SUB161(auVar43 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
      bVar77 = 99 < uVar52;
      uVar52 = uVar52 / 100;
      uVar65 = uVar66;
    } while (bVar77);
    if (0x17 < uVar66 - 3) {
LAB_00658b16:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check();
    }
    *(undefined2 *)(local_298 + uVar66 + 0x1d) = 0x5f63;
    local_4c0 = 0x1b - uVar66;
    (*(code *)PTR_memcpy_00841de0)(local_2b8,local_298 + uVar66 + 0x1d);
    if (*(ulong *)(lVar54 + 0x28) <= uVar58) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar58,*(ulong *)(lVar54 + 0x28),&PTR_s_src_out_rs_00212c20);
    }
    uVar52 = (ulong)*(byte *)(*(long *)(lVar54 + 0x20) + uVar58);
    if (*(ulong *)(lVar54 + 0x58) <= uVar52) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar52,*(ulong *)(lVar54 + 0x58),&PTR_s_src_out_rs_00212c38);
    }
    local_4c8 = *(char **)(*(long *)(lVar54 + 0x50) + 8 + uVar52 * 0x18);
    local_548 = *(ulong *)(*(long *)(lVar54 + 0x50) + 0x10 + uVar52 * 0x18);
    if (0x20 < local_548) {
      bVar77 = false;
      goto LAB_00657cac;
    }
  }
  (*(code *)PTR_memcpy_00841de0)(local_298);
  bVar77 = true;
LAB_00657cac:
  uVar52 = 0;
  do {
    uVar65 = uVar52;
    while( true ) {
      uVar52 = uVar65 + 1;
      lVar53 = (uVar65 + lVar57) * 0x20;
      lVar62 = *(long *)(*__ptr + lVar53);
      lVar88 = *(long *)(*__ptr + lVar53 + 0x18);
      if (lVar62 != 0 || lVar88 != 0) break;
      uVar65 = uVar52;
      if (uVar59 <= uVar52) goto LAB_00657a59;
    }
    local_3f0 = *(undefined8 *)(*__ptr + lVar53 + 8);
    local_3f8 = *(undefined8 *)(*__ptr + lVar53 + 0x10);
    lVar53 = 0;
    if (uVar58 == *(ulong *)(lVar54 + 0x248)) {
      lVar53 = lVar62;
    }
    *(undefined1 (*) [32])(*__ptr_00 + local_530) = local_2b8;
    local_3e8 = local_570;
    local_3e0 = uVar50;
    if (bVar77) {
      *(undefined1 (*) [32])(*local_580 + local_528) = local_298;
    }
    else {
      (*(code *)PTR_memcpy_00841de0)
                ((undefined1 (*) [32])(*local_580 + local_528),local_4c8,local_548);
    }
    local_570 = lVar53 + local_3e8;
    local_530 = local_530 + local_4c0;
    local_528 = local_528 + local_548;
    *(int *)(*pauVar64 + local_3e0 * 4 + 4) = (int)local_530;
    *(int *)(*pauVar51 + local_3e0 * 4 + 4) = (int)local_528;
    *(int *)(*local_588 + local_3e0 * 4) = (int)uVar65 + *(int *)(lVar54 + 0x2f0);
    *(long *)(*pauVar74 + local_3e0 * 8) = lVar62;
    *(undefined8 *)(lVar56 + local_3e0 * 8) = local_3f0;
    *(undefined8 *)(lVar63 + local_3e0 * 8) = local_3f8;
    *(long *)(lVar73 + local_3e0 * 8) = lVar88;
    uVar50 = local_3e0 + 1;
  } while (uVar52 < uVar59);
  goto LAB_00657a59;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::initialize<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a760 (137 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::out::S3Ctx>>::try_insert::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar3 = *plVar1;
  *plVar1 = -1;
  if (lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058cfb0);
  }
  lVar4 = plVar1[1];
  lVar5 = plVar1[2];
  lVar6 = plVar1[3];
  lVar7 = plVar1[4];
  lVar8 = plVar1[5];
  lVar9 = plVar1[6];
  lVar10 = plVar1[7];
  lVar11 = plVar1[8];
  lVar12 = plVar1[9];
  lVar13 = plVar1[10];
  lVar14 = plVar1[0xb];
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  plVar2[2] = lVar5;
  plVar2[3] = lVar6;
  plVar2[4] = lVar7;
  plVar2[5] = lVar8;
  plVar2[6] = lVar9;
  plVar2[7] = lVar10;
  plVar2[8] = lVar11;
  plVar2[8] = lVar11;
  plVar2[9] = lVar12;
  plVar2[10] = lVar13;
  plVar2[0xb] = lVar14;
  return;
}


// ==== <<std::sync::once::Once>::call_once<pipeline::out::s3_prep::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067aa00 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once<pipeline[509596c7b52975b2]::out::s3_prep::{closure#0}>::{closure#0}
   as 
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once<pipeline[509596c7b52975b2]::out::s3_prep::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once::
  <pipeline[509596c7b52975b2]::out::s3_prep::{closure#0}>::_closure_0_(&local_8);
  return local_8;
}


// ==== <pipeline::out::stage5::{closure#0} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c400 (5 bytes)

/* <pipeline[509596c7b52975b2]::out::stage5::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::out::stage5::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined1 (*pauVar1) [24];
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  long lVar33;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  long lVar34;
  long lVar35;
  undefined1 auVar27 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  code *pcVar38;
  char cVar39;
  ulong uVar40;
  ulong *puVar41;
  code *pcVar42;
  ulong uVar43;
  code *__ptr;
  code *pcVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  undefined1 (*pauVar49) [32];
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long in_FS_OFFSET;
  bool bVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [16];
  ulong uStack_480;
  code *pcStack_478;
  long lStack_470;
  ulong uStack_468;
  code *pcStack_460;
  long lStack_458;
  long lStack_450;
  code *pcStack_448;
  ulong uStack_440;
  ulong uStack_438;
  long lStack_430;
  code *pcStack_428;
  long lStack_420;
  long lStack_418;
  code *pcStack_410;
  long lStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  code *pcStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  code *pcStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined1 auStack_398 [16];
  long lStack_388;
  undefined1 auStack_380 [16];
  long lStack_370;
  undefined1 auStack_368 [16];
  long lStack_358;
  ulong uStack_350;
  ulong auStack_348 [2];
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  ulong *puStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  ulong *puStack_2e0;
  code *pcStack_2d8;
  ulong *puStack_2d0;
  code *pcStack_2c8;
  ulong *puStack_2c0;
  code *pcStack_2b8;
  ulong *puStack_2b0;
  code *pcStack_2a8;
  ulong *puStack_2a0;
  code *pcStack_298;
  ulong *puStack_290;
  code *pcStack_288;
  ulong uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  long lStack_258;
  code *pcStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  char *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  long lStack_208;
  code *pcStack_200;
  long lStack_1f8;
  char *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  code *pcStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  char *pcStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 uStack_160;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined1 uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  char *pcStack_48;
  undefined8 uStack_40;
  
  puStack_300 = (ulong *)*param_1;
  lVar3 = param_1[1];
  lStack_308 = param_1[3];
  lStack_310 = param_1[4];
  lStack_318 = param_1[5];
  lStack_320 = param_1[6];
  lStack_338 = param_1[2];
LAB_0065467d:
  do {
    do {
      while( true ) {
        LOCK();
        uVar43 = *puStack_300;
        *puStack_300 = *puStack_300 + 1;
        UNLOCK();
        if (uVar43 != 0) break;
        uVar4 = *(undefined8 *)(lStack_338 + 8);
        uVar5 = *(undefined8 *)(lStack_338 + 0x10);
        lVar46 = *(long *)(lVar3 + 0x210);
        uVar40 = (*(long *)(lVar3 + 0x248) + 1) * lVar46;
        auStack_268 = ZEXT816(0);
        lStack_258 = 0;
        pcStack_250 = (code *)0x0;
        <[u64;4usize]as_alloc[2a0ada2ddd1fabff]::vec::spec_from_elem::SpecFromElem>::from_elem::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&lStack_3f0,auStack_268,uVar40);
        uVar43 = *(ulong *)(lVar3 + 0x1d8);
        if (uVar43 != 0) {
          if (uVar40 == 0) {
            uVar50 = *(ulong *)(lVar3 + 0xa0);
            uVar47 = uVar50;
            if (uVar50 <= uVar43 - 1) {
LAB_006564f7:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar47,uVar50,&PTR_s_src_main_rs_00210588);
            }
          }
          else {
            uVar47 = 0;
            do {
              uVar50 = *(ulong *)(lVar3 + 0xa0);
              if (uVar50 <= uVar47) goto LAB_006564f7;
              lVar54 = uVar47 * 0x7a0;
              uVar47 = uVar47 + 1;
              lVar54 = lVar54 + *(long *)(lVar3 + 0x98);
              lVar48 = 0;
              uVar50 = 0;
              do {
                if (*(ulong *)(lVar54 + 0x460) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212b78);
                }
                if (uStack_3e0 == uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uStack_3e0,uStack_3e0,&PTR_s_src_out_rs_00212b90);
                }
                *(ulong *)(pcStack_3e8 + lVar48 * 2) =
                     *(long *)(pcStack_3e8 + lVar48 * 2) +
                     (ulong)*(uint *)(*(long *)(lVar54 + 0x458) + uVar50 * 8);
                if (*(ulong *)(lVar54 + 0x460) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212ba8);
                }
                *(ulong *)(pcStack_3e8 + lVar48 * 2 + 0x18) =
                     *(long *)(pcStack_3e8 + lVar48 * 2 + 0x18) +
                     (ulong)*(uint *)(*(long *)(lVar54 + 0x458) + 4 + uVar50 * 8);
                if (*(ulong *)(lVar54 + 0x470) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212bc0);
                }
                *(long *)(pcStack_3e8 + lVar48 * 2 + 8) =
                     *(long *)(pcStack_3e8 + lVar48 * 2 + 8) +
                     *(long *)(*(long *)(lVar54 + 0x468) + lVar48);
                if (*(ulong *)(lVar54 + 0x470) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212bd8);
                }
                uVar50 = uVar50 + 1;
                *(long *)(pcStack_3e8 + lVar48 * 2 + 0x10) =
                     *(long *)(pcStack_3e8 + lVar48 * 2 + 0x10) +
                     *(long *)(*(long *)(lVar54 + 0x468) + 8 + lVar48);
                lVar48 = lVar48 + 0x10;
              } while (uVar40 != uVar50);
            } while (uVar47 != uVar43);
          }
        }
        pcVar44 = (code *)__rustc[45371133cddedda4]::__rust_alloc(4,4);
        if (pcVar44 == (code *)0x0) {
LAB_00656488:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(4,4);
        }
        *(undefined4 *)pcVar44 = 0;
        pcVar42 = (code *)__rustc[45371133cddedda4]::__rust_alloc(4,4);
        uVar43 = uStack_3e0;
        pcVar38 = pcStack_3e8;
        if (pcVar42 == (code *)0x0) goto LAB_00656488;
        *(undefined4 *)pcVar42 = 0;
        lStack_430 = 1;
        lStack_420 = 1;
        uStack_468 = 0;
        pcStack_460 = (code *)&DAT_00000001;
        lStack_458 = 0;
        lStack_418 = 1;
        lStack_408 = 1;
        uStack_480 = 0;
        pcStack_478 = (code *)&DAT_00000001;
        lStack_470 = 0;
        lStack_3d8 = 0;
        pcStack_3d0 = (code *)&DAT_00000004;
        lStack_3c8 = 0;
        lStack_3a8 = 0;
        lStack_3a0 = 8;
        auStack_398 = (undefined1  [16])0x0;
        lStack_388 = 8;
        auStack_380 = (undefined1  [16])0x0;
        lStack_370 = 8;
        auStack_368 = (undefined1  [16])0x0;
        lStack_358 = 8;
        uStack_350 = 0;
        pcStack_428 = pcVar44;
        pcStack_410 = pcVar42;
        uStack_330 = uVar5;
        uStack_328 = uVar4;
        if (lVar46 == 0) {
          lVar48 = 8;
          __ptr = (code *)&DAT_00000004;
          lVar53 = 0;
          lVar54 = 0;
          uVar40 = 0;
LAB_006553f3:
          lVar55 = 0;
          pcVar44 = (code *)&DAT_00000004;
          lStack_258 = 0;
          pcStack_210 = (code *)&DAT_00000004;
          lVar45 = 0;
        }
        else {
          uStack_2f8 = *(ulong *)(lVar3 + 0x248);
          lVar45 = 1;
          __ptr = (code *)&DAT_00000004;
          lVar48 = 8;
          uVar40 = 0;
          lVar55 = 0;
          lStack_450 = 1;
          lVar54 = 0;
          pcStack_448 = (code *)&DAT_00000001;
          lVar53 = 0;
          uVar50 = 0;
          pcStack_400 = pcVar42;
          pcStack_3f8 = pcVar44;
          do {
            uStack_2f0 = uVar50 + 1;
            lVar56 = 0;
            do {
              uVar47 = lVar56 + uVar50 * lVar46;
              if (uVar43 <= uVar47) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar47,uVar43,&PTR_s_src_out_rs_00212af8);
              }
              lVar65 = *(long *)(pcVar38 + uVar47 * 0x20);
              lVar61 = *(long *)(pcVar38 + (uVar47 * 4 + 3) * 8);
              if (lVar65 != 0 || lVar61 != 0) {
                uStack_2e8 = *(undefined8 *)(pcVar38 + (uVar47 * 4 + 1) * 8);
                uVar4 = *(undefined8 *)(pcVar38 + (uVar47 * 4 + 2) * 8);
                if (uVar50 == *(ulong *)(lVar3 + 0x248)) {
                  if (uStack_468 - lVar53 < 7) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&uStack_468,lVar53,7,1,1);
                    lVar53 = lStack_458;
                  }
                  lVar48 = lStack_450;
                  *(undefined4 *)(pcStack_460 + lVar53 + 3) = 0x63696e61;
                  pcStack_448 = pcStack_460;
                  *(undefined4 *)(pcStack_460 + lVar53) = 0x6167726f;
                  lVar53 = lVar53 + 7;
                  lStack_458 = lVar53;
                  if (uStack_480 - lVar54 < 7) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&uStack_480,lVar54,7,1,1);
                    lVar54 = lStack_470;
                  }
                  *(undefined4 *)(pcStack_478 + lVar54 + 3) = 0x63696e61;
                  *(undefined4 *)(pcStack_478 + lVar54) = 0x6167726f;
                  lVar54 = lVar54 + 7;
                  lStack_470 = lVar54;
                  if (lVar48 == lStack_430) goto LAB_0065518e;
                }
                else {
                  auStack_268 = (undefined1  [16])0x0;
                  lStack_258 = 0;
                  uVar40 = uVar50;
                  uVar47 = 0x19;
                  do {
                    uVar52 = uVar47 - 2;
                    if (0x17 < uVar52) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (0xffffffffffffffff,0x18,&PTR_s_src_out_rs_00212b10);
                    }
                    cVar39 = (char)(uVar40 / 10);
                    auStack_268[uVar47 - 2] = (char)uVar40 + cVar39 * -10 | 0x30;
                    if (uVar40 < 10) {
                      uVar52 = uVar47 - 1;
                      break;
                    }
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = uVar40 / 10;
                    auStack_268[uVar47 - 3] =
                         cVar39 + SUB161(auVar8 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
                    bVar57 = 99 < uVar40;
                    uVar40 = uVar40 / 100;
                    uVar47 = uVar52;
                  } while (bVar57);
                  if (0x17 < uVar52 - 3) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar52 - 3,0x18,&PTR_s_src_out_rs_00212b28);
                  }
                  *(undefined2 *)(auStack_268 + (uVar52 - 3)) = 0x5f63;
                  uVar40 = 0x1b - uVar52;
                  if (uStack_468 - lVar53 < uVar40) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&uStack_468,lVar53,uVar40,1,1);
                    pcStack_448 = pcStack_460;
                    lVar53 = lStack_458;
                  }
                  (*(code *)PTR_memcpy_00841de0)
                            (pcStack_448 + lVar53,auStack_268 + (uVar52 - 3),uVar40);
                  lVar53 = lVar53 + uVar40;
                  lStack_458 = lVar53;
                  if (*(ulong *)(lVar3 + 0x28) <= uVar50) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar50,*(ulong *)(lVar3 + 0x28),&PTR_s_src_out_rs_00212b40);
                  }
                  uVar40 = (ulong)*(byte *)(*(long *)(lVar3 + 0x20) + uVar50);
                  if (*(ulong *)(lVar3 + 0x58) <= uVar40) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar40,*(ulong *)(lVar3 + 0x58),&PTR_s_src_out_rs_00212b58);
                  }
                  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 8 + uVar40 * 0x18);
                  uVar40 = *(ulong *)(*(long *)(lVar3 + 0x50) + 0x10 + uVar40 * 0x18);
                  if (uStack_480 - lStack_470 < uVar40) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[2a0ada2ddd1fabff]::alloc::Global>
                              (&uStack_480,lStack_470,uVar40,1,1);
LAB_00655139:
                    lVar54 = lStack_470;
                    (*(code *)PTR_memcpy_00841de0)(pcStack_478 + lStack_470,uVar5,uVar40);
                  }
                  else {
                    lVar54 = lStack_470;
                    if (uVar40 != 0) goto LAB_00655139;
                  }
                  lVar54 = lVar54 + uVar40;
                  lVar48 = lStack_420;
                  lStack_470 = lVar54;
                  if (lStack_420 == lStack_430) {
LAB_0065518e:
                    lVar54 = lStack_470;
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&lStack_430);
                  }
                }
                lVar45 = lStack_408;
                pcStack_3f8 = pcStack_428;
                *(int *)(pcStack_428 + lVar48 * 4) = (int)lVar53;
                lStack_450 = lVar48 + 1;
                lStack_420 = lStack_450;
                if (lStack_408 == lStack_418) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&lStack_418);
                }
                lVar55 = lStack_3c8;
                pcStack_400 = pcStack_410;
                *(int *)(pcStack_410 + lVar45 * 4) = (int)lVar54;
                lVar45 = lVar45 + 1;
                iVar2 = *(int *)(lVar3 + 0x2f0);
                lStack_408 = lVar45;
                if (lStack_3c8 == lStack_3d8) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&lStack_3d8);
                }
                __ptr = pcStack_3d0;
                *(int *)(pcStack_3d0 + lVar55 * 4) = iVar2 + (int)lVar56;
                lVar55 = lVar55 + 1;
                uVar5 = auStack_398._0_8_;
                lStack_3c8 = lVar55;
                if (auStack_398._0_8_ == lStack_3a8) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&lStack_3a8);
                }
                *(long *)(lStack_3a0 + uVar5 * 8) = lVar65;
                auStack_398._0_8_ = uVar5 + 1;
                uVar5 = auStack_380._0_8_;
                if (auStack_380._0_8_ == auStack_398._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(auStack_398 + 8);
                }
                *(undefined8 *)(lStack_388 + uVar5 * 8) = uStack_2e8;
                auStack_380._0_8_ = uVar5 + 1;
                uVar5 = auStack_368._0_8_;
                if (auStack_368._0_8_ == auStack_380._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(auStack_380 + 8);
                }
                uVar40 = uStack_350;
                *(undefined8 *)(lStack_370 + uVar5 * 8) = uVar4;
                auStack_368._0_8_ = uVar5 + 1;
                if (uStack_350 == auStack_368._8_8_) {
                  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(auStack_368 + 8);
                }
                *(long *)(lStack_358 + uVar40 * 8) = lVar61;
                uVar40 = uVar40 + 1;
                lVar48 = lStack_358;
                uStack_350 = uVar40;
              }
              lVar56 = lVar56 + 1;
            } while (lVar56 != lVar46);
            bVar57 = uVar50 != uStack_2f8;
            uVar50 = uStack_2f0;
          } while (bVar57);
          if (lVar55 == 0) {
            goto LAB_006553f3;
          }
          lStack_258 = lStack_450;
          pcVar44 = pcStack_3f8;
          pcStack_210 = pcStack_400;
        }
        auVar10 = auStack_368;
        lVar65 = lStack_370;
        auVar8 = auStack_398;
        lVar56 = lStack_3a0;
        auStack_268._0_4_ = 7;
        auStack_268._8_8_ = pcVar44;
        pcStack_250 = pcStack_460;
        pcStack_228 = "campaign_id";
        uStack_220 = 0xb;
        uStack_218 = CONCAT44(uStack_218._4_4_,7);
        pcStack_200 = pcStack_478;
        uVar4 = auStack_398._0_8_;
        pcStack_1d8 = "channel";
        uStack_1d0 = 7;
        uStack_1c8 = 6;
        uVar5 = auStack_368._0_8_;
        uStack_1b0 = 0;
        pcStack_188 = "day";
        uStack_180 = 3;
        uStack_178 = 5;
        lStack_170 = lStack_3a0;
        uStack_168 = auStack_398._0_8_;
        uStack_160 = 0;
        puStack_138 = &DAT_00201e18;
        uStack_130 = 8;
        uStack_128 = 5;
        lStack_120 = lStack_388;
        uStack_118 = auStack_380._0_8_;
        uStack_110 = 0;
        pcStack_e8 = "purchasing_sessions";
        uStack_e0 = 0x13;
        uStack_d8 = 5;
        lStack_d0 = lStack_370;
        uStack_c8 = auStack_368._0_8_;
        uStack_c0 = 0;
        pcStack_98 = "revenue_cents";
        uStack_90 = 0xd;
        uStack_88 = 5;
        uStack_70 = 0;
        pcStack_48 = "assisted_sessions";
        uStack_40 = 0x11;
        lStack_248 = lVar53;
        lStack_208 = lVar45;
        lStack_1f8 = lVar54;
        pcStack_1c0 = __ptr;
        lStack_1b8 = lVar55;
        lStack_80 = lVar48;
        uStack_78 = uVar40;
        <std[c60ef17cbf7de79f]::path::Path>::_join
                  (&puStack_2e0,uStack_328,uStack_330,&DAT_002109aa,0xe);
        pcVar44 = pcStack_2d8;
        auStack_348[0] = auStack_348[0] & 0xffffffffffffff00;
        auVar69 = pipeline[509596c7b52975b2]::pqw::write_file(pcStack_2d8,puStack_2d0,auStack_268);
        if (auVar69._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar69._8_8_);
          core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::string::String>
                    (puStack_2e0,pcVar44);
          pipeline[509596c7b52975b2]::out::die("campaign_daily",0xe);
          goto LAB_00656535;
        }
        if (puStack_2e0 == (ulong *)0x0) {
LAB_006556f0:
          cVar39 = *(char *)(lVar3 + 0x2f4);
        }
        else {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 != (code *)0x0) &&
              (pipeline[509596c7b52975b2]::sys::A_BASE_0 <= pcVar44)) &&
             (pcVar44 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
            puVar41 = puStack_2e0;
            if (puStack_2e0 < &DAT_00000011) {
              puVar41 = (ulong *)&DAT_00000010;
            }
            lVar53 = LZCOUNT((undefined1 *)((long)puVar41 + -1));
            lVar54 = 0x40 - lVar53;
            if (((undefined1 *)((long)puVar41 + -1) < (undefined1 *)0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcVar44), cVar39 == '\0')) {
              if (lVar53 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(undefined8 *)pcVar44 = *(undefined8 *)(in_FS_OFFSET + lVar54 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + lVar54 * 8 + -0x3c8) = pcVar44;
            }
            goto LAB_006556f0;
          }
          free(pcVar44);
          cVar39 = *(char *)(lVar3 + 0x2f4);
        }
        if (cVar39 != '\0') {
          uStack_440 = 0;
          uStack_438 = 0;
          if (*(long *)(lVar3 + 0x1d8) != 0) {
            lVar54 = *(long *)(lVar3 + 0xa0);
            lVar53 = 0;
            do {
              if (lVar53 == lVar54) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar54,lVar54,&PTR_s_src_main_rs_00210588);
              }
              lVar45 = *(long *)(lVar3 + 0x98);
              lVar55 = lVar53 * 0x7a0;
              uVar43 = *(ulong *)(lVar45 + 0x540 + lVar55);
              if (uVar43 == 0) {
                uVar50 = 0;
              }
              else {
                lVar61 = *(long *)(lVar45 + 0x538 + lVar55);
                if (uVar43 < 4) {
                  uVar52 = 0;
                  uVar50 = 0;
                }
                else {
                  if (uVar43 < 0x10) {
                    uVar50 = 0;
                    uVar47 = 0;
LAB_00655886:
                    uVar52 = uVar43 & 0xfffffffffffffffc;
                    auVar67 = ZEXT864(uVar50);
                    do {
                      auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + uVar47 * 4));
                      auVar9._0_8_ = auVar67._0_8_ + auVar36._0_8_;
                      auVar9._8_8_ = auVar67._8_8_ + auVar36._8_8_;
                      auVar37._16_8_ = auVar67._16_8_ + auVar36._16_8_;
                      auVar37._0_16_ = auVar9;
                      auVar37._24_8_ = auVar67._24_8_ + auVar36._24_8_;
                      auVar67 = ZEXT3264(auVar37);
                      uVar47 = uVar47 + 4;
                    } while (uVar52 != uVar47);
                    auVar69 = vpaddq_avx(auVar9,auVar37._16_16_);
                    auVar9 = vpshufd_avx(auVar69,0xee);
                    auVar69 = vpaddq_avx(auVar69,auVar9);
                    uVar50 = auVar69._0_8_;
                    goto LAB_006558da;
                  }
                  uVar52 = uVar43 & 0xfffffffffffffff0;
                  lVar58 = 0;
                  lVar59 = 0;
                  lVar60 = 0;
                  lVar62 = 0;
                  uVar50 = 0;
                  lVar51 = 0;
                  lVar63 = 0;
                  lVar64 = 0;
                  lVar66 = 0;
                  auVar67 = ZEXT1664((undefined1  [16])0x0);
                  auVar68 = ZEXT1664((undefined1  [16])0x0);
                  do {
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + uVar50 * 4));
                    lVar58 = lVar58 + auVar36._0_8_;
                    lVar59 = lVar59 + auVar36._8_8_;
                    lVar60 = lVar60 + auVar36._16_8_;
                    lVar62 = lVar62 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x10 + uVar50 * 4));
                    lVar51 = lVar51 + auVar36._0_8_;
                    lVar63 = lVar63 + auVar36._8_8_;
                    lVar64 = lVar64 + auVar36._16_8_;
                    lVar66 = lVar66 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x20 + uVar50 * 4));
                    lVar34 = auVar67._0_8_ + auVar36._0_8_;
                    lVar33 = auVar67._8_8_ + auVar36._8_8_;
                    lVar31 = auVar67._16_8_ + auVar36._16_8_;
                    lVar29 = auVar67._24_8_ + auVar36._24_8_;
                    auVar67 = ZEXT3264(CONCAT824(lVar29,CONCAT816(lVar31,CONCAT88(lVar33,lVar34))));
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar61 + 0x30 + uVar50 * 4));
                    lVar35 = auVar68._0_8_ + auVar36._0_8_;
                    lVar28 = auVar68._8_8_ + auVar36._8_8_;
                    lVar32 = auVar68._16_8_ + auVar36._16_8_;
                    lVar30 = auVar68._24_8_ + auVar36._24_8_;
                    auVar68 = ZEXT3264(CONCAT824(lVar30,CONCAT816(lVar32,CONCAT88(lVar28,lVar35))));
                    uVar50 = uVar50 + 0x10;
                  } while (uVar52 != uVar50);
                  auVar69._0_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                  auVar69._8_8_ = lVar28 + lVar33 + lVar63 + lVar59;
                  auVar36._16_8_ = lVar32 + lVar31 + lVar64 + lVar60;
                  auVar36._0_16_ = auVar69;
                  auVar36._24_8_ = lVar30 + lVar29 + lVar66 + lVar62;
                  auVar69 = vpaddq_avx(auVar69,auVar36._16_16_);
                  auVar9 = vpshufd_avx(auVar69,0xee);
                  auVar69 = vpaddq_avx(auVar69,auVar9);
                  uVar50 = auVar69._0_8_;
                  if (uVar43 == uVar52) goto LAB_006558df;
                  uVar47 = uVar52;
                  if ((uVar43 & 0xc) != 0) goto LAB_00655886;
                }
                do {
                  uVar50 = uVar50 + (long)*(int *)(lVar61 + uVar52 * 4);
                  uVar52 = uVar52 + 1;
LAB_006558da:
                } while (uVar43 != uVar52);
              }
LAB_006558df:
              uStack_440 = uStack_440 + uVar50;
              uVar43 = *(ulong *)(lVar45 + lVar55 + 0x5a0);
              if (uVar43 == 0) {
                uVar50 = 0;
              }
              else {
                lVar45 = *(long *)(lVar45 + lVar55 + 0x598);
                if (uVar43 < 4) {
                  uVar52 = 0;
                  uVar50 = 0;
                }
                else {
                  if (uVar43 < 0x10) {
                    uVar50 = 0;
                    uVar47 = 0;
LAB_006559b8:
                    uVar52 = uVar43 & 0xfffffffffffffffc;
                    auVar67 = ZEXT864(uVar50);
                    do {
                      auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + uVar47 * 4));
                      auVar12._0_8_ = auVar67._0_8_ + auVar36._0_8_;
                      auVar12._8_8_ = auVar67._8_8_ + auVar36._8_8_;
                      auVar20._16_8_ = auVar67._16_8_ + auVar36._16_8_;
                      auVar20._0_16_ = auVar12;
                      auVar20._24_8_ = auVar67._24_8_ + auVar36._24_8_;
                      auVar67 = ZEXT3264(auVar20);
                      uVar47 = uVar47 + 4;
                    } while (uVar52 != uVar47);
                    auVar69 = vpaddq_avx(auVar12,auVar20._16_16_);
                    auVar9 = vpshufd_avx(auVar69,0xee);
                    auVar69 = vpaddq_avx(auVar69,auVar9);
                    uVar50 = auVar69._0_8_;
                    goto LAB_00655a0a;
                  }
                  uVar52 = uVar43 & 0xfffffffffffffff0;
                  lVar55 = 0;
                  lVar58 = 0;
                  lVar59 = 0;
                  lVar60 = 0;
                  uVar50 = 0;
                  lVar61 = 0;
                  lVar51 = 0;
                  lVar63 = 0;
                  lVar64 = 0;
                  auVar67 = ZEXT1664((undefined1  [16])0x0);
                  auVar68 = ZEXT1664((undefined1  [16])0x0);
                  do {
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + uVar50 * 4));
                    lVar55 = lVar55 + auVar36._0_8_;
                    lVar58 = lVar58 + auVar36._8_8_;
                    lVar59 = lVar59 + auVar36._16_8_;
                    lVar60 = lVar60 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x10 + uVar50 * 4));
                    lVar61 = lVar61 + auVar36._0_8_;
                    lVar51 = lVar51 + auVar36._8_8_;
                    lVar63 = lVar63 + auVar36._16_8_;
                    lVar64 = lVar64 + auVar36._24_8_;
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x20 + uVar50 * 4));
                    lVar62 = auVar67._0_8_ + auVar36._0_8_;
                    lVar34 = auVar67._8_8_ + auVar36._8_8_;
                    lVar33 = auVar67._16_8_ + auVar36._16_8_;
                    lVar31 = auVar67._24_8_ + auVar36._24_8_;
                    auVar67 = ZEXT3264(CONCAT824(lVar31,CONCAT816(lVar33,CONCAT88(lVar34,lVar62))));
                    auVar36 = vpmovsxdq_avx2(*(undefined1 (*) [16])(lVar45 + 0x30 + uVar50 * 4));
                    lVar66 = auVar68._0_8_ + auVar36._0_8_;
                    lVar35 = auVar68._8_8_ + auVar36._8_8_;
                    lVar28 = auVar68._16_8_ + auVar36._16_8_;
                    lVar32 = auVar68._24_8_ + auVar36._24_8_;
                    auVar68 = ZEXT3264(CONCAT824(lVar32,CONCAT816(lVar28,CONCAT88(lVar35,lVar66))));
                    uVar50 = uVar50 + 0x10;
                  } while (uVar52 != uVar50);
                  auVar11._0_8_ = lVar66 + lVar62 + lVar61 + lVar55;
                  auVar11._8_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                  auVar19._16_8_ = lVar28 + lVar33 + lVar63 + lVar59;
                  auVar19._0_16_ = auVar11;
                  auVar19._24_8_ = lVar32 + lVar31 + lVar64 + lVar60;
                  auVar69 = vpaddq_avx(auVar11,auVar19._16_16_);
                  auVar9 = vpshufd_avx(auVar69,0xee);
                  auVar69 = vpaddq_avx(auVar69,auVar9);
                  uVar50 = auVar69._0_8_;
                  if (uVar43 == uVar52) goto LAB_00655773;
                  uVar47 = uVar52;
                  if ((uVar43 & 0xc) != 0) goto LAB_006559b8;
                }
                do {
                  uVar50 = uVar50 + (long)*(int *)(lVar45 + uVar52 * 4);
                  uVar52 = uVar52 + 1;
LAB_00655a0a:
                } while (uVar43 != uVar52);
              }
LAB_00655773:
              uStack_438 = uStack_438 + uVar50;
              lVar53 = lVar53 + 1;
            } while (lVar53 != *(long *)(lVar3 + 0x1d8));
          }
          if (uVar4 == 0) {
            uStack_3c0 = 0;
          }
          else {
            if ((ulong)uVar4 < 4) {
              uVar50 = 0;
              uStack_3c0 = 0;
            }
            else {
              if ((ulong)uVar4 < 0x10) {
                uStack_3c0 = 0;
                uVar43 = 0;
LAB_00655afc:
                uVar50 = uVar4 & 0xfffffffffffffffc;
                auVar67 = ZEXT864(uStack_3c0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar56 + uVar43 * 8);
                  auVar14._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                  auVar14._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  auVar22._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  auVar22._0_16_ = auVar14;
                  auVar22._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(auVar22);
                  uVar43 = uVar43 + 4;
                } while (uVar50 != uVar43);
                auVar8 = vpaddq_avx(auVar14,auVar22._16_16_);
                auVar69 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar69);
                uStack_3c0 = auVar8._0_8_;
                goto LAB_00655f07;
              }
              uVar50 = uVar4 & 0xfffffffffffffff0;
              lVar54 = 0;
              lVar45 = 0;
              lVar61 = 0;
              lVar51 = 0;
              uVar43 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar58 = 0;
              lVar59 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar56 + uVar43 * 8);
                lVar54 = lVar54 + *(long *)*pauVar1;
                lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                lVar61 = lVar61 + SUB248(*pauVar1,0x10);
                lVar51 = lVar51 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x20 + uVar43 * 8);
                lVar53 = lVar53 + *(long *)*pauVar1;
                lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                lVar58 = lVar58 + SUB248(*pauVar1,0x10);
                lVar59 = lVar59 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x40 + uVar43 * 8);
                lVar63 = auVar67._0_8_ + *(long *)*pauVar1;
                lVar64 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                lVar66 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                lVar35 = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                pauVar1 = (undefined1 (*) [24])(lVar56 + 0x60 + uVar43 * 8);
                lVar60 = auVar68._0_8_ + *(long *)*pauVar1;
                lVar62 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                lVar34 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                lVar33 = auVar68._24_8_ + *(long *)pauVar1[1];
                auVar68 = ZEXT3264(CONCAT824(lVar33,CONCAT816(lVar34,CONCAT88(lVar62,lVar60))));
                uVar43 = uVar43 + 0x10;
              } while (uVar50 != uVar43);
              auVar13._0_8_ = lVar60 + lVar63 + lVar53 + lVar54;
              auVar13._8_8_ = lVar62 + lVar64 + lVar55 + lVar45;
              auVar21._16_8_ = lVar34 + lVar66 + lVar58 + lVar61;
              auVar21._0_16_ = auVar13;
              auVar21._24_8_ = lVar33 + lVar35 + lVar59 + lVar51;
              auVar69 = vpaddq_avx(auVar13,auVar21._16_16_);
              auVar9 = vpshufd_avx(auVar69,0xee);
              auVar69 = vpaddq_avx(auVar69,auVar9);
              uStack_3c0 = auVar69._0_8_;
              if (uVar4 == uVar50) goto LAB_00655f0c;
              uVar43 = uVar50;
              if (((ulong)(byte)auVar8[0] & 0xc) != 0) goto LAB_00655afc;
            }
            do {
              uStack_3c0 = uStack_3c0 + *(long *)(lVar56 + uVar50 * 8);
              uVar50 = uVar50 + 1;
LAB_00655f07:
            } while (uVar4 != uVar50);
          }
LAB_00655f0c:
          if (uVar5 == 0) {
            uStack_3b8 = 0;
          }
          else {
            if ((ulong)uVar5 < 4) {
              uVar43 = 0;
              uStack_3b8 = 0;
            }
            else {
              if ((ulong)uVar5 < 0x10) {
                uStack_3b8 = 0;
                uVar50 = 0;
              }
              else {
                uVar43 = uVar5 & 0xfffffffffffffff0;
                lVar54 = 0;
                lVar45 = 0;
                lVar56 = 0;
                lVar58 = 0;
                uVar50 = 0;
                lVar53 = 0;
                lVar55 = 0;
                lVar61 = 0;
                lVar51 = 0;
                auVar67 = ZEXT1664((undefined1  [16])0x0);
                auVar68 = ZEXT1664((undefined1  [16])0x0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar65 + uVar50 * 8);
                  lVar54 = lVar54 + *(long *)*pauVar1;
                  lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                  lVar56 = lVar56 + SUB248(*pauVar1,0x10);
                  lVar58 = lVar58 + *(long *)pauVar1[1];
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x20 + uVar50 * 8);
                  lVar53 = lVar53 + *(long *)*pauVar1;
                  lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                  lVar61 = lVar61 + SUB248(*pauVar1,0x10);
                  lVar51 = lVar51 + *(long *)pauVar1[1];
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x40 + uVar50 * 8);
                  lVar59 = auVar67._0_8_ + *(long *)*pauVar1;
                  lVar60 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  lVar62 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  lVar34 = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                  pauVar1 = (undefined1 (*) [24])(lVar65 + 0x60 + uVar50 * 8);
                  lVar63 = auVar68._0_8_ + *(long *)*pauVar1;
                  lVar64 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                  lVar66 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                  lVar35 = auVar68._24_8_ + *(long *)pauVar1[1];
                  auVar68 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                  uVar50 = uVar50 + 0x10;
                } while (uVar43 != uVar50);
                auVar15._0_8_ = lVar63 + lVar59 + lVar53 + lVar54;
                auVar15._8_8_ = lVar64 + lVar60 + lVar55 + lVar45;
                auVar23._16_8_ = lVar66 + lVar62 + lVar61 + lVar56;
                auVar23._0_16_ = auVar15;
                auVar23._24_8_ = lVar35 + lVar34 + lVar51 + lVar58;
                auVar8 = vpaddq_avx(auVar15,auVar23._16_16_);
                auVar69 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar69);
                uStack_3b8 = auVar8._0_8_;
                if (uVar5 == uVar43) goto LAB_0065602c;
                uVar50 = uVar43;
                if (((ulong)(byte)auVar10[0] & 0xc) == 0) goto LAB_00656020;
              }
              uVar43 = uVar5 & 0xfffffffffffffffc;
              auVar67 = ZEXT864(uStack_3b8);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar65 + uVar50 * 8);
                auVar10._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                auVar10._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                auVar24._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                auVar24._0_16_ = auVar10;
                auVar24._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(auVar24);
                uVar50 = uVar50 + 4;
              } while (uVar43 != uVar50);
              auVar8 = vpaddq_avx(auVar10,auVar24._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              uStack_3b8 = auVar8._0_8_;
              if (uVar5 == uVar43) goto LAB_0065602c;
            }
LAB_00656020:
            do {
              uStack_3b8 = uStack_3b8 + *(long *)(lVar65 + uVar43 * 8);
              uVar43 = uVar43 + 1;
            } while (uVar5 != uVar43);
          }
LAB_0065602c:
          if (uVar40 == 0) {
            uStack_3b0 = 0;
          }
          else {
            if (uVar40 < 4) {
              uVar50 = 0;
              uStack_3b0 = 0;
            }
            else {
              if (uVar40 < 0x10) {
                uStack_3b0 = 0;
                uVar43 = 0;
LAB_006560e4:
                uVar50 = uVar40 & 0xfffffffffffffffc;
                auVar67 = ZEXT864(uStack_3b0);
                do {
                  pauVar1 = (undefined1 (*) [24])(lVar48 + uVar43 * 8);
                  auVar17._0_8_ = auVar67._0_8_ + *(long *)*pauVar1;
                  auVar17._8_8_ = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                  auVar26._16_8_ = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                  auVar26._0_16_ = auVar17;
                  auVar26._24_8_ = auVar67._24_8_ + *(long *)pauVar1[1];
                  auVar67 = ZEXT3264(auVar26);
                  uVar43 = uVar43 + 4;
                } while (uVar50 != uVar43);
                auVar8 = vpaddq_avx(auVar17,auVar26._16_16_);
                auVar10 = vpshufd_avx(auVar8,0xee);
                auVar8 = vpaddq_avx(auVar8,auVar10);
                uStack_3b0 = auVar8._0_8_;
                goto LAB_00656137;
              }
              uVar50 = uVar40 & 0xfffffffffffffff0;
              lVar54 = 0;
              lVar45 = 0;
              lVar56 = 0;
              lVar61 = 0;
              uVar43 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar65 = 0;
              lVar58 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar48 + uVar43 * 8);
                lVar54 = lVar54 + *(long *)*pauVar1;
                lVar45 = lVar45 + *(long *)(*pauVar1 + 8);
                lVar56 = lVar56 + SUB248(*pauVar1,0x10);
                lVar61 = lVar61 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x20 + uVar43 * 8);
                lVar53 = lVar53 + *(long *)*pauVar1;
                lVar55 = lVar55 + *(long *)(*pauVar1 + 8);
                lVar65 = lVar65 + SUB248(*pauVar1,0x10);
                lVar58 = lVar58 + *(long *)pauVar1[1];
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x40 + uVar43 * 8);
                lVar51 = auVar67._0_8_ + *(long *)*pauVar1;
                lVar63 = auVar67._8_8_ + *(long *)(*pauVar1 + 8);
                lVar64 = auVar67._16_8_ + SUB248(*pauVar1,0x10);
                lVar66 = auVar67._24_8_ + *(long *)pauVar1[1];
                auVar67 = ZEXT3264(CONCAT824(lVar66,CONCAT816(lVar64,CONCAT88(lVar63,lVar51))));
                pauVar1 = (undefined1 (*) [24])(lVar48 + 0x60 + uVar43 * 8);
                lVar59 = auVar68._0_8_ + *(long *)*pauVar1;
                lVar60 = auVar68._8_8_ + *(long *)(*pauVar1 + 8);
                lVar62 = auVar68._16_8_ + SUB248(*pauVar1,0x10);
                lVar34 = auVar68._24_8_ + *(long *)pauVar1[1];
                auVar68 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                uVar43 = uVar43 + 0x10;
              } while (uVar50 != uVar43);
              auVar16._0_8_ = lVar59 + lVar51 + lVar53 + lVar54;
              auVar16._8_8_ = lVar60 + lVar63 + lVar55 + lVar45;
              auVar25._16_8_ = lVar62 + lVar64 + lVar65 + lVar56;
              auVar25._0_16_ = auVar16;
              auVar25._24_8_ = lVar34 + lVar66 + lVar58 + lVar61;
              auVar8 = vpaddq_avx(auVar16,auVar25._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              uStack_3b0 = auVar8._0_8_;
              if (uVar40 == uVar50) goto LAB_0065613c;
              uVar43 = uVar50;
              if ((uVar40 & 0xc) != 0) goto LAB_006560e4;
            }
            do {
              uStack_3b0 = uStack_3b0 + *(long *)(lVar48 + uVar50 * 8);
              uVar50 = uVar50 + 1;
LAB_00656137:
            } while (uVar40 != uVar50);
          }
LAB_0065613c:
          if (lVar46 == 0) {
            lVar54 = 0;
          }
          else {
            uVar40 = *(long *)(lVar3 + 0x248) * lVar46;
            uVar43 = uStack_3e0 - uVar40;
            if (uStack_3e0 < uVar40) {
              uVar43 = 0;
            }
            if (lVar46 - 1U <= uVar43) {
              uVar43 = lVar46 - 1U;
            }
            lVar54 = 0;
            lVar48 = 0;
            if (0xf < uVar43) {
              uVar43 = uVar43 + 1;
              uVar50 = (ulong)((uint)uVar43 & 0xf);
              if ((uVar43 & 0xf) == 0) {
                uVar50 = 0x10;
              }
              lVar48 = uVar43 - uVar50;
              pauVar49 = (undefined1 (*) [32])(pcStack_3e8 + (uVar40 * 4 + 0x30) * 8);
              lVar54 = 0;
              lVar45 = 0;
              lVar56 = 0;
              lVar61 = 0;
              lVar53 = 0;
              lVar55 = 0;
              lVar65 = 0;
              lVar58 = 0;
              auVar67 = ZEXT1664((undefined1  [16])0x0);
              auVar68 = ZEXT1664((undefined1  [16])0x0);
              lVar51 = lVar48;
              do {
                auVar36 = vperm2i128_avx2(pauVar49[-0xc],pauVar49[-10],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-0xb],pauVar49[-9],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar54 = auVar36._0_8_ + lVar54;
                lVar45 = auVar36._8_8_ + lVar45;
                lVar56 = auVar36._16_8_ + lVar56;
                lVar61 = auVar36._24_8_ + lVar61;
                auVar36 = vperm2i128_avx2(pauVar49[-8],pauVar49[-6],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-7],pauVar49[-5],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar53 = auVar36._0_8_ + lVar53;
                lVar55 = auVar36._8_8_ + lVar55;
                lVar65 = auVar36._16_8_ + lVar65;
                lVar58 = auVar36._24_8_ + lVar58;
                auVar36 = vperm2i128_avx2(pauVar49[-4],pauVar49[-2],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[-3],pauVar49[-1],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar59 = auVar36._0_8_ + auVar67._0_8_;
                lVar60 = auVar36._8_8_ + auVar67._8_8_;
                lVar62 = auVar36._16_8_ + auVar67._16_8_;
                lVar34 = auVar36._24_8_ + auVar67._24_8_;
                auVar67 = ZEXT3264(CONCAT824(lVar34,CONCAT816(lVar62,CONCAT88(lVar60,lVar59))));
                auVar36 = vperm2i128_avx2(*pauVar49,pauVar49[2],0x20);
                auVar37 = vperm2i128_avx2(pauVar49[1],pauVar49[3],0x20);
                auVar36 = vpunpcklqdq_avx2(auVar36,auVar37);
                lVar63 = auVar36._0_8_ + auVar68._0_8_;
                lVar64 = auVar36._8_8_ + auVar68._8_8_;
                lVar66 = auVar36._16_8_ + auVar68._16_8_;
                lVar35 = auVar36._24_8_ + auVar68._24_8_;
                auVar68 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar66,CONCAT88(lVar64,lVar63))));
                pauVar49 = pauVar49 + 0x10;
                lVar51 = lVar51 + -0x10;
              } while (lVar51 != 0);
              auVar18._0_8_ = lVar63 + lVar59 + lVar53 + lVar54;
              auVar18._8_8_ = lVar64 + lVar60 + lVar55 + lVar45;
              auVar27._16_8_ = lVar66 + lVar62 + lVar65 + lVar56;
              auVar27._0_16_ = auVar18;
              auVar27._24_8_ = lVar35 + lVar34 + lVar58 + lVar61;
              auVar8 = vpaddq_avx(auVar18,auVar27._16_16_);
              auVar10 = vpshufd_avx(auVar8,0xee);
              auVar8 = vpaddq_avx(auVar8,auVar10);
              lVar54 = auVar8._0_8_;
            }
            lVar46 = lVar46 - lVar48;
            uVar40 = uVar40 + lVar48;
            pcVar44 = pcStack_3e8 + uVar40 * 0x20;
            do {
              if (uStack_3e0 <= uVar40) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar40,uStack_3e0,&PTR_s_src_out_rs_00210720);
              }
              lVar54 = lVar54 + *(long *)pcVar44;
              uVar40 = uVar40 + 1;
              pcVar44 = pcVar44 + 0x20;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          auStack_348[0] = uStack_3c0 - lVar54;
          puStack_2e0 = &uStack_440;
          pcStack_2d8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          puStack_2d0 = &uStack_3c0;
          pcStack_2c8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          puStack_2c0 = &uStack_438;
          pcStack_2b8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          puStack_2b0 = &uStack_3b8;
          pcStack_2a8 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          puStack_2a0 = &uStack_3b0;
          pcStack_298 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          puStack_290 = auStack_348;
          pcStack_288 = <i64_as_core[62e902411887be45]::fmt::Display>::fmt;
          std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020c087,&puStack_2e0);
          if (((uStack_440 != uStack_3c0) || (uStack_438 != uStack_3b8)) ||
             ((long)uStack_3b0 < (long)auStack_348[0])) {
            std[c60ef17cbf7de79f]::io::stdio::_eprint("[v2b] CHECK FAILED\n",0x27);
                    /* WARNING: Subroutine does not return */
            _Exit(5);
          }
        }
        core[62e902411887be45]::ptr::drop_glue::<[alloc[2a0ada2ddd1fabff]::vec::Vec<i64>_4usize]>
                  (&lStack_3a8);
        if (lStack_3d8 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
            free(__ptr);
          }
          else {
            uVar43 = lStack_3d8 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,pcVar44), cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = __ptr;
            }
          }
        }
        pcVar38 = pcStack_478;
        if (uStack_480 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (pcStack_478 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcStack_478)) {
            free(pcStack_478);
          }
          else {
            uVar43 = uStack_480;
            if (uStack_480 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcStack_478,pcVar44),
               cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = pcStack_410;
        if (lStack_418 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (pcStack_410 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcStack_410)) {
            free(pcStack_410);
          }
          else {
            uVar43 = lStack_418 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcStack_410,pcVar44),
               cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = pcStack_460;
        if (uStack_468 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (pcStack_460 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcStack_460)) {
            free(pcStack_460);
          }
          else {
            uVar43 = uStack_468;
            if (uStack_468 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcStack_460,pcVar44),
               cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = pcStack_428;
        if (lStack_430 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (pcStack_428 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcStack_428)) {
            free(pcStack_428);
          }
          else {
            uVar43 = lStack_430 << 2;
            if (uVar43 < 0x11) {
              uVar43 = 0x10;
            }
            lVar46 = LZCOUNT(uVar43 - 1);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 - 1 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcStack_428,pcVar44),
               cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
        pcVar38 = pcStack_3e8;
        if (lStack_3f0 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
              (pcStack_3e8 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcStack_3e8)) {
            free(pcStack_3e8);
          }
          else {
            uVar43 = lStack_3f0 * 0x20 - 1;
            lVar46 = LZCOUNT(uVar43);
            pcVar44 = (code *)(0x40 - lVar46);
            if ((uVar43 < 0x10000) ||
               (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcStack_3e8,pcVar44),
               cVar39 == '\0')) {
              if (lVar46 == 0) goto LAB_00656535;
              *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
              *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
            }
          }
        }
      }
      if (*(ulong *)(lStack_308 + 0x10) < uVar43) {
        pipeline[509596c7b52975b2]::out::end_user_file();
        return;
      }
      puStack_2e0 = (ulong *)(uVar43 - 1);
      lVar46 = *(long *)(lStack_308 + 8);
      uVar43 = *(ulong *)(lVar46 + (long)puStack_2e0 * 0x18);
      uVar4 = *(undefined8 *)(lVar46 + 8 + (long)puStack_2e0 * 0x18);
      uVar5 = *(undefined8 *)(lVar46 + 0x10 + (long)puStack_2e0 * 0x18);
      uVar6 = *(undefined8 *)(lStack_310 + 8);
      uVar7 = *(undefined8 *)(lStack_310 + 0x10);
      auStack_268._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
      auStack_268._0_8_ = &puStack_2e0;
      alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&uStack_280,&DAT_0020c382,auStack_268);
      pcVar44 = pcStack_278;
      <std[c60ef17cbf7de79f]::path::Path>::_join(&puStack_2e0,uVar6,uVar7,pcStack_278,uStack_270);
      if (uStack_280 != 0) {
        if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
            (pcVar44 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
           (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcVar44)) {
          free(pcVar44);
        }
        else {
          uVar40 = uStack_280;
          if (uStack_280 < 0x11) {
            uVar40 = 0x10;
          }
          lVar46 = LZCOUNT(uVar40 - 1);
          lVar54 = 0x40 - lVar46;
          if ((uVar40 - 1 < 0x10000) ||
             (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcVar44,lVar54), cVar39 == '\0')) {
            if (lVar46 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(undefined8 *)pcVar44 = *(undefined8 *)(in_FS_OFFSET + lVar54 * 8 + -0x3c8);
            *(code **)(in_FS_OFFSET + lVar54 * 8 + -0x3c8) = pcVar44;
          }
        }
      }
      pcVar38 = pcStack_2d8;
      if (*(ulong *)(lVar3 + 0xa0) <= uVar43) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar43,*(ulong *)(lVar3 + 0xa0),&PTR_s_src_main_rs_00210588);
      }
      lVar46 = *(long *)(lVar3 + 0x98);
      lVar54 = uVar43 * 0x7a0;
      lStack_258 = *(long *)(lVar46 + 0x538 + lVar54);
      pcStack_250 = *(code **)(lVar46 + 0x568 + lVar54);
      lStack_248 = *(long *)(lVar46 + 0x598 + lVar54);
      uStack_240 = *(undefined8 *)(lVar46 + 0x5c8 + lVar54);
      uStack_238 = *(undefined8 *)(lVar46 + 0x4a8 + lVar54);
      uStack_230 = *(undefined8 *)(lVar46 + 0x4b0 + lVar54);
      pcStack_228 = *(char **)(lVar46 + 0x478 + lVar54);
      uStack_220 = *(undefined8 *)(lVar46 + 0x480 + lVar54);
      uStack_218 = *(undefined8 *)(lVar46 + 0x510 + lVar54);
      auStack_268._8_8_ = *(undefined8 *)(lVar46 + 0x508 + lVar54);
      auStack_268._0_8_ = *(undefined8 *)(lVar46 + 0x4d8 + lVar54);
      pipeline[509596c7b52975b2]::out::write_rows
                (auStack_268,uVar4,uVar5,pcStack_2d8,puStack_2d0,*(undefined8 *)(lStack_318 + 8),
                 *(undefined8 *)(lStack_318 + 0x10),*(undefined8 *)(lStack_320 + 8),
                 *(undefined8 *)(lStack_320 + 0x10));
    } while (puStack_2e0 == (ulong *)0x0);
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 != (code *)0x0) &&
        (pipeline[509596c7b52975b2]::sys::A_BASE_0 <= pcVar38)) &&
       (pcVar38 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
      puVar41 = puStack_2e0;
      if (puStack_2e0 < &DAT_00000011) {
        puVar41 = (ulong *)&DAT_00000010;
      }
      lVar46 = LZCOUNT((undefined1 *)((long)puVar41 + -1));
      pcVar44 = (code *)(0x40 - lVar46);
      if (((undefined1 *)((long)puVar41 + -1) < (undefined1 *)0x10000) ||
         (cVar39 = pipeline[509596c7b52975b2]::sys::big_put(pcVar38,pcVar44), cVar39 == '\0')) {
        if (lVar46 == 0) {
LAB_00656535:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (pcVar44,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)pcVar38 = *(undefined8 *)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8);
        *(code **)(in_FS_OFFSET + (long)pcVar44 * 8 + -0x3c8) = pcVar38;
      }
      goto LAB_0065467d;
    }
    free(pcVar38);
  } while( true );
}


// ==== <pipeline::out::stage45::{closure#8} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c420 (5 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::out::stage45::{closure#8} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::out::stage45::{closure#8}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(long *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [24];
  int *piVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lVar31;
  long lVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auVar30 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [24];
  bool bVar45;
  undefined1 (*pauVar46) [64];
  char cVar47;
  byte bVar48;
  ulong uVar49;
  ulong uVar50;
  undefined1 (*__ptr) [64];
  undefined1 (*pauVar51) [64];
  undefined1 (*__ptr_00) [64];
  ulong uVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 *puVar61;
  long lVar62;
  long lVar63;
  undefined1 (*pauVar64) [64];
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  undefined1 auVar78 [16];
  undefined1 *puVar68;
  undefined1 (*pauVar69) [64];
  undefined1 *puVar70;
  undefined1 (*pauVar71) [32];
  undefined1 *puVar72;
  long lVar73;
  undefined1 (*pauVar74) [64];
  undefined1 *puVar75;
  ulong uVar76;
  long *in_FS_OFFSET;
  bool bVar77;
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  long lVar88;
  undefined1 auVar87 [32];
  long lVar89;
  long lVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  long lVar94;
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar97 [16];
  ulong uStack_5b0;
  undefined1 (*pauStack_588) [64];
  undefined1 (*pauStack_580) [64];
  long lStack_570;
  ulong uStack_548;
  long lStack_530;
  long lStack_528;
  ulong uStack_4d0;
  char *pcStack_4c8;
  long lStack_4c0;
  undefined1 *puStack_4b0;
  ulong uStack_460;
  undefined1 *puStack_458;
  undefined1 (*pauStack_450) [64];
  ulong uStack_448;
  undefined1 *puStack_440;
  long lStack_438;
  ulong uStack_430;
  undefined1 *puStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined1 *puStack_410;
  long lStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  char *pcStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  ulong uStack_390;
  long lStack_388;
  size_t *psStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined1 (*pauStack_310) [64];
  undefined8 uStack_308;
  ulong uStack_300;
  undefined1 (*pauStack_2f8) [64];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined1 (*pauStack_2e0) [64];
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined1 (*pauStack_2c8) [64];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [32];
  undefined1 auStack_278 [16];
  long lStack_268;
  undefined1 (*pauStack_260) [64];
  long lStack_258;
  undefined1 auStack_250 [32];
  undefined8 uStack_230;
  ulong uStack_228;
  undefined1 (*pauStack_220) [64];
  long lStack_218;
  undefined1 (*pauStack_210) [64];
  long lStack_208;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 (*pauStack_1d0) [64];
  ulong uStack_1c8;
  undefined1 uStack_1c0;
  char *pcStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined1 (*pauStack_180) [64];
  ulong uStack_178;
  undefined1 uStack_170;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined1 uStack_40;
  
  if (param_2 < 0x10) {
    lVar54 = param_2 * 0x50;
    puVar70 = *(undefined1 **)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54);
    *(undefined8 *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54) = 0xffffffffffffffff;
    if (puVar70 != (undefined1 *)0xffffffffffffffff) {
      puStack_410 = *(undefined1 **)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x48);
      pauStack_450 = *(undefined1 (**) [64])(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 8);
      uStack_448 = *(ulong *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x10);
      puStack_440 = *(undefined1 **)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x18);
      lStack_438 = *(long *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x20);
      uStack_430 = *(ulong *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x28);
      puStack_428 = *(undefined1 **)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x30);
      lStack_420 = *(long *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x38);
      uStack_418 = *(ulong *)(pipeline[509596c7b52975b2]::out::S3FILE + lVar54 + 0x40);
      lVar54 = *in_FS_OFFSET;
      puStack_458 = puVar70;
      if ((char)in_FS_OFFSET[-0xaa] == '\0') {
        lVar3 = in_FS_OFFSET[-0xb5];
      }
      else {
        if ((char)in_FS_OFFSET[-0xaa] != '\x01') {
          core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::UserFile>
                    (&puStack_458);
          std[c60ef17cbf7de79f]::thread::local::panic_access_error
                    (&PTR_s__rustc_0ef1bc386059596dada8fb65b_0020fa38);
LAB_006589fe:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check();
        }
        std[c60ef17cbf7de79f]::sys::thread_local::destructors::linux_like::register
                  (lVar54 + -0x5a8,
                   std[c60ef17cbf7de79f]::sys::thread_local::native::eager::destroy::
                   <core[62e902411887be45]::cell::RefCell<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::pqw::UserFile>>>
                  );
        *(undefined1 *)(in_FS_OFFSET + -0xaa) = 0;
        lVar3 = in_FS_OFFSET[-0xb5];
      }
      if (lVar3 != 0) {
        bVar48 = core[62e902411887be45]::cell::panic_already_borrowed(&PTR_s_src_out_rs_00210570);
LAB_006589b3:
        auStack_278[8] = bVar48;
        auStack_278._0_8_ = param_1;
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,auStack_278,
                   &
                   PTR_<std[c60ef17cbf7de79f]::sync::poison::PoisonError<std[c60ef17cbf7de79f]::sync::poison::mutex::MutexGuard<[i64_4usize]>>>_00211fb0
                   ,&PTR_s_src_out_rs_002107b8);
      }
      in_FS_OFFSET[-0xb5] = -1;
      lVar3 = in_FS_OFFSET[-0xb4];
      uStack_378 = *(undefined8 *)(lVar54 + -0x598);
      lStack_370 = *(long *)(lVar54 + -0x590);
      auStack_368 = *(undefined1 (*) [16])(lVar54 + -0x588);
      uStack_358 = *(undefined8 *)*(undefined1 (*) [32])(lVar54 + -0x578);
      uStack_350 = *(undefined8 *)(lVar54 + -0x570);
      uStack_348 = *(undefined8 *)(lVar54 + -0x568);
      uStack_340 = *(undefined8 *)(lVar54 + -0x560);
      auVar79 = *(undefined1 (*) [32])(lVar54 + -0x578);
      auVar82._8_8_ = lStack_420;
      auVar82._0_8_ = puStack_428;
      auVar82._16_8_ = uStack_418;
      auVar82._24_8_ = puStack_410;
      *(long *)(lVar54 + -0x580) = lStack_438;
      *(ulong *)(lVar54 + -0x578) = uStack_430;
      *(undefined1 **)(lVar54 + -0x570) = puStack_428;
      *(long *)(lVar54 + -0x568) = lStack_420;
      auStack_338._0_8_ = *(undefined8 *)(lVar54 + -0x558);
      *(undefined1 **)(lVar54 + -0x5a0) = puStack_458;
      *(undefined1 (**) [64])(lVar54 + -0x598) = pauStack_450;
      *(ulong *)(lVar54 + -0x590) = uStack_448;
      *(undefined1 **)(lVar54 + -0x588) = puStack_440;
      *(undefined1 (*) [32])(lVar54 + -0x570) = auVar82;
      if (lVar3 == -1) {
        lVar54 = 0;
      }
      else {
        auStack_278._8_8_ = uStack_378;
        auStack_278._0_8_ = lVar3;
        pauStack_260 = (undefined1 (*) [64])auStack_368._0_8_;
        lStack_258 = auStack_368._8_8_;
        lStack_268 = lStack_370;
        auStack_250 = auVar79;
        uStack_230 = *(undefined8 *)(lVar54 + -0x558);
        auVar97 = <pipeline[509596c7b52975b2]::pqw::UserFile>::finish(auStack_278);
        if (auVar97._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar97._8_8_);
          pipeline[509596c7b52975b2]::out::die("user_daily",10);
LAB_00658aae:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check();
        }
        lVar54 = in_FS_OFFSET[-0xb5] + 1;
      }
      in_FS_OFFSET[-0xb5] = lVar54;
    }
  }
  lVar54 = *param_1;
  uStack_390 = param_2;
  pipeline[509596c7b52975b2]::complex::clicks_a(lVar54);
  puVar4 = (ulong *)param_1[1];
  LOCK();
  *puVar4 = *puVar4 + 1;
  UNLOCK();
  uStack_378 = 0;
  lStack_370 = 8;
  auStack_368 = (undefined1  [16])0x0;
  uStack_358 = 8;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0x10;
  auStack_338 = (undefined1  [16])0x0;
  uStack_328 = 1;
  uStack_320 = 0;
  puVar5 = (ulong *)param_1[2];
  puVar6 = (ulong *)param_1[3];
  puVar7 = (ulong *)param_1[4];
  puVar8 = (ulong *)param_1[6];
  puVar9 = (ulong *)param_1[7];
  puVar10 = (ulong *)param_1[8];
  pcVar11 = (char *)param_1[9];
  psStack_380 = (size_t *)param_1[10];
  puVar12 = (ulong *)param_1[0xb];
  puVar13 = (ulong *)param_1[0xc];
  lStack_398 = param_1[0xd];
  lVar3 = param_1[0xe];
  lVar14 = param_1[0xf];
  puVar15 = (undefined8 *)param_1[0x10];
  puVar16 = (undefined8 *)param_1[0x11];
  pcStack_3b0 = (char *)param_1[0x15];
  plStack_3a0 = (long *)param_1[0x12];
  lStack_3a8 = param_1[0x13];
  lStack_3c8 = param_1[0x14];
  lStack_388 = param_1[5];
LAB_006568d7:
  if ((*puVar4 == *puVar5) && (*puVar6 < *puVar7)) {
    LOCK();
    uVar50 = *puVar6;
    *puVar6 = *puVar6 + 1;
    UNLOCK();
    if (uVar50 < *puVar7) {
      if (*(ulong *)(lStack_388 + 0x10) <= uVar50) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar50,*(ulong *)(lStack_388 + 0x10),&PTR_s_src_out_rs_00210800);
      }
      pipeline[509596c7b52975b2]::complex::person_shard
                (lVar54,uStack_390,*(undefined8 *)(*(long *)(lStack_388 + 8) + uVar50 * 8),
                 &uStack_378);
      LOCK();
      *puVar8 = *puVar8 + 1;
      UNLOCK();
      goto LAB_006568d7;
    }
  }
  if ((*puVar4 == *puVar5) && (*puVar8 == *puVar7)) {
    bVar45 = true;
    bVar77 = true;
    if (*puVar10 <= *puVar9) {
      cVar47 = *pcVar11;
      goto joined_r0x006569a9;
    }
  }
  else {
    bVar45 = false;
    bVar77 = false;
    cVar47 = *pcVar11;
joined_r0x006569a9:
    if (cVar47 != '\0') {
      LOCK();
      cVar47 = *pcVar11;
      *pcVar11 = '\0';
      UNLOCK();
      bVar77 = bVar45;
      if (cVar47 != '\0') {
        munmap(*(void **)(lVar54 + 0x250),*psStack_380);
        goto LAB_006568d7;
      }
    }
    if (*puVar12 < *puVar13) {
      LOCK();
      puStack_458 = (undefined1 *)*puVar12;
      *puVar12 = *puVar12 + 1;
      UNLOCK();
      if (puStack_458 < (undefined1 *)*puVar13) {
        if (*(undefined1 **)(lStack_398 + 0x10) <= puStack_458) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (puStack_458,*(undefined1 **)(lStack_398 + 0x10),&PTR_s_src_out_rs_002107d0);
        }
        lVar56 = *(long *)(lStack_398 + 8);
        uVar50 = *(ulong *)(lVar56 + (long)puStack_458 * 0x18);
        if (*(ulong *)(lVar3 + 0x10) <= uVar50) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar50,*(ulong *)(lVar3 + 0x10),&PTR_s_src_out_rs_002107e8);
        }
        uVar17 = *(undefined8 *)(lVar56 + 8 + (long)puStack_458 * 0x18);
        uVar18 = *(undefined8 *)(lVar56 + 0x10 + (long)puStack_458 * 0x18);
        lVar56 = *(long *)(lVar3 + 8);
        uVar19 = *(undefined8 *)(lVar14 + 8);
        uVar20 = *(undefined8 *)(lVar14 + 0x10);
        auStack_278._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
        auStack_278._0_8_ = &puStack_458;
        alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&uStack_318,&DAT_0020c382,auStack_278);
        pauVar46 = pauStack_310;
        <std[c60ef17cbf7de79f]::path::Path>::_join
                  (auStack_278,uVar19,uVar20,pauStack_310,uStack_308);
        if (uStack_318 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined1 (*) [64])0x0) ||
              (pauVar46 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar49 = uStack_318;
            if (uStack_318 < 0x11) {
              uVar49 = 0x10;
            }
            lVar73 = LZCOUNT(uVar49 - 1);
            lVar63 = -lVar73;
            if ((uVar49 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar46,lVar63 + 0x40),
               cVar47 == '\0')) {
              if (lVar73 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(long *)*pauVar46 = in_FS_OFFSET[lVar63 + -0x39];
              in_FS_OFFSET[lVar63 + -0x39] = (long)pauVar46;
            }
          }
        }
        uVar19 = auStack_278._8_8_;
        pipeline[509596c7b52975b2]::out::write_rows
                  (uVar50 * 0x58 + lVar56,uVar17,uVar18,auStack_278._8_8_,lStack_268,*puVar15,
                   puVar15[1],*puVar16,puVar16[1]);
        if (auStack_278._0_8_ != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined1 (*) [64])0x0) ||
              ((ulong)uVar19 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= (ulong)uVar19)) {
            free((void *)uVar19);
          }
          else {
            uVar50 = auStack_278._0_8_;
            if ((ulong)auStack_278._0_8_ < 0x11) {
              uVar50 = 0x10;
            }
            lVar73 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(uVar19,lVar63), cVar47 == '\0')) {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)(undefined1 *)uVar19 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = uVar19;
            }
          }
        }
        goto LAB_006568d7;
      }
    }
    if (!bVar77) goto LAB_006568d7;
  }
  LOCK();
  uStack_460 = *puVar9;
  *puVar9 = *puVar9 + 1;
  UNLOCK();
  if (uStack_460 < *puVar10) {
    uVar50 = *puVar5;
    uVar49 = uStack_460 - uVar50;
    if (uVar50 <= uStack_460) {
      if (*(ulong *)(lVar54 + 0xa0) <= uVar49) goto LAB_006589fe;
      lVar56 = *(long *)(lVar54 + 0x98);
      lVar63 = uVar49 * 0x7a0;
      lStack_268 = *(long *)(lVar56 + 0x538 + lVar63);
      pauStack_260 = *(undefined1 (**) [64])(lVar56 + 0x568 + lVar63);
      lStack_258 = *(long *)(lVar56 + 0x598 + lVar63);
      uStack_230 = *(undefined8 *)(lVar56 + 0x480 + lVar63);
      uVar55 = *(ulong *)(lVar56 + 0x510 + lVar63);
      auStack_278._8_8_ = *(undefined8 *)(lVar56 + 0x508 + lVar63);
      auStack_278._0_8_ = *(undefined8 *)(lVar56 + 0x4d8 + lVar63);
      auStack_250._8_8_ = *(undefined8 *)(lVar56 + 0x4a8 + lVar63);
      auStack_250._0_8_ = *(undefined8 *)(lVar56 + 0x5c8 + lVar63);
      auStack_250._16_8_ = *(undefined8 *)(lVar56 + 0x4b0 + lVar63);
      auStack_250._24_8_ = *(undefined8 *)(lVar56 + 0x478 + lVar63);
      uStack_228 = uVar55;
      if (*(ulong *)(lVar3 + 0x10) <= uVar49) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar49,*(ulong *)(lVar3 + 0x10),&PTR_s_src_out_rs_00210788);
      }
      uVar59 = *(ulong *)(*(long *)(lVar3 + 8) + 0x50 + uVar49 * 0x58);
      if ((uVar59 < uVar55) || ((uStack_460 == uVar50 && *puVar13 == 0 && (*pcStack_3b0 != '\x01')))
         ) {
        uVar17 = *(undefined8 *)(lVar14 + 8);
        uVar18 = *(undefined8 *)(lVar14 + 0x10);
        auStack_298._0_8_ = *puVar13 + uVar49;
        puStack_458 = auStack_298;
        pauStack_450 = (undefined1 (*) [64])<u64_as_core[62e902411887be45]::fmt::Display>::fmt;
        alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&uStack_2d0,&DAT_0020c382,&puStack_458);
        pauVar46 = pauStack_2c8;
        <std[c60ef17cbf7de79f]::path::Path>::_join
                  (&puStack_458,uVar17,uVar18,pauStack_2c8,uStack_2c0);
        if (uStack_2d0 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined1 (*) [64])0x0) ||
              (pauVar46 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar50 = uStack_2d0;
            if (uStack_2d0 < 0x11) {
              uVar50 = 0x10;
            }
            lVar63 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar63;
            if ((uVar50 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar46,lVar56 + 0x40),
               cVar47 == '\0')) {
              if (lVar63 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            }
          }
        }
        pauVar46 = pauStack_450;
        pipeline[509596c7b52975b2]::out::write_rows
                  (auStack_278,uVar59,uVar55,pauStack_450,uStack_448,*puVar15,puVar15[1],*puVar16,
                   puVar16[1]);
        if (puStack_458 != (undefined1 *)0x0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 != (undefined1 (*) [64])0x0) &&
              (pipeline[509596c7b52975b2]::sys::A_BASE_0 <= pauVar46)) &&
             (pauVar46 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
            puVar70 = puStack_458;
            if (puStack_458 < &DAT_00000011) {
              puVar70 = &DAT_00000010;
            }
            lVar73 = LZCOUNT(puVar70 + -1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((undefined1 *)0xffff < puVar70 + -1) {
              cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar46,lVar63);
              if (cVar47 != '\0') goto LAB_006568d7;
            }
            if (lVar73 == 0) {
LAB_00658a85:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar63,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            goto LAB_006568d7;
          }
          free(pauVar46);
        }
      }
      goto LAB_006568d7;
    }
    uStack_3c0 = *plStack_3a0 * uStack_460;
    if ((uStack_3c0 | uVar50) >> 0x20 == 0) {
      uVar49 = (uStack_3c0 & 0xffffffff) / (uVar50 & 0xffffffff);
    }
    else {
      uVar49 = uStack_3c0 / uVar50;
    }
    uVar55 = *plStack_3a0 * (uStack_460 + 1);
    if ((uVar55 | uVar50) >> 0x20 == 0) {
      uVar55 = (uVar55 & 0xffffffff) / (uVar50 & 0xffffffff);
    }
    else {
      uVar55 = uVar55 / uVar50;
    }
    uVar17 = *(undefined8 *)(lStack_3a8 + 8);
    uVar18 = *(undefined8 *)(lStack_3a8 + 0x10);
    auStack_278._8_8_ = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
    auStack_278._0_8_ = &uStack_460;
    uStack_3b8 = uVar50;
    alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&uStack_2e8,&DAT_0020c382,auStack_278);
    pauVar46 = pauStack_2e0;
    <std[c60ef17cbf7de79f]::path::Path>::_join(&uStack_300,uVar17,uVar18,pauStack_2e0,uStack_2d8);
    if (uStack_2e8 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined1 (*) [64])0x0) ||
          (pauVar46 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= pauVar46)) {
        free(pauVar46);
      }
      else {
        uVar50 = uStack_2e8;
        if (uStack_2e8 < 0x11) {
          uVar50 = 0x10;
        }
        lVar63 = LZCOUNT(uVar50 - 1);
        lVar56 = -lVar63;
        if ((uVar50 - 1 < 0x10000) ||
           (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar46,lVar56 + 0x40),
           cVar47 == '\0')) {
          if (lVar63 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
          in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
        }
      }
    }
    pauVar46 = pauStack_2f8;
    uVar59 = *(ulong *)(lVar54 + 0x210);
    puVar70 = (undefined1 *)((uVar55 - uVar49) * uVar59);
    uVar50 = (long)puVar70 * 0x20;
    if (puVar70 < (undefined1 *)0x800000000000000 && uVar50 < 0x7ffffffffffffff9) {
      uStack_3d0 = uStack_2f0;
      if (uVar50 == 0) {
        __ptr = (undefined1 (*) [64])&DAT_00000008;
        puStack_4b0 = (undefined1 *)0x0;
      }
      else {
        __ptr = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar50,8);
        if (__ptr == (undefined1 (*) [64])0x0) goto LAB_00658a4c;
        puStack_4b0 = puVar70;
      }
      (*(code *)PTR_memset_00841dd0)(__ptr,0,uVar50);
      auVar82 = _DAT_002036c0;
      uVar60 = *(ulong *)(lVar54 + 0x1d8);
      auVar95 = ZEXT3264(_DAT_00203b20);
      auVar96 = ZEXT3264(_DAT_00203780);
      auVar83 = vmovdqa64_avx512f(_DAT_00204bc0);
      auVar84 = vmovdqa64_avx512f(_DAT_00204c00);
      pauVar74 = pauVar46;
      if (uVar60 != 0) {
        if (puVar70 == (undefined1 *)0x0) {
          if (*(long *)(lVar54 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_main_rs_00210588);
          }
        }
        else {
          lVar56 = uVar59 * uVar55;
          uVar76 = lVar56 - 1;
          puVar68 = (undefined1 *)((ulong)puVar70 & 0x7fffffffffffffc);
          uVar67 = 0;
          do {
            if (*(ulong *)(lVar54 + 0xa0) <= uVar67) goto LAB_006589fe;
            if (*(ulong *)(*(long *)(lVar54 + 0x98) + 0x460 + uVar67 * 0x7a0) <= uVar76) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic
                        ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212c50);
            }
            lVar63 = *(long *)(lVar54 + 0x98) + uVar67 * 0x7a0;
            if (*(ulong *)(lVar63 + 0x470) <= uVar76) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic
                        ("assertion failed: i < self.n",0x1c,&PTR_s_src_out_rs_00212c68);
            }
            pauVar64 = (undefined1 (*) [64])
                       ((1 - (long)puVar70) * 0x10 + uVar76 * 0x10 + *(long *)(lVar63 + 0x468));
            pauVar74 = (undefined1 (*) [64])
                       (*(long *)(lVar63 + 0x458) + uVar76 * 8 + (1 - (long)puVar70) * 8);
            if (puVar70 < (undefined1 *)0x4) {
              puVar72 = (undefined1 *)0x0;
LAB_006573b5:
              puVar75 = puVar72;
              if (((ulong)puVar70 & 1) != 0) {
                auVar91._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar72 * 8);
                auVar91._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar72 * 8);
                auVar79 = vpmovzxdq_avx2(auVar91);
                auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                            ZEXT1632(*(undefined1 (*) [16])
                                                      (*pauVar64 + (long)puVar72 * 0x10)));
                pauVar1 = (undefined1 (*) [24])(*__ptr + (long)puVar72 * 0x20);
                auVar80._0_8_ = auVar79._0_8_ + *(long *)*pauVar1;
                auVar80._8_8_ = auVar79._8_8_ + *(long *)(*pauVar1 + 8);
                auVar80._16_8_ = auVar79._16_8_ + SUB248(*pauVar1,0x10);
                auVar80._24_8_ = auVar79._24_8_ + *(long *)pauVar1[1];
                *(undefined1 (*) [32])(*__ptr + (long)puVar72 * 0x20) = auVar80;
                puVar75 = puVar72 + 1;
              }
              if (puVar70 != puVar72 + 1) {
                lVar63 = (long)puVar70 - (long)puVar75;
                pauVar71 = (undefined1 (*) [32])(*__ptr + (long)puVar75 * 0x20 + 0x20);
                do {
                  auVar92._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8);
                  auVar92._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8);
                  auVar79 = vpmovzxdq_avx2(auVar92);
                  auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                              ZEXT1632(*(undefined1 (*) [16])
                                                        (*pauVar64 + (long)puVar75 * 0x10)));
                  lVar57 = *(long *)(pauVar71[-1] + 8);
                  auVar44 = *(undefined1 (*) [24])pauVar71[-1];
                  lVar73 = *(long *)(pauVar71[-1] + 0x18);
                  puVar72 = puVar75 + 1;
                  *(long *)pauVar71[-1] = auVar79._0_8_ + *(long *)pauVar71[-1];
                  *(long *)(pauVar71[-1] + 8) = auVar79._8_8_ + lVar57;
                  *(long *)(pauVar71[-1] + 0x10) = auVar79._16_8_ + auVar44._16_8_;
                  *(long *)(pauVar71[-1] + 0x18) = auVar79._24_8_ + lVar73;
                  auVar93._8_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8 + 8);
                  auVar93._0_8_ = *(undefined8 *)(*pauVar74 + (long)puVar75 * 8 + 8);
                  puVar75 = puVar75 + 2;
                  auVar79 = vpmovzxdq_avx2(auVar93);
                  auVar79 = vpermt2q_avx512vl(auVar79,auVar82,
                                              ZEXT1632(*(undefined1 (*) [16])
                                                        (*pauVar64 + (long)puVar72 * 0x10)));
                  auVar38._0_8_ = auVar79._0_8_ + *(long *)*pauVar71;
                  auVar38._8_8_ = auVar79._8_8_ + *(long *)(*pauVar71 + 8);
                  auVar38._16_8_ = auVar79._16_8_ + SUB248(*(undefined1 (*) [24])*pauVar71,0x10);
                  auVar38._24_8_ = auVar79._24_8_ + *(long *)(*pauVar71 + 0x18);
                  *pauVar71 = auVar38;
                  pauVar71 = pauVar71 + 2;
                  lVar63 = lVar63 + -2;
                } while (lVar63 != 0);
              }
            }
            else {
              if (__ptr < (undefined1 (*) [64])(*(long *)(lVar63 + 0x458) + lVar56 * 8) &&
                  pauVar74 < (undefined1 (*) [64])(*__ptr + uVar50)) {
                puVar72 = (undefined1 *)0x0;
                goto LAB_006573b5;
              }
              puVar72 = (undefined1 *)0x0;
              if (__ptr < (undefined1 (*) [64])(*(long *)(lVar63 + 0x468) + lVar56 * 0x10) &&
                  pauVar64 < (undefined1 (*) [64])(*__ptr + uVar50)) goto LAB_006573b5;
              puVar72 = (undefined1 *)0x0;
              pauVar51 = __ptr;
              do {
                auVar40 = vpblendd_avx2(*(undefined1 (*) [32])(*pauVar74 + (long)puVar72 * 8),
                                        SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xaa);
                auVar86 = vmovdqu64_avx512f(*(undefined1 (*) [64])(*pauVar64 + (long)puVar72 * 0x10)
                                           );
                auVar87 = vpsrlq_avx2(*(undefined1 (*) [32])(*pauVar74 + (long)puVar72 * 8),0x20);
                auVar85 = vpermq_avx512f(auVar95,auVar86);
                auVar86 = vpermq_avx512f(auVar96,auVar86);
                auVar79 = vperm2i128_avx2(*(undefined1 (*) [32])*pauVar51,
                                          *(undefined1 (*) [32])pauVar51[1],0x20);
                auVar81 = vperm2i128_avx2(*(undefined1 (*) [32])(*pauVar51 + 0x20),
                                          *(undefined1 (*) [32])(pauVar51[1] + 0x20),0x20);
                auVar41 = vperm2i128_avx2(*(undefined1 (*) [32])*pauVar51,
                                          *(undefined1 (*) [32])pauVar51[1],0x31);
                auVar42 = vperm2i128_avx2(*(undefined1 (*) [32])(*pauVar51 + 0x20),
                                          *(undefined1 (*) [32])(pauVar51[1] + 0x20),0x31);
                auVar38 = vpunpcklqdq_avx2(auVar79,auVar81);
                auVar39 = vpunpcklqdq_avx2(auVar41,auVar42);
                auVar80 = vpunpckhqdq_avx2(auVar79,auVar81);
                auVar81 = vpunpckhqdq_avx2(auVar41,auVar42);
                auVar97._0_8_ = auVar81._0_8_ + auVar87._0_8_;
                auVar97._8_8_ = auVar81._8_8_ + auVar87._8_8_;
                auVar79._16_8_ = auVar81._16_8_ + auVar87._16_8_;
                auVar79._0_16_ = auVar97;
                auVar79._24_8_ = auVar81._24_8_ + auVar87._24_8_;
                auVar78._0_8_ = auVar38._0_8_ + auVar40._0_8_;
                auVar78._8_8_ = auVar38._8_8_ + auVar40._8_8_;
                auVar22._0_8_ = auVar80._0_8_ + auVar85._0_8_;
                auVar22._8_8_ = auVar80._8_8_ + auVar85._8_8_;
                auVar23._0_8_ = auVar39._0_8_ + auVar86._0_8_;
                auVar23._8_8_ = auVar39._8_8_ + auVar86._8_8_;
                auVar81._16_8_ = auVar39._16_8_ + auVar86._16_8_;
                auVar81._0_16_ = auVar23;
                auVar81._24_8_ = auVar39._24_8_ + auVar86._24_8_;
                auVar86 = vinserti64x4_avx512f
                                    (ZEXT3264(CONCAT824(auVar38._24_8_ + auVar40._24_8_,
                                                        CONCAT816(auVar38._16_8_ + auVar40._16_8_,
                                                                  auVar78))),auVar81,1);
                auVar85 = vinserti64x4_avx512f
                                    (ZEXT3264(CONCAT824(auVar80._24_8_ + auVar85._24_8_,
                                                        CONCAT816(auVar80._16_8_ + auVar85._16_8_,
                                                                  auVar22))),auVar79,1);
                auVar86 = vpermt2q_avx512f(auVar86,auVar84,auVar85);
                auVar86 = vmovdqu64_avx512f(auVar86);
                pauVar51[1] = auVar86;
                auVar86 = vpermt2q_avx512f(ZEXT3264(CONCAT1616(ZEXT116(1) * auVar23,
                                                               ZEXT116(1) * auVar78)),auVar83,
                                           ZEXT3264(CONCAT1616(ZEXT116(1) * auVar97,
                                                               ZEXT116(1) * auVar22)));
                auVar86 = vmovdqu64_avx512f(auVar86);
                *pauVar51 = auVar86;
                puVar72 = puVar72 + 4;
                pauVar51 = pauVar51 + 2;
              } while (puVar68 != puVar72);
              puVar72 = puVar68;
              if (puVar70 != puVar68) goto LAB_006573b5;
            }
            uVar67 = uVar67 + 1;
          } while (uVar67 != uVar60);
        }
      }
      lVar56 = *(long *)(lVar54 + 0x58);
      if (lVar56 != 0) {
        lVar63 = *(long *)(lVar54 + 0x50);
        pauVar74 = *(undefined1 (**) [64])(lVar63 + 0x10);
        if (lVar56 != 1) {
          uVar60 = lVar56 * 0x18 - 0x18;
          uVar50 = uVar60 / 0x18;
          if (uVar60 < 0x78) {
            lVar73 = 0;
          }
          else {
            auVar83 = ZEXT3264(_DAT_002030c0);
            if (uVar60 < 0x198) {
              lVar57 = 0;
            }
            else {
              uVar60 = (ulong)((uint)uVar50 & 0xf);
              if ((uVar50 & 0xf) == 0) {
                uVar60 = 0x10;
              }
              lVar73 = uVar50 - uVar60;
              auVar80 = vpbroadcastq_avx512vl();
              pauVar74 = (undefined1 (*) [64])(lVar63 + 0x148);
              uVar76 = uVar50;
              auVar82 = auVar80;
              auVar79 = auVar80;
              auVar81 = auVar80;
              do {
                auVar84 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar74[-4] + 0x20)),
                                           auVar83,*(undefined1 (*) [64])(pauVar74[-5] + 0x20));
                auVar95 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[-2]),auVar83,
                                           pauVar74[-3]);
                auVar96 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])(pauVar74[-1] + 0x20)),
                                           auVar83,*(undefined1 (*) [64])(pauVar74[-2] + 0x20));
                auVar86 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[1]),auVar83,
                                           *pauVar74);
                auVar80 = vpmaxuq_avx512vl(auVar80,auVar84._0_32_);
                auVar82 = vpmaxuq_avx512vl(auVar82,auVar95._0_32_);
                auVar79 = vpmaxuq_avx512vl(auVar79,auVar96._0_32_);
                auVar81 = vpmaxuq_avx512vl(auVar81,auVar86._0_32_);
                pauVar74 = pauVar74 + 6;
                uVar76 = uVar76 - 0x10;
              } while (uVar60 != uVar76);
              auVar82 = vpmaxuq_avx512vl(auVar80,auVar82);
              auVar79 = vpmaxuq_avx512vl(auVar79,auVar81);
              auVar82 = vpmaxuq_avx512vl(auVar82,auVar79);
              auVar78 = vpmaxuq_avx512vl(auVar82._0_16_,auVar82._16_16_);
              auVar97 = vpshufd_avx(auVar78,0xee);
              auVar97 = vpmaxuq_avx512vl(auVar78,auVar97);
              pauVar74 = auVar97._0_8_;
              lVar57 = lVar73;
              if ((uint)uVar60 < 5) goto LAB_00657798;
            }
            uVar60 = (ulong)((uint)uVar50 & 3);
            if ((uVar50 & 3) == 0) {
              uVar60 = 4;
            }
            lVar73 = uVar50 - uVar60;
            auVar82 = vpbroadcastq_avx512vl();
            lVar62 = (uVar60 + lVar57) - uVar50;
            pauVar74 = (undefined1 (*) [64])(lVar63 + lVar57 * 0x18 + 0x28);
            do {
              auVar84 = vpermt2q_avx512f(ZEXT1664(*(undefined1 (*) [16])pauVar74[1]),auVar83,
                                         *pauVar74);
              auVar82 = vpmaxuq_avx512vl(auVar82,auVar84._0_32_);
              pauVar74 = (undefined1 (*) [64])(pauVar74[1] + 0x20);
              lVar62 = lVar62 + 4;
            } while (lVar62 != 0);
            auVar78 = vpmaxuq_avx512vl(auVar82._0_16_,auVar82._16_16_);
            auVar97 = vpshufd_avx(auVar78,0xee);
            auVar97 = vpmaxuq_avx512vl(auVar78,auVar97);
            pauVar74 = auVar97._0_8_;
          }
LAB_00657798:
          lVar57 = uVar50 - lVar73;
          puVar61 = (undefined8 *)(lVar63 + lVar73 * 0x18 + 0x28);
          pauVar64 = pauVar74;
          do {
            pauVar74 = (undefined1 (*) [64])*puVar61;
            if ((undefined1 (*) [64])*puVar61 < pauVar64) {
              pauVar74 = pauVar64;
            }
            puVar61 = puVar61 + 3;
            lVar57 = lVar57 + -1;
            pauVar64 = pauVar74;
          } while (lVar57 != 0);
        }
      }
      if (pauVar74 < (undefined1 (*) [64])&DAT_00000008) {
        pauVar74 = (undefined1 (*) [64])&DAT_00000007;
      }
      if (lVar56 == 0) {
        pauVar74 = (undefined1 (*) [64])&DAT_00000007;
      }
      uVar60 = (long)puVar70 * 4 + 4;
      pauVar64 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar60,4);
      if (pauVar64 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar60);
      }
      pauVar51 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar60,4);
      if (pauVar51 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar60);
      }
      uVar50 = (long)puVar70 * 8;
      uVar76 = (long)puVar70 * 0x18 + 0x40;
      if (-1 < (long)uVar76) {
        lStack_3d8 = (long)puVar70 * 0x18;
        __ptr_00 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar76);
        if (__ptr_00 == (undefined1 (*) [64])0x0) {
LAB_00658a78:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,uVar76);
        }
        uVar76 = (long)pauVar74 * (long)puVar70 + 0x40;
        if ((long)uVar76 < 0) goto LAB_0065891b;
        if (uVar76 == 0) {
          pauStack_580 = (undefined1 (*) [64])&DAT_00000001;
          if (puVar70 != (undefined1 *)0x0) goto LAB_006578b7;
LAB_0065798f:
          lVar63 = 8;
          pauStack_588 = (undefined1 (*) [64])&DAT_00000004;
          pauVar74 = (undefined1 (*) [64])&DAT_00000008;
          lVar56 = 8;
          lVar73 = 8;
        }
        else {
          pauStack_580 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar76);
          if (pauStack_580 == (undefined1 (*) [64])0x0) goto LAB_00658a78;
          if (puVar70 == (undefined1 *)0x0) goto LAB_0065798f;
LAB_006578b7:
          pauStack_588 = (undefined1 (*) [64])
                         __rustc[45371133cddedda4]::__rust_alloc((long)puVar70 * 4,4);
          if (pauStack_588 == (undefined1 (*) [64])0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,(long)puVar70 * 4);
          }
          pauVar74 = (undefined1 (*) [64])__rustc[45371133cddedda4]::__rust_alloc(uVar50,8);
          if (((pauVar74 == (undefined1 (*) [64])0x0) ||
              (lVar56 = __rustc[45371133cddedda4]::__rust_alloc(uVar50,8), lVar56 == 0)) ||
             ((lVar63 = __rustc[45371133cddedda4]::__rust_alloc(uVar50,8), lVar63 == 0 ||
              (lVar73 = __rustc[45371133cddedda4]::__rust_alloc(uVar50), lVar73 == 0)))) {
LAB_00658a4c:
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar50);
          }
        }
        uStack_4d0 = (long)puVar70 * 4;
        *(undefined4 *)*pauVar64 = 0;
        *(undefined4 *)*pauVar51 = 0;
        lStack_570 = 0;
        uVar50 = 0;
        lStack_530 = 0;
        lStack_528 = 0;
        uVar67 = uVar49;
        puStack_458 = puVar70;
        pauStack_450 = pauVar74;
        puStack_440 = puVar70;
        lStack_438 = lVar56;
        puStack_428 = puVar70;
        lStack_420 = lVar63;
        puStack_410 = puVar70;
        lStack_408 = lVar73;
LAB_00657a59:
        uVar52 = uVar67;
        uVar65 = uVar55;
        if (uVar55 < uVar67) {
          uVar65 = uVar67;
        }
        while (uVar58 = uVar52, uVar58 != uVar65) {
          uVar67 = uVar58 + 1;
          lVar57 = (uVar58 - uVar49) * uVar59;
          uVar52 = 0;
          while (uVar66 = uVar52, uVar59 != uVar66) {
            lVar62 = (uVar66 + lVar57) * 0x20;
            if ((*(long *)(*__ptr + lVar62) != 0) ||
               (uVar52 = uVar66 + 1, *(long *)(*__ptr + lVar62 + 0x18) != 0)) goto LAB_00657a73;
          }
          uVar66 = uVar59;
LAB_00657a73:
          uVar52 = uVar58 + 1;
          if (uVar66 < uVar59) goto LAB_00657ad7;
        }
        lStack_268 = uVar50 + 1;
        pauStack_220 = pauVar51;
        pauVar69 = pauVar64;
        if (uVar50 == 0) {
          pauVar69 = (undefined1 (*) [64])&DAT_00000004;
          pauStack_220 = (undefined1 (*) [64])&DAT_00000004;
          lStack_268 = 0;
        }
        auStack_278._0_4_ = 7;
        auStack_278._8_8_ = pauVar69;
        lStack_258 = lStack_530;
        auStack_250._24_8_ = "campaign_id";
        uStack_230 = 0xb;
        uStack_228 = CONCAT44(uStack_228._4_4_,7);
        pauStack_210 = pauStack_580;
        lStack_208 = lStack_528;
        pcStack_1e8 = "channel";
        uStack_1e0 = 7;
        uStack_1d8 = 6;
        pauStack_1d0 = pauStack_588;
        uStack_1c0 = 0;
        pcStack_198 = "day";
        uStack_190 = 3;
        uStack_188 = 5;
        uStack_170 = 0;
        puStack_148 = &DAT_00201e18;
        uStack_140 = 8;
        uStack_138 = 5;
        uStack_120 = 0;
        pcStack_f8 = "purchasing_sessions";
        uStack_f0 = 0x13;
        uStack_e8 = 5;
        uStack_d0 = 0;
        pcStack_a8 = "revenue_cents";
        uStack_a0 = 0xd;
        uStack_98 = 5;
        uStack_80 = 0;
        pcStack_58 = "assisted_sessions";
        uStack_50 = 0x11;
        uStack_448 = uVar50;
        uStack_430 = uVar50;
        uStack_418 = uVar50;
        uStack_400 = uVar50;
        pauStack_260 = __ptr_00;
        lStack_218 = lStack_268;
        uStack_1c8 = uVar50;
        pauStack_180 = pauVar74;
        uStack_178 = uVar50;
        lStack_130 = lVar56;
        uStack_128 = uVar50;
        lStack_e0 = lVar63;
        uStack_d8 = uVar50;
        lStack_90 = lVar73;
        uStack_88 = uVar50;
        if (uStack_3b8 <= uStack_3c0 && uVar50 == 0) {
          uVar55 = 0;
          uStack_5b0 = 0;
          uVar49 = 0;
          goto LAB_00658425;
        }
        uStack_40 = 0;
        auVar97 = pipeline[509596c7b52975b2]::pqw::write_file(pauVar46,uStack_3d0,auStack_278);
        if (auVar97._0_8_ != 0) {
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
                    (auVar97._8_8_);
          pipeline[509596c7b52975b2]::out::die("campaign_daily",0xe);
          goto LAB_00658b16;
        }
        if (uVar50 == 0) {
          uVar55 = 0;
          uStack_5b0 = 0;
          uVar49 = 0;
          goto LAB_00658425;
        }
        if (uVar50 < 4) {
          uVar49 = 0;
          uStack_5b0 = 0;
          goto LAB_00658250;
        }
        if (uVar50 < 0x10) {
          uStack_5b0 = 0;
          uVar55 = 0;
          goto LAB_0065820f;
        }
        uVar49 = uVar50 & 0xfffffffffffffff0;
        lVar56 = 0;
        lVar62 = 0;
        lVar53 = 0;
        lVar89 = 0;
        uVar55 = 0;
        lVar57 = 0;
        lVar88 = 0;
        lVar90 = 0;
        lVar94 = 0;
        auVar83 = ZEXT1664((undefined1  [16])0x0);
        auVar84 = ZEXT1664((undefined1  [16])0x0);
        do {
          pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8);
          lVar56 = lVar56 + *(long *)*pauVar1;
          lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
          lVar53 = lVar53 + SUB248(*pauVar1,0x10);
          lVar89 = lVar89 + *(long *)pauVar1[1];
          pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8 + 0x20);
          lVar57 = lVar57 + *(long *)*pauVar1;
          lVar88 = lVar88 + *(long *)(*pauVar1 + 8);
          lVar90 = lVar90 + SUB248(*pauVar1,0x10);
          lVar94 = lVar94 + *(long *)pauVar1[1];
          pauVar1 = (undefined1 (*) [24])(pauVar74[1] + uVar55 * 8);
          lVar21 = auVar83._0_8_ + *(long *)*pauVar1;
          lVar32 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
          lVar34 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
          lVar37 = auVar83._24_8_ + *(long *)pauVar1[1];
          auVar83 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
          pauVar1 = (undefined1 (*) [24])(pauVar74[1] + uVar55 * 8 + 0x20);
          lVar31 = auVar84._0_8_ + *(long *)*pauVar1;
          lVar33 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
          lVar36 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
          lVar35 = auVar84._24_8_ + *(long *)pauVar1[1];
          auVar84 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar36,CONCAT88(lVar33,lVar31))));
          uVar55 = uVar55 + 0x10;
        } while (uVar49 != uVar55);
        auVar24._0_8_ = lVar31 + lVar21 + lVar57 + lVar56;
        auVar24._8_8_ = lVar33 + lVar32 + lVar88 + lVar62;
        auVar39._16_8_ = lVar36 + lVar34 + lVar90 + lVar53;
        auVar39._0_16_ = auVar24;
        auVar39._24_8_ = lVar35 + lVar37 + lVar94 + lVar89;
        auVar97 = vpaddq_avx(auVar24,auVar39._16_16_);
        auVar78 = vpshufd_avx(auVar97,0xee);
        auVar97 = vpaddq_avx(auVar97,auVar78);
        uStack_5b0 = auVar97._0_8_;
        if (uVar50 == uVar49) {
LAB_00658287:
          uVar49 = uVar50 & 0xfffffffffffffff0;
          lVar56 = 0;
          lVar62 = 0;
          lVar53 = 0;
          lVar89 = 0;
          uVar55 = 0;
          lVar57 = 0;
          lVar88 = 0;
          lVar90 = 0;
          lVar94 = 0;
          auVar83 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          do {
            pauVar1 = (undefined1 (*) [24])(lVar63 + uVar55 * 8);
            lVar56 = lVar56 + *(long *)*pauVar1;
            lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
            lVar53 = lVar53 + SUB248(*pauVar1,0x10);
            lVar89 = lVar89 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x20 + uVar55 * 8);
            lVar57 = lVar57 + *(long *)*pauVar1;
            lVar88 = lVar88 + *(long *)(*pauVar1 + 8);
            lVar90 = lVar90 + SUB248(*pauVar1,0x10);
            lVar94 = lVar94 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x40 + uVar55 * 8);
            lVar21 = auVar83._0_8_ + *(long *)*pauVar1;
            lVar32 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
            lVar34 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
            lVar37 = auVar83._24_8_ + *(long *)pauVar1[1];
            auVar83 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
            pauVar1 = (undefined1 (*) [24])(lVar63 + 0x60 + uVar55 * 8);
            lVar31 = auVar84._0_8_ + *(long *)*pauVar1;
            lVar33 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
            lVar36 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
            lVar35 = auVar84._24_8_ + *(long *)pauVar1[1];
            auVar84 = ZEXT3264(CONCAT824(lVar35,CONCAT816(lVar36,CONCAT88(lVar33,lVar31))));
            uVar55 = uVar55 + 0x10;
          } while (uVar49 != uVar55);
          auVar26._0_8_ = lVar31 + lVar21 + lVar57 + lVar56;
          auVar26._8_8_ = lVar33 + lVar32 + lVar88 + lVar62;
          auVar41._16_8_ = lVar36 + lVar34 + lVar90 + lVar53;
          auVar41._0_16_ = auVar26;
          auVar41._24_8_ = lVar35 + lVar37 + lVar94 + lVar89;
          auVar97 = vpaddq_avx(auVar26,auVar41._16_16_);
          auVar78 = vpshufd_avx(auVar97,0xee);
          auVar97 = vpaddq_avx(auVar97,auVar78);
          uVar55 = auVar97._0_8_;
          if (uVar50 != uVar49) {
            uVar59 = uVar49;
            if ((uVar50 & 0xc) != 0) goto LAB_006582ff;
            goto LAB_00658340;
          }
LAB_0065836d:
          uVar59 = uVar50 & 0xfffffffffffffff0;
          lVar56 = 0;
          lVar57 = 0;
          lVar88 = 0;
          lVar90 = 0;
          uVar49 = 0;
          lVar63 = 0;
          lVar62 = 0;
          lVar53 = 0;
          lVar89 = 0;
          auVar83 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          do {
            pauVar1 = (undefined1 (*) [24])(lVar73 + uVar49 * 8);
            lVar56 = lVar56 + *(long *)*pauVar1;
            lVar57 = lVar57 + *(long *)(*pauVar1 + 8);
            lVar88 = lVar88 + SUB248(*pauVar1,0x10);
            lVar90 = lVar90 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x20 + uVar49 * 8);
            lVar63 = lVar63 + *(long *)*pauVar1;
            lVar62 = lVar62 + *(long *)(*pauVar1 + 8);
            lVar53 = lVar53 + SUB248(*pauVar1,0x10);
            lVar89 = lVar89 + *(long *)pauVar1[1];
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x40 + uVar49 * 8);
            lVar94 = auVar83._0_8_ + *(long *)*pauVar1;
            lVar31 = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
            lVar33 = auVar83._16_8_ + SUB248(*pauVar1,0x10);
            lVar36 = auVar83._24_8_ + *(long *)pauVar1[1];
            auVar83 = ZEXT3264(CONCAT824(lVar36,CONCAT816(lVar33,CONCAT88(lVar31,lVar94))));
            pauVar1 = (undefined1 (*) [24])(lVar73 + 0x60 + uVar49 * 8);
            lVar21 = auVar84._0_8_ + *(long *)*pauVar1;
            lVar32 = auVar84._8_8_ + *(long *)(*pauVar1 + 8);
            lVar34 = auVar84._16_8_ + SUB248(*pauVar1,0x10);
            lVar37 = auVar84._24_8_ + *(long *)pauVar1[1];
            auVar84 = ZEXT3264(CONCAT824(lVar37,CONCAT816(lVar34,CONCAT88(lVar32,lVar21))));
            uVar49 = uVar49 + 0x10;
          } while (uVar59 != uVar49);
          auVar28._0_8_ = lVar21 + lVar94 + lVar63 + lVar56;
          auVar28._8_8_ = lVar32 + lVar31 + lVar62 + lVar57;
          auVar87._16_8_ = lVar34 + lVar33 + lVar53 + lVar88;
          auVar87._0_16_ = auVar28;
          auVar87._24_8_ = lVar37 + lVar36 + lVar89 + lVar90;
          auVar97 = vpaddq_avx(auVar28,auVar87._16_16_);
          auVar78 = vpshufd_avx(auVar97,0xee);
          auVar97 = vpaddq_avx(auVar97,auVar78);
          uVar49 = auVar97._0_8_;
          if (uVar50 != uVar59) {
            if ((uVar50 & 0xc) != 0) {
LAB_006583df:
              auVar83 = ZEXT864(uVar49);
              do {
                pauVar1 = (undefined1 (*) [24])(lVar73 + uVar59 * 8);
                auVar29._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
                auVar29._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
                auVar30._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
                auVar30._0_16_ = auVar29;
                auVar30._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
                auVar83 = ZEXT3264(auVar30);
                uVar59 = uVar59 + 4;
              } while ((uVar50 & 0xfffffffffffffffc) != uVar59);
              auVar97 = vpaddq_avx(auVar29,auVar30._16_16_);
              auVar78 = vpshufd_avx(auVar97,0xee);
              auVar97 = vpaddq_avx(auVar97,auVar78);
              uVar49 = auVar97._0_8_;
              uVar59 = uVar50 & 0xfffffffffffffffc;
              goto code_r0x00658420;
            }
            goto LAB_00658418;
          }
        }
        else {
          uVar55 = uVar49;
          if ((uVar50 & 0xc) != 0) {
LAB_0065820f:
            uVar49 = uVar50 & 0xfffffffffffffffc;
            auVar83 = ZEXT864(uStack_5b0);
            do {
              pauVar1 = (undefined1 (*) [24])(*pauVar74 + uVar55 * 8);
              auVar25._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
              auVar25._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
              auVar40._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
              auVar40._0_16_ = auVar25;
              auVar40._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
              auVar83 = ZEXT3264(auVar40);
              uVar55 = uVar55 + 4;
            } while (uVar49 != uVar55);
            auVar97 = vpaddq_avx(auVar25,auVar40._16_16_);
            auVar78 = vpshufd_avx(auVar97,0xee);
            auVar97 = vpaddq_avx(auVar97,auVar78);
            uStack_5b0 = auVar97._0_8_;
            if (uVar50 != uVar49) goto LAB_00658250;
LAB_00658275:
            if (0xf < uVar50) goto LAB_00658287;
            uVar55 = 0;
            uVar59 = 0;
LAB_006582ff:
            uVar49 = uVar50 & 0xfffffffffffffffc;
            auVar83 = ZEXT864(uVar55);
            do {
              pauVar1 = (undefined1 (*) [24])(lVar63 + uVar59 * 8);
              auVar27._0_8_ = auVar83._0_8_ + *(long *)*pauVar1;
              auVar27._8_8_ = auVar83._8_8_ + *(long *)(*pauVar1 + 8);
              auVar42._16_8_ = auVar83._16_8_ + SUB248(*pauVar1,0x10);
              auVar42._0_16_ = auVar27;
              auVar42._24_8_ = auVar83._24_8_ + *(long *)pauVar1[1];
              auVar83 = ZEXT3264(auVar42);
              uVar59 = uVar59 + 4;
            } while (uVar49 != uVar59);
            auVar97 = vpaddq_avx(auVar27,auVar42._16_16_);
            auVar78 = vpshufd_avx(auVar97,0xee);
            auVar97 = vpaddq_avx(auVar97,auVar78);
            uVar55 = auVar97._0_8_;
            if (uVar50 != uVar49) goto LAB_00658340;
code_r0x00658360:
            if (uVar50 < 0x10) {
              uVar59 = 0;
              uVar49 = 0;
              goto LAB_006583df;
            }
            goto LAB_0065836d;
          }
LAB_00658250:
          do {
            uStack_5b0 = uStack_5b0 + *(long *)(*pauVar74 + uVar49 * 8);
            uVar49 = uVar49 + 1;
          } while (uVar50 != uVar49);
          if (3 < uVar50) goto LAB_00658275;
          uVar49 = 0;
          uVar55 = 0;
LAB_00658340:
          do {
            uVar55 = uVar55 + *(long *)(lVar63 + uVar49 * 8);
            uVar49 = uVar49 + 1;
          } while (uVar50 != uVar49);
          if (3 < uVar50) goto code_r0x00658360;
          uVar59 = 0;
          uVar49 = 0;
LAB_00658418:
          do {
            uVar49 = uVar49 + *(long *)(lVar73 + uVar59 * 8);
            uVar59 = uVar59 + 1;
code_r0x00658420:
          } while (uVar50 != uVar59);
        }
LAB_00658425:
        core[62e902411887be45]::ptr::drop_glue::<[alloc[2a0ada2ddd1fabff]::vec::Vec<i64>_4usize]>
                  (&puStack_458);
        if (puVar70 != (undefined1 *)0x0) {
          if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) <
               pauStack_588) && (pauStack_588 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
            if (uStack_4d0 < 0x11) {
              uStack_4d0 = 0x10;
            }
            lVar56 = -LZCOUNT(uStack_4d0 - 1);
            if ((uStack_4d0 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauStack_588,lVar56 + 0x40),
               cVar47 == '\0')) {
              *(long *)*pauStack_588 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauStack_588;
            }
          }
          else {
            free(pauStack_588);
          }
        }
        if (uVar76 != 0) {
          if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) <
               pauStack_580) && (pauStack_580 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
            if (uVar76 < 0x11) {
              uVar76 = 0x10;
            }
            lVar56 = -LZCOUNT(uVar76 - 1);
            if ((uVar76 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauStack_580,lVar56 + 0x40),
               cVar47 == '\0')) {
              *(long *)*pauStack_580 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauStack_580;
            }
          }
          else {
            free(pauStack_580);
          }
        }
        if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) < __ptr_00)
           && (__ptr_00 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          lVar56 = -LZCOUNT(lStack_3d8 + 0x3f);
          if ((puVar70 < (undefined1 *)0xaa9) ||
             (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(__ptr_00,lVar56 + 0x40),
             cVar47 == '\0')) {
            *(long *)*__ptr_00 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)__ptr_00;
          }
        }
        else {
          free(__ptr_00);
        }
        if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) < pauVar51)
           && (pauVar51 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          uVar50 = 0x10;
          if (0x10 < uVar60) {
            uVar50 = uVar60;
          }
          lVar56 = -LZCOUNT(uVar50 - 1);
          if ((uVar50 - 1 < 0x10000) ||
             (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar51,lVar56 + 0x40),
             cVar47 == '\0')) {
            *(long *)*pauVar51 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar51;
          }
        }
        else {
          free(pauVar51);
        }
        if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) < pauVar64)
           && (pauVar64 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          if (uVar60 < 0x11) {
            uVar60 = 0x10;
          }
          lVar56 = -LZCOUNT(uVar60 - 1);
          if ((uVar60 - 1 < 0x10000) ||
             (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar64,lVar56 + 0x40),
             cVar47 == '\0')) {
            *(long *)*pauVar64 = in_FS_OFFSET[lVar56 + -0x39];
            in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar64;
          }
        }
        else {
          free(pauVar64);
        }
        if (puStack_4b0 != (undefined1 *)0x0) {
          if (((undefined1 (*) [64])(pipeline[509596c7b52975b2]::sys::A_BASE_0[-1] + 0x3f) < __ptr)
             && (__ptr < pipeline[509596c7b52975b2]::sys::A_END_0)) {
            uVar50 = (long)puStack_4b0 * 0x20 - 1;
            lVar73 = LZCOUNT(uVar50);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar63), cVar47 == '\0')) {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)*__ptr = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)__ptr;
            }
          }
          else {
            free(__ptr);
          }
        }
        if (uStack_300 != 0) {
          if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined1 (*) [64])0x0) ||
              (pauVar46 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
             (pipeline[509596c7b52975b2]::sys::A_END_0 <= pauVar46)) {
            free(pauVar46);
          }
          else {
            uVar50 = uStack_300;
            if (uStack_300 < 0x11) {
              uVar50 = 0x10;
            }
            lVar73 = LZCOUNT(uVar50 - 1);
            lVar56 = -lVar73;
            lVar63 = lVar56 + 0x40;
            if ((uVar50 - 1 < 0x10000) ||
               (cVar47 = pipeline[509596c7b52975b2]::sys::big_put(pauVar46,lVar63), cVar47 == '\0'))
            {
              if (lVar73 == 0) goto LAB_00658a85;
              *(long *)*pauVar46 = in_FS_OFFSET[lVar56 + -0x39];
              in_FS_OFFSET[lVar56 + -0x39] = (long)pauVar46;
            }
          }
        }
        if (*(ulong *)(lStack_3c8 + 0x10) <= uStack_460) goto LAB_00658aae;
        param_1 = (long *)(*(long *)(lStack_3c8 + 8) + uStack_460 * 0x28);
        piVar2 = (int *)(*(long *)(lStack_3c8 + 8) + uStack_460 * 0x28);
        LOCK();
        bVar77 = *piVar2 == 0;
        if (bVar77) {
          *piVar2 = 1;
        }
        UNLOCK();
        if (bVar77) {
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) != 0) goto LAB_006588e9;
LAB_00658849:
          bVar48 = 0;
          cVar47 = *(char *)((long)param_1 + 4);
        }
        else {
          <std[c60ef17cbf7de79f]::sys::sync::mutex::futex::Mutex>::lock_contended(param_1);
          if ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT &
              0x7fffffffffffffff) == 0) goto LAB_00658849;
LAB_006588e9:
          bVar48 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path();
          bVar48 = bVar48 ^ 1;
          cVar47 = *(char *)((long)param_1 + 4);
        }
        if (cVar47 != '\0') goto LAB_006589b3;
        param_1[1] = uStack_5b0;
        param_1[2] = uVar55;
        param_1[3] = uVar49;
        param_1[4] = lStack_570;
        if (((bVar48 == 0) &&
            ((std[c60ef17cbf7de79f]::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7fffffffffffffff
             ) != 0)) &&
           (cVar47 = std[c60ef17cbf7de79f]::panicking::panic_count::is_zero_slow_path(),
           cVar47 == '\0')) {
          *(undefined1 *)((long)param_1 + 4) = 1;
        }
        LOCK();
        lVar56 = *param_1;
        *(int *)param_1 = 0;
        UNLOCK();
        if ((int)lVar56 == 2) {
          syscall(0xca,param_1,0x81,1);
        }
        goto LAB_006568d7;
      }
    }
LAB_0065891b:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    goto LAB_00658920;
  }
  if (*puVar13 <= *puVar12) {
LAB_00658920:
    pipeline[509596c7b52975b2]::out::end_user_file();
    core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>
              (&uStack_378);
    return;
  }
  goto LAB_006568d7;
LAB_00657ad7:
  auStack_298 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (uVar58 == *(ulong *)(lVar54 + 0x248)) {
    auStack_2b8._7_25_ = SUB6425(ZEXT1664((undefined1  [16])0x0),7);
    auStack_2b8._0_7_ = 0x63696e61000000;
    auStack_2b8._0_4_ = 0x6167726f;
    pcStack_4c8 = "organic";
    uStack_548 = 7;
    lStack_4c0 = 7;
  }
  else {
    auStack_278 = (undefined1  [16])0x0;
    lStack_268 = 0;
    uVar52 = uVar58;
    uVar65 = 0x19;
    do {
      uVar66 = uVar65 - 2;
      auStack_2b8 = auStack_298;
      if (0x17 < uVar66) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (0xffffffffffffffff,0x18,&PTR_s_src_out_rs_00212bf0);
      }
      cVar47 = (char)(uVar52 / 10);
      auStack_298[uVar65 + 0x1e] = (char)uVar52 + cVar47 * -10 | 0x30;
      if (uVar52 < 10) {
        uVar66 = uVar65 - 1;
        break;
      }
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar52 / 10;
      auStack_298[uVar65 + 0x1d] =
           cVar47 + SUB161(auVar43 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
      bVar77 = 99 < uVar52;
      uVar52 = uVar52 / 100;
      uVar65 = uVar66;
    } while (bVar77);
    if (0x17 < uVar66 - 3) {
LAB_00658b16:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check();
    }
    *(undefined2 *)(auStack_298 + uVar66 + 0x1d) = 0x5f63;
    lStack_4c0 = 0x1b - uVar66;
    (*(code *)PTR_memcpy_00841de0)(auStack_2b8,auStack_298 + uVar66 + 0x1d);
    if (*(ulong *)(lVar54 + 0x28) <= uVar58) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar58,*(ulong *)(lVar54 + 0x28),&PTR_s_src_out_rs_00212c20);
    }
    uVar52 = (ulong)*(byte *)(*(long *)(lVar54 + 0x20) + uVar58);
    if (*(ulong *)(lVar54 + 0x58) <= uVar52) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar52,*(ulong *)(lVar54 + 0x58),&PTR_s_src_out_rs_00212c38);
    }
    pcStack_4c8 = *(char **)(*(long *)(lVar54 + 0x50) + 8 + uVar52 * 0x18);
    uStack_548 = *(ulong *)(*(long *)(lVar54 + 0x50) + 0x10 + uVar52 * 0x18);
    if (0x20 < uStack_548) {
      bVar77 = false;
      goto LAB_00657cac;
    }
  }
  (*(code *)PTR_memcpy_00841de0)(auStack_298);
  bVar77 = true;
LAB_00657cac:
  uVar52 = 0;
  do {
    uVar65 = uVar52;
    while( true ) {
      uVar52 = uVar65 + 1;
      lVar53 = (uVar65 + lVar57) * 0x20;
      lVar62 = *(long *)(*__ptr + lVar53);
      lVar88 = *(long *)(*__ptr + lVar53 + 0x18);
      if (lVar62 != 0 || lVar88 != 0) break;
      uVar65 = uVar52;
      if (uVar59 <= uVar52) goto LAB_00657a59;
    }
    uStack_3f0 = *(undefined8 *)(*__ptr + lVar53 + 8);
    uStack_3f8 = *(undefined8 *)(*__ptr + lVar53 + 0x10);
    lVar53 = 0;
    if (uVar58 == *(ulong *)(lVar54 + 0x248)) {
      lVar53 = lVar62;
    }
    *(undefined1 (*) [32])(*__ptr_00 + lStack_530) = auStack_2b8;
    lStack_3e8 = lStack_570;
    uStack_3e0 = uVar50;
    if (bVar77) {
      *(undefined1 (*) [32])(*pauStack_580 + lStack_528) = auStack_298;
    }
    else {
      (*(code *)PTR_memcpy_00841de0)
                ((undefined1 (*) [32])(*pauStack_580 + lStack_528),pcStack_4c8,uStack_548);
    }
    lStack_570 = lVar53 + lStack_3e8;
    lStack_530 = lStack_530 + lStack_4c0;
    lStack_528 = lStack_528 + uStack_548;
    *(int *)(*pauVar64 + uStack_3e0 * 4 + 4) = (int)lStack_530;
    *(int *)(*pauVar51 + uStack_3e0 * 4 + 4) = (int)lStack_528;
    *(int *)(*pauStack_588 + uStack_3e0 * 4) = (int)uVar65 + *(int *)(lVar54 + 0x2f0);
    *(long *)(*pauVar74 + uStack_3e0 * 8) = lVar62;
    *(undefined8 *)(lVar56 + uStack_3e0 * 8) = uStack_3f0;
    *(undefined8 *)(lVar63 + uStack_3e0 * 8) = uStack_3f8;
    *(long *)(lVar73 + uStack_3e0 * 8) = lVar88;
    uVar50 = uStack_3e0 + 1;
  } while (uVar52 < uVar59);
  goto LAB_00657a59;
}


// ==== pipeline::out::write_rows @ 006a7000 (814 bytes)

/* pipeline[509596c7b52975b2]::out::write_rows */

void __rustcall
pipeline[509596c7b52975b2]::out::write_rows
          (long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  code *pcVar2;
  long *in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 local_220 [8];
  undefined8 local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long lStack_1e0;
  undefined2 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  char *local_180;
  undefined8 local_178;
  undefined4 local_170;
  long local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined *local_130;
  undefined8 local_128;
  undefined4 local_120;
  long local_118;
  undefined8 local_110;
  undefined1 local_108;
  char *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  char *local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  char *local_40;
  undefined8 local_38;
  
  if (param_3 == param_2) {
    local_c8 = param_3 * 4;
    local_208 = *param_1 + local_c8;
    local_1e8 = param_1[6];
    lStack_1e0 = param_1[7];
    local_1b8 = param_1[1] + local_c8;
    local_168 = param_1[2] + local_c8;
    local_118 = param_1[3] + local_c8;
    local_c8 = local_c8 + param_1[4];
    local_78 = param_3 + param_1[5];
    local_210 = 3;
    local_200 = 0;
    local_1f8 = 4;
    local_1f0 = 0;
    local_1d8 = 0;
    local_1d0 = "user_id";
    local_1c8 = 7;
    local_1c0 = 6;
    local_1b0 = 0;
    local_1a8 = 1;
    local_180 = "day";
    local_178 = 3;
    local_170 = 4;
    local_160 = 0;
    local_158 = 1;
    local_130 = &DAT_00201e18;
    local_128 = 8;
    local_120 = 4;
    local_110 = 0;
    local_108 = 3;
    local_e0 = "events";
    local_d8 = 6;
    local_d0 = 4;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = "revenue_cents";
    local_88 = 0xd;
    local_80 = 0;
    local_70 = 0;
    local_60 = param_7;
    local_58 = param_8;
    local_50 = param_9;
    local_48 = 1;
    local_40 = "top_category";
    local_38 = 0xc;
    local_218 = 0x100000;
    local_220[0] = 1;
    local_68 = param_6;
    auVar3 = pqw::write_file(param_4,param_5,&local_210,6,local_220);
    if (auVar3._0_8_ == 0) {
      return;
    }
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
              (auVar3._8_8_);
    die();
  }
  if ((char)in_FS_OFFSET[-0xaa] == '\0') {
    lVar1 = in_FS_OFFSET[-0xb5];
  }
  else {
    if ((char)in_FS_OFFSET[-0xaa] != '\x01') goto LAB_006a7323;
    std[c60ef17cbf7de79f]::sys::thread_local::destructors::linux_like::register
              (*in_FS_OFFSET + -0x5a8,
               std[c60ef17cbf7de79f]::sys::thread_local::native::eager::destroy::
               <core[62e902411887be45]::cell::RefCell<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::pqw::UserFile>>>
              );
    *(undefined1 *)(in_FS_OFFSET + -0xaa) = 0;
    lVar1 = in_FS_OFFSET[-0xb5];
  }
  if (lVar1 == 0) {
    in_FS_OFFSET[-0xb5] = -1;
    write_split_to();
    in_FS_OFFSET[-0xb5] = in_FS_OFFSET[-0xb5] + 1;
    return;
  }
  core[62e902411887be45]::cell::panic_already_borrowed(&PTR_s_src_out_rs_002106f0);
LAB_006a7323:
  std[c60ef17cbf7de79f]::thread::local::panic_access_error
            (&PTR_s__rustc_0ef1bc386059596dada8fb65b_0020fa38);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// ==== pipeline::out::clear_stale @ 006a7340 (1171 bytes)

/* pipeline[509596c7b52975b2]::out::clear_stale */

void __rustcall pipeline[509596c7b52975b2]::out::clear_stale(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  long local_e0;
  long local_d8;
  long *local_d0;
  char local_c8;
  undefined7 uStack_c7;
  long local_a0;
  long local_98 [5];
  long *local_70;
  char local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  
  std[c60ef17cbf7de79f]::sys::fs::read_dir(&local_d0,param_1,param_2);
  local_70 = local_d0;
  if (local_c8 == '\x02') {
    if ((1 < ((uint)local_d0 & 3) - 2) && (((ulong)local_d0 & 3) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006a73a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((long)local_d0 + 0x17))((long)local_d0 + -1);
      return;
    }
  }
  else {
    local_d0 = (long *)0x0;
    local_a0 = 0;
    local_68 = local_c8;
    do {
      <std[c60ef17cbf7de79f]::fs::ReadDir_as_core[62e902411887be45]::iter::traits::iterator::Iterator>
      ::next(&local_60,&local_70);
      puVar4 = puStack_40;
      puVar2 = puStack_48;
      puVar7 = local_50;
      puVar1 = local_58;
      if ((char)local_60 == '\0') {
        if (local_68 != '\x02') {
          LOCK();
          *local_70 = *local_70 + -1;
          UNLOCK();
          if (*local_70 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::sys::fs::unix::InnerReadDir>>
            ::drop_slow();
          }
        }
        local_68 = '\x02';
        break;
      }
      local_f8 = puStack_48;
      puStack_f0 = puStack_40;
      local_e8 = local_38;
      if (local_58 == (undefined8 *)0x0) {
        if ((1 < ((uint)local_50 & 3) - 2) && (((ulong)local_50 & 3) != 0)) {
          (**(code **)((long)local_50 + 0x17))((undefined1 *)((long)local_50 + -1));
        }
      }
      else {
        puStack_40 = local_38;
        local_50 = puStack_48;
        puStack_48 = puVar4;
        local_60 = local_58;
        local_58 = puVar7;
        puVar10 = (undefined1 *)((long)puVar2 + -1);
        if (puVar10 != (undefined1 *)0x0) {
          puVar4 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(puVar10,1);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,puVar10);
          }
          (*(code *)PTR_memcpy_00841de0)(puVar4,puVar7,puVar10);
          if ((puVar10 < (undefined1 *)0x8) ||
             (*(long *)((long)puVar4 + (long)((long)puVar2 + -9)) != 0x746575717261702e)) {
            if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar4 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= puVar4)) {
              free(puVar4);
            }
            else {
              if (puVar10 < (undefined1 *)0x11) {
                puVar10 = (undefined1 *)0x10;
              }
              lVar8 = LZCOUNT(puVar10 + -1);
              lVar9 = 0x40 - lVar8;
              if ((undefined1 *)0xffff < puVar10 + -1) {
                cVar3 = sys::big_put(puVar4,lVar9);
                if (cVar3 != '\0') goto LAB_006a73ea;
              }
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *puVar4 = *(undefined8 *)(in_FS_OFFSET + lVar9 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar9 * 8 + -0x3c8) = puVar4;
            }
          }
          else {
            if ((sys::A_BASE_0 == (undefined8 *)0x0) ||
               ((puVar4 < sys::A_BASE_0 || (sys::A_END_0 <= puVar4)))) {
              free(puVar4);
            }
            else {
              puVar5 = (undefined1 *)0x10;
              if ((undefined1 *)0x10 < puVar10) {
                puVar5 = puVar10;
              }
              lVar9 = LZCOUNT(puVar5 + -1);
              lVar8 = 0x40 - lVar9;
              if ((undefined1 *)0xffff < puVar5 + -1) {
                local_e0 = lVar9;
                local_d8 = lVar8;
                cVar3 = sys::big_put(puVar4,lVar8);
                lVar8 = local_d8;
                lVar9 = local_e0;
                if (cVar3 != '\0') goto LAB_006a7629;
              }
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar8,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *puVar4 = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
              *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = puVar4;
            }
LAB_006a7629:
            <std[c60ef17cbf7de79f]::path::Path>::_join(&local_f8,puVar1[3],puVar1[4],puVar7,puVar10)
            ;
            puVar1 = puStack_f0;
            uVar6 = std[c60ef17cbf7de79f]::sys::fs::remove_file(puStack_f0,local_e8);
            if (local_f8 != (undefined8 *)0x0) {
              if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar1 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= puVar1)) {
                free(puVar1);
              }
              else {
                puVar7 = local_f8;
                if (local_f8 < &DAT_00000011) {
                  puVar7 = (undefined8 *)&DAT_00000010;
                }
                lVar8 = LZCOUNT((undefined1 *)((long)puVar7 + -1));
                lVar9 = 0x40 - lVar8;
                if ((undefined1 *)0xffff < (undefined1 *)((long)puVar7 + -1)) {
                  cVar3 = sys::big_put(puVar1,lVar9);
                  if (cVar3 != '\0') goto LAB_006a76ed;
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
                }
                *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar9 * 8 + -0x3c8);
                *(undefined8 **)(in_FS_OFFSET + lVar9 * 8 + -0x3c8) = puVar1;
              }
            }
LAB_006a76ed:
            if (uVar6 != 0) {
              if ((1 < ((uint)uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
                (**(code **)(uVar6 + 0x17))(uVar6 - 1);
              }
            }
          }
        }
LAB_006a73ea:
        core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(&local_60);
      }
    } while (local_68 != '\x02');
    if ((local_d0 != (long *)0x0) && (CONCAT71(uStack_c7,local_c8) != 0)) {
      core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(&local_c8);
    }
    if ((local_a0 != 0) && (local_98[0] != 0)) {
      core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::fs::DirEntry>(local_98);
    }
  }
  return;
}


// ==== pipeline::out::end_user_file @ 006a77e0 (230 bytes)

/* pipeline[509596c7b52975b2]::out::end_user_file */

void __rustcall pipeline[509596c7b52975b2]::out::end_user_file(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long *in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0xaa] == '\0') {
    lVar2 = in_FS_OFFSET[-0xb5];
joined_r0x006a7894:
    if (lVar2 == 0) {
      lVar2 = in_FS_OFFSET[-0xb4];
      in_FS_OFFSET[-0xb4] = -1;
      if (lVar2 == -1) {
        return;
      }
      if (lVar2 != -2) {
        local_50 = *(undefined8 *)(lVar1 + -0x598);
        uStack_48 = *(undefined8 *)(lVar1 + -0x590);
        uStack_40 = *(undefined8 *)(lVar1 + -0x588);
        uStack_38 = *(undefined8 *)(lVar1 + -0x580);
        local_30 = *(undefined8 *)(lVar1 + -0x578);
        uStack_28 = *(undefined8 *)(lVar1 + -0x570);
        uStack_20 = *(undefined8 *)(lVar1 + -0x568);
        uStack_18 = *(undefined8 *)(lVar1 + -0x560);
        local_10 = *(undefined8 *)(lVar1 + -0x558);
        local_58 = lVar2;
        auVar5 = <pipeline[509596c7b52975b2]::pqw::UserFile>::finish(&local_58);
        uVar4 = auVar5._8_8_;
        if (auVar5._0_8_ == 0) {
          return;
        }
        goto LAB_006a78ae;
      }
    }
    else {
      core[62e902411887be45]::cell::panic_already_borrowed(&PTR_s_src_out_rs_00210708);
    }
  }
  else if ((char)in_FS_OFFSET[-0xaa] == '\x01') {
    std[c60ef17cbf7de79f]::sys::thread_local::destructors::linux_like::register
              (lVar1 + -0x5a8,
               std[c60ef17cbf7de79f]::sys::thread_local::native::eager::destroy::
               <core[62e902411887be45]::cell::RefCell<core[62e902411887be45]::option::Option<pipeline[509596c7b52975b2]::pqw::UserFile>>>
              );
    *(undefined1 *)(in_FS_OFFSET + -0xaa) = 0;
    lVar2 = in_FS_OFFSET[-0xb5];
    goto joined_r0x006a7894;
  }
  std[c60ef17cbf7de79f]::thread::local::panic_access_error
            (&PTR_s__rustc_0ef1bc386059596dada8fb65b_0020fa38);
  uVar4 = extraout_RDX;
LAB_006a78ae:
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::fs::Metadata,core[62e902411887be45]::io::error::Error>>
            (uVar4);
  die("user_daily",10);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// ==== pipeline::out::write_split_to @ 006a78e0 (19168 bytes)

/* pipeline[509596c7b52975b2]::out::write_split_to */

void __rustcall
pipeline[509596c7b52975b2]::out::write_split_to
          (long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          long *param_6,ulong param_7,undefined8 param_8,undefined8 param_9,long *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined *puVar20;
  uint *puVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  long *plVar27;
  long *plVar28;
  long extraout_RAX;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined1 *puVar39;
  ulong uVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 (*pauVar46) [32];
  undefined4 uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  long *plVar51;
  undefined1 *puVar52;
  undefined4 uVar53;
  uint *puVar54;
  uint *puVar55;
  uint uVar56;
  long lVar57;
  ulong *puVar58;
  long *plVar59;
  long *plVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  long *in_FS_OFFSET;
  bool bVar63;
  undefined1 auVar66 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [32];
  undefined1 auVar65 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 extraout_XMM1_Qa_11;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 extraout_var_08 [56];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_10 [56];
  undefined1 extraout_var_11 [56];
  undefined1 extraout_var_12 [56];
  undefined1 extraout_var_13 [56];
  undefined1 extraout_var_14 [56];
  undefined1 auVar79 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [30];
  undefined1 auVar82 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar83 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [32];
  undefined1 auVar87 [64];
  undefined1 in_ZMM6 [64];
  undefined1 auVar88 [64];
  undefined1 auVar89 [32];
  undefined1 auVar90 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar91 [64];
  undefined1 auVar92 [12];
  long *local_628;
  long *local_620;
  undefined8 local_618;
  long *local_610;
  ulong local_608;
  uint *local_600;
  long *local_5f8;
  uint *local_5f0;
  long *local_5e8;
  char local_5d9;
  long local_5d8;
  long *local_5d0;
  long *local_5c8;
  long *local_5c0;
  uint *local_5b8;
  ulong local_5b0;
  long *local_5a8;
  long *local_5a0;
  uint *local_598;
  undefined2 local_58c;
  undefined1 local_58a;
  ulong local_588;
  ulong local_580;
  undefined1 (*local_578) [32];
  ulong local_570;
  long *local_568;
  long *local_560;
  ulong local_558;
  ulong local_550;
  long *local_548;
  long *local_540;
  undefined1 local_538 [32];
  long local_510;
  undefined1 local_508 [16];
  long *plStack_4f8;
  long lStack_4f0;
  undefined8 local_4e8;
  long local_4e0;
  long local_4d8;
  undefined2 local_4d0;
  ulong local_4c0;
  uint *local_4b8;
  uint *local_4b0;
  long *plStack_4a8;
  uint *local_4a0;
  long *local_498;
  long *plStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  char cStack_474;
  undefined2 uStack_473;
  undefined1 uStack_471;
  ulong local_470;
  long local_468;
  long local_460;
  long local_458;
  long local_450;
  long local_448;
  long local_440;
  long *local_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  char cStack_414;
  undefined2 uStack_413;
  undefined1 uStack_411;
  long *local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  ulong local_3d0;
  undefined1 *local_3c8;
  ulong local_3c0;
  long *local_3b8;
  uint local_3ac;
  uint *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  long *local_390;
  long *local_388;
  long local_380;
  long local_378;
  long local_370;
  long local_368;
  ulong local_360;
  ulong local_358;
  ulong local_350;
  undefined1 (*local_348) [16];
  long *local_340;
  undefined1 local_338 [32];
  long *local_310;
  long *local_308;
  uint local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  long local_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  uint *local_2c0;
  long *local_2b8;
  uint *local_2b0;
  long *local_2a8;
  uint *local_2a0;
  long *local_298;
  uint *local_290;
  long *local_288;
  uint *local_280;
  long *local_278;
  long local_270;
  long *local_268;
  long *local_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *local_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_224;
  long local_218;
  uint *puStack_210;
  long *plStack_208;
  long lStack_200;
  ulong local_1f8;
  long local_1f0;
  long local_1e8;
  undefined2 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  uint *local_1c0;
  long *local_1b8;
  undefined1 local_1b0;
  char *local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  uint *local_170;
  long *local_168;
  undefined1 local_160;
  undefined *local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  uint *local_120;
  long *local_118;
  undefined1 local_110;
  char *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint *local_d0;
  long *local_c8;
  undefined1 local_c0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  long *local_78;
  long *local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  char *local_48;
  undefined8 local_40;
  
  if (param_2 < param_3) {
    local_340 = (long *)(*in_FS_OFFSET + -0x4b0);
    local_440 = *param_1;
    local_448 = param_1[1];
    local_450 = param_1[2];
    local_458 = param_1[3];
    local_3c0 = param_1[9];
    local_350 = local_3c0 - 1;
    if (local_3c0 == 0) {
      local_350 = 0;
    }
    local_570 = param_7 - 1;
    if (param_7 == 0) {
      local_570 = 0;
    }
    uVar29 = param_7 - 2;
    if (param_7 < 2) {
      uVar29 = 0;
    }
    iVar42 = 0x40 - (int)LZCOUNT(uVar29);
    local_3d0 = (ulong)(iVar42 + (uint)(iVar42 == 0));
    local_360 = (0x101010101010101 << (local_3d0 & 0x3f)) + 0xfefefefefefefeff;
    local_460 = param_1[4];
    local_5d9 = 0x3f < uVar29 || local_570 - 0xff < 0xffffffffffffff02;
    local_468 = param_1[5];
    local_370 = param_1[8];
    local_378 = param_1[6];
    local_380 = param_1[7];
    auVar64 = in_ZMM20._0_16_;
    auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
    auVar91 = ZEXT1664(auVar64);
    local_348 = (undefined1 (*) [16])(param_10 + 8);
    local_368 = local_570 * 4;
    local_628 = param_3;
    local_3a0 = param_4;
    local_398 = param_5;
    local_390 = param_3;
    local_388 = param_6;
    do {
      auVar78 = in_ZMM3._0_16_;
      auVar64 = in_ZMM2._0_16_;
      auVar73 = in_ZMM6._0_32_;
      plVar27 = param_2 + 0x200;
      if ((ulong)((long)local_628 - (long)param_2) < 0x1801) {
        plVar27 = local_628;
      }
      plVar28 = local_340;
      if ((char)in_FS_OFFSET[-0x7d] != '\x01') {
        auVar76 = ZEXT1664(auVar64);
        auVar79 = ZEXT1664(auVar78);
        auVar84 = ZEXT1664(in_ZMM6._0_16_);
        plVar28 = (long *)<std[c60ef17cbf7de79f]::sys::thread_local::native::lazy::Storage<core[62e902411887be45]::cell::RefCell<pipeline[509596c7b52975b2]::out::Split>,()>>
                          ::get_or_init_slow::
                          <pipeline[509596c7b52975b2]::out::SPLIT::__rust_std_internal_init_fn>
                                    (*in_FS_OFFSET + -0x4b0);
        auVar78 = auVar79._0_16_;
        auVar64 = auVar76._0_16_;
        auVar73 = auVar84._0_32_;
        auVar80 = auVar91._0_16_;
        auVar80 = vpternlogd_avx512vl(auVar80,auVar80,auVar80,0xff);
        auVar91 = ZEXT1664(auVar80);
        if (plVar28 != (long *)0x0) goto LAB_006a7aa6;
        std[c60ef17cbf7de79f]::thread::local::panic_access_error
                  (&PTR_s__rustc_0ef1bc386059596dada8fb65b_0020fa38);
LAB_006ac2ee:
        die("split",5);
LAB_006ac300:
        free(local_628);
        goto LAB_006ac308;
      }
LAB_006a7aa6:
      if (*plVar28 != 0) {
        core[62e902411887be45]::cell::panic_already_borrowed(&PTR_s_src_out_rs_00210740);
        goto LAB_006ac1e9;
      }
      plVar59 = (long *)((long)plVar27 - (long)param_2);
      *plVar28 = -1;
      plVar28[0x12] = 0;
      plVar60 = plVar59 + 2;
      if ((long *)plVar28[0x10] < plVar60) {
        auVar76 = ZEXT1664(auVar64);
        auVar79 = ZEXT1664(auVar78);
        auVar84 = ZEXT1664(auVar73._0_16_);
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 0x10,0,plVar60,1,1);
        auVar78 = auVar79._0_16_;
        auVar64 = auVar76._0_16_;
        auVar73 = auVar84._0_32_;
        auVar80 = auVar91._0_16_;
        auVar80 = vpternlogd_avx512vl(auVar80,auVar80,auVar80,0xff);
        auVar91 = ZEXT1664(auVar80);
      }
      auVar80 = auVar73._0_16_;
      local_5f8 = plVar59;
      local_5c0 = plVar28;
      local_540 = param_2;
      local_3b8 = plVar27;
      if ((plVar59 + 1 < (long *)0x1811) && (plVar59 + 1 <= (long *)plVar28[0x10])) {
        if ((ulong)plVar28[0x16] < 0x7850) {
          auVar76 = ZEXT1664(auVar80);
          puVar41 = (uint *)__rustc[45371133cddedda4]::__rust_alloc(0x1e140);
          auVar73 = auVar76._0_32_;
          if (puVar41 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,0x1e140);
          }
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
          if (plVar28[0x16] != 0) {
            plVar27 = (long *)plVar28[0x17];
            if (((sys::A_BASE_0 == (long *)0x0) || (plVar27 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= plVar27)) {
              free(plVar27);
              auVar73 = auVar76._0_32_;
              auVar64 = auVar91._0_16_;
              auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
              auVar91 = ZEXT1664(auVar64);
            }
            else {
              uVar29 = plVar28[0x16] << 2;
              if (uVar29 < 0x11) {
                uVar29 = 0x10;
              }
              lVar35 = LZCOUNT(uVar29 - 1);
              lVar57 = -lVar35;
              lVar33 = lVar57 + 0x40;
              if (0xffff < uVar29 - 1) {
                cVar22 = sys::big_put();
                auVar73 = auVar76._0_32_;
                auVar64 = auVar91._0_16_;
                auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
                auVar91 = ZEXT1664(auVar64);
                if (cVar22 != '\0') goto LAB_006a80d8;
              }
              if (lVar35 == 0) goto LAB_006ac3d5;
              *plVar27 = in_FS_OFFSET[lVar57 + -0x39];
              in_FS_OFFSET[lVar57 + -0x39] = (long)plVar27;
            }
          }
LAB_006a80d8:
          plVar28[0x16] = 0x7850;
          plVar28[0x17] = (long)puVar41;
          plVar28[0x18] = 0;
        }
        else {
          puVar41 = (uint *)plVar28[0x17];
        }
        local_5d8 = plVar28[0x11];
        if (&DAT_0000000f < plVar59) {
          local_5f0 = (uint *)(local_448 + (long)local_540 * 4);
          auVar73 = vpcmpeqd_avx2(auVar73,auVar73);
          auVar76 = ZEXT1664((undefined1  [16])0x0);
          local_628 = (long *)0x0;
          uVar29 = 0;
          auVar68._4_4_ = DAT_00206538;
          auVar68._0_4_ = DAT_00206538;
          auVar68._8_4_ = DAT_00206538;
          auVar68._12_4_ = DAT_00206538;
          auVar68._16_4_ = DAT_00206538;
          auVar68._20_4_ = DAT_00206538;
          auVar68._24_4_ = DAT_00206538;
          auVar68._28_4_ = DAT_00206538;
          auVar86._4_4_ = DAT_002064b8;
          auVar86._0_4_ = DAT_002064b8;
          auVar86._8_4_ = DAT_002064b8;
          auVar86._12_4_ = DAT_002064b8;
          auVar86._16_4_ = DAT_002064b8;
          auVar86._20_4_ = DAT_002064b8;
          auVar86._24_4_ = DAT_002064b8;
          auVar86._28_4_ = DAT_002064b8;
          plVar28 = (long *)0x0;
          plVar27 = (long *)&DAT_00000010;
          auVar74 = auVar86;
          auVar83 = auVar68;
          auVar82 = auVar86;
          auVar89 = auVar68;
          do {
            plVar60 = plVar27;
            auVar67 = *(undefined1 (*) [32])
                       (local_440 + (long)local_540 * 4 + -0x40 + (long)plVar60 * 4);
            auVar3 = *(undefined1 (*) [32])(local_5f0 + (long)(plVar60 + -2));
            auVar4 = *(undefined1 (*) [32])
                      (local_450 + (long)local_540 * 4 + -0x40 + (long)plVar60 * 4);
            auVar5 = *(undefined1 (*) [32])
                      (local_458 + (long)local_540 * 4 + -0x40 + (long)plVar60 * 4);
            auVar6 = *(undefined1 (*) [32])
                      (local_460 + (long)local_540 * 4 + -0x40 + (long)plVar60 * 4);
            uVar12 = vptestnmd_avx512vl(auVar6,auVar6);
            auVar64._8_8_ = 0;
            auVar64._0_8_ = *(ulong *)((long)local_540 + local_468 + -0x10 + (long)plVar60);
            uVar32 = vpcmpeqb_avx512vl(auVar64,auVar91._0_16_);
            uVar24 = (uint)uVar32 & 0xff;
            uVar56 = (uint)uVar12 & uVar24;
            auVar78._8_8_ = 0;
            auVar78._0_8_ = *(ulong *)(&DAT_00212d50 + (ulong)uVar56 * 8);
            auVar11 = vpmovzxbd_avx2(auVar78);
            auVar69 = vpermd_avx512vl(auVar11,auVar67);
            auVar70 = vpermd_avx512vl(auVar11,auVar3);
            auVar71 = vpermd_avx512vl(auVar11,auVar4);
            auVar7 = vmovdqu64_avx512vl(auVar69);
            *(undefined1 (*) [32])(puVar41 + (long)local_628) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar70);
            *(undefined1 (*) [32])(puVar41 + (long)(local_628 + 0x302)) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar71);
            *(undefined1 (*) [32])(puVar41 + (long)(local_628 + 0x604)) = auVar7;
            auVar72 = vpermd_avx512vl(auVar11,auVar5);
            auVar7 = vmovdqu64_avx512vl(auVar72);
            *(undefined1 (*) [32])(puVar41 + (long)(local_628 + 0x906)) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar69);
            *(undefined1 (*) [32])(puVar41 + (long)plVar59 + (-8 - uVar29)) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar70);
            *(undefined1 (*) [32])(puVar41 + (long)plVar59 + (0x1808 - uVar29)) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar71);
            *(undefined1 (*) [32])(puVar41 + (long)plVar59 + (0x3018 - uVar29)) = auVar7;
            auVar7 = vmovdqu64_avx512vl(auVar72);
            *(undefined1 (*) [32])(puVar41 + (long)plVar59 + (0x4828 - uVar29)) = auVar7;
            auVar6 = vpermd_avx2(auVar11,auVar6);
            *(undefined1 (*) [32])(puVar41 + (long)plVar59 + (0x6038 - uVar29)) = auVar6;
            plVar28 = (long *)((long)plVar28 + (ulong)(8 - POPCOUNT(uVar24)));
            auVar64 = vpshufb_avx(auVar64,auVar78);
            *(long *)((long)plVar59 + local_5d8 + (-8 - uVar29)) = auVar64._0_8_;
            uVar40 = (ulong)(uint)POPCOUNT(uVar56);
            local_628 = (long *)((long)local_628 + uVar40);
            auVar73 = vpminud_avx2(auVar73,auVar67);
            auVar67 = vpmaxud_avx2(auVar76._0_32_,auVar67);
            auVar76 = ZEXT3264(auVar67);
            auVar89 = vpminsd_avx2(auVar89,auVar3);
            auVar82 = vpmaxsd_avx2(auVar82,auVar3);
            auVar83 = vpminsd_avx2(auVar83,auVar4);
            auVar74 = vpmaxsd_avx2(auVar74,auVar4);
            auVar68 = vpminsd_avx2(auVar68,auVar5);
            auVar86 = vpmaxsd_avx2(auVar86,auVar5);
            uVar29 = (uVar29 - uVar40) + 8;
            plVar27 = plVar60 + 1;
          } while (plVar60 + 1 <= plVar59);
          plVar60 = plVar60 + -1;
        }
        else {
          auVar67 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          auVar73 = vpcmpeqd_avx2(auVar73,auVar73);
          auVar82._4_4_ = DAT_002064b8;
          auVar82._0_4_ = DAT_002064b8;
          auVar82._8_4_ = DAT_002064b8;
          auVar82._12_4_ = DAT_002064b8;
          auVar82._16_4_ = DAT_002064b8;
          auVar82._20_4_ = DAT_002064b8;
          auVar82._24_4_ = DAT_002064b8;
          auVar82._28_4_ = DAT_002064b8;
          auVar83._4_4_ = DAT_00206538;
          auVar83._0_4_ = DAT_00206538;
          auVar83._8_4_ = DAT_00206538;
          auVar83._12_4_ = DAT_00206538;
          auVar83._16_4_ = DAT_00206538;
          auVar83._20_4_ = DAT_00206538;
          auVar83._24_4_ = DAT_00206538;
          auVar83._28_4_ = DAT_00206538;
          plVar28 = (long *)0x0;
          plVar60 = (long *)0x0;
          uVar29 = 0;
          local_628 = (long *)0x0;
          auVar74 = auVar82;
          auVar68 = auVar83;
          auVar86 = auVar82;
          auVar89 = auVar83;
        }
        auVar64 = vpminud_avx(auVar73._0_16_,auVar73._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpminud_avx(auVar64,auVar78);
        auVar78 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpminud_avx(auVar64,auVar78);
        local_620 = (long *)(ulong)auVar64._0_4_;
        auVar64 = vpmaxud_avx(auVar67._0_16_,auVar67._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpmaxud_avx(auVar64,auVar78);
        auVar78 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpmaxud_avx(auVar64,auVar78);
        local_538._0_4_ = auVar64._0_4_;
        auVar64 = vpminsd_avx(auVar89._0_16_,auVar89._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpminsd_avx(auVar64,auVar78);
        auVar77 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpminsd_avx(auVar64,auVar77);
        local_5e8 = (long *)CONCAT44(local_5e8._4_4_,auVar64._0_4_);
        auVar64 = vpmaxsd_avx(auVar82._0_16_,auVar82._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpmaxsd_avx(auVar64,auVar78);
        auVar78 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpmaxsd_avx(auVar64,auVar78);
        local_5d0 = (long *)CONCAT44(local_5d0._4_4_,auVar64._0_4_);
        auVar64 = vpminsd_avx(auVar83._0_16_,auVar83._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpminsd_avx(auVar64,auVar78);
        auVar78 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpminsd_avx(auVar64,auVar78);
        local_578 = (undefined1 (*) [32])CONCAT44(local_578._4_4_,auVar64._0_4_);
        auVar64 = vpmaxsd_avx(auVar74._0_16_,auVar74._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpmaxsd_avx(auVar64,auVar78);
        auVar65 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpmaxsd_avx(auVar64,auVar65);
        local_580 = CONCAT44(local_580._4_4_,auVar64._0_4_);
        auVar64 = vpminsd_avx(auVar68._0_16_,auVar68._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpminsd_avx(auVar64,auVar78);
        auVar80 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpminsd_avx(auVar64,auVar80);
        plVar27 = (long *)(ulong)auVar64._0_4_;
        auVar64 = vpmaxsd_avx(auVar86._0_16_,auVar86._16_16_);
        auVar78 = vpshufd_avx(auVar64,0xee);
        auVar64 = vpmaxsd_avx(auVar64,auVar78);
        auVar78 = vpsrlq_avx(auVar64,0x20);
        auVar64 = vpmaxsd_avx(auVar64,auVar78);
        local_5a0 = (long *)CONCAT44(local_5a0._4_4_,auVar64._0_4_);
        if (plVar60 < plVar59) {
          local_5f0 = (uint *)((long)plVar59 - (long)plVar60);
          local_598 = (uint *)((undefined1 *)((long)local_540 + (long)plVar60) + local_468);
          lVar57 = (long)local_540 * 4 + (long)plVar60 * 4;
          local_5b8 = (uint *)(local_460 + lVar57);
          local_568 = (long *)(local_458 + lVar57);
          local_588 = local_450 + lVar57;
          local_5c8 = (long *)(local_448 + lVar57);
          puVar55 = (uint *)0x0;
          do {
            uVar24 = *(uint *)(lVar57 + local_440 + (long)puVar55 * 4);
            uVar56 = *(uint *)((long)local_5c8 + (long)puVar55 * 4);
            uVar25 = *(uint *)(local_588 + (long)puVar55 * 4);
            uVar48 = *(uint *)((long)local_568 + (long)puVar55 * 4);
            uVar43 = local_5b8[(long)puVar55];
            cVar22 = *(char *)((long)local_598 + (long)puVar55);
            if (uVar24 <= (uint)local_620) {
              local_620._0_4_ = uVar24;
            }
            local_620 = (long *)(ulong)(uint)local_620;
            uVar23 = local_538._0_4_;
            if ((uint)local_538._0_4_ <= uVar24) {
              uVar23 = uVar24;
            }
            local_538._0_4_ = uVar23;
            uVar23 = (uint)local_5e8;
            if ((int)uVar56 <= (int)(uint)local_5e8) {
              uVar23 = uVar56;
            }
            local_5e8 = (long *)CONCAT44(local_5e8._4_4_,uVar23);
            uVar23 = (uint)local_5d0;
            if ((int)(uint)local_5d0 <= (int)uVar56) {
              uVar23 = uVar56;
            }
            local_5d0 = (long *)CONCAT44(local_5d0._4_4_,uVar23);
            uVar23 = (uint)local_578;
            if ((int)uVar25 <= (int)(uint)local_578) {
              uVar23 = uVar25;
            }
            local_578 = (undefined1 (*) [32])CONCAT44(local_578._4_4_,uVar23);
            uVar23 = (uint)local_580;
            if ((int)(uint)local_580 <= (int)uVar25) {
              uVar23 = uVar25;
            }
            local_580 = CONCAT44(local_580._4_4_,uVar23);
            if ((int)uVar48 <= (int)plVar27) {
              plVar27 = (long *)(ulong)uVar48;
            }
            uVar23 = (uint)local_5a0;
            if ((int)(uint)local_5a0 <= (int)uVar48) {
              uVar23 = uVar48;
            }
            local_5a0 = (long *)CONCAT44(local_5a0._4_4_,uVar23);
            if ((uVar43 == 0) && (cVar22 == -1)) {
              puVar41[(long)local_628] = uVar24;
              puVar41[(long)(local_628 + 0x302)] = uVar56;
              puVar41[(long)(local_628 + 0x604)] = uVar25;
              puVar41[(long)(local_628 + 0x906)] = uVar48;
              local_628 = (long *)((long)local_628 + 1);
            }
            else {
              lVar33 = ~uVar29 + (long)local_5f8;
              puVar41[lVar33] = uVar24;
              puVar41[lVar33 + 0x1810] = uVar56;
              puVar41[lVar33 + 0x3020] = uVar25;
              puVar41[lVar33 + 0x4830] = uVar48;
              puVar41[lVar33 + 0x6040] = uVar43;
              *(char *)(local_5d8 + lVar33) = cVar22;
              uVar29 = uVar29 + 1;
            }
            plVar28 = (long *)((long)plVar28 + (ulong)(cVar22 != -1));
            puVar55 = (uint *)((long)puVar55 + 1);
          } while (local_5f0 != puVar55);
        }
        puVar20 = PTR_memset_00841dd0;
        local_600 = puVar41;
        if ((long *)(uVar29 + (long)local_628) != local_5f8) goto LAB_006ac2ee;
        local_5f0 = puVar41 + 0x1810;
        local_598 = puVar41 + 0x3020;
        local_5b8 = puVar41 + 0x4830;
        puVar41 = puVar41 + 0x6040;
        auVar79 = ZEXT1664(auVar80);
        auVar84 = ZEXT1664(auVar65);
        auVar85 = ZEXT1664(auVar77);
        (*(code *)PTR_memset_00841dd0)(puVar41,0,(long)local_628 * 4);
        (*(code *)puVar20)(local_5d8,0xff,local_628);
        auVar76._8_56_ = extraout_var_03;
        auVar76._0_8_ = extraout_XMM1_Qa_00;
        local_568 = (long *)&DAT_00000001;
        local_588 = 1;
        local_2f8 = SUB84(local_5e8,0);
        local_2f4 = SUB84(local_5d0,0);
        plVar60 = local_5c0;
        local_2fc = local_538._0_4_;
        local_2f0 = (uint)local_578;
        local_2ec = (uint)local_580;
        uVar47 = (uint)local_5a0;
      }
      else {
        plVar28[3] = 0;
        if ((long *)plVar28[1] < plVar60) {
          auVar76 = ZEXT1664(auVar64);
          auVar79 = ZEXT1664(auVar78);
          auVar84 = ZEXT1664(auVar80);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 1,0,plVar60,4,4);
          auVar80 = auVar84._0_16_;
          auVar78 = auVar79._0_16_;
          auVar64 = auVar76._0_16_;
          auVar65 = auVar91._0_16_;
          auVar65 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
          auVar91 = ZEXT1664(auVar65);
          plVar28[6] = 0;
          if (plVar60 <= (long *)plVar28[4]) goto LAB_006a7b3f;
LAB_006ab5ab:
          auVar76 = ZEXT1664(auVar64);
          auVar79 = ZEXT1664(auVar78);
          auVar84 = ZEXT1664(auVar80);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 4,0,plVar60,4,4);
          auVar80 = auVar84._0_16_;
          auVar78 = auVar79._0_16_;
          auVar64 = auVar76._0_16_;
          auVar65 = auVar91._0_16_;
          auVar65 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
          auVar91 = ZEXT1664(auVar65);
          plVar28[9] = 0;
          if (plVar60 <= (long *)plVar28[7]) goto LAB_006a7b53;
LAB_006ab5eb:
          auVar76 = ZEXT1664(auVar64);
          auVar79 = ZEXT1664(auVar78);
          auVar84 = ZEXT1664(auVar80);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 7,0,plVar60,4,4);
          auVar80 = auVar84._0_16_;
          auVar78 = auVar79._0_16_;
          auVar64 = auVar76._0_16_;
          auVar65 = auVar91._0_16_;
          auVar65 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
          auVar91 = ZEXT1664(auVar65);
          plVar28[0xc] = 0;
          if (plVar60 <= (long *)plVar28[10]) goto LAB_006a7b6b;
LAB_006ab62b:
          auVar76 = ZEXT1664(auVar64);
          auVar79 = ZEXT1664(auVar78);
          auVar84 = ZEXT1664(auVar80);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 10,0,plVar60,4,4);
          auVar80 = auVar84._0_16_;
          auVar78 = auVar79._0_16_;
          auVar64 = auVar76._0_16_;
          auVar65 = auVar91._0_16_;
          auVar65 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
          auVar91 = ZEXT1664(auVar65);
          plVar28[0xf] = 0;
          plVar27 = (long *)plVar28[0xd];
        }
        else {
          plVar28[6] = 0;
          if ((long *)plVar28[4] < plVar60) goto LAB_006ab5ab;
LAB_006a7b3f:
          plVar28[9] = 0;
          if ((long *)plVar28[7] < plVar60) goto LAB_006ab5eb;
LAB_006a7b53:
          plVar28[0xc] = 0;
          if ((long *)plVar28[10] < plVar60) goto LAB_006ab62b;
LAB_006a7b6b:
          plVar28[0xf] = 0;
          plVar27 = (long *)plVar28[0xd];
        }
        if (plVar27 < plVar60) {
          auVar76 = ZEXT1664(auVar64);
          auVar79 = ZEXT1664(auVar78);
          auVar84 = ZEXT1664(auVar80);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(plVar28 + 0xd,0,plVar60,4,4);
          auVar80 = auVar84._0_16_;
          auVar78 = auVar79._0_16_;
          auVar64 = auVar76._0_16_;
          auVar65 = auVar91._0_16_;
          auVar65 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
          auVar91 = ZEXT1664(auVar65);
        }
        local_600 = (uint *)(local_440 + (long)param_2 * 4);
        local_5f0 = (uint *)(local_448 + (long)param_2 * 4);
        local_598 = (uint *)(local_450 + (long)param_2 * 4);
        local_5b8 = (uint *)(local_458 + (long)param_2 * 4);
        puVar41 = (uint *)(local_460 + (long)param_2 * 4);
        local_5d8 = local_468 + (long)param_2;
        plVar27 = (long *)plVar28[2];
        lVar57 = plVar28[5];
        lVar33 = plVar28[8];
        lVar35 = plVar28[0xb];
        local_538._0_8_ = lVar35;
        local_5e8 = (long *)plVar28[0xe];
        local_548 = (long *)plVar28[0x11];
        if (&DAT_00000007 < plVar59) {
          local_628 = (long *)0x0;
          lVar37 = 0;
          plVar28 = (long *)0x0;
          do {
            auVar73 = *(undefined1 (*) [32])(local_600 + (long)plVar28);
            auVar74 = *(undefined1 (*) [32])(local_5f0 + (long)plVar28);
            auVar82 = *(undefined1 (*) [32])(local_598 + (long)plVar28);
            auVar64 = auVar82._0_16_;
            auVar86 = *(undefined1 (*) [32])(local_5b8 + (long)plVar28);
            auVar78 = auVar86._0_16_;
            auVar89 = *(undefined1 (*) [32])(puVar41 + (long)plVar28);
            auVar65._8_8_ = 0;
            auVar65._0_8_ = *(ulong *)(local_5d8 + (long)plVar28);
            uVar29 = vpcmpeqb_avx512vl(auVar65,auVar91._0_16_);
            uVar40 = vptestnmd_avx512vl(auVar89,auVar89);
            uVar40 = uVar29 & 0xff & uVar40;
            auVar67 = vpcompressd_avx512vl(auVar73);
            bVar8 = (byte)uVar40;
            auVar80._8_8_ = 0;
            auVar80._0_8_ = *(ulong *)(local_5d8 + (long)plVar28);
            auVar83 = vpmovzxbd_avx2(auVar80);
            auVar80 = auVar83._0_16_;
            puVar55 = local_600 + (long)local_628;
            *puVar55 = (uint)(bVar8 & 1) * auVar67._0_4_;
            puVar55[1] = (uint)((byte)(uVar40 >> 1) & 1) * auVar67._4_4_;
            puVar55[2] = (uint)((byte)(uVar40 >> 2) & 1) * auVar67._8_4_;
            puVar55[3] = (uint)((byte)(uVar40 >> 3) & 1) * auVar67._12_4_;
            puVar55[4] = (uint)((byte)(uVar40 >> 4) & 1) * auVar67._16_4_;
            puVar55[5] = (uint)((byte)(uVar40 >> 5) & 1) * auVar67._20_4_;
            puVar55[6] = (uint)((byte)(uVar40 >> 6) & 1) * auVar67._24_4_;
            puVar55[7] = (uint)(byte)(uVar40 >> 7) * auVar67._28_4_;
            auVar67 = vpcompressd_avx512vl(auVar74);
            puVar55 = local_5f0 + (long)local_628;
            *puVar55 = (uint)(bVar8 & 1) * auVar67._0_4_;
            puVar55[1] = (uint)((byte)(uVar40 >> 1) & 1) * auVar67._4_4_;
            puVar55[2] = (uint)((byte)(uVar40 >> 2) & 1) * auVar67._8_4_;
            puVar55[3] = (uint)((byte)(uVar40 >> 3) & 1) * auVar67._12_4_;
            puVar55[4] = (uint)((byte)(uVar40 >> 4) & 1) * auVar67._16_4_;
            puVar55[5] = (uint)((byte)(uVar40 >> 5) & 1) * auVar67._20_4_;
            puVar55[6] = (uint)((byte)(uVar40 >> 6) & 1) * auVar67._24_4_;
            puVar55[7] = (uint)(byte)(uVar40 >> 7) * auVar67._28_4_;
            auVar67 = vpcompressd_avx512vl(auVar82);
            puVar55 = local_598 + (long)local_628;
            *puVar55 = (uint)(bVar8 & 1) * auVar67._0_4_;
            puVar55[1] = (uint)((byte)(uVar40 >> 1) & 1) * auVar67._4_4_;
            puVar55[2] = (uint)((byte)(uVar40 >> 2) & 1) * auVar67._8_4_;
            puVar55[3] = (uint)((byte)(uVar40 >> 3) & 1) * auVar67._12_4_;
            puVar55[4] = (uint)((byte)(uVar40 >> 4) & 1) * auVar67._16_4_;
            puVar55[5] = (uint)((byte)(uVar40 >> 5) & 1) * auVar67._20_4_;
            puVar55[6] = (uint)((byte)(uVar40 >> 6) & 1) * auVar67._24_4_;
            puVar55[7] = (uint)(byte)(uVar40 >> 7) * auVar67._28_4_;
            auVar68 = vpcompressd_avx512vl(auVar86);
            auVar67._4_4_ = (uint)((byte)(uVar40 >> 1) & 1) * auVar68._4_4_;
            auVar67._0_4_ = (uint)(bVar8 & 1) * auVar68._0_4_;
            auVar67._8_4_ = (uint)((byte)(uVar40 >> 2) & 1) * auVar68._8_4_;
            auVar67._12_4_ = (uint)((byte)(uVar40 >> 3) & 1) * auVar68._12_4_;
            auVar67._16_4_ = (uint)((byte)(uVar40 >> 4) & 1) * auVar68._16_4_;
            auVar67._20_4_ = (uint)((byte)(uVar40 >> 5) & 1) * auVar68._20_4_;
            auVar67._24_4_ = (uint)((byte)(uVar40 >> 6) & 1) * auVar68._24_4_;
            auVar67._28_4_ = (uint)(byte)(uVar40 >> 7) * auVar68._28_4_;
            *(undefined1 (*) [32])(local_5b8 + (long)local_628) = auVar67;
            bVar19 = ~bVar8;
            local_628 = (long *)((ulong)(uint)POPCOUNT((int)uVar40) + (long)local_628);
            auVar73 = vpcompressd_avx512vl(auVar73);
            piVar1 = (int *)((long)plVar27 + lVar37 * 4);
            *piVar1 = (uint)(bVar19 & 1) * auVar73._0_4_;
            piVar1[1] = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            piVar1[2] = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            piVar1[3] = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            piVar1[4] = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            piVar1[5] = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            piVar1[6] = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            piVar1[7] = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar73 = vpcompressd_avx512vl(auVar74);
            piVar1 = (int *)(lVar57 + lVar37 * 4);
            *piVar1 = (uint)(bVar19 & 1) * auVar73._0_4_;
            piVar1[1] = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            piVar1[2] = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            piVar1[3] = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            piVar1[4] = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            piVar1[5] = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            piVar1[6] = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            piVar1[7] = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar73 = vpcompressd_avx512vl(auVar82);
            piVar1 = (int *)(lVar33 + lVar37 * 4);
            *piVar1 = (uint)(bVar19 & 1) * auVar73._0_4_;
            piVar1[1] = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            piVar1[2] = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            piVar1[3] = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            piVar1[4] = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            piVar1[5] = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            piVar1[6] = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            piVar1[7] = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar73 = vpcompressd_avx512vl(auVar86);
            piVar1 = (int *)(lVar35 + lVar37 * 4);
            *piVar1 = (uint)(bVar19 & 1) * auVar73._0_4_;
            piVar1[1] = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            piVar1[2] = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            piVar1[3] = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            piVar1[4] = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            piVar1[5] = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            piVar1[6] = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            piVar1[7] = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar73 = vpcompressd_avx512vl(auVar89);
            piVar1 = (int *)((long)local_5e8 + lVar37 * 4);
            *piVar1 = (uint)(bVar19 & 1) * auVar73._0_4_;
            piVar1[1] = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            piVar1[2] = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            piVar1[3] = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            piVar1[4] = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            piVar1[5] = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            piVar1[6] = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            piVar1[7] = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar73 = vpcompressd_avx512vl(auVar83);
            auVar74._4_4_ = (uint)(bVar19 >> 1 & 1) * auVar73._4_4_;
            auVar74._0_4_ = (uint)(bVar19 & 1) * auVar73._0_4_;
            auVar74._8_4_ = (uint)(bVar19 >> 2 & 1) * auVar73._8_4_;
            auVar74._12_4_ = (uint)(bVar19 >> 3 & 1) * auVar73._12_4_;
            auVar74._16_4_ = (uint)(bVar19 >> 4 & 1) * auVar73._16_4_;
            auVar74._20_4_ = (uint)(bVar19 >> 5 & 1) * auVar73._20_4_;
            auVar74._24_4_ = (uint)(bVar19 >> 6 & 1) * auVar73._24_4_;
            auVar74._28_4_ = (uint)(bVar19 >> 7) * auVar73._28_4_;
            auVar65 = vpmovdb_avx512vl(auVar74);
            *(long *)((long)local_548 + lVar37) = auVar65._0_8_;
            lVar37 = (ulong)(uint)POPCOUNT((uint)(byte)~bVar8) + lVar37;
            plVar60 = plVar28 + 1;
            plVar51 = plVar28 + 2;
            param_6 = plVar60;
            plVar28 = plVar60;
          } while (plVar51 <= plVar59);
        }
        else {
          plVar60 = (long *)0x0;
          lVar37 = 0;
          local_628 = (long *)0x0;
        }
        if (plVar60 < plVar59) {
          local_5d0 = (long *)((long)plVar59 - (long)plVar60);
          local_578 = (undefined1 (*) [32])
                      ((undefined1 *)((long)local_540 + (long)plVar60) + local_468);
          lVar31 = (long)local_540 * 4 + (long)plVar60 * 4;
          local_580 = local_460 + lVar31;
          local_568 = (long *)(local_458 + lVar31);
          local_5c8 = (long *)(local_448 + lVar31);
          puVar54 = (uint *)(lVar31 + local_440);
          plVar60 = (long *)0x0;
          do {
            uVar24 = puVar54[(long)plVar60];
            uVar56 = *(uint *)((long)local_5c8 + (long)plVar60 * 4);
            uVar25 = *(uint *)(local_450 + lVar31 + (long)plVar60 * 4);
            uVar48 = *(uint *)((long)local_568 + (long)plVar60 * 4);
            iVar42 = *(int *)(local_580 + (long)plVar60 * 4);
            bVar8 = (*local_578)[(long)plVar60];
            puVar55 = (uint *)(ulong)bVar8;
            local_600[(long)local_628] = uVar24;
            local_5f0[(long)local_628] = uVar56;
            local_598[(long)local_628] = uVar25;
            local_5b8[(long)local_628] = uVar48;
            *(uint *)((long)plVar27 + lVar37 * 4) = uVar24;
            *(uint *)(lVar57 + lVar37 * 4) = uVar56;
            *(uint *)(lVar33 + lVar37 * 4) = uVar25;
            *(uint *)(lVar35 + lVar37 * 4) = uVar48;
            *(int *)((long)local_5e8 + lVar37 * 4) = iVar42;
            *(byte *)((long)local_548 + lVar37) = bVar8;
            uVar29 = (ulong)(bVar8 == 0xff && iVar42 == 0);
            local_628 = (long *)((long)local_628 + uVar29);
            lVar37 = (uVar29 ^ 1) + lVar37;
            plVar60 = (long *)((long)plVar60 + 1);
            param_6 = plVar27;
            plVar28 = local_548;
            local_5a0 = plVar27;
          } while (local_5d0 != plVar60);
        }
        else {
          puVar55 = local_5b8;
          plVar28 = plVar27;
          puVar54 = puVar41;
        }
        puVar20 = PTR_memset_00841dd0;
        uVar53 = SUB84(puVar54,0);
        uVar47 = SUB84(plVar28,0);
        uVar49 = SUB84(puVar55,0);
        uVar50 = SUB84(param_6,0);
        local_588 = 0;
        auVar79 = ZEXT1664(auVar64);
        auVar84 = ZEXT1664(auVar78);
        auVar85 = ZEXT1664(auVar80);
        local_4b8 = puVar41;
        (*(code *)PTR_memset_00841dd0)(puVar41,0,(long)local_628 * 4);
        (*(code *)puVar20)(local_5d8,0xff,local_628);
        local_620 = local_5c0;
        plVar27 = (long *)PTR_memcpy_00841de0;
        plVar28 = (long *)(lVar37 * 4);
        (*(code *)PTR_memcpy_00841de0)(local_600 + (long)local_628,local_5c0[2],plVar28);
        (*(code *)plVar27)(local_5f0 + (long)local_628,local_620[5],plVar28);
        (*(code *)plVar27)(local_598 + (long)local_628,local_620[8],plVar28);
        (*(code *)plVar27)(local_5b8 + (long)local_628,local_620[0xb],plVar28);
        (*(code *)plVar27)(puVar41 + (long)local_628,local_620[0xe],plVar28);
        lVar57 = local_5d8 + (long)local_628;
        local_2fc = (*(code *)plVar27)(lVar57,local_620[0x11],lVar37);
        local_2f4 = uVar53;
        local_2f8 = uVar47;
        auVar76._8_56_ = extraout_var_02;
        auVar76._0_8_ = extraout_XMM1_Qa;
        local_568 = (long *)0x0;
        plVar60 = local_620;
        local_2f0 = uVar49;
        local_2ec = uVar50;
        uVar47 = (int)lVar57;
      }
      local_2e0 = local_370;
      uStack_2d8 = local_3c0;
      lStack_2d0 = local_378;
      lStack_2c8 = local_380;
      local_2c0 = local_600;
      local_2b8 = local_5f8;
      local_2b0 = local_5f0;
      local_2a8 = local_5f8;
      local_2a0 = local_598;
      local_298 = local_5f8;
      local_290 = local_5b8;
      local_288 = local_5f8;
      local_278 = local_5f8;
      local_270 = local_5d8;
      local_268 = local_5f8;
      local_260 = local_388;
      uStack_258 = param_7;
      uStack_250 = param_8;
      uStack_248 = param_9;
      local_310 = local_568;
      uVar24 = (uint)local_620;
      local_538._0_4_ = local_2fc;
      local_5e8 = (long *)CONCAT44(local_5e8._4_4_,local_2f8);
      local_5d0 = (long *)CONCAT44(local_5d0._4_4_,local_2f4);
      local_578 = (undefined1 (*) [32])CONCAT44(local_578._4_4_,local_2f0);
      local_580 = CONCAT44(local_580._4_4_,local_2ec);
      local_2e8 = SUB84(plVar27,0);
      local_548 = (long *)CONCAT44(local_548._4_4_,local_2e8);
      lVar57 = *param_10;
      local_5c8 = plVar28;
      local_4b8 = puVar41;
      local_308 = plVar28;
      local_300 = uVar24;
      local_2e4 = uVar47;
      local_280 = puVar41;
      local_240 = local_628;
      if (lVar57 == -1) {
        if ((char)in_FS_OFFSET[-0x7c] == '\0') {
          puStack_210 = (uint *)0x101000100;
          local_218 = 0x1b600000000;
          <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(local_508,&local_218,local_3a0,local_398);
          if (local_508._0_4_ != 1) {
            uVar53 = local_508._4_4_;
            lVar57 = 0x180000;
            puVar26 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(0x180000,1);
            if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x180000);
            }
            lVar35 = 0x100000;
            *puVar26 = 0x31524150;
            lVar33 = *param_10;
            goto joined_r0x006a8a4c;
          }
        }
        else {
          puStack_210 = (uint *)0x101000100;
          local_218 = 0x1b600000000;
          <std[c60ef17cbf7de79f]::fs::OpenOptions>::_open(local_508,&local_218,local_3a0,local_398);
          if (local_508._0_4_ != 1) {
            uVar53 = local_508._4_4_;
            lVar57 = 0x40000;
            puVar26 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(0x40000,1);
            if (puVar26 == (undefined4 *)0x0) goto LAB_006ac3a0;
            lVar35 = 0x30000;
            *puVar26 = 0x31524150;
            lVar33 = *param_10;
joined_r0x006a8a4c:
            if (lVar33 != -1) {
              core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::UserFile>
                        (param_10);
            }
            *param_10 = lVar57;
            param_10[1] = (long)puVar26;
            param_10[2] = 4;
            param_10[3] = 0;
            param_10[4] = lVar35;
            *(undefined4 *)(param_10 + 5) = uVar53;
            param_10[6] = 0;
            param_10[7] = 8;
            *local_348 = (undefined1  [16])0x0;
            plVar60 = local_5c0;
            goto LAB_006a8ab2;
          }
        }
LAB_006ac391:
        die("user_daily",10);
LAB_006ac3a0:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x40000);
      }
LAB_006a8ab2:
      param_2 = local_3b8;
      auVar64 = auVar85._0_16_;
      auVar80 = auVar84._0_16_;
      auVar77 = auVar79._0_16_;
      auVar78 = auVar76._0_16_;
      if ((local_3b8 == local_540) || (local_5f8 < local_628)) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic
                  ("assertion failed: n > 0 && u.head <= n && u.day.len() == n && u.ses.len() == n &&\n            u.evs.len() == n && u.rev.len() == n && u.cat.len() == n"
                   ,0x96,&PTR_s_src_pqw_rs_00212770);
      }
      local_568 = plVar60 + 0x13;
      if ((char)local_588 != '\0') {
        uVar29 = param_10[2];
        plVar27 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0xf0,8);
        if (plVar27 == (long *)0x0) goto LAB_006ac22c;
        plVar28 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x20,1);
        auVar73 = local_538;
        auVar64 = auVar85._0_16_;
        auVar80 = auVar84._0_16_;
        auVar77 = auVar79._0_16_;
        auVar78 = auVar76._0_16_;
        if (plVar28 == (long *)0x0) goto LAB_006ac215;
        local_618 = 0x20;
        local_608 = 0;
        uVar40 = (ulong)(local_538._0_4_ - uVar24);
        local_610 = plVar28;
        local_588 = uVar29;
        if (((uint)local_538._0_4_ < uVar24) ||
           (uVar44 = (ulong)(uint)local_538._0_4_, local_350 <= uVar44)) {
LAB_006a9cf0:
          plVar28 = local_610;
          if (((sys::A_BASE_0 == (long *)0x0) || (local_610 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_610)) {
            auVar76 = ZEXT1664(auVar78);
            auVar79 = ZEXT1664(auVar77);
            auVar84 = ZEXT1664(auVar80);
            auVar85 = ZEXT1664(auVar64);
            free(local_610);
            auVar64 = auVar85._0_16_;
            auVar80 = auVar84._0_16_;
            auVar77 = auVar79._0_16_;
            auVar78 = auVar76._0_16_;
            if (sys::A_BASE_0 != (long *)0x0) goto LAB_006a9db7;
LAB_006a9de0:
            auVar76 = ZEXT1664(auVar78);
            auVar79 = ZEXT1664(auVar77);
            auVar84 = ZEXT1664(auVar80);
            auVar85 = ZEXT1664(auVar64);
            free(plVar27);
            auVar64 = auVar85._0_16_;
            auVar80 = auVar84._0_16_;
            auVar77 = auVar79._0_16_;
            auVar78 = auVar76._0_16_;
          }
          else {
            uVar29 = local_618;
            if (local_618 < 0x11) {
              uVar29 = 0x10;
            }
            lVar35 = LZCOUNT(uVar29 - 1);
            lVar57 = -lVar35;
            lVar33 = lVar57 + 0x40;
            if (0xffff < uVar29 - 1) {
              auVar76 = ZEXT1664(auVar78);
              auVar79 = ZEXT1664(auVar77);
              auVar84 = ZEXT1664(auVar80);
              auVar85 = ZEXT1664(auVar64);
              cVar22 = sys::big_put(local_610,lVar33);
              auVar64 = auVar85._0_16_;
              auVar80 = auVar84._0_16_;
              auVar77 = auVar79._0_16_;
              auVar78 = auVar76._0_16_;
              if (cVar22 != '\0') goto LAB_006a9d90;
            }
            if (lVar35 == 0) goto LAB_006ac3d5;
            *plVar28 = in_FS_OFFSET[lVar57 + -0x39];
            in_FS_OFFSET[lVar57 + -0x39] = (long)plVar28;
LAB_006a9d90:
            if (sys::A_BASE_0 == (long *)0x0) goto LAB_006a9de0;
LAB_006a9db7:
            if ((plVar27 < sys::A_BASE_0) || (sys::A_END_0 <= plVar27)) goto LAB_006a9de0;
            *plVar27 = in_FS_OFFSET[-0x71];
            in_FS_OFFSET[-0x71] = (long)plVar27;
          }
          if (local_588 <= (ulong)param_10[2]) {
            param_10[2] = local_588;
          }
          goto LAB_006a9e12;
        }
        iVar42 = 0x20 - LZCOUNT(local_538._0_4_ - uVar24);
        local_538._4_4_ = 0;
        local_538._0_4_ = iVar42 + (uint)(iVar42 == 0);
        local_538._8_24_ = auVar73._8_24_;
        uVar44 = uVar44 + 2;
        if (local_3c0 < uVar44) {
LAB_006ac1e9:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail();
        }
        uVar34 = uVar40 + 1;
        uStack_3f0 = uVar44 - ((ulong)local_620 & 0xffffffff);
        local_3f8 = (long *)(local_370 + ((ulong)local_620 & 0xffffffff) * 4);
        local_3e8 = (undefined4)local_378;
        uStack_3e4 = (undefined4)((ulong)local_378 >> 0x20);
        local_3e0 = (undefined4)local_380;
        uStack_3dc = (undefined4)((ulong)local_380 >> 0x20);
        if (uStack_3f0 <= uVar34) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar34,uStack_3f0,&PTR_s_src_pqw_rs_00211d98);
        }
        local_5a0 = (long *)CONCAT44(local_5a0._4_4_,uVar47);
        local_4c0 = param_10[3] + uVar29;
        local_550 = uVar40;
        pqw::page_header(&local_618,2,
                         (ulong)(uint)(*(int *)((long)local_3f8 + uVar40 * 4 + 4) - (int)*local_3f8)
                         + uVar34 * 4,uVar34,0);
        uVar40 = local_608;
        plVar28 = local_610;
        if (lVar57 - uVar29 < local_608) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,uVar29,local_608,1,1);
          uVar29 = param_10[2];
          uVar24 = local_538._0_4_;
LAB_006a8c69:
          (*(code *)PTR_memcpy_00841de0)(param_10[1] + uVar29,plVar28,uVar40);
          auVar76._8_56_ = extraout_var_04;
          auVar76._0_8_ = extraout_XMM1_Qa_01;
        }
        else {
          uVar24 = local_538._0_4_;
          if (local_608 != 0) goto LAB_006a8c69;
        }
        param_10[2] = uVar29 + uVar40;
        pqw::put_strs_fast(param_10,&local_3f8);
        plVar28 = local_5f8;
        local_338._0_8_ = param_10[2];
        lVar57 = param_10[3] + param_10[2];
        uVar40 = (ulong)(uVar24 + 7 >> 3);
        local_5c0[0x15] = 0;
        local_5a8 = (long *)(uVar40 + 1);
        uVar29 = (long)local_5a8 * (long)local_5f8 + 0x40;
        if ((ulong)local_5c0[0x13] < uVar29) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(local_5c0 + 0x13,0,uVar29,1,1);
        }
        local_470 = local_5c0[0x14];
        local_558 = uVar40;
        auVar92 = pqw::rle_vec(local_470,local_600,local_628,(ulong)local_620 & 0xffffffff);
        uVar29 = auVar92._0_8_;
        auVar64 = auVar85._0_16_;
        auVar80 = auVar84._0_16_;
        auVar77 = auVar79._0_16_;
        auVar78 = auVar76._0_16_;
        uVar40 = (ulong)uVar24;
        plVar28 = (long *)((long)plVar28 - (long)local_628);
        if (plVar28 == (long *)0x0) {
          uVar44 = 0;
        }
        else {
          uVar44 = (ulong)((long)plVar28 + 7) >> 3;
          lVar33 = 1;
          if ((undefined1 *)0x1ff < (undefined1 *)((long)plVar28 + 7)) {
            uVar34 = uVar44 * 2 + 1;
            do {
              lVar33 = lVar33 + 1;
              bVar63 = 0x3fff < uVar34;
              uVar34 = uVar34 >> 7;
            } while (bVar63);
          }
          uVar44 = uVar44 * uVar40 + lVar33;
        }
        uVar34 = (long)local_5f8 + 7;
        uVar36 = uVar34 >> 3;
        lVar33 = 1;
        if (0x1ff < uVar34) {
          uVar38 = uVar36 * 2 + 1;
          do {
            lVar33 = lVar33 + 1;
            bVar63 = 0x3fff < uVar38;
            uVar38 = uVar38 >> 7;
          } while (bVar63);
        }
        local_510 = lVar57;
        if ((uint)local_550 < auVar92._8_4_) {
LAB_006a9cd1:
          if (local_618 != 0) goto LAB_006a9cf0;
          goto LAB_006a9d90;
        }
        local_3a8 = local_600 + (long)local_628;
        if (local_5f8 == local_628) {
          uVar38 = 0;
        }
        else {
          if (&DAT_00000008 < plVar28) {
            uVar38 = 1;
            lVar57 = 0;
            do {
              uVar32 = vpcmpd_avx512vl(*(undefined1 (*) [32])(local_600 + (long)local_628 + lVar57),
                                       *(undefined1 (*) [32])
                                        (local_600 + (long)local_628 + lVar57 + 1),4);
              uVar38 = uVar38 + (uint)POPCOUNT((int)uVar32);
              lVar35 = lVar57 + 8;
              plVar60 = (long *)(lVar57 + 0x11);
              lVar57 = lVar35;
            } while (plVar60 <= plVar28);
          }
          else {
            uVar38 = 1;
            lVar35 = 0;
          }
          plVar60 = (long *)(lVar35 + 1);
          if (plVar60 < plVar28) {
            uVar24 = local_3a8[lVar35];
            uVar30 = ~((long)local_540 + (long)local_628 + lVar35) + (long)param_2;
            if (0xf < uVar30) {
              uVar45 = uVar30 & 0xfffffffffffffff0;
              plVar60 = (long *)((long)plVar60 + uVar45);
              auVar76 = ZEXT864(uVar38);
              auVar78 = vpbroadcastd_avx512vl();
              auVar79 = ZEXT1664((undefined1  [16])0x0);
              uVar38 = 0;
              auVar84 = ZEXT1664((undefined1  [16])0x0);
              auVar85 = ZEXT1664((undefined1  [16])0x0);
              do {
                auVar64 = *(undefined1 (*) [16])(local_600 + (long)local_628 + uVar38 + lVar35 + 1);
                auVar80 = *(undefined1 (*) [16])(local_600 + (long)local_628 + uVar38 + lVar35 + 5);
                auVar65 = *(undefined1 (*) [16])(local_600 + (long)local_628 + uVar38 + lVar35 + 9);
                auVar66 = *(undefined1 (*) [16])
                           (local_600 + (long)local_628 + uVar38 + lVar35 + 0xd);
                auVar78 = vpalignr_avx(auVar64,auVar78,0xc);
                auVar77 = vpalignr_avx(auVar80,auVar64,0xc);
                auVar9 = vpalignr_avx(auVar65,auVar80,0xc);
                auVar10 = vpalignr_avx(auVar66,auVar65,0xc);
                uVar15 = vpcmpd_avx512vl(auVar78,auVar64,4);
                uVar16 = vpcmpd_avx512vl(auVar77,auVar80,4);
                uVar17 = vpcmpd_avx512vl(auVar9,auVar65,4);
                uVar18 = vpcmpd_avx512vl(auVar10,auVar66,4);
                auVar73 = vpmovm2q_avx512vl(uVar15 & 0xf);
                auVar73 = vpsubq_avx2(auVar76._0_32_,auVar73);
                auVar76 = ZEXT3264(auVar73);
                auVar74 = vpmovm2q_avx512vl(uVar16 & 0xf);
                auVar74 = vpsubq_avx2(auVar79._0_32_,auVar74);
                auVar79 = ZEXT3264(auVar74);
                auVar82 = vpmovm2q_avx512vl(uVar17 & 0xf);
                auVar82 = vpsubq_avx2(auVar84._0_32_,auVar82);
                auVar84 = ZEXT3264(auVar82);
                auVar80 = auVar82._0_16_;
                auVar86 = vpmovm2q_avx512vl(uVar18 & 0xf);
                auVar86 = vpsubq_avx2(auVar85._0_32_,auVar86);
                auVar85 = ZEXT3264(auVar86);
                uVar38 = uVar38 + 0x10;
                auVar78 = auVar66;
              } while (uVar45 != uVar38);
              auVar9._0_8_ = auVar86._0_8_ + auVar82._0_8_ + auVar74._0_8_ + auVar73._0_8_;
              auVar9._8_8_ = auVar86._8_8_ + auVar82._8_8_ + auVar74._8_8_ + auVar73._8_8_;
              auVar89._16_8_ = auVar86._16_8_ + auVar82._16_8_ + auVar74._16_8_ + auVar73._16_8_;
              auVar89._0_16_ = auVar9;
              auVar89._24_8_ = auVar86._24_8_ + auVar82._24_8_ + auVar74._24_8_ + auVar73._24_8_;
              auVar78 = vpaddq_avx(auVar9,auVar89._16_16_);
              auVar77 = vpshufd_avx(auVar78,0xee);
              auVar78 = vpaddq_avx(auVar78,auVar77);
              uVar38 = auVar78._0_8_;
              if (uVar30 == uVar45) goto LAB_006a8fc9;
              uVar24 = auVar66._12_4_;
            }
            plVar60 = (long *)((long)plVar60 + (long)local_628);
            do {
              puVar41 = local_600 + (long)plVar60;
              uVar38 = uVar38 + (uVar24 != *puVar41);
              plVar60 = (long *)((long)plVar60 + 1);
              uVar24 = *puVar41;
            } while (local_5f8 != plVar60);
          }
        }
LAB_006a8fc9:
        local_3c8 = (undefined1 *)(uVar36 * uVar40);
        uVar38 = uVar38 * (long)local_5a8;
        local_608 = 0;
        uVar30 = uVar44;
        if (uVar38 < uVar44) {
          uVar30 = uVar38;
        }
        local_5a8 = plVar28;
        local_358 = uVar34;
        if ((undefined1 *)(uVar30 + uVar29) < local_3c8 + lVar33) {
          uVar34 = uVar44;
          local_5b0 = uVar40;
          if (uVar38 <= uVar44) {
            auVar76 = ZEXT1664(auVar78);
            auVar79 = ZEXT1664(auVar77);
            auVar84 = ZEXT1664(auVar80);
            auVar85 = ZEXT1664(auVar64);
            auVar92 = pqw::rle_vec(local_470 + uVar29,local_3a8,plVar28,
                                   (ulong)local_620 & 0xffffffff,local_558);
            auVar64 = auVar85._0_16_;
            auVar80 = auVar84._0_16_;
            auVar77 = auVar79._0_16_;
            auVar78 = auVar76._0_16_;
            if ((uint)local_550 < auVar92._8_4_) goto LAB_006a9cd1;
            uVar29 = uVar29 + auVar92._0_8_;
            uVar34 = 0;
          }
          auVar79 = ZEXT1664(auVar78);
          auVar76 = ZEXT1664(auVar77);
          auVar84 = ZEXT1664(auVar80);
          auVar85 = ZEXT1664(auVar64);
          local_560 = plVar27;
          local_558 = uVar29;
          pqw::page_header(&local_618,0,uVar34 + uVar29 + 1,local_5f8,8);
          uVar29 = local_608;
          plVar27 = local_610;
          lVar57 = *param_10;
          if ((ulong)(lVar57 - local_338._0_8_) < local_608) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,local_338._0_8_,local_608,1,1);
            lVar57 = *param_10;
            lVar33 = param_10[2];
LAB_006a90d6:
            local_338._0_8_ = lVar33;
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar33,plVar27,uVar29);
            auVar79._8_56_ = extraout_var_05;
            auVar79._0_8_ = extraout_XMM1_Qa_02;
          }
          else {
            lVar33 = local_338._0_8_;
            if (local_608 != 0) goto LAB_006a90d6;
          }
          lVar33 = local_338._0_8_ + uVar29;
          param_10[2] = lVar33;
          if (lVar57 == lVar33) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,1,1,1);
            lVar57 = *param_10;
            lVar33 = param_10[2];
          }
          *(char *)(param_10[1] + lVar33) = local_538[0];
          lVar33 = lVar33 + 1;
          param_10[2] = lVar33;
          if ((ulong)(lVar57 - lVar33) < local_558) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar33,local_558,1,1);
            lVar33 = param_10[2];
LAB_006a9156:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar33,local_470,local_558);
            auVar79._8_56_ = extraout_var_06;
            auVar79._0_8_ = extraout_XMM1_Qa_03;
          }
          else if (local_558 != 0) goto LAB_006a9156;
          puVar52 = (undefined1 *)(lVar33 + local_558);
          param_10[2] = (long)puVar52;
          uVar29 = local_570;
          plVar27 = local_560;
          if (local_628 < local_5f8) {
            if (uVar44 < uVar38) {
              local_608 = 0;
              local_3c8 = (undefined1 *)((long)local_5a8 + 7);
              uVar29 = (ulong)local_3c8 >> 2 | 1;
              uVar40 = local_5b0;
              if ((undefined1 *)0x1ff < local_3c8) {
                uVar44 = uVar29;
                do {
                  uVar29 = local_608;
                  if (local_608 == local_618) {
                    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
                    uVar40 = local_5b0;
                  }
                  *(byte *)((long)local_610 + uVar29) = (byte)uVar44 | 0x80;
                  local_608 = uVar29 + 1;
                  uVar29 = uVar44 >> 7;
                  bVar63 = 0x3fff < uVar44;
                  uVar44 = uVar29;
                } while (bVar63);
              }
              uVar44 = local_608;
              if (local_608 == local_618) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
                uVar40 = local_5b0;
              }
              plVar27 = local_610;
              *(char *)((long)local_610 + uVar44) = (char)uVar29;
              uVar44 = uVar44 + 1;
              lVar57 = *param_10;
              local_608 = uVar44;
              if ((ulong)(lVar57 - (long)puVar52) < uVar44) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,puVar52,uVar44,1,1);
                lVar57 = *param_10;
                puVar52 = (undefined1 *)param_10[2];
LAB_006a94b3:
                uVar29 = local_570;
                (*(code *)PTR_memcpy_00841de0)(puVar52 + param_10[1],plVar27,uVar44);
                auVar79._8_56_ = extraout_var_09;
                auVar79._0_8_ = extraout_XMM1_Qa_06;
                uVar40 = local_5b0;
              }
              else {
                uVar29 = local_570;
                if (uVar44 != 0) goto LAB_006a94b3;
              }
              puVar52 = puVar52 + uVar44;
              param_10[2] = (long)puVar52;
              puVar39 = (undefined1 *)(((ulong)local_3c8 >> 3) * uVar40);
              if ((undefined1 *)(lVar57 - (long)puVar52) < puVar39 + 0x40) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,puVar52,puVar39 + 0x40,1,1);
                puVar52 = (undefined1 *)param_10[2];
              }
              plVar27 = local_560;
              uVar24 = pqw::pack32_any_mode
                                 (puVar52 + param_10[1],local_3a8,local_5a8,
                                  (ulong)local_620 & 0xffffffff,local_538._0_8_);
              auVar64 = auVar85._0_16_;
              auVar80 = auVar84._0_16_;
              auVar77 = auVar76._0_16_;
              auVar78 = auVar79._0_16_;
              if ((uint)local_550 < uVar24) goto LAB_006a9cd1;
              goto LAB_006a954d;
            }
            goto LAB_006a9568;
          }
        }
        else {
          auVar79 = ZEXT1664(auVar78);
          auVar76 = ZEXT1664(auVar77);
          auVar84 = ZEXT1664(auVar80);
          auVar85 = ZEXT1664(auVar64);
          local_5b0 = uVar36;
          pqw::page_header(&local_618,0,local_3c8 + lVar33 + 1,local_5f8,8);
          uVar29 = local_608;
          plVar28 = local_610;
          lVar57 = *param_10;
          if ((ulong)(lVar57 - local_338._0_8_) < local_608) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,local_338._0_8_,local_608,1,1);
            lVar57 = *param_10;
            lVar33 = param_10[2];
LAB_006a92a3:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar33,plVar28,uVar29);
            auVar79._8_56_ = extraout_var_07;
            auVar79._0_8_ = extraout_XMM1_Qa_04;
          }
          else {
            lVar33 = local_338._0_8_;
            if (local_608 != 0) goto LAB_006a92a3;
          }
          lVar33 = lVar33 + uVar29;
          param_10[2] = lVar33;
          if (lVar57 == lVar33) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,1,1,1);
            lVar33 = param_10[2];
          }
          lVar57 = lVar33 + 1;
          *(char *)(param_10[1] + lVar33) = local_538[0];
          param_10[2] = lVar57;
          local_608 = 0;
          uVar29 = local_5b0 * 2 + 1;
          if (0x1ff < local_358) {
            uVar40 = uVar29;
            do {
              uVar29 = local_608;
              if (local_608 == local_618) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
              }
              *(byte *)((long)local_610 + uVar29) = (byte)uVar40 | 0x80;
              local_608 = uVar29 + 1;
              uVar29 = uVar40 >> 7;
              bVar63 = 0x3fff < uVar40;
              uVar40 = uVar29;
            } while (bVar63);
          }
          uVar40 = local_608;
          if (local_608 == local_618) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
          }
          plVar28 = local_610;
          *(char *)((long)local_610 + uVar40) = (char)uVar29;
          uVar40 = uVar40 + 1;
          lVar33 = *param_10;
          local_608 = uVar40;
          if ((ulong)(lVar33 - lVar57) < uVar40) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,uVar40,1,1);
            lVar33 = *param_10;
            lVar57 = param_10[2];
LAB_006a93a7:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar57,plVar28,uVar40);
            auVar79._8_56_ = extraout_var_08;
            auVar79._0_8_ = extraout_XMM1_Qa_05;
          }
          else if (uVar40 != 0) goto LAB_006a93a7;
          puVar39 = local_3c8;
          lVar57 = lVar57 + uVar40;
          param_10[2] = lVar57;
          if ((undefined1 *)(lVar33 - lVar57) < local_3c8 + 0x40) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,local_3c8 + 0x40,1,1);
            lVar57 = param_10[2];
          }
          uVar29 = local_570;
          uVar24 = pqw::pack32_any_mode
                             (lVar57 + param_10[1],local_600,local_5f8,(ulong)local_620 & 0xffffffff
                              ,local_538._0_8_);
          auVar64 = auVar85._0_16_;
          auVar80 = auVar84._0_16_;
          auVar77 = auVar76._0_16_;
          auVar78 = auVar79._0_16_;
          if ((uint)local_550 < uVar24) goto LAB_006a9cd1;
LAB_006a954d:
          puVar52 = puVar39 + param_10[2];
          param_10[2] = (long)puVar52;
LAB_006a9568:
        }
        plVar28 = local_5f8;
        *plVar27 = (long)(puVar52 + (param_10[3] - local_4c0));
        plVar27[1] = local_510;
        plVar27[2] = local_4c0;
        plVar27[3] = (long)local_5f8;
        *(int *)(plVar27 + 4) = 6;
        *(undefined1 *)((long)plVar27 + 0x24) = 1;
        pqw::int_chunk_fast(local_508,param_10,local_5f0,local_5f8,(ulong)local_5e8 & 0xffffffff,
                            (ulong)local_5d0 & 0xffffffff,0);
        auVar64 = auVar85._0_16_;
        auVar80 = auVar84._0_16_;
        auVar77 = auVar76._0_16_;
        auVar78 = auVar79._0_16_;
        if (local_4e8._4_1_ == '\x02') goto LAB_006a9cd1;
        uStack_478 = (undefined4)local_4e8;
        uStack_473 = (undefined2)(local_4e8 >> 0x28);
        uStack_471 = (undefined1)(local_4e8 >> 0x38);
        local_498 = (long *)local_508._0_8_;
        plStack_490 = (long *)local_508._8_8_;
        uStack_488 = local_508._16_4_;
        uStack_484 = local_508._20_4_;
        uStack_480 = local_508._24_4_;
        uStack_47c = local_508._28_4_;
        plVar27[9] = local_4e8;
        plVar27[5] = local_508._0_8_;
        plVar27[6] = local_508._8_8_;
        plVar27[7] = (long)plStack_4f8;
        plVar27[8] = lStack_4f0;
        auVar76 = ZEXT1664(auVar78);
        auVar79 = ZEXT1664(auVar77);
        auVar84 = ZEXT1664(auVar80);
        auVar85 = ZEXT1664(auVar64);
        cStack_474 = local_4e8._4_1_;
        pqw::int_chunk_fast(local_508,param_10,local_598,plVar28,(ulong)local_578 & 0xffffffff,
                            local_580 & 0xffffffff,0);
        auVar64 = auVar85._0_16_;
        auVar80 = auVar84._0_16_;
        auVar77 = auVar79._0_16_;
        auVar78 = auVar76._0_16_;
        if (local_4e8._4_1_ == '\x02') goto LAB_006a9cd1;
        uStack_418 = (undefined4)local_4e8;
        uStack_413 = (undefined2)(local_4e8 >> 0x28);
        uStack_411 = (undefined1)(local_4e8 >> 0x38);
        local_438 = (long *)local_508._0_8_;
        plStack_430 = (long *)local_508._8_8_;
        uStack_428._0_4_ = local_508._16_4_;
        uStack_428._4_4_ = local_508._20_4_;
        uStack_420 = local_508._24_4_;
        uStack_41c = local_508._28_4_;
        plVar27[0xe] = local_4e8;
        plVar27[10] = local_508._0_8_;
        plVar27[0xb] = local_508._8_8_;
        plVar27[0xc] = (long)plStack_4f8;
        plVar27[0xd] = lStack_4f0;
        param_6 = (long *)((ulong)local_5a0 & 0xffffffff);
        auVar76 = ZEXT1664(auVar78);
        in_ZMM2 = ZEXT1664(auVar77);
        in_ZMM3 = ZEXT1664(auVar80);
        in_ZMM6 = ZEXT1664(auVar64);
        cStack_414 = local_4e8._4_1_;
        pqw::int_chunk_fast(local_508,param_10,local_5b8,plVar28,(ulong)local_548 & 0xffffffff,
                            param_6,1);
        auVar64 = in_ZMM6._0_16_;
        auVar80 = in_ZMM3._0_16_;
        auVar77 = in_ZMM2._0_16_;
        auVar78 = auVar76._0_16_;
        uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
        if (local_4e8._4_1_ == '\x02') goto LAB_006a9cd1;
        local_1f8 = local_4e8;
        local_218 = local_508._0_8_;
        puStack_210 = (uint *)local_508._8_8_;
        plStack_208 = plStack_4f8;
        lStack_200 = lStack_4f0;
        lVar57 = param_10[2];
        plVar28 = (long *)(param_10[3] + lVar57);
        plVar27[0x13] = local_4e8;
        plVar27[0xf] = local_508._0_8_;
        plVar27[0x10] = local_508._8_8_;
        plVar27[0x11] = (long)plStack_4f8;
        plVar27[0x12] = lStack_4f0;
        local_560 = plVar27;
        if (local_628 == (long *)0x0) {
          uVar32 = 0;
          plVar60 = (long *)0x0;
          local_620 = plVar28;
          if (local_5f8 != (long *)0x0) goto LAB_006a9b6b;
LAB_006a9896:
          uVar61 = (undefined1)uVar32;
          lVar57 = param_10[2];
        }
        else {
          auVar84 = ZEXT1664(auVar78);
          in_ZMM2 = ZEXT1664(auVar77);
          in_ZMM3 = ZEXT1664(auVar80);
          in_ZMM6 = ZEXT1664(auVar64);
          lVar33 = __rustc[45371133cddedda4]::__rust_alloc(0x20,1);
          auVar73 = _local_508;
          if (lVar33 == 0) goto LAB_006ac215;
          local_508._8_8_ = lVar33;
          local_508._0_8_ = 0x20;
          lStack_4f0 = auVar73._24_8_;
          plStack_4f8 = (long *)0x0;
          pqw::page_header(local_508,2,4,1,0);
          uVar32 = local_508._8_8_;
          plVar27 = plStack_4f8;
          lVar33 = *param_10;
          if ((ulong)(lVar33 - lVar57) < plStack_4f8) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,plStack_4f8,1,1);
            lVar33 = *param_10;
            lVar57 = param_10[2];
LAB_006a9785:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar57,uVar32,plVar27);
            auVar84._8_56_ = extraout_var_10;
            auVar84._0_8_ = extraout_XMM1_Qa_07;
          }
          else if (plStack_4f8 != (long *)0x0) goto LAB_006a9785;
          lVar57 = lVar57 + (long)plVar27;
          param_10[2] = lVar57;
          if ((ulong)(lVar33 - lVar57) < 4) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,4,1,1);
            lVar57 = param_10[2];
          }
          *(undefined4 *)(param_10[1] + lVar57) = 0;
          param_10[2] = lVar57 + 4;
          if (local_508._0_8_ != 0) {
            uVar32 = local_508._8_8_;
            if (((sys::A_BASE_0 == (long *)0x0) || ((ulong)local_508._8_8_ < sys::A_BASE_0)) ||
               (sys::A_END_0 <= (ulong)local_508._8_8_)) {
              free((void *)local_508._8_8_);
            }
            else {
              uVar29 = local_508._0_8_;
              if ((ulong)local_508._0_8_ < 0x11) {
                uVar29 = 0x10;
              }
              lVar33 = LZCOUNT(uVar29 - 1);
              lVar57 = -lVar33;
              lVar35 = lVar57 + 0x40;
              if (0xffff < uVar29 - 1) {
                cVar22 = sys::big_put(local_508._8_8_,lVar35);
                if (cVar22 != '\0') goto LAB_006a98ac;
              }
              if (lVar33 == 0) goto LAB_006ac442;
              *(long *)uVar32 = in_FS_OFFSET[lVar57 + -0x39];
              in_FS_OFFSET[lVar57 + -0x39] = uVar32;
            }
          }
LAB_006a98ac:
          lVar57 = param_10[3];
          lVar33 = param_10[2];
          lVar35 = __rustc[45371133cddedda4]::__rust_alloc(0xc,1);
          auVar73 = _local_508;
          if (lVar35 == 0) goto LAB_006ac23b;
          local_508._8_8_ = lVar35;
          local_508._0_8_ = 0xc;
          lStack_4f0 = auVar73._24_8_;
          plStack_4f8 = (long *)0x0;
          uVar29 = (long)local_628 * 2;
          if (uVar29 < 0x80) {
            lVar35 = 0xc;
            lVar37 = 0;
          }
          else {
            lVar31 = 0xc;
            lVar37 = 0;
            uVar40 = uVar29;
            do {
              if (lVar37 == lVar31) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(local_508);
                lVar35 = local_508._8_8_;
                lVar31 = local_508._0_8_;
              }
              auVar73 = _local_508;
              *(byte *)(lVar35 + lVar37) = (byte)uVar40 | 0x80;
              lVar37 = lVar37 + 1;
              plStack_4f8 = (long *)lVar37;
              auVar74 = _local_508;
              uVar29 = uVar40 >> 7;
              bVar63 = 0x3fff < uVar40;
              uVar40 = uVar29;
            } while (bVar63);
            local_508._0_8_ = auVar73._0_8_;
            bVar63 = lVar37 == local_508._0_8_;
            lVar35 = local_508._0_8_;
            _local_508 = auVar74;
            if (bVar63) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(local_508);
              lVar35 = local_508._0_8_;
            }
          }
          lVar31 = local_508._8_8_;
          *(char *)(local_508._8_8_ + lVar37) = (char)uVar29;
          plStack_4f8 = (long *)(lVar37 + 1);
          if (lVar37 + 1 == lVar35) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(local_508);
            lVar31 = local_508._8_8_;
          }
          local_538._0_8_ = lVar31;
          *(undefined1 *)(lVar31 + 1 + lVar37) = 0;
          uVar29 = lVar37 + 2;
          plStack_4f8 = (long *)uVar29;
          local_608 = 0;
          pqw::page_header(&local_618,0,lVar37 + 3,local_628,8);
          uVar40 = local_608;
          lVar35 = *param_10;
          lVar37 = param_10[2];
          if ((ulong)(lVar35 - lVar37) < local_608) {
            local_5e8 = local_610;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar37,local_608,1,1);
            lVar37 = param_10[2];
            plVar27 = local_5e8;
LAB_006a9a28:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar37,plVar27);
            auVar84._8_56_ = extraout_var_11;
            auVar84._0_8_ = extraout_XMM1_Qa_08;
            lVar35 = *param_10;
          }
          else {
            plVar27 = local_610;
            if (local_608 != 0) goto LAB_006a9a28;
          }
          lVar37 = lVar37 + uVar40;
          param_10[2] = lVar37;
          if (lVar35 == lVar37) {
            plVar27 = (long *)0x0;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar35,1,1,1);
            lVar37 = param_10[2];
          }
          *(undefined1 *)(param_10[1] + lVar37) = 1;
          lVar37 = lVar37 + 1;
          param_10[2] = lVar37;
          if ((ulong)(*param_10 - lVar37) < uVar29) {
            plVar27 = (long *)0x0;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar37,uVar29,1,1);
            lVar37 = param_10[2];
LAB_006a9a7c:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar37,local_538._0_8_,uVar29);
            auVar84._8_56_ = extraout_var_12;
            auVar84._0_8_ = extraout_XMM1_Qa_09;
          }
          else if (uVar29 != 0) goto LAB_006a9a7c;
          auVar78 = auVar84._0_16_;
          param_10[2] = lVar37 + uVar29;
          if (local_508._0_8_ != 0) {
            plVar27 = sys::A_BASE_0;
            if (((sys::A_BASE_0 == (long *)0x0) || ((ulong)local_538._0_8_ < sys::A_BASE_0)) ||
               (plVar27 = sys::A_END_0, sys::A_END_0 <= (ulong)local_538._0_8_)) {
              free((void *)local_538._0_8_);
              auVar78 = auVar84._0_16_;
            }
            else {
              plVar27 = (long *)0x0;
              uVar29 = local_508._0_8_;
              if ((ulong)local_508._0_8_ < 0x11) {
                uVar29 = 0x10;
              }
              lVar31 = LZCOUNT(uVar29 - 1);
              lVar37 = -lVar31;
              lVar35 = lVar37 + 0x40;
              if (0xffff < uVar29 - 1) {
                cVar22 = sys::big_put(local_538._0_8_,lVar35);
                auVar78 = auVar84._0_16_;
                if (cVar22 != '\0') goto LAB_006a9b46;
              }
              if (lVar31 == 0) {
LAB_006ac442:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (lVar35,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *(long *)local_538._0_8_ = in_FS_OFFSET[lVar37 + -0x39];
              in_FS_OFFSET[lVar37 + -0x39] = local_538._0_8_;
            }
          }
LAB_006a9b46:
          auVar64 = in_ZMM6._0_16_;
          auVar80 = in_ZMM3._0_16_;
          auVar77 = in_ZMM2._0_16_;
          uVar32 = CONCAT71((int7)((ulong)plVar27 >> 8),1);
          uVar29 = local_570;
          plVar60 = plVar28;
          local_620 = (long *)(lVar57 + lVar33);
          if (local_5f8 <= local_628) goto LAB_006a9896;
LAB_006a9b6b:
          local_538._0_8_ = uVar32;
          local_608 = 0;
          uVar40 = (long)local_5a8 * 4;
          auVar76 = ZEXT1664(auVar78);
          in_ZMM2 = ZEXT1664(auVar77);
          in_ZMM3 = ZEXT1664(auVar80);
          in_ZMM6 = ZEXT1664(auVar64);
          local_5e8 = plVar60;
          local_5d0 = plVar28;
          pqw::page_header(&local_618,0,uVar40,local_5a8,0);
          uVar44 = local_608;
          plVar27 = local_610;
          auVar78 = auVar76._0_16_;
          lVar33 = *param_10;
          lVar57 = param_10[2];
          if ((ulong)(lVar33 - lVar57) < local_608) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,local_608,1,1);
            lVar57 = param_10[2];
LAB_006a9be6:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar57,plVar27,uVar44);
            auVar85._8_56_ = extraout_var_13;
            auVar85._0_8_ = extraout_XMM1_Qa_10;
            auVar78 = auVar85._0_16_;
            lVar33 = *param_10;
          }
          else if (local_608 != 0) goto LAB_006a9be6;
          lVar57 = lVar57 + uVar44;
          param_10[2] = lVar57;
          if ((ulong)(lVar33 - lVar57) < uVar40) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,uVar40,1,1);
            lVar57 = param_10[2];
LAB_006a9c24:
            plVar28 = local_5d0;
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar57,local_4b8 + (long)local_628,uVar40);
            auVar87._8_56_ = extraout_var_14;
            auVar87._0_8_ = extraout_XMM1_Qa_11;
            auVar78 = auVar87._0_16_;
          }
          else {
            plVar28 = local_5d0;
            if (uVar40 != 0) goto LAB_006a9c24;
          }
          lVar57 = lVar57 + uVar40;
          param_10[2] = lVar57;
          plVar60 = local_5e8;
          uVar61 = local_538[0];
        }
        plVar27 = local_560;
        plVar59 = local_5a8;
        auVar64 = in_ZMM6._0_16_;
        auVar80 = in_ZMM3._0_16_;
        auVar77 = in_ZMM2._0_16_;
        uVar40 = lVar57 + param_10[3];
        local_560[0x14] = uVar40 - (long)plVar28;
        local_560[0x15] = (long)local_620;
        local_560[0x16] = (long)plVar60;
        local_560[0x17] = (long)local_5f8;
        *(int *)(local_560 + 0x18) = 1;
        *(undefined1 *)((long)local_560 + 0xc4) = uVar61;
        uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
        if (local_5a8 < local_5c8) goto LAB_006a9cd1;
        if (local_5c8 != (long *)0x0) {
          uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
          if (local_5d9 != '\0') goto LAB_006a9cd1;
          local_608 = 0;
          local_5b0 = uVar40;
          if (param_7 <= uVar29) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar29,param_7,&PTR_s_src_pqw_rs_00211d98);
          }
          in_ZMM3 = ZEXT1664(auVar80);
          in_ZMM6 = ZEXT1664(auVar64);
          pqw::page_header(&local_618,2,
                           (ulong)(uint)(*(int *)((long)local_388 + uVar29 * 4) - (int)*local_388) +
                           local_368,uVar29,0);
          uVar29 = local_608;
          plVar27 = local_610;
          lVar57 = param_10[2];
          if ((ulong)(*param_10 - lVar57) < local_608) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,local_608,1,1);
            lVar57 = param_10[2];
LAB_006ab213:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar57,plVar27,uVar29);
          }
          else if (local_608 != 0) goto LAB_006ab213;
          param_10[2] = lVar57 + uVar29;
          pqw::put_strs_fast(param_10,&local_260);
          local_470 = param_10[3] + param_10[2];
          if (local_628 != (long *)0x0) {
            pqw::null_page(param_10,local_628);
          }
          puVar39 = (undefined1 *)((long)plVar59 + 7);
          lVar57 = 1;
          lVar33 = 1;
          if ((undefined1 *)0x1ff < puVar39) {
            uVar29 = ((ulong)puVar39 >> 3) * 2 + 1;
            do {
              lVar33 = lVar33 + 1;
              bVar63 = 0x3fff < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar63);
          }
          local_5d0 = (long *)((long)local_5c8 + 7);
          uVar29 = (ulong)local_5d0 >> 2 | 1;
          if ((long *)0x1ff < local_5d0) {
            lVar57 = 1;
            uVar40 = uVar29;
            do {
              lVar57 = lVar57 + 1;
              bVar63 = 0x3fff < uVar40;
              uVar40 = uVar40 >> 7;
            } while (bVar63);
          }
          lVar33 = lVar33 + ((ulong)puVar39 >> 3);
          local_5e8 = (long *)(((ulong)local_5d0 >> 3) * local_3d0);
          local_510 = lVar57 + (long)local_5e8 + lVar33 + 5;
          local_608 = 0;
          pqw::page_header(&local_618,0,local_510,local_5a8,8);
          uVar40 = local_608;
          plVar27 = local_610;
          lVar57 = *param_10;
          lVar35 = param_10[2];
          if ((ulong)(lVar57 - lVar35) < local_608) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar35,local_608,1,1);
            lVar35 = param_10[2];
LAB_006ab35e:
            (*(code *)PTR_memcpy_00841de0)(param_10[1] + lVar35,plVar27,uVar40);
            lVar57 = *param_10;
          }
          else if (local_608 != 0) goto LAB_006ab35e;
          uVar40 = lVar35 + uVar40;
          param_10[2] = uVar40;
          if (lVar57 - uVar40 < local_510 + 0x60U) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,uVar40,local_510 + 0x60U,1,1);
            uVar40 = param_10[2];
          }
          lVar57 = param_10[1];
          uVar44 = (ulong)puVar39 >> 2 | 1;
          local_538._0_8_ = lVar33;
          *(int *)(lVar57 + uVar40) = (int)lVar33;
          local_608 = 0;
          if ((undefined1 *)0x1ff < puVar39) {
            uVar34 = uVar44;
            do {
              uVar44 = local_608;
              if (local_608 == local_618) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
              }
              *(byte *)((long)local_610 + uVar44) = (byte)uVar34 | 0x80;
              local_608 = uVar44 + 1;
              uVar44 = uVar34 >> 7;
              bVar63 = 0x3fff < uVar34;
              uVar34 = uVar44;
            } while (bVar63);
          }
          uVar34 = local_608;
          if (local_608 == local_618) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
          }
          lVar57 = lVar57 + uVar40;
          *(char *)((long)local_610 + uVar34) = (char)uVar44;
          local_608 = uVar34 + 1;
          lVar33 = lVar57 + 4;
          local_558 = uVar40;
          (*(code *)PTR_memcpy_00841de0)(lVar33,local_610,local_608);
          plVar27 = local_5e8;
          local_548 = (long *)(lVar33 + local_608);
          local_608 = 0;
          lVar33 = local_5d8;
          if (&DAT_00000200 <= local_5d0) {
            uVar40 = uVar29;
            do {
              uVar29 = local_608;
              if (local_608 == local_618) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
                lVar33 = local_5d8;
              }
              *(byte *)((long)local_610 + uVar29) = (byte)uVar40 | 0x80;
              local_608 = uVar29 + 1;
              uVar29 = uVar40 >> 7;
              bVar63 = 0x3fff < uVar40;
              uVar40 = uVar29;
            } while (bVar63);
          }
          uVar40 = local_608;
          if (local_608 == local_618) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_618);
            lVar33 = local_5d8;
          }
          local_550 = (long)local_628 + lVar33;
          puVar39 = (undefined1 *)(lVar57 + local_538._0_8_ + 4);
          *(char *)((long)local_610 + uVar40) = (char)uVar29;
          local_608 = uVar40 + 1;
          *puVar39 = (char)local_3d0;
          puVar39 = puVar39 + 1;
          (*(code *)PTR_memcpy_00841de0)(puVar39,local_610,local_608);
          puVar58 = (ulong *)(puVar39 + local_608);
          uVar24 = 0;
          auVar88._0_8_ = (*(code *)PTR_memset_00841dd0)(puVar58,0,(long)plVar27 + 8);
          plVar27 = local_560;
          auVar88._8_56_ = extraout_var_00;
          _local_508 = vpcmpeqd_avx2(auVar88._0_32_,auVar88._0_32_);
          auVar76 = ZEXT3264(_local_508);
          auVar79 = ZEXT1664((undefined1  [16])0x0);
          uVar29 = 0;
          local_5a0 = (long *)0x0;
          plVar28 = local_5a8;
          plVar60 = (long *)0x0;
          do {
            auVar73 = auVar76._0_32_;
            local_5e8 = plVar60 + 4;
            pauVar46 = (undefined1 (*) [32])(local_550 + (long)plVar60);
            local_538 = auVar79._0_32_;
            local_580 = uVar29;
            if (local_5a8 < local_5e8) {
              pauVar46 = (undefined1 (*) [32])local_508;
              in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
              in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
              auVar90._0_8_ = (*(code *)PTR_memcpy_00841de0)(pauVar46);
              auVar90._8_56_ = extraout_var_01;
              auVar73 = auVar90._0_32_;
            }
            auVar74 = *pauVar46;
            auVar81 = auVar74._0_30_;
            auVar73 = vpcmpeqd_avx2(auVar73,auVar73);
            uVar40 = vpcmpeqb_avx512vl(auVar74,auVar73);
            uVar56 = ~(uint)uVar40;
            uVar29 = (ulong)uVar56;
            local_5d0 = plVar28;
            local_578 = pauVar46;
            if (local_5a8 < plVar60 + 4) {
              local_4c0 = CONCAT44(local_4c0._4_4_,(uint)uVar40);
              in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
              in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
              local_3ac = uVar56;
              local_338 = auVar74;
              (*(code *)PTR_memcpy_00841de0)
                        ((undefined1 *)(((ulong)plVar60 >> 3) + (long)local_548),&local_3ac,
                         (ulong)((long)plVar28 + 7) >> 3);
              uVar40 = local_4c0 & 0xffffffff;
              auVar81 = local_338._0_30_;
            }
            else {
              *(uint *)((long)local_548 + ((ulong)plVar60 >> 3)) = uVar56;
            }
            auVar64 = in_ZMM6._0_16_;
            auVar80 = in_ZMM3._0_16_;
            auVar65 = auVar91._0_16_;
            local_5a0 = (long *)((long)local_5a0 + (ulong)(uint)POPCOUNT(uVar56));
            uVar44 = 1;
            uVar34 = 0;
            do {
              if ((uVar44 & 0x101010101010101) != 0) {
                uVar34 = uVar34 | (uVar44 & 0x101010101010101) * (uVar29 & 1);
                uVar29 = uVar29 >> 1;
              }
              uVar44 = uVar44 << 1;
            } while (uVar44 != 0);
            uVar29 = 0x8000000000000000;
            uVar44 = 0;
            do {
              uVar36 = uVar34 * 0xff & local_360 & uVar29;
              if (uVar36 != 0) {
                uVar44 = uVar44 << 1 | (ulong)((uVar36 & *(ulong *)*local_578) != 0);
              }
              uVar29 = uVar29 >> 1;
            } while (uVar29 != 0);
            uVar29 = uVar44 << uVar24 | local_580;
            iVar42 = (int)local_3d0;
            uVar24 = POPCOUNT(uVar56 & 0xff) * iVar42 + uVar24;
            *puVar58 = uVar29;
            uVar44 = (ulong)(uVar24 >> 3);
            uVar25 = uVar24 & 0x38;
            if (uVar24 >> 3 == 0) {
              uVar25 = 0;
            }
            uVar34 = (ulong)(uVar56 >> 8);
            uVar36 = 1;
            uVar38 = 0;
            do {
              if ((uVar36 & 0x101010101010101) != 0) {
                uVar38 = uVar38 | (uVar36 & 0x101010101010101) * (uVar34 & 1);
                uVar34 = uVar34 >> 1;
              }
              uVar36 = uVar36 << 1;
            } while (uVar36 != 0);
            uVar34 = 0x8000000000000000;
            uVar36 = 0;
            do {
              uVar30 = uVar38 * 0xff & local_360 & uVar34;
              if (uVar30 != 0) {
                uVar36 = uVar36 << 1 | (ulong)((uVar30 & *(ulong *)(*local_578 + 8)) != 0);
              }
              uVar34 = uVar34 >> 1;
            } while (uVar34 != 0);
            uVar29 = uVar36 << (uVar24 & 7) | uVar29 >> uVar25;
            uVar25 = POPCOUNT(uVar56 >> 8 & 0xff) * iVar42 + (uVar24 & 7);
            *(ulong *)((long)puVar58 + uVar44) = uVar29;
            uVar48 = uVar25 >> 3;
            uVar24 = uVar25 & 0x38;
            if (uVar48 == 0) {
              uVar24 = 0;
            }
            uVar34 = (ulong)(uVar56 >> 0x10);
            uVar36 = 1;
            uVar38 = 0;
            do {
              if ((uVar36 & 0x101010101010101) != 0) {
                uVar38 = uVar38 | (uVar36 & 0x101010101010101) * (uVar34 & 1);
                uVar34 = uVar34 >> 1;
              }
              uVar36 = uVar36 << 1;
            } while (uVar36 != 0);
            param_6 = (long *)(uVar38 * 0xff & local_360);
            uVar34 = 0x8000000000000000;
            uVar36 = 0;
            do {
              if (((ulong)param_6 & uVar34) != 0) {
                uVar36 = uVar36 << 1 |
                         (ulong)(((ulong)param_6 & uVar34 & *(ulong *)(*local_578 + 0x10)) != 0);
              }
              uVar34 = uVar34 >> 1;
            } while (uVar34 != 0);
            uVar29 = uVar36 << (uVar25 & 7) | uVar29 >> uVar24;
            lVar57 = uVar48 + uVar44;
            uVar43 = POPCOUNT(uVar56 >> 0x10 & 0xff) * iVar42 + (uVar25 & 7);
            *(ulong *)((long)puVar58 + uVar48 + uVar44) = uVar29;
            uVar25 = uVar43 >> 3;
            uVar24 = uVar43 & 0x38;
            if (uVar25 == 0) {
              uVar24 = 0;
            }
            uVar44 = (ulong)(uVar56 >> 0x18);
            uVar34 = 1;
            uVar36 = 0;
            do {
              if ((uVar34 & 0x101010101010101) != 0) {
                uVar36 = uVar36 | (uVar34 & 0x101010101010101) * (uVar44 & 1);
                uVar44 = uVar44 >> 1;
              }
              uVar34 = uVar34 << 1;
            } while (uVar34 != 0);
            uVar44 = 0x8000000000000000;
            uVar34 = 0;
            do {
              uVar38 = uVar36 * 0xff & local_360 & uVar44;
              if (uVar38 != 0) {
                uVar34 = uVar34 << 1 | (ulong)((uVar38 & *(ulong *)(*local_578 + 0x18)) != 0);
              }
              uVar44 = uVar44 >> 1;
            } while (uVar44 != 0);
            uVar29 = uVar34 << (uVar43 & 7) | uVar29 >> uVar24;
            uVar24 = POPCOUNT(uVar56 >> 0x18) * iVar42 + (uVar43 & 7);
            *(ulong *)((long)puVar58 + (ulong)uVar25 + lVar57) = uVar29;
            puVar58 = (ulong *)((long)puVar58 + (ulong)(uVar24 >> 3) + (ulong)uVar25 + lVar57);
            uVar56 = uVar24 & 0x38;
            if (uVar24 >> 3 == 0) {
              uVar56 = 0;
            }
            auVar76 = ZEXT1664((undefined1  [16])0x0);
            auVar74 = vmovdqu8_avx512vl(auVar76._0_32_);
            bVar63 = (bool)((byte)uVar40 & 1);
            auVar77[0] = bVar63 * auVar74[0] | !bVar63 * auVar81[0];
            bVar63 = (bool)((byte)(uVar40 >> 1) & 1);
            auVar77[1] = bVar63 * auVar74[1] | !bVar63 * auVar81[1];
            bVar63 = (bool)((byte)(uVar40 >> 2) & 1);
            auVar77[2] = bVar63 * auVar74[2] | !bVar63 * auVar81[2];
            bVar63 = (bool)((byte)(uVar40 >> 3) & 1);
            auVar77[3] = bVar63 * auVar74[3] | !bVar63 * auVar81[3];
            bVar63 = (bool)((byte)(uVar40 >> 4) & 1);
            auVar77[4] = bVar63 * auVar74[4] | !bVar63 * auVar81[4];
            bVar63 = (bool)((byte)(uVar40 >> 5) & 1);
            auVar77[5] = bVar63 * auVar74[5] | !bVar63 * auVar81[5];
            bVar63 = (bool)((byte)(uVar40 >> 6) & 1);
            auVar77[6] = bVar63 * auVar74[6] | !bVar63 * auVar81[6];
            bVar63 = (bool)((byte)(uVar40 >> 7) & 1);
            auVar77[7] = bVar63 * auVar74[7] | !bVar63 * auVar81[7];
            bVar63 = (bool)((byte)(uVar40 >> 8) & 1);
            auVar77[8] = bVar63 * auVar74[8] | !bVar63 * auVar81[8];
            bVar63 = (bool)((byte)(uVar40 >> 9) & 1);
            auVar77[9] = bVar63 * auVar74[9] | !bVar63 * auVar81[9];
            bVar63 = (bool)((byte)(uVar40 >> 10) & 1);
            auVar77[10] = bVar63 * auVar74[10] | !bVar63 * auVar81[10];
            bVar63 = (bool)((byte)(uVar40 >> 0xb) & 1);
            auVar77[0xb] = bVar63 * auVar74[0xb] | !bVar63 * auVar81[0xb];
            bVar63 = (bool)((byte)(uVar40 >> 0xc) & 1);
            auVar77[0xc] = bVar63 * auVar74[0xc] | !bVar63 * auVar81[0xc];
            bVar63 = (bool)((byte)(uVar40 >> 0xd) & 1);
            auVar77[0xd] = bVar63 * auVar74[0xd] | !bVar63 * auVar81[0xd];
            bVar63 = (bool)((byte)(uVar40 >> 0xe) & 1);
            auVar77[0xe] = bVar63 * auVar74[0xe] | !bVar63 * auVar81[0xe];
            bVar63 = (bool)((byte)(uVar40 >> 0xf) & 1);
            auVar77[0xf] = bVar63 * auVar74[0xf] | !bVar63 * auVar81[0xf];
            bVar63 = (bool)((byte)(uVar40 >> 0x10) & 1);
            auVar73[0x10] = bVar63 * auVar74[0x10] | !bVar63 * auVar81[0x10];
            auVar73._0_16_ = auVar77;
            bVar63 = (bool)((byte)(uVar40 >> 0x11) & 1);
            auVar73[0x11] = bVar63 * auVar74[0x11] | !bVar63 * auVar81[0x11];
            bVar63 = (bool)((byte)(uVar40 >> 0x12) & 1);
            auVar73[0x12] = bVar63 * auVar74[0x12] | !bVar63 * auVar81[0x12];
            bVar63 = (bool)((byte)(uVar40 >> 0x13) & 1);
            auVar73[0x13] = bVar63 * auVar74[0x13] | !bVar63 * auVar81[0x13];
            bVar63 = (bool)((byte)(uVar40 >> 0x14) & 1);
            auVar73[0x14] = bVar63 * auVar74[0x14] | !bVar63 * auVar81[0x14];
            bVar63 = (bool)((byte)(uVar40 >> 0x15) & 1);
            auVar73[0x15] = bVar63 * auVar74[0x15] | !bVar63 * auVar81[0x15];
            bVar63 = (bool)((byte)(uVar40 >> 0x16) & 1);
            auVar73[0x16] = bVar63 * auVar74[0x16] | !bVar63 * auVar81[0x16];
            bVar63 = (bool)((byte)(uVar40 >> 0x17) & 1);
            auVar73[0x17] = bVar63 * auVar74[0x17] | !bVar63 * auVar81[0x17];
            bVar63 = (bool)((byte)(uVar40 >> 0x18) & 1);
            auVar73[0x18] = bVar63 * auVar74[0x18] | !bVar63 * auVar81[0x18];
            bVar63 = (bool)((byte)(uVar40 >> 0x19) & 1);
            auVar73[0x19] = bVar63 * auVar74[0x19] | !bVar63 * auVar81[0x19];
            bVar63 = (bool)((byte)(uVar40 >> 0x1a) & 1);
            auVar73[0x1a] = bVar63 * auVar74[0x1a] | !bVar63 * auVar81[0x1a];
            bVar63 = (bool)((byte)(uVar40 >> 0x1b) & 1);
            auVar73[0x1b] = bVar63 * auVar74[0x1b] | !bVar63 * auVar81[0x1b];
            bVar63 = (bool)((byte)(uVar40 >> 0x1c) & 1);
            auVar73[0x1c] = bVar63 * auVar74[0x1c] | !bVar63 * auVar81[0x1c];
            bVar63 = (bool)((byte)(uVar40 >> 0x1d) & 1);
            auVar73._30_2_ = auVar74._30_2_;
            auVar73[0x1d] = bVar63 * auVar74[0x1d] | !bVar63 * auVar81[0x1d];
            in_ZMM2 = ZEXT3264(auVar73);
            auVar73 = vpmaxub_avx2(local_538,auVar73);
            auVar79 = ZEXT3264(auVar73);
            auVar78 = auVar73._0_16_;
            uVar29 = uVar29 >> uVar56;
            uVar24 = uVar24 & 7;
            plVar28 = local_5d0 + -4;
            plVar60 = local_5e8;
          } while (local_5e8 < local_5a8);
          if (uVar24 != 0) {
            *puVar58 = uVar29;
          }
          uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
          if (local_5a0 == local_5c8) {
            auVar78 = vpmaxub_avx(auVar78,auVar73._16_16_);
            auVar66 = vpternlogq_avx512vl(auVar78,auVar78,auVar78,0xf);
            auVar78 = vpsrlw_avx(auVar66,8);
            auVar66 = vpminub_avx(auVar66,auVar78);
            auVar66 = vphminposuw_avx(auVar66);
            uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
            if ((byte)~auVar66[0] < local_570) {
              param_10[2] = local_558 + local_510;
              uVar61 = 1;
              uVar29 = local_5b0;
              uVar40 = local_5b0;
              uVar44 = local_470;
              goto LAB_006aba9b;
            }
          }
          goto LAB_006a9cd1;
        }
        if (local_628 != (long *)0x0) {
          in_ZMM2 = ZEXT1664(auVar77);
          in_ZMM3 = ZEXT1664(auVar80);
          in_ZMM6 = ZEXT1664(auVar64);
          pqw::null_page(param_10,local_628);
        }
        auVar65 = auVar91._0_16_;
        uVar44 = uVar40;
        if (local_5f8 == local_628) {
          uVar29 = 0;
          uVar61 = 0;
        }
        else {
          in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
          in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
          in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
          pqw::null_page(param_10,plVar59);
          auVar65 = auVar91._0_16_;
          uVar29 = 0;
          uVar61 = 0;
        }
LAB_006aba9b:
        plVar28 = local_610;
        plVar27[0x19] = (param_10[2] - uVar40) + param_10[3];
        plVar27[0x1a] = uVar44;
        plVar27[0x1b] = uVar29;
        plVar27[0x1c] = (long)local_5f8;
        *(int *)(plVar27 + 0x1d) = 6;
        *(undefined1 *)((long)plVar27 + 0xec) = uVar61;
        auVar64 = vpternlogd_avx512vl(auVar65,auVar65,auVar65,0xff);
        auVar91 = ZEXT1664(auVar64);
        if (local_618 != 0) {
          if (((sys::A_BASE_0 == (long *)0x0) || (local_610 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= local_610)) {
            in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
            in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
            in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
            free(local_610);
            auVar64 = auVar91._0_16_;
            auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
            auVar91 = ZEXT1664(auVar64);
          }
          else {
            uVar29 = local_618;
            if (local_618 < 0x11) {
              uVar29 = 0x10;
            }
            lVar35 = LZCOUNT(uVar29 - 1);
            lVar57 = -lVar35;
            lVar33 = lVar57 + 0x40;
            if (0xffff < uVar29 - 1) {
              in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
              in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
              in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
              cVar22 = sys::big_put(local_610,lVar33);
              auVar64 = auVar91._0_16_;
              auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
              auVar91 = ZEXT1664(auVar64);
              if (cVar22 != '\0') goto LAB_006abb96;
            }
            if (lVar35 == 0) goto LAB_006ac3d5;
            *plVar28 = in_FS_OFFSET[lVar57 + -0x39];
            in_FS_OFFSET[lVar57 + -0x39] = (long)plVar28;
          }
        }
LAB_006abb96:
        lVar57 = param_10[8];
        if (lVar57 == param_10[6]) {
          in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
          in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
          in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                    (param_10 + 6);
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
        }
        local_628 = local_390;
        lVar33 = param_10[7];
        lVar35 = lVar57 * 0x20;
        *(long **)(lVar33 + lVar35) = local_5f8;
        *(undefined8 *)(lVar33 + 8 + lVar35) = 6;
        *(long **)(lVar33 + 0x10 + lVar35) = plVar27;
        *(undefined8 *)(lVar33 + 0x18 + lVar35) = 6;
        param_10[8] = lVar57 + 1;
        param_10[9] = param_10[9] + (long)local_5f8;
        uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
        if ((int)param_10[5] == -1) goto LAB_006aafd5;
        uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
        if ((param_10[2] == 0) ||
           (uStack_428 = (long *)CONCAT44(uStack_428._4_4_,(undefined4)uStack_428),
           (ulong)param_10[2] < (ulong)param_10[4])) goto LAB_006aafd5;
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        plVar27 = (long *)<std[c60ef17cbf7de79f]::fs::File_as_core[62e902411887be45]::io::write::Write>
                          ::write_all((int)param_10[5],param_10[1]);
        if (plVar27 == (long *)0x0) {
          param_10[3] = param_10[3] + param_10[2];
          param_10[2] = 0;
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
          goto LAB_006aafd5;
        }
LAB_006ac389:
        core[62e902411887be45]::ptr::drop_glue::
        <core[62e902411887be45]::result::Result<(),core[62e902411887be45]::io::error::Error>>
                  (plVar27);
        goto LAB_006ac391;
      }
LAB_006a9e12:
      puVar41 = local_600;
      lStack_200 = local_2e0;
      local_1f8 = uStack_2d8;
      local_1f0 = lStack_2d0;
      local_1e8 = lStack_2c8;
      local_70 = local_260;
      uStack_68 = uStack_258;
      uStack_60 = uStack_250;
      uStack_58 = uStack_248;
      local_218 = 3;
      puStack_210 = local_600;
      plStack_208 = local_5f8;
      local_1e0 = 0;
      local_1d8 = "user_id";
      local_1d0 = 7;
      local_1c8[0] = 6;
      local_1c0 = local_5f0;
      local_1b8 = local_5f8;
      local_1b0 = 1;
      local_188 = "day";
      local_180 = 3;
      local_178[0] = 4;
      local_170 = local_598;
      local_168 = local_5f8;
      local_160 = 1;
      local_138 = &DAT_00201e18;
      local_130 = 8;
      local_128[0] = 4;
      local_120 = local_5b8;
      local_118 = local_5f8;
      local_110 = 3;
      local_e8 = "events";
      local_e0 = 6;
      local_d8 = 4;
      local_d0 = local_4b8;
      local_c8 = local_5f8;
      local_c0 = 0;
      local_98 = "revenue_cents";
      local_90 = 0xd;
      local_88 = 0;
      local_78 = local_5f8;
      local_50 = 1;
      local_48 = "top_category";
      local_40 = 0xc;
      auVar76 = ZEXT1664(auVar78);
      auVar79 = ZEXT1664(auVar77);
      auVar84 = ZEXT1664(auVar80);
      auVar85 = ZEXT1664(auVar64);
      local_80 = local_5d8;
      plVar28 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0xf0);
      auVar80 = auVar85._0_16_;
      auVar78 = auVar84._0_16_;
      auVar64 = auVar79._0_16_;
      auVar75._8_56_ = extraout_var;
      auVar75._0_8_ = extraout_XMM0_Qa;
      if (plVar28 == (long *)0x0) {
LAB_006ac22c:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0xf0);
      }
      local_4b0 = (uint *)&DAT_00000006;
      local_4a0 = (uint *)0x0;
      uVar29 = ((long)param_2 * 4 + (long)local_540 * -4) - 4;
      if (uVar29 < 0x1c) {
        uVar44 = 0xffffffff;
        uVar24 = 0;
        puVar55 = puVar41;
LAB_006aa225:
        do {
          uVar56 = *puVar55;
          puVar55 = puVar55 + 1;
          if (uVar56 <= (uint)uVar44) {
            uVar44 = (ulong)uVar56;
          }
          if (uVar56 < uVar24) {
            uVar56 = uVar24;
          }
          uVar24 = uVar56;
        } while (puVar55 != puVar41 + (long)local_5f8);
      }
      else {
        uVar40 = (uVar29 >> 2) + 1;
        if (uVar29 < 0x7c) {
          uVar29 = 0;
LAB_006aa193:
          uVar34 = uVar40 & 0x7ffffffffffffff8;
          puVar55 = puVar41 + uVar34;
          auVar73 = vpbroadcastd_avx512vl();
          auVar74 = vpbroadcastd_avx512vl();
          do {
            auVar74 = vpminud_avx2(auVar74,*(undefined1 (*) [32])(puVar41 + uVar29));
            auVar73 = vpmaxud_avx2(auVar73,*(undefined1 (*) [32])(puVar41 + uVar29));
            uVar29 = uVar29 + 8;
          } while (uVar34 != uVar29);
          auVar64 = vpmaxud_avx(auVar73._0_16_,auVar73._16_16_);
          auVar65 = vpshufd_avx(auVar64,0xee);
          auVar65 = vpmaxud_avx(auVar64,auVar65);
          auVar64 = vpsrlq_avx(auVar65,0x20);
          auVar65 = vpmaxud_avx(auVar65,auVar64);
          uVar24 = auVar65._0_4_;
          auVar65 = vpminud_avx(auVar74._0_16_,auVar74._16_16_);
          auVar77 = vpshufd_avx(auVar65,0xee);
          auVar65 = vpminud_avx(auVar65,auVar77);
          auVar77 = vpsrlq_avx(auVar65,0x20);
          auVar65 = vpminud_avx(auVar65,auVar77);
          uVar44 = (ulong)auVar65._0_4_;
          if (uVar40 != uVar34) goto LAB_006aa225;
        }
        else {
          uVar29 = uVar40 & 0x7fffffffffffffe0;
          puVar55 = puVar41 + uVar29;
          auVar73 = vpcmpeqd_avx2(auVar75._0_32_,auVar75._0_32_);
          auVar85 = ZEXT1664((undefined1  [16])0x0);
          uVar44 = 0;
          auVar87 = ZEXT1664((undefined1  [16])0x0);
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar90 = ZEXT1664((undefined1  [16])0x0);
          auVar74 = vpcmpeqd_avx2(auVar76._0_32_,auVar76._0_32_);
          auVar82 = vpcmpeqd_avx2(auVar79._0_32_,auVar79._0_32_);
          auVar86 = vpcmpeqd_avx2(auVar84._0_32_,auVar84._0_32_);
          do {
            auVar73 = vpminud_avx2(auVar73,*(undefined1 (*) [32])(puVar41 + uVar44));
            auVar74 = vpminud_avx2(auVar74,*(undefined1 (*) [32])(puVar41 + uVar44 + 8));
            auVar82 = vpminud_avx2(auVar82,*(undefined1 (*) [32])(puVar41 + uVar44 + 0x10));
            auVar64 = auVar82._0_16_;
            auVar86 = vpminud_avx2(auVar86,*(undefined1 (*) [32])(puVar41 + uVar44 + 0x18));
            auVar78 = auVar86._0_16_;
            auVar89 = vpmaxud_avx2(auVar85._0_32_,*(undefined1 (*) [32])(puVar41 + uVar44));
            auVar85 = ZEXT3264(auVar89);
            auVar83 = vpmaxud_avx2(auVar87._0_32_,*(undefined1 (*) [32])(puVar41 + uVar44 + 8));
            auVar87 = ZEXT3264(auVar83);
            auVar67 = vpmaxud_avx2(auVar88._0_32_,*(undefined1 (*) [32])(puVar41 + uVar44 + 0x10));
            auVar88 = ZEXT3264(auVar67);
            auVar80 = auVar67._0_16_;
            auVar68 = vpmaxud_avx2(auVar90._0_32_,*(undefined1 (*) [32])(puVar41 + uVar44 + 0x18));
            auVar90 = ZEXT3264(auVar68);
            uVar44 = uVar44 + 0x20;
          } while (uVar29 != uVar44);
          auVar89 = vpmaxud_avx2(auVar89,auVar83);
          auVar83 = vpmaxud_avx2(auVar67,auVar68);
          auVar89 = vpmaxud_avx2(auVar89,auVar83);
          auVar65 = vpmaxud_avx(auVar89._0_16_,auVar89._16_16_);
          auVar77 = vpshufd_avx(auVar65,0xee);
          auVar65 = vpmaxud_avx(auVar65,auVar77);
          auVar77 = vpsrlq_avx(auVar65,0x20);
          auVar65 = vpmaxud_avx(auVar65,auVar77);
          uVar24 = auVar65._0_4_;
          auVar73 = vpminud_avx2(auVar73,auVar74);
          auVar74 = vpminud_avx2(auVar82,auVar86);
          auVar73 = vpminud_avx2(auVar73,auVar74);
          auVar65 = vpminud_avx(auVar73._0_16_,auVar73._16_16_);
          auVar77 = vpshufd_avx(auVar65,0xee);
          auVar65 = vpminud_avx(auVar65,auVar77);
          auVar77 = vpsrlq_avx(auVar65,0x20);
          auVar65 = vpminud_avx(auVar65,auVar77);
          uVar44 = (ulong)auVar65._0_4_;
          if (uVar40 != uVar29) {
            if ((uVar40 & 0x18) == 0) goto LAB_006aa225;
            goto LAB_006aa193;
          }
        }
      }
      uVar29 = (ulong)uVar24 + 2;
      plStack_4a8 = plVar28;
      if ((uVar29 < uVar44) || (local_1f8 < uVar29)) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail();
      }
      local_4e0 = local_1f0;
      local_4d8 = local_1e8;
      local_508._4_4_ = (int)uVar44;
      local_508._0_4_ = 3;
      local_508._8_8_ = puVar41;
      plStack_4f8 = local_5f8;
      lStack_4f0 = lStack_200 + uVar44 * 4;
      local_4d0 = 0;
      in_ZMM2 = ZEXT1664(auVar64);
      in_ZMM3 = ZEXT1664(auVar78);
      in_ZMM6 = ZEXT1664(auVar80);
      param_6 = local_628;
      local_4e8 = uVar29 - uVar44;
      pqw::emit_user_ids(&local_438,param_10,local_508,local_628,local_568);
      plVar27 = local_438;
      if (cStack_414 == '\x02') {
LAB_006ac310:
        if (local_4b0 != (uint *)0x0) {
          if (((sys::A_BASE_0 == (long *)0x0) || (plVar28 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= plVar28)) {
            free(plVar28);
          }
          else {
            uVar29 = (long)local_4b0 * 0x28 - 1;
            lVar33 = LZCOUNT(uVar29);
            lVar57 = -lVar33;
            lVar35 = lVar57 + 0x40;
            if (0xffff < uVar29) {
              cVar22 = sys::big_put(plVar28,lVar35);
              if (cVar22 != '\0') goto LAB_006ac389;
            }
            if (lVar33 == 0) {
LAB_006ac36f:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar35,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *plVar28 = in_FS_OFFSET[lVar57 + -0x39];
            in_FS_OFFSET[lVar57 + -0x39] = (long)plVar28;
          }
        }
        goto LAB_006ac389;
      }
      uStack_224 = CONCAT44(uStack_418,uStack_41c);
      uStack_228 = uStack_420;
      plStack_238 = plStack_430;
      local_58c = uStack_413;
      *plVar28 = (long)local_438;
      plVar28[1] = (long)plStack_430;
      plVar28[2] = (long)uStack_428;
      *(ulong *)((long)plVar28 + 0x14) = CONCAT44(uStack_420,uStack_428._4_4_);
      *(undefined8 *)((long)plVar28 + 0x1c) = uStack_224;
      local_58a = uStack_411;
      *(char *)((long)plVar28 + 0x24) = cStack_414;
      *(undefined2 *)((long)plVar28 + 0x25) = uStack_413;
      *(undefined1 *)((long)plVar28 + 0x27) = uStack_411;
      uStack_230 = (ulong)uStack_428;
      pqw::plan(&local_438,local_1c8);
      pqw::emit_chunk(&local_498,param_10,local_1c8,&local_438);
      if (cStack_474 == '\x02') {
LAB_006ac1fb:
        plVar27 = local_498;
        core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::Plan>(&local_438);
        goto LAB_006ac310;
      }
      local_3f8 = plStack_490;
      uStack_3f0._0_4_ = uStack_488;
      uStack_3f0._4_4_ = uStack_484;
      local_3e8 = uStack_480;
      uStack_3e4 = uStack_47c;
      local_3e0 = uStack_478;
      local_618._0_3_ = CONCAT12(uStack_471,uStack_473);
      plVar28[5] = (long)local_498;
      plVar28[6] = (long)plStack_490;
      plVar28[7] = CONCAT44(uStack_484,uStack_488);
      *(ulong *)((long)plVar28 + 0x3c) = CONCAT44(uStack_480,uStack_484);
      *(ulong *)((long)plVar28 + 0x44) = CONCAT44(uStack_478,uStack_47c);
      *(char *)((long)plVar28 + 0x4c) = cStack_474;
      *(undefined2 *)((long)plVar28 + 0x4d) = uStack_473;
      *(undefined1 *)((long)plVar28 + 0x4f) = uStack_471;
      local_4a0 = (uint *)&_nl_current_LC_CTYPE_used;
      core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::Plan>(&local_438);
      pqw::plan(&local_438,local_178);
      pqw::emit_chunk(&local_498,param_10,local_178,&local_438);
      if (cStack_474 == '\x02') goto LAB_006ac1fb;
      local_3f8 = plStack_490;
      uStack_3f0._0_4_ = uStack_488;
      uStack_3f0._4_4_ = uStack_484;
      local_3e8 = uStack_480;
      uStack_3e4 = uStack_47c;
      local_3e0 = uStack_478;
      plVar28[10] = (long)local_498;
      plVar28[0xb] = (long)plStack_490;
      plVar28[0xc] = CONCAT44(uStack_484,uStack_488);
      *(ulong *)((long)plVar28 + 100) = CONCAT44(uStack_480,uStack_484);
      *(ulong *)((long)plVar28 + 0x6c) = CONCAT44(uStack_478,uStack_47c);
      local_618._0_3_ = CONCAT12(uStack_471,uStack_473);
      *(char *)((long)plVar28 + 0x74) = cStack_474;
      *(undefined2 *)((long)plVar28 + 0x75) = uStack_473;
      *(undefined1 *)((long)plVar28 + 0x77) = uStack_471;
      core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::Plan>(&local_438);
      pqw::plan(&local_438,local_128);
      pqw::emit_chunk(&local_498,param_10,local_128,&local_438);
      if (cStack_474 == '\x02') goto LAB_006ac1fb;
      local_3f8 = plStack_490;
      uStack_3f0._0_4_ = uStack_488;
      uStack_3f0._4_4_ = uStack_484;
      local_3e8 = uStack_480;
      uStack_3e4 = uStack_47c;
      local_3e0 = uStack_478;
      local_618._0_3_ = CONCAT12(uStack_471,uStack_473);
      plVar28[0xf] = (long)local_498;
      plVar28[0x10] = (long)plStack_490;
      plVar28[0x11] = CONCAT44(uStack_484,uStack_488);
      *(ulong *)((long)plVar28 + 0x8c) = CONCAT44(uStack_480,uStack_484);
      *(ulong *)((long)plVar28 + 0x94) = CONCAT44(uStack_478,uStack_47c);
      *(char *)((long)plVar28 + 0x9c) = cStack_474;
      *(undefined2 *)((long)plVar28 + 0x9d) = uStack_473;
      *(undefined1 *)((long)plVar28 + 0x9f) = uStack_471;
      local_4a0 = (uint *)&DAT_00000004;
      core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::pqw::Plan>(&local_438);
      lVar57 = param_10[2];
      puVar41 = (uint *)(lVar57 + param_10[3]);
      plVar27 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x20);
      if (plVar27 == (long *)0x0) {
LAB_006ac215:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x20);
      }
      local_498 = (long *)&DAT_00000020;
      uStack_488 = 0;
      uStack_484 = 0;
      plStack_490 = plVar27;
      if (local_628 == (long *)0x0) {
        local_5f0 = (uint *)0x0;
        puVar55 = (uint *)0x0;
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
        plVar27 = local_5f8;
        puVar54 = puVar41;
        if (local_5f8 != (long *)0x0) goto LAB_006aaa6b;
      }
      else {
        plVar27 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x20,1);
        if (plVar27 == (long *)0x0) goto LAB_006ac215;
        local_438 = (long *)&DAT_00000020;
        uStack_428._0_4_ = 0;
        uStack_428._4_4_ = 0;
        plStack_430 = plVar27;
        pqw::page_header(&local_438,2,4,1,0);
        plVar27 = plStack_430;
        uVar29 = CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
        lVar33 = *param_10;
        if ((ulong)(lVar33 - lVar57) < uVar29) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,uVar29,1,1);
          lVar33 = *param_10;
          lVar57 = param_10[2];
LAB_006aa685:
          (*(code *)PTR_memcpy_00841de0)(lVar57 + param_10[1],plVar27,uVar29);
        }
        else if (uVar29 != 0) goto LAB_006aa685;
        lVar57 = lVar57 + uVar29;
        param_10[2] = lVar57;
        if ((ulong)(lVar33 - lVar57) < 4) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,4,1,1);
          lVar57 = param_10[2];
        }
        plVar27 = plStack_430;
        local_5f0 = (uint *)param_10[1];
        *(undefined4 *)((long)local_5f0 + lVar57) = 0;
        lVar33 = lVar57 + 4;
        param_10[2] = lVar33;
        if (local_438 != (long *)0x0) {
          if (((sys::A_BASE_0 == (long *)0x0) || (plStack_430 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= plStack_430)) {
            free(plStack_430);
          }
          else {
            plVar28 = local_438;
            if (local_438 < &DAT_00000011) {
              plVar28 = (long *)&DAT_00000010;
            }
            lVar35 = LZCOUNT((long)plVar28 - 1U);
            lVar57 = -lVar35;
            if (0xffff < (long)plVar28 - 1U) {
              cVar22 = sys::big_put(plStack_430,lVar57 + 0x40);
              if (cVar22 != '\0') goto LAB_006aa7a5;
            }
            if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *plVar27 = in_FS_OFFSET[lVar57 + -0x39];
            in_FS_OFFSET[lVar57 + -0x39] = (long)plVar27;
          }
        }
LAB_006aa7a5:
        local_600 = (uint *)param_10[3];
        plVar27 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0xc,1);
        if (plVar27 == (long *)0x0) {
LAB_006ac23b:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0xc);
        }
        local_438 = (long *)&DAT_0000000c;
        uVar29 = (long)local_628 * 2;
        plStack_430 = plVar27;
        if (uVar29 < 0x80) {
          plVar28 = (long *)0x0;
        }
        else {
          plVar60 = (long *)&DAT_0000000c;
          plVar28 = (long *)0x0;
          uVar40 = uVar29;
          do {
            if (plVar28 == plVar60) {
              uStack_428 = plVar28;
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_438);
              plVar27 = plStack_430;
              plVar60 = local_438;
            }
            *(byte *)((long)plVar27 + (long)plVar28) = (byte)uVar40 | 0x80;
            plVar28 = (long *)((long)plVar28 + 1);
            uVar29 = uVar40 >> 7;
            bVar63 = 0x3fff < uVar40;
            uVar40 = uVar29;
          } while (bVar63);
          if (plVar28 == local_438) {
            uStack_428 = plVar28;
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_438);
          }
        }
        *(char *)((long)plStack_430 + (long)plVar28) = (char)uVar29;
        uStack_428 = (long *)((long)plVar28 + 1);
        if (uStack_428 == local_438) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(&local_438);
        }
        *(undefined1 *)((long)plStack_430 + 1 + (long)plVar28) = 0;
        uStack_428 = (long *)((long)plVar28 + 2);
        pqw::page_header(&local_498,0,(long)plVar28 + 3,local_628,8);
        plVar27 = plStack_490;
        uVar29 = CONCAT44(uStack_484,uStack_488);
        lVar35 = *param_10;
        if ((ulong)(lVar35 - lVar33) < uVar29) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar33,uVar29,1,1);
          lVar57 = param_10[2];
          lVar35 = *param_10;
          local_5f0 = (uint *)param_10[1];
LAB_006aa911:
          (*(code *)PTR_memcpy_00841de0)((undefined1 *)((long)local_5f0 + lVar57),plVar27,uVar29);
        }
        else {
          lVar57 = lVar33;
          if (uVar29 != 0) goto LAB_006aa911;
        }
        lVar57 = lVar57 + uVar29;
        param_10[2] = lVar57;
        uVar29 = (ulong)uStack_428;
        if (lVar35 == lVar57) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar35,1,1,1);
          local_5f0 = (uint *)param_10[1];
          lVar57 = param_10[2];
          uVar29 = (ulong)uStack_428;
        }
        plVar27 = plStack_430;
        auVar64 = auVar91._0_16_;
        *(undefined1 *)((long)local_5f0 + lVar57) = 1;
        lVar57 = lVar57 + 1;
        param_10[2] = lVar57;
        uStack_428 = (long *)uVar29;
        if ((ulong)(*param_10 - lVar57) < uVar29) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,uVar29,1,1);
          lVar57 = param_10[2];
LAB_006aa96e:
          (*(code *)PTR_memcpy_00841de0)(lVar57 + param_10[1],plVar27,uVar29);
          auVar64 = auVar91._0_16_;
        }
        else if (uVar29 != 0) goto LAB_006aa96e;
        lVar57 = lVar57 + uVar29;
        param_10[2] = lVar57;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
        lVar35 = 0;
        if (local_438 != (long *)0x0) {
          if (((sys::A_BASE_0 == (long *)0x0) || (plVar27 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= plVar27)) {
            free(plVar27);
            auVar64 = auVar91._0_16_;
            auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
            auVar91 = ZEXT1664(auVar64);
            lVar35 = extraout_RAX;
          }
          else {
            plVar28 = local_438;
            if (local_438 < &DAT_00000011) {
              plVar28 = (long *)&DAT_00000010;
            }
            lVar31 = LZCOUNT((long)plVar28 - 1U);
            lVar37 = -lVar31;
            if (0xffff < (long)plVar28 - 1U) {
              lVar35 = sys::big_put(plVar27);
              auVar64 = auVar91._0_16_;
              auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
              auVar91 = ZEXT1664(auVar64);
              if ((char)lVar35 != '\0') goto LAB_006aaa3f;
            }
            if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            lVar35 = in_FS_OFFSET[lVar37 + -0x39];
            *plVar27 = lVar35;
            in_FS_OFFSET[lVar37 + -0x39] = (long)plVar27;
          }
        }
LAB_006aaa3f:
        local_5f0 = (uint *)CONCAT71((int7)((ulong)lVar35 >> 8),1);
        plVar27 = (long *)((long)local_5f8 - (long)local_628);
        puVar55 = puVar41;
        puVar54 = (uint *)((long)local_600 + lVar33);
        if (local_628 <= local_5f8 && (long *)((long)local_5f8 - (long)local_628) != (long *)0x0) {
LAB_006aaa6b:
          uStack_488 = 0;
          uStack_484 = 0;
          local_600 = puVar54;
          pqw::page_header(&local_498,0,(long)plVar27 * 4,plVar27,0);
          plVar28 = plStack_490;
          uVar29 = CONCAT44(uStack_484,uStack_488);
          if ((ulong)(*param_10 - lVar57) < uVar29) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_10,lVar57,uVar29,1,1);
            lVar57 = param_10[2];
LAB_006aaabe:
            (*(code *)PTR_memcpy_00841de0)(lVar57 + param_10[1],plVar28,uVar29);
          }
          else if (uVar29 != 0) goto LAB_006aaabe;
          param_10[2] = lVar57 + uVar29;
          plVar27 = (long *)<pipeline[509596c7b52975b2]::pqw::Out>::raw
                                      (param_10,local_4b8 + (long)local_628,(long)plVar27 * 4);
          plVar28 = plStack_490;
          if (plVar27 != (long *)0x0) {
            uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
            if (local_498 != (long *)0x0) {
              local_628 = plStack_490;
              uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
              if (((sys::A_BASE_0 == (long *)0x0) ||
                  (uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),
                  plStack_490 < sys::A_BASE_0)) ||
                 (uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),
                 sys::A_END_0 <= plStack_490)) goto LAB_006ac300;
              plVar60 = (long *)&DAT_00000010;
              if (&DAT_00000010 < local_498) {
                plVar60 = local_498;
              }
              lVar33 = LZCOUNT((long)plVar60 - 1U);
              lVar57 = -lVar33;
              lVar35 = lVar57 + 0x40;
              if (0xffff < (long)plVar60 - 1U) {
                cVar22 = sys::big_put(plStack_490,lVar35);
                if (cVar22 != '\0') goto LAB_006ac308;
              }
              if (lVar33 == 0) goto LAB_006ac36f;
              *plVar28 = in_FS_OFFSET[lVar57 + -0x39];
              in_FS_OFFSET[lVar57 + -0x39] = (long)plVar28;
            }
LAB_006ac308:
            plVar28 = plStack_4a8;
            goto LAB_006ac310;
          }
          lVar57 = param_10[2];
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
          puVar54 = local_600;
        }
      }
      plVar27 = plStack_490;
      lVar35 = param_10[3];
      if (local_498 != (long *)0x0) {
        if (((sys::A_BASE_0 == (long *)0x0) || (plStack_490 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= plStack_490)) {
          free(plStack_490);
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
        }
        else {
          plVar28 = local_498;
          if (local_498 < &DAT_00000011) {
            plVar28 = (long *)&DAT_00000010;
          }
          lVar31 = LZCOUNT((long)plVar28 - 1U);
          lVar37 = -lVar31;
          lVar33 = lVar37 + 0x40;
          if (0xffff < (long)plVar28 - 1U) {
            cVar22 = sys::big_put();
            auVar64 = auVar91._0_16_;
            auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
            auVar91 = ZEXT1664(auVar64);
            if (cVar22 != '\0') goto LAB_006aabdc;
          }
          if (lVar31 == 0) {
LAB_006ac3d5:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar33,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *plVar27 = in_FS_OFFSET[lVar37 + -0x39];
          in_FS_OFFSET[lVar37 + -0x39] = (long)plVar27;
        }
      }
LAB_006aabdc:
      puVar21 = local_4a0;
      if (local_4a0 == local_4b0) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::pqw::Meta>>::grow_one
                  (&local_4b0);
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
      }
      plVar28 = plStack_4a8;
      plVar27 = local_5f8;
      plStack_4a8[(long)puVar21 * 5] = lVar57 + (lVar35 - (long)puVar41);
      plStack_4a8[(long)puVar21 * 5 + 1] = (long)puVar54;
      plStack_4a8[(long)puVar21 * 5 + 2] = (long)puVar55;
      plStack_4a8[(long)puVar21 * 5 + 3] = (long)local_5f8;
      *(int *)(plStack_4a8 + (long)puVar21 * 5 + 4) = 1;
      *(char *)((long)plStack_4a8 + (long)puVar21 * 0x28 + 0x24) = (char)local_5f0;
      local_598 = puVar21;
      local_5f0 = (uint *)((long)puVar21 + 1);
      local_600 = (uint *)(param_10[2] + param_10[3]);
      lVar57 = local_5d8 + (long)local_628;
      local_5b8 = (uint *)((long)local_5f8 - (long)local_628);
      if (local_5b8 == (uint *)0x0) {
        uVar44 = 0;
      }
      else {
        uVar29 = (long)local_3b8 - ((long)local_540 + (long)local_628);
        if (uVar29 < 4) {
          uVar40 = 0;
          uVar44 = 0;
        }
        else {
          auVar64 = auVar91._0_16_;
          if (uVar29 < 0x10) {
            uVar44 = 0;
            uVar34 = 0;
          }
          else {
            uVar40 = uVar29 & 0xfffffffffffffff0;
            auVar76 = ZEXT1664((undefined1  [16])0x0);
            uVar44 = 0;
            auVar79 = ZEXT1664((undefined1  [16])0x0);
            in_ZMM2 = ZEXT1664((undefined1  [16])0x0);
            in_ZMM3 = ZEXT1664((undefined1  [16])0x0);
            do {
              uVar24 = *(uint *)((long)local_628 + local_5d8 + uVar44 + 8);
              in_ZMM6 = ZEXT464(uVar24);
              uVar32 = vpcmpb_avx512vl(ZEXT416(*(uint *)((long)local_628 + local_5d8 + uVar44)),
                                       auVar64,4);
              uVar12 = vpcmpb_avx512vl(ZEXT416(*(uint *)((long)local_628 + local_5d8 + uVar44 + 4)),
                                       auVar64,4);
              uVar13 = vpcmpb_avx512vl(ZEXT416(uVar24),auVar64,4);
              uVar14 = vpcmpb_avx512vl(ZEXT416(*(uint *)((long)local_628 + local_5d8 + uVar44 + 0xc)
                                              ),auVar64,4);
              auVar73 = vpmovm2q_avx512vl(uVar32);
              auVar73 = vpsubq_avx2(auVar76._0_32_,auVar73);
              auVar76 = ZEXT3264(auVar73);
              auVar74 = vpmovm2q_avx512vl(uVar12);
              auVar74 = vpsubq_avx2(auVar79._0_32_,auVar74);
              auVar79 = ZEXT3264(auVar74);
              auVar82 = vpmovm2q_avx512vl(uVar13);
              auVar82 = vpsubq_avx2(in_ZMM2._0_32_,auVar82);
              in_ZMM2 = ZEXT3264(auVar82);
              auVar86 = vpmovm2q_avx512vl(uVar14);
              auVar86 = vpsubq_avx2(in_ZMM3._0_32_,auVar86);
              in_ZMM3 = ZEXT3264(auVar86);
              uVar44 = uVar44 + 0x10;
            } while (uVar40 != uVar44);
            auVar66._0_8_ = auVar86._0_8_ + auVar82._0_8_ + auVar74._0_8_ + auVar73._0_8_;
            auVar66._8_8_ = auVar86._8_8_ + auVar82._8_8_ + auVar74._8_8_ + auVar73._8_8_;
            auVar3._16_8_ = auVar86._16_8_ + auVar82._16_8_ + auVar74._16_8_ + auVar73._16_8_;
            auVar3._0_16_ = auVar66;
            auVar3._24_8_ = auVar86._24_8_ + auVar82._24_8_ + auVar74._24_8_ + auVar73._24_8_;
            auVar78 = vpaddq_avx(auVar66,auVar3._16_16_);
            auVar80 = vpshufd_avx(auVar78,0xee);
            auVar78 = vpaddq_avx(auVar78,auVar80);
            uVar44 = auVar78._0_8_;
            if (uVar29 == uVar40) goto LAB_006aae14;
            uVar34 = uVar40;
            if ((uVar29 & 0xc) == 0) goto LAB_006aaded;
          }
          uVar40 = uVar29 & 0xfffffffffffffffc;
          auVar76 = ZEXT864(uVar44);
          do {
            uVar32 = vpcmpb_avx512vl(ZEXT416(*(uint *)(lVar57 + uVar34)),auVar64,4);
            auVar73 = vpmovm2q_avx512vl(uVar32);
            auVar73 = vpsubq_avx2(auVar76._0_32_,auVar73);
            auVar76 = ZEXT3264(auVar73);
            uVar34 = uVar34 + 4;
          } while (uVar40 != uVar34);
          auVar64 = vpaddq_avx(auVar73._0_16_,auVar73._16_16_);
          auVar78 = vpshufd_avx(auVar64,0xee);
          auVar64 = vpaddq_avx(auVar64,auVar78);
          uVar44 = auVar64._0_8_;
          if (uVar29 == uVar40) goto LAB_006aae14;
        }
LAB_006aaded:
        plVar60 = (long *)(uVar40 + (long)local_628);
        do {
          uVar44 = uVar44 + (*(char *)(local_5d8 + (long)plVar60) != -1);
          plVar60 = (long *)((long)plVar60 + 1);
        } while (local_5f8 != plVar60);
      }
LAB_006aae14:
      lVar33 = 0;
      if (1 < uStack_258) {
        lVar33 = uStack_258 - 2;
      }
      iVar42 = 0x40 - (int)LZCOUNT(lVar33);
      local_4a0 = local_5f0;
      if (uVar44 != 0) {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        plVar27 = (long *)pqw::emit_dict_page_strs(param_10,&local_260);
        if (plVar27 == (long *)0x0) {
          lVar33 = param_10[2];
          lVar35 = param_10[3];
          if (local_628 != (long *)0x0) {
            pqw::null_page(param_10);
          }
          plVar27 = (long *)pqw::emit_u8_opt_page
                                      (param_10,lVar57,local_5b8,uVar44,iVar42 + (uint)(iVar42 == 0)
                                      );
          uVar62 = 1;
          uVar61 = 1;
          auVar64 = auVar91._0_16_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar91 = ZEXT1664(auVar64);
          if (plVar27 == (long *)0x0) {
            iVar42 = (int)param_10[5];
            uVar29 = param_10[2];
            puVar41 = local_600;
            puVar55 = (uint *)(lVar33 + lVar35);
            puVar54 = local_5f0;
            goto joined_r0x006ab089;
          }
        }
LAB_006ac224:
        goto LAB_006ac310;
      }
      if (local_628 != (long *)0x0) {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        pqw::null_page(param_10,local_628);
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
      }
      puVar54 = local_5f0;
      if (plVar27 == local_628) {
        uVar62 = 0;
        uVar61 = 0;
        puVar41 = (uint *)0x0;
        iVar42 = (int)param_10[5];
        uVar29 = param_10[2];
        puVar55 = local_600;
      }
      else {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        pqw::null_page(param_10,local_5b8);
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
        uVar62 = 0;
        uVar61 = 0;
        iVar42 = (int)param_10[5];
        uVar29 = param_10[2];
        puVar41 = (uint *)0x0;
        puVar55 = local_600;
      }
joined_r0x006ab089:
      if (((iVar42 != -1) && (uVar61 = uVar62, uVar29 != 0)) && ((ulong)param_10[4] <= uVar29)) {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        plVar27 = (long *)<std[c60ef17cbf7de79f]::fs::File_as_core[62e902411887be45]::io::write::Write>
                          ::write_all(iVar42,param_10[1]);
        if (plVar27 != (long *)0x0) goto LAB_006ac224;
        param_10[3] = param_10[3] + param_10[2];
        param_10[2] = 0;
        uVar29 = 0;
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
      }
      lVar33 = uVar29 - (long)local_600;
      lVar57 = param_10[3];
      if (puVar54 == local_4b0) {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::pqw::Meta>>::grow_one
                  (&local_4b0);
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
        plVar28 = plStack_4a8;
      }
      plVar27 = local_5f8;
      plVar28[(long)puVar54 * 5] = lVar33 + lVar57;
      plVar28[(long)puVar54 * 5 + 1] = (long)puVar55;
      plVar28[(long)puVar54 * 5 + 2] = (long)puVar41;
      plVar28[(long)puVar54 * 5 + 3] = (long)local_5f8;
      *(int *)(plVar28 + (long)puVar54 * 5 + 4) = 6;
      *(undefined1 *)((long)plVar28 + (long)puVar54 * 0x28 + 0x24) = uVar61;
      local_4a0 = (uint *)((long)local_598 + 2);
      lVar57 = param_10[8];
      if (lVar57 == param_10[6]) {
        in_ZMM2 = ZEXT1664(in_ZMM2._0_16_);
        in_ZMM3 = ZEXT1664(in_ZMM3._0_16_);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
                  (param_10 + 6);
        auVar64 = auVar91._0_16_;
        auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
        auVar91 = ZEXT1664(auVar64);
      }
      lVar33 = param_10[7];
      lVar35 = lVar57 * 0x20;
      *(long **)(lVar33 + lVar35) = plVar27;
      *(uint **)(lVar33 + 0x18 + lVar35) = local_4a0;
      puVar2 = (undefined8 *)(lVar33 + 8 + lVar35);
      *puVar2 = local_4b0;
      puVar2[1] = plStack_4a8;
      param_10[8] = lVar57 + 1;
      param_10[9] = param_10[9] + (long)plVar27;
      local_628 = local_390;
      param_2 = local_3b8;
LAB_006aafd5:
      *local_5c0 = *local_5c0 + 1;
    } while (param_2 < local_628);
  }
  return;
}


// ==== pipeline::out::die @ 006ac460 (58 bytes)

/* pipeline[509596c7b52975b2]::out::die */

void __rustcall pipeline[509596c7b52975b2]::out::die(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  code *local_8;
  
  local_10 = &local_20;
  local_8 = <&str_as_core[62e902411887be45]::fmt::Display>::fmt;
  local_20 = param_1;
  local_18 = param_2;
  std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020d1d3,&local_10);
                    /* WARNING: Subroutine does not return */
  _Exit(1);
}


// ==== pipeline::out::ctx_new @ 006ac4a0 (521 bytes)

/* pipeline[509596c7b52975b2]::out::ctx_new */

void __rustcall
pipeline[509596c7b52975b2]::out::ctx_new
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 *puStack_68;
  long local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  puVar6 = (undefined4 *)__rustc[45371133cddedda4]::__rust_alloc(4,4);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(4,4);
  }
  *puVar6 = 0;
  local_70 = 1;
  local_60 = 1;
  local_98 = 0;
  lStack_90 = 1;
  local_88 = 0;
  puStack_68 = puVar6;
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_1;
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    local_38 = *(long *)(param_2 + 0x40) * 0x18;
    local_78 = 0;
    lVar7 = 0;
    local_80 = 1;
    lVar8 = 0;
    do {
      lVar4 = local_60;
      uVar2 = *(undefined8 *)(lVar1 + 8 + lVar7);
      uVar3 = *(ulong *)(lVar1 + 0x10 + lVar7);
      if ((ulong)(local_78 - lVar8) < uVar3) {
        local_58 = puVar6;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_98,lVar8,uVar3,1,1);
        local_78 = local_98;
        local_80 = lStack_90;
        puVar6 = local_58;
        lVar8 = local_88;
LAB_006ac5a0:
        (*(code *)PTR_memcpy_00841de0)(local_80 + lVar8,uVar2,uVar3);
      }
      else if (uVar3 != 0) goto LAB_006ac5a0;
      lVar8 = lVar8 + uVar3;
      local_88 = lVar8;
      if (lVar4 == local_70) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<i32>>::grow_one(&local_70);
        puVar6 = puStack_68;
      }
      puVar6[lVar4] = (int)lVar8;
      local_60 = lVar4 + 1;
      lVar7 = lVar7 + 0x18;
    } while (local_38 != lVar7);
  }
  lVar1 = local_40;
  uVar5 = local_48;
  uVar2 = local_50;
  <std[c60ef17cbf7de79f]::path::Path>::_join(local_40,local_50,local_48,"user_daily",10);
  <std[c60ef17cbf7de79f]::path::Path>::_join(lVar1 + 0x18,uVar2,uVar5,"campaign_daily",0xe);
  *(long *)(lVar1 + 0x40) = local_60;
  *(long *)(lVar1 + 0x30) = local_70;
  *(undefined4 **)(lVar1 + 0x38) = puStack_68;
  *(long *)(lVar1 + 0x48) = local_98;
  *(long *)(lVar1 + 0x50) = lStack_90;
  *(long *)(lVar1 + 0x58) = local_88;
  return;
}


// ==== pipeline::out::s3_write @ 006ac6c0 (942 bytes)

/* pipeline[509596c7b52975b2]::out::s3_write */

void __rustcall pipeline[509596c7b52975b2]::out::s3_write(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *__ptr;
  char cVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  code *local_98;
  undefined8 local_90;
  undefined1 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((S3CTX._96_4_ == 0) && (param_1 < 0x10)) {
    lVar1 = *(long *)(param_2 + 0x148);
    local_c8 = param_1;
    if (((*(long *)(param_2 + 0x118) != lVar1) ||
        (((*(long *)(param_2 + 0x178) != lVar1 || (*(long *)(param_2 + 0x1a8) != lVar1)) ||
         (*(long *)(param_2 + 0x1d8) != lVar1)))) || (*(long *)(param_2 + 0x208) != lVar1)) {
                    /* WARNING: Subroutine does not return */
      sys::fallback("row columns differ in length",0x1c);
    }
    local_a8 = *(undefined8 *)(param_2 + 0x238);
    if (S3PREP != 0) {
      local_c0 = S3CTX;
      local_88 = &local_c0;
      <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
                (&S3PREP,0,&local_88,&DAT_0020f9e0,&PTR_s_src_out_rs_00212ce0);
      param_1 = local_c8;
    }
    local_c8 = param_1;
    if (0xf < param_1) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(param_1,0x10,&PTR_s_src_out_rs_00212d18)
      ;
    }
    local_c0 = (undefined1 *)&local_c8;
    *(undefined1 *)(in_FS_OFFSET + -0x3e0) = 1;
    uVar3 = S3CTX._16_8_;
    uVar2 = S3CTX._8_8_;
    local_88 = *(undefined1 ***)(param_2 + 0x110);
    local_80 = *(undefined8 *)(param_2 + 0x140);
    local_78 = *(undefined8 *)(param_2 + 0x170);
    local_70 = *(undefined8 *)(param_2 + 0x1a0);
    local_68 = *(undefined8 *)(param_2 + 0x1d0);
    local_60 = *(undefined8 *)(param_2 + 0x200);
    local_58 = *(undefined8 *)(param_2 + 0xe0);
    local_50 = *(undefined8 *)(param_2 + 0xe8);
    local_48 = *(undefined8 *)(param_2 + 0xb0);
    local_40 = *(undefined8 *)(param_2 + 0xb8);
    local_38 = *(undefined8 *)(param_2 + 0x148);
    local_b8 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
    alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_a0,&DAT_0020f140,&local_c0);
    <std[c60ef17cbf7de79f]::path::Path>::_join(&local_c0,uVar2,uVar3,local_98,local_90);
    if (local_a0 != 0) {
      if (((sys::A_BASE_0 == (code *)0x0) || (local_98 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_98)) {
        free(local_98);
      }
      else {
        uVar5 = 0x10;
        if (0x10 < local_a0) {
          uVar5 = local_a0;
        }
        lVar8 = LZCOUNT(uVar5 - 1);
        lVar7 = 0x40 - lVar8;
        if ((uVar5 - 1 < 0x10000) || (cVar4 = sys::big_put(local_98,lVar7), cVar4 == '\0')) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(undefined8 *)local_98 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
          *(code **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = local_98;
        }
      }
    }
    __ptr = local_b8;
    write_split_to(&local_88,local_a8,lVar1,local_b8,local_b0,S3CTX._56_8_,S3CTX._64_8_,S3CTX._80_8_
                   ,S3CTX._88_8_,S3FILE + param_1 * 0x50);
    if (local_c0 != (undefined1 *)0x0) {
      if (((sys::A_BASE_0 == (code *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)) {
        free(__ptr);
      }
      else {
        puVar6 = &DAT_00000010;
        if (&DAT_00000010 < local_c0) {
          puVar6 = local_c0;
        }
        lVar7 = LZCOUNT(puVar6 + -1);
        lVar8 = 0x40 - lVar7;
        if ((puVar6 + -1 < (undefined1 *)0x10000) ||
           (cVar4 = sys::big_put(__ptr,lVar8), cVar4 == '\0')) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
          *(code **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
        }
      }
    }
    *(undefined1 *)(in_FS_OFFSET + -0x3e0) = 0;
    *(long *)(param_2 + 0x238) = lVar1;
  }
  return;
}


