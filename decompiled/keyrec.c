// ==== core::ptr::drop_glue::<pipeline::keyrec::Sample> @ 00608ce0 (329 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::keyrec::Sample>(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
        (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
       (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
      free(puVar1);
    }
    else {
      uVar3 = *param_1 * 0x28 - 1;
      lVar4 = LZCOUNT(uVar3);
      lVar5 = 0x40 - lVar4;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar5), cVar2 == '\0')) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = puVar1;
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


// ==== core::slice::sort::select::median_of_medians::<(u32, u64), <[(u32, u64)]>::select_nth_unstable_by<pipeline::keyrec::recover_user_key::{closure#3}>::{closure#0}> @ 00614cc0 (3091 bytes)

/* core[62e902411887be45]::slice::sort::select::median_of_medians::<(u32, u64), <[(u32,
   u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::{closure#3}>::{closure#0}>
    */

void __rustcall
core[62e902411887be45]::slice::sort::select::median_of_medians::
<(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
          (uint *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *local_b0;
  ulong local_a8;
  uint *local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  while (0x10 < param_2) {
    local_b0 = param_1;
    if (param_3 == param_2 - 1) {
      uVar23 = param_2 + 0xfffffffffffffff;
      uVar26 = *param_1;
      if ((uVar23 & 0xfffffffffffffff) - 1 < 3) {
        uVar18 = 0;
        uVar12 = 0;
        goto LAB_00615597;
      }
      uVar18 = 0;
      uVar12 = 0;
      puVar9 = param_1;
      do {
        uVar19 = uVar18 + 1;
        uVar15 = puVar9[4];
        if (uVar26 <= uVar15) {
          uVar15 = uVar26;
          uVar19 = uVar12;
        }
        if (puVar9[8] < uVar15) {
          uVar15 = puVar9[8];
          uVar19 = uVar18 + 2;
        }
        uVar24 = uVar18 + 3;
        uVar21 = puVar9[0xc];
        if (uVar15 <= uVar21) {
          uVar21 = uVar15;
          uVar24 = uVar19;
        }
        uVar18 = uVar18 + 4;
        uVar26 = puVar9[0x10];
        uVar12 = uVar18;
        if (uVar21 <= uVar26) {
          uVar12 = uVar24;
          uVar26 = uVar21;
        }
        puVar9 = puVar9 + 0x10;
      } while ((uVar23 & 0xffffffffffffffc) != uVar18);
      if ((uVar23 & 3) != 0) {
LAB_00615597:
        lVar25 = uVar18 * 0x10;
        uVar19 = 0;
        do {
          uVar18 = uVar18 + 1;
          uVar15 = *(uint *)((long)param_1 + uVar19 + lVar25 + 0x10);
          if (uVar15 < uVar26) {
            uVar12 = uVar18;
            uVar26 = uVar15;
          }
          uVar19 = uVar19 + 0x10;
        } while (((uint)uVar23 & 3) << 4 != uVar19);
      }
      if (param_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (uVar12,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210358);
      }
      uVar2 = *(undefined8 *)(param_1 + uVar12 * 4);
      uVar4 = *(undefined8 *)(param_1 + uVar12 * 4 + 2);
      uVar5 = *(undefined8 *)(param_1 + param_3 * 4 + 2);
      *(undefined8 *)(param_1 + uVar12 * 4) = *(undefined8 *)(param_1 + param_3 * 4);
      *(undefined8 *)(param_1 + uVar12 * 4 + 2) = uVar5;
      *(undefined8 *)(param_1 + param_3 * 4) = uVar2;
      *(undefined8 *)(param_1 + param_3 * 4 + 2) = uVar4;
      return;
    }
    if (param_3 == 0) {
      uVar23 = param_2 + 0xfffffffffffffff;
      uVar26 = *param_1;
      if ((uVar23 & 0xfffffffffffffff) - 1 < 3) {
        uVar18 = 0;
        uVar12 = 0;
        goto LAB_00615691;
      }
      uVar18 = 0;
      uVar12 = 0;
      puVar9 = param_1;
      do {
        uVar15 = puVar9[4];
        uVar21 = puVar9[8];
        if (uVar26 < uVar15) {
          uVar12 = uVar18 + 1;
        }
        if (uVar15 < uVar26) {
          uVar15 = uVar26;
        }
        uVar19 = uVar18 + 2;
        if (uVar21 <= uVar15) {
          uVar19 = uVar12;
        }
        if (uVar15 <= uVar21) {
          uVar15 = uVar21;
        }
        uVar26 = puVar9[0xc];
        uVar12 = uVar18 + 3;
        if (uVar26 <= uVar15) {
          uVar12 = uVar19;
        }
        if (uVar15 <= uVar26) {
          uVar15 = uVar26;
        }
        uVar18 = uVar18 + 4;
        uVar21 = puVar9[0x10];
        if (uVar15 < uVar21) {
          uVar12 = uVar18;
        }
        uVar26 = uVar15;
        if (uVar15 <= uVar21) {
          uVar26 = uVar21;
        }
        puVar9 = puVar9 + 0x10;
      } while ((uVar23 & 0xffffffffffffffc) != uVar18);
      if ((uVar23 & 3) != 0) {
LAB_00615691:
        lVar25 = uVar18 * 0x10;
        uVar19 = 0;
        do {
          uVar18 = uVar18 + 1;
          uVar15 = *(uint *)((long)param_1 + uVar19 + lVar25 + 0x10);
          if (uVar26 < uVar15) {
            uVar12 = uVar18;
          }
          if (uVar15 < uVar26) {
            uVar15 = uVar26;
          }
          uVar26 = uVar15;
          uVar19 = uVar19 + 0x10;
        } while (((uint)uVar23 & 3) << 4 != uVar19);
      }
      if (param_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (uVar12,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210340);
      }
      uVar2 = *(undefined8 *)(param_1 + uVar12 * 4);
      uVar4 = *(undefined8 *)(param_1 + uVar12 * 4 + 2);
      uVar5 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + uVar12 * 4) = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + uVar12 * 4 + 2) = uVar5;
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 2) = uVar4;
      return;
    }
    if (param_2 < 0x401) {
      local_50 = (ulong)((uint)((int)param_2 * 0xaaab) >> 0x13);
    }
    else if (param_2 < 0x20001) {
      local_50 = param_2 >> 6;
    }
    else {
      local_50 = param_2 >> 10;
    }
    local_60 = local_50 >> 1;
    local_58 = param_2 >> 1;
    local_48 = local_58 - local_60;
    local_a8 = local_50 + local_48;
    local_68 = param_3;
    if (local_48 < local_a8) {
      uVar12 = param_2 + local_50 * -9 >> 2;
      lVar10 = -local_60;
      lVar28 = (local_58 - uVar12) + local_50 * -4;
      local_70 = local_58 * 0x10 + (local_60 + uVar12) * -0x10 + local_50 * -0x40 + 0x20;
      lVar25 = local_50 + local_58;
      lVar13 = uVar12 + lVar25;
      local_78 = lVar13 * 0x10 + local_60 * -0x10 + 0x20;
      lVar8 = local_58 - local_50;
      lVar11 = (lVar8 - local_60) * 0x10;
      lVar16 = local_a8 * 0x10;
      uVar23 = local_50;
      lVar6 = local_58 * 0x10 + local_60 * -0x10;
      lVar22 = (local_a8 + uVar12) * 0x10;
      lVar27 = (local_48 - (local_50 * 4 + uVar12)) * 0x10;
      local_38 = local_58;
      do {
        local_80 = lVar6;
        uVar12 = uVar23;
        uVar23 = lVar10 + lVar13;
        if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002102c8);
        }
        uVar18 = lVar10 + lVar28;
        if (param_2 <= uVar18) {
LAB_006157f7:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002102e0);
        }
        if (*(uint *)((long)param_1 + lVar27) < *(uint *)((long)param_1 + lVar22)) {
          uVar19 = uVar18;
        }
        else {
          uVar19 = uVar23;
          uVar23 = uVar18;
        }
        if (param_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar19,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002102f8);
        }
        uVar18 = lVar10 + lVar8;
        local_90 = uVar12;
        local_88 = lVar27;
        if (param_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210310);
        }
        uVar26 = param_1[uVar19 * 4];
        uVar15 = *(uint *)((long)param_1 + lVar11);
        if (uVar26 <= uVar15) {
          if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210328);
          }
          uVar19 = uVar23;
          uVar26 = param_1[uVar23 * 4];
          if (uVar15 <= param_1[uVar23 * 4]) {
            uVar19 = uVar18;
            uVar26 = uVar15;
          }
        }
        uVar23 = lVar10 + lVar13 + 2;
        local_40 = lVar22;
        if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002102c8);
        }
        uVar18 = lVar10 + lVar28 + 2;
        if (param_2 <= uVar18) goto LAB_006157f7;
        if (*(uint *)((long)param_1 + local_70) < *(uint *)((long)param_1 + local_78)) {
          uVar24 = uVar23;
        }
        else {
          uVar24 = uVar18;
          uVar18 = uVar23;
        }
        if (param_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002102f8);
        }
        uVar23 = lVar10 + lVar25;
        if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210310);
        }
        uVar15 = param_1[uVar18 * 4];
        uVar21 = *(uint *)((long)param_1 + lVar16);
        if (uVar15 <= uVar21) {
          if (param_2 <= uVar24) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar24,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210328);
          }
          uVar18 = uVar24;
          uVar15 = param_1[uVar24 * 4];
          if (uVar21 <= param_1[uVar24 * 4]) {
            uVar18 = uVar23;
            uVar15 = uVar21;
          }
        }
        local_98 = lVar16;
        if (param_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210388);
        }
        if (param_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar19,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002103a0);
        }
        uVar24 = lVar10 + lVar13 + 1;
        uVar23 = uVar19;
        if (uVar26 < uVar15) {
          uVar23 = uVar18;
          uVar18 = uVar19;
        }
        if (param_2 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar24,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002103b8);
        }
        uVar19 = lVar10 + lVar28 + 1;
        if (param_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar19,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002103d0);
        }
        if (*(uint *)((long)param_1 + local_70 + -0x10) <
            *(uint *)((long)param_1 + local_78 + -0x10)) {
          uVar20 = uVar24;
        }
        else {
          uVar20 = uVar19;
          uVar19 = uVar24;
        }
        if (param_2 <= lVar10 + local_38) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (lVar10 + local_38,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_002103e8);
        }
        if (param_2 <= uVar20) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar20,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210400);
        }
        local_a0 = (uint *)(local_80 + (long)param_1);
        uVar26 = *local_a0;
        uVar15 = param_1[uVar20 * 4];
        if (uVar15 < uVar26) {
LAB_00615125:
          if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210460);
          }
          if (uVar15 <= param_1[uVar23 * 4]) {
            if (param_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check
                        (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210478);
            }
            uVar23 = uVar18;
            if (param_1[uVar18 * 4] <= uVar15) {
              uVar23 = uVar20;
            }
          }
          local_c8 = *(undefined8 *)(param_1 + uVar23 * 4);
          uStack_c0 = *(undefined8 *)(param_1 + uVar23 * 4 + 2);
          uVar2 = *(undefined8 *)(local_a0 + 2);
          *(undefined8 *)(param_1 + uVar23 * 4) = *(undefined8 *)local_a0;
          *(undefined8 *)(param_1 + uVar23 * 4 + 2) = uVar2;
          *(undefined8 *)local_a0 = local_c8;
          *(undefined8 *)(local_a0 + 2) = uStack_c0;
        }
        else {
          if (param_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar19,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210418);
          }
          uVar15 = param_1[uVar19 * 4];
          uVar20 = uVar19;
          if (uVar26 < uVar15) goto LAB_00615125;
          if (param_2 <= uVar23) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar23,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210430);
          }
          if (param_1[uVar23 * 4] < uVar26) {
            puVar9 = param_1 + uVar23 * 4;
            local_c8 = *(undefined8 *)local_a0;
            uStack_c0 = *(undefined8 *)(local_a0 + 2);
            uVar2 = *(undefined8 *)(puVar9 + 2);
            *(undefined8 *)local_a0 = *(undefined8 *)puVar9;
            *(undefined8 *)(local_a0 + 2) = uVar2;
            *(undefined8 *)puVar9 = local_c8;
            *(undefined8 *)(puVar9 + 2) = uStack_c0;
          }
          else {
            if (param_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check
                        (uVar18,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210448);
            }
            if (uVar26 < param_1[uVar18 * 4]) {
              puVar9 = param_1 + uVar18 * 4;
              local_c8 = *(undefined8 *)local_a0;
              uStack_c0 = *(undefined8 *)(local_a0 + 2);
              uVar2 = *(undefined8 *)(puVar9 + 2);
              *(undefined8 *)local_a0 = *(undefined8 *)puVar9;
              *(undefined8 *)(local_a0 + 2) = uVar2;
              *(undefined8 *)puVar9 = local_c8;
              *(undefined8 *)(puVar9 + 2) = uStack_c0;
            }
          }
        }
        lVar28 = lVar28 + 3;
        local_70 = local_70 + 0x30;
        lVar13 = lVar13 + 3;
        local_78 = local_78 + 0x30;
        local_38 = local_38 + 1;
        lVar8 = lVar8 + 1;
        lVar11 = lVar11 + 0x10;
        lVar25 = lVar25 + 1;
        lVar16 = lVar16 + 0x10;
        uVar23 = uVar12 - 1;
        lVar6 = local_80 + 0x10;
        lVar22 = lVar22 + 0x30;
        lVar27 = lVar27 + 0x30;
      } while (uVar12 - 1 != 0);
    }
    if ((local_a8 < local_48) || (param_2 < local_a8)) {
                    /* WARNING: Subroutine does not return */
      index::slice_index_fail
                (local_48,local_a8,param_2,&PTR_s__rustc_0ef1bc386059596dada8fb65b_00210370);
    }
    <(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
              (param_1 + local_48 * 4,local_50,local_60);
    uVar2 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar5 = *(undefined8 *)(param_1 + local_58 * 4 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)(param_1 + local_58 * 4);
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + local_58 * 4) = uVar2;
    *(undefined8 *)(param_1 + local_58 * 4 + 2) = uVar4;
    puVar9 = param_1 + 4;
    local_c8 = CONCAT44((int)((ulong)uVar2 >> 0x20),param_1[4]);
    uStack_c0 = *(undefined8 *)(param_1 + 6);
    puVar7 = param_1 + 8;
    uVar26 = *param_1;
    if (puVar7 < param_1 + param_2 * 4 + -4) {
      uVar23 = 0;
      do {
        puVar14 = puVar7;
        uVar15 = *puVar14;
        uVar2 = *(undefined8 *)(puVar9 + uVar23 * 4 + 2);
        *(undefined8 *)(puVar14 + -4) = *(undefined8 *)(puVar9 + uVar23 * 4);
        *(undefined8 *)(puVar14 + -2) = uVar2;
        uVar2 = *(undefined8 *)(puVar14 + 2);
        *(undefined8 *)(puVar9 + uVar23 * 4) = *(undefined8 *)puVar14;
        *(undefined8 *)(puVar9 + uVar23 * 4 + 2) = uVar2;
        lVar25 = uVar23 + (uVar26 < uVar15);
        uVar21 = puVar14[4];
        uVar2 = *(undefined8 *)(puVar9 + lVar25 * 4 + 2);
        *(undefined8 *)puVar14 = *(undefined8 *)(puVar9 + lVar25 * 4);
        *(undefined8 *)(puVar14 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar14 + 6);
        *(undefined8 *)(puVar9 + lVar25 * 4) = *(undefined8 *)(puVar14 + 4);
        *(undefined8 *)(puVar9 + lVar25 * 4 + 2) = uVar2;
        uVar23 = uVar23 + (uVar26 < uVar15) + (ulong)(uVar26 < uVar21);
        puVar7 = puVar14 + 8;
      } while (puVar7 < param_1 + param_2 * 4 + -4);
      puVar14 = puVar14 + 4;
    }
    else {
      uVar23 = 0;
      puVar14 = puVar9;
    }
    do {
      puVar17 = puVar7;
      puVar7 = puVar17;
      if (puVar17 == local_b0 + param_2 * 4) {
        puVar7 = (uint *)&local_c8;
      }
      uVar12 = uVar23 + (uVar26 < *puVar7);
      uVar2 = *(undefined8 *)(puVar9 + uVar23 * 4 + 2);
      *(undefined8 *)puVar14 = *(undefined8 *)(puVar9 + uVar23 * 4);
      *(undefined8 *)(puVar14 + 2) = uVar2;
      uVar2 = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)(puVar9 + uVar23 * 4) = *(undefined8 *)puVar7;
      *(undefined8 *)(puVar9 + uVar23 * 4 + 2) = uVar2;
      uVar23 = uVar12;
      puVar7 = puVar17 + 4;
      puVar14 = puVar17;
    } while (puVar17 != local_b0 + param_2 * 4);
    if (param_2 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_c8 = *(undefined8 *)local_b0;
    uStack_c0 = *(undefined8 *)(local_b0 + 2);
    uVar2 = *(undefined8 *)(local_b0 + uVar12 * 4 + 2);
    *(undefined8 *)local_b0 = *(undefined8 *)(local_b0 + uVar12 * 4);
    *(undefined8 *)(local_b0 + 2) = uVar2;
    *(undefined8 *)(local_b0 + uVar12 * 4) = local_c8;
    *(undefined8 *)(local_b0 + uVar12 * 4 + 2) = uStack_c0;
    if (uVar12 == local_68) {
      return;
    }
    lVar25 = uVar12 + 1;
    lVar16 = 0;
    if (uVar12 <= local_68) {
      uVar12 = param_2 - lVar25;
      lVar16 = lVar25;
    }
    param_3 = local_68 - lVar16;
    param_1 = local_b0 + lVar16 * 4;
    param_2 = uVar12;
  }
  if (1 < param_2) {
    puVar7 = param_1 + 4;
    puVar9 = param_1;
    if ((param_2 & 1) == 0) {
      uVar26 = param_1[4];
      if (*param_1 < uVar26) {
        uVar2 = *(undefined8 *)(param_1 + 6);
        lVar25 = 0x10;
        do {
          puVar1 = (undefined8 *)((long)param_1 + lVar25 + -0x10);
          uVar4 = puVar1[1];
          *(undefined8 *)((long)param_1 + lVar25) = *puVar1;
          ((undefined8 *)((long)param_1 + lVar25))[1] = uVar4;
          if (lVar25 == 0x10) {
            goto LAB_00615705;
          }
          lVar16 = lVar25 + -0x10;
          lVar6 = lVar25 + -0x20;
          lVar25 = lVar16;
        } while (*(uint *)((long)param_1 + lVar6) < uVar26);
        puVar9 = (uint *)(lVar16 + (long)param_1);
LAB_00615705:
        *puVar9 = uVar26;
        *(undefined8 *)(puVar9 + 2) = uVar2;
      }
      puVar7 = param_1 + 8;
      puVar9 = param_1 + 4;
    }
    if (param_2 != 2) {
      do {
        uVar26 = *puVar7;
        if (*puVar9 < uVar26) {
          uVar2 = *(undefined8 *)(puVar9 + 6);
          puVar14 = puVar7;
          do {
            puVar17 = puVar9;
            uVar4 = *(undefined8 *)(puVar17 + 2);
            *(undefined8 *)puVar14 = *(undefined8 *)puVar17;
            *(undefined8 *)(puVar14 + 2) = uVar4;
            if (puVar17 == param_1) {
              puVar17 = param_1;
              goto LAB_006157a3;
            }
            puVar9 = puVar17 + -4;
            puVar14 = puVar17;
          } while (puVar17[-4] < uVar26);
LAB_006157a3:
          *puVar17 = uVar26;
          *(undefined8 *)(puVar17 + 2) = uVar2;
        }
        uVar26 = puVar7[4];
        if (*puVar7 < uVar26) {
          uVar2 = *(undefined8 *)(puVar7 + 6);
          puVar9 = puVar7;
          do {
            puVar14 = puVar9;
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)puVar14;
            *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(puVar14 + 2);
            if (puVar14 == param_1) {
              puVar14 = param_1;
              goto LAB_00615743;
            }
            puVar9 = puVar14 + -4;
          } while (puVar14[-4] < uVar26);
LAB_00615743:
          *puVar14 = uVar26;
          *(undefined8 *)(puVar14 + 2) = uVar2;
        }
        puVar9 = puVar7 + 4;
        puVar7 = puVar7 + 8;
      } while (puVar7 != param_1 + param_2 * 4);
    }
  }
  return;
}


