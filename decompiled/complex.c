// ==== core::ptr::drop_glue::<pipeline::complex::PScratch> @ 00608e40 (602 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>
          (long *param_1)

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
      uVar3 = *param_1 * 0x10 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609076;
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
      uVar3 = param_1[3] * 0x18 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00609076;
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
      uVar3 = param_1[6] * 0x30 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00609076:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar6 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar6 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  uVar3 = param_1[9];
  if (uVar3 != 0) {
    puVar1 = (undefined8 *)param_1[10];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
      return;
    }
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


// ==== core::slice::sort::unstable::ipnsort::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 00616c60 (771 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<[u64; 3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  char cVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = param_1[3];
  uVar14 = *param_1;
  cVar8 = (uVar14 < uVar13) - (uVar13 < uVar14);
  if (uVar13 == uVar14) {
    cVar8 = (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_1 + 0x24)) -
            (*(uint *)((long)param_1 + 0x24) < *(uint *)((long)param_1 + 0xc));
  }
  puVar1 = (undefined8 *)*param_3;
  if (cVar8 == '\0') {
    uVar14 = param_1[2];
    uVar2 = param_1[5];
    if (((uVar14 | uVar2) & 0x2000000000000000) == 0) {
      cVar8 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar1);
    }
    else {
      cVar8 = (uVar14 < uVar2) - (uVar2 < uVar14);
    }
  }
  puVar10 = param_1 + 8;
  uVar14 = 2;
  if (cVar8 == -1) {
    do {
      uVar2 = puVar10[-2];
      cVar6 = (uVar13 < uVar2) - (uVar2 < uVar13);
      if (uVar2 == uVar13) {
        cVar6 = (*(uint *)((long)puVar10 + -0x1c) < *(uint *)((long)puVar10 + -4)) -
                (*(uint *)((long)puVar10 + -4) < *(uint *)((long)puVar10 + -0x1c));
      }
      if (cVar6 == '\0') {
        uVar13 = puVar10[-3];
        uVar3 = *puVar10;
        if (((uVar13 | uVar3) & 0x2000000000000000) == 0) {
          cVar6 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar1);
        }
        else {
          cVar6 = (uVar13 < uVar3) - (uVar3 < uVar13);
        }
      }
      if (cVar6 != -1) goto LAB_00616e51;
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 3;
      uVar13 = uVar2;
    } while (param_2 != uVar14);
  }
  else {
    do {
      uVar2 = puVar10[-2];
      cVar6 = (uVar13 < uVar2) - (uVar2 < uVar13);
      if (uVar2 == uVar13) {
        cVar6 = (*(uint *)((long)puVar10 + -0x1c) < *(uint *)((long)puVar10 + -4)) -
                (*(uint *)((long)puVar10 + -4) < *(uint *)((long)puVar10 + -0x1c));
      }
      if (cVar6 == '\0') {
        uVar13 = puVar10[-3];
        uVar3 = *puVar10;
        if (((uVar13 | uVar3) & 0x2000000000000000) == 0) {
          cVar6 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar1);
        }
        else {
          cVar6 = (uVar13 < uVar3) - (uVar3 < uVar13);
        }
      }
      if (cVar6 == -1) goto LAB_00616e51;
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 3;
      uVar13 = uVar2;
    } while (param_2 != uVar14);
  }
LAB_00616e5a:
  if (cVar8 == -1) {
    puVar9 = param_1 + param_2 * 3 + -3;
    puVar10 = param_1;
    uVar13 = 0;
    do {
      uVar11 = uVar13;
      uVar13 = puVar10[2];
      uVar12 = uVar11 ^ 0x1ffffffffffffffe;
      uVar14 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      *puVar10 = *puVar9;
      *puVar9 = uVar3;
      puVar9[1] = uVar4;
      puVar9[2] = uVar13;
      uVar13 = param_1[param_2 * 3 + uVar12 * 3];
      uVar3 = (param_1 + param_2 * 3 + uVar12 * 3)[1];
      uVar4 = puVar10[3];
      uVar5 = puVar10[4];
      puVar10[1] = uVar14;
      puVar10[2] = uVar2;
      puVar10[3] = uVar13;
      puVar10[4] = uVar3;
      param_1[param_2 * 3 + uVar12 * 3] = uVar4;
      (param_1 + param_2 * 3 + uVar12 * 3)[1] = uVar5;
      uVar13 = puVar10[5];
      puVar10[5] = param_1[param_2 * 3 + uVar12 * 3 + 2];
      param_1[param_2 * 3 + uVar12 * 3 + 2] = uVar13;
      uVar13 = uVar11 + 2;
      puVar10 = puVar10 + 6;
      puVar9 = puVar9 + -6;
    } while ((param_2 >> 1 & 0x3fffffffffffffe) != uVar13);
    if ((param_2 & 2) != 0) {
      lVar7 = -3 - uVar11;
      uVar14 = param_1[uVar13 * 3];
      uVar2 = (param_1 + uVar13 * 3)[1];
      uVar3 = (param_1 + param_2 * 3 + lVar7 * 3)[1];
      param_1[uVar13 * 3] = param_1[param_2 * 3 + lVar7 * 3];
      (param_1 + uVar13 * 3)[1] = uVar3;
      param_1[param_2 * 3 + lVar7 * 3] = uVar14;
      (param_1 + param_2 * 3 + lVar7 * 3)[1] = uVar2;
      uVar14 = param_1[uVar13 * 3 + 2];
      param_1[uVar13 * 3 + 2] = param_1[param_2 * 3 + lVar7 * 3 + 2];
      param_1[param_2 * 3 + lVar7 * 3 + 2] = uVar14;
    }
  }
  return;
LAB_00616e51:
  if (uVar14 != param_2) {
    quicksort::quicksort::
    <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
              (param_1,param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e,param_3);
    return;
  }
  goto LAB_00616e5a;
}


// ==== core::slice::sort::unstable::ipnsort::<(usize, usize), <[(usize, usize)]>::sort_unstable_by<pipeline::complex::shard_order::{closure#1}>::{closure#0}> @ 006179e0 (383 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<(usize, usize), <[(usize,
   usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
          (ulong *param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  bVar2 = *param_1 < uVar7;
  if (*param_1 == uVar7) {
    bVar2 = param_1[1] < uVar8;
  }
  puVar6 = param_1 + 7;
  lVar5 = 3;
  if (bVar2) {
    do {
      uVar1 = puVar6[-3];
      bVar3 = uVar7 < uVar1;
      if (uVar7 == uVar1) {
        bVar3 = uVar8 < puVar6[-2];
      }
      if (!bVar3) goto LAB_00617add;
      uVar7 = puVar6[-1];
      uVar8 = *puVar6;
      bVar3 = uVar1 < uVar7;
      if (uVar1 == uVar7) {
        bVar3 = puVar6[-2] < uVar8;
      }
      if (!bVar3) goto LAB_00617b53;
      lVar5 = lVar5 + 2;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0x41);
  }
  else {
    do {
      uVar1 = puVar6[-3];
      bVar3 = uVar7 < uVar1;
      if (uVar7 == uVar1) {
        bVar3 = uVar8 < puVar6[-2];
      }
      if (bVar3) goto LAB_00617add;
      uVar7 = puVar6[-1];
      uVar8 = *puVar6;
      bVar3 = uVar1 < uVar7;
      if (uVar1 == uVar7) {
        bVar3 = puVar6[-2] < uVar8;
      }
      if (bVar3) goto LAB_00617b53;
      lVar5 = lVar5 + 2;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0x41);
  }
LAB_00617ae6:
  if (bVar2) {
    puVar6 = param_1 + 2;
    puVar9 = param_1 + 0x7e;
    uVar7 = 0;
    do {
      uVar8 = puVar6[-2];
      uVar1 = puVar6[-1];
      uVar4 = puVar9[1];
      puVar6[-2] = *puVar9;
      puVar6[-1] = uVar4;
      *puVar9 = uVar8;
      puVar9[1] = uVar1;
      uVar8 = *puVar6;
      uVar1 = puVar6[1];
      uVar4 = (param_1 + (uVar7 ^ 0xffffffffffffffe) * 2 + 0x80)[1];
      *puVar6 = param_1[(uVar7 ^ 0xffffffffffffffe) * 2 + 0x80];
      puVar6[1] = uVar4;
      param_1[(uVar7 ^ 0xffffffffffffffe) * 2 + 0x80] = uVar8;
      (param_1 + (uVar7 ^ 0xffffffffffffffe) * 2 + 0x80)[1] = uVar1;
      uVar7 = uVar7 + 2;
      puVar6 = puVar6 + 4;
      puVar9 = puVar9 + -4;
    } while (uVar7 != 0x20);
  }
  return;
LAB_00617add:
  if (lVar5 != 0x41) {
LAB_00617b53:
    quicksort::quicksort::
    <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
              (param_1,0x40,0,0xc);
    return;
  }
  goto LAB_00617ae6;
}


// ==== core::slice::sort::unstable::ipnsort::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 00617d20 (396 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<(u128, u64, [u64; 3usize]), <[(u128,
   u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [16],ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  
  uVar15 = *(ulong *)param_1[3];
  uVar17 = *(ulong *)param_1[4];
  uVar19 = *(ulong *)(param_1[3] + 8);
  bVar5 = uVar19 < *(ulong *)(*param_1 + 8) ||
          uVar19 - *(ulong *)(*param_1 + 8) < (ulong)(uVar15 < *(ulong *)*param_1);
  if (param_1[3] == *param_1) {
    bVar5 = uVar17 < *(ulong *)param_1[1];
  }
  pauVar21 = param_1 + 7;
  uVar20 = 2;
  if (bVar5) {
    do {
      uVar3 = *(ulong *)pauVar21[-1];
      uVar4 = *(ulong *)(pauVar21[-1] + 8);
      puVar14 = *pauVar21;
      bVar6 = uVar4 < uVar19 || uVar4 - uVar19 < (ulong)(uVar3 < uVar15);
      if (uVar3 == uVar15 && uVar4 == uVar19) {
        bVar6 = *(ulong *)puVar14 < uVar17;
      }
      if (!bVar6) goto LAB_00617e27;
      uVar20 = uVar20 + 1;
      pauVar21 = pauVar21 + 3;
      uVar15 = uVar3;
      uVar17 = *(ulong *)puVar14;
      uVar19 = uVar4;
    } while (param_2 != uVar20);
  }
  else {
    do {
      uVar3 = *(ulong *)pauVar21[-1];
      uVar4 = *(ulong *)(pauVar21[-1] + 8);
      puVar14 = *pauVar21;
      bVar6 = uVar4 < uVar19 || uVar4 - uVar19 < (ulong)(uVar3 < uVar15);
      if (uVar3 == uVar15 && uVar4 == uVar19) {
        bVar6 = *(ulong *)puVar14 < uVar17;
      }
      if (bVar6) goto LAB_00617e27;
      uVar20 = uVar20 + 1;
      pauVar21 = pauVar21 + 3;
      uVar15 = uVar3;
      uVar17 = *(ulong *)puVar14;
      uVar19 = uVar4;
    } while (param_2 != uVar20);
  }
LAB_00617e2c:
  if (bVar5) {
    lVar18 = 0;
    lVar16 = param_2 * 0x30;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar18);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined8 *)(param_1[-3] + lVar16);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined8 *)(*param_1 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined8 *)(param_1[-3] + lVar16);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      uVar7 = *(undefined8 *)(param_1[2] + lVar18);
      uVar8 = *(undefined8 *)((long)(param_1[2] + lVar18) + 8);
      uVar9 = *(undefined8 *)((long)(param_1[-1] + lVar16) + 8);
      *(undefined8 *)(param_1[2] + lVar18) = *(undefined8 *)(param_1[-1] + lVar16);
      *(undefined8 *)((long)(param_1[2] + lVar18) + 8) = uVar9;
      *(undefined8 *)(param_1[-1] + lVar16) = uVar7;
      *(undefined8 *)((long)(param_1[-1] + lVar16) + 8) = uVar8;
      lVar18 = lVar18 + 0x30;
      lVar16 = lVar16 + -0x30;
    } while ((param_2 * 8 & 0xfffffffffffffff0) * 3 != lVar18);
  }
  return;
LAB_00617e27:
  if (uVar20 != param_2) {
    quicksort::quicksort::
    <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
              (param_1,param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e);
    return;
  }
  goto LAB_00617e2c;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 00618800 (457 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<[u64; 3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

ulong * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                                 (param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4,
                                  param_5);
    param_2 = (ulong *)<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                                 (param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4,
                                  param_5);
    param_3 = (ulong *)<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                                 (param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4,
                                  param_5);
  }
  uVar4 = *param_1;
  uVar1 = *param_2;
  cVar5 = (uVar1 < uVar4) - (uVar4 < uVar1);
  if (uVar4 == uVar1) {
    cVar5 = (*(uint *)((long)param_2 + 0xc) < *(uint *)((long)param_1 + 0xc)) -
            (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 + 0xc));
  }
  uVar6 = *(undefined8 *)*param_5;
  if (cVar5 == '\0') {
    uVar1 = param_1[2];
    uVar2 = param_2[2];
    if (((uVar2 | uVar1) >> 0x3d & 1) == 0) {
      cVar5 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar6);
      uVar6 = *(undefined8 *)*param_5;
      uVar4 = *param_1;
    }
    else {
      cVar5 = (uVar2 < uVar1) - (uVar1 < uVar2);
    }
  }
  uVar1 = *param_3;
  cVar3 = (uVar1 < uVar4) - (uVar4 < uVar1);
  if (uVar4 == uVar1) {
    cVar3 = (*(uint *)((long)param_3 + 0xc) < *(uint *)((long)param_1 + 0xc)) -
            (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_3 + 0xc));
  }
  if (cVar3 == '\0') {
    uVar4 = param_1[2];
    uVar1 = param_3[2];
    if (((uVar1 | uVar4) >> 0x3d & 1) == 0) {
      cVar3 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar6);
    }
    else {
      cVar3 = (uVar1 < uVar4) - (uVar4 < uVar1);
    }
  }
  if ((cVar3 == -1) == (cVar5 == -1)) {
    uVar4 = *param_2;
    uVar1 = *param_3;
    cVar3 = (uVar1 < uVar4) - (uVar4 < uVar1);
    if (uVar4 == uVar1) {
      cVar3 = (*(uint *)((long)param_3 + 0xc) < *(uint *)((long)param_2 + 0xc)) -
              (*(uint *)((long)param_2 + 0xc) < *(uint *)((long)param_3 + 0xc));
    }
    if (cVar3 == '\0') {
      uVar4 = param_2[2];
      uVar1 = param_3[2];
      if (((uVar1 | uVar4) >> 0x3d & 1) == 0) {
        cVar3 = pipeline[509596c7b52975b2]::events::cid_cmp(*(undefined8 *)*param_5);
      }
      else {
        cVar3 = (uVar1 < uVar4) - (uVar4 < uVar1);
      }
    }
    param_1 = param_2;
    if ((cVar3 == -1) != (cVar5 == -1)) {
      param_1 = param_3;
    }
  }
  return param_1;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<(usize, usize), <[(usize, usize)]>::sort_unstable_by<pipeline::complex::shard_order::{closure#1}>::{closure#0}> @ 0061a4e0 (225 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<(usize, usize), <[(usize,
   usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::{closure#1}>::{closure#0}>
    */

ulong * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                                 (param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe);
    param_2 = (ulong *)<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                                 (param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                                 (param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  bVar4 = uVar2 < uVar1;
  if (uVar2 == uVar1) {
    bVar4 = param_2[1] < param_1[1];
  }
  uVar3 = *param_3;
  bVar5 = uVar3 < uVar1;
  if (uVar3 == uVar1) {
    bVar5 = param_3[1] < param_1[1];
  }
  if (bVar4 == bVar5) {
    bVar5 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar5 = param_3[1] < param_2[1];
    }
    param_1 = param_2;
    if (bVar4 != bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 0061a780 (298 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<(u128, u64, [u64; 3usize]),
   <[(u128, u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

undefined1 (*) [16] __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
          ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (undefined1 (*) [16])
              <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                        (param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15);
    param_2 = (undefined1 (*) [16])
              <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                        (param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4);
    param_3 = (undefined1 (*) [16])
              <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                        (param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4);
  }
  uVar1 = *(ulong *)(*param_1 + 8);
  uVar2 = *(ulong *)*param_2;
  uVar3 = *(ulong *)(*param_2 + 8);
  bVar6 = uVar1 < uVar3 || uVar1 - uVar3 < (ulong)(*(ulong *)*param_1 < uVar2);
  if (*param_1 == *param_2) {
    bVar6 = *(ulong *)param_1[1] < *(ulong *)param_2[1];
  }
  uVar4 = *(ulong *)*param_3;
  uVar5 = *(ulong *)(*param_3 + 8);
  bVar7 = uVar1 < uVar5 || uVar1 - uVar5 < (ulong)(*(ulong *)*param_1 < uVar4);
  if (*param_1 == *param_3) {
    bVar7 = *(ulong *)param_1[1] < *(ulong *)param_3[1];
  }
  if (bVar6 == bVar7) {
    bVar7 = uVar3 < uVar5 || uVar3 - uVar5 < (ulong)(uVar2 < uVar4);
    if (uVar3 == uVar5 && uVar2 == uVar4) {
      bVar7 = *(ulong *)param_2[1] < *(ulong *)param_3[1];
    }
    param_1 = param_2;
    if (bVar6 != bVar7) {
      param_1 = param_3;
    }
  }
  return param_1;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 0061b360 (795 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<[u64; 3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  ulong *puVar6;
  char cVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  uVar5 = param_1[3];
  uVar1 = *param_1;
  cVar7 = (uVar1 < uVar5) - (uVar5 < uVar1);
  if (uVar5 == uVar1) {
    cVar7 = (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_1 + 0x24)) -
            (*(uint *)((long)param_1 + 0x24) < *(uint *)((long)param_1 + 0xc));
  }
  uVar8 = *param_3;
  if (cVar7 == '\0') {
    uVar5 = param_1[2];
    uVar1 = param_1[5];
    if (((uVar5 | uVar1) & 0x2000000000000000) == 0) {
      cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar8);
      uVar8 = *param_3;
    }
    else {
      cVar7 = (uVar5 < uVar1) - (uVar1 < uVar5);
    }
  }
  uVar5 = param_1[9];
  uVar1 = param_1[6];
  cVar3 = (uVar1 < uVar5) - (uVar5 < uVar1);
  if (uVar5 == uVar1) {
    cVar3 = (*(uint *)((long)param_1 + 0x3c) < *(uint *)((long)param_1 + 0x54)) -
            (*(uint *)((long)param_1 + 0x54) < *(uint *)((long)param_1 + 0x3c));
  }
  if (cVar3 == '\0') {
    uVar5 = param_1[8];
    uVar1 = param_1[0xb];
    if (((uVar5 | uVar1) & 0x2000000000000000) == 0) {
      cVar3 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar8);
      uVar8 = *param_3;
    }
    else {
      cVar3 = (uVar5 < uVar1) - (uVar1 < uVar5);
    }
  }
  uVar5 = (ulong)(cVar7 == -1);
  puVar12 = param_1 + 9;
  puVar11 = param_1 + 6;
  if (cVar3 == -1) {
    puVar12 = param_1 + 6;
    puVar11 = param_1 + 9;
  }
  uVar1 = *puVar11;
  uVar2 = param_1[uVar5 * 3];
  cVar3 = (uVar2 < uVar1) - (uVar1 < uVar2);
  puVar9 = param_1 + uVar5 * 3;
  if (uVar1 == uVar2) {
    cVar3 = (*(uint *)((long)puVar9 + 0xc) < *(uint *)((long)puVar11 + 0xc)) -
            (*(uint *)((long)puVar11 + 0xc) < *(uint *)((long)puVar9 + 0xc));
  }
  param_1 = param_1 + (ulong)(cVar7 != -1) * 3;
  if (cVar3 == '\0') {
    uVar5 = puVar11[2];
    uVar1 = puVar9[2];
    if (((uVar1 | uVar5) & 0x2000000000000000) == 0) {
      cVar3 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar8);
      uVar8 = *param_3;
    }
    else {
      cVar3 = (uVar1 < uVar5) - (uVar5 < uVar1);
    }
  }
  uVar5 = *puVar12;
  uVar1 = *param_1;
  cVar7 = (uVar1 < uVar5) - (uVar5 < uVar1);
  if (uVar5 == uVar1) {
    cVar7 = (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)puVar12 + 0xc)) -
            (*(uint *)((long)puVar12 + 0xc) < *(uint *)((long)param_1 + 0xc));
  }
  if (cVar7 == '\0') {
    uVar5 = puVar12[2];
    uVar1 = param_1[2];
    if (((uVar1 | uVar5) & 0x2000000000000000) == 0) {
      cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar8);
      uVar8 = *param_3;
    }
    else {
      cVar7 = (uVar1 < uVar5) - (uVar5 < uVar1);
    }
  }
  puVar6 = param_1;
  if (cVar7 == -1) {
    puVar6 = puVar11;
  }
  puVar10 = puVar11;
  if (cVar3 == -1) {
    puVar10 = param_1;
    puVar6 = puVar9;
  }
  if (cVar7 == -1) {
    puVar10 = puVar12;
  }
  uVar5 = *puVar10;
  uVar1 = *puVar6;
  cVar4 = (uVar1 < uVar5) - (uVar5 < uVar1);
  if (uVar5 == uVar1) {
    cVar4 = (*(uint *)((long)puVar6 + 0xc) < *(uint *)((long)puVar10 + 0xc)) -
            (*(uint *)((long)puVar10 + 0xc) < *(uint *)((long)puVar6 + 0xc));
  }
  if (cVar4 == '\0') {
    uVar5 = puVar10[2];
    uVar1 = puVar6[2];
    if (((uVar1 | uVar5) & 0x2000000000000000) == 0) {
      cVar4 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar8);
    }
    else {
      cVar4 = (uVar1 < uVar5) - (uVar5 < uVar1);
    }
  }
  if (cVar7 == -1) {
    puVar12 = param_1;
  }
  if (cVar3 == -1) {
    puVar9 = puVar11;
  }
  puVar11 = puVar10;
  if (cVar4 == -1) {
    puVar11 = puVar6;
    puVar6 = puVar10;
  }
  param_2[2] = puVar9[2];
  uVar5 = puVar9[1];
  *param_2 = *puVar9;
  param_2[1] = uVar5;
  param_2[5] = puVar6[2];
  uVar5 = puVar6[1];
  param_2[3] = *puVar6;
  param_2[4] = uVar5;
  param_2[8] = puVar11[2];
  uVar5 = puVar11[1];
  param_2[6] = *puVar11;
  param_2[7] = uVar5;
  uVar5 = puVar12[1];
  param_2[9] = *puVar12;
  param_2[10] = uVar5;
  param_2[0xb] = puVar12[2];
  return;
}


// ==== core::slice::sort::shared::smallsort::sort8_stable::<(usize, usize), <[(usize, usize)]>::sort_unstable_by<pipeline::complex::shard_order::{closure#1}>::{closure#0}> @ 0061f2e0 (1315 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::<(usize, usize), <[(usize,
   usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::
