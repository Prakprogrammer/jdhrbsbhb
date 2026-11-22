// ==== core::slice::sort::stable::driftsort_main::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}, alloc::vec::Vec<pipeline::Chunk>> @ 006160c0 (369 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>>
          (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x51615;
  if (param_2 < 0x51615) {
    uVar4 = param_2;
  }
  if (uVar4 < uVar2) {
    uVar4 = uVar2;
  }
  if (0xaa < uVar4) {
    if (uVar2 < 0x555555555555556) {
      lVar3 = uVar4 * 0x18;
      if (lVar3 == 0) {
        __ptr = (undefined8 *)&DAT_00000008;
        uVar4 = 0;
      }
      else {
        __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(lVar3,8);
        if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar3);
        }
      }
      drift::sort::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                (param_1,param_2,__ptr,uVar4,param_2 < 0x41,param_3);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      lVar3 = 0x40 - LZCOUNT(uVar4 * 0x18 + -1);
      if ((uVar4 < 0xaab) ||
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::stable::driftsort_main::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#1}>::{closure#0}, alloc::vec::Vec<pipeline::Chunk>> @ 00616240 (369 bytes)

/* core[62e902411887be45]::slice::sort::stable::driftsort_main::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#1}>::{closure#0},
   alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::driftsort_main::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_,alloc[2a0ada2ddd1fabff]::vec::Vec<pipeline[509596c7b52975b2]::Chunk>>
          (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x51615;
  if (param_2 < 0x51615) {
    uVar4 = param_2;
  }
  if (uVar4 < uVar2) {
    uVar4 = uVar2;
  }
  if (0xaa < uVar4) {
    if (uVar2 < 0x555555555555556) {
      lVar3 = uVar4 * 0x18;
      if (lVar3 == 0) {
        __ptr = (undefined8 *)&DAT_00000008;
        uVar4 = 0;
      }
      else {
        __ptr = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(lVar3,8);
        if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar3);
        }
      }
      drift::sort::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                (param_1,param_2,__ptr,uVar4,param_2 < 0x41,param_3);
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        return;
      }
      lVar3 = 0x40 - LZCOUNT(uVar4 * 0x18 + -1);
      if ((uVar4 < 0xaab) ||
         (cVar1 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar3), cVar1 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar3 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar3 * 8 + -0x3c8) = __ptr;
        return;
      }
      return;
    }
    alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  drift::sort::
  <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
            ();
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}> @ 00619680 (288 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0}> */

long __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
          (long param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar5 = param_4 * 0x60;
    lVar9 = param_4 * 0xa8;
    param_1 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                        (param_1,param_1 + lVar5,param_1 + lVar9,param_4,param_5);
    param_2 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                        (param_2,param_2 + lVar5,param_2 + lVar9,param_4,param_5);
    param_3 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                        (param_3,lVar5 + param_3,lVar9 + param_3,param_4,param_5);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x10);
  uVar4 = *(ulong *)(*(long *)*param_5 + 0x70);
  if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar6,uVar4,&PTR_s_src_v3b_rs_00210968);
  }
  uVar8 = (ulong)*(uint *)(param_2 + 0x10);
  if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar8,uVar4,&PTR_s_src_v3b_rs_00210968);
  }
  uVar7 = (ulong)*(uint *)(param_3 + 0x10);
  if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar7,uVar4,&PTR_s_src_v3b_rs_00210968);
  }
  lVar5 = *(long *)(*(long *)*param_5 + 0x68);
  bVar1 = *(byte *)(lVar5 + 0x18 + uVar8 * 0x20);
  bVar2 = *(byte *)(lVar5 + 0x18 + uVar6 * 0x20);
  bVar3 = *(byte *)(lVar5 + 0x18 + uVar7 * 0x20);
  if (bVar3 < bVar1 != bVar1 < bVar2) {
    param_2 = param_3;
  }
  if (bVar3 < bVar2 != bVar1 < bVar2) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#1}>::{closure#0}> @ 006197a0 (532 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#1}>::{closure#0}> */

long __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
          (long param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

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
  long lVar12;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar5 = param_4 * 0x60;
    lVar12 = param_4 * 0xa8;
    param_1 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                        (param_1,param_1 + lVar5,param_1 + lVar12,param_4,param_5);
    param_2 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                        (param_2,param_2 + lVar5,param_2 + lVar12,param_4,param_5);
    param_3 = <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                        (param_3,lVar5 + param_3,lVar12 + param_3,param_4,param_5);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x10);
  plVar3 = *(long **)*param_5;
  uVar4 = *(ulong *)(*plVar3 + 0x70);
  if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar8,uVar4,&PTR_s_src_parse_rs_00210c28);
  }
  uVar6 = (ulong)*(uint *)(param_2 + 0x10);
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
  if (uVar4 <= uVar6) goto LAB_0061999a;
  cVar2 = *(char *)(lVar5 + 0x18 + uVar6 * 0x20);
  if (cVar2 == '\0') {
    bVar10 = (*(int *)plVar3[1] == 2) * '\x03';
    uVar6 = (ulong)*(uint *)(param_3 + 0x10);
    if (cVar1 != '\x02') goto LAB_006198a6;
LAB_006198da:
    bVar11 = 2;
  }
  else {
    bVar10 = 1;
    if (cVar2 != '\x01') {
      bVar10 = 2;
    }
    uVar6 = (ulong)*(uint *)(param_3 + 0x10);
    if (cVar1 == '\x02') goto LAB_006198da;
LAB_006198a6:
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
LAB_0061999a:
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar6,uVar4,&PTR_s_src_parse_rs_00210c28);
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}> @ 0061c900 (527 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
          (long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  
  puVar13 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x28);
  puVar15 = *(undefined8 **)(param_3 + 0x70);
  if (puVar15 <= puVar13) {
LAB_0061cade:
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(puVar13,puVar15,&PTR_s_src_v3b_rs_00210968);
  }
  puVar16 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
  if (puVar15 <= puVar16) {
LAB_0061caeb:
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(puVar16,puVar15,&PTR_s_src_v3b_rs_00210968);
  }
  puVar9 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x58);
  if (puVar9 < puVar15) {
    puVar11 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x40);
    if (puVar15 <= puVar11) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(puVar11,puVar15,&PTR_s_src_v3b_rs_00210968);
    }
    lVar6 = *(long *)(param_3 + 0x68);
    lVar14 = (long)puVar13 * 0x20;
    puVar13 = (undefined8 *)0x0;
    bVar17 = *(byte *)(lVar6 + 0x18 + (long)puVar16 * 0x20) < *(byte *)(lVar6 + 0x18 + lVar14);
    puVar10 = (undefined8 *)(param_1 + 0x48);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    if (*(byte *)(lVar6 + 0x18 + (long)puVar11 * 0x20) <
        *(byte *)(lVar6 + 0x18 + (long)puVar9 * 0x20)) {
      puVar10 = (undefined8 *)(param_1 + 0x30);
      puVar8 = (undefined8 *)(param_1 + 0x48);
    }
    puVar9 = (undefined8 *)(ulong)*(uint *)(puVar8 + 2);
    if (puVar9 < puVar15) {
      puVar11 = (undefined8 *)(param_1 + (ulong)bVar17 * 0x18);
      puVar13 = (undefined8 *)(ulong)*(uint *)(puVar11 + 2);
      if (puVar15 <= puVar13) goto LAB_0061cade;
      puVar16 = (undefined8 *)(ulong)*(uint *)(puVar10 + 2);
      if (puVar16 < puVar15) {
        puVar1 = (undefined8 *)(param_1 + (ulong)!bVar17 * 0x18);
        puVar12 = (undefined8 *)(ulong)*(uint *)(puVar1 + 2);
        if (puVar12 < puVar15) {
          bVar2 = *(byte *)(lVar6 + 0x18 + (long)puVar9 * 0x20);
          bVar3 = *(byte *)(lVar6 + 0x18 + (long)puVar13 * 0x20);
          bVar4 = *(byte *)(lVar6 + 0x18 + (long)puVar16 * 0x20);
          bVar5 = *(byte *)(lVar6 + 0x18 + (long)puVar12 * 0x20);
          puVar16 = puVar1;
          if (bVar5 < bVar4) {
            puVar16 = puVar8;
          }
          puVar13 = puVar8;
          if (bVar3 < bVar2) {
            puVar13 = puVar1;
            puVar16 = puVar11;
          }
          if (bVar5 < bVar4) {
            puVar13 = puVar10;
          }
          puVar12 = (undefined8 *)(ulong)*(uint *)(puVar13 + 2);
          if (puVar12 < puVar15) {
            puVar9 = (undefined8 *)(ulong)*(uint *)(puVar16 + 2);
            if (puVar9 < puVar15) {
              if (bVar5 < bVar4) {
                puVar10 = puVar1;
              }
              if (bVar3 < bVar2) {
                puVar11 = puVar8;
              }
              puVar15 = puVar13;
              if (*(byte *)(lVar6 + 0x18 + (long)puVar9 * 0x20) <
                  *(byte *)(lVar6 + 0x18 + (long)puVar12 * 0x20)) {
                puVar15 = puVar16;
                puVar16 = puVar13;
              }
              param_2[2] = puVar11[2];
              uVar7 = puVar11[1];
              *param_2 = *puVar11;
              param_2[1] = uVar7;
              param_2[5] = puVar16[2];
              uVar7 = puVar16[1];
              param_2[3] = *puVar16;
              param_2[4] = uVar7;
              param_2[8] = puVar15[2];
              uVar7 = puVar15[1];
              param_2[6] = *puVar15;
              param_2[7] = uVar7;
              uVar7 = puVar10[1];
              param_2[9] = *puVar10;
              param_2[10] = uVar7;
              param_2[0xb] = puVar10[2];
              return;
            }
            goto LAB_0061cad1;
          }
        }
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(puVar12,puVar15,&PTR_s_src_v3b_rs_00210968);
      }
      goto LAB_0061caeb;
    }
  }
