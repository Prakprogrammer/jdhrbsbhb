// ==== core::ptr::drop_glue::<pipeline::core::Core> @ 00605c20 (794 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::core::Core> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::core::Core>(long *param_1)

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
      uVar3 = *param_1 * 0x18 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) goto LAB_00605f16;
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
        if (lVar5 == 0) goto LAB_00605f16;
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
        if (lVar5 == 0) goto LAB_00605f16;
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
      uVar3 = param_1[9] * 0x10 - 1;
      lVar5 = LZCOUNT(uVar3);
      lVar6 = 0x40 - lVar5;
      if ((uVar3 < 0x10000) ||
         (cVar2 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar6), cVar2 == '\0')) {
        if (lVar5 == 0) {
LAB_00605f16:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check(lVar6,0x40,&PTR_s_src_sys_rs_002110f0);
        }
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
      return;
    }
    uVar4 = param_1[0xc] << 2;
    uVar3 = 0x10;
    if (0x10 < uVar4) {
      uVar3 = uVar4;
    }
    lVar6 = LZCOUNT(uVar3 - 1);
    lVar5 = 0x40 - lVar6;
    if ((0xffff < uVar3 - 1) &&
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


// ==== <pipeline::core::Col<u8>>::grow @ 0069b960 (172 bytes)

/* <pipeline[509596c7b52975b2]::core::Col<u8>>::grow */

void __rustcall <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = *param_1;
  lVar2 = param_1[3];
  uVar3 = param_1[4];
  if (((lVar1 == lVar2) || (uVar3 < param_2)) || (uVar4 = param_1[1], uVar3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback("avec full",9);
  }
  uVar6 = uVar4 + 0xfff & 0xfffffffffffff000;
  if (((uVar6 == 0) || (pipeline[509596c7b52975b2]::core::COLS_PINNED_0 != '\0')) ||
     (lVar5 = syscall(0x19,lVar1,uVar6,uVar6,3,lVar2), lVar5 != lVar2)) {
    (*(code *)PTR_memcpy_00841de0)(lVar2,lVar1,uVar4);
  }
  *param_1 = lVar2;
  param_1[2] = uVar3;
  return;
}


// ==== <pipeline::core::Col<i32>>::grow @ 0069ba20 (179 bytes)

/* <pipeline[509596c7b52975b2]::core::Col<i32>>::grow */

void __rustcall <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = *param_1;
  lVar2 = param_1[3];
  uVar3 = param_1[4];
  if (((lVar1 == lVar2) || (uVar3 < param_2)) || (uVar4 = param_1[1], uVar3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    pipeline[509596c7b52975b2]::sys::fallback("avec full",9);
  }
  uVar6 = uVar4 * 4 + 0xffc & 0xfffffffffffff000;
  if (((uVar6 == 0) || (pipeline[509596c7b52975b2]::core::COLS_PINNED_0 != '\0')) ||
     (lVar5 = syscall(0x19,lVar1,uVar6,uVar6,3,lVar2), lVar5 != lVar2)) {
    (*(code *)PTR_memcpy_00841de0)(lVar2,lVar1,uVar4 << 2);
  }
  *param_1 = lVar2;
  param_1[2] = uVar3;
  return;
}


// ==== <pipeline::core::Core>::feed_slice @ 0069e820 (3453 bytes)

/* <pipeline[509596c7b52975b2]::core::Core>::feed_slice */

uint __rustcall
<pipeline[509596c7b52975b2]::core::Core>::feed_slice
          (long *param_1,ulong *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined1 uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  int local_1d4;
  ulong local_1d0;
  int local_1a8;
  ulong local_198;
  int local_184;
  ulong local_168;
  ulong local_160;
  
  if (param_4 == 0) {
    uVar28 = 0;
  }
  else {
    if (param_4 < 8) {
      uVar23 = 0;
      uVar28 = 0;
      if (param_4 == 0) {
        return 0;
      }
    }
    else {
      local_160 = *param_2;
      local_1d0 = param_2[1];
      auVar30 = vpbroadcastq_avx512f();
      uVar22 = param_2[7];
      iVar14 = (int)param_2[6];
      local_184 = (int)param_2[5];
      uVar19 = param_2[2];
      iVar17 = *(int *)((long)param_2 + 0x2c);
      local_168 = param_2[3];
      uVar28 = *(uint *)((long)param_2 + 0x34);
      auVar35 = ZEXT1664((undefined1  [16])0x0);
      uVar15 = 0;
      uVar13 = 8;
      do {
        uVar23 = uVar13;
        auVar31 = vmovdqa64_avx512f(auVar30);
        auVar32 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_3 + uVar15 * 8));
        auVar30 = vpsrlq_avx512f(auVar32,0x21);
        auVar33 = valignq_avx512f(auVar30,auVar31,7);
        auVar34 = vpsubq_avx512f(auVar30,auVar33);
        auVar31._8_8_ = DAT_00201ea0;
        auVar31._0_8_ = DAT_00201ea0;
        auVar31._16_8_ = DAT_00201ea0;
        auVar31._24_8_ = DAT_00201ea0;
        auVar31._32_8_ = DAT_00201ea0;
        auVar31._40_8_ = DAT_00201ea0;
        auVar31._48_8_ = DAT_00201ea0;
        auVar31._56_8_ = DAT_00201ea0;
        uVar8 = vpcmpuq_avx512f(auVar34,auVar31,6);
        auVar34._8_8_ = DAT_00201c40;
        auVar34._0_8_ = DAT_00201c40;
        auVar34._16_8_ = DAT_00201c40;
        auVar34._24_8_ = DAT_00201c40;
        auVar34._32_8_ = DAT_00201c40;
        auVar34._40_8_ = DAT_00201c40;
        auVar34._48_8_ = DAT_00201c40;
        auVar34._56_8_ = DAT_00201c40;
        uVar9 = vptestmq_avx512f(auVar32,auVar34);
        uVar13 = *(ulong *)(param_3 + 0x38 + uVar15 * 8);
        if ((byte)uVar9 != 0 || (byte)uVar8 != 0) {
          lVar1 = param_3 + uVar15 * 8;
          uVar20 = (uint)(byte)((byte)uVar9 | (byte)uVar8);
          iVar16 = 0;
          local_198 = local_168;
          local_1d4 = local_184;
          auVar31 = vmovdqu64_avx512f(auVar35);
          auVar34 = vmovdqu64_avx512f(auVar30);
          auVar2 = vmovdqu64_avx512f(auVar32);
          auVar3 = vmovdqu64_avx512f(auVar33);
          uVar15 = uVar19;
          uVar24 = uVar28;
          do {
            uVar10 = 0;
            for (uVar11 = uVar20; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar21 = (ulong)uVar10;
            if (uVar10 == 0) {
              uVar21 = 0;
              uVar26 = local_160;
            }
            else {
              uVar26 = *(ulong *)(lVar1 + -8 + uVar21 * 8) >> 0x21;
            }
            iVar27 = iVar14 + (uVar10 - iVar16);
            uVar21 = *(ulong *)(lVar1 + uVar21 * 8);
            uVar25 = uVar21 >> 0x21;
            if (1800000 < uVar25 - uVar26) {
              lVar5 = param_1[2];
              if (lVar5 == *param_1) {
                <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(param_1);
                auVar33 = vmovdqu64_avx512f(auVar3);
                auVar32 = vmovdqu64_avx512f(auVar2);
                auVar30 = vmovdqu64_avx512f(auVar34);
                auVar35 = vmovdqu64_avx512f(auVar31);
              }
              lVar6 = param_1[1];
              *(ulong *)(lVar6 + lVar5 * 0x18) = local_1d0 + 0x240c8400;
              *(ulong *)(lVar6 + 8 + lVar5 * 0x18) = uVar15;
              *(int *)(lVar6 + 0x10 + lVar5 * 0x18) = local_1d4;
              param_1[2] = lVar5 + 1;
              iVar14 = (int)((param_1[0xf] + uVar25) / 86400000);
              if (local_1d4 == iVar14) {
                iVar14 = local_184;
              }
              else {
                uVar28 = 0xff;
                uVar18 = 0xff;
                if (uVar24 != 0) {
                  uVar19 = 0;
                  do {
                    uVar11 = 0;
                    for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar15 = param_1[(ulong)uVar11 + 0x48];
                    uVar26 = uVar19;
                    if (uVar19 < uVar15) {
                      uVar26 = uVar15;
                    }
                    uVar28 = uVar28 & 0xff;
                    if (uVar19 < uVar15) {
                      uVar28 = uVar11;
                    }
                    uVar18 = (undefined1)uVar28;
                    uVar24 = uVar24 - 1 & uVar24;
                    param_1[(ulong)uVar11 + 0x48] = 0;
                    uVar19 = uVar26;
                  } while (uVar24 != 0);
                }
                if ((iVar27 < 0) || (0x7fffffff < local_198)) goto LAB_0069f5d2;
                uVar19 = param_1[0x23];
                if ((ulong)param_1[0x24] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x22,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x23];
                }
                *(int *)(param_1[0x22] + uVar19 * 4) = (int)uVar22;
                param_1[0x23] = param_1[0x23] + 1;
                lVar5 = param_1[0x68];
                uVar19 = param_1[0x29];
                if ((ulong)param_1[0x2a] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x28,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x29];
                }
                *(int *)(param_1[0x28] + uVar19 * 4) = local_1d4 + (int)lVar5;
                param_1[0x29] = param_1[0x29] + 1;
                uVar19 = param_1[0x2f];
                if ((ulong)param_1[0x30] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x2e,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x2f];
                }
                *(int *)(param_1[0x2e] + uVar19 * 4) = iVar17;
                param_1[0x2f] = param_1[0x2f] + 1;
                uVar19 = param_1[0x35];
                if ((ulong)param_1[0x36] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x34,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x35];
                }
                *(int *)(param_1[0x34] + uVar19 * 4) = iVar27;
                param_1[0x35] = param_1[0x35] + 1;
                uVar19 = param_1[0x3b];
                if ((ulong)param_1[0x3c] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x3a,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x3b];
                }
                *(int *)(param_1[0x3a] + uVar19 * 4) = (int)local_198;
                param_1[0x3b] = param_1[0x3b] + 1;
                uVar19 = param_1[0x41];
                if ((ulong)param_1[0x42] <= uVar19) {
                  <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(param_1 + 0x40,uVar19 + 1);
                  auVar33 = vmovdqu64_avx512f(auVar3);
                  auVar32 = vmovdqu64_avx512f(auVar2);
                  auVar30 = vmovdqu64_avx512f(auVar34);
                  auVar35 = vmovdqu64_avx512f(auVar31);
                  uVar19 = param_1[0x41];
                }
                *(undefined1 *)(param_1[0x40] + uVar19) = uVar18;
                param_1[0x41] = param_1[0x41] + 1;
                param_2[3] = 0;
                *(undefined4 *)((long)param_2 + 0x34) = 0;
                *(int *)(param_2 + 5) = iVar14;
                uVar28 = 0;
                local_168 = 0;
                uVar24 = 0;
                local_198 = 0;
                iVar17 = 0;
                iVar27 = 0;
                local_1d4 = iVar14;
              }
              iVar17 = iVar17 + 1;
              *(int *)((long)param_2 + 0x2c) = iVar17;
              param_2[1] = uVar25;
              param_2[2] = 0;
              uVar19 = 0;
              uVar15 = 0;
              local_1d0 = uVar25;
              local_184 = iVar14;
            }
            uVar26 = uVar21 >> 9 & 0xffffff;
            if (uVar26 != 0) {
              uVar19 = uVar15 + uVar26;
              param_2[2] = uVar19;
              local_198 = local_198 + uVar26;
              param_2[3] = local_198;
              uVar28 = (uint)(uVar21 >> 4) & 0x1f;
              param_1[(ulong)uVar28 + 0x48] = param_1[(ulong)uVar28 + 0x48] + uVar26;
              uVar24 = uVar24 | 1 << uVar28;
              *(uint *)((long)param_2 + 0x34) = uVar24;
              uVar15 = uVar19;
              local_168 = local_198;
              uVar28 = uVar24;
            }
            uVar20 = uVar20 - 1 & uVar20;
            iVar14 = iVar27 + 1;
            iVar16 = uVar10 + 1;
          } while (uVar20 != 0);
          iVar14 = iVar27 - uVar10;
        }
        vpcmpuq_avx512f(auVar30,auVar33,1);
        auVar33._8_8_ = DAT_00201a10;
        auVar33._0_8_ = DAT_00201a10;
        auVar33._16_8_ = DAT_00201a10;
        auVar33._24_8_ = DAT_00201a10;
        auVar33._32_8_ = DAT_00201a10;
        auVar33._40_8_ = DAT_00201a10;
        auVar33._48_8_ = DAT_00201a10;
        auVar33._56_8_ = DAT_00201a10;
        auVar31 = vpandq_avx512f(auVar32,auVar33);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = DAT_00201bc0;
        auVar34 = vpbroadcastq_avx512f(auVar4);
        auVar31 = vpsllvq_avx512f(auVar34,auVar31);
        auVar35 = vporq_avx512f(auVar31,auVar35);
        iVar14 = iVar14 + 8;
        *(int *)(param_2 + 6) = iVar14;
        local_160 = uVar13 >> 0x21;
        uVar15 = uVar23;
        uVar13 = uVar23 + 8;
      } while (uVar23 + 8 <= param_4);
      *param_2 = local_160;
      auVar29 = vextracti64x4_avx512f(auVar35,1);
      auVar35 = vporq_avx512f(auVar35,ZEXT3264(auVar29));
      auVar4 = vpor_avx(auVar35._0_16_,auVar35._16_16_);
      auVar7 = vpshufd_avx(auVar4,0xee);
      auVar4 = vpor_avx(auVar7,auVar4);
      uVar28 = auVar4._0_4_;
      if (param_4 <= uVar23) {
        return uVar28;
      }
    }
    local_198 = param_2[1];
    uVar15 = param_2[7];
    local_1a8 = (int)param_2[5];
    uVar19 = param_2[2];
    local_1d4 = *(int *)((long)param_2 + 0x2c);
    iVar14 = (int)param_2[6];
    uVar22 = param_2[3];
    uVar24 = *(uint *)((long)param_2 + 0x34);
    uVar13 = *param_2;
    do {
      uVar21 = *(ulong *)(param_3 + uVar23 * 8);
      uVar26 = uVar21 >> 0x21;
      if (1800000 < uVar26 - uVar13) {
        lVar1 = param_1[2];
        if (lVar1 == *param_1) {
          <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<[u64;3usize]>>::grow_one(param_1);
        }
        lVar5 = param_1[1];
        *(ulong *)(lVar5 + lVar1 * 0x18) = local_198 + 0x240c8400;
        *(ulong *)(lVar5 + 8 + lVar1 * 0x18) = uVar19;
        *(int *)(lVar5 + 0x10 + lVar1 * 0x18) = local_1a8;
        param_1[2] = lVar1 + 1;
        iVar17 = (int)((param_1[0xf] + uVar26) / 86400000);
        if (local_1a8 == iVar17) {
          iVar17 = local_1a8;
        }
        else {
          uVar20 = 0xff;
          uVar18 = 0xff;
          if (uVar24 != 0) {
            uVar19 = 0;
            do {
              uVar10 = 0;
              for (uVar11 = uVar24; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              uVar13 = param_1[(ulong)uVar10 + 0x48];
              uVar25 = uVar19;
              if (uVar19 < uVar13) {
                uVar25 = uVar13;
              }
              uVar20 = uVar20 & 0xff;
              if (uVar19 < uVar13) {
                uVar20 = uVar10;
              }
              uVar18 = (undefined1)uVar20;
              uVar24 = uVar24 - 1 & uVar24;
              param_1[(ulong)uVar10 + 0x48] = 0;
              uVar19 = uVar25;
            } while (uVar24 != 0);
          }
          if ((iVar14 < 0) || (0x7fffffff < uVar22)) {
LAB_0069f5d2:
                    /* WARNING: Subroutine does not return */
            pipeline[509596c7b52975b2]::sys::fallback("revenue_cents or events over i32",0x20);
          }
          uVar19 = param_1[0x23];
          if ((ulong)param_1[0x24] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x22,uVar19 + 1);
            uVar19 = param_1[0x23];
          }
          *(int *)(param_1[0x22] + uVar19 * 4) = (int)uVar15;
          param_1[0x23] = param_1[0x23] + 1;
          lVar1 = param_1[0x68];
          uVar19 = param_1[0x29];
          if ((ulong)param_1[0x2a] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x28,uVar19 + 1);
            uVar19 = param_1[0x29];
          }
          *(int *)(param_1[0x28] + uVar19 * 4) = local_1a8 + (int)lVar1;
          param_1[0x29] = param_1[0x29] + 1;
          uVar19 = param_1[0x2f];
          if ((ulong)param_1[0x30] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x2e,uVar19 + 1);
            uVar19 = param_1[0x2f];
          }
          *(int *)(param_1[0x2e] + uVar19 * 4) = local_1d4;
          param_1[0x2f] = param_1[0x2f] + 1;
          uVar19 = param_1[0x35];
          if ((ulong)param_1[0x36] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x34,uVar19 + 1);
            uVar19 = param_1[0x35];
          }
          *(int *)(param_1[0x34] + uVar19 * 4) = iVar14;
          param_1[0x35] = param_1[0x35] + 1;
          uVar19 = param_1[0x3b];
          if ((ulong)param_1[0x3c] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<i32>>::grow(param_1 + 0x3a,uVar19 + 1);
            uVar19 = param_1[0x3b];
          }
          *(int *)(param_1[0x3a] + uVar19 * 4) = (int)uVar22;
          param_1[0x3b] = param_1[0x3b] + 1;
          uVar19 = param_1[0x41];
          if ((ulong)param_1[0x42] <= uVar19) {
            <pipeline[509596c7b52975b2]::core::Col<u8>>::grow(param_1 + 0x40,uVar19 + 1);
            uVar19 = param_1[0x41];
          }
          *(undefined1 *)(param_1[0x40] + uVar19) = uVar18;
          param_1[0x41] = param_1[0x41] + 1;
          param_2[3] = 0;
          *(undefined4 *)((long)param_2 + 0x34) = 0;
          *(int *)(param_2 + 5) = iVar17;
          uVar24 = 0;
          uVar22 = 0;
          iVar14 = 0;
          local_1d4 = 0;
        }
        local_1d4 = local_1d4 + 1;
        *(int *)((long)param_2 + 0x2c) = local_1d4;
        param_2[1] = uVar26;
        param_2[2] = 0;
        uVar19 = 0;
        local_198 = uVar26;
        local_1a8 = iVar17;
      }
      *param_2 = uVar26;
      iVar14 = iVar14 + 1;
      *(int *)(param_2 + 6) = iVar14;
      uVar13 = uVar21 >> 9 & 0xffffff;
      if (uVar13 != 0) {
        uVar19 = uVar19 + uVar13;
        param_2[2] = uVar19;
        uVar22 = uVar22 + uVar13;
        param_2[3] = uVar22;
        uVar20 = (uint)(uVar21 >> 4) & 0x1f;
        param_1[(ulong)uVar20 + 0x48] = param_1[(ulong)uVar20 + 0x48] + uVar13;
        uVar24 = uVar24 | 1 << uVar20;
        *(uint *)((long)param_2 + 0x34) = uVar24;
      }
      uVar28 = uVar28 | 1 << ((byte)uVar21 & 0xf);
      uVar23 = uVar23 + 1;
      uVar13 = uVar26;
    } while (uVar23 != param_4);
  }
  return uVar28;
}


