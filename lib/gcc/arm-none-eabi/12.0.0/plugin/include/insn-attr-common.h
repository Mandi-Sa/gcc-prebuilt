/* Generated automatically by the program `genattr-common'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_COMMON_H
#define GCC_INSN_ATTR_COMMON_H

enum attr_nonce_enabled {NONCE_ENABLED_NO, NONCE_ENABLED_YES};
enum attr_ce_enabled {CE_ENABLED_NO, CE_ENABLED_YES};
enum attr_tune {TUNE_ARM8, TUNE_ARM810, TUNE_STRONGARM, TUNE_FA526, TUNE_FA626, TUNE_ARM7TDMI, TUNE_ARM710T, TUNE_ARM9, TUNE_ARM9TDMI, TUNE_ARM920T, TUNE_ARM10TDMI, TUNE_ARM9E, TUNE_ARM10E, TUNE_XSCALE, TUNE_IWMMXT, TUNE_IWMMXT2, TUNE_FA606TE, TUNE_FA626TE, TUNE_FMP626, TUNE_FA726TE, TUNE_ARM926EJS, TUNE_ARM1026EJS, TUNE_ARM1136JS, TUNE_ARM1136JFS, TUNE_ARM1176JZS, TUNE_ARM1176JZFS, TUNE_MPCORENOVFP, TUNE_MPCORE, TUNE_ARM1156T2S, TUNE_ARM1156T2FS, TUNE_CORTEXM1, TUNE_CORTEXM0, TUNE_CORTEXM0PLUS, TUNE_CORTEXM1SMALLMULTIPLY, TUNE_CORTEXM0SMALLMULTIPLY, TUNE_CORTEXM0PLUSSMALLMULTIPLY, TUNE_GENERICV7A, TUNE_CORTEXA5, TUNE_CORTEXA7, TUNE_CORTEXA8, TUNE_CORTEXA9, TUNE_CORTEXA12, TUNE_CORTEXA15, TUNE_CORTEXA17, TUNE_CORTEXR4, TUNE_CORTEXR4F, TUNE_CORTEXR5, TUNE_CORTEXR7, TUNE_CORTEXR8, TUNE_CORTEXM7, TUNE_CORTEXM4, TUNE_CORTEXM3, TUNE_MARVELL_PJ4, TUNE_CORTEXA15CORTEXA7, TUNE_CORTEXA17CORTEXA7, TUNE_CORTEXA32, TUNE_CORTEXA35, TUNE_CORTEXA53, TUNE_CORTEXA57, TUNE_CORTEXA72, TUNE_CORTEXA73, TUNE_EXYNOSM1, TUNE_XGENE1, TUNE_CORTEXA57CORTEXA53, TUNE_CORTEXA72CORTEXA53, TUNE_CORTEXA73CORTEXA35, TUNE_CORTEXA73CORTEXA53, TUNE_CORTEXA55, TUNE_CORTEXA75, TUNE_CORTEXA76, TUNE_CORTEXA76AE, TUNE_CORTEXA77, TUNE_CORTEXA78, TUNE_CORTEXA78AE, TUNE_CORTEXA78C, TUNE_CORTEXA710, TUNE_CORTEXX1, TUNE_NEOVERSEN1, TUNE_CORTEXA75CORTEXA55, TUNE_CORTEXA76CORTEXA55, TUNE_NEOVERSEV1, TUNE_NEOVERSEN2, TUNE_CORTEXM23, TUNE_CORTEXM33, TUNE_CORTEXM35P, TUNE_CORTEXM55, TUNE_CORTEXR52, TUNE_CORTEXR52PLUS};
enum attr_autodetect_type {AUTODETECT_TYPE_NONE, AUTODETECT_TYPE_ALU_SHIFT_LSL_OP2, AUTODETECT_TYPE_ALU_SHIFT_LSR_OP2, AUTODETECT_TYPE_ALU_SHIFT_ASR_OP2, AUTODETECT_TYPE_ALU_SHIFT_MUL_OP3, AUTODETECT_TYPE_ALU_SHIFT_OPERATOR1, AUTODETECT_TYPE_ALU_SHIFT_OPERATOR2, AUTODETECT_TYPE_ALU_SHIFT_OPERATOR3, AUTODETECT_TYPE_ALU_SHIFT_OPERATOR4};
enum attr_type {TYPE_ADC_IMM, TYPE_ADC_REG, TYPE_ADCS_IMM, TYPE_ADCS_REG, TYPE_ADR, TYPE_ALU_EXT, TYPE_ALU_IMM, TYPE_ALU_SREG, TYPE_ALU_SHIFT_IMM_LSL_1TO4, TYPE_ALU_SHIFT_IMM_OTHER, TYPE_ALU_SHIFT_REG, TYPE_ALU_DSP_REG, TYPE_ALUS_EXT, TYPE_ALUS_IMM, TYPE_ALUS_SREG, TYPE_ALUS_SHIFT_IMM, TYPE_ALUS_SHIFT_REG, TYPE_BFM, TYPE_BFX, TYPE_BLOCK, TYPE_BRANCH, TYPE_CALL, TYPE_CLZ, TYPE_NO_INSN, TYPE_CSEL, TYPE_CRC, TYPE_EXTEND, TYPE_F_CVT, TYPE_F_CVTF2I, TYPE_F_CVTI2F, TYPE_F_FLAG, TYPE_F_LOADD, TYPE_F_LOADS, TYPE_F_MCR, TYPE_F_MCRR, TYPE_F_MINMAXD, TYPE_F_MINMAXS, TYPE_F_MRC, TYPE_F_MRRC, TYPE_F_RINTD, TYPE_F_RINTS, TYPE_F_STORED, TYPE_F_STORES, TYPE_FADDD, TYPE_FADDS, TYPE_FCCMPD, TYPE_FCCMPS, TYPE_FCMPD, TYPE_FCMPS, TYPE_FCONSTD, TYPE_FCONSTS, TYPE_FCSEL, TYPE_FDIVD, TYPE_FDIVS, TYPE_FFARITHD, TYPE_FFARITHS, TYPE_FFMAD, TYPE_FFMAS, TYPE_FLOAT, TYPE_FMACD, TYPE_FMACS, TYPE_FMOV, TYPE_FMULD, TYPE_FMULS, TYPE_FSQRTS, TYPE_FSQRTD, TYPE_LOAD_ACQ, TYPE_LOAD_BYTE, TYPE_LOAD_4, TYPE_LOAD_8, TYPE_LOAD_12, TYPE_LOAD_16, TYPE_LOGIC_IMM, TYPE_LOGIC_REG, TYPE_LOGIC_SHIFT_IMM, TYPE_LOGIC_SHIFT_REG, TYPE_LOGICS_IMM, TYPE_LOGICS_REG, TYPE_LOGICS_SHIFT_IMM, TYPE_LOGICS_SHIFT_REG, TYPE_MLA, TYPE_MLAS, TYPE_MOV_IMM, TYPE_MOV_REG, TYPE_MOV_SHIFT, TYPE_MOV_SHIFT_REG, TYPE_MRS, TYPE_MUL, TYPE_MULS, TYPE_MULTIPLE, TYPE_MVN_IMM, TYPE_MVN_REG, TYPE_MVN_SHIFT, TYPE_MVN_SHIFT_REG, TYPE_NOP, TYPE_RBIT, TYPE_REV, TYPE_ROTATE_IMM, TYPE_SDIV, TYPE_SHIFT_IMM, TYPE_SHIFT_REG, TYPE_SMLAD, TYPE_SMLADX, TYPE_SMLAL, TYPE_SMLALD, TYPE_SMLALS, TYPE_SMLALXY, TYPE_SMLAWX, TYPE_SMLAWY, TYPE_SMLAXY, TYPE_SMLSD, TYPE_SMLSDX, TYPE_SMLSLD, TYPE_SMMLA, TYPE_SMMUL, TYPE_SMMULR, TYPE_SMUAD, TYPE_SMUADX, TYPE_SMULL, TYPE_SMULLS, TYPE_SMULWY, TYPE_SMULXY, TYPE_SMUSD, TYPE_SMUSDX, TYPE_STORE_REL, TYPE_STORE_4, TYPE_STORE_8, TYPE_STORE_12, TYPE_STORE_16, TYPE_TRAP, TYPE_UDIV, TYPE_UMAAL, TYPE_UMLAL, TYPE_UMLALS, TYPE_UMULL, TYPE_UMULLS, TYPE_UNTYPED, TYPE_WMMX_TANDC, TYPE_WMMX_TBCST, TYPE_WMMX_TEXTRC, TYPE_WMMX_TEXTRM, TYPE_WMMX_TINSR, TYPE_WMMX_TMCR, TYPE_WMMX_TMCRR, TYPE_WMMX_TMIA, TYPE_WMMX_TMIAPH, TYPE_WMMX_TMIAXY, TYPE_WMMX_TMRC, TYPE_WMMX_TMRRC, TYPE_WMMX_TMOVMSK, TYPE_WMMX_TORC, TYPE_WMMX_TORVSC, TYPE_WMMX_WABS, TYPE_WMMX_WABSDIFF, TYPE_WMMX_WACC, TYPE_WMMX_WADD, TYPE_WMMX_WADDBHUS, TYPE_WMMX_WADDSUBHX, TYPE_WMMX_WALIGNI, TYPE_WMMX_WALIGNR, TYPE_WMMX_WAND, TYPE_WMMX_WANDN, TYPE_WMMX_WAVG2, TYPE_WMMX_WAVG4, TYPE_WMMX_WCMPEQ, TYPE_WMMX_WCMPGT, TYPE_WMMX_WMAC, TYPE_WMMX_WMADD, TYPE_WMMX_WMAX, TYPE_WMMX_WMERGE, TYPE_WMMX_WMIAWXY, TYPE_WMMX_WMIAXY, TYPE_WMMX_WMIN, TYPE_WMMX_WMOV, TYPE_WMMX_WMUL, TYPE_WMMX_WMULW, TYPE_WMMX_WLDR, TYPE_WMMX_WOR, TYPE_WMMX_WPACK, TYPE_WMMX_WQMIAXY, TYPE_WMMX_WQMULM, TYPE_WMMX_WQMULWM, TYPE_WMMX_WROR, TYPE_WMMX_WSAD, TYPE_WMMX_WSHUFH, TYPE_WMMX_WSLL, TYPE_WMMX_WSRA, TYPE_WMMX_WSRL, TYPE_WMMX_WSTR, TYPE_WMMX_WSUB, TYPE_WMMX_WSUBADDHX, TYPE_WMMX_WUNPCKEH, TYPE_WMMX_WUNPCKEL, TYPE_WMMX_WUNPCKIH, TYPE_WMMX_WUNPCKIL, TYPE_WMMX_WXOR, TYPE_NEON_ADD, TYPE_NEON_ADD_Q, TYPE_NEON_ADD_WIDEN, TYPE_NEON_ADD_LONG, TYPE_NEON_QADD, TYPE_NEON_QADD_Q, TYPE_NEON_ADD_HALVE, TYPE_NEON_ADD_HALVE_Q, TYPE_NEON_ADD_HALVE_NARROW_Q, TYPE_NEON_SUB, TYPE_NEON_SUB_Q, TYPE_NEON_SUB_WIDEN, TYPE_NEON_SUB_LONG, TYPE_NEON_QSUB, TYPE_NEON_QSUB_Q, TYPE_NEON_SUB_HALVE, TYPE_NEON_SUB_HALVE_Q, TYPE_NEON_SUB_HALVE_NARROW_Q, TYPE_NEON_FCADD, TYPE_NEON_FCMLA, TYPE_NEON_ABS, TYPE_NEON_ABS_Q, TYPE_NEON_DOT, TYPE_NEON_DOT_Q, TYPE_NEON_NEG, TYPE_NEON_NEG_Q, TYPE_NEON_QNEG, TYPE_NEON_QNEG_Q, TYPE_NEON_QABS, TYPE_NEON_QABS_Q, TYPE_NEON_ABD, TYPE_NEON_ABD_Q, TYPE_NEON_ABD_LONG, TYPE_NEON_MINMAX, TYPE_NEON_MINMAX_Q, TYPE_NEON_COMPARE, TYPE_NEON_COMPARE_Q, TYPE_NEON_COMPARE_ZERO, TYPE_NEON_COMPARE_ZERO_Q, TYPE_NEON_ARITH_ACC, TYPE_NEON_ARITH_ACC_Q, TYPE_NEON_REDUC_ADD, TYPE_NEON_REDUC_ADD_Q, TYPE_NEON_REDUC_ADD_LONG, TYPE_NEON_REDUC_ADD_ACC, TYPE_NEON_REDUC_ADD_ACC_Q, TYPE_NEON_REDUC_MINMAX, TYPE_NEON_REDUC_MINMAX_Q, TYPE_NEON_LOGIC, TYPE_NEON_LOGIC_Q, TYPE_NEON_TST, TYPE_NEON_TST_Q, TYPE_NEON_SHIFT_IMM, TYPE_NEON_SHIFT_IMM_Q, TYPE_NEON_SHIFT_IMM_NARROW_Q, TYPE_NEON_SHIFT_IMM_LONG, TYPE_NEON_SHIFT_REG, TYPE_NEON_SHIFT_REG_Q, TYPE_NEON_SHIFT_ACC, TYPE_NEON_SHIFT_ACC_Q, TYPE_NEON_SAT_SHIFT_IMM, TYPE_NEON_SAT_SHIFT_IMM_Q, TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q, TYPE_NEON_SAT_SHIFT_REG, TYPE_NEON_SAT_SHIFT_REG_Q, TYPE_NEON_INS, TYPE_NEON_INS_Q, TYPE_NEON_MOVE, TYPE_NEON_MOVE_Q, TYPE_NEON_MOVE_NARROW_Q, TYPE_NEON_PERMUTE, TYPE_NEON_PERMUTE_Q, TYPE_NEON_ZIP, TYPE_NEON_ZIP_Q, TYPE_NEON_TBL1, TYPE_NEON_TBL1_Q, TYPE_NEON_TBL2, TYPE_NEON_TBL2_Q, TYPE_NEON_TBL3, TYPE_NEON_TBL3_Q, TYPE_NEON_TBL4, TYPE_NEON_TBL4_Q, TYPE_NEON_BSL, TYPE_NEON_BSL_Q, TYPE_NEON_CLS, TYPE_NEON_CLS_Q, TYPE_NEON_CNT, TYPE_NEON_CNT_Q, TYPE_NEON_DUP, TYPE_NEON_DUP_Q, TYPE_NEON_EXT, TYPE_NEON_EXT_Q, TYPE_NEON_RBIT, TYPE_NEON_RBIT_Q, TYPE_NEON_REV, TYPE_NEON_REV_Q, TYPE_NEON_MUL_B, TYPE_NEON_MUL_B_Q, TYPE_NEON_MUL_H, TYPE_NEON_MUL_H_Q, TYPE_NEON_MUL_S, TYPE_NEON_MUL_S_Q, TYPE_NEON_MUL_B_LONG, TYPE_NEON_MUL_H_LONG, TYPE_NEON_MUL_S_LONG, TYPE_NEON_MUL_D_LONG, TYPE_NEON_MUL_H_SCALAR, TYPE_NEON_MUL_H_SCALAR_Q, TYPE_NEON_MUL_S_SCALAR, TYPE_NEON_MUL_S_SCALAR_Q, TYPE_NEON_MUL_H_SCALAR_LONG, TYPE_NEON_MUL_S_SCALAR_LONG, TYPE_NEON_SAT_MUL_B, TYPE_NEON_SAT_MUL_B_Q, TYPE_NEON_SAT_MUL_H, TYPE_NEON_SAT_MUL_H_Q, TYPE_NEON_SAT_MUL_S, TYPE_NEON_SAT_MUL_S_Q, TYPE_NEON_SAT_MUL_B_LONG, TYPE_NEON_SAT_MUL_H_LONG, TYPE_NEON_SAT_MUL_S_LONG, TYPE_NEON_SAT_MUL_H_SCALAR, TYPE_NEON_SAT_MUL_H_SCALAR_Q, TYPE_NEON_SAT_MUL_S_SCALAR, TYPE_NEON_SAT_MUL_S_SCALAR_Q, TYPE_NEON_SAT_MUL_H_SCALAR_LONG, TYPE_NEON_SAT_MUL_S_SCALAR_LONG, TYPE_NEON_MLA_B, TYPE_NEON_MLA_B_Q, TYPE_NEON_MLA_H, TYPE_NEON_MLA_H_Q, TYPE_NEON_MLA_S, TYPE_NEON_MLA_S_Q, TYPE_NEON_MLA_B_LONG, TYPE_NEON_MLA_H_LONG, TYPE_NEON_MLA_S_LONG, TYPE_NEON_MLA_H_SCALAR, TYPE_NEON_MLA_H_SCALAR_Q, TYPE_NEON_MLA_S_SCALAR, TYPE_NEON_MLA_S_SCALAR_Q, TYPE_NEON_MLA_H_SCALAR_LONG, TYPE_NEON_MLA_S_SCALAR_LONG, TYPE_NEON_SAT_MLA_B_LONG, TYPE_NEON_SAT_MLA_H_LONG, TYPE_NEON_SAT_MLA_S_LONG, TYPE_NEON_SAT_MLA_H_SCALAR_LONG, TYPE_NEON_SAT_MLA_S_SCALAR_LONG, TYPE_NEON_TO_GP, TYPE_NEON_TO_GP_Q, TYPE_NEON_FROM_GP, TYPE_NEON_FROM_GP_Q, TYPE_NEON_LDR, TYPE_NEON_LDP, TYPE_NEON_LDP_Q, TYPE_NEON_LOAD1_1REG, TYPE_NEON_LOAD1_1REG_Q, TYPE_NEON_LOAD1_2REG, TYPE_NEON_LOAD1_2REG_Q, TYPE_NEON_LOAD1_3REG, TYPE_NEON_LOAD1_3REG_Q, TYPE_NEON_LOAD1_4REG, TYPE_NEON_LOAD1_4REG_Q, TYPE_NEON_LOAD1_ALL_LANES, TYPE_NEON_LOAD1_ALL_LANES_Q, TYPE_NEON_LOAD1_ONE_LANE, TYPE_NEON_LOAD1_ONE_LANE_Q, TYPE_NEON_LOAD2_2REG, TYPE_NEON_LOAD2_2REG_Q, TYPE_NEON_LOAD2_4REG, TYPE_NEON_LOAD2_4REG_Q, TYPE_NEON_LOAD2_ALL_LANES, TYPE_NEON_LOAD2_ALL_LANES_Q, TYPE_NEON_LOAD2_ONE_LANE, TYPE_NEON_LOAD2_ONE_LANE_Q, TYPE_NEON_LOAD3_3REG, TYPE_NEON_LOAD3_3REG_Q, TYPE_NEON_LOAD3_ALL_LANES, TYPE_NEON_LOAD3_ALL_LANES_Q, TYPE_NEON_LOAD3_ONE_LANE, TYPE_NEON_LOAD3_ONE_LANE_Q, TYPE_NEON_LOAD4_4REG, TYPE_NEON_LOAD4_4REG_Q, TYPE_NEON_LOAD4_ALL_LANES, TYPE_NEON_LOAD4_ALL_LANES_Q, TYPE_NEON_LOAD4_ONE_LANE, TYPE_NEON_LOAD4_ONE_LANE_Q, TYPE_NEON_STR, TYPE_NEON_STP, TYPE_NEON_STP_Q, TYPE_NEON_STORE1_1REG, TYPE_NEON_STORE1_1REG_Q, TYPE_NEON_STORE1_2REG, TYPE_NEON_STORE1_2REG_Q, TYPE_NEON_STORE1_3REG, TYPE_NEON_STORE1_3REG_Q, TYPE_NEON_STORE1_4REG, TYPE_NEON_STORE1_4REG_Q, TYPE_NEON_STORE1_ONE_LANE, TYPE_NEON_STORE1_ONE_LANE_Q, TYPE_NEON_STORE2_2REG, TYPE_NEON_STORE2_2REG_Q, TYPE_NEON_STORE2_4REG, TYPE_NEON_STORE2_4REG_Q, TYPE_NEON_STORE2_ONE_LANE, TYPE_NEON_STORE2_ONE_LANE_Q, TYPE_NEON_STORE3_3REG, TYPE_NEON_STORE3_3REG_Q, TYPE_NEON_STORE3_ONE_LANE, TYPE_NEON_STORE3_ONE_LANE_Q, TYPE_NEON_STORE4_4REG, TYPE_NEON_STORE4_4REG_Q, TYPE_NEON_STORE4_ONE_LANE, TYPE_NEON_STORE4_ONE_LANE_Q, TYPE_NEON_FP_ABS_S, TYPE_NEON_FP_ABS_S_Q, TYPE_NEON_FP_ABS_D, TYPE_NEON_FP_ABS_D_Q, TYPE_NEON_FP_NEG_S, TYPE_NEON_FP_NEG_S_Q, TYPE_NEON_FP_NEG_D, TYPE_NEON_FP_NEG_D_Q, TYPE_NEON_FP_ABD_S, TYPE_NEON_FP_ABD_S_Q, TYPE_NEON_FP_ABD_D, TYPE_NEON_FP_ABD_D_Q, TYPE_NEON_FP_ADDSUB_S, TYPE_NEON_FP_ADDSUB_S_Q, TYPE_NEON_FP_ADDSUB_D, TYPE_NEON_FP_ADDSUB_D_Q, TYPE_NEON_FP_COMPARE_S, TYPE_NEON_FP_COMPARE_S_Q, TYPE_NEON_FP_COMPARE_D, TYPE_NEON_FP_COMPARE_D_Q, TYPE_NEON_FP_MINMAX_S, TYPE_NEON_FP_MINMAX_S_Q, TYPE_NEON_FP_MINMAX_D, TYPE_NEON_FP_MINMAX_D_Q, TYPE_NEON_FP_REDUC_ADD_S, TYPE_NEON_FP_REDUC_ADD_S_Q, TYPE_NEON_FP_REDUC_ADD_D, TYPE_NEON_FP_REDUC_ADD_D_Q, TYPE_NEON_FP_REDUC_MINMAX_S, TYPE_NEON_FP_REDUC_MINMAX_S_Q, TYPE_NEON_FP_REDUC_MINMAX_D, TYPE_NEON_FP_REDUC_MINMAX_D_Q, TYPE_NEON_FP_CVT_NARROW_S_Q, TYPE_NEON_FP_CVT_NARROW_D_Q, TYPE_NEON_FP_CVT_WIDEN_H, TYPE_NEON_FP_CVT_WIDEN_S, TYPE_NEON_FP_TO_INT_S, TYPE_NEON_FP_TO_INT_S_Q, TYPE_NEON_FP_TO_INT_D, TYPE_NEON_FP_TO_INT_D_Q, TYPE_NEON_INT_TO_FP_S, TYPE_NEON_INT_TO_FP_S_Q, TYPE_NEON_INT_TO_FP_D, TYPE_NEON_INT_TO_FP_D_Q, TYPE_NEON_FP_ROUND_S, TYPE_NEON_FP_ROUND_S_Q, TYPE_NEON_FP_ROUND_D, TYPE_NEON_FP_ROUND_D_Q, TYPE_NEON_FP_RECPE_S, TYPE_NEON_FP_RECPE_S_Q, TYPE_NEON_FP_RECPE_D, TYPE_NEON_FP_RECPE_D_Q, TYPE_NEON_FP_RECPS_S, TYPE_NEON_FP_RECPS_S_Q, TYPE_NEON_FP_RECPS_D, TYPE_NEON_FP_RECPS_D_Q, TYPE_NEON_FP_RECPX_S, TYPE_NEON_FP_RECPX_S_Q, TYPE_NEON_FP_RECPX_D, TYPE_NEON_FP_RECPX_D_Q, TYPE_NEON_FP_RSQRTE_S, TYPE_NEON_FP_RSQRTE_S_Q, TYPE_NEON_FP_RSQRTE_D, TYPE_NEON_FP_RSQRTE_D_Q, TYPE_NEON_FP_RSQRTS_S, TYPE_NEON_FP_RSQRTS_S_Q, TYPE_NEON_FP_RSQRTS_D, TYPE_NEON_FP_RSQRTS_D_Q, TYPE_NEON_FP_MUL_S, TYPE_NEON_FP_MUL_S_Q, TYPE_NEON_FP_MUL_S_SCALAR, TYPE_NEON_FP_MUL_S_SCALAR_Q, TYPE_NEON_FP_MUL_D, TYPE_NEON_FP_MUL_D_Q, TYPE_NEON_FP_MUL_D_SCALAR_Q, TYPE_NEON_FP_MLA_S, TYPE_NEON_FP_MLA_S_Q, TYPE_NEON_FP_MLA_S_SCALAR, TYPE_NEON_FP_MLA_S_SCALAR_Q, TYPE_NEON_FP_MLA_D, TYPE_NEON_FP_MLA_D_Q, TYPE_NEON_FP_MLA_D_SCALAR_Q, TYPE_NEON_FP_SQRT_S, TYPE_NEON_FP_SQRT_S_Q, TYPE_NEON_FP_SQRT_D, TYPE_NEON_FP_SQRT_D_Q, TYPE_NEON_FP_DIV_S, TYPE_NEON_FP_DIV_S_Q, TYPE_NEON_FP_DIV_D, TYPE_NEON_FP_DIV_D_Q, TYPE_CRYPTO_AESE, TYPE_CRYPTO_AESMC, TYPE_CRYPTO_SHA1_XOR, TYPE_CRYPTO_SHA1_FAST, TYPE_CRYPTO_SHA1_SLOW, TYPE_CRYPTO_SHA256_FAST, TYPE_CRYPTO_SHA256_SLOW, TYPE_CRYPTO_PMULL, TYPE_CRYPTO_SHA512, TYPE_CRYPTO_SHA3, TYPE_CRYPTO_SM3, TYPE_CRYPTO_SM4, TYPE_COPROC, TYPE_TME, TYPE_MEMTAG, TYPE_MVE_MOVE, TYPE_MVE_STORE, TYPE_MVE_LOAD};
enum attr_mul32 {MUL32_NO, MUL32_YES};
enum attr_widen_mul64 {WIDEN_MUL64_NO, WIDEN_MUL64_YES};
enum attr_is_neon_type {IS_NEON_TYPE_YES, IS_NEON_TYPE_NO};
enum attr_is_mve_type {IS_MVE_TYPE_YES, IS_MVE_TYPE_NO};
enum attr_is_thumb {IS_THUMB_YES, IS_THUMB_NO};
enum attr_is_arch6 {IS_ARCH6_NO, IS_ARCH6_YES};
enum attr_is_thumb1 {IS_THUMB1_YES, IS_THUMB1_NO};
enum attr_predicable_short_it {PREDICABLE_SHORT_IT_NO, PREDICABLE_SHORT_IT_YES};
enum attr_enabled_for_short_it {ENABLED_FOR_SHORT_IT_NO, ENABLED_FOR_SHORT_IT_YES};
enum attr_required_for_purecode {REQUIRED_FOR_PURECODE_NO, REQUIRED_FOR_PURECODE_YES};
enum attr_fp {FP_NO, FP_YES};
enum attr_fpu {FPU_NONE, FPU_VFP};
enum attr_predicated {PREDICATED_YES, PREDICATED_NO};
enum attr_arch {ARCH_ANY, ARCH_A, ARCH_T, ARCH_32, ARCH_T1, ARCH_T2, ARCH_V6, ARCH_NOV6, ARCH_V6T2, ARCH_V8MB, ARCH_FIX_VLLDM, ARCH_IWMMXT, ARCH_IWMMXT2, ARCH_ARMV6_OR_VFPV3, ARCH_NEON, ARCH_MVE};
enum attr_arch_enabled {ARCH_ENABLED_NO, ARCH_ENABLED_YES};
enum attr_opt {OPT_ANY, OPT_SPEED, OPT_SIZE};
enum attr_opt_enabled {OPT_ENABLED_NO, OPT_ENABLED_YES};
enum attr_use_literal_pool {USE_LITERAL_POOL_NO, USE_LITERAL_POOL_YES};
enum attr_enabled {ENABLED_NO, ENABLED_YES};
enum attr_ldsched {LDSCHED_NO, LDSCHED_YES};
enum attr_conds {CONDS_USE, CONDS_SET, CONDS_CLOB, CONDS_UNCONDITIONAL, CONDS_NOCOND};
enum attr_predicable {PREDICABLE_NO, PREDICABLE_YES};
enum attr_model_wbuf {MODEL_WBUF_NO, MODEL_WBUF_YES};
enum attr_write_conflict {WRITE_CONFLICT_NO, WRITE_CONFLICT_YES};
enum attr_core_cycles {CORE_CYCLES_SINGLE, CORE_CYCLES_MULTI};
enum attr_far_jump {FAR_JUMP_YES, FAR_JUMP_NO};
enum attr_tune_cortexr4 {TUNE_CORTEXR4_YES, TUNE_CORTEXR4_NO};
enum attr_generic_sched {GENERIC_SCHED_YES, GENERIC_SCHED_NO};
enum attr_generic_vfp {GENERIC_VFP_YES, GENERIC_VFP_NO};
enum attr_marvell_f_iwmmxt {MARVELL_F_IWMMXT_YES, MARVELL_F_IWMMXT_NO};
enum attr_wmmxt_shift {WMMXT_SHIFT_YES, WMMXT_SHIFT_NO};
enum attr_wmmxt_pack {WMMXT_PACK_YES, WMMXT_PACK_NO};
enum attr_wmmxt_mult_c1 {WMMXT_MULT_C1_YES, WMMXT_MULT_C1_NO};
enum attr_wmmxt_mult_c2 {WMMXT_MULT_C2_YES, WMMXT_MULT_C2_NO};
enum attr_wmmxt_alu_c1 {WMMXT_ALU_C1_YES, WMMXT_ALU_C1_NO};
enum attr_wmmxt_alu_c2 {WMMXT_ALU_C2_YES, WMMXT_ALU_C2_NO};
enum attr_wmmxt_alu_c3 {WMMXT_ALU_C3_YES, WMMXT_ALU_C3_NO};
enum attr_wmmxt_transfer_c1 {WMMXT_TRANSFER_C1_YES, WMMXT_TRANSFER_C1_NO};
enum attr_wmmxt_transfer_c2 {WMMXT_TRANSFER_C2_YES, WMMXT_TRANSFER_C2_NO};
enum attr_wmmxt_transfer_c3 {WMMXT_TRANSFER_C3_YES, WMMXT_TRANSFER_C3_NO};
enum attr_vfp10 {VFP10_YES, VFP10_NO};
enum attr_cortex_a7_neon_type {CORTEX_A7_NEON_TYPE_NEON_MUL, CORTEX_A7_NEON_TYPE_NEON_MLA, CORTEX_A7_NEON_TYPE_NEON_OTHER};
enum attr_cortex_a8_neon_type {CORTEX_A8_NEON_TYPE_NEON_INT_1, CORTEX_A8_NEON_TYPE_NEON_INT_2, CORTEX_A8_NEON_TYPE_NEON_INT_3, CORTEX_A8_NEON_TYPE_NEON_INT_4, CORTEX_A8_NEON_TYPE_NEON_INT_5, CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS, CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q, CORTEX_A8_NEON_TYPE_NEON_VABA, CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ, CORTEX_A8_NEON_TYPE_NEON_VMOV, CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG, CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32, CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR, CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG, CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16, CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG, CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR, CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR, CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR, CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR, CORTEX_A8_NEON_TYPE_NEON_SHIFT_1, CORTEX_A8_NEON_TYPE_NEON_SHIFT_2, CORTEX_A8_NEON_TYPE_NEON_SHIFT_3, CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ, CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA, CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD, CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ, CORTEX_A8_NEON_TYPE_NEON_FP_VSUM, CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD, CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD, CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD, CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ, CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR, CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR, CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD, CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ, CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE, CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE, CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE, CORTEX_A8_NEON_TYPE_NEON_LDR, CORTEX_A8_NEON_TYPE_NEON_STR, CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS, CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS, CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES, CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS, CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4, CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS, CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS, CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4, CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE, CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE, CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE, CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE, CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES, CORTEX_A8_NEON_TYPE_NEON_MCR, CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR, CORTEX_A8_NEON_TYPE_NEON_MRC, CORTEX_A8_NEON_TYPE_NEON_MRRC, CORTEX_A8_NEON_TYPE_NEON_LDM_2, CORTEX_A8_NEON_TYPE_NEON_STM_2, CORTEX_A8_NEON_TYPE_NONE, CORTEX_A8_NEON_TYPE_UNKNOWN};
enum attr_cortex_a9_neon_type {CORTEX_A9_NEON_TYPE_NEON_INT_1, CORTEX_A9_NEON_TYPE_NEON_INT_2, CORTEX_A9_NEON_TYPE_NEON_INT_3, CORTEX_A9_NEON_TYPE_NEON_INT_4, CORTEX_A9_NEON_TYPE_NEON_INT_5, CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS, CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q, CORTEX_A9_NEON_TYPE_NEON_VABA, CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ, CORTEX_A9_NEON_TYPE_NEON_VMOV, CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG, CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32, CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR, CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG, CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16, CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG, CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR, CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR, CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR, CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR, CORTEX_A9_NEON_TYPE_NEON_SHIFT_1, CORTEX_A9_NEON_TYPE_NEON_SHIFT_2, CORTEX_A9_NEON_TYPE_NEON_SHIFT_3, CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ, CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA, CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD, CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ, CORTEX_A9_NEON_TYPE_NEON_FP_VSUM, CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD, CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD, CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD, CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ, CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR, CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR, CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD, CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ, CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE, CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE, CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE, CORTEX_A9_NEON_TYPE_NEON_LDR, CORTEX_A9_NEON_TYPE_NEON_STR, CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS, CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS, CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES, CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS, CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4, CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS, CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS, CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4, CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE, CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE, CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE, CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE, CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES, CORTEX_A9_NEON_TYPE_NEON_MCR, CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR, CORTEX_A9_NEON_TYPE_NEON_MRC, CORTEX_A9_NEON_TYPE_NEON_MRRC, CORTEX_A9_NEON_TYPE_NEON_LDM_2, CORTEX_A9_NEON_TYPE_NEON_STM_2, CORTEX_A9_NEON_TYPE_NONE, CORTEX_A9_NEON_TYPE_UNKNOWN};
enum attr_cortex_a15_neon_type {CORTEX_A15_NEON_TYPE_NEON_ABD, CORTEX_A15_NEON_TYPE_NEON_ABD_Q, CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC, CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q, CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC, CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX, CORTEX_A15_NEON_TYPE_NEON_REDUC_ADD_ACC, CORTEX_A15_NEON_TYPE_NEON_MULTIPLY, CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q, CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_LONG, CORTEX_A15_NEON_TYPE_NEON_MLA, CORTEX_A15_NEON_TYPE_NEON_MLA_Q, CORTEX_A15_NEON_TYPE_NEON_MLA_LONG, CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG, CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC, CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC, CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX, CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC, CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q, CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX, CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q, CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS, CORTEX_A15_NEON_TYPE_NEON_FP_ARITH, CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q, CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT, CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q, CORTEX_A15_NEON_TYPE_NEON_FP_CVT16, CORTEX_A15_NEON_TYPE_NEON_FP_MINMAX, CORTEX_A15_NEON_TYPE_NEON_FP_MUL, CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q, CORTEX_A15_NEON_TYPE_NEON_FP_MLA, CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q, CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE, CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q, CORTEX_A15_NEON_TYPE_NEON_BITOPS, CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q, CORTEX_A15_NEON_TYPE_NEON_FROM_GP, CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q, CORTEX_A15_NEON_TYPE_NEON_MOVE, CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4, CORTEX_A15_NEON_TYPE_NEON_ZIP_Q, CORTEX_A15_NEON_TYPE_NEON_TO_GP, CORTEX_A15_NEON_TYPE_NEON_LOAD_A, CORTEX_A15_NEON_TYPE_NEON_LOAD_B, CORTEX_A15_NEON_TYPE_NEON_LOAD_C, CORTEX_A15_NEON_TYPE_NEON_LOAD_D, CORTEX_A15_NEON_TYPE_NEON_LOAD_E, CORTEX_A15_NEON_TYPE_NEON_LOAD_F, CORTEX_A15_NEON_TYPE_NEON_STORE_A, CORTEX_A15_NEON_TYPE_NEON_STORE_B, CORTEX_A15_NEON_TYPE_NEON_STORE_C, CORTEX_A15_NEON_TYPE_NEON_STORE_D, CORTEX_A15_NEON_TYPE_NEON_STORE_E, CORTEX_A15_NEON_TYPE_NEON_STORE_F, CORTEX_A15_NEON_TYPE_NEON_STORE_G, CORTEX_A15_NEON_TYPE_NEON_STORE_H, CORTEX_A15_NEON_TYPE_UNKNOWN};
enum attr_cortex_a17_neon_type {CORTEX_A17_NEON_TYPE_NEON_ABD, CORTEX_A17_NEON_TYPE_NEON_ABD_Q, CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC, CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q, CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC, CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX, CORTEX_A17_NEON_TYPE_NEON_REDUC_ADD_ACC, CORTEX_A17_NEON_TYPE_NEON_MULTIPLY, CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q, CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_LONG, CORTEX_A17_NEON_TYPE_NEON_MLA, CORTEX_A17_NEON_TYPE_NEON_MLA_Q, CORTEX_A17_NEON_TYPE_NEON_MLA_LONG, CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG, CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC, CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC, CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX, CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC, CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q, CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX, CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q, CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS, CORTEX_A17_NEON_TYPE_NEON_FP_ARITH, CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q, CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT, CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q, CORTEX_A17_NEON_TYPE_NEON_FP_CVT16, CORTEX_A17_NEON_TYPE_NEON_FP_MINMAX, CORTEX_A17_NEON_TYPE_NEON_FP_MUL, CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q, CORTEX_A17_NEON_TYPE_NEON_FP_MLA, CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q, CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE, CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q, CORTEX_A17_NEON_TYPE_NEON_BITOPS, CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q, CORTEX_A17_NEON_TYPE_NEON_FROM_GP, CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q, CORTEX_A17_NEON_TYPE_NEON_MOVE, CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4, CORTEX_A17_NEON_TYPE_NEON_ZIP_Q, CORTEX_A17_NEON_TYPE_NEON_TO_GP, CORTEX_A17_NEON_TYPE_NEON_LOAD_A, CORTEX_A17_NEON_TYPE_NEON_LOAD_B, CORTEX_A17_NEON_TYPE_NEON_LOAD_C, CORTEX_A17_NEON_TYPE_NEON_LOAD_D, CORTEX_A17_NEON_TYPE_NEON_LOAD_E, CORTEX_A17_NEON_TYPE_NEON_LOAD_F, CORTEX_A17_NEON_TYPE_NEON_LOAD_G, CORTEX_A17_NEON_TYPE_NEON_LOAD_H, CORTEX_A17_NEON_TYPE_NEON_STORE_A, CORTEX_A17_NEON_TYPE_NEON_STORE_B, CORTEX_A17_NEON_TYPE_UNKNOWN};
enum attr_cortex_a53_advsimd_type {CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS, CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS, CORTEX_A53_ADVSIMD_TYPE_UNKNOWN};
enum attr_cortex_a57_neon_type {CORTEX_A57_NEON_TYPE_NEON_ABD, CORTEX_A57_NEON_TYPE_NEON_ABD_Q, CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC, CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q, CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC, CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX, CORTEX_A57_NEON_TYPE_NEON_REDUC_ADD_ACC, CORTEX_A57_NEON_TYPE_NEON_MULTIPLY, CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q, CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_LONG, CORTEX_A57_NEON_TYPE_NEON_MLA, CORTEX_A57_NEON_TYPE_NEON_MLA_Q, CORTEX_A57_NEON_TYPE_NEON_MLA_LONG, CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG, CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC, CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC, CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX, CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC, CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q, CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX, CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q, CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS, CORTEX_A57_NEON_TYPE_NEON_FP_ARITH, CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q, CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q, CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT, CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q, CORTEX_A57_NEON_TYPE_NEON_FP_CVT16, CORTEX_A57_NEON_TYPE_NEON_FP_MINMAX, CORTEX_A57_NEON_TYPE_NEON_FP_MUL, CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q, CORTEX_A57_NEON_TYPE_NEON_FP_MLA, CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q, CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE, CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q, CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS, CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q, CORTEX_A57_NEON_TYPE_NEON_BITOPS, CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q, CORTEX_A57_NEON_TYPE_NEON_FROM_GP, CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q, CORTEX_A57_NEON_TYPE_NEON_MOVE, CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4, CORTEX_A57_NEON_TYPE_NEON_ZIP_Q, CORTEX_A57_NEON_TYPE_NEON_TO_GP, CORTEX_A57_NEON_TYPE_NEON_LOAD_A, CORTEX_A57_NEON_TYPE_NEON_LOAD_B, CORTEX_A57_NEON_TYPE_NEON_LOAD_C, CORTEX_A57_NEON_TYPE_NEON_LOAD_D, CORTEX_A57_NEON_TYPE_NEON_LOAD_E, CORTEX_A57_NEON_TYPE_NEON_LOAD_F, CORTEX_A57_NEON_TYPE_NEON_STORE_A, CORTEX_A57_NEON_TYPE_NEON_STORE_B, CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX, CORTEX_A57_NEON_TYPE_UNKNOWN};
enum attr_exynos_m1_neon_type {EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE, EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC, EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX, EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY, EXYNOS_M1_NEON_TYPE_NEON_MLA, EXYNOS_M1_NEON_TYPE_NEON_MLA_Q, EXYNOS_M1_NEON_TYPE_NEON_MLA_LONG, EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX, EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q, EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY, EXYNOS_M1_NEON_TYPE_NEON_FP_ADD, EXYNOS_M1_NEON_TYPE_NEON_FP_ABD, EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE, EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX, EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD, EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND, EXYNOS_M1_NEON_TYPE_NEON_FP_CVT, EXYNOS_M1_NEON_TYPE_NEON_FP_MINMAX, EXYNOS_M1_NEON_TYPE_NEON_FP_MUL, EXYNOS_M1_NEON_TYPE_NEON_FP_MUL_Q, EXYNOS_M1_NEON_TYPE_NEON_FP_MLA, EXYNOS_M1_NEON_TYPE_NEON_FP_MLA_Q, EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE, EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX, EXYNOS_M1_NEON_TYPE_NEON_FP_STEP, EXYNOS_M1_NEON_TYPE_NEON_BITOPS, EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q, EXYNOS_M1_NEON_TYPE_NEON_BITINS, EXYNOS_M1_NEON_TYPE_NEON_TO_GP, EXYNOS_M1_NEON_TYPE_NEON_FROM_GP, EXYNOS_M1_NEON_TYPE_NEON_MOVE, EXYNOS_M1_NEON_TYPE_NEON_TBL, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE, EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL, EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2, EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE, EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL, EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3, EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE, EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL, EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4, EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE, EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL, EXYNOS_M1_NEON_TYPE_NEON_STORE, EXYNOS_M1_NEON_TYPE_NEON_STORE1_1, EXYNOS_M1_NEON_TYPE_NEON_STORE1_2, EXYNOS_M1_NEON_TYPE_NEON_STORE1_3, EXYNOS_M1_NEON_TYPE_NEON_STORE1_4, EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE, EXYNOS_M1_NEON_TYPE_NEON_STORE2_2, EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE, EXYNOS_M1_NEON_TYPE_NEON_STORE3_3, EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE, EXYNOS_M1_NEON_TYPE_NEON_STORE4_4, EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE, EXYNOS_M1_NEON_TYPE_UNKNOWN};
enum attr_add_setq {ADD_SETQ_NO, ADD_SETQ_YES};
enum attr_vqh_mnem {VQH_MNEM_VADD, VQH_MNEM_VMIN, VQH_MNEM_VMAX};
#define INSN_SCHEDULING
#define DELAY_SLOTS 0

#endif /* GCC_INSN_ATTR_COMMON_H */