LAB_0061cad1:
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(puVar9,puVar15,&PTR_s_src_v3b_rs_00210968,puVar9,puVar13);
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#1}>::{closure#0}> @ 0061cb20 (862 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#1}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
          (long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  uVar13 = (ulong)*(uint *)(param_1 + 0x28);
  uVar3 = *(ulong *)(*param_3 + 0x70);
  if (uVar3 <= uVar13) {
LAB_0061ce67:
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar13,uVar3,&PTR_s_src_parse_rs_00210c28);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x10);
  lVar4 = *(long *)(*param_3 + 0x68);
  cVar2 = *(char *)(lVar4 + 0x18 + uVar13 * 0x20);
  if (cVar2 == '\0') {
    bVar14 = (*(int *)param_3[1] == 2) * '\x03';
  }
  else {
    bVar14 = 1;
    if (cVar2 != '\x01') {
      bVar14 = 2;
    }
  }
  if (uVar8 < uVar3) {
    cVar2 = *(char *)(lVar4 + 0x18 + uVar8 * 0x20);
    if (cVar2 == '\0') {
      bVar6 = (*(int *)param_3[1] == 2) * '\x03';
    }
    else {
      bVar6 = 1;
      if (cVar2 != '\x01') {
        bVar6 = 2;
      }
    }
    uVar13 = (ulong)*(uint *)(param_1 + 0x58);
    if (uVar3 <= uVar13) goto LAB_0061ce67;
    uVar8 = (ulong)*(uint *)(param_1 + 0x40);
    cVar2 = *(char *)(lVar4 + 0x18 + uVar13 * 0x20);
    if (cVar2 == '\0') {
      bVar9 = (*(int *)param_3[1] == 2) * '\x03';
    }
    else {
      bVar9 = 1;
      if (cVar2 != '\x01') {
        bVar9 = 2;
      }
    }
    if (uVar8 < uVar3) {
      cVar2 = *(char *)(lVar4 + 0x18 + uVar8 * 0x20);
      if (cVar2 == '\0') {
        bVar11 = (*(int *)param_3[1] == 2) * '\x03';
      }
      else {
        bVar11 = 1;
        if (cVar2 != '\x01') {
          bVar11 = 2;
        }
      }
      puVar15 = (undefined8 *)(param_1 + 0x48);
      puVar17 = (undefined8 *)(param_1 + 0x30);
      if (bVar9 < bVar11) {
        puVar15 = (undefined8 *)(param_1 + 0x30);
        puVar17 = (undefined8 *)(param_1 + 0x48);
      }
      uVar13 = (ulong)*(uint *)(puVar17 + 2);
      if (uVar3 <= uVar13) goto LAB_0061ce67;
      uVar10 = (ulong)(bVar14 < bVar6);
      uVar8 = (ulong)*(uint *)(param_1 + 0x10 + uVar10 * 0x18);
      cVar2 = *(char *)(lVar4 + 0x18 + uVar13 * 0x20);
      if (cVar2 == '\0') {
        bVar9 = (*(int *)param_3[1] == 2) * '\x03';
      }
      else {
        bVar9 = 1;
        if (cVar2 != '\x01') {
          bVar9 = 2;
        }
      }
      if (uVar8 < uVar3) {
        cVar2 = *(char *)(lVar4 + 0x18 + uVar8 * 0x20);
        if (cVar2 == '\0') {
          bVar11 = (*(int *)param_3[1] == 2) * '\x03';
        }
        else {
          bVar11 = 1;
          if (cVar2 != '\x01') {
            bVar11 = 2;
          }
        }
        uVar13 = (ulong)*(uint *)(puVar15 + 2);
        if (uVar3 <= uVar13) goto LAB_0061ce67;
        puVar1 = (undefined8 *)(param_1 + (ulong)(bVar14 >= bVar6) * 0x18);
        uVar8 = (ulong)*(uint *)(puVar1 + 2);
        cVar2 = *(char *)(lVar4 + 0x18 + uVar13 * 0x20);
        if (cVar2 == '\0') {
          bVar14 = (*(int *)param_3[1] == 2) * '\x03';
        }
        else {
          bVar14 = 1;
          if (cVar2 != '\x01') {
            bVar14 = 2;
          }
        }
        if (uVar8 < uVar3) {
          puVar19 = (undefined8 *)(param_1 + uVar10 * 0x18);
          cVar2 = *(char *)(lVar4 + 0x18 + uVar8 * 0x20);
          if (cVar2 == '\0') {
            bVar6 = (*(int *)param_3[1] == 2) * '\x03';
          }
          else {
            bVar6 = 1;
            if (cVar2 != '\x01') {
              bVar6 = 2;
            }
          }
          puVar18 = puVar1;
          if (bVar14 < bVar6) {
            puVar18 = puVar17;
          }
          puVar16 = puVar17;
          if (bVar9 < bVar11) {
            puVar16 = puVar1;
            puVar18 = puVar19;
          }
          if (bVar14 < bVar6) {
            puVar16 = puVar15;
          }
          uVar8 = (ulong)*(uint *)(puVar16 + 2);
          if (uVar8 < uVar3) {
            uVar13 = (ulong)*(uint *)(puVar18 + 2);
            cVar2 = *(char *)(lVar4 + 0x18 + uVar8 * 0x20);
            if (cVar2 == '\0') {
              bVar7 = (*(int *)param_3[1] == 2) * '\x03';
            }
            else {
              bVar7 = 1;
              if (cVar2 != '\x01') {
                bVar7 = 2;
              }
            }
            if (uVar3 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check(uVar13,uVar3,&PTR_s_src_parse_rs_00210c28);
            }
            cVar2 = *(char *)(lVar4 + 0x18 + uVar13 * 0x20);
            if (cVar2 == '\0') {
              bVar12 = (*(int *)param_3[1] == 2) * '\x03';
            }
            else {
              bVar12 = 1;
              if (cVar2 != '\x01') {
                bVar12 = 2;
              }
            }
            if (bVar14 < bVar6) {
              puVar15 = puVar1;
            }
            if (bVar9 < bVar11) {
              puVar19 = puVar17;
            }
            puVar17 = puVar16;
            if (bVar7 < bVar12) {
              puVar17 = puVar18;
              puVar18 = puVar16;
            }
            param_2[2] = puVar19[2];
            uVar5 = puVar19[1];
            *param_2 = *puVar19;
            param_2[1] = uVar5;
            param_2[5] = puVar18[2];
            uVar5 = puVar18[1];
            param_2[3] = *puVar18;
            param_2[4] = uVar5;
            param_2[8] = puVar17[2];
            uVar5 = puVar17[1];
            param_2[6] = *puVar17;
            param_2[7] = uVar5;
            uVar5 = puVar15[1];
            param_2[9] = *puVar15;
            param_2[10] = uVar5;
            param_2[0xb] = puVar15[2];
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar8,uVar3,&PTR_s_src_parse_rs_00210c28);
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}> @ 00623b60 (273 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
          (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  
  uVar4 = *(ulong *)(param_3 + 0x70);
  lVar13 = 0x18;
  puVar15 = param_1 + 3;
  puVar14 = param_1;
  do {
    puVar10 = puVar15;
    uVar2 = *(uint *)(puVar14 + 5);
    uVar11 = (ulong)uVar2;
    if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(uVar11,uVar4,&PTR_s_src_v3b_rs_00210968);
    }
    uVar12 = (ulong)*(uint *)(puVar14 + 2);
    if (uVar4 <= uVar12) {
LAB_00623c62:
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(uVar12,uVar4,&PTR_s_src_v3b_rs_00210968);
    }
    lVar5 = *(long *)(param_3 + 0x68);
    bVar1 = *(byte *)(lVar5 + 0x18 + uVar11 * 0x20);
    if (*(byte *)(lVar5 + 0x18 + uVar12 * 0x20) < bVar1) {
      uVar6 = *puVar10;
      uVar7 = puVar10[1];
      uVar3 = *(undefined4 *)((long)puVar14 + 0x2c);
      lVar9 = lVar13;
      do {
        lVar16 = lVar9;
        *(undefined8 *)((long)param_1 + lVar16 + 0x10) =
             *(undefined8 *)((long)param_1 + lVar16 + -8);
        puVar15 = (undefined8 *)((long)param_1 + lVar16 + -0x18);
        uVar8 = puVar15[1];
        *(undefined8 *)((long)param_1 + lVar16) = *puVar15;
        ((undefined8 *)((long)param_1 + lVar16))[1] = uVar8;
        if (lVar16 == 0x18) {
          puVar15 = param_1;
          goto LAB_00623b96;
        }
        uVar12 = (ulong)*(uint *)((long)param_1 + lVar16 + -0x20);
        if (uVar4 <= uVar12) goto LAB_00623c62;
        lVar9 = lVar16 + -0x18;
      } while (*(byte *)(lVar5 + 0x18 + uVar12 * 0x20) < bVar1);
      puVar15 = (undefined8 *)(lVar16 + -0x18 + (long)param_1);
LAB_00623b96:
      *puVar15 = uVar6;
      puVar15[1] = uVar7;
      *(uint *)((long)param_1 + lVar16 + -8) = uVar2;
      *(undefined4 *)((long)param_1 + lVar16 + -4) = uVar3;
    }
    lVar13 = lVar13 + 0x18;
    puVar15 = puVar10 + 3;
    puVar14 = puVar10;
    if (puVar10 + 3 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::stable::drift::sort::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}> @ 00627e60 (2085 bytes)

/* core[62e902411887be45]::slice::sort::stable::drift::sort::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
          (long param_1,ulong param_2,undefined8 *param_3,ulong param_4,char param_5,
          undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  bool bVar31;
  ulong local_2c0;
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
    uVar16 = param_2 - (param_2 >> 1);
    uVar13 = 0x40;
    if (uVar16 < 0x40) {
      uVar13 = uVar16;
    }
  }
  else {
    uVar11 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar13 = (ulong)(uVar11 - (uVar11 >> 1));
    uVar13 = (param_2 >> (uVar13 & 0x3f)) + (1L << (uVar13 & 0x3f)) >> 1;
  }
  uVar16 = 1;
  uVar18 = 0;
  uVar26 = 0;
  local_2c0 = param_2;
  if (param_2 == 0) goto LAB_00627f5e;
LAB_00627f80:
  puVar25 = (undefined8 *)(param_1 + uVar18 * 0x18);
  if (local_2c0 < uVar13) {
LAB_00627f94:
    if (param_5 == '\0') {
      if (uVar13 < local_2c0) {
        local_2c0 = uVar13;
      }
      local_2c0 = local_2c0 * 2;
    }
    else {
      if (0x1f < local_2c0) {
        local_2c0 = 0x20;
      }
      quicksort::quicksort::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                (puVar25,local_2c0,param_3,param_4,0,0,param_6);
      local_2c0 = (local_2c0 & 0xffffffff) * 2 + 1;
    }
  }
  else {
    if (local_2c0 < 2) {
      uVar27 = local_2c0;
    }
    else {
      uVar22 = (ulong)*(uint *)(puVar25 + 5);
      uVar21 = *(ulong *)(*(long *)*param_6 + 0x70);
      if (uVar21 <= uVar22) {
LAB_006286a0:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar22,uVar21,&PTR_s_src_v3b_rs_00210968);
      }
      uVar28 = (ulong)*(uint *)(puVar25 + 2);
      if (uVar21 <= uVar28) {
LAB_006286ad:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar28,uVar21,&PTR_s_src_v3b_rs_00210968);
      }
      lVar29 = *(long *)(*(long *)*param_6 + 0x68);
      bVar1 = *(byte *)(lVar29 + 0x18 + uVar22 * 0x20);
      bVar2 = *(byte *)(lVar29 + 0x18 + uVar28 * 0x20);
      if (bVar2 < bVar1) {
        if (local_2c0 != 2) {
          puVar19 = (uint *)(param_1 + 0x40 + uVar18 * 0x18);
          uVar27 = 2;
          do {
            uVar22 = (ulong)*puVar19;
            if (uVar21 <= uVar22) goto LAB_006286a0;
            uVar28 = (ulong)puVar19[-6];
            if (uVar21 <= uVar28) goto LAB_006286ad;
            if (*(byte *)(lVar29 + 0x18 + uVar22 * 0x20) <= *(byte *)(lVar29 + 0x18 + uVar28 * 0x20)
               ) goto LAB_0062818d;
            uVar27 = uVar27 + 1;
            puVar19 = puVar19 + 6;
          } while (local_2c0 != uVar27);
          goto LAB_0062818a;
        }
        puVar15 = puVar25 + 6;
        uVar27 = 2;
LAB_00628088:
        uVar22 = 0;
LAB_0062808a:
        uVar21 = ~uVar22;
        uVar3 = puVar25[uVar22 * 3];
        uVar6 = (puVar25 + uVar22 * 3)[1];
        uVar7 = (puVar15 + uVar21 * 3)[1];
        puVar25[uVar22 * 3] = puVar15[uVar21 * 3];
        (puVar25 + uVar22 * 3)[1] = uVar7;
        puVar15[uVar21 * 3] = uVar3;
        (puVar15 + uVar21 * 3)[1] = uVar6;
        uVar3 = puVar25[uVar22 * 3 + 2];
        puVar25[uVar22 * 3 + 2] = puVar15[uVar21 * 3 + 2];
        puVar15[uVar21 * 3 + 2] = uVar3;
      }
      else {
        uVar27 = 2;
        if (local_2c0 != 2) {
          puVar19 = (uint *)(param_1 + 0x40 + uVar18 * 0x18);
          do {
            uVar22 = (ulong)*puVar19;
            if (uVar21 <= uVar22) goto LAB_006286a0;
            uVar28 = (ulong)puVar19[-6];
            if (uVar21 <= uVar28) goto LAB_006286ad;
            if (*(byte *)(lVar29 + 0x18 + uVar28 * 0x20) < *(byte *)(lVar29 + 0x18 + uVar22 * 0x20))
            goto LAB_0062818d;
            uVar27 = uVar27 + 1;
            puVar19 = puVar19 + 6;
          } while (local_2c0 != uVar27);
LAB_0062818a:
          uVar27 = local_2c0;
LAB_0062818d:
          if (uVar27 < uVar13) goto LAB_00627f94;
          if ((bVar2 < bVar1) && (uVar21 = uVar27 >> 1, uVar21 != 0)) {
            puVar15 = puVar25 + uVar27 * 3;
            if (uVar21 == 1) goto LAB_00628088;
            puVar24 = (undefined8 *)(uVar18 * 0x18 + uVar27 * 0x18 + param_1 + -0x18);
            uVar22 = 0;
            puVar14 = puVar25;
            do {
              uVar3 = puVar14[2];
              uVar28 = uVar22 ^ 0x1ffffffffffffffe;
              uVar6 = puVar24[1];
              uVar7 = puVar24[2];
              uVar8 = *puVar14;
              uVar9 = puVar14[1];
              *puVar14 = *puVar24;
              *puVar24 = uVar8;
              puVar24[1] = uVar9;
              puVar24[2] = uVar3;
              uVar3 = puVar15[uVar28 * 3];
              uVar8 = (puVar15 + uVar28 * 3)[1];
              uVar9 = puVar14[3];
              uVar10 = puVar14[4];
              puVar14[1] = uVar6;
              puVar14[2] = uVar7;
              puVar14[3] = uVar3;
              puVar14[4] = uVar8;
              puVar15[uVar28 * 3] = uVar9;
              (puVar15 + uVar28 * 3)[1] = uVar10;
              uVar3 = puVar14[5];
              puVar14[5] = puVar15[uVar28 * 3 + 2];
              puVar15[uVar28 * 3 + 2] = uVar3;
              uVar22 = uVar22 + 2;
              puVar14 = puVar14 + 6;
              puVar24 = puVar24 + -6;
            } while ((uVar21 & 0xfffffffffffffffe) != uVar22);
            if ((uVar21 & 1) != 0) goto LAB_0062808a;
          }
        }
      }
    }
    local_2c0 = uVar27 * 2 + 1;
  }
  lVar29 = LZCOUNT(((local_2c0 >> 1) + uVar18 * 2) * uVar12 ^ (uVar18 * 2 - (uVar16 >> 1)) * uVar12)
  ;
  uVar21 = uVar16;
  do {
    uVar16 = local_2c0;
    if (1 < uVar26) {
      do {
        while( true ) {
          if (abStack_283[uVar26] < (byte)lVar29) goto LAB_00628626;
          uVar26 = uVar26 - 1;
          uVar28 = auStack_240[uVar26];
          uVar27 = uVar28 >> 1;
          uVar30 = uVar21 >> 1;
          uVar22 = uVar27 + uVar30;
          if ((param_4 < uVar22) || ((((uint)uVar28 | (uint)uVar21) & 1) != 0)) break;
          uVar21 = uVar22 * 2;
          if (uVar26 < 2) goto LAB_00628620;
        }
        puVar25 = (undefined8 *)(param_1 + (uVar18 - uVar22) * 0x18);
        if ((uVar28 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                    (puVar25,uVar27,param_3,param_4,(int)LZCOUNT(uVar27 | 1) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar21 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                    (puVar25 + uVar27 * 3,uVar30,param_3,param_4,(int)LZCOUNT(uVar30 | 1) * 2 ^ 0x7e
                     ,0,param_6);
        }
        if ((uVar30 != 0) && (uVar27 != 0)) {
          uVar21 = uVar30;
          if (uVar27 < uVar30) {
            uVar21 = uVar27;
          }
          if (uVar21 <= param_4) {
            plVar4 = (long *)*param_6;
            puVar15 = puVar25 + uVar27 * 3;
            puVar14 = puVar25;
            if (uVar30 < uVar27) {
              puVar14 = puVar15;
            }
            (*(code *)PTR_memcpy_00841de0)(param_3,puVar14,uVar21 * 0x18);
            puVar24 = param_3 + uVar21 * 3;
            lVar5 = *plVar4;
            uVar21 = *(ulong *)(lVar5 + 0x70);
            puVar14 = param_3;
            if (uVar30 < uVar27) {
              puVar17 = (undefined8 *)(uVar18 * 0x18 + param_1 + -0x18);
              puVar20 = puVar15;
              do {
                uVar23 = (ulong)*(uint *)(puVar24 + -1);
                if (uVar21 <= uVar23) goto LAB_00628696;
                uVar22 = (ulong)*(uint *)(puVar20 + -1);
                if (uVar21 <= uVar22) goto LAB_006286a0;
                bVar31 = *(byte *)(*(long *)(lVar5 + 0x68) + 0x18 + uVar22 * 0x20) <
                         *(byte *)(*(long *)(lVar5 + 0x68) + 0x18 + uVar23 * 0x20);
                puVar15 = puVar24 + -3;
                if (bVar31) {
                  puVar15 = puVar20 + -3;
                }
                puVar17[2] = puVar15[2];
                uVar3 = puVar15[1];
                *puVar17 = *puVar15;
                puVar17[1] = uVar3;
                puVar20 = puVar20 + -3 + (ulong)!bVar31 * 3;
                puVar24 = puVar24 + -3 + (ulong)bVar31 * 3;
              } while ((puVar20 != puVar25) && (puVar17 = puVar17 + -3, puVar24 != param_3));
            }
            else {
              puVar20 = puVar25;
              do {
                uVar23 = (ulong)*(uint *)(puVar15 + 2);
                if (uVar21 <= uVar23) {
LAB_00628696:
                    /* WARNING: Subroutine does not return */
                  panicking::panic_bounds_check(uVar23,uVar21,&PTR_s_src_v3b_rs_00210968);
                }
                uVar28 = (ulong)*(uint *)(puVar14 + 2);
                if (uVar21 <= uVar28) goto LAB_006286ad;
                puVar17 = (undefined8 *)0x0;
                bVar31 = *(byte *)(*(long *)(lVar5 + 0x68) + 0x18 + uVar28 * 0x20) <
                         *(byte *)(*(long *)(lVar5 + 0x68) + 0x18 + uVar23 * 0x20);
                puVar25 = puVar14;
                if (bVar31) {
                  puVar25 = puVar15;
                }
                puVar20[2] = puVar25[2];
                uVar3 = puVar25[1];
                *puVar20 = *puVar25;
                puVar20[1] = uVar3;
                puVar14 = puVar14 + (ulong)!bVar31 * 3;
                puVar20 = puVar20 + 3;
                if (puVar14 == puVar24) break;
                puVar17 = (undefined8 *)((ulong)bVar31 * 3);
                puVar15 = puVar15 + (ulong)bVar31 * 3;
              } while (puVar15 != (undefined8 *)(param_1 + uVar18 * 0x18));
            }
            (*(code *)PTR_memcpy_00841de0)(puVar20,puVar14,(long)puVar24 - (long)puVar14,puVar17);
          }
        }
        uVar21 = (uVar27 + uVar30) * 2 + 1;
      } while (1 < uVar26);
