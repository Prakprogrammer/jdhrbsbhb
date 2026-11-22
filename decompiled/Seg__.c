// ==== <alloc::raw_vec::RawVec<pipeline::Seg>>::grow_one @ 006a0520 (101 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::Seg>>::grow_one */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::Seg>>::grow_one
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
            (local_28,*param_1,param_1[1],uVar2,4,0x10);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