<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  bool bVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  bool bVar14;
  
  bVar10 = *param_1 < param_1[2];
  if (*param_1 == param_1[2]) {
    bVar10 = param_1[1] < param_1[3];
  }
  bVar14 = param_1[4] < param_1[6];
  if (param_1[4] == param_1[6]) {
    bVar14 = param_1[5] < param_1[7];
  }
  uVar2 = (ulong)bVar10;
  uVar3 = (ulong)(bVar10 ^ 1);
  puVar9 = param_1 + uVar3 * 2;
  uVar1 = (ulong)bVar14;
  puVar12 = param_1 + uVar1 * 2 + 4;
  uVar6 = (ulong)((bVar14 ^ 3) << 4);
  bVar10 = param_1[uVar2 * 2] < param_1[uVar1 * 2 + 4];
  if (param_1[uVar2 * 2] == param_1[uVar1 * 2 + 4]) {
    bVar10 = param_1[uVar2 * 2 + 1] < param_1[uVar1 * 2 + 5];
  }
  bVar14 = param_1[uVar3 * 2] < *(ulong *)((long)param_1 + uVar6);
  if (param_1[uVar3 * 2] == *(ulong *)((long)param_1 + uVar6)) {
    bVar14 = param_1[uVar3 * 2 + 1] < *(ulong *)((long)param_1 + uVar6 + 8);
  }
  puVar7 = puVar9;
  if (bVar14) {
    puVar7 = puVar12;
  }
  puVar11 = puVar12;
  puVar13 = param_1 + uVar2 * 2;
  if (bVar10) {
    puVar11 = puVar9;
    puVar13 = puVar12;
    puVar7 = param_1 + uVar2 * 2;
  }
  if (bVar14) {
    puVar11 = (ulong *)((long)param_1 + uVar6);
  }
  else {
    puVar9 = (ulong *)((long)param_1 + uVar6);
  }
  bVar10 = *puVar7 < *puVar11;
  if (*puVar7 == *puVar11) {
    bVar10 = puVar7[1] < puVar11[1];
  }
  puVar12 = puVar11;
  if (bVar10) {
    puVar12 = puVar7;
    puVar7 = puVar11;
  }
  uVar2 = puVar13[1];
  *param_3 = *puVar13;
  param_3[1] = uVar2;
  uVar2 = puVar7[1];
  param_3[2] = *puVar7;
  param_3[3] = uVar2;
  uVar2 = puVar12[1];
  param_3[4] = *puVar12;
  param_3[5] = uVar2;
  uVar2 = puVar9[1];
  param_3[6] = *puVar9;
  param_3[7] = uVar2;
  bVar10 = param_1[8] < param_1[10];
  if (param_1[8] == param_1[10]) {
    bVar10 = param_1[9] < param_1[0xb];
  }
  bVar14 = param_1[0xc] < param_1[0xe];
  if (param_1[0xc] == param_1[0xe]) {
    bVar14 = param_1[0xd] < param_1[0xf];
  }
  uVar2 = (ulong)bVar10;
  uVar3 = (ulong)(bVar10 ^ 1);
  puVar9 = param_1 + uVar3 * 2 + 8;
  uVar1 = (ulong)bVar14;
  puVar12 = param_1 + uVar1 * 2 + 0xc;
  uVar6 = (ulong)((bVar14 ^ 3) << 4);
  bVar10 = param_1[uVar2 * 2 + 8] < param_1[uVar1 * 2 + 0xc];
  if (param_1[uVar2 * 2 + 8] == param_1[uVar1 * 2 + 0xc]) {
    bVar10 = param_1[uVar2 * 2 + 9] < param_1[uVar1 * 2 + 0xd];
  }
  uVar1 = *(ulong *)((long)param_1 + uVar6 + 0x40);
  bVar14 = param_1[uVar3 * 2 + 8] < uVar1;
  if (param_1[uVar3 * 2 + 8] == uVar1) {
    bVar14 = param_1[uVar3 * 2 + 9] < *(ulong *)((long)param_1 + uVar6 + 0x48);
  }
  puVar7 = puVar9;
  if (bVar14) {
    puVar7 = puVar12;
  }
  puVar11 = puVar12;
  puVar13 = param_1 + uVar2 * 2 + 8;
  if (bVar10) {
    puVar11 = puVar9;
    puVar13 = puVar12;
    puVar7 = param_1 + uVar2 * 2 + 8;
  }
  param_1 = (ulong *)((long)param_1 + uVar6 + 0x40);
  if (bVar14) {
    puVar11 = param_1;
  }
  else {
    puVar9 = param_1;
  }
  bVar10 = *puVar7 < *puVar11;
  if (*puVar7 == *puVar11) {
    bVar10 = puVar7[1] < puVar11[1];
  }
  puVar12 = puVar11;
  if (bVar10) {
    puVar12 = puVar7;
    puVar7 = puVar11;
  }
  uVar2 = puVar13[1];
  param_3[8] = *puVar13;
  param_3[9] = uVar2;
  uVar2 = puVar7[1];
  param_3[10] = *puVar7;
  param_3[0xb] = uVar2;
  uVar2 = puVar12[1];
  param_3[0xc] = *puVar12;
  param_3[0xd] = uVar2;
  uVar2 = puVar9[1];
  param_3[0xe] = *puVar9;
  param_3[0xf] = uVar2;
  bVar10 = *param_3 < param_3[8];
  if (*param_3 == param_3[8]) {
    bVar10 = param_3[1] < param_3[9];
  }
  puVar9 = param_3 + 8;
  if (bVar10 == false) {
    puVar9 = param_3;
  }
  uVar2 = puVar9[1];
  *param_2 = *puVar9;
  param_2[1] = uVar2;
  uVar2 = (ulong)bVar10;
  puVar12 = param_3 + uVar2 * 2 + 8;
  uVar3 = (ulong)(bVar10 ^ 1);
  puVar9 = param_3 + uVar3 * 2;
  bVar10 = param_3[6] < param_3[0xe];
  if (param_3[6] == param_3[0xe]) {
    bVar10 = param_3[7] < param_3[0xf];
  }
  puVar7 = param_3 + 0xe;
  if (bVar10 != false) {
    puVar7 = param_3 + 6;
  }
  uVar1 = puVar7[1];
  param_2[0xe] = *puVar7;
  param_2[0xf] = uVar1;
  uVar1 = (ulong)bVar10;
  puVar7 = param_3 + 6 + uVar1 * -2;
  bVar10 = param_3[uVar3 * 2] < param_3[uVar2 * 2 + 8];
  if (param_3[uVar3 * 2] == param_3[uVar2 * 2 + 8]) {
    bVar10 = param_3[uVar3 * 2 + 1] < param_3[uVar2 * 2 + 9];
  }
  puVar13 = puVar9;
  if (bVar10 != false) {
    puVar13 = puVar12;
  }
  uVar2 = puVar13[1];
  param_2[2] = *puVar13;
  param_2[3] = uVar2;
  uVar2 = (ulong)bVar10;
  puVar13 = puVar12 + uVar2 * 2;
  uVar3 = (ulong)(bVar10 ^ 1);
  puVar11 = puVar9 + uVar3 * 2;
  bVar10 = *puVar7 < param_3[uVar1 * 2 + 0xc];
  if (*puVar7 == param_3[uVar1 * 2 + 0xc]) {
    bVar10 = puVar7[1] < param_3[uVar1 * 2 + 0xd];
  }
  puVar8 = param_3 + uVar1 * 2 + 0xc;
  if (bVar10 != false) {
    puVar8 = puVar7;
  }
  uVar6 = puVar8[1];
  param_2[0xc] = *puVar8;
  param_2[0xd] = uVar6;
  uVar6 = (ulong)bVar10;
  puVar7 = puVar7 + uVar6 * -2;
  bVar10 = puVar9[uVar3 * 2] < puVar12[uVar2 * 2];
  if (puVar9[uVar3 * 2] == puVar12[uVar2 * 2]) {
    bVar10 = puVar9[uVar3 * 2 + 1] < puVar12[uVar2 * 2 + 1];
  }
  puVar9 = puVar11;
  if (bVar10 != false) {
    puVar9 = puVar13;
  }
  uVar2 = puVar9[1];
  param_2[4] = *puVar9;
  param_2[5] = uVar2;
  uVar2 = (ulong)bVar10;
  uVar3 = (ulong)(bVar10 ^ 1);
  bVar10 = *puVar7 < param_3[uVar1 * 2 + uVar6 * 2 + 10];
  if (*puVar7 == param_3[uVar1 * 2 + uVar6 * 2 + 10]) {
    bVar10 = puVar7[1] < param_3[uVar1 * 2 + uVar6 * 2 + 0xb];
  }
  puVar9 = param_3 + uVar1 * 2 + uVar6 * 2 + 10;
  if (bVar10 != false) {
    puVar9 = puVar7;
  }
  uVar4 = puVar9[1];
  param_2[10] = *puVar9;
  param_2[0xb] = uVar4;
  uVar4 = (ulong)bVar10;
  puVar7 = puVar7 + uVar4 * -2;
  bVar10 = puVar11[uVar3 * 2] < puVar13[uVar2 * 2];
  if (puVar11[uVar3 * 2] == puVar13[uVar2 * 2]) {
    bVar10 = puVar11[uVar3 * 2 + 1] < puVar13[uVar2 * 2 + 1];
  }
  puVar9 = puVar11 + uVar3 * 2;
  if (bVar10 != false) {
    puVar9 = puVar13 + uVar2 * 2;
  }
  uVar5 = puVar9[1];
  param_2[6] = *puVar9;
  param_2[7] = uVar5;
  bVar14 = *puVar7 < param_3[uVar1 * 2 + uVar6 * 2 + uVar4 * 2 + 8];
  if (*puVar7 == param_3[uVar1 * 2 + uVar6 * 2 + uVar4 * 2 + 8]) {
    bVar14 = puVar7[1] < param_3[uVar1 * 2 + uVar6 * 2 + uVar4 * 2 + 9];
  }
  puVar9 = param_3 + uVar1 * 2 + uVar6 * 2 + uVar4 * 2 + 8;
  if (bVar14 != false) {
    puVar9 = puVar7;
  }
  uVar5 = puVar9[1];
  param_2[8] = *puVar9;
  param_2[9] = uVar5;
  if ((puVar11 + uVar3 * 2 + (ulong)(bVar10 ^ 1) * 2 != puVar7 + (ulong)bVar14 * -2 + 2) ||
     (puVar13 + uVar2 * 2 + (ulong)bVar10 * 2 !=
      param_3 + uVar1 * 2 + uVar6 * 2 + uVar4 * 2 + (ulong)bVar14 * 2 + 8)) {
                    /* WARNING: Subroutine does not return */
    panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::small_sort_general::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 006207a0 (1682 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::<[u64; 3usize],
   <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  char cVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  bool bVar22;
  undefined1 auStack_510 [16];
  undefined *puStack_500;
  undefined8 *local_4f8;
  ulong *local_4f0;
  ulong local_4e8;
  ulong local_4e0;
  uint uStack_4dc;
  ulong local_4d8 [2];
  ulong local_4c8;
  uint uStack_4c4;
  ulong *local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  ulong local_4a8;
  uint uStack_49c;
  ulong local_498 [141];
  
  if (1 < param_2) {
    uVar20 = param_2 >> 1;
    local_4f8 = param_3;
    local_4f0 = param_1;
    if (param_2 < 8) {
      local_4a8 = param_1[2];
      local_4b8 = *param_1;
      uStack_4b0 = param_1[1];
      (&local_4a8)[uVar20 * 3] = param_1[uVar20 * 3 + 2];
      uVar10 = (param_1 + uVar20 * 3)[1];
      (&local_4a8)[uVar20 * 3 + -2] = param_1[uVar20 * 3];
      (&local_4a8)[uVar20 * 3 + -1] = uVar10;
      uVar10 = 1;
    }
    else {
      puStack_500 = (undefined *)0x6207ea;
      sort4_stable::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (param_1,&local_4b8,param_3);
      puStack_500 = (undefined *)0x62080f;
      sort4_stable::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (local_4f0 + uVar20 * 3,&local_4a8 + uVar20 * 3 + -2,param_3);
      uVar10 = 4;
    }
    local_4d8[0] = param_2;
    local_4d8[1] = param_2 - uVar20;
    local_4e8 = uVar10;
    local_4c8 = uVar20;
    puVar9 = local_4f0;
    if (uVar10 < uVar20) {
      lVar14 = (ulong)(uint)((int)uVar10 * 8) * 3;
      do {
        uVar4 = (puVar9 + uVar10 * 3)[1];
        (&local_4a8)[uVar10 * 3 + -2] = puVar9[uVar10 * 3];
        (&local_4a8)[uVar10 * 3 + -1] = uVar4;
        uVar4 = local_4d8[uVar10 * 3 + 1];
        (&local_4a8)[uVar10 * 3] = puVar9[uVar10 * 3 + 2];
        uVar11 = (&local_4a8)[uVar10 * 3 + -2];
        cVar7 = (uVar4 < uVar11) - (uVar11 < uVar4);
        if (uVar11 == uVar4) {
          uVar2 = *(uint *)((long)local_4d8 + uVar10 * 0x18 + 0x14);
          uVar3 = *(uint *)((long)local_498 + uVar10 * 0x18 + -0x14);
          cVar7 = (uVar2 < uVar3) - (uVar3 < uVar2);
        }
        if (cVar7 == '\0') {
          uVar4 = local_4d8[uVar10 * 3 + 3];
          uVar11 = (&local_4a8)[uVar10 * 3];
          if (((uVar4 | uVar11) & 0x2000000000000000) == 0) {
            puStack_500 = (undefined *)0x620a27;
            cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(*local_4f8);
            puVar9 = local_4f0;
          }
          else {
            cVar7 = (uVar4 < uVar11) - (uVar11 < uVar4);
          }
        }
        if (cVar7 == -1) {
          uVar20 = (&local_4a8)[uVar10 * 3 + -2];
          uVar4 = (&local_4a8)[uVar10 * 3];
          local_4e0 = (&local_4a8)[uVar10 * 3 + -1];
          uVar11 = (&local_4a8)[uVar10 * 3 + -1] >> 0x20;
          lVar21 = lVar14;
          do {
            lVar13 = lVar21;
            *(undefined8 *)((long)&local_4a8 + lVar13) =
                 *(undefined8 *)((long)local_4d8 + lVar13 + 0x18);
            uVar16 = *(undefined8 *)((long)local_4d8 + lVar13 + 0x10);
            *(undefined8 *)((long)local_498 + lVar13 + -0x20) =
                 *(undefined8 *)((long)local_4d8 + lVar13 + 8);
            *(undefined8 *)((long)local_498 + lVar13 + -0x18) = uVar16;
            ppuVar6 = &local_4f8;
            if (lVar13 == 0x18) goto LAB_0062089e;
            uVar8 = *(ulong *)((long)local_4d8 + lVar13 + -0x10);
            cVar7 = (uVar8 < uVar20) - (uVar20 < uVar8);
            if (uVar20 == uVar8) {
              uVar8 = (ulong)*(uint *)((long)local_4d8 + lVar13 + -4);
              cVar7 = (uVar8 < uVar11) - (uVar11 < uVar8);
            }
            if (cVar7 == '\0') {
              uVar8 = *(ulong *)((long)local_4d8 + lVar13);
              if (((uVar8 | uVar4) & 0x2000000000000000) == 0) {
                puStack_500 = (undefined *)0x6209bf;
                cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(*local_4f8,uVar8,uVar4);
                puVar9 = local_4f0;
              }
              else {
                cVar7 = (uVar8 < uVar4) - (uVar4 < uVar8);
              }
            }
            lVar21 = lVar13 + -0x18;
          } while (cVar7 == -1);
          ppuVar6 = (undefined8 **)(auStack_510 + lVar13);
LAB_0062089e:
          *(ulong *)((long)ppuVar6 + 0x40) = uVar20;
          *(ulong *)((long)ppuVar6 + 0x48) = local_4e0;
          *(ulong *)((long)ppuVar6 + 0x50) = uVar4;
          uVar20 = local_4c8;
        }
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar10 != uVar20);
    }
    lVar14 = uVar20 * 0x18;
    puVar15 = &local_4a8 + uVar20 * 3 + -2;
    if (local_4e8 < local_4d8[1]) {
      puVar12 = puVar9 + uVar20 * 3;
      lVar21 = (ulong)(uint)((int)local_4e8 * 8) * 3;
      local_4c0 = puVar12;
      uVar10 = local_4e8;
      do {
        uVar4 = (puVar12 + uVar10 * 3)[1];
        puVar19 = puVar15 + uVar10 * 3;
        puVar15[uVar10 * 3] = puVar12[uVar10 * 3];
        (puVar15 + uVar10 * 3)[1] = uVar4;
        uVar4 = local_4d8[uVar20 * 3 + uVar10 * 3 + 1];
        (&local_4a8)[uVar20 * 3 + uVar10 * 3] = puVar12[uVar10 * 3 + 2];
        uVar11 = puVar15[uVar10 * 3];
        cVar7 = (uVar4 < uVar11) - (uVar11 < uVar4);
        if (uVar11 == uVar4) {
          cVar7 = (*(uint *)((long)puVar19 + -0xc) < *(uint *)((long)puVar19 + 0xc)) -
                  (*(uint *)((long)puVar19 + 0xc) < *(uint *)((long)puVar19 + -0xc));
        }
        if (cVar7 == '\0') {
          uVar4 = puVar19[-1];
          uVar11 = puVar19[2];
          if (((uVar4 | uVar11) & 0x2000000000000000) == 0) {
            puStack_500 = (undefined *)0x620c27;
            cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(*local_4f8);
            puVar9 = local_4f0;
          }
          else {
            cVar7 = (uVar4 < uVar11) - (uVar11 < uVar4);
          }
        }
        if (cVar7 == -1) {
          local_4e8 = uVar10;
          uVar10 = *puVar19;
          uVar4 = puVar19[2];
          local_4e0 = puVar19[1];
          uVar11 = puVar19[1] >> 0x20;
          lVar13 = lVar21;
          do {
            *(undefined8 *)((long)&local_4a8 + lVar13 + lVar14) =
                 *(undefined8 *)((long)local_4d8 + lVar13 + lVar14 + 0x18);
            puVar1 = (undefined8 *)((long)local_4d8 + lVar13 + lVar14 + 8);
            uVar16 = puVar1[1];
            *(undefined8 *)((long)puVar15 + lVar13) = *puVar1;
            ((undefined8 *)((long)puVar15 + lVar13))[1] = uVar16;
            if (lVar13 == 0x18) {
              puVar12 = puVar15;
              goto LAB_00620aa5;
            }
            uVar8 = *(ulong *)((long)local_4d8 + lVar13 + lVar14 + -0x10);
            cVar7 = (uVar8 < uVar10) - (uVar10 < uVar8);
            if (uVar10 == uVar8) {
              uVar8 = (ulong)*(uint *)((long)local_4d8 + lVar13 + lVar14 + -4);
              cVar7 = (uVar8 < uVar11) - (uVar11 < uVar8);
            }
            if (cVar7 == '\0') {
              uVar8 = *(ulong *)((long)local_4d8 + lVar13 + lVar14);
              if (((uVar8 | uVar4) & 0x2000000000000000) == 0) {
                puStack_500 = (undefined *)0x620bbf;
                cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(*local_4f8,uVar8,uVar4);
                puVar9 = local_4f0;
              }
              else {
                cVar7 = (uVar8 < uVar4) - (uVar4 < uVar8);
              }
            }
            lVar13 = lVar13 + -0x18;
          } while (cVar7 == -1);
          puVar12 = (ulong *)(lVar13 + (long)puVar15);
LAB_00620aa5:
          *puVar12 = uVar10;
          puVar12[1] = local_4e0;
          puVar12[2] = uVar4;
          puVar12 = local_4c0;
          uVar10 = local_4e8;
        }
        uVar10 = uVar10 + 1;
        lVar21 = lVar21 + 0x18;
      } while (uVar10 != local_4d8[1]);
    }
    puVar19 = local_4d8 + local_4d8[0] * 3 + 1;
    puVar12 = local_4d8 + uVar20 * 3 + 1;
    puVar18 = &local_4b8;
    puVar5 = puVar9 + local_4d8[0] * 3;
    do {
      puVar17 = puVar9;
      uVar20 = *puVar15;
      uVar10 = *puVar18;
      cVar7 = (uVar10 < uVar20) - (uVar20 < uVar10);
      if (uVar20 == uVar10) {
        cVar7 = (*(uint *)((long)puVar18 + 0xc) < *(uint *)((long)puVar15 + 0xc)) -
                (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)puVar18 + 0xc));
      }
      uVar16 = *local_4f8;
      if (cVar7 == '\0') {
        uVar20 = puVar15[2];
        uVar10 = puVar18[2];
        if (((uVar10 | uVar20) & 0x2000000000000000) == 0) {
          puStack_500 = (undefined *)0x620d43;
          cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar16);
          uVar16 = *local_4f8;
        }
        else {
          cVar7 = (uVar10 < uVar20) - (uVar20 < uVar10);
        }
      }
      puVar9 = puVar18;
      if (cVar7 == -1) {
        puVar9 = puVar15;
      }
      uVar20 = *puVar9;
      uVar10 = puVar9[1];
      puVar17[2] = puVar9[2];
      *puVar17 = uVar20;
      puVar17[1] = uVar10;
      if (cVar7 == -1) {
        puVar15 = puVar15 + 3;
      }
      else {
        puVar18 = puVar18 + 3;
      }
      uVar20 = *puVar19;
      uVar10 = *puVar12;
      cVar7 = (uVar10 < uVar20) - (uVar20 < uVar10);
      if (uVar20 == uVar10) {
        cVar7 = (*(uint *)((long)puVar12 + 0xc) < *(uint *)((long)puVar19 + 0xc)) -
                (*(uint *)((long)puVar19 + 0xc) < *(uint *)((long)puVar12 + 0xc));
      }
      if (cVar7 == '\0') {
        uVar20 = puVar19[2];
        uVar10 = puVar12[2];
        if (((uVar10 | uVar20) & 0x2000000000000000) == 0) {
          puStack_500 = (undefined *)0x620d83;
          cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar16);
        }
        else {
          cVar7 = (uVar10 < uVar20) - (uVar20 < uVar10);
        }
      }
      bVar22 = cVar7 == -1;
      puVar9 = puVar19;
      if (bVar22) {
        puVar9 = puVar12;
      }
      puVar5[-1] = puVar9[2];
      uVar20 = puVar9[1];
      puVar5[-3] = *puVar9;
      puVar5[-2] = uVar20;
      puVar19 = puVar19 + (ulong)!bVar22 * -3;
      puVar12 = puVar12 + (ulong)bVar22 * -3;
      local_4c8 = local_4c8 - 1;
      puVar9 = puVar17 + 3;
      puVar5 = puVar5 + -3;
    } while (local_4c8 != 0);
    puVar12 = puVar12 + 3;
    puVar9 = puVar18;
    if ((local_4d8[0] & 1) != 0) {
      puVar9 = puVar15;
      if (puVar18 < puVar12) {
        puVar9 = puVar18;
      }
      puVar17[5] = puVar9[2];
      uVar20 = puVar9[1];
      puVar17[3] = *puVar9;
      puVar17[4] = uVar20;
      puVar9 = puVar18 + 3;
      if (puVar18 >= puVar12) {
        puVar15 = puVar15 + 3;
        puVar9 = puVar18;
      }
    }
    if ((puVar9 != puVar12) || (puVar15 != puVar19 + 3)) {
                    /* WARNING: Subroutine does not return */
      puStack_500 = &UNK_00620e7d;
      panic_on_ord_violation();
    }
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::small_sort_general::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 006218c0 (2276 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::<(u128, u64, [u64;
   3usize]), <[(u128, u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::small_sort_general::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [16],ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  bool bVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  long lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  long lVar34;
  long lVar35;
  ulong auStack_998 [5];
  undefined *puStack_970;
  ulong auStack_968 [6];
  ulong local_938 [2];
  ulong auStack_928 [7];
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  
  if (1 < param_2) {
    uVar20 = param_2 >> 1;
    if (param_2 < 8) {
      auStack_928[2] = *(undefined8 *)param_1[2];
      auStack_928[3] = *(undefined8 *)(param_1[2] + 8);
      local_938[0] = *(ulong *)*param_1;
      local_938[1] = *(undefined8 *)(*param_1 + 8);
      auStack_928[0] = *(ulong *)param_1[1];
      auStack_928[1] = *(undefined8 *)(param_1[1] + 8);
      pauVar26 = param_1 + uVar20 * 3;
      uVar22 = *(ulong *)*pauVar26;
      uVar31 = *(ulong *)(*pauVar26 + 8);
      uVar3 = *(ulong *)pauVar26[1];
      uVar4 = *(ulong *)(pauVar26[1] + 8);
      pauVar26 = param_1 + uVar20 * 3 + 1;
      uVar5 = *(ulong *)(*pauVar26 + 8);
      uVar6 = *(ulong *)pauVar26[1];
      uVar8 = *(ulong *)(pauVar26[1] + 8);
      auStack_928[uVar20 * 6] = *(ulong *)*pauVar26;
      auStack_928[uVar20 * 6 + 1] = uVar5;
      auStack_928[uVar20 * 6 + 2] = uVar6;
      auStack_928[uVar20 * 6 + 3] = uVar8;
      local_938[uVar20 * 6] = uVar22;
      local_938[uVar20 * 6 + 1] = uVar31;
      auStack_928[uVar20 * 6] = uVar3;
      auStack_928[uVar20 * 6 + 1] = uVar4;
      uVar22 = 1;
    }
    else {
      bVar24 = *(ulong *)(param_1[3] + 8) < *(ulong *)(*param_1 + 8) ||
               *(ulong *)(param_1[3] + 8) - *(ulong *)(*param_1 + 8) <
               (ulong)(*(ulong *)param_1[3] < *(ulong *)*param_1);
      if (param_1[3] == *param_1) {
        bVar24 = *(ulong *)param_1[4] < *(ulong *)param_1[1];
      }
      bVar7 = *(ulong *)(param_1[9] + 8) < *(ulong *)(param_1[6] + 8) ||
              *(ulong *)(param_1[9] + 8) - *(ulong *)(param_1[6] + 8) <
              (ulong)(*(ulong *)param_1[9] < *(ulong *)param_1[6]);
      if (param_1[9] == param_1[6]) {
        bVar7 = *(ulong *)param_1[10] < *(ulong *)param_1[7];
      }
      uVar31 = (ulong)((uint)bVar24 * 0x30);
      uVar22 = (ulong)(((byte)~bVar24 & 1) * 0x30);
      pauVar21 = param_1 + 9;
      pauVar26 = param_1 + 6;
      if (bVar7) {
        pauVar21 = param_1 + 6;
        pauVar26 = param_1 + 9;
      }
      bVar24 = *(ulong *)(*pauVar26 + 8) < *(ulong *)(*param_1 + uVar31 + 8) ||
               *(ulong *)(*pauVar26 + 8) - *(ulong *)(*param_1 + uVar31 + 8) <
               (ulong)(*(ulong *)*pauVar26 < *(ulong *)(*param_1 + uVar31));
      if (*pauVar26 == *(undefined1 (*) [16])(*param_1 + uVar31)) {
        bVar24 = *(ulong *)pauVar26[1] < *(ulong *)(param_1[1] + uVar31);
      }
      pauVar29 = (undefined1 (*) [16])(*param_1 + uVar22);
      bVar7 = *(ulong *)(*pauVar21 + 8) < *(ulong *)(*param_1 + uVar22 + 8) ||
              *(ulong *)(*pauVar21 + 8) - *(ulong *)(*param_1 + uVar22 + 8) <
              (ulong)(*(ulong *)*pauVar21 < *(ulong *)(*param_1 + uVar22));
      if (*pauVar21 == *(undefined1 (*) [16])(*param_1 + uVar22)) {
        bVar7 = *(ulong *)pauVar21[1] < *(ulong *)(param_1[1] + uVar22);
      }
      pauVar30 = pauVar29;
      if (bVar7) {
        pauVar30 = pauVar26;
      }
      pauVar25 = pauVar26;
      pauVar23 = (undefined1 (*) [16])(*param_1 + uVar31);
      if (bVar24) {
        pauVar25 = pauVar29;
        pauVar23 = pauVar26;
        pauVar30 = (undefined1 (*) [16])(*param_1 + uVar31);
      }
      if (bVar7) {
        pauVar25 = pauVar21;
      }
      else {
        pauVar29 = pauVar21;
      }
      bVar24 = *(ulong *)(*pauVar25 + 8) < *(ulong *)(*pauVar30 + 8) ||
               *(ulong *)(*pauVar25 + 8) - *(ulong *)(*pauVar30 + 8) <
               (ulong)(*(ulong *)*pauVar25 < *(ulong *)*pauVar30);
      if (*pauVar25 == *pauVar30) {
        bVar24 = *(ulong *)pauVar25[1] < *(ulong *)pauVar30[1];
      }
      pauVar26 = pauVar25;
      if (bVar24) {
        pauVar26 = pauVar30;
        pauVar30 = pauVar25;
      }
      auStack_928[2] = *(undefined8 *)pauVar23[2];
      auStack_928[3] = *(undefined8 *)(pauVar23[2] + 8);
      local_938[0] = *(ulong *)*pauVar23;
      local_938[1] = *(undefined8 *)(*pauVar23 + 8);
      auStack_928[0] = *(ulong *)pauVar23[1];
      auStack_928[1] = *(undefined8 *)(pauVar23[1] + 8);
      uStack_8e8 = *(undefined8 *)pauVar30[2];
      uStack_8e0 = *(undefined8 *)(pauVar30[2] + 8);
      auStack_928[4] = *(undefined8 *)*pauVar30;
      auStack_928[5] = *(undefined8 *)(*pauVar30 + 8);
      auStack_928[6] = *(undefined8 *)pauVar30[1];
      uStack_8f0 = *(undefined8 *)(pauVar30[1] + 8);
      uStack_8b8 = *(undefined8 *)pauVar26[2];
      uStack_8b0 = *(undefined8 *)(pauVar26[2] + 8);
      uStack_8d8 = *(undefined8 *)*pauVar26;
      uStack_8d0 = *(undefined8 *)(*pauVar26 + 8);
      local_8c8 = *(undefined8 *)pauVar26[1];
      uStack_8c0 = *(undefined8 *)(pauVar26[1] + 8);
      uStack_888 = *(undefined8 *)pauVar29[2];
      uStack_880 = *(undefined8 *)(pauVar29[2] + 8);
      local_8a8 = *(undefined8 *)*pauVar29;
      uStack_8a0 = *(undefined8 *)(*pauVar29 + 8);
      uStack_898 = *(undefined8 *)pauVar29[1];
      uStack_890 = *(undefined8 *)(pauVar29[1] + 8);
      bVar24 = *(ulong *)param_1[uVar20 * 3 + 4] < *(ulong *)param_1[uVar20 * 3 + 1];
      if (param_1[uVar20 * 3 + 3] != param_1[uVar20 * 3]) {
        bVar24 = *(ulong *)(param_1[uVar20 * 3 + 3] + 8) < *(ulong *)(param_1[uVar20 * 3] + 8) ||
                 *(ulong *)(param_1[uVar20 * 3 + 3] + 8) - *(ulong *)(param_1[uVar20 * 3] + 8) <
                 (ulong)(*(ulong *)param_1[uVar20 * 3 + 3] < *(ulong *)param_1[uVar20 * 3]);
      }
      bVar7 = *(ulong *)param_1[uVar20 * 3 + 10] < *(ulong *)param_1[uVar20 * 3 + 7];
      if (param_1[uVar20 * 3 + 9] != param_1[uVar20 * 3 + 6]) {
        bVar7 = *(ulong *)(param_1[uVar20 * 3 + 9] + 8) < *(ulong *)(param_1[uVar20 * 3 + 6] + 8) ||
                *(ulong *)(param_1[uVar20 * 3 + 9] + 8) - *(ulong *)(param_1[uVar20 * 3 + 6] + 8) <
                (ulong)(*(ulong *)param_1[uVar20 * 3 + 9] < *(ulong *)param_1[uVar20 * 3 + 6]);
      }
      uVar22 = (ulong)((uint)bVar24 * 0x30);
      uVar31 = (ulong)(((byte)~bVar24 & 1) * 0x30);
      pauVar21 = param_1 + uVar20 * 3 + 9;
      pauVar26 = param_1 + uVar20 * 3 + 6;
      if (bVar7) {
        pauVar21 = param_1 + uVar20 * 3 + 6;
        pauVar26 = param_1 + uVar20 * 3 + 9;
      }
      bVar24 = *(ulong *)(*pauVar26 + 8) < *(ulong *)(param_1[uVar20 * 3] + uVar22 + 8) ||
               *(ulong *)(*pauVar26 + 8) - *(ulong *)(param_1[uVar20 * 3] + uVar22 + 8) <
               (ulong)(*(ulong *)*pauVar26 < *(ulong *)(param_1[uVar20 * 3] + uVar22));
      if (*pauVar26 == *(undefined1 (*) [16])(param_1[uVar20 * 3] + uVar22)) {
        bVar24 = *(ulong *)pauVar26[1] < *(ulong *)(param_1[uVar20 * 3 + 1] + uVar22);
      }
      pauVar29 = (undefined1 (*) [16])(param_1[uVar20 * 3] + uVar31);
      bVar7 = *(ulong *)(*pauVar21 + 8) < *(ulong *)(param_1[uVar20 * 3] + uVar31 + 8) ||
              *(ulong *)(*pauVar21 + 8) - *(ulong *)(param_1[uVar20 * 3] + uVar31 + 8) <
              (ulong)(*(ulong *)*pauVar21 < *(ulong *)(param_1[uVar20 * 3] + uVar31));
      if (*pauVar21 == *(undefined1 (*) [16])(param_1[uVar20 * 3] + uVar31)) {
        bVar7 = *(ulong *)pauVar21[1] < *(ulong *)(param_1[uVar20 * 3 + 1] + uVar31);
      }
      pauVar30 = pauVar29;
      if (bVar7) {
        pauVar30 = pauVar26;
      }
      pauVar25 = pauVar26;
      pauVar23 = (undefined1 (*) [16])(param_1[uVar20 * 3] + uVar22);
      if (bVar24) {
        pauVar25 = pauVar29;
        pauVar23 = pauVar26;
        pauVar30 = (undefined1 (*) [16])(param_1[uVar20 * 3] + uVar22);
      }
      if (bVar7) {
        pauVar25 = pauVar21;
      }
      else {
        pauVar29 = pauVar21;
      }
      bVar24 = *(ulong *)(*pauVar25 + 8) < *(ulong *)(*pauVar30 + 8) ||
               *(ulong *)(*pauVar25 + 8) - *(ulong *)(*pauVar30 + 8) <
               (ulong)(*(ulong *)*pauVar25 < *(ulong *)*pauVar30);
      if (*pauVar25 == *pauVar30) {
        bVar24 = *(ulong *)pauVar25[1] < *(ulong *)pauVar30[1];
      }
      pauVar26 = pauVar25;
      if (bVar24) {
        pauVar26 = pauVar30;
        pauVar30 = pauVar25;
      }
      uVar22 = *(ulong *)*pauVar23;
      uVar31 = *(ulong *)(*pauVar23 + 8);
      uVar3 = *(ulong *)pauVar23[1];
      uVar4 = *(ulong *)(pauVar23[1] + 8);
      uVar5 = *(ulong *)(pauVar23[1] + 8);
      uVar6 = *(ulong *)pauVar23[2];
      uVar8 = *(ulong *)(pauVar23[2] + 8);
      auStack_928[uVar20 * 6] = *(ulong *)pauVar23[1];
      auStack_928[uVar20 * 6 + 1] = uVar5;
      auStack_928[uVar20 * 6 + 2] = uVar6;
      auStack_928[uVar20 * 6 + 3] = uVar8;
      local_938[uVar20 * 6] = uVar22;
      local_938[uVar20 * 6 + 1] = uVar31;
      auStack_928[uVar20 * 6] = uVar3;
      auStack_928[uVar20 * 6 + 1] = uVar4;
      uVar22 = *(ulong *)*pauVar30;
      uVar31 = *(ulong *)(*pauVar30 + 8);
      uVar3 = *(ulong *)pauVar30[1];
      uVar4 = *(ulong *)(pauVar30[1] + 8);
      uVar5 = *(ulong *)(pauVar30[1] + 8);
      uVar6 = *(ulong *)pauVar30[2];
      uVar8 = *(ulong *)(pauVar30[2] + 8);
      auStack_928[uVar20 * 6 + 6] = *(ulong *)pauVar30[1];
      auStack_928[uVar20 * 6 + 7] = uVar5;
      auStack_928[uVar20 * 6 + 8] = uVar6;
      auStack_928[uVar20 * 6 + 9] = uVar8;
      auStack_928[uVar20 * 6 + 4] = uVar22;
      auStack_928[uVar20 * 6 + 5] = uVar31;
      auStack_928[uVar20 * 6 + 6] = uVar3;
      auStack_928[uVar20 * 6 + 7] = uVar4;
      uVar22 = *(ulong *)*pauVar26;
      uVar31 = *(ulong *)(*pauVar26 + 8);
      uVar3 = *(ulong *)pauVar26[1];
      uVar4 = *(ulong *)(pauVar26[1] + 8);
      uVar5 = *(ulong *)(pauVar26[1] + 8);
      uVar6 = *(ulong *)pauVar26[2];
      uVar8 = *(ulong *)(pauVar26[2] + 8);
      auStack_928[uVar20 * 6 + 0xc] = *(ulong *)pauVar26[1];
      auStack_928[uVar20 * 6 + 0xd] = uVar5;
      auStack_928[uVar20 * 6 + 0xe] = uVar6;
      auStack_928[uVar20 * 6 + 0xf] = uVar8;
      auStack_928[uVar20 * 6 + 10] = uVar22;
      auStack_928[uVar20 * 6 + 0xb] = uVar31;
      auStack_928[uVar20 * 6 + 0xc] = uVar3;
      auStack_928[uVar20 * 6 + 0xd] = uVar4;
      uVar22 = *(ulong *)(*pauVar29 + 8);
      uVar31 = *(ulong *)pauVar29[1];
      uVar3 = *(ulong *)(pauVar29[1] + 8);
      uVar4 = *(ulong *)pauVar29[1];
      uVar5 = *(ulong *)(pauVar29[1] + 8);
      uVar6 = *(ulong *)pauVar29[2];
      uVar8 = *(ulong *)(pauVar29[2] + 8);
      auStack_928[uVar20 * 6 + 0x10] = *(ulong *)*pauVar29;
      auStack_928[uVar20 * 6 + 0x11] = uVar22;
      auStack_928[uVar20 * 6 + 0x12] = uVar31;
      auStack_928[uVar20 * 6 + 0x13] = uVar3;
      auStack_928[uVar20 * 6 + 0x12] = uVar4;
      auStack_928[uVar20 * 6 + 0x13] = uVar5;
      auStack_928[uVar20 * 6 + 0x14] = uVar6;
      auStack_928[uVar20 * 6 + 0x15] = uVar8;
      uVar22 = 4;
    }
    auStack_968[5] = param_2;
    auStack_968[1] = param_2 - uVar20;
    if (uVar22 < uVar20) {
      lVar27 = (ulong)(uint)((int)uVar22 << 4) * 3;
      uVar31 = uVar22;
      do {
        pauVar26 = param_1 + uVar31 * 3;
        uVar3 = *(ulong *)(*pauVar26 + 8);
        uVar4 = *(ulong *)pauVar26[1];
        uVar5 = *(ulong *)(pauVar26[1] + 8);
        pauVar21 = param_1 + uVar31 * 3 + 1;
        uVar6 = *(ulong *)*pauVar21;
        uVar8 = *(ulong *)(*pauVar21 + 8);
        uVar9 = *(ulong *)pauVar21[1];
        uVar10 = *(ulong *)(pauVar21[1] + 8);
        local_938[uVar31 * 6] = *(ulong *)*pauVar26;
        local_938[uVar31 * 6 + 1] = uVar3;
        auStack_928[uVar31 * 6] = uVar4;
        auStack_928[uVar31 * 6 + 1] = uVar5;
        auStack_928[uVar31 * 6] = uVar6;
        auStack_928[uVar31 * 6 + 1] = uVar8;
        auStack_928[uVar31 * 6 + 2] = uVar9;
        auStack_928[uVar31 * 6 + 3] = uVar10;
        uVar3 = local_938[uVar31 * 6];
        uVar4 = auStack_928[uVar31 * 6];
        uVar5 = local_938[uVar31 * 6 + 1];
        bVar24 = uVar5 < auStack_968[uVar31 * 6 + 1] ||
                 uVar5 - auStack_968[uVar31 * 6 + 1] < (ulong)(uVar3 < auStack_968[uVar31 * 6]);
        if (param_1[uVar31 * 3] == *(undefined1 (*) [16])(auStack_968 + uVar31 * 6)) {
          bVar24 = uVar4 < auStack_968[uVar31 * 6 + 2];
        }
        if (bVar24) {
          auStack_968[4] = *(ulong *)(param_1[uVar31 * 3 + 2] + 8);
          auStack_968[2] = *(ulong *)(param_1[uVar31 * 3 + 1] + 8);
          auStack_968[3] = *(ulong *)param_1[uVar31 * 3 + 2];
          lVar32 = lVar27;
          do {
            lVar34 = lVar32;
            uVar11 = *(undefined8 *)((long)auStack_968 + lVar34);
            uVar12 = *(undefined8 *)((long)auStack_968 + lVar34 + 8);
            uVar13 = *(undefined8 *)((long)auStack_968 + lVar34 + 0x10);
            uVar14 = *(undefined8 *)((long)auStack_968 + lVar34 + 0x18);
            uVar15 = *(undefined8 *)((long)auStack_968 + lVar34 + 0x18);
            uVar16 = *(undefined8 *)((long)auStack_968 + lVar34 + 0x20);
            uVar17 = *(undefined8 *)((long)auStack_968 + lVar34 + 0x28);
            *(undefined8 *)((long)auStack_928 + lVar34) =
                 *(undefined8 *)((long)auStack_968 + lVar34 + 0x10);
            *(undefined8 *)((long)auStack_928 + lVar34 + 8) = uVar15;
            *(undefined8 *)((long)auStack_928 + lVar34 + 0x10) = uVar16;
            *(undefined8 *)((long)auStack_928 + lVar34 + 0x18) = uVar17;
            *(undefined8 *)((long)local_938 + lVar34) = uVar11;
            *(undefined8 *)((long)local_938 + lVar34 + 8) = uVar12;
            *(undefined8 *)((long)auStack_928 + lVar34) = uVar13;
            *(undefined8 *)((long)auStack_928 + lVar34 + 8) = uVar14;
            if (lVar34 == 0x30) {
              puVar33 = local_938;
              goto LAB_00621d63;
            }
            uVar6 = *(ulong *)((long)auStack_998 + lVar34 + 8);
            bVar24 = uVar5 < uVar6 ||
                     uVar5 - uVar6 < (ulong)(uVar3 < *(ulong *)((long)auStack_998 + lVar34));
            if (uVar3 == *(ulong *)((long)auStack_998 + lVar34) && uVar5 == uVar6) {
              bVar24 = uVar4 < *(ulong *)((long)auStack_998 + lVar34 + 0x10);
            }
            lVar32 = lVar34 + -0x30;
          } while (bVar24);
          puVar33 = (ulong *)((long)auStack_968 + lVar34);
LAB_00621d63:
          *puVar33 = uVar3;
          puVar33[1] = uVar5;
          puVar33[2] = uVar4;
          puVar33[5] = auStack_968[4];
          puVar33[3] = auStack_968[2];
          puVar33[4] = auStack_968[3];
        }
        uVar31 = uVar31 + 1;
        lVar27 = lVar27 + 0x30;
      } while (uVar31 != uVar20);
    }
    lVar27 = uVar20 * 0x30;
    pauVar26 = (undefined1 (*) [16])(auStack_968 + uVar20 * 6);
    pauVar21 = (undefined1 (*) [16])(local_938 + uVar20 * 6);
    if (uVar22 < auStack_968[1]) {
      lVar32 = (ulong)(uint)((int)uVar22 << 4) * 3;
      do {
        pauVar29 = param_1 + uVar20 * 3 + uVar22 * 3;
        uVar11 = *(undefined8 *)(*pauVar29 + 8);
        uVar12 = *(undefined8 *)pauVar29[1];
        uVar13 = *(undefined8 *)(pauVar29[1] + 8);
        pauVar30 = param_1 + uVar20 * 3 + uVar22 * 3 + 1;
        uVar31 = *(ulong *)*pauVar30;
        uVar3 = *(ulong *)(*pauVar30 + 8);
        uVar4 = *(ulong *)pauVar30[1];
        uVar5 = *(ulong *)(pauVar30[1] + 8);
        pauVar30 = pauVar21 + uVar22 * 3;
        *(undefined8 *)*pauVar30 = *(undefined8 *)*pauVar29;
        *(undefined8 *)(*pauVar30 + 8) = uVar11;
        *(undefined8 *)pauVar30[1] = uVar12;
        *(undefined8 *)(pauVar30[1] + 8) = uVar13;
        puVar33 = auStack_928 + uVar20 * 6 + uVar22 * 6;
        *puVar33 = uVar31;
        puVar33[1] = uVar3;
        puVar33[2] = uVar4;
        puVar33[3] = uVar5;
        uVar31 = *(ulong *)pauVar21[uVar22 * 3];
        uVar3 = auStack_928[uVar20 * 6 + uVar22 * 6];
        uVar4 = local_938[uVar20 * 6 + uVar22 * 6 + 1];
        bVar24 = uVar3 < auStack_968[uVar20 * 6 + uVar22 * 6 + 2];
        if (param_1[uVar20 * 3 + uVar22 * 3] != pauVar26[uVar22 * 3]) {
          bVar24 = uVar4 < auStack_968[uVar20 * 6 + uVar22 * 6 + 1] ||
                   uVar4 - auStack_968[uVar20 * 6 + uVar22 * 6 + 1] <
                   (ulong)(uVar31 < *(ulong *)pauVar26[uVar22 * 3]);
        }
        if (bVar24) {
          auStack_968[4] = *(ulong *)(param_1[uVar20 * 3 + uVar22 * 3 + 2] + 8);
          auStack_968[2] = *(ulong *)(param_1[uVar20 * 3 + uVar22 * 3 + 1] + 8);
          auStack_968[3] = *(ulong *)param_1[uVar20 * 3 + uVar22 * 3 + 2];
          lVar34 = lVar32;
          do {
            lVar35 = lVar34;
            puVar1 = (undefined8 *)(*pauVar26 + lVar35);
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            uVar14 = puVar1[3];
            puVar1 = (undefined8 *)((long)auStack_968 + lVar35 + lVar27 + 0x10);
            uVar15 = puVar1[1];
            uVar16 = puVar1[2];
            uVar17 = puVar1[3];
            puVar2 = (undefined8 *)((long)auStack_928 + lVar35 + lVar27);
            *puVar2 = *puVar1;
            puVar2[1] = uVar15;
            puVar2[2] = uVar16;
            puVar2[3] = uVar17;
            puVar1 = (undefined8 *)(*pauVar21 + lVar35);
            *puVar1 = uVar11;
            puVar1[1] = uVar12;
            puVar1[2] = uVar13;
            puVar1[3] = uVar14;
            if (lVar35 == 0x30) {
              pauVar29 = pauVar21;
              goto LAB_00621ee3;
            }
            uVar5 = *(ulong *)((long)auStack_998 + lVar35 + lVar27);
            uVar6 = *(ulong *)((long)auStack_998 + lVar35 + lVar27 + 8);
            bVar24 = uVar4 < uVar6 || uVar4 - uVar6 < (ulong)(uVar31 < uVar5);
            if (uVar31 == uVar5 && uVar4 == uVar6) {
              bVar24 = uVar3 < *(ulong *)((long)auStack_998 + lVar35 + lVar27 + 0x10);
            }
            lVar34 = lVar35 + -0x30;
          } while (bVar24);
          pauVar29 = (undefined1 (*) [16])(pauVar21[-3] + lVar35);
LAB_00621ee3:
          *(ulong *)*pauVar29 = uVar31;
          *(ulong *)(*pauVar29 + 8) = uVar4;
          *(ulong *)pauVar29[1] = uVar3;
          *(ulong *)(pauVar29[2] + 8) = auStack_968[4];
          *(ulong *)(pauVar29[1] + 8) = auStack_968[2];
          *(ulong *)pauVar29[2] = auStack_968[3];
        }
        uVar22 = uVar22 + 1;
        lVar32 = lVar32 + 0x30;
      } while (uVar22 != auStack_968[1]);
    }
    pauVar23 = (undefined1 (*) [16])(auStack_968 + param_2 * 6);
    pauVar29 = (undefined1 (*) [16])local_938;
    pauVar30 = param_1 + param_2 * 3;
    do {
      pauVar25 = param_1;
      bVar24 = *(ulong *)(*pauVar21 + 8) < *(ulong *)(*pauVar29 + 8) ||
               *(ulong *)(*pauVar21 + 8) - *(ulong *)(*pauVar29 + 8) <
               (ulong)(*(ulong *)*pauVar21 < *(ulong *)*pauVar29);
      if (*pauVar21 == *pauVar29) {
        bVar24 = *(ulong *)pauVar21[1] < *(ulong *)pauVar29[1];
      }
      pauVar28 = pauVar29;
      pauVar19 = pauVar29 + 3;
      if (bVar24) {
        pauVar28 = pauVar21;
        pauVar19 = pauVar29;
      }
      pauVar29 = pauVar19;
      uVar11 = *(undefined8 *)*pauVar28;
      uVar12 = *(undefined8 *)(*pauVar28 + 8);
      uVar13 = *(undefined8 *)pauVar28[1];
      uVar14 = *(undefined8 *)(pauVar28[1] + 8);
      uVar15 = *(undefined8 *)(pauVar28[1] + 8);
      uVar16 = *(undefined8 *)pauVar28[2];
      uVar17 = *(undefined8 *)(pauVar28[2] + 8);
      *(undefined8 *)pauVar25[1] = *(undefined8 *)pauVar28[1];
      *(undefined8 *)(pauVar25[1] + 8) = uVar15;
      *(undefined8 *)pauVar25[2] = uVar16;
      *(undefined8 *)(pauVar25[2] + 8) = uVar17;
      *(undefined8 *)*pauVar25 = uVar11;
      *(undefined8 *)(*pauVar25 + 8) = uVar12;
      *(undefined8 *)pauVar25[1] = uVar13;
      *(undefined8 *)(pauVar25[1] + 8) = uVar14;
      pauVar28 = pauVar21 + 3;
      if (!bVar24) {
        pauVar28 = pauVar21;
      }
      bVar24 = *(ulong *)(*pauVar23 + 8) < *(ulong *)(*pauVar26 + 8) ||
               *(ulong *)(*pauVar23 + 8) - *(ulong *)(*pauVar26 + 8) <
               (ulong)(*(ulong *)*pauVar23 < *(ulong *)*pauVar26);
      if (*pauVar23 == *pauVar26) {
        bVar24 = *(ulong *)pauVar23[1] < *(ulong *)pauVar26[1];
      }
      pauVar21 = pauVar23;
      if (bVar24 != false) {
        pauVar21 = pauVar26;
      }
      uVar11 = *(undefined8 *)*pauVar21;
      uVar12 = *(undefined8 *)(*pauVar21 + 8);
      uVar13 = *(undefined8 *)pauVar21[1];
      uVar14 = *(undefined8 *)(pauVar21[1] + 8);
      uVar15 = *(undefined8 *)(pauVar21[1] + 8);
      uVar16 = *(undefined8 *)pauVar21[2];
      uVar17 = *(undefined8 *)(pauVar21[2] + 8);
      *(undefined8 *)pauVar30[-2] = *(undefined8 *)pauVar21[1];
      *(undefined8 *)(pauVar30[-2] + 8) = uVar15;
      *(undefined8 *)pauVar30[-1] = uVar16;
      *(undefined8 *)(pauVar30[-1] + 8) = uVar17;
      *(undefined8 *)pauVar30[-3] = uVar11;
      *(undefined8 *)(pauVar30[-3] + 8) = uVar12;
      *(undefined8 *)pauVar30[-2] = uVar13;
      *(undefined8 *)(pauVar30[-2] + 8) = uVar14;
      puVar18 = *pauVar23;
      pauVar23 = (undefined1 (*) [16])(puVar18 + (uint)bVar24 * 0x30) + -3;
      pauVar26 = pauVar26 + (ulong)bVar24 * -3;
      uVar20 = uVar20 - 1;
      pauVar21 = pauVar28;
      param_1 = pauVar25 + 3;
      pauVar30 = pauVar30 + -3;
    } while (uVar20 != 0);
    pauVar26 = pauVar26 + 3;
    pauVar21 = pauVar29;
    if ((param_2 & 1) != 0) {
      pauVar21 = pauVar28;
      if (pauVar29 < pauVar26) {
        pauVar21 = pauVar29;
      }
      uVar11 = *(undefined8 *)*pauVar21;
      uVar12 = *(undefined8 *)(*pauVar21 + 8);
      uVar13 = *(undefined8 *)pauVar21[1];
      uVar14 = *(undefined8 *)(pauVar21[1] + 8);
      uVar15 = *(undefined8 *)(pauVar21[1] + 8);
      uVar16 = *(undefined8 *)pauVar21[2];
      uVar17 = *(undefined8 *)(pauVar21[2] + 8);
      *(undefined8 *)pauVar25[4] = *(undefined8 *)pauVar21[1];
      *(undefined8 *)(pauVar25[4] + 8) = uVar15;
      *(undefined8 *)pauVar25[5] = uVar16;
      *(undefined8 *)(pauVar25[5] + 8) = uVar17;
      *(undefined8 *)pauVar25[3] = uVar11;
      *(undefined8 *)(pauVar25[3] + 8) = uVar12;
      *(undefined8 *)pauVar25[4] = uVar13;
      *(undefined8 *)(pauVar25[4] + 8) = uVar14;
      pauVar21 = pauVar29 + 3;
      if (pauVar29 >= pauVar26) {
        pauVar28 = pauVar28 + 3;
        pauVar21 = pauVar29;
      }
    }
    if ((pauVar21 != pauVar26) || (pauVar28 != (undefined1 (*) [16])(puVar18 + (uint)bVar24 * 0x30))
       ) {
                    /* WARNING: Subroutine does not return */
      puStack_970 = &UNK_006221ac;
      panic_on_ord_violation();
    }
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 00623100 (448 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<[u64;
   3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  
  lVar9 = 0x18;
  puVar10 = param_1 + 3;
  puVar13 = param_1;
  do {
    puVar7 = puVar10;
    uVar2 = puVar13[3];
    uVar3 = *puVar13;
    cVar6 = (uVar3 < uVar2) - (uVar2 < uVar3);
    if (uVar2 == uVar3) {
      cVar6 = (*(uint *)((long)puVar13 + 0xc) < *(uint *)((long)puVar13 + 0x24)) -
              (*(uint *)((long)puVar13 + 0x24) < *(uint *)((long)puVar13 + 0xc));
    }
    if (cVar6 == '\0') {
      uVar2 = puVar13[2];
      uVar3 = puVar13[5];
      if (((uVar2 | uVar3) & 0x2000000000000000) == 0) {
        cVar6 = pipeline[509596c7b52975b2]::events::cid_cmp(*param_3);
      }
      else {
        cVar6 = (uVar2 < uVar3) - (uVar3 < uVar2);
      }
    }
    if (cVar6 == -1) {
      uVar2 = puVar13[3];
      uVar3 = puVar13[4];
      uVar4 = puVar13[5];
      uVar12 = uVar3 >> 0x20;
      lVar11 = lVar9;
      do {
        *(undefined8 *)((long)param_1 + lVar11 + 0x10) =
             *(undefined8 *)((long)param_1 + lVar11 + -8);
        puVar1 = (undefined8 *)((long)param_1 + lVar11 + -0x18);
        uVar5 = puVar1[1];
        *(undefined8 *)((long)param_1 + lVar11) = *puVar1;
        ((undefined8 *)((long)param_1 + lVar11))[1] = uVar5;
        if (lVar11 == 0x18) {
          puVar10 = param_1;
          goto LAB_0062313e;
        }
        uVar8 = *(ulong *)((long)param_1 + lVar11 + -0x30);
        cVar6 = (uVar8 < uVar2) - (uVar2 < uVar8);
        if (uVar2 == uVar8) {
          uVar8 = (ulong)*(uint *)((long)param_1 + lVar11 + -0x24);
          cVar6 = (uVar8 < uVar12) - (uVar12 < uVar8);
        }
        if (cVar6 == '\0') {
          uVar8 = *(ulong *)((long)param_1 + lVar11 + -0x20);
          if (((uVar8 | uVar4) & 0x2000000000000000) == 0) {
            cVar6 = pipeline[509596c7b52975b2]::events::cid_cmp(*param_3,uVar8,uVar4);
          }
          else {
            cVar6 = (uVar8 < uVar4) - (uVar4 < uVar8);
          }
        }
        lVar11 = lVar11 + -0x18;
      } while (cVar6 == -1);
      puVar10 = (ulong *)(lVar11 + (long)param_1);
LAB_0062313e:
      *puVar10 = uVar2;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
    }
    puVar10 = puVar7 + 3;
    lVar9 = lVar9 + 0x18;
    puVar13 = puVar7;
    if (puVar10 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 006245c0 (317 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(u128, u64,
   [u64; 3usize]), <[(u128, u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [16],long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  long lVar23;
  
  lVar19 = 0x30;
  pauVar21 = param_1 + 3;
  pauVar22 = param_1;
  do {
    pauVar20 = pauVar21;
    uVar3 = *(ulong *)pauVar22[3];
    uVar4 = *(ulong *)pauVar22[4];
    uVar5 = *(ulong *)(pauVar22[3] + 8);
    bVar8 = uVar5 < *(ulong *)(*pauVar22 + 8) ||
            uVar5 - *(ulong *)(*pauVar22 + 8) < (ulong)(uVar3 < *(ulong *)*pauVar22);
    if (pauVar22[3] == *pauVar22) {
      bVar8 = uVar4 < *(ulong *)pauVar22[1];
    }
    if (bVar8) {
      uVar6 = *(undefined8 *)(pauVar22[5] + 8);
      uVar9 = *(undefined8 *)(pauVar22[4] + 8);
      uVar10 = *(undefined8 *)pauVar22[5];
      lVar18 = lVar19;
      do {
        lVar23 = lVar18;
        puVar1 = (undefined8 *)(param_1[-3] + lVar23);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (undefined8 *)(param_1[-2] + lVar23);
        uVar15 = puVar1[1];
        uVar16 = puVar1[2];
        uVar17 = puVar1[3];
        puVar2 = (undefined8 *)(param_1[1] + lVar23);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar2[2] = uVar16;
        puVar2[3] = uVar17;
        puVar1 = (undefined8 *)(*param_1 + lVar23);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1[2] = uVar13;
        puVar1[3] = uVar14;
        if (lVar23 == 0x30) {
          pauVar21 = param_1;
          goto LAB_006245e3;
        }
        uVar7 = *(ulong *)(param_1[-6] + lVar23 + 8);
        bVar8 = uVar5 < uVar7 || uVar5 - uVar7 < (ulong)(uVar3 < *(ulong *)(param_1[-6] + lVar23));
        if (uVar3 == *(ulong *)(param_1[-6] + lVar23) && uVar5 == uVar7) {
          bVar8 = uVar4 < *(ulong *)(param_1[-5] + lVar23);
        }
        lVar18 = lVar23 + -0x30;
      } while (bVar8);
      pauVar21 = (undefined1 (*) [16])(param_1[-3] + lVar23);
LAB_006245e3:
      *(ulong *)*pauVar21 = uVar3;
      *(ulong *)(*pauVar21 + 8) = uVar5;
      *(ulong *)pauVar21[1] = uVar4;
      *(undefined8 *)(pauVar21[2] + 8) = uVar6;
      *(undefined8 *)(pauVar21[1] + 8) = uVar9;
      *(undefined8 *)pauVar21[2] = uVar10;
    }
    pauVar21 = pauVar20 + 3;
    lVar19 = lVar19 + 0x30;
    pauVar22 = pauVar20;
    if (pauVar21 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 0063b4c0 (584 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<[u64; 3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar13 = (param_2 >> 1) + param_2;
  do {
    uVar13 = uVar13 - 1;
    uVar17 = uVar13 - param_2;
    uVar15 = param_2;
    if (uVar13 < param_2) {
      uVar14 = param_1[2];
      uVar8 = *param_1;
      uVar9 = param_1[1];
      uVar5 = param_1[uVar13 * 3 + 2];
      uVar10 = (param_1 + uVar13 * 3)[1];
      *param_1 = param_1[uVar13 * 3];
      param_1[1] = uVar10;
      param_1[2] = uVar5;
      param_1[uVar13 * 3 + 2] = uVar14;
      param_1[uVar13 * 3] = uVar8;
      (param_1 + uVar13 * 3)[1] = uVar9;
      uVar17 = 0;
      uVar15 = uVar13;
    }
    uVar12 = uVar17 * 2 + 1;
    if (uVar12 < uVar15) {
      do {
        uVar16 = uVar12;
        uVar12 = uVar17 * 2 + 2;
        uVar14 = *param_3;
        if (uVar12 < uVar15) {
          uVar6 = param_1[uVar16 * 3];
          uVar7 = param_1[uVar12 * 3];
          cVar11 = (uVar7 < uVar6) - (uVar6 < uVar7);
          if (uVar6 == uVar7) {
            uVar3 = *(uint *)((long)param_1 + uVar12 * 0x18 + 0xc);
            uVar4 = *(uint *)((long)param_1 + uVar16 * 0x18 + 0xc);
            cVar11 = (uVar3 < uVar4) - (uVar4 < uVar3);
          }
          if (cVar11 == '\0') {
            uVar6 = param_1[uVar16 * 3 + 2];
            uVar12 = param_1[uVar12 * 3 + 2];
            if (((uVar12 | uVar6) & 0x2000000000000000) == 0) {
              cVar11 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar14);
              uVar14 = *param_3;
            }
            else {
              cVar11 = (uVar12 < uVar6) - (uVar6 < uVar12);
            }
          }
          uVar16 = uVar16 + (cVar11 == -1);
        }
        uVar12 = param_1[uVar17 * 3];
        uVar6 = param_1[uVar16 * 3];
        cVar11 = (uVar6 < uVar12) - (uVar12 < uVar6);
        puVar1 = param_1 + uVar17 * 3;
        puVar2 = param_1 + uVar16 * 3;
        if (uVar12 == uVar6) {
          cVar11 = (*(uint *)((long)puVar2 + 0xc) < *(uint *)((long)puVar1 + 0xc)) -
                   (*(uint *)((long)puVar1 + 0xc) < *(uint *)((long)puVar2 + 0xc));
        }
        if (cVar11 == '\0') {
          uVar17 = puVar1[2];
          uVar7 = puVar2[2];
          if (((uVar7 | uVar17) & 0x2000000000000000) == 0) {
            cVar11 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar14);
          }
          else {
            cVar11 = (uVar7 < uVar17) - (uVar17 < uVar7);
          }
        }
        if (cVar11 != -1) break;
        *puVar1 = uVar6;
        *puVar2 = uVar12;
        uVar17 = puVar1[1];
        uVar12 = puVar1[2];
        uVar6 = puVar2[2];
        puVar1[1] = puVar2[1];
        puVar1[2] = uVar6;
        puVar2[1] = uVar17;
        puVar2[2] = uVar12;
        uVar12 = uVar16 * 2 + 1;
        uVar17 = uVar16;
      } while (uVar12 < uVar15);
    }
    if (uVar13 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<(usize, usize), <[(usize, usize)]>::sort_unstable_by<pipeline::complex::shard_order::{closure#1}>::{closure#0}> @ 0063bfe0 (306 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<(usize, usize), <[(usize,
   usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  
  uVar7 = (param_2 >> 1) + param_2;
  do {
    uVar7 = uVar7 - 1;
    uVar8 = uVar7 - param_2;
    uVar9 = param_2;
    if (uVar7 < param_2) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar7 * 2)[1];
      *param_1 = param_1[uVar7 * 2];
      param_1[1] = uVar6;
      param_1[uVar7 * 2] = uVar4;
      (param_1 + uVar7 * 2)[1] = uVar5;
      uVar8 = 0;
      uVar9 = uVar7;
    }
    uVar10 = uVar8 * 2 + 1;
    if (uVar10 < uVar9) {
      do {
        uVar12 = uVar8 * 2 + 2;
        if (uVar12 < uVar9) {
          bVar11 = (ulong)param_1[uVar12 * 2] < (ulong)param_1[uVar10 * 2];
          if (param_1[uVar12 * 2] == param_1[uVar10 * 2]) {
            bVar11 = (ulong)param_1[uVar12 * 2 + 1] < (ulong)param_1[uVar10 * 2 + 1];
          }
          uVar12 = bVar11 + uVar10;
        }
        else {
          uVar12 = uVar10;
        }
        uVar10 = param_1[uVar8 * 2];
        uVar1 = param_1[uVar8 * 2 + 1];
        uVar2 = param_1[uVar12 * 2];
        uVar3 = param_1[uVar12 * 2 + 1];
        bVar11 = uVar2 < uVar10;
        if (uVar2 == uVar10) {
          bVar11 = uVar3 < uVar1;
        }
        if (!bVar11) break;
        param_1[uVar8 * 2] = uVar2;
        param_1[uVar12 * 2] = uVar10;
        (param_1 + uVar8 * 2)[1] = uVar3;
        (param_1 + uVar12 * 2)[1] = uVar1;
        uVar10 = uVar12 * 2 + 1;
        uVar8 = uVar12;
      } while (uVar10 < uVar9);
    }
    if (uVar7 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 0063c280 (459 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<(u128, u64, [u64; 3usize]),
   <[(u128, u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [32],ulong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [32];
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  bool bVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  long lVar27;
  
  uVar18 = (param_2 >> 1) + param_2;
  do {
    uVar18 = uVar18 - 1;
    uVar21 = uVar18 - param_2;
    uVar20 = param_2;
    if (uVar18 < param_2) {
      lVar19 = uVar18 * 0x30;
      uVar6 = *(undefined8 *)(*param_1 + 0x10);
      uVar7 = *(undefined8 *)(*param_1 + 0x18);
      auVar17 = *param_1;
      uVar8 = *(undefined8 *)param_1[1];
      uVar9 = *(undefined8 *)(param_1[1] + 8);
      puVar1 = (undefined8 *)((long)param_1 + lVar19);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar1 = (undefined8 *)((long)param_1 + lVar19 + 0x10);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      *(undefined8 *)(*param_1 + 0x10) = *puVar1;
      *(undefined8 *)(*param_1 + 0x18) = uVar14;
      *(undefined8 *)param_1[1] = uVar15;
      *(undefined8 *)(param_1[1] + 8) = uVar16;
      *(undefined8 *)*param_1 = uVar10;
      *(undefined8 *)(*param_1 + 8) = uVar11;
      *(undefined8 *)(*param_1 + 0x10) = uVar12;
      *(undefined8 *)(*param_1 + 0x18) = uVar13;
      puVar1 = (undefined8 *)((long)param_1 + lVar19 + 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined1 (*) [32])((long)param_1 + lVar19) = auVar17;
      uVar21 = 0;
      uVar20 = uVar18;
    }
    uVar24 = uVar21 * 2 + 1;
    if (uVar24 < uVar20) {
      do {
        uVar26 = uVar21 * 2 + 2;
        if (uVar26 < uVar20) {
          lVar19 = uVar24 * 0x30;
          lVar27 = uVar26 * 0x30;
          uVar26 = *(ulong *)((long)param_1 + lVar19 + 8);
          puVar22 = (ulong *)((long)param_1 + lVar27 + 8);
          bVar23 = *(ulong *)((long)param_1 + lVar19 + 0x10) <
                   *(ulong *)((long)param_1 + lVar27 + 0x10);
          if (*(undefined1 (*) [16])((long)param_1 + lVar19) !=
              *(undefined1 (*) [16])((long)param_1 + lVar27)) {
            bVar23 = uVar26 < *puVar22 ||
                     uVar26 - *puVar22 <
                     (ulong)(*(ulong *)((long)param_1 + lVar19) < *(ulong *)((long)param_1 + lVar27)
                            );
          }
          uVar24 = bVar23 + uVar24;
        }
        lVar19 = uVar21 * 0x30;
        lVar27 = uVar24 * 0x30;
        uVar21 = *(ulong *)((long)param_1 + lVar19);
        uVar26 = *(ulong *)((long)param_1 + lVar19 + 8);
        uVar3 = *(ulong *)((long)param_1 + lVar19 + 0x10);
        uVar4 = *(ulong *)((long)param_1 + lVar27 + 8);
        uVar5 = *(ulong *)((long)param_1 + lVar27 + 0x10);
        bVar23 = uVar26 < uVar4 ||
                 uVar26 - uVar4 < (ulong)(uVar21 < *(ulong *)((long)param_1 + lVar27));
        if (*(undefined1 (*) [16])((long)param_1 + lVar19) ==
            *(undefined1 (*) [16])((long)param_1 + lVar27)) {
          bVar23 = uVar3 < uVar5;
        }
        if (!bVar23) break;
        puVar22 = (ulong *)(lVar19 + (long)param_1);
        puVar25 = (ulong *)(lVar27 + (long)param_1);
        *puVar22 = *(ulong *)((long)param_1 + lVar27);
        *puVar25 = uVar21;
        puVar22[1] = uVar4;
        puVar25[1] = uVar26;
        puVar22[2] = uVar5;
        puVar25[2] = uVar3;
        auVar2 = *(undefined1 (*) [16])(puVar22 + 3);
        uVar21 = puVar25[4];
        puVar22[3] = puVar25[3];
        puVar22[4] = uVar21;
        *(undefined1 (*) [16])(puVar25 + 3) = auVar2;
        uVar21 = puVar22[5];
        puVar22[5] = puVar25[5];
        puVar25[5] = uVar21;
        uVar26 = uVar24 * 2 + 1;
        uVar21 = uVar24;
        uVar24 = uVar26;
      } while (uVar26 < uVar20);
    }
    if (uVar18 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<[u64; 3], <[[u64; 3]]>::sort_unstable_by<pipeline::complex::person_shard::{closure#4}>::{closure#0}> @ 0063d280 (2213 bytes)

/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<[u64; 3usize], <[[u64;
   3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#4}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
          (ulong *param_1,ulong param_2,ulong *param_3,int param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong *puVar15;
  char cVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  int local_64;
  ulong *local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48;
  ulong *local_40;
  ulong local_38;
  
  local_64 = param_4;
  do {
    if (param_2 < 0x21) {
      shared::smallsort::small_sort_general::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (param_1,param_2,*param_5);
      return;
    }
    if (local_64 == 0) {
      heapsort::heapsort::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (param_1,param_2,*param_5);
      return;
    }
    local_40 = param_3;
    uVar10 = param_2 >> 3;
    puVar15 = param_1 + uVar10 * 0xc;
    puVar17 = param_1 + uVar10 * 0x15;
    local_48 = param_2;
    if (param_2 < 0x40) {
      uVar10 = *param_1;
      uVar1 = *puVar15;
      cVar16 = (uVar1 < uVar10) - (uVar10 < uVar1);
      if (uVar10 == uVar1) {
        cVar16 = (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)param_1 + 0xc)) -
                 (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)puVar15 + 0xc));
      }
      puVar2 = (undefined8 *)*param_5;
      uVar14 = *puVar2;
      if (cVar16 == '\0') {
        uVar11 = param_1[2];
        uVar18 = puVar15[2];
        if (((uVar18 | uVar11) & 0x2000000000000000) == 0) {
          cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar14);
          uVar14 = *puVar2;
        }
        else {
          cVar16 = (uVar18 < uVar11) - (uVar11 < uVar18);
        }
      }
      uVar11 = *puVar17;
      cVar7 = (uVar11 < uVar10) - (uVar10 < uVar11);
      if (uVar10 == uVar11) {
        cVar7 = (*(uint *)((long)puVar17 + 0xc) < *(uint *)((long)param_1 + 0xc)) -
                (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)puVar17 + 0xc));
      }
      if (cVar7 == '\0') {
        uVar10 = param_1[2];
        uVar18 = puVar17[2];
        if (((uVar18 | uVar10) & 0x2000000000000000) == 0) {
          cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(uVar14);
        }
        else {
          cVar7 = (uVar18 < uVar10) - (uVar10 < uVar18);
        }
      }
      puVar8 = param_1;
      if ((cVar7 == -1) == (cVar16 == -1)) {
        cVar7 = (uVar11 < uVar1) - (uVar1 < uVar11);
        if (uVar1 == uVar11) {
          cVar7 = (*(uint *)((long)puVar17 + 0xc) < *(uint *)((long)puVar15 + 0xc)) -
                  (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)puVar17 + 0xc));
        }
        if (cVar7 == '\0') {
          uVar10 = puVar15[2];
          uVar1 = puVar17[2];
          if (((uVar1 | uVar10) & 0x2000000000000000) == 0) {
            cVar7 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar2);
          }
          else {
            cVar7 = (uVar1 < uVar10) - (uVar10 < uVar1);
          }
        }
        puVar8 = puVar15;
        if ((cVar7 == -1) != (cVar16 == -1)) {
          puVar8 = puVar17;
        }
      }
    }
    else {
      puVar8 = (ulong *)shared::pivot::median3_rec::
                        <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                                  (param_1,puVar15,puVar17,uVar10,param_5);
    }
    uVar10 = local_48;
    local_64 = local_64 + -1;
    lVar19 = (long)puVar8 - (long)param_1;
    puVar17 = (ulong *)*param_5;
    if (local_40 == (ulong *)0x0) {
LAB_0063d883:
      uVar1 = param_1[2];
      uVar18 = *param_1;
      uVar3 = param_1[1];
      uVar11 = *(ulong *)((long)param_1 + lVar19 + 0x10);
      uVar5 = ((ulong *)((long)param_1 + lVar19))[1];
      *param_1 = *(ulong *)((long)param_1 + lVar19);
      param_1[1] = uVar5;
      param_1[2] = uVar11;
      *(ulong *)((long)param_1 + lVar19) = uVar18;
      ((ulong *)((long)param_1 + lVar19))[1] = uVar3;
      *(ulong *)((long)param_1 + lVar19 + 0x10) = uVar1;
      puVar15 = param_1 + 3;
      local_78 = param_1[5];
      local_88 = param_1[3];
      uStack_80 = param_1[4];
      puVar8 = param_1 + 6;
      uVar1 = *param_1;
      uVar18 = (ulong)*(uint *)((long)param_1 + 0xc);
      local_50 = param_1[2];
      uVar11 = 0;
      local_58 = puVar17;
      local_60 = puVar15;
      local_38 = uVar18;
      lVar19 = uVar10 * 0x18 + -0x48;
      lVar6 = uVar10 * 0x18 + -0x30;
      do {
        lVar13 = lVar6;
        lVar12 = lVar19;
        uVar3 = *puVar8;
        cVar16 = (uVar1 < uVar3) - (uVar3 < uVar1);
        if (uVar3 == uVar1) {
          cVar16 = (uVar18 < *(uint *)((long)puVar8 + 0xc)) -
                   (*(uint *)((long)puVar8 + 0xc) < uVar18);
        }
        if (cVar16 == '\0') {
          uVar3 = puVar8[2];
          if (((uVar3 | local_50) & 0x2000000000000000) == 0) {
            cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar17);
            puVar15 = local_60;
            puVar17 = local_58;
            uVar18 = local_38;
          }
          else {
            cVar16 = (local_50 < uVar3) - (uVar3 < local_50);
          }
        }
        uVar3 = puVar15[uVar11 * 3];
        uVar5 = (puVar15 + uVar11 * 3)[1];
        puVar8[-1] = puVar15[uVar11 * 3 + 2];
        puVar8[-3] = uVar3;
        puVar8[-2] = uVar5;
        puVar15[uVar11 * 3 + 2] = puVar8[2];
        uVar3 = puVar8[1];
        puVar15[uVar11 * 3] = *puVar8;
        (puVar15 + uVar11 * 3)[1] = uVar3;
        uVar11 = (cVar16 == -1) + uVar11;
        puVar8 = puVar8 + 3;
        lVar19 = lVar12 + -0x18;
        lVar6 = lVar13 + -0x18;
      } while (puVar8 < param_1 + uVar10 * 3);
      do {
        puVar20 = puVar8;
        if (lVar12 == 0) {
          puVar20 = &local_88;
        }
        uVar10 = *puVar20;
        cVar16 = (uVar1 < uVar10) - (uVar10 < uVar1);
        if (uVar10 == uVar1) {
          puVar9 = puVar8;
          if (lVar12 == 0) {
            puVar9 = &local_88;
          }
          cVar16 = (uVar18 < *(uint *)((long)puVar9 + 0xc)) -
                   (*(uint *)((long)puVar9 + 0xc) < uVar18);
        }
        if (cVar16 == '\0') {
          puVar9 = puVar8;
          if (lVar12 == 0) {
            puVar9 = &local_88;
          }
          uVar10 = puVar9[2];
          if (((uVar10 | local_50) & 0x2000000000000000) == 0) {
            cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar17);
            puVar15 = local_60;
            puVar17 = local_58;
            uVar18 = local_38;
          }
          else {
            cVar16 = (local_50 < uVar10) - (uVar10 < local_50);
          }
        }
        uVar10 = puVar15[uVar11 * 3];
        uVar3 = (puVar15 + uVar11 * 3)[1];
        puVar8[-1] = puVar15[uVar11 * 3 + 2];
        puVar8[-3] = uVar10;
        puVar8[-2] = uVar3;
        puVar15[uVar11 * 3 + 2] = puVar20[2];
        uVar10 = puVar20[1];
        puVar15[uVar11 * 3] = *puVar20;
        (puVar15 + uVar11 * 3)[1] = uVar10;
        uVar11 = (cVar16 == -1) + uVar11;
        puVar8 = puVar8 + 3;
        lVar12 = lVar12 + -0x18;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != 0);
      if (local_48 <= uVar11) {
LAB_0063db96:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      param_3 = param_1 + uVar11 * 3;
      local_78 = param_1[2];
      local_88 = *param_1;
      uStack_80 = param_1[1];
      uVar10 = param_1[uVar11 * 3 + 2];
      uVar1 = (param_1 + uVar11 * 3)[1];
      *param_1 = param_1[uVar11 * 3];
      param_1[1] = uVar1;
      param_1[2] = uVar10;
      param_1[uVar11 * 3 + 2] = local_78;
      param_1[uVar11 * 3] = local_88;
      (param_1 + uVar11 * 3)[1] = uStack_80;
      param_2 = local_48 + ~uVar11;
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (param_1,uVar11,local_40,local_64,param_5);
    }
    else {
      puVar15 = (ulong *)((long)param_1 + lVar19);
      uVar1 = *local_40;
      uVar11 = *(ulong *)((long)param_1 + lVar19);
      cVar16 = (uVar11 < uVar1) - (uVar1 < uVar11);
      if (uVar1 == uVar11) {
        cVar16 = (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)local_40 + 0xc)) -
                 (*(uint *)((long)local_40 + 0xc) < *(uint *)((long)puVar15 + 0xc));
      }
      if (cVar16 == '\0') {
        uVar1 = local_40[2];
        uVar11 = puVar15[2];
        if (((uVar11 | uVar1) & 0x2000000000000000) == 0) {
          cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(*puVar17);
        }
        else {
          cVar16 = (uVar11 < uVar1) - (uVar1 < uVar11);
        }
      }
      if (cVar16 == -1) {
        puVar17 = (ulong *)*param_5;
        goto LAB_0063d883;
      }
      uVar1 = param_1[2];
      uVar18 = *param_1;
      uVar3 = param_1[1];
      uVar11 = puVar15[2];
      uVar5 = puVar15[1];
      *param_1 = *puVar15;
      param_1[1] = uVar5;
      param_1[2] = uVar11;
      *puVar15 = uVar18;
      puVar15[1] = uVar3;
      puVar15[2] = uVar1;
      puVar17 = param_1 + 3;
      local_78 = param_1[5];
      local_88 = param_1[3];
      uStack_80 = param_1[4];
      puVar15 = param_1 + 6;
      uVar1 = *param_1;
      puVar8 = (ulong *)(ulong)*(uint *)((long)param_1 + 0xc);
      local_50 = param_1[2];
      uVar11 = 0;
      local_58 = puVar17;
      local_60 = puVar8;
      lVar19 = uVar10 * 0x18 + -0x48;
      lVar6 = uVar10 * 0x18 + -0x30;
      do {
        lVar13 = lVar6;
        lVar12 = lVar19;
        uVar18 = *puVar15;
        cVar16 = (uVar18 < uVar1) - (uVar1 < uVar18);
        if (uVar1 == uVar18) {
          cVar16 = ((ulong *)(ulong)*(uint *)((long)puVar15 + 0xc) < puVar8) -
                   (puVar8 < (ulong *)(ulong)*(uint *)((long)puVar15 + 0xc));
        }
        if (cVar16 == '\0') {
          uVar18 = puVar15[2];
          if (((uVar18 | local_50) & 0x2000000000000000) == 0) {
            cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(*(undefined8 *)*param_5);
            puVar17 = local_58;
            puVar8 = local_60;
          }
          else {
            cVar16 = (uVar18 < local_50) - (local_50 < uVar18);
          }
        }
        uVar18 = puVar17[uVar11 * 3];
        uVar3 = (puVar17 + uVar11 * 3)[1];
        puVar15[-1] = puVar17[uVar11 * 3 + 2];
        puVar15[-3] = uVar18;
        puVar15[-2] = uVar3;
        puVar17[uVar11 * 3 + 2] = puVar15[2];
        uVar18 = puVar15[1];
        puVar17[uVar11 * 3] = *puVar15;
        (puVar17 + uVar11 * 3)[1] = uVar18;
        uVar11 = (cVar16 != -1) + uVar11;
        puVar15 = puVar15 + 3;
        lVar19 = lVar12 + -0x18;
        lVar6 = lVar13 + -0x18;
      } while (puVar15 < param_1 + uVar10 * 3);
      do {
        puVar20 = puVar15;
        if (lVar12 == 0) {
          puVar20 = &local_88;
        }
        uVar10 = *puVar20;
        cVar16 = (uVar10 < uVar1) - (uVar1 < uVar10);
        if (uVar1 == uVar10) {
          puVar9 = puVar15;
          if (lVar12 == 0) {
            puVar9 = &local_88;
          }
          cVar16 = ((ulong *)(ulong)*(uint *)((long)puVar9 + 0xc) < puVar8) -
                   (puVar8 < (ulong *)(ulong)*(uint *)((long)puVar9 + 0xc));
        }
        if (cVar16 == '\0') {
          puVar9 = puVar15;
          if (lVar12 == 0) {
            puVar9 = &local_88;
          }
          uVar10 = puVar9[2];
          if (((uVar10 | local_50) & 0x2000000000000000) == 0) {
            cVar16 = pipeline[509596c7b52975b2]::events::cid_cmp(*(undefined8 *)*param_5);
            puVar17 = local_58;
            puVar8 = local_60;
          }
          else {
            cVar16 = (uVar10 < local_50) - (local_50 < uVar10);
          }
        }
        uVar10 = puVar17[uVar11 * 3];
        uVar18 = (puVar17 + uVar11 * 3)[1];
        puVar15[-1] = puVar17[uVar11 * 3 + 2];
        puVar15[-3] = uVar10;
        puVar15[-2] = uVar18;
        puVar17[uVar11 * 3 + 2] = puVar20[2];
        uVar10 = puVar20[1];
        puVar17[uVar11 * 3] = *puVar20;
        (puVar17 + uVar11 * 3)[1] = uVar10;
        uVar11 = (cVar16 != -1) + uVar11;
        puVar15 = puVar15 + 3;
        lVar12 = lVar12 + -0x18;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != 0);
      if (local_48 <= uVar11) goto LAB_0063db96;
      local_88 = *param_1;
      uStack_80 = param_1[1];
      local_78 = param_1[2];
      uVar10 = param_1[uVar11 * 3 + 2];
      uVar1 = (param_1 + uVar11 * 3)[1];
      *param_1 = param_1[uVar11 * 3];
      param_1[1] = uVar1;
      param_1[2] = uVar10;
      param_1[uVar11 * 3 + 2] = local_78;
      param_1[uVar11 * 3] = local_88;
      (param_1 + uVar11 * 3)[1] = uStack_80;
      param_2 = local_48 + ~uVar11;
      param_3 = (ulong *)0x0;
    }
    param_1 = param_1 + uVar11 * 3 + 3;
  } while( true );
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<(usize, usize), <[(usize, usize)]>::sort_unstable_by<pipeline::complex::shard_order::{closure#1}>::{closure#0}> @ 00640b80 (2728 bytes)

/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<(usize, usize), <[(usize,
   usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::{closure#1}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
          (ulong *param_1,ulong param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  ulong uVar20;
  bool bVar21;
  ulong uStack_358;
  undefined *puStack_350;
  ulong uStack_348;
  ulong *local_340;
  ulong local_338 [16];
  undefined1 auStack_2b8 [648];
  
  if (0x20 < param_2) {
    puVar10 = param_1;
    do {
      while( true ) {
        if (param_4 == 0) {
          heapsort::heapsort::
          <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                    (puVar10,param_2);
          return;
        }
        puVar12 = puVar10 + (param_2 >> 3) * 8;
        puVar6 = puVar10 + (param_2 >> 3) * 0xe;
        if (0x3f < param_2) break;
        uVar20 = *puVar10;
        uVar9 = *puVar12;
        bVar21 = uVar9 < uVar20;
        if (uVar9 == uVar20) {
          bVar21 = puVar12[1] < puVar10[1];
        }
        uVar11 = *puVar6;
        bVar19 = uVar11 < uVar20;
        if (uVar11 == uVar20) {
          bVar19 = puVar6[1] < puVar10[1];
        }
        puVar5 = puVar10;
        if (bVar21 == bVar19) {
          bVar19 = uVar11 < uVar9;
          if (uVar11 == uVar9) {
            bVar19 = puVar6[1] < puVar12[1];
          }
          puVar5 = puVar12;
          if (bVar21 != bVar19) {
            puVar5 = puVar6;
          }
        }
        lVar7 = (long)puVar5 - (long)puVar10;
        if (param_3 != (ulong *)0x0) goto LAB_00640d33;
LAB_00640d5a:
        uVar20 = *puVar10;
        uVar9 = puVar10[1];
        uVar11 = ((ulong *)((long)puVar10 + lVar7))[1];
        *puVar10 = *(ulong *)((long)puVar10 + lVar7);
        puVar10[1] = uVar11;
        *(ulong *)((long)puVar10 + lVar7) = uVar20;
        ((ulong *)((long)puVar10 + lVar7))[1] = uVar9;
        puVar6 = puVar10 + 2;
        local_338[0] = puVar10[2];
        local_338[1] = puVar10[3];
        puVar12 = puVar10 + 4;
        uVar20 = *puVar10;
        uVar9 = puVar10[1];
        local_340 = param_3;
        if (puVar12 < puVar10 + param_2 * 2 + -2) {
          uVar11 = 0;
          do {
            puVar5 = puVar12;
            bVar21 = uVar20 < *puVar5;
            if (uVar20 == *puVar5) {
              bVar21 = uVar9 < puVar5[1];
            }
            lVar7 = bVar21 + uVar11;
            uVar15 = (puVar6 + uVar11 * 2)[1];
            puVar5[-2] = puVar6[uVar11 * 2];
            puVar5[-1] = uVar15;
            uVar15 = puVar5[1];
            puVar6[uVar11 * 2] = *puVar5;
            (puVar6 + uVar11 * 2)[1] = uVar15;
            bVar21 = uVar20 < puVar5[2];
            if (uVar20 == puVar5[2]) {
              bVar21 = uVar9 < puVar5[3];
            }
            uVar11 = (ulong)bVar21 + lVar7;
            uVar15 = (puVar6 + lVar7 * 2)[1];
            *puVar5 = puVar6[lVar7 * 2];
            puVar5[1] = uVar15;
            uVar15 = puVar5[3];
            puVar6[lVar7 * 2] = puVar5[2];
            (puVar6 + lVar7 * 2)[1] = uVar15;
            puVar12 = puVar5 + 4;
          } while (puVar12 < puVar10 + param_2 * 2 + -2);
          puVar5 = puVar5 + 2;
        }
        else {
          uVar11 = 0;
          puVar5 = puVar6;
        }
        do {
          puVar13 = puVar12;
          puVar12 = puVar13;
          if (puVar13 == puVar10 + param_2 * 2) {
            puVar12 = local_338;
          }
          bVar21 = uVar20 < *puVar12;
          if (uVar20 == *puVar12) {
            bVar21 = uVar9 < puVar12[1];
          }
          uVar8 = bVar21 + uVar11;
          uVar15 = (puVar6 + uVar11 * 2)[1];
          *puVar5 = puVar6[uVar11 * 2];
          puVar5[1] = uVar15;
          uVar15 = puVar12[1];
          puVar6[uVar11 * 2] = *puVar12;
          (puVar6 + uVar11 * 2)[1] = uVar15;
          puVar12 = puVar13 + 2;
          uVar11 = uVar8;
          puVar5 = puVar13;
        } while (puVar13 != puVar10 + param_2 * 2);
        if (param_2 <= uVar8) {
LAB_0064107a:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_338[0] = *puVar10;
        local_338[1] = puVar10[1];
        uVar20 = (puVar10 + uVar8 * 2)[1];
        *puVar10 = puVar10[uVar8 * 2];
        puVar10[1] = uVar20;
        puVar6 = puVar10 + uVar8 * 2;
        puVar10[uVar8 * 2] = local_338[0];
        (puVar10 + uVar8 * 2)[1] = local_338[1];
        param_1 = puVar10 + uVar8 * 2 + 2;
        param_2 = param_2 + ~uVar8;
        puStack_350 = (undefined *)0x640efb;
        <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                  (puVar10,uVar8,param_3,param_4 + -1);
        puVar10 = param_1;
        param_3 = puVar6;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto code_r0x00640ba0;
      }
      puStack_350 = (undefined *)0x640d28;
      lVar7 = shared::pivot::median3_rec::
              <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
                        (puVar10);
      lVar7 = lVar7 - (long)puVar10;
      if (param_3 == (ulong *)0x0) goto LAB_00640d5a;
LAB_00640d33:
      bVar21 = *(ulong *)((long)puVar10 + lVar7) < *param_3;
      if (*(ulong *)((long)puVar10 + lVar7) == *param_3) {
        bVar21 = *(ulong *)((long)puVar10 + lVar7 + 8) < param_3[1];
      }
      if (bVar21) goto LAB_00640d5a;
      puVar6 = (ulong *)(lVar7 + (long)puVar10);
      uVar20 = *puVar10;
      uVar9 = puVar10[1];
      uVar11 = puVar6[1];
      *puVar10 = *puVar6;
      puVar10[1] = uVar11;
      *puVar6 = uVar20;
      puVar6[1] = uVar9;
      puVar6 = puVar10 + 2;
      local_338[0] = puVar10[2];
      local_338[1] = puVar10[3];
      puVar12 = puVar10 + 4;
      uVar20 = *puVar10;
      uVar9 = puVar10[1];
      if (puVar12 < puVar10 + param_2 * 2 + -2) {
        uVar11 = 0;
        do {
          puVar5 = puVar12;
          bVar21 = uVar20 <= *puVar5;
          if (*puVar5 == uVar20) {
            bVar21 = uVar9 <= puVar5[1];
          }
          lVar7 = bVar21 + uVar11;
          uVar15 = (puVar6 + uVar11 * 2)[1];
          puVar5[-2] = puVar6[uVar11 * 2];
          puVar5[-1] = uVar15;
          uVar15 = puVar5[1];
          puVar6[uVar11 * 2] = *puVar5;
          (puVar6 + uVar11 * 2)[1] = uVar15;
          bVar21 = uVar20 <= puVar5[2];
          if (puVar5[2] == uVar20) {
            bVar21 = uVar9 <= puVar5[3];
          }
          uVar11 = (ulong)bVar21 + lVar7;
          uVar15 = (puVar6 + lVar7 * 2)[1];
          *puVar5 = puVar6[lVar7 * 2];
          puVar5[1] = uVar15;
          uVar15 = puVar5[3];
          puVar6[lVar7 * 2] = puVar5[2];
          (puVar6 + lVar7 * 2)[1] = uVar15;
          puVar12 = puVar5 + 4;
        } while (puVar12 < puVar10 + param_2 * 2 + -2);
        puVar5 = puVar5 + 2;
      }
      else {
        uVar11 = 0;
        puVar5 = puVar6;
      }
      do {
        puVar13 = puVar12;
        puVar12 = puVar13;
        if (puVar13 == puVar10 + param_2 * 2) {
          puVar12 = local_338;
        }
        bVar21 = uVar20 <= *puVar12;
        if (*puVar12 == uVar20) {
          bVar21 = uVar9 <= puVar12[1];
        }
        uVar8 = bVar21 + uVar11;
        uVar15 = (puVar6 + uVar11 * 2)[1];
        *puVar5 = puVar6[uVar11 * 2];
        puVar5[1] = uVar15;
        uVar15 = puVar12[1];
        puVar6[uVar11 * 2] = *puVar12;
        (puVar6 + uVar11 * 2)[1] = uVar15;
        puVar12 = puVar13 + 2;
        uVar11 = uVar8;
        puVar5 = puVar13;
      } while (puVar13 != puVar10 + param_2 * 2);
      if (param_2 <= uVar8) goto LAB_0064107a;
      local_338[0] = *puVar10;
      local_338[1] = puVar10[1];
      uVar20 = (puVar10 + uVar8 * 2)[1];
      *puVar10 = puVar10[uVar8 * 2];
      puVar10[1] = uVar20;
      puVar10[uVar8 * 2] = local_338[0];
      (puVar10 + uVar8 * 2)[1] = local_338[1];
      param_2 = param_2 - (uVar8 + 1);
      param_1 = puVar10 + (uVar8 + 1) * 2;
      param_3 = (ulong *)0x0;
      puVar10 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
code_r0x00640ba0:
  if (param_2 < 2) {
    return;
  }
  uVar20 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      local_338[0] = *param_1;
      local_338[1] = param_1[1];
      uVar9 = (param_1 + uVar20 * 2)[1];
      local_338[uVar20 * 2] = param_1[uVar20 * 2];
      local_338[uVar20 * 2 + 1] = uVar9;
      uVar9 = 1;
      uVar11 = param_2 - uVar20;
      if (uVar20 < 2) goto LAB_00641436;
    }
    else {
      bVar21 = *param_1 < param_1[2];
      if (*param_1 == param_1[2]) {
        bVar21 = param_1[1] < param_1[3];
      }
      bVar19 = param_1[4] < param_1[6];
      if (param_1[4] == param_1[6]) {
        bVar19 = param_1[5] < param_1[7];
      }
      uVar9 = (ulong)bVar21;
      uVar11 = (ulong)(bVar21 ^ 1);
      puVar10 = param_1 + uVar11 * 2;
      uVar15 = (ulong)bVar19;
      uVar8 = (ulong)((bVar19 ^ 3) << 4);
      puVar6 = param_1 + uVar15 * 2 + 4;
      bVar21 = param_1[uVar9 * 2] < param_1[uVar15 * 2 + 4];
      if (param_1[uVar9 * 2] == param_1[uVar15 * 2 + 4]) {
        bVar21 = param_1[uVar9 * 2 + 1] < param_1[uVar15 * 2 + 5];
      }
      bVar19 = param_1[uVar11 * 2] < *(ulong *)((long)param_1 + uVar8);
      if (param_1[uVar11 * 2] == *(ulong *)((long)param_1 + uVar8)) {
        bVar19 = param_1[uVar11 * 2 + 1] < *(ulong *)((long)param_1 + uVar8 + 8);
      }
      puVar12 = puVar10;
      if (bVar19) {
        puVar12 = puVar6;
      }
      puVar13 = puVar6;
      puVar5 = param_1 + uVar9 * 2;
      if (bVar21) {
        puVar13 = puVar10;
        puVar5 = puVar6;
        puVar12 = param_1 + uVar9 * 2;
      }
      if (bVar19) {
        puVar13 = (ulong *)((long)param_1 + uVar8);
      }
      else {
        puVar10 = (ulong *)((long)param_1 + uVar8);
      }
      bVar21 = *puVar12 < *puVar13;
      if (*puVar12 == *puVar13) {
        bVar21 = puVar12[1] < puVar13[1];
      }
      puVar6 = puVar13;
      if (bVar21) {
        puVar6 = puVar12;
        puVar12 = puVar13;
      }
      local_338[0] = *puVar5;
      local_338[1] = puVar5[1];
      local_338[2] = *puVar12;
      local_338[3] = puVar12[1];
      local_338[4] = *puVar6;
      local_338[5] = puVar6[1];
      local_338[6] = *puVar10;
      local_338[7] = puVar10[1];
      lVar7 = uVar20 * 0x10;
      bVar21 = param_1[uVar20 * 2] < param_1[uVar20 * 2 + 2];
      if (param_1[uVar20 * 2] == param_1[uVar20 * 2 + 2]) {
        bVar21 = param_1[uVar20 * 2 + 1] < param_1[uVar20 * 2 + 3];
      }
      bVar19 = param_1[uVar20 * 2 + 4] < param_1[uVar20 * 2 + 6];
      if (param_1[uVar20 * 2 + 4] == param_1[uVar20 * 2 + 6]) {
        bVar19 = param_1[uVar20 * 2 + 5] < param_1[uVar20 * 2 + 7];
      }
      uVar9 = (ulong)bVar21;
      uVar11 = (ulong)(bVar21 ^ 1);
      puVar10 = param_1 + uVar20 * 2 + uVar11 * 2;
      uVar15 = (ulong)bVar19;
      puVar12 = param_1 + uVar20 * 2 + uVar15 * 2 + 4;
      uVar8 = (ulong)((bVar19 ^ 3) << 4);
      puVar6 = (ulong *)((long)param_1 + uVar8 + lVar7);
      bVar21 = param_1[uVar20 * 2 + uVar9 * 2] < param_1[uVar20 * 2 + uVar15 * 2 + 4];
      if (param_1[uVar20 * 2 + uVar9 * 2] == param_1[uVar20 * 2 + uVar15 * 2 + 4]) {
        bVar21 = param_1[uVar20 * 2 + uVar9 * 2 + 1] < param_1[uVar20 * 2 + uVar15 * 2 + 5];
      }
      uVar15 = *(ulong *)((long)param_1 + uVar8 + lVar7);
      bVar19 = param_1[uVar20 * 2 + uVar11 * 2] < uVar15;
      if (param_1[uVar20 * 2 + uVar11 * 2] == uVar15) {
        bVar19 = param_1[uVar20 * 2 + uVar11 * 2 + 1] <
                 *(ulong *)((long)param_1 + uVar8 + 8 + lVar7);
      }
      puVar5 = puVar10;
      if (bVar19) {
        puVar5 = puVar12;
      }
      puVar14 = puVar12;
      puVar13 = param_1 + uVar20 * 2 + uVar9 * 2;
      if (bVar21) {
        puVar14 = puVar10;
        puVar13 = puVar12;
        puVar5 = param_1 + uVar20 * 2 + uVar9 * 2;
      }
      if (bVar19) {
        puVar14 = puVar6;
      }
      else {
        puVar10 = puVar6;
      }
      bVar21 = *puVar5 < *puVar14;
      if (*puVar5 == *puVar14) {
        bVar21 = puVar5[1] < puVar14[1];
      }
      puVar6 = puVar14;
      if (bVar21) {
        puVar6 = puVar5;
        puVar5 = puVar14;
      }
      uVar9 = puVar13[1];
      local_338[uVar20 * 2] = *puVar13;
      local_338[uVar20 * 2 + 1] = uVar9;
      uVar9 = puVar5[1];
      local_338[uVar20 * 2 + 2] = *puVar5;
      local_338[uVar20 * 2 + 3] = uVar9;
      uVar9 = puVar6[1];
      local_338[uVar20 * 2 + 4] = *puVar6;
      local_338[uVar20 * 2 + 5] = uVar9;
      uVar9 = puVar10[1];
      local_338[uVar20 * 2 + 6] = *puVar10;
      local_338[uVar20 * 2 + 7] = uVar9;
      uVar9 = 4;
      uVar11 = param_2 - uVar20;
      if (uVar20 < 5) goto LAB_00641436;
    }
  }
  else {
    puStack_350 = (undefined *)0x640bd6;
    shared::smallsort::sort8_stable::
    <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
              (param_1,local_338,local_338 + param_2 * 2);
    puStack_350 = (undefined *)0x640bf9;
    shared::smallsort::sort8_stable::
    <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
              (param_1 + uVar20 * 2,local_338 + uVar20 * 2,auStack_2b8 + param_2 * 0x10);
    uVar9 = 8;
    uVar11 = param_2 - uVar20;
    if (uVar20 < 9) goto LAB_00641436;
  }
  uVar8 = (ulong)(uint)((int)uVar9 << 4);
  uVar15 = uVar9;
  do {
    uVar1 = (param_1 + uVar15 * 2)[1];
    local_338[uVar15 * 2] = param_1[uVar15 * 2];
    local_338[uVar15 * 2 + 1] = uVar1;
    uVar1 = local_338[uVar15 * 2];
    uVar18 = local_338[uVar15 * 2 + 1];
    bVar21 = local_338[uVar15 * 2 + -2] < uVar1;
    if (local_338[uVar15 * 2 + -2] == uVar1) {
      bVar21 = local_338[uVar15 * 2 + -1] < uVar18;
    }
    if (bVar21) {
      uVar2 = uVar8;
      do {
        uVar17 = uVar2;
        uVar4 = *(undefined8 *)((long)local_338 + (uVar17 - 8));
        *(undefined8 *)((long)local_338 + uVar17) =
             *(undefined8 *)((long)local_338 + (uVar17 - 0x10));
        *(undefined8 *)((long)local_338 + uVar17 + 8) = uVar4;
        puVar10 = &uStack_348;
        if (uVar17 == 0x10) goto LAB_00641393;
        bVar21 = *(ulong *)((long)&uStack_358 + uVar17) < uVar1;
        if (*(ulong *)((long)&uStack_358 + uVar17) == uVar1) {
          bVar21 = *(ulong *)((long)local_338 + (uVar17 - 0x18)) < uVar18;
        }
        uVar2 = uVar17 - 0x10;
      } while (bVar21);
      puVar10 = (ulong *)((long)&uStack_358 + uVar17);
LAB_00641393:
      *(ulong *)((long)puVar10 + 0x10) = uVar1;
      *(ulong *)((long)puVar10 + 0x18) = uVar18;
    }
    uVar15 = uVar15 + 1;
    uVar8 = uVar8 + 0x10;
  } while (uVar15 != uVar20);
LAB_00641436:
  puVar10 = local_338 + uVar20 * 2 + -2;
  puVar6 = local_338 + uVar20 * 2;
  if (uVar9 < uVar11) {
    uVar15 = (ulong)(uint)((int)uVar9 << 4);
    do {
      uVar8 = (param_1 + uVar20 * 2 + uVar9 * 2)[1];
      puVar6[uVar9 * 2] = param_1[uVar20 * 2 + uVar9 * 2];
      (puVar6 + uVar9 * 2)[1] = uVar8;
      uVar8 = puVar6[uVar9 * 2];
      uVar1 = local_338[uVar20 * 2 + uVar9 * 2 + 1];
      bVar21 = puVar10[uVar9 * 2] < uVar8;
      if (puVar10[uVar9 * 2] == uVar8) {
        bVar21 = local_338[uVar20 * 2 + uVar9 * 2 + -1] < uVar1;
      }
      if (bVar21) {
        uVar18 = uVar15;
        do {
          uVar4 = ((undefined8 *)((long)puVar10 + uVar18))[1];
          *(undefined8 *)((long)puVar6 + uVar18) = *(undefined8 *)((long)puVar10 + uVar18);
          ((undefined8 *)((long)puVar6 + uVar18))[1] = uVar4;
          if (uVar18 == 0x10) {
            puVar12 = puVar6;
            goto LAB_00641463;
          }
          uVar2 = *(ulong *)((long)&uStack_358 + uVar18 + uVar20 * 0x10);
          bVar21 = uVar2 < uVar8;
          if (uVar2 == uVar8) {
            bVar21 = *(ulong *)((long)local_338 + uVar18 + uVar20 * 0x10 + -0x18) < uVar1;
          }
          uVar18 = uVar18 - 0x10;
        } while (bVar21);
        puVar12 = (ulong *)(uVar18 + (long)puVar6);
LAB_00641463:
        *puVar12 = uVar8;
        puVar12[1] = uVar1;
      }
      uVar9 = uVar9 + 1;
      uVar15 = uVar15 + 0x10;
    } while (uVar9 != uVar11);
  }
  puVar12 = local_338 + param_2 * 2 + -2;
  puVar5 = local_338;
  puVar13 = param_1 + param_2 * 2;
  do {
    puVar14 = param_1;
    bVar21 = *puVar5 < *puVar6;
    if (*puVar5 == *puVar6) {
      bVar21 = puVar5[1] < puVar6[1];
    }
    puVar16 = puVar6;
    if (bVar21 == false) {
      puVar16 = puVar5;
    }
    uVar9 = puVar16[1];
    *puVar14 = *puVar16;
    puVar14[1] = uVar9;
    bVar19 = *puVar10 < *puVar12;
    if (*puVar10 == *puVar12) {
      bVar19 = puVar10[1] < puVar12[1];
    }
    puVar16 = puVar10;
    if (bVar19 == false) {
      puVar16 = puVar12;
    }
    puVar6 = puVar6 + (ulong)bVar21 * 2;
    puVar5 = puVar5 + (ulong)(bVar21 ^ 1) * 2;
    uVar9 = puVar16[1];
    puVar13[-2] = *puVar16;
    puVar13[-1] = uVar9;
    puVar16 = puVar12 + (ulong)bVar19 * 2;
    puVar12 = puVar16 + -2;
    puVar10 = puVar10 + (ulong)bVar19 * -2;
    uVar20 = uVar20 - 1;
    param_1 = puVar14 + 2;
    puVar13 = puVar13 + -2;
  } while (uVar20 != 0);
  if ((param_2 & 1) != 0) {
    bVar21 = puVar5 < puVar10 + 2;
    puVar12 = puVar6;
    if (bVar21) {
      puVar12 = puVar5;
    }
    uVar20 = puVar12[1];
    puVar14[2] = *puVar12;
    puVar14[3] = uVar20;
    puVar5 = puVar5 + (ulong)bVar21 * 2;
    puVar6 = puVar6 + (ulong)!bVar21 * 2;
  }
  if ((puVar5 != puVar10 + 2) || (puVar6 != puVar16)) {
                    /* WARNING: Subroutine does not return */
    puStack_350 = &UNK_00641644;
    shared::smallsort::panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<(u128, u64, [u64; 3]), <[(u128, u64, [u64; 3])]>::sort_unstable_by<pipeline::complex::person_shard::{closure#3}>::{closure#0}> @ 00642140 (1577 bytes)

/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<(u128, u64, [u64; 3usize]),
   <[(u128, u64, [u64;
   3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
          (undefined1 (*param_1) [16],ulong param_2,undefined1 (*param_3) [16],int param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  bool bVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  bool bVar28;
  long lVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  undefined1 local_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong local_38;
  
  if (0x20 < param_2) {
    pauVar31 = param_1;
    do {
      while( true ) {
        if (param_4 == 0) {
          heapsort::heapsort::
          <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                    (pauVar31,param_2);
          return;
        }
        pauVar27 = pauVar31 + (param_2 >> 3) * 0xc;
        pauVar24 = pauVar31 + (param_2 >> 3) * 0x15;
        if (param_2 < 0x40) {
          uVar2 = *(ulong *)(*pauVar31 + 8);
          uVar3 = *(ulong *)*pauVar27;
          uVar4 = *(ulong *)(*pauVar27 + 8);
          bVar28 = uVar2 < uVar4 || uVar2 - uVar4 < (ulong)(*(ulong *)*pauVar31 < uVar3);
          if (*pauVar31 == *pauVar27) {
            bVar28 = *(ulong *)pauVar31[1] < *(ulong *)pauVar27[1];
          }
          uVar26 = *(ulong *)*pauVar24;
          uVar5 = *(ulong *)(*pauVar24 + 8);
          bVar25 = uVar2 < uVar5 || uVar2 - uVar5 < (ulong)(*(ulong *)*pauVar31 < uVar26);
          if (*pauVar31 == *pauVar24) {
            bVar25 = *(ulong *)pauVar31[1] < *(ulong *)pauVar24[1];
          }
          pauVar21 = pauVar31;
          if (bVar28 == bVar25) {
            bVar25 = uVar4 < uVar5 || uVar4 - uVar5 < (ulong)(uVar3 < uVar26);
            if (uVar4 == uVar5 && uVar3 == uVar26) {
              bVar25 = *(ulong *)pauVar27[1] < *(ulong *)pauVar24[1];
            }
            pauVar21 = pauVar27;
            if (bVar28 != bVar25) {
              pauVar21 = pauVar24;
            }
          }
        }
        else {
          pauVar21 = (undefined1 (*) [16])
                     shared::pivot::median3_rec::
                     <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                               (pauVar31);
        }
        param_4 = param_4 + -1;
        lVar22 = (long)pauVar21 - (long)pauVar31;
        local_38 = param_2;
        if (param_3 != (undefined1 (*) [16])0x0) break;
LAB_0064234d:
        uVar7 = *(undefined8 *)*pauVar31;
        uVar8 = *(undefined8 *)(*pauVar31 + 8);
        uVar9 = *(undefined8 *)pauVar31[1];
        uVar10 = *(undefined8 *)(pauVar31[1] + 8);
        uVar11 = *(undefined8 *)pauVar31[2];
        uVar12 = *(undefined8 *)(pauVar31[2] + 8);
        puVar23 = (undefined8 *)((long)pauVar31 + lVar22);
        uVar13 = *puVar23;
        uVar14 = puVar23[1];
        uVar15 = puVar23[2];
        uVar16 = puVar23[3];
        puVar23 = (undefined8 *)((long)pauVar31 + lVar22 + 0x10);
        uVar17 = puVar23[1];
        uVar18 = puVar23[2];
        uVar19 = puVar23[3];
        *(undefined8 *)pauVar31[1] = *puVar23;
        *(undefined8 *)(pauVar31[1] + 8) = uVar17;
        *(undefined8 *)pauVar31[2] = uVar18;
        *(undefined8 *)(pauVar31[2] + 8) = uVar19;
        *(undefined8 *)*pauVar31 = uVar13;
        *(undefined8 *)(*pauVar31 + 8) = uVar14;
        *(undefined8 *)pauVar31[1] = uVar15;
        *(undefined8 *)(pauVar31[1] + 8) = uVar16;
        puVar23 = (undefined8 *)((long)pauVar31 + lVar22 + 0x10);
        *puVar23 = uVar9;
        puVar23[1] = uVar10;
        puVar23[2] = uVar11;
        puVar23[3] = uVar12;
        puVar23 = (undefined8 *)((long)pauVar31 + lVar22);
        *puVar23 = uVar7;
        puVar23[1] = uVar8;
        puVar23[2] = uVar9;
        puVar23[3] = uVar10;
        uStack_48 = *(undefined8 *)pauVar31[5];
        uStack_40 = *(undefined8 *)(pauVar31[5] + 8);
        local_68._0_8_ = *(undefined8 *)pauVar31[3];
        local_68._8_8_ = *(undefined8 *)(pauVar31[3] + 8);
        uStack_58 = *(undefined8 *)pauVar31[4];
        uStack_50 = *(undefined8 *)(pauVar31[4] + 8);
        pauVar24 = pauVar31 + 6;
        uVar2 = *(ulong *)*pauVar31;
        uVar3 = *(ulong *)(*pauVar31 + 8);
        uVar4 = *(ulong *)pauVar31[1];
        uVar26 = 0;
        lVar22 = param_2 * 0x30 + -0x90;
        lVar20 = param_2 * 0x30 + -0x60;
        do {
          lVar30 = lVar20;
          lVar29 = lVar22;
          uVar5 = *(ulong *)(*pauVar24 + 8);
          bVar28 = uVar5 < uVar3 || uVar5 - uVar3 < (ulong)(*(ulong *)*pauVar24 < uVar2);
          if (*(ulong *)*pauVar24 == uVar2 && uVar5 == uVar3) {
            bVar28 = *(ulong *)pauVar24[1] < uVar4;
          }
          pauVar27 = pauVar31 + uVar26 * 3 + 3;
          uVar7 = *(undefined8 *)(*pauVar27 + 8);
          uVar8 = *(undefined8 *)pauVar27[1];
          uVar9 = *(undefined8 *)(pauVar27[1] + 8);
          pauVar21 = pauVar31 + uVar26 * 3 + 4;
          uVar10 = *(undefined8 *)*pauVar21;
          uVar11 = *(undefined8 *)(*pauVar21 + 8);
          uVar12 = *(undefined8 *)pauVar21[1];
          uVar13 = *(undefined8 *)(pauVar21[1] + 8);
          *(undefined8 *)pauVar24[-3] = *(undefined8 *)*pauVar27;
          *(undefined8 *)(pauVar24[-3] + 8) = uVar7;
          *(undefined8 *)pauVar24[-2] = uVar8;
          *(undefined8 *)(pauVar24[-2] + 8) = uVar9;
          *(undefined8 *)pauVar24[-2] = uVar10;
          *(undefined8 *)(pauVar24[-2] + 8) = uVar11;
          *(undefined8 *)pauVar24[-1] = uVar12;
          *(undefined8 *)(pauVar24[-1] + 8) = uVar13;
          uVar7 = *(undefined8 *)(pauVar24[1] + 8);
          uVar8 = *(undefined8 *)pauVar24[2];
          uVar9 = *(undefined8 *)(pauVar24[2] + 8);
          pauVar27 = pauVar31 + uVar26 * 3 + 4;
          *(undefined8 *)*pauVar27 = *(undefined8 *)pauVar24[1];
          *(undefined8 *)(*pauVar27 + 8) = uVar7;
          *(undefined8 *)pauVar27[1] = uVar8;
          *(undefined8 *)(pauVar27[1] + 8) = uVar9;
          uVar7 = *(undefined8 *)(*pauVar24 + 8);
          uVar8 = *(undefined8 *)pauVar24[1];
          uVar9 = *(undefined8 *)(pauVar24[1] + 8);
          pauVar27 = pauVar31 + uVar26 * 3 + 3;
          *(undefined8 *)*pauVar27 = *(undefined8 *)*pauVar24;
          *(undefined8 *)(*pauVar27 + 8) = uVar7;
          *(undefined8 *)pauVar27[1] = uVar8;
          *(undefined8 *)(pauVar27[1] + 8) = uVar9;
          uVar26 = bVar28 + uVar26;
          pauVar24 = pauVar24 + 3;
          lVar22 = lVar29 + -0x30;
          lVar20 = lVar30 + -0x30;
        } while (pauVar24 < pauVar31 + param_2 * 3);
        do {
          pauVar27 = pauVar24;
          if (lVar29 == 0) {
            pauVar27 = &local_68;
          }
          uVar5 = *(ulong *)(*pauVar27 + 8);
          bVar28 = *(ulong *)pauVar27[1] < uVar4;
          if (*(ulong *)*pauVar27 != uVar2 || uVar5 != uVar3) {
            bVar28 = uVar5 < uVar3 || uVar5 - uVar3 < (ulong)(*(ulong *)*pauVar27 < uVar2);
          }
          pauVar21 = pauVar31 + uVar26 * 3 + 3;
          uVar7 = *(undefined8 *)*pauVar21;
          uVar8 = *(undefined8 *)(*pauVar21 + 8);
          uVar9 = *(undefined8 *)pauVar21[1];
          uVar10 = *(undefined8 *)(pauVar21[1] + 8);
          pauVar21 = pauVar31 + uVar26 * 3 + 4;
          uVar11 = *(undefined8 *)(*pauVar21 + 8);
          uVar12 = *(undefined8 *)pauVar21[1];
          uVar13 = *(undefined8 *)(pauVar21[1] + 8);
          *(undefined8 *)pauVar24[-2] = *(undefined8 *)*pauVar21;
          *(undefined8 *)(pauVar24[-2] + 8) = uVar11;
          *(undefined8 *)pauVar24[-1] = uVar12;
          *(undefined8 *)(pauVar24[-1] + 8) = uVar13;
          *(undefined8 *)pauVar24[-3] = uVar7;
          *(undefined8 *)(pauVar24[-3] + 8) = uVar8;
          *(undefined8 *)pauVar24[-2] = uVar9;
          *(undefined8 *)(pauVar24[-2] + 8) = uVar10;
          uVar7 = *(undefined8 *)*pauVar27;
          uVar8 = *(undefined8 *)(*pauVar27 + 8);
          uVar9 = *(undefined8 *)pauVar27[1];
          uVar10 = *(undefined8 *)(pauVar27[1] + 8);
          uVar11 = *(undefined8 *)(pauVar27[1] + 8);
          uVar12 = *(undefined8 *)pauVar27[2];
          uVar13 = *(undefined8 *)(pauVar27[2] + 8);
          pauVar21 = pauVar31 + uVar26 * 3 + 4;
          *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar27[1];
          *(undefined8 *)(*pauVar21 + 8) = uVar11;
          *(undefined8 *)pauVar21[1] = uVar12;
          *(undefined8 *)(pauVar21[1] + 8) = uVar13;
          pauVar27 = pauVar31 + uVar26 * 3 + 3;
          *(undefined8 *)*pauVar27 = uVar7;
          *(undefined8 *)(*pauVar27 + 8) = uVar8;
          *(undefined8 *)pauVar27[1] = uVar9;
          *(undefined8 *)(pauVar27[1] + 8) = uVar10;
          uVar26 = bVar28 + uVar26;
          pauVar24 = pauVar24 + 3;
          lVar29 = lVar29 + -0x30;
          lVar30 = lVar30 + -0x30;
        } while (lVar30 != 0);
        if (param_2 <= uVar26) {
LAB_0064275e:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        local_68._0_8_ = *(undefined8 *)*pauVar31;
        local_68._8_8_ = *(undefined8 *)(*pauVar31 + 8);
        uStack_58 = *(undefined8 *)pauVar31[1];
        uStack_50 = *(undefined8 *)(pauVar31[1] + 8);
        uStack_48 = *(undefined8 *)pauVar31[2];
        uStack_40 = *(undefined8 *)(pauVar31[2] + 8);
        pauVar24 = pauVar31 + uVar26 * 3;
        uVar7 = *(undefined8 *)*pauVar24;
        uVar8 = *(undefined8 *)(*pauVar24 + 8);
        uVar9 = *(undefined8 *)pauVar24[1];
        uVar10 = *(undefined8 *)(pauVar24[1] + 8);
        pauVar24 = pauVar31 + uVar26 * 3 + 1;
        uVar11 = *(undefined8 *)(*pauVar24 + 8);
        uVar12 = *(undefined8 *)pauVar24[1];
        uVar13 = *(undefined8 *)(pauVar24[1] + 8);
        *(undefined8 *)pauVar31[1] = *(undefined8 *)*pauVar24;
        *(undefined8 *)(pauVar31[1] + 8) = uVar11;
        *(undefined8 *)pauVar31[2] = uVar12;
        *(undefined8 *)(pauVar31[2] + 8) = uVar13;
        *(undefined8 *)*pauVar31 = uVar7;
        *(undefined8 *)(*pauVar31 + 8) = uVar8;
        *(undefined8 *)pauVar31[1] = uVar9;
        *(undefined8 *)(pauVar31[1] + 8) = uVar10;
        pauVar24 = pauVar31 + uVar26 * 3 + 1;
        *(undefined8 *)*pauVar24 = uStack_58;
        *(undefined8 *)(*pauVar24 + 8) = uStack_50;
        *(undefined8 *)pauVar24[1] = uStack_48;
        *(undefined8 *)(pauVar24[1] + 8) = uStack_40;
        pauVar24 = pauVar31 + uVar26 * 3;
        *(undefined8 *)*pauVar24 = local_68._0_8_;
        *(undefined8 *)(*pauVar24 + 8) = local_68._8_8_;
        *(undefined8 *)pauVar24[1] = uStack_58;
        *(undefined8 *)(pauVar24[1] + 8) = uStack_50;
        param_1 = pauVar31 + uVar26 * 3 + 3;
        param_2 = param_2 + ~uVar26;
        <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                  (pauVar31,uVar26,param_3,param_4);
        param_3 = pauVar31 + uVar26 * 3;
        pauVar31 = param_1;
        if (param_2 < 0x21) goto LAB_0064215a;
      }
      puVar1 = (ulong *)((long)pauVar31 + lVar22 + 8);
      bVar28 = *(ulong *)(*param_3 + 8) < *puVar1 ||
               *(ulong *)(*param_3 + 8) - *puVar1 <
               (ulong)(*(ulong *)*param_3 < *(ulong *)((long)pauVar31 + lVar22));
      if (*param_3 == *(undefined1 (*) [16])((long)pauVar31 + lVar22)) {
        bVar28 = *(ulong *)param_3[1] < *(ulong *)((long)pauVar31 + lVar22 + 0x10);
      }
      if (bVar28) goto LAB_0064234d;
      puVar23 = (undefined8 *)(lVar22 + (long)pauVar31);
      uVar7 = *(undefined8 *)*pauVar31;
      uVar8 = *(undefined8 *)(*pauVar31 + 8);
      uVar9 = *(undefined8 *)pauVar31[1];
      uVar10 = *(undefined8 *)(pauVar31[1] + 8);
      uVar11 = *(undefined8 *)pauVar31[2];
      uVar12 = *(undefined8 *)(pauVar31[2] + 8);
      uVar13 = *puVar23;
      uVar14 = puVar23[1];
      uVar15 = puVar23[2];
      uVar16 = puVar23[3];
      uVar17 = puVar23[3];
      uVar18 = puVar23[4];
      uVar19 = puVar23[5];
      *(undefined8 *)pauVar31[1] = puVar23[2];
      *(undefined8 *)(pauVar31[1] + 8) = uVar17;
      *(undefined8 *)pauVar31[2] = uVar18;
      *(undefined8 *)(pauVar31[2] + 8) = uVar19;
      *(undefined8 *)*pauVar31 = uVar13;
      *(undefined8 *)(*pauVar31 + 8) = uVar14;
      *(undefined8 *)pauVar31[1] = uVar15;
      *(undefined8 *)(pauVar31[1] + 8) = uVar16;
      puVar23[2] = uVar9;
      puVar23[3] = uVar10;
      puVar23[4] = uVar11;
      puVar23[5] = uVar12;
      *puVar23 = uVar7;
      puVar23[1] = uVar8;
      puVar23[2] = uVar9;
      puVar23[3] = uVar10;
      uStack_48 = *(undefined8 *)pauVar31[5];
      uStack_40 = *(undefined8 *)(pauVar31[5] + 8);
      local_68._0_8_ = *(undefined8 *)pauVar31[3];
      local_68._8_8_ = *(undefined8 *)(pauVar31[3] + 8);
      uStack_58 = *(undefined8 *)pauVar31[4];
      uStack_50 = *(undefined8 *)(pauVar31[4] + 8);
      pauVar24 = pauVar31 + 6;
      uVar2 = *(ulong *)*pauVar31;
      uVar3 = *(ulong *)(*pauVar31 + 8);
      uVar4 = *(ulong *)pauVar31[1];
      uVar26 = 0;
      lVar22 = param_2 * 0x30 + -0x90;
      lVar20 = param_2 * 0x30 + -0x60;
      do {
        lVar30 = lVar20;
        lVar29 = lVar22;
        uVar5 = *(ulong *)(*pauVar24 + 8);
        bVar28 = uVar5 <= uVar3 && (ulong)(uVar2 < *(ulong *)*pauVar24) <= uVar3 - uVar5;
        if (uVar2 == *(ulong *)*pauVar24 && uVar3 == uVar5) {
          bVar28 = *(ulong *)pauVar24[1] <= uVar4;
        }
        pauVar27 = pauVar31 + uVar26 * 3 + 3;
        uVar7 = *(undefined8 *)(*pauVar27 + 8);
        uVar8 = *(undefined8 *)pauVar27[1];
        uVar9 = *(undefined8 *)(pauVar27[1] + 8);
        pauVar21 = pauVar31 + uVar26 * 3 + 4;
        uVar10 = *(undefined8 *)*pauVar21;
        uVar11 = *(undefined8 *)(*pauVar21 + 8);
        uVar12 = *(undefined8 *)pauVar21[1];
        uVar13 = *(undefined8 *)(pauVar21[1] + 8);
        *(undefined8 *)pauVar24[-3] = *(undefined8 *)*pauVar27;
        *(undefined8 *)(pauVar24[-3] + 8) = uVar7;
        *(undefined8 *)pauVar24[-2] = uVar8;
        *(undefined8 *)(pauVar24[-2] + 8) = uVar9;
        *(undefined8 *)pauVar24[-2] = uVar10;
        *(undefined8 *)(pauVar24[-2] + 8) = uVar11;
        *(undefined8 *)pauVar24[-1] = uVar12;
        *(undefined8 *)(pauVar24[-1] + 8) = uVar13;
        uVar7 = *(undefined8 *)(pauVar24[1] + 8);
        uVar8 = *(undefined8 *)pauVar24[2];
        uVar9 = *(undefined8 *)(pauVar24[2] + 8);
        pauVar27 = pauVar31 + uVar26 * 3 + 4;
        *(undefined8 *)*pauVar27 = *(undefined8 *)pauVar24[1];
        *(undefined8 *)(*pauVar27 + 8) = uVar7;
        *(undefined8 *)pauVar27[1] = uVar8;
        *(undefined8 *)(pauVar27[1] + 8) = uVar9;
        uVar7 = *(undefined8 *)(*pauVar24 + 8);
        uVar8 = *(undefined8 *)pauVar24[1];
        uVar9 = *(undefined8 *)(pauVar24[1] + 8);
        pauVar27 = pauVar31 + uVar26 * 3 + 3;
        *(undefined8 *)*pauVar27 = *(undefined8 *)*pauVar24;
        *(undefined8 *)(*pauVar27 + 8) = uVar7;
        *(undefined8 *)pauVar27[1] = uVar8;
        *(undefined8 *)(pauVar27[1] + 8) = uVar9;
        uVar26 = bVar28 + uVar26;
        pauVar24 = pauVar24 + 3;
        lVar22 = lVar29 + -0x30;
        lVar20 = lVar30 + -0x30;
      } while (pauVar24 < pauVar31 + param_2 * 3);
      do {
        pauVar27 = pauVar24;
        if (lVar29 == 0) {
          pauVar27 = &local_68;
        }
        uVar5 = *(ulong *)(*pauVar27 + 8);
        bVar28 = *(ulong *)pauVar27[1] <= uVar4;
        if (uVar2 != *(ulong *)*pauVar27 || uVar3 != uVar5) {
          bVar28 = uVar5 <= uVar3 && (ulong)(uVar2 < *(ulong *)*pauVar27) <= uVar3 - uVar5;
        }
        pauVar21 = pauVar31 + uVar26 * 3 + 3;
        uVar7 = *(undefined8 *)*pauVar21;
        uVar8 = *(undefined8 *)(*pauVar21 + 8);
        uVar9 = *(undefined8 *)pauVar21[1];
        uVar10 = *(undefined8 *)(pauVar21[1] + 8);
        pauVar21 = pauVar31 + uVar26 * 3 + 4;
        uVar11 = *(undefined8 *)(*pauVar21 + 8);
        uVar12 = *(undefined8 *)pauVar21[1];
        uVar13 = *(undefined8 *)(pauVar21[1] + 8);
        *(undefined8 *)pauVar24[-2] = *(undefined8 *)*pauVar21;
        *(undefined8 *)(pauVar24[-2] + 8) = uVar11;
        *(undefined8 *)pauVar24[-1] = uVar12;
        *(undefined8 *)(pauVar24[-1] + 8) = uVar13;
        *(undefined8 *)pauVar24[-3] = uVar7;
        *(undefined8 *)(pauVar24[-3] + 8) = uVar8;
        *(undefined8 *)pauVar24[-2] = uVar9;
        *(undefined8 *)(pauVar24[-2] + 8) = uVar10;
        uVar7 = *(undefined8 *)*pauVar27;
        uVar8 = *(undefined8 *)(*pauVar27 + 8);
        uVar9 = *(undefined8 *)pauVar27[1];
        uVar10 = *(undefined8 *)(pauVar27[1] + 8);
        uVar11 = *(undefined8 *)(pauVar27[1] + 8);
        uVar12 = *(undefined8 *)pauVar27[2];
        uVar13 = *(undefined8 *)(pauVar27[2] + 8);
        pauVar21 = pauVar31 + uVar26 * 3 + 4;
        *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar27[1];
        *(undefined8 *)(*pauVar21 + 8) = uVar11;
        *(undefined8 *)pauVar21[1] = uVar12;
        *(undefined8 *)(pauVar21[1] + 8) = uVar13;
        pauVar27 = pauVar31 + uVar26 * 3 + 3;
        *(undefined8 *)*pauVar27 = uVar7;
        *(undefined8 *)(*pauVar27 + 8) = uVar8;
        *(undefined8 *)pauVar27[1] = uVar9;
        *(undefined8 *)(pauVar27[1] + 8) = uVar10;
        uVar26 = bVar28 + uVar26;
        pauVar24 = pauVar24 + 3;
        lVar29 = lVar29 + -0x30;
        lVar30 = lVar30 + -0x30;
      } while (lVar30 != 0);
      if (param_2 <= uVar26) goto LAB_0064275e;
      local_68._0_8_ = *(undefined8 *)*pauVar31;
      local_68._8_8_ = *(undefined8 *)(*pauVar31 + 8);
      uStack_58 = *(undefined8 *)pauVar31[1];
      uStack_50 = *(undefined8 *)(pauVar31[1] + 8);
      uStack_48 = *(undefined8 *)pauVar31[2];
      uStack_40 = *(undefined8 *)(pauVar31[2] + 8);
      pauVar24 = pauVar31 + uVar26 * 3;
      uVar7 = *(undefined8 *)*pauVar24;
      uVar8 = *(undefined8 *)(*pauVar24 + 8);
      uVar9 = *(undefined8 *)pauVar24[1];
      uVar10 = *(undefined8 *)(pauVar24[1] + 8);
      pauVar24 = pauVar31 + uVar26 * 3 + 1;
      uVar11 = *(undefined8 *)(*pauVar24 + 8);
      uVar12 = *(undefined8 *)pauVar24[1];
      uVar13 = *(undefined8 *)(pauVar24[1] + 8);
      *(undefined8 *)pauVar31[1] = *(undefined8 *)*pauVar24;
      *(undefined8 *)(pauVar31[1] + 8) = uVar11;
      *(undefined8 *)pauVar31[2] = uVar12;
      *(undefined8 *)(pauVar31[2] + 8) = uVar13;
      *(undefined8 *)*pauVar31 = uVar7;
      *(undefined8 *)(*pauVar31 + 8) = uVar8;
      *(undefined8 *)pauVar31[1] = uVar9;
      *(undefined8 *)(pauVar31[1] + 8) = uVar10;
      pauVar24 = pauVar31 + uVar26 * 3 + 1;
      *(undefined8 *)*pauVar24 = uStack_58;
      *(undefined8 *)(*pauVar24 + 8) = uStack_50;
      *(undefined8 *)pauVar24[1] = uStack_48;
      *(undefined8 *)(pauVar24[1] + 8) = uStack_40;
      pauVar24 = pauVar31 + uVar26 * 3;
      *(undefined8 *)*pauVar24 = local_68._0_8_;
      *(undefined8 *)(*pauVar24 + 8) = local_68._8_8_;
      *(undefined8 *)pauVar24[1] = uStack_58;
      *(undefined8 *)(pauVar24[1] + 8) = uStack_50;
      param_2 = param_2 + ~uVar26;
      param_1 = pauVar31 + uVar26 * 3 + 3;
      param_3 = (undefined1 (*) [16])0x0;
      pauVar31 = param_1;
    } while (0x20 < param_2);
  }
LAB_0064215a:
  shared::smallsort::small_sort_general::
  <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
            (param_1,param_2);
  return;
}


// ==== pipeline::complex::stage4::{closure#0} @ 00678a40 (8 bytes)

/* pipeline[509596c7b52975b2]::complex::stage4::{closure#0} */

void __rustcall pipeline[509596c7b52975b2]::complex::stage4::_closure_0_(undefined8 *param_1)

{
  clicks_a(*param_1);
  return;
}


// ==== pipeline::complex::stage4::{closure#1} @ 00678a60 (187 bytes)

/* pipeline[509596c7b52975b2]::complex::stage4::{closure#1} */

void __rustcall
pipeline[509596c7b52975b2]::complex::stage4::_closure_1_(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(param_1[1] + 8);
  uVar5 = *(ulong *)(param_1[1] + 0x10);
  local_88 = 0;
  local_80 = 8;
  local_78 = ZEXT816(0);
  local_68 = 8;
  local_50 = 0x10;
  local_38 = 1;
  local_30 = 0;
  LOCK();
  puVar1 = (ulong *)(lVar3 + 0x2e8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  local_60 = local_78;
  local_48 = local_78;
  while (uVar2 < uVar5) {
    person_shard(lVar3,param_2,*(undefined8 *)(lVar4 + uVar2 * 8),&local_88);
    LOCK();
    puVar1 = (ulong *)(lVar3 + 0x2e8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>(&local_88)
  ;
  return;
}


// ==== <pipeline::complex::stage4::{closure#0} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c5c0 (8 bytes)

/* <pipeline[509596c7b52975b2]::complex::stage4::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::complex::stage4::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  pipeline[509596c7b52975b2]::complex::clicks_a(*param_1);
  return;
}


// ==== <pipeline::complex::stage4::{closure#1} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c5e0 (187 bytes)

/* <pipeline[509596c7b52975b2]::complex::stage4::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::complex::stage4::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(param_1[1] + 8);
  uVar5 = *(ulong *)(param_1[1] + 0x10);
  local_88 = 0;
  local_80 = 8;
  local_78 = ZEXT816(0);
  local_68 = 8;
  local_50 = 0x10;
  local_38 = 1;
  local_30 = 0;
  LOCK();
  puVar1 = (ulong *)(lVar3 + 0x2e8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  local_60 = local_78;
  local_48 = local_78;
  while (uVar2 < uVar5) {
    pipeline[509596c7b52975b2]::complex::person_shard
              (lVar3,param_2,*(undefined8 *)(lVar4 + uVar2 * 8),&local_88);
    LOCK();
    puVar1 = (ulong *)(lVar3 + 0x2e8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>(&local_88)
  ;
  return;
}


// ==== pipeline::complex::stage4_pre @ 00737420 (2785 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::complex::stage4_pre */

void __rustcall pipeline[509596c7b52975b2]::complex::stage4_pre(long param_1)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  uint uVar7;
  long *plVar8;
  char cVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined4 uVar16;
  long *extraout_RDX;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  uint uVar20;
  long lVar21;
  ushort uVar22;
  int iVar23;
  char *__ptr;
  code *pcVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  long lVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar38 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar39 [64];
  long lVar40;
  long lVar41;
  undefined1 auVar42 [32];
  undefined1 in_ZMM2 [64];
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  code *local_b0;
  long *local_a8;
  code *local_a0;
  long *local_98;
  ulong local_90;
  code *local_88;
  ulong local_80;
  undefined1 local_78 [12];
  long local_68;
  int local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 (*local_40) [16];
  long local_38;
  
  plVar15 = *(long **)(param_1 + 0x1c0);
  if (plVar15 != (long *)0x0) {
    pauVar1 = *(undefined1 (**) [16])(param_1 + 0x1a8);
    auVar4 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    uVar14 = vpcmpb_avx512vl(auVar4,*pauVar1,1);
    uVar20 = (uint)uVar14;
    pauVar27 = pauVar1 + 1;
    pauVar25 = pauVar1;
    if ((short)uVar14 == 0) {
      do {
        uVar14 = vpcmpb_avx512vl(auVar4,*pauVar27,1);
        uVar20 = (uint)uVar14;
        pauVar25 = pauVar25 + -0x20;
        pauVar27 = pauVar27 + 1;
      } while ((short)uVar14 == 0);
    }
    local_98 = (long *)&DAT_00000004;
    if (&DAT_00000004 < plVar15) {
      local_98 = plVar15;
    }
    uVar11 = (long)local_98 * 4;
    if ((ulong)plVar15 >> 0x3e != 0 || 0x7ffffffffffffffc < uVar11) {
      alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
      local_98 = extraout_RDX;
    }
    iVar23 = 0;
    for (uVar7 = uVar20; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar23 = iVar23 + 1;
    }
    uVar7 = *(uint *)((long)pauVar25 + (-0x20 - (ulong)(uint)(iVar23 << 5)));
    pcVar10 = (code *)__rustc[45371133cddedda4]::__rust_alloc(uVar11,4);
    auVar38._8_56_ = extraout_var;
    auVar38._0_8_ = extraout_XMM0_Qa;
    if (pcVar10 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar11);
    }
    *(uint *)pcVar10 = uVar7;
    local_b8 = local_98;
    local_a8 = (long *)&DAT_00000001;
    puVar30 = (undefined1 *)((long)plVar15 + -1);
    if (puVar30 == (undefined1 *)0x0) {
      plVar15 = (long *)&DAT_00000001;
      bVar33 = false;
      lVar18 = *(long *)(param_1 + 0xa0);
      local_40 = pauVar1;
    }
    else {
      uVar20 = uVar20 - 1 & uVar20;
      auVar4 = vpcmpeqd_avx(auVar38._0_16_,auVar38._0_16_);
      auVar38 = ZEXT1664(auVar4);
      local_b0 = pcVar10;
      do {
        plVar8 = local_a8;
        if ((short)uVar20 == 0) {
          do {
            uVar14 = vpcmpb_avx512vl(auVar38._0_16_,*pauVar27,1);
            pauVar25 = pauVar25 + -0x20;
            pauVar27 = pauVar27 + 1;
          } while ((short)uVar14 == 0);
          uVar20 = (uint)uVar14;
        }
        iVar23 = 0;
        for (uVar7 = uVar20; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar23 = iVar23 + 1;
        }
        uVar16 = *(undefined4 *)((long)pauVar25 + (-0x20 - (ulong)(uint)(iVar23 << 5)));
        if (local_a8 == local_b8) {
          auVar39._0_8_ =
               <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_b8,local_a8,puVar30,4,4);
          auVar39._8_56_ = extraout_var_00;
          auVar4 = vpcmpeqd_avx(auVar39._0_16_,auVar39._0_16_);
          auVar38 = ZEXT1664(auVar4);
          pcVar10 = local_b0;
        }
        uVar20 = uVar20 - 1 & uVar20;
        puVar30 = puVar30 + -1;
        *(undefined4 *)(pcVar10 + (long)plVar8 * 4) = uVar16;
        local_a8 = (long *)((long)plVar8 + 1);
      } while (puVar30 != (undefined1 *)0x0);
      local_40 = *(undefined1 (**) [16])(param_1 + 0x1a8);
      bVar33 = *(long *)(param_1 + 0x1c0) == 0;
      lVar18 = *(long *)(param_1 + 0xa0);
      pcVar10 = local_b0;
    }
    local_b0 = pcVar10;
    local_98 = local_b8;
    if (lVar18 == 0) goto LAB_00737f04;
    lVar18 = *(long *)(param_1 + 0x2b0);
    lVar31 = *(long *)(param_1 + 0x98);
    local_90 = *(ulong *)(param_1 + 0x1b0);
    local_48 = *(undefined8 *)(param_1 + 0x1c8);
    local_50 = *(undefined8 *)(param_1 + 0x1d0);
    local_38 = *(long *)(param_1 + 0x2b8);
    pcVar24 = pcVar10;
    do {
      pauVar27 = local_40;
      uVar11 = (ulong)*(uint *)pcVar24;
      if (*(short *)(lVar18 + uVar11 * 2) < 0) {
        local_88 = pcVar24;
        if (!bVar33) {
          local_80 = uVar11;
          uVar11 = <std[c60ef17cbf7de79f]::hash::random::RandomState_as_core[62e902411887be45]::hash::BuildHasher>
                   ::hash_one::<&u32>(local_48,local_50);
          auVar4 = vpbroadcastb_avx512vl();
          lVar26 = 0;
          while( true ) {
            uVar11 = uVar11 & local_90;
            uVar13 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*pauVar27 + uVar11),auVar4);
            if ((short)uVar13 != 0) {
              do {
                uVar20 = 0;
                for (uVar7 = (uint)uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar20 = uVar20 + 1;
                }
                uVar32 = uVar20 + uVar11 & local_90;
                if ((int)local_80 == *(int *)pauVar27[uVar32 * -2 + -2]) {
                  lVar26 = *(long *)(pauVar27[uVar32 * -2 + -1] + 8);
                  pcVar24 = local_88;
                  if (lVar26 != 0) {
                    lVar28 = *(long *)pauVar27[uVar32 * -2 + -1];
                    lVar21 = *(long *)(lVar31 + 0x330);
                    uVar13 = lVar21 << 4;
                    lVar29 = 0;
                    uVar11 = local_80;
                    local_58 = lVar28;
                    do {
                      uVar14 = *(undefined8 *)(lVar28 + lVar29);
                      if (lVar21 == *(long *)(lVar31 + 800)) {
                        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one
                                  (lVar31 + 800);
                        lVar28 = local_58;
                        uVar11 = local_80;
                        pcVar24 = local_88;
                      }
                      lVar12 = *(long *)(lVar31 + 0x328) + (uVar13 | 8);
                      *(undefined8 *)(lVar12 + -8 + lVar29 * 2) = uVar14;
                      *(ulong *)(lVar12 + lVar29 * 2) = uVar11;
                      lVar21 = lVar21 + 1;
                      *(long *)(lVar31 + 0x330) = lVar21;
                      *(long *)(lVar31 + 0x750) = *(long *)(lVar31 + 0x750) + 1;
                      lVar29 = lVar29 + 8;
                    } while (lVar26 * 8 != lVar29);
                  }
                  goto LAB_007376a0;
                }
                iVar23 = (uint)uVar13 - 1;
                uVar22 = (ushort)iVar23 & (ushort)uVar13;
                uVar13 = (ulong)CONCAT22((short)((uint)iVar23 >> 0x10),uVar22);
              } while (uVar22 != 0);
            }
            auVar5 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
            in_ZMM2 = ZEXT1664(auVar5);
            uVar14 = vpcmpeqb_avx512vl(*(undefined1 (*) [16])(*pauVar27 + uVar11),auVar5);
            if ((short)uVar14 != 0) break;
            uVar11 = uVar11 + lVar26 + 0x10;
            lVar26 = lVar26 + 0x10;
          }
        }
        __ptr = "no entry found for key";
        core[62e902411887be45]::option::expect_failed
                  ("no entry found for key",0x16,&PTR_s_src_complex_rs_005892b0);
        break;
      }
      if ((*(ulong *)(local_38 + (ulong)(*(uint *)pcVar24 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) {
        events::process_run(param_1,lVar31,uVar11,8,0);
      }
LAB_007376a0:
      pcVar24 = pcVar24 + 4;
      __ptr = (char *)pcVar10;
    } while (pcVar24 != pcVar10 + (long)plVar15 * 4);
    if (local_98 != (long *)0x0) {
      if (((sys::A_BASE_0 == (code *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)) {
        free(__ptr);
      }
      else {
        uVar11 = 0x10;
        if (0x10 < (ulong)((long)local_98 << 2)) {
          uVar11 = (long)local_98 << 2;
        }
        lVar18 = LZCOUNT(uVar11 - 1);
        lVar31 = 0x40 - lVar18;
        if (0xffff < uVar11 - 1) {
          cVar9 = sys::big_put(pcVar10,lVar31);
          __ptr = (char *)pcVar10;
          if (cVar9 != '\0') goto LAB_0073792b;
        }
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)__ptr = *(undefined8 *)(in_FS_OFFSET + lVar31 * 8 + -0x3c8);
        *(char **)(in_FS_OFFSET + lVar31 * 8 + -0x3c8) = __ptr;
      }
    }
  }
LAB_0073792b:
  lVar18 = *(long *)(param_1 + 0x1a0);
  if (lVar18 != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
LAB_00737f04:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_main_rs_00210588);
    }
    lVar31 = *(long *)(param_1 + 0x198);
    lVar26 = *(long *)(param_1 + 0x98);
    lVar28 = *(long *)(lVar26 + 0x330);
    lVar21 = lVar28 << 4;
    lVar29 = 0;
    do {
      auVar4 = *(undefined1 (*) [16])(lVar31 + 0x10 + lVar29);
      if (lVar28 == *(long *)(lVar26 + 800)) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(lVar26 + 800);
      }
      *(undefined1 (*) [16])(*(long *)(lVar26 + 0x328) + lVar21) = auVar4;
      lVar28 = lVar28 + 1;
      *(long *)(lVar26 + 0x330) = lVar28;
      *(long *)(lVar26 + 0x750) = *(long *)(lVar26 + 0x750) + 1;
      lVar21 = lVar21 + 0x10;
      lVar29 = lVar29 + 0x20;
    } while (lVar18 * 0x20 != lVar29);
  }
  local_d0 = 0;
  lStack_c8 = 4;
  local_c0 = 0;
  uVar11 = *(ulong *)(param_1 + 0x1d8);
  if (uVar11 == 0) {
    if (links::DBG_0 == '\0') goto LAB_00737d23;
    local_78._0_8_ = 0;
    local_68 = 0;
  }
  else {
    puVar19 = (ulong *)(*(long *)(param_1 + 0x98) + 0x300);
    uVar13 = *(ulong *)(param_1 + 0xa0);
    lVar18 = 4;
    uVar32 = 0;
    do {
      if (uVar13 == uVar32) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar13,uVar13,&PTR_s_src_main_rs_00210588);
      }
      uVar17 = puVar19[-4];
      uVar2 = puVar19[-3];
      if ((ulong)(local_d0 - local_c0) < uVar2) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_d0,local_c0,uVar2,4,4);
        lVar18 = lStack_c8;
LAB_00737b0a:
        lVar26 = local_c0;
        lVar31 = local_d0;
        (*(code *)PTR_memcpy_00841de0)(local_c0 * 4 + lVar18,uVar17,uVar2 * 4);
      }
      else {
        lVar26 = local_c0;
        lVar31 = local_d0;
        if (uVar2 != 0) goto LAB_00737b0a;
      }
      lVar26 = lVar26 + uVar2;
      uVar17 = puVar19[-1];
      uVar2 = *puVar19;
      local_c0 = lVar26;
      if ((ulong)(lVar31 - lVar26) < uVar2) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_d0,lVar26,uVar2,4,4);
        lVar18 = lStack_c8;
LAB_00737aa0:
        lVar26 = local_c0;
        (*(code *)PTR_memcpy_00841de0)(local_c0 * 4 + lVar18,uVar17,uVar2 * 4);
      }
      else if (uVar2 != 0) goto LAB_00737aa0;
      uVar32 = uVar32 + 1;
      local_c0 = lVar26 + uVar2;
      puVar19 = puVar19 + 0xf4;
    } while (uVar11 != uVar32);
    if (links::DBG_0 == '\0') goto LAB_00737d23;
    lVar18 = *(long *)(param_1 + 0x98);
    uVar13 = *(ulong *)(param_1 + 0xa0);
    uVar32 = uVar11 - 1;
    if (uVar13 < uVar11 - 1) {
      uVar32 = uVar13;
    }
    if (uVar32 < 0x10) {
      local_68 = 0;
      uVar32 = 0;
    }
    else {
      uVar32 = uVar32 + 1;
      uVar17 = 0x10;
      if ((uVar32 & 0xf) != 0) {
        uVar17 = (ulong)((uint)uVar32 & 0xf);
      }
      uVar32 = uVar32 - uVar17;
      auVar42._8_8_ = DAT_00201dc8;
      auVar42._0_8_ = DAT_00201dc8;
      auVar42._16_8_ = DAT_00201dc8;
      auVar42._24_8_ = DAT_00201dc8;
      lVar31 = 0;
      lVar29 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar26 = 0;
      lVar12 = 0;
      lVar43 = 0;
      lVar44 = 0;
      lVar28 = 0;
      lVar45 = 0;
      lVar46 = 0;
      lVar47 = 0;
      lVar21 = 0;
      lVar48 = 0;
      lVar49 = 0;
      lVar50 = 0;
      uVar17 = uVar32;
      auVar6 = _DAT_00203760;
      do {
        vpmullq_avx512vl(auVar6,auVar42);
        auVar34 = vpgatherqq_avx512vl(*(undefined8 *)(lVar18 + 0x300 + uVar13));
        auVar35 = vpgatherqq_avx512vl(*(undefined8 *)(lVar18 + 0x2180 + uVar13));
        auVar36 = vpgatherqq_avx512vl(*(undefined8 *)(lVar18 + 0x4000 + uVar13));
        auVar37 = vpgatherqq_avx512vl(*(undefined8 *)(lVar18 + 0x5e80 + uVar13));
        lVar31 = auVar34._0_8_ + lVar31;
        lVar29 = auVar34._8_8_ + lVar29;
        lVar40 = auVar34._16_8_ + lVar40;
        lVar41 = auVar34._24_8_ + lVar41;
        lVar26 = auVar35._0_8_ + lVar26;
        lVar12 = auVar35._8_8_ + lVar12;
        lVar43 = auVar35._16_8_ + lVar43;
        lVar44 = auVar35._24_8_ + lVar44;
        lVar28 = auVar36._0_8_ + lVar28;
        lVar45 = auVar36._8_8_ + lVar45;
        lVar46 = auVar36._16_8_ + lVar46;
        lVar47 = auVar36._24_8_ + lVar47;
        lVar21 = auVar37._0_8_ + lVar21;
        lVar48 = auVar37._8_8_ + lVar48;
        lVar49 = auVar37._16_8_ + lVar49;
        lVar50 = auVar37._24_8_ + lVar50;
        auVar34._0_8_ = auVar6._0_8_ + DAT_00201e58;
        auVar34._8_8_ = auVar6._8_8_ + DAT_00201e58;
        auVar34._16_8_ = auVar6._16_8_ + DAT_00201e58;
        auVar34._24_8_ = auVar6._24_8_ + DAT_00201e58;
        uVar17 = uVar17 - 0x10;
        auVar6 = auVar34;
      } while (uVar17 != 0);
      auVar4._0_8_ = lVar21 + lVar28 + lVar26 + lVar31;
      auVar4._8_8_ = lVar48 + lVar45 + lVar12 + lVar29;
      auVar6._16_8_ = lVar49 + lVar46 + lVar43 + lVar40;
      auVar6._0_16_ = auVar4;
      auVar6._24_8_ = lVar50 + lVar47 + lVar44 + lVar41;
      auVar4 = vpaddq_avx(auVar4,auVar6._16_16_);
      auVar5 = vpshufd_avx(auVar4,0xee);
      auVar4 = vpaddq_avx(auVar4,auVar5);
      local_68 = auVar4._0_8_;
    }
    plVar15 = (long *)(lVar18 + uVar32 * 0x7a0 + 0x300);
    do {
      local_78._0_8_ = local_c0;
      if (uVar13 == uVar32) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar13,uVar13,&PTR_s_src_main_rs_00210588);
      }
      uVar32 = uVar32 + 1;
      local_68 = local_68 + *plVar15;
      plVar15 = plVar15 + 0xf4;
    } while (uVar11 != uVar32);
  }
  local_b8 = (long *)local_78;
  local_b0 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
  local_a8 = &local_68;
  local_a0 = <u64_as_core[62e902411887be45]::fmt::Display>::fmt;
  local_c0 = local_78._0_8_;
  std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020baaa,&local_b8);
LAB_00737d23:
  if (*(long *)(param_1 + 0x178) != 0) {
    pcVar10 = *(code **)(param_1 + 0x180);
    if (((sys::A_BASE_0 == (code *)0x0) || (pcVar10 < sys::A_BASE_0)) || (sys::A_END_0 <= pcVar10))
    {
      free(pcVar10);
    }
    else {
      uVar13 = *(long *)(param_1 + 0x178) << 2;
      uVar11 = 0x10;
      if (0x10 < uVar13) {
        uVar11 = uVar13;
      }
      lVar18 = LZCOUNT(uVar11 - 1);
      lVar31 = 0x40 - lVar18;
      if ((uVar11 - 1 < 0x10000) || (cVar9 = sys::big_put(pcVar10,lVar31), cVar9 == '\0')) {
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *(undefined8 *)pcVar10 = *(undefined8 *)(in_FS_OFFSET + lVar31 * 8 + -0x3c8);
        *(code **)(in_FS_OFFSET + lVar31 * 8 + -0x3c8) = pcVar10;
      }
    }
  }
  *(long *)(param_1 + 0x188) = local_c0;
  *(long *)(param_1 + 0x178) = local_d0;
  *(long *)(param_1 + 0x180) = lStack_c8;
  local_78 = <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::now();
  uVar16 = local_78._8_4_;
  uVar14 = local_78._0_8_;
  if (sys::LAST_1 != -1) {
    local_68 = sys::LAST_0;
    local_60 = sys::LAST_1;
    <std[c60ef17cbf7de79f]::sys::pal::unix::time::Timespec>::sub_timespec
              (&local_b8,local_78,&local_68);
    lVar18 = DAT_008437a8;
    auVar5._8_8_ = unaff_XMM15_Qb;
    auVar5._0_8_ = unaff_XMM15_Qa;
    auVar4 = vcvtusi2sd_avx512f(auVar5,local_b0);
    dVar3 = ((double)(int)local_a8 / _DAT_00201a48 + auVar4._0_8_) * DAT_00201e30;
    bVar33 = (bool)((byte)local_b8 & 1);
    if (DAT_008437a8 == sys::LAPS) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<(&str,f64)>>::grow_one(&sys::LAPS);
    }
    lVar31 = DAT_008437a0;
    *(char **)(DAT_008437a0 + lVar18 * 0x18) = "c.pre";
    *(undefined8 *)(lVar31 + 8 + lVar18 * 0x18) = 5;
    *(ulong *)(lVar31 + 0x10 + lVar18 * 0x18) = (ulong)!bVar33 * (long)dVar3;
    DAT_008437a8 = lVar18 + 1;
  }
  sys::LAST_0 = uVar14;
  sys::LAST_1 = uVar16;
  return;
}


// ==== pipeline::complex::shard_order @ 00737f60 (1220 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::complex::shard_order */

void __rustcall pipeline[509596c7b52975b2]::complex::shard_order(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [32];
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  
  pauVar11 = (undefined1 (*) [32])__rustc[45371133cddedda4]::__rust_alloc(0x400,8);
  uVar10 = _UNK_00205fb8;
  uVar9 = _UNK_00205fb0;
  uVar8 = _UNK_00205fa8;
  uVar7 = _UNK_00205fa0;
  uVar6 = _UNK_00205f98;
  uVar5 = _UNK_00205f90;
  uVar4 = _UNK_00205f88;
  if (pauVar11 == (undefined1 (*) [32])0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x400);
  }
  lVar16 = *(long *)(param_2 + 0x1d8);
  if (lVar16 == 0) {
    *(undefined8 *)*pauVar11 = _DAT_00205f80;
    *(undefined8 *)(*pauVar11 + 8) = uVar4;
    *(undefined8 *)(*pauVar11 + 0x10) = uVar5;
    *(undefined8 *)(*pauVar11 + 0x18) = uVar6;
    *(undefined8 *)pauVar11[1] = uVar7;
    *(undefined8 *)(pauVar11[1] + 8) = uVar8;
    *(undefined8 *)(pauVar11[1] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[1] + 0x18) = uVar10;
    uVar10 = _UNK_00205ff8;
    uVar9 = _UNK_00205ff0;
    uVar8 = _UNK_00205fe8;
    uVar7 = _UNK_00205fe0;
    uVar6 = _UNK_00205fd8;
    uVar5 = _UNK_00205fd0;
    uVar4 = _UNK_00205fc8;
    *(undefined8 *)pauVar11[2] = _DAT_00205fc0;
    *(undefined8 *)(pauVar11[2] + 8) = uVar4;
    *(undefined8 *)(pauVar11[2] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[2] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[3] = uVar7;
    *(undefined8 *)(pauVar11[3] + 8) = uVar8;
    *(undefined8 *)(pauVar11[3] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[3] + 0x18) = uVar10;
    uVar10 = _UNK_00206038;
    uVar9 = _UNK_00206030;
    uVar8 = _UNK_00206028;
    uVar7 = _UNK_00206020;
    uVar6 = _UNK_00206018;
    uVar5 = _UNK_00206010;
    uVar4 = _UNK_00206008;
    *(undefined8 *)pauVar11[4] = _DAT_00206000;
    *(undefined8 *)(pauVar11[4] + 8) = uVar4;
    *(undefined8 *)(pauVar11[4] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[4] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[5] = uVar7;
    *(undefined8 *)(pauVar11[5] + 8) = uVar8;
    *(undefined8 *)(pauVar11[5] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[5] + 0x18) = uVar10;
    uVar10 = _UNK_00206078;
    uVar9 = _UNK_00206070;
    uVar8 = _UNK_00206068;
    uVar7 = _UNK_00206060;
    uVar6 = _UNK_00206058;
    uVar5 = _UNK_00206050;
    uVar4 = _UNK_00206048;
    *(undefined8 *)pauVar11[6] = _DAT_00206040;
    *(undefined8 *)(pauVar11[6] + 8) = uVar4;
    *(undefined8 *)(pauVar11[6] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[6] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[7] = uVar7;
    *(undefined8 *)(pauVar11[7] + 8) = uVar8;
    *(undefined8 *)(pauVar11[7] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[7] + 0x18) = uVar10;
    uVar10 = _UNK_002060b8;
    uVar9 = _UNK_002060b0;
    uVar8 = _UNK_002060a8;
    uVar7 = _UNK_002060a0;
    uVar6 = _UNK_00206098;
    uVar5 = _UNK_00206090;
    uVar4 = _UNK_00206088;
    *(undefined8 *)pauVar11[8] = _DAT_00206080;
    *(undefined8 *)(pauVar11[8] + 8) = uVar4;
    *(undefined8 *)(pauVar11[8] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[8] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[9] = uVar7;
    *(undefined8 *)(pauVar11[9] + 8) = uVar8;
    *(undefined8 *)(pauVar11[9] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[9] + 0x18) = uVar10;
    uVar10 = _UNK_002060f8;
    uVar9 = _UNK_002060f0;
    uVar8 = _UNK_002060e8;
    uVar7 = _UNK_002060e0;
    uVar6 = _UNK_002060d8;
    uVar5 = _UNK_002060d0;
    uVar4 = _UNK_002060c8;
    *(undefined8 *)pauVar11[10] = _DAT_002060c0;
    *(undefined8 *)(pauVar11[10] + 8) = uVar4;
    *(undefined8 *)(pauVar11[10] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[10] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0xb] = uVar7;
    *(undefined8 *)(pauVar11[0xb] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0xb] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0xb] + 0x18) = uVar10;
    uVar10 = _UNK_00206138;
    uVar9 = _UNK_00206130;
    uVar8 = _UNK_00206128;
    uVar7 = _UNK_00206120;
    uVar6 = _UNK_00206118;
    uVar5 = _UNK_00206110;
    uVar4 = _UNK_00206108;
    *(undefined8 *)pauVar11[0xc] = _DAT_00206100;
    *(undefined8 *)(pauVar11[0xc] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0xc] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0xc] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0xd] = uVar7;
    *(undefined8 *)(pauVar11[0xd] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0xd] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0xd] + 0x18) = uVar10;
    uVar10 = _UNK_00206178;
    uVar9 = _UNK_00206170;
    uVar8 = _UNK_00206168;
    uVar7 = _UNK_00206160;
    uVar6 = _UNK_00206158;
    uVar5 = _UNK_00206150;
    uVar4 = _UNK_00206148;
    *(undefined8 *)pauVar11[0xe] = _DAT_00206140;
    *(undefined8 *)(pauVar11[0xe] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0xe] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0xe] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0xf] = uVar7;
    *(undefined8 *)(pauVar11[0xf] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0xf] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0xf] + 0x18) = uVar10;
    uVar10 = _UNK_002061b8;
    uVar9 = _UNK_002061b0;
    uVar8 = _UNK_002061a8;
    uVar7 = _UNK_002061a0;
    uVar6 = _UNK_00206198;
    uVar5 = _UNK_00206190;
    uVar4 = _UNK_00206188;
    *(undefined8 *)pauVar11[0x10] = _DAT_00206180;
    *(undefined8 *)(pauVar11[0x10] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x10] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x10] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x11] = uVar7;
    *(undefined8 *)(pauVar11[0x11] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x11] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x11] + 0x18) = uVar10;
    uVar10 = _UNK_002061f8;
    uVar9 = _UNK_002061f0;
    uVar8 = _UNK_002061e8;
    uVar7 = _UNK_002061e0;
    uVar6 = _UNK_002061d8;
    uVar5 = _UNK_002061d0;
    uVar4 = _UNK_002061c8;
    *(undefined8 *)pauVar11[0x12] = _DAT_002061c0;
    *(undefined8 *)(pauVar11[0x12] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x12] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x12] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x13] = uVar7;
    *(undefined8 *)(pauVar11[0x13] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x13] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x13] + 0x18) = uVar10;
    uVar10 = _UNK_00206238;
    uVar9 = _UNK_00206230;
    uVar8 = _UNK_00206228;
    uVar7 = _UNK_00206220;
    uVar6 = _UNK_00206218;
    uVar5 = _UNK_00206210;
    uVar4 = _UNK_00206208;
    *(undefined8 *)pauVar11[0x14] = _DAT_00206200;
    *(undefined8 *)(pauVar11[0x14] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x14] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x14] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x15] = uVar7;
    *(undefined8 *)(pauVar11[0x15] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x15] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x15] + 0x18) = uVar10;
    uVar10 = _UNK_00206278;
    uVar9 = _UNK_00206270;
    uVar8 = _UNK_00206268;
    uVar7 = _UNK_00206260;
    uVar6 = _UNK_00206258;
    uVar5 = _UNK_00206250;
    uVar4 = _UNK_00206248;
    *(undefined8 *)pauVar11[0x16] = _DAT_00206240;
    *(undefined8 *)(pauVar11[0x16] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x16] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x16] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x17] = uVar7;
    *(undefined8 *)(pauVar11[0x17] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x17] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x17] + 0x18) = uVar10;
    uVar10 = _UNK_002062b8;
    uVar9 = _UNK_002062b0;
    uVar8 = _UNK_002062a8;
    uVar7 = _UNK_002062a0;
    uVar6 = _UNK_00206298;
    uVar5 = _UNK_00206290;
    uVar4 = _UNK_00206288;
    *(undefined8 *)pauVar11[0x18] = _DAT_00206280;
    *(undefined8 *)(pauVar11[0x18] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x18] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x18] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x19] = uVar7;
    *(undefined8 *)(pauVar11[0x19] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x19] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x19] + 0x18) = uVar10;
    uVar10 = _UNK_002062f8;
    uVar9 = _UNK_002062f0;
    uVar8 = _UNK_002062e8;
    uVar7 = _UNK_002062e0;
    uVar6 = _UNK_002062d8;
    uVar5 = _UNK_002062d0;
    uVar4 = _UNK_002062c8;
    *(undefined8 *)pauVar11[0x1a] = _DAT_002062c0;
    *(undefined8 *)(pauVar11[0x1a] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x1a] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x1a] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x1b] = uVar7;
    *(undefined8 *)(pauVar11[0x1b] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x1b] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x1b] + 0x18) = uVar10;
    uVar10 = _UNK_00206338;
    uVar9 = _UNK_00206330;
    uVar8 = _UNK_00206328;
    uVar7 = _UNK_00206320;
    uVar6 = _UNK_00206318;
    uVar5 = _UNK_00206310;
    uVar4 = _UNK_00206308;
    *(undefined8 *)pauVar11[0x1c] = _DAT_00206300;
    *(undefined8 *)(pauVar11[0x1c] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x1c] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x1c] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x1d] = uVar7;
    *(undefined8 *)(pauVar11[0x1d] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x1d] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x1d] + 0x18) = uVar10;
    uVar10 = _UNK_00206378;
    uVar9 = _UNK_00206370;
    uVar8 = _UNK_00206368;
    uVar7 = _UNK_00206360;
    uVar6 = _UNK_00206358;
    uVar5 = _UNK_00206350;
    uVar4 = _UNK_00206348;
    *(undefined8 *)pauVar11[0x1e] = _DAT_00206340;
    *(undefined8 *)(pauVar11[0x1e] + 8) = uVar4;
    *(undefined8 *)(pauVar11[0x1e] + 0x10) = uVar5;
    *(undefined8 *)(pauVar11[0x1e] + 0x18) = uVar6;
    *(undefined8 *)pauVar11[0x1f] = uVar7;
    *(undefined8 *)(pauVar11[0x1f] + 8) = uVar8;
    *(undefined8 *)(pauVar11[0x1f] + 0x10) = uVar9;
    *(undefined8 *)(pauVar11[0x1f] + 0x18) = uVar10;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xa0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(0,0,&PTR_s_src_main_rs_00210588);
    }
    lVar2 = *(long *)(param_2 + 0x98);
    uVar3 = *(ulong *)(lVar2 + 0x348);
    if (lVar16 == 1) {
      puVar13 = (ulong *)(*pauVar11 + 0x18);
      uVar15 = 0;
      lVar16 = 0;
      do {
        if (uVar3 == uVar15) {
LAB_007383ea:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar3,uVar3,&PTR_s_src_complex_rs_00210658);
        }
        uVar14 = *(ulong *)(lVar2 + 0x360);
        if (uVar14 <= uVar15) {
          uVar12 = uVar15;
LAB_007383fa:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar12,uVar14,&PTR_s_src_complex_rs_00210670);
        }
        puVar13[-3] = *(long *)(*(long *)(lVar2 + 0x340) + 0x10 + lVar16) +
                      *(long *)(*(long *)(lVar2 + 0x358) + 0x10 + lVar16);
        puVar13[-2] = uVar15;
        if (uVar3 - 1 == uVar15) goto LAB_007383ea;
        uVar12 = uVar15 + 1;
        uVar14 = *(ulong *)(lVar2 + 0x360);
        if (uVar14 <= uVar12) goto LAB_007383fa;
        uVar15 = uVar15 + 2;
        puVar13[-1] = *(long *)(*(long *)(lVar2 + 0x340) + 0x28 + lVar16) +
                      *(long *)(*(long *)(lVar2 + 0x358) + 0x28 + lVar16);
        *puVar13 = uVar12;
        lVar16 = lVar16 + 0x30;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0x40);
    }
    else {
      uVar12 = 0;
      do {
        if (uVar12 == uVar3) goto LAB_007383ea;
        uVar14 = *(ulong *)(lVar2 + 0x360);
        if (uVar14 <= uVar12) goto LAB_007383fa;
        uVar15 = uVar12 + 1;
        lVar17 = *(long *)(*(long *)(lVar2 + 0x340) + 0x10 + uVar12 * 0x18) +
                 *(long *)(*(long *)(lVar2 + 0x358) + 0x10 + uVar12 * 0x18);
        lVar18 = 1;
        puVar13 = (ulong *)(lVar2 + 0xb00);
        do {
          if (lVar1 == lVar18) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar1,lVar1,&PTR_s_src_main_rs_00210588);
          }
          if (puVar13[-3] <= uVar12) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar12,puVar13[-3],&PTR_s_src_complex_rs_00210658);
          }
          uVar14 = *puVar13;
          if (uVar14 <= uVar12) goto LAB_007383fa;
          lVar18 = lVar18 + 1;
          lVar17 = lVar17 + *(long *)(puVar13[-4] + 0x10 + uVar12 * 0x18) +
                   *(long *)(puVar13[-1] + 0x10 + uVar12 * 0x18);
          puVar13 = puVar13 + 0xf4;
        } while (lVar16 != lVar18);
        *(long *)(*pauVar11 + uVar12 * 0x10) = lVar17;
        *(ulong *)(*pauVar11 + uVar12 * 0x10 + 8) = uVar12;
        uVar12 = uVar15;
      } while (uVar15 != 0x40);
    }
  }
  core[62e902411887be45]::slice::sort::unstable::ipnsort::
  <(usize,usize),<[(usize,usize)]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::shard_order::_closure_1_>::_closure_0_>
            (pauVar11);
  auVar24 = ZEXT3264(_DAT_00203b20);
  auVar19 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(*pauVar11 + 8));
  auVar20 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[2] + 8));
  auVar21 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[4] + 8));
  auVar22 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[6] + 8));
  *pauVar11 = auVar19._0_32_;
  pauVar11[1] = auVar20._0_32_;
  pauVar11[2] = auVar21._0_32_;
  pauVar11[3] = auVar22._0_32_;
  auVar19 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[8] + 8));
  auVar20 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[10] + 8));
  auVar21 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0xc] + 8));
  auVar22 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0xe] + 8));
  pauVar11[4] = auVar19._0_32_;
  pauVar11[5] = auVar20._0_32_;
  pauVar11[6] = auVar21._0_32_;
  pauVar11[7] = auVar22._0_32_;
  auVar19 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0x10] + 8));
  auVar20 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0x12] + 8));
  auVar21 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0x14] + 8));
  auVar22 = vpermq_avx512f(auVar24,*(undefined1 (*) [64])(pauVar11[0x16] + 8));
  pauVar11[8] = auVar19._0_32_;
  pauVar11[9] = auVar20._0_32_;
  pauVar11[10] = auVar21._0_32_;
  pauVar11[0xb] = auVar22._0_32_;
  auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(pauVar11[0x18] + 8));
  auVar20._0_8_ = auVar19._0_8_;
  auVar20._8_8_ = 0;
  auVar20._16_8_ = auVar19._16_8_;
  auVar20._24_8_ = 0;
  auVar20._32_8_ = auVar19._32_8_;
  auVar20._40_8_ = 0;
  auVar20._48_8_ = auVar19._48_8_;
  auVar20._56_8_ = 0;
  auVar19 = vpermq_avx512f(auVar24,auVar20);
  pauVar11[0xc] = auVar19._0_32_;
  auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(pauVar11[0x1a] + 8));
  auVar21._0_8_ = auVar19._0_8_;
  auVar21._8_8_ = 0;
  auVar21._16_8_ = auVar19._16_8_;
  auVar21._24_8_ = 0;
  auVar21._32_8_ = auVar19._32_8_;
  auVar21._40_8_ = 0;
  auVar21._48_8_ = auVar19._48_8_;
  auVar21._56_8_ = 0;
  auVar19 = vpermq_avx512f(auVar24,auVar21);
  pauVar11[0xd] = auVar19._0_32_;
  auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(pauVar11[0x1c] + 8));
  auVar22._0_8_ = auVar19._0_8_;
  auVar22._8_8_ = 0;
  auVar22._16_8_ = auVar19._16_8_;
  auVar22._24_8_ = 0;
  auVar22._32_8_ = auVar19._32_8_;
  auVar22._40_8_ = 0;
  auVar22._48_8_ = auVar19._48_8_;
  auVar22._56_8_ = 0;
  auVar19 = vpermq_avx512f(auVar24,auVar22);
  pauVar11[0xe] = auVar19._0_32_;
  auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(pauVar11[0x1e] + 8));
  auVar23._0_8_ = auVar19._0_8_;
  auVar23._8_8_ = 0;
  auVar23._16_8_ = auVar19._16_8_;
  auVar23._24_8_ = 0;
  auVar23._32_8_ = auVar19._32_8_;
  auVar23._40_8_ = 0;
  auVar23._48_8_ = auVar19._48_8_;
  auVar23._56_8_ = 0;
  auVar19 = vpermq_avx512f(auVar24,auVar23);
  pauVar11[0xf] = auVar19._0_32_;
  *param_1 = 0x80;
  param_1[1] = pauVar11;
  param_1[2] = 0x40;
  return;
}


