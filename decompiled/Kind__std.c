// ==== core::ptr::drop_glue::<alloc::vec::Vec<(pipeline::Kind, std::path::PathBuf, usize)>> @ 006015c0 (408 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize)>> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
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
      puVar4 = puVar4 + 5;
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
    uVar2 = *param_1 * 0x28 - 1;
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


// ==== core::slice::sort::stable::driftsort_main::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}, alloc::vec::Vec<(pipeline::Kind, std::path::PathBuf, usize)>> @ 006165c0 (251 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize)>> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
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
  uVar3 = 200000;
  if (param_2 < 200000) {
    uVar3 = param_2;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  if (0x66 < uVar3) {
    if (uVar2 < 0x333333333333334) {
      lVar1 = uVar3 * 0x28;
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
      <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                (param_1,param_2,local_1018,uVar3,param_2 < 0x41);
      ptr::drop_glue::
      <alloc[2a0ada2ddd1fabff]::vec::Vec<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)>>
                (&local_1020);
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}> @ 0061a140 (663 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0}> */

long __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
          (long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  char *local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined2 local_78;
  undefined1 local_76;
  char *local_70;
  long local_68;
  undefined1 local_60;
  undefined2 local_38;
  undefined1 local_36;
  
  if (param_4 < 8) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    bVar5 = *(ulong *)(param_2 + 0x20) < uVar3;
    if (*(ulong *)(param_2 + 0x20) != uVar3) goto LAB_0061a178;
LAB_0061a206:
    local_b0 = *(char **)(param_1 + 8);
    local_a8 = *(long *)(param_1 + 0x10);
    local_68 = *(long *)(param_2 + 0x10);
    if (local_a8 == 0) {
      local_76 = false;
    }
    else {
      local_76 = *local_b0 == '/';
    }
    local_70 = *(char **)(param_2 + 8);
    local_a0 = 0xff;
    local_78 = 0x201;
    if (local_68 == 0) {
      local_36 = false;
    }
    else {
      local_36 = *local_70 == '/';
    }
    local_60 = 0xff;
    local_38 = 0x201;
    cVar2 = std[c60ef17cbf7de79f]::path::compare_components(&local_b0,&local_70);
    bVar5 = cVar2 == -1;
    bVar6 = *(ulong *)(param_3 + 0x20) < *(ulong *)(param_1 + 0x20);
    if (*(ulong *)(param_3 + 0x20) == *(ulong *)(param_1 + 0x20)) goto LAB_0061a298;
  }
  else {
    param_4 = param_4 >> 3;
    lVar1 = param_4 * 0xa0;
    lVar4 = param_4 * 0x118;
    param_1 = <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                        (param_1,param_1 + lVar1,param_1 + lVar4);
    param_2 = <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                        (param_2,param_2 + lVar1,param_2 + lVar4,param_4);
    param_3 = <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                        (param_3,lVar1 + param_3,lVar4 + param_3,param_4);
    uVar3 = *(ulong *)(param_1 + 0x20);
    bVar5 = *(ulong *)(param_2 + 0x20) < uVar3;
    if (*(ulong *)(param_2 + 0x20) == uVar3) goto LAB_0061a206;
LAB_0061a178:
    bVar6 = *(ulong *)(param_3 + 0x20) < uVar3;
    if (*(ulong *)(param_3 + 0x20) == uVar3) {
LAB_0061a298:
      local_b0 = *(char **)(param_1 + 8);
      local_a8 = *(long *)(param_1 + 0x10);
      local_68 = *(long *)(param_3 + 0x10);
      if (local_a8 == 0) {
        local_76 = false;
      }
      else {
        local_76 = *local_b0 == '/';
      }
      local_70 = *(char **)(param_3 + 8);
      local_a0 = 0xff;
      local_78 = 0x201;
      if (local_68 == 0) {
        local_36 = false;
      }
      else {
        local_36 = *local_70 == '/';
      }
      local_60 = 0xff;
      local_38 = 0x201;
      cVar2 = std[c60ef17cbf7de79f]::path::compare_components(&local_b0,&local_70);
      if (bVar5 != (cVar2 == -1)) {
        return param_1;
      }
      goto LAB_0061a329;
    }
  }
  if (bVar5 != bVar6) {
    return param_1;
  }
LAB_0061a329:
  bVar6 = *(ulong *)(param_3 + 0x20) < *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_3 + 0x20) == *(ulong *)(param_2 + 0x20)) {
    local_b0 = *(char **)(param_2 + 8);
    local_a8 = *(long *)(param_2 + 0x10);
    local_68 = *(long *)(param_3 + 0x10);
    if (local_a8 == 0) {
      local_76 = false;
    }
    else {
      local_76 = *local_b0 == '/';
    }
    local_70 = *(char **)(param_3 + 8);
    local_a0 = 0xff;
    local_78 = 0x201;
    if (local_68 == 0) {
      local_36 = false;
    }
    else {
      local_36 = *local_70 == '/';
    }
    local_60 = 0xff;
    local_38 = 0x201;
    cVar2 = std[c60ef17cbf7de79f]::path::compare_components(&local_b0,&local_70);
    bVar6 = cVar2 == -1;
  }
  if (bVar5 != bVar6) {
    param_2 = param_3;
  }
  return param_2;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}> @ 0061d8c0 (993 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
          (long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char *local_c0;
  long local_b8;
  undefined1 local_b0;
  undefined2 local_88;
  undefined1 local_86;
  char *local_80;
  long local_78;
  undefined1 local_70;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 *local_40;
  undefined8 *local_38;
  
  bVar12 = *(ulong *)(param_1 + 0x20) < *(ulong *)(param_1 + 0x48);
  local_38 = param_2;
  if (*(ulong *)(param_1 + 0x20) == *(ulong *)(param_1 + 0x48)) {
    local_c0 = *(char **)(param_1 + 0x30);
    local_b8 = *(long *)(param_1 + 0x38);
    local_78 = *(long *)(param_1 + 0x10);
    if (local_b8 == 0) {
      local_86 = false;
    }
    else {
      local_86 = *local_c0 == '/';
    }
    local_80 = *(char **)(param_1 + 8);
    local_b0 = 0xff;
    local_88 = 0x201;
    if (local_78 == 0) {
      local_46 = false;
    }
    else {
      local_46 = *local_80 == '/';
    }
    local_70 = 0xff;
    local_48 = 0x201;
    cVar6 = std[c60ef17cbf7de79f]::path::compare_components(&local_c0,&local_80);
    bVar12 = cVar6 == -1;
  }
  bVar13 = *(ulong *)(param_1 + 0x70) < *(ulong *)(param_1 + 0x98);
  if (*(ulong *)(param_1 + 0x70) == *(ulong *)(param_1 + 0x98)) {
    local_c0 = *(char **)(param_1 + 0x80);
    local_b8 = *(long *)(param_1 + 0x88);
    local_78 = *(long *)(param_1 + 0x60);
    if (local_b8 == 0) {
      local_86 = false;
    }
    else {
      local_86 = *local_c0 == '/';
    }
    local_80 = *(char **)(param_1 + 0x58);
    local_b0 = 0xff;
    local_88 = 0x201;
    if (local_78 == 0) {
      local_46 = false;
    }
    else {
      local_46 = *local_80 == '/';
    }
    local_70 = 0xff;
    local_48 = 0x201;
    cVar6 = std[c60ef17cbf7de79f]::path::compare_components(&local_c0,&local_80);
    bVar13 = cVar6 == -1;
  }
  puVar9 = (undefined8 *)(param_1 + (ulong)bVar12 * 0x28);
  puVar8 = (undefined8 *)(param_1 + (ulong)(bVar12 ^ 1) * 0x28);
  puVar11 = (undefined8 *)(param_1 + 0x78);
  puVar5 = (undefined8 *)(param_1 + 0x50);
  if (bVar13) {
    puVar11 = (undefined8 *)(param_1 + 0x50);
    puVar5 = (undefined8 *)(param_1 + 0x78);
  }
  uVar1 = *(ulong *)(param_1 + 0x20 + (ulong)bVar12 * 0x28);
  bVar12 = uVar1 < (ulong)puVar5[4];
  if (uVar1 == puVar5[4]) {
    local_c0 = (char *)puVar5[1];
    local_b8 = puVar5[2];
    local_78 = puVar9[2];
    if (local_b8 == 0) {
      local_86 = false;
    }
    else {
      local_86 = *local_c0 == '/';
    }
    local_80 = (char *)puVar9[1];
    local_b0 = 0xff;
    local_88 = 0x201;
    if (local_78 == 0) {
      local_46 = false;
    }
    else {
      local_46 = *local_80 == '/';
    }
    local_70 = 0xff;
    local_48 = 0x201;
    cVar6 = std[c60ef17cbf7de79f]::path::compare_components(&local_c0,&local_80);
    bVar12 = cVar6 == -1;
  }
  bVar13 = (ulong)puVar8[4] < (ulong)puVar11[4];
  if (puVar8[4] == puVar11[4]) {
    local_c0 = (char *)puVar11[1];
    local_b8 = puVar11[2];
    local_78 = puVar8[2];
    if (local_b8 == 0) {
      local_86 = false;
    }
    else {
      local_86 = *local_c0 == '/';
    }
    local_80 = (char *)puVar8[1];
    local_b0 = 0xff;
    local_88 = 0x201;
    if (local_78 == 0) {
      local_46 = false;
    }
    else {
      local_46 = *local_80 == '/';
    }
    local_70 = 0xff;
    local_48 = 0x201;
    cVar6 = std[c60ef17cbf7de79f]::path::compare_components(&local_c0,&local_80);
    bVar13 = cVar6 == -1;
  }
  puVar10 = puVar8;
  if (bVar13) {
    puVar10 = puVar5;
  }
  puVar7 = puVar5;
  if (bVar12) {
    puVar7 = puVar8;
    puVar10 = puVar9;
  }
  if (bVar13) {
    puVar7 = puVar11;
  }
  bVar14 = (ulong)puVar10[4] < (ulong)puVar7[4];
  local_40 = puVar8;
  if (puVar10[4] == puVar7[4]) {
    local_c0 = (char *)puVar7[1];
    local_b8 = puVar7[2];
    local_78 = puVar10[2];
    if (local_b8 == 0) {
      local_86 = false;
    }
    else {
      local_86 = *local_c0 == '/';
    }
    local_80 = (char *)puVar10[1];
    local_b0 = 0xff;
    local_88 = 0x201;
    if (local_78 == 0) {
      local_46 = false;
    }
    else {
      local_46 = *local_80 == '/';
    }
    local_70 = 0xff;
    local_48 = 0x201;
    cVar6 = std[c60ef17cbf7de79f]::path::compare_components(&local_c0,&local_80);
    bVar14 = cVar6 == -1;
  }
  if (bVar13) {
    puVar11 = local_40;
  }
  if (bVar12) {
    puVar9 = puVar5;
  }
  puVar8 = puVar7;
  if (bVar14) {
    puVar8 = puVar10;
    puVar10 = puVar7;
  }
  local_38[4] = puVar9[4];
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *local_38 = *puVar9;
  local_38[1] = uVar2;
  local_38[2] = uVar3;
  local_38[3] = uVar4;
  local_38[9] = puVar10[4];
  uVar2 = puVar10[1];
  uVar3 = puVar10[2];
  uVar4 = puVar10[3];
  local_38[5] = *puVar10;
  local_38[6] = uVar2;
  local_38[7] = uVar3;
  local_38[8] = uVar4;
  local_38[0xe] = puVar8[4];
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  local_38[10] = *puVar8;
  local_38[0xb] = uVar2;
  local_38[0xc] = uVar3;
  local_38[0xd] = uVar4;
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  local_38[0xf] = *puVar11;
  local_38[0x10] = uVar2;
  local_38[0x11] = uVar3;
  local_38[0x12] = uVar4;
  local_38[0x13] = puVar11[4];
  return;
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}> @ 00624260 (587 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
          (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  char *local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined2 local_90;
  undefined1 local_8e;
  char *local_88;
  long local_80;
  undefined1 local_78;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar11 = 0;
  puVar10 = param_1 + 5;
  puVar12 = param_1;
  do {
    puVar9 = puVar10;
    uVar13 = puVar12[9];
    if (puVar12[4] == uVar13) {
      local_c8 = (char *)puVar12[6];
      local_c0 = puVar12[7];
      if (local_c0 == 0) {
        local_8e = false;
      }
      else {
        local_8e = *local_c8 == '/';
      }
      local_88 = (char *)puVar12[1];
      local_80 = puVar12[2];
      local_b8 = 0xff;
      local_90 = 0x201;
      if (local_80 == 0) {
        local_4e = false;
      }
      else {
        local_4e = *local_88 == '/';
      }
      local_78 = 0xff;
      local_50 = 0x201;
      cVar8 = std[c60ef17cbf7de79f]::path::compare_components(&local_c8,&local_88);
      if (cVar8 == -1) {
        uVar13 = puVar12[9];
        goto LAB_00624379;
      }
    }
    else if ((ulong)puVar12[4] < uVar13) {
LAB_00624379:
      uVar1 = puVar12[5];
      pcVar2 = (char *)puVar12[6];
      local_48 = puVar12[7];
      uStack_40 = puVar12[8];
      lVar3 = puVar12[7];
      puVar9[4] = puVar12[4];
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *puVar9 = *puVar12;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar9[3] = uVar7;
      puVar10 = param_1;
      if (puVar12 != param_1) {
        lVar14 = lVar11;
        do {
          puVar10 = (undefined8 *)(lVar14 + (long)param_1);
          uVar4 = *(ulong *)((long)param_1 + lVar14 + -8);
          if (uVar4 == uVar13) {
            if (lVar3 == 0) {
              local_8e = false;
            }
            else {
              local_8e = *pcVar2 == '/';
            }
            local_88 = *(char **)((long)param_1 + lVar14 + -0x20);
            local_80 = *(long *)((long)param_1 + lVar14 + -0x18);
            local_b8 = 0xff;
            local_90 = 0x201;
            if (local_80 == 0) {
              local_4e = false;
            }
            else {
              local_4e = *local_88 == '/';
            }
            local_78 = 0xff;
            local_50 = 0x201;
            local_c8 = pcVar2;
            local_c0 = lVar3;
            cVar8 = std[c60ef17cbf7de79f]::path::compare_components(&local_c8,&local_88);
            if (cVar8 != -1) goto LAB_00624294;
          }
          else if (uVar13 <= uVar4) {
            puVar10 = puVar12;
            goto LAB_00624294;
          }
          puVar12 = puVar12 + -5;
          puVar10[4] = *(undefined8 *)((long)param_1 + lVar14 + -8);
          uVar5 = *(undefined8 *)((long)param_1 + lVar14 + -0x18);
          uVar6 = *(undefined8 *)((long)param_1 + lVar14 + -0x10);
          *puVar10 = *(undefined8 *)((long)param_1 + lVar14 + -0x28);
          puVar10[1] = *(undefined8 *)((long)param_1 + lVar14 + -0x20);
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
        puVar10 = param_1;
      }
LAB_00624294:
      *puVar10 = uVar1;
      puVar10[1] = pcVar2;
      puVar10[2] = local_48;
      puVar10[3] = uStack_40;
      puVar10[4] = uVar13;
    }
    lVar11 = lVar11 + 0x28;
    puVar10 = puVar9 + 5;
    puVar12 = puVar9;
    if (puVar9 + 5 == param_1 + param_2 * 5) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::stable::drift::sort::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}> @ 0062a5a0 (2592 bytes)

/* core[62e902411887be45]::slice::sort::stable::drift::sort::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
          (long param_1,ulong param_2,undefined8 *param_3,ulong param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  ulong local_398;
  ulong local_388;
  char *local_350;
  ulong local_348;
  undefined1 local_340;
  undefined2 local_318;
  undefined1 local_316;
  char *local_310;
  ulong local_308;
  undefined1 local_300;
  undefined2 local_2d8;
  undefined1 local_2d6;
  long local_2d0;
  ulong local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  undefined8 *local_2a8;
  long local_2a0;
  ulong local_298;
  undefined8 *local_290;
  byte abStack_283 [67];
  ulong auStack_240 [66];
  
  local_2c8 = param_2 + 0x3fffffffffffffff;
  if ((local_2c8 | param_2) >> 0x20 == 0) {
    local_2c8 = (local_2c8 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    local_2c8 = local_2c8 / param_2;
  }
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    uVar7 = 0x40;
    if (uVar8 < 0x40) {
      uVar7 = uVar8;
    }
  }
  else {
    uVar6 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar7 = (ulong)(uVar6 - (uVar6 >> 1));
    uVar7 = (param_2 >> (uVar7 & 0x3f)) + (1L << (uVar7 & 0x3f)) >> 1;
  }
  local_2d0 = param_1 + 0x70;
  local_2b8 = param_1 + 0x20;
  local_2c0 = param_1 + -8;
  local_2b0 = param_1 + -0x28;
  uVar8 = 1;
  uVar18 = 0;
  local_388 = 0;
  uVar16 = param_2;
  if (param_2 == 0) goto LAB_0062a710;
LAB_0062a6b0:
  lVar11 = param_1 + local_388 * 0x28;
  if (uVar16 < uVar7) {
LAB_0062a6c9:
    if (param_5 == '\0') {
      if (uVar7 < uVar16) {
        uVar16 = uVar7;
      }
      local_398 = uVar16 * 2;
    }
    else {
      if (0x1f < uVar16) {
        uVar16 = 0x20;
      }
      quicksort::quicksort::
      <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                (lVar11,uVar16,param_3,param_4,0,0);
      local_398 = (uVar16 & 0xffffffff) * 2 + 1;
    }
  }
  else {
    local_398 = uVar16;
    if (1 < uVar16) {
      if (*(ulong *)(lVar11 + 0x20) == *(ulong *)(lVar11 + 0x48)) {
        local_350 = *(char **)(lVar11 + 0x30);
        local_348 = *(ulong *)(lVar11 + 0x38);
        if (local_348 == 0) {
          local_316 = false;
        }
        else {
          local_316 = *local_350 == '/';
        }
        local_310 = *(char **)(lVar11 + 8);
        local_308 = *(ulong *)(lVar11 + 0x10);
        local_340 = 0xff;
        local_318 = 0x201;
        if (local_308 == 0) {
          local_2d6 = false;
        }
        else {
          local_2d6 = *local_310 == '/';
        }
        local_300 = 0xff;
        local_2d8 = 0x201;
        cVar5 = std[c60ef17cbf7de79f]::path::compare_components(&local_350,&local_310);
        if (cVar5 != -1) goto code_r0x0062ade0;
LAB_0062ac66:
        uVar21 = 2;
        bVar23 = true;
        if (uVar16 == 2) goto LAB_0062adee;
        puVar14 = (ulong *)(local_2d0 + local_388 * 0x28);
        uVar19 = *(ulong *)(lVar11 + 0x48);
        do {
          uVar20 = *puVar14;
          local_398 = uVar21;
          if (uVar19 == uVar20) {
            local_350 = (char *)puVar14[-3];
            local_348 = puVar14[-2];
            if (local_348 == 0) {
              local_316 = false;
            }
            else {
              local_316 = *local_350 == '/';
            }
            local_310 = (char *)puVar14[-8];
            local_308 = puVar14[-7];
            local_340 = 0xff;
            local_318 = 0x201;
            if (local_308 == 0) {
              local_2d6 = false;
            }
            else {
              local_2d6 = *local_310 == '/';
            }
            local_300 = 0xff;
            local_2d8 = 0x201;
            cVar5 = std[c60ef17cbf7de79f]::path::compare_components(&local_350,&local_310);
            if (cVar5 != -1) break;
          }
          else if (uVar20 <= uVar19) break;
          uVar21 = uVar21 + 1;
          puVar14 = puVar14 + 5;
          uVar19 = uVar20;
          local_398 = uVar16;
        } while (uVar16 != uVar21);
joined_r0x0062aeeb:
        if (local_398 < uVar7) goto LAB_0062a6c9;
      }
      else {
        if (*(ulong *)(lVar11 + 0x20) < *(ulong *)(lVar11 + 0x48)) goto LAB_0062ac66;
code_r0x0062ade0:
        if (uVar16 != 2) {
          puVar14 = (ulong *)(local_2d0 + local_388 * 0x28);
          local_398 = 2;
          uVar21 = *(ulong *)(lVar11 + 0x48);
          do {
            uVar19 = *puVar14;
            if (uVar21 == uVar19) {
              local_350 = (char *)puVar14[-3];
              local_348 = puVar14[-2];
              if (local_348 == 0) {
                local_316 = false;
              }
              else {
                local_316 = *local_350 == '/';
              }
              local_310 = (char *)puVar14[-8];
              local_308 = puVar14[-7];
              local_340 = 0xff;
              local_318 = 0x201;
              if (local_308 == 0) {
                local_2d6 = false;
              }
              else {
                local_2d6 = *local_310 == '/';
              }
              local_300 = 0xff;
              local_2d8 = 0x201;
              cVar5 = std[c60ef17cbf7de79f]::path::compare_components(&local_350,&local_310);
              if (cVar5 == -1) goto LAB_0062aedf;
            }
            else if (uVar21 < uVar19) {
LAB_0062aedf:
              bVar23 = false;
              goto joined_r0x0062aeeb;
            }
            local_398 = local_398 + 1;
            puVar14 = puVar14 + 5;
            uVar21 = uVar19;
          } while (uVar16 != local_398);
          bVar23 = false;
          local_398 = uVar16;
          goto joined_r0x0062aeeb;
        }
        bVar23 = false;
LAB_0062adee:
        local_398 = 2;
        if (2 < uVar7) goto LAB_0062a6c9;
      }
      if ((bVar23) && (uVar16 = local_398 >> 1, uVar16 != 0)) {
        puVar10 = (undefined8 *)(local_2b8 + local_388 * 0x28);
        puVar12 = (undefined8 *)(local_388 * 0x28 + local_398 * 0x28 + local_2c0);
        do {
          uVar1 = puVar10[-4];
          uVar2 = puVar10[-3];
          uVar3 = puVar10[-2];
          uVar4 = puVar10[-1];
          *(undefined1 (*) [32])(puVar10 + -4) = *(undefined1 (*) [32])(puVar12 + -4);
          puVar12[-4] = uVar1;
          puVar12[-3] = uVar2;
          puVar12[-2] = uVar3;
          puVar12[-1] = uVar4;
          uVar1 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar1;
          puVar10 = puVar10 + 5;
          puVar12 = puVar12 + -5;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    local_398 = local_398 * 2 + 1;
  }
  lVar11 = LZCOUNT(((local_398 >> 1) + local_388 * 2) * local_2c8 ^
                   (local_388 * 2 - (uVar8 >> 1)) * local_2c8);
  uVar16 = uVar8;
  do {
    uVar8 = local_398;
    if (1 < uVar18) {
      local_290 = (undefined8 *)(param_1 + local_388 * 0x28);
      local_2a8 = (undefined8 *)(local_388 * 0x28 + local_2b0);
      local_2a0 = lVar11;
      do {
        while( true ) {
          if (abStack_283[uVar18] < (byte)lVar11) goto LAB_0062abe6;
          uVar18 = uVar18 - 1;
          uVar19 = auStack_240[uVar18];
          uVar20 = uVar19 >> 1;
          uVar22 = uVar16 >> 1;
          uVar21 = uVar20 + uVar22;
          if ((param_4 < uVar21) || ((((uint)uVar19 | (uint)uVar16) & 1) != 0)) break;
          uVar16 = uVar21 * 2;
          if (uVar18 < 2) goto LAB_0062abe0;
        }
        puVar10 = (undefined8 *)(param_1 + (local_388 - uVar21) * 0x28);
        local_298 = uVar21;
        if ((uVar19 & 1) == 0) {
          quicksort::quicksort::
          <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                    (puVar10,uVar20,param_3,param_4,(int)LZCOUNT(uVar20 | 1) * 2 ^ 0x7e,0);
        }
        if ((uVar16 & 1) == 0) {
          quicksort::quicksort::
          <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                    (puVar10 + uVar20 * 5,uVar22,param_3,param_4,(int)LZCOUNT(uVar22 | 1) * 2 ^ 0x7e
                     ,0);
        }
        if ((uVar22 != 0) && (uVar20 != 0)) {
          uVar16 = uVar22;
          if (uVar20 < uVar22) {
            uVar16 = uVar20;
          }
          if (uVar16 <= param_4) {
            puVar12 = puVar10 + uVar20 * 5;
            puVar17 = puVar10;
            if (uVar22 < uVar20) {
              puVar17 = puVar12;
            }
            (*(code *)PTR_memcpy_00841de0)(param_3,puVar17,uVar16 * 0x28);
            puVar15 = param_3 + uVar16 * 5;
            puVar17 = param_3;
            if (uVar22 < uVar20) {
              puVar13 = puVar12;
              puVar12 = local_2a8;
              do {
                bVar23 = (ulong)puVar13[-1] < (ulong)puVar15[-1];
                if (puVar13[-1] == puVar15[-1]) {
                  local_350 = (char *)puVar15[-4];
                  local_348 = puVar15[-3];
                  if (local_348 == 0) {
                    local_316 = false;
                  }
                  else {
                    local_316 = *local_350 == '/';
                  }
                  local_310 = (char *)puVar13[-4];
                  local_308 = puVar13[-3];
                  local_340 = 0xff;
                  local_318 = 0x201;
                  if (local_308 == 0) {
                    local_2d6 = false;
                  }
                  else {
                    local_2d6 = *local_310 == '/';
                  }
                  local_300 = 0xff;
                  local_2d8 = 0x201;
                  cVar5 = std[c60ef17cbf7de79f]::path::compare_components(&local_350,&local_310);
                  bVar23 = cVar5 == -1;
                }
                puVar9 = puVar13 + -5;
                if (bVar23 == false) {
                  puVar9 = puVar15 + -5;
                }
                puVar12[4] = puVar9[4];
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *puVar12 = *puVar9;
                puVar12[1] = uVar1;
                puVar12[2] = uVar2;
                puVar12[3] = uVar3;
                puVar13 = puVar13 + -5 + (ulong)(bVar23 ^ 1) * 5;
                puVar15 = puVar15 + -5 + (ulong)bVar23 * 5;
              } while ((puVar13 != puVar10) && (puVar12 = puVar12 + -5, puVar15 != param_3));
            }
            else {
              puVar13 = puVar10;
              do {
                bVar23 = (ulong)puVar17[4] < (ulong)puVar12[4];
                if (puVar17[4] == puVar12[4]) {
                  local_350 = (char *)puVar12[1];
                  local_348 = puVar12[2];
                  if (local_348 == 0) {
                    local_316 = false;
                  }
                  else {
                    local_316 = *local_350 == '/';
                  }
                  local_310 = (char *)puVar17[1];
                  local_308 = puVar17[2];
                  local_340 = 0xff;
                  local_318 = 0x201;
                  if (local_308 == 0) {
                    local_2d6 = false;
                  }
                  else {
                    local_2d6 = *local_310 == '/';
                  }
                  local_300 = 0xff;
                  local_2d8 = 0x201;
                  cVar5 = std[c60ef17cbf7de79f]::path::compare_components(&local_350,&local_310);
                  bVar23 = cVar5 == -1;
                }
                puVar10 = puVar12;
                if (bVar23 == false) {
                  puVar10 = puVar17;
                }
                puVar13[4] = puVar10[4];
                uVar1 = puVar10[1];
                uVar2 = puVar10[2];
                uVar3 = puVar10[3];
                *puVar13 = *puVar10;
                puVar13[1] = uVar1;
                puVar13[2] = uVar2;
                puVar13[3] = uVar3;
                puVar17 = puVar17 + (ulong)(bVar23 ^ 1) * 5;
                puVar13 = puVar13 + 5;
              } while ((puVar17 != puVar15) &&
                      (puVar12 = puVar12 + (ulong)bVar23 * 5, puVar12 != local_290));
            }
            (*(code *)PTR_memcpy_00841de0)(puVar13,puVar17,(long)puVar15 - (long)puVar17);
          }
        }
        uVar16 = local_298 * 2 + 1;
        lVar11 = local_2a0;
      } while (1 < uVar18);
LAB_0062abe0:
      uVar18 = 1;
    }
LAB_0062abe6:
    auStack_240[uVar18] = uVar16;
    abStack_283[uVar18 + 1] = (byte)lVar11;
    if (param_2 <= local_388) {
      if ((uVar16 & 1) == 0) {
        quicksort::quicksort::
        <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                  (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0);
        return;
      }
      return;
    }
    uVar18 = uVar18 + 1;
    local_388 = local_388 + (uVar8 >> 1);
    uVar16 = param_2 - local_388;
    if (local_388 <= param_2 && uVar16 != 0) goto LAB_0062a6b0;
LAB_0062a710:
    lVar11 = 0;
    local_398 = 1;
    uVar16 = uVar8;
  } while( true );
}


// ==== core::slice::sort::stable::quicksort::quicksort::<(pipeline::Kind, std::path::PathBuf, usize), <[(pipeline::Kind, std::path::PathBuf, usize)]>::sort_by<pipeline::setup::setup::{closure#3}>::{closure#0}> @ 00637300 (4812 bytes)

/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf, usize), <[(pipeline[509596c7b52975b2]::Kind,
   std[c60ef17cbf7de79f]::path::PathBuf,
   usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::{closure#3}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
          (long *param_1,ulong param_2,long *param_3,ulong param_4,int param_5,long param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  bool bVar27;
  bool bVar28;
  ulong local_148;
  long local_140;
  long *local_138;
  long local_130;
  char *local_120;
  long local_118;
  undefined1 local_110;
  undefined2 local_e8;
  undefined1 local_e6;
  char *local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined2 local_a8;
  undefined1 local_a6;
  ulong local_a0;
  ulong local_98;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  
  if (0x20 < param_2) {
    local_88 = (long)(param_3 + -5);
    local_140 = param_6;
    local_98 = param_4;
LAB_006373b4:
    uVar26 = param_2;
    uVar24 = local_98;
    do {
      if (param_5 == 0) {
        drift::sort::
        <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                  (param_1,uVar26,param_3,uVar24,1);
        return;
      }
      plVar20 = param_1 + (uVar26 >> 3) * 0x14;
      plVar16 = param_1 + (uVar26 >> 3) * 0x23;
      if (uVar26 < 0x40) {
        uVar15 = plVar20[4];
        uVar21 = param_1[4];
        bVar27 = uVar15 < uVar21;
        plVar12 = param_1;
        if (uVar15 == uVar21) {
          local_120 = (char *)param_1[1];
          local_118 = param_1[2];
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar20[1];
          local_d8 = plVar20[2];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          bVar27 = cVar11 == -1;
          uVar19 = plVar16[4];
          if (uVar19 != uVar21) goto LAB_00637413;
LAB_006374f0:
          local_120 = (char *)param_1[1];
          local_118 = param_1[2];
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar16[1];
          local_d8 = plVar16[2];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          if (bVar27 != (cVar11 == -1)) goto LAB_00637643;
        }
        else {
          uVar19 = plVar16[4];
          if (uVar19 == uVar21) goto LAB_006374f0;
LAB_00637413:
          if (bVar27 != uVar19 < uVar21) goto LAB_00637643;
        }
        bVar28 = uVar19 < uVar15;
        if (uVar19 == uVar15) {
          local_120 = (char *)plVar20[1];
          local_118 = plVar20[2];
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar16[1];
          local_d8 = plVar16[2];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          bVar28 = cVar11 == -1;
        }
        if (bVar27 != bVar28) {
          plVar20 = plVar16;
        }
        plVar12 = plVar20;
      }
      else {
        plVar12 = (long *)shared::pivot::median3_rec::
                          <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                                    (param_1,plVar20,plVar16);
      }
LAB_00637643:
      param_5 = param_5 + -1;
      uVar15 = ((ulong)((long)plVar12 - (long)param_1) >> 3) * -0x3333333333333333;
      local_38 = plVar12[4];
      local_58 = *plVar12;
      lStack_50 = plVar12[1];
      lStack_48 = plVar12[2];
      lStack_40 = plVar12[3];
      if (local_140 != 0) {
        if (plVar12[4] == *(ulong *)(local_140 + 0x20)) {
          local_120 = *(char **)(local_140 + 8);
          local_118 = *(long *)(local_140 + 0x10);
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar12[1];
          local_d8 = plVar12[2];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          if (cVar11 != -1) goto LAB_00637aa0;
        }
        else if (*(ulong *)(local_140 + 0x20) <= (ulong)plVar12[4]) goto LAB_00637aa0;
      }
      if (uVar24 < uVar26) goto LAB_00638607;
      local_a0 = uVar26 * 5;
      plVar20 = param_3 + uVar26 * 5;
      param_2 = 0;
      plVar16 = plVar20;
      plVar18 = param_1;
      uVar24 = uVar15;
      while( true ) {
        for (; plVar18 < param_1 + uVar24 * 5; plVar18 = plVar18 + 5) {
          bVar27 = (ulong)plVar12[4] < (ulong)plVar18[4];
          if (plVar12[4] == plVar18[4]) {
            local_120 = (char *)plVar18[1];
            local_118 = plVar18[2];
            if (local_118 == 0) {
              local_e6 = false;
            }
            else {
              local_e6 = *local_120 == '/';
            }
            local_e0 = (char *)plVar12[1];
            local_d8 = plVar12[2];
            local_110 = 0xff;
            local_e8 = 0x201;
            if (local_d8 == 0) {
              local_a6 = false;
            }
            else {
              local_a6 = *local_e0 == '/';
            }
            local_d0 = 0xff;
            local_a8 = 0x201;
            cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
            bVar27 = cVar11 == -1;
          }
          plVar16 = plVar16 + -5;
          plVar13 = plVar16;
          if (bVar27 != false) {
            plVar13 = param_3;
          }
          plVar13[param_2 * 5 + 4] = plVar18[4];
          lVar3 = plVar18[1];
          lVar25 = plVar18[2];
          lVar23 = plVar18[3];
          plVar13 = plVar13 + param_2 * 5;
          *plVar13 = *plVar18;
          plVar13[1] = lVar3;
          plVar13[2] = lVar25;
          plVar13[3] = lVar23;
          param_2 = param_2 + bVar27;
        }
        if (uVar24 == uVar26) break;
        plVar16[param_2 * 5 + -1] = plVar18[4];
        lVar3 = plVar18[1];
        lVar25 = plVar18[2];
        lVar23 = plVar18[3];
        plVar13 = plVar16 + param_2 * 5 + -5;
        *plVar13 = *plVar18;
        plVar13[1] = lVar3;
        plVar13[2] = lVar25;
        plVar13[3] = lVar23;
        plVar16 = plVar16 + -5;
        plVar18 = plVar18 + 5;
        uVar24 = uVar26;
      }
      (*(code *)PTR_memcpy_00841de0)(param_1,param_3,param_2 * 0x28);
      uVar24 = local_98;
      uVar21 = uVar26 - param_2;
      if (uVar21 != 0) {
        if (param_2 - uVar26 < 0xfffffffffffffffd) {
          plVar16 = param_1 + param_2 * 5;
          plVar18 = (long *)(local_88 + local_a0 * 8);
          uVar19 = 0;
          do {
            lVar3 = plVar18[4];
            lVar25 = plVar18[1];
            lVar23 = plVar18[2];
            lVar5 = plVar18[3];
            *plVar16 = *plVar18;
            plVar16[1] = lVar25;
            plVar16[2] = lVar23;
            plVar16[3] = lVar5;
            plVar16[4] = lVar3;
            plVar13 = plVar20 + (uVar19 ^ 0x1ffffffffffffffe) * 5;
            lVar3 = *plVar13;
            lVar25 = plVar13[1];
            lVar23 = plVar13[2];
            lVar5 = plVar13[3];
            plVar16[9] = plVar20[(uVar19 ^ 0x1ffffffffffffffe) * 5 + 4];
            plVar16[5] = lVar3;
            plVar16[6] = lVar25;
            plVar16[7] = lVar23;
            plVar16[8] = lVar5;
            plVar16[0xe] = plVar20[(uVar19 ^ 0x1ffffffffffffffd) * 5 + 4];
            plVar13 = plVar20 + (uVar19 ^ 0x1ffffffffffffffd) * 5;
            lVar3 = plVar13[1];
            lVar25 = plVar13[2];
            lVar23 = plVar13[3];
            plVar16[10] = *plVar13;
            plVar16[0xb] = lVar3;
            plVar16[0xc] = lVar25;
            plVar16[0xd] = lVar23;
            uVar22 = uVar19 + 4;
            plVar13 = plVar20 + (uVar19 ^ 0x1ffffffffffffffc) * 5;
            lVar3 = plVar13[1];
            lVar25 = plVar13[2];
            lVar23 = plVar13[3];
            plVar16[0xf] = *plVar13;
            plVar16[0x10] = lVar3;
            plVar16[0x11] = lVar25;
            plVar16[0x12] = lVar23;
            plVar16[0x13] = plVar20[(uVar19 ^ 0x1ffffffffffffffc) * 5 + 4];
            plVar16 = plVar16 + 0x14;
            plVar18 = plVar18 + -0x14;
            uVar19 = uVar22;
          } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
          if ((uVar21 & 3) == 0) goto LAB_00637a3f;
        }
        else {
          uVar22 = 0;
        }
        lVar3 = param_2 * 0x28 + uVar22 * 0x28;
        puVar17 = (undefined8 *)(uVar26 * 0x28 + uVar22 * -0x28 + local_88);
        lVar25 = 0;
        do {
          uVar6 = *puVar17;
          uVar7 = puVar17[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          *(undefined8 *)((long)param_1 + lVar25 + lVar3 + 0x20) = puVar17[4];
          puVar1 = (undefined8 *)((long)param_1 + lVar25 + lVar3);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          lVar25 = lVar25 + 0x28;
          puVar17 = puVar17 + -5;
        } while ((ulong)(((uint)uVar21 & 3) << 3) * 5 != lVar25);
      }
LAB_00637a3f:
      if (param_2 == 0) goto LAB_00637aa0;
      if (uVar26 < param_2) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
      }
      <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                (param_1 + param_2 * 5,uVar21,param_3,local_98,param_5);
      uVar26 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
  local_138 = param_1;
LAB_0063732f:
  if (1 < param_2) {
    local_148 = param_2 >> 1;
    plVar20 = local_138 + local_148 * 5;
    plVar16 = param_3 + local_148 * 5;
    local_90 = plVar20;
    if (param_2 < 8) {
      param_3[4] = local_138[4];
      lVar3 = local_138[1];
      lVar25 = local_138[2];
      lVar23 = local_138[3];
      *param_3 = *local_138;
      param_3[1] = lVar3;
      param_3[2] = lVar25;
      param_3[3] = lVar23;
      plVar16[4] = plVar20[4];
      lVar3 = plVar20[1];
      lVar25 = plVar20[2];
      lVar23 = plVar20[3];
      *plVar16 = *plVar20;
      plVar16[1] = lVar3;
      plVar16[2] = lVar25;
      plVar16[3] = lVar23;
      uVar24 = 1;
    }
    else {
      shared::smallsort::sort4_stable::
      <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                (local_138,param_3);
      shared::smallsort::sort4_stable::
      <(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize),<[(pipeline[509596c7b52975b2]::Kind,std[c60ef17cbf7de79f]::path::PathBuf,usize)]>::sort_by<pipeline[509596c7b52975b2]::setup::setup::_closure_3_>::_closure_0_>
                (plVar20,plVar16);
      uVar24 = 4;
    }
    local_98 = param_2 - local_148;
    local_70 = uVar24 * 5;
    uVar26 = uVar24;
    if (uVar24 < local_148) {
      local_130 = uVar24 * 0x28 + -0x28;
      local_a0 = uVar24;
      do {
        plVar20 = param_3 + uVar24 * 5;
        uVar15 = local_138[uVar24 * 5 + 4];
        param_3[uVar24 * 5 + 4] = uVar15;
        plVar12 = local_138 + uVar24 * 5;
        lVar3 = plVar12[1];
        lVar25 = plVar12[2];
        lVar23 = plVar12[3];
        plVar18 = param_3 + uVar24 * 5;
        *plVar18 = *plVar12;
        plVar18[1] = lVar3;
        plVar18[2] = lVar25;
        plVar18[3] = lVar23;
        if (param_3[uVar24 * 5 + -1] == uVar15) {
          local_120 = (char *)plVar20[1];
          local_118 = plVar20[2];
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar20[-4];
          local_d8 = plVar20[-3];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          if (cVar11 == -1) {
            uVar15 = plVar20[4];
            goto LAB_00637f8b;
          }
        }
        else if ((ulong)param_3[uVar24 * 5 + -1] < uVar15) {
LAB_00637f8b:
          plVar12 = param_3 + uVar24 * 5 + -5;
          local_88 = *plVar20;
          pcVar2 = (char *)plVar20[1];
          local_68 = plVar20[2];
          lStack_60 = plVar20[3];
          lVar3 = plVar20[2];
          plVar20[4] = param_3[uVar24 * 5 + -1];
          lVar25 = param_3[uVar24 * 5 + -4];
          lVar23 = param_3[uVar24 * 5 + -3];
          lVar5 = param_3[uVar24 * 5 + -2];
          *plVar20 = *plVar12;
          plVar20[1] = lVar25;
          plVar20[2] = lVar23;
          plVar20[3] = lVar5;
          if (uVar24 != 1) {
            lVar25 = local_130;
            do {
              plVar20 = (long *)((long)param_3 + lVar25);
              uVar26 = *(ulong *)((long)param_3 + lVar25 + -8);
              if (uVar26 == uVar15) {
                if (lVar3 == 0) {
                  local_e6 = false;
                }
                else {
                  local_e6 = *pcVar2 == '/';
                }
                local_e0 = *(char **)((long)param_3 + lVar25 + -0x20);
                local_d8 = *(long *)((long)param_3 + lVar25 + -0x18);
                local_110 = 0xff;
                local_e8 = 0x201;
                if (local_d8 == 0) {
                  local_a6 = false;
                }
                else {
                  local_a6 = *local_e0 == '/';
                }
                local_d0 = 0xff;
                local_a8 = 0x201;
                local_120 = pcVar2;
                local_118 = lVar3;
                cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
                if (cVar11 != -1) {
                  plVar20 = plVar12;
                  goto LAB_006380ce;
                }
              }
              else if (uVar15 <= uVar26) goto LAB_006380ce;
              plVar12 = plVar12 + -5;
              plVar20[4] = *(long *)((long)param_3 + lVar25 + -8);
              lVar23 = *(long *)((long)param_3 + lVar25 + -0x18);
              lVar5 = *(long *)((long)param_3 + lVar25 + -0x10);
              *plVar20 = *(long *)((long)param_3 + lVar25 + -0x28);
              plVar20[1] = *(long *)((long)param_3 + lVar25 + -0x20);
              plVar20[2] = lVar23;
              plVar20[3] = lVar5;
              lVar25 = lVar25 + -0x28;
            } while (lVar25 != 0);
            plVar20 = param_3;
LAB_006380ce:
            plVar12 = plVar20;
            uVar26 = local_a0;
          }
          *plVar12 = local_88;
          plVar12[1] = (long)pcVar2;
          plVar12[2] = local_68;
          plVar12[3] = lStack_60;
          plVar12[4] = uVar15;
        }
        uVar24 = uVar24 + 1;
        local_130 = local_130 + 0x28;
      } while (uVar24 != local_148);
    }
    if (uVar26 < local_98) {
      local_140 = local_70 * 8 + -0x28;
      plVar20 = local_90;
      do {
        plVar12 = plVar16 + uVar26 * 5;
        uVar24 = plVar20[uVar26 * 5 + 4];
        plVar16[uVar26 * 5 + 4] = uVar24;
        plVar13 = plVar20 + uVar26 * 5;
        lVar3 = plVar13[1];
        lVar25 = plVar13[2];
        lVar23 = plVar13[3];
        plVar18 = plVar16 + uVar26 * 5;
        *plVar18 = *plVar13;
        plVar18[1] = lVar3;
        plVar18[2] = lVar25;
        plVar18[3] = lVar23;
        if (plVar16[uVar26 * 5 + -1] == uVar24) {
          local_120 = (char *)plVar12[1];
          local_118 = plVar12[2];
          if (local_118 == 0) {
            local_e6 = false;
          }
          else {
            local_e6 = *local_120 == '/';
          }
          local_e0 = (char *)plVar12[-4];
          local_d8 = plVar12[-3];
          local_110 = 0xff;
          local_e8 = 0x201;
          if (local_d8 == 0) {
            local_a6 = false;
          }
          else {
            local_a6 = *local_e0 == '/';
          }
          local_d0 = 0xff;
          local_a8 = 0x201;
          cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
          if (cVar11 == -1) {
            uVar24 = plVar12[4];
            goto LAB_0063822b;
          }
        }
        else if ((ulong)plVar16[uVar26 * 5 + -1] < uVar24) {
LAB_0063822b:
          plVar18 = plVar16 + uVar26 * 5 + -5;
          lVar3 = *plVar12;
          pcVar2 = (char *)plVar12[1];
          local_88 = plVar12[2];
          lStack_80 = plVar12[3];
          lVar25 = plVar12[2];
          plVar12[4] = plVar16[uVar26 * 5 + -1];
          lVar23 = plVar16[uVar26 * 5 + -4];
          lVar5 = plVar16[uVar26 * 5 + -3];
          lVar10 = plVar16[uVar26 * 5 + -2];
          *plVar12 = *plVar18;
          plVar12[1] = lVar23;
          plVar12[2] = lVar5;
          plVar12[3] = lVar10;
          local_a0 = uVar26;
          if (uVar26 != 1) {
            lVar23 = local_140;
            do {
              plVar20 = (long *)((long)plVar16 + lVar23);
              uVar26 = *(ulong *)((long)plVar16 + lVar23 + -8);
              if (uVar26 == uVar24) {
                if (lVar25 == 0) {
                  local_e6 = false;
                }
                else {
                  local_e6 = *pcVar2 == '/';
                }
                local_e0 = *(char **)((long)plVar16 + lVar23 + -0x20);
                local_d8 = *(long *)((long)plVar16 + lVar23 + -0x18);
                local_110 = 0xff;
                local_e8 = 0x201;
                if (local_d8 == 0) {
                  local_a6 = false;
                }
                else {
                  local_a6 = *local_e0 == '/';
                }
                local_d0 = 0xff;
                local_a8 = 0x201;
                local_120 = pcVar2;
                local_118 = lVar25;
                cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
                if (cVar11 != -1) {
                  plVar20 = plVar18;
                  goto LAB_00638365;
                }
              }
              else if (uVar24 <= uVar26) goto LAB_00638365;
              plVar18 = plVar18 + -5;
              plVar20[4] = *(long *)((long)plVar16 + lVar23 + -8);
              lVar5 = *(long *)((long)plVar16 + lVar23 + -0x18);
              lVar10 = *(long *)((long)plVar16 + lVar23 + -0x10);
              *plVar20 = *(long *)((long)plVar16 + lVar23 + -0x28);
              plVar20[1] = *(long *)((long)plVar16 + lVar23 + -0x20);
              plVar20[2] = lVar5;
              plVar20[3] = lVar10;
              lVar23 = lVar23 + -0x28;
            } while (lVar23 != 0);
            plVar20 = plVar16;
LAB_00638365:
            plVar18 = plVar20;
            plVar20 = local_90;
          }
          *plVar18 = lVar3;
          plVar18[1] = (long)pcVar2;
          plVar18[2] = local_88;
          plVar18[3] = lStack_80;
          plVar18[4] = uVar24;
          uVar26 = local_a0;
        }
        uVar26 = uVar26 + 1;
        local_140 = local_140 + 0x28;
      } while (uVar26 != local_98);
    }
    plVar12 = param_3 + param_2 * 5 + -5;
    plVar20 = plVar16 + -5;
    plVar18 = local_138 + param_2 * 5;
    do {
      plVar13 = local_138;
      bVar27 = (ulong)param_3[4] < (ulong)plVar16[4];
      if (param_3[4] == plVar16[4]) {
        local_120 = (char *)plVar16[1];
        local_118 = plVar16[2];
        if (local_118 == 0) {
          local_e6 = false;
        }
        else {
          local_e6 = *local_120 == '/';
        }
        local_e0 = (char *)param_3[1];
        local_d8 = param_3[2];
        local_110 = 0xff;
        local_e8 = 0x201;
        if (local_d8 == 0) {
          local_a6 = false;
        }
        else {
          local_a6 = *local_e0 == '/';
        }
        local_d0 = 0xff;
        local_a8 = 0x201;
        cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
        bVar27 = cVar11 == -1;
      }
      plVar14 = plVar16;
      if (bVar27 == false) {
        plVar14 = param_3;
      }
      plVar13[4] = plVar14[4];
      lVar3 = plVar14[1];
      lVar25 = plVar14[2];
      lVar23 = plVar14[3];
      *plVar13 = *plVar14;
      plVar13[1] = lVar3;
      plVar13[2] = lVar25;
      plVar13[3] = lVar23;
      bVar28 = (ulong)plVar20[4] < (ulong)plVar12[4];
      if (plVar20[4] == plVar12[4]) {
        local_120 = (char *)plVar12[1];
        local_118 = plVar12[2];
        if (local_118 == 0) {
          local_e6 = false;
        }
        else {
          local_e6 = *local_120 == '/';
        }
        local_e0 = (char *)plVar20[1];
        local_d8 = plVar20[2];
        local_110 = 0xff;
        local_e8 = 0x201;
        if (local_d8 == 0) {
          local_a6 = false;
        }
        else {
          local_a6 = *local_e0 == '/';
        }
        local_d0 = 0xff;
        local_a8 = 0x201;
        cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
        bVar28 = cVar11 == -1;
      }
      plVar14 = plVar20;
      if (bVar28 == false) {
        plVar14 = plVar12;
      }
      plVar16 = plVar16 + (ulong)bVar27 * 5;
      param_3 = param_3 + (ulong)(bVar27 ^ 1) * 5;
      plVar18[-1] = plVar14[4];
      lVar3 = plVar14[1];
      lVar25 = plVar14[2];
      lVar23 = plVar14[3];
      plVar18[-5] = *plVar14;
      plVar18[-4] = lVar3;
      plVar18[-3] = lVar25;
      plVar18[-2] = lVar23;
      plVar12 = plVar12 + (ulong)bVar28 * 5 + -5;
      plVar20 = plVar20 + (ulong)bVar28 * -5;
      local_148 = local_148 - 1;
      local_138 = plVar13 + 5;
      plVar18 = plVar18 + -5;
    } while (local_148 != 0);
    if ((param_2 & 1) != 0) {
      bVar27 = param_3 < plVar20 + 5;
      plVar18 = plVar16;
      if (bVar27) {
        plVar18 = param_3;
      }
      plVar13[9] = plVar18[4];
      lVar3 = plVar18[1];
      lVar25 = plVar18[2];
      lVar23 = plVar18[3];
      plVar13[5] = *plVar18;
      plVar13[6] = lVar3;
      plVar13[7] = lVar25;
      plVar13[8] = lVar23;
      param_3 = param_3 + (ulong)bVar27 * 5;
      plVar16 = plVar16 + (ulong)!bVar27 * 5;
    }
    if ((param_3 != plVar20 + 5) || (plVar16 != plVar12 + 5)) {
                    /* WARNING: Subroutine does not return */
      shared::smallsort::panic_on_ord_violation();
    }
  }
  return;
LAB_00637aa0:
  if (uVar24 < uVar26) {
LAB_00638607:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  plVar20 = param_3 + uVar26 * 5;
  uVar24 = 0;
  plVar16 = plVar20;
  plVar18 = param_1;
  while( true ) {
    for (; plVar18 < param_1 + uVar15 * 5; plVar18 = plVar18 + 5) {
      bVar27 = (ulong)plVar18[4] < (ulong)plVar12[4];
      if (plVar18[4] == plVar12[4]) {
        local_120 = (char *)plVar12[1];
        local_118 = plVar12[2];
        if (local_118 == 0) {
          local_e6 = false;
        }
        else {
          local_e6 = *local_120 == '/';
        }
        local_e0 = (char *)plVar18[1];
        local_d8 = plVar18[2];
        local_110 = 0xff;
        local_e8 = 0x201;
        if (local_d8 == 0) {
          local_a6 = false;
        }
        else {
          local_a6 = *local_e0 == '/';
        }
        local_d0 = 0xff;
        local_a8 = 0x201;
        cVar11 = std[c60ef17cbf7de79f]::path::compare_components(&local_120,&local_e0);
        bVar27 = cVar11 == -1;
      }
      plVar16 = plVar16 + -5;
      plVar13 = param_3;
      if (bVar27 != false) {
        plVar13 = plVar16;
      }
      plVar13[uVar24 * 5 + 4] = plVar18[4];
      lVar3 = plVar18[1];
      lVar25 = plVar18[2];
      lVar23 = plVar18[3];
      plVar13 = plVar13 + uVar24 * 5;
      *plVar13 = *plVar18;
      plVar13[1] = lVar3;
      plVar13[2] = lVar25;
      plVar13[3] = lVar23;
      uVar24 = uVar24 + (bVar27 ^ 1);
    }
    if (uVar15 == uVar26) break;
    plVar16 = plVar16 + -5;
    param_3[uVar24 * 5 + 4] = plVar18[4];
    lVar3 = plVar18[1];
    lVar25 = plVar18[2];
    lVar23 = plVar18[3];
    plVar13 = param_3 + uVar24 * 5;
    *plVar13 = *plVar18;
    plVar13[1] = lVar3;
    plVar13[2] = lVar25;
    plVar13[3] = lVar23;
    uVar24 = uVar24 + 1;
    plVar18 = plVar18 + 5;
    uVar15 = uVar26;
  }
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar24 * 0x28);
  param_2 = uVar26 - uVar24;
  if (param_2 == 0) {
    return;
  }
  local_138 = param_1 + uVar24 * 5;
  if (uVar24 - uVar26 < 0xfffffffffffffffd) {
    plVar16 = (long *)(local_88 + uVar26 * 0x28);
    plVar12 = local_138;
    uVar15 = 0;
    do {
      lVar3 = plVar16[4];
      lVar25 = plVar16[1];
      lVar23 = plVar16[2];
      lVar5 = plVar16[3];
      *plVar12 = *plVar16;
      plVar12[1] = lVar25;
      plVar12[2] = lVar23;
      plVar12[3] = lVar5;
      plVar12[4] = lVar3;
      plVar18 = plVar20 + (uVar15 ^ 0x1ffffffffffffffe) * 5;
      lVar3 = *plVar18;
      lVar25 = plVar18[1];
      lVar23 = plVar18[2];
      lVar5 = plVar18[3];
      plVar12[9] = plVar20[(uVar15 ^ 0x1ffffffffffffffe) * 5 + 4];
      plVar12[5] = lVar3;
      plVar12[6] = lVar25;
      plVar12[7] = lVar23;
      plVar12[8] = lVar5;
      plVar12[0xe] = plVar20[(uVar15 ^ 0x1ffffffffffffffd) * 5 + 4];
      plVar18 = plVar20 + (uVar15 ^ 0x1ffffffffffffffd) * 5;
      lVar3 = plVar18[1];
      lVar25 = plVar18[2];
      lVar23 = plVar18[3];
      plVar12[10] = *plVar18;
      plVar12[0xb] = lVar3;
      plVar12[0xc] = lVar25;
      plVar12[0xd] = lVar23;
      uVar21 = uVar15 + 4;
      plVar18 = plVar20 + (uVar15 ^ 0x1ffffffffffffffc) * 5;
      lVar3 = plVar18[1];
      lVar25 = plVar18[2];
      lVar23 = plVar18[3];
      plVar12[0xf] = *plVar18;
      plVar12[0x10] = lVar3;
      plVar12[0x11] = lVar25;
      plVar12[0x12] = lVar23;
      plVar12[0x13] = plVar20[(uVar15 ^ 0x1ffffffffffffffc) * 5 + 4];
      plVar12 = plVar12 + 0x14;
      plVar16 = plVar16 + -0x14;
      uVar15 = uVar21;
    } while ((param_2 & 0xfffffffffffffffc) != uVar21);
    if ((param_2 & 3) == 0) goto LAB_00637daf;
  }
  else {
    uVar21 = 0;
  }
  lVar3 = uVar24 * 0x28 + uVar21 * 0x28;
  puVar17 = (undefined8 *)(local_88 + uVar21 * -0x28 + uVar26 * 0x28);
  lVar25 = 0;
  do {
    uVar6 = *puVar17;
    uVar7 = puVar17[1];
    uVar8 = puVar17[2];
    uVar9 = puVar17[3];
    *(undefined8 *)((long)param_1 + lVar25 + lVar3 + 0x20) = puVar17[4];
    puVar1 = (undefined8 *)((long)param_1 + lVar25 + lVar3);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    lVar25 = lVar25 + 0x28;
    puVar17 = puVar17 + -5;
  } while ((ulong)(((uint)param_2 & 3) << 3) * 5 != lVar25);
LAB_00637daf:
  if (uVar26 < uVar24) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar24,uVar26,uVar26,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
  }
  local_140 = 0;
  param_1 = local_138;
  if (param_2 < 0x21) goto LAB_0063732f;
  goto LAB_006373b4;
}


