// ==== core::slice::sort::unstable::ipnsort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 006171c0 (336 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar4 = param_1[2];
  uVar6 = param_1[3];
  bVar9 = param_1[1] <= uVar6;
  bVar1 = (ulong)(uVar4 < *param_1) <= uVar6 - param_1[1];
  puVar5 = param_1 + 5;
  uVar3 = 2;
  if (bVar9 && bVar1) {
    do {
      puVar7 = puVar5 + -1;
      uVar8 = *puVar5;
      if (uVar8 < uVar6 || uVar8 - uVar6 < (ulong)(*puVar7 < uVar4)) goto LAB_00617247;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
      uVar4 = *puVar7;
      uVar6 = uVar8;
    } while (param_2 != uVar3);
  }
  else {
    do {
      puVar7 = puVar5 + -1;
      uVar8 = *puVar5;
      if (uVar6 <= uVar8 && (ulong)(*puVar7 < uVar4) <= uVar8 - uVar6) goto LAB_00617247;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
      uVar4 = *puVar7;
      uVar6 = uVar8;
    } while (param_2 != uVar3);
  }
LAB_00617250:
  if (!bVar9 || !bVar1) {
    puVar5 = param_1 + 2;
    puVar7 = param_1 + param_2 * 2 + -2;
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      uVar4 = puVar5[-2];
      uVar6 = puVar5[-1];
      uVar3 = puVar7[1];
      puVar5[-2] = *puVar7;
      puVar5[-1] = uVar3;
      *puVar7 = uVar4;
      puVar7[1] = uVar6;
      uVar4 = *puVar5;
      uVar6 = puVar5[1];
      uVar3 = (param_1 + param_2 * 2 + (uVar8 ^ 0xffffffffffffffe) * 2)[1];
      *puVar5 = param_1[param_2 * 2 + (uVar8 ^ 0xffffffffffffffe) * 2];
      puVar5[1] = uVar3;
      param_1[param_2 * 2 + (uVar8 ^ 0xffffffffffffffe) * 2] = uVar4;
      (param_1 + param_2 * 2 + (uVar8 ^ 0xffffffffffffffe) * 2)[1] = uVar6;
      uVar4 = uVar8 + 2;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + -4;
    } while ((param_2 >> 1 & 0x3fffffffffffffe) != uVar4);
    if ((param_2 & 2) != 0) {
      uVar6 = param_1[uVar4 * 2];
      uVar3 = (param_1 + uVar4 * 2)[1];
      uVar2 = (param_1 + param_2 * 2 + (-3 - uVar8) * 2)[1];
      param_1[uVar4 * 2] = param_1[param_2 * 2 + (-3 - uVar8) * 2];
      (param_1 + uVar4 * 2)[1] = uVar2;
      param_1[param_2 * 2 + (-3 - uVar8) * 2] = uVar6;
      (param_1 + param_2 * 2 + (-3 - uVar8) * 2)[1] = uVar3;
    }
  }
  return;
LAB_00617247:
  if (uVar3 != param_2) {
    quicksort::quicksort::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
              (param_1,(char)param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e);
    return;
  }
  goto LAB_00617250;
}


// ==== core::slice::sort::unstable::ipnsort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u64, pipeline::events::simple_run::{closure#2}>::{closure#0}> @ 00617320 (307 bytes)

/* core[62e902411887be45]::slice::sort::unstable::ipnsort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,
   pipeline[509596c7b52975b2]::events::simple_run::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::ipnsort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
          (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar1 = param_1[2];
  puVar4 = param_1 + 4;
  uVar3 = 2;
  uVar5 = uVar1;
  if (uVar1 < *param_1) {
    do {
      uVar7 = *puVar4;
      if (uVar5 <= uVar7) goto code_r0x00617380;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      uVar5 = uVar7;
    } while (param_2 != uVar3);
  }
  else {
    do {
      uVar7 = *puVar4;
      if (uVar7 < uVar5) goto code_r0x00617380;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      uVar5 = uVar7;
    } while (param_2 != uVar3);
  }
LAB_00617389:
  if (uVar1 < *param_1) {
    puVar4 = param_1 + 2;
    puVar6 = param_1 + param_2 * 2 + -2;
    uVar1 = 0;
    do {
      uVar7 = uVar1;
      uVar1 = puVar4[-2];
      uVar5 = puVar4[-1];
      uVar3 = puVar6[1];
      puVar4[-2] = *puVar6;
      puVar4[-1] = uVar3;
      *puVar6 = uVar1;
      puVar6[1] = uVar5;
      uVar1 = *puVar4;
      uVar5 = puVar4[1];
      uVar3 = (param_1 + param_2 * 2 + (uVar7 ^ 0xffffffffffffffe) * 2)[1];
      *puVar4 = param_1[param_2 * 2 + (uVar7 ^ 0xffffffffffffffe) * 2];
      puVar4[1] = uVar3;
      param_1[param_2 * 2 + (uVar7 ^ 0xffffffffffffffe) * 2] = uVar1;
      (param_1 + param_2 * 2 + (uVar7 ^ 0xffffffffffffffe) * 2)[1] = uVar5;
      uVar1 = uVar7 + 2;
      puVar4 = puVar4 + 4;
      puVar6 = puVar6 + -4;
    } while ((param_2 >> 1 & 0x3fffffffffffffe) != uVar1);
    if ((param_2 & 2) != 0) {
      uVar5 = param_1[uVar1 * 2];
      uVar3 = (param_1 + uVar1 * 2)[1];
      uVar2 = (param_1 + param_2 * 2 + (-3 - uVar7) * 2)[1];
      param_1[uVar1 * 2] = param_1[param_2 * 2 + (-3 - uVar7) * 2];
      (param_1 + uVar1 * 2)[1] = uVar2;
      param_1[param_2 * 2 + (-3 - uVar7) * 2] = uVar5;
      (param_1 + param_2 * 2 + (-3 - uVar7) * 2)[1] = uVar3;
    }
  }
  return;
code_r0x00617380:
  if (uVar3 != param_2) {
    quicksort::quicksort::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
              (param_1,(char)param_2,0,(int)LZCOUNT(param_2 | 1) * 2 ^ 0x7e);
    return;
  }
  goto LAB_00617389;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 006194e0 (194 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

ulong * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                                 (param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe);
    param_2 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                                 (param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                                 (param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  bVar4 = uVar1 < uVar2 || uVar1 - uVar2 < (ulong)(*param_1 < *param_2);
  uVar3 = param_3[1];
  if ((uVar2 < uVar3 || uVar2 - uVar3 < (ulong)(*param_2 < *param_3)) != bVar4) {
    param_2 = param_3;
  }
  if ((uVar1 < uVar3 || uVar1 - uVar3 < (ulong)(*param_1 < *param_3)) != bVar4) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u64, pipeline::events::simple_run::{closure#2}>::{closure#0}> @ 006195c0 (167 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,
   pipeline[509596c7b52975b2]::events::simple_run::{closure#2}>::{closure#0}> */