// ==== pipeline::complex::person_shard @ 00738440 (6622 bytes)

/* pipeline[509596c7b52975b2]::complex::person_shard */

void __rustcall
pipeline[509596c7b52975b2]::complex::person_shard
          (long param_1,ulong param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint6 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined1 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  long lVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong local_88;
  long local_80;
  long *local_78;
  ulong local_70;
  ulong local_68;
  ulong *local_60;
  long local_58;
  ulong local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  if (*(ulong *)(param_1 + 0xa0) <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,*(ulong *)(param_1 + 0xa0),&PTR_s_src_main_rs_00210588);
  }
  lVar22 = param_2 * 0x7a0 + *(long *)(param_1 + 0x98);
  param_4[2] = 0;
  param_4[5] = 0;
  uVar24 = *(ulong *)(param_1 + 0x1d8);
  if (uVar24 == 0) {
    return;
  }
  puVar1 = (ulong *)(param_4 + 9);
  uVar34 = 0;
  lVar33 = 0;
  do {
    uVar37 = *(ulong *)(param_1 + 0xa0);
    if (uVar37 <= uVar34) goto LAB_00739e25;
    uVar26 = *(ulong *)(*(long *)(param_1 + 0x98) + 0x348 + lVar33);
    if (uVar26 <= param_3) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_3,uVar26,&PTR_s_src_complex_rs_00589318);
    }
    lVar36 = *(long *)(*(long *)(param_1 + 0x98) + 0x340 + lVar33);
    uVar7 = *(undefined8 *)(lVar36 + 8 + param_3 * 0x18);
    uVar26 = *(ulong *)(lVar36 + 0x10 + param_3 * 0x18);
    lVar36 = param_4[2];
    if ((ulong)(*param_4 - lVar36) < uVar26) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_4,lVar36,uVar26,8);
      lVar36 = param_4[2];