// ==== <pipeline::core::Core>::assists_big @ 0069f600 (1825 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::core::Core>::assists_big */

void __rustcall
<pipeline[509596c7b52975b2]::core::Core>::assists_big(long param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 auVar3 [64];
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 (*pauVar18) [64];
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  undefined1 auVar29 [64];
  
  uVar7 = *(ulong *)(param_1 + 0x80);
  lVar17 = *(long *)(param_1 + 8);
  uVar27 = *(ulong *)(param_1 + 0x10);
  uVar6 = *(ulong *)(param_1 + 0x70);
  lVar12 = *(long *)(param_1 + 0x68);
  uVar19 = 0;
  uVar22 = 0;
  do {
    if (uVar19 < uVar27) {
      puVar25 = (uint *)(lVar17 + 0x10 + uVar19 * 0x18);
      do {
        if (uVar22 <= *puVar25) goto LAB_0069f668;
        uVar19 = uVar19 + 1;
        puVar25 = puVar25 + 6;
      } while (uVar27 != uVar19);
      uVar19 = uVar27;
    }
LAB_0069f668:
    if (uVar22 == uVar6) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(uVar6,uVar6,&PTR_s_src_core_rs_00212518)
      ;
    }
    *(int *)(lVar12 + uVar22 * 4) = (int)uVar19;
    uVar22 = uVar22 + 1;
  } while (uVar22 <= uVar7);
  if (uVar6 <= uVar7 + 1) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check
              (uVar7 + 1,uVar6,&PTR_s_src_core_rs_002124c0);
  }
  *(int *)(lVar12 + 4 + uVar7 * 4) = (int)uVar27;
  uVar7 = *(ulong *)(param_1 + 0x58);
  lVar17 = *(long *)(param_1 + 0x88);
  uVar27 = (lVar17 + 2U) - uVar7;
  if (lVar17 + 2U < uVar7 || uVar27 == 0) goto LAB_0069f82a;
  uVar6 = uVar7;
  if (*(long *)(param_1 + 0x48) - uVar7 < uVar27) {
    <alloc[2a0ada2ddd1fabff]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[2a0ada2ddd1fabff]::alloc::Global>(param_1 + 0x48,uVar7,uVar27,8);
    uVar6 = *(ulong *)(param_1 + 0x58);
  }
  lVar12 = *(long *)(param_1 + 0x50);
  lVar20 = uVar6 * 0x10;
  puVar1 = (undefined8 *)(lVar12 + lVar20);
  puVar8 = puVar1;
  if (1 < uVar27) {
    uVar19 = (lVar17 - uVar7) + 1;
    lVar16 = 1;
    if (uVar19 < 4) {
LAB_0069f7d8:
      lVar17 = ((lVar16 + uVar7) - lVar17) + -2;
      do {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0;
        puVar8 = puVar8 + 2;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0);
    }
    else if (uVar19 < 0x10) {
      uVar11 = 0;
LAB_0069f786:
      uVar22 = uVar19 & 0xfffffffffffffffc;
      puVar8 = puVar1 + uVar22 * 2;
      lVar16 = uVar22 + 1;
      lVar26 = uVar11 - uVar22;
      pauVar18 = (undefined1 (*) [64])(lVar12 + lVar20 + uVar11 * 0x10);
      auVar29 = vbroadcasti32x4_avx512f(_DAT_00202be0);
      do {
        auVar3 = vmovdqu64_avx512f(auVar29);
        *pauVar18 = auVar3;
        pauVar18 = pauVar18 + 1;
        lVar26 = lVar26 + 4;
      } while (lVar26 != 0);
      if (uVar19 != uVar22) goto LAB_0069f7d8;
    }
    else {
      uVar11 = uVar19 & 0xfffffffffffffff0;
      puVar8 = puVar1 + uVar11 * 2;
      lVar16 = uVar11 + 1;
      pauVar18 = (undefined1 (*) [64])(lVar20 + lVar12 + 0xc0);
      auVar29 = vbroadcasti32x4_avx512f(_DAT_00202be0);
      uVar22 = uVar11;
      do {
        auVar3 = vmovdqu64_avx512f(auVar29);
        pauVar18[-3] = auVar3;
        auVar3 = vmovdqu64_avx512f(auVar29);
        pauVar18[-2] = auVar3;
        auVar3 = vmovdqu64_avx512f(auVar29);
        pauVar18[-1] = auVar3;
        auVar3 = vmovdqu64_avx512f(auVar29);
        *pauVar18 = auVar3;
        pauVar18 = pauVar18 + 4;
        uVar22 = uVar22 - 0x10;
      } while (uVar22 != 0);
      if (uVar19 != uVar11) {
        if ((uVar19 & 0xc) == 0) goto LAB_0069f7d8;
        goto LAB_0069f786;
      }
    }
    uVar6 = (uVar6 + uVar27) - 1;
  }
  *puVar8 = 0xffffffffffffffff;
  puVar8[1] = 0;
  uVar7 = uVar6 + 1;
  *(ulong *)(param_1 + 0x58) = uVar7;
