// ==== <std::thread::local::LocalKey<core::cell::UnsafeCell<pipeline::sys::Tl>>>::with::<<pipeline::sys::Alloc>::get::{closure#0}, usize> @ 005d2aa0 (1271 bytes)

/* WARNING: Type propagation algorithm not settling */
/* <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::{closure#0},
   usize> */

undefined8 * __rustcall
<std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  
  uVar4 = *(ulong *)*param_1;
  if (0x3f < uVar4) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check(uVar4,0x40,&PTR_s_src_sys_rs_002106d8);
  }
  puVar11 = *(undefined8 **)(in_FS_OFFSET + uVar4 * 8 + -0x3c8);
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined8 *)(in_FS_OFFSET + uVar4 * 8 + -0x3c8) = *puVar11;
    cVar3 = *(char *)param_1[1];
    goto joined_r0x005d2c54;
  }
  if (0x10 < uVar4) {
    puVar11 = (undefined8 *)pipeline[509596c7b52975b2]::sys::big_take(uVar4);
    cVar3 = *(char *)param_1[1];
    if (puVar11 == (undefined8 *)0x0) {
      if (cVar3 == '\0') {
        uVar4 = *(ulong *)param_1[3];
        if (uVar4 < 0x200000) {
          uVar10 = 0x10;
          if (pipeline[509596c7b52975b2]::sys::DON_N < 0x10) {
            uVar10 = pipeline[509596c7b52975b2]::sys::DON_N;
          }
          if (pipeline[509596c7b52975b2]::sys::DON_N != 0) {
            uVar14 = 0;
            do {
              uVar13 = *(long *)(in_FS_OFFSET + -0x1c8) + uVar14;
              if (uVar13 >> 0x20 == 0) {
                uVar13 = (uVar13 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar13 = uVar13 % uVar10;
              }
              uVar14 = uVar14 + 1;
              lVar9 = uVar13 * 0x10;
              uVar5 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9);
              while (uVar5 != 0) {
                puVar11 = (undefined8 *)(uVar5 + 0xfff & 0xfffffffffffff000);
                if (*(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9 + 8) <
                    (long)puVar11 + uVar4) break;
                LOCK();
                uVar7 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9);
                bVar16 = uVar5 == uVar7;
                if (bVar16) {
                  *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9) = (long)puVar11 + uVar4;
                }
                else {
                  uVar5 = uVar7;
                }
                UNLOCK();
                if (bVar16) goto LAB_005d2f73;
              }
            } while (uVar14 != uVar10);
          }
        }
        else {
          uVar10 = 0x10;
          if (pipeline[509596c7b52975b2]::sys::DON_N < 0x10) {
            uVar10 = pipeline[509596c7b52975b2]::sys::DON_N;
          }
          if (pipeline[509596c7b52975b2]::sys::DON_N != 0) {
            uVar14 = 0;
            do {
              uVar13 = *(long *)(in_FS_OFFSET + -0x1c8) + uVar14;
              if (uVar13 >> 0x20 == 0) {
                uVar13 = (uVar13 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar13 = uVar13 % uVar10;
              }
              uVar14 = uVar14 + 1;
              lVar9 = uVar13 * 0x10;
              uVar5 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9);
              while (uVar5 != 0) {
                puVar11 = (undefined8 *)(uVar5 + 0x1fffff & 0xffffffffffe00000);
                if (*(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9 + 8) <
                    (long)puVar11 + uVar4) break;
                LOCK();
                uVar7 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9);
                bVar16 = uVar5 == uVar7;
                if (bVar16) {
                  *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar9) = (long)puVar11 + uVar4;
                }
                else {
                  uVar5 = uVar7;
                }
                UNLOCK();
                if (bVar16) goto LAB_005d2f73;
              }
            } while (uVar14 != uVar10);
          }
        }
      }
      goto LAB_005d2d18;
    }
    goto joined_r0x005d2c54;
  }
  uVar4 = *(ulong *)param_1[3];
  uVar10 = 0x1000;
  if (uVar4 < 0x1000) {
    uVar10 = uVar4;
  }
  lVar9 = *(long *)(in_FS_OFFSET + -0x3d8);
  if (lVar9 == 0) {
LAB_005d2b4f:
    uVar14 = 0x10;
    if (pipeline[509596c7b52975b2]::sys::DON_N < 0x10) {
      uVar14 = pipeline[509596c7b52975b2]::sys::DON_N;
    }
    if (pipeline[509596c7b52975b2]::sys::DON_N != 0) {
      uVar13 = 0;
      do {
        uVar5 = *(long *)(in_FS_OFFSET + -0x1c8) + uVar13;
        if (uVar5 >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) % (uVar14 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 % uVar14;
        }
        uVar13 = uVar13 + 1;
        lVar6 = uVar5 * 0x10;
        uVar7 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar6);
        while (uVar7 != 0) {
          uVar15 = uVar7 + 0x1fffff & 0xffffffffffe00000;
          uVar1 = uVar15 + 0x400000;
          if (*(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar6 + 8) < uVar1) break;
          LOCK();
          uVar2 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar6);
          bVar16 = uVar7 == uVar2;
          if (bVar16) {
            *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar6) = uVar1;
          }
          else {
            uVar7 = uVar2;
          }
          UNLOCK();
          if (bVar16) {
            *(ulong *)(in_FS_OFFSET + -0x1c8) = uVar5;
            if (uVar15 == 0) goto code_r0x005d2c60;
            *(ulong *)(in_FS_OFFSET + -0x3d0) = uVar1;
            *(undefined1 *)(in_FS_OFFSET + -0x1c0) = 1;
            puVar11 = (undefined8 *)((uVar10 + uVar15) - 1 & -uVar10);
            *(ulong *)(in_FS_OFFSET + -0x3d8) = uVar4 + (long)puVar11;
            cVar3 = *(char *)param_1[1];
            goto joined_r0x005d2c54;
          }
        }
      } while (uVar13 != uVar14);
    }
code_r0x005d2c60:
    if (((lVar9 == 0) && (pipeline[509596c7b52975b2]::sys::FIRST_SMALL_0 != '\0')) &&
       (pipeline[509596c7b52975b2]::sys::HUGE_0 != '\0')) {
      bVar16 = true;
      if (pipeline[509596c7b52975b2]::sys::Z_END_0 == (undefined8 *)0x0) goto LAB_005d2c6b;
      puVar8 = pipeline[509596c7b52975b2]::sys::Z_NEXT;
      do {
        puVar11 = (undefined8 *)((long)puVar8 + 0x3fffffU & 0xffffffffffc00000);
        puVar12 = puVar11 + 0x80000;
        if (pipeline[509596c7b52975b2]::sys::Z_END_0 < puVar12) goto LAB_005d2c6b;
        LOCK();
        bVar17 = puVar8 == pipeline[509596c7b52975b2]::sys::Z_NEXT;
        if (bVar17) {
          pipeline[509596c7b52975b2]::sys::Z_NEXT = puVar12;
        }
        else {
          puVar8 = pipeline[509596c7b52975b2]::sys::Z_NEXT;
        }
        UNLOCK();
      } while (!bVar17);
      if (puVar11 == (undefined8 *)0x0) goto LAB_005d2c6b;
      *(undefined1 *)(in_FS_OFFSET + -0x1c0) = 0;
    }
    else {
      bVar16 = false;
LAB_005d2c6b:
      puVar8 = pipeline[509596c7b52975b2]::sys::A_NEXT;
      do {
        puVar11 = (undefined8 *)((long)puVar8 + 0x3fffffU & 0xffffffffffc00000);
        puVar12 = puVar11 + 0x80000;
        if (pipeline[509596c7b52975b2]::sys::A_END_0 < puVar12) {
          return (undefined8 *)0x0;
        }
        LOCK();
        bVar17 = puVar8 == pipeline[509596c7b52975b2]::sys::A_NEXT;
        if (bVar17) {
          pipeline[509596c7b52975b2]::sys::A_NEXT = puVar12;
        }
        else {
          puVar8 = pipeline[509596c7b52975b2]::sys::A_NEXT;
        }
        UNLOCK();
      } while (!bVar17);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)(in_FS_OFFSET + -0x1c0) = 0;
      if (bVar16) {
        madvise(puVar11,0x400000,0xf);
      }
    }
    *(undefined8 **)(in_FS_OFFSET + -0x3d0) = puVar12;
    uVar14 = uVar4 + (long)puVar11;
  }
  else {
    puVar11 = (undefined8 *)((uVar10 + lVar9) - 1 & -uVar10);
    uVar14 = (long)puVar11 + uVar4;
    if (*(ulong *)(in_FS_OFFSET + -0x3d0) < uVar14) goto LAB_005d2b4f;
  }
  *(ulong *)(in_FS_OFFSET + -0x3d8) = uVar14;
  if (*(char *)param_1[1] != '\x01') {
    return puVar11;
  }
  cVar3 = *(char *)(in_FS_OFFSET + -0x1c0);
joined_r0x005d2c54:
  if (cVar3 != '\0') {
    (*(code *)PTR_memset_00841dd0)(puVar11,0,*(undefined8 *)(param_1[2] + 8));
  }
  return puVar11;
LAB_005d2f73:
  *(ulong *)(in_FS_OFFSET + -0x1c8) = uVar13;
  if (puVar11 != (undefined8 *)0x0) {
    return puVar11;
  }
LAB_005d2d18:
  uVar4 = *(ulong *)param_1[3];
  puVar11 = pipeline[509596c7b52975b2]::sys::A_NEXT;
  if (uVar4 < 0x200000) {
    do {
      puVar12 = (undefined8 *)((long)puVar11 + 0xfffU & 0xfffffffffffff000);
      puVar8 = (undefined8 *)((long)puVar12 + uVar4);
      if (pipeline[509596c7b52975b2]::sys::A_END_0 < puVar8) {
        return (undefined8 *)0x0;
      }
      LOCK();
      bVar16 = puVar11 == pipeline[509596c7b52975b2]::sys::A_NEXT;
      if (bVar16) {
        pipeline[509596c7b52975b2]::sys::A_NEXT = puVar8;
      }
      else {
        puVar11 = pipeline[509596c7b52975b2]::sys::A_NEXT;
      }
      UNLOCK();
    } while (!bVar16);
    return puVar12;
  }
  do {
    puVar12 = (undefined8 *)((long)puVar11 + 0x1fffffU & 0xffffffffffe00000);
    puVar8 = (undefined8 *)((long)puVar12 + uVar4);
    if (pipeline[509596c7b52975b2]::sys::A_END_0 < puVar8) {
      return (undefined8 *)0x0;
    }
    LOCK();
    bVar16 = puVar11 == pipeline[509596c7b52975b2]::sys::A_NEXT;
    if (bVar16) {
      pipeline[509596c7b52975b2]::sys::A_NEXT = puVar8;
    }
    else {
      puVar11 = pipeline[509596c7b52975b2]::sys::A_NEXT;
    }
    UNLOCK();
  } while (!bVar16);
  return puVar12;
}


// ==== pipeline::sys::run_par::<pipeline::main::{closure#30}> @ 005e8000 (2030 bytes)

/* pipeline[509596c7b52975b2]::sys::run_par::<pipeline[509596c7b52975b2]::main::{closure#30}> */