LAB_007385a5:
      (*(code *)PTR_memcpy_00841de0)(lVar36 * 0x10 + param_4[1],uVar7,uVar26 << 4);
      uVar37 = *(ulong *)(param_1 + 0xa0);
    }
    else if (uVar26 != 0) goto LAB_007385a5;
    param_4[2] = lVar36 + uVar26;
    if (uVar37 <= uVar34) {
LAB_00739e25:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar34,uVar37,&PTR_s_src_main_rs_00210588);
    }
    uVar37 = *(ulong *)(*(long *)(param_1 + 0x98) + 0x360 + lVar33);
    if (uVar37 <= param_3) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_3,uVar37,&PTR_s_src_complex_rs_00589330);
    }
    lVar36 = *(long *)(*(long *)(param_1 + 0x98) + 0x358 + lVar33);
    uVar7 = *(undefined8 *)(lVar36 + 8 + param_3 * 0x18);
    uVar37 = *(ulong *)(lVar36 + 0x10 + param_3 * 0x18);
    lVar36 = param_4[5];
    if ((ulong)(param_4[3] - lVar36) < uVar37) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_4 + 3,lVar36,uVar37,8);
      lVar36 = param_4[5];
LAB_00738500:
      (*(code *)PTR_memcpy_00841de0)(lVar36 * 0x18 + param_4[4],uVar7,uVar37 * 0x18);
    }
    else if (uVar37 != 0) goto LAB_00738500;
    uVar34 = uVar34 + 1;
    uVar37 = lVar36 + uVar37;
    param_4[5] = uVar37;
    lVar33 = lVar33 + 0x7a0;
  } while (uVar24 != uVar34);
  uVar24 = param_4[2];
  if (uVar24 == 0) {
    return;
  }
  if (uVar24 != 1) {
    if (uVar24 < 0x15) {
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                ();
    }
    else {
      core[62e902411887be45]::slice::sort::unstable::ipnsort::
      <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                ();
    }
  }
  puVar16 = (ulong *)param_4[4];
  lVar33 = uVar37 * 0x18;
  puVar27 = puVar16;