LAB_00628620:
      uVar26 = 1;
    }
LAB_00628626:
    auStack_240[uVar26] = uVar21;
    abStack_283[uVar26 + 1] = (byte)lVar29;
    if (param_2 <= uVar18) {
      if ((uVar21 & 1) == 0) {
        quicksort::quicksort::
        <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                  (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0,param_6);
      }
      return;
    }
    uVar26 = uVar26 + 1;
    uVar18 = uVar18 + (uVar16 >> 1);
    local_2c0 = param_2 - uVar18;
    if (uVar18 <= param_2 && param_2 - uVar18 != 0) goto LAB_00627f80;
LAB_00627f5e:
    lVar29 = 0;
    local_2c0 = 1;
    uVar21 = uVar16;
  } while( true );
}


// ==== core::slice::sort::stable::drift::sort::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#1}>::{closure#0}> @ 006286c0 (2472 bytes)

/* core[62e902411887be45]::slice::sort::stable::drift::sort::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#1}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::drift::sort::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
          (long param_1,ulong param_2,undefined8 *param_3,ulong param_4,char param_5,
          undefined8 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  undefined8 *puVar22;
  byte bVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  byte bVar28;
  uint *puVar29;
  ulong uVar30;
  ulong uVar31;
  bool bVar32;
  ulong local_2e0;
  ulong local_2a8;
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
    uVar17 = param_2 - (param_2 >> 1);
    uVar13 = 0x40;
    if (uVar17 < 0x40) {
      uVar13 = uVar17;
    }
  }
  else {
    uVar11 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar13 = (ulong)(uVar11 - (uVar11 >> 1));
    uVar13 = (param_2 >> (uVar13 & 0x3f)) + (1L << (uVar13 & 0x3f)) >> 1;
  }
  uVar17 = 1;
  uVar24 = 0;
  local_2e0 = 0;
  local_2a8 = param_2;
  if (param_2 == 0) goto LAB_006287d3;
LAB_00628800:
  puVar26 = (undefined8 *)(param_1 + local_2e0 * 0x18);
  if (local_2a8 < uVar13) {
LAB_00628819:
    if (param_5 == '\0') {
      if (uVar13 < local_2a8) {
        local_2a8 = uVar13;
      }
      local_2a8 = local_2a8 * 2;
    }
    else {
      if (0x1f < local_2a8) {
        local_2a8 = 0x20;
      }
      quicksort::quicksort::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                (puVar26,local_2a8,param_3,param_4,0,0,param_6);
      local_2a8 = (local_2a8 & 0xffffffff) * 2 + 1;
    }
  }
  else {
    if (local_2a8 < 2) {
      uVar27 = local_2a8;
    }
    else {
      uVar19 = (ulong)*(uint *)(puVar26 + 5);
      plVar3 = *(long **)*param_6;
      uVar18 = *(ulong *)(*plVar3 + 0x70);
      if (uVar18 <= uVar19) {
LAB_006290b6:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar19,uVar18,&PTR_s_src_parse_rs_00210c28);
      }
      lVar20 = *(long *)(*plVar3 + 0x68);
      cVar1 = *(char *)(lVar20 + 0x18 + uVar19 * 0x20);
      if (cVar1 == '\0') {
        bVar28 = (*(int *)plVar3[1] == 2) * '\x03';
      }
      else {
        bVar28 = 1;
        if (cVar1 != '\x01') {
          bVar28 = 2;
        }
      }
      uVar30 = (ulong)*(uint *)(puVar26 + 2);
      if (uVar18 <= uVar30) {
LAB_006290c3:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar30,uVar18,&PTR_s_src_parse_rs_00210c28);
      }
      cVar1 = *(char *)(lVar20 + 0x18 + uVar30 * 0x20);
      if (cVar1 == '\0') {
        bVar21 = (*(int *)plVar3[1] == 2) * '\x03';
        if (bVar28 < bVar21) goto LAB_0062890f;
LAB_00628974:
        uVar27 = 2;
        if (local_2a8 != 2) {
          puVar29 = (uint *)(param_1 + 0x40 + local_2e0 * 0x18);
          do {
            uVar30 = (ulong)*puVar29;
            if (uVar18 <= uVar30) goto LAB_006290c3;
            cVar1 = *(char *)(lVar20 + 0x18 + uVar30 * 0x20);
            if (cVar1 == '\0') {
              bVar23 = (*(int *)plVar3[1] == 2) * '\x03';
            }
            else {
              bVar23 = 1;
              if (cVar1 != '\x01') {
                bVar23 = 2;
              }
            }
            if (uVar18 <= uVar19) goto LAB_006290b6;
            cVar1 = *(char *)(lVar20 + 0x18 + uVar19 * 0x20);
            if (cVar1 == '\0') {
              bVar10 = (*(int *)plVar3[1] == 2) * '\x03';
            }
            else {
              bVar10 = 1;
              if (cVar1 != '\x01') {
                bVar10 = 2;
              }
            }
            uVar31 = uVar27;
            if (bVar23 < bVar10) break;
            uVar27 = uVar27 + 1;
            puVar29 = puVar29 + 6;
            uVar19 = uVar30;
            uVar31 = local_2a8;
          } while (local_2a8 != uVar27);
joined_r0x00628b40:
          uVar27 = uVar31;
          if (uVar27 < uVar13) goto LAB_00628819;
          if ((bVar28 < bVar21) && (uVar18 = uVar27 >> 1, uVar18 != 0)) {
            puVar14 = puVar26 + uVar27 * 3;
            if (uVar18 == 1) goto LAB_00628923;
            puVar25 = (undefined8 *)(local_2e0 * 0x18 + uVar27 * 0x18 + param_1 + -0x18);
            uVar19 = 0;
            puVar15 = puVar26;
            do {
              uVar2 = puVar15[2];
              uVar30 = uVar19 ^ 0x1ffffffffffffffe;
              uVar5 = puVar25[1];
              uVar6 = puVar25[2];
              uVar7 = *puVar15;
              uVar8 = puVar15[1];
              *puVar15 = *puVar25;
              *puVar25 = uVar7;
              puVar25[1] = uVar8;
              puVar25[2] = uVar2;
              uVar2 = puVar14[uVar30 * 3];
              uVar7 = (puVar14 + uVar30 * 3)[1];
              uVar8 = puVar15[3];
              uVar9 = puVar15[4];
              puVar15[1] = uVar5;
              puVar15[2] = uVar6;
              puVar15[3] = uVar2;
              puVar15[4] = uVar7;
              puVar14[uVar30 * 3] = uVar8;
              (puVar14 + uVar30 * 3)[1] = uVar9;
              uVar2 = puVar15[5];
              puVar15[5] = puVar14[uVar30 * 3 + 2];
              puVar14[uVar30 * 3 + 2] = uVar2;
              uVar19 = uVar19 + 2;
              puVar15 = puVar15 + 6;
              puVar25 = puVar25 + -6;
            } while ((uVar18 & 0xfffffffffffffffe) != uVar19);
            if ((uVar18 & 1) != 0) goto LAB_00628925;
          }
        }
      }
      else {
        bVar21 = 1;
        if (cVar1 != '\x01') {
          bVar21 = 2;
        }
        if (bVar21 <= bVar28) goto LAB_00628974;
LAB_0062890f:
        if (local_2a8 != 2) {
          puVar29 = (uint *)(param_1 + 0x40 + local_2e0 * 0x18);
          uVar27 = 2;
          do {
            uVar30 = (ulong)*puVar29;
            if (uVar18 <= uVar30) goto LAB_006290c3;
            cVar1 = *(char *)(lVar20 + 0x18 + uVar30 * 0x20);
            if (cVar1 == '\0') {
              bVar23 = (*(int *)plVar3[1] == 2) * '\x03';
            }
            else {
              bVar23 = 1;
              if (cVar1 != '\x01') {
                bVar23 = 2;
              }
            }
            if (uVar18 <= uVar19) goto LAB_006290b6;
            cVar1 = *(char *)(lVar20 + 0x18 + uVar19 * 0x20);
            if (cVar1 == '\0') {
              bVar10 = (*(int *)plVar3[1] == 2) * '\x03';
            }
            else {
              bVar10 = 1;
              if (cVar1 != '\x01') {
                bVar10 = 2;
              }
            }
            uVar31 = uVar27;
            if (bVar10 <= bVar23) break;
            uVar27 = uVar27 + 1;
            puVar29 = puVar29 + 6;
            uVar19 = uVar30;
            uVar31 = local_2a8;
          } while (local_2a8 != uVar27);
          goto joined_r0x00628b40;
        }
        puVar14 = puVar26 + 6;
        uVar27 = 2;
LAB_00628923:
        uVar19 = 0;
LAB_00628925:
        uVar18 = ~uVar19;
        uVar2 = puVar26[uVar19 * 3];
        uVar5 = (puVar26 + uVar19 * 3)[1];
        uVar6 = (puVar14 + uVar18 * 3)[1];
        puVar26[uVar19 * 3] = puVar14[uVar18 * 3];
        (puVar26 + uVar19 * 3)[1] = uVar6;
        puVar14[uVar18 * 3] = uVar2;
        (puVar14 + uVar18 * 3)[1] = uVar5;
        uVar2 = puVar26[uVar19 * 3 + 2];
        puVar26[uVar19 * 3 + 2] = puVar14[uVar18 * 3 + 2];
        puVar14[uVar18 * 3 + 2] = uVar2;
      }
    }
    local_2a8 = uVar27 * 2 + 1;
  }
  lVar20 = LZCOUNT(((local_2a8 >> 1) + local_2e0 * 2) * uVar12 ^
                   (local_2e0 * 2 - (uVar17 >> 1)) * uVar12);
  uVar18 = uVar17;
  do {
    uVar17 = local_2a8;
    if (1 < uVar24) {
      do {
        while( true ) {
          if (abStack_283[uVar24] < (byte)lVar20) goto LAB_00629045;
          uVar24 = uVar24 - 1;
          uVar30 = auStack_240[uVar24];
          uVar27 = uVar30 >> 1;
          uVar31 = uVar18 >> 1;
          uVar19 = uVar27 + uVar31;
          if ((param_4 < uVar19) || ((((uint)uVar30 | (uint)uVar18) & 1) != 0)) break;
          uVar18 = uVar19 * 2;
          if (uVar24 < 2) goto LAB_00629040;
        }
        puVar26 = (undefined8 *)(param_1 + (local_2e0 - uVar19) * 0x18);
        if ((uVar30 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                    (puVar26,uVar27,param_3,param_4,(int)LZCOUNT(uVar27 | 1) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar18 & 1) == 0) {
          quicksort::quicksort::
          <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                    (puVar26 + uVar27 * 3,uVar31,param_3,param_4,(int)LZCOUNT(uVar31 | 1) * 2 ^ 0x7e
                     ,0,param_6);
        }
        if ((uVar31 != 0) && (uVar27 != 0)) {
          uVar18 = uVar31;
          if (uVar27 < uVar31) {
            uVar18 = uVar27;
          }
          if (uVar18 <= param_4) {
            plVar3 = (long *)*param_6;
            puVar14 = puVar26 + uVar27 * 3;
            puVar15 = puVar26;
            if (uVar31 < uVar27) {
              puVar15 = puVar14;
            }
            (*(code *)PTR_memcpy_00841de0)(param_3,puVar15,uVar18 * 0x18);
            puVar25 = param_3 + uVar18 * 3;
            plVar3 = (long *)*plVar3;
            lVar4 = *plVar3;
            uVar18 = *(ulong *)(lVar4 + 0x70);
            puVar15 = param_3;
            if (uVar31 < uVar27) {
              puVar16 = (undefined8 *)(local_2e0 * 0x18 + param_1 + -0x18);
              puVar22 = puVar14;
              do {
                uVar30 = (ulong)*(uint *)(puVar25 + -1);
                if (uVar18 <= uVar30) goto LAB_006290ac;
                cVar1 = *(char *)(*(long *)(lVar4 + 0x68) + 0x18 + uVar30 * 0x20);
                if (cVar1 == '\0') {
                  bVar28 = (*(int *)plVar3[1] == 2) * '\x03';
                }
                else {
                  bVar28 = 1;
                  if (cVar1 != '\x01') {
                    bVar28 = 2;
                  }
                }
                uVar30 = (ulong)*(uint *)(puVar22 + -1);
                if (uVar18 <= uVar30) goto LAB_006290ac;
                cVar1 = *(char *)(*(long *)(lVar4 + 0x68) + 0x18 + uVar30 * 0x20);
                if (cVar1 == '\0') {
                  bVar21 = (*(int *)plVar3[1] == 2) * '\x03';
                }
                else {
                  bVar21 = 1;
                  if (cVar1 != '\x01') {
                    bVar21 = 2;
                  }
                }
                bVar32 = bVar28 < bVar21;
                puVar14 = puVar25 + -3;
                if (bVar32) {
                  puVar14 = puVar22 + -3;
                }
                puVar16[2] = puVar14[2];
                uVar2 = puVar14[1];
                *puVar16 = *puVar14;
                puVar16[1] = uVar2;
                puVar22 = puVar22 + -3 + (ulong)!bVar32 * 3;
                puVar25 = puVar25 + -3 + (ulong)bVar32 * 3;
              } while ((puVar22 != puVar26) && (puVar16 = puVar16 + -3, puVar25 != param_3));
            }
            else {
              puVar22 = puVar26;
              do {
                uVar30 = (ulong)*(uint *)(puVar14 + 2);
                if (uVar18 <= uVar30) {
LAB_006290ac:
                    /* WARNING: Subroutine does not return */
                  panicking::panic_bounds_check(uVar30,uVar18,&PTR_s_src_parse_rs_00210c28);
                }
                cVar1 = *(char *)(*(long *)(lVar4 + 0x68) + 0x18 + uVar30 * 0x20);
                if (cVar1 == '\0') {
                  bVar28 = (*(int *)plVar3[1] == 2) * '\x03';
                }
                else {
                  bVar28 = 1;
                  if (cVar1 != '\x01') {
                    bVar28 = 2;
                  }
                }
                uVar30 = (ulong)*(uint *)(puVar15 + 2);
                if (uVar18 <= uVar30) goto LAB_006290ac;
                cVar1 = *(char *)(*(long *)(lVar4 + 0x68) + 0x18 + uVar30 * 0x20);
                if (cVar1 == '\0') {
                  bVar21 = (*(int *)plVar3[1] == 2) * '\x03';
                }
                else {
                  bVar21 = 1;
                  if (cVar1 != '\x01') {
                    bVar21 = 2;
                  }
                }
                bVar32 = bVar28 < bVar21;
                puVar26 = puVar15;
                if (bVar32) {
                  puVar26 = puVar14;
                }
                puVar22[2] = puVar26[2];
                uVar2 = puVar26[1];
                *puVar22 = *puVar26;
                puVar22[1] = uVar2;
                puVar15 = puVar15 + (ulong)!bVar32 * 3;
                puVar22 = puVar22 + 3;
              } while ((puVar15 != puVar25) &&
                      (puVar14 = puVar14 + (ulong)bVar32 * 3,
                      puVar14 != (undefined8 *)(param_1 + local_2e0 * 0x18)));
            }
            (*(code *)PTR_memcpy_00841de0)(puVar22,puVar15,(long)puVar25 - (long)puVar15);
          }
        }
        uVar18 = uVar19 * 2 + 1;
      } while (1 < uVar24);