void __rustcall
pipeline[509596c7b52975b2]::sys::run_par::<pipeline[509596c7b52975b2]::main::_closure_30_>
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  undefined **ppuVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined8 in_stack_fffffffffffffdb8;
  undefined8 local_230;
  undefined8 local_228;
  ulong local_220;
  ulong local_218;
  undefined **local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0 [3];
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 local_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  ulong local_1a0;
  
  lVar24 = POOL_N_0;
  LOCK();
  WORKERS_0 = 1;
  UNLOCK();
  local_230 = param_2;
  local_228 = param_3;
  if (POOL_N_0 == 0 || POOL_N_0 + 1U < param_1) {
    uVar21 = *(ulong *)(in_FS_OFFSET + -0x30);
    if (uVar21 < 3) {
      if (uVar21 == 2) {
        if (*(long *)(in_FS_OFFSET + -0x28) == 0) {
          lVar24 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          do {
            if (lVar24 == -1) goto LAB_005e8759;
            lVar1 = lVar24 + 1;
            LOCK();
            bVar26 = lVar24 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            if (bVar26) {
              <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar1;
            }
            else {
              lVar24 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
            }
            UNLOCK();
          } while (!bVar26);
          *(long *)(in_FS_OFFSET + -0x28) = lVar1;
        }
        lVar24 = <std[c60ef17cbf7de79f]::thread::thread::Thread>::new_current();
      }
      else {
        lVar24 = std[c60ef17cbf7de79f]::thread::current::init_current(uVar21);
      }
    }
    else {
      LOCK();
      plVar10 = (long *)(uVar21 - 0x10);
      lVar24 = *plVar10;
      *plVar10 = *plVar10 + 1;
      UNLOCK();
      if (*plVar10 == 0 || SCARRY8(lVar24,1) != *plVar10 < 0) {
LAB_005e87c7:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar24 = uVar21 - 0x10;
    }
    plVar10 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x28,8);
    if (plVar10 == (long *)0x0) {
LAB_005e8797:
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x28);
    }
    *plVar10 = 1;
    plVar10[1] = 1;
    plVar10[2] = lVar24;
    plVar10[3] = 0;
    *(undefined1 *)(plVar10 + 4) = 0;
    if (1 < param_1) {
      uVar21 = 1;
      local_220 = param_1;
      do {
        local_1f0[0] = 0xffffffffffffffff;
        local_200 = 0;
        local_1d8 = 0;
        LOCK();
        lVar24 = *plVar10;
        *plVar10 = *plVar10 + 1;
        UNLOCK();
        if (*plVar10 == 0 || SCARRY8(lVar24,1) != *plVar10 < 0) goto LAB_005e87c7;
        if (std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 == 0) {
          local_1a8 = 0x4154535f;
          uStack_1a4 = 0x43;
          uStack_1a3 = 0x4b;
          local_1b0 = 0x54535552;
          uStack_1ac = 0x4d5f;
          uStack_1aa = 0x4e49;
          uStack_1a2 = 0;
          uVar6 = vptestmb_avx512vl(ZEXT816(0x4e494d5f54535552),ZEXT816(0x4e494d5f54535552));
          auVar27[7] = uStack_1a1;
          auVar27._0_7_ = 0x4b434154535f;
          auVar27._8_8_ = 0;
          uVar7 = vptestmb_avx512vl(auVar27,auVar27);
          if ((byte)((char)((ushort)uVar6 >> 4) << 4 | (byte)uVar6 & (byte)uVar7 & 0xf) == 0xff) {
            std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_218,&local_1b0);
            ppuVar25 = local_210;
            uVar18 = local_218;
            if (local_218 == 0xfffffffffffffffe) goto LAB_005e833d;
            if (local_218 == 0xffffffffffffffff) goto LAB_005e8358;
            core[62e902411887be45]::str::converts::from_utf8(&local_1b0,local_210,local_208);
            if ((local_1b0 == 1) || (local_1a0 == 0)) {
LAB_005e85a4:
              uVar22 = 0x200000;
            }
            else {
              pcVar8 = (char *)CONCAT17(uStack_1a1,
                                        CONCAT16(uStack_1a2,
                                                 CONCAT15(uStack_1a3,CONCAT14(uStack_1a4,local_1a8))
                                                ));
              if (local_1a0 == 1) {
                cVar9 = *pcVar8;
                if ((cVar9 == '+') || (cVar9 == '-')) goto LAB_005e85a4;
              }
              else {
                cVar9 = *pcVar8;
              }
              uVar19 = (ulong)(cVar9 == '+');
              if (0x10 < local_1a0 - uVar19) {
                lVar24 = 0;
                uVar22 = 0;
                while( true ) {
                  if (lVar24 == local_1a0 + -uVar19) goto joined_r0x005e85ce;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar22;
                  uVar15 = SUB168(auVar4 * ZEXT816(10),0);
                  if (SUB168(auVar4 * ZEXT816(10),8) != 0) break;
                  uVar17 = (byte)pcVar8[lVar24 + uVar19] - 0x30;
                  uVar22 = uVar15 + uVar17;
                  if ((9 < uVar17) || (lVar24 = lVar24 + 1, CARRY8(uVar15,(ulong)uVar17))) break;
                }
                goto LAB_005e85a4;
              }
              if (local_1a0 == uVar19) {
                uVar22 = 0;
              }
              else {
                lVar24 = 0;
                uVar22 = 0;
                do {
                  if (9 < (byte)pcVar8[lVar24 + uVar19] - 0x30) {
                    uVar22 = 0x200000;
                    break;
                  }
                  uVar22 = (ulong)((byte)pcVar8[lVar24 + uVar19] - 0x30) + uVar22 * 10;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != local_1a0 + -uVar19);
              }
            }
joined_r0x005e85ce:
            if (uVar18 != 0) {
              if (((A_BASE_0 == (undefined **)0x0) || (ppuVar25 < A_BASE_0)) ||
                 (A_END_0 <= ppuVar25)) {
                free(ppuVar25);
              }
              else {
                if (uVar18 < 0x11) {
                  uVar18 = 0x10;
                }
                lVar24 = 0x40 - LZCOUNT(uVar18 - 1);
                if ((uVar18 - 1 < 0x10000) || (cVar9 = big_put(ppuVar25,lVar24), cVar9 == '\0')) {
                  *ppuVar25 = *(undefined **)(in_FS_OFFSET + lVar24 * 8 + -0x3c8);
                  *(undefined ***)(in_FS_OFFSET + lVar24 * 8 + -0x3c8) = ppuVar25;
                }
              }
            }
          }
          else {
            ppuVar25 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_005e833d:
            if ((1 < ((uint)ppuVar25 & 3) - 2) && (((ulong)ppuVar25 & 3) != 0)) {
              (**(code **)((long)ppuVar25 + 0x17))((long)ppuVar25 + -1);
            }
LAB_005e8358:
            uVar22 = 0x200000;
          }
          std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 = uVar22 + 1
          ;
        }
        else {
          uVar22 = std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked::{closure#0}::MIN_0 - 1
          ;
        }
        uVar18 = uVar21 + 1;
        lVar24 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
        do {
          if (lVar24 == -1) goto LAB_005e8759;
          lVar1 = lVar24 + 1;
          LOCK();
          bVar26 = lVar24 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          if (bVar26) {
            <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar1;
          }
          else {
            lVar24 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
          }
          UNLOCK();
        } while (!bVar26);
        plVar11 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar1,local_1f0);
        local_1b0 = (int)plVar11;
        uStack_1ac = (undefined2)((ulong)plVar11 >> 0x20);
        uStack_1aa = (undefined2)((ulong)plVar11 >> 0x30);
        std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_1d0,&local_1b0);
        plVar12 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x30,8);
        if (plVar12 == (long *)0x0) goto LAB_005e875e;
        *plVar12 = 1;
        plVar12[1] = 1;
        plVar12[2] = (long)plVar10;
        plVar12[3] = 0;
        LOCK();
        lVar24 = *plVar12;
        *plVar12 = *plVar12 + 1;
        UNLOCK();
        if (*plVar12 == 0 || SCARRY8(lVar24,1) != *plVar12 < 0) goto LAB_005e87c7;
        LOCK();
        plVar2 = plVar10 + 3;
        lVar24 = *plVar2;
        *plVar2 = *plVar2 + 1;
        UNLOCK();
        if (*plVar2 == 0 || SCARRY8(lVar24,1) != *plVar2 < 0) {
          <std[c60ef17cbf7de79f]::thread::scoped::ScopeData>::overflow(plVar10 + 2);
          goto LAB_005e8797;
        }
        puVar13 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x38,8);
        if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x38);
        }
        *puVar13 = local_1d0;
        puVar13[1] = uStack_1c8;
        puVar13[2] = uStack_1c0;
        puVar13[3] = uStack_1b8;
        puVar13[4] = &local_230;
        puVar13[5] = uVar21;
        puVar13[6] = plVar12;
        LOCK();
        lVar24 = *plVar11;
        *plVar11 = *plVar11 + 1;
        UNLOCK();
        if (*plVar11 == 0 || SCARRY8(lVar24,1) != *plVar11 < 0) goto LAB_005e87c7;
        puVar14 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
        if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
        }
        *puVar14 = plVar11;
        puVar14[1] = puVar13;
        puVar14[2] = &
                     PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_22_>::_closure_0_::_closure_0_,()>::_closure_1_>_00210068
        ;
        auVar27 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(uVar22,puVar14);
        if ((auVar27._0_8_ & 1) != 0) {
          LOCK();
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
            ::drop_slow(plVar12);
          }
          LOCK();
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
            ::drop_slow(plVar11);
          }
          local_1b0 = auVar27._8_4_;
          uStack_1ac = auVar27._12_2_;
          uStack_1aa = auVar27._14_2_;
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::result::unwrap_failed
                    ("failed to spawn thread",0x16,&local_1b0,
                     &PTR_<core[62e902411887be45]::io::error::Error>_00211f90,
                     &PTR_s__rustc_0ef1bc386059596dada8fb65b_002104d8);
        }
        (*(code *)PTR_pthread_detach_00841de8)(auVar27._8_8_);
        uVar22 = local_220;
        LOCK();
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
          ::drop_slow(plVar11);
          LOCK();
          *plVar12 = *plVar12 + -1;
          lVar24 = *plVar12;
          UNLOCK();
        }
        else {
          LOCK();
          *plVar12 = *plVar12 + -1;
          lVar24 = *plVar12;
          UNLOCK();
        }
        if (lVar24 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
          ::drop_slow(plVar12);
        }
        uVar21 = uVar18;
      } while (uVar18 != uVar22);
    }
    main::_closure_30_(&local_230,0);
    if (plVar10[3] != 0) {
      do {
        lVar24 = plVar10[2];
        LOCK();
        piVar23 = (int *)(lVar24 + 0x38);
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (*piVar23 != 0) {
          piVar23 = (int *)(lVar24 + 0x38);
          do {
            local_1b0 = 0;
            uStack_1ac = 0;
            uStack_1aa = 0;
            while (*piVar23 == -1) {
              puVar20 = (undefined4 *)0x0;
              if ((char)local_1b0 != '\0') {
                puVar20 = &local_1a8;
              }
              in_stack_fffffffffffffdb8 =
                   CONCAT44((int)((ulong)in_stack_fffffffffffffdb8 >> 0x20),0xffffffff);
              lVar24 = syscall(0xca,piVar23,0x89,0xffffffff,puVar20,0,in_stack_fffffffffffffdb8);
              if ((-1 < lVar24) || (piVar16 = __errno_location(), *piVar16 != 4)) break;
            }
            LOCK();
            iVar3 = *piVar23;
            if (iVar3 == 1) {
              *piVar23 = 0;
            }
            UNLOCK();
          } while (iVar3 != 1);
        }
      } while (plVar10[3] != 0);
    }
    if ((char)plVar10[4] != '\0') {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_fmt(&DAT_0020ffb0,0x31,&PTR_s_src_sys_rs_0020faf0);
    }
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::scoped::ScopeData>>::
      drop_slow(plVar10);
    }
  }
  else {
    JOB_0 = &local_230;
    JOB_1 = &DAT_0020fb08;
    LOCK();
    DONE = 0;
    UNLOCK();
    LOCK();
    GEN = GEN + 1;
    UNLOCK();
    JOB_NT_0 = param_1;
    if (SLEEPERS != 0) {
      syscall(0xca,&GEN,0x81,0x7fffffff,0,0,0);
    }
    main::_closure_30_(&local_230,0);
    do {
    } while (DONE != lVar24);
    JOB_0 = (undefined8 *)0x0;
  }
  return;
LAB_005e8759:
  <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
LAB_005e875e:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x30);
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::main::{closure#22}>::{closure#0}::{closure#0}, ()>::{closure#1}> @ 00602ba0 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#22}>::{closure#0}::{closure#0},
   ()>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_22_>::_closure_0_::_closure_0_,()>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::sys::pool_start::{closure#0}, ()>::{closure#1}> @ 00602bc0 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::pool_start::{closure#0},
   ()>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::pool_start::_closure_0_,()>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow();
    return;
  }
  return;
}


// ==== core::ptr::drop_glue::<std::thread::lifecycle::spawn_unchecked<pipeline::sys::worker::{closure#0}, ()>::{closure#1}> @ 00602be0 (27 bytes)

/* core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::{closure#0},
   ()>::{closure#1}> */

void __rustcall
core[62e902411887be45]::ptr::drop_glue::
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::_closure_0_,()>::_closure_1_>
          (long param_1)