LAB_007386c0:
  if (lVar33 != 0) goto code_r0x007386c5;
  param_4[8] = 0;
  if ((ulong)param_4[6] < uVar37) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_4 + 6,0,uVar37,0x10,0x30);
    uVar24 = param_4[8];
  }
  else {
    uVar24 = 0;
    if (uVar37 == 0) goto LAB_007388b6;
  }
  lVar33 = uVar24 * 0x30 + param_4[7];
  lVar36 = 0;
  do {
    uVar34 = *(ulong *)((long)puVar16 + lVar36 + 8);
    uVar26 = *(ulong *)((long)puVar16 + lVar36 + 0x10);
    if ((uVar26 & 0x2000000000000000) == 0) {
      uVar20 = (uint)(uVar26 / 0x19a100);
      uVar19 = (uVar26 / 0x19a100 & 0xffffffff) / 0x510;
      if (0x19a0ff < uVar20) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar19,0x510,&PTR_s_src_main_rs_00211300);
      }
      uVar26 = uVar26 % 0x19a100;
      uVar12 = CONCAT24((&PAIR36)[uVar26 / 0x510],
                        CONCAT22((&PAIR36)[uVar20 + (int)uVar19 * -0x510],(&PAIR36)[uVar19]));
      uVar5 = (&PAIR36)[(uint)((int)uVar26 + (int)(uVar26 / 0x510) * -0x510)];
      uVar26 = (ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff) << 8 |
               ((ulong)uVar12 & 0xff0000000000) >> 0x18 | ((ulong)uVar12 & 0xff00000000) >> 8 |
               ((ulong)uVar12 & 0xff000000) << 8 | ((ulong)uVar12 & 0xff0000) << 0x18 |
               ((ulong)uVar12 & 0xff00) << 0x28 | (ulong)uVar12 << 0x38;
      uVar19 = (ulong)((uint)LZCOUNT(uVar26 ^ 0x3030303030303030) & 0xfffffff8);
      if (CONCAT26(uVar5,uVar12) == 0x3030303030303030) {
        uVar19 = 0x38;
      }
      uVar26 = ~(uVar26 << (uVar19 & 0x3f));
    }
    puVar38 = (undefined8 *)((long)puVar16 + lVar36);
    *(undefined8 *)(lVar33 + 8 + lVar36 * 2) = *(undefined8 *)((long)puVar16 + lVar36);
    *(ulong *)(lVar33 + lVar36 * 2) = uVar34 >> 0x20;
    *(ulong *)(lVar33 + 0x10 + lVar36 * 2) = uVar26;
    uVar7 = puVar38[1];
    puVar3 = (undefined8 *)(lVar33 + 0x18 + lVar36 * 2);
    *puVar3 = *puVar38;
    puVar3[1] = uVar7;
    *(undefined8 *)(lVar33 + 0x28 + lVar36 * 2) = puVar38[2];
    uVar24 = uVar24 + 1;
    lVar36 = lVar36 + 0x18;
    uVar37 = uVar37 - 1;
  } while (uVar37 != 0);
  param_4[8] = uVar24;
  if (1 < uVar24) {
    if (uVar24 < 0x15) {
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                ();
    }
    else {
      core[62e902411887be45]::slice::sort::unstable::ipnsort::
      <(u128,u64,[u64_3usize]),<[(u128,u64,[u64_3usize])]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_3_>::_closure_0_>
                ();
    }
  }