LAB_00629040:
      uVar24 = 1;
    }
LAB_00629045:
    auStack_240[uVar24] = uVar18;
    abStack_283[uVar24 + 1] = (byte)lVar20;
    if (param_2 <= local_2e0) {
      if ((uVar18 & 1) == 0) {
        quicksort::quicksort::
        <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                  (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,0,param_6);
      }
      return;
    }
    uVar24 = uVar24 + 1;
    local_2e0 = local_2e0 + (uVar17 >> 1);
    local_2a8 = param_2 - local_2e0;
    if (local_2e0 <= param_2 && param_2 - local_2e0 != 0) goto LAB_00628800;
LAB_006287d3:
    lVar20 = 0;
    local_2a8 = 1;
    uVar18 = uVar17;
  } while( true );
}


// ==== core::slice::sort::stable::quicksort::quicksort::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::v3b::run::{closure#4}>::{closure#0}> @ 00633180 (3170 bytes)

/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::v3b::run::{closure#4}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6,undefined8 *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  bool bVar27;
  long local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (0x20 < param_2) {
    local_70 = param_6;
LAB_00633210:
    uVar26 = param_2;
    do {
      if (param_5 == 0) {
        drift::sort::
        <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                  (param_1,uVar26,param_3,param_4,1,param_7);
        return;
      }
      uVar14 = uVar26 >> 3;
      puVar12 = param_1 + uVar14 * 0xc;
      puVar19 = param_1 + uVar14 * 0x15;
      if (uVar26 < 0x40) {
        plVar23 = (long *)*param_7;
        uVar21 = (ulong)*(uint *)(param_1 + 2);
        uVar14 = *(ulong *)(*plVar23 + 0x70);
        if (uVar14 <= uVar21) goto LAB_00633d92;
        uVar22 = (ulong)*(uint *)(puVar12 + 2);
        if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(uVar22,uVar14,&PTR_s_src_v3b_rs_00210968);
        }
        uVar11 = (ulong)*(uint *)(puVar19 + 2);
        if (uVar14 <= uVar11) goto LAB_00633d9c;
        lVar6 = *(long *)(*plVar23 + 0x68);
        bVar2 = *(byte *)(lVar6 + 0x18 + uVar22 * 0x20);
        bVar3 = *(byte *)(lVar6 + 0x18 + uVar21 * 0x20);
        bVar1 = *(byte *)(lVar6 + 0x18 + uVar11 * 0x20);
        if (bVar1 < bVar2 != bVar2 < bVar3) {
          puVar12 = puVar19;
        }
        if (bVar1 < bVar3 != bVar2 < bVar3) {
          puVar12 = param_1;
        }
      }
      else {
        puVar12 = (undefined8 *)
                  shared::pivot::median3_rec::
                  <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                            (param_1,puVar12,puVar19,uVar14,param_7);
        plVar23 = (long *)*param_7;
      }
      param_5 = param_5 + -1;
      uVar24 = (ulong)((long)puVar12 - (long)param_1) >> 3;
      uVar22 = uVar24 * -0x5555555555555555;
      local_38 = puVar12[2];
      local_48 = *puVar12;
      uStack_40 = puVar12[1];
      if (local_70 != 0) {
        uVar21 = (ulong)*(uint *)(local_70 + 0x10);
        uVar14 = *(ulong *)(*plVar23 + 0x70);
        if (uVar14 <= uVar21) goto LAB_00633d92;
        uVar11 = (ulong)*(uint *)(puVar12 + 2);
        if (uVar14 <= uVar11) goto LAB_00633d9c;
        lVar6 = *(long *)(*plVar23 + 0x68);
        if (*(byte *)(lVar6 + 0x18 + uVar21 * 0x20) <= *(byte *)(lVar6 + 0x18 + uVar11 * 0x20))
        goto LAB_00633630;
      }
      if (param_4 < uVar26) goto LAB_00633d90;
      puVar19 = param_3 + uVar26 * 3;
      param_2 = 0;
      puVar17 = param_1 + uVar24;
      puVar15 = param_1;
      puVar16 = puVar19;
      uVar20 = uVar22;
      if (puVar17 <= param_1) goto LAB_0063340f;
LAB_006333a0:
      lVar6 = *plVar23;
      uVar14 = *(ulong *)(lVar6 + 0x70);
      do {
        uVar21 = (ulong)*(uint *)(puVar15 + 2);
        if (uVar14 <= uVar21) goto LAB_00633d92;
        uVar11 = (ulong)*(uint *)(puVar12 + 2);
        if (uVar14 <= uVar11) goto LAB_00633d9c;
        lVar18 = *(long *)(lVar6 + 0x68);
        puVar16 = puVar16 + -3;
        bVar27 = *(byte *)(lVar18 + 0x18 + uVar11 * 0x20) < *(byte *)(lVar18 + 0x18 + uVar21 * 0x20)
        ;
        puVar13 = puVar16;
        if (bVar27) {
          puVar13 = param_3;
        }
        uVar5 = *puVar15;
        uVar9 = puVar15[1];
        puVar13[param_2 * 3 + 2] = puVar15[2];
        puVar13[param_2 * 3] = uVar5;
        (puVar13 + param_2 * 3)[1] = uVar9;
        param_2 = param_2 + bVar27;
        puVar15 = puVar15 + 3;
      } while (puVar15 < puVar17);
LAB_0063340f:
      if (uVar20 != uVar26) goto code_r0x00633414;
      (*(code *)PTR_memcpy_00841de0)(param_1,param_3,param_2 * 0x18);
      uVar14 = uVar26 - param_2;
      if (uVar14 == 0) goto LAB_006335cf;
      if (0xfffffffffffffffc < param_2 - uVar26) {
        uVar21 = 0;
        goto LAB_0063356d;
      }
      puVar17 = param_1 + param_2 * 3;
      puVar15 = param_3 + uVar26 * 3 + -3;
      uVar11 = 0;
      do {
        uVar5 = puVar15[2];
        uVar9 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar9;
        puVar17[2] = uVar5;
        uVar5 = puVar19[(uVar11 ^ 0x1ffffffffffffffe) * 3];
        uVar9 = (puVar19 + (uVar11 ^ 0x1ffffffffffffffe) * 3)[1];
        puVar17[5] = puVar19[(uVar11 ^ 0x1ffffffffffffffe) * 3 + 2];
        puVar17[3] = uVar5;
        puVar17[4] = uVar9;
        puVar17[8] = puVar19[(uVar11 ^ 0x1ffffffffffffffd) * 3 + 2];
        uVar5 = (puVar19 + (uVar11 ^ 0x1ffffffffffffffd) * 3)[1];
        puVar17[6] = puVar19[(uVar11 ^ 0x1ffffffffffffffd) * 3];
        puVar17[7] = uVar5;
        uVar21 = uVar11 + 4;
        uVar5 = (puVar19 + (uVar11 ^ 0x1ffffffffffffffc) * 3)[1];
        puVar17[9] = puVar19[(uVar11 ^ 0x1ffffffffffffffc) * 3];
        puVar17[10] = uVar5;
        puVar17[0xb] = puVar19[(uVar11 ^ 0x1ffffffffffffffc) * 3 + 2];
        puVar17 = puVar17 + 0xc;
        puVar15 = puVar15 + -0xc;
        uVar11 = uVar21;
      } while ((uVar14 & 0xfffffffffffffffc) != uVar21);
      if ((uVar14 & 3) != 0) {
LAB_0063356d:
        lVar6 = param_2 * 0x18 + uVar21 * 0x18;
        puVar19 = param_3 + uVar21 * -3 + uVar26 * 3 + -3;
        lVar18 = 0;
        do {
          uVar5 = *puVar19;
          uVar9 = puVar19[1];
          *(undefined8 *)((long)param_1 + lVar18 + lVar6 + 0x10) = puVar19[2];
          puVar17 = (undefined8 *)((long)param_1 + lVar18 + lVar6);
          *puVar17 = uVar5;
          puVar17[1] = uVar9;
          lVar18 = lVar18 + 0x18;
          puVar19 = puVar19 + -3;
        } while ((ulong)(((uint)uVar14 & 3) << 3) * 3 != lVar18);
      }
LAB_006335cf:
      if (param_2 == 0) goto LAB_00633630;
      if (uVar26 < param_2) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
      }
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                (param_1 + param_2 * 3,uVar14,param_3,param_4,param_5,&local_48,param_7);
      uVar26 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
  puVar12 = param_1;
LAB_006331ad:
  if (1 < param_2) {
    plVar23 = (long *)*param_7;
    uVar26 = param_2 >> 1;
    if (param_2 < 8) {
      uVar5 = *puVar12;
      uVar9 = puVar12[1];
      param_3[2] = puVar12[2];
      *param_3 = uVar5;
      param_3[1] = uVar9;
      param_3[uVar26 * 3 + 2] = puVar12[uVar26 * 3 + 2];
      uVar5 = (puVar12 + uVar26 * 3)[1];
      param_3[uVar26 * 3] = puVar12[uVar26 * 3];
      (param_3 + uVar26 * 3)[1] = uVar5;
      uVar22 = 1;
    }
    else {
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                (puVar12,param_3,*plVar23);
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::v3b::run::_closure_4_>::_closure_0_>
                (puVar12 + uVar26 * 3,param_3 + uVar26 * 3,*plVar23);
      uVar22 = 4;
    }
    lVar6 = *plVar23;
    if (uVar22 < uVar26) {
      uVar14 = *(ulong *)(lVar6 + 0x70);
      lVar18 = (ulong)(uint)((int)uVar22 * 8) * 3;
      uVar24 = uVar22;
      do {
        uVar20 = puVar12[uVar24 * 3 + 2];
        param_3[uVar24 * 3 + 2] = uVar20;
        uVar5 = (puVar12 + uVar24 * 3)[1];
        param_3[uVar24 * 3] = puVar12[uVar24 * 3];
        (param_3 + uVar24 * 3)[1] = uVar5;
        uVar21 = uVar20 & 0xffffffff;
        if (uVar14 <= uVar21) goto LAB_00633d92;
        uVar11 = (ulong)*(uint *)(param_3 + uVar24 * 3 + -1);
        if (uVar14 <= uVar11) goto LAB_00633d9c;
        lVar7 = *(long *)(lVar6 + 0x68);
        bVar2 = *(byte *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (*(byte *)(lVar7 + 0x18 + uVar11 * 0x20) < bVar2) {
          uVar4 = *(undefined4 *)((long)param_3 + uVar24 * 0x18 + 0x14);
          lVar10 = lVar18;
          do {
            lVar25 = lVar10;
            *(undefined8 *)((long)param_3 + lVar25 + 0x10) =
                 *(undefined8 *)((long)param_3 + lVar25 + -8);
            puVar19 = (undefined8 *)((long)param_3 + lVar25 + -0x18);
            uVar5 = puVar19[1];
            *(undefined8 *)((long)param_3 + lVar25) = *puVar19;
            ((undefined8 *)((long)param_3 + lVar25))[1] = uVar5;
            if (lVar25 == 0x18) {
              puVar19 = param_3;
              goto LAB_006339a6;
            }
            uVar21 = (ulong)*(uint *)((long)param_3 + lVar25 + -0x20);
            if (uVar14 <= uVar21) goto LAB_00633d92;
            lVar10 = lVar25 + -0x18;
          } while (*(byte *)(lVar7 + 0x18 + uVar21 * 0x20) < bVar2);
          puVar19 = (undefined8 *)(lVar25 + -0x18 + (long)param_3);
LAB_006339a6:
          uVar5 = (puVar12 + uVar24 * 3)[1];
          *puVar19 = puVar12[uVar24 * 3];
          puVar19[1] = uVar5;
          *(int *)((long)param_3 + lVar25 + -8) = (int)uVar20;
          *(undefined4 *)((long)param_3 + lVar25 + -4) = uVar4;
        }
        uVar24 = uVar24 + 1;
        lVar18 = lVar18 + 0x18;
      } while (uVar24 != uVar26);
    }
    puVar19 = param_3 + uVar26 * 3;
    if (uVar22 < param_2 - uVar26) {
      uVar14 = *(ulong *)(lVar6 + 0x70);
      lVar18 = (ulong)(uint)((int)uVar22 * 8) * 3;
      do {
        uVar24 = puVar12[uVar26 * 3 + uVar22 * 3 + 2];
        puVar19[uVar22 * 3 + 2] = uVar24;
        uVar5 = (puVar12 + uVar26 * 3 + uVar22 * 3)[1];
        puVar19[uVar22 * 3] = puVar12[uVar26 * 3 + uVar22 * 3];
        (puVar19 + uVar22 * 3)[1] = uVar5;
        uVar21 = uVar24 & 0xffffffff;
        if (uVar14 <= uVar21) {
LAB_00633d92:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(uVar21,uVar14,&PTR_s_src_v3b_rs_00210968);
        }
        uVar11 = (ulong)*(uint *)(puVar19 + uVar22 * 3 + -1);
        if (uVar14 <= uVar11) {
LAB_00633d9c:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(uVar11,uVar14,&PTR_s_src_v3b_rs_00210968);
        }
        lVar7 = *(long *)(lVar6 + 0x68);
        bVar2 = *(byte *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (*(byte *)(lVar7 + 0x18 + uVar11 * 0x20) < bVar2) {
          uVar4 = *(undefined4 *)((long)puVar19 + uVar22 * 0x18 + 0x14);
          lVar10 = lVar18;
          do {
            lVar25 = lVar10;
            *(undefined8 *)((long)puVar19 + lVar25 + 0x10) =
                 *(undefined8 *)((long)puVar19 + lVar25 + -8);
            puVar17 = (undefined8 *)((long)puVar19 + lVar25 + -0x18);
            uVar5 = puVar17[1];
            *(undefined8 *)((long)puVar19 + lVar25) = *puVar17;
            ((undefined8 *)((long)puVar19 + lVar25))[1] = uVar5;
            if (lVar25 == 0x18) {
              puVar17 = puVar19;
              goto LAB_00633ae6;
            }
            uVar21 = (ulong)*(uint *)((long)puVar19 + lVar25 + -0x20);
            if (uVar14 <= uVar21) goto LAB_00633d92;
            lVar10 = lVar25 + -0x18;
          } while (*(byte *)(lVar7 + 0x18 + uVar21 * 0x20) < bVar2);
          puVar17 = (undefined8 *)(lVar25 + -0x18 + (long)puVar19);
LAB_00633ae6:
          uVar5 = (puVar12 + uVar26 * 3 + uVar22 * 3)[1];
          *puVar17 = puVar12[uVar26 * 3 + uVar22 * 3];
          puVar17[1] = uVar5;
          *(int *)((long)puVar19 + lVar25 + -8) = (int)uVar24;
          *(undefined4 *)((long)puVar19 + lVar25 + -4) = uVar4;
        }
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 0x18;
      } while (uVar22 != param_2 - uVar26);
    }
    puVar15 = param_3 + param_2 * 3 + -3;
    puVar17 = puVar19 + -3;
    puVar16 = puVar12 + param_2 * 3 + -3;
    uVar14 = *(ulong *)(lVar6 + 0x70);
    do {
      puVar13 = puVar12;
      uVar21 = (ulong)*(uint *)(puVar19 + 2);
      if (uVar14 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar21,uVar14,&PTR_s_src_v3b_rs_00210968);
      }
      uVar22 = (ulong)*(uint *)(param_3 + 2);
      if (uVar14 <= uVar22) {
LAB_00633dd0:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar22,uVar14,&PTR_s_src_v3b_rs_00210968);
      }
      lVar18 = *(long *)(lVar6 + 0x68);
      bVar27 = *(byte *)(lVar18 + 0x18 + uVar22 * 0x20) < *(byte *)(lVar18 + 0x18 + uVar21 * 0x20);
      puVar12 = puVar19;
      if (!bVar27) {
        puVar12 = param_3;
      }
      puVar13[2] = puVar12[2];
      uVar5 = puVar12[1];
      *puVar13 = *puVar12;
      puVar13[1] = uVar5;
      uVar21 = (ulong)*(uint *)(puVar15 + 2);
      if (uVar14 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(uVar21,uVar14,&PTR_s_src_v3b_rs_00210968);
      }
      uVar22 = (ulong)*(uint *)(puVar17 + 2);
      if (uVar14 <= uVar22) goto LAB_00633dd0;
      bVar2 = *(byte *)(lVar18 + 0x18 + uVar22 * 0x20);
      bVar3 = *(byte *)(lVar18 + 0x18 + uVar21 * 0x20);
      puVar12 = puVar17;
      if (bVar2 >= bVar3) {
        puVar12 = puVar15;
      }
      puVar19 = puVar19 + (ulong)bVar27 * 3;
      param_3 = param_3 + (ulong)!bVar27 * 3;
      puVar16[2] = puVar12[2];
      uVar5 = puVar12[1];
      *puVar16 = *puVar12;
      puVar16[1] = uVar5;
      puVar15 = puVar15 + ((ulong)(bVar2 < bVar3) - 1) * 3;
      puVar17 = puVar17 + (ulong)(bVar2 < bVar3) * -3;
      puVar16 = puVar16 + -3;
      uVar26 = uVar26 - 1;
      puVar12 = puVar13 + 3;
    } while (uVar26 != 0);
    if ((param_2 & 1) != 0) {
      bVar27 = param_3 < puVar17 + 3;
      puVar12 = puVar19;
      if (bVar27) {
        puVar12 = param_3;
      }
      puVar13[5] = puVar12[2];
      uVar5 = puVar12[1];
      puVar13[3] = *puVar12;
      puVar13[4] = uVar5;
      param_3 = param_3 + (ulong)bVar27 * 3;
      puVar19 = puVar19 + (ulong)!bVar27 * 3;
    }
    if ((param_3 != puVar17 + 3) || (puVar19 != puVar15 + 3)) {
                    /* WARNING: Subroutine does not return */
      shared::smallsort::panic_on_ord_violation();
    }
  }
  return;
code_r0x00633414:
  puVar16[param_2 * 3 + -1] = puVar15[2];
  uVar5 = puVar15[1];
  puVar16[param_2 * 3 + -3] = *puVar15;
  (puVar16 + param_2 * 3 + -3)[1] = uVar5;
  puVar16 = puVar16 + -3;
  puVar15 = puVar15 + 3;
  puVar17 = param_1 + uVar26 * 3;
  uVar20 = uVar26;
  if (puVar15 < puVar17) goto LAB_006333a0;
  goto LAB_0063340f;
LAB_00633630:
  if (param_4 < uVar26) {
LAB_00633d90:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  puVar19 = param_3 + uVar26 * 3;
  plVar23 = (long *)*param_7;
  uVar20 = 0;
  puVar17 = param_1 + uVar24;
  puVar15 = param_1;
  puVar16 = puVar19;
  if (puVar17 <= param_1) goto LAB_006336e5;
LAB_00633670:
  lVar6 = *plVar23;
  uVar14 = *(ulong *)(lVar6 + 0x70);
  do {
    uVar21 = (ulong)*(uint *)(puVar12 + 2);
    if (uVar14 <= uVar21) goto LAB_00633d92;
    uVar11 = (ulong)*(uint *)(puVar15 + 2);
    if (uVar14 <= uVar11) goto LAB_00633d9c;
    lVar18 = *(long *)(lVar6 + 0x68);
    puVar16 = puVar16 + -3;
    bVar27 = *(byte *)(lVar18 + 0x18 + uVar11 * 0x20) < *(byte *)(lVar18 + 0x18 + uVar21 * 0x20);
    puVar13 = puVar16;
    if (!bVar27) {
      puVar13 = param_3;
    }
    uVar5 = *puVar15;
    uVar9 = puVar15[1];
    puVar13[uVar20 * 3 + 2] = puVar15[2];
    puVar13[uVar20 * 3] = uVar5;
    (puVar13 + uVar20 * 3)[1] = uVar9;
    uVar20 = (uVar20 + 1) - (ulong)bVar27;
    puVar15 = puVar15 + 3;
  } while (puVar15 < puVar17);
LAB_006336e5:
  if (uVar22 != uVar26) goto code_r0x006336ea;
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar20 * 0x18);
  param_2 = uVar26 - uVar20;
  if (param_2 == 0) {
    return;
  }
  puVar12 = param_1 + uVar20 * 3;
  if (0xfffffffffffffffc < uVar20 - uVar26) {
    uVar14 = 0;
    goto LAB_0063387e;
  }
  puVar17 = param_3 + uVar26 * 3 + -3;
  puVar15 = puVar12;
  uVar21 = 0;
  do {
    uVar5 = puVar17[2];
    uVar9 = puVar17[1];
    *puVar15 = *puVar17;
    puVar15[1] = uVar9;
    puVar15[2] = uVar5;
    uVar5 = puVar19[(uVar21 ^ 0x1ffffffffffffffe) * 3];
    uVar9 = (puVar19 + (uVar21 ^ 0x1ffffffffffffffe) * 3)[1];
    puVar15[5] = puVar19[(uVar21 ^ 0x1ffffffffffffffe) * 3 + 2];
    puVar15[3] = uVar5;
    puVar15[4] = uVar9;
    puVar15[8] = puVar19[(uVar21 ^ 0x1ffffffffffffffd) * 3 + 2];
    uVar5 = (puVar19 + (uVar21 ^ 0x1ffffffffffffffd) * 3)[1];
    puVar15[6] = puVar19[(uVar21 ^ 0x1ffffffffffffffd) * 3];
    puVar15[7] = uVar5;
    uVar14 = uVar21 + 4;
    uVar5 = (puVar19 + (uVar21 ^ 0x1ffffffffffffffc) * 3)[1];
    puVar15[9] = puVar19[(uVar21 ^ 0x1ffffffffffffffc) * 3];
    puVar15[10] = uVar5;
    puVar15[0xb] = puVar19[(uVar21 ^ 0x1ffffffffffffffc) * 3 + 2];
    puVar15 = puVar15 + 0xc;
    puVar17 = puVar17 + -0xc;
    uVar21 = uVar14;
  } while ((param_2 & 0xfffffffffffffffc) != uVar14);
  if ((param_2 & 3) != 0) {
LAB_0063387e:
    lVar6 = uVar20 * 0x18 + uVar14 * 0x18;
    puVar19 = param_3 + uVar14 * -3 + uVar26 * 3 + -3;
    lVar18 = 0;
    do {
      uVar5 = *puVar19;
      uVar9 = puVar19[1];
      *(undefined8 *)((long)param_1 + lVar18 + lVar6 + 0x10) = puVar19[2];
      puVar17 = (undefined8 *)((long)param_1 + lVar18 + lVar6);
      *puVar17 = uVar5;
      puVar17[1] = uVar9;
      lVar18 = lVar18 + 0x18;
      puVar19 = puVar19 + -3;
    } while ((ulong)(((uint)param_2 & 3) << 3) * 3 != lVar18);
  }
  if (uVar26 < uVar20) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar20,uVar26,uVar26,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
  }
  local_70 = 0;
  param_1 = puVar12;
  if (param_2 < 0x21) goto LAB_006331ad;
  goto LAB_00633210;