{
  long *plVar1;
  
  <std[c60ef17cbf7de79f]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(long **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow();
    return;
  }
  return;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::main::{closure#22}>::{closure#0}::{closure#0}, ()> @ 00613430 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#22}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_22_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::main::_closure_22_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::main::{closure#30}>::{closure#0}::{closure#0}, ()> @ 00613438 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#30}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_30_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::main::_closure_30_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::out::stage5::{closure#0}>::{closure#0}::{closure#0}, ()> @ 00613440 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage5::{closure#0}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage5::_closure_0_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::out::stage5::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::out::stage45::{closure#8}>::{closure#0}::{closure#0}, ()> @ 00613448 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage45::{closure#8}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage45::_closure_8_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::out::stage45::_closure_8_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#8}>::{closure#0}::{closure#0}, ()> @ 00613450 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#8}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_8_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_8_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#11}>::{closure#0}::{closure#0}, ()> @ 00613458 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#11}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_11_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_11_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#12}>::{closure#0}::{closure#0}, ()> @ 00613460 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#12}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_12_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_12_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#15}>::{closure#0}::{closure#0}, ()> @ 00613468 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#15}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_15_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_15_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#16}>::{closure#0}::{closure#0}, ()> @ 00613470 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#16}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_16_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_16_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::v3b::run::{closure#17}>::{closure#0}::{closure#0}, ()> @ 00613478 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#17}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_17_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::v3b::run::_closure_17_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::links::stage2::{closure#0}>::{closure#0}::{closure#0}, ()> @ 00613480 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::links::stage2::{closure#0}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::links::stage2::_closure_0_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::links::stage2::_closure_0_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::setup::setup_par::{closure#11}>::{closure#0}::{closure#0}, ()> @ 00613488 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::events::stage3::{closure#2}>::{closure#0}::{closure#0}, ()> @ 00613490 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#2}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::_closure_2_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::events::stage3::_closure_2_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::events::stage3::{closure#6}>::{closure#0}::{closure#0}, ()> @ 00613498 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#6}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::_closure_6_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::events::stage3::_closure_6_();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::complex::stage4::{closure#0}>::{closure#0}::{closure#0}, ()> @ 006134a0 (8 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#0}>::{closure#0}::{closure#0},
   ()> */

undefined8 __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::_closure_0_>::_closure_0_::_closure_0_,()>
          (void)

{
  undefined8 in_RAX;
  
  pipeline[509596c7b52975b2]::complex::clicks_a();
  return in_RAX;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::run_par<pipeline::complex::stage4::{closure#1}>::{closure#0}::{closure#0}, ()> @ 006134c0 (188 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#1}>::{closure#0}::{closure#0},
   ()> */

void __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::_closure_1_>::_closure_0_::_closure_0_,()>
          (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 8;
  local_78 = ZEXT816(0);
  local_68 = 8;
  local_50 = 0x10;
  local_38 = 1;
  local_30 = 0;
  LOCK();
  puVar1 = (ulong *)(param_1 + 0x2e8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  local_60 = local_78;
  local_48 = local_78;
  while (uVar2 < param_3) {
    pipeline[509596c7b52975b2]::complex::person_shard
              (param_1,param_4,*(undefined8 *)(param_2 + uVar2 * 8),&local_88);
    LOCK();
    puVar1 = (ulong *)(param_1 + 0x2e8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  core[62e902411887be45]::ptr::drop_glue::<pipeline[509596c7b52975b2]::complex::PScratch>(&local_88)
  ;
  return;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::pool_start::{closure#0}, ()> @ 00613590 (15 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::pool_start::{closure#0},
   ()> */

void __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::pool_start::_closure_0_,()>(undefined8 param_1)

{
  code *pcVar1;
  
  pipeline[509596c7b52975b2]::sys::worker(1,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ==== std::sys::backtrace::__rust_begin_short_backtrace::<pipeline::sys::worker::{closure#0}, ()> @ 006135a0 (7 bytes)

/* std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::<pipeline[509596c7b52975b2]::sys::worker::{closure#0},
   ()> */

void __rustcall
std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
<pipeline[509596c7b52975b2]::sys::worker::_closure_0_,()>(void)

{
  code *pcVar1;
  
  pipeline[509596c7b52975b2]::sys::worker();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ==== pipeline::sys::exit_release::{closure#2} @ 00658b60 (544 bytes)

/* pipeline[509596c7b52975b2]::sys::exit_release::{closure#2} */

void __rustcall
pipeline[509596c7b52975b2]::sys::exit_release::_closure_2_(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar7 = *(ulong *)param_1[2];
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_sys_rs_00210818);
  }
  lVar3 = *param_1;
  uVar5 = *(long *)param_1[1] * param_2;
  if ((uVar5 | uVar7) >> 0x20 == 0) {
    uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
  }
  else {
    uVar5 = uVar5 / uVar7;
  }
  lVar1 = param_2 + 1;
  uVar6 = *(long *)param_1[1] * lVar1;
  if ((uVar6 | uVar7) >> 0x20 == 0) {
    uVar6 = (uVar6 & 0xffffffff) / (uVar7 & 0xffffffff);
  }
  else {
    uVar6 = uVar6 / uVar7;
  }
  if ((uVar6 < uVar5) || (0x800 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar5,uVar6,0x800,&PTR_s_src_sys_rs_00210848);
  }
  if (uVar5 != uVar6) {
    piVar8 = (int *)(lVar3 + uVar5 * 4);
    do {
      if (-1 < *piVar8) {
        close(*piVar8);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)(lVar3 + uVar6 * 4));
  }
  puVar4 = (ulong *)param_1[3];
  uVar7 = *puVar4;
  if (param_2 < uVar7) {
    uVar5 = *(long *)param_1[5] * param_2;
    if ((uVar5 | uVar7) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar7;
    }
    pvVar2 = (void *)(uVar5 * 0x200000 + *(long *)param_1[4]);
    uVar6 = *(long *)param_1[5] * lVar1;
    if ((uVar6 | uVar7) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar7;
    }
    if (pvVar2 < (void *)(*(long *)param_1[4] + uVar6 * 0x200000)) {
      madvise(pvVar2,uVar6 * 0x200000 + uVar5 * -0x200000,4);
      uVar7 = *puVar4;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                  (&PTR_s_src_sys_rs_00210830);
      }
    }
    param_2 = param_2 * *(long *)param_1[7];
    if ((param_2 | uVar7) >> 0x20 == 0) {
      param_2 = (param_2 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      param_2 = param_2 / uVar7;
    }
    pvVar2 = (void *)(param_2 * 0x1000 + *(long *)param_1[6]);
    uVar5 = *(long *)param_1[7] * lVar1;
    if ((uVar5 | uVar7) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar7;
    }
    if (pvVar2 < (void *)(*(long *)param_1[6] + uVar5 * 0x1000)) {
      madvise(pvVar2,uVar5 * 0x1000 + param_2 * -0x1000,4);
      return;
    }
  }
  return;
}


// ==== pipeline::sys::exit_release_pieces::{closure#0} @ 00658da0 (382 bytes)

/* pipeline[509596c7b52975b2]::sys::exit_release_pieces::{closure#0} */

void __rustcall
pipeline[509596c7b52975b2]::sys::exit_release_pieces::_closure_0_(long *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __len;
  ulong uVar9;
  void *pvVar10;
  int *piVar11;
  
  uVar9 = *(ulong *)param_1[2];
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_sys_rs_00210878);
  }
  lVar1 = *param_1;
  uVar7 = *(long *)param_1[1] * param_2;
  if ((uVar7 | uVar9) >> 0x20 == 0) {
    uVar7 = (uVar7 & 0xffffffff) / (uVar9 & 0xffffffff);
  }
  else {
    uVar7 = uVar7 / uVar9;
  }
  uVar8 = *(long *)param_1[1] * (param_2 + 1);
  if ((uVar8 | uVar9) >> 0x20 == 0) {
    uVar8 = (uVar8 & 0xffffffff) / (uVar9 & 0xffffffff);
  }
  else {
    uVar8 = uVar8 / uVar9;
  }
  if ((uVar8 < uVar7) || (0x800 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar7,uVar8,0x800,&PTR_s_src_sys_rs_00210890);
  }
  if (uVar7 != uVar8) {
    piVar11 = (int *)(lVar1 + uVar7 * 4);
    do {
      if (-1 < *piVar11) {
        close(*piVar11);
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != (int *)(lVar1 + uVar8 * 4));
  }
  if (param_2 == 0) {
    pvVar10 = *(void **)param_1[4];
    __len = (long)*(void **)param_1[3] - (long)pvVar10;
    if (pvVar10 <= *(void **)param_1[3] && __len != 0) {
      madvise(pvVar10,__len,4);
    }
  }
  puVar2 = (ulong *)param_1[5];
  puVar3 = (ulong *)param_1[6];
  LOCK();
  uVar9 = *puVar2;
  *puVar2 = *puVar2 + 1;
  UNLOCK();
  if (uVar9 < *puVar3) {
    plVar4 = (long *)param_1[7];
    plVar5 = (long *)param_1[8];
    puVar6 = (ulong *)param_1[9];
    do {
      pvVar10 = (void *)(*plVar5 * uVar9 + *plVar4);
      uVar9 = (uVar9 + 1) * *plVar5 + *plVar4;
      if (*puVar6 <= uVar9) {
        uVar9 = *puVar6;
      }
      madvise(pvVar10,uVar9 - (long)pvVar10,4);
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
    } while (uVar9 < *puVar3);
  }
  return;
}


// ==== pipeline::sys::exec_init::{closure#0} @ 00658f40 (310 bytes)

/* pipeline[509596c7b52975b2]::sys::exec_init::{closure#0} */

undefined8 * __rustcall
pipeline[509596c7b52975b2]::sys::exec_init::_closure_0_(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 *local_38;
  
  <&str_as<alloc[2a0ada2ddd1fabff]::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_40,param_1,param_2);
  if (local_40 == 0xffffffffffffffff) {
    puVar2 = local_38;
  }
  else {
    local_50 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(9,1);
    if (local_50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,9);
    }
    *local_50 = 0x656e696c65706970;
    local_58 = 9;
    local_48 = 8;
    puVar2 = (undefined8 *)
             <alloc[2a0ada2ddd1fabff]::ffi::c_str::CString>::_from_vec_unchecked(&local_58);
    if (local_40 != 0) {
      if (((A_BASE_0 == (undefined8 *)0x0) || (local_38 < A_BASE_0)) || (A_END_0 <= local_38)) {
        free(local_38);
      }
      else {
        uVar3 = 0x10;
        if (0x10 < local_40) {
          uVar3 = local_40;
        }
        lVar4 = 0x40 - LZCOUNT(uVar3 - 1);
        if ((0x10000 < local_40) && (cVar1 = big_put(local_38,lVar4), cVar1 != '\0')) {
          return puVar2;
        }
        *local_38 = *(undefined8 *)(in_FS_OFFSET + lVar4 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar4 * 8 + -0x3c8) = local_38;
      }
    }
  }
  return puVar2;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::main::{closure#22}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067ace0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#22}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#22}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_22_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067ae12;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067ae12:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::main::{closure#30}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067ae20 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#30}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::{closure#30}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::main::_closure_30_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067af52;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067af52:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::out::stage5::{closure#0}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067af60 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage5::{closure#0}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage5::{closure#0}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *__ptr;
  undefined8 *puVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  local_20 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage5::_closure_0_>::_closure_0_::_closure_0_,()>
            (uVar1);
  plVar2 = (long *)param_1[6];
  if ((plVar2[3] != 0) && (__ptr = (undefined8 *)plVar2[4], __ptr != (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)plVar2[5];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(__ptr);
    }
    uVar6 = puVar3[1];
    if (uVar6 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar2[3] = 1;
        plVar2[4] = 0;
        LOCK();
        *plVar2 = *plVar2 + -1;
        lVar7 = *plVar2;
        UNLOCK();
        goto joined_r0x0067b092;
      }
      uVar5 = puVar3[2];
      if ((ulong)puVar3[2] < uVar6) {
        uVar5 = uVar6;
      }
      uVar6 = 0x10;
      if (0x10 < uVar5) {
        uVar6 = uVar5;
      }
      lVar7 = 0x40 - LZCOUNT(uVar6 - 1);
      if ((uVar5 < 0x10001) ||
         (cVar4 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar7), cVar4 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar7 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar7 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar2[3] = 1;
  plVar2[4] = 0;
  LOCK();
  *plVar2 = *plVar2 + -1;
  lVar7 = *plVar2;
  UNLOCK();
joined_r0x0067b092:
  if (lVar7 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar2);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::out::stage45::{closure#8}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b0a0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage45::{closure#8}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage45::{closure#8}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::out::stage45::_closure_8_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b1d2;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b1d2:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#8}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b1e0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#8}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#8}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_8_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b312;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b312:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#11}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b320 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#11}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#11}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_11_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b452;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b452:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#12}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b460 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#12}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#12}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_12_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b592;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b592:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#15}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b5a0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#15}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#15}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_15_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b6d2;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b6d2:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#16}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b6e0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#16}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#16}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_16_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b812;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b812:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::v3b::run::{closure#17}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b820 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#17}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::{closure#17}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::v3b::run::_closure_17_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067b952;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067b952:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::links::stage2::{closure#0}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067b960 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::links::stage2::{closure#0}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::links::stage2::{closure#0}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::links::stage2::_closure_0_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067ba92;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067ba92:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::setup::setup_par::{closure#11}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067baa0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::setup::setup_par::{closure#11}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::setup::setup_par::_closure_11_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067bbd2;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067bbd2:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::events::stage3::{closure#2}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067bbe0 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#2}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#2}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::_closure_2_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067bd12;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067bd12:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::events::stage3::{closure#6}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067bd20 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#6}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::{closure#6}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::events::stage3::_closure_6_>::_closure_0_::_closure_0_,()>
            (uVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (__ptr = (undefined8 *)plVar3[4], __ptr != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(__ptr);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067be52;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8), cVar5 == '\0')) {
        *__ptr = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067be52:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::complex::stage4::{closure#0}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067be60 (318 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#0}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#0}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = puVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::_closure_0_>::_closure_0_::_closure_0_,()>
            (*puVar1,uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (puVar1 = (undefined8 *)plVar3[4], puVar1 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(puVar1);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
        free(puVar1);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067bf92;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar8), cVar5 == '\0')) {
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067bf92:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::run_par<pipeline::complex::stage4::{closure#1}>::{closure#0}::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067bfa0 (347 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#1}>::{closure#0}::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::{closure#1}>::{closure#0}::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)param_1[4];
  uVar2 = param_1[5];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = puVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::run_par<pipeline[509596c7b52975b2]::complex::stage4::_closure_1_>::_closure_0_::_closure_0_,()>
            (*puVar1,*(undefined8 *)(puVar1[1] + 8),*(undefined8 *)(puVar1[1] + 0x10),uVar2);
  plVar3 = (long *)param_1[6];
  if ((plVar3[3] != 0) && (puVar1 = (undefined8 *)plVar3[4], puVar1 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(puVar1);
    }
    uVar7 = puVar4[1];
    if (uVar7 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (undefined8 *)0x0) ||
          (puVar1 < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= puVar1)) {
        free(puVar1);
        plVar3[3] = 1;
        plVar3[4] = 0;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar8 = *plVar3;
        UNLOCK();
        goto joined_r0x0067c0ef;
      }
      uVar6 = puVar4[2];
      if ((ulong)puVar4[2] < uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = 0x10;
      if (0x10 < uVar6) {
        uVar7 = uVar6;
      }
      lVar8 = 0x40 - LZCOUNT(uVar7 - 1);
      if ((uVar6 < 0x10001) ||
         (cVar5 = pipeline[509596c7b52975b2]::sys::big_put(puVar1,lVar8), cVar5 == '\0')) {
        *puVar1 = *(undefined8 *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(undefined8 **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = puVar1;
      }
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar8 = *plVar3;
  UNLOCK();
joined_r0x0067c0ef:
  if (lVar8 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
    drop_slow(plVar3);
    return;
  }
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::pool_start::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067c100 (43 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::pool_start::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::pool_start::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = param_1[5];
  local_38 = *param_1;
  uStack_30 = param_1[1];
  uStack_28 = param_1[2];
  uStack_20 = param_1[3];
  local_18 = uVar1;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_38);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::pool_start::_closure_0_,()>(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// ==== <std::thread::lifecycle::spawn_unchecked<pipeline::sys::worker::{closure#0}, ()>::{closure#1} as core::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} @ 0067c130 (57 bytes)

/* <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::{closure#0},
   ()>::{closure#1} as
   core[62e902411887be45]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::{closure#0},()>::{closure#1}as_core[62e902411887be45]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = uVar1;
  local_20 = uVar2;
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::generic::util::par_run<pipeline[509596c7b52975b2]::generic::P1Bufs,pipeline[509596c7b52975b2]::generic::P1,<pipeline[509596c7b52975b2]::generic::P1Bufs_as_core[62e902411887be45]::default::Default>::default,pipeline[509596c7b52975b2]::generic::run::_closure_8_>::_closure_0_,(alloc[2a0ada2ddd1fabff]::vec::Vec<(usize,pipeline[509596c7b52975b2]::generic::P1)>,pipeline[509596c7b52975b2]::generic::P1Bufs)>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_48);
  std[c60ef17cbf7de79f]::sys::backtrace::__rust_begin_short_backtrace::
  <pipeline[509596c7b52975b2]::sys::worker::_closure_0_,()>(uVar1,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// ==== <pipeline::sys::exit_release::{closure#2} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c440 (5 bytes)

/* <pipeline[509596c7b52975b2]::sys::exit_release::{closure#2} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::sys::exit_release::{closure#2}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar7 = *(ulong *)param_1[2];
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_sys_rs_00210818);
  }
  lVar3 = *param_1;
  uVar5 = *(long *)param_1[1] * param_2;
  if ((uVar5 | uVar7) >> 0x20 == 0) {
    uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
  }
  else {
    uVar5 = uVar5 / uVar7;
  }
  lVar1 = param_2 + 1;
  uVar6 = *(long *)param_1[1] * lVar1;
  if ((uVar6 | uVar7) >> 0x20 == 0) {
    uVar6 = (uVar6 & 0xffffffff) / (uVar7 & 0xffffffff);
  }
  else {
    uVar6 = uVar6 / uVar7;
  }
  if ((uVar6 < uVar5) || (0x800 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar5,uVar6,0x800,&PTR_s_src_sys_rs_00210848);
  }
  if (uVar5 != uVar6) {
    piVar8 = (int *)(lVar3 + uVar5 * 4);
    do {
      if (-1 < *piVar8) {
        close(*piVar8);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)(lVar3 + uVar6 * 4));
  }
  puVar4 = (ulong *)param_1[3];
  uVar7 = *puVar4;
  if (param_2 < uVar7) {
    uVar5 = *(long *)param_1[5] * param_2;
    if ((uVar5 | uVar7) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar7;
    }
    pvVar2 = (void *)(uVar5 * 0x200000 + *(long *)param_1[4]);
    uVar6 = *(long *)param_1[5] * lVar1;
    if ((uVar6 | uVar7) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar7;
    }
    if (pvVar2 < (void *)(*(long *)param_1[4] + uVar6 * 0x200000)) {
      madvise(pvVar2,uVar6 * 0x200000 + uVar5 * -0x200000,4);
      uVar7 = *puVar4;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                  (&PTR_s_src_sys_rs_00210830);
      }
    }
    param_2 = param_2 * *(long *)param_1[7];
    if ((param_2 | uVar7) >> 0x20 == 0) {
      param_2 = (param_2 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      param_2 = param_2 / uVar7;
    }
    pvVar2 = (void *)(param_2 * 0x1000 + *(long *)param_1[6]);
    uVar5 = *(long *)param_1[7] * lVar1;
    if ((uVar5 | uVar7) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar7;
    }
    if (pvVar2 < (void *)(*(long *)param_1[6] + uVar5 * 0x1000)) {
      madvise(pvVar2,uVar5 * 0x1000 + param_2 * -0x1000,4);
      return;
    }
  }
  return;
}


// ==== <pipeline::sys::exit_release_pieces::{closure#0} as core::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} @ 0067c460 (5 bytes)

/* <pipeline[509596c7b52975b2]::sys::exit_release_pieces::{closure#0} as
   core[62e902411887be45]::ops::function::FnOnce<(usize,)>>::call_once::{shim:vtable#0} */

void __rustcall
<pipeline[509596c7b52975b2]::sys::exit_release_pieces::{closure#0}as_core[62e902411887be45]::ops::function::FnOnce<(usize,)>>
::call_once::_shim_vtable_0_(long *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __len;
  ulong uVar9;
  void *pvVar10;
  int *piVar11;
  
  uVar9 = *(ulong *)param_1[2];
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s_src_sys_rs_00210878);
  }
  lVar1 = *param_1;
  uVar7 = *(long *)param_1[1] * param_2;
  if ((uVar7 | uVar9) >> 0x20 == 0) {
    uVar7 = (uVar7 & 0xffffffff) / (uVar9 & 0xffffffff);
  }
  else {
    uVar7 = uVar7 / uVar9;
  }
  uVar8 = *(long *)param_1[1] * (param_2 + 1);
  if ((uVar8 | uVar9) >> 0x20 == 0) {
    uVar8 = (uVar8 & 0xffffffff) / (uVar9 & 0xffffffff);
  }
  else {
    uVar8 = uVar8 / uVar9;
  }
  if ((uVar8 < uVar7) || (0x800 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (uVar7,uVar8,0x800,&PTR_s_src_sys_rs_00210890);
  }
  if (uVar7 != uVar8) {
    piVar11 = (int *)(lVar1 + uVar7 * 4);
    do {
      if (-1 < *piVar11) {
        close(*piVar11);
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != (int *)(lVar1 + uVar8 * 4));
  }
  if (param_2 == 0) {
    pvVar10 = *(void **)param_1[4];
    __len = (long)*(void **)param_1[3] - (long)pvVar10;
    if (pvVar10 <= *(void **)param_1[3] && __len != 0) {
      madvise(pvVar10,__len,4);
    }
  }
  puVar2 = (ulong *)param_1[5];
  puVar3 = (ulong *)param_1[6];
  LOCK();
  uVar9 = *puVar2;
  *puVar2 = *puVar2 + 1;
  UNLOCK();
  if (uVar9 < *puVar3) {
    plVar4 = (long *)param_1[7];
    plVar5 = (long *)param_1[8];
    puVar6 = (ulong *)param_1[9];
    do {
      pvVar10 = (void *)(*plVar5 * uVar9 + *plVar4);
      uVar9 = (uVar9 + 1) * *plVar5 + *plVar4;
      if (*puVar6 <= uVar9) {
        uVar9 = *puVar6;
      }
      madvise(pvVar10,uVar9 - (long)pvVar10,4);
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
    } while (uVar9 < *puVar3);
  }
  return;
}


// ==== <pipeline::sys::Arena>::release_part @ 00698260 (671 bytes)

/* <pipeline[509596c7b52975b2]::sys::Arena>::release_part */

void __rustcall
<pipeline[509596c7b52975b2]::sys::Arena>::release_part(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  
  uVar9 = pipeline[509596c7b52975b2]::sys::DON_N;
  if (pipeline[509596c7b52975b2]::sys::RELEASE_0 != '\0') {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_const::panic_const_div_by_zero
                (&PTR_s_src_sys_rs_002120d8);
    }
    uVar8 = param_1[1];
    if (param_1[2] < param_1[1]) {
      uVar8 = param_1[2];
    }
    uVar3 = (uVar8 >> 0x15) * param_2;
    if ((uVar3 | param_3) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) / (param_3 & 0xffffffff);
    }
    else {
      uVar3 = uVar3 / param_3;
    }
    uVar8 = (uVar8 >> 0x15) * (param_2 + 1);
    if ((uVar8 | param_3) >> 0x20 == 0) {
      uVar8 = (uVar8 & 0xffffffff) / (param_3 & 0xffffffff);
    }
    else {
      uVar8 = uVar8 / param_3;
    }
    uVar7 = uVar3 * 0x200000;
    uVar8 = uVar8 * 0x200000;
    if ((pipeline[509596c7b52975b2]::sys::DONATE_DIV_0 != 0) &&
       (uVar3 = uVar8 + uVar3 * -0x200000, uVar7 <= uVar8 && uVar3 != 0)) {
      if ((uVar3 | pipeline[509596c7b52975b2]::sys::DONATE_DIV_0) >> 0x20 == 0) {
        uVar4 = (uVar3 & 0xffffffff) / (pipeline[509596c7b52975b2]::sys::DONATE_DIV_0 & 0xffffffff);
      }
      else {
        uVar4 = uVar3 / pipeline[509596c7b52975b2]::sys::DONATE_DIV_0;
      }
      uVar5 = uVar4 + 0x400000;
      if (uVar3 <= uVar4 + 0x400000) {
        uVar5 = uVar3;
      }
      uVar3 = uVar7 + *param_1;
      uVar4 = pipeline[509596c7b52975b2]::sys::DON_N;
      if ((((pipeline[509596c7b52975b2]::sys::A_BASE_0 - 1U < uVar3) && ((*param_1 & 0x1fffff) == 0)
           ) && (0x3fffff < uVar5)) &&
         ((uVar6 = (uVar5 & 0xffffffffffe00000) + uVar3,
          uVar6 <= pipeline[509596c7b52975b2]::sys::A_END_0 &&
          (pipeline[509596c7b52975b2]::sys::DON_N < 0x10)))) {
        LOCK();
        UNLOCK();
        uVar4 = pipeline[509596c7b52975b2]::sys::DON_N + 1;
        if (pipeline[509596c7b52975b2]::sys::DON_N < 0x10) {
          lVar10 = pipeline[509596c7b52975b2]::sys::DON_N * 0x10;
          pipeline[509596c7b52975b2]::sys::DON_N = pipeline[509596c7b52975b2]::sys::DON_N + 1;
          *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10 + 8) = uVar6;
          *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10) = uVar3;
          *(ulong *)(in_FS_OFFSET + -0x1c8) = uVar9;
          uVar4 = pipeline[509596c7b52975b2]::sys::DON_N;
          if (((*(ulong *)(in_FS_OFFSET + -0x3d8) != 0) &&
              (*(char *)(in_FS_OFFSET + -0x1c0) == '\0')) &&
             (*(ulong *)(in_FS_OFFSET + -0x3d8) < *(long *)(in_FS_OFFSET + -0x3d0) - 0x200000U)) {
            uVar9 = 0x10;
            if (pipeline[509596c7b52975b2]::sys::DON_N < 0x10) {
              uVar9 = pipeline[509596c7b52975b2]::sys::DON_N;
            }
            if (pipeline[509596c7b52975b2]::sys::DON_N != 0) {
              uVar3 = 0;
              do {
                uVar4 = *(long *)(in_FS_OFFSET + -0x1c8) + uVar3;
                if (uVar4 >> 0x20 == 0) {
                  uVar4 = (uVar4 & 0xffffffff) % (uVar9 & 0xffffffff);
                }
                else {
                  uVar4 = uVar4 % uVar9;
                }
                uVar3 = uVar3 + 1;
                lVar10 = uVar4 * 0x10;
                uVar6 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10);
                while (uVar6 != 0) {
                  uVar11 = uVar6 + 0x1fffff & 0xffffffffffe00000;
                  uVar1 = uVar11 + 0x200000;
                  if (*(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10 + 8) < uVar1) break;
                  LOCK();
                  uVar2 = *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10);
                  bVar12 = uVar6 == uVar2;
                  if (bVar12) {
                    *(ulong *)(pipeline[509596c7b52975b2]::sys::DON + lVar10) = uVar1;
                  }
                  else {
                    uVar6 = uVar2;
                  }
                  UNLOCK();
                  if (bVar12) {
                    *(ulong *)(in_FS_OFFSET + -0x1c8) = uVar4;
                    uVar4 = pipeline[509596c7b52975b2]::sys::DON_N;
                    if (uVar11 != 0) {
                      *(ulong *)(in_FS_OFFSET + -0x3d8) = uVar11;
                      *(ulong *)(in_FS_OFFSET + -0x3d0) = uVar1;
                      *(undefined1 *)(in_FS_OFFSET + -0x1c0) = 1;
                      uVar4 = pipeline[509596c7b52975b2]::sys::DON_N;
                    }
                    goto LAB_006984cf;
                  }
                }
                uVar4 = pipeline[509596c7b52975b2]::sys::DON_N;
              } while (uVar3 != uVar9);
            }
          }
        }
      }
LAB_006984cf:
      pipeline[509596c7b52975b2]::sys::DON_N = uVar4;
      uVar7 = uVar7 + (uVar5 & 0xffffffffffe00000);
    }
    if (uVar7 < uVar8) {
      madvise((void *)(uVar7 + *param_1),uVar8 - uVar7,4);
      return;
    }
  }
  return;
}


// ==== <pipeline::sys::U64Map>::get_or_insert @ 0069b560 (653 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <pipeline[509596c7b52975b2]::sys::U64Map>::get_or_insert */

ulong __rustcall
<pipeline[509596c7b52975b2]::sys::U64Map>::get_or_insert(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *__ptr;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  
  uVar5 = DAT_00843898;
  if (DAT_00843898 <= (ulong)(_DAT_008438a8 * 2)) {
    if (DAT_00843898 >> 0x3a != 0) {
      alloc[2a0ada2ddd1fabff]::raw_vec::capacity_overflow();
    }
    uVar1 = uVar5 * 2;
    if (uVar5 == 0) {
      plVar4 = (long *)&DAT_00000008;
      DAT_00843898 = 0;
      uVar5 = 0;
    }
    else {
      plVar4 = (long *)__rustc[45371133cddedda4]::__rust_alloc_zeroed(uVar5 << 5,8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,uVar5 << 5);
      }
      param_2 = param_2 & 0xffffffff;
      uVar5 = uVar1;
    }
    __ptr = DAT_00843890;
    uVar2 = pipeline[509596c7b52975b2]::links::TAIL;
    DAT_008438a0 = uVar1 - 1;
    pipeline[509596c7b52975b2]::links::TAIL = uVar5;
    if (DAT_00843898 != 0) {
      plVar6 = DAT_00843890 + DAT_00843898 * 2;
      plVar7 = DAT_00843890;
      DAT_00843890 = plVar4;
      DAT_00843898 = uVar1;
      do {
        if (*plVar7 != 0) {
          uVar5 = *plVar7 * -0x61c8864680b583eb + 0x61c8864680b583ebU >> 0x14 & DAT_008438a0;
          if (DAT_00843898 <= uVar5) {
LAB_0069b6a9:
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar5,DAT_00843898,&PTR_s_src_sys_rs_00212428);
          }
          lVar8 = plVar7[1];
          while (DAT_00843890[uVar5 * 2] != 0) {
            uVar5 = uVar5 + 1 & DAT_008438a0;
            if (DAT_00843898 <= uVar5) goto LAB_0069b6a9;
          }
          plVar4 = DAT_00843890 + uVar5 * 2;
          *plVar4 = *plVar7;
          plVar4[1] = lVar8;
        }
        plVar7 = plVar7 + 2;
        plVar4 = DAT_00843890;
        uVar1 = DAT_00843898;
      } while (plVar7 != plVar6);
    }
    DAT_00843898 = uVar1;
    DAT_00843890 = plVar4;
    if (uVar2 != 0) {
      if (((pipeline[509596c7b52975b2]::sys::A_BASE_0 == (long *)0x0) ||
          (__ptr < pipeline[509596c7b52975b2]::sys::A_BASE_0)) ||
         (pipeline[509596c7b52975b2]::sys::A_END_0 <= __ptr)) {
        free(__ptr);
        param_2 = param_2 & 0xffffffff;
      }
      else {
        uVar5 = uVar2 * 0x10 - 1;
        lVar9 = LZCOUNT(uVar5);
        lVar8 = 0x40 - lVar9;
        if (0xffff < uVar5) {
          cVar3 = pipeline[509596c7b52975b2]::sys::big_put(__ptr,lVar8);
          param_2 = param_2 & 0xffffffff;
          if (cVar3 != '\0') goto LAB_0069b756;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (0x40,0x40,&PTR_s_src_sys_rs_002110f0);
        }
        *__ptr = *(long *)(in_FS_OFFSET + lVar8 * 8 + -0x3c8);
        *(long **)(in_FS_OFFSET + lVar8 * 8 + -0x3c8) = __ptr;
      }
    }
  }
LAB_0069b756:
  uVar5 = (ulong)(param_1 * -0x61c8864680b583eb) >> 0x14 & DAT_008438a0;
  lVar8 = DAT_00843890[uVar5 * 2];
  do {
    if (lVar8 == param_1 + 1) {
      param_2 = (ulong)*(uint *)(DAT_00843890 + uVar5 * 2 + 1);
LAB_0069b7c9:
      return param_2 & 0xffffffff;
    }
    plVar4 = DAT_00843890 + uVar5 * 2;
    if (lVar8 == 0) {
      *plVar4 = param_1 + 1;
      plVar4[1] = param_2 & 0xffffffff;
      _DAT_008438a8 = _DAT_008438a8 + 1;
      goto LAB_0069b7c9;
    }
    uVar5 = uVar5 + 1 & DAT_008438a0;
    lVar8 = DAT_00843890[uVar5 * 2];
  } while( true );
}


// ==== pipeline::sys::exit_release @ 006d7be0 (1470 bytes)

/* pipeline[509596c7b52975b2]::sys::exit_release */

void __rustcall
pipeline[509596c7b52975b2]::sys::exit_release
          (ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar9;
  long lVar5;
  undefined4 extraout_var;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  ulong local_2228;
  ulong local_2220;
  ulong local_2218;
  ulong local_2210;
  undefined **local_2208;
  ulong local_2200;
  long local_21f8;
  undefined8 local_21f0;
  ulong local_21e8;
  ulong local_21e0;
  ulong local_21d8;
  ulong local_21d0;
  ulong local_21c8;
  undefined **local_21c0;
  ulong local_21b8;
  undefined1 local_21b0;
  undefined7 uStack_21af;
  undefined1 local_21a8;
  undefined7 uStack_21a7;
  ulong *local_21a0;
  code *local_2198;
  ulong *local_2190;
  ulong *local_2188;
  ulong *local_2180;
  ulong *local_2178;
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030[0] = 0;
  if (param_1 < 2) {
    return;
  }
  if (POOL_N_0 + 1U < param_1) {
    return;
  }
  local_2228 = param_1;
  (*(code *)PTR_memset_00841dd0)(local_2030,0xff,0x2000);
  local_21e8 = 0x800;
  if (param_3 < 0x800) {
    local_21e8 = param_3;
  }
  (*(code *)PTR_memcpy_00841de0)(local_2030,param_2,(int)local_21e8 << 2);
  if (A_BASE_0 == 0) {
    local_2220 = 0;
    local_21d8 = 0;
    local_21d0 = 0;
    local_21e0 = 0;
  }
  else {
    if (Z_END_0 == 0) {
      local_21d0 = 0;
      local_2220 = 0;
      local_21e0 = A_BASE_0;
    }
    else {
      local_2220 = Z_END_0 - 0x40000000;
      uVar10 = Z_NEXT + 0xfffU & 0xfffffffffffff000;
      local_21d0 = 0;
      if (local_2220 <= uVar10) {
        local_21d0 = uVar10 - local_2220;
      }
      local_21d0 = local_21d0 >> 0xc;
      local_21e0 = Z_END_0;
    }
    uVar10 = A_NEXT + 0x1fffffU & 0xffffffffffe00000;
    local_21d8 = 0;
    if (local_21e0 <= uVar10) {
      local_21d8 = uVar10 - local_21e0;
    }
    local_21d8 = local_21d8 >> 0x15;
  }
  local_21b0 = 0x58;
  uStack_21af = 0x544c4552585f4c;
  local_21a8 = 0;
  uVar14 = vptestmb_avx512vl(ZEXT816(0x544c4552585f4c),ZEXT816(0x544c4552585f4c));
  uVar3 = vptestnmb_avx512vl(ZEXT816(0x544c4552585f4c),ZEXT816(0x544c4552585f4c));
  auVar1 = vpmovm2d_avx512vl(uVar3);
  auVar2 = vpmovm2d_avx512vl(uVar14);
  auVar1 = vpblendd_avx2(auVar2,auVar1,0x80);
  uVar14 = vpmovd2m_avx512vl(auVar1);
  if ((char)uVar14 == -1) {
    std[c60ef17cbf7de79f]::sys::env::unix::getenv::_closure_0_(&local_21c8,&local_21b0);
    if (local_21c8 == 0xfffffffffffffffe) goto LAB_006d7d8a;
    if (local_21c8 == 0xffffffffffffffff) goto LAB_006d7e39;
    core[62e902411887be45]::str::converts::from_utf8(&local_21b0,local_21c0,local_21b8);
    local_2218 = CONCAT71(uStack_21af,local_21b0);
    local_2210 = local_21c8;
    local_2208 = local_21c0;
    local_2200 = local_21b8;
    if (local_2218 == 0) {
      auVar15 = <str>::trim_matches::<<char>::is_whitespace>(local_21c0,local_21b8);
      uVar11 = auVar15._8_8_;
      auVar15._0_8_ = auVar15._0_8_;
      uVar14 = CONCAT71((int7)((ulong)param_6 >> 8),1);
      uVar10 = local_21b8;
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          cVar4 = *auVar15._0_8_;
          if ((cVar4 == '+') || (cVar4 == '-')) goto joined_r0x006d8056;
        }
        else {
          cVar4 = *auVar15._0_8_;
        }
        uVar13 = (ulong)(cVar4 == '+');
        if (uVar11 - uVar13 < 0x11) {
          if (uVar11 == uVar13) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            lVar7 = 0;
            do {
              if (9 < (byte)auVar15._0_8_[lVar7 + uVar13] - 0x30) goto joined_r0x006d8056;
              uVar10 = (ulong)((byte)auVar15._0_8_[lVar7 + uVar13] - 0x30) + uVar10 * 10;
              lVar7 = lVar7 + 1;
            } while (lVar7 != uVar11 + -uVar13);
          }
LAB_006d8128:
          uVar14 = 0;
        }
        else {
          uVar10 = 0;
          lVar7 = 0;
          while( true ) {
            if (lVar7 == uVar11 + -uVar13) goto LAB_006d8128;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar10;
            uVar8 = SUB168(auVar15 * ZEXT816(10),0);
            if (SUB168(auVar15 * ZEXT816(10),8) != 0) break;
            uVar12 = (byte)auVar15._0_8_[lVar7 + uVar13] - 0x30;
            uVar10 = uVar8 + uVar12;
            if ((9 < uVar12) || (lVar7 = lVar7 + 1, CARRY8(uVar8,(ulong)uVar12))) break;
          }
        }
      }
joined_r0x006d8056:
      if (local_21c8 != 0) {
        if (((undefined **)(A_BASE_0 - 1) < local_21c0) && (local_21c0 < A_END_0)) {
          uVar11 = 0x10;
          if (0x10 < local_21c8) {
            uVar11 = local_21c8;
          }
          lVar7 = LZCOUNT(uVar11 - 1);
          lVar5 = 0x40 - lVar7;
          if ((uVar11 - 1 < 0x10000) ||
             (local_21f8 = lVar7, local_21f0 = uVar14, cVar4 = big_put(local_21c0,lVar5),
             lVar7 = local_21f8, uVar14 = local_21f0, cVar4 == '\0')) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (lVar5,0x40,&PTR_s_src_sys_rs_002110f0);
            }
            *local_21c0 = *(undefined **)(in_FS_OFFSET + lVar5 * 8 + -0x3c8);
            *(undefined ***)(in_FS_OFFSET + lVar5 * 8 + -0x3c8) = local_21c0;
          }
        }
        else {
          free(local_21c0);
        }
      }
      local_2218 = param_1;
      if ((char)uVar14 == '\0') {
        if (param_1 == 0) {
          local_21c8 = 1;
          local_2218 = 0;
          local_21b0 = SUB81(&local_21c8,0);
          uStack_21af = (undefined7)((ulong)&local_21c8 >> 8);
          local_21a8 = 0x40;
          uStack_21a7 = 0x73ef;
          local_21a0 = &local_2218;
          local_2198 = <usize_as_core[62e902411887be45]::fmt::Debug>::fmt;
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_fmt
                    (&DAT_0020ccf6,&local_21b0,&PTR_s_src_sys_rs_00210860);
        }
        if (uVar10 < param_1) {
          param_1 = uVar10;
        }
        local_2218 = 1;
        if (uVar10 != 0) {
          local_2218 = param_1;
        }
      }
      goto LAB_006d7e58;
    }
  }
  else {
    local_21c0 = &PTR_s_file_name_contained_an_unexpecte_0058ce20;
LAB_006d7d8a:
    if ((1 < ((uint)local_21c0 & 3) - 2) && (((ulong)local_21c0 & 3) != 0)) {
      (**(code **)((long)local_21c0 + 0x17))((long)local_21c0 + -1);
    }
LAB_006d7e39:
    local_2210 = 0xffffffffffffffff;
    local_2218 = 1;
  }
  core[62e902411887be45]::ptr::drop_glue::
  <core[62e902411887be45]::result::Result<alloc[2a0ada2ddd1fabff]::string::String,std[c60ef17cbf7de79f]::env::VarError>>
            (&local_2218);
  local_2218 = param_1;
LAB_006d7e58:
  lVar7 = POOL_N_0;
  local_21b0 = SUB81(local_2030,0);
  uStack_21af = (undefined7)((ulong)local_2030 >> 8);
  local_21a8 = SUB81(&local_21e8,0);
  uStack_21a7 = (undefined7)((ulong)&local_21e8 >> 8);
  local_21a0 = &local_2228;
  local_2198 = (code *)&local_2218;
  local_2190 = &local_21e0;
  local_2188 = &local_21d8;
  local_2180 = &local_2220;
  local_2178 = &local_21d0;
  JOB_0 = &local_21b0;
  JOB_1 = &DAT_00213788;
  JOB_NT_0 = local_2228;
  LOCK();
  DONE = 0;
  UNLOCK();
  LOCK();
  GEN = GEN + 1;
  UNLOCK();
  uVar9 = 0;
  if (SLEEPERS != 0) {
    lVar5 = syscall(0xca,&GEN,0x81,0x7fffffff,0,0,0);
    uVar9 = (undefined4)((ulong)lVar5 >> 0x20);
  }
  uVar10 = rdtsc();
  exit_release::_closure_2_(&local_21b0,0);
  uVar11 = rdtsc();
  if (DONE != lVar7) {
    uVar11 = CONCAT44(extraout_var,(int)uVar11) | uVar11 & 0xffffffff00000000;
    lVar6 = uVar11 - (CONCAT44(uVar9,(int)uVar10) | uVar10 & 0xffffffff00000000);
    lVar5 = lVar6;
    do {
      uVar10 = rdtsc();
      if (lVar6 * 3 + 200000U <=
          (uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulong)lVar5 >> 0x20),(int)uVar10)) - uVar11
         ) {
        return;
      }
      lVar5 = DONE;
    } while (DONE != lVar7);
  }
  return;
}


// ==== pipeline::sys::anon @ 006d81a0 (330 bytes)

/* pipeline[509596c7b52975b2]::sys::anon */

void * __rustcall pipeline[509596c7b52975b2]::sys::anon(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  bool bVar4;
  
  if (((param_1 < 0x1001) && (ANON_TINY_0 != '\0')) && (A_BASE_0 != 0)) {
    uVar2 = A_NEXT;
    do {
      pvVar3 = (void *)(uVar2 + 0xfff & 0xfffffffffffff000);
      if (A_END_0 < (long)pvVar3 + 0x1000U) goto LAB_006d820e;
      LOCK();
      bVar4 = uVar2 == A_NEXT;
      if (bVar4) {
        A_NEXT = (long)pvVar3 + 0x1000U;
      }
      else {
        uVar2 = A_NEXT;
      }
      UNLOCK();
    } while (!bVar4);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
  }
LAB_006d820e:
  uVar2 = param_1 + 0x1fffff & 0xffffffffffe00000;
  if ((ANON_REGION_0 != '\0') && (A_BASE_0 != 0)) {
    uVar1 = A_NEXT;
    do {
      pvVar3 = (void *)(uVar1 + 0x1fffff & 0xffffffffffe00000);
      if (A_END_0 < (long)pvVar3 + uVar2) goto LAB_006d8277;
      LOCK();
      bVar4 = uVar1 == A_NEXT;
      if (bVar4) {
        A_NEXT = (long)pvVar3 + uVar2;
      }
      else {
        uVar1 = A_NEXT;
      }
      UNLOCK();
    } while (!bVar4);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
  }
LAB_006d8277:
  pvVar3 = mmap64((void *)0x0,uVar2 + 0x200000,3,0x4022,-1,0);
  if (pvVar3 == (void *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    fallback("mmap failed",0xb);
  }
  pvVar3 = (void *)((long)pvVar3 + 0x1fffffU & 0xffffffffffe00000);
  madvise(pvVar3,uVar2,(HUGE_0 == '\0') + 0xe);
  return pvVar3;
}


// ==== pipeline::sys::worker @ 006d8300 (1676 bytes)

/* WARNING: Removing unreachable block (ram,0x006d876a) */
/* WARNING: Removing unreachable block (ram,0x006d898f) */
/* pipeline[509596c7b52975b2]::sys::worker */

void __rustcall pipeline[509596c7b52975b2]::sys::worker(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auVar4 [32];
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined1 auVar16 [16];
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 local_b8 [16];
  undefined8 auStack_a8 [2];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  if (param_1 * 2 < param_2) {
    auStack_a8[0] = 0xffffffffffffffff;
    local_98[8] = 0;
    local_b8._8_8_ = 0x1f0000;
    local_b8._0_8_ = 1;
    lVar9 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
    do {
      if (lVar9 == -1) goto LAB_006d88eb;
      lVar1 = lVar9 + 1;
      LOCK();
      bVar15 = lVar9 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      if (bVar15) {
        <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar1;
      }
      else {
        lVar9 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar15);
    plVar5 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new(lVar1,auStack_a8);
    local_f8 = plVar5;
    std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_d8,&local_f8);
    plVar6 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x30,8);
    if (plVar6 == (long *)0x0) goto LAB_006d88f0;
    *plVar6 = 1;
    plVar6[1] = 1;
    plVar6[2] = 0;
    plVar6[3] = 0;
    LOCK();
    lVar9 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar9,1) != *plVar6 < 0) goto LAB_006d8937;
    plVar7 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x38,8);
    if (plVar7 == (long *)0x0) goto LAB_006d88ff;
    *plVar7 = (long)local_d8;
    plVar7[1] = lStack_d0;
    plVar7[2] = lStack_c8;
    plVar7[3] = lStack_c0;
    plVar7[4] = (long)plVar6;
    plVar7[5] = param_1 * 2;
    plVar7[6] = param_2;
    LOCK();
    lVar9 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar9,1) != *plVar5 < 0) goto LAB_006d8937;
    puVar8 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
    if (puVar8 == (undefined8 *)0x0) goto LAB_006d890e;
    *puVar8 = plVar5;
    puVar8[1] = plVar7;
    puVar8[2] = &
                PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::_closure_0_,()>::_closure_1_>_00210268
    ;
    auVar16 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(0x1f0000,puVar8);
    uVar12 = auVar16._8_8_;
    if ((auVar16._0_8_ & 1) != 0) goto LAB_006d8939;
    local_f0 = plVar5;
    local_e8 = plVar6;
    local_e0 = uVar12;
    (*(code *)PTR_pthread_detach_00841de8)(uVar12);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
      ::drop_slow(plVar5);
    }
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>::
      drop_slow(plVar6);
    }
  }
  uVar11 = param_1 * 2 + 1;
  if (param_2 <= uVar11) {
LAB_006d85e2:
    if ((param_1 < 0x10) && (PIN_AT_START_0 != '\0')) {
      if (parse::cpu_order::O._24_4_ != 0) {
        <std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>
        ::initialize::
        <<std[c60ef17cbf7de79f]::sync::once_lock::OnceLock<alloc[2a0ada2ddd1fabff]::vec::Vec<usize>>>::get_or_init<pipeline[509596c7b52975b2]::parse::cpu_order::_closure_0_>::_closure_0_,_>
                  ();
      }
      if (parse::cpu_order::O._16_8_ != 0) {
        if ((param_1 | parse::cpu_order::O._16_8_) >> 0x20 == 0) {
          uVar11 = (param_1 & 0xffffffff) % (parse::cpu_order::O._16_8_ & 0xffffffff);
        }
        else {
          uVar11 = param_1 % (ulong)parse::cpu_order::O._16_8_;
        }
        uVar11 = *(ulong *)(parse::cpu_order::O._8_8_ + uVar11 * 8);
        local_58 = ZEXT1232(ZEXT812(0)) << 0x20;
        local_78 = local_58;
        local_98 = ZEXT1232(ZEXT812(0)) << 0x20;
        _local_b8 = local_98;
        if (uVar11 < 0x400) {
          *(ulong *)(local_b8 + (uVar11 >> 6) * 8) =
               *(ulong *)(local_b8 + (uVar11 >> 6) * 8) | 1L << (uVar11 & 0x3f);
          lVar9 = syscall(0xcb,0,0x80,local_b8);
          if (lVar9 == 0) {
            PINNED[param_1] = 1;
          }
        }
      }
    }
    puVar10 = (undefined1 *)0x0;
    if ((PREFAULT_0 != '\0') && (puVar10 = (undefined1 *)0x0, A_BASE_0 != (undefined8 *)0x0)) {
      puVar8 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x40,8);
      auVar4 = _local_b8;
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(8,0x40);
      }
      local_b8._8_8_ = puVar8;
      local_b8._0_8_ = 8;
      auStack_a8[1] = auVar4._24_8_;
      auStack_a8[0] = 0;
      local_d8 = local_b8;
      if (((A_BASE_0 == (undefined8 *)0x0) || (puVar8 < A_BASE_0)) || (A_END_0 <= puVar8)) {
        free(puVar8);
      }
      else {
        *puVar8 = *(undefined8 *)(in_FS_OFFSET + -0x398);
        *(undefined8 **)(in_FS_OFFSET + -0x398) = puVar8;
      }
      puVar10 = (undefined1 *)(*(long *)(in_FS_OFFSET + -0x3d8) + 0xfffU & 0xfffffffffffff000);
      uVar11 = 0xffffffffffe00000;
      if (HUGE_0 == '\0') {
        uVar11 = 0xfffffffffffff000;
      }
      lVar9 = 0x200000;
      if (HUGE_0 == '\0') {
        lVar9 = 0x1000;
      }
      if (puVar10 < *(undefined1 **)(in_FS_OFFSET + -0x3d0)) {
        do {
          *puVar10 = 0;
          puVar10 = (undefined1 *)((ulong)(puVar10 + lVar9) & uVar11);
        } while (puVar10 < *(undefined1 **)(in_FS_OFFSET + -0x3d0));
      }
    }
    uVar11 = SPIN_TICKS_0;
    uVar13 = 0;
    do {
      uVar14 = rdtsc();
      puVar10 = (undefined1 *)CONCAT44((int)((ulong)puVar10 >> 0x20),(int)uVar14);
      if (GEN == uVar13) {
        uVar14 = (ulong)puVar10 | uVar14 & 0xffffffff00000000;
        do {
          while( true ) {
            uVar2 = rdtsc();
            puVar10 = (undefined1 *)CONCAT44((int)((ulong)puVar10 >> 0x20),(int)uVar2);
            if (uVar11 <= (uVar2 & 0xffffffff00000000 | (ulong)puVar10) - uVar14) break;
            if (GEN != uVar13) goto LAB_006d88b4;
          }
          LOCK();
          SLEEPERS = SLEEPERS + 1;
          UNLOCK();
          puVar10 = (undefined1 *)syscall(0xca,&GEN,0x80,(ulong)uVar13,0,0,0);
          LOCK();
          SLEEPERS = SLEEPERS + -1;
          UNLOCK();
        } while (GEN == uVar13);
      }
LAB_006d88b4:
      uVar13 = GEN;
      if ((JOB_0 != 0) && (param_1 < JOB_NT_0)) {
        puVar10 = (undefined1 *)(**(code **)(JOB_1 + 0x28))(JOB_0,param_1);
      }
      LOCK();
      DONE = DONE + 1;
      UNLOCK();
    } while( true );
  }
  auStack_a8[0] = 0xffffffffffffffff;
  local_98[8] = 0;
  local_b8._8_8_ = 0x1f0000;
  local_b8._0_8_ = 1;
  lVar9 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
  do {
    if (lVar9 == -1) goto LAB_006d88eb;
    LOCK();
    bVar15 = lVar9 == <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
    if (bVar15) {
      <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER = lVar9 + 1;
    }
    else {
      lVar9 = <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::COUNTER;
    }
    UNLOCK();
  } while (!bVar15);
  plVar5 = (long *)<std[c60ef17cbf7de79f]::thread::thread::Thread>::new();
  local_f8 = plVar5;
  std[c60ef17cbf7de79f]::thread::spawnhook::run_spawn_hooks(&local_d8,&local_f8);
  plVar6 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x30,8);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 1;
    plVar6[1] = 1;
    plVar6[2] = 0;
    plVar6[3] = 0;
    LOCK();
    lVar9 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 != 0 && SCARRY8(lVar9,1) == *plVar6 < 0) {
      plVar7 = (long *)__rustc[45371133cddedda4]::__rust_alloc(0x38,8);
      if (plVar7 == (long *)0x0) {
LAB_006d88ff:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x38);
      }
      *plVar7 = (long)local_d8;
      plVar7[1] = lStack_d0;
      plVar7[2] = lStack_c8;
      plVar7[3] = lStack_c0;
      plVar7[4] = (long)plVar6;
      plVar7[5] = uVar11;
      plVar7[6] = param_2;
      LOCK();
      lVar9 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      if (*plVar5 != 0 && SCARRY8(lVar9,1) == *plVar5 < 0) {
        puVar8 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc(0x18,8);
        if (puVar8 == (undefined8 *)0x0) {
LAB_006d890e:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x18);
        }
        *puVar8 = plVar5;
        puVar8[1] = plVar7;
        puVar8[2] = &
                    PTR_<std[c60ef17cbf7de79f]::thread::lifecycle::spawn_unchecked<pipeline[509596c7b52975b2]::sys::worker::_closure_0_,()>::_closure_1_>_00210268
        ;
        auVar16 = <std[c60ef17cbf7de79f]::sys::thread::unix::Thread>::new(0x1f0000,puVar8);
        uVar12 = auVar16._8_8_;
        if ((auVar16._0_8_ & 1) != 0) {
LAB_006d8939:
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
            ::drop_slow(plVar6);
          }
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
            ::drop_slow(plVar5);
          }
          local_f0 = (long *)0x0;
          local_e8 = (long *)uVar12;
          core[62e902411887be45]::ptr::drop_glue::
          <core[62e902411887be45]::result::Result<std[c60ef17cbf7de79f]::thread::join_handle::JoinHandle<()>,core[62e902411887be45]::io::error::Error>>
                    (&local_f0);
                    /* WARNING: Subroutine does not return */
          fallback("thread spawn",0xc);
        }
        local_f0 = plVar5;
        local_e8 = plVar6;
        local_e0 = uVar12;
        (*(code *)PTR_pthread_detach_00841de8)(uVar12);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
          ::drop_slow(plVar5);
        }
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::lifecycle::Packet<()>>>
          ::drop_slow(plVar6);
        }
        goto LAB_006d85e2;
      }
    }