LAB_007388b6:
  puVar16 = (ulong *)param_4[4];
  uVar37 = param_4[5];
  if (uVar37 < uVar24) {
    uVar24 = uVar37;
  }
  if (uVar24 != 0) {
    lVar33 = param_4[7];
    if (uVar24 < 8) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      lVar36 = 0;
      do {
        puVar38 = (undefined8 *)(lVar33 + 0x18 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x10) = *(undefined8 *)(lVar33 + 0x28 + lVar36 * 2)
        ;
        *(undefined8 *)((long)puVar16 + lVar36) = uVar7;
        ((undefined8 *)((long)puVar16 + lVar36))[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0x48 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x28) = *(undefined8 *)(lVar33 + 0x58 + lVar36 * 2)
        ;
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x18);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0x78 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x40) = *(undefined8 *)(lVar33 + 0x88 + lVar36 * 2)
        ;
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x30);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0xa8 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x58) = *(undefined8 *)(lVar33 + 0xb8 + lVar36 * 2)
        ;
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x48);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0xd8 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x70) = *(undefined8 *)(lVar33 + 0xe8 + lVar36 * 2)
        ;
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x60);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0x108 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0x88) =
             *(undefined8 *)(lVar33 + 0x118 + lVar36 * 2);
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x78);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        puVar38 = (undefined8 *)(lVar33 + 0x138 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0xa0) =
             *(undefined8 *)(lVar33 + 0x148 + lVar36 * 2);
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0x90);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        uVar34 = uVar34 + 8;
        puVar38 = (undefined8 *)(lVar33 + 0x168 + lVar36 * 2);
        uVar7 = *puVar38;
        uVar13 = puVar38[1];
        *(undefined8 *)((long)puVar16 + lVar36 + 0xb8) =
             *(undefined8 *)(lVar33 + 0x178 + lVar36 * 2);
        puVar38 = (undefined8 *)((long)puVar16 + lVar36 + 0xa8);
        *puVar38 = uVar7;
        puVar38[1] = uVar13;
        lVar36 = lVar36 + 0xc0;
      } while ((uVar24 & 0xfffffffffffffff8) != uVar34);
      if ((uVar24 & 7) == 0) goto code_r0x00738a40;
    }
    lVar33 = lVar33 + uVar34 * 0x30;
    lVar36 = 0;
    do {
      puVar38 = (undefined8 *)(lVar33 + 0x18 + lVar36 * 2);
      uVar7 = *puVar38;
      uVar13 = puVar38[1];
      *(undefined8 *)((long)puVar16 + lVar36 + uVar34 * 0x18 + 0x10) =
           *(undefined8 *)(lVar33 + 0x28 + lVar36 * 2);
      puVar38 = (undefined8 *)((long)puVar16 + lVar36 + uVar34 * 0x18);
      *puVar38 = uVar7;
      puVar38[1] = uVar13;
      lVar36 = lVar36 + 0x18;
    } while ((ulong)(((uint)uVar24 & 7) << 3) * 3 != lVar36);
  }
  goto code_r0x00738a40;