code_r0x006336ea:
  puVar16 = puVar16 + -3;
  param_3[uVar20 * 3 + 2] = puVar15[2];
  uVar5 = puVar15[1];
  param_3[uVar20 * 3] = *puVar15;
  (param_3 + uVar20 * 3)[1] = uVar5;
  uVar20 = uVar20 + 1;
  puVar15 = puVar15 + 3;
  puVar17 = param_1 + uVar26 * 3;
  uVar22 = uVar26;
  if (puVar15 < puVar17) goto LAB_00633670;
  goto LAB_006336e5;
}


// ==== core::slice::sort::stable::quicksort::quicksort::<pipeline::Chunk, <[pipeline::Chunk]>::sort_by_key<i32, pipeline::parse::work_queue_build::{closure#1}>::{closure#0}> @ 00633e20 (4218 bytes)

/* core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::<pipeline[509596c7b52975b2]::Chunk,
   <[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,
   pipeline[509596c7b52975b2]::parse::work_queue_build::{closure#1}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::stable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6,undefined8 *param_7)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  long *plVar24;
  ulong uVar25;
  byte bVar26;
  byte bVar27;
  long lVar28;
  ulong uVar29;
  bool bVar30;
  long *local_78;
  long *local_70;
  long local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (0x20 < param_2) {
    local_58 = param_6;
LAB_00633ec5:
    uVar29 = param_2;
    do {
      if (param_5 == 0) {
        drift::sort::
        <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                  (param_1,uVar29,param_3,param_4,1,param_7);
        return;
      }
      uVar16 = uVar29 >> 3;
      puVar13 = param_1 + uVar16 * 0xc;
      puVar15 = param_1 + uVar16 * 0x15;
      if (uVar29 < 0x40) {
        local_70 = (long *)*param_7;
        uVar21 = (ulong)*(uint *)(param_1 + 2);
        plVar24 = (long *)*local_70;
        uVar16 = *(ulong *)(*plVar24 + 0x70);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        lVar7 = *(long *)(*plVar24 + 0x68);
        cVar1 = *(char *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar23 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar23 = 1;
          if (cVar1 != '\x01') {
            bVar23 = 2;
          }
        }
        uVar21 = (ulong)*(uint *)(puVar13 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar2 = *(char *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)plVar24[1] == 2) * '\x03';
          if (cVar1 == '\x02') goto LAB_00633fe6;
LAB_00633fb4:
          bVar27 = 1;
          if (cVar1 != '\x01') {
            bVar27 = (*(int *)plVar24[1] == 2) * '\x03';
          }
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
          if (cVar1 != '\x02') goto LAB_00633fb4;
LAB_00633fe6:
          bVar27 = 2;
        }
        uVar21 = (ulong)*(uint *)(puVar15 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar1 = *(char *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar12 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar12 = 1;
          if (cVar1 != '\x01') {
            bVar12 = 2;
          }
        }
        if (bVar27 < bVar12 == bVar23 < bVar26) {
          if (cVar2 == '\x02') {
            bVar27 = 2;
            if (cVar1 == '\x02') goto LAB_00634093;
LAB_00634072:
            bVar12 = 1;
            if (cVar1 != '\x01') {
              bVar12 = (*(int *)plVar24[1] == 2) * '\x03';
            }
          }
          else {
            bVar27 = 1;
            if (cVar2 != '\x01') {
              bVar27 = (*(int *)plVar24[1] == 2) * '\x03';
            }
            if (cVar1 != '\x02') goto LAB_00634072;
LAB_00634093:
            bVar12 = 2;
          }
          if (bVar27 < bVar12 != bVar23 < bVar26) {
            puVar13 = puVar15;
          }
        }
        else {
          puVar13 = param_1;
        }
      }
      else {
        puVar13 = (undefined8 *)
                  shared::pivot::median3_rec::
                  <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                            (param_1,puVar13,puVar15,uVar16,param_7);
        local_70 = (long *)*param_7;
      }
      param_5 = param_5 + -1;
      uVar25 = (ulong)((long)puVar13 - (long)param_1) >> 3;
      uVar19 = uVar25 * -0x5555555555555555;
      local_38 = puVar13[2];
      local_48 = *puVar13;
      uStack_40 = puVar13[1];
      if (local_58 != 0) {
        uVar21 = (ulong)*(uint *)(local_58 + 0x10);
        plVar24 = (long *)*local_70;
        uVar16 = *(ulong *)(*plVar24 + 0x70);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        lVar7 = *(long *)(*plVar24 + 0x68);
        cVar1 = *(char *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar23 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar23 = 1;
          if (cVar1 != '\x01') {
            bVar23 = 2;
          }
        }
        uVar21 = (ulong)*(uint *)(puVar13 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar1 = *(char *)(lVar7 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar26 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar1 != '\x01') {
            bVar26 = 2;
          }
        }
        if (bVar26 <= bVar23) goto LAB_006344d0;
      }
      if (param_4 < uVar29) goto LAB_00634f59;
      puVar15 = param_3 + uVar29 * 3;
      param_2 = 0;
      puVar18 = param_1 + uVar25;
      puVar17 = param_1;
      puVar20 = puVar15;
      uVar25 = uVar19;
      if (puVar18 <= param_1) goto LAB_006342b0;
LAB_006341d0:
      plVar24 = (long *)*local_70;
      lVar7 = *plVar24;
      uVar16 = *(ulong *)(lVar7 + 0x70);
      do {
        uVar21 = (ulong)*(uint *)(puVar17 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        lVar28 = *(long *)(lVar7 + 0x68);
        cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar23 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar23 = 1;
          if (cVar1 != '\x01') {
            bVar23 = 2;
          }
        }
        uVar21 = (ulong)*(uint *)(puVar13 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar26 = (*(int *)plVar24[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar1 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar20 = puVar20 + -3;
        puVar14 = puVar20;
        if (bVar23 < bVar26) {
          puVar14 = param_3;
        }
        uVar5 = *puVar17;
        uVar10 = puVar17[1];
        puVar14[param_2 * 3 + 2] = puVar17[2];
        puVar14[param_2 * 3] = uVar5;
        (puVar14 + param_2 * 3)[1] = uVar10;
        param_2 = param_2 + (bVar23 < bVar26);
        puVar17 = puVar17 + 3;
      } while (puVar17 < puVar18);
LAB_006342b0:
      if (uVar25 != uVar29) goto code_r0x006342b5;
      (*(code *)PTR_memcpy_00841de0)(param_1,param_3,param_2 * 0x18);
      uVar16 = uVar29 - param_2;
      if (uVar16 == 0) goto LAB_0063446f;
      if (0xfffffffffffffffc < param_2 - uVar29) {
        uVar21 = 0;
        goto LAB_0063440d;
      }
      puVar18 = param_1 + param_2 * 3;
      puVar17 = param_3 + uVar29 * 3 + -3;
      uVar25 = 0;
      do {
        uVar5 = puVar17[2];
        uVar10 = puVar17[1];
        *puVar18 = *puVar17;
        puVar18[1] = uVar10;
        puVar18[2] = uVar5;
        uVar5 = puVar15[(uVar25 ^ 0x1ffffffffffffffe) * 3];
        uVar10 = (puVar15 + (uVar25 ^ 0x1ffffffffffffffe) * 3)[1];
        puVar18[5] = puVar15[(uVar25 ^ 0x1ffffffffffffffe) * 3 + 2];
        puVar18[3] = uVar5;
        puVar18[4] = uVar10;
        puVar18[8] = puVar15[(uVar25 ^ 0x1ffffffffffffffd) * 3 + 2];
        uVar5 = (puVar15 + (uVar25 ^ 0x1ffffffffffffffd) * 3)[1];
        puVar18[6] = puVar15[(uVar25 ^ 0x1ffffffffffffffd) * 3];
        puVar18[7] = uVar5;
        uVar21 = uVar25 + 4;
        uVar5 = (puVar15 + (uVar25 ^ 0x1ffffffffffffffc) * 3)[1];
        puVar18[9] = puVar15[(uVar25 ^ 0x1ffffffffffffffc) * 3];
        puVar18[10] = uVar5;
        puVar18[0xb] = puVar15[(uVar25 ^ 0x1ffffffffffffffc) * 3 + 2];
        puVar18 = puVar18 + 0xc;
        puVar17 = puVar17 + -0xc;
        uVar25 = uVar21;
      } while ((uVar16 & 0xfffffffffffffffc) != uVar21);
      if ((uVar16 & 3) != 0) {
LAB_0063440d:
        lVar7 = param_2 * 0x18 + uVar21 * 0x18;
        puVar15 = param_3 + uVar21 * -3 + uVar29 * 3 + -3;
        lVar28 = 0;
        do {
          uVar5 = *puVar15;
          uVar10 = puVar15[1];
          *(undefined8 *)((long)param_1 + lVar28 + lVar7 + 0x10) = puVar15[2];
          puVar18 = (undefined8 *)((long)param_1 + lVar28 + lVar7);
          *puVar18 = uVar5;
          puVar18[1] = uVar10;
          lVar28 = lVar28 + 0x18;
          puVar15 = puVar15 + -3;
        } while ((ulong)(((uint)uVar16 & 3) << 3) * 3 != lVar28);
      }
LAB_0063446f:
      if (param_2 == 0) goto LAB_006344d0;
      if (uVar29 < param_2) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_fmt("mid > len",0x13,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210490);
      }
      <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
                (param_1 + param_2 * 3,uVar16,param_3,param_4,param_5,&local_48,param_7);
      uVar29 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
  plVar24 = param_1;
LAB_00633e4a:
  if (param_2 < 2) {
    return;
  }
  param_7 = (undefined8 *)*param_7;
  uVar29 = param_2 >> 1;
  if (param_2 < 8) {
    uVar5 = *plVar24;
    uVar10 = plVar24[1];
    param_3[2] = plVar24[2];
    *param_3 = uVar5;
    param_3[1] = uVar10;
    param_3[uVar29 * 3 + 2] = plVar24[uVar29 * 3 + 2];
    uVar5 = (plVar24 + uVar29 * 3)[1];
    param_3[uVar29 * 3] = plVar24[uVar29 * 3];
    (param_3 + uVar29 * 3)[1] = uVar5;
    uVar19 = 1;
    local_78 = (long *)*param_7;
    if (uVar29 < 2) goto LAB_00634a8b;
  }
  else {
    shared::smallsort::sort4_stable::
    <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
              (plVar24,param_3,*param_7);
    shared::smallsort::sort4_stable::
    <pipeline[509596c7b52975b2]::Chunk,<[pipeline[509596c7b52975b2]::Chunk]>::sort_by_key<i32,pipeline[509596c7b52975b2]::parse::work_queue_build::_closure_1_>::_closure_0_>
              (plVar24 + uVar29 * 3,param_3 + uVar29 * 3,*param_7);
    uVar19 = 4;
    local_78 = (long *)*param_7;
    if (uVar29 < 5) goto LAB_00634a8b;
  }
  lVar7 = *local_78;
  uVar16 = *(ulong *)(lVar7 + 0x70);
  lVar28 = (ulong)(uint)((int)uVar19 * 8) * 3;
  uVar25 = uVar19;
  do {
    uVar6 = plVar24[uVar25 * 3 + 2];
    param_3[uVar25 * 3 + 2] = uVar6;
    uVar5 = (plVar24 + uVar25 * 3)[1];
    param_3[uVar25 * 3] = plVar24[uVar25 * 3];
    (param_3 + uVar25 * 3)[1] = uVar5;
    uVar21 = uVar6 & 0xffffffff;
    if (uVar16 <= uVar21) goto LAB_00634f5b;
    lVar8 = *(long *)(lVar7 + 0x68);
    cVar1 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
    if (cVar1 == '\0') {
      bVar23 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar23 = 1;
      if (cVar1 != '\x01') {
        bVar23 = 2;
      }
    }
    uVar21 = (ulong)*(uint *)(param_3 + uVar25 * 3 + -1);
    if (uVar16 <= uVar21) goto LAB_00634f5b;
    cVar2 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
    if (cVar2 == '\0') {
      bVar26 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar26 = 1;
      if (cVar2 != '\x01') {
        bVar26 = 2;
      }
    }
    if (bVar23 < bVar26) {
      uVar3 = *(undefined4 *)((long)param_3 + uVar25 * 0x18 + 0x14);
      lVar11 = lVar28;
      do {
        lVar22 = lVar11;
        *(undefined8 *)((long)param_3 + lVar22 + 0x10) =
             *(undefined8 *)((long)param_3 + lVar22 + -8);
        puVar13 = (undefined8 *)((long)param_3 + lVar22 + -0x18);
        uVar5 = puVar13[1];
        *(undefined8 *)((long)param_3 + lVar22) = *puVar13;
        ((undefined8 *)((long)param_3 + lVar22))[1] = uVar5;
        if (lVar22 == 0x18) {
          puVar13 = param_3;
          goto LAB_006348a6;
        }
        if (cVar1 == '\x02') {
          bVar23 = 2;
        }
        else {
          bVar23 = 1;
          if (cVar1 != '\x01') {
            bVar23 = (*(int *)local_78[1] == 2) * '\x03';
          }
        }
        uVar21 = (ulong)*(uint *)((long)param_3 + lVar22 + -0x20);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar2 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
        if (cVar2 == '\0') {
          bVar26 = (*(int *)local_78[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar2 != '\x01') {
            bVar26 = 2;
          }
        }
        lVar11 = lVar22 + -0x18;
      } while (bVar23 < bVar26);
      puVar13 = (undefined8 *)(lVar22 + -0x18 + (long)param_3);
LAB_006348a6:
      uVar5 = (plVar24 + uVar25 * 3)[1];
      *puVar13 = plVar24[uVar25 * 3];
      puVar13[1] = uVar5;
      *(int *)((long)param_3 + lVar22 + -8) = (int)uVar6;
      *(undefined4 *)((long)param_3 + lVar22 + -4) = uVar3;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != uVar29);
LAB_00634a8b:
  puVar13 = param_3 + uVar29 * 3;
  if (uVar19 < param_2 - uVar29) {
    lVar7 = *local_78;
    uVar16 = *(ulong *)(lVar7 + 0x70);
    lVar28 = (ulong)(uint)((int)uVar19 * 8) * 3;
    do {
      uVar25 = plVar24[uVar29 * 3 + uVar19 * 3 + 2];
      puVar13[uVar19 * 3 + 2] = uVar25;
      uVar5 = (plVar24 + uVar29 * 3 + uVar19 * 3)[1];
      puVar13[uVar19 * 3] = plVar24[uVar29 * 3 + uVar19 * 3];
      (puVar13 + uVar19 * 3)[1] = uVar5;
      uVar21 = uVar25 & 0xffffffff;
      if (uVar16 <= uVar21) goto LAB_00634f5b;
      lVar8 = *(long *)(lVar7 + 0x68);
      cVar1 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
      if (cVar1 == '\0') {
        bVar23 = (*(int *)local_78[1] == 2) * '\x03';
      }
      else {
        bVar23 = 1;
        if (cVar1 != '\x01') {
          bVar23 = 2;
        }
      }
      uVar21 = (ulong)*(uint *)(puVar13 + uVar19 * 3 + -1);
      if (uVar16 <= uVar21) goto LAB_00634f5b;
      cVar2 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
      if (cVar2 == '\0') {
        bVar26 = (*(int *)local_78[1] == 2) * '\x03';
      }
      else {
        bVar26 = 1;
        if (cVar2 != '\x01') {
          bVar26 = 2;
        }
      }
      if (bVar23 < bVar26) {
        uVar3 = *(undefined4 *)((long)puVar13 + uVar19 * 0x18 + 0x14);
        lVar11 = lVar28;
        do {
          lVar22 = lVar11;
          *(undefined8 *)((long)puVar13 + lVar22 + 0x10) =
               *(undefined8 *)((long)puVar13 + lVar22 + -8);
          puVar15 = (undefined8 *)((long)puVar13 + lVar22 + -0x18);
          uVar5 = puVar15[1];
          *(undefined8 *)((long)puVar13 + lVar22) = *puVar15;
          ((undefined8 *)((long)puVar13 + lVar22))[1] = uVar5;
          if (lVar22 == 0x18) {
            puVar15 = puVar13;
            goto LAB_00634ae6;
          }
          if (cVar1 == '\0') {
            bVar23 = (*(int *)local_78[1] == 2) * '\x03';
          }
          else {
            bVar23 = 1;
            if (cVar1 != '\x01') {
              bVar23 = 2;
            }
          }
          uVar21 = (ulong)*(uint *)((long)puVar13 + lVar22 + -0x20);
          if (uVar16 <= uVar21) goto LAB_00634f5b;
          cVar2 = *(char *)(lVar8 + 0x18 + uVar21 * 0x20);
          if (cVar2 == '\0') {
            bVar26 = (*(int *)local_78[1] == 2) * '\x03';
          }
          else {
            bVar26 = 1;
            if (cVar2 != '\x01') {
              bVar26 = 2;
            }
          }
          lVar11 = lVar22 + -0x18;
        } while (bVar23 < bVar26);
        puVar15 = (undefined8 *)(lVar22 + -0x18 + (long)puVar13);
LAB_00634ae6:
        uVar5 = (plVar24 + uVar29 * 3 + uVar19 * 3)[1];
        *puVar15 = plVar24[uVar29 * 3 + uVar19 * 3];
        puVar15[1] = uVar5;
        *(int *)((long)puVar13 + lVar22 + -8) = (int)uVar25;
        *(undefined4 *)((long)puVar13 + lVar22 + -4) = uVar3;
      }
      uVar19 = uVar19 + 1;
      lVar28 = lVar28 + 0x18;
    } while (uVar19 != param_2 - uVar29);
  }
  puVar18 = param_3 + param_2 * 3 + -3;
  puVar15 = puVar13 + -3;
  puVar17 = plVar24 + param_2 * 3 + -3;
  lVar7 = *local_78;
  uVar16 = *(ulong *)(lVar7 + 0x70);
  while( true ) {
    local_70 = plVar24;
    uVar21 = (ulong)*(uint *)(puVar13 + 2);
    if (uVar16 <= uVar21) break;
    lVar28 = *(long *)(lVar7 + 0x68);
    cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
    if (cVar1 == '\0') {
      bVar23 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar23 = 1;
      if (cVar1 != '\x01') {
        bVar23 = 2;
      }
    }
    uVar21 = (ulong)*(uint *)(param_3 + 2);
    if (uVar16 <= uVar21) break;
    cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
    if (cVar1 == '\0') {
      bVar26 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar26 = 1;
      if (cVar1 != '\x01') {
        bVar26 = 2;
      }
    }
    bVar30 = bVar23 < bVar26;
    puVar20 = puVar13;
    if (!bVar30) {
      puVar20 = param_3;
    }
    local_70[2] = puVar20[2];
    uVar5 = puVar20[1];
    *local_70 = *puVar20;
    local_70[1] = uVar5;
    uVar21 = (ulong)*(uint *)(puVar18 + 2);
    if (uVar16 <= uVar21) break;
    cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
    if (cVar1 == '\0') {
      bVar23 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar23 = 1;
      if (cVar1 != '\x01') {
        bVar23 = 2;
      }
    }
    uVar21 = (ulong)*(uint *)(puVar15 + 2);
    if (uVar16 <= uVar21) break;
    cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
    if (cVar1 == '\0') {
      bVar26 = (*(int *)local_78[1] == 2) * '\x03';
    }
    else {
      bVar26 = 1;
      if (cVar1 != '\x01') {
        bVar26 = 2;
      }
    }
    puVar20 = puVar15;
    if (bVar23 >= bVar26) {
      puVar20 = puVar18;
    }
    puVar13 = puVar13 + (ulong)bVar30 * 3;
    param_3 = param_3 + (ulong)!bVar30 * 3;
    puVar17[2] = puVar20[2];
    uVar5 = puVar20[1];
    *puVar17 = *puVar20;
    puVar17[1] = uVar5;
    puVar18 = puVar18 + ((ulong)(bVar23 < bVar26) - 1) * 3;
    puVar15 = puVar15 + (ulong)(bVar23 < bVar26) * -3;
    puVar17 = puVar17 + -3;
    uVar29 = uVar29 - 1;
    plVar24 = local_70 + 3;
    if (uVar29 == 0) {
      if ((param_2 & 1) != 0) {
        bVar30 = param_3 < puVar15 + 3;
        puVar17 = puVar13;
        if (bVar30) {
          puVar17 = param_3;
        }
        local_70[5] = puVar17[2];
        uVar5 = puVar17[1];
        local_70[3] = *puVar17;
        local_70[4] = uVar5;
        param_3 = param_3 + (ulong)bVar30 * 3;
        puVar13 = puVar13 + (ulong)!bVar30 * 3;
      }
      if ((param_3 != puVar15 + 3) || (puVar13 != puVar18 + 3)) {
                    /* WARNING: Subroutine does not return */
        shared::smallsort::panic_on_ord_violation();
      }
      return;
    }
  }