LAB_006d8937:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  goto LAB_006d88f0;
LAB_006d88eb:
  <std[c60ef17cbf7de79f]::thread::id::ThreadId>::new::exhausted();
LAB_006d88f0:
                    /* WARNING: Subroutine does not return */
  alloc[2a0ada2ddd1fabff]::alloc::handle_alloc_error(8,0x30);
}


// ==== pipeline::sys::big_put @ 006d89c0 (112 bytes)

/* pipeline[509596c7b52975b2]::sys::big_put */

bool __rustcall pipeline[509596c7b52975b2]::sys::big_put(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((0x2f < param_2) || (BIG_ON_0 == '\0')) {
    return false;
  }
  LOCK();
  UNLOCK();
  if (BIG_LOCK != '\0') {
    do {
      LOCK();
      UNLOCK();
    } while( true );
  }
  uVar1 = *(ulong *)(BIG_N + param_2 * 8);
  if (uVar1 < 0x40) {
    *(undefined8 *)(BIG + uVar1 * 8 + param_2 * 0x200) = param_1;
    *(ulong *)(BIG_N + param_2 * 8) = uVar1 + 1;
  }
  BIG_LOCK = 0;
  return uVar1 < 0x40;
}


// ==== pipeline::sys::big_take @ 006d8a40 (405 bytes)

