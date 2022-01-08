/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define V24_REGNUM 56
#define SVE_STRICT_GP 1
#define SP_REGNUM 31
#define R5_REGNUM 5
#define V6_REGNUM 38
#define R8_REGNUM 8
#define V2_REGNUM 34
#define R12_REGNUM 12
#define P4_REGNUM 72
#define P3_REGNUM 71
#define P7_REGNUM 75
#define R10_REGNUM 10
#define V15_REGNUM 47
#define R24_REGNUM 24
#define SVE_RELAXED_GP 0
#define R16_REGNUM 16
#define R0_REGNUM 0
#define SPECULATION_SCRATCH_REGNUM 14
#define IP0_REGNUM 16
#define V5_REGNUM 37
#define V4_REGNUM 36
#define V8_REGNUM 40
#define R15_REGNUM 15
#define R26_REGNUM 26
#define V18_REGNUM 50
#define R27_REGNUM 27
#define P11_REGNUM 79
#define SFP_REGNUM 64
#define EP0_REGNUM 12
#define V12_REGNUM 44
#define V31_REGNUM 63
#define FP_REGNUM 29
#define V0_REGNUM 32
#define R3_REGNUM 3
#define R30_REGNUM 30
#define P2_REGNUM 70
#define V10_REGNUM 42
#define R22_REGNUM 22
#define V22_REGNUM 54
#define R19_REGNUM 19
#define SVE_MAYBE_NOT_PTRUE 0
#define V25_REGNUM 57
#define R6_REGNUM 6
#define R9_REGNUM 9
#define STACK_CLASH_SVE_CFA_REGNUM 11
#define V3_REGNUM 35
#define R13_REGNUM 13
#define P8_REGNUM 76
#define V16_REGNUM 48
#define R25_REGNUM 25
#define LAST_SAVED_REGNUM 83
#define V26_REGNUM 58
#define V20_REGNUM 52
#define V28_REGNUM 60
#define R1_REGNUM 1
#define EP1_REGNUM 13
#define SVE_KNOWN_PTRUE 1
#define IP1_REGNUM 17
#define AP_REGNUM 65
#define P14_REGNUM 82
#define P0_REGNUM 68
#define FFRT_REGNUM 85
#define R28_REGNUM 28
#define P12_REGNUM 80
#define R4_REGNUM 4
#define SPECULATION_TRACKER_REGNUM 15
#define R7_REGNUM 7
#define V1_REGNUM 33
#define V19_REGNUM 51
#define R11_REGNUM 11
#define V11_REGNUM 43
#define R20_REGNUM 20
#define VG_REGNUM 67
#define V14_REGNUM 46
#define R23_REGNUM 23
#define V9_REGNUM 41
#define P15_REGNUM 83
#define V23_REGNUM 55
#define LR_REGNUM 30
#define CC_REGNUM 66
#define PROBE_STACK_FIRST_REGNUM 10
#define V7_REGNUM 39
#define R14_REGNUM 14
#define P6_REGNUM 74
#define P9_REGNUM 77
#define V17_REGNUM 49
#define P10_REGNUM 78
#define V29_REGNUM 61
#define R2_REGNUM 2
#define V30_REGNUM 62
#define PROBE_STACK_SECOND_REGNUM 11
#define V27_REGNUM 59
#define V13_REGNUM 45
#define R17_REGNUM 17
#define FFR_REGNUM 84
#define R18_REGNUM 18
#define P1_REGNUM 69
#define P5_REGNUM 73
#define R21_REGNUM 21
#define R29_REGNUM 29
#define P13_REGNUM 81
#define V21_REGNUM 53

enum arches {
  ARCHES_ANY = 0,
  ARCHES_RCPC8_4 = 1,
  ARCHES_FP = 2,
  ARCHES_SIMD = 3,
  ARCHES_SVE = 4,
  ARCHES_FP16 = 5
};
#define NUM_ARCHES_VALUES 6
extern const char *const arches_strings[];