LAB_00634f5b:
                    /* WARNING: Subroutine does not return */
  panicking::panic_bounds_check(uVar21,uVar16,&PTR_s_src_parse_rs_00210c28);
code_r0x006342b5:
  puVar20[param_2 * 3 + -1] = puVar17[2];
  uVar5 = puVar17[1];
  puVar20[param_2 * 3 + -3] = *puVar17;
  (puVar20 + param_2 * 3 + -3)[1] = uVar5;
  puVar20 = puVar20 + -3;
  puVar17 = puVar17 + 3;
  puVar18 = param_1 + uVar29 * 3;
  uVar25 = uVar29;
  if (puVar17 < puVar18) goto LAB_006341d0;
  goto LAB_006342b0;
LAB_006344d0:
  if (param_4 < uVar29) {
LAB_00634f59:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  puVar15 = param_3 + uVar29 * 3;
  plVar24 = (long *)*param_7;
  uVar25 = 0;
  puVar18 = param_1;
  puVar17 = puVar15;
  while( true ) {
    if (puVar18 < param_1 + uVar19 * 3) {
      plVar4 = (long *)*plVar24;
      lVar7 = *plVar4;
      uVar16 = *(ulong *)(lVar7 + 0x70);
      do {
        uVar21 = (ulong)*(uint *)(puVar13 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        lVar28 = *(long *)(lVar7 + 0x68);
        cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar23 = (*(int *)plVar4[1] == 2) * '\x03';
        }
        else {
          bVar23 = 1;
          if (cVar1 != '\x01') {
            bVar23 = 2;
          }
        }
        uVar21 = (ulong)*(uint *)(puVar18 + 2);
        if (uVar16 <= uVar21) goto LAB_00634f5b;
        cVar1 = *(char *)(lVar28 + 0x18 + uVar21 * 0x20);
        if (cVar1 == '\0') {
          bVar26 = (*(int *)plVar4[1] == 2) * '\x03';
        }
        else {
          bVar26 = 1;
          if (cVar1 != '\x01') {
            bVar26 = 2;
          }
        }
        puVar17 = puVar17 + -3;
        puVar20 = puVar17;
        if (bVar23 >= bVar26) {
          puVar20 = param_3;
        }
        uVar5 = *puVar18;
        uVar10 = puVar18[1];
        puVar20[uVar25 * 3 + 2] = puVar18[2];
        puVar20[uVar25 * 3] = uVar5;
        (puVar20 + uVar25 * 3)[1] = uVar10;
        uVar25 = (uVar25 + 1) - (ulong)(bVar23 < bVar26);
        puVar18 = puVar18 + 3;
      } while (puVar18 < param_1 + uVar19 * 3);
    }
    if (uVar19 == uVar29) break;
    puVar17 = puVar17 + -3;
    param_3[uVar25 * 3 + 2] = puVar18[2];
    uVar5 = puVar18[1];
    param_3[uVar25 * 3] = *puVar18;
    (param_3 + uVar25 * 3)[1] = uVar5;
    uVar25 = uVar25 + 1;
    puVar18 = puVar18 + 3;
    uVar19 = uVar29;
  }
  (*(code *)PTR_memcpy_00841de0)(param_1,param_3,uVar25 * 0x18);
  param_2 = uVar29 - uVar25;
  if (param_2 == 0) {
    return;
  }
  plVar24 = param_1 + uVar25 * 3;
  if (uVar25 - uVar29 < 0xfffffffffffffffd) {
    puVar13 = param_3 + uVar29 * 3 + -3;
    puVar18 = plVar24;
    uVar16 = 0;
    do {
      uVar5 = puVar13[2];
      uVar10 = puVar13[1];
      *puVar18 = *puVar13;
      puVar18[1] = uVar10;
      puVar18[2] = uVar5;
      uVar5 = puVar15[(uVar16 ^ 0x1ffffffffffffffe) * 3];
      uVar10 = (puVar15 + (uVar16 ^ 0x1ffffffffffffffe) * 3)[1];
      puVar18[5] = puVar15[(uVar16 ^ 0x1ffffffffffffffe) * 3 + 2];
      puVar18[3] = uVar5;
      puVar18[4] = uVar10;
      puVar18[8] = puVar15[(uVar16 ^ 0x1ffffffffffffffd) * 3 + 2];
      uVar5 = (puVar15 + (uVar16 ^ 0x1ffffffffffffffd) * 3)[1];
      puVar18[6] = puVar15[(uVar16 ^ 0x1ffffffffffffffd) * 3];
      puVar18[7] = uVar5;
      uVar21 = uVar16 + 4;
      uVar5 = (puVar15 + (uVar16 ^ 0x1ffffffffffffffc) * 3)[1];
      puVar18[9] = puVar15[(uVar16 ^ 0x1ffffffffffffffc) * 3];
      puVar18[10] = uVar5;
      puVar18[0xb] = puVar15[(uVar16 ^ 0x1ffffffffffffffc) * 3 + 2];
      puVar18 = puVar18 + 0xc;
      puVar13 = puVar13 + -0xc;
      uVar16 = uVar21;
    } while ((param_2 & 0xfffffffffffffffc) != uVar21);
    if ((param_2 & 3) == 0) goto code_r0x006347e0;
  }
  else {
    uVar21 = 0;
  }
  lVar7 = uVar25 * 0x18 + uVar21 * 0x18;
  puVar13 = param_3 + uVar21 * -3 + uVar29 * 3 + -3;
  lVar28 = 0;
  do {
    uVar5 = *puVar13;
    uVar10 = puVar13[1];
    *(undefined8 *)((long)param_1 + lVar28 + lVar7 + 0x10) = puVar13[2];
    puVar15 = (undefined8 *)((long)param_1 + lVar28 + lVar7);
    *puVar15 = uVar5;
    puVar15[1] = uVar10;
    lVar28 = lVar28 + 0x18;
    puVar13 = puVar13 + -3;
  } while ((ulong)(((uint)param_2 & 3) << 3) * 3 != lVar28);
code_r0x006347e0:
  if (uVar29 < uVar25) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar25,uVar29,uVar29,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002104a8);
  }
  local_58 = 0;
  param_1 = plVar24;
  if (param_2 < 0x21) goto LAB_00633e4a;
  goto LAB_00633ec5;
}