/* pipeline[509596c7b52975b2]::sys::big_take */

long __rustcall pipeline[509596c7b52975b2]::sys::big_take(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  
  if ((0x2f < param_1) || (BIG_ON_0 == '\0')) {
    return 0;
  }
  LOCK();
  UNLOCK();
  if (BIG_LOCK != '\0') {
    do {
      LOCK();
      UNLOCK();
    } while( true );
  }
  BIG_LOCK = 1;
  lVar6 = 0;
  uVar5 = param_1;
  while (uVar3 = *(ulong *)(BIG_N + uVar5 * 8), uVar3 == 0) {
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + -1;
    if (uVar5 == 0x30) {
      BIG_LOCK = 0;
      return 0;
    }
  }
  uVar8 = uVar5;
  if (uVar5 < param_1) {
    uVar8 = param_1;
  }
  lVar6 = -lVar6;
  uVar4 = param_1 - 1;
  do {
    if (uVar4 - uVar8 == -1) goto LAB_006d8b10;
    if (uVar4 == 0x2f) {
                    /* WARNING: Subroutine does not return */
      core[62e902411887be45]::panicking::panic_bounds_check(0x30,0x30,&PTR_s_src_sys_rs_002108a8);
    }
    uVar1 = uVar4 + 1;
    lVar2 = uVar4 * 8;
    uVar4 = uVar1;
  } while (*(ulong *)(BIG_N + lVar2 + 8) < 0x40);
  if (uVar1 < uVar5) {
    BIG_LOCK = 0;
    return 0;
  }
LAB_006d8b10:
  *(ulong *)(BIG_N + uVar5 * 8) = uVar3 - 1;
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::panicking::panic_bounds_check(uVar3 - 1,0x40,&PTR_s_src_sys_rs_00213828)
    ;
  }
  lVar2 = *(long *)(&SMALLPAGES_0 + uVar3 * 8 + uVar5 * 0x200);
  if (param_1 < uVar5) {
    puVar7 = BIG + param_1 * 0x200;
    do {
      uVar5 = *(ulong *)(BIG_N + param_1 * 8);
      if (0x3f < uVar5) {
                    /* WARNING: Subroutine does not return */
        core[62e902411887be45]::panicking::panic_bounds_check(uVar5,0x40,&PTR_s_src_sys_rs_00213840)
        ;
      }
      *(long *)(puVar7 + uVar5 * 8) = (1L << (param_1 & 0x3f)) + lVar2;
      *(ulong *)(BIG_N + param_1 * 8) = uVar5 + 1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 0x200;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  BIG_LOCK = 0;
  return lVar2;
}


// ==== pipeline::sys::fallback @ 006d8be0 (324 bytes)

/* pipeline[509596c7b52975b2]::sys::fallback */

void __rustcall pipeline[509596c7b52975b2]::sys::fallback(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  code *local_8;
  
  local_10 = &local_20;
  local_8 = <&str_as_core[62e902411887be45]::fmt::Display>::fmt;
  local_20 = param_1;
  local_18 = param_2;
  std[c60ef17cbf7de79f]::io::stdio::_eprint(&DAT_0020c393,&local_10);
  if (EXEC == -1) goto LAB_006d8d1a;
  execve("/proc/self/exe",DAT_00843738,environ);
  execve(DAT_00843778,DAT_00843738,environ);
  std[c60ef17cbf7de79f]::io::stdio::_eprint("[v2b] exec failed\n",0x25);
  if (WORKERS_0 != '\0') goto LAB_006d8d1a;
  uVar2 = *(ulong *)(in_FS_OFFSET + -0x30);
  if (uVar2 < 3) {
    plVar5 = (long *)std[c60ef17cbf7de79f]::thread::current::init_current();
    piVar4 = (int *)plVar5[3];
    if (piVar4 == (int *)0x0) goto LAB_006d8c93;
LAB_006d8cc8:
    bVar6 = plVar5[4] == 5;
    if (piVar4 != (int *)0x0) {
LAB_006d8cd5:
      if ((bVar6) && (*piVar4 == 0x6e69616d)) {
        core[62e902411887be45]::ptr::drop_glue::<std[c60ef17cbf7de79f]::thread::thread::Thread>();
        plVar5 = DAT_00843750;
        run_generic(DAT_00843750,DAT_00843758,DAT_00843768,DAT_00843770,DAT_00843788);
      }
    }
  }
  else {
    LOCK();
    plVar5 = (long *)(uVar2 - 0x10);
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plVar5 = (long *)(uVar2 - 0x10);
    piVar4 = *(int **)(uVar2 + 8);
    if (piVar4 != (int *)0x0) goto LAB_006d8cc8;
LAB_006d8c93:
    if (std[c60ef17cbf7de79f]::thread::main_thread::MAIN_0 != 0) {
      piVar4 = (int *)0x0;
      if (std[c60ef17cbf7de79f]::thread::main_thread::MAIN_0 == plVar5[2]) {
        piVar4 = &DAT_002064cc;
      }
      bVar6 = true;
      if (piVar4 == (int *)0x0) goto LAB_006d8d0f;
      goto LAB_006d8cd5;
    }
  }
LAB_006d8d0f:
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    <alloc[2a0ada2ddd1fabff]::sync::Arc<std[c60ef17cbf7de79f]::thread::thread::Inner,std[c60ef17cbf7de79f]::alloc::System>>
    ::drop_slow();
  }
LAB_006d8d1a:
                    /* WARNING: Subroutine does not return */
  _Exit(3);
}


