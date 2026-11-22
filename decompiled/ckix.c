// ==== pipeline::ckix::ck_vec_ix @ 006f9e00 (1422 bytes)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pipeline[509596c7b52975b2]::ckix::ck_vec_ix */

ulong __rustcall
pipeline[509596c7b52975b2]::ckix::ck_vec_ix(long param_1,long param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar68 [32];
  
  lVar12 = param_4[10];
  uVar24 = *(ulong *)(param_2 + 0x6c0);
  if (uVar24 != 0) {
    if (uVar24 < 4) {
      uVar22 = 0;
    }
    else {
      puVar25 = (undefined8 *)(param_2 + 0x30);
      uVar22 = 0;
      do {
        uVar14 = puVar25[-5];
        puVar2 = (undefined8 *)(lVar12 + *(long *)(param_2 + 0x480 + uVar22 * 8) * 0x10);
        *puVar2 = puVar25[-6];
        puVar2[1] = uVar14;
        uVar14 = puVar25[-3];
        puVar2 = (undefined8 *)(lVar12 + *(long *)(param_2 + 0x488 + uVar22 * 8) * 0x10);
        *puVar2 = puVar25[-4];
        puVar2[1] = uVar14;
        uVar14 = puVar25[-1];
        puVar2 = (undefined8 *)(lVar12 + *(long *)(param_2 + 0x490 + uVar22 * 8) * 0x10);
        *puVar2 = puVar25[-2];
        puVar2[1] = uVar14;
        uVar14 = puVar25[1];
        lVar23 = uVar22 * 8;
        uVar22 = uVar22 + 4;
        puVar2 = (undefined8 *)(lVar12 + *(long *)(param_2 + 0x498 + lVar23) * 0x10);
        *puVar2 = *puVar25;
        puVar2[1] = uVar14;
        puVar25 = puVar25 + 8;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar22);
      if ((uVar24 & 3) == 0) goto LAB_006f9ef4;
    }
    lVar23 = uVar22 * 0x10;
    uVar26 = 0;
    do {
      puVar25 = (undefined8 *)(lVar23 + param_2 + uVar26);
      uVar14 = puVar25[1];
      lVar3 = uVar22 * 8;
      uVar22 = uVar22 + 1;
      puVar2 = (undefined8 *)(lVar12 + *(long *)(param_2 + 0x480 + lVar3) * 0x10);
      *puVar2 = *puVar25;
      puVar2[1] = uVar14;
      uVar26 = uVar26 + 0x10;
    } while (((uint)uVar24 & 3) << 4 != uVar26);
  }
LAB_006f9ef4:
  lVar12 = *param_4;
  uVar24 = ~(-1L << (param_3 & 0x3f));
  if (0x3f < param_3) {
    uVar24 = 0xffffffffffffffff;
  }
  if (param_3 == 0) {
    *(undefined8 *)(param_2 + 0x6c0) = 0;
    uVar22 = 0;
    uVar24 = 0;
  }
  else {
    auVar36 = vpbroadcastq_avx512f();
    auVar32._8_8_ = 0;
    auVar32._0_8_ = param_4[3];
    auVar37 = vpbroadcastq_avx512f(auVar32);
    auVar64._8_8_ = param_4[4];
    auVar64._0_8_ = param_4[4];
    auVar38 = vpbroadcastq_avx512f();
    auVar39 = vpbroadcastq_avx512f(auVar64);
    auVar65._8_8_ = param_4[6];
    auVar65._0_8_ = param_4[6];
    auVar66._8_8_ = param_4[8];
    auVar66._0_8_ = param_4[8];
    auVar40 = vpbroadcastq_avx512f(auVar65);
    auVar41 = vpbroadcastq_avx512f(auVar66);
    lVar23 = param_4[9];
    auVar42 = vpbroadcastq_avx512f();
    auVar43 = vpbroadcastq_avx512f();
    auVar31._8_8_ = 0;
    auVar31._0_8_ = DAT_00201b60;
    auVar44 = vpbroadcastq_avx512f(auVar31);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_00201ac0;
    auVar45 = vpbroadcastq_avx512f(auVar4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = DAT_00201ac0;
    auVar46 = vpbroadcastq_avx512f(auVar5);
    uVar22 = 0;
    auVar47 = vpternlogd_avx512f(in_ZMM12,in_ZMM12,in_ZMM12,0xff);
    auVar35._8_8_ = DAT_00201b90;
    auVar35._0_8_ = DAT_00201b90;
    auVar35._16_8_ = DAT_00201b90;
    auVar35._24_8_ = DAT_00201b90;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_00201b28;
    auVar48 = vpbroadcastq_avx512f(auVar6);
    auVar68._8_8_ = DAT_00201e40;
    auVar68._0_8_ = DAT_00201e40;
    auVar68._16_8_ = DAT_00201e40;
    auVar68._24_8_ = DAT_00201e40;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_00201ca0;
    auVar49 = vpbroadcastq_avx512f(auVar7);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = DAT_00201d58;
    auVar50 = vpbroadcastq_avx512f(auVar8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = DAT_00201c50;
    auVar51 = vpbroadcastq_avx512f(auVar9);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = DAT_00201d98;
    auVar52 = vpbroadcastq_avx512f(auVar10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = DAT_00201d10;
    auVar53 = vpbroadcastq_avx512f(auVar11);
    auVar54 = vmovdqa64_avx512f(_DAT_00205b00);
    auVar55 = vmovdqa64_avx512f(_DAT_00205b40);
    uVar19 = 0;
    uVar26 = 0;
    auVar67 = ZEXT1664((undefined1  [16])0x0);
    do {
      uVar21 = uVar26;
      auVar61 = vmovdqa64_avx512f(*(undefined1 (*) [64])(param_1 + 0x200 + uVar19 * 8));
      if (lVar12 == 0) {
        uVar26 = vpcmpuq_avx512f(auVar61,auVar44,1);
        auVar62 = vmovdqa64_avx512f(auVar45);
        auVar63 = vpgatherqq_avx512f(*(undefined8 *)(lVar23 + param_1));
        bVar13 = (bool)((byte)uVar26 & 1);
        auVar56._0_8_ = (ulong)bVar13 * auVar63._0_8_ | (ulong)!bVar13 * auVar62._0_8_;
        bVar13 = (bool)((byte)(uVar26 >> 1) & 1);
        auVar56._8_8_ = (ulong)bVar13 * auVar63._8_8_ | (ulong)!bVar13 * auVar62._8_8_;
        bVar13 = (bool)((byte)(uVar26 >> 2) & 1);
        auVar56._16_8_ = (ulong)bVar13 * auVar63._16_8_ | (ulong)!bVar13 * auVar62._16_8_;
        bVar13 = (bool)((byte)(uVar26 >> 3) & 1);
        auVar56._24_8_ = (ulong)bVar13 * auVar63._24_8_ | (ulong)!bVar13 * auVar62._24_8_;
        bVar13 = (bool)((byte)(uVar26 >> 4) & 1);
        auVar56._32_8_ = (ulong)bVar13 * auVar63._32_8_ | (ulong)!bVar13 * auVar62._32_8_;
        bVar13 = (bool)((byte)(uVar26 >> 5) & 1);
        auVar56._40_8_ = (ulong)bVar13 * auVar63._40_8_ | (ulong)!bVar13 * auVar62._40_8_;
        bVar13 = (bool)((byte)(uVar26 >> 6) & 1);
        auVar56._48_8_ = (ulong)bVar13 * auVar63._48_8_ | (ulong)!bVar13 * auVar62._48_8_;
        auVar56._56_8_ =
             (uVar26 >> 7) * auVar63._56_8_ | (ulong)!SUB81(uVar26 >> 7,0) * auVar62._56_8_;
        auVar62 = vpandq_avx512f(auVar56,auVar46);
        uVar14 = vpcmpq_avx512f(auVar62,auVar45,4);
        bVar30 = (byte)uVar26 & (byte)uVar14;
      }
      else {
        auVar62 = vpsubq_avx512f(auVar61,auVar42);
        uVar14 = vpcmpuq_avx512f(auVar62,auVar43,2);
        bVar30 = (byte)uVar14;
      }
      auVar62 = vmovdqa64_avx512f(*(undefined1 (*) [64])(param_1 + uVar19 * 8));
      auVar62 = vpsubq_avx512f(auVar62,auVar37);
      auVar56 = vmovdqa64_avx512f(*(undefined1 (*) [64])(param_1 + 0x400 + uVar19 * 8));
      auVar63 = vmovdqa64_avx512f(*(undefined1 (*) [64])(param_1 + 0x600 + uVar19 * 8));
      uVar14 = vpcmpq_avx512f(auVar63,auVar47,4);
      uVar15 = vpcmpuq_avx512f(auVar62,auVar39,1);
      bVar29 = bVar30 & (byte)uVar14 & (byte)uVar15;
      auVar33 = vpmullq_avx512vl(auVar63._0_32_,auVar35);
      auVar34 = vextracti64x4_avx512f(auVar63,1);
      auVar34 = vpmullq_avx512vl(auVar34,auVar35);
      auVar57 = vinserti64x4_avx512f(ZEXT3264(auVar33),auVar34,1);
      auVar57 = vpandq_avx512f(auVar57,auVar48);
      auVar58 = vpsrlq_avx512f(auVar57,0x11);
      auVar59 = vpsrlq_avx512f(auVar57,0x22);
      auVar57 = vpternlogq_avx512f(auVar59,auVar57,auVar36 ^ auVar58,0x96);
      auVar33 = vpmullq_avx512vl(auVar57._0_32_,auVar68);
      auVar34 = vextracti64x4_avx512f(auVar57,1);
      auVar34 = vpmullq_avx512vl(auVar34,auVar68);
      auVar57 = vinserti64x4_avx512f(ZEXT3264(auVar33),auVar34,1);
      auVar58 = vpsrlq_avx512f(auVar57,9);
      auVar58 = vpandq_avx512f(auVar58,auVar49);
      auVar57 = vpandq_avx512f(auVar57,auVar50);
      uVar15 = vpcmpuq_avx512f(auVar63,auVar51,1);
      uVar16 = vpcmpuq_avx512f(auVar58,auVar40,1);
      uVar14 = vpcmpq_avx512f(auVar57,auVar52,1);
      auVar33 = vpmullq_avx512vl(auVar56._0_32_,auVar35);
      auVar34 = vextracti64x4_avx512f(auVar56,1);
      auVar34 = vpmullq_avx512vl(auVar34,auVar35);
      auVar63 = vinserti64x4_avx512f(ZEXT3264(auVar33),auVar34,1);
      auVar63 = vpandq_avx512f(auVar63,auVar48);
      auVar59 = vpsrlq_avx512f(auVar63,0x11);
      auVar60 = vpsrlq_avx512f(auVar63,0x22);
      auVar63 = vpternlogq_avx512f(auVar60,auVar63,auVar38 ^ auVar59,0x96);
      auVar33 = vpmullq_avx512vl(auVar63._0_32_,auVar68);
      auVar34 = vextracti64x4_avx512f(auVar63,1);
      auVar34 = vpmullq_avx512vl(auVar34,auVar68);
      auVar63 = vinserti64x4_avx512f(ZEXT3264(auVar33),auVar34,1);
      auVar63 = vpandq_avx512f(auVar63,auVar48);
      uVar17 = vpcmpuq_avx512f(auVar56,auVar51,1);
      uVar18 = vpcmpuq_avx512f(auVar63,auVar41,1);
      bVar28 = (byte)uVar19 & 0x38;
      bVar30 = bVar29 & (byte)uVar17 & (byte)uVar18 & (byte)uVar15 & (byte)uVar16 & (byte)uVar14;
      bVar27 = (byte)(uVar24 >> bVar28);
      bVar20 = bVar30 & bVar27;
      auVar62 = vpsllq_avx512f(auVar62,0x20);
      auVar61 = vpsllq_avx512f(auVar61,4);
      auVar61 = vpternlogq_avx512f(auVar61,auVar57,auVar62,0xfe);
      auVar62 = vporq_avx512f(auVar58,auVar53);
      vpcompressq_avx512vl(auVar61._0_16_);
      lVar3 = (ulong)(bVar20 & 1) * auVar62._0_8_;
      lVar1 = (ulong)(bVar20 >> 1 & 1) * auVar62._8_8_;
      auVar56 = ZEXT1664(CONCAT88(lVar1,lVar3));
      vpcompressq_avx512vl(auVar62._0_16_);
      lVar3 = (ulong)(bVar20 & 1) * lVar3;
      lVar1 = (ulong)(bVar20 >> 1 & 1) * lVar1;
      auVar62 = ZEXT1664(CONCAT88(lVar1,lVar3));
      vpcompressq_avx512vl(auVar63._0_16_);
      auVar61 = vmovdqu64_avx512f(ZEXT1664(CONCAT88((ulong)(bVar20 >> 1 & 1) * lVar1,
                                                    (ulong)(bVar20 & 1) * lVar3)));
      *(undefined1 (*) [64])(param_2 + 0x480 + uVar21 * 8) = auVar61;
      auVar61 = vmovdqa64_avx512f(auVar56);
      auVar61 = vpermt2q_avx512f(auVar61,auVar54,auVar62);
      auVar61 = vmovdqu64_avx512f(auVar61);
      *(undefined1 (*) [64])(param_2 + uVar21 * 0x10) = auVar61;
      auVar61 = vpermt2q_avx512f(auVar56,auVar55,auVar62);
      auVar61 = vmovdqu64_avx512f(auVar61);
      *(undefined1 (*) [64])(param_2 + 0x40 + uVar21 * 0x10) = auVar61;
      auVar61 = vpsubq_avx512f(auVar63,auVar47);
      auVar62 = vpmaxuq_avx512f(auVar67,auVar61);
      auVar33._0_8_ =
           (ulong)(bVar20 & 1) * auVar62._0_8_ | (ulong)!(bool)(bVar20 & 1) * auVar67._0_8_;
      bVar13 = (bool)(bVar20 >> 1 & 1);
      auVar33._8_8_ = (ulong)bVar13 * auVar62._8_8_ | (ulong)!bVar13 * auVar67._8_8_;
      bVar13 = (bool)(bVar20 >> 2 & 1);
      auVar33._16_8_ = (ulong)bVar13 * auVar62._16_8_ | (ulong)!bVar13 * auVar67._16_8_;
      bVar13 = (bool)(bVar20 >> 3 & 1);
      auVar33._24_8_ = (ulong)bVar13 * auVar62._24_8_ | (ulong)!bVar13 * auVar67._24_8_;
      bVar13 = (bool)(bVar20 >> 4 & 1);
      auVar61._32_8_ = (ulong)bVar13 * auVar62._32_8_ | (ulong)!bVar13 * auVar67._32_8_;
      auVar61._0_32_ = auVar33;
      bVar13 = (bool)(bVar20 >> 5 & 1);
      auVar61._40_8_ = (ulong)bVar13 * auVar62._40_8_ | (ulong)!bVar13 * auVar67._40_8_;
      bVar13 = (bool)(bVar20 >> 6 & 1);
      auVar61._48_8_ = (ulong)bVar13 * auVar62._48_8_ | (ulong)!bVar13 * auVar67._48_8_;
      auVar61._56_8_ =
           (ulong)(bVar20 >> 7) * auVar62._56_8_ | (ulong)!(bool)(bVar20 >> 7) * auVar67._56_8_;
      uVar26 = uVar21 + (uint)POPCOUNT((uint)bVar20);
      uVar22 = uVar22 | (ulong)((bVar29 ^ bVar30) & bVar27) << bVar28;
      uVar19 = uVar19 + 8;
      auVar67 = auVar61;
    } while (uVar19 < param_3);
    auVar35 = vextracti64x4_avx512f(auVar61,1);
    auVar35 = vpmaxuq_avx512vl(auVar33,auVar35);
    auVar31 = vpmaxuq_avx512vl(auVar35._0_16_,auVar35._16_16_);
    auVar32 = vpshufd_avx(auVar31,0xee);
    auVar32 = vpmaxuq_avx512vl(auVar31,auVar32);
    uVar24 = auVar32._0_8_;
    *(ulong *)(param_2 + 0x6c0) = uVar26;
    if (uVar26 != 0) {
      uVar19 = (ulong)((uint)uVar26 & 7);
      if (6 < (uVar21 + (uint)POPCOUNT((uint)bVar20)) - 1) {
        uVar21 = 0;
        do {
          uVar21 = uVar21 + 8;
        } while ((uVar26 & 0xfffffffffffffff8) != uVar21);
        if (uVar19 == 0) goto LAB_006fa375;
      }
      uVar26 = 0;
      do {
        uVar26 = uVar26 + 1;
      } while (uVar19 != uVar26);
    }
  }
LAB_006fa375:
  if (uVar24 < *(ulong *)(param_2 + 0x6c8)) {
    uVar24 = *(ulong *)(param_2 + 0x6c8);
  }
  *(ulong *)(param_2 + 0x6c8) = uVar24;
  return uVar22;
}


