// ==== <std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::initialize::<<std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline::parse::fr_done::{closure#0}>::{closure#0}, !> @ 005d2220 (81 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>
::initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::_closure_0_>::_closure_0_,_>
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 local_29;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::FR_DONE._24_4_ == 0) {
    return;
  }
  local_28 = &local_20;
  local_10 = pipeline[509596c7b52975b2]::parse::FR_DONE;
  local_8 = &local_29;
  local_20 = param_1;
  local_18 = param_2;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x843b60,1,&local_28,&DAT_0020f850,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::initialize::<<std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::get_or_init<pipeline::parse::cpu_order::{closure#0}>::{closure#0}, !> @ 005d2280 (73 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::
initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 local_19;
  undefined1 **local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::cpu_order::O._24_4_ == 0) {
    return;
  }
  local_18 = &local_10;
  local_10 = pipeline[509596c7b52975b2]::parse::cpu_order::O;
  local_8 = &local_19;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x8447c0,1,&local_18,&DAT_0020f878,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::initialize::<<std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::get_or_init<pipeline::parse::drv::{closure#0}>::{closure#0}, !> @ 005d2340 (73 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 local_19;
  undefined8 **local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  if (DAT_00843ab0 == 0) {
    return;
  }
  local_18 = &local_10;
  local_10 = &pipeline[509596c7b52975b2]::parse::DRV;
  local_8 = &local_19;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (&DAT_00843ab0,1,&local_18,&DAT_0020f8c8,
             &PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize::<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::try_insert::{closure#0}>::{closure#0}, !> @ 005d23a0 (77 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::
initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::_closure_0_>::_closure_0_,_>
          (undefined8 param_1)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::TABS._72_4_ == 0) {
    return;
  }
  local_20 = &local_18;
  local_10 = pipeline[509596c7b52975b2]::parse::TABS;
  local_8 = &local_21;
  local_18 = param_1;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x843b30,1,&local_20,&DAT_0020f8f0,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize::<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<pipeline::parse::tabs::{closure#0}>::{closure#0}, !> @ 005d2400 (77 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::
initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::_closure_0_>::_closure_0_,_>
          (undefined8 param_1)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::TABS._72_4_ == 0) {
    return;
  }
  local_20 = &local_18;
  local_10 = pipeline[509596c7b52975b2]::parse::TABS;
  local_8 = &local_21;
  local_18 = param_1;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (0x843b30,1,&local_20,&DAT_0020f918,&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<bool>>::initialize::<<std::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline::parse::popw::{closure#0}>::{closure#0}, !> @ 005d24c0 (73 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 local_19;
  undefined1 **local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (pipeline[509596c7b52975b2]::parse::POPW == 0) {
    return;
  }
  local_18 = &local_10;
  local_10 = &DAT_00843ae4;
  local_8 = &local_19;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (&pipeline[509596c7b52975b2]::parse::POPW,1,&local_18,&DAT_0020f968,
             &PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<usize>>::initialize::<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_k::{closure#0}>::{closure#0}, !> @ 005d2520 (73 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 local_19;
  undefined8 **local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  if (DAT_00843ad8 == 0) {
    return;
  }
  local_18 = &local_10;
  local_10 = &pipeline[509596c7b52975b2]::parse::FR_K;
  local_8 = &local_19;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (&DAT_00843ad8,1,&local_18,&DAT_0020f990,
             &PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== <std::sync::once_lock::OnceLock<usize>>::initialize::<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_lag::{closure#0}>::{closure#0}, !> @ 005d2580 (73 bytes)

/* <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 local_19;
  undefined8 **local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  if (DAT_00843b40 == 0) {
    return;
  }
  local_18 = &local_10;
  local_10 = &pipeline[509596c7b52975b2]::parse::FR_LAG;
  local_8 = &local_19;
  <std[c60ef17cbf7de79f]::sys::sync::once::futex::Once>::call
            (&DAT_00843b40,1,&local_18,&DAT_0020f9b8,
             &PTR_s__rustc_0ef1bc386059596dada8fb65b_0058c8b8);
  return;
}


// ==== core::ptr::drop_glue::<pipeline::parse::Part> @ 00608100 (1279 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::Part>(long *param_1)

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
      uVar3 = *param_1 * 0x40 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_006085db;
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
      uVar4 = param_1[3] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_006085db;
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
      uVar4 = param_1[6] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_006085db;
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
        if (lVar5 == 0) goto LAB_006085db;
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
      uVar4 = param_1[0xc] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_006085db;
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
      uVar4 = param_1[0xf] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_006085db;
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
      uVar4 = param_1[0x12] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_006085db:
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
    uVar3 = param_1[0x15] * 0x40 - 1;
    lVar6 = LZCOUNT(uVar3);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3) &&
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


// ==== core::ptr::drop_glue::<pipeline::parse::EvPart> @ 00608600 (1737 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::parse::EvPart>(long *param_1)

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
      uVar3 = *param_1 * 0x40 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
      uVar4 = param_1[3] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
      uVar4 = param_1[6] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
        if (lVar5 == 0) goto LAB_00608ca5;
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
      uVar4 = param_1[0xc] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
      uVar4 = param_1[0xf] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
      uVar4 = param_1[0x12] << 2;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
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
    }
    else {
      uVar4 = param_1[0x15] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x18] != 0) {
    puVar1 = (undefined8 *)param_1[0x19];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar4 = param_1[0x18] << 3;
      uVar3 = 0x10;
      if (0x10 < uVar4) {
        uVar3 = uVar4;
      }
      lVar5 = LZCOUNT(uVar3 - 1);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 - 1 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00608ca5;
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x1b] != 0) {
    puVar1 = (undefined8 *)param_1[0x1c];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = param_1[0x1b] * 0x40 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00608ca5:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  if (param_1[0x1e] != 0) {
    puVar1 = (undefined8 *)param_1[0x1f];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
    uVar3 = param_1[0x1e] * 0x18 - 1;
    lVar6 = LZCOUNT(uVar3);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3) &&
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


// ==== core::slice::sort::stable::driftsort_main::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}, alloc::vec::Vec<u32>> @ 00616940 (380 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<u32, <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<u32>> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<u32>>
          (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *__ptr;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 2000000;
  if (param_2 < 2000000) {
    uVar4 = param_2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  if (0x400 < uVar4) {
    uVar1 = uVar4 * 4;
    if (uVar3 >> 0x3e == 0 && uVar1 < 0x7ffffffffffffffd) {
      __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar1,4);
      if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar1);
      }
      drift::sort::
      <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                (param_1,param_2,__ptr,uVar4,param_2 < 0x41,param_3);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      uVar4 = 0x10;
      if (0x10 < uVar1) {
        uVar4 = uVar1;
      }
      lVar5 = 0x40 - LZCOUNT(uVar4 - 1);
      if ((uVar1 < 0x10001) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar5), cVar2 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}> @ 0061ad20 (532 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<u32, <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0}> */

uint * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
          (uint *param_1,uint *param_2,uint *param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                                (param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4,param_5
                                );
    param_2 = (uint *)<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                                (param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4,param_5
                                );
    param_3 = (uint *)<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                                (param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4,param_5
                                );
  }
  uVar8 = (ulong)*param_1;
  plVar3 = *(long **)*param_5;
  uVar4 = *(ulong *)(*plVar3 + 0x70);
  if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar8,uVar4,&PTR_s_src_parse_rs_00210c28);
  }
  uVar6 = (ulong)*param_2;
  lVar5 = *(long *)(*plVar3 + 0x68);
  cVar1 = *(char *)(lVar5 + 0x18 + uVar8 * 0x20);
  if (cVar1 == '\0') {
    bVar7 = (*(int *)plVar3[1] == 2) * '\x03';
  }
  else {
    bVar7 = 1;
    if (cVar1 != '\x01') {
      bVar7 = 2;
    }
  }
  if (uVar4 <= uVar6) goto LAB_0061af1a;
  cVar2 = *(char *)(lVar5 + 0x18 + uVar6 * 0x20);
  if (cVar2 == '\0') {
    bVar10 = (*(int *)plVar3[1] == 2) * '\x03';
    uVar6 = (ulong)*param_3;
    if (cVar1 != '\x02') goto LAB_0061ae26;
LAB_0061ae59:
    bVar11 = 2;
  }
  else {
    bVar10 = 1;
    if (cVar2 != '\x01') {
      bVar10 = 2;
    }
    uVar6 = (ulong)*param_3;
    if (cVar1 == '\x02') goto LAB_0061ae59;
LAB_0061ae26:
    bVar11 = 1;
    if (cVar1 != '\x01') {
      bVar11 = (*(int *)plVar3[1] == 2) * '\x03';
    }
  }
  if (uVar6 < uVar4) {
    cVar1 = *(char *)(lVar5 + 0x18 + uVar6 * 0x20);
    if (cVar1 == '\0') {
      bVar9 = (*(int *)plVar3[1] == 2) * '\x03';
    }
    else {
      bVar9 = 1;
      if (cVar1 != '\x01') {
        bVar9 = 2;
      }
    }
    if (bVar11 < bVar9 != bVar7 < bVar10) {
      return param_1;
    }
    if (cVar2 == '\x02') {
      bVar11 = 2;
    }
    else {
      bVar11 = 1;
      if (cVar2 != '\x01') {
        bVar11 = (*(int *)plVar3[1] == 2) * '\x03';
      }
    }
    if (cVar1 == '\x02') {
      bVar9 = 2;
    }
    else {
      bVar9 = 1;
      if (cVar1 != '\x01') {
        bVar9 = (*(int *)plVar3[1] == 2) * '\x03';
      }
    }
    if (bVar11 < bVar9 != bVar7 < bVar10) {
      param_2 = param_3;
    }
    return param_2;
  }
LAB_0061af1a:
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar6,uVar4,&PTR_s_src_parse_rs_00210c28);
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}> @ 0061dee0 (847 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<u32,
   <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
          (uint *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  bool bVar17;
  bool bVar18;
  
  uVar9 = (ulong)param_1[1];
  uVar2 = *(ulong *)(*param_3 + 0x70);
  if (uVar2 <= uVar9) {
LAB_0061e218:
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar9,uVar2,&PTR_s_src_parse_rs_00210c28);
  }
  uVar7 = (ulong)*param_1;
  lVar3 = *(long *)(*param_3 + 0x68);
  cVar1 = *(char *)(lVar3 + 0x18 + uVar9 * 0x20);
  if (cVar1 == '\0') {
    bVar11 = (*(int *)param_3[1] == 2) * '\x03';
  }
  else {
    bVar11 = 1;
    if (cVar1 != '\x01') {
      bVar11 = 2;
    }
  }
  if (uVar7 < uVar2) {
    cVar1 = *(char *)(lVar3 + 0x18 + uVar7 * 0x20);
    if (cVar1 == '\0') {
      bVar4 = (*(int *)param_3[1] == 2) * '\x03';
    }
    else {
      bVar4 = 1;
      if (cVar1 != '\x01') {
        bVar4 = 2;
      }
    }
    uVar9 = (ulong)param_1[3];
    if (uVar2 <= uVar9) goto LAB_0061e218;
    uVar7 = (ulong)param_1[2];
    cVar1 = *(char *)(lVar3 + 0x18 + uVar9 * 0x20);
    if (cVar1 == '\0') {
      bVar10 = (*(int *)param_3[1] == 2) * '\x03';
    }
    else {
      bVar10 = 1;
      if (cVar1 != '\x01') {
        bVar10 = 2;
      }
    }
    if (uVar7 < uVar2) {
      cVar1 = *(char *)(lVar3 + 0x18 + uVar7 * 0x20);
      if (cVar1 == '\0') {
        bVar5 = (*(int *)param_3[1] == 2) * '\x03';
      }
      else {
        bVar5 = 1;
        if (cVar1 != '\x01') {
          bVar5 = 2;
        }
      }
      bVar17 = bVar11 < bVar4;
      bVar18 = bVar10 < bVar5;
      uVar9 = (ulong)param_1[(ulong)bVar18 + 2];
      if (uVar2 <= uVar9) goto LAB_0061e218;
      uVar7 = (ulong)param_1[bVar17];
      cVar1 = *(char *)(lVar3 + 0x18 + uVar9 * 0x20);
      if (cVar1 == '\0') {
        bVar11 = (*(int *)param_3[1] == 2) * '\x03';
      }
      else {
        bVar11 = 1;
        if (cVar1 != '\x01') {
          bVar11 = 2;
        }
      }
      if (uVar7 < uVar2) {
        puVar12 = param_1 + (bVar18 ^ 3);
        cVar1 = *(char *)(lVar3 + 0x18 + uVar7 * 0x20);
        if (cVar1 == '\0') {
          bVar4 = (*(int *)param_3[1] == 2) * '\x03';
        }
        else {
          bVar4 = 1;
          if (cVar1 != '\x01') {
            bVar4 = 2;
          }
        }
        uVar9 = (ulong)*puVar12;
        if (uVar2 <= uVar9) goto LAB_0061e218;
        puVar16 = param_1 + !bVar17;
        uVar7 = (ulong)*puVar16;
        cVar1 = *(char *)(lVar3 + 0x18 + uVar9 * 0x20);
        if (cVar1 == '\0') {
          bVar10 = (*(int *)param_3[1] == 2) * '\x03';
        }
        else {
          bVar10 = 1;
          if (cVar1 != '\x01') {
            bVar10 = 2;
          }
        }
        if (uVar7 < uVar2) {
          puVar14 = param_1 + (ulong)bVar18 + 2;
          cVar1 = *(char *)(lVar3 + 0x18 + uVar7 * 0x20);
          if (cVar1 == '\0') {
            bVar5 = (*(int *)param_3[1] == 2) * '\x03';
          }
          else {
            bVar5 = 1;
            if (cVar1 != '\x01') {
              bVar5 = 2;
            }
          }
          puVar15 = puVar16;
          if (bVar10 < bVar5) {
            puVar15 = puVar14;
          }
          puVar13 = puVar14;
          if (bVar11 < bVar4) {
            puVar13 = puVar16;
            puVar15 = param_1 + bVar17;
          }
          if (bVar10 < bVar5) {
            puVar13 = puVar12;
          }
          uVar7 = (ulong)*puVar13;
          if (uVar7 < uVar2) {
            uVar9 = (ulong)*puVar15;
            cVar1 = *(char *)(lVar3 + 0x18 + uVar7 * 0x20);
            if (cVar1 == '\0') {
              bVar6 = (*(int *)param_3[1] == 2) * '\x03';
            }
            else {
              bVar6 = 1;
              if (cVar1 != '\x01') {
                bVar6 = 2;
              }
            }
            if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check(uVar9,uVar2,&PTR_s_src_parse_rs_00210c28);
            }
            cVar1 = *(char *)(lVar3 + 0x18 + uVar9 * 0x20);
            if (cVar1 == '\0') {
              bVar8 = (*(int *)param_3[1] == 2) * '\x03';
            }
            else {
              bVar8 = 1;
              if (cVar1 != '\x01') {
                bVar8 = 2;
              }
            }
            if (bVar10 < bVar5) {
              puVar12 = puVar16;
            }
            puVar16 = param_1 + bVar17;
            if (bVar11 < bVar4) {
              puVar16 = puVar14;
            }
            puVar14 = puVar13;
            if (bVar6 < bVar8) {
              puVar14 = puVar15;
              puVar15 = puVar13;
            }
            *param_2 = *puVar16;
            param_2[1] = *puVar15;
            param_2[2] = *puVar14;
            param_2[3] = *puVar12;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar7,uVar2,&PTR_s_src_parse_rs_00210c28);
}


// ==== core::slice::sort::shared::smallsort::bidirectional_merge::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}> @ 00622be0 (623 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::bidirectional_merge::<u32,
   <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::bidirectional_merge::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
          (uint *param_1,ulong param_2,uint *param_3,long *param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  bool bVar15;
  
  uVar11 = param_2 >> 1;
  puVar13 = param_1 + uVar11;
  puVar8 = param_1 + (uVar11 - 1);
  lVar14 = 0;
  puVar5 = param_1 + (param_2 - 1);
  puVar9 = param_3;
  while( true ) {
    uVar12 = (ulong)*puVar13;
    plVar2 = (long *)*param_4;
    uVar7 = *(ulong *)(*plVar2 + 0x70);
    if (uVar7 <= uVar12) break;
    lVar3 = *(long *)(*plVar2 + 0x68);
    cVar1 = *(char *)(lVar3 + 0x18 + uVar12 * 0x20);
    if (cVar1 == '\0') {
      bVar10 = (*(int *)plVar2[1] == 2) * '\x03';
    }
    else {
      bVar10 = 1;
      if (cVar1 != '\x01') {
        bVar10 = 2;
      }
    }
    uVar12 = (ulong)*param_1;
    if (uVar7 <= uVar12) break;
    cVar1 = *(char *)(lVar3 + 0x18 + uVar12 * 0x20);
    if (cVar1 == '\0') {
      bVar4 = (*(int *)plVar2[1] == 2) * '\x03';
    }
    else {
      bVar4 = 1;
      if (cVar1 != '\x01') {
        bVar4 = 2;
      }
    }
    bVar15 = bVar10 < bVar4;
    puVar6 = param_1;
    if (bVar15) {
      puVar6 = puVar13;
    }
    *puVar9 = *puVar6;
    uVar12 = (ulong)*puVar5;
    plVar2 = (long *)*param_4;
    uVar7 = *(ulong *)(*plVar2 + 0x70);
    if (uVar7 <= uVar12) break;
    lVar3 = *(long *)(*plVar2 + 0x68);
    cVar1 = *(char *)(lVar3 + 0x18 + uVar12 * 0x20);
    if (cVar1 == '\0') {
      bVar10 = (*(int *)plVar2[1] == 2) * '\x03';
    }
    else {
      bVar10 = 1;
      if (cVar1 != '\x01') {
        bVar10 = 2;
      }
    }
    uVar12 = (ulong)*puVar8;
    if (uVar7 <= uVar12) break;
    cVar1 = *(char *)(lVar3 + 0x18 + uVar12 * 0x20);
    if (cVar1 == '\0') {
      bVar4 = (*(int *)plVar2[1] == 2) * '\x03';
    }
    else {
      bVar4 = 1;
      if (cVar1 != '\x01') {
        bVar4 = 2;
      }
    }
    puVar13 = puVar13 + bVar15;
    param_1 = param_1 + !bVar15;
    puVar9 = puVar9 + 1;
    puVar6 = puVar5 + ((ulong)(bVar10 < bVar4) - 1);
    if (bVar10 < bVar4) {
      puVar5 = puVar8;
    }
    param_3[param_2 + lVar14 + -1] = *puVar5;
    puVar8 = puVar8 + -(ulong)(bVar10 < bVar4);
    lVar14 = lVar14 + -1;
    puVar5 = puVar6;
    if (-uVar11 == lVar14) {
      if ((param_2 & 1) != 0) {
        bVar15 = param_1 < puVar8 + 1;
        puVar5 = puVar13;
        if (bVar15) {
          puVar5 = param_1;
        }
        *puVar9 = *puVar5;
        param_1 = param_1 + bVar15;
        puVar13 = puVar13 + !bVar15;
      }
      if ((param_1 != puVar8 + 1) || (puVar13 != puVar6 + 1)) {
                    /* WARNING: Subroutine does not return */
        panic_on_ord_violation();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar12,uVar7,&PTR_s_src_parse_rs_00210c28);
}


// ==== core::slice::sort::stable::drift::sort::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}> @ 0062c040 (2626 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::stable::drift::sort::<u32, <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
          (long param_1,ulong param_2,uint *param_3,ulong param_4,char param_5,undefined8 *param_6)

{
  char cVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  byte bVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  byte bVar24;
  undefined1 (*pauVar25) [32];
  undefined1 (*pauVar26) [16];
  uint *puVar27;
  byte bVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  bool bVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [64];
  ulong local_2e0;
  byte abStack_283 [67];
  ulong auStack_240 [66];
  
  uVar10 = param_2 + 0x3fffffffffffffff;
  if ((uVar10 | param_2) >> 0x20 == 0) {
    uVar10 = (uVar10 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    uVar10 = uVar10 / param_2;
  }
  if (param_2 < 0x1001) {
    uVar16 = param_2 - (param_2 >> 1);
    uVar11 = 0x40;
    if (uVar16 < 0x40) {
      uVar11 = uVar16;
    }
  }
  else {
    uVar9 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar11 = (ulong)(uVar9 - (uVar9 >> 1));
    uVar11 = (param_2 >> (uVar11 & 0x3f)) + (1L << (uVar11 & 0x3f)) >> 1;
  }
  uVar32 = 1;
  uVar20 = 0;
  auVar35 = ZEXT3264(_DAT_002034a0);
  uVar16 = 0;
  local_2e0 = param_2;
  if (param_2 == 0) goto LAB_0062c16b;
LAB_0062c190:
  puVar27 = (uint *)(param_1 + uVar20 * 4);
  if (local_2e0 < uVar11) {
LAB_0062c1a3:
    if (param_5 == '\0') {
      if (uVar11 < local_2e0) {
        local_2e0 = uVar11;
      }
      local_2e0 = local_2e0 * 2;
    }
    else {
      if (0x1f < local_2e0) {
        local_2e0 = 0x20;
      }
      quicksort::quicksort::
      <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                (puVar27,local_2e0,param_3,param_4,0,0,param_6);
      auVar35 = ZEXT3264(_DAT_002034a0);
      local_2e0 = (local_2e0 & 0xffffffff) * 2 + 1;
    }
  }
  else {
    uVar17 = local_2e0;
    if (1 < local_2e0) {
      uVar22 = (ulong)puVar27[1];
      plVar2 = *(long **)*param_6;
      uVar12 = *(ulong *)(*plVar2 + 0x70);
      if (uVar12 <= uVar22) {
LAB_0062cac4:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar22,uVar12,&PTR_s_src_parse_rs_00210c28);
      }
      lVar23 = *(long *)(*plVar2 + 0x68);
      cVar1 = *(char *)(lVar23 + 0x18 + uVar22 * 0x20);
      if (cVar1 == '\0') {
        bVar24 = (*(int *)plVar2[1] == 2) * '\x03';
      }
      else {
        bVar24 = 1;
        if (cVar1 != '\x01') {
          bVar24 = 2;
        }
      }
      uVar30 = (ulong)*puVar27;
      if (uVar12 <= uVar30) {
LAB_0062cad4:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar30,uVar12,&PTR_s_src_parse_rs_00210c28);
      }
      cVar1 = *(char *)(lVar23 + 0x18 + uVar30 * 0x20);
      if (cVar1 == '\0') {
        bVar28 = (*(int *)plVar2[1] == 2) * '\x03';
        if (bVar28 <= bVar24) goto LAB_0062c327;
code_r0x0062c2c0:
        if (local_2e0 != 2) {
          uVar17 = 2;
          do {
            uVar30 = (ulong)puVar27[uVar17];
            if (uVar12 <= uVar30) goto LAB_0062cad4;
            cVar1 = *(char *)(lVar23 + 0x18 + uVar30 * 0x20);
            if (cVar1 == '\0') {
              bVar19 = (*(int *)plVar2[1] == 2) * '\x03';
            }
            else {
              bVar19 = 1;
              if (cVar1 != '\x01') {
                bVar19 = 2;
              }
            }
            if (uVar12 <= uVar22) goto LAB_0062cac4;
            cVar1 = *(char *)(lVar23 + 0x18 + uVar22 * 0x20);
            if (cVar1 == '\0') {
              bVar8 = (*(int *)plVar2[1] == 2) * '\x03';
            }
            else {
              bVar8 = 1;
              if (cVar1 != '\x01') {
                bVar8 = 2;
              }
            }
            if (bVar8 <= bVar19) goto LAB_0062c4ac;
            uVar17 = uVar17 + 1;
            uVar22 = uVar30;
          } while (local_2e0 != uVar17);
          goto LAB_0062c4a9;
        }
        puVar15 = puVar27 + 2;
        uVar12 = 1;
        uVar17 = 2;
LAB_0062c2d8:
        uVar22 = 0;
LAB_0062c2da:
        puVar15 = puVar15 + -uVar22;
        do {
          puVar15 = puVar15 + -1;
          uVar9 = puVar27[uVar22];
          puVar27[uVar22] = *puVar15;
          *puVar15 = uVar9;
          uVar22 = uVar22 + 1;
        } while (uVar12 != uVar22);
      }
      else {
        bVar28 = 1;
        if (cVar1 != '\x01') {
          bVar28 = 2;
        }
        if (bVar24 < bVar28) goto code_r0x0062c2c0;
LAB_0062c327:
        uVar17 = 2;
        if (local_2e0 == 2) goto LAB_0062c5f0;
        do {
          uVar30 = (ulong)puVar27[uVar17];
          if (uVar12 <= uVar30) goto LAB_0062cad4;
          cVar1 = *(char *)(lVar23 + 0x18 + uVar30 * 0x20);
          if (cVar1 == '\0') {
            bVar19 = (*(int *)plVar2[1] == 2) * '\x03';
          }
          else {
            bVar19 = 1;
            if (cVar1 != '\x01') {
              bVar19 = 2;
            }
          }
          if (uVar12 <= uVar22) goto LAB_0062cac4;
          cVar1 = *(char *)(lVar23 + 0x18 + uVar22 * 0x20);
          if (cVar1 == '\0') {
            bVar8 = (*(int *)plVar2[1] == 2) * '\x03';
          }
          else {
            bVar8 = 1;
            if (cVar1 != '\x01') {
              bVar8 = 2;
            }
          }
          if (bVar19 < bVar8) goto LAB_0062c4ac;
          uVar17 = uVar17 + 1;
          uVar22 = uVar30;
        } while (local_2e0 != uVar17);
LAB_0062c4a9:
        uVar17 = local_2e0;
LAB_0062c4ac:
        if (uVar17 < uVar11) goto LAB_0062c1a3;
        if ((bVar24 < bVar28) && (uVar12 = uVar17 >> 1, uVar12 != 0)) {
          puVar15 = puVar27 + uVar17;
          if (uVar12 < 4) goto LAB_0062c2d8;
          if (uVar12 < 0x10) {
            uVar30 = 0;
          }
          else {
            uVar22 = uVar12 & 0x7ffffffffffffff0;
            pauVar25 = (undefined1 (*) [32])(param_1 + 0x20 + uVar20 * 4);
            lVar23 = uVar17 * 4 + uVar20 * 4 + param_1 + -0x20;
            lVar29 = 0;
            do {
              auVar34 = auVar35._0_32_;
              auVar5 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar23 + lVar29 * 4));
              auVar6 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar23 + -0x20 + lVar29 * 4));
              auVar7 = vpermps_avx2(auVar34,pauVar25[-1]);
              pauVar25[-1] = auVar5;
              auVar5 = vpermps_avx2(auVar34,*pauVar25);
              *pauVar25 = auVar6;
              *(undefined1 (*) [32])(lVar23 + lVar29 * 4) = auVar7;
              *(undefined1 (*) [32])(lVar23 + -0x20 + lVar29 * 4) = auVar5;
              lVar29 = lVar29 + -0x10;
              pauVar25 = pauVar25 + 2;
            } while (-lVar29 != (uVar12 & 0xfffffffffffffff0));
            if (uVar12 == uVar22) goto LAB_0062c5f0;
            uVar30 = uVar22;
            if ((uVar12 & 0xc) == 0) goto LAB_0062c2da;
          }
          uVar22 = uVar12 & 0x7ffffffffffffffc;
          lVar23 = -uVar30;
          pauVar26 = (undefined1 (*) [16])(uVar30 * 4 + uVar20 * 4 + param_1);
          lVar29 = uVar20 * 4 + uVar17 * 4 + param_1 + -0x10;
          do {
            auVar3 = vpermilps_avx(*(undefined1 (*) [16])(lVar29 + lVar23 * 4),0x1b);
            auVar4 = vpermilps_avx(*pauVar26,0x1b);
            *pauVar26 = auVar3;
            *(undefined1 (*) [16])(lVar29 + lVar23 * 4) = auVar4;
            lVar23 = lVar23 + -4;
            pauVar26 = pauVar26 + 1;
          } while (-lVar23 != (uVar12 & 0xfffffffffffffffc));
          if (uVar12 != uVar22) goto LAB_0062c2da;
        }
      }
    }
LAB_0062c5f0:
    local_2e0 = uVar17 * 2 + 1;
  }
  lVar23 = LZCOUNT(((local_2e0 >> 1) + uVar20 * 2) * uVar10 ^ (uVar20 * 2 - (uVar32 >> 1)) * uVar10)
  ;
  uVar17 = uVar32;
  do {
    uVar32 = local_2e0;
    if (1 < uVar16) {
      do {
        while( true ) {
          if (abStack_283[uVar16] < (byte)lVar23) goto LAB_0062ca45;
          uVar16 = uVar16 - 1;
          uVar22 = auStack_240[uVar16];
          uVar31 = uVar22 >> 1;
          uVar30 = uVar17 >> 1;
          uVar12 = uVar30 + uVar31;
          if ((param_4 < uVar12) || ((((uint)uVar22 | (uint)uVar17) & 1) != 0)) break;
          uVar17 = uVar12 * 2;
          if (uVar16 < 2) goto LAB_0062ca40;
        }
        puVar27 = (uint *)(param_1 + (uVar20 - uVar12) * 4);
        if ((uVar22 & 1) == 0) {
          quicksort::quicksort::
          <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                    (puVar27,uVar31,param_3,param_4,(int)LZCOUNT(uVar31 | 1) * 2 ^ 0x7e,0,param_6);
          auVar35 = ZEXT3264(_DAT_002034a0);
        }
        if ((uVar17 & 1) == 0) {
          quicksort::quicksort::
          <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                    (puVar27 + uVar31,uVar30,param_3,param_4,(int)LZCOUNT(uVar30 | 1) * 2 ^ 0x7e,0,
                     param_6);
          auVar35 = ZEXT3264(_DAT_002034a0);
        }
        if ((uVar30 != 0) && (uVar31 != 0)) {
          uVar17 = uVar30;
          if (uVar31 < uVar30) {
            uVar17 = uVar31;
          }
          if (uVar17 <= param_4) {
            plVar2 = (long *)*param_6;
            puVar15 = puVar27 + uVar31;
            puVar18 = puVar27;
            if (uVar30 < uVar31) {
              puVar18 = puVar15;
            }
            (*(code *)PTR_memcpy_00841de0)(param_3,puVar18,uVar17 * 4);
            puVar18 = param_3 + uVar17;
            plVar2 = (long *)*plVar2;
            lVar29 = *plVar2;
            uVar17 = *(ulong *)(lVar29 + 0x70);
            puVar13 = param_3;
            if (uVar30 < uVar31) {
              puVar14 = (uint *)(param_1 + -4 + uVar20 * 4);
              puVar21 = puVar15;
              do {
                uVar12 = (ulong)puVar18[-1];
                if (uVar17 <= uVar12) goto LAB_0062caba;
                cVar1 = *(char *)(*(long *)(lVar29 + 0x68) + 0x18 + uVar12 * 0x20);
                if (cVar1 == '\0') {
                  bVar24 = (*(int *)plVar2[1] == 2) * '\x03';
                }
                else {
                  bVar24 = 1;
                  if (cVar1 != '\x01') {
                    bVar24 = 2;
                  }
                }
                uVar12 = (ulong)puVar21[-1];
                if (uVar17 <= uVar12) goto LAB_0062caba;
                cVar1 = *(char *)(*(long *)(lVar29 + 0x68) + 0x18 + uVar12 * 0x20);
                if (cVar1 == '\0') {
                  bVar28 = (*(int *)plVar2[1] == 2) * '\x03';
                }
                else {
                  bVar28 = 1;
                  if (cVar1 != '\x01') {
                    bVar28 = 2;
                  }
                }
                bVar33 = bVar24 < bVar28;
                puVar15 = puVar18 + -1;
                if (bVar33) {
                  puVar15 = puVar21 + -1;
                }
                *puVar14 = *puVar15;
                puVar21 = puVar21 + -1 + !bVar33;
                puVar18 = puVar18 + -1 + bVar33;
              } while ((puVar21 != puVar27) && (puVar14 = puVar14 + -1, puVar18 != param_3));
            }
            else {
              puVar21 = puVar27;
              do {
                uVar12 = (ulong)*puVar15;
                if (uVar17 <= uVar12) {
LAB_0062caba:
                    /* WARNING: Subroutine does not return */
                  panicking::panic_bounds_check(uVar12,uVar17,&PTR_s_src_parse_rs_00210c28);
                }
                cVar1 = *(char *)(*(long *)(lVar29 + 0x68) + 0x18 + uVar12 * 0x20);
                if (cVar1 == '\0') {
                  bVar24 = (*(int *)plVar2[1] == 2) * '\x03';
                }
                else {
                  bVar24 = 1;
                  if (cVar1 != '\x01') {
                    bVar24 = 2;
                  }
                }
                uVar12 = (ulong)*puVar13;
                if (uVar17 <= uVar12) goto LAB_0062caba;
                cVar1 = *(char *)(*(long *)(lVar29 + 0x68) + 0x18 + uVar12 * 0x20);
                if (cVar1 == '\0') {
                  bVar28 = (*(int *)plVar2[1] == 2) * '\x03';
                }
                else {
                  bVar28 = 1;
                  if (cVar1 != '\x01') {
                    bVar28 = 2;
                  }
                }
                bVar33 = bVar24 < bVar28;
                puVar27 = puVar13;
                if (bVar33) {
                  puVar27 = puVar15;
                }
                *puVar21 = *puVar27;
                puVar13 = puVar13 + !bVar33;
                puVar21 = puVar21 + 1;
              } while ((puVar13 != puVar18) &&
                      (puVar15 = puVar15 + bVar33, puVar15 != (uint *)(param_1 + uVar20 * 4)));
            }
            (*(code *)PTR_memcpy_00841de0)(puVar21,puVar13,(long)puVar18 - (long)puVar13);
            auVar35 = ZEXT3264(_DAT_002034a0);
          }
        }
        uVar17 = (uVar30 + uVar31) * 2 + 1;
      } while (1 < uVar16);
LAB_0062ca40:
      uVar16 = 1;
    }
LAB_0062ca45:
    auStack_240[uVar16] = uVar17;
    abStack_283[uVar16 + 1] = (byte)lVar23;
    if (param_2 <= uVar20) {
      if ((uVar17 & 1) == 0) {
        quicksort::quicksort::
        <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                  (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0,param_6);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar20 = uVar20 + (uVar32 >> 1);
    local_2e0 = param_2 - uVar20;
    if (uVar20 <= param_2 && param_2 - uVar20 != 0) goto LAB_0062c190;
LAB_0062c16b:
    lVar23 = 0;
    local_2e0 = 1;
    uVar17 = uVar32;
  } while( true );
}


// ==== core::slice::sort::stable::quicksort::quicksort::<u32, <[u32]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#2}>::{closure#0}> @ 0063a040 (4565 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<u32,
   <[u32]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
          (uint *param_1,ulong param_2,uint *param_3,ulong param_4,int param_5,uint *param_6,
          undefined8 *param_7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  uint *puVar13;
  byte bVar14;
  ulong uVar15;
  uint *puVar16;
  undefined1 (*pauVar17) [32];
  uint *puVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  byte bVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *local_68;
  uint *local_58;
  uint local_4c;
  uint *local_48;
  ulong local_40;
  ulong local_38;
  
joined_r0x0063a067:
  if (0x20 < param_2) {
    local_48 = param_1 + 0x18;
    uVar19 = param_2;
LAB_0063a080:
    if (param_5 == 0) {
      drift::sort::
      <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                (param_1,uVar19,param_3,param_4,1,param_7);
      return;
    }
    uVar15 = uVar19 >> 3;
    puVar13 = param_1 + uVar15 * 4;
    puVar18 = param_1 + uVar15 * 7;
    if (uVar19 < 0x40) {
      local_68 = (long *)*param_7;
      uVar22 = (ulong)*param_1;
      plVar4 = (long *)*local_68;
      uVar15 = *(ulong *)(*plVar4 + 0x70);
      if (uVar15 <= uVar22) goto LAB_0063b313;
      lVar21 = *(long *)(*plVar4 + 0x68);
      cVar1 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
      if (cVar1 == '\0') {
        bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
      }
      else {
        bVar24 = 1;
        if (cVar1 != '\x01') {
          bVar24 = 2;
        }
      }
      uVar22 = (ulong)*puVar13;
      if (uVar15 <= uVar22) goto LAB_0063b313;
      cVar2 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
      if (cVar2 == '\0') {
        bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
        if (cVar1 == '\x02') goto LAB_0063a1a6;
LAB_0063a179:
        bVar20 = 1;
        if (cVar1 != '\x01') {
          bVar20 = (*(int *)plVar4[1] == 2) * '\x03';
        }
      }
      else {
        bVar26 = 1;
        if (cVar2 != '\x01') {
          bVar26 = 2;
        }
        if (cVar1 != '\x02') goto LAB_0063a179;
LAB_0063a1a6:
        bVar20 = 2;
      }
      uVar22 = (ulong)*puVar18;
      if (uVar15 <= uVar22) goto LAB_0063b313;
      cVar1 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
      if (cVar1 == '\0') {
        bVar14 = (*(int *)plVar4[1] == 2) * '\x03';
      }
      else {
        bVar14 = 1;
        if (cVar1 != '\x01') {
          bVar14 = 2;
        }
      }
      if (bVar20 < bVar14 == bVar24 < bVar26) {
        if (cVar2 == '\x02') {
          bVar20 = 2;
          if (cVar1 == '\x02') goto LAB_0063a247;
LAB_0063a225:
          bVar14 = 1;
          if (cVar1 != '\x01') {
            bVar14 = (*(int *)plVar4[1] == 2) * '\x03';
          }
        }
        else {
          bVar20 = 1;
          if (cVar2 != '\x01') {
            bVar20 = (*(int *)plVar4[1] == 2) * '\x03';
          }
          if (cVar1 != '\x02') goto LAB_0063a225;
LAB_0063a247:
          bVar14 = 2;
        }
        if (bVar20 < bVar14 != bVar24 < bVar26) {
          puVar13 = puVar18;
        }
      }
      else {
        puVar13 = param_1;
      }
    }
    else {
      puVar13 = (uint *)shared::pivot::median3_rec::
                        <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                                  (param_1,puVar13,puVar18,uVar15,param_7);
      local_68 = (long *)*param_7;
    }
    param_5 = param_5 + -1;
    local_40 = (long)puVar13 - (long)param_1;
    uVar25 = local_40 >> 2;
    local_4c = *puVar13;
    uVar22 = (ulong)local_4c;
    if (param_6 != (uint *)0x0) {
      uVar28 = (ulong)*param_6;
      plVar4 = (long *)*local_68;
      uVar15 = *(ulong *)(*plVar4 + 0x70);
      if (uVar15 <= uVar28) goto LAB_0063b320;
      lVar21 = *(long *)(*plVar4 + 0x68);
      cVar1 = *(char *)(lVar21 + 0x18 + uVar28 * 0x20);
      if (cVar1 == '\0') {
        bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
      }
      else {
        bVar24 = 1;
        if (cVar1 != '\x01') {
          bVar24 = 2;
        }
      }
      if (uVar15 <= uVar22) goto LAB_0063b313;
      cVar1 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
      if (cVar1 == '\0') {
        bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
      }
      else {
        bVar26 = 1;
        if (cVar1 != '\x01') {
          bVar26 = 2;
        }
      }
      if (bVar26 <= bVar24) goto LAB_0063a8a0;
    }
    if (uVar19 <= param_4) {
      puVar13 = param_3 + uVar19;
      param_2 = 0;
      uVar27 = uVar25;
      puVar18 = param_1;
      do {
        lVar21 = 0;
        if (2 < uVar27) {
          lVar21 = uVar27 - 3;
        }
        local_38 = uVar25;
        if (puVar18 < param_1 + lVar21) {
          plVar4 = (long *)*local_68;
          lVar6 = *plVar4;
          uVar15 = *(ulong *)(lVar6 + 0x70);
          if (uVar22 < uVar15) {
            do {
              uVar28 = (ulong)*puVar18;
              if (uVar15 <= uVar28) goto LAB_0063b320;
              lVar29 = *(long *)(lVar6 + 0x68);
              cVar1 = *(char *)(lVar29 + 0x18 + uVar28 * 0x20);
              if (cVar1 == '\0') {
                bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
              }
              else {
                bVar24 = 1;
                if (cVar1 != '\x01') {
                  bVar24 = 2;
                }
              }
              cVar1 = *(char *)(lVar29 + 0x18 + uVar22 * 0x20);
              if (cVar1 == '\0') {
                bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
              }
              else {
                bVar26 = 1;
                if (cVar1 != '\x01') {
                  bVar26 = 2;
                }
              }
              puVar16 = puVar13 + -1;
              if (bVar24 < bVar26) {
                puVar16 = param_3;
              }
              puVar16[param_2] = *puVar18;
              lVar30 = param_2 + (bVar24 < bVar26);
              uVar28 = (ulong)puVar18[1];
              if (uVar15 <= uVar28) goto LAB_0063b320;
              cVar2 = *(char *)(lVar29 + 0x18 + uVar28 * 0x20);
              if (cVar2 == '\0') {
                bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
                if (cVar1 == '\0') goto LAB_0063a4d7;
LAB_0063a4a9:
                bVar26 = 1;
                if (cVar1 != '\x01') {
                  bVar26 = 2;
                }
              }
              else {
                bVar24 = 1;
                if (cVar2 != '\x01') {
                  bVar24 = 2;
                }
                if (cVar1 != '\0') goto LAB_0063a4a9;
LAB_0063a4d7:
                bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
              }
              puVar16 = puVar13 + -2;
              if (bVar24 < bVar26) {
                puVar16 = param_3;
              }
              puVar16[lVar30] = puVar18[1];
              lVar30 = lVar30 + (ulong)(bVar24 < bVar26);
              uVar28 = (ulong)puVar18[2];
              if (uVar15 <= uVar28) goto LAB_0063b320;
              cVar2 = *(char *)(lVar29 + 0x18 + uVar28 * 0x20);
              if (cVar2 == '\0') {
                bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
                if (cVar1 == '\0') goto LAB_0063a557;
LAB_0063a529:
                bVar26 = 1;
                if (cVar1 != '\x01') {
                  bVar26 = 2;
                }
              }
              else {
                bVar24 = 1;
                if (cVar2 != '\x01') {
                  bVar24 = 2;
                }
                if (cVar1 != '\0') goto LAB_0063a529;
LAB_0063a557:
                bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
              }
              puVar16 = puVar13 + -3;
              if (bVar24 < bVar26) {
                puVar16 = param_3;
              }
              puVar16[lVar30] = puVar18[2];
              lVar30 = lVar30 + (ulong)(bVar24 < bVar26);
              uVar28 = (ulong)puVar18[3];
              if (uVar15 <= uVar28) goto LAB_0063b320;
              cVar2 = *(char *)(lVar29 + 0x18 + uVar28 * 0x20);
              if (cVar2 == '\0') {
                bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
                if (cVar1 != '\0') goto LAB_0063a5cb;
LAB_0063a3a0:
                bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
              }
              else {
                bVar24 = 1;
                if (cVar2 != '\x01') {
                  bVar24 = 2;
                }
                if (cVar1 == '\0') goto LAB_0063a3a0;
LAB_0063a5cb:
                bVar26 = 1;
                if (cVar1 != '\x01') {
                  bVar26 = 2;
                }
              }
              puVar13 = puVar13 + -4;
              puVar16 = puVar13;
              if (bVar24 < bVar26) {
                puVar16 = param_3;
              }
              puVar16[lVar30] = puVar18[3];
              param_2 = lVar30 + (ulong)(bVar24 < bVar26);
              puVar18 = puVar18 + 4;
            } while (puVar18 < param_1 + lVar21);
            goto LAB_0063a5f0;
          }
LAB_0063b30b:
          uVar28 = (ulong)*puVar18;
          if (uVar28 < uVar15) goto LAB_0063b313;
          goto LAB_0063b320;
        }
LAB_0063a5f0:
        if (puVar18 < param_1 + uVar27) {
          plVar4 = (long *)*local_68;
          lVar21 = *plVar4;
          uVar15 = *(ulong *)(lVar21 + 0x70);
          if (uVar15 <= uVar22) goto LAB_0063b30b;
          do {
            uVar28 = (ulong)*puVar18;
            if (uVar15 <= uVar28) goto LAB_0063b320;
            lVar6 = *(long *)(lVar21 + 0x68);
            cVar1 = *(char *)(lVar6 + 0x18 + uVar28 * 0x20);
            if (cVar1 == '\0') {
              bVar24 = (*(int *)plVar4[1] == 2) * '\x03';
            }
            else {
              bVar24 = 1;
              if (cVar1 != '\x01') {
                bVar24 = 2;
              }
            }
            cVar1 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
            if (cVar1 == '\0') {
              bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
            }
            else {
              bVar26 = 1;
              if (cVar1 != '\x01') {
                bVar26 = 2;
              }
            }
            puVar13 = puVar13 + -1;
            puVar16 = puVar13;
            if (bVar24 < bVar26) {
              puVar16 = param_3;
            }
            puVar16[param_2] = *puVar18;
            param_2 = param_2 + (bVar24 < bVar26);
            puVar18 = puVar18 + 1;
          } while (puVar18 < param_1 + uVar27);
        }
        if (uVar27 == uVar19) goto LAB_0063a710;
        puVar13[param_2 - 1] = *puVar18;
        puVar13 = puVar13 + -1;
        puVar18 = puVar18 + 1;
        uVar27 = uVar19;
      } while( true );
    }
    goto LAB_0063b2f2;
  }
code_r0x0063adc0:
  if (param_2 < 2) {
    return;
  }
  plVar4 = (long *)*param_7;
  uVar19 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      *param_3 = *param_1;
      param_3[uVar19] = param_1[uVar19];
      uVar25 = 1;
      if (1 < uVar19) goto LAB_0063af35;
    }
    else {
      shared::smallsort::sort4_stable::
      <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                (param_1,param_3,*plVar4);
      shared::smallsort::sort4_stable::
      <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
                (param_1 + uVar19,param_3 + uVar19,*plVar4);
      uVar25 = 4;
      if (4 < uVar19) {
LAB_0063af35:
        plVar5 = (long *)*plVar4;
        lVar21 = *plVar5;
        uVar15 = *(ulong *)(lVar21 + 0x70);
        uVar23 = (ulong)(uint)((int)uVar25 * 4);
        uVar27 = uVar25;
        do {
          uVar3 = param_1[uVar27];
          uVar22 = (ulong)uVar3;
          param_3[uVar27] = uVar3;
          if (uVar15 <= uVar22) goto LAB_0063b313;
          lVar6 = *(long *)(lVar21 + 0x68);
          cVar1 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
          if (cVar1 == '\0') {
            bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
          }
          else {
            bVar24 = 1;
            if (cVar1 != '\x01') {
              bVar24 = 2;
            }
          }
          uVar28 = (ulong)param_3[uVar27 - 1];
          if (uVar15 <= uVar28) goto LAB_0063b320;
          cVar2 = *(char *)(lVar6 + 0x18 + uVar28 * 0x20);
          if (cVar2 == '\0') {
            bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
          }
          else {
            bVar26 = 1;
            if (cVar2 != '\x01') {
              bVar26 = 2;
            }
          }
          if (bVar24 < bVar26) {
            uVar22 = uVar23;
            do {
              *(int *)((long)param_3 + uVar22) = (int)uVar28;
              if (uVar22 == 4) {
                puVar13 = param_3;
                goto LAB_0063af63;
              }
              if (cVar1 == '\x02') {
                bVar24 = 2;
              }
              else {
                bVar24 = 1;
                if (cVar1 != '\x01') {
                  bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
                }
              }
              uVar28 = (ulong)*(uint *)((long)param_3 + (uVar22 - 8));
              if (uVar15 <= uVar28) goto LAB_0063b320;
              cVar2 = *(char *)(lVar6 + 0x18 + uVar28 * 0x20);
              if (cVar2 == '\0') {
                bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
              }
              else {
                bVar26 = 1;
                if (cVar2 != '\x01') {
                  bVar26 = 2;
                }
              }
              uVar22 = uVar22 - 4;
            } while (bVar24 < bVar26);
            puVar13 = (uint *)(uVar22 + (long)param_3);
LAB_0063af63:
            *puVar13 = uVar3;
          }
          uVar27 = uVar27 + 1;
          uVar23 = uVar23 + 4;
        } while (uVar27 != uVar19);
      }
    }
  }
  else {
    shared::smallsort::sort4_stable::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_1,param_3 + param_2,*plVar4);
    shared::smallsort::sort4_stable::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_1 + 4,param_3 + param_2 + 4,*plVar4);
    uVar25 = 8;
    shared::smallsort::bidirectional_merge::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_3 + param_2,8,param_3,plVar4);
    shared::smallsort::sort4_stable::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_1 + uVar19,param_3 + param_2 + 8,*plVar4);
    shared::smallsort::sort4_stable::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_1 + uVar19 + 4,param_3 + param_2 + 0xc,*plVar4);
    shared::smallsort::bidirectional_merge::
    <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
              (param_3 + param_2 + 8,8,param_3 + uVar19,plVar4);
    if (8 < uVar19) goto LAB_0063af35;
  }
  if (uVar25 < param_2 - uVar19) {
    puVar13 = param_3 + uVar19;
    plVar5 = (long *)*plVar4;
    lVar21 = *plVar5;
    uVar15 = *(ulong *)(lVar21 + 0x70);
    uVar27 = (ulong)(uint)((int)uVar25 * 4);
    do {
      uVar3 = param_1[uVar19 + uVar25];
      uVar22 = (ulong)uVar3;
      puVar13[uVar25] = uVar3;
      if (uVar15 <= uVar22) {
LAB_0063b313:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar22,uVar15,&PTR_s_src_parse_rs_00210c28);
      }
      lVar6 = *(long *)(lVar21 + 0x68);
      cVar1 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
      if (cVar1 == '\0') {
        bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
      }
      else {
        bVar24 = 1;
        if (cVar1 != '\x01') {
          bVar24 = 2;
        }
      }
      uVar28 = (ulong)puVar13[uVar25 - 1];
      if (uVar15 <= uVar28) {
LAB_0063b320:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar28,uVar15,&PTR_s_src_parse_rs_00210c28);
      }
      cVar2 = *(char *)(lVar6 + 0x18 + uVar28 * 0x20);
      if (cVar2 == '\0') {
        bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
      }
      else {
        bVar26 = 1;
        if (cVar2 != '\x01') {
          bVar26 = 2;
        }
      }
      if (bVar24 < bVar26) {
        uVar22 = uVar27;
        do {
          *(int *)((long)puVar13 + uVar22) = (int)uVar28;
          if (uVar22 == 4) {
            puVar18 = puVar13;
            goto LAB_0063b133;
          }
          if (cVar1 == '\0') {
            bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
          }
          else {
            bVar24 = 1;
            if (cVar1 != '\x01') {
              bVar24 = 2;
            }
          }
          uVar28 = (ulong)*(uint *)((long)puVar13 + (uVar22 - 8));
          if (uVar15 <= uVar28) goto LAB_0063b320;
          cVar2 = *(char *)(lVar6 + 0x18 + uVar28 * 0x20);
          if (cVar2 == '\0') {
            bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
          }
          else {
            bVar26 = 1;
            if (cVar2 != '\x01') {
              bVar26 = 2;
            }
          }
          uVar22 = uVar22 - 4;
        } while (bVar24 < bVar26);
        puVar18 = (uint *)(uVar22 + (long)puVar13);
LAB_0063b133:
        *puVar18 = uVar3;
      }
      uVar25 = uVar25 + 1;
      uVar27 = uVar27 + 4;
    } while (uVar25 != param_2 - uVar19);
  }
  shared::smallsort::bidirectional_merge::
  <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
            (param_3,param_2,param_1,plVar4);
  return;
LAB_0063a710:
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,param_2 * 4);
  auVar12 = _DAT_002034a0;
  uVar15 = uVar19 - param_2;
  if (uVar15 == 0) goto LAB_0063a845;
  if (uVar15 < 8) {
    uVar22 = 0;
  }
  else {
    if (uVar15 < 0x20) {
      uVar25 = 0;
    }
    else {
      uVar22 = uVar15 & 0xffffffffffffffe0;
      pauVar17 = (undefined1 (*) [32])(local_48 + param_2);
      lVar21 = 0;
      do {
        auVar11 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -8));
        auVar8 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x10));
        auVar9 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x18));
        auVar10 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x20));
        pauVar17[-3] = auVar11;
        pauVar17[-2] = auVar8;
        pauVar17[-1] = auVar9;
        *pauVar17 = auVar10;
        lVar21 = lVar21 + -0x20;
        pauVar17 = pauVar17 + 4;
      } while (-lVar21 != uVar22);
      if (uVar15 == uVar22) goto LAB_0063a845;
      uVar25 = uVar22;
      if ((uVar15 & 0x18) == 0) goto LAB_0063a81c;
    }
    uVar22 = uVar15 & 0xfffffffffffffff8;
    pauVar17 = (undefined1 (*) [32])(param_3 + uVar19 + (-8 - uVar25));
    do {
      auVar11 = vpermps_avx2(auVar12,*pauVar17);
      *(undefined1 (*) [32])(param_1 + param_2 + uVar25) = auVar11;
      uVar25 = uVar25 + 8;
      pauVar17 = pauVar17 + -1;
    } while (uVar22 != uVar25);
    if (uVar15 == uVar22) goto LAB_0063a845;
  }
LAB_0063a81c:
  uVar25 = uVar22 + param_2;
  puVar13 = param_3 + uVar19 + (-1 - uVar22);
  do {
    param_1[uVar25] = *puVar13;
    uVar25 = uVar25 + 1;
    puVar13 = puVar13 + -1;
  } while (uVar19 != uVar25);
LAB_0063a845:
  uVar25 = local_38;
  if (param_2 == 0) goto LAB_0063a8a0;
  if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
  }
  <u32,<[u32]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_2_>::_closure_0_>
            (param_1 + param_2,uVar15,param_3,param_4,param_5,&local_4c,param_7);
  uVar19 = param_2;
  if (param_2 < 0x21) goto code_r0x0063adc0;
  goto LAB_0063a080;
LAB_0063a8a0:
  if (param_4 < uVar19) {
LAB_0063b2f2:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  puVar13 = param_3 + uVar19;
  plVar4 = (long *)*param_7;
  uVar28 = 0;
  puVar18 = param_1;
  while( true ) {
    lVar21 = 0;
    if (2 < uVar25) {
      lVar21 = uVar25 - 3;
    }
    if (puVar18 < param_1 + lVar21) {
      uVar22 = (ulong)*(uint *)((long)param_1 + local_40);
      plVar5 = (long *)*plVar4;
      uVar15 = *(ulong *)(*plVar5 + 0x70);
      if (uVar15 <= uVar22) goto LAB_0063b313;
      lVar6 = *(long *)(*plVar5 + 0x68);
      cVar1 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
      do {
        if (cVar1 == '\0') {
          bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar24 = 1;
          if (cVar1 != '\x01') {
            bVar24 = 2;
          }
        }
        uVar22 = (ulong)*puVar18;
        if (uVar15 <= uVar22) goto LAB_0063b313;
        cVar2 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar16 = puVar13 + -1;
        if (bVar24 >= bVar26) {
          puVar16 = param_3;
        }
        puVar16[uVar28] = *puVar18;
        lVar29 = (uVar28 + 1) - (ulong)(bVar24 < bVar26);
        if (cVar1 == '\x02') {
          bVar24 = 2;
        }
        else {
          bVar24 = 1;
          if (cVar1 != '\x01') {
            bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
          }
        }
        uVar22 = (ulong)puVar18[1];
        if (uVar15 <= uVar22) goto LAB_0063b313;
        cVar2 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar16 = puVar13 + -2;
        if (bVar24 >= bVar26) {
          puVar16 = param_3;
        }
        puVar16[lVar29] = puVar18[1];
        lVar29 = (lVar29 + 1) - (ulong)(bVar24 < bVar26);
        if (cVar1 == '\x02') {
          bVar24 = 2;
        }
        else {
          bVar24 = 1;
          if (cVar1 != '\x01') {
            bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
          }
        }
        uVar22 = (ulong)puVar18[2];
        if (uVar15 <= uVar22) goto LAB_0063b313;
        cVar2 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar16 = puVar13 + -3;
        if (bVar24 >= bVar26) {
          puVar16 = param_3;
        }
        puVar16[lVar29] = puVar18[2];
        lVar29 = (lVar29 + 1) - (ulong)(bVar24 < bVar26);
        if (cVar1 == '\x02') {
          bVar24 = 2;
        }
        else {
          bVar24 = 1;
          if (cVar1 != '\x01') {
            bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
          }
        }
        uVar22 = (ulong)puVar18[3];
        if (uVar15 <= uVar22) goto LAB_0063b313;
        cVar2 = *(char *)(lVar6 + 0x18 + uVar22 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar13 = puVar13 + -4;
        puVar16 = puVar13;
        if (bVar24 >= bVar26) {
          puVar16 = param_3;
        }
        puVar16[lVar29] = puVar18[3];
        uVar28 = (lVar29 + 1) - (ulong)(bVar24 < bVar26);
        puVar18 = puVar18 + 4;
      } while (puVar18 < param_1 + lVar21);
    }
    if (puVar18 < param_1 + uVar25) {
      uVar22 = (ulong)*(uint *)((long)param_1 + local_40);
      plVar5 = (long *)*plVar4;
      uVar15 = *(ulong *)(*plVar5 + 0x70);
      if (uVar15 <= uVar22) goto LAB_0063b313;
      lVar21 = *(long *)(*plVar5 + 0x68);
      cVar1 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
      do {
        if (cVar1 == '\0') {
          bVar24 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar24 = 1;
          if (cVar1 != '\x01') {
            bVar24 = 2;
          }
        }
        uVar22 = (ulong)*puVar18;
        if (uVar15 <= uVar22) goto LAB_0063b313;
        cVar2 = *(char *)(lVar21 + 0x18 + uVar22 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar5[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar13 = puVar13 + -1;
        puVar16 = puVar13;
        if (bVar24 >= bVar26) {
          puVar16 = param_3;
        }
        puVar16[uVar28] = *puVar18;
        uVar28 = (uVar28 + 1) - (ulong)(bVar24 < bVar26);
        puVar18 = puVar18 + 1;
      } while (puVar18 < param_1 + uVar25);
    }
    if (uVar25 == uVar19) break;
    puVar13 = puVar13 + -1;
    param_3[uVar28] = *puVar18;
    uVar28 = uVar28 + 1;
    puVar18 = puVar18 + 1;
    uVar25 = uVar19;
  }
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar28 * 4);
  auVar12 = _DAT_002034a0;
  param_2 = uVar19 - uVar28;
  if (param_2 == 0) goto LAB_0063ad92;
  if (param_2 < 8) {
    uVar15 = 0;
  }
  else {
    if (param_2 < 0x20) {
      uVar22 = 0;
    }
    else {
      uVar15 = param_2 & 0xffffffffffffffe0;
      pauVar17 = (undefined1 (*) [32])(param_1 + uVar28 + 0x18);
      lVar21 = 0;
      do {
        auVar11 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -8));
        auVar8 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x10));
        auVar9 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x18));
        auVar10 = vpermps_avx2(auVar12,*(undefined1 (*) [32])(param_3 + uVar19 + lVar21 + -0x20));
        pauVar17[-3] = auVar11;
        pauVar17[-2] = auVar8;
        pauVar17[-1] = auVar9;
        *pauVar17 = auVar10;
        lVar21 = lVar21 + -0x20;
        pauVar17 = pauVar17 + 4;
      } while (-lVar21 != uVar15);
      if (param_2 == uVar15) goto LAB_0063ad92;
      uVar22 = uVar15;
      if ((param_2 & 0x18) == 0) goto LAB_0063ad6d;
    }
    uVar15 = param_2 & 0xfffffffffffffff8;
    pauVar17 = (undefined1 (*) [32])(param_3 + ((uVar19 - 8) - uVar22));
    do {
      auVar11 = vpermps_avx2(auVar12,*pauVar17);
      *(undefined1 (*) [32])(param_1 + uVar28 + uVar22) = auVar11;
      uVar22 = uVar22 + 8;
      pauVar17 = pauVar17 + -1;
    } while (uVar15 != uVar22);
    if (param_2 == uVar15) goto LAB_0063ad92;
  }
LAB_0063ad6d:
  uVar22 = uVar15 + uVar28;
  puVar13 = param_3 + ((uVar19 - 1) - uVar15);
  do {
    param_1[uVar22] = *puVar13;
    uVar22 = uVar22 + 1;
    puVar13 = puVar13 + -1;
  } while (uVar19 != uVar22);
LAB_0063ad92:
  if (uVar19 < uVar28) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar28,uVar19,uVar19,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
  }
  param_1 = param_1 + uVar28;
  local_58 = (uint *)0x0;
  param_6 = local_58;
  goto joined_r0x0063a067;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::initialize<<std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline::parse::fr_done::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 006458c0 (127 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  
  plVar1 = (long *)*param_1;
  lVar2 = plVar1[1];
  plVar3 = (long *)plVar1[2];
  lVar4 = *plVar1;
  *plVar1 = 0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  uVar5 = lVar2 == 0;
  if (lVar2 < 0) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if ((bool)uVar5) {
    lVar4 = 1;
  }
  else {
    lVar4 = __rustc[45371133cddedda4]::__rust_alloc(lVar2,1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar2);
    }
    (*(code *)PTR_memset_00841dd0)(lVar4,0,lVar2);
  }
  *plVar3 = lVar2;
  plVar3[1] = lVar4;
  plVar3[2] = lVar2;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::initialize<<std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::get_or_init<pipeline::parse::cpu_order::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00645940 (4444 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  code *pcVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  ulong *puVar33;
  long in_FS_OFFSET;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined8 local_188;
  ulong *local_180;
  code *local_178;
  ulong *local_170;
  code *local_168;
  ulong local_160;
  ulong local_158;
  ulong *local_150;
  long *local_148;
  code *local_140;
  ulong *local_138;
  code *local_130;
  ulong local_128;
  long local_120;
  long local_118;
  long local_110;
  ulong *local_108;
  ulong local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 local_e0 [16];
  ulong local_d0;
  code *local_c8;
  undefined8 local_c0;
  ulong local_b8 [17];
  
  plVar29 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  lVar30 = 0;
  lVar8 = syscall(0xcc,0,0x80,local_b8);
  if (0 < lVar8) {
    lVar8 = 0;
    uVar9 = 0;
LAB_006459c0:
    uVar20 = uVar9;
    uVar9 = uVar20 + 1;
    if ((local_b8[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0) goto LAB_00645a7b;
    uVar26 = uVar20 + 2;
    if ((local_b8[uVar9 >> 6] >> (uVar9 & 0x3f) & 1) != 0) {
LAB_00645a73:
      uVar20 = uVar9;
      uVar9 = uVar26;
      goto LAB_00645a7b;
    }
    uVar9 = uVar20 + 3;
    if ((local_b8[uVar26 >> 6] >> (uVar26 & 0x3f) & 1) != 0) {
      uVar20 = uVar26;
      goto LAB_00645a7b;
    }
    uVar26 = uVar20 + 4;
    if ((local_b8[uVar9 >> 6] >> (uVar9 & 0x3f) & 1) != 0) goto LAB_00645a73;
    if (uVar20 != 0x3fc) goto code_r0x00645a34;
    pcVar10 = (code *)&DAT_00000008;
    local_108 = (ulong *)0x0;
LAB_00645b46:
    pcVar11 = (code *)__rustc[45371133cddedda4]::__rust_alloc_zeroed(0x400,1);
    if (pcVar11 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x400);
    }
    local_120 = 0;
    local_118 = 8;
    local_110 = 0;
    pcVar18 = pcVar10;
    lVar23 = local_120;
    lVar31 = local_118;
    lVar30 = local_110;
    if (lVar8 == 0) goto joined_r0x00646a13;
    pcVar32 = pcVar10 + lVar8;
    local_168 = pcVar11;
    local_148 = plVar29;
    local_f8 = pcVar10;
    local_f0 = pcVar32;
LAB_00645bd7:
    local_128 = *(ulong *)pcVar10;
    if (0x3ff < local_128) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (local_128,0x400,&PTR_s_src_parse_rs_00210c78);
    }
    if (pcVar11[local_128] == (code)0x0) {
      local_180 = &local_128;
      local_178 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
      local_e8 = pcVar10;
      alloc[2a0ada2ddd1fabff]::fmt::format::format_inner(&local_d0,&DAT_0020afc8,&local_180);
      pcVar10 = local_c8;
      std[c60ef17cbf7de79f]::fs::read_to_string::inner(&local_180,local_c8,local_c0);
      if (local_d0 == 0) {
LAB_00645cd8:
        local_150 = local_180;
        pcVar10 = local_178;
        if (local_180 == (ulong *)0xffffffffffffffff) {
          if ((1 < ((uint)local_178 & 3) - 2) && (((ulong)local_178 & 3) != 0)) {
            (**(code **)(local_178 + 0x17))(local_178 + -1);
          }
          local_150 = (ulong *)0x0;
          pcVar10 = (code *)&DAT_00000001;
        }
        local_180 = (ulong *)0x0;
        local_178 = (code *)&DAT_00000008;
        local_170 = (ulong *)0x0;
        local_140 = pcVar10;
        auVar42 = <str>::trim_matches::<<char>::is_whitespace>();
        uVar9 = auVar42._8_8_;
        if (auVar42._0_8_ != 0) {
          pcVar10 = (code *)&DAT_00000008;
          local_158 = 0;
          puVar17 = (ulong *)0x0;
          puVar33 = (ulong *)0x0;
          bVar27 = false;
          auVar36 = ZEXT1664(CONCAT88(DAT_00201e28,DAT_00201e28));
          auVar38 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
          auVar39 = ZEXT1664(_DAT_00202c60);
          auVar40 = ZEXT1664(CONCAT88(DAT_00201db8,DAT_00201db8));
          auVar41 = ZEXT1664(_DAT_00202370);
          uVar9 = 0;
LAB_00645dcf:
          local_e0._8_8_ = auVar42._8_8_;
          local_e0._0_8_ = auVar42._0_8_;
          auVar37 = auVar38._0_16_;
          if (local_158 <= (ulong)local_e0._8_8_) {
            do {
              uVar20 = local_e0._8_8_ - local_158;
              lVar30 = local_e0._0_8_ + local_158;
              if (uVar20 < 0x10) {
                if (local_e0._8_8_ == local_158) goto LAB_00645f40;
                uVar25 = 0;
                while (*(char *)(lVar30 + uVar25) != ',') {
                  uVar25 = uVar25 + 1;
                  if (uVar20 == uVar25) goto LAB_00645f40;
                }
              }
              else {
                uVar26 = (lVar30 + 7U & 0xfffffffffffffff8) - lVar30;
                if (uVar26 == 0) {
                  uVar26 = 0;
                  goto LAB_00645e95;
                }
                uVar25 = 0;
                do {
                  if (*(char *)(lVar30 + uVar25) == ',') goto LAB_00645f05;
                  uVar25 = uVar25 + 1;
                } while (uVar26 != uVar25);
                for (; uVar26 <= uVar20 - 0x10; uVar26 = uVar26 + 0x10) {
LAB_00645e95:
                  auVar35 = vpaddq_avx(*(undefined1 (*) [16])(lVar30 + uVar26) ^ auVar36._0_16_,
                                       auVar37);
                  auVar35 = vpternlogq_avx512vl(auVar35,*(undefined1 (*) [16])(lVar30 + uVar26),
                                                auVar39._0_16_,0xf6);
                  if ((auVar35._8_8_ & auVar35._0_8_ & 0x8080808080808080) != 0x8080808080808080)
                  break;
                }
                if (uVar20 == uVar26) {
LAB_00645f40:
                  local_158 = local_e0._8_8_;
                  break;
                }
                lVar8 = 0;
                while (*(char *)(lVar30 + uVar26 + lVar8) != ',') {
                  lVar8 = lVar8 + 1;
                  if ((local_e0._8_8_ - uVar26) - local_158 == lVar8) goto LAB_00645f40;
                }
                uVar25 = lVar8 + uVar26;
              }
LAB_00645f05:
              local_160 = uVar25 + local_158 + 1;
              uVar25 = uVar25 + local_158;
              local_158 = local_160;
              if ((uVar25 < (ulong)local_e0._8_8_) && (*(char *)(local_e0._0_8_ + uVar25) == ',')) {
                bVar4 = false;
                goto LAB_00645f53;
              }
            } while (local_160 <= (ulong)local_e0._8_8_);
          }
          bVar4 = true;
          uVar25 = local_e0._8_8_;
          local_160 = uVar9;
LAB_00645f53:
          uVar25 = uVar25 - uVar9;
          lVar30 = uVar9 + local_e0._0_8_;
          local_188 = 0;
          local_100 = 0;
          uVar9 = 0;
          uVar20 = 0;
          uVar26 = 0;
          auVar35 = auVar42;
          do {
            uVar22 = auVar35._8_8_;
            bVar34 = true;
            if (uVar25 < uVar20) {
              local_188 = CONCAT71(auVar35._1_7_,1);
            }
            else {
              do {
                uVar9 = uVar25 - uVar20;
                lVar8 = lVar30 + uVar20;
                if (uVar9 < 0x10) {
                  if (uVar25 == uVar20) goto LAB_00646110;
                  uVar21 = 0;
                  while (*(char *)(lVar8 + uVar21) != '-') {
                    uVar21 = uVar21 + 1;
                    if (uVar9 == uVar21) goto LAB_00646110;
                  }
                }
                else {
                  uVar22 = (lVar8 + 7U & 0xfffffffffffffff8) - lVar8;
                  if (uVar22 == 0) {
                    uVar22 = 0;
                    goto LAB_00646055;
                  }
                  uVar21 = 0;
                  do {
                    if (*(char *)(lVar8 + uVar21) == '-') goto LAB_006460c5;
                    uVar21 = uVar21 + 1;
                  } while (uVar22 != uVar21);
                  for (; uVar22 <= uVar9 - 0x10; uVar22 = uVar22 + 0x10) {
LAB_00646055:
                    auVar35 = vpaddq_avx(*(undefined1 (*) [16])(lVar8 + uVar22) ^ auVar40._0_16_,
                                         auVar37);
                    auVar35 = vpternlogq_avx512vl(auVar35,*(undefined1 (*) [16])(lVar8 + uVar22),
                                                  auVar41._0_16_,0xf6);
                    if ((auVar35._8_8_ & auVar35._0_8_ & 0x8080808080808080) != 0x8080808080808080)
                    break;
                  }
                  if (uVar9 == uVar22) {
LAB_00646110:
                    local_188 = CONCAT71((int7)((ulong)lVar8 >> 8),1);
                    uVar9 = uVar25;
                    uVar20 = uVar25;
                    goto LAB_0064611d;
                  }
                  lVar8 = lVar8 + uVar22;
                  lVar23 = 0;
                  while (*(char *)(lVar8 + lVar23) != '-') {
                    lVar23 = lVar23 + 1;
                    if ((uVar25 - uVar22) - uVar20 == lVar23) goto LAB_00646110;
                  }
                  uVar21 = lVar23 + uVar22;
                }
LAB_006460c5:
                auVar35._8_8_ = uVar22;
                auVar35._0_8_ = lVar8;
                uVar9 = uVar21 + uVar20 + 1;
                uVar21 = uVar21 + uVar20;
                uVar20 = uVar9;
                if ((uVar21 < uVar25) && (*(char *)(lVar30 + uVar21) == '-')) {
                  bVar34 = false;
                  uVar21 = uVar21 - uVar26;
                  uVar24 = uVar9;
                  local_100 = uVar9;
                  goto joined_r0x006460fa;
                }
              } while (uVar9 <= uVar25);
              local_188 = CONCAT71((int7)((ulong)lVar8 >> 8),1);
            }
LAB_0064611d:
            auVar35._8_8_ = uVar22;
            auVar35._0_8_ = local_188;
            uVar21 = uVar25 - uVar26;
            uVar24 = uVar26;
joined_r0x006460fa:
            local_138 = puVar17;
            local_130 = pcVar10;
            if (uVar21 != 0) {
              pcVar19 = (char *)(uVar26 + lVar30);
              if (uVar21 == 1) {
                cVar7 = *pcVar19;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar22;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar22;
                auVar35 = auVar5 << 0x40;
                if ((cVar7 == '+') || (auVar35 = auVar6 << 0x40, cVar7 == '-')) goto LAB_00645f80;
              }
              else {
                cVar7 = *pcVar19;
              }
              uVar26 = (ulong)(cVar7 == '+');
              uVar22 = uVar21 - uVar26;
              if (uVar22 < 0x11) {
                if (uVar21 == uVar26) {
                  uVar21 = 0;
LAB_00646220:
                  uVar20 = uVar21;
                  uVar26 = local_100;
                  if ((char)local_188 == '\0') goto LAB_006462d9;
                  goto LAB_00646236;
                }
                uVar12 = 0;
                uVar21 = 0;
                while( true ) {
                  uVar15 = (byte)pcVar19[uVar12 + uVar26] - 0x30;
                  auVar35._8_4_ = uVar15;
                  auVar35._0_8_ = uVar12;
                  auVar35._12_4_ = 0;
                  if (9 < uVar15) break;
                  uVar21 = (ulong)uVar15 + uVar21 * 10;
                  uVar12 = uVar12 + 1;
                  if (uVar22 == uVar12) goto LAB_00646220;
                }
              }
              else {
                uVar12 = 0;
                uVar21 = 0;
                do {
                  if (uVar22 == uVar12) goto LAB_00646220;
                  auVar1._8_8_ = 0;
                  auVar1._0_8_ = uVar21;
                  auVar35 = auVar1 * ZEXT816(10);
                  uVar14 = auVar35._0_8_;
                  if (auVar35._8_8_ != 0) break;
                  uVar15 = (byte)pcVar19[uVar12 + uVar26] - 0x30;
                  uVar16 = (ulong)uVar15;
                  uVar21 = uVar14 + uVar16;
                  uVar13 = CONCAT71(auVar35._1_7_,CARRY8(uVar14,uVar16));
                  auVar3._8_4_ = uVar15;
                  auVar3._0_8_ = uVar13;
                  auVar3._12_4_ = 0;
                  auVar35._8_4_ = uVar15;
                  auVar35._0_8_ = uVar13;
                  auVar35._12_4_ = 0;
                  if (9 < uVar15) break;
                  uVar12 = uVar12 + 1;
                  auVar35 = auVar3;
                } while (!CARRY8(uVar14,uVar16));
              }
            }
LAB_00645f80:
            uVar26 = uVar24;
          } while (!bVar34);
          goto LAB_00645daa;
        }
        auVar42._8_8_ = DAT_00201e28;
        auVar42._0_8_ = DAT_00201e28;
        auVar37._8_8_ = DAT_00201d50;
        auVar37._0_8_ = DAT_00201d50;
        uVar20 = 0;
LAB_006465a2:
        do {
          uVar26 = uVar9 - uVar20;
          if (uVar26 < 0x10) {
            if (uVar9 == uVar20) goto LAB_006466e0;
            uVar22 = 0;
            while (*(char *)(uVar20 + uVar22) != ',') {
              uVar22 = uVar22 + 1;
              if (uVar26 == uVar22) goto LAB_006466e0;
            }
          }
          else {
            uVar25 = (uVar20 + 7 & 0xfffffffffffffff8) - uVar20;
            if (uVar25 == 0) {
              uVar25 = 0;
              goto LAB_00646635;
            }
            uVar22 = 0;
            do {
              if (*(char *)(uVar20 + uVar22) == ',') goto LAB_006466a5;
              uVar22 = uVar22 + 1;
            } while (uVar25 != uVar22);
            for (; uVar25 <= uVar26 - 0x10; uVar25 = uVar25 + 0x10) {
LAB_00646635:
              auVar35 = vpaddq_avx(*(undefined1 (*) [16])(uVar20 + uVar25) ^ auVar42,auVar37);
              auVar35 = vpternlogq_avx512vl(auVar35,*(undefined1 (*) [16])(uVar20 + uVar25),
                                            _DAT_00202c60,0xf6);
              if ((auVar35._8_8_ & auVar35._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
            }
            if (uVar26 == uVar25) goto LAB_006466e0;
            lVar30 = 0;
            while (*(char *)(uVar20 + uVar25 + lVar30) != ',') {
              lVar30 = lVar30 + 1;
              if ((uVar9 - uVar25) - uVar20 == lVar30) goto LAB_006466e0;
            }
            uVar22 = lVar30 + uVar25;
          }
LAB_006466a5:
          uVar26 = uVar22 + uVar20 + 1;
          if (uVar9 <= uVar20 + uVar22) {
            uVar20 = uVar26;
            if (uVar9 < uVar26) goto LAB_006466e0;
            goto LAB_006465a2;
          }
          if ((uVar9 < uVar26) ||
             (pcVar19 = (char *)(uVar20 + uVar22), uVar20 = uVar26, *pcVar19 == ','))
          goto LAB_006466e0;
        } while( true );
      }
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
          (pcVar10 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcVar10)) {
        free(pcVar10);
        goto LAB_00645cd8;
      }
      uVar9 = local_d0;
      if (local_d0 < 0x11) {
        uVar9 = 0x10;
      }
      lVar8 = LZCOUNT(uVar9 - 1);
      lVar30 = 0x40 - lVar8;
      if (0xffff < uVar9 - 1) {
        cVar7 = pipeline[509596c7b52975b2]::sys::big_put(pcVar10);
        if (cVar7 != '\0') goto LAB_00645cd8;
      }
      if (lVar8 != 0) {
        *(ulong *)pcVar10 = *(ulong *)(in_FS_OFFSET + lVar30 * 8 + -0x3c8);
        *(code **)(in_FS_OFFSET + lVar30 * 8 + -0x3c8) = pcVar10;
        goto LAB_00645cd8;
      }
      goto LAB_00646b4e;
    }
    goto LAB_00645bca;
  }
  lVar31 = 8;
  lVar23 = 0;
  goto LAB_00646af2;
code_r0x00645a34:
  uVar9 = uVar20 + 5;
  if ((local_b8[uVar26 >> 6] >> (uVar26 & 0x3f) & 1) != 0) {
    uVar20 = uVar20 + 4;
LAB_00645a7b:
    pcVar10 = (code *)__rustc[45371133cddedda4]::__rust_alloc(0x20,8);
    if (pcVar10 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x20);
    }
    *(ulong *)pcVar10 = uVar20;
    local_180 = (ulong *)&DAT_00000004;
    local_170 = (ulong *)&DAT_00000001;
    local_178 = pcVar10;
    do {
      puVar17 = local_170;
      uVar20 = 0x400;
      if (0x400 < uVar9) {
        uVar20 = uVar9;
      }
      do {
        uVar26 = uVar9;
        if (uVar20 == uVar26) {
          local_108 = local_180;
          lVar8 = (long)local_170 << 3;
          pcVar10 = local_178;
          goto LAB_00645b46;
        }
        uVar9 = uVar26 + 1;
      } while ((local_b8[uVar26 >> 6] >> (uVar26 & 0x3f) & 1) == 0);
      if (local_170 == local_180) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_180,local_170,1,8);
        pcVar10 = local_178;
      }
      *(ulong *)(pcVar10 + (long)puVar17 * 8) = uVar26;
      local_170 = (ulong *)((long)puVar17 + 1);
    } while( true );
  }
  goto LAB_006459c0;
LAB_006462d9:
  do {
    bVar34 = true;
    uVar20 = uVar9;
    if (uVar9 <= uVar25) {
      do {
        uVar9 = uVar25 - uVar20;
        lVar8 = lVar30 + uVar20;
        if (uVar9 < 0x10) {
          if (uVar25 == uVar20) goto LAB_00646440;
          uVar24 = 0;
          while (*(char *)(lVar8 + uVar24) != '-') {
            uVar24 = uVar24 + 1;
            if (uVar9 == uVar24) goto LAB_00646440;
          }
        }
        else {
          uVar22 = (lVar8 + 7U & 0xfffffffffffffff8) - lVar8;
          if (uVar22 == 0) {
            uVar22 = 0;
            goto LAB_00646395;
          }
          uVar24 = 0;
          do {
            if (*(char *)(lVar8 + uVar24) == '-') goto LAB_00646405;
            uVar24 = uVar24 + 1;
          } while (uVar22 != uVar24);
          for (; uVar22 <= uVar9 - 0x10; uVar22 = uVar22 + 0x10) {
LAB_00646395:
            auVar35 = vpaddq_avx(*(undefined1 (*) [16])(lVar8 + uVar22) ^ auVar40._0_16_,auVar37);
            auVar35 = vpternlogq_avx512vl(auVar35,*(undefined1 (*) [16])(lVar8 + uVar22),
                                          auVar41._0_16_,0xf6);
            if ((auVar35._8_8_ & auVar35._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
          }
          if (uVar9 == uVar22) {
LAB_00646440:
            uVar9 = uVar25;
            break;
          }
          lVar23 = 0;
          while (*(char *)(lVar8 + uVar22 + lVar23) != '-') {
            lVar23 = lVar23 + 1;
            if ((uVar25 - uVar22) - uVar20 == lVar23) goto LAB_00646440;
          }
          uVar24 = lVar23 + uVar22;
        }
LAB_00646405:
        uVar9 = uVar24 + uVar20 + 1;
        uVar24 = uVar24 + uVar20;
        if ((uVar24 < uVar25) && (*(char *)(lVar30 + uVar24) == '-')) {
          bVar34 = false;
          uVar24 = uVar24 - uVar26;
          uVar22 = uVar9;
          goto joined_r0x0064642f;
        }
        uVar20 = uVar9;
      } while (uVar9 <= uVar25);
    }
    uVar24 = uVar25 - uVar26;
    uVar22 = uVar26;
joined_r0x0064642f:
    if (uVar24 != 0) {
      pcVar19 = (char *)(uVar26 + lVar30);
      if (uVar24 == 1) {
        cVar7 = *pcVar19;
        if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_006462d0;
      }
      else {
        cVar7 = *pcVar19;
      }
      uVar26 = (ulong)(cVar7 == '+');
      uVar12 = uVar24 - uVar26;
      if (uVar12 < 0x11) {
        if (uVar24 == uVar26) {
          uVar20 = 0;
          goto LAB_00646236;
        }
        uVar24 = 0;
        uVar20 = 0;
        while ((byte)pcVar19[uVar24 + uVar26] - 0x30 < 10) {
          uVar20 = (ulong)((byte)pcVar19[uVar24 + uVar26] - 0x30) + uVar20 * 10;
          uVar24 = uVar24 + 1;
          if (uVar12 == uVar24) goto LAB_00646236;
        }
      }
      else {
        uVar24 = 0;
        uVar20 = 0;
        while( true ) {
          if (uVar12 == uVar24) goto LAB_00646236;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar20;
          uVar14 = SUB168(auVar2 * ZEXT816(10),0);
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
          uVar15 = (byte)pcVar19[uVar24 + uVar26] - 0x30;
          uVar20 = uVar14 + uVar15;
          if ((9 < uVar15) || (uVar24 = uVar24 + 1, CARRY8(uVar14,(ulong)uVar15))) break;
        }
      }
    }
LAB_006462d0:
    uVar26 = uVar22;
  } while (!bVar34);
  uVar20 = uVar21;
LAB_00646236:
  if (0x3fe < uVar20) {
    uVar20 = 0x3ff;
  }
  if (uVar21 <= uVar20) {
    do {
      bVar34 = uVar21 == local_128;
      if (puVar33 == puVar17) {
        local_e0 = auVar42;
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_180);
        auVar41 = ZEXT1664(_DAT_00202370);
        auVar40 = ZEXT1664(CONCAT88(DAT_00201db8,DAT_00201db8));
        auVar39 = ZEXT1664(_DAT_00202c60);
        auVar38 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
        auVar36 = ZEXT1664(CONCAT88(DAT_00201e28,DAT_00201e28));
        pcVar10 = local_178;
        puVar17 = local_180;
        auVar42 = local_e0;
      }
      bVar27 = (bool)(bVar27 | bVar34);
      *(ulong *)(pcVar10 + (long)puVar33 * 8) = uVar21;
      uVar21 = uVar21 + 1;
      puVar33 = (ulong *)((long)puVar33 + 1);
      local_170 = puVar33;
    } while (uVar20 + 1 != uVar21);
  }
LAB_00645daa:
  uVar9 = local_160;
  if (bVar4) goto LAB_00646560;
  goto LAB_00645dcf;
LAB_00646560:
  local_e0 = auVar42;
  if (bVar27) {
    if (puVar33 != (ulong *)0x0) {
      pcVar10 = local_178 + (long)puVar33 * 8;
      goto LAB_006467ca;
    }
    pcVar11 = local_168;
    puVar17 = local_180;
    pcVar18 = local_178;
  }
  else {
LAB_006466e0:
    pcVar11 = (code *)__rustc[45371133cddedda4]::__rust_alloc(8,8);
    pcVar10 = local_178;
    if (pcVar11 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,8);
    }
    *(ulong *)pcVar11 = local_128;
    if (local_180 != (ulong *)0x0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
          (local_178 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_178)) {
        free(local_178);
      }
      else {
        uVar9 = (long)local_180 << 3;
        if (uVar9 < 0x11) {
          uVar9 = 0x10;
        }
        lVar8 = LZCOUNT(uVar9 - 1);
        lVar30 = 0x40 - lVar8;
        if (0xffff < uVar9 - 1) {
          cVar7 = pipeline[509596c7b52975b2]::sys::big_put(local_178,lVar30);
          if (cVar7 != '\0') goto LAB_006467a7;
        }
        if (lVar8 == 0) goto LAB_00646b4e;
        *(ulong *)pcVar10 = *(ulong *)(in_FS_OFFSET + lVar30 * 8 + -0x3c8);
        *(code **)(in_FS_OFFSET + lVar30 * 8 + -0x3c8) = pcVar10;
      }
    }
LAB_006467a7:
    local_180 = (ulong *)&DAT_00000001;
    local_170 = (ulong *)&DAT_00000001;
    pcVar10 = pcVar11 + 8;
    local_178 = pcVar11;
LAB_006467ca:
    pcVar18 = local_178;
    puVar17 = local_180;
    pcVar11 = local_168;
    pcVar32 = local_178;
    auVar42 = local_e0;
    do {
      lVar30 = local_110;
      uVar9 = *(ulong *)pcVar32;
      if (((uVar9 < 0x400) && (pcVar11[uVar9] == (code)0x0)) &&
         ((local_b8[uVar9 >> 6] >> (uVar9 & 0x3f) & 1) != 0)) {
        pcVar11[uVar9] = (code)0x1;
        if (local_110 == local_120) {
          local_e0 = auVar42;
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(&local_120);
          pcVar11 = local_168;
          auVar42 = local_e0;
        }
        *(ulong *)(local_118 + lVar30 * 8) = uVar9;
        local_110 = lVar30 + 1;
      }
      pcVar32 = pcVar32 + 8;
    } while (pcVar32 != pcVar10);
  }
  local_e0 = auVar42;
  if (puVar17 != (ulong *)0x0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
        (pcVar18 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcVar18)) {
      free(pcVar18);
      pcVar11 = local_168;
    }
    else {
      uVar9 = (long)puVar17 << 3;
      if (uVar9 < 0x11) {
        uVar9 = 0x10;
      }
      lVar8 = LZCOUNT(uVar9 - 1);
      lVar30 = 0x40 - lVar8;
      if (0xffff < uVar9 - 1) {
        cVar7 = pipeline[509596c7b52975b2]::sys::big_put(pcVar18,lVar30);
        pcVar11 = local_168;
        if (cVar7 != '\0') goto LAB_0064691d;
      }
      if (lVar8 == 0) {
LAB_00646b4e:
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (lVar30,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *(ulong *)pcVar18 = *(ulong *)(in_FS_OFFSET + lVar30 * 8 + -0x3c8);
      *(code **)(in_FS_OFFSET + lVar30 * 8 + -0x3c8) = pcVar18;
    }
  }
LAB_0064691d:
  pcVar10 = local_e8;
  pcVar32 = local_f0;
  if (local_150 != (ulong *)0x0) {
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
        (local_140 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= local_140)) {
      free(local_140);
      pcVar11 = local_168;
    }
    else {
      puVar17 = local_150;
      if (local_150 < &DAT_00000011) {
        puVar17 = (ulong *)&DAT_00000010;
      }
      lVar30 = 0x40 - LZCOUNT((undefined1 *)((long)puVar17 + -1));
      if ((undefined1 *)0xffff < (undefined1 *)((long)puVar17 + -1)) {
        cVar7 = pipeline[509596c7b52975b2]::sys::big_put(local_140,lVar30);
        pcVar11 = local_168;
        if (cVar7 != '\0') goto LAB_00645bca;
      }
      *(ulong *)local_140 = *(ulong *)(in_FS_OFFSET + lVar30 * 8 + -0x3c8);
      *(code **)(in_FS_OFFSET + lVar30 * 8 + -0x3c8) = local_140;
    }
  }
LAB_00645bca:
  pcVar10 = pcVar10 + 8;
  plVar29 = local_148;
  pcVar18 = local_f8;
  lVar23 = local_120;
  lVar31 = local_118;
  lVar30 = local_110;
  if (pcVar10 == pcVar32) goto joined_r0x00646a13;
  goto LAB_00645bd7;
joined_r0x00646a13:
  local_120 = lVar23;
  local_118 = lVar31;
  local_110 = lVar30;
  if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
      (pcVar11 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
     (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcVar11)) {
    free(pcVar11);
  }
  else {
    *(ulong *)pcVar11 = *(ulong *)(in_FS_OFFSET + -0x378);
    *(code **)(in_FS_OFFSET + -0x378) = pcVar11;
  }
  if (local_108 == (ulong *)0x0) goto LAB_00646af2;
  if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (code *)0x0) ||
      (pcVar18 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
     (pipeline[509596c7b52975b2]::sys::A_END_0 <= pcVar18)) {
    free(pcVar18);
    goto LAB_00646af2;
  }
  uVar9 = 0x10;
  if (0x10 < (ulong)((long)local_108 << 3)) {
    uVar9 = (long)local_108 << 3;
  }
  lVar28 = LZCOUNT(uVar9 - 1);
  lVar8 = 0x40 - lVar28;
  local_148 = plVar29;
  if (uVar9 - 1 < 0x10000) {
LAB_00646ac4:
    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *(ulong *)pcVar18 = *(ulong *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
    *(code **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = pcVar18;
  }
  else {
    cVar7 = pipeline[509596c7b52975b2]::sys::big_put(pcVar18,lVar8);
    if (cVar7 == '\0') goto LAB_00646ac4;
  }
  plVar29 = local_148;
LAB_00646af2:
  *plVar29 = lVar23;
  plVar29[1] = lVar31;
  plVar29[2] = lVar30;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::get_or_init<pipeline::parse::drv::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00646c40 (193 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar4 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_RD",5,0);
  uVar2 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_PIN",6,2);
  uVar3 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_QORD",7,2);
  lVar5 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_CH",5,0x2000);
  lVar6 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_ST2Q",7,1);
  *plVar1 = lVar4 << 10;
  plVar1[1] = lVar5 << 10;
  *(undefined4 *)(plVar1 + 2) = uVar2;
  *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
  *(bool *)(plVar1 + 3) = lVar6 == 1;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<pipeline::parse::tabs::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00646d20 (669 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long extraout_RDX;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar14 [64];
  
  plVar2 = (long *)*param_1;
  lVar6 = *plVar2;
  puVar3 = (undefined8 *)plVar2[1];
  *plVar2 = 0;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  uVar9 = *(undefined8 *)(lVar6 + 8);
  uVar13 = *(ulong *)(lVar6 + 0x10);
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  uVar12 = *(ulong *)(lVar6 + 0x28);
  lVar6 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x20041,1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x20041);
  }
  if (uVar13 < 0x20001) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (0,0x20001,uVar13,&PTR_s_src_parse_rs_00226528);
  }
  (*(code *)PTR_memcpy_00841de0)(lVar6,uVar9,0x20001);
  lVar7 = __rustc[45371133cddedda4]::__rust_alloc(0x4040,1);
  auVar14._8_56_ = extraout_var;
  auVar14._0_8_ = extraout_XMM0_Qa;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x4040);
  }
  auVar5 = vpcmpeqd_avx2(auVar14._0_32_,auVar14._0_32_);
  *(undefined1 (*) [32])(lVar7 + 0x4020) = auVar5;
  *(undefined1 (*) [32])(lVar7 + 0x4000) = auVar5;
  if (uVar12 < 0x4000) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (0,0x4000,uVar12,&PTR_s_src_parse_rs_00226540);
  }
  (*(code *)PTR_memcpy_00841de0)(lVar7,uVar4,0x4000);
  uVar13 = 0;
  do {
    if (*(char *)(lVar7 + uVar13) != -1) {
LAB_00646e66:
      pcVar8 = (char *)(lVar7 + uVar13);
      lVar10 = 0x4005;
      goto LAB_00646e80;
    }
    if (*(char *)(lVar7 + 1 + uVar13) != -1) {
      uVar13 = uVar13 + 1;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 2 + uVar13) != -1) {
      uVar13 = uVar13 + 2;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 3 + uVar13) != -1) {
      uVar13 = uVar13 + 3;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 4 + uVar13) != -1) {
      uVar13 = uVar13 + 4;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 5 + uVar13) != -1) {
      uVar13 = uVar13 + 5;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 6 + uVar13) != -1) {
      uVar13 = uVar13 + 6;
      goto LAB_00646e66;
    }
    if (*(char *)(lVar7 + 7 + uVar13) != -1) {
      uVar13 = uVar13 + 7;
      goto LAB_00646e66;
    }
    uVar13 = uVar13 + 8;
  } while (uVar13 != 0x4000);
  uVar13 = 0x3fff;
  lVar10 = extraout_RDX;
  goto LAB_00646f0e;
  while( true ) {
    if (*(char *)(lVar7 + -8 + lVar11) != -1) {
      uVar12 = lVar11 - 7;
      lVar10 = lVar11 + -8;
      goto LAB_00646eeb;
    }
    if (*(char *)(lVar7 + -9 + lVar11) != -1) {
      uVar12 = lVar11 - 8;
      lVar10 = lVar11 + -9;
      goto LAB_00646eeb;
    }
    lVar10 = lVar11;
    if (lVar11 == 9) goto LAB_00646f0e;
    lVar10 = lVar11 + -5;
    if (*(char *)(lVar7 + -10 + lVar11) != -1) break;
LAB_00646e80:
    lVar11 = lVar10;
    uVar12 = lVar11 - 5;
    if (*(char *)(lVar7 + -6 + lVar11) != -1) {
      lVar10 = lVar11 + -6;
      goto LAB_00646eeb;
    }
    if (*(char *)(lVar7 + -7 + lVar11) != -1) {
      uVar12 = lVar11 - 6;
      lVar10 = lVar11 + -7;
      goto LAB_00646eeb;
    }
  }
  lVar10 = lVar11 + -10;
  uVar12 = lVar11 - 9;
LAB_00646eeb:
  if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar13,uVar12,0x4000,&PTR_s_src_parse_rs_00215200);
  }
  do {
    if (pcVar8 == (char *)(lVar7 + uVar12)) {
      lVar10 = lVar10 - uVar13;
      uVar9 = 1;
      goto LAB_00646f18;
    }
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != -1);
LAB_00646f0e:
  uVar9 = 0;
LAB_00646f18:
  *puVar3 = uVar9;
  puVar3[1] = uVar13;
  puVar3[2] = lVar10;
  puVar3[3] = 0x20041;
  puVar3[4] = lVar6;
  puVar3[5] = 0x20041;
  puVar3[6] = 0x4040;
  puVar3[7] = lVar7;
  puVar3[8] = 0x4040;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::try_insert::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00646fc0 (115 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::{closure#0}>::{closure#0},!>::{closure#0}>
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
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar3 = *plVar1;
  *plVar1 = 2;
  if (lVar3 == 2) {
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
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  plVar2[2] = lVar5;
  plVar2[3] = lVar6;
  plVar2[4] = lVar7;
  plVar2[5] = lVar8;
  plVar2[6] = lVar9;
  plVar2[7] = lVar10;
  plVar2[8] = lVar11;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<bool>>::initialize<<std::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline::parse::popw::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00647be0 (524 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 uVar10;
  long local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  long local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  
  puVar1 = *(undefined1 **)*param_1;
  *(long *)*param_1 = 0;
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  local_1a8 = 0x505f4c58;
  uStack_1a4 = 0x57504f;
  uVar10 = vptestmb_avx512vl(ZEXT816(0x57504f505f4c58),ZEXT816(0x57504f505f4c58));
  uVar4 = vptestnmb_avx512vl(ZEXT816(0x57504f505f4c58),ZEXT816(0x57504f505f4c58));
  auVar2 = vpmovm2d_avx512vl(uVar4);
  auVar3 = vpmovm2d_avx512vl(uVar10);
  auVar2 = vpblendd_avx2(auVar3,auVar2,0x80);
  uVar10 = vpmovd2m_avx512vl(auVar2);
  if ((char)uVar10 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c0,&local_1a8);
    if (local_1c0 == 0xfffffffffffffffe) goto LAB_00647c77;
    if (local_1c0 == 0xffffffffffffffff) goto LAB_00647cea;
    core[62e902411887be45]::str::converts::from_utf8(&local_1a8,local_1b8,local_1b0);
    local_1e0 = CONCAT44(uStack_1a4,local_1a8);
    local_1d8 = local_1c0;
    local_1d0 = local_1b8;
    local_1c8 = local_1b0;
    if (local_1e0 != 0) goto LAB_00647cfc;
    if (local_1b0 == 1) {
      bVar9 = *(char *)local_1b8 == '0';
    }
    else {
      bVar9 = false;
    }
    if (local_1c0 != 0) {
      if (((undefined **)(pipeline[509596c7b52975b2]::sys::A_BASE_0 + -1) < local_1b8) &&
         (local_1b8 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
        uVar6 = 0x10;
        if (0x10 < local_1c0) {
          uVar6 = local_1c0;
        }
        lVar7 = LZCOUNT(uVar6 - 1);
        lVar8 = 0x40 - lVar7;
        if ((uVar6 - 1 < 0x10000) ||
           (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(local_1b8,lVar8), cVar5 == '\0')) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *local_1b8 = *(undefined **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
          *(undefined ***)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = local_1b8;
        }
      }
      else {
        free(local_1b8);
      }
    }
    if (bVar9) {
      bVar9 = false;
      goto LAB_00647d30;
    }
  }
  else {
    local_1b8 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00647c77:
    if ((1 < ((uint)local_1b8 & 3) - 2) && (((ulong)local_1b8 & 3) != 0)) {
      (**(code **)((long)local_1b8 + 0x17))((char *)((long)local_1b8 + -1));
    }
LAB_00647cea:
    local_1d8 = 0xffffffffffffffff;
    local_1e0 = 1;
LAB_00647cfc:
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
              (&local_1e0);
  }
  bVar9 = true;
  if ((pipeline[509596c7b52975b2]::sys::R3_0 != '\0') &&
     (pipeline[509596c7b52975b2]::sys::HUGE_0 != '\0')) {
    bVar9 = pipeline[509596c7b52975b2]::sys::SMALLPAGES_0 != '\0';
  }
LAB_00647d30:
  *puVar1 = bVar9;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<usize>>::initialize<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_k::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00647e00 (743 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long local_1e8;
  ulong local_1e0;
  undefined **local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  ulong local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  
  plVar1 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  local_1b0 = 0x525f4c58;
  uStack_1ac = 0x4b4c45;
  uVar14 = vptestmb_avx512vl(ZEXT816(0x4b4c45525f4c58),ZEXT816(0x4b4c45525f4c58));
  uVar4 = vptestnmb_avx512vl(ZEXT816(0x4b4c45525f4c58),ZEXT816(0x4b4c45525f4c58));
  auVar2 = vpmovm2d_avx512vl(uVar4);
  auVar3 = vpmovm2d_avx512vl(uVar14);
  auVar2 = vpblendd_avx2(auVar3,auVar2,0x80);
  uVar14 = vpmovd2m_avx512vl(auVar2);
  if ((char)uVar14 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c8,&local_1b0);
    if (local_1c8 == 0xfffffffffffffffe) goto LAB_00647e97;
    if (local_1c8 == 0xffffffffffffffff) goto LAB_00647f34;
    core[62e902411887be45]::str::converts::from_utf8(&local_1b0,local_1c0,local_1b8);
    local_1e8 = CONCAT44(uStack_1ac,local_1b0);
    local_1e0 = local_1c8;
    local_1d8 = local_1c0;
    local_1d0 = local_1b8;
    if (local_1e8 == 0) {
      auVar15 = <str>::trim_matches::<<char>::is_whitespace>(local_1c0,local_1b8);
      uVar10 = auVar15._8_8_;
      auVar15._0_8_ = auVar15._0_8_;
      if (uVar10 == 0) {
LAB_00648019:
        bVar5 = false;
        uVar6 = local_1b8;
      }
      else {
        if (uVar10 == 1) {
          cVar7 = *auVar15._0_8_;
          bVar5 = false;
          uVar6 = local_1b8;
          if ((cVar7 == '+') || (cVar7 == '-')) goto joined_r0x006480c3;
        }
        else {
          cVar7 = *auVar15._0_8_;
        }
        uVar12 = (ulong)(cVar7 == '+');
        if (uVar10 - uVar12 < 0x11) {
          bVar5 = true;
          if (uVar10 == uVar12) {
            uVar6 = 0;
          }
          else {
            local_1b8 = 0;
            lVar8 = 0;
            do {
              if (9 < (byte)auVar15._0_8_[lVar8 + uVar12] - 0x30) goto LAB_00648019;
              local_1b8 = (ulong)((byte)auVar15._0_8_[lVar8 + uVar12] - 0x30) + local_1b8 * 10;
              lVar8 = lVar8 + 1;
              uVar6 = local_1b8;
            } while (lVar8 != uVar10 + -uVar12);
          }
        }
        else {
          local_1b8 = 0;
          lVar8 = 0;
          do {
            if (lVar8 == uVar10 + -uVar12) {
              bVar5 = true;
              uVar6 = local_1b8;
              break;
            }
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_1b8;
            uVar9 = SUB168(auVar15 * ZEXT816(10),0);
            if (SUB168(auVar15 * ZEXT816(10),8) != 0) goto LAB_00648019;
            uVar11 = (byte)auVar15._0_8_[lVar8 + uVar12] - 0x30;
            local_1b8 = uVar9 + uVar11;
            bVar5 = false;
            if (9 < uVar11) goto LAB_00648019;
            lVar8 = lVar8 + 1;
            uVar6 = local_1b8;
          } while (!CARRY8(uVar9,(ulong)uVar11));
        }
      }
joined_r0x006480c3:
      if (local_1c8 != 0) {
        if (((undefined **)(pipeline[509596c7b52975b2]::sys::A_BASE_0 + -1) < local_1c0) &&
           (local_1c0 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          uVar10 = 0x10;
          if (0x10 < local_1c8) {
            uVar10 = local_1c8;
          }
          lVar8 = LZCOUNT(uVar10 - 1);
          lVar13 = 0x40 - lVar8;
          if ((uVar10 - 1 < 0x10000) ||
             (cVar7 = pipeline[509596c7b52975b2]::sys::big_put(local_1c0,lVar13), cVar7 == '\0')) {
            if (lVar8 == 0) {
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
      lVar8 = 8;
      if (bVar5) {
        lVar8 = uVar6 + (uVar6 == 0);
      }
      goto LAB_00647f55;
    }
  }
  else {
    local_1c0 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00647e97:
    if ((1 < ((uint)local_1c0 & 3) - 2) && (((ulong)local_1c0 & 3) != 0)) {
      (**(code **)((long)local_1c0 + 0x17))((long)local_1c0 + -1);
    }
LAB_00647f34:
    local_1e0 = 0xffffffffffffffff;
    local_1e8 = 1;
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_1e8);
  lVar8 = 8;
LAB_00647f55:
  *plVar1 = lVar8;
  return;
}


// ==== <std::sync::once::Once>::call_once_force::<<std::sync::once_lock::OnceLock<usize>>::initialize<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_lag::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} @ 00648100 (725 bytes)

/* <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  ulong *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined1 local_1a0;
  
  puVar1 = *(ulong **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  local_1a8 = 0x58;
  uStack_1a7 = 0x47414c52465f4c;
  local_1a0 = 0;
  uVar13 = vptestmb_avx512vl(ZEXT816(0x47414c52465f4c),ZEXT816(0x47414c52465f4c));
  uVar4 = vptestnmb_avx512vl(ZEXT816(0x47414c52465f4c),ZEXT816(0x47414c52465f4c));
  auVar2 = vpmovm2d_avx512vl(uVar4);
  auVar3 = vpmovm2d_avx512vl(uVar13);
  auVar2 = vpblendd_avx2(auVar3,auVar2,0x80);
  uVar13 = vpmovd2m_avx512vl(auVar2);
  if ((char)uVar13 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c0,&local_1a8);
    if (local_1c0 == 0xfffffffffffffffe) goto LAB_00648196;
    if (local_1c0 == 0xffffffffffffffff) goto LAB_00648234;
    core[62e902411887be45]::str::converts::from_utf8(&local_1a8,local_1b8,local_1b0);
    local_1e0 = CONCAT71(uStack_1a7,local_1a8);
    local_1d8 = local_1c0;
    local_1d0 = local_1b8;
    local_1c8 = local_1b0;
    if (local_1e0 == 0) {
      auVar14 = <str>::trim_matches::<<char>::is_whitespace>(local_1b8,local_1b0);
      uVar8 = auVar14._8_8_;
      auVar14._0_8_ = auVar14._0_8_;
      if (uVar8 == 0) {
LAB_00648309:
        uVar11 = 0x20;
      }
      else {
        if (uVar8 == 1) {
          cVar5 = *auVar14._0_8_;
          if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_00648309;
        }
        else {
          cVar5 = *auVar14._0_8_;
        }
        uVar10 = (ulong)(cVar5 == '+');
        if (0x10 < uVar8 - uVar10) {
          uVar11 = 0;
          lVar6 = 0;
          while( true ) {
            if (lVar6 == uVar8 + -uVar10) goto joined_r0x00648323;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar11;
            uVar7 = SUB168(auVar14 * ZEXT816(10),0);
            if (SUB168(auVar14 * ZEXT816(10),8) != 0) break;
            uVar9 = (byte)auVar14._0_8_[lVar6 + uVar10] - 0x30;
            uVar11 = uVar7 + uVar9;
            if ((9 < uVar9) || (lVar6 = lVar6 + 1, CARRY8(uVar7,(ulong)uVar9))) break;
          }
          goto LAB_00648309;
        }
        if (uVar8 == uVar10) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          lVar6 = 0;
          do {
            if (9 < (byte)auVar14._0_8_[lVar6 + uVar10] - 0x30) {
              uVar11 = 0x20;
              break;
            }
            uVar11 = (ulong)((byte)auVar14._0_8_[lVar6 + uVar10] - 0x30) + uVar11 * 10;
            lVar6 = lVar6 + 1;
          } while (lVar6 != uVar8 + -uVar10);
        }
      }
joined_r0x00648323:
      if (local_1c0 != 0) {
        if (((undefined **)(pipeline[509596c7b52975b2]::sys::A_BASE_0 + -1) < local_1b8) &&
           (local_1b8 < pipeline[509596c7b52975b2]::sys::A_END_0)) {
          uVar8 = 0x10;
          if (0x10 < local_1c0) {
            uVar8 = local_1c0;
          }
          lVar6 = LZCOUNT(uVar8 - 1);
          lVar12 = 0x40 - lVar6;
          if ((uVar8 - 1 < 0x10000) ||
             (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(local_1b8,lVar12), cVar5 == '\0')) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *local_1b8 = *(undefined **)(in_FS_OFFSET + lVar12 * 8 + -0x3c8);
            *(undefined ***)(in_FS_OFFSET + lVar12 * 8 + -0x3c8) = local_1b8;
          }
        }
        else {
          free(local_1b8);
        }
      }
      goto LAB_00648259;
    }
  }
  else {
    local_1b8 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00648196:
    if ((1 < ((uint)local_1b8 & 3) - 2) && (((ulong)local_1b8 & 3) != 0)) {
      (**(code **)((long)local_1b8 + 0x17))((long)local_1b8 + -1);
    }
LAB_00648234:
    local_1d8 = 0xffffffffffffffff;
    local_1e0 = 1;
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_1e0);
  uVar11 = 0x20;
LAB_00648259:
  *puVar1 = uVar11;
  return;
}


// ==== pipeline::parse::drv::{closure#0}::{closure#0} @ 00651be0 (517 bytes)

/* pipeline[509596c7b52975b2]::parse::drv::{closure#0}::{closure#0} */

ulong __rustcall
pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_
          (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  std[c60ef17cbf7de79f]::sys::env::unix::getenv(&local_58,param_1,param_2);
  uVar2 = local_58;
  if (local_58 == 0xffffffffffffffff) {
    local_38 = 0xffffffffffffffff;
    local_40 = 1;
  }
  else {
    core[62e902411887be45]::str::converts::from_utf8(&local_58,local_50,local_48);
    local_38 = uVar2;
    local_30 = local_50;
    local_28 = local_48;
    local_40 = local_58;
    if (local_58 == 0) {
      auVar10 = <str>::trim_matches::<<char>::is_whitespace>(local_50,local_48);
      uVar6 = auVar10._8_8_;
      auVar10._0_8_ = auVar10._0_8_;
      uVar1 = param_3;
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          cVar3 = *auVar10._0_8_;
          if ((cVar3 == '+') || (cVar3 == '-')) goto joined_r0x00651d43;
        }
        else {
          cVar3 = *auVar10._0_8_;
        }
        uVar8 = (ulong)(cVar3 == '+');
        if (uVar6 - uVar8 < 0x11) {
          if (uVar6 == uVar8) {
            uVar1 = 0;
          }
          else {
            uVar5 = 0;
            lVar7 = 0;
            do {
              uVar1 = param_3;
              if (9 < (byte)auVar10._0_8_[lVar7 + uVar8] - 0x30) break;
              uVar5 = (ulong)((byte)auVar10._0_8_[lVar7 + uVar8] - 0x30) + uVar5 * 10;
              lVar7 = lVar7 + 1;
              uVar1 = uVar5;
            } while (lVar7 != uVar6 + -uVar8);
          }
        }
        else {
          uVar5 = 0;
          lVar7 = 0;
          while ((uVar1 = uVar5, lVar7 != uVar6 + -uVar8 &&
                 (auVar10._8_8_ = 0, auVar10._0_8_ = uVar5, uVar4 = SUB168(auVar10 * ZEXT816(10),0),
                 uVar1 = param_3, SUB168(auVar10 * ZEXT816(10),8) == 0))) {
            uVar9 = (byte)auVar10._0_8_[lVar7 + uVar8] - 0x30;
            uVar5 = uVar4 + uVar9;
            if ((9 < uVar9) || (lVar7 = lVar7 + 1, CARRY8(uVar4,(ulong)uVar9))) break;
          }
        }
      }
joined_r0x00651d43:
      if (uVar2 == 0) {
        return uVar1;
      }
      if ((local_50 <= (undefined8 *)(sys::A_BASE_0 + -1)) || (sys::A_END_0 <= local_50)) {
        free(local_50);
        return uVar1;
      }
      uVar6 = 0x10;
      if (0x10 < uVar2) {
        uVar6 = uVar2;
      }
      lVar7 = 0x40 - LZCOUNT(uVar6 - 1);
      if ((uVar6 - 1 < 0x10000) || (cVar3 = sys::big_put(local_50,lVar7), cVar3 == '\0')) {
        *local_50 = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = local_50;
        return uVar1;
      }
      return uVar1;
    }
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_40);
  return param_3;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::initialize<<std::sync::once_lock::OnceLock<alloc::vec::Vec<core::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline::parse::fr_done::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a6c0 (127 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  
  plVar1 = (long *)*param_1;
  lVar2 = plVar1[1];
  plVar3 = (long *)plVar1[2];
  lVar4 = *plVar1;
  *plVar1 = 0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  uVar5 = lVar2 == 0;
  if (lVar2 < 0) {
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if ((bool)uVar5) {
    lVar4 = 1;
  }
  else {
    lVar4 = __rustc[45371133cddedda4]::__rust_alloc(lVar2,1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,lVar2);
    }
    (*(code *)PTR_memset_00841dd0)(lVar4,0,lVar2);
  }
  *plVar3 = lVar2;
  plVar3[1] = lVar4;
  plVar3[2] = lVar2;
  return;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::initialize<<std::sync::once_lock::OnceLock<alloc::vec::Vec<usize>>>::get_or_init<pipeline::parse::cpu_order::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a740 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Drv>>::get_or_init<pipeline::parse::drv::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a800 (193 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar4 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_RD",5,0);
  uVar2 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_PIN",6,2);
  uVar3 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_QORD",7,2);
  lVar5 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_CH",5,0x2000);
  lVar6 = pipeline[509596c7b52975b2]::parse::drv::{closure#0}::_closure_0_("XL_ST2Q",7,1);
  *plVar1 = lVar4 << 10;
  plVar1[1] = lVar5 << 10;
  *(undefined4 *)(plVar1 + 2) = uVar2;
  *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
  *(bool *)(plVar1 + 3) = lVar6 == 1;
  return;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<pipeline::parse::tabs::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a8d0 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<pipeline[509596c7b52975b2]::parse::tabs::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::initialize<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::get_or_init<<std::sync::once_lock::OnceLock<pipeline::parse::Tabs>>::try_insert::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a900 (115 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
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
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::option::unwrap_failed(&PTR_s__rustc_0ef1bc386059596dada8fb65b_0058ced8);
  }
  lVar3 = *plVar1;
  *plVar1 = 2;
  if (lVar3 == 2) {
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
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  plVar2[2] = lVar5;
  plVar2[3] = lVar6;
  plVar2[4] = lVar7;
  plVar2[5] = lVar8;
  plVar2[6] = lVar9;
  plVar2[7] = lVar10;
  plVar2[8] = lVar11;
  return;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<bool>>::initialize<<std::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline::parse::popw::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a9a0 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<usize>>::initialize<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_k::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a9c0 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_k::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


// ==== <<std::sync::once::Once>::call_once_force<<std::sync::once_lock::OnceLock<usize>>::initialize<<std::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline::parse::fr_lag::{closure#0}>::{closure#0}, !>::{closure#0}>::{closure#0} as core::ops::function::FnOnce<(&std::sync::once::OnceState,)>>::call_once::{shim:vtable#0} @ 0067a9e0 (18 bytes)

/* <<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(&std[c60ef17cbf7de79f]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[c60ef17cbf7de79f]::sync::once::Once>::call_once_force::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::{closure#0}>::{closure#0},!>::{closure#0}>
  ::_closure_0_(&local_8);
  return local_8;
}


// ==== <pipeline::parse::EvPart>::flush_full @ 006991c0 (479 bytes)

/* <pipeline[509596c7b52975b2]::parse::EvPart>::flush_full */

void __rustcall
<pipeline[509596c7b52975b2]::parse::EvPart>::flush_full(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [32];
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x108);
  if (pipeline[509596c7b52975b2]::parse::NT_0 == '\0') {
    if (param_3 != 0) {
      lVar20 = 0;
      do {
        uVar4 = *(uint *)(param_2 + lVar20 * 4);
        uVar19 = (ulong)uVar4;
        puVar16 = *(undefined8 **)(lVar6 + uVar19 * 8);
        if (((uint)puVar16 & 0xfff) == 0xfc0) {
          puVar16 = (undefined8 *)new_chunk(param_1,uVar19,puVar16);
        }
        lVar18 = uVar19 * 0x100;
        lVar17 = lVar7 + lVar18;
        uVar8 = *(undefined8 *)(lVar17 + 0x48);
        uVar9 = *(undefined8 *)(lVar17 + 0x50);
        uVar10 = *(undefined8 *)(lVar17 + 0x58);
        uVar11 = *(undefined8 *)(lVar17 + 0x60);
        uVar12 = *(undefined8 *)(lVar17 + 0x68);
        uVar13 = *(undefined8 *)(lVar17 + 0x70);
        uVar14 = *(undefined8 *)(lVar17 + 0x78);
        *puVar16 = *(undefined8 *)(lVar17 + 0x40);
        puVar16[1] = uVar8;
        puVar16[2] = uVar9;
        puVar16[3] = uVar10;
        puVar16[4] = uVar11;
        puVar16[5] = uVar12;
        puVar16[6] = uVar13;
        puVar16[7] = uVar14;
        puVar1 = (undefined8 *)(lVar7 + 0x80 + lVar18);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar11 = puVar1[4];
        uVar12 = puVar1[5];
        uVar13 = puVar1[6];
        uVar14 = puVar1[7];
        puVar16[8] = *puVar1;
        puVar16[9] = uVar8;
        puVar16[10] = uVar9;
        puVar16[0xb] = uVar10;
        puVar16[0xc] = uVar11;
        puVar16[0xd] = uVar12;
        puVar16[0xe] = uVar13;
        puVar16[0xf] = uVar14;
        lVar18 = lVar18 + lVar7;
        uVar8 = *(undefined8 *)(lVar18 + 200);
        uVar9 = *(undefined8 *)(lVar18 + 0xd0);
        uVar10 = *(undefined8 *)(lVar18 + 0xd8);
        uVar11 = *(undefined8 *)(lVar18 + 0xe0);
        uVar12 = *(undefined8 *)(lVar18 + 0xe8);
        uVar13 = *(undefined8 *)(lVar18 + 0xf0);
        uVar14 = *(undefined8 *)(lVar18 + 0xf8);
        puVar16[0x10] = *(undefined8 *)(lVar18 + 0xc0);
        puVar16[0x11] = uVar8;
        puVar16[0x12] = uVar9;
        puVar16[0x13] = uVar10;
        puVar16[0x14] = uVar11;
        puVar16[0x15] = uVar12;
        puVar16[0x16] = uVar13;
        puVar16[0x17] = uVar14;
        *(undefined8 **)(lVar6 + uVar19 * 8) = puVar16 + 0x18;
        *(uint *)(lVar5 + uVar19 * 4) = uVar4 << 8 | 0x40;
        lVar20 = lVar20 + 1;
      } while (param_3 != lVar20);
    }
  }
  else if (param_3 != 0) {
    lVar20 = 0;
    do {
      uVar4 = *(uint *)(param_2 + lVar20 * 4);
      uVar19 = (ulong)uVar4;
      pauVar15 = *(undefined1 (**) [32])(lVar6 + uVar19 * 8);
      if (((uint)pauVar15 & 0xfff) == 0xfc0) {
        pauVar15 = (undefined1 (*) [32])new_chunk(param_1,uVar19,pauVar15);
      }
      lVar17 = uVar19 * 0x100 + lVar7;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0x60);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0x40));
      *pauVar15 = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[1] = auVar2;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0xa0);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0x80));
      pauVar15[2] = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[3] = auVar2;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0xe0);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0xc0));
      pauVar15[4] = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[5] = auVar2;
      *(undefined1 (**) [32])(lVar6 + uVar19 * 8) = pauVar15 + 6;
      *(uint *)(lVar5 + uVar19 * 4) = uVar4 << 8 | 0x40;
      lVar20 = lVar20 + 1;
    } while (param_3 != lVar20);
  }
  return;
}


// ==== <pipeline::parse::EvPart>::build @ 006993c0 (4599 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::parse::EvPart>::build */

void __rustcall
<pipeline[509596c7b52975b2]::parse::EvPart>::build(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  int iVar27;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar28 [32];
  int iVar35;
  undefined1 local_99;
  ulong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  long local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  long *local_48;
  undefined8 *local_40;
  
  if (param_3 * 0x100 - 0xfffffe00 < 0xffffffff00000000) {
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback("too many event buckets",0x16);
  }
  puVar10 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x2000,0x40);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0x40,0x2000);
  }
  uVar1 = param_3 + 1;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0;
  puVar10[0x22] = 0;
  puVar10[0x23] = 0;
  puVar10[0x24] = 0;
  puVar10[0x25] = 0;
  puVar10[0x26] = 0;
  puVar10[0x27] = 0;
  puVar10[0x28] = 0;
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  puVar10[0x2b] = 0;
  puVar10[0x2c] = 0;
  puVar10[0x2d] = 0;
  puVar10[0x2e] = 0;
  puVar10[0x2f] = 0;
  puVar10[0x30] = 0;
  puVar10[0x31] = 0;
  puVar10[0x32] = 0;
  puVar10[0x33] = 0;
  puVar10[0x34] = 0;
  puVar10[0x35] = 0;
  puVar10[0x36] = 0;
  puVar10[0x37] = 0;
  puVar10[0x3c] = 0;
  puVar10[0x3d] = 0;
  puVar10[0x3e] = 0;
  puVar10[0x3f] = 0;
  puVar10[0x38] = 0;
  puVar10[0x39] = 0;
  puVar10[0x3a] = 0;
  puVar10[0x3b] = 0;
  puVar10[0x44] = 0;
  puVar10[0x45] = 0;
  puVar10[0x46] = 0;
  puVar10[0x47] = 0;
  puVar10[0x40] = 0;
  puVar10[0x41] = 0;
  puVar10[0x42] = 0;
  puVar10[0x43] = 0;
  puVar10[0x4c] = 0;
  puVar10[0x4d] = 0;
  puVar10[0x4e] = 0;
  puVar10[0x4f] = 0;
  puVar10[0x48] = 0;
  puVar10[0x49] = 0;
  puVar10[0x4a] = 0;
  puVar10[0x4b] = 0;
  puVar10[0x50] = 0;
  puVar10[0x51] = 0;
  puVar10[0x52] = 0;
  puVar10[0x53] = 0;
  puVar10[0x54] = 0;
  puVar10[0x55] = 0;
  puVar10[0x56] = 0;
  puVar10[0x57] = 0;
  puVar10[0x58] = 0;
  puVar10[0x59] = 0;
  puVar10[0x5a] = 0;
  puVar10[0x5b] = 0;
  puVar10[0x5c] = 0;
  puVar10[0x5d] = 0;
  puVar10[0x5e] = 0;
  puVar10[0x5f] = 0;
  puVar10[0x60] = 0;
  puVar10[0x61] = 0;
  puVar10[0x62] = 0;
  puVar10[99] = 0;
  puVar10[100] = 0;
  puVar10[0x65] = 0;
  puVar10[0x66] = 0;
  puVar10[0x67] = 0;
  puVar10[0x68] = 0;
  puVar10[0x69] = 0;
  puVar10[0x6a] = 0;
  puVar10[0x6b] = 0;
  puVar10[0x6c] = 0;
  puVar10[0x6d] = 0;
  puVar10[0x6e] = 0;
  puVar10[0x6f] = 0;
  puVar10[0x70] = 0;
  puVar10[0x71] = 0;
  puVar10[0x72] = 0;
  puVar10[0x73] = 0;
  puVar10[0x74] = 0;
  puVar10[0x75] = 0;
  puVar10[0x76] = 0;
  puVar10[0x77] = 0;
  puVar10[0x78] = 0;
  puVar10[0x79] = 0;
  puVar10[0x7a] = 0;
  puVar10[0x7b] = 0;
  puVar10[0x7c] = 0;
  puVar10[0x7d] = 0;
  puVar10[0x7e] = 0;
  puVar10[0x7f] = 0;
  puVar10[0x84] = 0;
  puVar10[0x85] = 0;
  puVar10[0x86] = 0;
  puVar10[0x87] = 0;
  puVar10[0x80] = 0;
  puVar10[0x81] = 0;
  puVar10[0x82] = 0;
  puVar10[0x83] = 0;
  puVar10[0x8c] = 0;
  puVar10[0x8d] = 0;
  puVar10[0x8e] = 0;
  puVar10[0x8f] = 0;
  puVar10[0x88] = 0;
  puVar10[0x89] = 0;
  puVar10[0x8a] = 0;
  puVar10[0x8b] = 0;
  puVar10[0x94] = 0;
  puVar10[0x95] = 0;
  puVar10[0x96] = 0;
  puVar10[0x97] = 0;
  puVar10[0x90] = 0;
  puVar10[0x91] = 0;
  puVar10[0x92] = 0;
  puVar10[0x93] = 0;
  puVar10[0x9c] = 0;
  puVar10[0x9d] = 0;
  puVar10[0x9e] = 0;
  puVar10[0x9f] = 0;
  puVar10[0x98] = 0;
  puVar10[0x99] = 0;
  puVar10[0x9a] = 0;
  puVar10[0x9b] = 0;
  puVar10[0xa4] = 0;
  puVar10[0xa5] = 0;
  puVar10[0xa6] = 0;
  puVar10[0xa7] = 0;
  puVar10[0xa0] = 0;
  puVar10[0xa1] = 0;
  puVar10[0xa2] = 0;
  puVar10[0xa3] = 0;
  puVar10[0xac] = 0;
  puVar10[0xad] = 0;
  puVar10[0xae] = 0;
  puVar10[0xaf] = 0;
  puVar10[0xa8] = 0;
  puVar10[0xa9] = 0;
  puVar10[0xaa] = 0;
  puVar10[0xab] = 0;
  puVar10[0xb4] = 0;
  puVar10[0xb5] = 0;
  puVar10[0xb6] = 0;
  puVar10[0xb7] = 0;
  puVar10[0xb0] = 0;
  puVar10[0xb1] = 0;
  puVar10[0xb2] = 0;
  puVar10[0xb3] = 0;
  puVar10[0xbc] = 0;
  puVar10[0xbd] = 0;
  puVar10[0xbe] = 0;
  puVar10[0xbf] = 0;
  puVar10[0xb8] = 0;
  puVar10[0xb9] = 0;
  puVar10[0xba] = 0;
  puVar10[0xbb] = 0;
  puVar10[0xc4] = 0;
  puVar10[0xc5] = 0;
  puVar10[0xc6] = 0;
  puVar10[199] = 0;
  puVar10[0xc0] = 0;
  puVar10[0xc1] = 0;
  puVar10[0xc2] = 0;
  puVar10[0xc3] = 0;
  puVar10[0xcc] = 0;
  puVar10[0xcd] = 0;
  puVar10[0xce] = 0;
  puVar10[0xcf] = 0;
  puVar10[200] = 0;
  puVar10[0xc9] = 0;
  puVar10[0xca] = 0;
  puVar10[0xcb] = 0;
  puVar10[0xd4] = 0;
  puVar10[0xd5] = 0;
  puVar10[0xd6] = 0;
  puVar10[0xd7] = 0;
  puVar10[0xd0] = 0;
  puVar10[0xd1] = 0;
  puVar10[0xd2] = 0;
  puVar10[0xd3] = 0;
  puVar10[0xdc] = 0;
  puVar10[0xdd] = 0;
  puVar10[0xde] = 0;
  puVar10[0xdf] = 0;
  puVar10[0xd8] = 0;
  puVar10[0xd9] = 0;
  puVar10[0xda] = 0;
  puVar10[0xdb] = 0;
  puVar10[0xe4] = 0;
  puVar10[0xe5] = 0;
  puVar10[0xe6] = 0;
  puVar10[0xe7] = 0;
  puVar10[0xe0] = 0;
  puVar10[0xe1] = 0;
  puVar10[0xe2] = 0;
  puVar10[0xe3] = 0;
  puVar10[0xec] = 0;
  puVar10[0xed] = 0;
  puVar10[0xee] = 0;
  puVar10[0xef] = 0;
  puVar10[0xe8] = 0;
  puVar10[0xe9] = 0;
  puVar10[0xea] = 0;
  puVar10[0xeb] = 0;
  puVar10[0xf4] = 0;
  puVar10[0xf5] = 0;
  puVar10[0xf6] = 0;
  puVar10[0xf7] = 0;
  puVar10[0xf0] = 0;
  puVar10[0xf1] = 0;
  puVar10[0xf2] = 0;
  puVar10[0xf3] = 0;
  puVar10[0xfc] = 0;
  puVar10[0xfd] = 0;
  puVar10[0xfe] = 0;
  puVar10[0xff] = 0;
  puVar10[0xf8] = 0;
  puVar10[0xf9] = 0;
  puVar10[0xfa] = 0;
  puVar10[0xfb] = 0;
  puVar10[0x104] = 0;
  puVar10[0x105] = 0;
  puVar10[0x106] = 0;
  puVar10[0x107] = 0;
  puVar10[0x100] = 0;
  puVar10[0x101] = 0;
  puVar10[0x102] = 0;
  puVar10[0x103] = 0;
  puVar10[0x10c] = 0;
  puVar10[0x10d] = 0;
  puVar10[0x10e] = 0;
  puVar10[0x10f] = 0;
  puVar10[0x108] = 0;
  puVar10[0x109] = 0;
  puVar10[0x10a] = 0;
  puVar10[0x10b] = 0;
  puVar10[0x114] = 0;
  puVar10[0x115] = 0;
  puVar10[0x116] = 0;
  puVar10[0x117] = 0;
  puVar10[0x110] = 0;
  puVar10[0x111] = 0;
  puVar10[0x112] = 0;
  puVar10[0x113] = 0;
  puVar10[0x11c] = 0;
  puVar10[0x11d] = 0;
  puVar10[0x11e] = 0;
  puVar10[0x11f] = 0;
  puVar10[0x118] = 0;
  puVar10[0x119] = 0;
  puVar10[0x11a] = 0;
  puVar10[0x11b] = 0;
  puVar10[0x124] = 0;
  puVar10[0x125] = 0;
  puVar10[0x126] = 0;
  puVar10[0x127] = 0;
  puVar10[0x120] = 0;
  puVar10[0x121] = 0;
  puVar10[0x122] = 0;
  puVar10[0x123] = 0;
  puVar10[300] = 0;
  puVar10[0x12d] = 0;
  puVar10[0x12e] = 0;
  puVar10[0x12f] = 0;
  puVar10[0x128] = 0;
  puVar10[0x129] = 0;
  puVar10[0x12a] = 0;
  puVar10[299] = 0;
  puVar10[0x134] = 0;
  puVar10[0x135] = 0;
  puVar10[0x136] = 0;
  puVar10[0x137] = 0;
  puVar10[0x130] = 0;
  puVar10[0x131] = 0;
  puVar10[0x132] = 0;
  puVar10[0x133] = 0;
  puVar10[0x13c] = 0;
  puVar10[0x13d] = 0;
  puVar10[0x13e] = 0;
  puVar10[0x13f] = 0;
  puVar10[0x138] = 0;
  puVar10[0x139] = 0;
  puVar10[0x13a] = 0;
  puVar10[0x13b] = 0;
  puVar10[0x144] = 0;
  puVar10[0x145] = 0;
  puVar10[0x146] = 0;
  puVar10[0x147] = 0;
  puVar10[0x140] = 0;
  puVar10[0x141] = 0;
  puVar10[0x142] = 0;
  puVar10[0x143] = 0;
  puVar10[0x14c] = 0;
  puVar10[0x14d] = 0;
  puVar10[0x14e] = 0;
  puVar10[0x14f] = 0;
  puVar10[0x148] = 0;
  puVar10[0x149] = 0;
  puVar10[0x14a] = 0;
  puVar10[0x14b] = 0;
  puVar10[0x154] = 0;
  puVar10[0x155] = 0;
  puVar10[0x156] = 0;
  puVar10[0x157] = 0;
  puVar10[0x150] = 0;
  puVar10[0x151] = 0;
  puVar10[0x152] = 0;
  puVar10[0x153] = 0;
  puVar10[0x15c] = 0;
  puVar10[0x15d] = 0;
  puVar10[0x15e] = 0;
  puVar10[0x15f] = 0;
  puVar10[0x158] = 0;
  puVar10[0x159] = 0;
  puVar10[0x15a] = 0;
  puVar10[0x15b] = 0;
  puVar10[0x164] = 0;
  puVar10[0x165] = 0;
  puVar10[0x166] = 0;
  puVar10[0x167] = 0;
  puVar10[0x160] = 0;
  puVar10[0x161] = 0;
  puVar10[0x162] = 0;
  puVar10[0x163] = 0;
  puVar10[0x16c] = 0;
  puVar10[0x16d] = 0;
  puVar10[0x16e] = 0;
  puVar10[0x16f] = 0;
  puVar10[0x168] = 0;
  puVar10[0x169] = 0;
  puVar10[0x16a] = 0;
  puVar10[0x16b] = 0;
  puVar10[0x174] = 0;
  puVar10[0x175] = 0;
  puVar10[0x176] = 0;
  puVar10[0x177] = 0;
  puVar10[0x170] = 0;
  puVar10[0x171] = 0;
  puVar10[0x172] = 0;
  puVar10[0x173] = 0;
  puVar10[0x17c] = 0;
  puVar10[0x17d] = 0;
  puVar10[0x17e] = 0;
  puVar10[0x17f] = 0;
  puVar10[0x178] = 0;
  puVar10[0x179] = 0;
  puVar10[0x17a] = 0;
  puVar10[0x17b] = 0;
  puVar10[0x184] = 0;
  puVar10[0x185] = 0;
  puVar10[0x186] = 0;
  puVar10[0x187] = 0;
  puVar10[0x180] = 0;
  puVar10[0x181] = 0;
  puVar10[0x182] = 0;
  puVar10[0x183] = 0;
  puVar10[0x18c] = 0;
  puVar10[0x18d] = 0;
  puVar10[0x18e] = 0;
  puVar10[399] = 0;
  puVar10[0x188] = 0;
  puVar10[0x189] = 0;
  puVar10[0x18a] = 0;
  puVar10[0x18b] = 0;
  puVar10[0x194] = 0;
  puVar10[0x195] = 0;
  puVar10[0x196] = 0;
  puVar10[0x197] = 0;
  puVar10[400] = 0;
  puVar10[0x191] = 0;
  puVar10[0x192] = 0;
  puVar10[0x193] = 0;
  puVar10[0x19c] = 0;
  puVar10[0x19d] = 0;
  puVar10[0x19e] = 0;
  puVar10[0x19f] = 0;
  puVar10[0x198] = 0;
  puVar10[0x199] = 0;
  puVar10[0x19a] = 0;
  puVar10[0x19b] = 0;
  puVar10[0x1a4] = 0;
  puVar10[0x1a5] = 0;
  puVar10[0x1a6] = 0;
  puVar10[0x1a7] = 0;
  puVar10[0x1a0] = 0;
  puVar10[0x1a1] = 0;
  puVar10[0x1a2] = 0;
  puVar10[0x1a3] = 0;
  puVar10[0x1ac] = 0;
  puVar10[0x1ad] = 0;
  puVar10[0x1ae] = 0;
  puVar10[0x1af] = 0;
  puVar10[0x1a8] = 0;
  puVar10[0x1a9] = 0;
  puVar10[0x1aa] = 0;
  puVar10[0x1ab] = 0;
  puVar10[0x1b4] = 0;
  puVar10[0x1b5] = 0;
  puVar10[0x1b6] = 0;
  puVar10[0x1b7] = 0;
  puVar10[0x1b0] = 0;
  puVar10[0x1b1] = 0;
  puVar10[0x1b2] = 0;
  puVar10[0x1b3] = 0;
  puVar10[0x1bc] = 0;
  puVar10[0x1bd] = 0;
  puVar10[0x1be] = 0;
  puVar10[0x1bf] = 0;
  puVar10[0x1b8] = 0;
  puVar10[0x1b9] = 0;
  puVar10[0x1ba] = 0;
  puVar10[0x1bb] = 0;
  puVar10[0x1c4] = 0;
  puVar10[0x1c5] = 0;
  puVar10[0x1c6] = 0;
  puVar10[0x1c7] = 0;
  puVar10[0x1c0] = 0;
  puVar10[0x1c1] = 0;
  puVar10[0x1c2] = 0;
  puVar10[0x1c3] = 0;
  puVar10[0x1cc] = 0;
  puVar10[0x1cd] = 0;
  puVar10[0x1ce] = 0;
  puVar10[0x1cf] = 0;
  puVar10[0x1c8] = 0;
  puVar10[0x1c9] = 0;
  puVar10[0x1ca] = 0;
  puVar10[0x1cb] = 0;
  puVar10[0x1d4] = 0;
  puVar10[0x1d5] = 0;
  puVar10[0x1d6] = 0;
  puVar10[0x1d7] = 0;
  puVar10[0x1d0] = 0;
  puVar10[0x1d1] = 0;
  puVar10[0x1d2] = 0;
  puVar10[0x1d3] = 0;
  puVar10[0x1dc] = 0;
  puVar10[0x1dd] = 0;
  puVar10[0x1de] = 0;
  puVar10[0x1df] = 0;
  puVar10[0x1d8] = 0;
  puVar10[0x1d9] = 0;
  puVar10[0x1da] = 0;
  puVar10[0x1db] = 0;
  puVar10[0x1e4] = 0;
  puVar10[0x1e5] = 0;
  puVar10[0x1e6] = 0;
  puVar10[0x1e7] = 0;
  puVar10[0x1e0] = 0;
  puVar10[0x1e1] = 0;
  puVar10[0x1e2] = 0;
  puVar10[0x1e3] = 0;
  puVar10[0x1ec] = 0;
  puVar10[0x1ed] = 0;
  puVar10[0x1ee] = 0;
  puVar10[0x1ef] = 0;
  puVar10[0x1e8] = 0;
  puVar10[0x1e9] = 0;
  puVar10[0x1ea] = 0;
  puVar10[0x1eb] = 0;
  puVar10[500] = 0;
  puVar10[0x1f5] = 0;
  puVar10[0x1f6] = 0;
  puVar10[0x1f7] = 0;
  puVar10[0x1f0] = 0;
  puVar10[0x1f1] = 0;
  puVar10[0x1f2] = 0;
  puVar10[499] = 0;
  puVar10[0x1fc] = 0;
  puVar10[0x1fd] = 0;
  puVar10[0x1fe] = 0;
  puVar10[0x1ff] = 0;
  puVar10[0x1f8] = 0;
  puVar10[0x1f9] = 0;
  puVar10[0x1fa] = 0;
  puVar10[0x1fb] = 0;
  puVar10[0x204] = 0;
  puVar10[0x205] = 0;
  puVar10[0x206] = 0;
  puVar10[0x207] = 0;
  puVar10[0x200] = 0;
  puVar10[0x201] = 0;
  puVar10[0x202] = 0;
  puVar10[0x203] = 0;
  puVar10[0x20c] = 0;
  puVar10[0x20d] = 0;
  puVar10[0x20e] = 0;
  puVar10[0x20f] = 0;
  puVar10[0x208] = 0;
  puVar10[0x209] = 0;
  puVar10[0x20a] = 0;
  puVar10[0x20b] = 0;
  puVar10[0x214] = 0;
  puVar10[0x215] = 0;
  puVar10[0x216] = 0;
  puVar10[0x217] = 0;
  puVar10[0x210] = 0;
  puVar10[0x211] = 0;
  puVar10[0x212] = 0;
  puVar10[0x213] = 0;
  puVar10[0x21c] = 0;
  puVar10[0x21d] = 0;
  puVar10[0x21e] = 0;
  puVar10[0x21f] = 0;
  puVar10[0x218] = 0;
  puVar10[0x219] = 0;
  puVar10[0x21a] = 0;
  puVar10[0x21b] = 0;
  puVar10[0x224] = 0;
  puVar10[0x225] = 0;
  puVar10[0x226] = 0;
  puVar10[0x227] = 0;
  puVar10[0x220] = 0;
  puVar10[0x221] = 0;
  puVar10[0x222] = 0;
  puVar10[0x223] = 0;
  puVar10[0x22c] = 0;
  puVar10[0x22d] = 0;
  puVar10[0x22e] = 0;
  puVar10[0x22f] = 0;
  puVar10[0x228] = 0;
  puVar10[0x229] = 0;
  puVar10[0x22a] = 0;
  puVar10[0x22b] = 0;
  puVar10[0x234] = 0;
  puVar10[0x235] = 0;
  puVar10[0x236] = 0;
  puVar10[0x237] = 0;
  puVar10[0x230] = 0;
  puVar10[0x231] = 0;
  puVar10[0x232] = 0;
  puVar10[0x233] = 0;
  puVar10[0x23c] = 0;
  puVar10[0x23d] = 0;
  puVar10[0x23e] = 0;
  puVar10[0x23f] = 0;
  puVar10[0x238] = 0;
  puVar10[0x239] = 0;
  puVar10[0x23a] = 0;
  puVar10[0x23b] = 0;
  puVar10[0x244] = 0;
  puVar10[0x245] = 0;
  puVar10[0x246] = 0;
  puVar10[0x247] = 0;
  puVar10[0x240] = 0;
  puVar10[0x241] = 0;
  puVar10[0x242] = 0;
  puVar10[0x243] = 0;
  puVar10[0x24c] = 0;
  puVar10[0x24d] = 0;
  puVar10[0x24e] = 0;
  puVar10[0x24f] = 0;
  puVar10[0x248] = 0;
  puVar10[0x249] = 0;
  puVar10[0x24a] = 0;
  puVar10[0x24b] = 0;
  puVar10[0x254] = 0;
  puVar10[0x255] = 0;
  puVar10[0x256] = 0;
  puVar10[599] = 0;
  puVar10[0x250] = 0;
  puVar10[0x251] = 0;
  puVar10[0x252] = 0;
  puVar10[0x253] = 0;
  puVar10[0x25c] = 0;
  puVar10[0x25d] = 0;
  puVar10[0x25e] = 0;
  puVar10[0x25f] = 0;
  puVar10[600] = 0;
  puVar10[0x259] = 0;
  puVar10[0x25a] = 0;
  puVar10[0x25b] = 0;
  puVar10[0x264] = 0;
  puVar10[0x265] = 0;
  puVar10[0x266] = 0;
  puVar10[0x267] = 0;
  puVar10[0x260] = 0;
  puVar10[0x261] = 0;
  puVar10[0x262] = 0;
  puVar10[0x263] = 0;
  puVar10[0x26c] = 0;
  puVar10[0x26d] = 0;
  puVar10[0x26e] = 0;
  puVar10[0x26f] = 0;
  puVar10[0x268] = 0;
  puVar10[0x269] = 0;
  puVar10[0x26a] = 0;
  puVar10[0x26b] = 0;
  puVar10[0x274] = 0;
  puVar10[0x275] = 0;
  puVar10[0x276] = 0;
  puVar10[0x277] = 0;
  puVar10[0x270] = 0;
  puVar10[0x271] = 0;
  puVar10[0x272] = 0;
  puVar10[0x273] = 0;
  puVar10[0x27c] = 0;
  puVar10[0x27d] = 0;
  puVar10[0x27e] = 0;
  puVar10[0x27f] = 0;
  puVar10[0x278] = 0;
  puVar10[0x279] = 0;
  puVar10[0x27a] = 0;
  puVar10[0x27b] = 0;
  puVar10[0x284] = 0;
  puVar10[0x285] = 0;
  puVar10[0x286] = 0;
  puVar10[0x287] = 0;
  puVar10[0x280] = 0;
  puVar10[0x281] = 0;
  puVar10[0x282] = 0;
  puVar10[0x283] = 0;
  puVar10[0x28c] = 0;
  puVar10[0x28d] = 0;
  puVar10[0x28e] = 0;
  puVar10[0x28f] = 0;
  puVar10[0x288] = 0;
  puVar10[0x289] = 0;
  puVar10[0x28a] = 0;
  puVar10[0x28b] = 0;
  puVar10[0x294] = 0;
  puVar10[0x295] = 0;
  puVar10[0x296] = 0;
  puVar10[0x297] = 0;
  puVar10[0x290] = 0;
  puVar10[0x291] = 0;
  puVar10[0x292] = 0;
  puVar10[0x293] = 0;
  puVar10[0x29c] = 0;
  puVar10[0x29d] = 0;
  puVar10[0x29e] = 0;
  puVar10[0x29f] = 0;
  puVar10[0x298] = 0;
  puVar10[0x299] = 0;
  puVar10[0x29a] = 0;
  puVar10[0x29b] = 0;
  puVar10[0x2a4] = 0;
  puVar10[0x2a5] = 0;
  puVar10[0x2a6] = 0;
  puVar10[0x2a7] = 0;
  puVar10[0x2a0] = 0;
  puVar10[0x2a1] = 0;
  puVar10[0x2a2] = 0;
  puVar10[0x2a3] = 0;
  puVar10[0x2ac] = 0;
  puVar10[0x2ad] = 0;
  puVar10[0x2ae] = 0;
  puVar10[0x2af] = 0;
  puVar10[0x2a8] = 0;
  puVar10[0x2a9] = 0;
  puVar10[0x2aa] = 0;
  puVar10[0x2ab] = 0;
  puVar10[0x2b4] = 0;
  puVar10[0x2b5] = 0;
  puVar10[0x2b6] = 0;
  puVar10[0x2b7] = 0;
  puVar10[0x2b0] = 0;
  puVar10[0x2b1] = 0;
  puVar10[0x2b2] = 0;
  puVar10[0x2b3] = 0;
  puVar10[700] = 0;
  puVar10[0x2bd] = 0;
  puVar10[0x2be] = 0;
  puVar10[0x2bf] = 0;
  puVar10[0x2b8] = 0;
  puVar10[0x2b9] = 0;
  puVar10[0x2ba] = 0;
  puVar10[699] = 0;
  puVar10[0x2c4] = 0;
  puVar10[0x2c5] = 0;
  puVar10[0x2c6] = 0;
  puVar10[0x2c7] = 0;
  puVar10[0x2c0] = 0;
  puVar10[0x2c1] = 0;
  puVar10[0x2c2] = 0;
  puVar10[0x2c3] = 0;
  puVar10[0x2cc] = 0;
  puVar10[0x2cd] = 0;
  puVar10[0x2ce] = 0;
  puVar10[0x2cf] = 0;
  puVar10[0x2c8] = 0;
  puVar10[0x2c9] = 0;
  puVar10[0x2ca] = 0;
  puVar10[0x2cb] = 0;
  puVar10[0x2d4] = 0;
  puVar10[0x2d5] = 0;
  puVar10[0x2d6] = 0;
  puVar10[0x2d7] = 0;
  puVar10[0x2d0] = 0;
  puVar10[0x2d1] = 0;
  puVar10[0x2d2] = 0;
  puVar10[0x2d3] = 0;
  puVar10[0x2dc] = 0;
  puVar10[0x2dd] = 0;
  puVar10[0x2de] = 0;
  puVar10[0x2df] = 0;
  puVar10[0x2d8] = 0;
  puVar10[0x2d9] = 0;
  puVar10[0x2da] = 0;
  puVar10[0x2db] = 0;
  puVar10[0x2e4] = 0;
  puVar10[0x2e5] = 0;
  puVar10[0x2e6] = 0;
  puVar10[0x2e7] = 0;
  puVar10[0x2e0] = 0;
  puVar10[0x2e1] = 0;
  puVar10[0x2e2] = 0;
  puVar10[0x2e3] = 0;
  puVar10[0x2ec] = 0;
  puVar10[0x2ed] = 0;
  puVar10[0x2ee] = 0;
  puVar10[0x2ef] = 0;
  puVar10[0x2e8] = 0;
  puVar10[0x2e9] = 0;
  puVar10[0x2ea] = 0;
  puVar10[0x2eb] = 0;
  puVar10[0x2f4] = 0;
  puVar10[0x2f5] = 0;
  puVar10[0x2f6] = 0;
  puVar10[0x2f7] = 0;
  puVar10[0x2f0] = 0;
  puVar10[0x2f1] = 0;
  puVar10[0x2f2] = 0;
  puVar10[0x2f3] = 0;
  puVar10[0x2fc] = 0;
  puVar10[0x2fd] = 0;
  puVar10[0x2fe] = 0;
  puVar10[0x2ff] = 0;
  puVar10[0x2f8] = 0;
  puVar10[0x2f9] = 0;
  puVar10[0x2fa] = 0;
  puVar10[0x2fb] = 0;
  puVar10[0x304] = 0;
  puVar10[0x305] = 0;
  puVar10[0x306] = 0;
  puVar10[0x307] = 0;
  puVar10[0x300] = 0;
  puVar10[0x301] = 0;
  puVar10[0x302] = 0;
  puVar10[0x303] = 0;
  puVar10[0x30c] = 0;
  puVar10[0x30d] = 0;
  puVar10[0x30e] = 0;
  puVar10[0x30f] = 0;
  puVar10[0x308] = 0;
  puVar10[0x309] = 0;
  puVar10[0x30a] = 0;
  puVar10[0x30b] = 0;
  puVar10[0x314] = 0;
  puVar10[0x315] = 0;
  puVar10[0x316] = 0;
  puVar10[0x317] = 0;
  puVar10[0x310] = 0;
  puVar10[0x311] = 0;
  puVar10[0x312] = 0;
  puVar10[0x313] = 0;
  puVar10[0x31c] = 0;
  puVar10[0x31d] = 0;
  puVar10[0x31e] = 0;
  puVar10[799] = 0;
  puVar10[0x318] = 0;
  puVar10[0x319] = 0;
  puVar10[0x31a] = 0;
  puVar10[0x31b] = 0;
  puVar10[0x324] = 0;
  puVar10[0x325] = 0;
  puVar10[0x326] = 0;
  puVar10[0x327] = 0;
  puVar10[800] = 0;
  puVar10[0x321] = 0;
  puVar10[0x322] = 0;
  puVar10[0x323] = 0;
  puVar10[0x32c] = 0;
  puVar10[0x32d] = 0;
  puVar10[0x32e] = 0;
  puVar10[0x32f] = 0;
  puVar10[0x328] = 0;
  puVar10[0x329] = 0;
  puVar10[0x32a] = 0;
  puVar10[0x32b] = 0;
  puVar10[0x334] = 0;
  puVar10[0x335] = 0;
  puVar10[0x336] = 0;
  puVar10[0x337] = 0;
  puVar10[0x330] = 0;
  puVar10[0x331] = 0;
  puVar10[0x332] = 0;
  puVar10[0x333] = 0;
  puVar10[0x33c] = 0;
  puVar10[0x33d] = 0;
  puVar10[0x33e] = 0;
  puVar10[0x33f] = 0;
  puVar10[0x338] = 0;
  puVar10[0x339] = 0;
  puVar10[0x33a] = 0;
  puVar10[0x33b] = 0;
  puVar10[0x344] = 0;
  puVar10[0x345] = 0;
  puVar10[0x346] = 0;
  puVar10[0x347] = 0;
  puVar10[0x340] = 0;
  puVar10[0x341] = 0;
  puVar10[0x342] = 0;
  puVar10[0x343] = 0;
  puVar10[0x34c] = 0;
  puVar10[0x34d] = 0;
  puVar10[0x34e] = 0;
  puVar10[0x34f] = 0;
  puVar10[0x348] = 0;
  puVar10[0x349] = 0;
  puVar10[0x34a] = 0;
  puVar10[0x34b] = 0;
  puVar10[0x354] = 0;
  puVar10[0x355] = 0;
  puVar10[0x356] = 0;
  puVar10[0x357] = 0;
  puVar10[0x350] = 0;
  puVar10[0x351] = 0;
  puVar10[0x352] = 0;
  puVar10[0x353] = 0;
  puVar10[0x35c] = 0;
  puVar10[0x35d] = 0;
  puVar10[0x35e] = 0;
  puVar10[0x35f] = 0;
  puVar10[0x358] = 0;
  puVar10[0x359] = 0;
  puVar10[0x35a] = 0;
  puVar10[0x35b] = 0;
  puVar10[0x364] = 0;
  puVar10[0x365] = 0;
  puVar10[0x366] = 0;
  puVar10[0x367] = 0;
  puVar10[0x360] = 0;
  puVar10[0x361] = 0;
  puVar10[0x362] = 0;
  puVar10[0x363] = 0;
  puVar10[0x36c] = 0;
  puVar10[0x36d] = 0;
  puVar10[0x36e] = 0;
  puVar10[0x36f] = 0;
  puVar10[0x368] = 0;
  puVar10[0x369] = 0;
  puVar10[0x36a] = 0;
  puVar10[0x36b] = 0;
  puVar10[0x374] = 0;
  puVar10[0x375] = 0;
  puVar10[0x376] = 0;
  puVar10[0x377] = 0;
  puVar10[0x370] = 0;
  puVar10[0x371] = 0;
  puVar10[0x372] = 0;
  puVar10[0x373] = 0;
  puVar10[0x37c] = 0;
  puVar10[0x37d] = 0;
  puVar10[0x37e] = 0;
  puVar10[0x37f] = 0;
  puVar10[0x378] = 0;
  puVar10[0x379] = 0;
  puVar10[0x37a] = 0;
  puVar10[0x37b] = 0;
  puVar10[900] = 0;
  puVar10[0x385] = 0;
  puVar10[0x386] = 0;
  puVar10[0x387] = 0;
  puVar10[0x380] = 0;
  puVar10[0x381] = 0;
  puVar10[0x382] = 0;
  puVar10[899] = 0;
  puVar10[0x38c] = 0;
  puVar10[0x38d] = 0;
  puVar10[0x38e] = 0;
  puVar10[0x38f] = 0;
  puVar10[0x388] = 0;
  puVar10[0x389] = 0;
  puVar10[0x38a] = 0;
  puVar10[0x38b] = 0;
  puVar10[0x394] = 0;
  puVar10[0x395] = 0;
  puVar10[0x396] = 0;
  puVar10[0x397] = 0;
  puVar10[0x390] = 0;
  puVar10[0x391] = 0;
  puVar10[0x392] = 0;
  puVar10[0x393] = 0;
  puVar10[0x39c] = 0;
  puVar10[0x39d] = 0;
  puVar10[0x39e] = 0;
  puVar10[0x39f] = 0;
  puVar10[0x398] = 0;
  puVar10[0x399] = 0;
  puVar10[0x39a] = 0;
  puVar10[0x39b] = 0;
  puVar10[0x3a4] = 0;
  puVar10[0x3a5] = 0;
  puVar10[0x3a6] = 0;
  puVar10[0x3a7] = 0;
  puVar10[0x3a0] = 0;
  puVar10[0x3a1] = 0;
  puVar10[0x3a2] = 0;
  puVar10[0x3a3] = 0;
  puVar10[0x3ac] = 0;
  puVar10[0x3ad] = 0;
  puVar10[0x3ae] = 0;
  puVar10[0x3af] = 0;
  puVar10[0x3a8] = 0;
  puVar10[0x3a9] = 0;
  puVar10[0x3aa] = 0;
  puVar10[0x3ab] = 0;
  puVar10[0x3b4] = 0;
  puVar10[0x3b5] = 0;
  puVar10[0x3b6] = 0;
  puVar10[0x3b7] = 0;
  puVar10[0x3b0] = 0;
  puVar10[0x3b1] = 0;
  puVar10[0x3b2] = 0;
  puVar10[0x3b3] = 0;
  puVar10[0x3bc] = 0;
  puVar10[0x3bd] = 0;
  puVar10[0x3be] = 0;
  puVar10[0x3bf] = 0;
  puVar10[0x3b8] = 0;
  puVar10[0x3b9] = 0;
  puVar10[0x3ba] = 0;
  puVar10[0x3bb] = 0;
  puVar10[0x3c4] = 0;
  puVar10[0x3c5] = 0;
  puVar10[0x3c6] = 0;
  puVar10[0x3c7] = 0;
  puVar10[0x3c0] = 0;
  puVar10[0x3c1] = 0;
  puVar10[0x3c2] = 0;
  puVar10[0x3c3] = 0;
  puVar10[0x3cc] = 0;
  puVar10[0x3cd] = 0;
  puVar10[0x3ce] = 0;
  puVar10[0x3cf] = 0;
  puVar10[0x3c8] = 0;
  puVar10[0x3c9] = 0;
  puVar10[0x3ca] = 0;
  puVar10[0x3cb] = 0;
  puVar10[0x3d4] = 0;
  puVar10[0x3d5] = 0;
  puVar10[0x3d6] = 0;
  puVar10[0x3d7] = 0;
  puVar10[0x3d0] = 0;
  puVar10[0x3d1] = 0;
  puVar10[0x3d2] = 0;
  puVar10[0x3d3] = 0;
  puVar10[0x3dc] = 0;
  puVar10[0x3dd] = 0;
  puVar10[0x3de] = 0;
  puVar10[0x3df] = 0;
  puVar10[0x3d8] = 0;
  puVar10[0x3d9] = 0;
  puVar10[0x3da] = 0;
  puVar10[0x3db] = 0;
  puVar10[0x3e4] = 0;
  puVar10[0x3e5] = 0;
  puVar10[0x3e6] = 0;
  puVar10[999] = 0;
  puVar10[0x3e0] = 0;
  puVar10[0x3e1] = 0;
  puVar10[0x3e2] = 0;
  puVar10[0x3e3] = 0;
  puVar10[0x3ec] = 0;
  puVar10[0x3ed] = 0;
  puVar10[0x3ee] = 0;
  puVar10[0x3ef] = 0;
  puVar10[1000] = 0;
  puVar10[0x3e9] = 0;
  puVar10[0x3ea] = 0;
  puVar10[0x3eb] = 0;
  puVar10[0x3f4] = 0;
  puVar10[0x3f5] = 0;
  puVar10[0x3f6] = 0;
  puVar10[0x3f7] = 0;
  puVar10[0x3f0] = 0;
  puVar10[0x3f1] = 0;
  puVar10[0x3f2] = 0;
  puVar10[0x3f3] = 0;
  puVar10[0x3fc] = 0;
  puVar10[0x3fd] = 0;
  puVar10[0x3fe] = 0;
  puVar10[0x3ff] = 0;
  puVar21 = (undefined8 *)0x7fffffffffffffc0;
  puVar10[0x3f8] = 0;
  puVar10[0x3f9] = 0;
  puVar10[0x3fa] = 0;
  puVar10[0x3fb] = 0;
  lVar15 = uVar1 * 4;
  uVar20 = (uVar1 * 4 + 3) * 0x40;
  if ((uVar1 & 0x3fffffffffffffff) >> 0x38 == 0 && uVar20 < 0x7fffffffffffffc1) {
    puVar11 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar20,0x40);
    if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0x40,uVar20);
    }
    uVar18 = param_3 * 4 + 6;
    uVar14 = (ulong)((uint)uVar18 & 6);
    puVar17 = puVar11;
    if (6 < param_3 * 4 + 5) {
      uVar18 = uVar18 & 0xfffffffffffffff8;
      do {
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        puVar17[8] = 0;
        puVar17[9] = 0;
        puVar17[10] = 0;
        puVar17[0xb] = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0xe] = 0;
        puVar17[0xf] = 0;
        puVar17[0x10] = 0;
        puVar17[0x11] = 0;
        puVar17[0x12] = 0;
        puVar17[0x13] = 0;
        puVar17[0x14] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0;
        puVar17[0x17] = 0;
        puVar17[0x18] = 0;
        puVar17[0x19] = 0;
        puVar17[0x1a] = 0;
        puVar17[0x1b] = 0;
        puVar17[0x1c] = 0;
        puVar17[0x1d] = 0;
        puVar17[0x1e] = 0;
        puVar17[0x1f] = 0;
        puVar17[0x20] = 0;
        puVar17[0x21] = 0;
        puVar17[0x22] = 0;
        puVar17[0x23] = 0;
        puVar17[0x24] = 0;
        puVar17[0x25] = 0;
        puVar17[0x26] = 0;
        puVar17[0x27] = 0;
        puVar17[0x28] = 0;
        puVar17[0x29] = 0;
        puVar17[0x2a] = 0;
        puVar17[0x2b] = 0;
        puVar17[0x2c] = 0;
        puVar17[0x2d] = 0;
        puVar17[0x2e] = 0;
        puVar17[0x2f] = 0;
        puVar17[0x30] = 0;
        puVar17[0x31] = 0;
        puVar17[0x32] = 0;
        puVar17[0x33] = 0;
        puVar17[0x34] = 0;
        puVar17[0x35] = 0;
        puVar17[0x36] = 0;
        puVar17[0x37] = 0;
        puVar17[0x3c] = 0;
        puVar17[0x3d] = 0;
        puVar17[0x3e] = 0;
        puVar17[0x3f] = 0;
        puVar17[0x38] = 0;
        puVar17[0x39] = 0;
        puVar17[0x3a] = 0;
        puVar17[0x3b] = 0;
        puVar17 = puVar17 + 0x40;
        uVar18 = uVar18 - 8;
      } while (uVar18 != 0);
    }
    do {
      puVar16 = puVar17;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      uVar14 = uVar14 - 1;
      puVar17 = puVar16 + 8;
    } while (uVar14 != 0);
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    local_48 = param_1;
    local_40 = puVar10;
    if (0x3fffffffffffffff < uVar1) goto LAB_0069a266;
    if (lVar15 == 0) {
      uVar20 = 4;
      uVar18 = 0;
      iVar5 = DAT_00206484;
      iVar6 = DAT_00206494;
      iVar7 = DAT_00206498;
      iVar8 = DAT_002064fc;
    }
    else {
      uVar20 = __rustc[45371133cddedda4]::__rust_alloc(lVar15);
      uVar18 = uVar1;
      iVar5 = DAT_00206484;
      iVar6 = DAT_00206494;
      iVar7 = DAT_00206498;
      iVar8 = DAT_002064fc;
      if (uVar20 == 0) goto LAB_0069a4f8;
    }
    DAT_00206484 = iVar5;
    DAT_00206494 = iVar6;
    DAT_00206498 = iVar7;
    DAT_002064fc = iVar8;
    if (uVar1 != 0) {
      if (uVar1 < 4) {
        uVar14 = 0;
      }
      else {
        if (uVar1 < 0x20) {
          uVar19 = 0;
        }
        else {
          uVar14 = uVar1 & 0x3fffffffffffffe0;
          uVar19 = 0;
          auVar25._4_4_ = DAT_00206540;
          auVar25._0_4_ = DAT_00206540;
          auVar25._8_4_ = DAT_00206540;
          auVar25._12_4_ = DAT_00206540;
          auVar25._16_4_ = DAT_00206540;
          auVar25._20_4_ = DAT_00206540;
          auVar25._24_4_ = DAT_00206540;
          auVar25._28_4_ = DAT_00206540;
          auVar4 = _DAT_00203020;
          do {
            auVar28 = vpslld_avx2(auVar4,8);
            auVar3 = vpor_avx2(auVar28,auVar25);
            iVar27 = auVar28._0_4_;
            iVar29 = auVar28._4_4_;
            iVar30 = auVar28._8_4_;
            iVar31 = auVar28._12_4_;
            iVar32 = auVar28._16_4_;
            iVar33 = auVar28._20_4_;
            iVar34 = auVar28._24_4_;
            iVar35 = auVar28._28_4_;
            *(undefined1 (*) [32])(uVar20 + uVar19 * 4) = auVar3;
            piVar2 = (int *)(uVar20 + 0x20 + uVar19 * 4);
            *piVar2 = iVar27 + iVar5;
            piVar2[1] = iVar29 + iVar5;
            piVar2[2] = iVar30 + iVar5;
            piVar2[3] = iVar31 + iVar5;
            piVar2[4] = iVar32 + iVar5;
            piVar2[5] = iVar33 + iVar5;
            piVar2[6] = iVar34 + iVar5;
            piVar2[7] = iVar35 + iVar5;
            piVar2 = (int *)(uVar20 + 0x40 + uVar19 * 4);
            *piVar2 = iVar27 + iVar6;
            piVar2[1] = iVar29 + iVar6;
            piVar2[2] = iVar30 + iVar6;
            piVar2[3] = iVar31 + iVar6;
            piVar2[4] = iVar32 + iVar6;
            piVar2[5] = iVar33 + iVar6;
            piVar2[6] = iVar34 + iVar6;
            piVar2[7] = iVar35 + iVar6;
            piVar2 = (int *)(uVar20 + 0x60 + uVar19 * 4);
            *piVar2 = iVar27 + iVar7;
            piVar2[1] = iVar29 + iVar7;
            piVar2[2] = iVar30 + iVar7;
            piVar2[3] = iVar31 + iVar7;
            piVar2[4] = iVar32 + iVar7;
            piVar2[5] = iVar33 + iVar7;
            piVar2[6] = iVar34 + iVar7;
            piVar2[7] = iVar35 + iVar7;
            uVar19 = uVar19 + 0x20;
            auVar3._0_4_ = auVar4._0_4_ + iVar8;
            auVar3._4_4_ = auVar4._4_4_ + iVar8;
            auVar3._8_4_ = auVar4._8_4_ + iVar8;
            auVar3._12_4_ = auVar4._12_4_ + iVar8;
            auVar3._16_4_ = auVar4._16_4_ + iVar8;
            auVar3._20_4_ = auVar4._20_4_ + iVar8;
            auVar3._24_4_ = auVar4._24_4_ + iVar8;
            auVar3._28_4_ = auVar4._28_4_ + iVar8;
            auVar4 = auVar3;
          } while (uVar14 != uVar19);
          if (uVar1 == uVar14) goto LAB_00699ef2;
          uVar19 = uVar14;
          if ((uVar1 & 0x1c) == 0) goto LAB_00699ed1;
        }
        iVar5 = DAT_0020641c;
        uVar14 = uVar1 & 0x3ffffffffffffffc;
        auVar23 = vpbroadcastd_avx512vl();
        auVar23 = vpor_avx(auVar23,_DAT_00202120);
        auVar24._4_4_ = DAT_00206540;
        auVar24._0_4_ = DAT_00206540;
        auVar24._8_4_ = DAT_00206540;
        auVar24._12_4_ = DAT_00206540;
        do {
          auVar26 = vpslld_avx(auVar23,8);
          auVar26 = vpor_avx(auVar26,auVar24);
          *(undefined1 (*) [16])(uVar20 + uVar19 * 4) = auVar26;
          uVar19 = uVar19 + 4;
          auVar26._0_4_ = auVar23._0_4_ + iVar5;
          auVar26._4_4_ = auVar23._4_4_ + iVar5;
          auVar26._8_4_ = auVar23._8_4_ + iVar5;
          auVar26._12_4_ = auVar23._12_4_ + iVar5;
          auVar23 = auVar26;
        } while (uVar14 != uVar19);
        if (uVar1 == uVar14) goto LAB_00699ef2;
      }
LAB_00699ed1:
      uVar13 = (int)uVar14 << 8 | 0x40;
      do {
        *(uint *)(uVar20 + uVar14 * 4) = uVar13;
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 + 0x100;
      } while (uVar1 != uVar14);
    }
LAB_00699ef2:
    puVar10 = (undefined8 *)(uVar1 * 8);
    puVar21 = (undefined8 *)0x7ffffffffffffff8;
    local_50 = puVar11;
    if (uVar1 >> 0x3d != 0 || (undefined8 *)0x7ffffffffffffff8 < puVar10) goto LAB_0069a266;
    local_58 = uVar18;
    if (puVar10 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)&DAT_00000008;
      uVar18 = 0;
      if (uVar1 < 2) goto LAB_00699f53;
LAB_0069a0aa:
      uVar9 = DAT_00201ca8;
      lVar15 = 1;
      puVar10 = puVar21;
      if (param_3 < 4) {
LAB_0069a1ea:
        lVar15 = (param_3 - lVar15) + 1;
        do {
          *puVar10 = 0xfc0;
          puVar10 = puVar10 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else if (param_3 < 0x10) {
        uVar14 = 0;
LAB_0069a1a6:
        uVar9 = DAT_00201ca8;
        uVar19 = param_3 & 0xfffffffffffffffc;
        puVar10 = puVar21 + uVar19;
        lVar15 = uVar19 + 1;
        do {
          puVar11 = puVar21 + uVar14;
          *puVar11 = uVar9;
          puVar11[1] = uVar9;
          puVar11[2] = uVar9;
          puVar11[3] = uVar9;
          uVar14 = uVar14 + 4;
        } while (uVar19 != uVar14);
        if (param_3 != uVar19) goto LAB_0069a1ea;
      }
      else {
        uVar14 = param_3 & 0xfffffffffffffff0;
        puVar10 = puVar21 + uVar14;
        lVar15 = uVar14 + 1;
        uVar19 = 0;
        do {
          puVar11 = puVar21 + uVar19;
          *puVar11 = uVar9;
          puVar11[1] = uVar9;
          puVar11[2] = uVar9;
          puVar11[3] = uVar9;
          puVar11 = puVar21 + uVar19 + 4;
          *puVar11 = uVar9;
          puVar11[1] = uVar9;
          puVar11[2] = uVar9;
          puVar11[3] = uVar9;
          puVar11 = puVar21 + uVar19 + 8;
          *puVar11 = uVar9;
          puVar11[1] = uVar9;
          puVar11[2] = uVar9;
          puVar11[3] = uVar9;
          puVar11 = puVar21 + uVar19 + 0xc;
          *puVar11 = uVar9;
          puVar11[1] = uVar9;
          puVar11[2] = uVar9;
          puVar11[3] = uVar9;
          uVar19 = uVar19 + 0x10;
        } while (uVar14 != uVar19);
        if (param_3 != uVar14) {
          if ((param_3 & 0xc) == 0) goto LAB_0069a1ea;
          goto LAB_0069a1a6;
        }
      }
      *puVar10 = 0xfc0;
      lVar15 = param_3 * 4;
      local_68 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(lVar15,4);
      if ((local_68 == 0) ||
         (lVar12 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(lVar15,4), lVar12 == 0)) {
LAB_0069a4f8:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,lVar15);
      }
      if (param_3 >> 0x3c != 0) goto LAB_0069a266;
      puVar10 = (undefined8 *)(param_3 * 8);
      local_90 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(puVar10,8);
      if (local_90 == (undefined8 *)0x0) goto LAB_0069a2aa;
      local_80 = 1;
      bVar22 = 1 < param_3;
      puVar11 = local_90;
      if (bVar22) {
        (*(code *)PTR_memset_00841dd0)(local_90,0,puVar10 + -1);
        puVar11 = local_90 + param_3 + -1;
        local_80 = param_3;
      }
      *puVar11 = 0;
      local_78 = lVar12;
      local_70 = uVar18;
    }
    else {
      puVar21 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(puVar10);
      if (puVar21 == (undefined8 *)0x0) goto LAB_0069a2aa;
      uVar18 = uVar1;
      if (1 < uVar1) goto LAB_0069a0aa;
LAB_00699f53:
      local_70 = uVar18;
      if (uVar1 == 0) goto LAB_0069a266;
      *puVar21 = 0xfc0;
      local_90 = (undefined8 *)&DAT_00000008;
      bVar22 = false;
      local_80 = 0;
      puVar10 = (undefined8 *)0x0;
      local_68 = 4;
      local_78 = 4;
    }
    if (pipeline[509596c7b52975b2]::parse::POPW != 0) {
      <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize::
      <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::_closure_0_>::_closure_0_,_>
                ();
    }
    local_99 = DAT_00843ae4;
    local_60 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x120,4);
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,0x120);
    }
    if (1 < uVar1) {
      local_88 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(puVar10,8);
      if (local_88 == (undefined8 *)0x0) {
LAB_0069a2aa:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,puVar10);
      }
      local_98 = param_3;
      if (bVar22) {
        (*(code *)PTR_memset_00841dd0)(local_88,0,puVar10 + -1);
        *(undefined8 *)((long)(local_88 + -1) + (long)puVar10) = 0;
        puVar11 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc();
        if (puVar11 == (undefined8 *)0x0) goto LAB_0069a2aa;
        lVar15 = 1;
        puVar17 = puVar11;
        if (3 < param_3 - 1) {
          if (0xf < param_3 - 1) goto LAB_0069a023;
          uVar18 = 0;
          goto LAB_0069a2d1;
        }
        goto LAB_0069a305;
      }
      *local_88 = 0;
      puVar11 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(puVar10,8);
      puVar17 = puVar11;
      if (puVar11 == (undefined8 *)0x0) goto LAB_0069a2aa;
LAB_0069a325:
      *puVar11 = 0x3f0;
      goto LAB_0069a331;
    }
    if (bVar22) {
      local_98 = 0;
      (*(code *)PTR_memset_00841dd0)(8,0,puVar10 + -1);
      *puVar10 = 0;
      local_88 = (undefined8 *)&DAT_00000008;
      puVar17 = (undefined8 *)&DAT_00000008;
LAB_0069a023:
      uVar9 = DAT_00201c48;
      uVar14 = param_3 - 1;
      uVar18 = uVar14 & 0xfffffffffffffff0;
      puVar11 = puVar17 + uVar18;
      lVar15 = uVar18 + 1;
      uVar19 = 0;
      do {
        puVar10 = puVar17 + uVar19;
        *puVar10 = uVar9;
        puVar10[1] = uVar9;
        puVar10[2] = uVar9;
        puVar10[3] = uVar9;
        puVar10 = puVar17 + uVar19 + 4;
        *puVar10 = uVar9;
        puVar10[1] = uVar9;
        puVar10[2] = uVar9;
        puVar10[3] = uVar9;
        puVar10 = puVar17 + uVar19 + 8;
        *puVar10 = uVar9;
        puVar10[1] = uVar9;
        puVar10[2] = uVar9;
        puVar10[3] = uVar9;
        puVar10 = puVar17 + uVar19 + 0xc;
        *puVar10 = uVar9;
        puVar10[1] = uVar9;
        puVar10[2] = uVar9;
        puVar10[3] = uVar9;
        uVar19 = uVar19 + 0x10;
      } while (uVar18 != uVar19);
      if (uVar14 != uVar18) {
        if ((uVar14 & 0xc) != 0) {
LAB_0069a2d1:
          uVar9 = DAT_00201c48;
          uVar14 = param_3 - 1 & 0xfffffffffffffffc;
          puVar11 = puVar17 + uVar14;
          lVar15 = uVar14 + 1;
          do {
            puVar10 = puVar17 + uVar18;
            *puVar10 = uVar9;
            puVar10[1] = uVar9;
            puVar10[2] = uVar9;
            puVar10[3] = uVar9;
            uVar18 = uVar18 + 4;
          } while (uVar14 != uVar18);
          if (param_3 - 1 == uVar14) goto LAB_0069a325;
        }
LAB_0069a305:
        lVar15 = param_3 - lVar15;
        do {
          *puVar11 = 0x3f0;
          puVar11 = puVar11 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      goto LAB_0069a325;
    }
  }
  else {
LAB_0069a266:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  local_88 = (undefined8 *)&DAT_00000008;
  local_98 = 0;
  puVar17 = (undefined8 *)&DAT_00000008;
LAB_0069a331:
  lVar15 = __rustc[45371133cddedda4]::__rust_alloc(0x600,8);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x600);
  }
  lVar12 = uVar1 * 4 + 3;
  *local_48 = lVar12;
  local_48[1] = (long)local_50;
  local_48[2] = lVar12;
  local_48[0x21] = (ulong)(local_50 + 0x18) & 0xffffffffffffff00;
  local_48[3] = local_58;
  local_48[4] = uVar20;
  local_48[5] = uVar1;
  local_48[6] = local_70;
  local_48[7] = (long)puVar21;
  local_48[8] = uVar1;
  local_48[9] = local_80;
  local_48[10] = local_68;
  local_48[0xb] = param_3;
  local_48[0xc] = local_80;
  local_48[0xd] = local_78;
  local_48[0xe] = param_3;
  local_48[0xf] = local_80;
  local_48[0x10] = (long)local_90;
  local_48[0x11] = param_3;
  local_48[0x22] = param_2;
  *(undefined1 (*) [16])(local_48 + 0x23) = (undefined1  [16])0x0;
  *(undefined1 *)(local_48 + 0x27) = local_99;
  local_48[0x12] = 0x48;
  local_48[0x13] = local_60;
  local_48[0x14] = 0x48;
  local_48[0x15] = local_98;
  local_48[0x16] = (long)local_88;
  local_48[0x17] = param_3;
  local_48[0x18] = local_98;
  local_48[0x19] = (long)puVar17;
  local_48[0x1a] = param_3;
  local_48[0x25] = 0;
  local_48[0x26] = (ulong)(local_40 + 0x1f8) & 0xfffffffffffff000;
  local_48[0x1b] = 0x80;
  local_48[0x1c] = (long)local_40;
  local_48[0x1d] = 0x80;
  local_48[0x1e] = 0x40;
  local_48[0x1f] = lVar15;
  local_48[0x20] = 0;
  return;
}


// ==== <pipeline::parse::EvPart>::finish @ 0069a5c0 (541 bytes)

/* <pipeline[509596c7b52975b2]::parse::EvPart>::finish */

void __rustcall <pipeline[509596c7b52975b2]::parse::EvPart>::finish(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x88);
  if (uVar1 != 0) {
    uVar8 = *(ulong *)(param_1 + 0x28);
    lVar7 = 0x40;
    uVar6 = 0;
    uVar3 = uVar1;
    do {
      if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar6,uVar8,&PTR_s_src_parse_rs_002121f0);
      }
      uVar4 = *(int *)(*(long *)(param_1 + 0x20) + uVar6 * 4) + 0xc0;
      uVar9 = (ulong)(byte)uVar4;
      if ((uVar4 & 0xff) != 0) {
        uVar8 = *(ulong *)(param_1 + 0x40);
        if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar6,uVar8,&PTR_s_src_parse_rs_00212208);
        }
        lVar2 = *(long *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
        if (((uint)lVar2 & 0xfff) == 0xfc0) {
          lVar2 = new_chunk(param_1,uVar6,lVar2);
          uVar8 = *(ulong *)(param_1 + 0x40);
        }
        (*(code *)PTR_memcpy_00841de0)(lVar2,*(long *)(param_1 + 0x108) + lVar7,uVar9);
        if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar6,uVar8,&PTR_s_src_parse_rs_00212220);
        }
        *(ulong *)(*(long *)(param_1 + 0x38) + uVar6 * 8) = lVar2 + uVar9;
        uVar8 = *(ulong *)(param_1 + 0x28);
        if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar6,uVar8,&PTR_s_src_parse_rs_00212238);
        }
        *(int *)(*(long *)(param_1 + 0x20) + uVar6 * 4) = (int)lVar7;
        uVar3 = *(ulong *)(param_1 + 0x88);
      }
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar6,uVar3,&PTR_s_src_parse_rs_00212250);
      }
      if (*(long *)(*(long *)(param_1 + 0x80) + uVar6 * 8) == 0) {
        iVar5 = 0;
        uVar9 = *(ulong *)(param_1 + 0x70);
      }
      else {
        if (*(ulong *)(param_1 + 0x40) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar6,*(ulong *)(param_1 + 0x40),&PTR_s_src_parse_rs_00212268);
        }
        if (*(ulong *)(param_1 + 0x58) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar6,*(ulong *)(param_1 + 0x58),&PTR_s_src_parse_rs_00212280);
        }
        lVar2 = *(long *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
        iVar5 = *(int *)(*(long *)(param_1 + 0x50) + uVar6 * 4) * 0x150 +
                (int)((lVar2 - (lVar2 - 1U & 0xfffffffffffff000)) / 0xc) + -0x150;
        uVar9 = *(ulong *)(param_1 + 0x70);
      }
      if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar6,uVar9,&PTR_s_src_parse_rs_00212298);
      }
      *(int *)(*(long *)(param_1 + 0x68) + uVar6 * 4) = iVar5;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x100;
    } while (uVar1 != uVar6);
  }
  return;
}


// ==== <pipeline::parse::EvPart>::esc_chunk @ 0069a7e0 (303 bytes)

/* <pipeline[509596c7b52975b2]::parse::EvPart>::esc_chunk */

void __rustcall
<pipeline[509596c7b52975b2]::parse::EvPart>::esc_chunk
          (long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *__addr;
  
  __addr = *(void **)(param_1 + 0x128);
  if (((ulong)__addr & 0xfff) == 0) {
    __addr = *(void **)(param_1 + 0x118);
    if (__addr == *(void **)(param_1 + 0x120)) {
      plVar3 = *(long **)(param_1 + 0x110);
      LOCK();
      plVar1 = plVar3 + 2;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + 0x200000;
      UNLOCK();
      if ((ulong)plVar3[1] < lVar2 + 0x200000U) {
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("arena full",10);
      }
      __addr = (void *)(*plVar3 + lVar2);
      *(long *)(param_1 + 0x120) = lVar2 + *plVar3 + 0x200000;
      if (*(char *)(param_1 + 0x138) == '\x01') {
        madvise(__addr,0x200000,0x17);
      }
    }
    *(long *)(param_1 + 0x118) = (long)__addr + 0x1000;
    *(long *)(param_1 + 0x128) = (long)__addr + 0x400;
  }
  else {
    *(long *)(param_1 + 0x128) = (long)__addr + 0x400;
  }
  if (param_3 == (undefined8 *)&DAT_000003f0) {
    if (*(ulong *)(param_1 + 0xb8) <= param_2) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_2,*(ulong *)(param_1 + 0xb8),&PTR_s_src_parse_rs_002122b0);
    }
    *(void **)(*(long *)(param_1 + 0xb0) + param_2 * 8) = __addr;
  }
  else {
    *param_3 = __addr;
  }
  return;
}


// ==== <pipeline::parse::EvPart>::new_chunk @ 0069a920 (287 bytes)

/* <pipeline[509596c7b52975b2]::parse::EvPart>::new_chunk */

void * __rustcall
<pipeline[509596c7b52975b2]::parse::EvPart>::new_chunk
          (long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  void *__addr;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  if (param_2 == uVar4) {
    __addr = *(void **)(param_1 + 0x130);
  }
  else {
    __addr = *(void **)(param_1 + 0x118);
    if (__addr == *(void **)(param_1 + 0x120)) {
      plVar5 = *(long **)(param_1 + 0x110);
      LOCK();
      plVar1 = plVar5 + 2;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 0x200000;
      UNLOCK();
      if ((ulong)plVar5[1] < lVar3 + 0x200000U) {
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("arena full",10);
      }
      __addr = (void *)(*plVar5 + lVar3);
      *(long *)(param_1 + 0x120) = lVar3 + *plVar5 + 0x200000;
      if (*(char *)(param_1 + 0x138) == '\x01') {
        madvise(__addr,0x200000,0x17);
      }
    }
    *(long *)(param_1 + 0x118) = (long)__addr + 0x1000;
    if (param_3 == (undefined8 *)&DAT_00000fc0) {
      if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (param_2,uVar4,&PTR_s_src_parse_rs_002122c8);
      }
      *(void **)(*(long *)(param_1 + 0x80) + param_2 * 8) = __addr;
      uVar4 = *(ulong *)(param_1 + 0x58);
    }
    else {
      *param_3 = __addr;
      uVar4 = *(ulong *)(param_1 + 0x58);
    }
    if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_2,uVar4,&PTR_s_src_parse_rs_002122e0);
    }
    piVar2 = (int *)(*(long *)(param_1 + 0x50) + param_2 * 4);
    *piVar2 = *piVar2 + 1;
  }
  return __addr;
}


// ==== <pipeline::parse::Ctx>::ck_one @ 0069bae0 (902 bytes)

/* <pipeline[509596c7b52975b2]::parse::Ctx>::ck_one */

void __rustcall <pipeline[509596c7b52975b2]::parse::Ctx>::ck_one(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = param_2[1];
  if (uVar6 == 0xffffffffffffffff) {
    return;
  }
  lVar9 = *param_1;
  uVar8 = param_2[3] - *(long *)(lVar9 + 0x1f0);
  if (*(ulong *)(lVar9 + 0x1f8) <= uVar8) {
    return;
  }
  uVar11 = (ulong)(uint)param_2[2];
  if (0x3fff < uVar11) {
    return;
  }
  if (*(char *)(*(long *)(lVar9 + 0x20) + uVar11) == -1) {
    return;
  }
  uVar7 = *param_2;
  if ((long)uVar7 < 0) {
    uVar5 = raw_token(param_1,((uVar7 & 0x7fffffffffffffff) >> 8) + param_1[7],uVar7 & 0xff);
  }
  else {
    uVar5 = uVar7;
    if (0x3fffffffffffffff < uVar7) goto LAB_0069bdd0;
  }
  uVar8 = uVar11 << 4 | uVar8 << 0x20;
  if (uVar6 >> 0x28 == 0) {
    uVar4 = uVar6 * -0x5f6fa77e17000000 >> 0x3a ^ uVar6 * -0x5f6fa77e17000000 >> 0x29 ^
            *(ulong *)(lVar9 + 0x218) ^ uVar6 * 0xa0905881e9;
    uVar11 = uVar4 * 0x3dee219263000000;
    if ((uVar11 >> 0x21 < *(ulong *)(lVar9 + 0x240)) &&
       (uVar4 = (ulong)((int)uVar4 * -0x11de6d9d & 0x1ff), uVar4 < 0xe)) {
      uVar3 = (uint)(uVar11 >> 0x21);
      if (*(ulong *)(lVar9 + 0x230) == 0) {
        lVar9 = param_1[1];
        lVar10 = *(long *)(lVar9 + 0x160);
        lVar2 = *(long *)(lVar9 + 0x200);
        uVar1 = *(uint *)(lVar10 + (uVar11 >> 0x2d) * 4);
        *(ulong *)(lVar2 + (ulong)uVar1) = (ulong)(uVar3 & 0xfff) << 0x2b | uVar5;
        *(ulong *)(lVar2 + 8 + (ulong)uVar1) = uVar4 | uVar8;
        uVar3 = uVar1 + 0x10 & 0xff;
        *(uint *)(lVar10 + (uVar11 >> 0x2d) * 4) = uVar1 & 0xffffff00 | uVar3;
LAB_0069bd69:
        if (uVar3 == 0) {
          <pipeline[509596c7b52975b2]::parse::Part>::flush_one(lVar9 + 0x140);
          return;
        }
        return;
      }
      if ((uVar7 < 0x10000000000) &&
         (uVar7 = (uVar7 * -0x5f6fa77e17000000 >> 0x3a ^ uVar7 * -0x5f6fa77e17000000 >> 0x29 ^
                   *(ulong *)(lVar9 + 0x228) ^ uVar7 * 0xa0905881e9) * 0x3dee219263000000 >> 0x18,
         uVar7 < *(ulong *)(lVar9 + 0x230))) {
        if (*(char *)(lVar9 + 0x2f5) == '\0') {
          lVar10 = param_1[4];
          lVar9 = *(long *)(lVar9 + 0x2c8);
          *(ulong *)(lVar9 + uVar7 * 0x10) = uVar4 | uVar8;
          *(ulong *)(lVar9 + 8 + uVar7 * 0x10) = uVar11 >> 0x21 | 0x100000000;
          uVar6 = *(ulong *)(lVar10 + 0xec8);
          uVar8 = uVar7 + 1;
          if (uVar7 + 1 < uVar6) {
            uVar8 = uVar6;
          }
          *(ulong *)(lVar10 + 0xec8) = uVar8;
          return;
        }
        lVar9 = param_1[1];
        lVar10 = *(long *)(lVar9 + 0x160);
        lVar2 = *(long *)(lVar9 + 0x200);
        uVar1 = *(uint *)(lVar10 + (uVar11 >> 0x2d) * 4);
        *(ulong *)(lVar2 + (ulong)uVar1) = uVar7 | (ulong)(uVar3 & 0xfff) << 0x2b;
        *(ulong *)(lVar2 + 8 + (ulong)uVar1) = uVar4 | uVar8;
        uVar3 = uVar1 + 0x10 & 0xff;
        *(uint *)(lVar10 + (uVar11 >> 0x2d) * 4) = uVar1 & 0xffffff00 | uVar3;
        goto LAB_0069bd69;
      }
    }
LAB_0069bcd7:
    lVar9 = param_1[1];
    lVar10 = *(long *)(lVar9 + 0x2a0);
    if (lVar10 != *(long *)(lVar9 + 0x290)) goto LAB_0069bcef;
  }
  else {
    if (-1 < (long)uVar6) {
      if (0x3fffffffffffffff < uVar6) {
LAB_0069bdd0:
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("long id (v2 sink)",0x11);
      }
      goto LAB_0069bcd7;
    }
    uVar6 = raw_token(param_1,((uVar6 & 0x7fffffffffffffff) >> 8) + param_1[7],uVar6 & 0xff);
    lVar9 = param_1[1];
    lVar10 = *(long *)(lVar9 + 0x2a0);
    if (lVar10 != *(long *)(lVar9 + 0x290)) goto LAB_0069bcef;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar9 + 0x290);
LAB_0069bcef:
  lVar2 = *(long *)(lVar9 + 0x298);
  *(ulong *)(lVar2 + lVar10 * 0x18) = uVar6;
  *(ulong *)(lVar2 + 8 + lVar10 * 0x18) = uVar8;
  *(ulong *)(lVar2 + 0x10 + lVar10 * 0x18) = uVar5;
  *(long *)(lVar9 + 0x2a0) = lVar10 + 1;
  return;
}


// ==== <pipeline::parse::Ctx>::ev_one @ 0069be80 (1096 bytes)

/* <pipeline[509596c7b52975b2]::parse::Ctx>::ev_one */

void __rustcall <pipeline[509596c7b52975b2]::parse::Ctx>::ev_one(long *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  uVar2 = param_2[3];
  if (SBORROW8(0,uVar2)) {
LAB_0069c1c5:
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback("ingest_ts bad or out of range",0x1d);
  }
  lVar14 = *param_1;
  uVar11 = uVar2 - *(long *)(lVar14 + 0x200);
  if (0x7cfffc17 < uVar11) goto LAB_0069c1c5;
  uVar4 = param_2[1];
  uVar10 = 0xffffffffffffffff;
  if (uVar4 == 0xffffffffffffffff) {
LAB_0069bf08:
    uVar8 = 0;
  }
  else {
    uVar13 = param_2[2] - *(long *)(lVar14 + 0x1e0);
    if (*(ulong *)(lVar14 + 0x1e8) <= uVar13) goto LAB_0069bf08;
    uVar1 = *(uint *)((long)param_2 + 0x24);
    if (uVar1 == 0xffffffff || 2 < (byte)param_2[4]) goto LAB_0069bf08;
    uVar7 = (ulong)(uint)param_2[5];
    uVar8 = 0;
    if (((long)(uVar2 - param_2[2]) < 0x5265c01) && ((byte)param_2[4] != 2 || uVar7 != 0)) {
      if (uVar7 == 0) {
        uVar9 = 0;
        if (uVar4 < 0x10000000000) goto LAB_0069c093;
code_r0x0069c100:
        if ((long)uVar4 < 0) {
          uVar4 = raw_token(param_1,((uVar4 & 0x7fffffffffffffff) >> 8) + param_1[7],uVar4 & 0xff);
          lVar12 = param_1[1];
          uVar10 = *(ulong *)(lVar12 + 0x270);
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_0069c1d4;
LAB_0069c116:
          lVar12 = param_1[1];
          uVar10 = *(ulong *)(lVar12 + 0x270);
        }
        if (0x3fffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          pipeline[509596c7b52975b2]::sys::fallback("too many odd-user rows",0x16);
        }
        if (uVar10 == *(ulong *)(lVar12 + 0x260)) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(lVar12 + 0x260);
        }
        *(ulong *)(*(long *)(lVar12 + 0x268) + uVar10 * 8) = uVar4;
        *(ulong *)(lVar12 + 0x270) = uVar10 + 1;
        uVar8 = param_1[6] << 0x16 | uVar10 | 0x4000000;
        uVar10 = 0;
      }
      else {
        uVar10 = 0x20000;
        if (uVar1 < 0x20000) {
          uVar10 = (ulong)uVar1;
        }
        uVar9 = (ulong)*(byte *)(*(long *)(lVar14 + 8) + uVar10) << 4;
        if (0xffffffffff < uVar4) goto code_r0x0069c100;
LAB_0069c093:
        uVar10 = (uVar4 * 0xa0905881e9 ^ *(ulong *)(lVar14 + 0x218) ^
                 uVar4 * -0x5f6fa77e17000000 >> 0x3a ^ uVar4 * -0x5f6fa77e17000000 >> 0x29) *
                 0x3dee219263;
        uVar8 = (ulong)((uint)(uVar10 >> 9) & 0x7fffffff);
        uVar10 = (ulong)((uint)uVar10 & 0x1ff);
        if (*(ulong *)(lVar14 + 0x240) <= uVar8 || 0xd < uVar10) goto LAB_0069c116;
      }
      uVar10 = uVar7 << 9 | uVar9 | uVar13 << 0x21 | uVar10;
    }
  }
  uVar4 = *param_2;
  if (uVar4 < 0x10000000000) {
    uVar7 = uVar4 * -0x5f6fa77e17000000 >> 0x3a ^ uVar4 * -0x5f6fa77e17000000 >> 0x29 ^
            *(ulong *)(lVar14 + 0x220) ^ uVar4 * 0xa0905881e9;
    uVar13 = uVar7 * 0x3dee219263000000;
    if (uVar13 >> 0x18 < *(ulong *)(lVar14 + 0x238)) {
      lVar14 = param_1[1];
      uVar13 = uVar13 >> 0x27;
      puVar5 = *(ulong **)(*(long *)(lVar14 + 200) + uVar13 * 8);
      if (((uint)puVar5 & 0x3ff) == 0x3f0) {
        puVar5 = (ulong *)<pipeline[509596c7b52975b2]::parse::EvPart>::esc_chunk
                                    (lVar14,uVar13,puVar5);
      }
      *puVar5 = uVar10;
      puVar5[1] = uVar8 << 0x25 |
                  (uVar11 * 0x10624dd3 >> 0x26) << 0x10 | (ulong)((int)uVar7 * -0x11de6d9d & 0x7fff)
      ;
      *(ulong **)(*(long *)(lVar14 + 200) + uVar13 * 8) = puVar5 + 2;
      return;
    }
LAB_0069bfcd:
    if ((uint)(uVar4 >> 0x3e) == 1) {
LAB_0069c1d4:
                    /* WARNING: Subroutine does not return */
      pipeline[509596c7b52975b2]::sys::fallback("long id (v2 sink)",0x11);
    }
    lVar14 = param_1[1];
    lVar12 = *(long *)(lVar14 + 0x288);
    if (lVar12 != *(long *)(lVar14 + 0x278)) goto LAB_0069bff5;
  }
  else {
    if (-1 < (long)uVar4) goto LAB_0069bfcd;
    uVar4 = raw_token(param_1,((uVar4 & 0x7fffffffffffffff) >> 8) + param_1[7],uVar4 & 0xff);
    lVar14 = param_1[1];
    lVar12 = *(long *)(lVar14 + 0x288);
    if (lVar12 != *(long *)(lVar14 + 0x278)) goto LAB_0069bff5;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::OddEv>>::grow_one
            (lVar14 + 0x278);
LAB_0069bff5:
  lVar3 = *(long *)(lVar14 + 0x280);
  lVar6 = lVar12 * 0x20;
  *(ulong *)(lVar3 + lVar6) = uVar4;
  *(ulong *)(lVar3 + 8 + lVar6) = uVar2;
  *(ulong *)(lVar3 + 0x10 + lVar6) = uVar10;
  *(ulong *)(lVar3 + 0x18 + lVar6) = uVar8;
  *(long *)(lVar14 + 0x288) = lVar12 + 1;
  return;
}


// ==== <pipeline::parse::Ctx>::ck_batch @ 0069c2e0 (3981 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch */

void __rustcall <pipeline[509596c7b52975b2]::parse::Ctx>::ck_batch(long *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  uint uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long *plVar38;
  undefined1 (*pauVar39) [32];
  undefined8 *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  byte bVar50;
  byte bVar51;
  ulong uVar52;
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
  undefined1 auVar80 [64];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  ulong local_128 [2];
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  code *local_78;
  ulong uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  lVar22 = param_1[3];
  uVar44 = *(ulong *)(lVar22 + 0x1000);
  if (uVar44 != 0) {
    *(undefined8 *)(lVar22 + 0x1000) = 0;
    lVar23 = param_1[1];
    *(long *)(lVar23 + 0x730) = *(long *)(lVar23 + 0x730) + uVar44;
    uVar48 = DAT_00201e20;
    lVar45 = *param_1;
    lVar46 = *(long *)(lVar45 + 0x230);
    if ((lVar46 == 0) || (*(char *)(lVar45 + 0x2f5) == '\x01')) {
      plVar24 = (long *)param_1[5];
      lVar43 = param_1[4];
      auVar53 = vpbroadcastq_avx512vl();
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulong *)(lVar45 + 0x1f0);
      auVar54 = vpbroadcastq_avx512vl(auVar4);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulong *)(lVar45 + 0x1f8);
      auVar55 = vpbroadcastq_avx512vl(auVar5);
      uVar3 = *(undefined8 *)(lVar45 + 0x240);
      auVar79._8_8_ = uVar3;
      auVar79._0_8_ = uVar3;
      auVar79._16_8_ = uVar3;
      auVar79._24_8_ = uVar3;
      lVar45 = *(long *)(lVar23 + 0x1c8);
      auVar80 = ZEXT3264(CONCAT824(lVar45 + _UNK_00203778,
                                   CONCAT816(lVar45 + _UNK_00203770,
                                             CONCAT88(lVar45 + _UNK_00203768,lVar45 + _DAT_00203760)
                                            )));
      local_38 = param_1;
      if (*plVar24 == 1) {
        lVar45 = plVar24[1];
        auVar72._8_8_ = lVar45;
        auVar72._0_8_ = lVar45;
        auVar72._16_8_ = lVar45;
        auVar72._24_8_ = lVar45;
        lVar45 = plVar24[2];
        auVar73._8_8_ = lVar45;
        auVar73._0_8_ = lVar45;
        auVar73._16_8_ = lVar45;
        auVar73._24_8_ = lVar45;
        if (lVar46 == 0) {
          local_128[0] = 0;
          local_128[1] = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          lVar45 = 0;
          auVar74._8_8_ = DAT_00201b90;
          auVar74._0_8_ = DAT_00201b90;
          auVar74._16_8_ = DAT_00201b90;
          auVar74._24_8_ = DAT_00201b90;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = DAT_00201b28;
          auVar56 = vpbroadcastq_avx512vl(auVar17);
          auVar82._8_8_ = DAT_00201e40;
          auVar82._0_8_ = DAT_00201e40;
          auVar82._16_8_ = DAT_00201e40;
          auVar82._24_8_ = DAT_00201e40;
          auVar84._8_8_ = DAT_00201ca0;
          auVar84._0_8_ = DAT_00201ca0;
          auVar84._16_8_ = DAT_00201ca0;
          auVar84._24_8_ = DAT_00201ca0;
          auVar86._8_8_ = DAT_00201d58;
          auVar86._0_8_ = DAT_00201d58;
          auVar86._16_8_ = DAT_00201d58;
          auVar86._24_8_ = DAT_00201d58;
          auVar87._8_8_ = DAT_00201c50;
          auVar87._0_8_ = DAT_00201c50;
          auVar87._16_8_ = DAT_00201c50;
          auVar87._24_8_ = DAT_00201c50;
          auVar89._8_8_ = DAT_00201d98;
          auVar89._0_8_ = DAT_00201d98;
          auVar89._16_8_ = DAT_00201d98;
          auVar89._24_8_ = DAT_00201d98;
          auVar91._8_8_ = DAT_00201d20;
          auVar91._0_8_ = DAT_00201d20;
          auVar91._16_8_ = DAT_00201d20;
          auVar91._24_8_ = DAT_00201d20;
          auVar57 = vmovdqa64_avx512vl(_DAT_002032a0);
          auVar58 = in_ZMM17._0_32_;
          auVar58 = vpternlogd_avx512vl(auVar58,auVar58,auVar58,0xff);
          auVar59 = vmovdqa64_avx512vl(_DAT_002035e0);
          lVar46 = 0;
          uVar52 = 0;
          do {
            auVar62 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x200 + lVar45 * 4));
            auVar63 = vpsubq_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar45 * 4),auVar54);
            auVar64 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x400 + lVar45 * 4));
            auVar60 = *(undefined1 (*) [32])(lVar22 + 0x600 + lVar45 * 4);
            auVar61 = vpsubq_avx512vl(auVar62,auVar72);
            uVar3 = vpcmpq_avx512vl(auVar60,auVar58,4);
            uVar28 = vpcmpuq_avx512vl(auVar61,auVar73,2);
            uVar29 = vpcmpuq_avx512vl(auVar63,auVar55,1);
            bVar51 = (byte)uVar3 & 0xf & (byte)uVar28 & (byte)uVar29;
            auVar61 = vpmullq_avx512vl(auVar60,auVar74);
            auVar61 = vpandq_avx512vl(auVar61,auVar56);
            auVar65 = vpsrlq_avx512vl(auVar61,0x11);
            auVar71 = vpsrlq_avx512vl(auVar61,0x22);
            auVar61 = vpternlogq_avx512vl(auVar65 ^ auVar71,auVar61,auVar53,0x96);
            auVar65 = vpmullq_avx512vl(auVar61,auVar82);
            auVar61 = vpsrlq_avx2(auVar65,9);
            auVar61 = vpand_avx2(auVar61,auVar84);
            auVar71 = vpandq_avx512vl(auVar65,auVar86);
            uVar28 = vpcmpuq_avx512vl(auVar60,auVar87,1);
            uVar29 = vpcmpuq_avx512vl(auVar61,auVar79,1);
            uVar3 = vpcmpq_avx512vl(auVar71,auVar89,1);
            uVar30 = vpcmpuq_avx512vl(auVar64,auVar87,1);
            bVar50 = (byte)uVar28 & 0xf & (byte)uVar29 & (byte)uVar3 & (byte)uVar30 & bVar51;
            auVar63 = vpsllq_avx2(auVar63,0x20);
            auVar60 = vpsllq_avx512vl(auVar62,4);
            auVar62 = vpsllq_avx2(auVar65,0x22);
            auVar62 = vpternlogq_avx512vl(auVar62,auVar64,auVar91,0xec);
            auVar60 = vpternlogq_avx512vl(auVar60,auVar71,auVar63,0xfe);
            auVar61 = vpsrlq_avx512vl(auVar61,0xc);
            bVar25 = (bool)(bVar50 >> 1 & 1);
            bVar26 = (bool)(bVar50 >> 2 & 1);
            auVar63 = vpermt2q_avx512vl(auVar62,auVar57,auVar60);
            *(undefined1 (*) [32])(lVar43 + lVar45 * 8) = auVar63;
            auVar60 = vpermt2q_avx512vl(auVar62,auVar59,auVar60);
            *(undefined1 (*) [32])(lVar43 + 0x20 + lVar45 * 8) = auVar60;
            puVar1 = (ulong *)(lVar43 + 0x400 + uVar52 * 8);
            *puVar1 = (ulong)(bVar50 & 1) * auVar61._0_8_ |
                      (ulong)!(bool)(bVar50 & 1) * auVar80._0_8_;
            puVar1[1] = (ulong)bVar25 * auVar61._8_8_ | (ulong)!bVar25 * auVar80._8_8_;
            puVar1[2] = (ulong)bVar26 * auVar61._16_8_ | (ulong)!bVar26 * auVar80._16_8_;
            puVar1[3] = (ulong)(bVar50 >> 3) * auVar61._24_8_ |
                        (ulong)!(bool)(bVar50 >> 3) * auVar80._24_8_;
            *(byte *)((long)local_128 + lVar46) = bVar50;
            *(byte *)((long)local_128 + lVar46 + 0x10) = bVar51;
            uVar52 = uVar52 + 4;
            lVar46 = lVar46 + 1;
            lVar45 = lVar45 + 8;
            auVar80 = ZEXT3264(CONCAT824(uVar48 + auVar80._24_8_,
                                         CONCAT816(uVar48 + auVar80._16_8_,
                                                   CONCAT88(uVar48 + auVar80._8_8_,
                                                            uVar48 + auVar80._0_8_))));
          } while (uVar52 < uVar44);
        }
        else {
          local_128[0] = 0;
          local_128[1] = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          auVar56 = vpbroadcastq_avx512vl();
          auVar57 = vpbroadcastq_avx512vl();
          lVar45 = 0;
          auVar81._8_8_ = DAT_00201b90;
          auVar81._0_8_ = DAT_00201b90;
          auVar81._16_8_ = DAT_00201b90;
          auVar81._24_8_ = DAT_00201b90;
          auVar83._8_8_ = DAT_00201b28;
          auVar83._0_8_ = DAT_00201b28;
          auVar83._16_8_ = DAT_00201b28;
          auVar83._24_8_ = DAT_00201b28;
          auVar85._8_8_ = DAT_00201e40;
          auVar85._0_8_ = DAT_00201e40;
          auVar85._16_8_ = DAT_00201e40;
          auVar85._24_8_ = DAT_00201e40;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = DAT_00201ca0;
          auVar58 = vpbroadcastq_avx512vl(auVar6);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = DAT_00201d58;
          auVar59 = vpbroadcastq_avx512vl(auVar7);
          auVar90._8_8_ = DAT_00201c50;
          auVar90._0_8_ = DAT_00201c50;
          auVar90._16_8_ = DAT_00201c50;
          auVar90._24_8_ = DAT_00201c50;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = DAT_00201d98;
          auVar60 = vpbroadcastq_avx512vl(auVar8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = DAT_00201d20;
          auVar61 = vpbroadcastq_avx512vl(auVar9);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_00201e20;
          auVar62 = vpbroadcastq_avx512vl(auVar10);
          auVar63 = vmovdqa64_avx512vl(_DAT_002032a0);
          auVar64 = in_ZMM19._0_32_;
          auVar64 = vpternlogd_avx512vl(auVar64,auVar64,auVar64,0xff);
          auVar65 = vmovdqa64_avx512vl(_DAT_002035e0);
          lVar46 = 0;
          uVar48 = 0;
          do {
            auVar66 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x200 + lVar45 * 4));
            auVar67 = vpsubq_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar45 * 4),auVar54);
            auVar71 = *(undefined1 (*) [32])(lVar22 + 0x400 + lVar45 * 4);
            auVar78 = *(undefined1 (*) [32])(lVar22 + 0x600 + lVar45 * 4);
            auVar68 = vpsubq_avx512vl(auVar66,auVar72);
            uVar3 = vpcmpq_avx512vl(auVar78,auVar64,4);
            uVar28 = vpcmpuq_avx512vl(auVar68,auVar73,2);
            uVar29 = vpcmpuq_avx512vl(auVar67,auVar55,1);
            bVar50 = (byte)uVar3 & 0xf & (byte)uVar28 & (byte)uVar29;
            auVar68 = vpmullq_avx512vl(auVar78,auVar81);
            auVar68 = vpand_avx2(auVar68,auVar83);
            auVar69 = vpsrlq_avx512vl(auVar68,0x11);
            auVar70 = vpsrlq_avx512vl(auVar68,0x22);
            auVar68 = vpternlogq_avx512vl(auVar69 ^ auVar70,auVar68,auVar53,0x96);
            auVar68 = vpmullq_avx512vl(auVar68,auVar85);
            auVar69 = vpsrlq_avx2(auVar68,9);
            auVar69 = vpandq_avx512vl(auVar69,auVar58);
            auVar70 = vpandq_avx512vl(auVar68,auVar59);
            uVar28 = vpcmpuq_avx512vl(auVar78,auVar90,1);
            uVar29 = vpcmpuq_avx512vl(auVar69,auVar79,1);
            uVar3 = vpcmpq_avx512vl(auVar70,auVar60,1);
            uVar30 = vpcmpuq_avx512vl(auVar71,auVar90,1);
            auVar71 = vpmullq_avx512vl(auVar71,auVar81);
            auVar71 = vpand_avx2(auVar71,auVar83);
            auVar88 = vpsrlq_avx2(auVar71,0x11);
            auVar78 = vpsrlq_avx2(auVar71,0x22);
            auVar71 = vpternlogq_avx512vl(auVar78,auVar71,auVar88 ^ auVar56,0x96);
            auVar71 = vpmullq_avx512vl(auVar71,auVar85);
            auVar71 = vpand_avx2(auVar83,auVar71);
            uVar52 = vpcmpuq_avx512vl(auVar71,auVar57,1);
            uVar52 = ((byte)uVar28 & 0xf & (byte)uVar29 & (byte)uVar3 & (byte)uVar30 & bVar50) &
                     uVar52;
            auVar67 = vpsllq_avx2(auVar67,0x20);
            auVar78 = vpsllq_avx512vl(auVar66,4);
            auVar68 = vpsllq_avx2(auVar68,0x22);
            auVar71 = vpternlogq_avx512vl(auVar68,auVar71,auVar61,0xec);
            auVar78 = vpternlogq_avx512vl(auVar78,auVar70,auVar67,0xfe);
            auVar68 = vpaddq_avx512vl(auVar80._0_32_,auVar62);
            auVar66 = vpsrlq_avx512vl(auVar69,0xc);
            bVar25 = (bool)((byte)uVar52 & 1);
            bVar26 = (bool)((byte)(uVar52 >> 1) & 1);
            bVar27 = (bool)((byte)(uVar52 >> 2) & 1);
            auVar67 = vpermt2q_avx512vl(auVar71,auVar63,auVar78);
            *(undefined1 (*) [32])(lVar43 + lVar45 * 8) = auVar67;
            auVar71 = vpermt2q_avx512vl(auVar71,auVar65,auVar78);
            *(undefined1 (*) [32])(lVar43 + 0x20 + lVar45 * 8) = auVar71;
            puVar1 = (ulong *)(lVar43 + 0x400 + uVar48 * 8);
            *puVar1 = (ulong)bVar25 * auVar66._0_8_ | (ulong)!bVar25 * auVar80._0_8_;
            puVar1[1] = (ulong)bVar26 * auVar66._8_8_ | (ulong)!bVar26 * auVar80._8_8_;
            puVar1[2] = (ulong)bVar27 * auVar66._16_8_ | (ulong)!bVar27 * auVar80._16_8_;
            puVar1[3] = (uVar52 >> 3) * auVar66._24_8_ |
                        (ulong)!SUB81(uVar52 >> 3,0) * auVar80._24_8_;
            *(byte *)((long)local_128 + lVar46) = (byte)uVar52;
            *(byte *)((long)local_128 + lVar46 + 0x10) = bVar50;
            uVar48 = uVar48 + 4;
            lVar46 = lVar46 + 1;
            lVar45 = lVar45 + 8;
            auVar80 = ZEXT3264(auVar68);
          } while (uVar48 < uVar44);
        }
      }
      else {
        lVar45 = plVar24[7];
        if (lVar46 == 0) {
          local_128[0] = 0;
          local_128[1] = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          lVar46 = 0;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = DAT_00201b60;
          auVar72 = vpbroadcastq_avx512vl(auVar18);
          auVar61._8_8_ = DAT_00201ac0;
          auVar61._0_8_ = DAT_00201ac0;
          auVar61._16_8_ = DAT_00201ac0;
          auVar61._24_8_ = DAT_00201ac0;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = DAT_00201ac0;
          auVar73 = vpbroadcastq_avx512vl(auVar19);
          auVar60._8_8_ = DAT_00201b90;
          auVar60._0_8_ = DAT_00201b90;
          auVar60._16_8_ = DAT_00201b90;
          auVar60._24_8_ = DAT_00201b90;
          auVar62._8_8_ = DAT_00201b28;
          auVar62._0_8_ = DAT_00201b28;
          auVar62._16_8_ = DAT_00201b28;
          auVar62._24_8_ = DAT_00201b28;
          auVar63._8_8_ = DAT_00201e40;
          auVar63._0_8_ = DAT_00201e40;
          auVar63._16_8_ = DAT_00201e40;
          auVar63._24_8_ = DAT_00201e40;
          auVar64._8_8_ = DAT_00201ca0;
          auVar64._0_8_ = DAT_00201ca0;
          auVar64._16_8_ = DAT_00201ca0;
          auVar64._24_8_ = DAT_00201ca0;
          auVar65._8_8_ = DAT_00201d58;
          auVar65._0_8_ = DAT_00201d58;
          auVar65._16_8_ = DAT_00201d58;
          auVar65._24_8_ = DAT_00201d58;
          auVar71._8_8_ = DAT_00201c50;
          auVar71._0_8_ = DAT_00201c50;
          auVar71._16_8_ = DAT_00201c50;
          auVar71._24_8_ = DAT_00201c50;
          auVar78._8_8_ = DAT_00201d98;
          auVar78._0_8_ = DAT_00201d98;
          auVar78._16_8_ = DAT_00201d98;
          auVar78._24_8_ = DAT_00201d98;
          auVar68._8_8_ = DAT_00201d20;
          auVar68._0_8_ = DAT_00201d20;
          auVar68._16_8_ = DAT_00201d20;
          auVar68._24_8_ = DAT_00201d20;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = DAT_00201e20;
          auVar56 = vpbroadcastq_avx512vl(auVar20);
          auVar57 = vmovdqa64_avx512vl(_DAT_002032a0);
          auVar58 = in_ZMM18._0_32_;
          auVar58 = vpternlogd_avx512vl(auVar58,auVar58,auVar58,0xff);
          auVar59 = vmovdqa64_avx512vl(_DAT_002035e0);
          lVar49 = 0;
          uVar48 = 0;
          do {
            auVar66 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar46 * 4));
            auVar69 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x200 + lVar46 * 4));
            auVar70 = vpsubq_avx512vl(auVar66,auVar54);
            uVar52 = vpcmpuq_avx512vl(auVar69,auVar72,1);
            uVar52 = uVar52 & 0xf;
            auVar66 = vmovdqa64_avx512vl(auVar61);
            auVar88 = vpgatherqq_avx512vl(*(undefined8 *)(lVar45 + (long)param_1));
            bVar25 = (bool)((byte)uVar52 & 1);
            auVar67._0_8_ = (ulong)bVar25 * auVar88._0_8_ | (ulong)!bVar25 * auVar66._0_8_;
            bVar25 = (bool)((byte)(uVar52 >> 1) & 1);
            auVar67._8_8_ = (ulong)bVar25 * auVar88._8_8_ | (ulong)!bVar25 * auVar66._8_8_;
            bVar25 = (bool)((byte)(uVar52 >> 2) & 1);
            auVar67._16_8_ = (ulong)bVar25 * auVar88._16_8_ | (ulong)!bVar25 * auVar66._16_8_;
            auVar67._24_8_ =
                 (uVar52 >> 3) * auVar88._24_8_ | (ulong)!SUB81(uVar52 >> 3,0) * auVar66._24_8_;
            auVar88 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x400 + lVar46 * 4));
            auVar66 = *(undefined1 (*) [32])(lVar22 + 0x600 + lVar46 * 4);
            auVar67 = vpandq_avx512vl(auVar67,auVar73);
            uVar3 = vpcmpq_avx512vl(auVar66,auVar58,4);
            uVar28 = vpcmpq_avx512vl(auVar67,auVar61,4);
            uVar29 = vpcmpuq_avx512vl(auVar70,auVar55,1);
            bVar51 = (byte)uVar52 & (byte)uVar3 & 0xf & (byte)uVar28 & (byte)uVar29;
            auVar67 = vpmullq_avx512vl(auVar66,auVar60);
            auVar67 = vpand_avx2(auVar62,auVar67);
            auVar76 = vpsrlq_avx512vl(auVar67,0x11);
            auVar77 = vpsrlq_avx512vl(auVar67,0x22);
            auVar67 = vpternlogq_avx512vl(auVar76 ^ auVar77,auVar67,auVar53,0x96);
            auVar76 = vpmullq_avx512vl(auVar67,auVar63);
            auVar67 = vpsrlq_avx2(auVar76,9);
            auVar67 = vpand_avx2(auVar67,auVar64);
            auVar77 = vpandq_avx512vl(auVar76,auVar65);
            uVar28 = vpcmpuq_avx512vl(auVar66,auVar71,1);
            uVar29 = vpcmpuq_avx512vl(auVar67,auVar79,1);
            uVar3 = vpcmpq_avx512vl(auVar77,auVar78,1);
            uVar30 = vpcmpuq_avx512vl(auVar88,auVar71,1);
            bVar50 = (byte)uVar28 & 0xf & (byte)uVar29 & (byte)uVar3 & (byte)uVar30 & bVar51;
            auVar66 = vpsllq_avx512vl(auVar70,0x20);
            auVar69 = vpsllq_avx512vl(auVar69,4);
            auVar70 = vpsllq_avx2(auVar76,0x22);
            auVar70 = vpternlogq_avx512vl(auVar70,auVar88,auVar68,0xec);
            auVar66 = vpternlogq_avx512vl(auVar69,auVar77,auVar66,0xfe);
            auVar69 = vpaddq_avx512vl(auVar80._0_32_,auVar56);
            auVar67 = vpsrlq_avx512vl(auVar67,0xc);
            bVar25 = (bool)(bVar50 >> 1 & 1);
            bVar26 = (bool)(bVar50 >> 2 & 1);
            auVar88 = vpermt2q_avx512vl(auVar70,auVar57,auVar66);
            *(undefined1 (*) [32])(lVar43 + lVar46 * 8) = auVar88;
            auVar66 = vpermt2q_avx512vl(auVar70,auVar59,auVar66);
            *(undefined1 (*) [32])(lVar43 + 0x20 + lVar46 * 8) = auVar66;
            puVar1 = (ulong *)(lVar43 + 0x400 + uVar48 * 8);
            *puVar1 = (ulong)(bVar50 & 1) * auVar67._0_8_ |
                      (ulong)!(bool)(bVar50 & 1) * auVar80._0_8_;
            puVar1[1] = (ulong)bVar25 * auVar67._8_8_ | (ulong)!bVar25 * auVar80._8_8_;
            puVar1[2] = (ulong)bVar26 * auVar67._16_8_ | (ulong)!bVar26 * auVar80._16_8_;
            puVar1[3] = (ulong)(bVar50 >> 3) * auVar67._24_8_ |
                        (ulong)!(bool)(bVar50 >> 3) * auVar80._24_8_;
            *(byte *)((long)local_128 + lVar49) = bVar50;
            *(byte *)((long)local_128 + lVar49 + 0x10) = bVar51;
            uVar48 = uVar48 + 4;
            lVar49 = lVar49 + 1;
            lVar46 = lVar46 + 8;
            auVar80 = ZEXT3264(auVar69);
          } while (uVar48 < uVar44);
        }
        else {
          local_128[0] = 0;
          local_128[1] = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          auVar72 = vpbroadcastq_avx512vl();
          auVar73 = vpbroadcastq_avx512vl();
          lVar46 = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = DAT_00201b60;
          auVar56 = vpbroadcastq_avx512vl(auVar11);
          auVar69._8_8_ = DAT_00201ac0;
          auVar69._0_8_ = DAT_00201ac0;
          auVar69._16_8_ = DAT_00201ac0;
          auVar69._24_8_ = DAT_00201ac0;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = DAT_00201ac0;
          auVar57 = vpbroadcastq_avx512vl(auVar12);
          auVar70._8_8_ = DAT_00201b90;
          auVar70._0_8_ = DAT_00201b90;
          auVar70._16_8_ = DAT_00201b90;
          auVar70._24_8_ = DAT_00201b90;
          auVar88._8_8_ = DAT_00201b28;
          auVar88._0_8_ = DAT_00201b28;
          auVar88._16_8_ = DAT_00201b28;
          auVar88._24_8_ = DAT_00201b28;
          auVar76._8_8_ = DAT_00201e40;
          auVar76._0_8_ = DAT_00201e40;
          auVar76._16_8_ = DAT_00201e40;
          auVar76._24_8_ = DAT_00201e40;
          auVar66._8_8_ = DAT_00201ca0;
          auVar66._0_8_ = DAT_00201ca0;
          auVar66._16_8_ = DAT_00201ca0;
          auVar66._24_8_ = DAT_00201ca0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = DAT_00201d58;
          auVar58 = vpbroadcastq_avx512vl(auVar13);
          auVar77._8_8_ = DAT_00201c50;
          auVar77._0_8_ = DAT_00201c50;
          auVar77._16_8_ = DAT_00201c50;
          auVar77._24_8_ = DAT_00201c50;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = DAT_00201d98;
          auVar59 = vpbroadcastq_avx512vl(auVar14);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = DAT_00201d20;
          auVar60 = vpbroadcastq_avx512vl(auVar15);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = DAT_00201e20;
          auVar61 = vpbroadcastq_avx512vl(auVar16);
          auVar62 = vmovdqa64_avx512vl(_DAT_002032a0);
          auVar63 = in_ZMM20._0_32_;
          auVar63 = vpternlogd_avx512vl(auVar63,auVar63,auVar63,0xff);
          auVar64 = vmovdqa64_avx512vl(_DAT_002035e0);
          lVar49 = 0;
          uVar48 = 0;
          do {
            auVar78 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar46 * 4));
            auVar68 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar22 + 0x200 + lVar46 * 4));
            auVar65 = *(undefined1 (*) [32])(lVar22 + 0x400 + lVar46 * 4);
            auVar71 = *(undefined1 (*) [32])(lVar22 + 0x600 + lVar46 * 4);
            uVar52 = vpcmpuq_avx512vl(auVar68,auVar56,1);
            uVar52 = uVar52 & 0xf;
            auVar67 = vmovdqa64_avx512vl(auVar69);
            auVar74 = vpgatherqq_avx512vl(*(undefined8 *)((long)local_128 + lVar45));
            bVar25 = (bool)((byte)uVar52 & 1);
            auVar75._0_8_ = (ulong)bVar25 * auVar74._0_8_ | (ulong)!bVar25 * auVar67._0_8_;
            bVar25 = (bool)((byte)(uVar52 >> 1) & 1);
            auVar75._8_8_ = (ulong)bVar25 * auVar74._8_8_ | (ulong)!bVar25 * auVar67._8_8_;
            bVar25 = (bool)((byte)(uVar52 >> 2) & 1);
            auVar75._16_8_ = (ulong)bVar25 * auVar74._16_8_ | (ulong)!bVar25 * auVar67._16_8_;
            auVar75._24_8_ =
                 (uVar52 >> 3) * auVar74._24_8_ | (ulong)!SUB81(uVar52 >> 3,0) * auVar67._24_8_;
            auVar67 = vpsubq_avx512vl(auVar78,auVar54);
            auVar78 = vpandq_avx512vl(auVar75,auVar57);
            uVar3 = vpcmpq_avx512vl(auVar71,auVar63,4);
            uVar28 = vpcmpq_avx512vl(auVar78,auVar69,4);
            uVar29 = vpcmpuq_avx512vl(auVar67,auVar55,1);
            bVar50 = (byte)uVar52 & (byte)uVar3 & 0xf & (byte)uVar28 & (byte)uVar29;
            auVar78 = vpmullq_avx512vl(auVar71,auVar70);
            auVar78 = vpand_avx2(auVar78,auVar88);
            auVar74 = vpsrlq_avx512vl(auVar78,0x11);
            auVar75 = vpsrlq_avx512vl(auVar78,0x22);
            auVar78 = vpternlogq_avx512vl(auVar74 ^ auVar75,auVar78,auVar53,0x96);
            auVar74 = vpmullq_avx512vl(auVar78,auVar76);
            auVar78 = vpsrlq_avx2(auVar74,9);
            auVar78 = vpand_avx2(auVar78,auVar66);
            auVar75 = vpandq_avx512vl(auVar74,auVar58);
            uVar28 = vpcmpuq_avx512vl(auVar71,auVar77,1);
            uVar29 = vpcmpuq_avx512vl(auVar78,auVar79,1);
            uVar3 = vpcmpq_avx512vl(auVar75,auVar59,1);
            uVar30 = vpcmpuq_avx512vl(auVar65,auVar77,1);
            auVar65 = vpmullq_avx512vl(auVar65,auVar70);
            auVar65 = vpand_avx2(auVar88,auVar65);
            auVar82 = vpsrlq_avx2(auVar65,0x11);
            auVar71 = vpsrlq_avx2(auVar65,0x22);
            auVar65 = vpternlogq_avx512vl(auVar71,auVar65,auVar82 ^ auVar72,0x96);
            auVar65 = vpmullq_avx512vl(auVar65,auVar76);
            auVar65 = vpand_avx2(auVar88,auVar65);
            uVar52 = vpcmpuq_avx512vl(auVar65,auVar73,1);
            uVar52 = ((byte)uVar28 & 0xf & (byte)uVar29 & (byte)uVar3 & (byte)uVar30 & bVar50) &
                     uVar52;
            auVar71 = vpsllq_avx512vl(auVar67,0x20);
            auVar68 = vpsllq_avx512vl(auVar68,4);
            auVar67 = vpsllq_avx2(auVar74,0x22);
            auVar65 = vpternlogq_avx512vl(auVar67,auVar65,auVar60,0xec);
            auVar71 = vpternlogq_avx512vl(auVar68,auVar75,auVar71,0xfe);
            auVar68 = vpaddq_avx512vl(auVar80._0_32_,auVar61);
            auVar78 = vpsrlq_avx512vl(auVar78,0xc);
            bVar25 = (bool)((byte)uVar52 & 1);
            bVar26 = (bool)((byte)(uVar52 >> 1) & 1);
            bVar27 = (bool)((byte)(uVar52 >> 2) & 1);
            auVar67 = vpermt2q_avx512vl(auVar65,auVar62,auVar71);
            *(undefined1 (*) [32])(lVar43 + lVar46 * 8) = auVar67;
            auVar65 = vpermt2q_avx512vl(auVar65,auVar64,auVar71);
            *(undefined1 (*) [32])(lVar43 + 0x20 + lVar46 * 8) = auVar65;
            puVar1 = (ulong *)(lVar43 + 0x400 + uVar48 * 8);
            *puVar1 = (ulong)bVar25 * auVar78._0_8_ | (ulong)!bVar25 * auVar80._0_8_;
            puVar1[1] = (ulong)bVar26 * auVar78._8_8_ | (ulong)!bVar26 * auVar80._8_8_;
            puVar1[2] = (ulong)bVar27 * auVar78._16_8_ | (ulong)!bVar27 * auVar80._16_8_;
            puVar1[3] = (uVar52 >> 3) * auVar78._24_8_ |
                        (ulong)!SUB81(uVar52 >> 3,0) * auVar80._24_8_;
            *(byte *)((long)local_128 + lVar49) = (byte)uVar52;
            *(byte *)((long)local_128 + lVar49 + 0x10) = bVar50;
            uVar48 = uVar48 + 4;
            lVar49 = lVar49 + 1;
            lVar46 = lVar46 + 8;
            auVar80 = ZEXT3264(auVar68);
          } while (uVar48 < uVar44);
        }
      }
      uVar48 = ~(-1L << (uVar44 & 0x3f));
      if (0x3f < uVar44) {
        uVar48 = 0xffffffffffffffff;
      }
      uVar52 = 0x8000000000000000;
      uVar31 = 0;
      do {
        if ((uVar52 & 0xf0f0f0f0f0f0f0f) != 0) {
          uVar31 = uVar31 << 1 | (ulong)((uVar52 & 0xf0f0f0f0f0f0f0f & local_128[0]) != 0);
        }
        uVar52 = uVar52 >> 1;
      } while (uVar52 != 0);
      uVar52 = 0x8000000000000000;
      uVar32 = 0;
      do {
        if ((uVar52 & 0xf0f0f0f0f0f0f0f) != 0) {
          uVar32 = uVar32 << 1 | (ulong)((uVar52 & 0xf0f0f0f0f0f0f0f & local_128[1]) != 0);
        }
        uVar52 = uVar52 >> 1;
      } while (uVar52 != 0);
      uVar52 = 0x8000000000000000;
      uVar33 = 0;
      do {
        if ((uVar52 & 0xf0f0f0f0f0f0f0f) != 0) {
          uVar33 = uVar33 << 1 | (ulong)((uVar52 & 0xf0f0f0f0f0f0f0f & uStack_118) != 0);
        }
        uVar52 = uVar52 >> 1;
      } while (uVar52 != 0);
      uVar52 = 0x8000000000000000;
      uVar34 = 0;
      do {
        if ((uVar52 & 0xf0f0f0f0f0f0f0f) != 0) {
          uVar34 = uVar34 << 1 | (ulong)((uVar52 & 0xf0f0f0f0f0f0f0f & uStack_110) != 0);
        }
        uVar52 = uVar52 >> 1;
      } while (uVar52 != 0);
      uVar48 = (uVar34 << 0x20 | uVar33) & ~(uVar32 << 0x20 | uVar31) & uVar48;
      local_c0 = lVar23 + 0x140;
      lVar46 = *(long *)(lVar23 + 0x160);
      lVar49 = *(long *)(lVar23 + 0x1d8);
      lVar41 = *(long *)(lVar23 + 0x200);
      lVar45 = lVar43 + uVar44 * 8;
      lVar43 = uVar44 * 0x10 + lVar43;
      uVar44 = uVar44 * -8;
      lVar47 = 0;
      if ((uVar44 & 8) == 0) goto LAB_0069ce97;
      uVar44 = uVar44 - 8;
      while( true ) {
        lVar42 = *(long *)(lVar45 + 0x408 + uVar44);
        uVar21 = *(uint *)(lVar46 + lVar42 * 4);
        bVar50 = (byte)uVar21;
        if (bVar50 == 0) break;
        puVar40 = (undefined8 *)(lVar43 + 0x10 + uVar44 * 2);
        uVar3 = puVar40[1];
        *(undefined8 *)(lVar41 + (ulong)uVar21) = *puVar40;
        ((undefined8 *)(lVar41 + (ulong)uVar21))[1] = uVar3;
        *(uint *)(lVar46 + lVar42 * 4) = CONCAT31((int3)(uVar21 >> 8),bVar50 + 0x10);
        *(int *)(lVar49 + lVar47 * 4) = (int)lVar42;
        lVar47 = lVar47 + (ulong)(0xef < bVar50);
        uVar44 = uVar44 + 0x10;
        if (uVar44 == 0) goto joined_r0x0069cf00;
LAB_0069ce97:
        lVar42 = *(long *)(lVar45 + 0x400 + uVar44);
        uVar21 = *(uint *)(lVar46 + lVar42 * 4);
        bVar50 = (byte)uVar21;
        if (bVar50 == 0) goto joined_r0x0069cf00;
        puVar40 = (undefined8 *)(lVar43 + uVar44 * 2);
        uVar3 = puVar40[1];
        *(undefined8 *)(lVar41 + (ulong)uVar21) = *puVar40;
        ((undefined8 *)(lVar41 + (ulong)uVar21))[1] = uVar3;
        *(uint *)(lVar46 + lVar42 * 4) = CONCAT31((int3)(uVar21 >> 8),bVar50 + 0x10);
        *(int *)(lVar49 + lVar47 * 4) = (int)lVar42;
        lVar47 = lVar47 + (ulong)(0xef < bVar50);
      }
      uVar44 = uVar44 + 8;
joined_r0x0069cf00:
      local_c8 = lVar49;
      if (uVar44 != 0) {
        <pipeline[509596c7b52975b2]::parse::Part>::flush_full(local_c0,lVar49,lVar47);
        lVar47 = 0;
        lVar49 = local_c8;
        if ((uVar44 & 8) == 0) goto LAB_0069d233;
        uVar44 = uVar44 - 8;
        while( true ) {
          lVar42 = *(long *)(lVar45 + 0x408 + uVar44);
          uVar21 = *(uint *)(lVar46 + lVar42 * 4);
          bVar50 = (byte)uVar21;
          if (bVar50 == 0) break;
          puVar40 = (undefined8 *)(lVar43 + 0x10 + uVar44 * 2);
          uVar3 = puVar40[1];
          *(undefined8 *)(lVar41 + (ulong)uVar21) = *puVar40;
          ((undefined8 *)(lVar41 + (ulong)uVar21))[1] = uVar3;
          *(uint *)(lVar46 + lVar42 * 4) = CONCAT31((int3)(uVar21 >> 8),bVar50 + 0x10);
          *(int *)(local_c8 + lVar47 * 4) = (int)lVar42;
          lVar47 = lVar47 + (ulong)(0xef < bVar50);
          uVar44 = uVar44 + 0x10;
          if (uVar44 == 0) goto joined_r0x0069cf00;
LAB_0069d233:
          lVar42 = *(long *)(lVar45 + 0x400 + uVar44);
          uVar21 = *(uint *)(lVar46 + lVar42 * 4);
          bVar50 = (byte)uVar21;
          if (bVar50 == 0) goto joined_r0x0069cf00;
          puVar40 = (undefined8 *)(lVar43 + uVar44 * 2);
          uVar3 = puVar40[1];
          *(undefined8 *)(lVar41 + (ulong)uVar21) = *puVar40;
          ((undefined8 *)(lVar41 + (ulong)uVar21))[1] = uVar3;
          *(uint *)(lVar46 + lVar42 * 4) = CONCAT31((int3)(uVar21 >> 8),bVar50 + 0x10);
          *(int *)(local_c8 + lVar47 * 4) = (int)lVar42;
          lVar47 = lVar47 + (ulong)(0xef < bVar50);
        }
        uVar44 = uVar44 + 8;
        goto joined_r0x0069cf00;
      }
      lVar45 = *(long *)(lVar23 + 0x160);
      lVar46 = *(long *)(lVar23 + 0x178);
      lVar23 = *(long *)(lVar23 + 0x200);
      plVar24 = local_38;
      if (pipeline[509596c7b52975b2]::parse::NT_0 == '\0') {
        if (lVar47 != 0) {
          lVar43 = 0;
          do {
            uVar21 = *(uint *)(lVar49 + lVar43 * 4);
            uVar44 = (ulong)uVar21;
            puVar40 = *(undefined8 **)(lVar46 + uVar44 * 8);
            if (((uint)puVar40 & 0xfff) == 0xfc0) {
              puVar40 = (undefined8 *)
                        <pipeline[509596c7b52975b2]::parse::Part>::new_chunk
                                  (local_c0,uVar44,puVar40);
              lVar49 = local_c8;
            }
            lVar42 = uVar44 * 0x100;
            lVar41 = lVar42 + lVar23;
            uVar3 = *(undefined8 *)(lVar41 + 0x48);
            uVar28 = *(undefined8 *)(lVar41 + 0x50);
            uVar29 = *(undefined8 *)(lVar41 + 0x58);
            uVar30 = *(undefined8 *)(lVar41 + 0x60);
            uVar35 = *(undefined8 *)(lVar41 + 0x68);
            uVar36 = *(undefined8 *)(lVar41 + 0x70);
            uVar37 = *(undefined8 *)(lVar41 + 0x78);
            *puVar40 = *(undefined8 *)(lVar41 + 0x40);
            puVar40[1] = uVar3;
            puVar40[2] = uVar28;
            puVar40[3] = uVar29;
            puVar40[4] = uVar30;
            puVar40[5] = uVar35;
            puVar40[6] = uVar36;
            puVar40[7] = uVar37;
            puVar2 = (undefined8 *)(lVar23 + 0x80 + lVar42);
            uVar3 = puVar2[1];
            uVar28 = puVar2[2];
            uVar29 = puVar2[3];
            uVar30 = puVar2[4];
            uVar35 = puVar2[5];
            uVar36 = puVar2[6];
            uVar37 = puVar2[7];
            puVar40[8] = *puVar2;
            puVar40[9] = uVar3;
            puVar40[10] = uVar28;
            puVar40[0xb] = uVar29;
            puVar40[0xc] = uVar30;
            puVar40[0xd] = uVar35;
            puVar40[0xe] = uVar36;
            puVar40[0xf] = uVar37;
            lVar42 = lVar42 + lVar23;
            uVar3 = *(undefined8 *)(lVar42 + 200);
            uVar28 = *(undefined8 *)(lVar42 + 0xd0);
            uVar29 = *(undefined8 *)(lVar42 + 0xd8);
            uVar30 = *(undefined8 *)(lVar42 + 0xe0);
            uVar35 = *(undefined8 *)(lVar42 + 0xe8);
            uVar36 = *(undefined8 *)(lVar42 + 0xf0);
            uVar37 = *(undefined8 *)(lVar42 + 0xf8);
            puVar40[0x10] = *(undefined8 *)(lVar42 + 0xc0);
            puVar40[0x11] = uVar3;
            puVar40[0x12] = uVar28;
            puVar40[0x13] = uVar29;
            puVar40[0x14] = uVar30;
            puVar40[0x15] = uVar35;
            puVar40[0x16] = uVar36;
            puVar40[0x17] = uVar37;
            *(undefined8 **)(lVar46 + uVar44 * 8) = puVar40 + 0x18;
            *(uint *)(lVar45 + uVar44 * 4) = uVar21 << 8 | 0x40;
            lVar43 = lVar43 + 1;
            plVar24 = local_38;
          } while (lVar47 != lVar43);
        }
      }
      else if (lVar47 != 0) {
        lVar43 = 0;
        do {
          uVar21 = *(uint *)(lVar49 + lVar43 * 4);
          uVar44 = (ulong)uVar21;
          pauVar39 = *(undefined1 (**) [32])(lVar46 + uVar44 * 8);
          if (((uint)pauVar39 & 0xfff) == 0xfc0) {
            pauVar39 = (undefined1 (*) [32])
                       <pipeline[509596c7b52975b2]::parse::Part>::new_chunk
                                 (local_c0,uVar44,pauVar39);
            lVar49 = local_c8;
          }
          lVar41 = uVar44 * 0x100 + lVar23;
          auVar53 = *(undefined1 (*) [32])(lVar41 + 0x60);
          auVar54 = vmovntdq_avx(*(undefined1 (*) [32])(lVar41 + 0x40));
          *pauVar39 = auVar54;
          auVar53 = vmovntdq_avx(auVar53);
          pauVar39[1] = auVar53;
          auVar53 = *(undefined1 (*) [32])(lVar41 + 0xa0);
          auVar54 = vmovntdq_avx(*(undefined1 (*) [32])(lVar41 + 0x80));
          pauVar39[2] = auVar54;
          auVar53 = vmovntdq_avx(auVar53);
          pauVar39[3] = auVar53;
          auVar53 = *(undefined1 (*) [32])(lVar41 + 0xe0);
          auVar54 = vmovntdq_avx(*(undefined1 (*) [32])(lVar41 + 0xc0));
          pauVar39[4] = auVar54;
          auVar53 = vmovntdq_avx(auVar53);
          pauVar39[5] = auVar53;
          *(undefined1 (**) [32])(lVar46 + uVar44 * 8) = pauVar39 + 6;
          *(uint *)(lVar45 + uVar44 * 4) = uVar21 << 8 | 0x40;
          lVar43 = lVar43 + 1;
          plVar24 = local_38;
        } while (lVar47 != lVar43);
      }
      for (; plVar38 = local_38, uVar48 != 0; uVar48 = uVar48 - 1 & uVar48) {
        lVar23 = 0;
        for (uVar44 = uVar48; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x8000000000000000) {
          lVar23 = lVar23 + 1;
        }
        local_128[0] = *(ulong *)(lVar22 + 0x400 + lVar23 * 8);
        if ((local_128[0] & 0xc000000000000000) == 0x4000000000000000) {
          local_108 = *(undefined8 *)(&DAT_00001040 + lVar23 * 8 + lVar22);
          local_100 = *(undefined8 *)(lVar22 + 0x1240 + lVar23 * 8);
        }
        else {
          local_100 = 0;
          local_108 = 0;
        }
        local_128[1] = *(ulong *)(lVar22 + 0x600 + lVar23 * 8);
        if ((local_128[1] & 0xc000000000000000) == 0x4000000000000000) {
          local_f8 = *(undefined8 *)(lVar22 + 0x1440 + lVar23 * 8);
          local_f0 = *(undefined8 *)(lVar22 + 0x1640 + lVar23 * 8);
        }
        else {
          local_f0 = 0;
          local_f8 = 0;
        }
        uStack_110 = *(undefined8 *)(lVar22 + lVar23 * 8);
        uVar44 = uStack_118 >> 0x20;
        uStack_118 = CONCAT44((int)uVar44,*(undefined4 *)(lVar22 + 0x200 + lVar23 * 8));
        local_38 = plVar24;
        ck_one(plVar38);
        plVar24 = local_38;
        local_38 = plVar38;
      }
    }
    else {
      uStack_110 = *(undefined8 *)(lVar45 + 0x1f0);
      local_108 = *(undefined8 *)(lVar45 + 0x1f8);
      local_100 = *(undefined8 *)(lVar45 + 0x218);
      local_f8 = *(undefined8 *)(lVar45 + 0x240);
      local_f0 = *(undefined8 *)(lVar45 + 0x228);
      local_e8 = *(undefined8 *)(lVar45 + 0x230);
      puVar1 = (ulong *)param_1[5];
      local_e0 = puVar1[7];
      uStack_118 = puVar1[2];
      local_128[0] = *puVar1;
      local_128[1] = puVar1[1];
      local_d8 = *(undefined8 *)(lVar45 + 0x2c8);
      local_78 = pipeline[509596c7b52975b2]::ckix::ck_vec_ix;
      local_b8 = uStack_110;
      local_b0 = local_108;
      local_a8 = local_100;
      local_a0 = local_f8;
      local_98 = local_f0;
      local_90 = local_e8;
      local_88 = local_e0;
      local_80 = local_d8;
      uStack_70 = local_128[1];
      local_68 = uStack_118;
      uVar44 = pipeline[509596c7b52975b2]::ckix::ck_vec_ix
                         (lVar22,param_1[4] + 0x800,uVar44,local_128);
      if (uVar44 != 0) {
        do {
          lVar23 = 0;
          for (uVar48 = uVar44; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x8000000000000000) {
            lVar23 = lVar23 + 1;
          }
          local_78 = *(code **)(lVar22 + 0x400 + lVar23 * 8);
          if (((ulong)local_78 & 0xc000000000000000) == 0x4000000000000000) {
            local_58 = *(undefined8 *)(&DAT_00001040 + lVar23 * 8 + lVar22);
            local_50 = *(undefined8 *)(lVar22 + 0x1240 + lVar23 * 8);
          }
          else {
            local_50 = 0;
            local_58 = 0;
          }
          uStack_70 = *(ulong *)(lVar22 + 0x600 + lVar23 * 8);
          if ((uStack_70 & 0xc000000000000000) == 0x4000000000000000) {
            local_48 = *(undefined8 *)(lVar22 + 0x1440 + lVar23 * 8);
            local_40 = *(undefined8 *)(lVar22 + 0x1640 + lVar23 * 8);
          }
          else {
            local_40 = 0;
            local_48 = 0;
          }
          uVar44 = uVar44 - 1 & uVar44;
          local_60 = *(undefined8 *)(lVar22 + lVar23 * 8);
          local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar22 + 0x200 + lVar23 * 8));
          ck_one(param_1);
        } while (uVar44 != 0);
      }
    }
  }
  return;
}


// ==== <pipeline::parse::Ctx>::ev_batch @ 0069d2c0 (3526 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch */

void __rustcall <pipeline[509596c7b52975b2]::parse::Ctx>::ev_batch(long *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  int iVar20;
  ulong uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  uint uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [32];
  undefined8 *puVar29;
  byte bVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
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
  undefined1 auVar74 [64];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 in_ZMM24 [64];
  ulong local_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  lVar8 = param_1[2];
  uVar43 = *(ulong *)(lVar8 + 0x1240);
  if (uVar43 == 0) {
    return;
  }
  *(undefined8 *)(lVar8 + 0x1240) = 0;
  lVar9 = param_1[1];
  *(long *)(lVar9 + 0x728) = *(long *)(lVar9 + 0x728) + uVar43;
  lVar39 = param_1[4];
  lVar41 = *(long *)(param_1[5] + 0x20);
  local_38 = param_1;
  if (*(long *)(*param_1 + 0x200) + 0x7fffffffffffffffU < 0xffffffff830003e8) {
    auVar46 = vpbroadcastq_avx512vl();
    auVar69 = vmovdqu64_avx512vl(auVar46);
    *(undefined1 (*) [32])(lVar8 + 0x800 + uVar43 * 8) = auVar69;
    auVar69 = vmovdqu64_avx512vl(auVar46);
    *(undefined1 (*) [32])(lVar8 + 0x820 + uVar43 * 8) = auVar69;
    auVar74 = ZEXT1664((undefined1  [16])0x0);
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_88 = 0;
    uStack_80 = auVar74._8_8_;
    uStack_78 = 0;
    uStack_70 = 0;
    auVar47 = vpbroadcastq_avx512vl();
    auVar48 = vpbroadcastq_avx512vl();
    auVar49 = vpbroadcastq_avx512vl();
    auVar50 = vpbroadcastq_avx512vl();
    auVar73._8_8_ = DAT_00201e68;
    auVar73._0_8_ = DAT_00201e68;
    auVar73._16_8_ = DAT_00201e68;
    auVar73._24_8_ = DAT_00201e68;
    auVar77._8_8_ = DAT_00201e80;
    auVar77._0_8_ = DAT_00201e80;
    auVar77._16_8_ = DAT_00201e80;
    auVar77._24_8_ = DAT_00201e80;
    auVar51 = vpbroadcastq_avx512vl();
    auVar78._8_8_ = DAT_00201d98;
    auVar78._0_8_ = DAT_00201d98;
    auVar78._16_8_ = DAT_00201d98;
    auVar78._24_8_ = DAT_00201d98;
    auVar52 = vpbroadcastq_avx512vl();
    auVar53 = vpbroadcastq_avx512vl();
    lVar34 = 0;
    auVar69 = vpcmpeqd_avx2(in_ZMM13._0_32_,in_ZMM13._0_32_);
    auVar83._8_8_ = DAT_00201b90;
    auVar83._0_8_ = DAT_00201b90;
    auVar83._16_8_ = DAT_00201b90;
    auVar83._24_8_ = DAT_00201b90;
    auVar84._8_8_ = DAT_00201b28;
    auVar84._0_8_ = DAT_00201b28;
    auVar84._16_8_ = DAT_00201b28;
    auVar84._24_8_ = DAT_00201b28;
    auVar82._8_8_ = DAT_00201e40;
    auVar82._0_8_ = DAT_00201e40;
    auVar82._16_8_ = DAT_00201e40;
    auVar82._24_8_ = DAT_00201e40;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_00201c50;
    auVar54 = vpbroadcastq_avx512vl(auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_00201cf8;
    auVar55 = vpbroadcastq_avx512vl(auVar4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = DAT_00201d60;
    auVar56 = vpbroadcastq_avx512vl(auVar5);
    auVar57 = vmovdqa64_avx512vl(_DAT_002032a0);
    auVar58 = vmovdqa64_avx512vl(_DAT_002035e0);
    lVar35 = 0;
    uVar36 = 0;
    do {
      auVar63 = *(undefined1 (*) [32])(lVar8 + 0x800 + lVar34 * 4);
      auVar59 = vpsubq_avx512vl(auVar63,auVar46);
      auVar22._8_8_ = DAT_00201ad8;
      auVar22._0_8_ = DAT_00201ad8;
      auVar22._16_8_ = DAT_00201ad8;
      auVar22._24_8_ = DAT_00201ad8;
      auVar60 = vpmuludq_avx512vl(auVar59,auVar22);
      auVar76 = *(undefined1 (*) [32])(lVar8 + lVar34 * 4);
      auVar61 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x200 + lVar34 * 4));
      auVar66 = *(undefined1 (*) [32])(lVar8 + 0x400 + lVar34 * 4);
      auVar65 = *(undefined1 (*) [32])(lVar8 + 0x600 + lVar34 * 4);
      auVar62 = vpsubq_avx512vl(auVar76,auVar49);
      uVar11 = vpcmpq_avx512vl(auVar65,auVar69,4);
      uVar13 = vpcmpuq_avx512vl(auVar62,auVar50,1);
      uVar12 = vpcmpq_avx512vl(auVar61,auVar69,6);
      auVar63 = vpsubq_avx2(auVar63,auVar76);
      uVar45 = vpcmpq_avx512vl(auVar63,auVar77,2);
      uVar45 = (byte)((byte)uVar11 & 0xf & (byte)uVar13 & (byte)uVar12) & uVar45;
      auVar63 = vpmullq_avx512vl(auVar65,auVar83);
      auVar63 = vpand_avx2(auVar84,auVar63);
      auVar76 = vpsrlq_avx2(auVar63,0x11);
      auVar79 = vpsrlq_avx2(auVar63,0x22);
      auVar63 = vpternlogq_avx512vl(auVar79,auVar63,auVar47 ^ auVar76,0x96);
      auVar76 = vpmullq_avx512vl(auVar63,auVar82);
      auVar80 = vpsrlq_avx2(auVar76,9);
      auVar63 = vpmullq_avx512vl(auVar66,auVar83);
      auVar63 = vpand_avx2(auVar84,auVar63);
      auVar79 = vpsrlq_avx512vl(auVar63,0x11);
      auVar81 = vpsrlq_avx2(auVar63,0x22);
      auVar63 = vpternlogq_avx512vl(auVar81,auVar63,auVar48 ^ auVar79,0x96);
      auVar63 = vpmullq_avx512vl(auVar63,auVar82);
      auVar23._8_8_ = DAT_00201b68;
      auVar23._0_8_ = DAT_00201b68;
      auVar23._16_8_ = DAT_00201b68;
      auVar23._24_8_ = DAT_00201b68;
      auVar79 = vpandq_avx512vl(auVar63,auVar23);
      auVar60 = vpsrlq_avx512vl(auVar60,0x16);
      auVar60 = vpternlogq_avx512vl(auVar60,auVar79,auVar55,0xec);
      auVar79 = vpsllq_avx512vl(auVar80,0x25);
      auVar81 = vpsllq_avx512vl(auVar76,0x3b);
      auVar79 = vpternlogq_avx512vl(auVar60,auVar79,auVar81,0xfe);
      bVar30 = (byte)uVar45;
      auVar64._0_8_ =
           (ulong)(bVar30 & 1) * auVar79._0_8_ | (ulong)!(bool)(bVar30 & 1) * auVar60._0_8_;
      bVar10 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar64._8_8_ = (ulong)bVar10 * auVar79._8_8_ | (ulong)!bVar10 * auVar60._8_8_;
      bVar10 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar64._16_8_ = (ulong)bVar10 * auVar79._16_8_ | (ulong)!bVar10 * auVar60._16_8_;
      auVar64._24_8_ =
           (uVar45 >> 3) * auVar79._24_8_ | (ulong)!SUB81(uVar45 >> 3,0) * auVar60._24_8_;
      uVar11 = vpcmpuq_avx512vl(auVar65,auVar54,1);
      auVar65 = vpmaxuq_avx512vl(auVar74._0_32_,auVar59);
      auVar74 = ZEXT3264(auVar65);
      auVar24._8_8_ = DAT_00201ca0;
      auVar24._0_8_ = DAT_00201ca0;
      auVar24._16_8_ = DAT_00201ca0;
      auVar24._24_8_ = DAT_00201ca0;
      auVar59 = vpandq_avx512vl(auVar80,auVar24);
      uVar12 = vpcmpuq_avx512vl(auVar59,auVar51,1);
      auVar25._8_8_ = DAT_00201d58;
      auVar25._0_8_ = DAT_00201d58;
      auVar25._16_8_ = DAT_00201d58;
      auVar25._24_8_ = DAT_00201d58;
      auVar76 = vpandq_avx512vl(auVar76,auVar25);
      uVar13 = vpcmpuq_avx512vl(auVar76,auVar78,1);
      uVar17 = vptestmq_avx512vl(auVar61,auVar73);
      uVar14 = vpcmpuq_avx512vl(auVar66,auVar54,1);
      auVar63 = vpand_avx2(auVar63,auVar84);
      uVar15 = vpcmpuq_avx512vl(auVar63,auVar52,1);
      bVar19 = ~(~((byte)uVar11 & 0xf & (byte)uVar12 & (byte)uVar13) & bVar30) &
               (byte)uVar14 & 0xf & (byte)uVar15;
      auVar76 = vpaddq_avx512vl(auVar62,auVar62);
      auVar66 = vpblendmq_avx512vl(auVar69,auVar76);
      auVar67._0_8_ =
           (ulong)(bVar30 & 1) * auVar66._0_8_ | (ulong)!(bool)(bVar30 & 1) * auVar76._0_8_;
      bVar10 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar67._8_8_ = (ulong)bVar10 * auVar66._8_8_ | (ulong)!bVar10 * auVar76._8_8_;
      bVar10 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar67._16_8_ = (ulong)bVar10 * auVar66._16_8_ | (ulong)!bVar10 * auVar76._16_8_;
      auVar67._24_8_ =
           (uVar45 >> 3) * auVar66._24_8_ | (ulong)!SUB81(uVar45 >> 3,0) * auVar76._24_8_;
      auVar76 = vpsllq_avx2(auVar63,0x11);
      auVar63 = vpblendmq_avx512vl(auVar53,auVar76);
      auVar68._0_8_ =
           (ulong)(bVar19 & 1) * auVar63._0_8_ | (ulong)!(bool)(bVar19 & 1) * auVar76._0_8_;
      bVar10 = (bool)(bVar19 >> 1 & 1);
      auVar68._8_8_ = (ulong)bVar10 * auVar63._8_8_ | (ulong)!bVar10 * auVar76._8_8_;
      bVar10 = (bool)(bVar19 >> 2 & 1);
      auVar68._16_8_ = (ulong)bVar10 * auVar63._16_8_ | (ulong)!bVar10 * auVar76._16_8_;
      auVar68._24_8_ =
           (ulong)(bVar19 >> 3) * auVar63._24_8_ | (ulong)!(bool)(bVar19 >> 3) * auVar76._24_8_;
      auVar63 = vpternlogq_avx512vl(auVar68,auVar67,auVar56,0xe4);
      auVar76 = vpermt2q_avx512vl(auVar64,auVar57,auVar63);
      *(undefined1 (*) [32])(lVar39 + lVar34 * 8) = auVar76;
      auVar63 = vpermt2q_avx512vl(auVar64,auVar58,auVar63);
      *(undefined1 (*) [32])(lVar39 + 0x20 + lVar34 * 8) = auVar63;
      *(byte *)((long)&uStack_78 + lVar35) = bVar30 & (byte)uVar17;
      *(byte *)((long)&uStack_68 + lVar35) = bVar19;
      uVar36 = uVar36 + 4;
      lVar35 = lVar35 + 1;
      lVar34 = lVar34 + 8;
    } while (uVar36 < uVar43);
    uVar36 = ~(-1L << (uVar43 & 0x3f));
    if (0x3f < uVar43) {
      uVar36 = 0xffffffffffffffff;
    }
    auVar69._8_8_ = DAT_00201a78;
    auVar69._0_8_ = DAT_00201a78;
    auVar69._16_8_ = DAT_00201a78;
    auVar69._24_8_ = DAT_00201a78;
    uVar45 = vpcmpuq_avx512vl(auVar65,auVar69,5);
    if ((uVar45 & 0xf) != 0) {
LAB_0069dfcb:
                    /* WARNING: Subroutine does not return */
      pipeline[509596c7b52975b2]::sys::fallback("ingest_ts bad or out of range",0x1d);
    }
    uVar45 = 0x8000000000000000;
    uVar38 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar38 = uVar38 << 1 |
                 (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & CONCAT44(uStack_64,uStack_68)) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar45 = 0x8000000000000000;
    uVar33 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar33 = uVar33 << 1 |
                 (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & CONCAT44(uStack_5c,uStack_60)) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar33 = (uVar33 << 0x20 | uVar38) & uVar36;
    uVar42 = uVar33 ^ uVar36;
    uVar45 = 0x8000000000000000;
    uVar38 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar38 = uVar38 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & uStack_78) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar45 = 0x8000000000000000;
    uVar21 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar21 = uVar21 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & uStack_70) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar36 = (uVar21 << 0x20 | uVar38) & uVar36 & uVar33;
  }
  else {
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    auVar69 = vpbroadcastq_avx512vl();
    auVar46 = vpbroadcastq_avx512vl();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_00201a78;
    auVar47 = vbroadcastsd_avx512vl(auVar2);
    auVar48 = vpbroadcastq_avx512vl();
    auVar49 = vpbroadcastq_avx512vl();
    auVar50 = vpbroadcastq_avx512vl();
    auVar63._8_8_ = DAT_00201e68;
    auVar63._0_8_ = DAT_00201e68;
    auVar63._16_8_ = DAT_00201e68;
    auVar63._24_8_ = DAT_00201e68;
    auVar76._8_8_ = DAT_00201e80;
    auVar76._0_8_ = DAT_00201e80;
    auVar76._16_8_ = DAT_00201e80;
    auVar76._24_8_ = DAT_00201e80;
    auVar66._8_8_ = DAT_00201d98;
    auVar66._0_8_ = DAT_00201d98;
    auVar66._16_8_ = DAT_00201d98;
    auVar66._24_8_ = DAT_00201d98;
    auVar51 = vpbroadcastq_avx512vl();
    auVar52 = vpbroadcastq_avx512vl();
    auVar53 = vpbroadcastq_avx512vl();
    lVar34 = 0;
    auVar59._8_8_ = DAT_00201b90;
    auVar59._0_8_ = DAT_00201b90;
    auVar59._16_8_ = DAT_00201b90;
    auVar59._24_8_ = DAT_00201b90;
    auVar60._8_8_ = DAT_00201b28;
    auVar60._0_8_ = DAT_00201b28;
    auVar60._16_8_ = DAT_00201b28;
    auVar60._24_8_ = DAT_00201b28;
    auVar65._8_8_ = DAT_00201e40;
    auVar65._0_8_ = DAT_00201e40;
    auVar65._16_8_ = DAT_00201e40;
    auVar65._24_8_ = DAT_00201e40;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_00201c50;
    auVar54 = vpbroadcastq_avx512vl(auVar6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_00201d60;
    auVar55 = vpbroadcastq_avx512vl(auVar7);
    auVar56 = vmovdqa64_avx512vl(_DAT_002032a0);
    auVar57 = in_ZMM24._0_32_;
    auVar57 = vpternlogd_avx512vl(auVar57,auVar57,auVar57,0xff);
    auVar58 = vmovdqa64_avx512vl(_DAT_002035e0);
    lVar35 = 0;
    uVar36 = 0;
    do {
      auVar70 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x800 + lVar34 * 4));
      auVar71 = vpsubq_avx512vl(auVar70,auVar48);
      auVar61._8_8_ = DAT_00201ad8;
      auVar61._0_8_ = DAT_00201ad8;
      auVar61._16_8_ = DAT_00201ad8;
      auVar61._24_8_ = DAT_00201ad8;
      auVar80 = vpmuludq_avx512vl(auVar71,auVar61);
      auVar61 = *(undefined1 (*) [32])(lVar8 + lVar34 * 4);
      auVar72 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x200 + lVar34 * 4));
      auVar73 = vpsubq_avx512vl(auVar61,auVar49);
      auVar62 = *(undefined1 (*) [32])(lVar8 + 0x400 + lVar34 * 4);
      auVar79 = *(undefined1 (*) [32])(lVar8 + 0x600 + lVar34 * 4);
      uVar11 = vpcmpq_avx512vl(auVar79,auVar57,4);
      uVar13 = vpcmpuq_avx512vl(auVar73,auVar50,1);
      uVar12 = vpcmpq_avx512vl(auVar72,auVar57,6);
      auVar61 = vpsubq_avx512vl(auVar70,auVar61);
      uVar45 = vpcmpq_avx512vl(auVar61,auVar76,2);
      uVar45 = (byte)((byte)uVar11 & 0xf & (byte)uVar13 & (byte)uVar12) & uVar45;
      auVar61 = vpmullq_avx512vl(auVar79,auVar59);
      auVar61 = vpand_avx2(auVar60,auVar61);
      auVar81 = vpsrlq_avx512vl(auVar61,0x11);
      auVar77 = vpsrlq_avx2(auVar61,0x22);
      auVar61 = vpternlogq_avx512vl(auVar77,auVar61,auVar69 ^ auVar81,0x96);
      auVar77 = vpmullq_avx512vl(auVar61,auVar65);
      auVar78 = vpsrlq_avx2(auVar77,9);
      auVar61 = vpmullq_avx512vl(auVar62,auVar59);
      auVar61 = vpand_avx2(auVar60,auVar61);
      auVar81 = vpsrlq_avx512vl(auVar61,0x11);
      auVar75 = vpsrlq_avx2(auVar61,0x22);
      auVar61 = vpternlogq_avx512vl(auVar75,auVar61,auVar46 ^ auVar81,0x96);
      auVar61 = vpmullq_avx512vl(auVar61,auVar65);
      auVar81._8_8_ = DAT_00201b68;
      auVar81._0_8_ = DAT_00201b68;
      auVar81._16_8_ = DAT_00201b68;
      auVar81._24_8_ = DAT_00201b68;
      auVar81 = vpandq_avx512vl(auVar61,auVar81);
      auVar75 = vpsrlq_avx2(auVar80,0x16);
      auVar80._8_8_ = DAT_00201cf8;
      auVar80._0_8_ = DAT_00201cf8;
      auVar80._16_8_ = DAT_00201cf8;
      auVar80._24_8_ = DAT_00201cf8;
      auVar81 = vpternlogq_avx512vl(auVar75,auVar81,auVar80,0xec);
      auVar75 = vpsllq_avx2(auVar78,0x25);
      auVar80 = vpsllq_avx512vl(auVar77,0x3b);
      auVar80 = vpternlogq_avx512vl(auVar81,auVar75,auVar80,0xfe);
      bVar30 = (byte)uVar45;
      auVar75._0_8_ =
           (ulong)(bVar30 & 1) * auVar80._0_8_ | (ulong)!(bool)(bVar30 & 1) * auVar81._0_8_;
      bVar10 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar75._8_8_ = (ulong)bVar10 * auVar80._8_8_ | (ulong)!bVar10 * auVar81._8_8_;
      bVar10 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar75._16_8_ = (ulong)bVar10 * auVar80._16_8_ | (ulong)!bVar10 * auVar81._16_8_;
      auVar75._24_8_ =
           (uVar45 >> 3) * auVar80._24_8_ | (ulong)!SUB81(uVar45 >> 3,0) * auVar81._24_8_;
      uVar12 = vpcmpuq_avx512vl(auVar79,auVar54,1);
      auVar79._8_8_ = DAT_00201c58;
      auVar79._0_8_ = DAT_00201c58;
      auVar79._16_8_ = DAT_00201c58;
      auVar79._24_8_ = DAT_00201c58;
      uVar11 = vpcmpeqq_avx512vl(auVar70,auVar79);
      uVar13 = vpcmpuq_avx512vl(auVar71,auVar47,5);
      auVar70._8_8_ = DAT_00201ca0;
      auVar70._0_8_ = DAT_00201ca0;
      auVar70._16_8_ = DAT_00201ca0;
      auVar70._24_8_ = DAT_00201ca0;
      auVar79 = vpandq_avx512vl(auVar78,auVar70);
      uVar14 = vpcmpuq_avx512vl(auVar79,auVar51,1);
      auVar71._8_8_ = DAT_00201d58;
      auVar71._0_8_ = DAT_00201d58;
      auVar71._16_8_ = DAT_00201d58;
      auVar71._24_8_ = DAT_00201d58;
      auVar79 = vpandq_avx512vl(auVar77,auVar71);
      uVar15 = vpcmpuq_avx512vl(auVar79,auVar66,1);
      uVar18 = vptestmq_avx512vl(auVar72,auVar63);
      uVar17 = vpcmpuq_avx512vl(auVar62,auVar54,1);
      auVar61 = vpand_avx2(auVar60,auVar61);
      uVar16 = vpcmpuq_avx512vl(auVar61,auVar52,1);
      bVar19 = ~(~((byte)uVar12 & 0xf & (byte)uVar14 & (byte)uVar15) & bVar30) &
               (byte)uVar17 & 0xf & (byte)uVar16;
      auVar62 = vpaddq_avx512vl(auVar73,auVar73);
      auVar79 = vpblendmq_avx512vl(auVar57,auVar62);
      auVar72._0_8_ =
           (ulong)(bVar30 & 1) * auVar79._0_8_ | (ulong)!(bool)(bVar30 & 1) * auVar62._0_8_;
      bVar10 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar72._8_8_ = (ulong)bVar10 * auVar79._8_8_ | (ulong)!bVar10 * auVar62._8_8_;
      bVar10 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar72._16_8_ = (ulong)bVar10 * auVar79._16_8_ | (ulong)!bVar10 * auVar62._16_8_;
      auVar72._24_8_ =
           (uVar45 >> 3) * auVar79._24_8_ | (ulong)!SUB81(uVar45 >> 3,0) * auVar62._24_8_;
      auVar79 = vpsllq_avx2(auVar61,0x11);
      auVar61 = vpblendmq_avx512vl(auVar53,auVar79);
      auVar62._0_8_ =
           (ulong)(bVar19 & 1) * auVar61._0_8_ | (ulong)!(bool)(bVar19 & 1) * auVar79._0_8_;
      bVar10 = (bool)(bVar19 >> 1 & 1);
      auVar62._8_8_ = (ulong)bVar10 * auVar61._8_8_ | (ulong)!bVar10 * auVar79._8_8_;
      bVar10 = (bool)(bVar19 >> 2 & 1);
      auVar62._16_8_ = (ulong)bVar10 * auVar61._16_8_ | (ulong)!bVar10 * auVar79._16_8_;
      auVar62._24_8_ =
           (ulong)(bVar19 >> 3) * auVar61._24_8_ | (ulong)!(bool)(bVar19 >> 3) * auVar79._24_8_;
      auVar61 = vpternlogq_avx512vl(auVar62,auVar72,auVar55,0xe4);
      auVar62 = vpermt2q_avx512vl(auVar75,auVar56,auVar61);
      *(undefined1 (*) [32])(lVar39 + lVar34 * 8) = auVar62;
      auVar61 = vpermt2q_avx512vl(auVar75,auVar58,auVar61);
      *(undefined1 (*) [32])(lVar39 + 0x20 + lVar34 * 8) = auVar61;
      *(byte *)((long)&local_88 + lVar35) = (byte)uVar11 & 0xf | (byte)uVar13 & 0xf;
      *(byte *)((long)&uStack_78 + lVar35) = bVar30 & (byte)uVar18;
      *(byte *)((long)&uStack_68 + lVar35) = bVar19;
      uVar36 = uVar36 + 4;
      lVar35 = lVar35 + 1;
      lVar34 = lVar34 + 8;
    } while (uVar36 < uVar43);
    uVar36 = ~(-1L << (uVar43 & 0x3f));
    if (0x3f < uVar43) {
      uVar36 = 0xffffffffffffffff;
    }
    uVar45 = 0x8000000000000000;
    uVar38 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar38 = uVar38 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & local_88) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar45 = 0x8000000000000000;
    uVar33 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar33 = uVar33 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & uStack_80) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    if (((uVar33 << 0x20 | uVar38) & uVar36) != 0) goto LAB_0069dfcb;
    uVar45 = 0x8000000000000000;
    uVar38 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar38 = uVar38 << 1 |
                 (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & CONCAT44(uStack_64,uStack_68)) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar45 = 0x8000000000000000;
    uVar33 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar33 = uVar33 << 1 |
                 (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & CONCAT44(uStack_5c,uStack_60)) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar33 = (uVar33 << 0x20 | uVar38) & uVar36;
    uVar42 = uVar33 ^ uVar36;
    uVar45 = 0x8000000000000000;
    uVar38 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar38 = uVar38 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & uStack_78) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar45 = 0x8000000000000000;
    uVar21 = 0;
    do {
      if ((uVar45 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar21 = uVar21 << 1 | (ulong)((uVar45 & 0xf0f0f0f0f0f0f0f & uStack_70) != 0);
      }
      uVar45 = uVar45 >> 1;
    } while (uVar45 != 0);
    uVar36 = (uVar21 << 0x20 | uVar38) & uVar36 & uVar33;
  }
  if (uVar36 != 0) {
    lVar34 = *(long *)(lVar9 + 0x88);
    do {
      lVar35 = 0;
      for (uVar45 = uVar36; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
        lVar35 = lVar35 + 1;
      }
      uVar45 = *(ulong *)(lVar8 + 0x200 + lVar35 * 8);
      uVar38 = uVar45 & 0xffffffff;
      if (0x1ffff < uVar38) {
        uVar38 = 0x20000;
      }
      bVar30 = *(byte *)(lVar41 + uVar38);
      uVar37 = (ulong)(uint)((int)lVar35 << 4);
      uVar38 = *(ulong *)(lVar39 + uVar37);
      uVar21 = *(ulong *)(lVar39 + 8 + uVar37);
      lVar35 = *(long *)(lVar9 + 0xf8);
      lVar40 = *(long *)(lVar9 + 0x100);
      *(ulong *)(lVar35 + lVar40 * 0x18) = uVar21 >> 0x20;
      *(ulong *)(lVar35 + 8 + lVar40 * 0x18) =
           uVar38 >> 0x3b | uVar45 >> 0x17 & 0x1fffffe00 | uVar21 << 0x20 | (ulong)bVar30 << 4;
      *(ulong *)(lVar35 + 0x10 + lVar40 * 0x18) = uVar38 & 0x7ffffffffffffff;
      *(long *)(lVar9 + 0x100) = lVar40 + 1;
      *(ulong *)(lVar39 + 8 + uVar37) = uVar21 & 0xffffffff | lVar34 << 0x20;
      uVar36 = uVar36 - 1 & uVar36;
    } while (uVar36 != 0);
  }
  uVar33 = uVar33 | uVar42;
  lVar41 = *(long *)(lVar9 + 0x20);
  lVar34 = *(long *)(lVar9 + 0x98);
  lVar35 = *(long *)(lVar9 + 0x108);
  uVar36 = ~(-1L << (uVar43 & 0x3f));
  if (0x3f < uVar43) {
    uVar36 = 0xffffffffffffffff;
  }
  if (uVar33 == uVar36) {
    lVar39 = lVar39 + uVar43 * 0x10;
    uVar43 = uVar43 * -8;
    lVar40 = 0;
    if ((uVar43 & 8) == 0) goto LAB_0069daf8;
    uVar43 = uVar43 - 8;
    while( true ) {
      uVar26 = *(uint *)(lVar39 + 0x1c + uVar43 * 2);
      uVar27 = *(uint *)(lVar41 + (ulong)uVar26 * 4);
      bVar30 = (byte)uVar27;
      if (bVar30 == 0) break;
      auVar2 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar39 + 0x10 + uVar43 * 2));
      *(undefined1 (*) [16])(lVar35 + (ulong)uVar27) = auVar2;
      *(uint *)(lVar41 + (ulong)uVar26 * 4) = CONCAT31((int3)(uVar27 >> 8),bVar30 + 0xc);
      *(uint *)(lVar34 + lVar40 * 4) = uVar26;
      lVar40 = lVar40 + (ulong)(0xf3 < bVar30);
      uVar43 = uVar43 + 0x10;
      if (uVar43 == 0) goto joined_r0x0069db63;
LAB_0069daf8:
      uVar26 = *(uint *)(lVar39 + 0xc + uVar43 * 2);
      uVar27 = *(uint *)(lVar41 + (ulong)uVar26 * 4);
      bVar30 = (byte)uVar27;
      if (bVar30 == 0) goto joined_r0x0069db63;
      auVar2 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar39 + uVar43 * 2));
      *(undefined1 (*) [16])(lVar35 + (ulong)uVar27) = auVar2;
      *(uint *)(lVar41 + (ulong)uVar26 * 4) = CONCAT31((int3)(uVar27 >> 8),bVar30 + 0xc);
      *(uint *)(lVar34 + lVar40 * 4) = uVar26;
      lVar40 = lVar40 + (ulong)(0xf3 < bVar30);
    }
    uVar43 = uVar43 + 8;
joined_r0x0069db63:
    if (uVar43 != 0) {
      <pipeline[509596c7b52975b2]::parse::EvPart>::flush_full(lVar9,lVar34,lVar40);
      lVar40 = 0;
      if ((uVar43 & 8) == 0) goto LAB_0069e02f;
      uVar43 = uVar43 - 8;
      while( true ) {
        uVar26 = *(uint *)(lVar39 + 0x1c + uVar43 * 2);
        uVar27 = *(uint *)(lVar41 + (ulong)uVar26 * 4);
        bVar30 = (byte)uVar27;
        if (bVar30 == 0) break;
        auVar2 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar39 + 0x10 + uVar43 * 2));
        *(undefined1 (*) [16])(lVar35 + (ulong)uVar27) = auVar2;
        *(uint *)(lVar41 + (ulong)uVar26 * 4) = CONCAT31((int3)(uVar27 >> 8),bVar30 + 0xc);
        *(uint *)(lVar34 + lVar40 * 4) = uVar26;
        lVar40 = lVar40 + (ulong)(0xf3 < bVar30);
        uVar43 = uVar43 + 0x10;
        if (uVar43 == 0) goto joined_r0x0069db63;
LAB_0069e02f:
        uVar26 = *(uint *)(lVar39 + 0xc + uVar43 * 2);
        uVar27 = *(uint *)(lVar41 + (ulong)uVar26 * 4);
        bVar30 = (byte)uVar27;
        if (bVar30 == 0) goto joined_r0x0069db63;
        auVar2 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(lVar39 + uVar43 * 2));
        *(undefined1 (*) [16])(lVar35 + (ulong)uVar27) = auVar2;
        *(uint *)(lVar41 + (ulong)uVar26 * 4) = CONCAT31((int3)(uVar27 >> 8),bVar30 + 0xc);
        *(uint *)(lVar34 + lVar40 * 4) = uVar26;
        lVar40 = lVar40 + (ulong)(0xf3 < bVar30);
      }
      uVar43 = uVar43 + 8;
      goto joined_r0x0069db63;
    }
  }
  else {
    if (uVar33 == 0) goto LAB_0069de19;
    lVar40 = 0;
    do {
      iVar20 = 0;
      for (uVar43 = uVar33; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
        iVar20 = iVar20 + 1;
      }
      uVar43 = *(ulong *)(lVar39 + 8 + (ulong)(uint)(iVar20 << 4));
      uVar36 = uVar43 >> 0x20;
      uVar26 = *(uint *)(lVar41 + uVar36 * 4);
      if ((char)uVar26 == '\0') {
        <pipeline[509596c7b52975b2]::parse::EvPart>::flush_full(lVar9,lVar34,lVar40);
        uVar26 = *(uint *)(lVar41 + uVar36 * 4);
        lVar40 = 0;
      }
      uVar33 = uVar33 - 1 & uVar33;
      auVar2 = vmovdqu8_avx512vl(*(undefined1 (*) [16])((ulong)(uint)(iVar20 << 4) + lVar39));
      *(undefined1 (*) [16])(lVar35 + (ulong)uVar26) = auVar2;
      uVar27 = uVar26 + 0xc & 0xff;
      *(uint *)(lVar41 + uVar36 * 4) = uVar26 & 0xffffff00 | uVar27;
      *(int *)(lVar34 + lVar40 * 4) = (int)(uVar43 >> 0x20);
      lVar40 = lVar40 + (ulong)(uVar27 == 0);
    } while (uVar33 != 0);
  }
  lVar39 = *(long *)(lVar9 + 0x20);
  lVar41 = *(long *)(lVar9 + 0x38);
  lVar35 = *(long *)(lVar9 + 0x108);
  if (pipeline[509596c7b52975b2]::parse::NT_0 == '\0') {
    if (lVar40 != 0) {
      lVar44 = 0;
      do {
        uVar26 = *(uint *)(lVar34 + lVar44 * 4);
        uVar43 = (ulong)uVar26;
        puVar29 = *(undefined8 **)(lVar41 + uVar43 * 8);
        if (((uint)puVar29 & 0xfff) == 0xfc0) {
          puVar29 = (undefined8 *)
                    <pipeline[509596c7b52975b2]::parse::EvPart>::new_chunk(lVar9,uVar43,puVar29);
        }
        lVar32 = uVar43 * 0x100;
        lVar31 = lVar35 + lVar32;
        uVar11 = *(undefined8 *)(lVar31 + 0x48);
        uVar12 = *(undefined8 *)(lVar31 + 0x50);
        uVar13 = *(undefined8 *)(lVar31 + 0x58);
        uVar14 = *(undefined8 *)(lVar31 + 0x60);
        uVar15 = *(undefined8 *)(lVar31 + 0x68);
        uVar17 = *(undefined8 *)(lVar31 + 0x70);
        uVar16 = *(undefined8 *)(lVar31 + 0x78);
        *puVar29 = *(undefined8 *)(lVar31 + 0x40);
        puVar29[1] = uVar11;
        puVar29[2] = uVar12;
        puVar29[3] = uVar13;
        puVar29[4] = uVar14;
        puVar29[5] = uVar15;
        puVar29[6] = uVar17;
        puVar29[7] = uVar16;
        puVar1 = (undefined8 *)(lVar35 + 0x80 + lVar32);
        uVar11 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];
        uVar14 = puVar1[4];
        uVar15 = puVar1[5];
        uVar17 = puVar1[6];
        uVar16 = puVar1[7];
        puVar29[8] = *puVar1;
        puVar29[9] = uVar11;
        puVar29[10] = uVar12;
        puVar29[0xb] = uVar13;
        puVar29[0xc] = uVar14;
        puVar29[0xd] = uVar15;
        puVar29[0xe] = uVar17;
        puVar29[0xf] = uVar16;
        lVar32 = lVar32 + lVar35;
        uVar11 = *(undefined8 *)(lVar32 + 200);
        uVar12 = *(undefined8 *)(lVar32 + 0xd0);
        uVar13 = *(undefined8 *)(lVar32 + 0xd8);
        uVar14 = *(undefined8 *)(lVar32 + 0xe0);
        uVar15 = *(undefined8 *)(lVar32 + 0xe8);
        uVar17 = *(undefined8 *)(lVar32 + 0xf0);
        uVar16 = *(undefined8 *)(lVar32 + 0xf8);
        puVar29[0x10] = *(undefined8 *)(lVar32 + 0xc0);
        puVar29[0x11] = uVar11;
        puVar29[0x12] = uVar12;
        puVar29[0x13] = uVar13;
        puVar29[0x14] = uVar14;
        puVar29[0x15] = uVar15;
        puVar29[0x16] = uVar17;
        puVar29[0x17] = uVar16;
        *(undefined8 **)(lVar41 + uVar43 * 8) = puVar29 + 0x18;
        *(uint *)(lVar39 + uVar43 * 4) = uVar26 << 8 | 0x40;
        lVar44 = lVar44 + 1;
      } while (lVar40 != lVar44);
    }
  }
  else if (lVar40 != 0) {
    lVar44 = 0;
    do {
      uVar26 = *(uint *)(lVar34 + lVar44 * 4);
      uVar43 = (ulong)uVar26;
      pauVar28 = *(undefined1 (**) [32])(lVar41 + uVar43 * 8);
      if (((uint)pauVar28 & 0xfff) == 0xfc0) {
        pauVar28 = (undefined1 (*) [32])
                   <pipeline[509596c7b52975b2]::parse::EvPart>::new_chunk(lVar9,uVar43,pauVar28);
      }
      lVar31 = uVar43 * 0x100 + lVar35;
      auVar69 = *(undefined1 (*) [32])(lVar31 + 0x60);
      auVar46 = vmovntdq_avx(*(undefined1 (*) [32])(lVar31 + 0x40));
      *pauVar28 = auVar46;
      auVar69 = vmovntdq_avx(auVar69);
      pauVar28[1] = auVar69;
      auVar69 = *(undefined1 (*) [32])(lVar31 + 0xa0);
      auVar46 = vmovntdq_avx(*(undefined1 (*) [32])(lVar31 + 0x80));
      pauVar28[2] = auVar46;
      auVar69 = vmovntdq_avx(auVar69);
      pauVar28[3] = auVar69;
      auVar69 = *(undefined1 (*) [32])(lVar31 + 0xe0);
      auVar46 = vmovntdq_avx(*(undefined1 (*) [32])(lVar31 + 0xc0));
      pauVar28[4] = auVar46;
      auVar69 = vmovntdq_avx(auVar69);
      pauVar28[5] = auVar69;
      *(undefined1 (**) [32])(lVar41 + uVar43 * 8) = pauVar28 + 6;
      *(uint *)(lVar39 + uVar43 * 4) = uVar26 << 8 | 0x40;
      lVar44 = lVar44 + 1;
    } while (lVar40 != lVar44);
  }
LAB_0069de19:
  lVar39 = *(long *)(lVar9 + 0x100);
  if (lVar39 != 0) {
    lVar41 = 0;
    lVar34 = 0;
    do {
      lVar35 = *(long *)(*(long *)(lVar9 + 0xf8) + lVar41);
      puVar29 = (undefined8 *)(*(long *)(lVar9 + 0xf8) + 8 + lVar41);
      uVar11 = *puVar29;
      uVar12 = puVar29[1];
      puVar29 = *(undefined8 **)(*(long *)(lVar9 + 200) + lVar35 * 8);
      if (((uint)puVar29 & 0x3ff) == 0x3f0) {
        puVar29 = (undefined8 *)
                  <pipeline[509596c7b52975b2]::parse::EvPart>::esc_chunk(lVar9,lVar35,puVar29);
      }
      *puVar29 = uVar11;
      puVar29[1] = uVar12;
      lVar34 = lVar34 + 1;
      *(undefined8 **)(*(long *)(lVar9 + 200) + lVar35 * 8) = puVar29 + 2;
      lVar41 = lVar41 + 0x18;
    } while (lVar39 != lVar34);
  }
  *(undefined8 *)(lVar9 + 0x100) = 0;
  for (; uVar42 != 0; uVar42 = uVar42 - 1 & uVar42) {
    lVar9 = 0;
    for (uVar43 = uVar42; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
      lVar9 = lVar9 + 1;
    }
    local_88 = *(ulong *)(lVar8 + 0x400 + lVar9 * 8);
    if ((local_88 & 0xc000000000000000) == 0x4000000000000000) {
      local_58 = *(undefined8 *)(lVar8 + 0x1280 + lVar9 * 8);
      local_50 = *(undefined8 *)(lVar8 + 0x1480 + lVar9 * 8);
    }
    else {
      local_50 = 0;
      local_58 = 0;
    }
    uStack_80 = *(ulong *)(lVar8 + 0x600 + lVar9 * 8);
    if ((uStack_80 & 0xc000000000000000) == 0x4000000000000000) {
      local_48 = *(undefined8 *)(lVar8 + 0x1680 + lVar9 * 8);
      local_40 = *(undefined8 *)(lVar8 + 0x1880 + lVar9 * 8);
    }
    else {
      local_40 = 0;
      local_48 = 0;
    }
    uVar11 = *(undefined8 *)(lVar8 + 0x200 + lVar9 * 8);
    uStack_78 = *(ulong *)(lVar8 + lVar9 * 8);
    uStack_70 = *(undefined8 *)(lVar8 + 0x800 + lVar9 * 8);
    uStack_64 = (undefined4)uVar11;
    uStack_60 = (uint)((ulong)uVar11 >> 0x20) & 0xffffff;
    uStack_68._1_3_ = (undefined3)(uStack_68 >> 8);
    uStack_68 = CONCAT31(uStack_68._1_3_,(char)((ulong)uVar11 >> 0x38)) & 0xffffff03;
    ev_one(local_38,&local_88);
  }
  return;
}


// ==== <pipeline::parse::Ctx>::raw_token @ 0069e0a0 (389 bytes)

/* <pipeline[509596c7b52975b2]::parse::Ctx>::raw_token */

ulong __rustcall
<pipeline[509596c7b52975b2]::parse::Ctx>::raw_token(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((0xfe < param_3) && (uVar1 = param_1[8], param_3 + param_2 < uVar1)) {
    do {
      uVar5 = (ulong)*(byte *)(*(long *)(*param_1 + 0x250) + param_2 + param_3);
      if ((uVar5 < 0x2d) && ((0x100400000400U >> (uVar5 & 0x3f) & 1) != 0)) goto LAB_0069e115;
      lVar2 = param_2 + param_3;
      param_3 = param_3 + 1;
    } while (lVar2 + 1U < uVar1);
    param_3 = uVar1 - param_2;
  }
LAB_0069e115:
  lVar2 = param_1[1];
  uVar1 = *(ulong *)(lVar2 + 0x240);
  if (uVar1 >> 0x22 != 0) {
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback(&DAT_002023e0,0x10);
  }
  lVar3 = *(long *)(lVar2 + 600);
  lVar4 = *(long *)(*param_1 + 0x250);
  if ((ulong)(*(long *)(lVar2 + 0x248) - lVar3) < param_3) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[2a0ada2ddd1fabff]::alloc::Global>(lVar2 + 0x248,lVar3,param_3,1,1);
    lVar6 = *(long *)(lVar2 + 600);
  }
  else {
    uVar5 = uVar1;
    lVar6 = lVar3;
    if (param_3 == 0) goto LAB_0069e17c;
  }
  (*(code *)PTR_memcpy_00841de0)(*(long *)(lVar2 + 0x250) + lVar6,param_2 + lVar4,param_3);
  uVar5 = *(ulong *)(lVar2 + 0x240);
LAB_0069e17c:
  *(ulong *)(lVar2 + 600) = lVar6 + param_3;
  if (uVar5 == *(ulong *)(lVar2 + 0x230)) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(lVar2 + 0x230);
  }
  lVar4 = *(long *)(lVar2 + 0x238);
  *(long *)(lVar4 + uVar5 * 0x10) = lVar3;
  *(int *)(lVar4 + 8 + uVar5 * 0x10) = (int)param_3;
  *(ulong *)(lVar2 + 0x240) = uVar5 + 1;
  return uVar1 | param_1[6] << 0x22 | 0x40000000000;
}


// ==== <pipeline::parse::Part>::flush_full @ 006a1900 (479 bytes)

/* <pipeline[509596c7b52975b2]::parse::Part>::flush_full */

void __rustcall
<pipeline[509596c7b52975b2]::parse::Part>::flush_full(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [32];
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0xc0);
  if (pipeline[509596c7b52975b2]::parse::NT_0 == '\0') {
    if (param_3 != 0) {
      lVar20 = 0;
      do {
        uVar4 = *(uint *)(param_2 + lVar20 * 4);
        uVar19 = (ulong)uVar4;
        puVar16 = *(undefined8 **)(lVar6 + uVar19 * 8);
        if (((uint)puVar16 & 0xfff) == 0xfc0) {
          puVar16 = (undefined8 *)new_chunk(param_1,uVar19,puVar16);
        }
        lVar18 = uVar19 * 0x100;
        lVar17 = lVar7 + lVar18;
        uVar8 = *(undefined8 *)(lVar17 + 0x48);
        uVar9 = *(undefined8 *)(lVar17 + 0x50);
        uVar10 = *(undefined8 *)(lVar17 + 0x58);
        uVar11 = *(undefined8 *)(lVar17 + 0x60);
        uVar12 = *(undefined8 *)(lVar17 + 0x68);
        uVar13 = *(undefined8 *)(lVar17 + 0x70);
        uVar14 = *(undefined8 *)(lVar17 + 0x78);
        *puVar16 = *(undefined8 *)(lVar17 + 0x40);
        puVar16[1] = uVar8;
        puVar16[2] = uVar9;
        puVar16[3] = uVar10;
        puVar16[4] = uVar11;
        puVar16[5] = uVar12;
        puVar16[6] = uVar13;
        puVar16[7] = uVar14;
        puVar1 = (undefined8 *)(lVar7 + 0x80 + lVar18);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar11 = puVar1[4];
        uVar12 = puVar1[5];
        uVar13 = puVar1[6];
        uVar14 = puVar1[7];
        puVar16[8] = *puVar1;
        puVar16[9] = uVar8;
        puVar16[10] = uVar9;
        puVar16[0xb] = uVar10;
        puVar16[0xc] = uVar11;
        puVar16[0xd] = uVar12;
        puVar16[0xe] = uVar13;
        puVar16[0xf] = uVar14;
        lVar18 = lVar18 + lVar7;
        uVar8 = *(undefined8 *)(lVar18 + 200);
        uVar9 = *(undefined8 *)(lVar18 + 0xd0);
        uVar10 = *(undefined8 *)(lVar18 + 0xd8);
        uVar11 = *(undefined8 *)(lVar18 + 0xe0);
        uVar12 = *(undefined8 *)(lVar18 + 0xe8);
        uVar13 = *(undefined8 *)(lVar18 + 0xf0);
        uVar14 = *(undefined8 *)(lVar18 + 0xf8);
        puVar16[0x10] = *(undefined8 *)(lVar18 + 0xc0);
        puVar16[0x11] = uVar8;
        puVar16[0x12] = uVar9;
        puVar16[0x13] = uVar10;
        puVar16[0x14] = uVar11;
        puVar16[0x15] = uVar12;
        puVar16[0x16] = uVar13;
        puVar16[0x17] = uVar14;
        *(undefined8 **)(lVar6 + uVar19 * 8) = puVar16 + 0x18;
        *(uint *)(lVar5 + uVar19 * 4) = uVar4 << 8 | 0x40;
        lVar20 = lVar20 + 1;
      } while (param_3 != lVar20);
    }
  }
  else if (param_3 != 0) {
    lVar20 = 0;
    do {
      uVar4 = *(uint *)(param_2 + lVar20 * 4);
      uVar19 = (ulong)uVar4;
      pauVar15 = *(undefined1 (**) [32])(lVar6 + uVar19 * 8);
      if (((uint)pauVar15 & 0xfff) == 0xfc0) {
        pauVar15 = (undefined1 (*) [32])new_chunk(param_1,uVar19,pauVar15);
      }
      lVar17 = uVar19 * 0x100 + lVar7;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0x60);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0x40));
      *pauVar15 = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[1] = auVar2;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0xa0);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0x80));
      pauVar15[2] = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[3] = auVar2;
      auVar2 = *(undefined1 (*) [32])(lVar17 + 0xe0);
      auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar17 + 0xc0));
      pauVar15[4] = auVar3;
      auVar2 = vmovntdq_avx(auVar2);
      pauVar15[5] = auVar2;
      *(undefined1 (**) [32])(lVar6 + uVar19 * 8) = pauVar15 + 6;
      *(uint *)(lVar5 + uVar19 * 4) = uVar4 << 8 | 0x40;
      lVar20 = lVar20 + 1;
    } while (param_3 != lVar20);
  }
  return;
}


// ==== <pipeline::parse::Part>::build @ 006a1b00 (3951 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::parse::Part>::build */

void __rustcall
<pipeline[509596c7b52975b2]::parse::Part>::build(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  int iVar28;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar29 [32];
  int iVar36;
  undefined8 *local_78;
  long local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  if (param_3 * 0x100 - 0xffffbf00 < 0xffffffff00000000) {
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback("too many user buckets",0x15);
  }
  puVar11 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x2000,0x40);
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0x40,0x2000);
  }
  uVar1 = param_3 + 0x40;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11[0x18] = 0;
  puVar11[0x19] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x1b] = 0;
  puVar11[0x1c] = 0;
  puVar11[0x1d] = 0;
  puVar11[0x1e] = 0;
  puVar11[0x1f] = 0;
  puVar11[0x20] = 0;
  puVar11[0x21] = 0;
  puVar11[0x22] = 0;
  puVar11[0x23] = 0;
  puVar11[0x24] = 0;
  puVar11[0x25] = 0;
  puVar11[0x26] = 0;
  puVar11[0x27] = 0;
  puVar11[0x28] = 0;
  puVar11[0x29] = 0;
  puVar11[0x2a] = 0;
  puVar11[0x2b] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x2e] = 0;
  puVar11[0x2f] = 0;
  puVar11[0x30] = 0;
  puVar11[0x31] = 0;
  puVar11[0x32] = 0;
  puVar11[0x33] = 0;
  puVar11[0x34] = 0;
  puVar11[0x35] = 0;
  puVar11[0x36] = 0;
  puVar11[0x37] = 0;
  puVar11[0x3c] = 0;
  puVar11[0x3d] = 0;
  puVar11[0x3e] = 0;
  puVar11[0x3f] = 0;
  puVar11[0x38] = 0;
  puVar11[0x39] = 0;
  puVar11[0x3a] = 0;
  puVar11[0x3b] = 0;
  puVar11[0x44] = 0;
  puVar11[0x45] = 0;
  puVar11[0x46] = 0;
  puVar11[0x47] = 0;
  puVar11[0x40] = 0;
  puVar11[0x41] = 0;
  puVar11[0x42] = 0;
  puVar11[0x43] = 0;
  puVar11[0x4c] = 0;
  puVar11[0x4d] = 0;
  puVar11[0x4e] = 0;
  puVar11[0x4f] = 0;
  puVar11[0x48] = 0;
  puVar11[0x49] = 0;
  puVar11[0x4a] = 0;
  puVar11[0x4b] = 0;
  puVar11[0x50] = 0;
  puVar11[0x51] = 0;
  puVar11[0x52] = 0;
  puVar11[0x53] = 0;
  puVar11[0x54] = 0;
  puVar11[0x55] = 0;
  puVar11[0x56] = 0;
  puVar11[0x57] = 0;
  puVar11[0x58] = 0;
  puVar11[0x59] = 0;
  puVar11[0x5a] = 0;
  puVar11[0x5b] = 0;
  puVar11[0x5c] = 0;
  puVar11[0x5d] = 0;
  puVar11[0x5e] = 0;
  puVar11[0x5f] = 0;
  puVar11[0x60] = 0;
  puVar11[0x61] = 0;
  puVar11[0x62] = 0;
  puVar11[99] = 0;
  puVar11[100] = 0;
  puVar11[0x65] = 0;
  puVar11[0x66] = 0;
  puVar11[0x67] = 0;
  puVar11[0x68] = 0;
  puVar11[0x69] = 0;
  puVar11[0x6a] = 0;
  puVar11[0x6b] = 0;
  puVar11[0x6c] = 0;
  puVar11[0x6d] = 0;
  puVar11[0x6e] = 0;
  puVar11[0x6f] = 0;
  puVar11[0x70] = 0;
  puVar11[0x71] = 0;
  puVar11[0x72] = 0;
  puVar11[0x73] = 0;
  puVar11[0x74] = 0;
  puVar11[0x75] = 0;
  puVar11[0x76] = 0;
  puVar11[0x77] = 0;
  puVar11[0x78] = 0;
  puVar11[0x79] = 0;
  puVar11[0x7a] = 0;
  puVar11[0x7b] = 0;
  puVar11[0x7c] = 0;
  puVar11[0x7d] = 0;
  puVar11[0x7e] = 0;
  puVar11[0x7f] = 0;
  puVar11[0x84] = 0;
  puVar11[0x85] = 0;
  puVar11[0x86] = 0;
  puVar11[0x87] = 0;
  puVar11[0x80] = 0;
  puVar11[0x81] = 0;
  puVar11[0x82] = 0;
  puVar11[0x83] = 0;
  puVar11[0x8c] = 0;
  puVar11[0x8d] = 0;
  puVar11[0x8e] = 0;
  puVar11[0x8f] = 0;
  puVar11[0x88] = 0;
  puVar11[0x89] = 0;
  puVar11[0x8a] = 0;
  puVar11[0x8b] = 0;
  puVar11[0x94] = 0;
  puVar11[0x95] = 0;
  puVar11[0x96] = 0;
  puVar11[0x97] = 0;
  puVar11[0x90] = 0;
  puVar11[0x91] = 0;
  puVar11[0x92] = 0;
  puVar11[0x93] = 0;
  puVar11[0x9c] = 0;
  puVar11[0x9d] = 0;
  puVar11[0x9e] = 0;
  puVar11[0x9f] = 0;
  puVar11[0x98] = 0;
  puVar11[0x99] = 0;
  puVar11[0x9a] = 0;
  puVar11[0x9b] = 0;
  puVar11[0xa4] = 0;
  puVar11[0xa5] = 0;
  puVar11[0xa6] = 0;
  puVar11[0xa7] = 0;
  puVar11[0xa0] = 0;
  puVar11[0xa1] = 0;
  puVar11[0xa2] = 0;
  puVar11[0xa3] = 0;
  puVar11[0xac] = 0;
  puVar11[0xad] = 0;
  puVar11[0xae] = 0;
  puVar11[0xaf] = 0;
  puVar11[0xa8] = 0;
  puVar11[0xa9] = 0;
  puVar11[0xaa] = 0;
  puVar11[0xab] = 0;
  puVar11[0xb4] = 0;
  puVar11[0xb5] = 0;
  puVar11[0xb6] = 0;
  puVar11[0xb7] = 0;
  puVar11[0xb0] = 0;
  puVar11[0xb1] = 0;
  puVar11[0xb2] = 0;
  puVar11[0xb3] = 0;
  puVar11[0xbc] = 0;
  puVar11[0xbd] = 0;
  puVar11[0xbe] = 0;
  puVar11[0xbf] = 0;
  puVar11[0xb8] = 0;
  puVar11[0xb9] = 0;
  puVar11[0xba] = 0;
  puVar11[0xbb] = 0;
  puVar11[0xc4] = 0;
  puVar11[0xc5] = 0;
  puVar11[0xc6] = 0;
  puVar11[199] = 0;
  puVar11[0xc0] = 0;
  puVar11[0xc1] = 0;
  puVar11[0xc2] = 0;
  puVar11[0xc3] = 0;
  puVar11[0xcc] = 0;
  puVar11[0xcd] = 0;
  puVar11[0xce] = 0;
  puVar11[0xcf] = 0;
  puVar11[200] = 0;
  puVar11[0xc9] = 0;
  puVar11[0xca] = 0;
  puVar11[0xcb] = 0;
  puVar11[0xd4] = 0;
  puVar11[0xd5] = 0;
  puVar11[0xd6] = 0;
  puVar11[0xd7] = 0;
  puVar11[0xd0] = 0;
  puVar11[0xd1] = 0;
  puVar11[0xd2] = 0;
  puVar11[0xd3] = 0;
  puVar11[0xdc] = 0;
  puVar11[0xdd] = 0;
  puVar11[0xde] = 0;
  puVar11[0xdf] = 0;
  puVar11[0xd8] = 0;
  puVar11[0xd9] = 0;
  puVar11[0xda] = 0;
  puVar11[0xdb] = 0;
  puVar11[0xe4] = 0;
  puVar11[0xe5] = 0;
  puVar11[0xe6] = 0;
  puVar11[0xe7] = 0;
  puVar11[0xe0] = 0;
  puVar11[0xe1] = 0;
  puVar11[0xe2] = 0;
  puVar11[0xe3] = 0;
  puVar11[0xec] = 0;
  puVar11[0xed] = 0;
  puVar11[0xee] = 0;
  puVar11[0xef] = 0;
  puVar11[0xe8] = 0;
  puVar11[0xe9] = 0;
  puVar11[0xea] = 0;
  puVar11[0xeb] = 0;
  puVar11[0xf4] = 0;
  puVar11[0xf5] = 0;
  puVar11[0xf6] = 0;
  puVar11[0xf7] = 0;
  puVar11[0xf0] = 0;
  puVar11[0xf1] = 0;
  puVar11[0xf2] = 0;
  puVar11[0xf3] = 0;
  puVar11[0xfc] = 0;
  puVar11[0xfd] = 0;
  puVar11[0xfe] = 0;
  puVar11[0xff] = 0;
  puVar11[0xf8] = 0;
  puVar11[0xf9] = 0;
  puVar11[0xfa] = 0;
  puVar11[0xfb] = 0;
  puVar11[0x104] = 0;
  puVar11[0x105] = 0;
  puVar11[0x106] = 0;
  puVar11[0x107] = 0;
  puVar11[0x100] = 0;
  puVar11[0x101] = 0;
  puVar11[0x102] = 0;
  puVar11[0x103] = 0;
  puVar11[0x10c] = 0;
  puVar11[0x10d] = 0;
  puVar11[0x10e] = 0;
  puVar11[0x10f] = 0;
  puVar11[0x108] = 0;
  puVar11[0x109] = 0;
  puVar11[0x10a] = 0;
  puVar11[0x10b] = 0;
  puVar11[0x114] = 0;
  puVar11[0x115] = 0;
  puVar11[0x116] = 0;
  puVar11[0x117] = 0;
  puVar11[0x110] = 0;
  puVar11[0x111] = 0;
  puVar11[0x112] = 0;
  puVar11[0x113] = 0;
  puVar11[0x11c] = 0;
  puVar11[0x11d] = 0;
  puVar11[0x11e] = 0;
  puVar11[0x11f] = 0;
  puVar11[0x118] = 0;
  puVar11[0x119] = 0;
  puVar11[0x11a] = 0;
  puVar11[0x11b] = 0;
  puVar11[0x124] = 0;
  puVar11[0x125] = 0;
  puVar11[0x126] = 0;
  puVar11[0x127] = 0;
  puVar11[0x120] = 0;
  puVar11[0x121] = 0;
  puVar11[0x122] = 0;
  puVar11[0x123] = 0;
  puVar11[300] = 0;
  puVar11[0x12d] = 0;
  puVar11[0x12e] = 0;
  puVar11[0x12f] = 0;
  puVar11[0x128] = 0;
  puVar11[0x129] = 0;
  puVar11[0x12a] = 0;
  puVar11[299] = 0;
  puVar11[0x134] = 0;
  puVar11[0x135] = 0;
  puVar11[0x136] = 0;
  puVar11[0x137] = 0;
  puVar11[0x130] = 0;
  puVar11[0x131] = 0;
  puVar11[0x132] = 0;
  puVar11[0x133] = 0;
  puVar11[0x13c] = 0;
  puVar11[0x13d] = 0;
  puVar11[0x13e] = 0;
  puVar11[0x13f] = 0;
  puVar11[0x138] = 0;
  puVar11[0x139] = 0;
  puVar11[0x13a] = 0;
  puVar11[0x13b] = 0;
  puVar11[0x144] = 0;
  puVar11[0x145] = 0;
  puVar11[0x146] = 0;
  puVar11[0x147] = 0;
  puVar11[0x140] = 0;
  puVar11[0x141] = 0;
  puVar11[0x142] = 0;
  puVar11[0x143] = 0;
  puVar11[0x14c] = 0;
  puVar11[0x14d] = 0;
  puVar11[0x14e] = 0;
  puVar11[0x14f] = 0;
  puVar11[0x148] = 0;
  puVar11[0x149] = 0;
  puVar11[0x14a] = 0;
  puVar11[0x14b] = 0;
  puVar11[0x154] = 0;
  puVar11[0x155] = 0;
  puVar11[0x156] = 0;
  puVar11[0x157] = 0;
  puVar11[0x150] = 0;
  puVar11[0x151] = 0;
  puVar11[0x152] = 0;
  puVar11[0x153] = 0;
  puVar11[0x15c] = 0;
  puVar11[0x15d] = 0;
  puVar11[0x15e] = 0;
  puVar11[0x15f] = 0;
  puVar11[0x158] = 0;
  puVar11[0x159] = 0;
  puVar11[0x15a] = 0;
  puVar11[0x15b] = 0;
  puVar11[0x164] = 0;
  puVar11[0x165] = 0;
  puVar11[0x166] = 0;
  puVar11[0x167] = 0;
  puVar11[0x160] = 0;
  puVar11[0x161] = 0;
  puVar11[0x162] = 0;
  puVar11[0x163] = 0;
  puVar11[0x16c] = 0;
  puVar11[0x16d] = 0;
  puVar11[0x16e] = 0;
  puVar11[0x16f] = 0;
  puVar11[0x168] = 0;
  puVar11[0x169] = 0;
  puVar11[0x16a] = 0;
  puVar11[0x16b] = 0;
  puVar11[0x174] = 0;
  puVar11[0x175] = 0;
  puVar11[0x176] = 0;
  puVar11[0x177] = 0;
  puVar11[0x170] = 0;
  puVar11[0x171] = 0;
  puVar11[0x172] = 0;
  puVar11[0x173] = 0;
  puVar11[0x17c] = 0;
  puVar11[0x17d] = 0;
  puVar11[0x17e] = 0;
  puVar11[0x17f] = 0;
  puVar11[0x178] = 0;
  puVar11[0x179] = 0;
  puVar11[0x17a] = 0;
  puVar11[0x17b] = 0;
  puVar11[0x184] = 0;
  puVar11[0x185] = 0;
  puVar11[0x186] = 0;
  puVar11[0x187] = 0;
  puVar11[0x180] = 0;
  puVar11[0x181] = 0;
  puVar11[0x182] = 0;
  puVar11[0x183] = 0;
  puVar11[0x18c] = 0;
  puVar11[0x18d] = 0;
  puVar11[0x18e] = 0;
  puVar11[399] = 0;
  puVar11[0x188] = 0;
  puVar11[0x189] = 0;
  puVar11[0x18a] = 0;
  puVar11[0x18b] = 0;
  puVar11[0x194] = 0;
  puVar11[0x195] = 0;
  puVar11[0x196] = 0;
  puVar11[0x197] = 0;
  puVar11[400] = 0;
  puVar11[0x191] = 0;
  puVar11[0x192] = 0;
  puVar11[0x193] = 0;
  puVar11[0x19c] = 0;
  puVar11[0x19d] = 0;
  puVar11[0x19e] = 0;
  puVar11[0x19f] = 0;
  puVar11[0x198] = 0;
  puVar11[0x199] = 0;
  puVar11[0x19a] = 0;
  puVar11[0x19b] = 0;
  puVar11[0x1a4] = 0;
  puVar11[0x1a5] = 0;
  puVar11[0x1a6] = 0;
  puVar11[0x1a7] = 0;
  puVar11[0x1a0] = 0;
  puVar11[0x1a1] = 0;
  puVar11[0x1a2] = 0;
  puVar11[0x1a3] = 0;
  puVar11[0x1ac] = 0;
  puVar11[0x1ad] = 0;
  puVar11[0x1ae] = 0;
  puVar11[0x1af] = 0;
  puVar11[0x1a8] = 0;
  puVar11[0x1a9] = 0;
  puVar11[0x1aa] = 0;
  puVar11[0x1ab] = 0;
  puVar11[0x1b4] = 0;
  puVar11[0x1b5] = 0;
  puVar11[0x1b6] = 0;
  puVar11[0x1b7] = 0;
  puVar11[0x1b0] = 0;
  puVar11[0x1b1] = 0;
  puVar11[0x1b2] = 0;
  puVar11[0x1b3] = 0;
  puVar11[0x1bc] = 0;
  puVar11[0x1bd] = 0;
  puVar11[0x1be] = 0;
  puVar11[0x1bf] = 0;
  puVar11[0x1b8] = 0;
  puVar11[0x1b9] = 0;
  puVar11[0x1ba] = 0;
  puVar11[0x1bb] = 0;
  puVar11[0x1c4] = 0;
  puVar11[0x1c5] = 0;
  puVar11[0x1c6] = 0;
  puVar11[0x1c7] = 0;
  puVar11[0x1c0] = 0;
  puVar11[0x1c1] = 0;
  puVar11[0x1c2] = 0;
  puVar11[0x1c3] = 0;
  puVar11[0x1cc] = 0;
  puVar11[0x1cd] = 0;
  puVar11[0x1ce] = 0;
  puVar11[0x1cf] = 0;
  puVar11[0x1c8] = 0;
  puVar11[0x1c9] = 0;
  puVar11[0x1ca] = 0;
  puVar11[0x1cb] = 0;
  puVar11[0x1d4] = 0;
  puVar11[0x1d5] = 0;
  puVar11[0x1d6] = 0;
  puVar11[0x1d7] = 0;
  puVar11[0x1d0] = 0;
  puVar11[0x1d1] = 0;
  puVar11[0x1d2] = 0;
  puVar11[0x1d3] = 0;
  puVar11[0x1dc] = 0;
  puVar11[0x1dd] = 0;
  puVar11[0x1de] = 0;
  puVar11[0x1df] = 0;
  puVar11[0x1d8] = 0;
  puVar11[0x1d9] = 0;
  puVar11[0x1da] = 0;
  puVar11[0x1db] = 0;
  puVar11[0x1e4] = 0;
  puVar11[0x1e5] = 0;
  puVar11[0x1e6] = 0;
  puVar11[0x1e7] = 0;
  puVar11[0x1e0] = 0;
  puVar11[0x1e1] = 0;
  puVar11[0x1e2] = 0;
  puVar11[0x1e3] = 0;
  puVar11[0x1ec] = 0;
  puVar11[0x1ed] = 0;
  puVar11[0x1ee] = 0;
  puVar11[0x1ef] = 0;
  puVar11[0x1e8] = 0;
  puVar11[0x1e9] = 0;
  puVar11[0x1ea] = 0;
  puVar11[0x1eb] = 0;
  puVar11[500] = 0;
  puVar11[0x1f5] = 0;
  puVar11[0x1f6] = 0;
  puVar11[0x1f7] = 0;
  puVar11[0x1f0] = 0;
  puVar11[0x1f1] = 0;
  puVar11[0x1f2] = 0;
  puVar11[499] = 0;
  puVar11[0x1fc] = 0;
  puVar11[0x1fd] = 0;
  puVar11[0x1fe] = 0;
  puVar11[0x1ff] = 0;
  puVar11[0x1f8] = 0;
  puVar11[0x1f9] = 0;
  puVar11[0x1fa] = 0;
  puVar11[0x1fb] = 0;
  puVar11[0x204] = 0;
  puVar11[0x205] = 0;
  puVar11[0x206] = 0;
  puVar11[0x207] = 0;
  puVar11[0x200] = 0;
  puVar11[0x201] = 0;
  puVar11[0x202] = 0;
  puVar11[0x203] = 0;
  puVar11[0x20c] = 0;
  puVar11[0x20d] = 0;
  puVar11[0x20e] = 0;
  puVar11[0x20f] = 0;
  puVar11[0x208] = 0;
  puVar11[0x209] = 0;
  puVar11[0x20a] = 0;
  puVar11[0x20b] = 0;
  puVar11[0x214] = 0;
  puVar11[0x215] = 0;
  puVar11[0x216] = 0;
  puVar11[0x217] = 0;
  puVar11[0x210] = 0;
  puVar11[0x211] = 0;
  puVar11[0x212] = 0;
  puVar11[0x213] = 0;
  puVar11[0x21c] = 0;
  puVar11[0x21d] = 0;
  puVar11[0x21e] = 0;
  puVar11[0x21f] = 0;
  puVar11[0x218] = 0;
  puVar11[0x219] = 0;
  puVar11[0x21a] = 0;
  puVar11[0x21b] = 0;
  puVar11[0x224] = 0;
  puVar11[0x225] = 0;
  puVar11[0x226] = 0;
  puVar11[0x227] = 0;
  puVar11[0x220] = 0;
  puVar11[0x221] = 0;
  puVar11[0x222] = 0;
  puVar11[0x223] = 0;
  puVar11[0x22c] = 0;
  puVar11[0x22d] = 0;
  puVar11[0x22e] = 0;
  puVar11[0x22f] = 0;
  puVar11[0x228] = 0;
  puVar11[0x229] = 0;
  puVar11[0x22a] = 0;
  puVar11[0x22b] = 0;
  puVar11[0x234] = 0;
  puVar11[0x235] = 0;
  puVar11[0x236] = 0;
  puVar11[0x237] = 0;
  puVar11[0x230] = 0;
  puVar11[0x231] = 0;
  puVar11[0x232] = 0;
  puVar11[0x233] = 0;
  puVar11[0x23c] = 0;
  puVar11[0x23d] = 0;
  puVar11[0x23e] = 0;
  puVar11[0x23f] = 0;
  puVar11[0x238] = 0;
  puVar11[0x239] = 0;
  puVar11[0x23a] = 0;
  puVar11[0x23b] = 0;
  puVar11[0x244] = 0;
  puVar11[0x245] = 0;
  puVar11[0x246] = 0;
  puVar11[0x247] = 0;
  puVar11[0x240] = 0;
  puVar11[0x241] = 0;
  puVar11[0x242] = 0;
  puVar11[0x243] = 0;
  puVar11[0x24c] = 0;
  puVar11[0x24d] = 0;
  puVar11[0x24e] = 0;
  puVar11[0x24f] = 0;
  puVar11[0x248] = 0;
  puVar11[0x249] = 0;
  puVar11[0x24a] = 0;
  puVar11[0x24b] = 0;
  puVar11[0x254] = 0;
  puVar11[0x255] = 0;
  puVar11[0x256] = 0;
  puVar11[599] = 0;
  puVar11[0x250] = 0;
  puVar11[0x251] = 0;
  puVar11[0x252] = 0;
  puVar11[0x253] = 0;
  puVar11[0x25c] = 0;
  puVar11[0x25d] = 0;
  puVar11[0x25e] = 0;
  puVar11[0x25f] = 0;
  puVar11[600] = 0;
  puVar11[0x259] = 0;
  puVar11[0x25a] = 0;
  puVar11[0x25b] = 0;
  puVar11[0x264] = 0;
  puVar11[0x265] = 0;
  puVar11[0x266] = 0;
  puVar11[0x267] = 0;
  puVar11[0x260] = 0;
  puVar11[0x261] = 0;
  puVar11[0x262] = 0;
  puVar11[0x263] = 0;
  puVar11[0x26c] = 0;
  puVar11[0x26d] = 0;
  puVar11[0x26e] = 0;
  puVar11[0x26f] = 0;
  puVar11[0x268] = 0;
  puVar11[0x269] = 0;
  puVar11[0x26a] = 0;
  puVar11[0x26b] = 0;
  puVar11[0x274] = 0;
  puVar11[0x275] = 0;
  puVar11[0x276] = 0;
  puVar11[0x277] = 0;
  puVar11[0x270] = 0;
  puVar11[0x271] = 0;
  puVar11[0x272] = 0;
  puVar11[0x273] = 0;
  puVar11[0x27c] = 0;
  puVar11[0x27d] = 0;
  puVar11[0x27e] = 0;
  puVar11[0x27f] = 0;
  puVar11[0x278] = 0;
  puVar11[0x279] = 0;
  puVar11[0x27a] = 0;
  puVar11[0x27b] = 0;
  puVar11[0x284] = 0;
  puVar11[0x285] = 0;
  puVar11[0x286] = 0;
  puVar11[0x287] = 0;
  puVar11[0x280] = 0;
  puVar11[0x281] = 0;
  puVar11[0x282] = 0;
  puVar11[0x283] = 0;
  puVar11[0x28c] = 0;
  puVar11[0x28d] = 0;
  puVar11[0x28e] = 0;
  puVar11[0x28f] = 0;
  puVar11[0x288] = 0;
  puVar11[0x289] = 0;
  puVar11[0x28a] = 0;
  puVar11[0x28b] = 0;
  puVar11[0x294] = 0;
  puVar11[0x295] = 0;
  puVar11[0x296] = 0;
  puVar11[0x297] = 0;
  puVar11[0x290] = 0;
  puVar11[0x291] = 0;
  puVar11[0x292] = 0;
  puVar11[0x293] = 0;
  puVar11[0x29c] = 0;
  puVar11[0x29d] = 0;
  puVar11[0x29e] = 0;
  puVar11[0x29f] = 0;
  puVar11[0x298] = 0;
  puVar11[0x299] = 0;
  puVar11[0x29a] = 0;
  puVar11[0x29b] = 0;
  puVar11[0x2a4] = 0;
  puVar11[0x2a5] = 0;
  puVar11[0x2a6] = 0;
  puVar11[0x2a7] = 0;
  puVar11[0x2a0] = 0;
  puVar11[0x2a1] = 0;
  puVar11[0x2a2] = 0;
  puVar11[0x2a3] = 0;
  puVar11[0x2ac] = 0;
  puVar11[0x2ad] = 0;
  puVar11[0x2ae] = 0;
  puVar11[0x2af] = 0;
  puVar11[0x2a8] = 0;
  puVar11[0x2a9] = 0;
  puVar11[0x2aa] = 0;
  puVar11[0x2ab] = 0;
  puVar11[0x2b4] = 0;
  puVar11[0x2b5] = 0;
  puVar11[0x2b6] = 0;
  puVar11[0x2b7] = 0;
  puVar11[0x2b0] = 0;
  puVar11[0x2b1] = 0;
  puVar11[0x2b2] = 0;
  puVar11[0x2b3] = 0;
  puVar11[700] = 0;
  puVar11[0x2bd] = 0;
  puVar11[0x2be] = 0;
  puVar11[0x2bf] = 0;
  puVar11[0x2b8] = 0;
  puVar11[0x2b9] = 0;
  puVar11[0x2ba] = 0;
  puVar11[699] = 0;
  puVar11[0x2c4] = 0;
  puVar11[0x2c5] = 0;
  puVar11[0x2c6] = 0;
  puVar11[0x2c7] = 0;
  puVar11[0x2c0] = 0;
  puVar11[0x2c1] = 0;
  puVar11[0x2c2] = 0;
  puVar11[0x2c3] = 0;
  puVar11[0x2cc] = 0;
  puVar11[0x2cd] = 0;
  puVar11[0x2ce] = 0;
  puVar11[0x2cf] = 0;
  puVar11[0x2c8] = 0;
  puVar11[0x2c9] = 0;
  puVar11[0x2ca] = 0;
  puVar11[0x2cb] = 0;
  puVar11[0x2d4] = 0;
  puVar11[0x2d5] = 0;
  puVar11[0x2d6] = 0;
  puVar11[0x2d7] = 0;
  puVar11[0x2d0] = 0;
  puVar11[0x2d1] = 0;
  puVar11[0x2d2] = 0;
  puVar11[0x2d3] = 0;
  puVar11[0x2dc] = 0;
  puVar11[0x2dd] = 0;
  puVar11[0x2de] = 0;
  puVar11[0x2df] = 0;
  puVar11[0x2d8] = 0;
  puVar11[0x2d9] = 0;
  puVar11[0x2da] = 0;
  puVar11[0x2db] = 0;
  puVar11[0x2e4] = 0;
  puVar11[0x2e5] = 0;
  puVar11[0x2e6] = 0;
  puVar11[0x2e7] = 0;
  puVar11[0x2e0] = 0;
  puVar11[0x2e1] = 0;
  puVar11[0x2e2] = 0;
  puVar11[0x2e3] = 0;
  puVar11[0x2ec] = 0;
  puVar11[0x2ed] = 0;
  puVar11[0x2ee] = 0;
  puVar11[0x2ef] = 0;
  puVar11[0x2e8] = 0;
  puVar11[0x2e9] = 0;
  puVar11[0x2ea] = 0;
  puVar11[0x2eb] = 0;
  puVar11[0x2f4] = 0;
  puVar11[0x2f5] = 0;
  puVar11[0x2f6] = 0;
  puVar11[0x2f7] = 0;
  puVar11[0x2f0] = 0;
  puVar11[0x2f1] = 0;
  puVar11[0x2f2] = 0;
  puVar11[0x2f3] = 0;
  puVar11[0x2fc] = 0;
  puVar11[0x2fd] = 0;
  puVar11[0x2fe] = 0;
  puVar11[0x2ff] = 0;
  puVar11[0x2f8] = 0;
  puVar11[0x2f9] = 0;
  puVar11[0x2fa] = 0;
  puVar11[0x2fb] = 0;
  puVar11[0x304] = 0;
  puVar11[0x305] = 0;
  puVar11[0x306] = 0;
  puVar11[0x307] = 0;
  puVar11[0x300] = 0;
  puVar11[0x301] = 0;
  puVar11[0x302] = 0;
  puVar11[0x303] = 0;
  puVar11[0x30c] = 0;
  puVar11[0x30d] = 0;
  puVar11[0x30e] = 0;
  puVar11[0x30f] = 0;
  puVar11[0x308] = 0;
  puVar11[0x309] = 0;
  puVar11[0x30a] = 0;
  puVar11[0x30b] = 0;
  puVar11[0x314] = 0;
  puVar11[0x315] = 0;
  puVar11[0x316] = 0;
  puVar11[0x317] = 0;
  puVar11[0x310] = 0;
  puVar11[0x311] = 0;
  puVar11[0x312] = 0;
  puVar11[0x313] = 0;
  puVar11[0x31c] = 0;
  puVar11[0x31d] = 0;
  puVar11[0x31e] = 0;
  puVar11[799] = 0;
  puVar11[0x318] = 0;
  puVar11[0x319] = 0;
  puVar11[0x31a] = 0;
  puVar11[0x31b] = 0;
  puVar11[0x324] = 0;
  puVar11[0x325] = 0;
  puVar11[0x326] = 0;
  puVar11[0x327] = 0;
  puVar11[800] = 0;
  puVar11[0x321] = 0;
  puVar11[0x322] = 0;
  puVar11[0x323] = 0;
  puVar11[0x32c] = 0;
  puVar11[0x32d] = 0;
  puVar11[0x32e] = 0;
  puVar11[0x32f] = 0;
  puVar11[0x328] = 0;
  puVar11[0x329] = 0;
  puVar11[0x32a] = 0;
  puVar11[0x32b] = 0;
  puVar11[0x334] = 0;
  puVar11[0x335] = 0;
  puVar11[0x336] = 0;
  puVar11[0x337] = 0;
  puVar11[0x330] = 0;
  puVar11[0x331] = 0;
  puVar11[0x332] = 0;
  puVar11[0x333] = 0;
  puVar11[0x33c] = 0;
  puVar11[0x33d] = 0;
  puVar11[0x33e] = 0;
  puVar11[0x33f] = 0;
  puVar11[0x338] = 0;
  puVar11[0x339] = 0;
  puVar11[0x33a] = 0;
  puVar11[0x33b] = 0;
  puVar11[0x344] = 0;
  puVar11[0x345] = 0;
  puVar11[0x346] = 0;
  puVar11[0x347] = 0;
  puVar11[0x340] = 0;
  puVar11[0x341] = 0;
  puVar11[0x342] = 0;
  puVar11[0x343] = 0;
  puVar11[0x34c] = 0;
  puVar11[0x34d] = 0;
  puVar11[0x34e] = 0;
  puVar11[0x34f] = 0;
  puVar11[0x348] = 0;
  puVar11[0x349] = 0;
  puVar11[0x34a] = 0;
  puVar11[0x34b] = 0;
  puVar11[0x354] = 0;
  puVar11[0x355] = 0;
  puVar11[0x356] = 0;
  puVar11[0x357] = 0;
  puVar11[0x350] = 0;
  puVar11[0x351] = 0;
  puVar11[0x352] = 0;
  puVar11[0x353] = 0;
  puVar11[0x35c] = 0;
  puVar11[0x35d] = 0;
  puVar11[0x35e] = 0;
  puVar11[0x35f] = 0;
  puVar11[0x358] = 0;
  puVar11[0x359] = 0;
  puVar11[0x35a] = 0;
  puVar11[0x35b] = 0;
  puVar11[0x364] = 0;
  puVar11[0x365] = 0;
  puVar11[0x366] = 0;
  puVar11[0x367] = 0;
  puVar11[0x360] = 0;
  puVar11[0x361] = 0;
  puVar11[0x362] = 0;
  puVar11[0x363] = 0;
  puVar11[0x36c] = 0;
  puVar11[0x36d] = 0;
  puVar11[0x36e] = 0;
  puVar11[0x36f] = 0;
  puVar11[0x368] = 0;
  puVar11[0x369] = 0;
  puVar11[0x36a] = 0;
  puVar11[0x36b] = 0;
  puVar11[0x374] = 0;
  puVar11[0x375] = 0;
  puVar11[0x376] = 0;
  puVar11[0x377] = 0;
  puVar11[0x370] = 0;
  puVar11[0x371] = 0;
  puVar11[0x372] = 0;
  puVar11[0x373] = 0;
  puVar11[0x37c] = 0;
  puVar11[0x37d] = 0;
  puVar11[0x37e] = 0;
  puVar11[0x37f] = 0;
  puVar11[0x378] = 0;
  puVar11[0x379] = 0;
  puVar11[0x37a] = 0;
  puVar11[0x37b] = 0;
  puVar11[900] = 0;
  puVar11[0x385] = 0;
  puVar11[0x386] = 0;
  puVar11[0x387] = 0;
  puVar11[0x380] = 0;
  puVar11[0x381] = 0;
  puVar11[0x382] = 0;
  puVar11[899] = 0;
  puVar11[0x38c] = 0;
  puVar11[0x38d] = 0;
  puVar11[0x38e] = 0;
  puVar11[0x38f] = 0;
  puVar11[0x388] = 0;
  puVar11[0x389] = 0;
  puVar11[0x38a] = 0;
  puVar11[0x38b] = 0;
  puVar11[0x394] = 0;
  puVar11[0x395] = 0;
  puVar11[0x396] = 0;
  puVar11[0x397] = 0;
  puVar11[0x390] = 0;
  puVar11[0x391] = 0;
  puVar11[0x392] = 0;
  puVar11[0x393] = 0;
  puVar11[0x39c] = 0;
  puVar11[0x39d] = 0;
  puVar11[0x39e] = 0;
  puVar11[0x39f] = 0;
  puVar11[0x398] = 0;
  puVar11[0x399] = 0;
  puVar11[0x39a] = 0;
  puVar11[0x39b] = 0;
  puVar11[0x3a4] = 0;
  puVar11[0x3a5] = 0;
  puVar11[0x3a6] = 0;
  puVar11[0x3a7] = 0;
  puVar11[0x3a0] = 0;
  puVar11[0x3a1] = 0;
  puVar11[0x3a2] = 0;
  puVar11[0x3a3] = 0;
  puVar11[0x3ac] = 0;
  puVar11[0x3ad] = 0;
  puVar11[0x3ae] = 0;
  puVar11[0x3af] = 0;
  puVar11[0x3a8] = 0;
  puVar11[0x3a9] = 0;
  puVar11[0x3aa] = 0;
  puVar11[0x3ab] = 0;
  puVar11[0x3b4] = 0;
  puVar11[0x3b5] = 0;
  puVar11[0x3b6] = 0;
  puVar11[0x3b7] = 0;
  puVar11[0x3b0] = 0;
  puVar11[0x3b1] = 0;
  puVar11[0x3b2] = 0;
  puVar11[0x3b3] = 0;
  puVar11[0x3bc] = 0;
  puVar11[0x3bd] = 0;
  puVar11[0x3be] = 0;
  puVar11[0x3bf] = 0;
  puVar11[0x3b8] = 0;
  puVar11[0x3b9] = 0;
  puVar11[0x3ba] = 0;
  puVar11[0x3bb] = 0;
  puVar11[0x3c4] = 0;
  puVar11[0x3c5] = 0;
  puVar11[0x3c6] = 0;
  puVar11[0x3c7] = 0;
  puVar11[0x3c0] = 0;
  puVar11[0x3c1] = 0;
  puVar11[0x3c2] = 0;
  puVar11[0x3c3] = 0;
  puVar11[0x3cc] = 0;
  puVar11[0x3cd] = 0;
  puVar11[0x3ce] = 0;
  puVar11[0x3cf] = 0;
  puVar11[0x3c8] = 0;
  puVar11[0x3c9] = 0;
  puVar11[0x3ca] = 0;
  puVar11[0x3cb] = 0;
  puVar11[0x3d4] = 0;
  puVar11[0x3d5] = 0;
  puVar11[0x3d6] = 0;
  puVar11[0x3d7] = 0;
  puVar11[0x3d0] = 0;
  puVar11[0x3d1] = 0;
  puVar11[0x3d2] = 0;
  puVar11[0x3d3] = 0;
  puVar11[0x3dc] = 0;
  puVar11[0x3dd] = 0;
  puVar11[0x3de] = 0;
  puVar11[0x3df] = 0;
  puVar11[0x3d8] = 0;
  puVar11[0x3d9] = 0;
  puVar11[0x3da] = 0;
  puVar11[0x3db] = 0;
  puVar11[0x3e4] = 0;
  puVar11[0x3e5] = 0;
  puVar11[0x3e6] = 0;
  puVar11[999] = 0;
  puVar11[0x3e0] = 0;
  puVar11[0x3e1] = 0;
  puVar11[0x3e2] = 0;
  puVar11[0x3e3] = 0;
  puVar11[0x3ec] = 0;
  puVar11[0x3ed] = 0;
  puVar11[0x3ee] = 0;
  puVar11[0x3ef] = 0;
  puVar11[1000] = 0;
  puVar11[0x3e9] = 0;
  puVar11[0x3ea] = 0;
  puVar11[0x3eb] = 0;
  puVar11[0x3f4] = 0;
  puVar11[0x3f5] = 0;
  puVar11[0x3f6] = 0;
  puVar11[0x3f7] = 0;
  puVar11[0x3f0] = 0;
  puVar11[0x3f1] = 0;
  puVar11[0x3f2] = 0;
  puVar11[0x3f3] = 0;
  puVar11[0x3fc] = 0;
  puVar11[0x3fd] = 0;
  puVar11[0x3fe] = 0;
  puVar11[0x3ff] = 0;
  puVar11[0x3f8] = 0;
  puVar11[0x3f9] = 0;
  puVar11[0x3fa] = 0;
  puVar11[0x3fb] = 0;
  puVar14 = (undefined8 *)(uVar1 * 4);
  uVar23 = (uVar1 * 4 + 3) * 0x40;
  plVar13 = param_1;
  if ((uVar1 & 0x3fffffffffffffff) >> 0x38 == 0 && uVar23 < 0x7fffffffffffffc1) {
    puVar12 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar23,0x40);
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0x40,uVar23);
    }
    uVar23 = param_3 * 4 + 0x102;
    uVar17 = (ulong)((uint)uVar23 & 6);
    puVar15 = puVar12;
    if (6 < param_3 * 4 + 0x101) {
      uVar23 = uVar23 & 0xfffffffffffffff8;
      do {
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[10] = 0;
        puVar15[0xb] = 0;
        puVar15[0xc] = 0;
        puVar15[0xd] = 0;
        puVar15[0xe] = 0;
        puVar15[0xf] = 0;
        puVar15[0x10] = 0;
        puVar15[0x11] = 0;
        puVar15[0x12] = 0;
        puVar15[0x13] = 0;
        puVar15[0x14] = 0;
        puVar15[0x15] = 0;
        puVar15[0x16] = 0;
        puVar15[0x17] = 0;
        puVar15[0x18] = 0;
        puVar15[0x19] = 0;
        puVar15[0x1a] = 0;
        puVar15[0x1b] = 0;
        puVar15[0x1c] = 0;
        puVar15[0x1d] = 0;
        puVar15[0x1e] = 0;
        puVar15[0x1f] = 0;
        puVar15[0x20] = 0;
        puVar15[0x21] = 0;
        puVar15[0x22] = 0;
        puVar15[0x23] = 0;
        puVar15[0x24] = 0;
        puVar15[0x25] = 0;
        puVar15[0x26] = 0;
        puVar15[0x27] = 0;
        puVar15[0x28] = 0;
        puVar15[0x29] = 0;
        puVar15[0x2a] = 0;
        puVar15[0x2b] = 0;
        puVar15[0x2c] = 0;
        puVar15[0x2d] = 0;
        puVar15[0x2e] = 0;
        puVar15[0x2f] = 0;
        puVar15[0x30] = 0;
        puVar15[0x31] = 0;
        puVar15[0x32] = 0;
        puVar15[0x33] = 0;
        puVar15[0x34] = 0;
        puVar15[0x35] = 0;
        puVar15[0x36] = 0;
        puVar15[0x37] = 0;
        puVar15[0x3c] = 0;
        puVar15[0x3d] = 0;
        puVar15[0x3e] = 0;
        puVar15[0x3f] = 0;
        puVar15[0x38] = 0;
        puVar15[0x39] = 0;
        puVar15[0x3a] = 0;
        puVar15[0x3b] = 0;
        puVar15 = puVar15 + 0x40;
        uVar23 = uVar23 - 8;
      } while (uVar23 != 0);
    }
    do {
      puVar18 = puVar15;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      uVar17 = uVar17 - 1;
      puVar15 = puVar18 + 8;
    } while (uVar17 != 0);
    puVar18[0xc] = 0;
    puVar18[0xd] = 0;
    puVar18[0xe] = 0;
    puVar18[0xf] = 0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    puVar18[10] = 0;
    puVar18[0xb] = 0;
    local_40 = puVar11;
    if (uVar1 >> 0x3e != 0) goto LAB_006a27fb;
    if (puVar14 == (undefined8 *)0x0) {
      plVar13 = (long *)&DAT_00000004;
      uVar23 = 0;
      iVar6 = DAT_00206484;
      iVar7 = DAT_00206494;
      iVar8 = DAT_00206498;
      iVar9 = DAT_002064fc;
    }
    else {
      plVar13 = (long *)__rustc[45371133cddedda4]::__rust_alloc();
      uVar23 = uVar1;
      iVar6 = DAT_00206484;
      iVar7 = DAT_00206494;
      iVar8 = DAT_00206498;
      iVar9 = DAT_002064fc;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,puVar14);
      }
    }
    DAT_00206484 = iVar6;
    DAT_00206494 = iVar7;
    DAT_00206498 = iVar8;
    DAT_002064fc = iVar9;
    if (uVar1 != 0) {
      if (uVar1 < 4) {
        uVar17 = 0;
      }
      else {
        if (uVar1 < 0x20) {
          uVar20 = 0;
        }
        else {
          uVar17 = uVar1 & 0x3fffffffffffffe0;
          uVar20 = 0;
          auVar26._4_4_ = DAT_00206540;
          auVar26._0_4_ = DAT_00206540;
          auVar26._8_4_ = DAT_00206540;
          auVar26._12_4_ = DAT_00206540;
          auVar26._16_4_ = DAT_00206540;
          auVar26._20_4_ = DAT_00206540;
          auVar26._24_4_ = DAT_00206540;
          auVar26._28_4_ = DAT_00206540;
          auVar5 = _DAT_00203020;
          do {
            auVar29 = vpslld_avx2(auVar5,8);
            auVar4 = vpor_avx2(auVar29,auVar26);
            iVar28 = auVar29._0_4_;
            iVar30 = auVar29._4_4_;
            iVar31 = auVar29._8_4_;
            iVar32 = auVar29._12_4_;
            iVar33 = auVar29._16_4_;
            iVar34 = auVar29._20_4_;
            iVar35 = auVar29._24_4_;
            iVar36 = auVar29._28_4_;
            *(undefined1 (*) [32])((long)plVar13 + uVar20 * 4) = auVar4;
            piVar3 = (int *)((long)plVar13 + uVar20 * 4 + 0x20);
            *piVar3 = iVar28 + iVar6;
            piVar3[1] = iVar30 + iVar6;
            piVar3[2] = iVar31 + iVar6;
            piVar3[3] = iVar32 + iVar6;
            piVar3[4] = iVar33 + iVar6;
            piVar3[5] = iVar34 + iVar6;
            piVar3[6] = iVar35 + iVar6;
            piVar3[7] = iVar36 + iVar6;
            piVar3 = (int *)((long)plVar13 + uVar20 * 4 + 0x40);
            *piVar3 = iVar28 + iVar7;
            piVar3[1] = iVar30 + iVar7;
            piVar3[2] = iVar31 + iVar7;
            piVar3[3] = iVar32 + iVar7;
            piVar3[4] = iVar33 + iVar7;
            piVar3[5] = iVar34 + iVar7;
            piVar3[6] = iVar35 + iVar7;
            piVar3[7] = iVar36 + iVar7;
            piVar3 = (int *)((long)plVar13 + uVar20 * 4 + 0x60);
            *piVar3 = iVar28 + iVar8;
            piVar3[1] = iVar30 + iVar8;
            piVar3[2] = iVar31 + iVar8;
            piVar3[3] = iVar32 + iVar8;
            piVar3[4] = iVar33 + iVar8;
            piVar3[5] = iVar34 + iVar8;
            piVar3[6] = iVar35 + iVar8;
            piVar3[7] = iVar36 + iVar8;
            uVar20 = uVar20 + 0x20;
            auVar4._0_4_ = auVar5._0_4_ + iVar9;
            auVar4._4_4_ = auVar5._4_4_ + iVar9;
            auVar4._8_4_ = auVar5._8_4_ + iVar9;
            auVar4._12_4_ = auVar5._12_4_ + iVar9;
            auVar4._16_4_ = auVar5._16_4_ + iVar9;
            auVar4._20_4_ = auVar5._20_4_ + iVar9;
            auVar4._24_4_ = auVar5._24_4_ + iVar9;
            auVar4._28_4_ = auVar5._28_4_ + iVar9;
            auVar5 = auVar4;
          } while (uVar17 != uVar20);
          if (uVar1 == uVar17) goto LAB_006a2632;
          uVar20 = uVar17;
          if ((param_3 & 0x1c) == 0) goto LAB_006a2611;
        }
        iVar6 = DAT_0020641c;
        uVar17 = uVar1 & 0x3ffffffffffffffc;
        auVar24 = vpbroadcastd_avx512vl();
        auVar24 = vpor_avx(auVar24,_DAT_00202120);
        auVar25._4_4_ = DAT_00206540;
        auVar25._0_4_ = DAT_00206540;
        auVar25._8_4_ = DAT_00206540;
        auVar25._12_4_ = DAT_00206540;
        do {
          auVar27 = vpslld_avx(auVar24,8);
          auVar27 = vpor_avx(auVar27,auVar25);
          *(undefined1 (*) [16])((long)plVar13 + uVar20 * 4) = auVar27;
          uVar20 = uVar20 + 4;
          auVar27._0_4_ = auVar24._0_4_ + iVar6;
          auVar27._4_4_ = auVar24._4_4_ + iVar6;
          auVar27._8_4_ = auVar24._8_4_ + iVar6;
          auVar27._12_4_ = auVar24._12_4_ + iVar6;
          auVar24 = auVar27;
        } while (uVar17 != uVar20);
        if (uVar1 == uVar17) goto LAB_006a2632;
      }
LAB_006a2611:
      uVar16 = (int)uVar17 << 8 | 0x40;
      do {
        *(uint *)((long)plVar13 + uVar17 * 4) = uVar16;
        uVar17 = uVar17 + 1;
        uVar16 = uVar16 + 0x100;
      } while (uVar1 != uVar17);
    }
LAB_006a2632:
    uVar17 = uVar1 * 8;
    local_50 = param_1;
    local_48 = puVar12;
    if (uVar1 >> 0x3d != 0 || 0x7ffffffffffffff8 < uVar17) goto LAB_006a27fb;
    if (uVar17 == 0) {
      puVar14 = (undefined8 *)&DAT_00000008;
      local_60 = 0;
      uVar22 = DAT_00201ca8;
    }
    else {
      puVar14 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc();
      local_60 = uVar1;
      uVar22 = DAT_00201ca8;
      if (puVar14 == (undefined8 *)0x0) goto LAB_006a2a1d;
    }
    DAT_00201ca8 = uVar22;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0,0xffffffffffffff00);
      }
      *puVar14 = 0xfc0;
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(0,0xffffffffffffff04);
    }
    uVar17 = param_3 + 0x3f;
    lVar19 = 1;
    puVar15 = puVar14;
    if (uVar17 < 4) {
LAB_006a2775:
      lVar19 = (param_3 - lVar19) + 0x40;
      do {
        *puVar15 = 0xfc0;
        puVar15 = puVar15 + 1;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    else if (uVar17 < 0x10) {
      uVar20 = 0;
LAB_006a273f:
      uVar22 = DAT_00201ca8;
      uVar21 = uVar17 & 0xfffffffffffffffc;
      puVar15 = puVar14 + uVar21;
      lVar19 = uVar21 + 1;
      do {
        puVar18 = puVar14 + uVar20;
        *puVar18 = uVar22;
        puVar18[1] = uVar22;
        puVar18[2] = uVar22;
        puVar18[3] = uVar22;
        uVar20 = uVar20 + 4;
      } while (uVar21 != uVar20);
      if (uVar17 != uVar21) goto LAB_006a2775;
    }
    else {
      uVar20 = uVar17 & 0xfffffffffffffff0;
      puVar15 = puVar14 + uVar20;
      lVar19 = uVar20 + 1;
      uVar21 = 0;
      do {
        puVar18 = puVar14 + uVar21;
        *puVar18 = uVar22;
        puVar18[1] = uVar22;
        puVar18[2] = uVar22;
        puVar18[3] = uVar22;
        puVar18 = puVar14 + uVar21 + 4;
        *puVar18 = uVar22;
        puVar18[1] = uVar22;
        puVar18[2] = uVar22;
        puVar18[3] = uVar22;
        puVar18 = puVar14 + uVar21 + 8;
        *puVar18 = uVar22;
        puVar18[1] = uVar22;
        puVar18[2] = uVar22;
        puVar18[3] = uVar22;
        puVar18 = puVar14 + uVar21 + 0xc;
        *puVar18 = uVar22;
        puVar18[1] = uVar22;
        puVar18[2] = uVar22;
        puVar18[3] = uVar22;
        uVar21 = uVar21 + 0x10;
      } while (uVar20 != uVar21);
      if (uVar17 != uVar20) {
        if ((uVar17 & 0xc) == 0) goto LAB_006a2775;
        goto LAB_006a273f;
      }
    }
    *puVar15 = 0xfc0;
    uVar17 = param_3 * 4;
    uVar22 = 0;
    if ((0x3fffffffffffffff < param_3) || (0x7ffffffffffffffc < uVar17)) {
LAB_006a2a2f:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(uVar22,uVar17);
    }
    local_58 = uVar23;
    if (param_3 != 0) {
      local_68 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar17,4);
      if (local_68 == 0) {
        uVar22 = 4;
        goto LAB_006a2a2f;
      }
      local_70 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar17,4);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar17);
      }
      if (param_3 >> 0x3c == 0) {
        uVar17 = param_3 * 8;
        local_78 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(uVar17,8);
        if (local_78 == (undefined8 *)0x0) {
LAB_006a2a1d:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar17);
        }
        puVar15 = local_78;
        uVar20 = 1;
        if (param_3 != 1) {
          (*(code *)PTR_memset_00841dd0)(local_78,0,uVar17 - 8);
          puVar15 = local_78 + (param_3 - 1);
          uVar20 = param_3;
        }
        *puVar15 = 0;
        goto joined_r0x006a282a;
      }
      goto LAB_006a27fb;
    }
  }
  else {
LAB_006a27fb:
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  local_78 = (undefined8 *)&DAT_00000008;
  uVar20 = 0;
  local_68 = 4;
  local_70 = 4;
  uVar23 = local_58;
  puVar12 = local_48;
  puVar11 = local_40;
joined_r0x006a282a:
  if (pipeline[509596c7b52975b2]::parse::POPW != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<bool>>::get_or_init<pipeline[509596c7b52975b2]::parse::popw::_closure_0_>::_closure_0_,_>
              ();
  }
  uVar10 = DAT_00843ae4;
  lVar19 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(0x120,4);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,0x120);
  }
  lVar2 = uVar1 * 4 + 3;
  *local_50 = lVar2;
  local_50[1] = (long)puVar12;
  local_50[2] = lVar2;
  local_50[0x18] = (ulong)(puVar12 + 0x18) & 0xffffffffffffff00;
  local_50[3] = uVar23;
  local_50[4] = (long)plVar13;
  local_50[5] = uVar1;
  local_50[6] = local_60;
  local_50[7] = (long)puVar14;
  local_50[8] = uVar1;
  local_50[9] = uVar20;
  local_50[10] = local_68;
  local_50[0xb] = param_3;
  local_50[0xc] = uVar20;
  local_50[0xd] = local_70;
  local_50[0xe] = param_3;
  local_50[0xf] = uVar20;
  local_50[0x10] = (long)local_78;
  local_50[0x11] = param_3;
  local_50[0x19] = param_2;
  *(undefined1 (*) [16])(local_50 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 *)(local_50 + 0x1d) = uVar10;
  local_50[0x12] = 0x48;
  local_50[0x13] = lVar19;
  local_50[0x14] = 0x48;
  local_50[0x1c] = (ulong)(puVar11 + 0x1f8) & 0xfffffffffffff000;
  local_50[0x15] = 0x80;
  local_50[0x16] = (long)puVar11;
  local_50[0x17] = 0x80;
  return;
}


// ==== <pipeline::parse::Part>::flush_one @ 006a2a80 (307 bytes)

/* <pipeline[509596c7b52975b2]::parse::Part>::flush_one */

void __rustcall <pipeline[509596c7b52975b2]::parse::Part>::flush_one(long param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [32];
  uint uVar14;
  long lVar15;
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x38);
  lVar1 = param_2 * 0x100 + *(long *)(param_1 + 0xc0);
  pauVar13 = *(undefined1 (**) [32])(lVar5 + param_2 * 8);
  uVar14 = (uint)pauVar13 & 0xfff;
  if (pipeline[509596c7b52975b2]::parse::NT_0 == '\0') {
    lVar15 = *(long *)(param_1 + 0xc0) + param_2 * 0x100;
    if (uVar14 == 0xfc0) {
      pauVar13 = (undefined1 (*) [32])new_chunk(param_1,param_2,pauVar13);
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar9 = *(undefined8 *)(lVar1 + 0x60);
    uVar10 = *(undefined8 *)(lVar1 + 0x68);
    uVar11 = *(undefined8 *)(lVar1 + 0x70);
    uVar12 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)*pauVar13 = *(undefined8 *)*(undefined1 (*) [32])(lVar1 + 0x40);
    *(undefined8 *)(*pauVar13 + 8) = uVar6;
    *(undefined8 *)(*pauVar13 + 0x10) = uVar7;
    *(undefined8 *)(*pauVar13 + 0x18) = uVar8;
    *(undefined8 *)pauVar13[1] = uVar9;
    *(undefined8 *)(pauVar13[1] + 8) = uVar10;
    *(undefined8 *)(pauVar13[1] + 0x10) = uVar11;
    *(undefined8 *)(pauVar13[1] + 0x18) = uVar12;
    uVar6 = *(undefined8 *)(lVar15 + 0x88);
    uVar7 = *(undefined8 *)(lVar15 + 0x90);
    uVar8 = *(undefined8 *)(lVar15 + 0x98);
    uVar9 = *(undefined8 *)(lVar15 + 0xa0);
    uVar10 = *(undefined8 *)(lVar15 + 0xa8);
    uVar11 = *(undefined8 *)(lVar15 + 0xb0);
    uVar12 = *(undefined8 *)(lVar15 + 0xb8);
    *(undefined8 *)pauVar13[2] = *(undefined8 *)(lVar15 + 0x80);
    *(undefined8 *)(pauVar13[2] + 8) = uVar6;
    *(undefined8 *)(pauVar13[2] + 0x10) = uVar7;
    *(undefined8 *)(pauVar13[2] + 0x18) = uVar8;
    *(undefined8 *)pauVar13[3] = uVar9;
    *(undefined8 *)(pauVar13[3] + 8) = uVar10;
    *(undefined8 *)(pauVar13[3] + 0x10) = uVar11;
    *(undefined8 *)(pauVar13[3] + 0x18) = uVar12;
    uVar6 = *(undefined8 *)(lVar15 + 200);
    uVar7 = *(undefined8 *)(lVar15 + 0xd0);
    uVar8 = *(undefined8 *)(lVar15 + 0xd8);
    uVar9 = *(undefined8 *)(lVar15 + 0xe0);
    uVar10 = *(undefined8 *)(lVar15 + 0xe8);
    uVar11 = *(undefined8 *)(lVar15 + 0xf0);
    uVar12 = *(undefined8 *)(lVar15 + 0xf8);
    *(undefined8 *)pauVar13[4] = *(undefined8 *)(lVar15 + 0xc0);
    *(undefined8 *)(pauVar13[4] + 8) = uVar6;
    *(undefined8 *)(pauVar13[4] + 0x10) = uVar7;
    *(undefined8 *)(pauVar13[4] + 0x18) = uVar8;
    *(undefined8 *)pauVar13[5] = uVar9;
    *(undefined8 *)(pauVar13[5] + 8) = uVar10;
    *(undefined8 *)(pauVar13[5] + 0x10) = uVar11;
    *(undefined8 *)(pauVar13[5] + 0x18) = uVar12;
  }
  else {
    if (uVar14 == 0xfc0) {
      pauVar13 = (undefined1 (*) [32])new_chunk(param_1,param_2,pauVar13);
    }
    auVar2 = *(undefined1 (*) [32])(lVar1 + 0x60);
    auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar1 + 0x40));
    *pauVar13 = auVar3;
    auVar2 = vmovntdq_avx(auVar2);
    pauVar13[1] = auVar2;
    auVar2 = *(undefined1 (*) [32])(lVar1 + 0xa0);
    auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar1 + 0x80));
    pauVar13[2] = auVar3;
    auVar2 = vmovntdq_avx(auVar2);
    pauVar13[3] = auVar2;
    auVar2 = *(undefined1 (*) [32])(lVar1 + 0xe0);
    auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(lVar1 + 0xc0));
    pauVar13[4] = auVar3;
    auVar2 = vmovntdq_avx(auVar2);
    pauVar13[5] = auVar2;
  }
  *(undefined1 (**) [32])(lVar5 + param_2 * 8) = pauVar13 + 6;
  *(uint *)(lVar4 + param_2 * 4) = (int)param_2 << 8 | 0x40;
  return;
}


// ==== <pipeline::parse::Part>::new_chunk @ 006a2bc0 (265 bytes)

/* <pipeline[509596c7b52975b2]::parse::Part>::new_chunk */

void * __rustcall
<pipeline[509596c7b52975b2]::parse::Part>::new_chunk(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *__addr;
  
  if (param_2 < *(ulong *)(param_1 + 0x88)) {
    __addr = *(void **)(param_1 + 0xd0);
    if (__addr == *(void **)(param_1 + 0xd8)) {
      plVar4 = *(long **)(param_1 + 200);
      LOCK();
      plVar1 = plVar4 + 2;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 0x200000;
      UNLOCK();
      if ((ulong)plVar4[1] < lVar3 + 0x200000U) {
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("arena full",10);
      }
      __addr = (void *)(*plVar4 + lVar3);
      *(long *)(param_1 + 0xd8) = lVar3 + *plVar4 + 0x200000;
      if (*(char *)(param_1 + 0xe8) != '\0') {
        madvise(__addr,0x200000,0x17);
      }
    }
    *(long *)(param_1 + 0xd0) = (long)__addr + 0x1000;
    if (param_3 == (undefined8 *)&DAT_00000fc0) {
      *(void **)(*(long *)(param_1 + 0x80) + param_2 * 8) = __addr;
      uVar5 = *(ulong *)(param_1 + 0x58);
    }
    else {
      *param_3 = __addr;
      uVar5 = *(ulong *)(param_1 + 0x58);
    }
    if (uVar5 <= param_2) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_2,uVar5,&PTR_s_src_parse_rs_00212918);
    }
    piVar2 = (int *)(*(long *)(param_1 + 0x50) + param_2 * 4);
    *piVar2 = *piVar2 + 1;
  }
  else {
    __addr = *(void **)(param_1 + 0xe0);
  }
  return __addr;
}


// ==== pipeline::parse::links_chunk @ 007202e0 (440 bytes)

/* pipeline[509596c7b52975b2]::parse::links_chunk */

void __rustcall
pipeline[509596c7b52975b2]::parse::links_chunk(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_a98;
  long local_a90;
  undefined8 local_a88;
  undefined1 local_a80 [2640];
  
  uVar2 = 0;
  (*(code *)PTR_memset_00841dd0)(local_a80,0,0xa00);
  if (param_3 < 0x28) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    while( true ) {
      while( true ) {
        lk_loop(&local_a98,uVar1 + param_2,param_2 + param_3 + -0x28,local_a80,uVar2);
        uVar2 = local_a88;
        uVar1 = local_a90 - param_2;
        if (local_a98 == 1) break;
        if (local_a98 != 2) goto LAB_00720417;
        lk_batch(param_1,param_2,param_3,local_a80,0x40);
        uVar2 = 0;
      }
      if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail
                  (uVar1,param_3,param_3,&PTR_s_src_parse_rs_00215218);
      }
      if (local_a90 == param_2 + param_3) break;
      lVar3 = 0;
      while (*(char *)(param_2 + uVar1 + lVar3) != '\n') {
        lVar3 = lVar3 + 1;
        if ((param_2 + param_3) - local_a90 == lVar3) goto LAB_00720417;
      }
      link_slow(param_1,param_2,param_3,uVar1,lVar3 + uVar1);
      uVar1 = uVar1 + lVar3 + 1;
    }
  }
LAB_00720417:
  lk_batch(param_1,param_2,param_3,local_a80,uVar2);
  do {
    if (param_3 <= uVar1) {
      return;
    }
    lVar3 = 0;
    while (*(char *)(param_2 + uVar1 + lVar3) != '\n') {
      lVar3 = lVar3 + 1;
      if (param_3 - uVar1 == lVar3) {
        link_slow(param_1,param_2,param_3,uVar1,param_3);
        return;
      }
    }
    link_slow(param_1,param_2,param_3,uVar1,uVar1 + lVar3);
    uVar1 = uVar1 + lVar3 + 1;
  } while( true );
}


// ==== pipeline::parse::init_tabs_shared @ 007204c0 (459 bytes)

/* pipeline[509596c7b52975b2]::parse::init_tabs_shared */

void __rustcall
pipeline[509596c7b52975b2]::parse::init_tabs_shared
          (undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long in_R11;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  ulong local_10;
  
  if ((param_2 < 0x20041) || (param_4 < 0x4040)) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("lookup table padding",0x14);
  }
  local_48 = 0;
  do {
    if (*(char *)(param_3 + local_48) != -1) {
LAB_00720559:
      pcVar5 = (char *)(param_3 + local_48);
      lVar2 = 0x4005;
      goto LAB_00720570;
    }
    if (*(char *)(param_3 + 1 + local_48) != -1) {
      local_48 = local_48 + 1;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 2 + local_48) != -1) {
      local_48 = local_48 + 2;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 3 + local_48) != -1) {
      local_48 = local_48 + 3;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 4 + local_48) != -1) {
      local_48 = local_48 + 4;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 5 + local_48) != -1) {
      local_48 = local_48 + 5;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 6 + local_48) != -1) {
      local_48 = local_48 + 6;
      goto LAB_00720559;
    }
    if (*(char *)(param_3 + 7 + local_48) != -1) {
      local_48 = local_48 + 7;
      goto LAB_00720559;
    }
    local_48 = local_48 + 8;
  } while (local_48 != 0x4000);
  local_48 = 0x3fff;
  local_40 = in_R11;
  goto LAB_0072060f;
  while( true ) {
    if (*(char *)(param_3 + -8 + lVar3) != -1) {
      uVar4 = lVar3 - 7;
      local_40 = lVar3 + -8;
      goto LAB_007205db;
    }
    if (*(char *)(param_3 + -9 + lVar3) != -1) {
      uVar4 = lVar3 - 8;
      local_40 = lVar3 + -9;
      goto LAB_007205db;
    }
    local_40 = lVar3;
    if (lVar3 == 9) goto LAB_0072060f;
    lVar2 = lVar3 + -5;
    if (*(char *)(param_3 + -10 + lVar3) != -1) break;
LAB_00720570:
    lVar3 = lVar2;
    uVar4 = lVar3 - 5;
    if (*(char *)(param_3 + -6 + lVar3) != -1) {
      local_40 = lVar3 + -6;
      goto LAB_007205db;
    }
    if (*(char *)(param_3 + -7 + lVar3) != -1) {
      uVar4 = lVar3 - 6;
      local_40 = lVar3 + -7;
      goto LAB_007205db;
    }
  }
  local_40 = lVar3 + -10;
  uVar4 = lVar3 - 9;
LAB_007205db:
  if (uVar4 < local_48) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (local_48,uVar4,0x4000,&PTR_s_src_parse_rs_00215200);
  }
  do {
    if (pcVar5 == (char *)(param_3 + uVar4)) {
      local_40 = local_40 - local_48;
      local_50 = 1;
      goto LAB_0072061a;
    }
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != -1);
LAB_0072060f:
  local_50 = 0;
LAB_0072061a:
  if (TABS._72_4_ == 0) {
    return;
  }
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_4;
  local_18 = param_3;
  local_10 = param_4;
  <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::
  initialize::
  <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::get_or_init<<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Tabs>>::try_insert::_closure_0_>::_closure_0_,_>
            (&local_50);
  return;
}


// ==== pipeline::parse::fault_around_check @ 007206a0 (1386 bytes)

/* pipeline[509596c7b52975b2]::parse::fault_around_check */

void __rustcall
pipeline[509596c7b52975b2]::parse::fault_around_check(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_1f0;
  ulong local_1e8;
  undefined **local_1e0;
  long local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  long local_1c0;
  rusage local_1b8 [2];
  
  if (sys::FD_ALL_0 == '\0') {
    return;
  }
  if (DAT_00843ab0 != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::
    initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<pipeline[509596c7b52975b2]::parse::Drv>>::get_or_init<pipeline[509596c7b52975b2]::parse::drv::_closure_0_>::_closure_0_,_>
              ();
  }
  if (DRV != 0) {
    return;
  }
  local_1b8[0].ru_utime.tv_sec = CONCAT26(local_1b8[0].ru_utime.tv_sec._6_2_,0x41465f4c58);
  uVar5 = vptestnmb_avx512vl(SUB6416(ZEXT464(0x465f4c58),0),SUB6416(ZEXT464(0x465f4c58),0));
  if ((uVar5 & 0xf) == 0) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1d0,local_1b8);
    if (local_1d0 == 0xfffffffffffffffe) goto LAB_00720877;
    if (local_1d0 == 0xffffffffffffffff) goto LAB_00720891;
    core[62e902411887be45]::str::converts::from_utf8(local_1b8,local_1c8,local_1c0);
    local_1e8 = local_1d0;
    local_1e0 = local_1c8;
    local_1d8 = local_1c0;
    local_1f0 = local_1b8[0].ru_utime.tv_sec;
    if (local_1b8[0].ru_utime.tv_sec == 1) goto LAB_007208a3;
    if (local_1c0 == 1) {
      if (*(char *)local_1c8 == '0') {
        RD_AUTO_0 = 0x20000;
      }
      else if (*(char *)local_1c8 != '1') goto LAB_007207db;
      if (local_1d0 == 0) {
        return;
      }
      if ((local_1c8 <= (undefined **)(sys::A_BASE_0 + -1)) || (sys::A_END_0 <= local_1c8)) {
        free(local_1c8);
        return;
      }
      uVar5 = 0x10;
      if (0x10 < local_1d0) {
        uVar5 = local_1d0;
      }
      lVar7 = LZCOUNT(uVar5 - 1);
      lVar12 = 0x40 - lVar7;
      if ((0xffff < uVar5 - 1) && (cVar2 = sys::big_put(local_1c8,lVar12), cVar2 != '\0')) {
        return;
      }
      if (lVar7 != 0) {
        *local_1c8 = *(undefined **)(in_FS_OFFSET + lVar12 * 8 + -0x3c8);
        *(undefined ***)(in_FS_OFFSET + lVar12 * 8 + -0x3c8) = local_1c8;
        return;
      }
LAB_00720bf8:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(lVar12,0x40,&PTR_s_src_sys_rs_002110f0);
    }
LAB_007207db:
    if (local_1d0 != 0) {
      if (((undefined **)(sys::A_BASE_0 + -1) < local_1c8) && (local_1c8 < sys::A_END_0)) {
        uVar5 = 0x10;
        if (0x10 < local_1d0) {
          uVar5 = local_1d0;
        }
        lVar7 = LZCOUNT(uVar5 - 1);
        lVar12 = 0x40 - lVar7;
        if ((uVar5 - 1 < 0x10000) || (cVar2 = sys::big_put(local_1c8,lVar12), cVar2 == '\0')) {
          if (lVar7 == 0) goto LAB_00720bf8;
          *local_1c8 = *(undefined **)(in_FS_OFFSET + lVar12 * 8 + -0x3c8);
          *(undefined ***)(in_FS_OFFSET + lVar12 * 8 + -0x3c8) = local_1c8;
        }
      }
      else {
        free(local_1c8);
      }
    }
  }
  else {
    local_1c8 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00720877:
    if ((1 < ((uint)local_1c8 & 3) - 2) && (((ulong)local_1c8 & 3) != 0)) {
      (**(code **)((long)local_1c8 + 0x17))((char *)((long)local_1c8 + -1));
    }
LAB_00720891:
    local_1e8 = 0xffffffffffffffff;
    local_1f0 = 1;
LAB_007208a3:
    core[62e902411887be45]::ptr::drop_glue::
    <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
              (&local_1f0);
  }
  if (param_3 == 0) {
    return;
  }
  lVar12 = param_2;
  if (param_3 != 1) {
    uVar5 = *(ulong *)(param_2 + 8);
    uVar10 = param_3 + 0x7ffffffffffffff;
    uVar8 = (ulong)((uint)uVar10 & 3);
    if ((uVar10 & 0x7ffffffffffffff) - 1 < 3) {
      uVar9 = 0;
    }
    else {
      lVar7 = param_2 + 0x60;
      uVar9 = 0;
      do {
        uVar1 = *(ulong *)(lVar7 + -0x38);
        uVar4 = *(ulong *)(lVar7 + -0x18);
        uVar3 = uVar5;
        if (uVar5 < uVar1) {
          uVar3 = uVar1;
        }
        lVar11 = lVar7 + -0x40;
        if (uVar1 < uVar5) {
          lVar11 = lVar12;
        }
        uVar5 = uVar3;
        if (uVar3 < uVar4) {
          uVar5 = uVar4;
        }
        lVar6 = lVar7 + -0x20;
        if (uVar4 < uVar3) {
          lVar6 = lVar11;
        }
        uVar1 = *(ulong *)(lVar7 + 8);
        uVar4 = uVar5;
        if (uVar5 < uVar1) {
          uVar4 = uVar1;
        }
        if (uVar5 <= uVar1) {
          lVar6 = lVar7;
        }
        uVar1 = *(ulong *)(lVar7 + 0x28);
        uVar5 = uVar4;
        if (uVar4 < uVar1) {
          uVar5 = uVar1;
        }
        lVar12 = lVar7 + 0x20;
        if (uVar1 < uVar4) {
          lVar12 = lVar6;
        }
        uVar9 = uVar9 + 4;
        lVar7 = lVar7 + 0x80;
      } while ((uVar10 & 0x7fffffffffffffc) != uVar9);
      if (uVar8 == 0) goto LAB_00720998;
    }
    lVar7 = param_2 + uVar9 * 0x20;
    do {
      uVar10 = *(ulong *)(lVar7 + 0x28);
      bVar13 = uVar5 <= uVar10;
      if (uVar5 < uVar10) {
        uVar5 = uVar10;
      }
      if (bVar13) {
        lVar12 = lVar7 + 0x20;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar8 != 0);
  }
LAB_00720998:
  if (0x3fffff < *(ulong *)(lVar12 + 8)) {
    local_1b8[0].ru_nvcsw = 0;
    local_1b8[0].ru_nivcsw = 0;
    local_1b8[0].ru_oublock = 0;
    local_1b8[0].ru_msgsnd = 0;
    local_1b8[0].ru_msgrcv = 0;
    local_1b8[0].ru_nsignals = 0;
    local_1b8[0].ru_minflt = 0;
    local_1b8[0].ru_majflt = 0;
    local_1b8[0].ru_nswap = 0;
    local_1b8[0].ru_inblock = 0;
    local_1b8[0].ru_maxrss = 0;
    local_1b8[0].ru_ixrss = 0;
    local_1b8[0].ru_idrss = 0;
    local_1b8[0].ru_isrss = 0;
    local_1b8[0].ru_utime.tv_sec = 0;
    local_1b8[0].ru_utime.tv_usec = 0;
    local_1b8[0].ru_stime.tv_sec = 0;
    local_1b8[0].ru_stime.tv_usec = 0;
    getrusage(RUSAGE_THREAD,local_1b8);
    lVar12 = local_1b8[0].ru_minflt;
    local_1b8[0].ru_nvcsw = 0;
    local_1b8[0].ru_nivcsw = 0;
    local_1b8[0].ru_oublock = 0;
    local_1b8[0].ru_msgsnd = 0;
    local_1b8[0].ru_msgrcv = 0;
    local_1b8[0].ru_nsignals = 0;
    local_1b8[0].ru_minflt = 0;
    local_1b8[0].ru_majflt = 0;
    local_1b8[0].ru_nswap = 0;
    local_1b8[0].ru_inblock = 0;
    local_1b8[0].ru_maxrss = 0;
    local_1b8[0].ru_ixrss = 0;
    local_1b8[0].ru_idrss = 0;
    local_1b8[0].ru_isrss = 0;
    local_1b8[0].ru_utime.tv_sec = 0;
    local_1b8[0].ru_utime.tv_usec = 0;
    local_1b8[0].ru_stime.tv_sec = 0;
    local_1b8[0].ru_stime.tv_usec = 0;
    getrusage(RUSAGE_THREAD,local_1b8);
    lVar7 = local_1b8[0].ru_minflt;
    local_1b8[0].ru_nvcsw = 0;
    local_1b8[0].ru_nivcsw = 0;
    local_1b8[0].ru_oublock = 0;
    local_1b8[0].ru_msgsnd = 0;
    local_1b8[0].ru_msgrcv = 0;
    local_1b8[0].ru_nsignals = 0;
    local_1b8[0].ru_minflt = 0;
    local_1b8[0].ru_majflt = 0;
    local_1b8[0].ru_nswap = 0;
    local_1b8[0].ru_inblock = 0;
    local_1b8[0].ru_maxrss = 0;
    local_1b8[0].ru_ixrss = 0;
    local_1b8[0].ru_idrss = 0;
    local_1b8[0].ru_isrss = 0;
    local_1b8[0].ru_utime.tv_sec = 0;
    local_1b8[0].ru_utime.tv_usec = 0;
    local_1b8[0].ru_stime.tv_sec = 0;
    local_1b8[0].ru_stime.tv_usec = 0;
    getrusage(RUSAGE_THREAD,local_1b8);
    lVar11 = local_1b8[0].ru_minflt;
    local_1b8[0].ru_nvcsw = 0;
    local_1b8[0].ru_nivcsw = 0;
    local_1b8[0].ru_oublock = 0;
    local_1b8[0].ru_msgsnd = 0;
    local_1b8[0].ru_msgrcv = 0;
    local_1b8[0].ru_nsignals = 0;
    local_1b8[0].ru_minflt = 0;
    local_1b8[0].ru_majflt = 0;
    local_1b8[0].ru_nswap = 0;
    local_1b8[0].ru_inblock = 0;
    local_1b8[0].ru_maxrss = 0;
    local_1b8[0].ru_ixrss = 0;
    local_1b8[0].ru_idrss = 0;
    local_1b8[0].ru_isrss = 0;
    local_1b8[0].ru_utime.tv_sec = 0;
    local_1b8[0].ru_utime.tv_usec = 0;
    local_1b8[0].ru_stime.tv_sec = 0;
    local_1b8[0].ru_stime.tv_usec = 0;
    getrusage(RUSAGE_THREAD,local_1b8);
    if ((lVar12 < lVar7) && (lVar11 < local_1b8[0].ru_minflt)) {
      RD_AUTO_0 = 0x20000;
    }
  }
  return;
}


// ==== pipeline::parse::fr_done @ 00720c20 (1359 bytes)

/* WARNING: Removing unreachable block (ram,0x00720db5) */
/* pipeline[509596c7b52975b2]::parse::fr_done */

ulong __rustcall
pipeline[509596c7b52975b2]::parse::fr_done
          (long param_1,long param_2,ulong param_3,ulong param_4,long param_5)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  size_t sVar14;
  undefined **ppuVar15;
  uint *puVar16;
  undefined8 uVar17;
  long local_210;
  ulong local_208;
  long local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  long local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  long *local_1a0;
  code *local_198;
  ulong *local_190;
  code *local_188;
  long *local_180;
  code *local_178;
  
  local_210 = param_5;
  if (FR_DONE._24_4_ != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>
    ::initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<core[62e902411887be45]::sync::atomic::Atomic<bool>>>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_done::_closure_0_>::_closure_0_,_>
              (param_2,param_3);
  }
  if ((ulong)FR_DONE._16_8_ <= param_4) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_4,FR_DONE._16_8_,&PTR_s_src_parse_rs_00226400);
  }
  *(undefined1 *)(FR_DONE._8_8_ + param_4) = 1;
  if (DAT_00843b40 != 0) {
    <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::initialize::
    <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<usize>>::get_or_init<pipeline[509596c7b52975b2]::parse::fr_lag::_closure_0_>::_closure_0_,_>
              ();
  }
  uVar8 = FR_LAG;
  if ((FR_LAG != 0) && (FR_FRONT + FR_LAG <= param_4)) {
    if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_4,param_3,&PTR_s_src_parse_rs_00226418);
    }
    uVar13 = (ulong)*(uint *)(param_2 + 0x10 + param_4 * 0x18);
    if (*(ulong *)(param_1 + 0x70) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar13,*(ulong *)(param_1 + 0x70),&PTR_s_src_parse_rs_00226430);
    }
    plVar1 = (long *)(param_2 + param_4 * 0x18);
    uVar8 = plVar1[1];
    lVar9 = *(long *)(*(long *)(param_1 + 0x68) + uVar13 * 0x20);
    uVar13 = *(ulong *)(*(long *)(param_1 + 0x68) + 8 + uVar13 * 0x20);
    if (uVar8 < uVar13) {
      uVar13 = uVar8;
    }
    uVar11 = *plVar1 + lVar9 + 0xfffU & 0xfffffffffffff000;
    uVar13 = uVar13 + lVar9 & 0xfffffffffffff000;
    sVar14 = uVar13 - uVar11;
    if (uVar11 <= uVar13 && sVar14 != 0) {
      uVar7 = madvise((void *)(uVar11 + *(long *)(param_1 + 0x250)),sVar14,4);
      uVar8 = (ulong)uVar7;
      LOCK();
      FR_BYTES = FR_BYTES + sVar14;
      UNLOCK();
      LOCK();
      FR_CALLS = FR_CALLS + 1;
      UNLOCK();
    }
  }
  uVar11 = local_210 + FR_FRONT;
  uVar13 = param_3;
  if (uVar11 < param_3) {
    uVar13 = uVar11;
  }
  if (FR_FRONT < uVar13) {
    param_2 = param_2 + 0x10;
    do {
      uVar8 = FR_FRONT;
      if (FR_FRONT < uVar13) {
        uVar8 = uVar13;
      }
      uVar12 = FR_FRONT;
      while (uVar8 != uVar12) {
        if ((ulong)FR_DONE._16_8_ <= uVar12) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar12,FR_DONE._16_8_,&PTR_s_src_parse_rs_00210c60);
        }
        pcVar2 = (char *)(FR_DONE._8_8_ + uVar12);
        uVar12 = uVar12 + 1;
        if (*pcVar2 == '\0') {
          return uVar8;
        }
      }
      LOCK();
      UNLOCK();
      lVar9 = uVar13 - FR_FRONT;
      uVar8 = FR_FRONT;
      local_1d8 = uVar11;
      if (FR_FRONT <= uVar13 && lVar9 != 0) {
        puVar16 = (uint *)(param_2 + FR_FRONT * 0x18);
        uVar11 = 0;
        uVar12 = 0;
        FR_FRONT = uVar13;
        local_1e8 = param_2;
        local_1e0 = param_3;
        do {
          uVar8 = (ulong)*puVar16;
          if (*(ulong *)(param_1 + 0x70) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar8,*(ulong *)(param_1 + 0x70),&PTR_s_src_parse_rs_00226448);
          }
          lVar3 = *(long *)(*(long *)(param_1 + 0x68) + uVar8 * 0x20);
          uVar13 = *(ulong *)(*(long *)(param_1 + 0x68) + 8 + uVar8 * 0x20);
          uVar10 = *(long *)(puVar16 + -4) + lVar3;
          if (*(ulong *)(puVar16 + -2) < uVar13) {
            uVar13 = *(ulong *)(puVar16 + -2);
          }
          uVar8 = uVar12 - 1;
          if (uVar8 < uVar10) {
            uVar8 = uVar10 - uVar12;
            if (0x400000 < uVar8) goto LAB_00720e56;
          }
          else {
LAB_00720e56:
            uVar11 = uVar11 + 0xfff & 0xfffffffffffff000;
            sVar14 = (uVar12 & 0xfffffffffffff000) - uVar11;
            if (uVar11 <= (uVar12 & 0xfffffffffffff000) && sVar14 != 0) {
              uVar7 = madvise((void *)(uVar11 + *(long *)(param_1 + 0x250)),sVar14,4);
              uVar8 = (ulong)uVar7;
              LOCK();
              FR_BYTES = FR_BYTES + sVar14;
              UNLOCK();
              LOCK();
              FR_CALLS = FR_CALLS + 1;
              UNLOCK();
            }
            uVar11 = uVar10;
          }
          param_3 = local_1e0;
          param_2 = local_1e8;
          uVar12 = uVar13 + lVar3;
          puVar16 = puVar16 + 6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar11 = uVar11 + 0xfff & 0xfffffffffffff000;
        sVar14 = (uVar12 & 0xfffffffffffff000) - uVar11;
        uVar13 = FR_FRONT;
        if (uVar11 <= (uVar12 & 0xfffffffffffff000) && sVar14 != 0) {
          uVar7 = madvise((void *)(uVar11 + *(long *)(param_1 + 0x250)),sVar14,4);
          uVar8 = (ulong)uVar7;
          LOCK();
          FR_BYTES = FR_BYTES + sVar14;
          UNLOCK();
          LOCK();
          FR_CALLS = FR_CALLS + 1;
          UNLOCK();
          uVar13 = FR_FRONT;
        }
      }
      FR_FRONT = uVar13;
      if (param_3 <= local_1d8) {
        local_1b0 = 0x58;
        uStack_1af = 0x47424452465f4c;
        local_1a8 = 0;
        uVar17 = vptestmb_avx512vl(ZEXT816(0x47424452465f4c),ZEXT816(0x47424452465f4c));
        uVar6 = vptestnmb_avx512vl(ZEXT816(0x47424452465f4c),ZEXT816(0x47424452465f4c));
        auVar4 = vpmovm2d_avx512vl(uVar6);
        auVar5 = vpmovm2d_avx512vl(uVar17);
        auVar4 = vpblendd_avx2(auVar5,auVar4,0x80);
        uVar17 = vpmovd2m_avx512vl(auVar4);
        if ((char)uVar17 == -1) {
          std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_1c8,&local_1b0);
          uVar17 = local_1b8;
          ppuVar15 = local_1c0;
          lVar9 = local_1c8;
          if (local_1c8 == -2) goto LAB_00720f6f;
          if (local_1c8 != -1) {
            core[62e902411887be45]::str::converts::from_utf8(&local_1b0,local_1c0,local_1b8);
            uVar13 = CONCAT71(uStack_1af,local_1b0);
            local_200 = lVar9;
            local_1f8 = ppuVar15;
            local_1f0 = uVar17;
            local_208 = uVar13;
            uVar8 = core[62e902411887be45]::ptr::drop_glue::
                    <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
                              (&local_208);
            if (uVar13 == 0) {
              local_1d0 = FR_BYTES >> 0x14;
              local_1c8 = FR_CALLS;
              local_1b0 = SUB81(&local_1d0,0);
              uStack_1af = (undefined7)((ulong)&local_1d0 >> 8);
              local_1a8 = 0xc0;
              uStack_1a7 = 0x74bf;
              local_1a0 = &local_1c8;
              local_198 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
              local_190 = &local_208;
              local_188 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
              local_180 = &local_210;
              local_178 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
              local_208 = param_3;
              uVar8 = std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020c134,&local_1b0);
            }
            goto LAB_007210b6;
          }
        }
        else {
          ppuVar15 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_00720f6f:
          if ((1 < ((uint)ppuVar15 & 3) - 2) && (((ulong)ppuVar15 & 3) != 0)) {
            (**(code **)((long)ppuVar15 + 0x17))((long)ppuVar15 + -1);
          }
        }
        local_200 = -1;
        local_208 = 1;
        uVar8 = core[62e902411887be45]::ptr::drop_glue::
                <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
                          (&local_208);
      }
LAB_007210b6:
      uVar11 = local_210 + FR_FRONT;
      uVar13 = param_3;
      if (uVar11 < param_3) {
        uVar13 = uVar11;
      }
    } while (FR_FRONT < uVar13);
  }
  return uVar8;
}


// ==== pipeline::parse::lk_loop @ 00721180 (254 bytes)

/* pipeline[509596c7b52975b2]::parse::lk_loop */

void __rustcall
pipeline[509596c7b52975b2]::parse::lk_loop
          (undefined8 *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],long param_4,
          long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  
  auVar9._8_4_ = 0xa0a0a0a;
  auVar9._0_8_ = 0xa0a0a0a0a0a0a0a;
  auVar9._12_4_ = 0xa0a0a0a;
  auVar9._16_4_ = 0xa0a0a0a;
  auVar9._20_4_ = 0xa0a0a0a;
  auVar9._24_4_ = 0xa0a0a0a;
  auVar9._28_4_ = 0xa0a0a0a;
  auVar10._8_4_ = 0x2c2c2c2c;
  auVar10._0_8_ = 0x2c2c2c2c2c2c2c2c;
  auVar10._12_4_ = 0x2c2c2c2c;
  auVar10._16_4_ = 0x2c2c2c2c;
  auVar10._20_4_ = 0x2c2c2c2c;
  auVar10._24_4_ = 0x2c2c2c2c;
  auVar10._28_4_ = 0x2c2c2c2c;
  param_5 = param_5 + -0x40;
  while( true ) {
    if (param_3 < param_2) {
      uVar7 = 0;
      goto LAB_0072126f;
    }
    auVar2 = *param_2;
    auVar3 = vpcmpeqb_avx2(auVar9,auVar2);
    uVar5 = 0;
    for (uVar4 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f; (uVar4 & 1) == 0;
        uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    auVar3 = vpcmpeqb_avx2(auVar10,auVar2);
    iVar6 = 0;
    for (uVar4 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f; (uVar4 & 1) == 0;
        uVar4 = uVar4 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    uVar8 = (ulong)(uVar5 * 0x800 + iVar6 * 0x80);
    if ((*(long *)(LKP + uVar8 + 0x40) < 0) ||
       ((*(undefined1 (*) [32])(LKP + uVar8 + 0x20) & (auVar2 ^ *(undefined1 (*) [32])(LKP + uVar8))
        ) != (undefined1  [32])0x0)) break;
    uVar7 = *(undefined8 *)(*param_2 + *(long *)(LKP + uVar8 + 0x48));
    *(undefined8 *)(param_4 + 0x200 + param_5 * 8) =
         *(undefined8 *)(*param_2 + *(long *)(LKP + uVar8 + 0x40));
    *(undefined8 *)(param_4 + 0x400 + param_5 * 8) = uVar7;
    auVar1 = *(undefined1 (*) [16])(LKP + uVar8 + 0x50);
    *(long *)(param_4 + 0x600 + param_5 * 8) = auVar1._0_8_;
    uVar7 = vmovhps_avx(auVar1);
    *(undefined8 *)(param_4 + 0x800 + param_5 * 8) = uVar7;
    *(undefined1 (**) [32])(param_4 + 0xa00 + param_5 * 8) = param_2;
    param_2 = (undefined1 (*) [32])(*param_2 + (ulong)uVar5 + 1);
    param_5 = param_5 + 1;
    if (param_5 == 0) {
      uVar7 = 2;
LAB_0072126f:
      *param_1 = uVar7;
      param_1[1] = param_2;
      param_1[2] = param_5 + 0x40;
      return;
    }
  }
  uVar7 = 1;
  goto LAB_0072126f;
}


// ==== pipeline::parse::lk_batch @ 007212a0 (2196 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::parse::lk_batch */

void __rustcall
pipeline[509596c7b52975b2]::parse::lk_batch
          (long *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [32];
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  byte bVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
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
  undefined1 in_ZMM25 [64];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  if (param_5 != 0) {
    lVar39 = param_1[4];
    local_68 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_60 = 0;
    auVar44 = vpbroadcastq_avx512vl();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(*param_1 + 0x240);
    auVar45 = vpbroadcastq_avx512vl(auVar2);
    uVar34 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = _s___00201e90;
    auVar46 = vpbroadcastq_avx512vl(auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_00201aa8;
    auVar47 = vpbroadcastq_avx512vl(auVar4);
    auVar48 = vpbroadcastd_avx512vl(ZEXT416(DAT_002064ec));
    auVar49 = vpbroadcastd_avx512vl(ZEXT416(DAT_002064e8));
    auVar50 = vpbroadcastd_avx512vl(ZEXT416(DAT_002064dc));
    auVar68._4_4_ = DAT_00206504;
    auVar68._0_4_ = DAT_00206504;
    auVar68._8_4_ = DAT_00206504;
    auVar68._12_4_ = DAT_00206504;
    auVar68._16_4_ = DAT_00206504;
    auVar68._20_4_ = DAT_00206504;
    auVar68._24_4_ = DAT_00206504;
    auVar68._28_4_ = DAT_00206504;
    auVar69._4_4_ = DAT_00206534;
    auVar69._0_4_ = DAT_00206534;
    auVar69._8_4_ = DAT_00206534;
    auVar69._12_4_ = DAT_00206534;
    auVar69._16_4_ = DAT_00206534;
    auVar69._20_4_ = DAT_00206534;
    auVar69._24_4_ = DAT_00206534;
    auVar69._28_4_ = DAT_00206534;
    auVar70._2_2_ = DAT_00205b80;
    auVar70._0_2_ = DAT_00205b80;
    auVar70._4_2_ = DAT_00205b80;
    auVar70._6_2_ = DAT_00205b80;
    auVar70._8_2_ = DAT_00205b80;
    auVar70._10_2_ = DAT_00205b80;
    auVar70._12_2_ = DAT_00205b80;
    auVar70._14_2_ = DAT_00205b80;
    auVar70._16_2_ = DAT_00205b80;
    auVar70._18_2_ = DAT_00205b80;
    auVar70._20_2_ = DAT_00205b80;
    auVar70._22_2_ = DAT_00205b80;
    auVar70._24_2_ = DAT_00205b80;
    auVar70._26_2_ = DAT_00205b80;
    auVar70._28_2_ = DAT_00205b80;
    auVar70._30_2_ = DAT_00205b80;
    auVar71._4_4_ = DAT_00206424;
    auVar71._0_4_ = DAT_00206424;
    auVar71._8_4_ = DAT_00206424;
    auVar71._12_4_ = DAT_00206424;
    auVar71._16_4_ = DAT_00206424;
    auVar71._20_4_ = DAT_00206424;
    auVar71._24_4_ = DAT_00206424;
    auVar71._28_4_ = DAT_00206424;
    auVar72._8_8_ = DAT_00201df8;
    auVar72._0_8_ = DAT_00201df8;
    auVar72._16_8_ = DAT_00201df8;
    auVar72._24_8_ = DAT_00201df8;
    auVar73._8_8_ = DAT_00201bc0;
    auVar73._0_8_ = DAT_00201bc0;
    auVar73._16_8_ = DAT_00201bc0;
    auVar73._24_8_ = DAT_00201bc0;
    auVar74._8_8_ = DAT_00201ac0;
    auVar74._0_8_ = DAT_00201ac0;
    auVar74._16_8_ = DAT_00201ac0;
    auVar74._24_8_ = DAT_00201ac0;
    auVar75._8_8_ = DAT_00201d08;
    auVar75._0_8_ = DAT_00201d08;
    auVar75._16_8_ = DAT_00201d08;
    auVar75._24_8_ = DAT_00201d08;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = DAT_00201c50;
    auVar51 = vpbroadcastq_avx512vl(auVar5);
    auVar64._8_8_ = DAT_00201b90;
    auVar64._0_8_ = DAT_00201b90;
    auVar64._16_8_ = DAT_00201b90;
    auVar64._24_8_ = DAT_00201b90;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_00201b28;
    auVar52 = vpbroadcastq_avx512vl(auVar6);
    auVar67._8_8_ = DAT_00201e40;
    auVar67._0_8_ = DAT_00201e40;
    auVar67._16_8_ = DAT_00201e40;
    auVar67._24_8_ = DAT_00201e40;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_00201ca0;
    auVar53 = vpbroadcastq_avx512vl(auVar7);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = DAT_00201d58;
    auVar54 = vpbroadcastq_avx512vl(auVar8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = DAT_00201c58;
    auVar55 = vpbroadcastq_avx512vl(auVar9);
    auVar56 = in_ZMM25._0_32_;
    auVar56 = vpternlogd_avx512vl(auVar56,auVar56,auVar56,0xff);
    auVar57 = vmovdqa64_avx512vl(_DAT_00203000);
    lVar38 = 0;
    local_58 = uStack_48;
    uStack_50 = uStack_40;
    do {
      auVar62 = *(undefined1 (*) [32])(param_4 + 0x400 + uVar34 * 8);
      auVar65 = vpsllq_avx2(auVar62,3);
      auVar58 = vpsubq_avx512vl(auVar46,auVar65);
      auVar65 = vpaddq_avx512vl(auVar65,auVar56);
      auVar59 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(param_4 + uVar34 * 8));
      auVar60 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(param_4 + 0x200 + uVar34 * 8));
      auVar65 = vpsrlvq_avx512vl(auVar47,auVar65);
      auVar58 = vpsllvq_avx512vl(auVar59,auVar58);
      auVar58 = vpor_avx2(auVar58,auVar65);
      auVar65 = vpaddb_avx512vl(auVar58,auVar48);
      uVar16 = vpcmpub_avx512vl(auVar65,auVar49,1);
      auVar61 = vpaddb_avx512vl(auVar58,auVar50);
      uVar41 = vpcmpub_avx512vl(auVar61,auVar68,1);
      auVar61 = vpmovm2b_avx512vl((ulong)~((uint)uVar16 | (uint)uVar41));
      auVar58 = vpaddb_avx512vl(auVar58,auVar69);
      bVar13 = (bool)((byte)uVar41 & 1);
      auVar66[0] = bVar13 * auVar58[0] | !bVar13 * auVar65[0];
      bVar13 = (bool)((byte)(uVar41 >> 1) & 1);
      auVar66[1] = bVar13 * auVar58[1] | !bVar13 * auVar65[1];
      bVar13 = (bool)((byte)(uVar41 >> 2) & 1);
      auVar66[2] = bVar13 * auVar58[2] | !bVar13 * auVar65[2];
      bVar13 = (bool)((byte)(uVar41 >> 3) & 1);
      auVar66[3] = bVar13 * auVar58[3] | !bVar13 * auVar65[3];
      bVar13 = (bool)((byte)(uVar41 >> 4) & 1);
      auVar66[4] = bVar13 * auVar58[4] | !bVar13 * auVar65[4];
      bVar13 = (bool)((byte)(uVar41 >> 5) & 1);
      auVar66[5] = bVar13 * auVar58[5] | !bVar13 * auVar65[5];
      bVar13 = (bool)((byte)(uVar41 >> 6) & 1);
      auVar66[6] = bVar13 * auVar58[6] | !bVar13 * auVar65[6];
      bVar13 = (bool)((byte)(uVar41 >> 7) & 1);
      auVar66[7] = bVar13 * auVar58[7] | !bVar13 * auVar65[7];
      bVar13 = (bool)((byte)(uVar41 >> 8) & 1);
      auVar66[8] = bVar13 * auVar58[8] | !bVar13 * auVar65[8];
      bVar13 = (bool)((byte)(uVar41 >> 9) & 1);
      auVar66[9] = bVar13 * auVar58[9] | !bVar13 * auVar65[9];
      bVar13 = (bool)((byte)(uVar41 >> 10) & 1);
      auVar66[10] = bVar13 * auVar58[10] | !bVar13 * auVar65[10];
      bVar13 = (bool)((byte)(uVar41 >> 0xb) & 1);
      auVar66[0xb] = bVar13 * auVar58[0xb] | !bVar13 * auVar65[0xb];
      bVar13 = (bool)((byte)(uVar41 >> 0xc) & 1);
      auVar66[0xc] = bVar13 * auVar58[0xc] | !bVar13 * auVar65[0xc];
      bVar13 = (bool)((byte)(uVar41 >> 0xd) & 1);
      auVar66[0xd] = bVar13 * auVar58[0xd] | !bVar13 * auVar65[0xd];
      bVar13 = (bool)((byte)(uVar41 >> 0xe) & 1);
      auVar66[0xe] = bVar13 * auVar58[0xe] | !bVar13 * auVar65[0xe];
      bVar13 = (bool)((byte)(uVar41 >> 0xf) & 1);
      auVar66[0xf] = bVar13 * auVar58[0xf] | !bVar13 * auVar65[0xf];
      bVar13 = (bool)((byte)(uVar41 >> 0x10) & 1);
      auVar66[0x10] = bVar13 * auVar58[0x10] | !bVar13 * auVar65[0x10];
      bVar13 = (bool)((byte)(uVar41 >> 0x11) & 1);
      auVar66[0x11] = bVar13 * auVar58[0x11] | !bVar13 * auVar65[0x11];
      bVar13 = (bool)((byte)(uVar41 >> 0x12) & 1);
      auVar66[0x12] = bVar13 * auVar58[0x12] | !bVar13 * auVar65[0x12];
      bVar13 = (bool)((byte)(uVar41 >> 0x13) & 1);
      auVar66[0x13] = bVar13 * auVar58[0x13] | !bVar13 * auVar65[0x13];
      bVar13 = (bool)((byte)(uVar41 >> 0x14) & 1);
      auVar66[0x14] = bVar13 * auVar58[0x14] | !bVar13 * auVar65[0x14];
      bVar13 = (bool)((byte)(uVar41 >> 0x15) & 1);
      auVar66[0x15] = bVar13 * auVar58[0x15] | !bVar13 * auVar65[0x15];
      bVar13 = (bool)((byte)(uVar41 >> 0x16) & 1);
      auVar66[0x16] = bVar13 * auVar58[0x16] | !bVar13 * auVar65[0x16];
      bVar13 = (bool)((byte)(uVar41 >> 0x17) & 1);
      auVar66[0x17] = bVar13 * auVar58[0x17] | !bVar13 * auVar65[0x17];
      bVar13 = (bool)((byte)(uVar41 >> 0x18) & 1);
      auVar66[0x18] = bVar13 * auVar58[0x18] | !bVar13 * auVar65[0x18];
      bVar13 = (bool)((byte)(uVar41 >> 0x19) & 1);
      auVar66[0x19] = bVar13 * auVar58[0x19] | !bVar13 * auVar65[0x19];
      bVar13 = (bool)((byte)(uVar41 >> 0x1a) & 1);
      auVar66[0x1a] = bVar13 * auVar58[0x1a] | !bVar13 * auVar65[0x1a];
      bVar13 = (bool)((byte)(uVar41 >> 0x1b) & 1);
      auVar66[0x1b] = bVar13 * auVar58[0x1b] | !bVar13 * auVar65[0x1b];
      bVar13 = (bool)((byte)(uVar41 >> 0x1c) & 1);
      auVar66[0x1c] = bVar13 * auVar58[0x1c] | !bVar13 * auVar65[0x1c];
      bVar13 = (bool)((byte)(uVar41 >> 0x1d) & 1);
      auVar66._30_2_ = auVar58._30_2_;
      auVar66[0x1d] = bVar13 * auVar58[0x1d] | !bVar13 * auVar65[0x1d];
      auVar58 = vpmaddubsw_avx2(auVar66,auVar70);
      auVar58 = vpmaddwd_avx2(auVar71,auVar58);
      auVar65 = vpmuldq_avx2(auVar58,auVar72);
      auVar66 = vpsrlq_avx2(auVar58,0x20);
      auVar58._0_8_ = auVar65._0_8_ + auVar66._0_8_;
      auVar58._8_8_ = auVar65._8_8_ + auVar66._8_8_;
      auVar58._16_8_ = auVar65._16_8_ + auVar66._16_8_;
      auVar58._24_8_ = auVar65._24_8_ + auVar66._24_8_;
      uVar16 = vpcmpeqq_avx512vl(auVar62,auVar73);
      auVar62 = vpandq_avx512vl(auVar59,auVar74);
      uVar18 = vpcmpq_avx512vl(auVar62,auVar75,4);
      uVar21 = vptestnmq_avx512vl(auVar61,auVar61);
      uVar14 = vpcmpgtq_avx512vl(auVar51,auVar58);
      auVar62 = *(undefined1 (*) [32])(param_4 + 0x600 + uVar34 * 8);
      auVar61 = vpsllq_avx2(auVar62,3);
      auVar65 = vpsubq_avx512vl(auVar46,auVar61);
      auVar61 = vpaddq_avx512vl(auVar61,auVar56);
      auVar61 = vpsrlvq_avx512vl(auVar47,auVar61);
      auVar65 = vpsllvq_avx512vl(auVar60,auVar65);
      auVar65 = vporq_avx512vl(auVar65,auVar61);
      auVar59 = vpaddb_avx512vl(auVar65,auVar48);
      uVar17 = vpcmpub_avx512vl(auVar59,auVar49,1);
      auVar61 = vpaddb_avx512vl(auVar65,auVar50);
      uVar41 = vpcmpub_avx512vl(auVar61,auVar68,1);
      auVar61 = vpmovm2b_avx512vl((ulong)~((uint)uVar17 | (uint)uVar41));
      auVar65 = vpaddb_avx512vl(auVar65,auVar69);
      bVar13 = (bool)((byte)uVar41 & 1);
      auVar63[0] = bVar13 * auVar65[0] | !bVar13 * auVar59[0];
      bVar13 = (bool)((byte)(uVar41 >> 1) & 1);
      auVar63[1] = bVar13 * auVar65[1] | !bVar13 * auVar59[1];
      bVar13 = (bool)((byte)(uVar41 >> 2) & 1);
      auVar63[2] = bVar13 * auVar65[2] | !bVar13 * auVar59[2];
      bVar13 = (bool)((byte)(uVar41 >> 3) & 1);
      auVar63[3] = bVar13 * auVar65[3] | !bVar13 * auVar59[3];
      bVar13 = (bool)((byte)(uVar41 >> 4) & 1);
      auVar63[4] = bVar13 * auVar65[4] | !bVar13 * auVar59[4];
      bVar13 = (bool)((byte)(uVar41 >> 5) & 1);
      auVar63[5] = bVar13 * auVar65[5] | !bVar13 * auVar59[5];
      bVar13 = (bool)((byte)(uVar41 >> 6) & 1);
      auVar63[6] = bVar13 * auVar65[6] | !bVar13 * auVar59[6];
      bVar13 = (bool)((byte)(uVar41 >> 7) & 1);
      auVar63[7] = bVar13 * auVar65[7] | !bVar13 * auVar59[7];
      bVar13 = (bool)((byte)(uVar41 >> 8) & 1);
      auVar63[8] = bVar13 * auVar65[8] | !bVar13 * auVar59[8];
      bVar13 = (bool)((byte)(uVar41 >> 9) & 1);
      auVar63[9] = bVar13 * auVar65[9] | !bVar13 * auVar59[9];
      bVar13 = (bool)((byte)(uVar41 >> 10) & 1);
      auVar63[10] = bVar13 * auVar65[10] | !bVar13 * auVar59[10];
      bVar13 = (bool)((byte)(uVar41 >> 0xb) & 1);
      auVar63[0xb] = bVar13 * auVar65[0xb] | !bVar13 * auVar59[0xb];
      bVar13 = (bool)((byte)(uVar41 >> 0xc) & 1);
      auVar63[0xc] = bVar13 * auVar65[0xc] | !bVar13 * auVar59[0xc];
      bVar13 = (bool)((byte)(uVar41 >> 0xd) & 1);
      auVar63[0xd] = bVar13 * auVar65[0xd] | !bVar13 * auVar59[0xd];
      bVar13 = (bool)((byte)(uVar41 >> 0xe) & 1);
      auVar63[0xe] = bVar13 * auVar65[0xe] | !bVar13 * auVar59[0xe];
      bVar13 = (bool)((byte)(uVar41 >> 0xf) & 1);
      auVar63[0xf] = bVar13 * auVar65[0xf] | !bVar13 * auVar59[0xf];
      bVar13 = (bool)((byte)(uVar41 >> 0x10) & 1);
      auVar63[0x10] = bVar13 * auVar65[0x10] | !bVar13 * auVar59[0x10];
      bVar13 = (bool)((byte)(uVar41 >> 0x11) & 1);
      auVar63[0x11] = bVar13 * auVar65[0x11] | !bVar13 * auVar59[0x11];
      bVar13 = (bool)((byte)(uVar41 >> 0x12) & 1);
      auVar63[0x12] = bVar13 * auVar65[0x12] | !bVar13 * auVar59[0x12];
      bVar13 = (bool)((byte)(uVar41 >> 0x13) & 1);
      auVar63[0x13] = bVar13 * auVar65[0x13] | !bVar13 * auVar59[0x13];
      bVar13 = (bool)((byte)(uVar41 >> 0x14) & 1);
      auVar63[0x14] = bVar13 * auVar65[0x14] | !bVar13 * auVar59[0x14];
      bVar13 = (bool)((byte)(uVar41 >> 0x15) & 1);
      auVar63[0x15] = bVar13 * auVar65[0x15] | !bVar13 * auVar59[0x15];
      bVar13 = (bool)((byte)(uVar41 >> 0x16) & 1);
      auVar63[0x16] = bVar13 * auVar65[0x16] | !bVar13 * auVar59[0x16];
      bVar13 = (bool)((byte)(uVar41 >> 0x17) & 1);
      auVar63[0x17] = bVar13 * auVar65[0x17] | !bVar13 * auVar59[0x17];
      bVar13 = (bool)((byte)(uVar41 >> 0x18) & 1);
      auVar63[0x18] = bVar13 * auVar65[0x18] | !bVar13 * auVar59[0x18];
      bVar13 = (bool)((byte)(uVar41 >> 0x19) & 1);
      auVar63[0x19] = bVar13 * auVar65[0x19] | !bVar13 * auVar59[0x19];
      bVar13 = (bool)((byte)(uVar41 >> 0x1a) & 1);
      auVar63[0x1a] = bVar13 * auVar65[0x1a] | !bVar13 * auVar59[0x1a];
      bVar13 = (bool)((byte)(uVar41 >> 0x1b) & 1);
      auVar63[0x1b] = bVar13 * auVar65[0x1b] | !bVar13 * auVar59[0x1b];
      bVar13 = (bool)((byte)(uVar41 >> 0x1c) & 1);
      auVar63[0x1c] = bVar13 * auVar65[0x1c] | !bVar13 * auVar59[0x1c];
      bVar13 = (bool)((byte)(uVar41 >> 0x1d) & 1);
      auVar63._30_2_ = auVar65._30_2_;
      auVar63[0x1d] = bVar13 * auVar65[0x1d] | !bVar13 * auVar59[0x1d];
      auVar65 = vpmaddubsw_avx512vl(auVar63,auVar70);
      auVar65 = vpmaddwd_avx2(auVar71,auVar65);
      auVar59 = vpmuldq_avx512vl(auVar65,auVar72);
      auVar65 = vpsrlq_avx2(auVar65,0x20);
      auVar65 = vpaddq_avx512vl(auVar59,auVar65);
      uVar17 = vpcmpeqq_avx512vl(auVar62,auVar73);
      auVar62 = vpandq_avx512vl(auVar60,auVar74);
      uVar19 = vpcmpq_avx512vl(auVar62,auVar75,4);
      uVar22 = vptestnmq_avx512vl(auVar61,auVar61);
      uVar15 = vpcmpgtq_avx512vl(auVar51,auVar65);
      bVar20 = ((byte)uVar16 & 0xf | (byte)uVar18 & 0xf) & (byte)uVar21 & (byte)uVar14 &
               ((byte)uVar17 & 0xf | (byte)uVar19 & 0xf) & (byte)uVar22 & (byte)uVar15;
      *(undefined1 (*) [32])(param_4 + uVar34 * 8) = auVar58;
      *(undefined1 (*) [32])(param_4 + 0x200 + uVar34 * 8) = auVar65;
      auVar62 = vpmullq_avx512vl(auVar58,auVar64);
      auVar62 = vpandq_avx512vl(auVar62,auVar52);
      auVar61 = vpsrlq_avx512vl(auVar62,0x11);
      auVar59 = vpsrlq_avx512vl(auVar62,0x22);
      auVar62 = vpternlogq_avx512vl(auVar59 ^ auVar61,auVar62,auVar44,0x96);
      auVar61 = vpmullq_avx512vl(auVar62,auVar67);
      auVar62 = vpmullq_avx512vl(auVar65,auVar64);
      auVar62 = vpandq_avx512vl(auVar62,auVar52);
      auVar59 = vpsrlq_avx512vl(auVar62,0x11);
      auVar60 = vpsrlq_avx512vl(auVar62,0x22);
      auVar66 = vpsrlq_avx512vl(auVar61,9);
      auVar66 = vpandq_avx512vl(auVar66,auVar53);
      auVar62 = vpternlogq_avx512vl(auVar60 ^ auVar59,auVar62,auVar44,0x96);
      auVar59 = vpandq_avx512vl(auVar61,auVar54);
      auVar62 = vpmullq_avx512vl(auVar62,auVar67);
      uVar16 = vpcmpq_avx512vl(auVar58,auVar65,4);
      bVar27 = bVar20 & (byte)uVar16;
      auVar58 = vpsrlq_avx2(auVar62,9);
      auVar58 = vpandq_avx512vl(auVar58,auVar53);
      auVar60 = vpandq_avx512vl(auVar62,auVar54);
      auVar62 = vpmaxuq_avx512vl(auVar66,auVar58);
      uVar14 = vpcmpuq_avx512vl(auVar62,auVar45,1);
      auVar65 = vpmaxsq_avx512vl(auVar59,auVar60);
      auVar62._8_8_ = DAT_00201d98;
      auVar62._0_8_ = DAT_00201d98;
      auVar62._16_8_ = DAT_00201d98;
      auVar62._24_8_ = DAT_00201d98;
      uVar17 = vpcmpq_avx512vl(auVar65,auVar62,1);
      uVar16 = vpcmpeqq_avx512vl(auVar66,auVar58);
      auVar62 = vpsllq_avx2(auVar61,0x22);
      auVar58 = vpsllq_avx2(auVar59,4);
      auVar65._8_8_ = DAT_00201d20;
      auVar65._0_8_ = DAT_00201d20;
      auVar65._16_8_ = DAT_00201d20;
      auVar65._24_8_ = DAT_00201d20;
      auVar62 = vpternlogq_avx512vl(auVar58,auVar62,auVar65,0xf8);
      auVar62 = vpternlogq_avx512vl(auVar62,auVar60,auVar55,0xfe);
      auVar58 = vpexpandq_avx512vl(auVar62);
      puVar31 = (undefined8 *)(lVar39 + lVar38 * 8);
      *puVar31 = auVar58._0_8_;
      puVar31[1] = 0;
      puVar31[2] = auVar58._16_8_;
      puVar31[3] = 0;
      auVar62 = vpermt2q_avx512vl(auVar62,auVar57,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      *(undefined1 (*) [32])(lVar39 + 0x20 + lVar38 * 8) = auVar62;
      auVar62 = vpsrlq_avx512vl(auVar66,0xc);
      *(undefined1 (*) [32])(lVar39 + 0x400 + uVar34 * 8) = auVar62;
      bVar43 = (byte)uVar14 & 0xf & (byte)uVar17 & (byte)uVar16 & bVar27;
      uVar37 = uVar34 >> 2;
      *(byte *)((long)&local_68 + uVar37) = bVar43;
      *(byte *)((long)&local_58 + uVar37) = ~bVar43 & bVar27;
      uVar23 = uStack_50;
      uVar41 = local_58;
      *(byte *)((long)&uStack_48 + uVar37) = bVar20;
      uVar34 = uVar34 + 4;
      lVar38 = lVar38 + 8;
    } while (uVar34 < param_5);
    uVar34 = ~(-1L << (param_5 & 0x3f));
    if (0x3f < param_5) {
      uVar34 = 0xffffffffffffffff;
    }
    uVar37 = 0x8000000000000000;
    uVar35 = 0;
    do {
      if ((uVar37 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar35 = uVar35 << 1 | (ulong)((uVar37 & 0xf0f0f0f0f0f0f0f & local_68) != 0);
      }
      uVar37 = uVar37 >> 1;
    } while (uVar37 != 0);
    uVar37 = 0x8000000000000000;
    uVar24 = 0;
    do {
      if ((uVar37 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar24 = uVar24 << 1 | (ulong)((uVar37 & 0xf0f0f0f0f0f0f0f & local_60) != 0);
      }
      uVar37 = uVar37 >> 1;
    } while (uVar37 != 0);
    uVar37 = 0x8000000000000000;
    uVar25 = 0;
    do {
      if ((uVar37 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar25 = uVar25 << 1 | (ulong)((uVar37 & 0xf0f0f0f0f0f0f0f & uStack_48) != 0);
      }
      uVar37 = uVar37 >> 1;
    } while (uVar37 != 0);
    uVar37 = 0x8000000000000000;
    uVar26 = 0;
    do {
      if ((uVar37 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar26 = uVar26 << 1 | (ulong)((uVar37 & 0xf0f0f0f0f0f0f0f & uStack_40) != 0);
      }
      uVar37 = uVar37 >> 1;
    } while (uVar37 != 0);
    uVar37 = (uVar26 << 0x20 | uVar25) & uVar34;
    lVar38 = param_1[1];
    uVar35 = (uVar24 << 0x20 | uVar35) & uVar34;
    if (uVar35 != 0) {
      lVar36 = lVar38 + 0x140;
      lVar10 = *(long *)(lVar38 + 0x160);
      lVar11 = *(long *)(lVar38 + 0x1d8);
      lVar12 = *(long *)(lVar38 + 0x200);
      lVar40 = 0;
      do {
        lVar42 = 0;
        for (uVar24 = uVar35; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
          lVar42 = lVar42 + 1;
        }
        lVar32 = *(long *)(lVar39 + 0x400 + lVar42 * 8);
        uVar28 = *(uint *)(lVar10 + lVar32 * 4);
        if ((char)uVar28 == '\0') {
          <pipeline[509596c7b52975b2]::parse::Part>::flush_full(lVar36,lVar11,lVar40);
          uVar28 = *(uint *)(lVar10 + lVar32 * 4);
          lVar40 = 0;
        }
        uVar35 = uVar35 - 1 & uVar35;
        puVar31 = (undefined8 *)(lVar39 + (ulong)(uint)((int)lVar42 << 4));
        uVar16 = puVar31[1];
        puVar1 = (undefined8 *)(lVar12 + (ulong)uVar28);
        *puVar1 = *puVar31;
        puVar1[1] = uVar16;
        uVar29 = uVar28 + 0x10 & 0xff;
        *(uint *)(lVar10 + lVar32 * 4) = uVar28 & 0xffffff00 | uVar29;
        *(int *)(lVar11 + lVar40 * 4) = (int)lVar32;
        lVar40 = lVar40 + (ulong)(uVar29 == 0);
      } while (uVar35 != 0);
      lVar39 = *(long *)(lVar38 + 0x160);
      lVar10 = *(long *)(lVar38 + 0x178);
      lVar12 = *(long *)(lVar38 + 0x200);
      if (NT_0 == '\0') {
        if (lVar40 != 0) {
          lVar42 = 0;
          do {
            uVar28 = *(uint *)(lVar11 + lVar42 * 4);
            uVar35 = (ulong)uVar28;
            puVar31 = *(undefined8 **)(lVar10 + uVar35 * 8);
            if (((uint)puVar31 & 0xfff) == 0xfc0) {
              puVar31 = (undefined8 *)
                        <pipeline[509596c7b52975b2]::parse::Part>::new_chunk(lVar36,uVar35,puVar31);
            }
            lVar33 = uVar35 * 0x100;
            lVar32 = lVar33 + lVar12;
            uVar16 = *(undefined8 *)(lVar32 + 0x48);
            uVar17 = *(undefined8 *)(lVar32 + 0x50);
            uVar14 = *(undefined8 *)(lVar32 + 0x58);
            uVar15 = *(undefined8 *)(lVar32 + 0x60);
            uVar18 = *(undefined8 *)(lVar32 + 0x68);
            uVar19 = *(undefined8 *)(lVar32 + 0x70);
            uVar21 = *(undefined8 *)(lVar32 + 0x78);
            *puVar31 = *(undefined8 *)(lVar32 + 0x40);
            puVar31[1] = uVar16;
            puVar31[2] = uVar17;
            puVar31[3] = uVar14;
            puVar31[4] = uVar15;
            puVar31[5] = uVar18;
            puVar31[6] = uVar19;
            puVar31[7] = uVar21;
            puVar1 = (undefined8 *)(lVar12 + 0x80 + lVar33);
            uVar16 = puVar1[1];
            uVar17 = puVar1[2];
            uVar14 = puVar1[3];
            uVar15 = puVar1[4];
            uVar18 = puVar1[5];
            uVar19 = puVar1[6];
            uVar21 = puVar1[7];
            puVar31[8] = *puVar1;
            puVar31[9] = uVar16;
            puVar31[10] = uVar17;
            puVar31[0xb] = uVar14;
            puVar31[0xc] = uVar15;
            puVar31[0xd] = uVar18;
            puVar31[0xe] = uVar19;
            puVar31[0xf] = uVar21;
            lVar33 = lVar33 + lVar12;
            uVar16 = *(undefined8 *)(lVar33 + 200);
            uVar17 = *(undefined8 *)(lVar33 + 0xd0);
            uVar14 = *(undefined8 *)(lVar33 + 0xd8);
            uVar15 = *(undefined8 *)(lVar33 + 0xe0);
            uVar18 = *(undefined8 *)(lVar33 + 0xe8);
            uVar19 = *(undefined8 *)(lVar33 + 0xf0);
            uVar21 = *(undefined8 *)(lVar33 + 0xf8);
            puVar31[0x10] = *(undefined8 *)(lVar33 + 0xc0);
            puVar31[0x11] = uVar16;
            puVar31[0x12] = uVar17;
            puVar31[0x13] = uVar14;
            puVar31[0x14] = uVar15;
            puVar31[0x15] = uVar18;
            puVar31[0x16] = uVar19;
            puVar31[0x17] = uVar21;
            *(undefined8 **)(lVar10 + uVar35 * 8) = puVar31 + 0x18;
            *(uint *)(lVar39 + uVar35 * 4) = uVar28 << 8 | 0x40;
            lVar42 = lVar42 + 1;
          } while (lVar40 != lVar42);
        }
      }
      else if (lVar40 != 0) {
        lVar42 = 0;
        do {
          uVar28 = *(uint *)(lVar11 + lVar42 * 4);
          uVar35 = (ulong)uVar28;
          pauVar30 = *(undefined1 (**) [32])(lVar10 + uVar35 * 8);
          if (((uint)pauVar30 & 0xfff) == 0xfc0) {
            pauVar30 = (undefined1 (*) [32])
                       <pipeline[509596c7b52975b2]::parse::Part>::new_chunk(lVar36,uVar35,pauVar30);
          }
          lVar32 = uVar35 * 0x100 + lVar12;
          auVar44 = *(undefined1 (*) [32])(lVar32 + 0x60);
          auVar45 = vmovntdq_avx(*(undefined1 (*) [32])(lVar32 + 0x40));
          *pauVar30 = auVar45;
          auVar44 = vmovntdq_avx(auVar44);
          pauVar30[1] = auVar44;
          auVar44 = *(undefined1 (*) [32])(lVar32 + 0xa0);
          auVar45 = vmovntdq_avx(*(undefined1 (*) [32])(lVar32 + 0x80));
          pauVar30[2] = auVar45;
          auVar44 = vmovntdq_avx(auVar44);
          pauVar30[3] = auVar44;
          auVar44 = *(undefined1 (*) [32])(lVar32 + 0xe0);
          auVar45 = vmovntdq_avx(*(undefined1 (*) [32])(lVar32 + 0xc0));
          pauVar30[4] = auVar45;
          auVar44 = vmovntdq_avx(auVar44);
          pauVar30[5] = auVar44;
          *(undefined1 (**) [32])(lVar10 + uVar35 * 8) = pauVar30 + 6;
          *(uint *)(lVar39 + uVar35 * 4) = uVar28 << 8 | 0x40;
          lVar42 = lVar42 + 1;
        } while (lVar40 != lVar42);
      }
    }
    *(long *)(lVar38 + 0x738) = *(long *)(lVar38 + 0x738) + POPCOUNT(uVar37);
    if (uVar37 != uVar34) {
      uVar37 = uVar37 ^ uVar34;
      do {
        lVar39 = 0;
        for (uVar35 = uVar37; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
          lVar39 = lVar39 + 1;
        }
        uVar37 = uVar37 - 1 & uVar37;
        lVar39 = *(long *)(param_4 + 0x800 + lVar39 * 8);
        uVar35 = lVar39 - param_2;
        if (param_3 < uVar35) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar35,param_3,param_3,&PTR_s_src_parse_rs_002264e0);
        }
        if (uVar35 == param_3) {
LAB_00721b1f:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::option::unwrap_failed(&PTR_s_src_parse_rs_002264c8);
        }
        lVar36 = 0;
        while (*(char *)(param_2 + uVar35 + lVar36) != '\n') {
          lVar36 = lVar36 + 1;
          if ((param_3 + param_2) - lVar39 == lVar36) goto LAB_00721b1f;
        }
        link_slow(param_1,param_2,param_3);
      } while (uVar37 != 0);
    }
    uVar37 = 0x8000000000000000;
    uVar35 = 0;
    do {
      if ((uVar37 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar35 = uVar35 << 1 | (ulong)((uVar37 & 0xf0f0f0f0f0f0f0f & uVar23) != 0);
      }
      uVar37 = uVar37 >> 1;
    } while (uVar37 != 0);
    uVar23 = 0x8000000000000000;
    uVar37 = 0;
    do {
      if ((uVar23 & 0xf0f0f0f0f0f0f0f) != 0) {
        uVar37 = uVar37 << 1 | (ulong)((uVar23 & 0xf0f0f0f0f0f0f0f & uVar41) != 0);
      }
      uVar23 = uVar23 >> 1;
    } while (uVar23 != 0);
    uVar34 = (uVar35 << 0x20 | uVar37) & uVar34;
    if (uVar34 != 0) {
      lVar39 = *(long *)(lVar38 + 0x2b8);
      uVar41 = lVar39 << 4 | 8;
      do {
        lVar36 = 0;
        for (uVar23 = uVar34; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
          lVar36 = lVar36 + 1;
        }
        uVar16 = *(undefined8 *)(param_4 + lVar36 * 8);
        uVar17 = *(undefined8 *)(param_4 + 0x200 + lVar36 * 8);
        if (lVar39 == *(long *)(lVar38 + 0x2a8)) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(lVar38 + 0x2a8);
        }
        uVar34 = uVar34 - 1 & uVar34;
        lVar36 = *(long *)(lVar38 + 0x2b0);
        *(undefined8 *)(lVar36 + -8 + uVar41) = uVar16;
        *(undefined8 *)(lVar36 + uVar41) = uVar17;
        lVar39 = lVar39 + 1;
        *(long *)(lVar38 + 0x2b8) = lVar39;
        uVar41 = uVar41 + 0x10;
      } while (uVar34 != 0);
    }
  }
  return;
}


// ==== pipeline::parse::link_slow @ 00721b60 (910 bytes)

/* pipeline[509596c7b52975b2]::parse::link_slow */

void __rustcall
pipeline[509596c7b52975b2]::parse::link_slow
          (long *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if ((param_5 < param_4) || (param_3 < param_5)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (param_4,param_5,param_3,&PTR_s_src_parse_rs_00226510);
  }
  lVar10 = *param_1;
  setup::split2(&local_50,param_4 + param_2,param_5 - param_4);
  if (local_50 == 0) {
    return;
  }
  if (local_48 == 0) {
    return;
  }
  if (local_38 == 0) {
    return;
  }
  lVar1 = param_1[1];
  *(long *)(lVar1 + 0x738) = *(long *)(lVar1 + 0x738) + 1;
  if ((local_48 == local_38) &&
     (iVar3 = (*(code *)PTR_memcmp_00842098)(local_50,local_40,local_48), iVar3 == 0)) {
    return;
  }
  lVar9 = local_50 - param_2;
  lVar13 = local_40 - param_2;
  uVar4 = k_ref::parse_id(param_2,param_3,lVar9,local_48 + lVar9);
  uVar5 = k_ref::parse_id(param_2,param_3,lVar13,lVar13 + local_38);
  if (((uint)(uVar4 >> 0x3e) == 1) || ((uVar5 & 0xc000000000000000) == 0x4000000000000000)) {
                    /* WARNING: Subroutine does not return */
    sys::fallback("long id (v2 links)",0x12);
  }
  if ((long)uVar4 < 0) {
    lVar10 = param_1[7];
    uVar4 = <pipeline[509596c7b52975b2]::parse::Ctx>::raw_token(param_1,lVar9 + lVar10,local_48);
    if (-1 < (long)uVar5) goto LAB_00721e38;
  }
  else {
    if (-1 < (long)uVar5) {
      uVar7 = 0x8000000000000000;
      uVar8 = uVar4 >> 0x28;
      if (uVar8 == 0) {
        uVar8 = (uVar4 * -0x5f6fa77e17000000 >> 0x3a ^ uVar4 * -0x5f6fa77e17000000 >> 0x29 ^
                 *(ulong *)(lVar10 + 0x218) ^ uVar4 * 0xa0905881e9) * 0x3dee219263;
        uVar12 = (uint)uVar8 & 0x1ff;
        if ((0xd < uVar12) ||
           (uVar8 = (ulong)((uint)(uVar8 >> 9) & 0x7fffffff), *(ulong *)(lVar10 + 0x240) <= uVar8))
        goto joined_r0x00721d43;
        uVar7 = (ulong)(uVar12 << 4) | 0x8000000000000000;
        bVar2 = 1;
      }
      else {
joined_r0x00721d43:
        bVar2 = 0;
      }
      if (uVar5 < 0x10000000000) {
        uVar11 = (uVar5 * -0x5f6fa77e17000000 >> 0x3a ^ uVar5 * -0x5f6fa77e17000000 >> 0x29 ^
                  *(ulong *)(lVar10 + 0x218) ^ uVar5 * 0xa0905881e9) * 0x3dee219263;
        uVar12 = (uint)(uVar11 >> 9) & 0x7fffffff;
        uVar11 = (ulong)((uint)uVar11 & 0x1ff);
        if (((bool)(uVar11 < 0xe & bVar2 & (ulong)uVar12 < *(ulong *)(lVar10 + 0x240))) &&
           ((uint)uVar8 == uVar12)) {
          uVar4 = uVar8 >> 0xc & 0xfffff;
          lVar10 = *(long *)(lVar1 + 0x160);
          lVar9 = *(long *)(lVar1 + 0x200);
          uVar12 = *(uint *)(lVar10 + uVar4 * 4);
          *(ulong *)(lVar9 + (ulong)uVar12) = uVar7 | (ulong)((uint)uVar8 & 0xfff) << 0x2b | uVar11;
          *(undefined8 *)(lVar9 + 8 + (ulong)uVar12) = 0;
          uVar6 = uVar12 + 0x10 & 0xff;
          *(uint *)(lVar10 + uVar4 * 4) = uVar12 & 0xffffff00 | uVar6;
          if (uVar6 == 0) {
            <pipeline[509596c7b52975b2]::parse::Part>::flush_one(lVar1 + 0x140);
            return;
          }
          return;
        }
      }
      goto LAB_00721e38;
    }
    lVar10 = param_1[7];
  }
  uVar5 = <pipeline[509596c7b52975b2]::parse::Ctx>::raw_token(param_1,lVar10 + lVar13,local_38);
LAB_00721e38:
  lVar10 = *(long *)(lVar1 + 0x2b8);
  if (lVar10 == *(long *)(lVar1 + 0x2a8)) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(lVar1 + 0x2a8);
  }
  lVar9 = *(long *)(lVar1 + 0x2b0);
  *(ulong *)(lVar9 + lVar10 * 0x10) = uVar4;
  *(ulong *)(lVar9 + 8 + lVar10 * 0x10) = uVar5;
  *(long *)(lVar1 + 0x2b8) = lVar10 + 1;
  return;
}


