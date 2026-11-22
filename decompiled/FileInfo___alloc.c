// ==== core::ptr::drop_glue::<core::option::Option<(core::ptr::non_null::NonNull<u8>, alloc::vec::Vec<pipeline::FileInfo>, alloc::vec::Vec<pipeline::Chunk>, [usize; 3], u64, u64)>> @ 005ffb60 (346 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<core[62e902411887be45]::option::Option<(core[62e902411887be45]::ptr::non_null::NonNull<u8>,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::FileInfo>,
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>, [usize; 3usize], u64,
   u64)>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<core[62e902411887be45]::option::Option<(core[62e902411887be45]::ptr::non_null::NonNull<u8>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::FileInfo>,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>,[usize_3usize],u64,u64)>>
          (long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  lVar4 = *param_1;
  if (lVar4 == -1) {
    return;
  }
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = lVar4 * 0x20 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar4 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar4), cVar2 == '\0')) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = puVar1;
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
    uVar3 = param_1[3] * 0x18 - 1;
    lVar5 = LZCOUNT(uVar3);
    lVar4 = 0x40 - lVar5;
    if ((0xffff < uVar3) &&
       (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar4), cVar2 != '\0')) {
      return;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
    *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = puVar1;
  }
  return;
}