LAB_0069f82a:
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar4 = param_2 + param_3;
  lVar17 = 0;
  do {
    while( true ) {
      uVar28 = (uint)(*param_2 >> 4) & 0x3fff;
      uVar27 = (ulong)uVar28;
      if (uVar7 <= uVar27) {
                    /* WARNING: Subroutine does not return */
        pipeline[509596c7b52975b2]::sys::fallback("campaign number",0xf);
      }
      uVar19 = *param_2 >> 0x20;
      lVar12 = *(long *)(param_1 + 0x50);
      uVar6 = *(ulong *)(lVar12 + (ulong)(uVar28 << 4));
      if (uVar6 != 0xffffffffffffffff) break;
      if (lVar17 == *(long *)(param_1 + 0x30)) {
        <alloc[2a0ada2ddd1fabff]::raw_vec::RawVec<*mut_u8>>::grow_one(param_1 + 0x30);
        uVar7 = *(ulong *)(param_1 + 0x58);
      }
      *(ulong *)(*(long *)(param_1 + 0x38) + lVar17 * 8) = uVar27;
      lVar17 = lVar17 + 1;
      *(long *)(param_1 + 0x40) = lVar17;
LAB_0069fa40:
      if (uVar7 <= uVar27) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar27,uVar7,&PTR_s_src_core_rs_002124d8);
      }
      lVar12 = *(long *)(param_1 + 0x50);
      *(ulong *)(lVar12 + (ulong)(uVar28 << 4)) = uVar19;
      *(ulong *)(lVar12 + 8 + (ulong)(uVar28 << 4)) = uVar19 + 0x240c8400;
      param_2 = param_2 + 1;
      if (param_2 == puVar4) goto LAB_0069fa92;
    }
    lVar20 = (ulong)(uVar28 << 4) + lVar12;
    uVar22 = *(ulong *)(lVar20 + 8);
    if (uVar22 < uVar19) {
      uVar11 = *(ulong *)(param_1 + 0x10);
      if (uVar11 != 0) {
        lVar12 = *(long *)(param_1 + 8);
        if (uVar11 == 1) {
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          uVar24 = uVar11;
          do {
            lVar16 = (uVar24 >> 1) + lVar20;
            if (*(ulong *)(lVar12 + lVar16 * 0x18) < uVar6) {
              lVar20 = lVar16;
            }
            uVar24 = uVar24 - (uVar24 >> 1);
          } while (1 < uVar24);
        }
        uVar6 = lVar20 + (ulong)(*(ulong *)(lVar12 + lVar20 * 0x18) < uVar6);
        if (uVar11 == 1) {
          lVar16 = 0;
        }
        else {
          uVar24 = uVar11;
          lVar20 = 0;
          do {
            lVar16 = lVar20 + (uVar24 >> 1);
            if (uVar22 < *(ulong *)(lVar12 + lVar16 * 0x18)) {
              lVar16 = lVar20;
            }
            uVar24 = uVar24 - (uVar24 >> 1);
            lVar20 = lVar16;
          } while (1 < uVar24);
        }
        uVar22 = (lVar16 + 1) - (ulong)(uVar22 < *(ulong *)(lVar12 + lVar16 * 0x18));
        if (uVar6 < uVar22) {
          lVar20 = *(long *)(param_1 + 0x68);
          uVar24 = *(ulong *)(param_1 + 0x70);
          lVar16 = *(long *)(param_1 + 0x80);
          uVar13 = *(ulong *)(param_1 + 0x98);
          lVar26 = *(long *)(param_1 + 0x90);
          do {
            if (uVar11 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar6,uVar11,&PTR_s_src_core_rs_00212540);
            }
            uVar14 = (ulong)*(uint *)(lVar12 + 0x10 + uVar6 * 0x18);
            if (uVar24 <= uVar14 + 1) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar14 + 1,uVar24,&PTR_s_src_core_rs_00212558);
            }
            uVar21 = lVar16 * uVar27 + uVar14;
            if (uVar13 <= uVar21) goto LAB_0069fc5f;
            uVar15 = (ulong)*(uint *)(lVar20 + 4 + uVar14 * 4);
            uVar14 = uVar22;
            if (uVar15 < uVar22) {
              uVar14 = uVar15;
            }
            piVar2 = (int *)(lVar26 + 4 + uVar21 * 8);
            *piVar2 = *piVar2 + ((int)uVar14 - (int)uVar6);
            uVar6 = uVar14;
          } while (uVar15 < uVar22);
        }
      }
      goto LAB_0069fa40;
    }
    *(ulong *)(lVar20 + 8) = uVar19 + 0x240c8400;
    param_2 = param_2 + 1;
  } while (param_2 != puVar4);