enum unspec {
  UNSPEC_AUTIA1716 = 0,
  UNSPEC_AUTIB1716 = 1,
  UNSPEC_AUTIASP = 2,
  UNSPEC_AUTIBSP = 3,
  UNSPEC_CALLEE_ABI = 4,
  UNSPEC_CASESI = 5,
  UNSPEC_CPYMEM = 6,
  UNSPEC_CRC32B = 7,
  UNSPEC_CRC32CB = 8,
  UNSPEC_CRC32CH = 9,
  UNSPEC_CRC32CW = 10,
  UNSPEC_CRC32CX = 11,
  UNSPEC_CRC32H = 12,
  UNSPEC_CRC32W = 13,
  UNSPEC_CRC32X = 14,
  UNSPEC_FCVTZS = 15,
  UNSPEC_FCVTZU = 16,
  UNSPEC_FJCVTZS = 17,
  UNSPEC_FRINT32Z = 18,
  UNSPEC_FRINT32X = 19,
  UNSPEC_FRINT64Z = 20,
  UNSPEC_FRINT64X = 21,
  UNSPEC_URECPE = 22,
  UNSPEC_FRECPE = 23,
  UNSPEC_FRECPS = 24,
  UNSPEC_FRECPX = 25,
  UNSPEC_FRINTA = 26,
  UNSPEC_FRINTI = 27,
  UNSPEC_FRINTM = 28,
  UNSPEC_FRINTN = 29,
  UNSPEC_FRINTP = 30,
  UNSPEC_FRINTX = 31,
  UNSPEC_FRINTZ = 32,
  UNSPEC_GOTSMALLPIC = 33,
  UNSPEC_GOTSMALLPIC28K = 34,
  UNSPEC_GOTSMALLTLS = 35,
  UNSPEC_GOTTINYPIC = 36,
  UNSPEC_GOTTINYTLS = 37,
  UNSPEC_LD1 = 38,
  UNSPEC_LD2 = 39,
  UNSPEC_LD2_DREG = 40,
  UNSPEC_LD2_DUP = 41,
  UNSPEC_LD3 = 42,
  UNSPEC_LD3_DREG = 43,
  UNSPEC_LD3_DUP = 44,
  UNSPEC_LD4 = 45,
  UNSPEC_LD4_DREG = 46,
  UNSPEC_LD4_DUP = 47,
  UNSPEC_LD2_LANE = 48,
  UNSPEC_LD3_LANE = 49,
  UNSPEC_LD4_LANE = 50,
  UNSPEC_LD64B = 51,
  UNSPEC_ST64B = 52,
  UNSPEC_ST64BV = 53,
  UNSPEC_ST64BV_RET = 54,
  UNSPEC_ST64BV0 = 55,
  UNSPEC_ST64BV0_RET = 56,
  UNSPEC_MB = 57,
  UNSPEC_MOVMEM = 58,
  UNSPEC_NOP = 59,
  UNSPEC_PACIA1716 = 60,
  UNSPEC_PACIB1716 = 61,
  UNSPEC_PACIASP = 62,
  UNSPEC_PACIBSP = 63,
  UNSPEC_PRLG_STK = 64,
  UNSPEC_REV = 65,
  UNSPEC_RBIT = 66,
  UNSPEC_SABAL = 67,
  UNSPEC_SABAL2 = 68,
  UNSPEC_SABDL = 69,
  UNSPEC_SABDL2 = 70,
  UNSPEC_SADALP = 71,
  UNSPEC_SCVTF = 72,
  UNSPEC_SETMEM = 73,
  UNSPEC_SISD_NEG = 74,
  UNSPEC_SISD_SSHL = 75,
  UNSPEC_SISD_USHL = 76,
  UNSPEC_SSHL_2S = 77,
  UNSPEC_ST1 = 78,
  UNSPEC_ST2 = 79,
  UNSPEC_ST3 = 80,
  UNSPEC_ST4 = 81,
  UNSPEC_ST2_LANE = 82,
  UNSPEC_ST3_LANE = 83,
  UNSPEC_ST4_LANE = 84,
  UNSPEC_TLS = 85,
  UNSPEC_TLSDESC = 86,
  UNSPEC_TLSLE12 = 87,
  UNSPEC_TLSLE24 = 88,
  UNSPEC_TLSLE32 = 89,
  UNSPEC_TLSLE48 = 90,
  UNSPEC_UABAL = 91,
  UNSPEC_UABAL2 = 92,
  UNSPEC_UABDL = 93,
  UNSPEC_UABDL2 = 94,
  UNSPEC_UADALP = 95,
  UNSPEC_UCVTF = 96,
  UNSPEC_USHL_2S = 97,
  UNSPEC_VSTRUCTDUMMY = 98,
  UNSPEC_SSP_SYSREG = 99,
  UNSPEC_SP_SET = 100,
  UNSPEC_SP_TEST = 101,
  UNSPEC_RSHRN = 102,
  UNSPEC_RSQRT = 103,
  UNSPEC_RSQRTE = 104,
  UNSPEC_RSQRTS = 105,
  UNSPEC_NZCV = 106,
  UNSPEC_XPACLRI = 107,
  UNSPEC_LD1_SVE = 108,
  UNSPEC_ST1_SVE = 109,
  UNSPEC_LDNT1_SVE = 110,
  UNSPEC_STNT1_SVE = 111,
  UNSPEC_LD1RQ = 112,
  UNSPEC_LD1_GATHER = 113,
  UNSPEC_LDFF1_GATHER = 114,
  UNSPEC_LDNT1_GATHER = 115,
  UNSPEC_ST1_SCATTER = 116,
  UNSPEC_STNT1_SCATTER = 117,
  UNSPEC_PRED_X = 118,
  UNSPEC_PRED_Z = 119,
  UNSPEC_PTEST = 120,
  UNSPEC_PTRUE = 121,
  UNSPEC_UNPACKSHI = 122,
  UNSPEC_UNPACKUHI = 123,
  UNSPEC_UNPACKSLO = 124,
  UNSPEC_UNPACKULO = 125,
  UNSPEC_PACK = 126,
  UNSPEC_WHILEGE = 127,
  UNSPEC_WHILEGT = 128,
  UNSPEC_WHILEHI = 129,
  UNSPEC_WHILEHS = 130,
  UNSPEC_WHILELE = 131,
  UNSPEC_WHILELO = 132,
  UNSPEC_WHILELS = 133,
  UNSPEC_WHILELT = 134,
  UNSPEC_WHILERW = 135,
  UNSPEC_WHILEWR = 136,
  UNSPEC_LDN = 137,
  UNSPEC_STN = 138,
  UNSPEC_INSR = 139,
  UNSPEC_CLASTA = 140,
  UNSPEC_CLASTB = 141,
  UNSPEC_FADDA = 142,
  UNSPEC_REV_SUBREG = 143,
  UNSPEC_REINTERPRET = 144,
  UNSPEC_SPECULATION_TRACKER = 145,
  UNSPEC_SPECULATION_TRACKER_REV = 146,
  UNSPEC_COPYSIGN = 147,
  UNSPEC_TTEST = 148,
  UNSPEC_UPDATE_FFR = 149,
  UNSPEC_UPDATE_FFRT = 150,
  UNSPEC_RDFFR = 151,
  UNSPEC_WRFFR = 152,
  UNSPEC_SVE_LANE_SELECT = 153,
  UNSPEC_SVE_CNT_PAT = 154,
  UNSPEC_SVE_PREFETCH = 155,
  UNSPEC_SVE_PREFETCH_GATHER = 156,
  UNSPEC_SVE_COMPACT = 157,
  UNSPEC_SVE_SPLICE = 158,
  UNSPEC_GEN_TAG = 159,
  UNSPEC_GEN_TAG_RND = 160,
  UNSPEC_TAG_SPACE = 161,
  UNSPEC_LD1RO = 162,
  UNSPEC_SALT_ADDR = 163,
  UNSPEC_ASHIFT_SIGNED = 164,
  UNSPEC_ASHIFT_UNSIGNED = 165,
  UNSPEC_ABS = 166,
  UNSPEC_FMAX = 167,
  UNSPEC_FMAXNMV = 168,
  UNSPEC_FMAXV = 169,
  UNSPEC_FMIN = 170,
  UNSPEC_FMINNMV = 171,
  UNSPEC_FMINV = 172,
  UNSPEC_FADDV = 173,
  UNSPEC_ADDV = 174,
  UNSPEC_SADDLV = 175,
  UNSPEC_UADDLV = 176,
  UNSPEC_SMAXV = 177,
  UNSPEC_SMINV = 178,
  UNSPEC_UMAXV = 179,
  UNSPEC_UMINV = 180,
  UNSPEC_SHADD = 181,
  UNSPEC_UHADD = 182,
  UNSPEC_SRHADD = 183,
  UNSPEC_URHADD = 184,
  UNSPEC_SHSUB = 185,
  UNSPEC_UHSUB = 186,
  UNSPEC_ADDHN = 187,
  UNSPEC_RADDHN = 188,
  UNSPEC_SUBHN = 189,
  UNSPEC_RSUBHN = 190,
  UNSPEC_SQDMULH = 191,
  UNSPEC_SQRDMULH = 192,
  UNSPEC_PMUL = 193,
  UNSPEC_FMULX = 194,
  UNSPEC_USQADD = 195,
  UNSPEC_SUQADD = 196,
  UNSPEC_SQXTUN = 197,
  UNSPEC_SSRA = 198,
  UNSPEC_USRA = 199,
  UNSPEC_SRSRA = 200,
  UNSPEC_URSRA = 201,
  UNSPEC_SRSHR = 202,
  UNSPEC_URSHR = 203,
  UNSPEC_SQSHLU = 204,
  UNSPEC_SQSHL = 205,
  UNSPEC_UQSHL = 206,
  UNSPEC_SQSHRUN = 207,
  UNSPEC_SQRSHRUN = 208,
  UNSPEC_SQSHRN = 209,
  UNSPEC_UQSHRN = 210,
  UNSPEC_SQRSHRN = 211,
  UNSPEC_UQRSHRN = 212,
  UNSPEC_SSHL = 213,
  UNSPEC_USHL = 214,
  UNSPEC_SRSHL = 215,
  UNSPEC_URSHL = 216,
  UNSPEC_SQRSHL = 217,
  UNSPEC_UQRSHL = 218,
  UNSPEC_SSLI = 219,
  UNSPEC_USLI = 220,
  UNSPEC_SSRI = 221,
  UNSPEC_USRI = 222,
  UNSPEC_SSHLL = 223,
  UNSPEC_USHLL = 224,
  UNSPEC_ADDP = 225,
  UNSPEC_SADDLP = 226,
  UNSPEC_UADDLP = 227,
  UNSPEC_TBL = 228,
  UNSPEC_TBX = 229,
  UNSPEC_CONCAT = 230,
  UNSPEC_ZIP1 = 231,
  UNSPEC_ZIP2 = 232,
  UNSPEC_UZP1 = 233,
  UNSPEC_UZP2 = 234,
  UNSPEC_TRN1 = 235,
  UNSPEC_TRN2 = 236,
  UNSPEC_EXT = 237,
  UNSPEC_REV64 = 238,
  UNSPEC_REV32 = 239,
  UNSPEC_REV16 = 240,
  UNSPEC_AESE = 241,
  UNSPEC_AESD = 242,
  UNSPEC_AESMC = 243,
  UNSPEC_AESIMC = 244,
  UNSPEC_SHA1C = 245,
  UNSPEC_SHA1M = 246,
  UNSPEC_SHA1P = 247,
  UNSPEC_SHA1H = 248,
  UNSPEC_SHA1SU0 = 249,
  UNSPEC_SHA1SU1 = 250,
  UNSPEC_SHA256H = 251,
  UNSPEC_SHA256H2 = 252,
  UNSPEC_SHA256SU0 = 253,
  UNSPEC_SHA256SU1 = 254,
  UNSPEC_PMULL = 255,
  UNSPEC_PMULL2 = 256,
  UNSPEC_REV_REGLIST = 257,
  UNSPEC_VEC_SHR = 258,
  UNSPEC_SQRDMLAH = 259,
  UNSPEC_SQRDMLSH = 260,
  UNSPEC_FMAXNM = 261,
  UNSPEC_FMINNM = 262,
  UNSPEC_SDOT = 263,
  UNSPEC_UDOT = 264,
  UNSPEC_SM3SS1 = 265,
  UNSPEC_SM3TT1A = 266,
  UNSPEC_SM3TT1B = 267,
  UNSPEC_SM3TT2A = 268,
  UNSPEC_SM3TT2B = 269,
  UNSPEC_SM3PARTW1 = 270,
  UNSPEC_SM3PARTW2 = 271,
  UNSPEC_SM4E = 272,
  UNSPEC_SM4EKEY = 273,
  UNSPEC_SHA512H = 274,
  UNSPEC_SHA512H2 = 275,
  UNSPEC_SHA512SU0 = 276,
  UNSPEC_SHA512SU1 = 277,
  UNSPEC_FMLAL = 278,
  UNSPEC_FMLSL = 279,
  UNSPEC_FMLAL2 = 280,
  UNSPEC_FMLSL2 = 281,
  UNSPEC_ADR = 282,
  UNSPEC_SEL = 283,
  UNSPEC_BRKA = 284,
  UNSPEC_BRKB = 285,
  UNSPEC_BRKN = 286,
  UNSPEC_BRKPA = 287,
  UNSPEC_BRKPB = 288,
  UNSPEC_PFIRST = 289,
  UNSPEC_PNEXT = 290,
  UNSPEC_CNTP = 291,
  UNSPEC_SADDV = 292,
  UNSPEC_UADDV = 293,
  UNSPEC_ANDV = 294,
  UNSPEC_IORV = 295,
  UNSPEC_XORV = 296,
  UNSPEC_ANDF = 297,
  UNSPEC_IORF = 298,
  UNSPEC_XORF = 299,
  UNSPEC_REVB = 300,
  UNSPEC_REVH = 301,
  UNSPEC_REVW = 302,
  UNSPEC_REVBHW = 303,
  UNSPEC_SMUL_HIGHPART = 304,
  UNSPEC_UMUL_HIGHPART = 305,
  UNSPEC_FMLA = 306,
  UNSPEC_FMLS = 307,
  UNSPEC_FEXPA = 308,
  UNSPEC_FMMLA = 309,
  UNSPEC_FTMAD = 310,
  UNSPEC_FTSMUL = 311,
  UNSPEC_FTSSEL = 312,
  UNSPEC_SMATMUL = 313,
  UNSPEC_UMATMUL = 314,
  UNSPEC_USMATMUL = 315,
  UNSPEC_TRN1Q = 316,
  UNSPEC_TRN2Q = 317,
  UNSPEC_UZP1Q = 318,
  UNSPEC_UZP2Q = 319,
  UNSPEC_ZIP1Q = 320,
  UNSPEC_ZIP2Q = 321,
  UNSPEC_TRN1_CONV = 322,
  UNSPEC_COND_CMPEQ_WIDE = 323,
  UNSPEC_COND_CMPGE_WIDE = 324,
  UNSPEC_COND_CMPGT_WIDE = 325,
  UNSPEC_COND_CMPHI_WIDE = 326,
  UNSPEC_COND_CMPHS_WIDE = 327,
  UNSPEC_COND_CMPLE_WIDE = 328,
  UNSPEC_COND_CMPLO_WIDE = 329,
  UNSPEC_COND_CMPLS_WIDE = 330,
  UNSPEC_COND_CMPLT_WIDE = 331,
  UNSPEC_COND_CMPNE_WIDE = 332,
  UNSPEC_COND_FABS = 333,
  UNSPEC_COND_FADD = 334,
  UNSPEC_COND_FCADD90 = 335,
  UNSPEC_COND_FCADD270 = 336,
  UNSPEC_COND_FCMEQ = 337,
  UNSPEC_COND_FCMGE = 338,
  UNSPEC_COND_FCMGT = 339,
  UNSPEC_COND_FCMLA = 340,
  UNSPEC_COND_FCMLA90 = 341,
  UNSPEC_COND_FCMLA180 = 342,
  UNSPEC_COND_FCMLA270 = 343,
  UNSPEC_COND_FCMLE = 344,
  UNSPEC_COND_FCMLT = 345,
  UNSPEC_COND_FCMNE = 346,
  UNSPEC_COND_FCMUO = 347,
  UNSPEC_COND_FCVT = 348,
  UNSPEC_COND_FCVTZS = 349,
  UNSPEC_COND_FCVTZU = 350,
  UNSPEC_COND_FDIV = 351,
  UNSPEC_COND_FMAX = 352,
  UNSPEC_COND_FMAXNM = 353,
  UNSPEC_COND_FMIN = 354,
  UNSPEC_COND_FMINNM = 355,
  UNSPEC_COND_FMLA = 356,
  UNSPEC_COND_FMLS = 357,
  UNSPEC_COND_FMUL = 358,
  UNSPEC_COND_FMULX = 359,
  UNSPEC_COND_FNEG = 360,
  UNSPEC_COND_FNMLA = 361,
  UNSPEC_COND_FNMLS = 362,
  UNSPEC_COND_FRECPX = 363,
  UNSPEC_COND_FRINTA = 364,
  UNSPEC_COND_FRINTI = 365,
  UNSPEC_COND_FRINTM = 366,
  UNSPEC_COND_FRINTN = 367,
  UNSPEC_COND_FRINTP = 368,
  UNSPEC_COND_FRINTX = 369,
  UNSPEC_COND_FRINTZ = 370,
  UNSPEC_COND_FSCALE = 371,
  UNSPEC_COND_FSQRT = 372,
  UNSPEC_COND_FSUB = 373,
  UNSPEC_COND_SCVTF = 374,
  UNSPEC_COND_UCVTF = 375,
  UNSPEC_LASTA = 376,
  UNSPEC_LASTB = 377,
  UNSPEC_ASHIFT_WIDE = 378,
  UNSPEC_ASHIFTRT_WIDE = 379,
  UNSPEC_LSHIFTRT_WIDE = 380,
  UNSPEC_LDFF1 = 381,
  UNSPEC_LDNF1 = 382,
  UNSPEC_FCADD90 = 383,
  UNSPEC_FCADD270 = 384,
  UNSPEC_FCMLA = 385,
  UNSPEC_FCMLA90 = 386,
  UNSPEC_FCMLA180 = 387,
  UNSPEC_FCMLA270 = 388,
  UNSPEC_FCMUL = 389,
  UNSPEC_FCMUL_CONJ = 390,
  UNSPEC_FCMLA_CONJ = 391,
  UNSPEC_FCMLA180_CONJ = 392,
  UNSPEC_ASRD = 393,
  UNSPEC_ADCLB = 394,
  UNSPEC_ADCLT = 395,
  UNSPEC_ADDHNB = 396,
  UNSPEC_ADDHNT = 397,
  UNSPEC_BDEP = 398,
  UNSPEC_BEXT = 399,
  UNSPEC_BGRP = 400,
  UNSPEC_CADD270 = 401,
  UNSPEC_CADD90 = 402,
  UNSPEC_CDOT = 403,
  UNSPEC_CDOT180 = 404,
  UNSPEC_CDOT270 = 405,
  UNSPEC_CDOT90 = 406,
  UNSPEC_CMLA = 407,
  UNSPEC_CMLA180 = 408,
  UNSPEC_CMLA270 = 409,
  UNSPEC_CMLA90 = 410,
  UNSPEC_CMLA_CONJ = 411,
  UNSPEC_CMLA180_CONJ = 412,
  UNSPEC_CMUL = 413,
  UNSPEC_CMUL_CONJ = 414,
  UNSPEC_COND_FCVTLT = 415,
  UNSPEC_COND_FCVTNT = 416,
  UNSPEC_COND_FCVTX = 417,
  UNSPEC_COND_FCVTXNT = 418,
  UNSPEC_COND_FLOGB = 419,
  UNSPEC_EORBT = 420,
  UNSPEC_EORTB = 421,
  UNSPEC_FADDP = 422,
  UNSPEC_FMAXNMP = 423,
  UNSPEC_FMAXP = 424,
  UNSPEC_FMINNMP = 425,
  UNSPEC_FMINP = 426,
  UNSPEC_FMLALB = 427,
  UNSPEC_FMLALT = 428,
  UNSPEC_FMLSLB = 429,
  UNSPEC_FMLSLT = 430,
  UNSPEC_HISTCNT = 431,
  UNSPEC_HISTSEG = 432,
  UNSPEC_MATCH = 433,
  UNSPEC_NMATCH = 434,
  UNSPEC_PMULLB = 435,
  UNSPEC_PMULLB_PAIR = 436,
  UNSPEC_PMULLT = 437,
  UNSPEC_PMULLT_PAIR = 438,
  UNSPEC_RADDHNB = 439,
  UNSPEC_RADDHNT = 440,
  UNSPEC_RSHRNB = 441,
  UNSPEC_RSHRNT = 442,
  UNSPEC_RSUBHNB = 443,
  UNSPEC_RSUBHNT = 444,
  UNSPEC_SABDLB = 445,
  UNSPEC_SABDLT = 446,
  UNSPEC_SADDLB = 447,
  UNSPEC_SADDLBT = 448,
  UNSPEC_SADDLT = 449,
  UNSPEC_SADDWB = 450,
  UNSPEC_SADDWT = 451,
  UNSPEC_SBCLB = 452,
  UNSPEC_SBCLT = 453,
  UNSPEC_SHRNB = 454,
  UNSPEC_SHRNT = 455,
  UNSPEC_SLI = 456,
  UNSPEC_SMAXP = 457,
  UNSPEC_SMINP = 458,
  UNSPEC_SMULHRS = 459,
  UNSPEC_SMULHS = 460,
  UNSPEC_SMULLB = 461,
  UNSPEC_SMULLT = 462,
  UNSPEC_SQCADD270 = 463,
  UNSPEC_SQCADD90 = 464,
  UNSPEC_SQDMULLB = 465,
  UNSPEC_SQDMULLBT = 466,
  UNSPEC_SQDMULLT = 467,
  UNSPEC_SQRDCMLAH = 468,
  UNSPEC_SQRDCMLAH180 = 469,
  UNSPEC_SQRDCMLAH270 = 470,
  UNSPEC_SQRDCMLAH90 = 471,
  UNSPEC_SQRSHRNB = 472,
  UNSPEC_SQRSHRNT = 473,
  UNSPEC_SQRSHRUNB = 474,
  UNSPEC_SQRSHRUNT = 475,
  UNSPEC_SQSHRNB = 476,
  UNSPEC_SQSHRNT = 477,
  UNSPEC_SQSHRUNB = 478,
  UNSPEC_SQSHRUNT = 479,
  UNSPEC_SQXTNB = 480,
  UNSPEC_SQXTNT = 481,
  UNSPEC_SQXTUNB = 482,
  UNSPEC_SQXTUNT = 483,
  UNSPEC_SRI = 484,
  UNSPEC_SSHLLB = 485,
  UNSPEC_SSHLLT = 486,
  UNSPEC_SSUBLB = 487,
  UNSPEC_SSUBLBT = 488,
  UNSPEC_SSUBLT = 489,
  UNSPEC_SSUBLTB = 490,
  UNSPEC_SSUBWB = 491,
  UNSPEC_SSUBWT = 492,
  UNSPEC_SUBHNB = 493,
  UNSPEC_SUBHNT = 494,
  UNSPEC_TBL2 = 495,
  UNSPEC_UABDLB = 496,
  UNSPEC_UABDLT = 497,
  UNSPEC_UADDLB = 498,
  UNSPEC_UADDLT = 499,
  UNSPEC_UADDWB = 500,
  UNSPEC_UADDWT = 501,
  UNSPEC_UMAXP = 502,
  UNSPEC_UMINP = 503,
  UNSPEC_UMULHRS = 504,
  UNSPEC_UMULHS = 505,
  UNSPEC_UMULLB = 506,
  UNSPEC_UMULLT = 507,
  UNSPEC_UQRSHRNB = 508,
  UNSPEC_UQRSHRNT = 509,
  UNSPEC_UQSHRNB = 510,
  UNSPEC_UQSHRNT = 511,
  UNSPEC_UQXTNB = 512,
  UNSPEC_UQXTNT = 513,
  UNSPEC_USHLLB = 514,
  UNSPEC_USHLLT = 515,
  UNSPEC_USUBLB = 516,
  UNSPEC_USUBLT = 517,
  UNSPEC_USUBWB = 518,
  UNSPEC_USUBWT = 519,
  UNSPEC_USDOT = 520,
  UNSPEC_SUDOT = 521,
  UNSPEC_BFDOT = 522,
  UNSPEC_BFMLALB = 523,
  UNSPEC_BFMLALT = 524,
  UNSPEC_BFMMLA = 525,
  UNSPEC_BFCVTN = 526,
  UNSPEC_BFCVTN2 = 527,
  UNSPEC_BFCVT = 528,
  UNSPEC_FCVTXN = 529
};
#define NUM_UNSPEC_VALUES 530
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_SPECULATION_BARRIER = 7,
  UNSPECV_BTI_NOARG = 8,
  UNSPECV_BTI_C = 9,
  UNSPECV_BTI_J = 10,
  UNSPECV_BTI_JC = 11,
  UNSPECV_TSTART = 12,
  UNSPECV_TCOMMIT = 13,
  UNSPECV_TCANCEL = 14,
  UNSPEC_RNDR = 15,
  UNSPEC_RNDRRS = 16,
  UNSPECV_LX = 17,
  UNSPECV_SX = 18,
  UNSPECV_LDA = 19,
  UNSPECV_STL = 20,
  UNSPECV_ATOMIC_CMPSW = 21,
  UNSPECV_ATOMIC_EXCHG = 22,
  UNSPECV_ATOMIC_CAS = 23,
  UNSPECV_ATOMIC_SWP = 24,
  UNSPECV_ATOMIC_OP = 25,
  UNSPECV_ATOMIC_LDOP_OR = 26,
  UNSPECV_ATOMIC_LDOP_BIC = 27,
  UNSPECV_ATOMIC_LDOP_XOR = 28,
  UNSPECV_ATOMIC_LDOP_PLUS = 29
};
#define NUM_UNSPECV_VALUES 30
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
