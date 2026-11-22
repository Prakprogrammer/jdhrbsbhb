// ==== pipeline::k_ref::days_from_civil @ 006fa3a0 (207 bytes)

/* pipeline[509596c7b52975b2]::k_ref::days_from_civil */

long __rustcall
pipeline[509596c7b52975b2]::k_ref::days_from_civil(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 - (ulong)(param_2 < 3);
  lVar4 = (param_1 % 400 >> 0x3f) + param_1 / 400;
  lVar2 = lVar4 * -400;
  lVar1 = lVar2 + param_1;
  lVar2 = param_1 + lVar2 + 3;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  lVar3 = SUB168(SEXT816(lVar1) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar1;
  return lVar4 * 0x23ab1 + param_3 + (ulong)(((((int)param_2 + 9U) % 0xc) * 0x99 + 2) / 5) +
         (lVar2 >> 2) + lVar1 * 0x16d + ((lVar3 >> 6) - (lVar3 >> 0x3f)) + -0xafa6d;
}


// ==== pipeline::k_ref::parse_id @ 006fa480 (733 bytes)

/* pipeline[509596c7b52975b2]::k_ref::parse_id */

ulong __rustcall
pipeline[509596c7b52975b2]::k_ref::parse_id(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 local_18 [16];
  
  if ((param_4 < param_3) || (param_2 < param_4)) {
                    /* WARNING: Subroutine does not return */
    core[62e902411887be45]::slice::index::slice_index_fail
              (param_3,param_4,param_2,&PTR_s_src_k_ref_rs_00214620);
  }
  uVar10 = param_4 - param_3;
  if (uVar10 == 0) {
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_1 + param_3) == 'u') {
    if (param_3 - param_4 == -0x21) {
      local_18 = ZEXT816(0);
      uVar10 = 0;
      do {
        cVar2 = *(char *)(param_3 + param_1 + 1 + uVar10);
        bVar9 = cVar2 - 0x30;
        if (9 < bVar9) {
          if (5 < (byte)(cVar2 + 0x9fU)) break;
          bVar9 = cVar2 + 0xa9;
        }
        uVar11 = uVar10 >> 4;
        *(ulong *)(local_18 + uVar11 * 8) = (ulong)bVar9 | *(long *)(local_18 + uVar11 * 8) << 4;
        cVar2 = *(char *)(param_3 + param_1 + 2 + uVar10);
        bVar9 = cVar2 - 0x30;
        if (9 < bVar9) {
          if (5 < (byte)(cVar2 + 0x9fU)) break;
          bVar9 = cVar2 + 0xa9;
        }
        uVar10 = uVar10 + 2;
        *(ulong *)(local_18 + uVar11 * 8) = (ulong)bVar9 | *(long *)(local_18 + uVar11 * 8) << 4;
        if (uVar10 == 0x20) {
          return local_18._8_8_ & 0x3fffffffffffffff | 0x4000000000000000;
        }
      } while( true );
    }
    uVar10 = param_4 - param_3;
    uVar11 = uVar10 - 1;
    if (uVar10 < 10 && uVar11 != 0) {
      pcVar7 = (char *)(param_1 + param_3) + 1;
      uVar3 = param_3;
      do {
        uVar3 = uVar3 + 1;
        if (param_4 == uVar3) {
          if ((uVar11 == 1) || (*pcVar7 != '0')) {
            if (param_3 + 1 == param_4) {
              return 0;
            }
            uVar10 = (ulong)((uint)uVar11 & 3);
            if ((param_4 - param_3) - 2 < 3) {
              uVar3 = 0;
            }
            else {
              uVar11 = uVar11 & 0xfffffffffffffffc;
              uVar3 = 0;
              do {
                bVar9 = *pcVar7 - 0x30;
                bVar4 = *pcVar7 + 0xa9;
                if (bVar9 < 10) {
                  bVar4 = bVar9;
                }
                bVar9 = pcVar7[1] - 0x30;
                bVar8 = pcVar7[1] + 0xa9;
                if (bVar9 < 10) {
                  bVar8 = bVar9;
                }
                bVar9 = pcVar7[2] - 0x30;
                bVar5 = pcVar7[2] + 0xa9;
                if (bVar9 < 10) {
                  bVar5 = bVar9;
                }
                pcVar1 = pcVar7 + 3;
                pcVar7 = pcVar7 + 4;
                bVar9 = *pcVar1 - 0x30;
                bVar6 = *pcVar1 + 0xa9;
                if (bVar9 < 10) {
                  bVar6 = bVar9;
                }
                uVar3 = (ulong)bVar6 +
                        ((ulong)bVar5 + ((ulong)bVar8 + ((ulong)bVar4 + uVar3 * 0x24) * 0x24) * 0x24
                        ) * 0x24;
                uVar11 = uVar11 - 4;
              } while (uVar11 != 0);
              if (uVar10 == 0) {
                return uVar3;
              }
            }
            uVar11 = 0;
            do {
              bVar9 = pcVar7[uVar11] - 0x30;
              bVar4 = pcVar7[uVar11] + 0xa9;
              if (bVar9 < 10) {
                bVar4 = bVar9;
              }
              uVar3 = (ulong)bVar4 + uVar3 * 0x24;
              uVar11 = uVar11 + 1;
            } while (uVar10 != uVar11);
            return uVar3;
          }
          break;
        }
      } while ((byte)(*(char *)(param_1 + uVar3) + 0x9fU) < 0x1a ||
               (byte)(*(char *)(param_1 + uVar3) - 0x30U) < 10);
    }
  }
  uVar11 = 0xff;
  if (uVar10 < 0xff) {
    uVar11 = uVar10;
  }
  return uVar11 | param_3 << 8 | 0x8000000000000000;
}