LAB_0069fa92:
  if (lVar17 != 0) {
    lVar20 = *(long *)(param_1 + 0x38);
    lVar16 = *(long *)(param_1 + 0x80);
    puVar4 = *(ulong **)(param_1 + 8);
    uVar27 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(ulong *)(param_1 + 0x70);
    uVar19 = *(ulong *)(param_1 + 0x98);
    lVar26 = *(long *)(param_1 + 0x68);
    lVar5 = *(long *)(param_1 + 0x90);
    lVar9 = 0;
    do {
      uVar22 = *(ulong *)(lVar20 + lVar9 * 8);
      if (uVar7 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check
                  (uVar22,uVar7,&PTR_s_src_core_rs_00212500);
      }
      lVar10 = uVar22 * 0x10;
      uVar11 = *(ulong *)(lVar12 + lVar10);
      uVar24 = *(ulong *)(lVar12 + 8 + lVar10);
      *(undefined8 *)(lVar12 + lVar10) = 0xffffffffffffffff;
      if (uVar27 != 0) {
        if (uVar27 == 1) {
          uVar11 = (ulong)(*puVar4 < uVar11);
          uVar24 = (ulong)(*puVar4 <= uVar24);
          if (uVar11 < uVar24) goto LAB_0069fbee;
        }
        else {
          lVar10 = 0;
          uVar13 = uVar27;
          do {
            lVar23 = lVar10 + (uVar13 >> 1);
            if (puVar4[lVar23 * 3] < uVar11) {
              lVar10 = lVar23;
            }
            uVar13 = uVar13 - (uVar13 >> 1);
          } while (1 < uVar13);
          uVar11 = lVar10 + (ulong)(puVar4[lVar10 * 3] < uVar11);
          uVar13 = uVar27;
          lVar10 = 0;
          do {
            lVar23 = lVar10 + (uVar13 >> 1);
            if (uVar24 < puVar4[lVar23 * 3]) {
              lVar23 = lVar10;
            }
            uVar13 = uVar13 - (uVar13 >> 1);
            lVar10 = lVar23;
          } while (1 < uVar13);
          uVar24 = (lVar23 + 1) - (ulong)(uVar24 < puVar4[lVar23 * 3]);
          if (uVar11 < uVar24) {
LAB_0069fbee:
            do {
              if (uVar27 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar11,uVar27,&PTR_s_src_core_rs_00212540);
              }
              uVar13 = (ulong)(uint)puVar4[uVar11 * 3 + 2];
              if (uVar6 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic_bounds_check
                          (uVar13 + 1,uVar6,&PTR_s_src_core_rs_00212558);
              }
              uVar14 = uVar22 * lVar16 + uVar13;
              if (uVar19 <= uVar14) {
LAB_0069fc5f:
                    /* WARNING: Subroutine does not return */
                core[62e902411887be45]::panicking::panic
                          ("assertion failed: i < self.n",0x1c,&PTR_s_src_core_rs_00212590);
              }
              uVar21 = (ulong)*(uint *)(lVar26 + 4 + uVar13 * 4);
              uVar13 = uVar24;
              if (uVar21 < uVar24) {
                uVar13 = uVar21;
              }
              piVar2 = (int *)(lVar5 + 4 + uVar14 * 8);
              *piVar2 = *piVar2 + ((int)uVar13 - (int)uVar11);
              uVar11 = uVar13;
            } while (uVar21 < uVar24);
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar17);
  }
  return;
}


// ==== <pipeline::core::Core>::new @ 0069fd40 (1354 bytes)

/* <pipeline[509596c7b52975b2]::core::Core>::new */

void __rustcall
<pipeline[509596c7b52975b2]::core::Core>::new
          (undefined8 *param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  undefined1 auVar1 [12];
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 in_R10;
  undefined8 in_R11;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [32];
  long local_d0;
  ulong local_a8;
  ulong local_88;
  undefined8 local_80;
  long local_78;
  
  uVar17 = (undefined4)param_6;
  uVar2 = param_4 + 1;
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  lVar14 = param_2;
  lVar16 = param_5;
  puVar3 = (undefined4 *)pipeline[509596c7b52975b2]::sys::anon(uVar2 * 4);
  bVar25 = pipeline[509596c7b52975b2]::sys::CORE_NOTOUCH_0 != '\0';
  if (!bVar25) {
    *puVar3 = 0;
  }
  lVar18 = (param_2 + 2) * param_3;
  lVar20 = lVar18 + (ulong)(lVar18 == 0);
  lVar4 = pipeline[509596c7b52975b2]::sys::anon(lVar20 * 8);
  lVar20 = pipeline[509596c7b52975b2]::sys::anon(lVar20 * 0x10);
  uVar21 = param_4 * 10;
  if (uVar21 < 0x11) {
    uVar21 = 0x10;
  }
  uVar5 = pipeline[509596c7b52975b2]::sys::anon(uVar21);
  uVar23 = 0x10;
  if (0x10 < param_4) {
    uVar23 = param_4;
  }
  lVar19 = uVar23 * 4;
  uVar6 = pipeline[509596c7b52975b2]::sys::anon(lVar19);
  uVar7 = pipeline[509596c7b52975b2]::sys::anon(lVar19);
  uVar8 = pipeline[509596c7b52975b2]::sys::anon(lVar19);
  uVar9 = pipeline[509596c7b52975b2]::sys::anon(lVar19);
  lVar10 = pipeline[509596c7b52975b2]::sys::anon(lVar19);
  uVar11 = pipeline[509596c7b52975b2]::sys::anon(uVar23);
  uVar15 = param_2 + 1;
  uVar13 = param_2 * 4 + 4;
  lVar19 = lVar18;
  uVar22 = uVar21;
  lVar24 = param_2;
  if (uVar15 >> 0x3e == 0 && uVar13 < 0x7ffffffffffffffd) {
    if (uVar13 == 0) {
      lVar12 = 4;
      local_a8 = 0;
    }
    else {
      lVar12 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar13,4);
      if (lVar12 == 0) goto LAB_006a027d;
      local_a8 = uVar15;
    }
    uVar22 = param_3 + 2;
    uVar13 = param_3 * 4 + 8;
    lVar14 = lVar4;
    lVar16 = lVar10;
    param_6 = lVar18;
    in_R10 = uVar5;
    in_R11 = uVar9;
    lVar19 = lVar10;
    lVar24 = lVar20;
    local_d0 = lVar18;
    local_88 = uVar21;
    local_80 = uVar11;
    local_78 = param_2;
    if (0x3fffffffffffffff < uVar22 || 0x7ffffffffffffffc < uVar13) goto LAB_0069ff52;
  }
  else {
LAB_0069ff52:
    lVar12 = alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
  }
  if (uVar13 == 0) {
    lVar18 = 4;
    uVar21 = 0;
  }
  else {
    lVar18 = __rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar13,4);
    if (lVar18 == 0) {
LAB_006a027d:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(4,uVar13);
    }
    uVar21 = uVar22;
    lVar14 = lVar4;
    lVar16 = lVar19;
    param_6 = local_d0;
    in_R10 = uVar5;
    in_R11 = uVar9;
    lVar24 = lVar20;
  }
  param_1[0xf] = param_5;
  *(undefined4 *)(param_1 + 0x68) = uVar17;
  param_1[0x10] = param_3;
  param_1[0x11] = local_78;
  param_1[0x12] = lVar14;
  param_1[0x13] = param_6;
  param_1[0x14] = lVar24;
  param_1[0x15] = param_6;
  param_1[0x16] = puVar3;
  param_1[0x17] = 1;
  param_1[0x18] = uVar2;
  param_1[0x19] = puVar3;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = (ulong)bVar25;
  param_1[0x1c] = in_R10;
  param_1[0x1d] = 0;
  param_1[0x1e] = local_88;
  param_1[0x1f] = in_R10;
  param_1[0x20] = local_88;
  param_1[0x21] = 0;
  param_1[0x22] = uVar6;
  param_1[0x23] = 0;
  param_1[0x24] = uVar23;
  param_1[0x25] = uVar6;
  param_1[0x26] = uVar23;
  param_1[0x27] = 0;
  param_1[0x28] = uVar7;
  param_1[0x29] = 0;
  param_1[0x2a] = uVar23;
  param_1[0x2b] = uVar7;
  param_1[0x2c] = uVar23;
  param_1[0x2d] = 0;
  param_1[0x2e] = uVar8;
  param_1[0x2f] = 0;
  param_1[0x30] = uVar23;
  param_1[0x31] = uVar8;
  param_1[0x32] = uVar23;
  param_1[0x33] = 0;
  param_1[0x34] = in_R11;
  param_1[0x35] = 0;
  param_1[0x36] = uVar23;
  param_1[0x37] = in_R11;
  param_1[0x38] = uVar23;
  param_1[0x39] = 0;
  param_1[0x3a] = lVar16;
  param_1[0x3b] = 0;
  param_1[0x3c] = uVar23;
  param_1[0x3d] = lVar16;
  param_1[0x3e] = uVar23;
  param_1[0x3f] = 0;
  param_1[0x40] = local_80;
  param_1[0x41] = 0;
  param_1[0x42] = uVar23;
  param_1[0x43] = local_80;
  param_1[0x44] = uVar23;
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x45) = ZEXT816(0);
  param_1[0x47] = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = local_a8;
  param_1[4] = lVar12;
  param_1[5] = uVar15;
  *(undefined4 *)((long)param_1 + 0x344) = 0;
  auVar1 = ZEXT812(0);
  *(undefined1 (*) [32])(param_1 + 0x48) = ZEXT1232(auVar1) << 0x20;
  *(undefined1 (*) [32])(param_1 + 0x4c) = ZEXT1232(auVar1) << 0x20;
  auVar26 = ZEXT1232(auVar1) << 0x20;
  *(undefined1 (*) [32])(param_1 + 0x50) = auVar26;
  *(undefined1 (*) [32])(param_1 + 0x54) = auVar26;
  *(undefined1 (*) [32])(param_1 + 0x58) = auVar26;
  *(undefined1 (*) [32])(param_1 + 0x5c) = auVar26;
  *(undefined1 (*) [32])(param_1 + 0x60) = ZEXT1232(auVar1) << 0x20;
  *(undefined1 (*) [32])(param_1 + 100) = ZEXT1232(auVar1) << 0x20;
  param_1[6] = 0;
  param_1[7] = 8;
  *(undefined1 (*) [16])(param_1 + 8) = ZEXT816(0);
  param_1[10] = 8;
  param_1[0xb] = 0;
  param_1[0xc] = uVar21;
  param_1[0xd] = lVar18;
  param_1[0xe] = uVar22;
  return;
}


