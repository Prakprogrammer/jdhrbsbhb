// ==== <alloc::raw_vec::RawVec<core::cell::UnsafeCell<pipeline::TState>>>::grow_one @ 006a03a0 (98 bytes)

/* <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::TState>>>::grow_one
    */

void __rustcall
<alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::TState>>>
::grow_one(long *param_1)

{
  long lVar1;
  long lVar2;
  int local_28 [2];
  long local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  lVar2 = 1;
  if (lVar1 != 0) {
    lVar2 = lVar1 * 2;
  }
  <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner>::finish_grow
            (local_28,lVar1,param_1[1],lVar2,8,0x7a0);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = lVar2;
  return;
}