ulong * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                                 (param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe);
    param_2 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                                 (param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                                 (param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < *param_3 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *param_3 != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== core::slice::sort::shared::smallsort::sort4_stable::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 0061c810 (240 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort4_stable::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  bool bVar12;
  bool bVar13;
  
  uVar1 = param_1[3];
  bVar12 = uVar1 < param_1[1];
  bVar2 = uVar1 - param_1[1] < (ulong)(param_1[2] < *param_1);
  bVar13 = param_1[7] < param_1[5] || param_1[7] - param_1[5] < (ulong)(param_1[6] < param_1[4]);
  uVar3 = (ulong)(bVar12 || bVar2);
  uVar4 = (ulong)(!bVar12 && !bVar2);
  puVar7 = param_1 + uVar4 * 2;
  uVar5 = (ulong)bVar13;
  puVar9 = param_1 + uVar5 * 2 + 4;
  uVar10 = (ulong)((bVar13 ^ 3) << 4);
  uVar1 = *(ulong *)((long)param_1 + uVar10 + 8);
  bVar12 = uVar1 < param_1[uVar4 * 2 + 1];
  bVar2 = uVar1 - param_1[uVar4 * 2 + 1] <
          (ulong)(*(ulong *)((long)param_1 + uVar10) < param_1[uVar4 * 2]);
  puVar11 = puVar7;
  if (bVar12 || bVar2) {
    puVar11 = puVar9;
  }
  puVar8 = puVar9;
  puVar6 = param_1 + uVar3 * 2;
  if (param_1[uVar5 * 2 + 5] < param_1[uVar3 * 2 + 1] ||
      param_1[uVar5 * 2 + 5] - param_1[uVar3 * 2 + 1] <
      (ulong)(param_1[uVar5 * 2 + 4] < param_1[uVar3 * 2])) {
    puVar8 = puVar7;
    puVar6 = puVar9;
    puVar11 = param_1 + uVar3 * 2;
  }
  if (bVar12 || bVar2) {
    puVar8 = (ulong *)((long)param_1 + uVar10);
  }
  else {
    puVar7 = (ulong *)((long)param_1 + uVar10);
  }
  puVar9 = puVar8;
  if (puVar8[1] < puVar11[1] || puVar8[1] - puVar11[1] < (ulong)(*puVar8 < *puVar11)) {
    puVar9 = puVar11;
    puVar11 = puVar8;
  }
  uVar1 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar1;
  uVar1 = puVar11[1];
  param_2[2] = *puVar11;
  param_2[3] = uVar1;
  uVar1 = puVar9[1];
  param_2[4] = *puVar9;
  param_2[5] = uVar1;
  uVar1 = puVar7[1];
  param_2[6] = *puVar7;
  param_2[7] = uVar1;
  return;
}


// ==== core::slice::sort::shared::smallsort::sort8_stable::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 0061e900 (722 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  bool bVar14;
  bool bVar16;
  bool bVar15;
  
  sort4_stable::
  <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
            (param_1,param_3);
  sort4_stable::
  <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
            (param_1 + 0x40,param_3 + 8);
  bVar14 = param_3[9] < param_3[1];
  bVar5 = param_3[9] - param_3[1] < (ulong)(param_3[8] < *param_3);
  puVar10 = param_3 + 8;
  if (!bVar14 && !bVar5) {
    puVar10 = param_3;
  }
  uVar2 = puVar10[1];
  *param_2 = *puVar10;
  param_2[1] = uVar2;
  uVar2 = param_3[0xf];
  bVar15 = uVar2 < param_3[7];
  bVar6 = uVar2 - param_3[7] < (ulong)(param_3[0xe] < param_3[6]);
  bVar16 = bVar15 || bVar6;
  lVar11 = (ulong)bVar16 - 1;
  uVar2 = (ulong)bVar16;
  puVar10 = param_3 + 0xe;
  if (bVar15 || bVar6) {
    puVar10 = param_3 + 6;
  }
  uVar3 = (ulong)(bVar14 || bVar5);
  puVar12 = param_3 + uVar3 * 2 + 8;
  uVar7 = (ulong)(!bVar14 && !bVar5);
  uVar4 = puVar10[1];
  param_2[0xe] = *puVar10;
  param_2[0xf] = uVar4;
  puVar10 = param_3 + uVar7 * 2;
  bVar14 = param_3[uVar3 * 2 + 9] < param_3[uVar7 * 2 + 1];
  bVar5 = param_3[uVar3 * 2 + 9] - param_3[uVar7 * 2 + 1] <
          (ulong)(param_3[uVar3 * 2 + 8] < param_3[uVar7 * 2]);
  puVar8 = puVar10;
  if (bVar14 || bVar5) {
    puVar8 = puVar12;
  }
  uVar3 = puVar8[1];
  param_2[2] = *puVar8;
  param_2[3] = uVar3;
  uVar3 = param_3[lVar11 * 2 + 0xf];
  bVar16 = uVar3 < param_3[uVar2 * -2 + 7];
  bVar6 = uVar3 - param_3[uVar2 * -2 + 7] <
          (ulong)(param_3[lVar11 * 2 + 0xe] < param_3[uVar2 * -2 + 6]);
  bVar15 = bVar16 || bVar6;
  lVar9 = (ulong)bVar15 - 1;
  puVar13 = param_3 + lVar11 * 2 + 0xe;
  param_3 = param_3 + uVar2 * -2 + 6;
  puVar8 = puVar13;
  if (bVar16 || bVar6) {
    puVar8 = param_3;
  }
  uVar2 = (ulong)bVar15;
  uVar3 = (ulong)(bVar14 || bVar5);
  puVar1 = puVar12 + uVar3 * 2;
  uVar7 = (ulong)(!bVar14 && !bVar5);
  uVar4 = puVar8[1];
  param_2[0xc] = *puVar8;
  param_2[0xd] = uVar4;
  puVar8 = puVar10 + uVar7 * 2;
  bVar14 = puVar12[uVar3 * 2 + 1] < puVar10[uVar7 * 2 + 1];
  bVar5 = puVar12[uVar3 * 2 + 1] - puVar10[uVar7 * 2 + 1] <
          (ulong)(puVar12[uVar3 * 2] < puVar10[uVar7 * 2]);
  puVar10 = puVar8;
  if (bVar14 || bVar5) {
    puVar10 = puVar1;
  }
  uVar3 = puVar10[1];
  param_2[4] = *puVar10;
  param_2[5] = uVar3;
  uVar3 = puVar13[lVar9 * 2 + 1];
  bVar16 = uVar3 < param_3[uVar2 * -2 + 1];
  bVar6 = uVar3 - param_3[uVar2 * -2 + 1] < (ulong)(puVar13[lVar9 * 2] < param_3[uVar2 * -2]);
  bVar15 = bVar16 || bVar6;
  lVar11 = (ulong)bVar15 - 1;
  uVar3 = (ulong)bVar15;
  puVar13 = puVar13 + lVar9 * 2;
  param_3 = param_3 + uVar2 * -2;
  puVar10 = puVar13;
  if (bVar16 || bVar6) {
    puVar10 = param_3;
  }
  uVar2 = (ulong)(bVar14 || bVar5);
  uVar7 = (ulong)(!bVar14 && !bVar5);
  uVar4 = puVar10[1];
  param_2[10] = *puVar10;
  param_2[0xb] = uVar4;
  bVar14 = puVar1[uVar2 * 2 + 1] < puVar8[uVar7 * 2 + 1];
  bVar5 = puVar1[uVar2 * 2 + 1] - puVar8[uVar7 * 2 + 1] <
          (ulong)(puVar1[uVar2 * 2] < puVar8[uVar7 * 2]);
  puVar10 = puVar8 + uVar7 * 2;
  if (bVar14 || bVar5) {
    puVar10 = puVar1 + uVar2 * 2;
  }
  uVar4 = puVar10[1];
  param_2[6] = *puVar10;
  param_2[7] = uVar4;
  uVar4 = puVar13[lVar11 * 2 + 1];
  bVar16 = uVar4 < param_3[uVar3 * -2 + 1];
  bVar6 = uVar4 - param_3[uVar3 * -2 + 1] < (ulong)(puVar13[lVar11 * 2] < param_3[uVar3 * -2]);
  bVar15 = bVar16 || bVar6;
  puVar10 = puVar13 + lVar11 * 2;
  if (bVar16 || bVar6) {
    puVar10 = param_3 + uVar3 * -2;
  }
  uVar4 = puVar10[1];
  param_2[8] = *puVar10;
  param_2[9] = uVar4;
  if ((puVar8 + uVar7 * 2 + (ulong)(!bVar14 && !bVar5) * 2 !=
       param_3 + uVar3 * -2 + (ulong)bVar15 * -2 + 2) ||
     (puVar1 + uVar2 * 2 + (ulong)(bVar14 || bVar5) * 2 !=
      puVar13 + lVar11 * 2 + ((ulong)bVar15 - 1) * 2 + 2)) {
                    /* WARNING: Subroutine does not return */
    panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::sort8_stable::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u64, pipeline::events::simple_run::{closure#2}>::{closure#0}> @ 0061ebe0 (921 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,
   pipeline[509596c7b52975b2]::events::simple_run::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::sort8_stable::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
          (ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar1 = (ulong)(param_1[2] < *param_1);
  uVar2 = (ulong)(param_1[2] >= *param_1);
  puVar6 = param_1 + uVar2 * 2;
  uVar3 = (ulong)(param_1[6] < param_1[4]);
  puVar12 = param_1 + uVar3 * 2 + 4;
  uVar13 = (ulong)((param_1[6] < param_1[4] ^ 3) << 4);
  puVar4 = (ulong *)((long)param_1 + uVar13);
  uVar13 = *(ulong *)((long)param_1 + uVar13);
  puVar11 = puVar6;
  if (uVar13 < param_1[uVar2 * 2]) {
    puVar11 = puVar12;
  }
  puVar8 = puVar12;
  puVar10 = param_1 + uVar1 * 2;
  if (param_1[uVar3 * 2 + 4] < param_1[uVar1 * 2]) {
    puVar8 = puVar6;
    puVar10 = puVar12;
    puVar11 = param_1 + uVar1 * 2;
  }
  if (uVar13 < param_1[uVar2 * 2]) {
    puVar8 = puVar4;
  }
  else {
    puVar6 = puVar4;
  }
  puVar4 = puVar8;
  if (*puVar8 < *puVar11) {
    puVar4 = puVar11;
    puVar11 = puVar8;
  }
  uVar13 = puVar10[1];
  *param_3 = *puVar10;
  param_3[1] = uVar13;
  uVar13 = puVar11[1];
  param_3[2] = *puVar11;
  param_3[3] = uVar13;
  uVar13 = puVar4[1];
  param_3[4] = *puVar4;
  param_3[5] = uVar13;
  uVar13 = puVar6[1];
  param_3[6] = *puVar6;
  param_3[7] = uVar13;
  uVar1 = (ulong)(param_1[10] < param_1[8]);
  uVar2 = (ulong)(param_1[10] >= param_1[8]);
  puVar4 = param_1 + uVar2 * 2 + 8;
  uVar3 = (ulong)(param_1[0xe] < param_1[0xc]);
  puVar11 = param_1 + uVar3 * 2 + 0xc;
  uVar7 = (ulong)((param_1[0xe] < param_1[0xc] ^ 3) << 4);
  uVar13 = *(ulong *)((long)param_1 + uVar7 + 0x40);
  puVar6 = puVar4;
  if (uVar13 < param_1[uVar2 * 2 + 8]) {
    puVar6 = puVar11;
  }
  puVar10 = puVar11;
  puVar12 = param_1 + uVar1 * 2 + 8;
  if (param_1[uVar3 * 2 + 0xc] < param_1[uVar1 * 2 + 8]) {
    puVar10 = puVar4;
    puVar12 = puVar11;
    puVar6 = param_1 + uVar1 * 2 + 8;
  }
  puVar11 = (ulong *)((long)param_1 + uVar7 + 0x40);
  if (uVar13 < param_1[uVar2 * 2 + 8]) {
    puVar10 = puVar11;
  }
  else {
    puVar4 = puVar11;
  }
  puVar11 = puVar10;
  if (*puVar10 < *puVar6) {
    puVar11 = puVar6;
    puVar6 = puVar10;
  }
  uVar13 = puVar12[1];
  param_3[8] = *puVar12;
  param_3[9] = uVar13;
  uVar13 = puVar6[1];
  param_3[10] = *puVar6;
  param_3[0xb] = uVar13;
  uVar13 = puVar11[1];
  param_3[0xc] = *puVar11;
  param_3[0xd] = uVar13;
  uVar13 = puVar4[1];
  param_3[0xe] = *puVar4;
  param_3[0xf] = uVar13;
  bVar14 = param_3[8] < *param_3;
  puVar6 = param_3 + 8;
  if (!bVar14) {
    puVar6 = param_3;
  }
  uVar13 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar13;
  uVar13 = param_3[0xe];
  uVar1 = param_3[6];
  lVar9 = (ulong)(uVar13 < uVar1) - 1;
  puVar6 = param_3 + 0xe;
  if (uVar13 < uVar1) {
    puVar6 = param_3 + 6;
  }
  puVar11 = param_3 + (ulong)bVar14 * 2 + 8;
  uVar2 = puVar6[1];
  param_2[0xe] = *puVar6;
  param_2[0xf] = uVar2;
  puVar6 = param_3 + (ulong)!bVar14 * 2;
  bVar14 = param_3[(ulong)bVar14 * 2 + 8] < param_3[(ulong)!bVar14 * 2];
  puVar4 = puVar6;
  if (bVar14) {
    puVar4 = puVar11;
  }
  uVar2 = puVar4[1];
  param_2[2] = *puVar4;
  param_2[3] = uVar2;
  uVar2 = param_3[lVar9 * 2 + 0xe];
  uVar3 = param_3[(ulong)(uVar13 < uVar1) * -2 + 6];
  lVar5 = (ulong)(uVar2 < uVar3) - 1;
  puVar4 = param_3 + lVar9 * 2 + 0xe;
  param_3 = param_3 + (ulong)(uVar13 < uVar1) * -2 + 6;
  puVar12 = puVar4;
  if (uVar2 < uVar3) {
    puVar12 = param_3;
  }
  uVar13 = (ulong)(uVar2 < uVar3);
  puVar10 = puVar11 + (ulong)bVar14 * 2;
  uVar1 = puVar12[1];
  param_2[0xc] = *puVar12;
  param_2[0xd] = uVar1;
  puVar12 = puVar6 + (ulong)!bVar14 * 2;
  bVar14 = puVar11[(ulong)bVar14 * 2] < puVar6[(ulong)!bVar14 * 2];
  puVar6 = puVar12;
  if (bVar14) {
    puVar6 = puVar10;
  }
  uVar1 = puVar6[1];
  param_2[4] = *puVar6;
  param_2[5] = uVar1;
  uVar1 = puVar4[lVar5 * 2];
  uVar2 = param_3[uVar13 * -2];
  lVar9 = (ulong)(uVar1 < uVar2) - 1;
  puVar4 = puVar4 + lVar5 * 2;
  param_3 = param_3 + uVar13 * -2;
  puVar6 = puVar4;
  if (uVar1 < uVar2) {
    puVar6 = param_3;
  }
  uVar13 = puVar6[1];
  param_2[10] = *puVar6;
  param_2[0xb] = uVar13;
  bVar15 = puVar10[(ulong)bVar14 * 2] < puVar12[(ulong)!bVar14 * 2];
  puVar6 = puVar12 + (ulong)!bVar14 * 2;
  if (bVar15) {
    puVar6 = puVar10 + (ulong)bVar14 * 2;
  }
  uVar13 = puVar6[1];
  param_2[6] = *puVar6;
  param_2[7] = uVar13;
  uVar13 = puVar4[lVar9 * 2];
  uVar3 = param_3[(ulong)(uVar1 < uVar2) * -2];
  puVar6 = puVar4 + lVar9 * 2;
  if (uVar13 < uVar3) {
    puVar6 = param_3 + (ulong)(uVar1 < uVar2) * -2;
  }
  uVar7 = puVar6[1];
  param_2[8] = *puVar6;
  param_2[9] = uVar7;
  if ((puVar12 + (ulong)!bVar14 * 2 + (ulong)!bVar15 * 2 !=
       param_3 + (ulong)(uVar1 < uVar2) * -2 + (ulong)(uVar13 < uVar3) * -2 + 2) ||
     (puVar10 + (ulong)bVar14 * 2 + (ulong)bVar15 * 2 !=
      puVar4 + lVar9 * 2 + ((ulong)(uVar13 < uVar3) - 1) * 2 + 2)) {
                    /* WARNING: Subroutine does not return */
    panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 00623ac0 (132 bytes)

/* core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (ulong *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  
  lVar8 = 0x10;
  puVar9 = param_1;
  puVar10 = param_1 + 2;
  do {
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    if (uVar5 < puVar9[1] || uVar5 - puVar9[1] < (ulong)(uVar4 < *puVar9)) {
      lVar11 = lVar8;
      do {
        puVar3 = (undefined8 *)((long)param_1 + lVar11 + -0x10);
        uVar6 = puVar3[1];
        *(undefined8 *)((long)param_1 + lVar11) = *puVar3;
        ((undefined8 *)((long)param_1 + lVar11))[1] = uVar6;
        if (lVar11 == 0x10) {
          puVar9 = param_1;
          goto LAB_00623ae3;
        }
        lVar2 = lVar11 + -0x10;
        lVar7 = lVar11 + -0x20;
        puVar9 = (ulong *)((long)param_1 + lVar11 + -0x18);
        lVar11 = lVar2;
      } while (uVar5 < *puVar9 ||
               uVar5 - *puVar9 < (ulong)(uVar4 < *(ulong *)((long)param_1 + lVar7)));
      puVar9 = (ulong *)(lVar2 + (long)param_1);
LAB_00623ae3:
      *puVar9 = uVar4;
      puVar9[1] = uVar5;
    }
    puVar1 = puVar10 + 2;
    lVar8 = lVar8 + 0x10;
    puVar9 = puVar10;
    puVar10 = puVar1;
    if (puVar1 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 0063b900 (249 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = (param_2 >> 1) + param_2;
  do {
    uVar5 = uVar5 - 1;
    uVar6 = uVar5 - param_2;
    uVar7 = param_2;
    if (uVar5 < param_2) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar5 * 2)[1];
      *param_1 = param_1[uVar5 * 2];
      param_1[1] = uVar4;
      param_1[uVar5 * 2] = uVar2;
      (param_1 + uVar5 * 2)[1] = uVar3;
      uVar6 = 0;
      uVar7 = uVar5;
    }
    uVar8 = uVar6 * 2 + 1;
    if (uVar8 < uVar7) {
      do {
        uVar10 = uVar6 * 2 + 2;
        uVar9 = uVar8;
        if (uVar10 < uVar7) {
          uVar9 = uVar8 + ((ulong)param_1[uVar8 * 2 + 1] < (ulong)param_1[uVar10 * 2 + 1] ||
                          (ulong)(param_1[uVar8 * 2 + 1] - param_1[uVar10 * 2 + 1]) <
                          (ulong)((ulong)param_1[uVar8 * 2] < (ulong)param_1[uVar10 * 2]));
        }
        uVar8 = param_1[uVar6 * 2];
        uVar10 = param_1[uVar6 * 2 + 1];
        uVar1 = param_1[uVar9 * 2 + 1];
        if (uVar1 <= uVar10 && (ulong)(uVar8 < (ulong)param_1[uVar9 * 2]) <= uVar10 - uVar1) break;
        param_1[uVar6 * 2] = param_1[uVar9 * 2];
        param_1[uVar9 * 2] = uVar8;
        (param_1 + uVar6 * 2)[1] = uVar1;
        (param_1 + uVar9 * 2)[1] = uVar10;
        uVar8 = uVar9 * 2 + 1;
        uVar6 = uVar9;
      } while (uVar8 < uVar7);
    }
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::heapsort::heapsort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u64, pipeline::events::simple_run::{closure#2}>::{closure#0}> @ 0063ba00 (225 bytes)

/* core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,
   pipeline[509596c7b52975b2]::events::simple_run::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::heapsort::heapsort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  
  uVar4 = (param_2 >> 1) + param_2;
  do {
    uVar4 = uVar4 - 1;
    uVar5 = uVar4 - param_2;
    uVar7 = param_2;
    if (uVar4 < param_2) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = (param_1 + uVar4 * 2)[1];
      *param_1 = param_1[uVar4 * 2];
      param_1[1] = uVar3;
      param_1[uVar4 * 2] = uVar1;
      (param_1 + uVar4 * 2)[1] = uVar2;
      uVar5 = 0;
      uVar7 = uVar4;
    }
    uVar8 = uVar5 * 2 + 1;
    if (uVar8 < uVar7) {
      do {
        uVar11 = uVar5 * 2 + 2;
        uVar9 = uVar8;
        if (uVar11 < uVar7) {
          uVar9 = uVar8 + ((ulong)param_1[uVar8 * 2] < (ulong)param_1[uVar11 * 2]);
        }
        uVar8 = param_1[uVar5 * 2];
        if ((ulong)param_1[uVar9 * 2] <= uVar8) break;
        puVar6 = param_1 + uVar5 * 2;
        puVar10 = param_1 + uVar9 * 2;
        *puVar6 = param_1[uVar9 * 2];
        *puVar10 = uVar8;
        uVar5 = puVar6[1];
        puVar6[1] = puVar10[1];
        puVar10[1] = uVar5;
        uVar8 = uVar9 * 2 + 1;
        uVar5 = uVar9;
      } while (uVar8 < uVar7);
    }
    if (uVar4 == 0) {
      return;
    }
  } while( true );
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u128, pipeline::complex::person_shard::{closure#0}>::{closure#0}> @ 0063e1c0 (1807 bytes)

/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,
   pipeline[509596c7b52975b2]::complex::person_shard::{closure#0}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
          (ulong *param_1,ulong param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar23;
  bool bVar22;
  bool bVar24;
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
          <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                    (puVar10,param_2);
          return;
        }
        puVar7 = puVar10 + (param_2 >> 3) * 8;
        puVar12 = puVar10 + (param_2 >> 3) * 0xe;
        if (param_2 < 0x40) break;
        puStack_350 = (undefined *)0x63e32b;
        lVar6 = shared::pivot::median3_rec::
                <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                          (puVar10);
        lVar6 = lVar6 - (long)puVar10;
        if (param_3 != (ulong *)0x0) goto LAB_0063e335;
LAB_0063e34c:
        local_340 = param_3;
        uVar20 = *puVar10;
        uVar9 = puVar10[1];
        uVar11 = ((ulong *)((long)puVar10 + lVar6))[1];
        *puVar10 = *(ulong *)((long)puVar10 + lVar6);
        puVar10[1] = uVar11;
        *(ulong *)((long)puVar10 + lVar6) = uVar20;
        ((ulong *)((long)puVar10 + lVar6))[1] = uVar9;
        puVar7 = puVar10 + 2;
        local_338[0] = puVar10[2];
        local_338[1] = puVar10[3];
        puVar12 = puVar10 + 4;
        uVar20 = *puVar10;
        uVar9 = puVar10[1];
        if (puVar12 < puVar10 + param_2 * 2 + -2) {
          uVar11 = 0;
          do {
            puVar13 = puVar12;
            uVar15 = *puVar13;
            uVar8 = puVar13[1];
            uVar2 = (puVar7 + uVar11 * 2)[1];
            puVar13[-2] = puVar7[uVar11 * 2];
            puVar13[-1] = uVar2;
            uVar2 = puVar13[1];
            puVar7[uVar11 * 2] = *puVar13;
            (puVar7 + uVar11 * 2)[1] = uVar2;
            uVar18 = (ulong)(uVar8 < uVar9 || uVar8 - uVar9 < (ulong)(uVar15 < uVar20));
            lVar6 = uVar11 + uVar18;
            uVar15 = puVar13[3];
            uVar8 = puVar13[2];
            uVar2 = (puVar7 + lVar6 * 2)[1];
            *puVar13 = puVar7[lVar6 * 2];
            puVar13[1] = uVar2;
            uVar2 = puVar13[3];
            puVar7[lVar6 * 2] = puVar13[2];
            (puVar7 + lVar6 * 2)[1] = uVar2;
            uVar11 = uVar11 + uVar18 +
                     (ulong)(uVar15 < uVar9 || uVar15 - uVar9 < (ulong)(uVar8 < uVar20));
            puVar12 = puVar13 + 4;
          } while (puVar12 < puVar10 + param_2 * 2 + -2);
          puVar13 = puVar13 + 2;
        }
        else {
          uVar11 = 0;
          puVar13 = puVar7;
        }
        do {
          puVar17 = puVar12;
          puVar12 = puVar17;
          if (puVar17 == puVar10 + param_2 * 2) {
            puVar12 = local_338;
          }
          uVar8 = uVar11 + (puVar12[1] < uVar9 || puVar12[1] - uVar9 < (ulong)(*puVar12 < uVar20));
          uVar15 = (puVar7 + uVar11 * 2)[1];
          *puVar13 = puVar7[uVar11 * 2];
          puVar13[1] = uVar15;
          uVar15 = puVar12[1];
          puVar7[uVar11 * 2] = *puVar12;
          (puVar7 + uVar11 * 2)[1] = uVar15;
          puVar12 = puVar17 + 2;
          uVar11 = uVar8;
          puVar13 = puVar17;
        } while (puVar17 != puVar10 + param_2 * 2);
        if (param_2 <= uVar8) {
LAB_0063e5da:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_338[0] = *puVar10;
        local_338[1] = puVar10[1];
        uVar20 = (puVar10 + uVar8 * 2)[1];
        *puVar10 = puVar10[uVar8 * 2];
        puVar10[1] = uVar20;
        puVar7 = puVar10 + uVar8 * 2;
        puVar10[uVar8 * 2] = local_338[0];
        (puVar10 + uVar8 * 2)[1] = local_338[1];
        param_1 = puVar10 + uVar8 * 2 + 2;
        param_2 = param_2 + ~uVar8;
        puStack_350 = (undefined *)0x63e4b9;
        <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                  (puVar10,uVar8,param_3,param_4 + -1);
        puVar10 = param_1;
        param_3 = puVar7;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto code_r0x0063e1e0;
      }
      uVar20 = puVar10[1];
      uVar9 = puVar7[1];
      bVar24 = uVar20 < uVar9 || uVar20 - uVar9 < (ulong)(*puVar10 < *puVar7);
      uVar11 = puVar12[1];
      if ((uVar9 < uVar11 || uVar9 - uVar11 < (ulong)(*puVar7 < *puVar12)) != bVar24) {
        puVar7 = puVar12;
      }
      if ((uVar20 < uVar11 || uVar20 - uVar11 < (ulong)(*puVar10 < *puVar12)) != bVar24) {
        puVar7 = puVar10;
      }
      lVar6 = (long)puVar7 - (long)puVar10;
      if (param_3 == (ulong *)0x0) goto LAB_0063e34c;
LAB_0063e335:
      puVar7 = (ulong *)((long)puVar10 + lVar6 + 8);
      if (param_3[1] < *puVar7 ||
          param_3[1] - *puVar7 < (ulong)(*param_3 < *(ulong *)((long)puVar10 + lVar6)))
      goto LAB_0063e34c;
      puVar7 = (ulong *)(lVar6 + (long)puVar10);
      uVar20 = *puVar10;
      uVar9 = puVar10[1];
      uVar11 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar11;
      *puVar7 = uVar20;
      puVar7[1] = uVar9;
      puVar7 = puVar10 + 2;
      local_338[0] = puVar10[2];
      local_338[1] = puVar10[3];
      puVar12 = puVar10 + 4;
      uVar20 = *puVar10;
      uVar9 = puVar10[1];
      if (puVar12 < puVar10 + param_2 * 2 + -2) {
        uVar11 = 0;
        do {
          puVar13 = puVar12;
          uVar15 = *puVar13;
          uVar8 = puVar13[1];
          uVar2 = puVar13[1];
          uVar18 = (puVar7 + uVar11 * 2)[1];
          puVar13[-2] = puVar7[uVar11 * 2];
          puVar13[-1] = uVar18;
          uVar18 = puVar13[1];
          puVar7[uVar11 * 2] = *puVar13;
          (puVar7 + uVar11 * 2)[1] = uVar18;
          lVar6 = (uVar11 + 1) - (ulong)(uVar9 < uVar8 || uVar9 - uVar2 < (ulong)(uVar20 < uVar15));
          uVar11 = puVar13[2];
          uVar15 = puVar13[3];
          uVar8 = puVar13[3];
          uVar2 = (puVar7 + lVar6 * 2)[1];
          *puVar13 = puVar7[lVar6 * 2];
          puVar13[1] = uVar2;
          uVar2 = puVar13[3];
          puVar7[lVar6 * 2] = puVar13[2];
          (puVar7 + lVar6 * 2)[1] = uVar2;
          uVar11 = (lVar6 + 1) - (ulong)(uVar9 < uVar15 || uVar9 - uVar8 < (ulong)(uVar20 < uVar11))
          ;
          puVar12 = puVar13 + 4;
        } while (puVar12 < puVar10 + param_2 * 2 + -2);
        puVar13 = puVar13 + 2;
      }
      else {
        uVar11 = 0;
        puVar13 = puVar7;
      }
      do {
        puVar17 = puVar12;
        puVar12 = puVar17;
        if (puVar17 == puVar10 + param_2 * 2) {
          puVar12 = local_338;
        }
        uVar8 = (uVar11 + 1) -
                (ulong)(uVar9 < puVar12[1] || uVar9 - puVar12[1] < (ulong)(uVar20 < *puVar12));
        uVar15 = (puVar7 + uVar11 * 2)[1];
        *puVar13 = puVar7[uVar11 * 2];
        puVar13[1] = uVar15;
        uVar15 = puVar12[1];
        puVar7[uVar11 * 2] = *puVar12;
        (puVar7 + uVar11 * 2)[1] = uVar15;
        uVar11 = uVar8;
        puVar12 = puVar17 + 2;
        puVar13 = puVar17;
      } while (puVar17 != puVar10 + param_2 * 2);
      if (param_2 <= uVar8) goto LAB_0063e5da;
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
code_r0x0063e1e0:
  if (param_2 < 2) {
    return;
  }
  uVar20 = param_2 >> 1;
  if (param_2 < 0x10) {
    puVar10 = param_1 + uVar20 * 2;
    if (param_2 < 8) {
      local_338[0] = *param_1;
      local_338[1] = param_1[1];
      uVar9 = puVar10[1];
      local_338[uVar20 * 2] = *puVar10;
      local_338[uVar20 * 2 + 1] = uVar9;
      uVar9 = 1;
      uVar11 = param_2 - uVar20;
      if (uVar20 < 2) goto LAB_0063e709;
    }
    else {
      puStack_350 = (undefined *)0x63e61e;
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                (param_1,local_338);
      puStack_350 = (undefined *)0x63e629;
      shared::smallsort::sort4_stable::
      <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
                (puVar10,local_338 + uVar20 * 2);
      uVar9 = 4;
      uVar11 = param_2 - uVar20;
      if (uVar20 < 5) goto LAB_0063e709;
    }
  }
  else {
    puStack_350 = (undefined *)0x63e216;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
              (param_1,local_338,local_338 + param_2 * 2);
    puStack_350 = (undefined *)0x63e239;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u128,pipeline[509596c7b52975b2]::complex::person_shard::_closure_0_>::_closure_0_>
              (param_1 + uVar20 * 2,local_338 + uVar20 * 2,auStack_2b8 + param_2 * 0x10);
    uVar9 = 8;
    uVar11 = param_2 - uVar20;
    if (uVar20 < 9) goto LAB_0063e709;
  }
  uVar8 = (ulong)(uint)((int)uVar9 << 4);
  uVar15 = uVar9;
  do {
    uVar2 = (param_1 + uVar15 * 2)[1];
    local_338[uVar15 * 2] = param_1[uVar15 * 2];
    local_338[uVar15 * 2 + 1] = uVar2;
    uVar2 = local_338[uVar15 * 2];
    uVar18 = local_338[uVar15 * 2 + 1];
    if (uVar18 < local_338[uVar15 * 2 + -1] ||
        uVar18 - local_338[uVar15 * 2 + -1] < (ulong)(uVar2 < local_338[uVar15 * 2 + -2])) {
      uVar1 = uVar8;
      do {
        uVar19 = uVar1;
        uVar5 = *(undefined8 *)((long)local_338 + (uVar19 - 8));
        *(undefined8 *)((long)local_338 + uVar19) =
             *(undefined8 *)((long)local_338 + (uVar19 - 0x10));
        *(undefined8 *)((long)local_338 + uVar19 + 8) = uVar5;
        puVar10 = &uStack_348;
        if (uVar19 == 0x10) goto LAB_0063e683;
        puVar10 = (ulong *)((long)local_338 + (uVar19 - 0x18));
        uVar1 = uVar19 - 0x10;
      } while (uVar18 < *puVar10 ||
               uVar18 - *puVar10 < (ulong)(uVar2 < *(ulong *)((long)&uStack_358 + uVar19)));
      puVar10 = (ulong *)((long)&uStack_358 + uVar19);
LAB_0063e683:
      *(ulong *)((long)puVar10 + 0x10) = uVar2;
      *(ulong *)((long)puVar10 + 0x18) = uVar18;
    }
    uVar15 = uVar15 + 1;
    uVar8 = uVar8 + 0x10;
  } while (uVar15 != uVar20);
LAB_0063e709:
  puVar10 = local_338 + uVar20 * 2 + -2;
  puVar7 = local_338 + uVar20 * 2;
  if (uVar9 < uVar11) {
    uVar15 = (ulong)(uint)((int)uVar9 << 4);
    do {
      uVar8 = (param_1 + uVar20 * 2 + uVar9 * 2)[1];
      puVar7[uVar9 * 2] = param_1[uVar20 * 2 + uVar9 * 2];
      (puVar7 + uVar9 * 2)[1] = uVar8;
      uVar8 = puVar7[uVar9 * 2];
      uVar2 = local_338[uVar20 * 2 + uVar9 * 2 + 1];
      if (uVar2 < local_338[uVar20 * 2 + uVar9 * 2 + -1] ||
          uVar2 - local_338[uVar20 * 2 + uVar9 * 2 + -1] < (ulong)(uVar8 < puVar10[uVar9 * 2])) {
        uVar18 = uVar15;
        do {
          uVar5 = ((undefined8 *)((long)puVar10 + uVar18))[1];
          *(undefined8 *)((long)puVar7 + uVar18) = *(undefined8 *)((long)puVar10 + uVar18);
          ((undefined8 *)((long)puVar7 + uVar18))[1] = uVar5;
          if (uVar18 == 0x10) {
            puVar12 = puVar7;
            goto LAB_0063e743;
          }
          uVar1 = uVar18 - 0x10;
          lVar6 = uVar18 + uVar20 * 0x10;
          puVar12 = (ulong *)((long)local_338 + uVar18 + uVar20 * 0x10 + -0x18);
          uVar18 = uVar1;
        } while (uVar2 < *puVar12 ||
                 uVar2 - *puVar12 < (ulong)(uVar8 < *(ulong *)((long)&uStack_358 + lVar6)));
        puVar12 = (ulong *)(uVar1 + (long)puVar7);
LAB_0063e743:
        *puVar12 = uVar8;
        puVar12[1] = uVar2;
      }
      uVar9 = uVar9 + 1;
      uVar15 = uVar15 + 0x10;
    } while (uVar9 != uVar11);
  }
  puVar12 = local_338 + param_2 * 2 + -2;
  puVar13 = local_338;
  puVar17 = param_1 + param_2 * 2;
  do {
    puVar14 = param_1;
    bVar21 = puVar7[1] < puVar13[1];
    bVar24 = puVar7[1] - puVar13[1] < (ulong)(*puVar7 < *puVar13);
    puVar16 = puVar7;
    if (!bVar21 && !bVar24) {
      puVar16 = puVar13;
    }
    uVar9 = puVar16[1];
    *puVar14 = *puVar16;
    puVar14[1] = uVar9;
    uVar9 = puVar12[1];
    bVar22 = uVar9 < puVar10[1];
    bVar3 = uVar9 - puVar10[1] < (ulong)(*puVar12 < *puVar10);
    bVar23 = bVar22 || bVar3;
    puVar16 = puVar10;
    if (!bVar22 && !bVar3) {
      puVar16 = puVar12;
    }
    puVar7 = puVar7 + (ulong)(bVar21 || bVar24) * 2;
    puVar13 = puVar13 + (ulong)(!bVar21 && !bVar24) * 2;
    uVar9 = puVar16[1];
    puVar17[-2] = *puVar16;
    puVar17[-1] = uVar9;
    puVar12 = puVar12 + ((ulong)bVar23 - 1) * 2;
    puVar10 = puVar10 + (ulong)bVar23 * -2;
    uVar20 = uVar20 - 1;
    param_1 = puVar14 + 2;
    puVar17 = puVar17 + -2;
  } while (uVar20 != 0);
  if ((param_2 & 1) != 0) {
    bVar24 = puVar13 < puVar10 + 2;
    puVar17 = puVar7;
    if (bVar24) {
      puVar17 = puVar13;
    }
    uVar20 = puVar17[1];
    puVar14[2] = *puVar17;
    puVar14[3] = uVar20;
    puVar13 = puVar13 + (ulong)bVar24 * 2;
    puVar7 = puVar7 + (ulong)!bVar24 * 2;
  }
  if ((puVar13 != puVar10 + 2) || (puVar7 != puVar12 + 2)) {
                    /* WARNING: Subroutine does not return */
    puStack_350 = &UNK_0063e903;
    shared::smallsort::panic_on_ord_violation();
  }
  return;
}


// ==== core::slice::sort::unstable::quicksort::quicksort::<pipeline::Rec, <[pipeline::Rec]>::sort_unstable_by_key<u64, pipeline::events::simple_run::{closure#2}>::{closure#0}> @ 0063e920 (2339 bytes)

/* WARNING: Type propagation algorithm not settling */
/* core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::<pipeline[509596c7b52975b2]::Rec,
   <[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,
   pipeline[509596c7b52975b2]::events::simple_run::{closure#2}>::{closure#0}> */

void __rustcall
core[62e902411887be45]::slice::sort::unstable::quicksort::quicksort::
<pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
          (ulong *param_1,ulong param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  bool bVar22;
  bool bVar23;
  ulong auStack_388 [9];
  undefined *puStack_340;
  ulong local_338 [16];
  undefined1 auStack_2b8 [648];
  
  puVar9 = local_338;
  if (0x20 < param_2) {
    puVar7 = param_1;
    do {
      while( true ) {
        if (param_4 == 0) {
          heapsort::heapsort::
          <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                    (puVar7,param_2);
          return;
        }
        if (param_2 < 0x40) break;
        puStack_340 = (undefined *)0x63ea7e;
        lVar16 = shared::pivot::median3_rec::
                 <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                           (puVar7);
        lVar16 = lVar16 - (long)puVar7;
        if (param_3 != (ulong *)0x0) goto LAB_0063ea8c;
LAB_0063ea9a:
        uVar21 = *puVar7;
        uVar8 = puVar7[1];
        uVar10 = ((ulong *)((long)puVar7 + lVar16))[1];
        *puVar7 = *(ulong *)((long)puVar7 + lVar16);
        puVar7[1] = uVar10;
        *(ulong *)((long)puVar7 + lVar16) = uVar21;
        ((ulong *)((long)puVar7 + lVar16))[1] = uVar8;
        local_338[0] = puVar7[2];
        local_338[1] = puVar7[3];
        puVar5 = puVar7 + 2;
        puVar12 = puVar7 + 4;
        uVar21 = *puVar7;
        if (puVar12 < puVar7 + param_2 * 2 + -2) {
          uVar8 = 0;
          do {
            puVar15 = puVar12;
            uVar10 = *puVar15;
            uVar14 = (puVar5 + uVar8 * 2)[1];
            puVar15[-2] = puVar5[uVar8 * 2];
            puVar15[-1] = uVar14;
            uVar14 = puVar15[1];
            puVar5[uVar8 * 2] = *puVar15;
            (puVar5 + uVar8 * 2)[1] = uVar14;
            lVar16 = uVar8 + (uVar10 < uVar21);
            uVar14 = puVar15[2];
            uVar6 = (puVar5 + lVar16 * 2)[1];
            *puVar15 = puVar5[lVar16 * 2];
            puVar15[1] = uVar6;
            uVar6 = puVar15[3];
            puVar5[lVar16 * 2] = puVar15[2];
            (puVar5 + lVar16 * 2)[1] = uVar6;
            uVar8 = uVar8 + (uVar10 < uVar21) + (ulong)(uVar14 < uVar21);
            puVar12 = puVar15 + 4;
          } while (puVar12 < puVar7 + param_2 * 2 + -2);
          puVar15 = puVar15 + 2;
        }
        else {
          uVar8 = 0;
          puVar15 = puVar5;
        }
        do {
          puVar11 = puVar12;
          puVar12 = puVar11;
          if (puVar11 == puVar7 + param_2 * 2) {
            puVar12 = local_338;
          }
          uVar14 = uVar8 + (*puVar12 < uVar21);
          uVar10 = (puVar5 + uVar8 * 2)[1];
          *puVar15 = puVar5[uVar8 * 2];
          puVar15[1] = uVar10;
          uVar10 = puVar12[1];
          puVar5[uVar8 * 2] = *puVar12;
          (puVar5 + uVar8 * 2)[1] = uVar10;
          puVar12 = puVar11 + 2;
          uVar8 = uVar14;
          puVar15 = puVar11;
        } while (puVar11 != puVar7 + param_2 * 2);
        if (param_2 <= uVar14) {
LAB_0063ed09:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_338[0] = *puVar7;
        local_338[1] = puVar7[1];
        uVar21 = (puVar7 + uVar14 * 2)[1];
        *puVar7 = puVar7[uVar14 * 2];
        puVar7[1] = uVar21;
        puVar7[uVar14 * 2] = local_338[0];
        (puVar7 + uVar14 * 2)[1] = local_338[1];
        param_1 = puVar7 + uVar14 * 2 + 2;
        param_2 = param_2 + ~uVar14;
        puStack_340 = (undefined *)0x63ebf6;
        <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
                  (puVar7,uVar14,param_3,param_4 + -1);
        param_3 = puVar7 + uVar14 * 2;
        puVar7 = param_1;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto code_r0x0063e940;
      }
      uVar21 = *puVar7;
      uVar8 = puVar7[(param_2 >> 3) * 8];
      uVar10 = puVar7[(param_2 >> 3) * 0xe];
      puVar5 = puVar7 + (param_2 >> 3) * 8;
      if (uVar8 < uVar10 != uVar21 < uVar8) {
        puVar5 = puVar7 + (param_2 >> 3) * 0xe;
      }
      if (uVar21 < uVar10 != uVar21 < uVar8) {
        puVar5 = puVar7;
      }
      lVar16 = (long)puVar5 - (long)puVar7;
      if (param_3 == (ulong *)0x0) goto LAB_0063ea9a;
LAB_0063ea8c:
      if (*param_3 < *(ulong *)((long)puVar7 + lVar16)) goto LAB_0063ea9a;
      puVar5 = (ulong *)(lVar16 + (long)puVar7);
      uVar21 = *puVar7;
      uVar8 = puVar7[1];
      uVar10 = puVar5[1];
      *puVar7 = *puVar5;
      puVar7[1] = uVar10;
      *puVar5 = uVar21;
      puVar5[1] = uVar8;
      local_338[0] = puVar7[2];
      local_338[1] = puVar7[3];
      puVar5 = puVar7 + 2;
      puVar12 = puVar7 + 4;
      uVar21 = *puVar7;
      if (puVar12 < puVar7 + param_2 * 2 + -2) {
        uVar8 = 0;
        do {
          puVar15 = puVar12;
          uVar10 = *puVar15;
          uVar14 = (puVar5 + uVar8 * 2)[1];
          puVar15[-2] = puVar5[uVar8 * 2];
          puVar15[-1] = uVar14;
          uVar14 = puVar15[1];
          puVar5[uVar8 * 2] = *puVar15;
          (puVar5 + uVar8 * 2)[1] = uVar14;
          lVar16 = (uVar8 + 1) - (ulong)(uVar21 < uVar10);
          uVar8 = puVar15[2];
          uVar10 = (puVar5 + lVar16 * 2)[1];
          *puVar15 = puVar5[lVar16 * 2];
          puVar15[1] = uVar10;
          uVar10 = puVar15[3];
          puVar5[lVar16 * 2] = puVar15[2];
          (puVar5 + lVar16 * 2)[1] = uVar10;
          uVar8 = (lVar16 + 1) - (ulong)(uVar21 < uVar8);
          puVar12 = puVar15 + 4;
        } while (puVar12 < puVar7 + param_2 * 2 + -2);
        puVar15 = puVar15 + 2;
      }
      else {
        uVar8 = 0;
        puVar15 = puVar5;
      }
      do {
        puVar11 = puVar12;
        puVar12 = puVar11;
        if (puVar11 == puVar7 + param_2 * 2) {
          puVar12 = local_338;
        }
        uVar14 = (uVar8 + 1) - (ulong)(uVar21 < *puVar12);
        uVar10 = (puVar5 + uVar8 * 2)[1];
        *puVar15 = puVar5[uVar8 * 2];
        puVar15[1] = uVar10;
        uVar10 = puVar12[1];
        puVar5[uVar8 * 2] = *puVar12;
        (puVar5 + uVar8 * 2)[1] = uVar10;
        uVar8 = uVar14;
        puVar12 = puVar11 + 2;
        puVar15 = puVar11;
      } while (puVar11 != puVar7 + param_2 * 2);
      if (param_2 <= uVar14) goto LAB_0063ed09;
      local_338[0] = *puVar7;
      local_338[1] = puVar7[1];
      uVar21 = (puVar7 + uVar14 * 2)[1];
      *puVar7 = puVar7[uVar14 * 2];
      puVar7[1] = uVar21;
      puVar7[uVar14 * 2] = local_338[0];
      (puVar7 + uVar14 * 2)[1] = local_338[1];
      param_2 = param_2 - (uVar14 + 1);
      param_1 = puVar7 + (uVar14 + 1) * 2;
      param_3 = (ulong *)0x0;
      puVar7 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
code_r0x0063e940:
  if (param_2 < 2) {
    return;
  }
  uVar21 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      local_338[0] = *param_1;
      local_338[1] = param_1[1];
      uVar8 = (param_1 + uVar21 * 2)[1];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 8) * 8 + 0x10) = param_1[uVar21 * 2];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 9) * 8 + 0x10) = uVar8;
      uVar8 = 1;
      uVar10 = param_2 - uVar21;
      if (1 < uVar21) goto LAB_0063eef5;
    }
    else {
      uVar10 = (ulong)(param_1[2] < *param_1);
      uVar14 = (ulong)(param_1[2] >= *param_1);
      puVar7 = param_1 + uVar14 * 2;
      uVar6 = (ulong)(param_1[6] < param_1[4]);
      puVar15 = param_1 + uVar6 * 2 + 4;
      uVar8 = (ulong)((param_1[6] < param_1[4] ^ 3) << 4);
      puVar5 = (ulong *)((long)param_1 + uVar8);
      uVar8 = *(ulong *)((long)param_1 + uVar8);
      puVar12 = puVar7;
      if (uVar8 < param_1[uVar14 * 2]) {
        puVar12 = puVar15;
      }
      puVar13 = puVar15;
      puVar11 = param_1 + uVar10 * 2;
      if (param_1[uVar6 * 2 + 4] < param_1[uVar10 * 2]) {
        puVar13 = puVar7;
        puVar11 = puVar15;
        puVar12 = param_1 + uVar10 * 2;
      }
      if (uVar8 < param_1[uVar14 * 2]) {
        puVar13 = puVar5;
      }
      else {
        puVar7 = puVar5;
      }
      puVar5 = puVar13;
      if (*puVar13 < *puVar12) {
        puVar5 = puVar12;
        puVar12 = puVar13;
      }
      local_338[0] = *puVar11;
      local_338[1] = puVar11[1];
      local_338[2] = *puVar12;
      local_338[3] = puVar12[1];
      local_338[4] = *puVar5;
      local_338[5] = puVar5[1];
      local_338[6] = *puVar7;
      local_338[7] = puVar7[1];
      uVar10 = (ulong)(param_1[uVar21 * 2 + 2] < param_1[uVar21 * 2]);
      uVar14 = (ulong)(param_1[uVar21 * 2 + 2] >= param_1[uVar21 * 2]);
      puVar7 = param_1 + uVar21 * 2 + uVar14 * 2;
      uVar6 = (ulong)(param_1[uVar21 * 2 + 6] < param_1[uVar21 * 2 + 4]);
      puVar12 = param_1 + uVar21 * 2 + uVar6 * 2 + 4;
      uVar17 = (ulong)((param_1[uVar21 * 2 + 6] < param_1[uVar21 * 2 + 4] ^ 3) << 4);
      uVar8 = *(ulong *)((long)param_1 + uVar17 + uVar21 * 0x10);
      puVar5 = puVar7;
      if (uVar8 < param_1[uVar21 * 2 + uVar14 * 2]) {
        puVar5 = puVar12;
      }
      puVar15 = (ulong *)((long)param_1 + uVar17 + uVar21 * 0x10);
      puVar13 = puVar12;
      puVar11 = param_1 + uVar21 * 2 + uVar10 * 2;
      if (param_1[uVar21 * 2 + uVar6 * 2 + 4] < param_1[uVar21 * 2 + uVar10 * 2]) {
        puVar13 = puVar7;
        puVar11 = puVar12;
        puVar5 = param_1 + uVar21 * 2 + uVar10 * 2;
      }
      if (uVar8 < param_1[uVar21 * 2 + uVar14 * 2]) {
        puVar13 = puVar15;
      }
      else {
        puVar7 = puVar15;
      }
      puVar12 = puVar13;
      if (*puVar13 < *puVar5) {
        puVar12 = puVar5;
        puVar5 = puVar13;
      }
      uVar8 = puVar11[1];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 8) * 8 + 0x10) = *puVar11;
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 9) * 8 + 0x10) = uVar8;
      uVar8 = puVar5[1];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 10) * 8 + 0x10) = *puVar5;
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 0xb) * 8 + 0x10) = uVar8;
      uVar8 = puVar12[1];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 0xc) * 8 + 0x10) = *puVar12;
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 0xd) * 8 + 0x10) = uVar8;
      uVar8 = puVar7[1];
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 0xe) * 8 + 0x10) = *puVar7;
      *(ulong *)((long)auStack_388 + (uVar21 * 2 + 0xf) * 8 + 0x10) = uVar8;
      uVar8 = 4;
      uVar10 = param_2 - uVar21;
      if (4 < uVar21) {
LAB_0063eef5:
        uVar6 = (ulong)(uint)((int)uVar8 << 4);
        uVar14 = uVar8;
        do {
          uVar17 = (param_1 + uVar14 * 2)[1];
          *(ulong *)((long)auStack_388 + (uVar14 * 2 + 8) * 8 + 0x10) = param_1[uVar14 * 2];
          *(ulong *)((long)auStack_388 + (uVar14 * 2 + 9) * 8 + 0x10) = uVar17;
          uVar17 = *(ulong *)((long)auStack_388 + (uVar14 * 2 + 8) * 8 + 0x10);
          if (uVar17 < *(ulong *)((long)auStack_388 + (uVar14 * 2 + 6) * 8 + 0x10)) {
            uVar19 = *(ulong *)((long)auStack_388 + (uVar14 * 2 + 9) * 8 + 0x10);
            uVar1 = uVar6;
            do {
              uVar18 = uVar1;
              uVar4 = *(undefined8 *)((long)auStack_388 + uVar18 + 0x48);
              *(undefined8 *)((long)local_338 + uVar18) =
                   *(undefined8 *)((long)auStack_388 + uVar18 + 0x40);
              *(undefined8 *)((long)local_338 + uVar18 + 8) = uVar4;
              if (uVar18 == 0x10) {
                puVar7 = local_338;
                goto LAB_0063ef13;
              }
              uVar1 = uVar18 - 0x10;
            } while (uVar17 < *(ulong *)((long)auStack_388 + uVar18 + 0x30));
            puVar7 = (ulong *)((long)auStack_388 + uVar18 + 0x40);
LAB_0063ef13:
            *puVar7 = uVar17;
            puVar7[1] = uVar19;
          }
          uVar14 = uVar14 + 1;
          uVar6 = uVar6 + 0x10;
        } while (uVar14 != uVar21);
      }
    }
  }
  else {
    puStack_340 = (undefined *)0x63e970;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
              (param_1,local_338,(ulong *)((long)auStack_388 + (param_2 * 2 + 8) * 8 + 0x10));
    puStack_340 = (undefined *)0x63e98f;
    shared::smallsort::sort8_stable::
    <pipeline[509596c7b52975b2]::Rec,<[pipeline[509596c7b52975b2]::Rec]>::sort_unstable_by_key<u64,pipeline[509596c7b52975b2]::events::simple_run::_closure_2_>::_closure_0_>
              (param_1 + uVar21 * 2,(ulong *)((long)auStack_388 + (uVar21 * 2 + 8) * 8 + 0x10),
               auStack_2b8 + param_2 * 0x10);
    uVar8 = 8;
    uVar10 = param_2 - uVar21;
    if (8 < uVar21) goto LAB_0063eef5;
  }
  puVar7 = (ulong *)((long)auStack_388 + (uVar21 * 2 + 8) * 8 + 0x10);
  if (uVar8 < uVar10) {
    uVar14 = (ulong)(uint)((int)uVar8 << 4);
    do {
      uVar6 = (param_1 + uVar21 * 2 + uVar8 * 2)[1];
      puVar7[uVar8 * 2] = param_1[uVar21 * 2 + uVar8 * 2];
      (puVar7 + uVar8 * 2)[1] = uVar6;
      uVar6 = puVar7[uVar8 * 2];
      if (uVar6 < *(ulong *)((long)auStack_388 + (uVar21 * 2 + uVar8 * 2 + 6) * 8 + 0x10)) {
        uVar17 = puVar7[uVar8 * 2 + 1];
        uVar19 = uVar14;
        do {
          puVar2 = (undefined8 *)((long)auStack_388 + uVar19 + uVar21 * 0x10 + 0x40);
          uVar4 = puVar2[1];
          *(undefined8 *)((long)puVar7 + uVar19) = *puVar2;
          ((undefined8 *)((long)puVar7 + uVar19))[1] = uVar4;
          if (uVar19 == 0x10) {
            puVar5 = puVar7;
            goto LAB_0063efb3;
          }
          uVar1 = uVar19 - 0x10;
          lVar16 = uVar19 + uVar21 * 0x10;
          uVar19 = uVar1;
        } while (uVar6 < *(ulong *)((long)auStack_388 + lVar16 + 0x30U));
        puVar5 = (ulong *)(uVar1 + (long)puVar7);
LAB_0063efb3:
        *puVar5 = uVar6;
        puVar5[1] = uVar17;
      }
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + 0x10;
    } while (uVar8 != uVar10);
  }
  puVar15 = param_1 + param_2 * 2 + -2;
  puVar12 = (ulong *)((long)auStack_388 + (param_2 * 2 + 6) * 8 + 0x10);
  puVar5 = (ulong *)((long)auStack_388 + (uVar21 * 2 + 6) * 8 + 0x10);
  if (uVar21 == 1) {
LAB_0063f19a:
    bVar22 = *puVar7 < *puVar9;
    puVar11 = puVar9;
    if (bVar22) {
      puVar11 = puVar7;
    }
    uVar21 = puVar11[1];
    *param_1 = *puVar11;
    param_1[1] = uVar21;
    uVar21 = *puVar12;
    uVar8 = *puVar5;
    puVar11 = puVar12;
    if (uVar21 < uVar8) {
      puVar11 = puVar5;
    }
    puVar7 = puVar7 + (ulong)bVar22 * 2;
    puVar9 = puVar9 + (ulong)!bVar22 * 2;
    param_1 = param_1 + 2;
    uVar10 = puVar11[1];
    *puVar15 = *puVar11;
    puVar15[1] = uVar10;
    puVar5 = puVar5 + (ulong)(uVar21 < uVar8) * -2 + 2;
    puVar12 = puVar12 + ((ulong)(uVar21 < uVar8) - 1) * 2 + 2;
    if ((param_2 & 1) == 0) goto LAB_0063f16c;
LAB_0063f21d:
    bVar22 = puVar9 < puVar5;
    puVar15 = puVar7;
    if (bVar22) {
      puVar15 = puVar9;
    }
    uVar21 = puVar15[1];
    *param_1 = *puVar15;
    param_1[1] = uVar21;
    bVar23 = puVar7 + (ulong)!bVar22 * 2 != puVar12;
    if (puVar9 + (ulong)bVar22 * 2 != puVar5) goto LAB_0063f268;
  }
  else {
    uVar21 = (ulong)((uint)uVar21 & 0x1e);
    puVar9 = local_338;
    do {
      bVar22 = *puVar7 < *puVar9;
      puVar11 = puVar9;
      if (bVar22) {
        puVar11 = puVar7;
      }
      uVar8 = puVar11[1];
      *param_1 = *puVar11;
      param_1[1] = uVar8;
      uVar8 = *puVar12;
      uVar10 = *puVar5;
      lVar16 = (ulong)(uVar8 < uVar10) - 1;
      puVar11 = puVar12;
      if (uVar8 < uVar10) {
        puVar11 = puVar5;
      }
      uVar14 = puVar11[1];
      *puVar15 = *puVar11;
      puVar15[1] = uVar14;
      uVar14 = (ulong)(uVar8 < uVar10);
      uVar6 = (ulong)bVar22;
      puVar11 = puVar7 + uVar6 * 2;
      uVar17 = (ulong)!bVar22;
      puVar13 = puVar9 + uVar17 * 2;
      uVar8 = puVar7[uVar6 * 2];
      uVar10 = puVar9[uVar17 * 2];
      puVar20 = puVar13;
      puVar9 = puVar9 + uVar17 * 2 + 2;
      if (uVar8 < uVar10) {
        puVar20 = puVar11;
        puVar9 = puVar13;
      }
      uVar17 = puVar20[1];
      param_1[2] = *puVar20;
      param_1[3] = uVar17;
      puVar7 = puVar7 + uVar6 * 2 + 2;
      if (uVar8 >= uVar10) {
        puVar7 = puVar11;
      }
      uVar8 = puVar12[lVar16 * 2];
      uVar10 = puVar5[uVar14 * -2];
      puVar11 = puVar12 + lVar16 * 2;
      if (uVar8 < uVar10) {
        puVar11 = puVar5 + uVar14 * -2;
      }
      param_1 = param_1 + 4;
      uVar6 = puVar11[1];
      puVar15[-2] = *puVar11;
      puVar15[-1] = uVar6;
      puVar12 = puVar12 + lVar16 * 2 + ((ulong)(uVar8 < uVar10) - 1) * 2;
      puVar5 = puVar5 + uVar14 * -2 + (ulong)(uVar8 < uVar10) * -2;
      puVar15 = puVar15 + -4;
      uVar21 = uVar21 - 2;
    } while (uVar21 != 0);
    if ((param_2 & 2) != 0) goto LAB_0063f19a;
    puVar5 = puVar5 + 2;
    puVar12 = puVar12 + 2;
    if ((param_2 & 1) != 0) goto LAB_0063f21d;
LAB_0063f16c:
    bVar23 = puVar7 != puVar12;
    if (puVar9 != puVar5) goto LAB_0063f268;
  }
  if (!bVar23) {
    return;
  }
LAB_0063f268:
                    /* WARNING: Subroutine does not return */
  puStack_340 = &UNK_0063f26d;
  shared::smallsort::panic_on_ord_violation();
}


