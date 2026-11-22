// ==== <pipeline::G>::id_str @ 006a1680 (636 bytes)

/* <pipeline[509596c7b52975b2]::G>::id_str */

void __rustcall
<pipeline[509596c7b52975b2]::G>::id_str
          (long param_1,ulong param_2,undefined1 param_3,ulong *param_4)

{
  ulong in_RAX;
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_38;
  
  param_4[2] = 0;
  if ((param_2 >> 0x2a & 1) == 0) {
    uVar1 = (uint)(param_2 / 0x19a100);
    uVar4 = (param_2 / 0x19a100 & 0xffffffff) / 0x510;
    if (0x19a0ff < uVar1) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(uVar4,0x510,&PTR_s_src_main_rs_00211300)
      ;
    }
    param_2 = param_2 % 0x19a100;
    uVar8 = CONCAT26((&pipeline[509596c7b52975b2]::PAIR36)
                     [(uint)((int)param_2 + (int)(param_2 / 0x510) * -0x510)],
                     CONCAT24((&pipeline[509596c7b52975b2]::PAIR36)[param_2 / 0x510],
                              CONCAT22((&pipeline[509596c7b52975b2]::PAIR36)
                                       [uVar1 + (int)uVar4 * -0x510],
                                       (&pipeline[509596c7b52975b2]::PAIR36)[uVar4])));
    uVar4 = uVar8 ^ 0x3030303030303030;
    uVar6 = 7;
    if (uVar8 != 0x3030303030303030) {
      uVar6 = (ulong)LZCOUNT(uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                             (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                             (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) >> 3;
    }
    uVar7 = 8 - uVar6;
    uVar4 = *param_4;
    if (uVar4 == 0) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<u8>>::grow_one(param_4);
      uVar4 = *param_4;
    }
    puVar3 = &local_38;
    puVar5 = (undefined1 *)param_4[1];
    *puVar5 = param_3;
    param_4[2] = 1;
    local_38 = uVar8 >> ((ulong)(uint)((int)uVar6 * 8) & 0x3f);
    if (uVar4 - 1 < uVar7) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_4,1,uVar7,1,1);
      puVar5 = (undefined1 *)param_4[1];
      uVar4 = param_4[2];
    }
    else {
      uVar4 = 1;
      if ((int)uVar6 == 8) goto LAB_006a184e;
    }
    puVar5 = puVar5 + uVar4;
  }
  else {
    uVar4 = (ulong)((uint)(param_2 >> 0x22) & 0xf);
    if (*(ulong *)(param_1 + 0xa0) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (uVar4,*(ulong *)(param_1 + 0xa0),&PTR_s_src_main_rs_00210588);
    }
    param_2 = param_2 & 0x3ffffffff;
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x98) + 0x240 + uVar4 * 0x7a0);
    if (uVar7 <= param_2) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check
                (param_2,uVar7,&PTR_s_src_main_rs_002127b0);
    }
    lVar2 = *(long *)(param_1 + 0x98) + uVar4 * 0x7a0;
    uVar4 = *(ulong *)(*(long *)(lVar2 + 0x238) + param_2 * 0x10);
    uVar7 = (ulong)*(uint *)(*(long *)(lVar2 + 0x238) + 8 + param_2 * 0x10);
    if ((CARRY8(uVar4,uVar7)) || (*(ulong *)(lVar2 + 600) < uVar4 + uVar7)) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (uVar4,uVar4 + uVar7,*(ulong *)(lVar2 + 600),&PTR_s_src_main_rs_002127c8);
    }
    puVar3 = (ulong *)(uVar4 + *(long *)(lVar2 + 0x250));
    local_38 = in_RAX;
    if (*param_4 < uVar7) {
      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_4,0,uVar7,1,1);
      uVar4 = param_4[2];
    }
    else {
      uVar4 = 0;
      if (uVar7 == 0) goto LAB_006a184e;
    }
    puVar5 = (undefined1 *)(param_4[1] + uVar4);
  }
  (*(code *)PTR_memcpy_00841de0)(puVar5,puVar3,uVar7);
LAB_006a184e:
  param_4[2] = uVar4 + uVar7;
  return;
}