code_r0x007386c5:
  puVar2 = puVar27 + 2;
  puVar27 = puVar27 + 3;
  lVar33 = lVar33 + -0x18;
  if ((*puVar2 & 0x2000040000000000) == 0x40000000000) goto code_r0x007386d9;
  goto LAB_007386c0;
code_r0x007386d9:
  local_78 = &local_58;
  local_58 = param_1;
  if (1 < uVar37) {
    if (uVar37 < 0x15) {
      core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (puVar16,uVar37,&local_58);
    }
    else {
      core[62e902411887be45]::slice::sort::unstable::ipnsort::
      <[u64_3usize],<[[u64_3usize]]>::sort_unstable_by<pipeline[509596c7b52975b2]::complex::person_shard::_closure_4_>::_closure_0_>
                (puVar16,uVar37,&local_78);
    }
  }
code_r0x00738a40:
  if (1 < uVar37) {
    uVar24 = *puVar16;
    uVar20 = (int)uVar37 - 1U & 3;
    uVar34 = uVar37;
    if (uVar20 != 0) {
      uVar26 = 0;
      uVar34 = uVar24;
      do {
        uVar24 = puVar16[3];
        if ((uVar34 == uVar24) && (((puVar16[5] ^ puVar16[2]) & 0x2000000000000000) != 0))
        goto LAB_00739cb7;
        puVar16 = puVar16 + 3;
        uVar26 = uVar26 + 1;
        uVar34 = uVar24;
      } while (uVar20 != uVar26);
      uVar34 = uVar37 - uVar26;
    }
    if (4 < uVar37) {
      uVar34 = uVar34 + 1;
      puVar16 = puVar16 + 0xe;
      do {
        if (((((uVar24 == puVar16[-0xb]) &&
              (((puVar16[-9] ^ puVar16[-0xc]) & 0x2000000000000000) != 0)) ||
             ((puVar16[-0xb] == puVar16[-8] &&
              (((puVar16[-6] ^ puVar16[-9]) & 0x2000000000000000) != 0)))) ||
            ((puVar16[-8] == puVar16[-5] &&
             (((puVar16[-3] ^ puVar16[-6]) & 0x2000000000000000) != 0)))) ||
           ((uVar24 = puVar16[-2], puVar16[-5] == uVar24 &&
            (((*puVar16 ^ puVar16[-3]) & 0x2000000000000000) != 0)))) {
LAB_00739cb7:
                    /* WARNING: Subroutine does not return */
          sys::fallback("click order keys of one person",0x1e);
        }
        uVar34 = uVar34 - 4;
        puVar16 = puVar16 + 0xc;
      } while (2 < uVar34);
    }
  }
  if (param_4[2] != 0) {
    local_80 = param_4[1];
    local_88 = 0;
    uVar24 = param_4[2];
    uVar34 = 0;
    do {
      lVar33 = uVar34 * 0x10;
      uVar37 = *(ulong *)(local_80 + 8 + lVar33);
      local_70 = uVar34 + 1;
      if (uVar34 + 1 < uVar24) {
        local_70 = uVar24;
      }
      uVar24 = local_70 - 1;
      puVar16 = (ulong *)(local_80 + lVar33 + 0x18);
      uVar26 = uVar34;
      do {
        uVar19 = uVar26;
        if (uVar24 == uVar19) goto LAB_00738b73;
        uVar18 = *puVar16;
        puVar16 = puVar16 + 2;
        uVar26 = uVar19 + 1;
      } while (uVar18 == uVar37);
      local_70 = uVar19 + 1;
      uVar24 = uVar19;
LAB_00738b73:
      uVar26 = param_4[5];
      if (local_88 < uVar26) {
        puVar16 = (ulong *)(local_88 * 0x18 + param_4[4]);
        do {
          if (uVar37 <= *puVar16) goto LAB_00738bd0;
          local_88 = local_88 + 1;
          puVar16 = puVar16 + 3;
        } while (uVar26 != local_88);
        *(undefined8 *)(lVar22 + 0x378) = 0;
        local_88 = uVar26;
      }
      else {
LAB_00738bd0:
        *(undefined8 *)(lVar22 + 0x378) = 0;
        if (local_88 < uVar26) {
          puVar38 = (undefined8 *)(param_4[4] + local_88 * 0x18 + 8);
          lVar36 = 0;
          do {
            if (puVar38[-1] != uVar37) {
              uVar26 = local_88 + lVar36;
              break;
            }
            uVar7 = *puVar38;
            if (lVar36 == *(long *)(lVar22 + 0x368)) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(lVar22 + 0x368);
            }
            *(undefined8 *)(*(long *)(lVar22 + 0x370) + lVar36 * 8) = uVar7;
            lVar36 = lVar36 + 1;
            *(long *)(lVar22 + 0x378) = lVar36;
            puVar38 = puVar38 + 3;
          } while (uVar26 - local_88 != lVar36);
          local_88 = uVar26;
        }
      }
      param_4[0xb] = 0;
      if (uVar37 >> 0x3e == 0) {
        uVar20 = (uint)uVar37 & 0xf;
        if (uVar20 == 0xf) {
          uVar5 = *(ushort *)(*(long *)(param_1 + 0x2b0) + (uVar37 >> 4 & 0xffffffff) * 2);
          uVar20 = uVar5 & 0x3fff;
          if ((uVar5 & 0x3fff) != 0) goto LAB_00738e17;
          plVar35 = (long *)0xffffffffffffffff;
          uVar26 = 0;
          uVar37 = *puVar1;
        }
        else {
          uVar20 = 1 << uVar20;
LAB_00738e17:
          uVar19 = 0xffffffffffffffff;
          uVar26 = 0;
          do {
            uVar32 = 0;
            for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar32 = uVar32 + 1;
            }
            uVar18 = ((ulong)uVar32 | (uVar37 >> 4 & 0xffffffff) << 9) * 0x3779b97f4b ^
                     *(ulong *)(param_1 + 0x218);
            uVar18 = ((uint)(uVar18 >> 0x11) & 0x7fffff ^ uVar18) * -0x17014799a7000000 >> 0x18;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar18;
            uVar25 = uVar18 % 0x19a100;
            uVar12 = CONCAT24((&PAIR36)[uVar25 / 0x510],
                              CONCAT22((&PAIR36)[(uint)(SUB164(auVar11 * ZEXT816(0x9fd1cd5aa3d),8) +
                                                       (int)((uVar18 / 0x19a100) / 0x510) * -0x510)]
                                       ,(&PAIR36)[(uVar18 / 0x19a100) / 0x510]));
            uVar5 = (&PAIR36)[(uint)((int)uVar25 + (int)(uVar25 / 0x510) * -0x510)];
            uVar25 = (ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff) << 8 |
                     ((ulong)uVar12 & 0xff0000000000) >> 0x18 | ((ulong)uVar12 & 0xff00000000) >> 8
                     | ((ulong)uVar12 & 0xff000000) << 8 | ((ulong)uVar12 & 0xff0000) << 0x18 |
                     ((ulong)uVar12 & 0xff00) << 0x28 | (ulong)uVar12 << 0x38;
            uVar18 = (ulong)LZCOUNT(uVar25 ^ 0x3030303030303030) >> 3;
            if (CONCAT26(uVar5,uVar12) == 0x3030303030303030) {
              uVar18 = 7;
            }
            uVar25 = uVar25 << ((ulong)(uint)((int)uVar18 * 8) & 0x3f);
            if (uVar25 < uVar19) {
              uVar19 = uVar25;
              uVar26 = 8 - uVar18;
            }
            uVar20 = uVar20 - 1 & uVar20;
          } while (uVar20 != 0);
          plVar35 = (long *)(uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
                             (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
                             (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 |
                             (uVar19 & 0xff00) << 0x28 | uVar19 << 0x38);
          uVar37 = *puVar1;
        }
        if (uVar37 == 0) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(puVar1);
          uVar37 = *puVar1;
        }
        puVar29 = (undefined1 *)param_4[10];
        *puVar29 = 0x75;
        param_4[0xb] = 1;
        local_78 = plVar35;
        if (uVar37 - 1 < uVar26) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(puVar1,1,uVar26,1);
          puVar29 = (undefined1 *)param_4[10];
          lVar36 = param_4[0xb];
LAB_00738f65:
          (*(code *)PTR_memcpy_00841de0)(puVar29 + lVar36,&local_78,uVar26);
        }
        else {
          lVar36 = 1;
          if (uVar26 != 0) goto LAB_00738f65;
        }
        param_4[0xb] = lVar36 + uVar26;
      }
      else if ((uint)(uVar37 >> 0x3e) == 1) {
        uVar37 = uVar37 & 0xffffffff;
        if (*(ulong *)(param_1 + 0x140) <= uVar37) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar37,*(ulong *)(param_1 + 0x140),&PTR_s_src_links_rs_00211df8);
        }
        uVar20 = *(uint *)(*(long *)(param_1 + 0x138) + uVar37 * 8);
        uVar26 = (ulong)uVar20;
        uVar32 = *(uint *)(*(long *)(param_1 + 0x138) + 4 + uVar37 * 8);
        uVar37 = (ulong)(uVar20 + uVar32);
        if ((CARRY4(uVar20,uVar32)) || (*(ulong *)(param_1 + 0x158) < uVar37)) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::slice::index::slice_index_fail
                    (uVar26,uVar37,*(ulong *)(param_1 + 0x158),&PTR_s_src_links_rs_00211e10);
        }
        uVar37 = uVar37 - uVar26;
        lVar36 = *(long *)(param_1 + 0x150);
        if (*puVar1 < uVar37) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[2a0ada2ddd1fabff]::alloc::Global>(puVar1,0,uVar37,1);
          lVar39 = param_4[0xb];