// ==== pipeline::sys::mem_test @ 006d8d40 (3272 bytes)

/* pipeline[509596c7b52975b2]::sys::mem_test */

byte __rustcall pipeline[509596c7b52975b2]::sys::mem_test(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  char local_c1;
  undefined8 *local_c0;
  char *local_b8;
  ulong *local_b0;
  undefined8 *local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  uint local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  ulong local_40;
  size_t local_38;
  
  puVar6 = (undefined8 *)__rustc[45371133cddedda4]::__rust_alloc_zeroed(0x1000,1);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x1000);
  }
  lVar10 = 0;
  do {
    uVar12 = lVar10 * 0x83;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar12;
    iVar5 = SUB164(auVar1 * ZEXT816(0x5197f7d73404147),8);
    *(char *)((long)puVar6 + lVar10) =
         (char)uVar12 + (char)(((uint)((int)uVar12 - iVar5) >> 1) + iVar5 >> 7) * '\x05' + '\x01';
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x1000);
  local_48 = (long)puVar6 + 3;
  bVar14 = 1;
  puVar16 = (undefined8 *)0x0;
  local_58 = puVar6;
  do {
    local_50 = (undefined8 *)((long)puVar16 + 1);
    local_78 = 0;
LAB_006d8e28:
    do {
      local_98 = 1;
      local_90 = 0x4c0;
      local_c1 = '\x01';
      if (A_BASE_0 == (undefined8 *)0x0) {
        puVar7 = calloc(0x4c0,1);
      }
      else {
        local_88 = 0xb;
        local_80 = 0x800;
        local_c0 = &local_88;
        local_b8 = &local_c1;
        local_b0 = &local_98;
        local_a8 = &local_80;
        puVar7 = (undefined8 *)
                 <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
                 ::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>
                           (&local_c0);
        uVar12 = local_90;
        if (puVar7 == (undefined8 *)0x0) {
          if (local_c1 == '\0') {
            if (local_90 < local_98 || 0x10 < local_98) {
              local_c0 = (undefined8 *)0x0;
              uVar12 = local_98;
              if (local_98 < 9) {
                uVar12 = 8;
              }
              iVar5 = posix_memalign(&local_c0,uVar12,local_90);
              if (iVar5 != 0) goto LAB_006d98ee;
              puVar7 = local_c0;
            }
            else {
              puVar7 = malloc(local_90);
            }
          }
          else if (local_90 < local_98 || 0x10 < local_98) {
            local_c0 = (undefined8 *)0x0;
            uVar15 = local_98;
            if (local_98 < 9) {
              uVar15 = 8;
            }
            iVar5 = posix_memalign(&local_c0,uVar15,local_90);
            puVar7 = local_c0;
            if (local_c0 == (undefined8 *)0x0 || iVar5 != 0) {
LAB_006d98ee:
              puVar7 = (undefined8 *)0x0;
            }
            else {
              (*(code *)PTR_memset_00841dd0)(local_c0,0,uVar12);
            }
          }
          else {
            puVar7 = calloc(local_90,1);
          }
        }
      }
      uVar12 = local_78;
      if (puVar7 == (undefined8 *)0x0) goto LAB_006d9a3e;
      local_40 = local_78 + 1;
      local_c0 = puVar16;
      local_68 = puVar7;
      (*(code *)PTR_memcpy_00841de0)((long)puVar7 + local_78,local_48,puVar16);
      uVar15 = uVar12 + (long)puVar16;
      uVar8 = 0;
      do {
        if (uVar8 < local_78 || uVar15 <= uVar8) {
          cVar4 = '\0';
        }
        else {
          uVar13 = uVar8 + (3 - uVar12);
          if (0xfff < uVar13) {
                    /* WARNING: Subroutine does not return */
            core[62e902411887be45]::panicking::panic_bounds_check
                      (uVar13,0x1000,&PTR_s_src_sys_rs_002138b8);
          }
          cVar4 = *(char *)((long)puVar6 + uVar13);
        }
        if (0x4bf < uVar8) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar8,0x4c0,&PTR_s_src_sys_rs_002138d0);
        }
        uVar13 = uVar8 + 1;
        bVar14 = bVar14 & *(char *)((long)local_68 + uVar8) == cVar4;
        uVar8 = uVar13;
      } while (uVar13 != 0x4c0);
      local_98 = 1;
      local_90 = 0x4c0;
      local_c1 = '\0';
      if (A_BASE_0 == (undefined8 *)0x0) {
        puVar7 = malloc(0x4c0);
      }
      else {
        local_88 = 0xb;
        local_80 = 0x800;
        local_c0 = &local_88;
        local_b8 = &local_c1;
        local_b0 = &local_98;
        local_a8 = &local_80;
        puVar7 = (undefined8 *)
                 <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
                 ::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>
                           (&local_c0);
        uVar12 = local_90;
        if (puVar7 == (undefined8 *)0x0) {
          if (local_c1 == '\0') {
            if (local_90 < local_98 || 0x10 < local_98) {
              local_c0 = (undefined8 *)0x0;
              uVar12 = local_98;
              if (local_98 < 9) {
                uVar12 = 8;
              }
              iVar5 = posix_memalign(&local_c0,uVar12,local_90);
              if (iVar5 != 0) goto LAB_006d997f;
              puVar7 = local_c0;
            }
            else {
              puVar7 = malloc(local_90);
            }
          }
          else if (local_90 < local_98 || 0x10 < local_98) {
            local_c0 = (undefined8 *)0x0;
            uVar8 = local_98;
            if (local_98 < 9) {
              uVar8 = 8;
            }
            iVar5 = posix_memalign(&local_c0,uVar8,local_90);
            puVar7 = local_c0;
            if (local_c0 == (undefined8 *)0x0 || iVar5 != 0) {
LAB_006d997f:
              puVar7 = (undefined8 *)0x0;
            }
            else {
              (*(code *)PTR_memset_00841dd0)(local_c0,0,uVar12);
            }
          }
          else {
            puVar7 = calloc(local_90,1);
          }
        }
      }
      puVar3 = PTR_memset_00841dd0;
      if (puVar7 == (undefined8 *)0x0) {
LAB_006d9a3e:
                    /* WARNING: Subroutine does not return */
        alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x4c0);
      }
      local_60 = puVar7;
      (*(code *)PTR_memset_00841dd0)(puVar7,7,0x4c0);
      local_c0 = puVar16;
      (*(code *)puVar3)((long)local_60 + local_78,0x5a,puVar16);
      uVar12 = 0;
      do {
        if (0x4bf < uVar12) {
                    /* WARNING: Subroutine does not return */
          core[62e902411887be45]::panicking::panic_bounds_check
                    (uVar12,0x4c0,&PTR_s_src_sys_rs_002138a0);
        }
        uVar8 = uVar12 + 1;
        cVar4 = '\a';
        if (uVar12 < uVar15) {
          cVar4 = 'Z';
        }
        if (uVar12 < local_78) {
          cVar4 = '\a';
        }
        bVar14 = bVar14 & *(char *)((long)local_60 + uVar12) == cVar4;
        uVar12 = uVar8;
      } while (uVar8 != 0x4c0);
      local_78 = local_78 + 100;
      local_6c = 0x401;
      do {
        local_98 = 1;
        local_90 = 0x960;
        local_c1 = '\0';
        if (A_BASE_0 == (undefined8 *)0x0) {
          puVar7 = malloc(0x960);
        }
        else {
          local_88 = 0xc;
          local_80 = 0x1000;
          local_c0 = &local_88;
          local_b8 = &local_c1;
          local_b0 = &local_98;
          local_a8 = &local_80;
          puVar7 = (undefined8 *)
                   <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
                   ::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>
                             (&local_c0);
          uVar12 = local_90;
          if (puVar7 == (undefined8 *)0x0) {
            if (local_c1 == '\0') {
              if (local_90 < local_98 || 0x10 < local_98) {
                local_c0 = (undefined8 *)0x0;
                uVar12 = local_98;
                if (local_98 < 9) {
                  uVar12 = 8;
                }
                iVar5 = posix_memalign(&local_c0,uVar12,local_90);
                if (iVar5 != 0) goto LAB_006d963b;
                puVar7 = local_c0;
              }
              else {
                puVar7 = malloc(local_90);
              }
            }
            else if (local_90 < local_98 || 0x10 < local_98) {
              local_c0 = (undefined8 *)0x0;
              uVar15 = local_98;
              if (local_98 < 9) {
                uVar15 = 8;
              }
              iVar5 = posix_memalign(&local_c0,uVar15,local_90);
              puVar7 = local_c0;
              if (local_c0 == (undefined8 *)0x0 || iVar5 != 0) {
LAB_006d963b:
                puVar7 = (undefined8 *)0x0;
              }
              else {
                (*(code *)PTR_memset_00841dd0)(local_c0,0,uVar12);
              }
            }
            else {
              puVar7 = calloc(local_90,1);
            }
          }
        }
        if (puVar7 == (undefined8 *)0x0) goto LAB_006d99ff;
        (*(code *)PTR_memcpy_00841de0)(puVar7,puVar6,0x960);
        local_98 = 1;
        local_90 = 0x960;
        local_c1 = '\0';
        if (A_BASE_0 == (undefined8 *)0x0) {
          puVar9 = malloc(0x960);
        }
        else {
          local_88 = 0xc;
          local_80 = 0x1000;
          local_c0 = &local_88;
          local_b8 = &local_c1;
          local_b0 = &local_98;
          local_a8 = &local_80;
          puVar9 = (undefined8 *)
                   <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
                   ::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>
                             (&local_c0);
          uVar12 = local_90;
          if (puVar9 == (undefined8 *)0x0) {
            if (local_c1 == '\0') {
              if (local_90 < local_98 || 0x10 < local_98) {
                local_c0 = (undefined8 *)0x0;
                uVar12 = local_98;
                if (local_98 < 9) {
                  uVar12 = 8;
                }
                iVar5 = posix_memalign(&local_c0,uVar12,local_90);
                if (iVar5 != 0) goto LAB_006d96cd;
                puVar9 = local_c0;
              }
              else {
                puVar9 = malloc(local_90);
              }
            }
            else if (local_90 < local_98 || 0x10 < local_98) {
              local_c0 = (undefined8 *)0x0;
              uVar15 = local_98;
              if (local_98 < 9) {
                uVar15 = 8;
              }
              iVar5 = posix_memalign(&local_c0,uVar15,local_90);
              puVar9 = local_c0;
              if (local_c0 == (undefined8 *)0x0 || iVar5 != 0) {
LAB_006d96cd:
                puVar9 = (undefined8 *)0x0;
              }
              else {
                (*(code *)PTR_memset_00841dd0)(local_c0,0,uVar12);
              }
            }
            else {
              puVar9 = calloc(local_90,1);
            }
          }
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_006d99ff;
        local_99 = bVar14;
        (*(code *)PTR_memcpy_00841de0)(puVar9,puVar7,0x960);
        uVar15 = local_78;
        uVar12 = 100;
        if ((local_6c & 1) != 0) {
          uVar15 = 100;
          uVar12 = local_78;
        }
        local_c0 = puVar16;
        (*(code *)PTR_memmove_00841dd8)((long)puVar7 + uVar12,(long)puVar7 + uVar15,puVar16);
        local_98 = 1;
        local_90 = 0x960;
        local_c1 = '\0';
        if (A_BASE_0 == (undefined8 *)0x0) {
LAB_006d93f5:
          puVar6 = malloc(local_90);
LAB_006d93fa:
        }
        else {
          local_88 = 0xc;
          local_80 = 0x1000;
          local_c0 = &local_88;
          local_b8 = &local_c1;
          local_b0 = &local_98;
          local_a8 = &local_80;
          puVar6 = (undefined8 *)
                   <std[c60ef17cbf7de79f]::thread::local::LocalKey<core[62e902411887be45]::cell::UnsafeCell<pipeline[509596c7b52975b2]::sys::Tl>>>
                   ::with::<<pipeline[509596c7b52975b2]::sys::Alloc>::get::_closure_0_,usize>
                             (&local_c0);
          if (puVar6 != (undefined8 *)0x0) goto LAB_006d93fa;
          if (local_c1 == '\0') {
            if (local_98 <= local_90 && local_98 < 0x11) goto LAB_006d93f5;
            local_c0 = (undefined8 *)0x0;
            uVar8 = local_98;
            if (local_98 < 9) {
              uVar8 = 8;
            }
            iVar5 = posix_memalign(&local_c0,uVar8,local_90);
            if (iVar5 != 0) goto LAB_006d975c;
            puVar6 = local_c0;
          }
          else {
            if (local_98 <= local_90 && local_98 < 0x11) {
              puVar6 = calloc(local_90,1);
              goto LAB_006d93fa;
            }
            local_c0 = (undefined8 *)0x0;
            uVar8 = local_98;
            if (local_98 < 9) {
              uVar8 = 8;
            }
            local_38 = local_90;
            iVar5 = posix_memalign(&local_c0,uVar8,local_90);
            puVar6 = local_c0;
            if (local_c0 == (undefined8 *)0x0 || iVar5 != 0) {
LAB_006d975c:
              puVar6 = (undefined8 *)0x0;
            }
            else {
              (*(code *)PTR_memset_00841dd0)(local_c0,0,local_38);
            }
          }
        }
        if (puVar6 == (undefined8 *)0x0) {
LAB_006d99ff:
                    /* WARNING: Subroutine does not return */
          alloc[2a0ada2ddd1fabff]::raw_vec::handle_error(1,0x960);
        }
        (*(code *)PTR_memcpy_00841de0)(puVar6,puVar9,0x960);
        if (puVar16 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          do {
            uVar8 = (long)puVar11 + uVar15;
            if (0x95f < uVar8) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar8,0x960,&PTR_s_src_sys_rs_00213870);
            }
            uVar13 = (long)puVar11 + uVar12;
            if (0x95f < uVar13) {
                    /* WARNING: Subroutine does not return */
              core[62e902411887be45]::panicking::panic_bounds_check
                        (uVar13,0x960,&PTR_s_src_sys_rs_00213888);
            }
            puVar11 = (undefined8 *)((long)puVar11 + 1);
            *(undefined1 *)((long)puVar6 + uVar13) = *(undefined1 *)((long)puVar9 + uVar8);
          } while (puVar16 != puVar11);
        }
        iVar5 = (*(code *)PTR_memcmp_00842098)(puVar7,puVar6,0x960);
        if (((A_BASE_0 == (undefined8 *)0x0) || (puVar6 < A_BASE_0)) || (A_END_0 <= puVar6)) {
          free(puVar6);
        }
        else {
          *puVar6 = *(undefined8 *)(in_FS_OFFSET + -0x368);
          *(undefined8 **)(in_FS_OFFSET + -0x368) = puVar6;
        }
        puVar6 = local_58;
        if (((A_BASE_0 == (undefined8 *)0x0) || (puVar9 < A_BASE_0)) || (A_END_0 <= puVar9)) {
          free(puVar9);
        }
        else {
          *puVar9 = *(undefined8 *)(in_FS_OFFSET + -0x368);
          *(undefined8 **)(in_FS_OFFSET + -0x368) = puVar9;
        }
        puVar9 = local_60;
        if (((undefined8 *)((long)A_BASE_0 + -1) < puVar7) && (puVar7 < A_END_0)) {
          *puVar7 = *(undefined8 *)(in_FS_OFFSET + -0x368);
          *(undefined8 **)(in_FS_OFFSET + -0x368) = puVar7;
        }
        else {
          free(puVar7);
        }
        bVar14 = local_99 & iVar5 == 0;
        uVar2 = local_6c & 1;
        local_6c = 0;
      } while (uVar2 != 0);
      if (((A_BASE_0 == (undefined8 *)0x0) || (puVar9 < A_BASE_0)) || (A_END_0 <= puVar9)) {
        free(puVar9);
        if (A_BASE_0 != (undefined8 *)0x0) goto code_r0x006d97e0;
      }
      else {
        *puVar9 = *(undefined8 *)(in_FS_OFFSET + -0x370);
        *(undefined8 **)(in_FS_OFFSET + -0x370) = puVar9;
        if (A_BASE_0 != (undefined8 *)0x0) {
code_r0x006d97e0:
          if ((A_BASE_0 <= local_68) && (local_68 < A_END_0)) {
            *local_68 = *(undefined8 *)(in_FS_OFFSET + -0x370);
            *(undefined8 **)(in_FS_OFFSET + -0x370) = local_68;
            local_78 = local_40;
            if (local_40 == 9) break;
            goto LAB_006d8e28;
          }
        }
      }
      free(local_68);
      local_78 = local_40;
    } while (local_40 != 9);
    puVar16 = local_50;
    if (local_50 == (undefined8 *)0x44c) {
      if (((A_BASE_0 == (undefined8 *)0x0) || (puVar6 < A_BASE_0)) || (A_END_0 <= puVar6)) {
        local_78 = local_40;
        free(puVar6);
      }
      else {
        *puVar6 = *(undefined8 *)(in_FS_OFFSET + -0x368);
        *(undefined8 **)(in_FS_OFFSET + -0x368) = puVar6;
      }
      return bVar14;
    }
  } while( true );
}


// ==== pipeline::sys::on_fault @ 006d9a60 (91 bytes)

/* pipeline[509596c7b52975b2]::sys::on_fault */

void __rustcall pipeline[509596c7b52975b2]::sys::on_fault(void)

{
  write(2,"[v2b] FALLBACK: fault signal\n",0x1d);
  if (EXEC != -1) {
    execve("/proc/self/exe",DAT_00843738,environ);
    execve(DAT_00843778,DAT_00843738,environ);
  }
                    /* WARNING: Subroutine does not return */
  _Exit(3);
}