// ==== core::slice::sort::shared::pivot::median3_rec::<(u32, u64), <[(u32, u64)]>::select_nth_unstable_by<pipeline::keyrec::recover_user_key::{closure#3}>::{closure#0}> @ 0061a6c0 (162 bytes)

/* core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::<(u32, u64), <[(u32,
   u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::{closure#3}>::{closure#0}>
    */

uint * __rustcall
core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
<(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
          (uint *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)<(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
                                (param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c);
    param_2 = (uint *)<(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
                                (param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,param_4);
    param_3 = (uint *)<(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
                                (param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,param_4);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (*param_3 < uVar2 != uVar2 < uVar1) {
    param_2 = param_3;
  }
  if (*param_3 < uVar1 != uVar2 < uVar1) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== <pipeline::keyrec::Sample>::add_click_lines @ 006967a0 (2972 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::keyrec::Sample>::add_click_lines */

void __rustcall
<pipeline[509596c7b52975b2]::keyrec::Sample>::add_click_lines
          (long param_1,char *param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  char **ppcVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  long local_98;
  char *local_90;
  char *local_88;
  long local_80;
  ulong local_78;
  char *local_70;
  ulong local_68;
  char *local_60;
  ulong uStack_58;
  char *pcStack_50;
  ulong uStack_48;
  char *local_40;
  ulong local_38;
  
  local_40 = &DAT_00000001;
  local_38 = 0;
  auVar19 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
  auVar21 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
  auVar23 = ZEXT1664(_DAT_002028b0);
  local_80 = param_1;
  do {
    if (param_3 == 0) {
      return;
    }
    uVar7 = 0;
    do {
      cVar3 = param_2[uVar7];
      if (cVar3 == '\n') {
        param_3 = param_3 - (uVar7 + 1);
        uVar5 = *(ulong *)(local_80 + 0x28);
        pcVar11 = param_2 + uVar7 + 1;
        goto joined_r0x0069686e;
      }
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
    uVar5 = *(ulong *)(local_80 + 0x28);
    pcVar11 = param_2;
    uVar7 = param_3;
joined_r0x0069686e:
    if (3999 < uVar5) {
      return;
    }
    if (uVar7 != 0) {
      uVar10 = 0;
      do {
        pcVar2 = param_2 + uVar10;
        auVar18 = auVar19._0_16_;
        auVar20 = auVar21._0_16_;
        auVar22 = auVar23._0_16_;
        if (*pcVar2 == ',') {
          uVar7 = uVar7 - (uVar10 + 1);
          pcVar15 = param_2 + uVar10 + 1;
          uVar12 = uVar10;
          break;
        }
        uVar10 = uVar10 + 1;
        pcVar15 = param_2;
        uVar12 = uVar7;
      } while (uVar7 != uVar10);
      if (uVar12 == 0) {
LAB_00696930:
        uVar12 = 0;
      }
      else {
        if (*param_2 == '\"') {
          if ((uVar12 == 1) || (param_2[uVar12 - 1] != '\"')) goto LAB_00696800;
          uVar12 = uVar12 - 2;
          param_2 = param_2 + 1;
        }
        if (0xf < uVar12) {
          uVar10 = ((ulong)(param_2 + 7) & 0xfffffffffffffff8) - (long)param_2;
          if (uVar10 == 0) {
            uVar10 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (param_2[uVar13] == '\"') goto LAB_00696800;
              uVar13 = uVar13 + 1;
            } while (uVar10 != uVar13);
            if (uVar12 - 0x10 < uVar10) goto joined_r0x00696aad;
          }
          do {
            auVar17 = vpaddq_avx(*(undefined1 (*) [16])(param_2 + uVar10) ^ auVar18,auVar20);
            auVar17 = vpternlogq_avx512vl(auVar17,*(undefined1 (*) [16])(param_2 + uVar10),auVar22,
                                          0xf6);
            if ((auVar17._8_8_ & auVar17._0_8_ & 0x8080808080808080) != 0x8080808080808080) break;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 <= uVar12 - 0x10);
joined_r0x00696aad:
          do {
            if (uVar12 == uVar10) goto joined_r0x00696ad5;
            if (param_2[uVar10] == '\"') goto LAB_00696800;
            uVar10 = uVar10 + 1;
          } while( true );
        }
        if (uVar12 == 0) goto LAB_00696930;
        uVar10 = 0;
        do {
          if (param_2[uVar10] == '\"') goto LAB_00696800;
          uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
      }
joined_r0x00696ad5:
      if (*pcVar2 == ',') {
        if (uVar7 == 0) {
          ppcVar6 = &local_60;
LAB_006967f5:
          *ppcVar6 = pcVar15;
          ppcVar6[1] = (char *)0x0;
        }
        else {
          uVar10 = 0;
          do {
            pcVar2 = pcVar15 + uVar10;
            if (*pcVar2 == ',') {
              uVar7 = uVar7 - (uVar10 + 1);
              pcStack_50 = pcVar15 + uVar10 + 1;
              uVar13 = uVar10;
              break;
            }
            uVar10 = uVar10 + 1;
            pcStack_50 = pcVar15;
            uVar13 = uVar7;
          } while (uVar7 != uVar10);
          if (uVar13 == 0) {
LAB_00696ae5:
            uVar13 = 0;
          }
          else {
            if (*pcVar15 == '\"') {
              if ((uVar13 == 1) || (pcVar15[uVar13 - 1] != '\"')) goto LAB_00696800;
              uVar13 = uVar13 - 2;
              pcVar15 = pcVar15 + 1;
            }
            if (0xf < uVar13) {
              uVar10 = ((ulong)(pcVar15 + 7) & 0xfffffffffffffff8) - (long)pcVar15;
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else {
                uVar14 = 0;
                do {
                  if (pcVar15[uVar14] == '\"') goto LAB_00696800;
                  uVar14 = uVar14 + 1;
                } while (uVar10 != uVar14);
                if (uVar13 - 0x10 < uVar10) goto joined_r0x00696c83;
              }
              do {
                auVar17 = vpaddq_avx(*(undefined1 (*) [16])(pcVar15 + uVar10) ^ auVar18,auVar20);
                auVar17 = vpternlogq_avx512vl(auVar17,*(undefined1 (*) [16])(pcVar15 + uVar10),
                                              auVar22,0xf6);
                if ((auVar17._8_8_ & auVar17._0_8_ & 0x8080808080808080) != 0x8080808080808080)
                break;
                uVar10 = uVar10 + 0x10;
              } while (uVar10 <= uVar13 - 0x10);
joined_r0x00696c83:
              do {
                if (uVar13 == uVar10) goto joined_r0x00696cb6;
                if (pcVar15[uVar10] == '\"') goto LAB_00696800;
                uVar10 = uVar10 + 1;
              } while( true );
            }
            if (uVar13 == 0) goto LAB_00696ae5;
            uVar10 = 0;
            do {
              if (pcVar15[uVar10] == '\"') goto LAB_00696800;
              uVar10 = uVar10 + 1;
            } while (uVar13 != uVar10);
          }
joined_r0x00696cb6:
          if (*pcVar2 == ',') {
            if (uVar7 == 0) {
              ppcVar6 = &pcStack_50;
              pcVar15 = pcStack_50;
              goto LAB_006967f5;
            }
            uVar10 = 0;
            do {
              pcVar2 = pcStack_50 + uVar10;
              if (*pcVar2 == ',') {
                uVar7 = uVar7 - (uVar10 + 1);
                pcVar9 = pcStack_50 + uVar10 + 1;
                uStack_48 = uVar10;
                break;
              }
              uVar10 = uVar10 + 1;
              pcVar9 = pcStack_50;
              uStack_48 = uVar7;
            } while (uVar7 != uVar10);
            if (uStack_48 == 0) {
LAB_00696cc5:
              uStack_48 = 0;
            }
            else {
              if (*pcStack_50 == '\"') {
                if ((uStack_48 == 1) || (pcStack_50[uStack_48 - 1] != '\"')) goto LAB_00696800;
                uStack_48 = uStack_48 - 2;
                pcStack_50 = pcStack_50 + 1;
              }
              if (uStack_48 < 0x10) {
                if (uStack_48 == 0) goto LAB_00696cc5;
                uVar10 = 0;
                do {
                  if (pcStack_50[uVar10] == '\"') goto LAB_00696800;
                  uVar10 = uVar10 + 1;
                } while (uStack_48 != uVar10);
              }
              else {
                uVar10 = ((ulong)(pcStack_50 + 7) & 0xfffffffffffffff8) - (long)pcStack_50;
                if (uVar10 == 0) {
                  uVar10 = 0;
LAB_00696da0:
                  do {
                    local_88 = (char *)(uStack_48 - 0x10);
                    auVar17 = vpaddq_avx(*(undefined1 (*) [16])(pcStack_50 + uVar10) ^ auVar18,
                                         auVar20);
                    auVar17 = vpternlogq_avx512vl(auVar17,*(undefined1 (*) [16])
                                                           (pcStack_50 + uVar10),auVar22,0xf6);
                    if ((auVar17._8_8_ & auVar17._0_8_ & 0x8080808080808080) != 0x8080808080808080)
                    break;
                    uVar10 = uVar10 + 0x10;
                  } while (uVar10 <= local_88);
                }
                else {
                  uVar14 = 0;
                  do {
                    if (pcStack_50[uVar14] == '\"') goto LAB_00696800;
                    uVar14 = uVar14 + 1;
                  } while (uVar10 != uVar14);
                  if (uVar10 <= uStack_48 - 0x10) goto LAB_00696da0;
                }
                local_88 = (char *)(uStack_48 - 0x10);
                for (; local_90 = pcVar9, uStack_48 != uVar10; uVar10 = uVar10 + 1) {
                  if (pcStack_50[uVar10] == '\"') goto LAB_00696800;
                }
              }
            }
            if (*pcVar2 == ',') {
              local_70 = param_2;
              local_68 = uVar12;
              local_60 = pcVar15;
              uStack_58 = uVar13;
              if (uVar7 == 0) {
                local_38 = 0;
                local_40 = pcVar9;
              }
              else {
                uVar10 = 0;
                do {
                  cVar4 = pcVar9[uVar10];
                  if (cVar4 == ',') goto LAB_00696d08;
                  uVar10 = uVar10 + 1;
                } while (uVar7 != uVar10);
                uVar10 = uVar7;
LAB_00696d08:
                if (uVar10 == 0) {
LAB_00696e76:
                  uVar10 = 0;
                }
                else {
                  if (*pcVar9 == '\"') {
                    if ((uVar10 == 1) || (pcVar9[uVar10 - 1] != '\"')) goto LAB_00696800;
                    uVar10 = uVar10 - 2;
                    pcVar9 = pcVar9 + 1;
                  }
                  if (uVar10 < 0x10) {
                    if (uVar10 == 0) goto LAB_00696e76;
                    uVar7 = 0;
                    do {
                      if (pcVar9[uVar7] == '\"') goto LAB_00696800;
                      uVar7 = uVar7 + 1;
                    } while (uVar10 != uVar7);
                  }
                  else {
                    local_90 = pcVar9;
                    local_88 = pcVar11;
                    local_78 = param_3;
                    uVar7 = core[62e902411887be45]::slice::memchr::memchr_aligned
                                      (0x22,pcVar9,uVar10);
                    auVar23 = ZEXT1664(_DAT_002028b0);
                    auVar21 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
                    auVar19 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
                    pcVar9 = local_90;
                    param_3 = local_78;
                    pcVar11 = local_88;
                    if ((uVar7 & 1) != 0) goto LAB_00696800;
                  }
                }
                local_40 = pcVar9;
                local_38 = uVar10;
                if (cVar4 == ',') goto LAB_00696800;
              }
              if ((1 < uVar12) && (*param_2 == 'k')) {
                lVar1 = uVar12 - 1;
                if (uVar12 < 10) {
                  if (uVar12 == 9) {
                    lVar8 = *(long *)(param_2 + 1);
                  }
                  else {
                    local_98 = 0;
                    (*(code *)PTR_memcpy_00841de0)(&local_98,param_2 + 1,lVar1);
                    auVar23 = ZEXT1664(_DAT_002028b0);
                    auVar21 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
                    auVar19 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
                    lVar8 = local_98;
                  }
                  uVar12 = lVar8 << ((ulong)(byte)((char)lVar1 * -8) & 0x3f);
                  uVar10 = 0x1818181818181818U >> ((ulong)(byte)((char)lVar1 * '\b' - 1) & 0x3f) |
                           uVar12;
                  uVar7 = uVar10 + 0xcfcfcfcfcfcfcfd0 +
                          (uVar10 + 0x1f1f1f1f1f1f1f1f >> 7 & 0x101010101010101) * -0x27;
                  uVar7 = (uVar7 >> 8 & 0xff00ff00ff00ff) + (uVar7 & 0xff00ff00ff00ff) * 0x24;
                  uVar7 = (uVar7 >> 0x10 & 0x7fff0000ffff) + (uVar7 & 0xffff0000ffff) * 0x510;
                  uVar7 = (uVar7 >> 0x20) + (uVar7 & 0xffffffff) * 0x19a100;
                  if ((((lVar1 == 1) || ((char)lVar8 != '0')) &&
                      ((~uVar12 & uVar10 + 0x5050505050505050 & 0x8080808080808080 &
                       (0xfafafafafafafafa - uVar10 & uVar10 + 0x1f1f1f1f1f1f1f1f |
                       0xb9b9b9b9b9b9b9b9 - uVar10)) == 0x8080808080808080)) &&
                     (uVar7 < 0x10000000000)) {
                    if ((uVar13 < 2) || (*pcVar15 != 'u')) {
LAB_006970d7:
                      uVar16 = 0;
                    }
                    else {
                      lVar1 = uVar13 - 1;
                      if (9 < uVar13) goto LAB_006970d7;
                      if (uVar13 == 9) {
                        lVar8 = *(long *)(pcVar15 + 1);
                      }
                      else {
                        local_98 = 0;
                        (*(code *)PTR_memcpy_00841de0)(&local_98,pcVar15 + 1,lVar1);
                        auVar23 = ZEXT1664(_DAT_002028b0);
                        auVar21 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
                        auVar19 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
                        lVar8 = local_98;
                      }
                      pcVar15 = (char *)0x8080808080808080;
                      uVar12 = lVar8 << ((ulong)(byte)((char)lVar1 * -8) & 0x3f);
                      uVar13 = 0x1818181818181818U >> ((ulong)(byte)((char)lVar1 * '\b' - 1) & 0x3f)
                               | uVar12;
                      uVar10 = (uVar13 + 0x1f1f1f1f1f1f1f1f >> 7 & 0x101010101010101) * -0x27 +
                               uVar13 + 0xcfcfcfcfcfcfcfd0;
                      uVar10 = (uVar10 >> 8 & 0xff00ff00ff00ff) + (uVar10 & 0xff00ff00ff00ff) * 0x24
                      ;
                      uVar10 = (uVar10 >> 0x10 & 0x7fff0000ffff) + (uVar10 & 0xffff0000ffff) * 0x510
                      ;
                      uVar10 = (uVar10 >> 0x20) + (uVar10 & 0xffffffff) * 0x19a100;
                      if (((lVar1 != 1) && ((char)lVar8 == '0')) ||
                         (((0xfafafafafafafafa - uVar13 & uVar13 + 0x1f1f1f1f1f1f1f1f |
                           0xb9b9b9b9b9b9b9b9 - uVar13) &
                          ~uVar12 & 0x8080808080808080 & uVar13 + 0x5050505050505050) !=
                          0x8080808080808080)) goto LAB_006970d7;
                      uVar16 = 0;
                      if (uVar10 < 0x10000000000) {
                        uVar10 = uVar10 * -0x5f6fa77e17000000;
                        pcVar15 = (char *)(uVar10 >> 0x3a ^ uVar10 >> 0x29 ^ uVar10 >> 0x18);
                        uVar16 = 1;
                      }
                    }
                    if (uVar5 == *(ulong *)(local_80 + 0x18)) {
                      <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one
                                (local_80 + 0x18);
                      auVar23 = ZEXT1664(_DAT_002028b0);
                      auVar21 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
                      auVar19 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
                    }
                    uVar7 = uVar7 * -0x5f6fa77e17000000;
                    lVar1 = *(long *)(local_80 + 0x20);
                    *(undefined8 *)(lVar1 + uVar5 * 0x18) = uVar16;
                    *(char **)(lVar1 + 8 + uVar5 * 0x18) = pcVar15;
                    *(ulong *)(lVar1 + 0x10 + uVar5 * 0x18) =
                         uVar7 >> 0x3a ^ uVar7 >> 0x29 ^ uVar7 >> 0x18;
                    *(ulong *)(local_80 + 0x28) = uVar5 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00696800:
    param_2 = pcVar11;
    if (cVar3 != '\n') {
      return;
    }
  } while( true );
}


// ==== <pipeline::keyrec::Sample>::add_event_lines @ 00697360 (3466 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::keyrec::Sample>::add_event_lines */

void __rustcall
<pipeline[509596c7b52975b2]::keyrec::Sample>::add_event_lines
          (ulong *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  short sVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  char *unaff_RBP;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  ulong local_a8;
  char *local_a0;
  ulong uStack_98;
  char *pcStack_90;
  ulong uStack_88;
  char *local_80;
  ulong uStack_78;
  char *pcStack_70;
  ulong uStack_68;
  char *local_60;
  ulong uStack_58;
  char *pcStack_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_a0 = _DAT_002025c0;
  uStack_98 = _UNK_002025c8;
  pcStack_90 = _DAT_002025c0;
  uStack_88 = _UNK_002025c8;
  local_80 = _DAT_002025c0;
  uStack_78 = _UNK_002025c8;
  pcStack_70 = _DAT_002025c0;
  uStack_68 = _UNK_002025c8;
  local_60 = _DAT_002025c0;
  uStack_58 = _UNK_002025c8;
  pcStack_50 = _DAT_002025c0;
  uStack_48 = _UNK_002025c8;
  local_40 = 1;
  local_38 = 0;
  auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
  auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
  auVar23 = ZEXT1664(_DAT_002028b0);
LAB_00697449:
  if (param_3 == 0) {
    return;
  }
  uVar9 = 0;
  do {
    cVar3 = param_2[uVar9];
    if (cVar3 == '\n') {
      param_3 = param_3 - (uVar9 + 1);
      uVar5 = param_1[2];
      pcVar7 = param_2 + uVar9 + 1;
      goto joined_r0x006974a9;
    }
    uVar9 = uVar9 + 1;
  } while (param_3 != uVar9);
  uVar5 = param_1[2];
  pcVar7 = param_2;
  uVar9 = param_3;
joined_r0x006974a9:
  if (4999 < uVar5) {
    return;
  }
  if (uVar9 != 0) {
    lVar10 = 0;
    do {
      if (uVar9 == 0) {
        if (lVar10 == 7) goto LAB_00697440;
        (&local_a0)[lVar10 * 2] = param_2;
        (&uStack_98)[lVar10 * 2] = 0;
        if (lVar10 == 6) goto LAB_006976cf;
        goto LAB_00697440;
      }
      uVar14 = 0;
      do {
        cVar4 = param_2[uVar14];
        if (cVar4 == ',') {
          uVar9 = uVar9 - (uVar14 + 1);
          pcVar8 = param_2 + uVar14 + 1;
          uVar15 = uVar14;
          break;
        }
        uVar14 = uVar14 + 1;
        pcVar8 = param_2;
        uVar15 = uVar9;
      } while (uVar9 != uVar14);
      if (lVar10 == 7) goto LAB_00697440;
      if (uVar15 == 0) {
LAB_00697570:
        uVar15 = 0;
      }
      else {
        if (*param_2 == '\"') {
          if ((uVar15 == 1) || (param_2[uVar15 - 1] != '\"')) goto LAB_00697440;
          uVar15 = uVar15 - 2;
          param_2 = param_2 + 1;
        }
        if (0xf < uVar15) {
          uVar14 = ((ulong)(param_2 + 7) & 0xfffffffffffffff8) - (long)param_2;
          if (uVar14 == 0) {
            uVar14 = 0;
            goto LAB_00697605;
          }
          uVar16 = 0;
          do {
            if (param_2[uVar16] == '\"') goto LAB_00697440;
            uVar16 = uVar16 + 1;
          } while (uVar14 != uVar16);
          for (; uVar14 <= uVar15 - 0x10; uVar14 = uVar14 + 0x10) {
LAB_00697605:
            auVar20 = vpaddq_avx(*(undefined1 (*) [16])(param_2 + uVar14) ^ auVar21._0_16_,
                                 auVar22._0_16_);
            auVar20 = vpternlogq_avx512vl(auVar20,*(undefined1 (*) [16])(param_2 + uVar14),
                                          auVar23._0_16_,0xf6);
            unaff_RBP = (char *)(auVar20._0_8_ & 0x8080808080808080);
            if ((auVar20._8_8_ & (ulong)unaff_RBP) != 0x8080808080808080) break;
          }
          do {
            if (uVar15 == uVar14) goto LAB_00697573;
            if (param_2[uVar14] == '\"') goto LAB_00697440;
            uVar14 = uVar14 + 1;
          } while( true );
        }
        if (uVar15 == 0) goto LAB_00697570;
        uVar14 = 0;
        do {
          if (param_2[uVar14] == '\"') goto LAB_00697440;
          uVar14 = uVar14 + 1;
        } while (uVar15 != uVar14);
      }
LAB_00697573:
      lVar13 = lVar10 + 1;
      (&local_a0)[lVar10 * 2] = param_2;
      (&uStack_98)[lVar10 * 2] = uVar15;
      param_2 = pcVar8;
      lVar10 = lVar13;
    } while (cVar4 == ',');
    if (lVar13 != 7) goto LAB_00697440;
LAB_006976cf:
    if ((uStack_98 < 2) || (*local_a0 != 'e')) goto LAB_00697440;
    lVar10 = uStack_98 - 1;
    if (9 < uStack_98) goto LAB_00697440;
    if (uStack_98 == 9) {
      lVar13 = *(long *)(local_a0 + 1);
    }
    else {
      local_e8 = 0;
      (*(code *)PTR_memcpy_00841de0)(&local_e8,local_a0 + 1,lVar10);
      auVar23 = ZEXT1664(_DAT_002028b0);
      auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
      auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
      lVar13 = local_e8;
      unaff_RBP = pcVar7;
    }
    uVar15 = lVar13 << ((ulong)(byte)((char)lVar10 * -8) & 0x3f);
    uVar14 = 0x1818181818181818U >> ((ulong)(byte)((char)lVar10 * '\b' - 1) & 0x3f) | uVar15;
    uVar9 = uVar14 + 0xcfcfcfcfcfcfcfd0 +
            (uVar14 + 0x1f1f1f1f1f1f1f1f >> 7 & 0x101010101010101) * -0x27;
    uVar9 = (uVar9 >> 8 & 0xff00ff00ff00ff) + (uVar9 & 0xff00ff00ff00ff) * 0x24;
    uVar9 = (uVar9 >> 0x10 & 0x7fff0000ffff) + (uVar9 & 0xffff0000ffff) * 0x510;
    uVar9 = (uVar9 >> 0x20) + (uVar9 & 0xffffffff) * 0x19a100;
    if ((((lVar10 != 1) && ((char)lVar13 == '0')) ||
        (((0xfafafafafafafafa - uVar14 & uVar14 + 0x1f1f1f1f1f1f1f1f | 0xb9b9b9b9b9b9b9b9 - uVar14)
         & ~uVar15 & 0x8080808080808080 & uVar14 + 0x5050505050505050) != 0x8080808080808080)) ||
       (0xffffffffff < uVar9)) goto LAB_00697440;
    local_a8 = uVar9;
    if ((uStack_88 < 2) || (*pcStack_90 != 'u')) {
LAB_006978b7:
      local_b0 = 0;
    }
    else {
      lVar10 = uStack_88 - 1;
      if (9 < uStack_88) goto LAB_006978b7;
      if (uStack_88 == 9) {
        lVar13 = *(long *)(pcStack_90 + 1);
      }
      else {
        local_e8 = 0;
        (*(code *)PTR_memcpy_00841de0)(&local_e8,pcStack_90 + 1,lVar10);
        auVar23 = ZEXT1664(_DAT_002028b0);
        auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
        auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
        lVar13 = local_e8;
        unaff_RBP = pcVar7;
      }
      uVar14 = lVar13 << ((ulong)(byte)((char)lVar10 * -8) & 0x3f);
      uVar15 = 0x1818181818181818U >> ((ulong)(byte)((char)lVar10 * '\b' - 1) & 0x3f) | uVar14;
      uVar9 = (uVar15 + 0x1f1f1f1f1f1f1f1f >> 7 & 0x101010101010101) * -0x27 +
              uVar15 + 0xcfcfcfcfcfcfcfd0;
      uVar9 = (uVar9 >> 8 & 0xff00ff00ff00ff) + (uVar9 & 0xff00ff00ff00ff) * 0x24;
      uVar9 = (uVar9 >> 0x10 & 0x7fff0000ffff) + (uVar9 & 0xffff0000ffff) * 0x510;
      uVar9 = (uVar9 >> 0x20) + (uVar9 & 0xffffffff) * 0x19a100;
      if (((lVar10 != 1) && ((char)lVar13 == '0')) ||
         (((0xfafafafafafafafa - uVar15 & uVar15 + 0x1f1f1f1f1f1f1f1f | 0xb9b9b9b9b9b9b9b9 - uVar15)
          & ~uVar14 & 0x8080808080808080 & uVar15 + 0x5050505050505050) != 0x8080808080808080))
      goto LAB_006978b7;
      local_b0 = 0;
      if (uVar9 < 0x10000000000) {
        uVar9 = uVar9 * -0x5f6fa77e17000000;
        local_b8 = uVar9 >> 0x3a ^ uVar9 >> 0x29 ^ uVar9 >> 0x18;
        local_b0 = 1;
      }
    }
    uVar9 = uStack_78;
    pcVar8 = local_80;
    if (uStack_78 == 0) {
LAB_006973d0:
      uVar17 = 0;
    }
    else {
      uVar14 = 0;
      do {
        if (uStack_78 == uVar14) {
          uVar9 = 0;
          unaff_RBP = (char *)0x0;
          goto LAB_00697bc0;
        }
        pcVar2 = local_80 + uVar14;
        uVar14 = uVar14 + 1;
      } while ((byte)(*pcVar2 - 0x30U) < 10);
      if ((((((uStack_78 != 0x19) && (uStack_78 != 0x14)) || (local_80[4] != '-')) ||
           ((local_80[7] != '-' || (local_80[10] != 'T')))) || (local_80[0xd] != ':')) ||
         ((local_80[0x10] != ':' || (9 < (byte)(*local_80 - 0x30U))))) goto LAB_006973d0;
      if ((((byte)(local_80[1] - 0x30U) < 10) && ((byte)(local_80[2] - 0x30U) < 10)) &&
         ((byte)(local_80[3] - 0x30U) < 10)) {
        bVar12 = local_80[5] - 0x30;
        unaff_RBP = (char *)(ulong)bVar12;
        if ((((9 < bVar12) || (9 < (byte)(local_80[6] - 0x30U))) ||
            ((9 < (byte)(local_80[8] - 0x30U) ||
             ((9 < (byte)(local_80[9] - 0x30U) || (9 < (byte)(local_80[0xb] - 0x30U))))))) ||
           (9 < (byte)(local_80[0xc] - 0x30U))) goto LAB_00698097;
        bVar18 = local_80[0xe] - 0x30;
        local_d8 = CONCAT71(local_d8._1_7_,bVar18);
        if (9 < bVar18) goto LAB_00698097;
        bVar19 = local_80[0xf] - 0x30;
        local_e0 = CONCAT71(local_e0._1_7_,bVar19);
        if (((9 < bVar19) || (9 < (byte)(local_80[0x11] - 0x30U))) ||
           (9 < (byte)(local_80[0x12] - 0x30U))) goto LAB_00698097;
        unaff_RBP = (char *)(ulong)((uint)bVar12 * 10);
        bVar12 = (local_80[6] - 0x30U) + (char)((uint)bVar12 * 10);
        local_c8 = (ulong)bVar12;
        if (0xb < (byte)(bVar12 - 1)) goto LAB_00698097;
        bVar11 = (local_80[9] - 0x30U) + (local_80[8] - 0x30U) * '\n';
        local_d0 = (ulong)bVar11;
        uVar17 = 0;
        auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
        auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
        auVar23 = ZEXT1664(_DAT_002028b0);
        if (bVar11 != 0) {
          uVar1 = (uint)(byte)(local_80[3] - 0x30U) +
                  ((uint)(byte)(local_80[2] - 0x30U) +
                  (uint)(byte)((local_80[1] - 0x30U) + (*local_80 - 0x30U) * '\n') * 10) * 10;
          if ((0xffdU >> (bVar12 - 1 & 0x1f) & 1) == 0) {
            if ((uVar1 & 3) == 0) {
              sVar6 = (short)uVar1;
              bVar12 = 0x1d;
              if ((0x28f < (ushort)((ushort)(sVar6 * 0x5c29) >> 2 | sVar6 * 0x4000)) ||
                 ((short)(sVar6 + (short)((uVar1 >> 4) * 0xa3e >> 0x10) * -400) == 0))
              goto code_r0x00697e40;
            }
            bVar12 = 0x1c;
          }
          else {
            bVar12 = (&DAT_0058e8f0)[bVar12 - 1 & 0xff];
          }
code_r0x00697e40:
          if (((bVar12 < bVar11) ||
              (bVar12 = (local_80[0xc] - 0x30U) + (local_80[0xb] - 0x30U) * '\n',
              local_c0 = (ulong)bVar12, 0x17 < bVar12)) ||
             (bVar19 = bVar19 + bVar18 * '\n', local_d8 = (ulong)bVar19, 0x3b < bVar19)) {
            uVar17 = 0;
            auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
            auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
            auVar23 = ZEXT1664(_DAT_002028b0);
            goto LAB_006973d3;
          }
          bVar12 = (local_80[0x12] - 0x30U) + (local_80[0x11] - 0x30U) * '\n';
          local_e0 = (ulong)bVar12;
          uVar17 = 0;
          auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
          auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
          auVar23 = ZEXT1664(_DAT_002028b0);
          if (0x3b < bVar12) goto LAB_006973d3;
          lVar10 = pipeline[509596c7b52975b2]::keyrec::days_from_civil(uVar1,local_c8,local_d0);
          lVar10 = ((local_c0 + lVar10 * 0x18) * 0x3c + local_d8) * 0x3c + local_e0;
          cVar4 = pcVar8[0x13];
          if (uVar9 != 0x14) {
            if (cVar4 == '+') {
              lVar13 = 1;
            }
            else {
              if (cVar4 != '-') goto LAB_00698097;
              lVar13 = -1;
            }
            if (uVar9 < 0x17) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (0x16,uVar9,&PTR_s_src_keyrec_rs_00589278);
            }
            if (((pcVar8[0x16] == ':') && ((byte)(pcVar8[0x14] - 0x30U) < 10)) &&
               ((byte)(pcVar8[0x15] - 0x30U) < 10)) {
              if (uVar9 < 0x19) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::slice::index::slice_index_fail
                          (0x17,0x19,uVar9,&PTR_s_src_keyrec_rs_00589290);
              }
              if ((((byte)(pcVar8[0x17] - 0x30U) < 10) && ((byte)(pcVar8[0x18] - 0x30U) < 10)) &&
                 (bVar12 = (pcVar8[0x15] - 0x30U) + (pcVar8[0x14] - 0x30U) * '\n', bVar12 < 0x18)) {
                bVar18 = (pcVar8[0x18] - 0x30U) + (pcVar8[0x17] - 0x30U) * '\n';
                uVar17 = 0;
                auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
                auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
                auVar23 = ZEXT1664(_DAT_002028b0);
                if (bVar18 < 0x3c) {
                  lVar10 = lVar10 + ((ulong)bVar18 * -0x3c + (ulong)bVar12 * -0xe10) * lVar13;
                  goto LAB_00697f52;
                }
                goto LAB_006973d3;
              }
            }
            goto LAB_00698097;
          }
          if (cVar4 != 'Z') goto LAB_00698097;
LAB_00697f52:
          unaff_RBP = (char *)(lVar10 * 1000);
          uVar17 = 1;
          goto LAB_0069809a;
        }
      }
      else {
LAB_00698097:
        uVar17 = 0;
LAB_0069809a:
        auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
        auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
        auVar23 = ZEXT1664(_DAT_002028b0);
      }
    }
    goto LAB_006973d3;
  }
  goto LAB_00697440;
  while (uVar9 = uVar9 + 1, uStack_78 != uVar9) {
LAB_00697bc0:
    lVar10 = (long)unaff_RBP * 10;
    uVar17 = 1;
    if ((SEXT816(lVar10) != SEXT816((long)unaff_RBP) * SEXT816(10)) ||
       (unaff_RBP = (char *)(lVar10 + (ulong)(byte)(local_80[uVar9] - 0x30)),
       SCARRY8(lVar10,(ulong)(byte)(local_80[uVar9] - 0x30)))) {
      unaff_RBP = (char *)0x7fffffffffffffff;
      break;
    }
  }
LAB_006973d3:
  if (uVar5 == *param_1) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<pipeline[509596c7b52975b2]::pqw::Meta>>::grow_one();
    auVar23 = ZEXT1664(_DAT_002028b0);
    auVar22 = ZEXT1664(CONCAT88(DAT_00201d50,DAT_00201d50));
    auVar21 = ZEXT1664(CONCAT88(DAT_00201b58,DAT_00201b58));
  }
  uVar14 = local_a8 * -0x5f6fa77e17000000;
  uVar9 = param_1[1];
  *(undefined8 *)(uVar9 + uVar5 * 0x28) = local_b0;
  *(ulong *)(uVar9 + 8 + uVar5 * 0x28) = local_b8;
  *(undefined8 *)(uVar9 + 0x10 + uVar5 * 0x28) = uVar17;
  *(char **)(uVar9 + 0x18 + uVar5 * 0x28) = unaff_RBP;
  *(ulong *)(uVar9 + 0x20 + uVar5 * 0x28) = uVar14 >> 0x3a ^ uVar14 >> 0x29 ^ uVar14 >> 0x18;
  param_1[2] = uVar5 + 1;
LAB_00697440:
  param_2 = pcVar7;
  if (cVar3 != '\n') {
    return;
  }
  goto LAB_00697449;
}


// ==== pipeline::keyrec::search_key @ 007342e0 (575 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::keyrec::search_key */

undefined8 __rustcall
pipeline[509596c7b52975b2]::keyrec::search_key
          (ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,ulong param_6,
          long *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort uVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  
  if (param_2 != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1 ^ param_3;
    auVar13 = vpbroadcastq_avx512f(auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1 ^ param_4;
    auVar14 = vpbroadcastq_avx512f(auVar4);
    uVar6 = 0;
    auVar15 = vmovdqa64_avx512f(_DAT_00205ec0);
    auVar16 = vbroadcasti64x4_avx512f(_DAT_002038c0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_00201e40;
    auVar17 = vpbroadcastq_avx512f(auVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_00201c98;
    auVar18 = vpbroadcastq_avx512f(auVar2);
    do {
      auVar19 = vpbroadcastq_avx512f();
      auVar20 = vpaddq_avx512f(auVar19,auVar15);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar6 * 0x3779b97f4b + 0x3779b97f4b;
      auVar1 = vpunpcklqdq_avx(auVar19._0_16_,auVar23);
      auVar21 = vpaddq_avx512f(auVar19,auVar16);
      auVar21 = vshufi64x2_avx512f(ZEXT1664(auVar1),auVar21,0x44);
      auVar1 = vpaddq_avx(auVar19._0_16_,_DAT_00205f40);
      auVar19 = vinserti32x4_avx512f(auVar21,auVar1,1);
      auVar21 = vpmullq_avx512dq(auVar19 ^ auVar13,auVar17);
      auVar22 = vpmullq_avx512dq(auVar20 ^ auVar13,auVar17);
      auVar19 = vpmullq_avx512dq(auVar19 ^ auVar14,auVar17);
      auVar20 = vpmullq_avx512dq(auVar20 ^ auVar14,auVar17);
      auVar19 = vporq_avx512f(auVar21,auVar19);
      auVar20 = vporq_avx512f(auVar22,auVar20);
      uVar7 = vptestnmq_avx512f(auVar19,auVar18);
      uVar5 = vptestnmq_avx512f(auVar20,auVar18);
      uVar12 = CONCAT11((char)uVar5,(char)uVar7);
      if (uVar12 != 0) {
        lVar10 = 0;
        do {
          if ((uVar12 >> ((uint)lVar10 & 0x1f) & 1) != 0) {
            uVar11 = uVar6 + lVar10;
            lVar9 = 0;
            uVar8 = 0;
            while ((((*(ulong *)(param_5 + lVar9) ^ uVar11 * 0x3779b97f4b & 0xfffffffffe ^ param_1)
                     * 0x3dee219263 & 0xfff0000000) == 0 ||
                   (uVar8 = uVar8 + 1, uVar8 <= param_6 / 1000))) {
              lVar9 = lVar9 + 8;
              if (param_6 * 8 == lVar9) goto LAB_00734514;
            }
          }
          if ((uVar12 >> ((uint)(lVar10 + 1U) & 0x1f) & 1) != 0) {
            uVar11 = lVar10 + 1U | uVar6;
            lVar9 = 0;
            uVar8 = 0;
            while ((((*(ulong *)(param_5 + lVar9) ^ uVar11 * 0x3779b97f4b000000 >> 0x18 ^ param_1) *
                     0x3dee219263 & 0xfff0000000) == 0 ||
                   (uVar8 = uVar8 + 1, uVar8 <= param_6 / 1000))) {
              lVar9 = lVar9 + 8;
              if (param_6 * 8 == lVar9) goto LAB_00734514;
            }
          }
          lVar10 = lVar10 + 2;
        } while (lVar10 != 0x10);
      }
      uVar6 = uVar6 + 0x10;
    } while (uVar6 < param_2);
  }
  lVar10 = param_2 + *param_7;
  uVar7 = 0;
LAB_00734523:
  *param_7 = lVar10;
  return uVar7;
LAB_00734514:
  lVar10 = uVar11 + *param_7 + 1;
  uVar7 = 1;
  goto LAB_00734523;
}


// ==== pipeline::keyrec::days_from_civil @ 00734540 (212 bytes)

/* pipeline[509596c7b52975b2]::keyrec::days_from_civil */

long __rustcall
pipeline[509596c7b52975b2]::keyrec::days_from_civil(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 - (ulong)(param_2 < 3);
  lVar2 = (param_1 % 400 >> 0x3f) + param_1 / 400;
  lVar3 = lVar2 * -400;
  lVar1 = lVar3 + param_1;
  lVar3 = param_1 + lVar3 + 3;
  if (-1 < lVar1) {
    lVar3 = lVar1;
  }
  lVar4 = SUB168(SEXT816(lVar1) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar1;
  return lVar2 * 0x23ab1 + param_3 + (ulong)(((((int)param_2 + 9U) % 0xc) * 0x99 + 2) / 5) +
         lVar1 * 0x16d + (lVar3 >> 2) + ((lVar4 >> 6) - (lVar4 >> 0x3f)) + -0xafa6d;
}


// ==== pipeline::keyrec::recover_user_key @ 00734620 (7702 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::keyrec::recover_user_key */

undefined1  [16] __rustcall
pipeline[509596c7b52975b2]::keyrec::recover_user_key(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  uint uVar20;
  long lVar21;
  undefined1 (*pauVar22) [64];
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *unaff_RBX;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  long lVar36;
  ulong uVar37;
  int *piVar38;
  ulong *puVar39;
  ulong *puVar40;
  ulong *puVar41;
  ulong *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  ulong local_80;
  ulong *local_78;
  ulong local_70;
  undefined8 local_68;
  ulong uStack_60;
  ulong *local_50;
  long *local_48;
  ulong local_40;
  long local_38;
  
  piVar1 = *(int **)(param_1 + 8);
  lVar36 = *(long *)(param_1 + 0x10);
  lVar21 = lVar36 * 0x28;
  piVar2 = *(int **)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x28);
  lVar17 = lVar11 * 0x18;
  if (lVar36 != 0) {
    piVar8 = piVar1;
    do {
      if ((char)*piVar8 != '\0') {
        piVar38 = piVar8 + 10;
        piVar28 = piVar2;
        goto LAB_007346c9;
      }
      piVar8 = piVar8 + 10;
      lVar21 = lVar21 + -0x28;
    } while (lVar21 != 0);
  }
  if (lVar11 != 0) {
    piVar8 = piVar2;
    do {
      if (*piVar8 == 1) {
        piVar38 = (int *)0x0;
        piVar28 = piVar8 + 6;
LAB_007346c9:
        uVar29 = *(ulong *)(piVar8 + 2);
        lVar21 = 8;
        local_48 = param_2;
        puVar9 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(0x20,8);
        if (puVar9 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x20);
        }
        *puVar9 = uVar29;
        local_80 = 4;
        uVar29 = 1;
        puVar14 = puVar9;
        do {
          local_78 = puVar14;
          local_70 = uVar29;
          if (piVar38 != (int *)0x0) {
            for (; piVar38 != piVar1 + lVar36 * 10; piVar38 = piVar38 + 10) {
              if ((char)*piVar38 != '\0') {
                uVar18 = *(ulong *)(piVar38 + 2);
                piVar38 = piVar38 + 10;
                goto joined_r0x00734746;
              }
            }
          }
          while( true ) {
            if (piVar28 == piVar2 + lVar11 * 6) {
              local_40 = local_80;
              if (uVar29 < 2) goto LAB_007347ea;
              if (0x14 < uVar29) {
                core[62e902411887be45]::slice::sort::unstable::ipnsort::
                <u64,<u64_as_core[62e902411887be45]::cmp::PartialOrd>::lt>(puVar14);
                goto LAB_007347ea;
              }
              if ((uVar29 & 1) != 0) {
                puVar9 = puVar14 + 1;
                goto LAB_00736377;
              }
              uVar18 = *puVar14;
              uVar30 = puVar14[1];
              if (uVar18 <= uVar30) goto LAB_00736373;
              lVar36 = 8;
              goto LAB_00736318;
            }
            if (*piVar28 == 1) break;
            piVar28 = piVar28 + 6;
          }
          piVar38 = (int *)0x0;
          uVar18 = *(ulong *)(piVar28 + 2);
          piVar28 = piVar28 + 6;
joined_r0x00734746:
          if (uVar29 == local_80) {
            <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_80,uVar29,1,8);
            puVar9 = local_78;
          }
          puVar9[uVar29] = uVar18;
          uVar29 = uVar29 + 1;
          lVar21 = lVar21 + 8;
          puVar14 = local_78;
        } while( true );
      }
      piVar8 = piVar8 + 6;
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != 0);
  }
  goto LAB_00734a30;
  while( true ) {
    uVar18 = *(ulong *)((long)puVar14 + lVar36 + -0x10);
    lVar36 = lVar36 + -8;
    if (uVar18 <= uVar30) break;
LAB_00736318:
    *(ulong *)((long)puVar14 + lVar36) = uVar18;
    if (lVar36 == 8) {
      puVar9 = puVar14;
      goto LAB_00736370;
    }
  }
  puVar9 = (ulong *)(lVar36 + (long)puVar14);
LAB_00736370:
  *puVar9 = uVar30;
LAB_00736373:
  puVar9 = puVar14 + 2;
LAB_00736377:
  if (uVar29 != 2) {
    puVar10 = puVar9 + 1;
    do {
      uVar18 = puVar9[-1];
      uVar30 = *puVar9;
      if (uVar30 < uVar18) {
        puVar15 = puVar9;
        do {
          puVar23 = puVar15 + -1;
          *puVar15 = uVar18;
          if (puVar23 == puVar14) {
            puVar23 = puVar14;
            break;
          }
          uVar18 = puVar15[-2];
          puVar15 = puVar23;
        } while (uVar30 < uVar18);
        *puVar23 = uVar30;
        uVar30 = *puVar9;
        uVar18 = puVar9[1];
        if (uVar18 < uVar30) goto LAB_007363fb;
      }
      else {
        uVar30 = *puVar9;
        uVar18 = puVar9[1];
        if (uVar18 < uVar30) {
LAB_007363fb:
          puVar15 = puVar10;
          do {
            puVar23 = puVar15 + -1;
            *puVar15 = uVar30;
            if (puVar23 == puVar14) {
              puVar23 = puVar14;
              break;
            }
            uVar30 = puVar15[-2];
            puVar15 = puVar23;
          } while (uVar18 < uVar30);
          *puVar23 = uVar18;
        }
      }
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 2;
    } while (puVar9 != puVar14 + uVar29);
  }
LAB_007347ea:
  local_80 = 0;
  local_78 = (ulong *)&DAT_00000008;
  local_70 = 0;
  puVar9 = (ulong *)&DAT_00000008;
  uVar29 = 0;
  unaff_RBX = &local_80;
  puVar10 = puVar14;
  do {
    while ((uVar18 = *puVar10, uVar29 == 0 || (puVar9[uVar29 * 2 + -1] != uVar18))) {
      if (uVar29 == local_80) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;2usize]>>::grow_one(unaff_RBX);
        puVar9 = local_78;
      }
      *(uint *)(puVar9 + uVar29 * 2) = 1;
      puVar9[uVar29 * 2 + 1] = uVar18;
      uVar29 = uVar29 + 1;
      puVar10 = puVar10 + 1;
      lVar21 = lVar21 + -8;
      local_70 = uVar29;
      if (lVar21 == 0) goto LAB_00734884;
    }
    *(uint *)(puVar9 + uVar29 * 2 + -2) = (uint)puVar9[uVar29 * 2 + -2] + 1;
    puVar10 = puVar10 + 1;
    lVar21 = lVar21 + -8;
  } while (lVar21 != 0);
LAB_00734884:
  puVar9 = local_78;
  if (0x13 < uVar29) {
    lVar36 = uVar29 * 8;
    puVar10 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(lVar36,8);
    if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,lVar36);
    }
    local_38 = lVar36;
    uVar20 = (uint)uVar29;
    if (puVar10 < puVar9 + uVar29 * 2 && puVar9 + 1 < puVar10 + uVar29) {
      uVar12 = 0;
    }
    else {
      uVar18 = 0x10;
      if ((uVar29 & 0xf) != 0) {
        uVar18 = (ulong)(uVar20 & 0xf);
      }
      uVar12 = uVar29 - uVar18;
      pauVar22 = (undefined1 (*) [64])(puVar9 + 0x19);
      uVar30 = 0;
      auVar48 = ZEXT3264(_DAT_00203b20);
      do {
        auVar44 = vpermpd_avx512f(auVar48,pauVar22[-3]);
        auVar45 = vpermpd_avx512f(auVar48,pauVar22[-2]);
        auVar46 = vpermpd_avx512f(auVar48,pauVar22[-1]);
        auVar47 = vpermpd_avx512f(auVar48,*pauVar22);
        *(undefined1 (*) [32])(puVar10 + uVar30) = auVar44._0_32_;
        *(undefined1 (*) [32])(puVar10 + uVar30 + 4) = auVar45._0_32_;
        *(undefined1 (*) [32])(puVar10 + uVar30 + 8) = auVar46._0_32_;
        *(undefined1 (*) [32])(puVar10 + uVar30 + 0xc) = auVar47._0_32_;
        uVar30 = uVar30 + 0x10;
        pauVar22 = pauVar22 + 4;
      } while (uVar12 != uVar30);
      if (4 < (uint)uVar18) {
        uVar30 = 4;
        if ((uVar29 & 3) != 0) {
          uVar30 = (ulong)(uVar20 & 3);
        }
        uVar12 = uVar29 - uVar30;
        lVar36 = -uVar18;
        pauVar22 = (undefined1 (*) [64])
                   ((long)puVar9 + (uVar29 * 0x10 - (ulong)((uint)uVar18 << 4)) + 8);
        do {
          auVar44 = vpermpd_avx512f(auVar48,*pauVar22);
          *(undefined1 (*) [32])(puVar10 + uVar29 + lVar36) = auVar44._0_32_;
          lVar36 = lVar36 + 4;
          pauVar22 = pauVar22 + 1;
        } while (-lVar36 != uVar30);
      }
    }
    uVar20 = uVar20 - (int)uVar12 & 7;
    uVar18 = uVar12;
    if (uVar20 != 0) {
      uVar30 = 0;
      do {
        puVar10[uVar18] = *(ulong *)((long)puVar9 + uVar30 + uVar12 * 0x10 + 8);
        uVar18 = uVar18 + 1;
        uVar30 = uVar30 + 0x10;
      } while (uVar20 << 4 != uVar30);
    }
    local_50 = puVar14;
    if (uVar12 - uVar29 < 0xfffffffffffffff9) {
      puVar14 = puVar9 + uVar18 * 2 + 0xf;
      do {
        puVar10[uVar18] = puVar14[-0xe];
        puVar10[uVar18 + 1] = puVar14[-0xc];
        puVar10[uVar18 + 2] = puVar14[-10];
        puVar10[uVar18 + 3] = puVar14[-8];
        puVar10[uVar18 + 4] = puVar14[-6];
        puVar10[uVar18 + 5] = puVar14[-4];
        puVar10[uVar18 + 6] = puVar14[-2];
        puVar10[uVar18 + 7] = *puVar14;
        uVar18 = uVar18 + 8;
        puVar14 = puVar14 + 0x10;
      } while (uVar29 != uVar18);
    }
    iVar35 = 0x10;
    uVar30 = 0xf;
    puVar14 = (ulong *)0x0;
    uVar18 = uVar29;
    do {
      bVar43 = iVar35 == 0;
      iVar35 = iVar35 + -1;
      if (bVar43) {
        core[62e902411887be45]::slice::sort::select::median_of_medians::
        <(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
                  (puVar9,uVar18,uVar30);
        goto LAB_00734fca;
      }
      puVar15 = puVar9 + (uVar18 >> 3) * 8;
      if (uVar18 < 0x40) {
        uVar20 = (uint)*puVar9;
        uVar7 = (uint)*puVar15;
        uVar6 = (uint)puVar9[(uVar18 >> 3) * 0xe];
        if (uVar6 < uVar7 != uVar7 < uVar20) {
          puVar15 = puVar9 + (uVar18 >> 3) * 0xe;
        }
        if (uVar6 < uVar20 != uVar7 < uVar20) {
          puVar15 = puVar9;
        }
        lVar36 = (long)puVar15 - (long)puVar9;
        if (puVar14 != (ulong *)0x0) goto LAB_00734c92;
LAB_00734c9f:
        uVar12 = *puVar9;
        uVar37 = puVar9[1];
        uVar13 = ((ulong *)((long)puVar9 + lVar36))[1];
        *puVar9 = *(ulong *)((long)puVar9 + lVar36);
        puVar9[1] = uVar13;
        *(ulong *)((long)puVar9 + lVar36) = uVar12;
        ((ulong *)((long)puVar9 + lVar36))[1] = uVar37;
        puVar15 = puVar9 + 2;
        local_68._4_4_ = (undefined4)(uVar12 >> 0x20);
        local_68 = CONCAT44(local_68._4_4_,(uint)puVar9[2]);
        uStack_60 = puVar9[3];
        puVar23 = puVar9 + 4;
        uVar20 = (uint)*puVar9;
        if (puVar23 < puVar9 + uVar18 * 2 + -2) {
          uVar12 = 0;
          do {
            puVar24 = puVar23;
            uVar33 = (ulong)(uVar20 < (uint)*puVar24);
            uVar37 = (puVar15 + uVar12 * 2)[1];
            puVar24[-2] = puVar15[uVar12 * 2];
            puVar24[-1] = uVar37;
            uVar37 = puVar24[1];
            puVar15[uVar12 * 2] = *puVar24;
            (puVar15 + uVar12 * 2)[1] = uVar37;
            lVar36 = uVar12 + uVar33;
            uVar13 = puVar24[2];
            uVar37 = (puVar15 + lVar36 * 2)[1];
            *puVar24 = puVar15[lVar36 * 2];
            puVar24[1] = uVar37;
            uVar37 = puVar24[3];
            puVar15[lVar36 * 2] = puVar24[2];
            (puVar15 + lVar36 * 2)[1] = uVar37;
            uVar12 = uVar12 + uVar33 + (ulong)(uVar20 < (uint)uVar13);
            puVar23 = puVar24 + 4;
          } while (puVar23 < puVar9 + uVar18 * 2 + -2);
          puVar24 = puVar24 + 2;
        }
        else {
          uVar12 = 0;
          puVar24 = puVar15;
        }
        do {
          puVar39 = puVar23;
          puVar23 = puVar39;
          if (puVar39 == puVar9 + uVar18 * 2) {
            puVar23 = &local_68;
          }
          uVar13 = uVar12 + (uVar20 < (uint)*puVar23);
          uVar37 = (puVar15 + uVar12 * 2)[1];
          *puVar24 = puVar15[uVar12 * 2];
          puVar24[1] = uVar37;
          uVar37 = puVar23[1];
          puVar15[uVar12 * 2] = *puVar23;
          (puVar15 + uVar12 * 2)[1] = uVar37;
          uVar12 = uVar13;
          puVar23 = puVar39 + 2;
          puVar24 = puVar39;
        } while (puVar39 != puVar9 + uVar18 * 2);
        if (uVar18 <= uVar13) {
LAB_00736439:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_68 = *puVar9;
        uStack_60 = puVar9[1];
        uVar12 = (puVar9 + uVar13 * 2)[1];
        *puVar9 = puVar9[uVar13 * 2];
        puVar9[1] = uVar12;
        puVar9[uVar13 * 2] = local_68;
        (puVar9 + uVar13 * 2)[1] = uStack_60;
        if (uVar13 < uVar30) {
          puVar14 = puVar9 + uVar13 * 2;
          uVar12 = ~uVar13;
          uVar13 = uVar18 + uVar12;
          puVar9 = puVar14 + 2;
          uVar30 = uVar30 + uVar12;
        }
        else if (uVar13 <= uVar30) goto LAB_00734fca;
      }
      else {
        lVar36 = core[62e902411887be45]::slice::sort::shared::pivot::median3_rec::
                 <(u32,u64),<[(u32,u64)]>::select_nth_unstable_by<pipeline[509596c7b52975b2]::keyrec::recover_user_key::_closure_3_>::_closure_0_>
                           (puVar9,puVar15);
        lVar36 = lVar36 - (long)puVar9;
        if (puVar14 == (ulong *)0x0) goto LAB_00734c9f;
LAB_00734c92:
        if (*(uint *)((long)puVar9 + lVar36) < (uint)*puVar14) goto LAB_00734c9f;
        puVar14 = (ulong *)(lVar36 + (long)puVar9);
        uVar12 = *puVar9;
        uVar37 = puVar9[1];
        uVar13 = puVar14[1];
        *puVar9 = *puVar14;
        puVar9[1] = uVar13;
        *puVar14 = uVar12;
        puVar14[1] = uVar37;
        puVar14 = puVar9 + 2;
        local_68._4_4_ = (undefined4)(uVar12 >> 0x20);
        local_68 = CONCAT44(local_68._4_4_,(uint)puVar9[2]);
        uStack_60 = puVar9[3];
        puVar15 = puVar9 + 4;
        uVar20 = (uint)*puVar9;
        if (puVar15 < puVar9 + uVar18 * 2 + -2) {
          uVar12 = 0;
          do {
            puVar23 = puVar15;
            uVar13 = *puVar23;
            uVar37 = (puVar14 + uVar12 * 2)[1];
            puVar23[-2] = puVar14[uVar12 * 2];
            puVar23[-1] = uVar37;
            uVar37 = puVar23[1];
            puVar14[uVar12 * 2] = *puVar23;
            (puVar14 + uVar12 * 2)[1] = uVar37;
            lVar36 = (uVar12 + 1) - (ulong)((uint)uVar13 < uVar20);
            uVar37 = puVar23[2];
            uVar12 = (puVar14 + lVar36 * 2)[1];
            *puVar23 = puVar14[lVar36 * 2];
            puVar23[1] = uVar12;
            uVar12 = puVar23[3];
            puVar14[lVar36 * 2] = puVar23[2];
            (puVar14 + lVar36 * 2)[1] = uVar12;
            uVar12 = (lVar36 + 1) - (ulong)((uint)uVar37 < uVar20);
            puVar15 = puVar23 + 4;
          } while (puVar15 < puVar9 + uVar18 * 2 + -2);
          puVar23 = puVar23 + 2;
        }
        else {
          uVar12 = 0;
          puVar23 = puVar14;
        }
        do {
          puVar24 = puVar15;
          puVar15 = puVar24;
          if (puVar24 == puVar9 + uVar18 * 2) {
            puVar15 = &local_68;
          }
          uVar13 = (uVar12 + 1) - (ulong)((uint)*puVar15 < uVar20);
          uVar37 = (puVar14 + uVar12 * 2)[1];
          *puVar23 = puVar14[uVar12 * 2];
          puVar23[1] = uVar37;
          uVar37 = puVar15[1];
          puVar14[uVar12 * 2] = *puVar15;
          (puVar14 + uVar12 * 2)[1] = uVar37;
          uVar12 = uVar13;
          puVar15 = puVar24 + 2;
          puVar23 = puVar24;
        } while (puVar24 != puVar9 + uVar18 * 2);
        if (uVar18 <= uVar13) goto LAB_00736439;
        local_68 = *puVar9;
        uStack_60 = puVar9[1];
        uVar12 = (puVar9 + uVar13 * 2)[1];
        *puVar9 = puVar9[uVar13 * 2];
        puVar9[1] = uVar12;
        puVar9[uVar13 * 2] = local_68;
        (puVar9 + uVar13 * 2)[1] = uStack_60;
        if (uVar30 <= uVar13) goto LAB_00734fca;
        lVar36 = uVar13 + 1;
        uVar13 = uVar18 - lVar36;
        uVar30 = uVar30 - lVar36;
        puVar9 = puVar9 + lVar36 * 2;
        puVar14 = (ulong *)0x0;
      }
      uVar18 = uVar13;
    } while (0x10 < uVar13);
    if (1 < uVar13) {
      puVar14 = puVar9 + 2;
      if ((uVar13 & 1) == 0) {
        uVar20 = (uint)puVar9[2];
        if ((uint)*puVar9 < uVar20) {
          uVar18 = puVar9[3];
          lVar36 = 0;
          do {
            uVar4 = ((undefined8 *)((long)puVar9 + lVar36))[1];
            *(undefined8 *)((long)puVar14 + lVar36) = *(undefined8 *)((long)puVar9 + lVar36);
            ((undefined8 *)((long)puVar14 + lVar36))[1] = uVar4;
            if (lVar36 == 0) {
              puVar15 = puVar9;
              goto LAB_00734fb2;
            }
            lVar11 = lVar36 + -0x10;
            lVar21 = lVar36 + -0x10;
            lVar36 = lVar11;
          } while (*(uint *)((long)puVar9 + lVar21) < uVar20);
          puVar15 = (ulong *)(lVar11 + (long)puVar14);
LAB_00734fb2:
          *(uint *)puVar15 = uVar20;
          puVar15[1] = uVar18;
        }
        puVar15 = puVar9 + 4;
      }
      else {
        puVar15 = puVar14;
        puVar14 = puVar9;
      }
      if (uVar13 != 2) {
        do {
          uVar20 = (uint)*puVar15;
          if ((uint)*puVar14 < uVar20) {
            uVar18 = puVar14[3];
            puVar23 = puVar15;
            do {
              puVar24 = puVar14;
              uVar30 = puVar24[1];
              *puVar23 = *puVar24;
              puVar23[1] = uVar30;
              if (puVar24 == puVar9) {
                puVar24 = puVar9;
                goto LAB_00735e3c;
              }
              puVar14 = puVar24 + -2;
              puVar23 = puVar24;
            } while ((uint)puVar24[-2] < uVar20);
LAB_00735e3c:
            *(uint *)puVar24 = uVar20;
            puVar24[1] = uVar18;
            uVar20 = (uint)puVar15[2];
            if ((uint)*puVar15 < uVar20) goto LAB_00735e49;
          }
          else {
            uVar20 = (uint)puVar15[2];
            if ((uint)*puVar15 < uVar20) {
LAB_00735e49:
              uVar18 = puVar15[3];
              puVar14 = puVar15;
              do {
                puVar23 = puVar14;
                puVar23[2] = *puVar23;
                puVar23[3] = puVar23[1];
                if (puVar23 == puVar9) {
                  puVar23 = puVar9;
                  goto LAB_00735dd9;
                }
                puVar14 = puVar23 + -2;
              } while ((uint)puVar23[-2] < uVar20);
LAB_00735dd9:
              *(uint *)puVar23 = uVar20;
              puVar23[1] = uVar18;
            }
          }
          puVar14 = puVar15 + 2;
          puVar15 = puVar15 + 4;
        } while (puVar15 != puVar9 + uVar13 * 2);
      }
    }
LAB_00734fca:
    puVar14 = local_50;
    puVar9 = local_78;
    if (local_70 < 0x10) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::slice::index::slice_index_fail
                (0,0x10,local_70,&PTR_s_src_keyrec_rs_00589260);
    }
    puVar15 = local_78 + 2;
    uVar20 = (uint)*local_78;
    uVar7 = (uint)local_78[2];
    if (uVar20 < uVar7) {
      uVar18 = local_78[3];
      *puVar15 = *local_78;
      local_78[3] = local_78[1];
      *(uint *)local_78 = uVar7;
      local_78[1] = uVar18;
      uVar6 = (uint)local_78[4];
      uVar20 = uVar7;
      if (uVar6 <= (uint)local_78[2]) goto LAB_00735028;
LAB_0073520f:
      uVar18 = local_78[5];
      local_78[4] = *puVar15;
      local_78[5] = local_78[3];
      puVar23 = puVar15;
      if (uVar20 < uVar6) {
        *puVar15 = *local_78;
        local_78[3] = local_78[1];
        puVar23 = local_78;
      }
      *(uint *)puVar23 = uVar6;
      puVar23[1] = uVar18;
      uVar20 = (uint)local_78[6];
      if (uVar20 <= (uint)local_78[4]) goto LAB_00735252;
LAB_0073503a:
      puVar23 = local_78 + 4;
      uVar18 = local_78[7];
      local_78[6] = *puVar23;
      local_78[7] = local_78[5];
      if ((uint)local_78[2] < uVar20) {
        *puVar23 = *puVar15;
        local_78[5] = local_78[3];
        puVar23 = puVar15;
        if ((uint)*local_78 < uVar20) {
          *puVar15 = *local_78;
          local_78[3] = local_78[1];
          puVar23 = local_78;
        }
      }
      *(uint *)puVar23 = uVar20;
      puVar23[1] = uVar18;
      uVar7 = (uint)local_78[8];
      if (uVar7 <= (uint)local_78[6]) goto LAB_00735093;
LAB_00735268:
      puVar24 = local_78 + 6;
      uVar18 = local_78[9];
      local_78[8] = *puVar24;
      local_78[9] = local_78[7];
      puVar23 = local_78 + 4;
      if ((uint)*puVar23 < uVar7) {
        *puVar24 = *puVar23;
        local_78[7] = local_78[5];
        puVar24 = puVar23;
        if ((uint)*puVar15 < uVar7) {
          *puVar23 = *puVar15;
          local_78[5] = local_78[3];
          puVar24 = puVar15;
          if ((uint)*local_78 < uVar7) {
            *puVar15 = *local_78;
            local_78[3] = local_78[1];
            puVar24 = local_78;
          }
        }
      }
      *(uint *)puVar24 = uVar7;
      puVar24[1] = uVar18;
      uVar20 = (uint)local_78[10];
      if (uVar20 <= (uint)local_78[8]) goto LAB_007352da;
LAB_007350a8:
      puVar39 = local_78 + 4;
      puVar24 = local_78 + 8;
      uVar18 = local_78[0xb];
      local_78[10] = *puVar24;
      local_78[0xb] = local_78[9];
      puVar23 = local_78 + 6;
      if ((uint)*puVar23 < uVar20) {
        *puVar24 = *puVar23;
        local_78[9] = local_78[7];
        puVar24 = puVar23;
        if ((uint)*puVar39 < uVar20) {
          *puVar23 = *puVar39;
          local_78[7] = local_78[5];
          puVar24 = puVar39;
          if ((uint)*puVar15 < uVar20) {
            *puVar39 = *puVar15;
            local_78[5] = local_78[3];
            puVar24 = puVar15;
            if ((uint)*local_78 < uVar20) {
              *puVar15 = *local_78;
              local_78[3] = local_78[1];
              puVar24 = local_78;
            }
          }
        }
      }
      *(uint *)puVar24 = uVar20;
      puVar24[1] = uVar18;
      uVar7 = (uint)local_78[0xc];
      if (uVar7 <= (uint)local_78[10]) goto LAB_00735132;
LAB_007352ec:
      puVar32 = local_78 + 4;
      puVar24 = local_78 + 10;
      puVar39 = local_78 + 6;
      uVar18 = local_78[0xd];
      local_78[0xc] = *puVar24;
      local_78[0xd] = local_78[0xb];
      puVar23 = local_78 + 8;
      if ((uint)*puVar23 < uVar7) {
        *puVar24 = *puVar23;
        local_78[0xb] = local_78[9];
        puVar24 = puVar23;
        if ((uint)*puVar39 < uVar7) {
          *puVar23 = *puVar39;
          local_78[9] = local_78[7];
          puVar24 = puVar39;
          if ((uint)*puVar32 < uVar7) {
            *puVar39 = *puVar32;
            local_78[7] = local_78[5];
            puVar24 = puVar32;
            if ((uint)*puVar15 < uVar7) {
              *puVar32 = *puVar15;
              local_78[5] = local_78[3];
              puVar24 = puVar15;
              if ((uint)*local_78 < uVar7) {
                *puVar15 = *local_78;
                local_78[3] = local_78[1];
                puVar24 = local_78;
              }
            }
          }
        }
      }
      *(uint *)puVar24 = uVar7;
      puVar24[1] = uVar18;
      uVar20 = (uint)local_78[0xe];
      if (uVar20 <= (uint)local_78[0xc]) goto LAB_0073537e;
LAB_00735148:
      puVar40 = local_78 + 4;
      puVar24 = local_78 + 0xc;
      puVar32 = local_78 + 8;
      puVar39 = local_78 + 6;
      uVar18 = local_78[0xf];
      local_78[0xe] = *puVar24;
      local_78[0xf] = local_78[0xd];
      puVar23 = local_78 + 10;
      if ((uint)*puVar23 < uVar20) {
        *puVar24 = *puVar23;
        local_78[0xd] = local_78[0xb];
        puVar24 = puVar23;
        if ((uint)*puVar32 < uVar20) {
          *puVar23 = *puVar32;
          local_78[0xb] = local_78[9];
          puVar24 = puVar32;
          if ((uint)*puVar39 < uVar20) {
            *puVar32 = *puVar39;
            local_78[9] = local_78[7];
            puVar24 = puVar39;
            if ((uint)*puVar40 < uVar20) {
              *puVar39 = *puVar40;
              local_78[7] = local_78[5];
              puVar24 = puVar40;
              if ((uint)*puVar15 < uVar20) {
                *puVar40 = *puVar15;
                local_78[5] = local_78[3];
                puVar24 = puVar15;
                if ((uint)*local_78 < uVar20) {
                  *puVar15 = *local_78;
                  local_78[3] = local_78[1];
                  puVar24 = local_78;
                }
              }
            }
          }
        }
      }
      *(uint *)puVar24 = uVar20;
      puVar24[1] = uVar18;
      uVar7 = (uint)local_78[0x10];
      if ((uint)local_78[0xe] < uVar7) goto LAB_00735396;
    }
    else {
      uVar6 = (uint)local_78[4];
      if (uVar7 < uVar6) goto LAB_0073520f;
LAB_00735028:
      uVar20 = (uint)local_78[6];
      if (uVar6 < uVar20) goto LAB_0073503a;
LAB_00735252:
      uVar7 = (uint)local_78[8];
      if (uVar20 < uVar7) goto LAB_00735268;
LAB_00735093:
      uVar20 = (uint)local_78[10];
      if (uVar7 < uVar20) goto LAB_007350a8;
LAB_007352da:
      uVar7 = (uint)local_78[0xc];
      if (uVar20 < uVar7) goto LAB_007352ec;
LAB_00735132:
      uVar20 = (uint)local_78[0xe];
      if (uVar7 < uVar20) goto LAB_00735148;
LAB_0073537e:
      uVar7 = (uint)local_78[0x10];
      if (uVar20 < uVar7) {
LAB_00735396:
        puVar41 = local_78 + 4;
        puVar40 = local_78 + 10;
        puVar32 = local_78 + 8;
        puVar39 = local_78 + 6;
        puVar24 = local_78 + 0xe;
        uVar18 = local_78[0x11];
        local_78[0x10] = *puVar24;
        local_78[0x11] = local_78[0xf];
        puVar23 = local_78 + 0xc;
        if ((uint)*puVar23 < uVar7) {
          *puVar24 = *puVar23;
          local_78[0xf] = local_78[0xd];
          puVar24 = puVar23;
          if ((uint)*puVar40 < uVar7) {
            *puVar23 = *puVar40;
            local_78[0xd] = local_78[0xb];
            puVar24 = puVar40;
            if ((uint)*puVar32 < uVar7) {
              *puVar40 = *puVar32;
              local_78[0xb] = local_78[9];
              puVar24 = puVar32;
              if ((uint)*puVar39 < uVar7) {
                *puVar32 = *puVar39;
                local_78[9] = local_78[7];
                puVar24 = puVar39;
                if ((uint)*puVar41 < uVar7) {
                  *puVar39 = *puVar41;
                  local_78[7] = local_78[5];
                  puVar24 = puVar41;
                  if ((uint)*puVar15 < uVar7) {
                    *puVar41 = *puVar15;
                    local_78[5] = local_78[3];
                    puVar24 = puVar15;
                    if ((uint)*local_78 < uVar7) {
                      *puVar15 = *local_78;
                      local_78[3] = local_78[1];
                      puVar24 = local_78;
                    }
                  }
                }
              }
            }
          }
        }
        *(uint *)puVar24 = uVar7;
        puVar24[1] = uVar18;
        uVar7 = (uint)local_78[0x10];
      }
    }
    puVar42 = local_78 + 4;
    puVar41 = local_78 + 0x10;
    puVar40 = local_78 + 0xc;
    puVar32 = local_78 + 10;
    puVar39 = local_78 + 8;
    puVar24 = local_78 + 6;
    unaff_RBX = local_78 + 0xe;
    puVar23 = local_78 + 0x12;
    uVar20 = (uint)local_78[0x12];
    if (uVar7 < uVar20) {
      uVar18 = local_78[0x13];
      *puVar23 = *puVar41;
      local_78[0x13] = local_78[0x11];
      puVar25 = puVar41;
      if ((uint)local_78[0xe] < uVar20) {
        *puVar41 = *unaff_RBX;
        local_78[0x11] = local_78[0xf];
        puVar25 = unaff_RBX;
        if ((uint)*puVar40 < uVar20) {
          *unaff_RBX = *puVar40;
          local_78[0xf] = local_78[0xd];
          puVar25 = puVar40;
          if ((uint)*puVar32 < uVar20) {
            *puVar40 = *puVar32;
            local_78[0xd] = local_78[0xb];
            puVar25 = puVar32;
            if ((uint)*puVar39 < uVar20) {
              *puVar32 = *puVar39;
              local_78[0xb] = local_78[9];
              puVar25 = puVar39;
              if ((uint)*puVar24 < uVar20) {
                *puVar39 = *puVar24;
                local_78[9] = local_78[7];
                puVar25 = puVar24;
                if ((uint)*puVar42 < uVar20) {
                  *puVar24 = *puVar42;
                  local_78[7] = local_78[5];
                  puVar25 = puVar42;
                  if ((uint)*puVar15 < uVar20) {
                    *puVar42 = *puVar15;
                    local_78[5] = local_78[3];
                    puVar25 = puVar15;
                    if ((uint)*local_78 < uVar20) {
                      *puVar15 = *local_78;
                      local_78[3] = local_78[1];
                      puVar25 = local_78;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar25 = uVar20;
      puVar25[1] = uVar18;
      uVar20 = (uint)local_78[0x12];
    }
    puVar25 = local_78 + 0x14;
    uVar7 = (uint)local_78[0x14];
    if (uVar20 < uVar7) {
      uVar18 = local_78[0x15];
      *puVar25 = *puVar23;
      local_78[0x15] = local_78[0x13];
      puVar26 = puVar23;
      if ((uint)local_78[0x10] < uVar7) {
        *puVar23 = *puVar41;
        local_78[0x13] = local_78[0x11];
        puVar26 = puVar41;
        if ((uint)*unaff_RBX < uVar7) {
          *puVar41 = *unaff_RBX;
          local_78[0x11] = local_78[0xf];
          puVar26 = unaff_RBX;
          if ((uint)*puVar40 < uVar7) {
            *unaff_RBX = *puVar40;
            local_78[0xf] = local_78[0xd];
            puVar26 = puVar40;
            if ((uint)*puVar32 < uVar7) {
              *puVar40 = *puVar32;
              local_78[0xd] = local_78[0xb];
              puVar26 = puVar32;
              if ((uint)*puVar39 < uVar7) {
                *puVar32 = *puVar39;
                local_78[0xb] = local_78[9];
                puVar26 = puVar39;
                if ((uint)*puVar24 < uVar7) {
                  *puVar39 = *puVar24;
                  local_78[9] = local_78[7];
                  puVar26 = puVar24;
                  if ((uint)local_78[4] < uVar7) {
                    *puVar24 = local_78[4];
                    local_78[7] = local_78[5];
                    puVar26 = local_78 + 4;
                    if ((uint)*puVar15 < uVar7) {
                      local_78[4] = *puVar15;
                      local_78[5] = local_78[3];
                      puVar26 = puVar15;
                      if ((uint)*local_78 < uVar7) {
                        *puVar15 = *local_78;
                        local_78[3] = local_78[1];
                        puVar26 = local_78;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar26 = uVar7;
      puVar26[1] = uVar18;
      uVar7 = (uint)local_78[0x14];
    }
    puVar26 = local_78 + 0x16;
    uVar20 = (uint)local_78[0x16];
    if (uVar7 < uVar20) {
      uVar18 = local_78[0x17];
      *puVar26 = *puVar25;
      local_78[0x17] = local_78[0x15];
      puVar16 = puVar25;
      if ((uint)local_78[0x12] < uVar20) {
        *puVar25 = *puVar23;
        local_78[0x15] = local_78[0x13];
        puVar16 = puVar23;
        if ((uint)*puVar41 < uVar20) {
          *puVar23 = *puVar41;
          local_78[0x13] = local_78[0x11];
          puVar16 = puVar41;
          if ((uint)*unaff_RBX < uVar20) {
            *puVar41 = *unaff_RBX;
            local_78[0x11] = local_78[0xf];
            puVar16 = unaff_RBX;
            if ((uint)*puVar40 < uVar20) {
              *unaff_RBX = *puVar40;
              local_78[0xf] = local_78[0xd];
              puVar16 = puVar40;
              if ((uint)*puVar32 < uVar20) {
                *puVar40 = *puVar32;
                local_78[0xd] = local_78[0xb];
                puVar16 = puVar32;
                if ((uint)*puVar39 < uVar20) {
                  *puVar32 = *puVar39;
                  local_78[0xb] = local_78[9];
                  puVar16 = puVar39;
                  if ((uint)*puVar24 < uVar20) {
                    *puVar39 = *puVar24;
                    local_78[9] = local_78[7];
                    puVar16 = puVar24;
                    if ((uint)local_78[4] < uVar20) {
                      *puVar24 = local_78[4];
                      local_78[7] = local_78[5];
                      puVar16 = local_78 + 4;
                      if ((uint)*puVar15 < uVar20) {
                        local_78[4] = *puVar15;
                        local_78[5] = local_78[3];
                        puVar16 = puVar15;
                        if ((uint)*local_78 < uVar20) {
                          *puVar15 = *local_78;
                          local_78[3] = local_78[1];
                          puVar16 = local_78;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar16 = uVar20;
      puVar16[1] = uVar18;
      uVar20 = (uint)local_78[0x16];
    }
    puVar16 = local_78 + 0x18;
    uVar7 = (uint)local_78[0x18];
    if (uVar20 < uVar7) {
      uVar18 = local_78[0x19];
      *puVar16 = local_78[0x16];
      local_78[0x19] = local_78[0x17];
      puVar27 = local_78 + 0x16;
      if ((uint)local_78[0x14] < uVar7) {
        local_78[0x16] = local_78[0x14];
        local_78[0x17] = local_78[0x15];
        puVar27 = local_78 + 0x14;
        if ((uint)*puVar23 < uVar7) {
          local_78[0x14] = *puVar23;
          local_78[0x15] = local_78[0x13];
          puVar27 = puVar23;
          if ((uint)*puVar41 < uVar7) {
            *puVar23 = *puVar41;
            local_78[0x13] = local_78[0x11];
            puVar27 = puVar41;
            if ((uint)*unaff_RBX < uVar7) {
              *puVar41 = *unaff_RBX;
              local_78[0x11] = local_78[0xf];
              puVar27 = unaff_RBX;
              if ((uint)*puVar40 < uVar7) {
                *unaff_RBX = *puVar40;
                local_78[0xf] = local_78[0xd];
                puVar27 = puVar40;
                if ((uint)*puVar32 < uVar7) {
                  *puVar40 = *puVar32;
                  local_78[0xd] = local_78[0xb];
                  puVar27 = puVar32;
                  if ((uint)*puVar39 < uVar7) {
                    *puVar32 = *puVar39;
                    local_78[0xb] = local_78[9];
                    puVar27 = puVar39;
                    if ((uint)*puVar24 < uVar7) {
                      *puVar39 = *puVar24;
                      local_78[9] = local_78[7];
                      puVar27 = puVar24;
                      if ((uint)local_78[4] < uVar7) {
                        *puVar24 = local_78[4];
                        local_78[7] = local_78[5];
                        puVar27 = local_78 + 4;
                        if ((uint)*puVar15 < uVar7) {
                          local_78[4] = *puVar15;
                          local_78[5] = local_78[3];
                          puVar27 = puVar15;
                          if ((uint)*local_78 < uVar7) {
                            *puVar15 = *local_78;
                            local_78[3] = local_78[1];
                            puVar27 = local_78;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar27 = uVar7;
      puVar27[1] = uVar18;
      uVar7 = (uint)local_78[0x18];
    }
    puVar27 = local_78 + 0x1a;
    uVar20 = (uint)local_78[0x1a];
    if (uVar7 < uVar20) {
      uVar18 = local_78[0x1b];
      *puVar27 = *puVar16;
      local_78[0x1b] = local_78[0x19];
      puVar19 = puVar16;
      if ((uint)local_78[0x16] < uVar20) {
        *puVar16 = *puVar26;
        local_78[0x19] = local_78[0x17];
        puVar19 = puVar26;
        if ((uint)*puVar25 < uVar20) {
          *puVar26 = *puVar25;
          local_78[0x17] = local_78[0x15];
          puVar19 = puVar25;
          if ((uint)*puVar23 < uVar20) {
            *puVar25 = *puVar23;
            local_78[0x15] = local_78[0x13];
            puVar19 = puVar23;
            if ((uint)*puVar41 < uVar20) {
              *puVar23 = *puVar41;
              local_78[0x13] = local_78[0x11];
              puVar19 = puVar41;
              if ((uint)*unaff_RBX < uVar20) {
                *puVar41 = *unaff_RBX;
                local_78[0x11] = local_78[0xf];
                puVar19 = unaff_RBX;
                if ((uint)*puVar40 < uVar20) {
                  *unaff_RBX = *puVar40;
                  local_78[0xf] = local_78[0xd];
                  puVar19 = puVar40;
                  if ((uint)*puVar32 < uVar20) {
                    *puVar40 = *puVar32;
                    local_78[0xd] = local_78[0xb];
                    puVar19 = puVar32;
                    if ((uint)*puVar39 < uVar20) {
                      *puVar32 = *puVar39;
                      local_78[0xb] = local_78[9];
                      puVar19 = puVar39;
                      if ((uint)*puVar24 < uVar20) {
                        *puVar39 = *puVar24;
                        local_78[9] = local_78[7];
                        puVar19 = puVar24;
                        if ((uint)*puVar42 < uVar20) {
                          *puVar24 = *puVar42;
                          local_78[7] = local_78[5];
                          puVar19 = puVar42;
                          if ((uint)*puVar15 < uVar20) {
                            *puVar42 = *puVar15;
                            local_78[5] = local_78[3];
                            puVar19 = puVar15;
                            if ((uint)*local_78 < uVar20) {
                              *puVar15 = *local_78;
                              local_78[3] = local_78[1];
                              puVar19 = local_78;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar19 = uVar20;
      puVar19[1] = uVar18;
      uVar7 = (uint)local_78[0x1c];
      if (uVar7 <= (uint)local_78[0x1a]) goto LAB_00735a5f;
LAB_00735a8a:
      uVar18 = local_78[0x1d];
      local_78[0x1c] = *puVar27;
      local_78[0x1d] = local_78[0x1b];
      puVar19 = puVar27;
      if ((uint)local_78[0x18] < uVar7) {
        *puVar27 = *puVar16;
        local_78[0x1b] = local_78[0x19];
        puVar19 = puVar16;
        if ((uint)*puVar26 < uVar7) {
          *puVar16 = *puVar26;
          local_78[0x19] = local_78[0x17];
          puVar19 = puVar26;
          if ((uint)*puVar25 < uVar7) {
            *puVar26 = *puVar25;
            local_78[0x17] = local_78[0x15];
            puVar19 = puVar25;
            if ((uint)*puVar23 < uVar7) {
              *puVar25 = *puVar23;
              local_78[0x15] = local_78[0x13];
              puVar19 = puVar23;
              if ((uint)*puVar41 < uVar7) {
                *puVar23 = *puVar41;
                local_78[0x13] = local_78[0x11];
                puVar19 = puVar41;
                if ((uint)*unaff_RBX < uVar7) {
                  *puVar41 = *unaff_RBX;
                  local_78[0x11] = local_78[0xf];
                  puVar19 = unaff_RBX;
                  if ((uint)*puVar40 < uVar7) {
                    *unaff_RBX = *puVar40;
                    local_78[0xf] = local_78[0xd];
                    puVar19 = puVar40;
                    if ((uint)*puVar32 < uVar7) {
                      *puVar40 = *puVar32;
                      local_78[0xd] = local_78[0xb];
                      puVar19 = puVar32;
                      if ((uint)*puVar39 < uVar7) {
                        *puVar32 = *puVar39;
                        local_78[0xb] = local_78[9];
                        puVar19 = puVar39;
                        if ((uint)*puVar24 < uVar7) {
                          *puVar39 = *puVar24;
                          local_78[9] = local_78[7];
                          puVar19 = puVar24;
                          if ((uint)*puVar42 < uVar7) {
                            *puVar24 = *puVar42;
                            local_78[7] = local_78[5];
                            puVar19 = puVar42;
                            if ((uint)*puVar15 < uVar7) {
                              *puVar42 = *puVar15;
                              local_78[5] = local_78[3];
                              puVar19 = puVar15;
                              if ((uint)*local_78 < uVar7) {
                                *puVar15 = *local_78;
                                local_78[3] = local_78[1];
                                puVar19 = local_78;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint *)puVar19 = uVar7;
      puVar19[1] = uVar18;
      uVar20 = (uint)local_78[0x1e];
      if ((uint)local_78[0x1c] < uVar20) {
LAB_00735c29:
        puVar19 = local_78 + 0x1c;
        uVar18 = local_78[0x1f];
        local_78[0x1e] = *puVar19;
        local_78[0x1f] = local_78[0x1d];
        if ((uint)local_78[0x1a] < uVar20) {
          *puVar19 = *puVar27;
          local_78[0x1d] = local_78[0x1b];
          if ((uint)*puVar16 < uVar20) {
            *puVar27 = *puVar16;
            local_78[0x1b] = local_78[0x19];
            if ((uint)*puVar26 < uVar20) {
              *puVar16 = *puVar26;
              local_78[0x19] = local_78[0x17];
              puVar19 = puVar26;
              if ((uint)*puVar25 < uVar20) {
                *puVar26 = *puVar25;
                local_78[0x17] = local_78[0x15];
                puVar16 = puVar25;
                if (uVar20 <= (uint)*puVar23) goto LAB_00735e7e;
                *puVar25 = *puVar23;
                local_78[0x15] = local_78[0x13];
                puVar19 = puVar23;
                if ((uint)*puVar41 < uVar20) {
                  *puVar23 = *puVar41;
                  local_78[0x13] = local_78[0x11];
                  if ((uint)*unaff_RBX < uVar20) {
                    *puVar41 = *unaff_RBX;
                    local_78[0x11] = local_78[0xf];
                    if ((uint)*puVar40 < uVar20) {
                      *unaff_RBX = *puVar40;
                      local_78[0xf] = local_78[0xd];
                      if ((uint)*puVar32 < uVar20) {
                        *puVar40 = *puVar32;
                        local_78[0xd] = local_78[0xb];
                        if ((uint)*puVar39 < uVar20) {
                          *puVar32 = *puVar39;
                          local_78[0xb] = local_78[9];
                          if ((uint)*puVar24 < uVar20) {
                            *puVar39 = *puVar24;
                            local_78[9] = local_78[7];
                            if ((uint)*puVar42 < uVar20) {
                              *puVar24 = *puVar42;
                              local_78[7] = local_78[5];
                              if ((uint)*puVar15 < uVar20) {
                                *puVar42 = *puVar15;
                                local_78[5] = local_78[3];
                                if ((uint)*local_78 < uVar20) {
                                  *puVar15 = *local_78;
                                  local_78[3] = local_78[1];
                                  puVar19 = local_78;
                                }
                                else {
                                  puVar19 = puVar15;
                                }
                              }
                              else {
                                puVar19 = puVar42;
                              }
                            }
                            else {
                              puVar19 = puVar24;
                            }
                          }
                          else {
                            puVar19 = puVar39;
                          }
                        }
                        else {
                          puVar19 = puVar32;
                        }
                      }
                      else {
                        puVar19 = puVar40;
                      }
                    }
                    else {
                      puVar19 = unaff_RBX;
                    }
                  }
                  else {
                    puVar19 = puVar41;
                  }
                }
              }
            }
            else {
LAB_00735e7e:
              puVar19 = puVar16;
            }
          }
          else {
            puVar19 = puVar27;
          }
        }
        *(uint *)puVar19 = uVar20;
        puVar19[1] = uVar18;
      }
    }
    else {
      uVar7 = (uint)local_78[0x1c];
      if (uVar20 < uVar7) goto LAB_00735a8a;
LAB_00735a5f:
      uVar20 = (uint)local_78[0x1e];
      if (uVar7 < uVar20) goto LAB_00735c29;
    }
    uVar18 = *puVar10;
    uVar30 = *(ulong *)((long)puVar10 + (uVar29 & 0xfffffffffffffffe) * 4);
    uVar29 = puVar10[uVar29 - 1];
    lVar36 = *local_48;
    lVar11 = 0;
    lVar21 = 0;
    do {
      uVar12 = *(ulong *)((long)local_78 + lVar21 + 8);
      lVar21 = lVar21 + 0x10;
      uVar37 = 0;
      lVar17 = lVar36;
      puVar15 = unaff_RBX;
      do {
        uVar33 = uVar37 * 0xf372fe9600;
        uVar13 = uVar37;
        lVar36 = lVar17;
        while( true ) {
          lVar36 = lVar36 + 1;
          uVar34 = uVar13 + 1;
          unaff_RBX = (ulong *)((uVar33 ^ uVar12) & 0xffffffffff);
          uVar31 = (uVar18 ^ (ulong)unaff_RBX) * 0x3dee219263;
          if (((((uVar31 & 0xff00000000) == 0) || ((uVar31 & 0xffffffff00) == 0x8000000000)) &&
              ((uVar31 = (uVar30 ^ (ulong)unaff_RBX) * 0x3dee219263, (uVar31 & 0xff00000000) == 0 ||
               ((uVar31 & 0xffffffff00) == 0x8000000000)))) &&
             ((uVar31 = (uVar29 ^ (ulong)unaff_RBX) * 0x3dee219263, (uVar31 & 0xff00000000) == 0 ||
              ((uVar31 & 0xffffffff00) == 0x8000000000)))) break;
          uVar33 = uVar33 + 0xf372fe9600;
          uVar13 = uVar34;
          if (uVar34 == 0x40) {
            lVar36 = (lVar17 - uVar37) + 0x40;
            *local_48 = lVar36;
            unaff_RBX = puVar15;
            goto joined_r0x00735f2d;
          }
        }
        *local_48 = lVar36;
        lVar17 = 0;
        do {
          uVar37 = (*(ulong *)((long)puVar10 + lVar17) ^ (ulong)unaff_RBX) * 0x3dee219263;
          if (((uVar37 & 0xff00000000) != 0) && ((uVar37 & 0xffffffff00) != 0x8000000000)) {
            unaff_RBX = puVar15;
            goto LAB_0073604b;
          }
          lVar17 = lVar17 + 8;
        } while (local_38 != lVar17);
        bVar43 = lVar11 == 1;
        lVar11 = 1;
        if ((bVar43) && (puVar15 != unaff_RBX)) {
          if ((sys::A_BASE_0 == (ulong *)0x0) ||
             ((puVar10 < sys::A_BASE_0 || (sys::A_END_0 <= puVar10)))) {
            free(puVar10);
            puVar14 = local_50;
            goto LAB_00734893;
          }
          unaff_RBX = (ulong *)(0x40 - LZCOUNT(local_38 - 1U));
          if (0xffff < local_38 - 1U) {
            cVar5 = sys::big_put(puVar10,unaff_RBX);
            if (cVar5 != '\0') goto LAB_00734893;
          }
          *puVar10 = *(ulong *)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8) = puVar10;
          goto LAB_00734893;
        }
LAB_0073604b:
        uVar37 = uVar34;
        lVar17 = lVar36;
        puVar15 = unaff_RBX;
      } while (uVar13 < 0x3f);
joined_r0x00735f2d:
    } while (lVar21 != 0x100);
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar10 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar10))
    {
      free(puVar10);
    }
    else {
      lVar36 = 0x40 - LZCOUNT(local_38 - 1U);
      if ((local_38 - 1U < 0x10000) || (cVar5 = sys::big_put(puVar10,lVar36), cVar5 == '\0')) {
        *puVar10 = *(ulong *)(in_FS_OFFSET + lVar36 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar36 * 8 + -0x3c8) = puVar10;
      }
    }
    if (local_80 != 0) {
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar9 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar9))
      {
        free(puVar9);
      }
      else {
        uVar29 = local_80 * 0x10 - 1;
        lVar21 = LZCOUNT(uVar29);
        lVar36 = 0x40 - lVar21;
        if ((uVar29 < 0x10000) || (cVar5 = sys::big_put(puVar9,lVar36), cVar5 == '\0')) {
          if (lVar21 == 0) goto LAB_0073647a;
          *puVar9 = *(ulong *)(in_FS_OFFSET + lVar36 * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + lVar36 * 8 + -0x3c8) = puVar9;
        }
      }
    }
    if (local_40 != 0) {
      if (((sys::A_BASE_0 == (ulong *)0x0) || (local_50 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= local_50)) {
        free(local_50);
      }
      else {
        uVar29 = 0x10;
        if (0x10 < local_40 << 3) {
          uVar29 = local_40 << 3;
        }
        lVar21 = LZCOUNT(uVar29 - 1);
        lVar36 = 0x40 - lVar21;
        if ((uVar29 - 1 < 0x10000) || (cVar5 = sys::big_put(local_50,lVar36), cVar5 == '\0')) {
          if (lVar21 == 0) {
LAB_0073647a:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (lVar36,0x40,&PTR_s_src_sys_rs_002110f0);
          }
          *local_50 = *(ulong *)(in_FS_OFFSET + lVar36 * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + lVar36 * 8 + -0x3c8) = local_50;
        }
      }
    }
    goto LAB_0073623c;
  }
LAB_00734893:
  if (local_80 != 0) {
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar9 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar9)) {
      free(puVar9);
    }
    else {
      uVar29 = local_80 * 0x10 - 1;
      lVar36 = LZCOUNT(uVar29);
      unaff_RBX = (ulong *)(0x40 - lVar36);
      if ((uVar29 < 0x10000) || (cVar5 = sys::big_put(puVar9,unaff_RBX), cVar5 == '\0')) {
        if (lVar36 == 0) goto LAB_00736465;
        *puVar9 = *(ulong *)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8) = puVar9;
      }
    }
  }
  if (local_40 != 0) {
    if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar14 < sys::A_BASE_0)) || (sys::A_END_0 <= puVar14))
    {
      free(puVar14);
    }
    else {
      uVar29 = 0x10;
      if (0x10 < local_40 << 3) {
        uVar29 = local_40 << 3;
      }
      lVar36 = LZCOUNT(uVar29 - 1);
      unaff_RBX = (ulong *)(0x40 - lVar36);
      if ((uVar29 - 1 < 0x10000) || (cVar5 = sys::big_put(puVar14,unaff_RBX), cVar5 == '\0')) {
        if (lVar36 == 0) {
LAB_00736465:
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (unaff_RBX,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar14 = *(ulong *)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + (long)unaff_RBX * 8 + -0x3c8) = puVar14;
      }
    }
  }
LAB_00734a30:
  lVar11 = 0;
LAB_0073623c:
  auVar49._8_8_ = unaff_RBX;
  auVar49._0_8_ = lVar11;
  return auVar49;
}


// ==== pipeline::keyrec::recover_event_key @ 007364a0 (3938 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::keyrec::recover_event_key */

undefined1  [16] __rustcall
pipeline[509596c7b52975b2]::keyrec::recover_event_key
          (ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 (*pauVar8) [32];
  ushort uVar9;
  char cVar10;
  ulong *__ptr;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined1 (*pauVar20) [32];
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined1 (*pauVar26) [64];
  ulong *puVar27;
  undefined1 (*pauVar28) [32];
  ulong *puVar29;
  undefined8 uVar30;
  ulong *unaff_R14;
  ulong uVar31;
  long in_FS_OFFSET;
  ushort uVar32;
  ushort uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar42 [16];
  ulong *local_108;
  ulong *local_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  ulong *local_98;
  undefined1 (*local_90) [32];
  ulong *local_88;
  undefined1 local_80 [2] [32];
  
  if (param_2 == 0) {
LAB_007372df:
    uVar30 = 0;
    goto LAB_007372e2;
  }
  uVar1 = param_2 * 8;
  __ptr = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(uVar1,8);
  uVar17 = uVar1;
  if (__ptr == (ulong *)0x0) {
LAB_0073735c:
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar17);
  }
  lVar23 = param_2 * 0x28;
  if (param_2 < 5) {
    uVar16 = 0;
  }
  else {
    if (param_2 < 0x11) {
      uVar24 = 0;
    }
    else {
      uVar17 = 0x10;
      if ((param_2 & 0xf) != 0) {
        uVar17 = (ulong)((uint)param_2 & 0xf);
      }
      uVar16 = param_2 - uVar17;
      pauVar26 = (undefined1 (*) [64])(param_1 + 0x40);
      uVar24 = 0;
      auVar41 = ZEXT3264(_DAT_00203dc0);
      do {
        auVar40 = vmovdqu64_avx512f(*(undefined1 (*) [64])((long)pauVar26[-8] + 0x20));
        auVar37 = vmovdqu64_avx512f(pauVar26[-5]);
        auVar38 = vmovdqu64_avx512f(*(undefined1 (*) [64])((long)pauVar26[-3] + 0x20));
        auVar39 = vmovdqu64_avx512f(*pauVar26);
        in_ZMM1 = vpermt2q_avx512f(auVar40,auVar41,*(undefined1 (*) [64])((long)pauVar26[-7] + 0x20)
                                  );
        auVar40 = vpermt2q_avx512f(auVar37,auVar41,pauVar26[-4]);
        auVar37 = vpermt2q_avx512f(auVar38,auVar41,*(undefined1 (*) [64])((long)pauVar26[-2] + 0x20)
                                  );
        auVar38 = vpermt2q_avx512f(auVar39,auVar41,pauVar26[1]);
        *(undefined1 (*) [32])(__ptr + uVar24) = in_ZMM1._0_32_;
        *(undefined1 (*) [32])(__ptr + uVar24 + 4) = auVar40._0_32_;
        *(undefined1 (*) [32])(__ptr + uVar24 + 8) = auVar37._0_32_;
        *(undefined1 (*) [32])(__ptr + uVar24 + 0xc) = auVar38._0_32_;
        uVar24 = uVar24 + 0x10;
        pauVar26 = pauVar26 + 10;
      } while (uVar16 != uVar24);
      uVar24 = uVar16;
      if ((uint)uVar17 < 5) goto LAB_00736612;
    }
    uVar16 = 4;
    if ((param_2 & 3) != 0) {
      uVar16 = (ulong)((uint)param_2 & 3);
    }
    uVar16 = param_2 - uVar16;
    pauVar26 = (undefined1 (*) [64])(param_1 + uVar24 * 5 + 4);
    auVar41 = ZEXT3264(_DAT_00203dc0);
    do {
      auVar40 = vmovdqu64_avx512f(*pauVar26);
      in_ZMM1 = vpermt2q_avx512f(auVar40,auVar41,pauVar26[1]);
      *(undefined1 (*) [32])(__ptr + uVar24) = in_ZMM1._0_32_;
      uVar24 = uVar24 + 4;
      pauVar26 = (undefined1 (*) [64])((long)pauVar26[2] + 0x20);
    } while (uVar16 != uVar24);
  }
LAB_00736612:
  puVar13 = param_1 + param_2 * 5;
  puVar29 = param_1 + uVar16 * 5 + 4;
  do {
    __ptr[uVar16] = *puVar29;
    uVar16 = uVar16 + 1;
    puVar29 = puVar29 + 5;
  } while (param_2 != uVar16);
  if (param_2 != 1) {
    if (param_2 < 0x15) {
      if ((param_2 & 1) == 0) {
        uVar17 = *__ptr;
        uVar16 = __ptr[1];
        if (uVar16 < uVar17) {
          lVar22 = 8;
          do {
            *(ulong *)((long)__ptr + lVar22) = uVar17;
            if (lVar22 == 8) {
              puVar29 = __ptr;
              goto LAB_00736733;
            }
            uVar17 = *(ulong *)((long)__ptr + lVar22 + -0x10);
            lVar22 = lVar22 + -8;
          } while (uVar16 < uVar17);
          puVar29 = (ulong *)(lVar22 + (long)__ptr);
LAB_00736733:
          *puVar29 = uVar16;
        }
        puVar29 = __ptr + 2;
      }
      else {
        puVar29 = __ptr + 1;
      }
      if (param_2 != 2) {
        puVar11 = puVar29 + 1;
        do {
          uVar17 = puVar29[-1];
          uVar16 = *puVar29;
          if (uVar16 < uVar17) {
            puVar19 = puVar29;
            do {
              puVar12 = puVar19 + -1;
              *puVar19 = uVar17;
              if (puVar12 == __ptr) {
                puVar12 = __ptr;
                break;
              }
              uVar17 = puVar19[-2];
              puVar19 = puVar12;
            } while (uVar16 < uVar17);
            *puVar12 = uVar16;
            uVar16 = *puVar29;
            uVar17 = puVar29[1];
            if (uVar17 < uVar16) {
LAB_00736847:
              puVar19 = puVar11;
              do {
                puVar12 = puVar19 + -1;
                *puVar19 = uVar16;
                if (puVar12 == __ptr) {
                  puVar12 = __ptr;
                  break;
                }
                uVar16 = puVar19[-2];
                puVar19 = puVar12;
              } while (uVar17 < uVar16);
              *puVar12 = uVar17;
            }
          }
          else {
            uVar16 = *puVar29;
            uVar17 = puVar29[1];
            if (uVar17 < uVar16) goto LAB_00736847;
          }
          puVar29 = puVar29 + 2;
          puVar11 = puVar11 + 2;
        } while (puVar29 != __ptr + param_2);
      }
    }
    else {
      in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
      core[62e902411887be45]::slice::sort::unstable::ipnsort::
      <u64,<u64_as_core[62e902411887be45]::cmp::PartialOrd>::lt>(__ptr);
    }
    cVar10 = '\0';
    uVar16 = 1;
LAB_00736752:
    uVar17 = uVar16 + 1;
    if (__ptr[uVar16] != __ptr[uVar16 - 1]) goto code_r0x00736767;
    if (uVar17 < param_2) {
      lVar22 = uVar16 - 1;
      if (((int)(param_2 ^ 2) - (int)lVar22 & 3U) != 0) {
        uVar24 = (ulong)((byte)((char)(param_2 ^ 2) + cVar10) & 3);
        do {
          if (__ptr[uVar17] != __ptr[uVar16 - 1]) {
            __ptr[uVar16] = __ptr[uVar17];
            uVar16 = uVar16 + 1;
          }
          uVar17 = uVar17 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      if (2 < (param_2 - lVar22) - 3) {
        do {
          if (__ptr[uVar17] == __ptr[uVar16 - 1]) {
            uVar24 = __ptr[uVar17 + 1];
            uVar18 = uVar16;
            uVar31 = uVar16;
            if (uVar24 == __ptr[uVar16 - 1]) goto LAB_007368a7;
LAB_007368d5:
            __ptr[uVar18] = uVar24;
            uVar31 = uVar18 + 1;
            uVar24 = __ptr[uVar17 + 2];
            uVar16 = uVar31;
            if (uVar24 != __ptr[uVar18]) goto LAB_007368e8;
LAB_007368b3:
            uVar24 = __ptr[uVar17 + 3];
            if (uVar24 != __ptr[uVar16 - 1]) {
LAB_007368fb:
              __ptr[uVar16] = uVar24;
              uVar16 = uVar16 + 1;
            }
          }
          else {
            __ptr[uVar16] = __ptr[uVar17];
            uVar18 = uVar16 + 1;
            uVar24 = __ptr[uVar17 + 1];
            uVar31 = uVar18;
            if (uVar24 != __ptr[uVar16]) goto LAB_007368d5;
LAB_007368a7:
            uVar24 = __ptr[uVar17 + 2];
            uVar16 = uVar31;
            if (uVar24 == __ptr[uVar31 - 1]) goto LAB_007368b3;
LAB_007368e8:
            __ptr[uVar31] = uVar24;
            uVar16 = uVar31 + 1;
            uVar24 = __ptr[uVar17 + 3];
            if (uVar24 != __ptr[uVar31]) goto LAB_007368fb;
          }
          uVar17 = uVar17 + 4;
        } while (param_2 != uVar17);
      }
    }
    goto LAB_0073686d;
  }
  uVar17 = 0xf;
  uVar30 = 0;
  unaff_R14 = param_1;
  goto joined_r0x007370b4;
code_r0x00736767:
  cVar10 = cVar10 + '\x03';
  uVar16 = uVar17;
  if (param_2 == uVar17) goto code_r0x00736773;
  goto LAB_00736752;
code_r0x00736b5e:
  puVar13 = puVar13 + 2;
  puVar29 = puVar19;
  unaff_R14 = param_1;
  if (param_1 == puVar19) goto LAB_00736b6a;
  goto LAB_00736b42;
code_r0x00736773:
  uVar16 = param_2;
LAB_0073686d:
  if (uVar16 < 0x14) {
    uVar30 = 0;
  }
  else {
    do {
      puVar29 = param_1 + 5;
      if (((int)*param_1 == 1) && (((param_1[1] ^ param_3) * 0x3dee219263 & 0xfffffffe00) == 0)) {
        if (((int)param_1[2] != 1) || (uVar17 = param_1[3], (long)uVar17 < param_4)) {
          uVar17 = 0x7fffffffffffffff;
        }
        uVar24 = param_1[4];
        in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
        puVar11 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(0x40,8);
        if (puVar11 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x40);
        }
        *puVar11 = uVar17;
        puVar11[1] = uVar24;
        local_e0 = (ulong *)&DAT_00000004;
        puStack_d0 = (ulong *)&DAT_00000001;
        param_1 = (ulong *)&DAT_00000001;
        puStack_d8 = puVar11;
        if (puVar29 == puVar13) {
          local_108 = (ulong *)&DAT_00000004;
        }
        else {
          do {
            puVar19 = puStack_d0;
            puVar12 = puVar29;
            while ((puVar29 = puVar12 + 5, (int)*puVar12 != 1 ||
                   (((puVar12[1] ^ param_3) * 0x3dee219263 & 0xfffffffe00) != 0))) {
              puVar12 = puVar29;
              if (puVar29 == puVar13) goto LAB_00736aa2;
            }
            if (((int)puVar12[2] != 1) || (uVar17 = puVar12[3], (long)puVar12[3] < param_4)) {
              uVar17 = 0x7fffffffffffffff;
            }
            uVar24 = puVar12[4];
            if (puStack_d0 == local_e0) {
              <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[2a0ada2ddd1fabff]::alloc::Global>(&local_e0,puStack_d0,1,8,0x10);
              puVar11 = puStack_d8;
            }
            puVar11[(long)puVar19 * 2] = uVar17;
            puVar11[(long)puVar19 * 2 + 1] = uVar24;
            puStack_d0 = (ulong *)((long)puVar19 + 1);
          } while (puVar29 != puVar13);
LAB_00736aa2:
          param_1 = puStack_d0;
          puVar11 = puStack_d8;
          local_108 = local_e0;
          if (&DAT_00000001 < puStack_d0) {
            if (&DAT_00000014 < puStack_d0) {
              core[62e902411887be45]::slice::sort::unstable::ipnsort::
              <(i64,u64),<(i64,u64)as_core[62e902411887be45]::cmp::PartialOrd>::lt>
                        (puStack_d8,puStack_d0);
            }
            else {
              core[62e902411887be45]::slice::sort::shared::smallsort::insertion_sort_shift_left::
              <(i64,u64),<(i64,u64)as_core[62e902411887be45]::cmp::PartialOrd>::lt>();
            }
          }
        }
        goto LAB_00736ade;
      }
      lVar23 = lVar23 + -0x28;
      param_1 = puVar29;
    } while (lVar23 != 0);
    puVar11 = (ulong *)&DAT_00000008;
    local_108 = (ulong *)0x0;
    param_1 = (ulong *)0x0;
LAB_00736ade:
    if (*(char *)(in_FS_OFFSET + -0x38) == '\x01') {
      local_c0 = *(undefined1 (*) [16])(in_FS_OFFSET + -0x48);
    }
    else {
      in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
      local_c0 = std[c60ef17cbf7de79f]::sys::random::linux::hashmap_random_keys();
      *(long *)(in_FS_OFFSET + -0x40) = local_c0._8_8_;
      *(undefined1 *)(in_FS_OFFSET + -0x38) = 1;
    }
    uStack_c8 = _UNK_0020fa80;
    puStack_d0 = _UNK_0020fa78;
    puStack_d8 = _UNK_0020fa70;
    local_e0 = (ulong *)PTR_DAT_0020fa68;
    *(long *)(in_FS_OFFSET + -0x48) = local_c0._0_8_ + 1;
    if (param_1 != (ulong *)0x0) {
      puVar13 = puVar11 + 3;
      puVar29 = (ulong *)0x0;
LAB_00736b42:
      in_ZMM1 = ZEXT1664(in_ZMM1._0_16_);
      cVar10 = <hashbrown[ee4ff39ba1229c30]::map::HashMap<u64,(),std[c60ef17cbf7de79f]::hash::random::RandomState>>
               ::insert(&local_e0,puVar13[-2]);
      puVar19 = (ulong *)((long)puVar29 + 1);
      if (cVar10 == '\0') goto code_r0x00736b5e;
      if (puVar19 < param_1) {
        puVar25 = (undefined1 *)((long)param_1 + (-1 - (long)puVar29));
        do {
          cVar10 = <hashbrown[ee4ff39ba1229c30]::map::HashMap<u64,(),std[c60ef17cbf7de79f]::hash::random::RandomState>>
                   ::insert(&local_e0,*puVar13);
          if (cVar10 == '\0') {
            uVar17 = *puVar13;
            puVar11[(long)puVar29 * 2] = puVar13[-1];
            (puVar11 + (long)puVar29 * 2)[1] = uVar17;
            puVar29 = (ulong *)((long)puVar29 + 1);
          }
          puVar13 = puVar13 + 2;
          puVar25 = puVar25 + -1;
        } while (puVar25 != (undefined1 *)0x0);
      }
      unaff_R14 = puVar29;
      if (puVar29 == (ulong *)0x0) {
        uVar30 = 0;
LAB_00736f2f:
        param_1 = puVar29;
        goto LAB_00736f34;
      }
LAB_00736b6a:
      puVar13 = (ulong *)&DAT_00000004;
      if (unaff_R14 < &DAT_00000004) {
        puVar13 = unaff_R14;
      }
      puVar29 = (ulong *)&_nl_current_LC_CTYPE_used;
      if (unaff_R14 < &_nl_current_LC_CTYPE_used) {
        puVar29 = unaff_R14;
      }
      uVar6 = (uint)puVar13;
      uVar17 = (ulong)(((int)puVar29 + uVar6) * 0x10);
      puVar13 = (ulong *)__rustc[45371133cddedda4]::__rust_alloc(uVar17,8);
      if (puVar13 == (ulong *)0x0) goto LAB_0073735c;
      uVar15 = uVar6 & 3;
      if (unaff_R14 < (ulong *)0x4) {
        uVar24 = 0;
LAB_00736c5b:
        lVar23 = uVar24 * 0x10;
        uVar24 = uVar24 + uVar15;
        uVar18 = 0;
        do {
          *(undefined8 *)((long)puVar13 + uVar18 + lVar23) =
               *(undefined8 *)((long)puVar11 + uVar18 + lVar23 + 8);
          *(undefined8 *)((long)puVar13 + uVar18 + lVar23 + 8) = 0x10000;
          uVar18 = uVar18 + 0x10;
        } while (uVar15 << 4 != uVar18);
      }
      else {
        lVar23 = 0x38;
        uVar24 = 0;
        do {
          *(undefined8 *)((long)puVar13 + lVar23 + -0x38) =
               *(undefined8 *)((long)puVar11 + lVar23 + -0x30);
          *(undefined8 *)((long)puVar13 + lVar23 + -0x30) = 0x10000;
          *(undefined8 *)((long)puVar13 + lVar23 + -0x28) =
               *(undefined8 *)((long)puVar11 + lVar23 + -0x20);
          *(undefined8 *)((long)puVar13 + lVar23 + -0x20) = 0x10000;
          *(undefined8 *)((long)puVar13 + lVar23 + -0x18) =
               *(undefined8 *)((long)puVar11 + lVar23 + -0x10);
          *(undefined8 *)((long)puVar13 + lVar23 + -0x10) = 0x10000;
          uVar24 = uVar24 + 4;
          *(undefined8 *)((long)puVar13 + lVar23 + -8) = *(undefined8 *)((long)puVar11 + lVar23);
          *(undefined8 *)((long)puVar13 + lVar23) = 0x10000;
          lVar23 = lVar23 + 0x40;
        } while ((uVar6 & 4) != uVar24);
        if ((ulong)uVar15 != 0) goto LAB_00736c5b;
      }
      puVar25 = (undefined1 *)(uVar24 + (long)puVar29);
      lVar23 = 8;
      do {
        *(undefined8 *)((long)puVar13 + lVar23 + uVar24 * 0x10 + -8) =
             *(undefined8 *)((long)puVar11 + lVar23);
        *(undefined8 *)((long)puVar13 + lVar23 + uVar24 * 0x10) = 0x8000000;
        lVar23 = lVar23 + 0x10;
        puVar29 = (ulong *)((long)puVar29 + -1);
      } while (puVar29 != (ulong *)0x0);
      local_88 = __ptr + uVar16;
      local_a8 = uVar16 * 8 + -8;
      uVar30 = 0;
      local_a0 = 0x1ffffffffffffffc;
      puVar19 = puVar13;
      pauVar28 = (undefined1 (*) [32])(__ptr + 1);
      local_b0 = uVar17;
      do {
        auVar42 = in_ZMM1._0_16_;
        if (puVar19 == puVar13 + (long)puVar25 * 2) {
          if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar13 < sys::A_BASE_0)) ||
             (sys::A_END_0 <= puVar13)) {
            free(puVar13);
          }
          else {
            uVar17 = (ulong)(uint)((0x40 - (int)LZCOUNT(local_b0 - 1)) * 8);
            *puVar13 = *(ulong *)(in_FS_OFFSET + (uVar17 - 0x3c8));
            *(ulong **)(in_FS_OFFSET + (uVar17 - 0x3c8)) = puVar13;
          }
          if (puStack_d8 != (ulong *)0x0) {
            uVar17 = (long)puStack_d8 * 8 & 0xfffffffffffffff0;
            puVar25 = (undefined1 *)((long)puStack_d8 + uVar17 + 0x21);
            if (puVar25 != (undefined1 *)0x0) {
              unaff_R14 = (ulong *)((long)local_e0 + (-0x10 - uVar17));
              if (((sys::A_BASE_0 == (ulong *)0x0) || (unaff_R14 < sys::A_BASE_0)) ||
                 (sys::A_END_0 <= unaff_R14)) {
                free(unaff_R14);
              }
              else {
                puVar21 = (undefined1 *)0x10;
                if ((undefined1 *)0x10 < puVar25) {
                  puVar21 = puVar25;
                }
                lVar23 = 0x40 - LZCOUNT(puVar21 + -1);
                if ((undefined1 *)0x10000 < puVar25) {
                  cVar10 = sys::big_put(unaff_R14,lVar23);
                  if (cVar10 != '\0') goto LAB_007371bb;
                }
                *unaff_R14 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
                *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = unaff_R14;
              }
            }
          }
LAB_007371bb:
          if (local_108 != (ulong *)0x0) {
            if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar11 < sys::A_BASE_0)) ||
               (sys::A_END_0 <= puVar11)) {
              free(puVar11);
            }
            else {
              uVar17 = (long)local_108 * 0x10 - 1;
              lVar23 = LZCOUNT(uVar17);
              unaff_R14 = (ulong *)(0x40 - lVar23);
              if (0xffff < uVar17) {
                cVar10 = sys::big_put(puVar11,unaff_R14);
                if (cVar10 != '\0') goto LAB_0073724f;
              }
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
              }
              *puVar11 = *(ulong *)(in_FS_OFFSET + (long)unaff_R14 * 8 + -0x3c8);
              *(ulong **)(in_FS_OFFSET + (long)unaff_R14 * 8 + -0x3c8) = puVar11;
            }
          }
LAB_0073724f:
          if (((sys::A_BASE_0 == (ulong *)0x0) || (__ptr < sys::A_BASE_0)) ||
             (sys::A_END_0 <= __ptr)) {
            free(__ptr);
          }
          else {
            uVar17 = 0x10;
            if (0x10 < uVar1) {
              uVar17 = uVar1;
            }
            unaff_R14 = (ulong *)LZCOUNT(uVar17 - 1);
            lVar23 = 0x40 - (long)unaff_R14;
            if (0xffff < uVar17 - 1) {
              cVar10 = sys::big_put(__ptr,lVar23);
              if (cVar10 != '\0') goto LAB_007372df;
            }
            if (unaff_R14 == (ulong *)0x0) goto LAB_007373ad;
            *__ptr = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
            *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = __ptr;
          }
          goto LAB_007372df;
        }
        puVar12 = puVar19 + 2;
        pauVar3 = (undefined1 (*) [32])*puVar19;
        puVar14 = __ptr;
        pauVar8 = pauVar28;
        lVar23 = 0;
        do {
          lVar22 = lVar23;
          pauVar20 = pauVar8;
          puVar29 = puVar12;
          if (uVar16 * 8 == lVar22) goto LAB_00736ed6;
          puVar14 = puVar14 + 1;
          pauVar8 = (undefined1 (*) [32])((long)*pauVar20 + 8);
          lVar23 = lVar22 + 8;
        } while (*(undefined1 (**) [32])((long)__ptr + lVar22) == pauVar3);
        puVar27 = (ulong *)((long)__ptr + lVar22 + 8);
        local_90 = pauVar28;
        if (puVar27 == local_88) goto LAB_00736ed6;
        uVar17 = (long)local_88 - (long)puVar27;
        if (uVar17 < 0x60) {
          uVar18 = 0;
          unaff_R14 = (ulong *)0x0;
LAB_00736e5d:
          lVar23 = 0;
          do {
            pauVar28 = (undefined1 (*) [32])puVar14[uVar18 + lVar23];
            if (pauVar28 != pauVar3) {
              pauVar20 = pauVar28;
            }
            unaff_R14 = (ulong *)(ulong)(byte)((byte)unaff_R14 | pauVar28 != pauVar3);
            lVar23 = lVar23 + 1;
          } while (((ulong)(local_a8 - lVar22) >> 3) - uVar18 != lVar23);
        }
        else {
          uVar17 = uVar17 >> 3;
          uVar18 = uVar17 & local_a0;
          auVar36 = vpbroadcastq_avx512vl();
          uVar31 = (ulong)(local_a8 - lVar22) >> 3 & 0xfffffffffffffffc;
          uVar24 = 0;
          uVar9 = 0;
          do {
            uVar32 = uVar9;
            auVar2 = *pauVar20;
            uVar5 = vpcmpq_avx512vl(auVar2,auVar36,4);
            if (auVar2 != auVar36) {
              in_ZMM1 = ZEXT3264(auVar2);
              uVar24 = uVar5 & 0xf;
            }
            uVar33 = (ushort)(uVar5 & 0xf);
            pauVar20 = pauVar20 + 1;
            uVar31 = uVar31 - 4;
            uVar9 = uVar32 | uVar33;
          } while (uVar31 != 0);
          local_80[0] = in_ZMM1._0_32_;
          auVar42 = vpcmpeqd_avx(auVar36._0_16_,auVar36._0_16_);
          auVar34 = vpblendmb_avx512vl(auVar42,_DAT_00202bf0);
          bVar7 = (byte)((ushort)((short)uVar24 << 0xc) >> 8);
          bVar4 = (bool)(bVar7 >> 4 & 1);
          auVar35[0] = bVar4 * auVar34[0] | !bVar4 * auVar42[0];
          bVar4 = (bool)(bVar7 >> 5 & 1);
          auVar35[1] = bVar4 * auVar34[1] | !bVar4 * auVar42[1];
          bVar4 = (bool)(bVar7 >> 6 & 1);
          auVar35[2] = bVar4 * auVar34[2] | !bVar4 * auVar42[2];
          auVar35[3] = -((char)bVar7 >> 7) * auVar34[3] | !(bool)-((char)bVar7 >> 7) * auVar42[3];
          auVar35[4] = auVar42[4];
          auVar35[5] = auVar42[5];
          auVar35[6] = auVar42[6];
          auVar35[7] = auVar42[7];
          auVar35[8] = auVar42[8];
          auVar35[9] = auVar42[9];
          auVar35[10] = auVar42[10];
          auVar35[0xb] = auVar42[0xb];
          auVar35[0xc] = auVar42[0xc];
          auVar35[0xd] = auVar42[0xd];
          auVar35[0xe] = auVar42[0xe];
          auVar35[0xf] = auVar42[0xf];
          auVar42 = vpsrlw_avx(auVar35,8);
          auVar34 = vpminub_avx(auVar35,auVar42);
          auVar34 = vphminposuw_avx(auVar34);
          pauVar20 = *(undefined1 (**) [32])(local_80[0] + (ulong)((byte)~auVar34[0] & 3) * 8);
          unaff_R14 = (ulong *)(ulong)(uVar32 != 0 || uVar33 != 0);
          if (uVar17 != uVar18) goto LAB_00736e5d;
        }
        puVar29 = unaff_R14;
        local_98 = puVar12;
        if (unaff_R14 == (ulong *)0x0) goto LAB_00736ed6;
        in_ZMM1 = ZEXT1664(auVar42);
        auVar42 = search_key(pauVar3,puVar19[1],*(undefined1 (**) [32])((long)__ptr + lVar22),
                             pauVar20,__ptr,uVar16,param_5 + 8);
        puVar29 = auVar42._8_8_;
        puVar19 = local_98;
        pauVar28 = local_90;
      } while ((auVar42._0_8_ & 1) == 0);
      uVar30 = 1;
LAB_00736ed6:
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar13 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= puVar13)) {
        free(puVar13);
      }
      else {
        uVar17 = (ulong)(uint)((0x40 - (int)LZCOUNT(local_b0 - 1)) * 8);
        *puVar13 = *(ulong *)(in_FS_OFFSET + (uVar17 - 0x3c8));
        *(ulong **)(in_FS_OFFSET + (uVar17 - 0x3c8)) = puVar13;
      }
      goto LAB_00736f2f;
    }
    uVar30 = 0;
LAB_00736f34:
    if (puStack_d8 != (ulong *)0x0) {
      uVar17 = (long)puStack_d8 * 8 & 0xfffffffffffffff0;
      puVar25 = (undefined1 *)((long)puStack_d8 + uVar17 + 0x21);
      if (puVar25 != (undefined1 *)0x0) {
        puVar13 = (ulong *)((long)local_e0 + (-0x10 - uVar17));
        if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar13 < sys::A_BASE_0)) ||
           (sys::A_END_0 <= puVar13)) {
          free(puVar13);
        }
        else {
          puVar21 = (undefined1 *)0x10;
          if ((undefined1 *)0x10 < puVar25) {
            puVar21 = puVar25;
          }
          lVar23 = 0x40 - LZCOUNT(puVar21 + -1);
          if ((undefined1 *)0x10000 < puVar25) {
            cVar10 = sys::big_put(puVar13,lVar23);
            if (cVar10 != '\0') goto LAB_00736fff;
          }
          *puVar13 = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
          *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = puVar13;
        }
      }
    }
LAB_00736fff:
    if (local_108 != (ulong *)0x0) {
      if (((sys::A_BASE_0 == (ulong *)0x0) || (puVar11 < sys::A_BASE_0)) ||
         (sys::A_END_0 <= puVar11)) {
        free(puVar11);
      }
      else {
        uVar17 = (long)local_108 * 0x10 - 1;
        lVar23 = LZCOUNT(uVar17);
        lVar22 = 0x40 - lVar23;
        if (0xffff < uVar17) {
          cVar10 = sys::big_put(puVar11,lVar22);
          if (cVar10 != '\0') goto LAB_0073709a;
        }
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *puVar11 = *(ulong *)(in_FS_OFFSET + lVar22 * 8 + -0x3c8);
        *(ulong **)(in_FS_OFFSET + lVar22 * 8 + -0x3c8) = puVar11;
      }
    }
  }
LAB_0073709a:
  uVar17 = 0x10;
  if (0x10 < uVar1) {
    uVar17 = uVar1;
  }
  uVar17 = uVar17 - 1;
  unaff_R14 = param_1;
joined_r0x007370b4:
  if (((sys::A_BASE_0 == (ulong *)0x0) || (__ptr < sys::A_BASE_0)) || (sys::A_END_0 <= __ptr)) {
    free(__ptr);
  }
  else {
    lVar23 = 0x40 - LZCOUNT(uVar17);
    if (0xffff < uVar17) {
      cVar10 = sys::big_put(__ptr,lVar23);
      if (cVar10 != '\0') goto LAB_007372e2;
    }
    if (LZCOUNT(uVar17) == 0) {
LAB_007373ad:
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(lVar23,0x40,&PTR_s_src_sys_rs_002110f0);
    }
    *__ptr = *(ulong *)(in_FS_OFFSET + lVar23 * 8 + -0x3c8);
    *(ulong **)(in_FS_OFFSET + lVar23 * 8 + -0x3c8) = __ptr;
  }
LAB_007372e2:
  auVar42._8_8_ = unaff_R14;
  auVar42._0_8_ = uVar30;
  return auVar42;
}