LAB_00738d3d:
          lVar17 = lVar39;
          (*(code *)PTR_memcpy_00841de0)(param_4[10] + lVar17,uVar26 + lVar36,uVar37);
        }
        else {
          lVar17 = 0;
          lVar39 = 0;
          if (uVar32 != 0) goto LAB_00738d3d;
        }
        param_4[0xb] = lVar17 + uVar37;
      }
      else {
        <pipeline[509596c7b52975b2]::G>::id_str(param_1,uVar37 & 0x3ffffffffff,0x75,puVar1);
      }
      uVar37 = param_4[2];
      if ((local_70 < uVar34) || (uVar37 <= uVar24)) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::slice::index::slice_index_fail();
      }
      local_80 = param_4[1];
      local_38 = uVar37;
      if (local_70 - uVar34 != 0) {
        local_48 = param_4[10];
        lVar36 = *(long *)(lVar22 + 0x370);
        local_68 = *(ulong *)(lVar22 + 0x378);
        local_40 = param_4[0xb];
        puVar16 = (ulong *)(local_80 + lVar33);
        uVar24 = *(ulong *)(local_80 + lVar33);
        *(undefined8 *)(lVar22 + 0x3d8) = 0;
        iVar15 = *(int *)(lVar22 + 0x480) + -1;
        puVar27 = puVar16 + (local_70 - uVar34) * 2;
        uVar24 = uVar24 >> 0x21;
        iVar31 = 1;
        uVar26 = 0;
        lVar33 = 0;
        uVar20 = 0;
        iVar30 = 0;
        uVar34 = (*(long *)(lVar22 + 0x440) + uVar24) / 86400000;
        uVar37 = uVar24;
        local_60 = puVar27;
        do {
          uVar19 = *puVar16;
          uVar25 = uVar19 >> 0x21;
          uVar18 = uVar34;
          if (1800000 < uVar25 - uVar37) {
            lVar39 = *(long *)(lVar22 + 0x3d8);
            if (lVar39 == *(long *)(lVar22 + 0x3c8)) {
              local_50 = uVar26;
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar22 + 0x3c8);
              puVar27 = local_60;
              uVar26 = local_50;
            }
            lVar17 = *(long *)(lVar22 + 0x3d0);
            *(ulong *)(lVar17 + lVar39 * 0x18) = uVar24 + 0x240c8400;
            *(long *)(lVar17 + 8 + lVar39 * 0x18) = lVar33;
            iVar21 = (int)uVar34;
            *(int *)(lVar17 + 0x10 + lVar39 * 0x18) = iVar21;
            *(long *)(lVar22 + 0x3d8) = lVar39 + 1;
            uVar18 = (*(long *)(lVar22 + 0x440) + uVar25) / 86400000;
            if (iVar21 == (int)uVar18) {
              uVar18 = uVar34 & 0xffffffff;
            }
            else {
              uVar32 = 0xff;
              uVar23 = 0xff;
              if (uVar20 != 0) {
                uVar24 = 0;
                do {
                  uVar9 = 0;
                  for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar34 = *(ulong *)(lVar22 + 0x608 + (ulong)uVar9 * 8);
                  uVar37 = uVar24;
                  if (uVar24 < uVar34) {
                    uVar37 = uVar34;
                  }
                  uVar32 = uVar32 & 0xff;
                  if (uVar24 < uVar34) {
                    uVar32 = uVar9;
                  }
                  uVar23 = (undefined1)uVar32;
                  uVar20 = uVar20 - 1 & uVar20;
                  *(undefined8 *)(lVar22 + 0x608 + (ulong)uVar9 * 8) = 0;
                  uVar24 = uVar37;
                } while (uVar20 != 0);
              }
              if ((0x7fffffff < uVar26) || (iVar30 < 0)) goto LAB_00739cda;
              uVar24 = *(ulong *)(lVar22 + 0x4e0);
              if (*(ulong *)(lVar22 + 0x4e8) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x4d8,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x4e0);
              }
              *(int *)(*(long *)(lVar22 + 0x4d8) + uVar24 * 4) = iVar15;
              *(long *)(lVar22 + 0x4e0) = *(long *)(lVar22 + 0x4e0) + 1;
              iVar6 = *(int *)(lVar22 + 0x708);
              uVar24 = *(ulong *)(lVar22 + 0x510);
              if (*(ulong *)(lVar22 + 0x518) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x508,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x510);
              }
              *(int *)(*(long *)(lVar22 + 0x508) + uVar24 * 4) = iVar21 + iVar6;
              *(long *)(lVar22 + 0x510) = *(long *)(lVar22 + 0x510) + 1;
              uVar24 = *(ulong *)(lVar22 + 0x540);
              if (*(ulong *)(lVar22 + 0x548) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x538,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x540);
              }
              *(int *)(*(long *)(lVar22 + 0x538) + uVar24 * 4) = iVar31;
              *(long *)(lVar22 + 0x540) = *(long *)(lVar22 + 0x540) + 1;
              uVar24 = *(ulong *)(lVar22 + 0x570);
              if (*(ulong *)(lVar22 + 0x578) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x568,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x570);
              }
              *(int *)(*(long *)(lVar22 + 0x568) + uVar24 * 4) = iVar30;
              *(long *)(lVar22 + 0x570) = *(long *)(lVar22 + 0x570) + 1;
              uVar24 = *(ulong *)(lVar22 + 0x5a0);
              if (*(ulong *)(lVar22 + 0x5a8) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x598,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x5a0);
              }
              *(int *)(*(long *)(lVar22 + 0x598) + uVar24 * 4) = (int)uVar26;
              *(long *)(lVar22 + 0x5a0) = *(long *)(lVar22 + 0x5a0) + 1;
              uVar24 = *(ulong *)(lVar22 + 0x5d0);
              if (*(ulong *)(lVar22 + 0x5d8) <= uVar24) {
                <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(lVar22 + 0x5c8,uVar24 + 1);
                uVar24 = *(ulong *)(lVar22 + 0x5d0);
              }
              *(undefined1 *)(*(long *)(lVar22 + 0x5c8) + uVar24) = uVar23;
              *(long *)(lVar22 + 0x5d0) = *(long *)(lVar22 + 0x5d0) + 1;
              iVar30 = 0;
              iVar31 = 0;
              uVar20 = 0;
              uVar26 = 0;
              puVar27 = local_60;
            }
            iVar31 = iVar31 + 1;
            lVar33 = 0;
            uVar24 = uVar25;
          }
          uVar34 = uVar19 >> 9 & 0xffffff;
          if (uVar34 != 0) {
            lVar33 = lVar33 + uVar34;
            uVar26 = uVar26 + uVar34;
            uVar32 = (uint)(uVar19 >> 4) & 0x1f;
            plVar35 = (long *)(lVar22 + 0x608 + (ulong)uVar32 * 8);
            *plVar35 = *plVar35 + uVar34;
            uVar20 = uVar20 | 1 << uVar32;
          }
          puVar16 = puVar16 + 2;
          iVar30 = iVar30 + 1;
          uVar34 = uVar18;
          uVar37 = uVar25;
        } while (puVar16 != puVar27);
        lVar39 = *(long *)(lVar22 + 0x3d8);
        if (lVar39 == *(long *)(lVar22 + 0x3c8)) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar22 + 0x3c8);
        }
        uVar34 = local_68;
        lVar17 = *(long *)(lVar22 + 0x3d0);
        *(ulong *)(lVar17 + lVar39 * 0x18) = uVar24 + 0x240c8400;
        *(long *)(lVar17 + 8 + lVar39 * 0x18) = lVar33;
        *(int *)(lVar17 + 0x10 + lVar39 * 0x18) = (int)uVar18;
        *(long *)(lVar22 + 0x3d8) = lVar39 + 1;
        uVar32 = 0xff;
        uVar23 = 0xff;
        if (uVar20 != 0) {
          uVar24 = 0;
          do {
            uVar9 = 0;
            for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            uVar37 = *(ulong *)(lVar22 + 0x608 + (ulong)uVar9 * 8);
            uVar19 = uVar24;
            if (uVar24 < uVar37) {
              uVar19 = uVar37;
            }
            uVar32 = uVar32 & 0xff;
            if (uVar24 < uVar37) {
              uVar32 = uVar9;
            }
            uVar23 = (undefined1)uVar32;
            uVar20 = uVar20 - 1 & uVar20;
            *(undefined8 *)(lVar22 + 0x608 + (ulong)uVar9 * 8) = 0;
            uVar24 = uVar19;
          } while (uVar20 != 0);
        }
        if ((iVar30 < 0) || (0x7fffffff < uVar26)) {
LAB_00739cda:
                    /* WARNING: Subroutine does not return */
          sys::fallback("revenue_cents or events over i32",0x20);
        }
        uVar24 = *(ulong *)(lVar22 + 0x4e0);
        if (*(ulong *)(lVar22 + 0x4e8) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x4d8,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x4e0);
        }
        *(int *)(*(long *)(lVar22 + 0x4d8) + uVar24 * 4) = iVar15;
        *(long *)(lVar22 + 0x4e0) = *(long *)(lVar22 + 0x4e0) + 1;
        iVar15 = *(int *)(lVar22 + 0x708);
        uVar24 = *(ulong *)(lVar22 + 0x510);
        if (*(ulong *)(lVar22 + 0x518) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x508,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x510);
        }
        *(int *)(*(long *)(lVar22 + 0x508) + uVar24 * 4) = (int)uVar18 + iVar15;
        *(long *)(lVar22 + 0x510) = *(long *)(lVar22 + 0x510) + 1;
        uVar24 = *(ulong *)(lVar22 + 0x540);
        if (*(ulong *)(lVar22 + 0x548) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x538,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x540);
        }
        *(int *)(*(long *)(lVar22 + 0x538) + uVar24 * 4) = iVar31;
        *(long *)(lVar22 + 0x540) = *(long *)(lVar22 + 0x540) + 1;
        uVar24 = *(ulong *)(lVar22 + 0x570);
        if (*(ulong *)(lVar22 + 0x578) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x568,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x570);
        }
        *(int *)(*(long *)(lVar22 + 0x568) + uVar24 * 4) = iVar30;
        *(long *)(lVar22 + 0x570) = *(long *)(lVar22 + 0x570) + 1;
        uVar24 = *(ulong *)(lVar22 + 0x5a0);
        if (*(ulong *)(lVar22 + 0x5a8) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x598,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x5a0);
        }
        *(int *)(*(long *)(lVar22 + 0x598) + uVar24 * 4) = (int)uVar26;
        *(long *)(lVar22 + 0x5a0) = *(long *)(lVar22 + 0x5a0) + 1;
        uVar24 = *(ulong *)(lVar22 + 0x5d0);
        if (*(ulong *)(lVar22 + 0x5d8) <= uVar24) {
          <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(lVar22 + 0x5c8,uVar24 + 1);
          uVar24 = *(ulong *)(lVar22 + 0x5d0);
        }
        lVar39 = local_40;
        *(undefined1 *)(*(long *)(lVar22 + 0x5c8) + uVar24) = uVar23;
        *(long *)(lVar22 + 0x5d0) = *(long *)(lVar22 + 0x5d0) + 1;
        lVar33 = *(long *)(lVar22 + 0x4b0);
        *(long *)(lVar22 + 0x5f8) = *(long *)(lVar22 + 0x5f8) + *(long *)(lVar22 + 0x3d8);
        if (*(ulong *)(lVar22 + 0x4b8) < (ulong)(lVar33 + local_40)) {
          <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(lVar22 + 0x4a8);
          lVar33 = *(long *)(lVar22 + 0x4b0);
        }
        (*(code *)PTR_memcpy_00841de0)(lVar33 + *(long *)(lVar22 + 0x4a8),local_48,lVar39);
        uVar24 = lVar39 + *(long *)(lVar22 + 0x4b0);
        *(ulong *)(lVar22 + 0x4b0) = uVar24;
        if (uVar24 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
          sys::fallback("names over 4 GB",0xf);
        }
        uVar37 = *(ulong *)(lVar22 + 0x480);
        if (*(ulong *)(lVar22 + 0x488) <= uVar37) {
          <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(lVar22 + 0x478,uVar37 + 1);
          uVar37 = *(ulong *)(lVar22 + 0x480);
        }
        *(int *)(*(long *)(lVar22 + 0x478) + uVar37 * 4) = (int)uVar24;
        *(long *)(lVar22 + 0x480) = *(long *)(lVar22 + 0x480) + 1;
        lVar33 = *(long *)(lVar22 + 0x448);
        if (uVar34 == 0) {
          lVar36 = *(long *)(lVar22 + 0x3d8);
          if (lVar36 != 0) {
            lVar39 = *(long *)(lVar22 + 0x450);
            lVar17 = *(long *)(lVar22 + 0x3d0);
            lVar28 = 0;
            do {
              uVar24 = (ulong)*(uint *)(lVar17 + 0x10 + lVar28) + lVar33 * lVar39;
              if (*(ulong *)(lVar22 + 0x460) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic
                          ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_002125c0);
              }
              piVar4 = (int *)(*(long *)(lVar22 + 0x458) + uVar24 * 8);
              *piVar4 = *piVar4 + 1;
              lVar8 = *(long *)(lVar17 + 8 + lVar28);
              if (lVar8 != 0) {
                if (*(ulong *)(lVar22 + 0x470) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_002125d8);
                }
                plVar35 = (long *)(*(long *)(lVar22 + 0x468) + uVar24 * 0x10);
                *plVar35 = *plVar35 + 1;
                if (*(ulong *)(lVar22 + 0x470) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_002125f0);
                }
                plVar35 = (long *)(*(long *)(lVar22 + 0x468) + 8 + uVar24 * 0x10);
                *plVar35 = *plVar35 + lVar8;
              }
              lVar28 = lVar28 + 0x18;
            } while (lVar36 * 0x18 != lVar28);
          }
        }
        else {
          lVar39 = *(long *)(lVar22 + 0x3d8);
          uVar24 = lVar39 * uVar34;
          if (lVar39 != 0) {
            puVar27 = *(ulong **)(lVar22 + 0x3d0);
            puVar16 = puVar27 + lVar39 * 3;
            uVar26 = 0;
            uVar37 = 0;
            do {
              uVar19 = uVar37;
              if (uVar37 < uVar34) {
                do {
                  uVar19 = uVar37;
                  if (*puVar27 < (ulong)*(uint *)(lVar36 + 4 + uVar37 * 8)) break;
                  uVar37 = uVar37 + 1;
                  uVar19 = uVar34;
                } while (uVar34 != uVar37);
              }
              uVar37 = uVar19;
              if (uVar26 < uVar37) {
                uVar19 = uVar34;
                if (uVar34 < uVar26) {
                  uVar19 = uVar26;
                }
                do {
                  if (uVar19 == uVar26) {
                    /* WARNING: Subroutine does not return */
                    core[62e902411887be45]::panicking::panic_bounds_check
                              (uVar19,uVar34,&PTR_s_src_core_rs_00212608);
                  }
                  if (*puVar27 <= (ulong)*(uint *)(lVar36 + 4 + uVar26 * 8) + 0x240c8400) {
                    if (uVar34 <= uVar37 - 1) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar37 - 1,uVar34,&PTR_s_src_core_rs_00212620);
                    }
                    uVar19 = (ulong)(*(uint *)(lVar36 + -8 + uVar37 * 8) >> 4 & 0x3fff);
                    bVar14 = 0x1000 < uVar24;
                    goto LAB_0073981e;
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar37 != uVar26);
                uVar26 = uVar37;
              }
              uVar19 = *(ulong *)(lVar22 + 0x450);
              bVar14 = true;
LAB_0073981e:
              uVar18 = puVar27[2];
              uVar19 = uVar19 * lVar33 + (ulong)(uint)uVar18;
              if (*(ulong *)(lVar22 + 0x460) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic
                          ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_00212638);
              }
              piVar4 = (int *)(*(long *)(lVar22 + 0x458) + uVar19 * 8);
              *piVar4 = *piVar4 + 1;
              uVar25 = puVar27[1];
              if (uVar25 != 0) {
                if (*(ulong *)(lVar22 + 0x470) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_00212650);
                }
                plVar35 = (long *)(*(long *)(lVar22 + 0x468) + uVar19 * 0x10);
                *plVar35 = *plVar35 + 1;
                if (*(ulong *)(lVar22 + 0x470) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic
                            ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_00212668);
                }
                plVar35 = (long *)(*(long *)(lVar22 + 0x468) + 8 + uVar19 * 0x10);
                *plVar35 = *plVar35 + uVar25;
                uVar34 = local_68;
              }
              if (!bVar14) {
                iVar15 = *(int *)(lVar22 + 0x70c) + 1;
                *(int *)(lVar22 + 0x70c) = iVar15;
                if (uVar34 < uVar37) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::slice::index::slice_index_fail
                            (uVar26,uVar37,uVar34,&PTR_s_src_core_rs_002126b0);
                }
                if (uVar26 != uVar37) {
                  lVar39 = uVar26 * 8;
                  do {
                    uVar19 = (ulong)(*(uint *)(lVar36 + lVar39) >> 4 & 0x3fff);
                    if (*(ulong *)(lVar22 + 0x3f0) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                      core[62e902411887be45]::panicking::panic_bounds_check
                                (uVar19,*(ulong *)(lVar22 + 0x3f0),&PTR_s_src_core_rs_00212680);
                    }
                    if (*(int *)(*(long *)(lVar22 + 1000) + uVar19 * 4) != iVar15) {
                      *(int *)(*(long *)(lVar22 + 1000) + uVar19 * 4) = iVar15;
                      uVar19 = uVar19 * lVar33 + (ulong)(uint)uVar18;
                      if (*(ulong *)(lVar22 + 0x460) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                        core[62e902411887be45]::panicking::panic
                                  ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_00212698);
                      }
                      piVar4 = (int *)(*(long *)(lVar22 + 0x458) + 4 + uVar19 * 8);
                      *piVar4 = *piVar4 + 1;
                    }
                    lVar39 = lVar39 + 8;
                  } while (uVar37 * 8 != lVar39);
                }
              }
              puVar27 = puVar27 + 3;
            } while (puVar27 != puVar16);
            if (0x1000 < uVar24) {
              <pipeline[509596c7b52975b2]::core::Core>::assists_big(lVar22 + 0x3c8,lVar36,uVar34);
            }
          }
        }
      }
      uVar24 = local_38;
      uVar34 = local_70;
    } while (local_70 < local_38);
  }
  return;
}


// ==== pipeline::complex::clicks_a @ 00739ec0 (2942 bytes)

/* pipeline[509596c7b52975b2]::complex::clicks_a */

void __rustcall pipeline[509596c7b52975b2]::complex::clicks_a(long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_ZMM0 [64];
  undefined1 auVar27 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  ulong local_108;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  if (*(ulong *)(param_1 + 0xa0) <= param_2) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (param_2,*(ulong *)(param_1 + 0xa0),&PTR_s_src_main_rs_00210588);
  }
  lVar6 = *(long *)(param_1 + 0x98);
  lVar16 = param_2 * 0x7a0;
  lVar20 = *(long *)(lVar6 + 800 + lVar16);
  puVar21 = *(undefined8 **)(lVar6 + 0x328 + lVar16);
  lVar25 = *(long *)(lVar6 + 0x330 + lVar16);
  *(undefined8 *)(lVar6 + 800 + lVar16) = 0;
  *(undefined8 *)(lVar6 + 0x328 + lVar16) = 8;
  *(undefined8 *)(lVar6 + 0x330 + lVar16) = 0;
  local_58 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  auVar27 = ZEXT3264(local_58);
  local_78 = local_58;
  lVar6 = lVar6 + lVar16;
  local_98 = local_58;
  local_b8 = local_58;
  if (lVar25 != 0) {
    lVar16 = *(long *)(lVar6 + 0x340);
    uVar18 = *(ulong *)(lVar6 + 0x348);
    local_108 = 0xffffffffffffffff;
    puVar22 = puVar21;
    do {
      uVar24 = puVar22[1];
      if ((uVar24 & 0x4000000) == 0) {
        if (uVar24 != local_108) {
          local_58 = vpcmpeqd_avx2(auVar27._0_32_,auVar27._0_32_);
          auVar27 = ZEXT3264(local_58);
          local_78 = local_58;
          local_98 = local_58;
          local_b8 = local_58;
          local_108 = uVar24;
        }
        uVar19 = *puVar22;
        uVar15 = (uint)uVar19 & 0xf;
        uVar17 = (ulong)uVar15;
        uVar23 = *(ulong *)(local_b8 + uVar17 * 8);
        if (uVar23 == 0xffffffffffffffff) {
          uVar24 = (ulong)((uint)uVar24 & 0xfbffffff);
          uVar4 = *(ushort *)(*(long *)(param_1 + 0x2b0) + uVar24 * 2);
          if ((short)uVar4 < 0) {
            uVar23 = (uVar24 << 9 | uVar17) * 0x3779b97f4b ^ *(ulong *)(param_1 + 0x218);
            uVar23 = ((uint)(uVar23 >> 0x11) & 0x7fffff ^ uVar23) * -0x17014799a7000000 >> 0x18;
            uVar26 = uVar23 * -0x61c8864680b583eb >> 0x14;
            while( true ) {
              uVar26 = uVar26 & *(ulong *)(param_1 + 0xd8);
              lVar2 = *(long *)(*(long *)(param_1 + 200) + uVar26 * 0x10);
              if (lVar2 == uVar23 + 1) break;
              if (lVar2 == 0) {
                uVar23 = uVar24 << 4 | uVar17;
                goto LAB_0073a1d4;
              }
              uVar26 = uVar26 + 1;
            }
            uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 200) + 8 + uVar26 * 0x10);
            uVar24 = *(ulong *)(param_1 + 0x128);
            if (uVar24 <= uVar23) {
LAB_0073aa00:
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar23,uVar24,&PTR_s_src_links_rs_00211db0);
            }
            uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 0x120) + uVar23 * 4) | 0x4000000000000000;
          }
          else if (((uVar4 & 0x3fff) >> uVar15 & 1) == 0) {
            uVar23 = uVar24 << 4 | uVar17;
          }
          else {
            uVar23 = uVar24 << 4 | 0xf;
          }
LAB_0073a1d4:
          *(ulong *)(local_b8 + uVar17 * 8) = uVar23;
        }
      }
      else {
        uVar23 = (ulong)((uint)(uVar24 >> 0x16) & 0xf);
        if (*(ulong *)(param_1 + 0xa0) <= uVar23) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar23,*(ulong *)(param_1 + 0xa0),&PTR_s_src_main_rs_00210588);
        }
        uVar17 = (ulong)((uint)uVar24 & 0x3fffff);
        uVar24 = *(ulong *)(*(long *)(param_1 + 0x98) + 0x270 + uVar23 * 0x7a0);
        if (uVar24 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar17,uVar24,&PTR_s_src_complex_rs_005892c8);
        }
        uVar23 = links::resolve_token
                           (param_1,*(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x98) + uVar23 * 0x7a0 + 0x268)
                                     + uVar17 * 8));
        auVar27._8_56_ = extraout_var;
        auVar27._0_8_ = extraout_XMM0_Qa;
        uVar19 = *puVar22;
      }
      uVar24 = uVar23 * -0x61c8864680b583eb >> 0x3a;
      if (uVar18 <= uVar24) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar24,uVar18,&PTR_s_src_events_rs_002269a0);
      }
      lVar2 = lVar16 + uVar24 * 0x18;
      lVar8 = *(long *)(lVar16 + 0x10 + uVar24 * 0x18);
      if (lVar8 == *(long *)(lVar16 + uVar24 * 0x18)) {
        auVar27._0_8_ = <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(lVar2);
        auVar27._8_56_ = extraout_var_00;
      }
      puVar22 = puVar22 + 2;
      lVar7 = *(long *)(lVar2 + 8);
      *(undefined8 *)(lVar7 + lVar8 * 0x10) = uVar19;
      *(ulong *)(lVar7 + 8 + lVar8 * 0x10) = uVar23;
      *(long *)(lVar2 + 0x10) = lVar8 + 1;
    } while (puVar22 != puVar21 + lVar25 * 2);
  }
  if (lVar20 != 0) {
    if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar21 < sys::A_BASE_0)) ||
       (sys::A_END_0 <= puVar21)) {
      auVar27 = ZEXT1664(auVar27._0_16_);
      free(puVar21);
    }
    else {
      uVar18 = lVar20 * 0x10 - 1;
      lVar20 = LZCOUNT(uVar18);
      lVar25 = 0x40 - lVar20;
      if (0xffff < uVar18) {
        cVar11 = sys::big_put(puVar21,lVar25);
        auVar27._8_56_ = extraout_var_01;
        auVar27._0_8_ = extraout_XMM0_Qa_00;
        if (cVar11 != '\0') goto LAB_0073a30f;
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
      }
      *puVar21 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
      *(undefined8 **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = puVar21;
    }
  }
LAB_0073a30f:
  LOCK();
  puVar1 = (ulong *)(param_1 + 0x2e8);
  uVar18 = *puVar1;
  *puVar1 = *puVar1 + 0x40;
  UNLOCK();
  uVar24 = *(ulong *)(param_1 + 0x188);
  if (uVar18 < uVar24) {
    do {
      uVar17 = uVar18 + 0x40;
      if (uVar24 <= uVar18 + 0x40) {
        uVar17 = uVar24;
      }
      if (uVar24 != uVar18) {
        lVar20 = *(long *)(param_1 + 0x180);
        puVar13 = (uint *)(lVar20 + uVar18 * 4);
        do {
          uVar18 = (ulong)*puVar13;
          local_58 = vpcmpeqd_avx2(auVar27._0_32_,auVar27._0_32_);
          auVar27 = ZEXT3264(local_58);
          local_78 = local_58;
          local_98 = local_58;
          local_b8 = local_58;
          lVar25 = (ulong)(*puVar13 >> 0xc) * 4 + *(long *)(param_1 + 0x2c0);
          uVar15 = *(uint *)(lVar25 + uVar18 * 4);
          uVar5 = *(uint *)(lVar25 + 4 + uVar18 * 4);
          lVar25 = *(long *)(param_1 + 0x2c8);
          puVar21 = (undefined8 *)(lVar25 + (ulong)uVar15 * 8);
          if (*(short *)(*(long *)(param_1 + 0x2b0) + uVar18 * 2) < 0) {
            uVar15 = uVar5 - uVar15 & 0xfffffffe;
            uVar26 = (ulong)uVar15;
            if (uVar15 != 0) {
              do {
                uVar19 = *puVar21;
                uVar15 = (uint)uVar19 & 0xf;
                uVar14 = (ulong)uVar15;
                uVar24 = *(ulong *)(local_b8 + (ulong)uVar15 * 8);
                if (uVar24 == 0xffffffffffffffff) {
                  uVar4 = *(ushort *)(*(long *)(param_1 + 0x2b0) + uVar18 * 2);
                  if ((short)uVar4 < 0) {
                    uVar24 = (uVar18 * 0x200 + uVar14) * 0x3779b97f4b ^ *(ulong *)(param_1 + 0x218);
                    uVar24 = ((uint)(uVar24 >> 0x11) & 0x7fffff ^ uVar24) * -0x17014799a7000000 >>
                             0x18;
                    uVar23 = uVar24 * -0x61c8864680b583eb >> 0x14;
                    while( true ) {
                      uVar23 = uVar23 & *(ulong *)(param_1 + 0xd8);
                      lVar25 = *(long *)(*(long *)(param_1 + 200) + uVar23 * 0x10);
                      if (lVar25 == uVar24 + 1) break;
                      if (lVar25 == 0) {
                        uVar24 = uVar14 + uVar18 * 0x10;
                        goto LAB_0073a796;
                      }
                      uVar23 = uVar23 + 1;
                    }
                    uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 200) + 8 + uVar23 * 0x10);
                    uVar24 = *(ulong *)(param_1 + 0x128);
                    if (uVar24 <= uVar23) goto LAB_0073aa00;
                    uVar24 = (ulong)*(uint *)(*(long *)(param_1 + 0x120) + uVar23 * 4) |
                             0x4000000000000000;
                  }
                  else {
                    uVar24 = 0xf;
                    if (((uVar4 & 0x3fff) >> uVar15 & 1) == 0) {
                      uVar24 = uVar14;
                    }
                    uVar24 = uVar24 + uVar18 * 0x10;
                  }
LAB_0073a796:
                  *(ulong *)(local_b8 + uVar14 * 8) = uVar24;
                }
                uVar23 = uVar24 * -0x61c8864680b583eb >> 0x3a;
                if (*(ulong *)(lVar6 + 0x360) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  core[62e902411887be45]::panicking::panic_bounds_check
                            (uVar23,*(ulong *)(lVar6 + 0x360),&PTR_s_src_complex_rs_00589368);
                }
                lVar16 = *(long *)(lVar6 + 0x358);
                lVar25 = lVar16 + uVar23 * 0x18;
                uVar9 = puVar21[1];
                lVar2 = *(long *)(lVar16 + 0x10 + uVar23 * 0x18);
                if (lVar2 == *(long *)(lVar16 + uVar23 * 0x18)) {
                  auVar27._0_8_ =
                       <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar25);
                  auVar27._8_56_ = extraout_var_03;
                }
                puVar21 = puVar21 + 2;
                uVar26 = uVar26 - 2;
                lVar16 = *(long *)(lVar25 + 8);
                *(ulong *)(lVar16 + lVar2 * 0x18) = uVar24;
                *(undefined8 *)(lVar16 + 8 + lVar2 * 0x18) = uVar19;
                *(undefined8 *)(lVar16 + 0x10 + lVar2 * 0x18) = uVar9;
                *(long *)(lVar25 + 0x10) = lVar2 + 1;
              } while (uVar26 != 0);
            }
          }
          else if (uVar15 != uVar5) {
            lVar16 = 0;
            do {
              uVar19 = *puVar21;
              uVar12 = (uint)uVar19 & 0xf;
              uVar26 = (ulong)uVar12;
              uVar24 = *(ulong *)(local_b8 + (ulong)uVar12 * 8);
              if (uVar24 == 0xffffffffffffffff) {
                uVar4 = *(ushort *)(*(long *)(param_1 + 0x2b0) + uVar18 * 2);
                if ((short)uVar4 < 0) {
                  uVar24 = (uVar18 * 0x200 + uVar26) * 0x3779b97f4b ^ *(ulong *)(param_1 + 0x218);
                  uVar24 = ((uint)(uVar24 >> 0x11) & 0x7fffff ^ uVar24) * -0x17014799a7000000 >>
                           0x18;
                  uVar23 = uVar24 * -0x61c8864680b583eb >> 0x14;
                  while( true ) {
                    uVar23 = uVar23 & *(ulong *)(param_1 + 0xd8);
                    lVar2 = *(long *)(*(long *)(param_1 + 200) + uVar23 * 0x10);
                    if (lVar2 == uVar24 + 1) break;
                    if (lVar2 == 0) {
                      uVar24 = uVar26 + uVar18 * 0x10;
                      goto LAB_0073a5a2;
                    }
                    uVar23 = uVar23 + 1;
                  }
                  uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 200) + 8 + uVar23 * 0x10);
                  uVar24 = *(ulong *)(param_1 + 0x128);
                  if (uVar24 <= uVar23) goto LAB_0073aa00;
                  uVar24 = (ulong)*(uint *)(*(long *)(param_1 + 0x120) + uVar23 * 4) |
                           0x4000000000000000;
                }
                else {
                  uVar24 = 0xf;
                  if (((uVar4 & 0x3fff) >> uVar12 & 1) == 0) {
                    uVar24 = uVar26;
                  }
                  uVar24 = uVar24 + uVar18 * 0x10;
                }
LAB_0073a5a2:
                *(ulong *)(local_b8 + uVar26 * 8) = uVar24;
              }
              uVar23 = uVar24 * -0x61c8864680b583eb >> 0x3a;
              if (*(ulong *)(lVar6 + 0x360) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar23,*(ulong *)(lVar6 + 0x360),&PTR_s_src_complex_rs_00589350);
              }
              lVar8 = *(long *)(lVar6 + 0x358);
              lVar2 = lVar8 + uVar23 * 0x18;
              lVar7 = *(long *)(lVar8 + 0x10 + uVar23 * 0x18);
              if (lVar7 == *(long *)(lVar8 + uVar23 * 0x18)) {
                auVar27._0_8_ =
                     <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar2);
                auVar27._8_56_ = extraout_var_02;
              }
              puVar21 = puVar21 + 1;
              lVar8 = *(long *)(lVar2 + 8);
              *(ulong *)(lVar8 + lVar7 * 0x18) = uVar24;
              *(undefined8 *)(lVar8 + 8 + lVar7 * 0x18) = uVar19;
              *(ulong *)(lVar8 + 0x10 + lVar7 * 0x18) = lVar16 + (ulong)uVar15 | 0x2000000000000000;
              *(long *)(lVar2 + 0x10) = lVar7 + 1;
              lVar16 = lVar16 + 1;
            } while (puVar21 != (undefined8 *)(lVar25 + (ulong)uVar5 * 8));
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != (uint *)(lVar20 + uVar17 * 4));
        uVar24 = *(ulong *)(param_1 + 0x188);
      }
      LOCK();
      puVar1 = (ulong *)(param_1 + 0x2e8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 + 0x40;
      UNLOCK();
    } while (uVar18 < uVar24);
  }
  uVar19 = *(undefined8 *)(lVar6 + 0x290);
  puVar21 = *(undefined8 **)(lVar6 + 0x298);
  lVar20 = *(long *)(lVar6 + 0x2a0);
  *(undefined8 *)(lVar6 + 0x290) = 0;
  *(undefined8 *)(lVar6 + 0x298) = 8;
  *(undefined8 *)(lVar6 + 0x2a0) = 0;
  if (lVar20 != 0) {
    puVar22 = puVar21;
    do {
      lVar25 = links::resolve_token(param_1,*puVar22);
      uVar18 = (ulong)(lVar25 * -0x61c8864680b583eb) >> 0x3a;
      if (*(ulong *)(lVar6 + 0x360) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar18,*(ulong *)(lVar6 + 0x360),&PTR_s_src_complex_rs_00589380);
      }
      lVar2 = *(long *)(lVar6 + 0x358);
      lVar16 = lVar2 + uVar18 * 0x18;
      uVar9 = puVar22[1];
      uVar10 = puVar22[2];
      lVar8 = *(long *)(lVar2 + 0x10 + uVar18 * 0x18);
      if (lVar8 == *(long *)(lVar2 + uVar18 * 0x18)) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(lVar16);
      }
      lVar2 = *(long *)(lVar16 + 8);
      *(long *)(lVar2 + lVar8 * 0x18) = lVar25;
      puVar3 = (undefined8 *)(lVar2 + 8 + lVar8 * 0x18);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      *(long *)(lVar16 + 0x10) = lVar8 + 1;
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar21 + lVar20 * 3);
    if (*(long *)(lVar6 + 0x290) != 0) {
      puVar22 = *(undefined8 **)(lVar6 + 0x298);
      if (((sys::A_BASE_0 == (undefined8 *)0x0) || (puVar22 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= puVar22)) {
        free(puVar22);
      }
      else {
        uVar18 = *(long *)(lVar6 + 0x290) * 0x18 - 1;
        lVar16 = LZCOUNT(uVar18);
        lVar25 = 0x40 - lVar16;
        if ((uVar18 < 0x10000) || (cVar11 = sys::big_put(puVar22,lVar25), cVar11 == '\0')) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *puVar22 = *(undefined8 *)(in_FS_OFFSET + lVar25 * 8 + -0x3c8);
          *(undefined8 **)(in_FS_OFFSET + lVar25 * 8 + -0x3c8) = puVar22;
        }
      }
    }
  }
  *(undefined8 *)(lVar6 + 0x290) = uVar19;
  *(undefined8 **)(lVar6 + 0x298) = puVar21;
  *(long *)(lVar6 + 0x2a0) = lVar20;
  return;
}


