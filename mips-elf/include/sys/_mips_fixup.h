#pragma once

/* undefined types */
#ifndef __INTPTR_WIDTH__
#define __INTPTR_WIDTH__ 32
#endif
#ifndef __INTPTR_MAX__
#define __INTPTR_MAX__ 0x7fffffff
#endif
#ifndef __INTPTR_TYPE__
#define __INTPTR_TYPE__ int
#endif

#ifndef __INT32_MAX__
#define __INT32_MAX__ 0x7fffffffL
#endif
#ifndef __INT32_C
#define __INT32_C(c) c ## L
#endif
#ifndef __INT32_TYPE__
#define __INT32_TYPE__ long int
#endif

#ifndef __UINT32_C
#define __UINT32_C(c) c ## UL
#endif

#ifndef __DBL_MIN_EXP__
#define __DBL_MIN_EXP__ (-1021)
#endif

#ifndef __HQ_FBIT__
#define __HQ_FBIT__ 15
#endif

#ifndef __FLT32X_MAX_EXP__
#define __FLT32X_MAX_EXP__ 1024
#endif

#ifndef __UINT_LEAST16_MAX__
#define __UINT_LEAST16_MAX__ 0xffff
#endif

#ifndef __ATOMIC_ACQUIRE
#define __ATOMIC_ACQUIRE 2
#endif

#ifndef __SFRACT_IBIT__
#define __SFRACT_IBIT__ 0
#endif

#ifndef __FLT_MIN__
#define __FLT_MIN__ 1.1754943508222875e-38F
#endif

#ifndef __GCC_IEC_559_COMPLEX
#define __GCC_IEC_559_COMPLEX 1
#endif

#ifndef __UFRACT_MAX__
#define __UFRACT_MAX__ 0XFFFFP-16UR
#endif

#ifndef __UINT_LEAST8_TYPE__
#define __UINT_LEAST8_TYPE__ unsigned char
#endif

#ifndef __DQ_FBIT__
#define __DQ_FBIT__ 63
#endif

#ifndef __INTMAX_C
#define __INTMAX_C(c) c ## LL
#endif

#ifndef __ULFRACT_FBIT__
#define __ULFRACT_FBIT__ 32
#endif

#ifndef __SACCUM_EPSILON__
#define __SACCUM_EPSILON__ 0x1P-7HK
#endif

#ifndef __CHAR_BIT__
#define __CHAR_BIT__ 8
#endif

#ifndef __USQ_IBIT__
#define __USQ_IBIT__ 0
#endif

#ifndef __UINT8_MAX__
#define __UINT8_MAX__ 0xff
#endif

#ifndef __ACCUM_FBIT__
#define __ACCUM_FBIT__ 15
#endif

#ifndef __WINT_MAX__
#define __WINT_MAX__ 0xffffffffU
#endif

#ifndef __FLT32_MIN_EXP__
#define __FLT32_MIN_EXP__ (-125)
#endif

#ifndef R3000
#define R3000 1
#endif

#ifndef __USFRACT_FBIT__
#define __USFRACT_FBIT__ 8
#endif

#ifndef __ORDER_LITTLE_ENDIAN__
#define __ORDER_LITTLE_ENDIAN__ 1234
#endif

#ifndef __SIZE_MAX__
#define __SIZE_MAX__ 0xffffffffU
#endif

#ifndef __WCHAR_MAX__
#define __WCHAR_MAX__ 0x7fffffff
#endif

#ifndef __LACCUM_IBIT__
#define __LACCUM_IBIT__ 32
#endif

#ifndef __DBL_DENORM_MIN__
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#endif

#ifndef __GCC_ATOMIC_CHAR_LOCK_FREE
#define __GCC_ATOMIC_CHAR_LOCK_FREE 1
#endif

#ifndef __GCC_IEC_559
#define __GCC_IEC_559 1
#endif

#ifndef __FLT32X_DECIMAL_DIG__
#define __FLT32X_DECIMAL_DIG__ 17
#endif

#ifndef __FLT_EVAL_METHOD__
#define __FLT_EVAL_METHOD__ 0
#endif

#ifndef __LLACCUM_MAX__
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#endif

#ifndef __FLT64_DECIMAL_DIG__
#define __FLT64_DECIMAL_DIG__ 17
#endif

#ifndef __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 1
#endif

#ifndef __FRACT_FBIT__
#define __FRACT_FBIT__ 15
#endif

#ifndef _MIPS_ISA
#define _MIPS_ISA _MIPS_ISA_MIPS1
#endif

#ifndef __UINT_FAST64_MAX__
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#endif

#ifndef __SIG_ATOMIC_TYPE__
#define __SIG_ATOMIC_TYPE__ int
#endif

#ifndef __UACCUM_FBIT__
#define __UACCUM_FBIT__ 16
#endif

#ifndef __LANGUAGE_C
#define __LANGUAGE_C 1
#endif

#ifndef __DBL_MIN_10_EXP__
#define __DBL_MIN_10_EXP__ (-307)
#endif

#ifndef __FINITE_MATH_ONLY__
#define __FINITE_MATH_ONLY__ 0
#endif

#ifndef _MIPS_TUNE
#define _MIPS_TUNE "mips1"
#endif

#ifndef _ABIO32
#define _ABIO32 1
#endif

#ifndef __LFRACT_IBIT__
#define __LFRACT_IBIT__ 0
#endif

#ifndef __GNUC_PATCHLEVEL__
#define __GNUC_PATCHLEVEL__ 0
#endif

#ifndef __FLT32_HAS_DENORM__
#define __FLT32_HAS_DENORM__ 1
#endif

#ifndef __LFRACT_MAX__
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#endif

#ifndef __UINT_FAST8_MAX__
#define __UINT_FAST8_MAX__ 0xffffffffU
#endif

#ifndef __has_include
#define __has_include(STR) __has_include__(STR)
#endif

#ifndef __DEC64_MAX_EXP__
#define __DEC64_MAX_EXP__ 385
#endif

#ifndef __INT8_C
#define __INT8_C(c) c
#endif

#ifndef __INT_LEAST8_WIDTH__
#define __INT_LEAST8_WIDTH__ 8
#endif

#ifndef __UINT_LEAST64_MAX__
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#endif

#ifndef __SA_FBIT__
#define __SA_FBIT__ 15
#endif

#ifndef __SHRT_MAX__
#define __SHRT_MAX__ 0x7fff
#endif

#ifndef __LDBL_MAX__
#define __LDBL_MAX__ 1.7976931348623157e+308L
#endif

#ifndef __FRACT_MAX__
#define __FRACT_MAX__ 0X7FFFP-15R
#endif

#ifndef __UFRACT_FBIT__
#define __UFRACT_FBIT__ 16
#endif

#ifndef __UFRACT_MIN__
#define __UFRACT_MIN__ 0.0UR
#endif

#ifndef __UINT_LEAST8_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#endif

#ifndef __GCC_ATOMIC_BOOL_LOCK_FREE
#define __GCC_ATOMIC_BOOL_LOCK_FREE 1
#endif

#ifndef __LANGUAGE_C__
#define __LANGUAGE_C__ 1
#endif

#ifndef __UINTMAX_TYPE__
#define __UINTMAX_TYPE__ long long unsigned int
#endif

#ifndef __LLFRACT_EPSILON__
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#endif

#ifndef __DEC32_EPSILON__
#define __DEC32_EPSILON__ 1E-6DF
#endif

#ifndef __FLT_EVAL_METHOD_TS_18661_3__
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#endif

#ifndef __CHAR_UNSIGNED__
#define __CHAR_UNSIGNED__ 1
#endif

#ifndef __UINT32_MAX__
#define __UINT32_MAX__ 0xffffffffUL
#endif

#ifndef __ULFRACT_MAX__
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#endif

#ifndef __TA_IBIT__
#define __TA_IBIT__ 64
#endif

#ifndef __LDBL_MAX_EXP__
#define __LDBL_MAX_EXP__ 1024
#endif

#ifndef __WINT_MIN__
#define __WINT_MIN__ 0U
#endif

#ifndef __MIPSEL__
#define __MIPSEL__ 1
#endif

#ifndef __INT_LEAST16_WIDTH__
#define __INT_LEAST16_WIDTH__ 16
#endif

#ifndef __ULLFRACT_MIN__
#define __ULLFRACT_MIN__ 0.0ULLR
#endif

#ifndef __SCHAR_MAX__
#define __SCHAR_MAX__ 0x7f
#endif

#ifndef __WCHAR_MIN__
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#endif

#ifndef __INT64_C
#define __INT64_C(c) c ## LL
#endif

#ifndef __DBL_DIG__
#define __DBL_DIG__ 15
#endif

#ifndef __GCC_ATOMIC_POINTER_LOCK_FREE
#define __GCC_ATOMIC_POINTER_LOCK_FREE 1
#endif

#ifndef __LLACCUM_MIN__
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#endif

#ifndef __SIZEOF_INT__
#define __SIZEOF_INT__ 4
#endif

#ifndef __SIZEOF_POINTER__
#define __SIZEOF_POINTER__ 4
#endif

#ifndef __mips_no_madd4
#define __mips_no_madd4 1
#endif

#ifndef __USACCUM_IBIT__
#define __USACCUM_IBIT__ 8
#endif

#ifndef __USER_LABEL_PREFIX__
#define __USER_LABEL_PREFIX__
#endif

#ifndef __STDC_HOSTED__
#define __STDC_HOSTED__ 1
#endif

#ifndef __LDBL_HAS_INFINITY__
#define __LDBL_HAS_INFINITY__ 1
#endif

#ifndef __LFRACT_MIN__
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#endif

#ifndef __mips_fpr
#define __mips_fpr 32
#endif

#ifndef __HA_IBIT__
#define __HA_IBIT__ 8
#endif

#ifndef __FLT32_DIG__
#define __FLT32_DIG__ 6
#endif

#ifndef __TQ_IBIT__
#define __TQ_IBIT__ 0
#endif

#ifndef __FLT_EPSILON__
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#endif

#ifndef __SHRT_WIDTH__
#define __SHRT_WIDTH__ 16
#endif

#ifndef __mips__
#define __mips__ 1
#endif

#ifndef __USFRACT_IBIT__
#define __USFRACT_IBIT__ 0
#endif

#ifndef __LDBL_MIN__
#define __LDBL_MIN__ 2.2250738585072014e-308L
#endif

#ifndef __STDC_UTF_16__
#define __STDC_UTF_16__ 1
#endif

#ifndef __FRACT_MIN__
#define __FRACT_MIN__ (-0.5R-0.5R)
#endif

#ifndef __DEC32_MAX__
#define __DEC32_MAX__ 9.999999E96DF
#endif

#ifndef __DA_IBIT__
#define __DA_IBIT__ 32
#endif

#ifndef __FLT32X_HAS_INFINITY__
#define __FLT32X_HAS_INFINITY__ 1
#endif

#ifndef MIPSEL
#define MIPSEL 1
#endif

#ifndef __INT32_MAX__
#define __INT32_MAX__ 0x7fffffffL
#endif

#ifndef __UQQ_FBIT__
#define __UQQ_FBIT__ 8
#endif

#ifndef __INT_WIDTH__
#define __INT_WIDTH__ 32
#endif

#ifndef __SIZEOF_LONG__
#define __SIZEOF_LONG__ 4
#endif

#ifndef __UACCUM_MAX__
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#endif

#ifndef __UINT16_C
#define __UINT16_C(c) c
#endif

#ifndef __PTRDIFF_WIDTH__
#define __PTRDIFF_WIDTH__ 32
#endif

#ifndef __DECIMAL_DIG__
#define __DECIMAL_DIG__ 17
#endif

#ifndef __LFRACT_EPSILON__
#define __LFRACT_EPSILON__ 0x1P-31LR
#endif

#ifndef __FLT64_EPSILON__
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#endif

#ifndef __ULFRACT_MIN__
#define __ULFRACT_MIN__ 0.0ULR
#endif

#ifndef __INTMAX_WIDTH__
#define __INTMAX_WIDTH__ 64
#endif

#ifndef __has_include_next
#define __has_include_next(STR) __has_include_next__(STR)
#endif

#ifndef __LDBL_HAS_QUIET_NAN__
#define __LDBL_HAS_QUIET_NAN__ 1
#endif

#ifndef __ULACCUM_IBIT__
#define __ULACCUM_IBIT__ 32
#endif

#ifndef __FLT64_MANT_DIG__
#define __FLT64_MANT_DIG__ 53
#endif

#ifndef __UACCUM_EPSILON__
#define __UACCUM_EPSILON__ 0x1P-16UK
#endif

#ifndef __GNUC__
#define __GNUC__ 7
#endif

#ifndef __ULLACCUM_MAX__
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#endif

#ifndef __HQ_IBIT__
#define __HQ_IBIT__ 0
#endif

#ifndef __FLT_HAS_DENORM__
#define __FLT_HAS_DENORM__ 1
#endif

#ifndef __SIZEOF_LONG_DOUBLE__
#define __SIZEOF_LONG_DOUBLE__ 8
#endif

#ifndef _R3000
#define _R3000 1
#endif

#ifndef __BIGGEST_ALIGNMENT__
#define __BIGGEST_ALIGNMENT__ 8
#endif

#ifndef __FLT64_MAX_10_EXP__
#define __FLT64_MAX_10_EXP__ 308
#endif

#ifndef __GNUC_STDC_INLINE__
#define __GNUC_STDC_INLINE__ 1
#endif

#ifndef __DQ_IBIT__
#define __DQ_IBIT__ 0
#endif

#ifndef __DBL_MAX__
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#endif

#ifndef __ULFRACT_IBIT__
#define __ULFRACT_IBIT__ 0
#endif

#ifndef __INT_FAST32_MAX__
#define __INT_FAST32_MAX__ 0x7fffffff
#endif

#ifndef __DBL_HAS_INFINITY__
#define __DBL_HAS_INFINITY__ 1
#endif

#ifndef __ACCUM_IBIT__
#define __ACCUM_IBIT__ 16
#endif

#ifndef __DEC32_MIN_EXP__
#define __DEC32_MIN_EXP__ (-94)
#endif

#ifndef __INTPTR_WIDTH__
#define __INTPTR_WIDTH__ 32
#endif

#ifndef __LACCUM_MAX__
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#endif

#ifndef __FLT32X_HAS_DENORM__
#define __FLT32X_HAS_DENORM__ 1
#endif

#ifndef __INT_FAST16_TYPE__
#define __INT_FAST16_TYPE__ int
#endif

#ifndef __LDBL_HAS_DENORM__
#define __LDBL_HAS_DENORM__ 1
#endif

#ifndef __DEC128_MAX__
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#endif

#ifndef __INT_LEAST32_MAX__
#define __INT_LEAST32_MAX__ 0x7fffffffL
#endif

#ifndef __DEC32_MIN__
#define __DEC32_MIN__ 1E-95DF
#endif

#ifndef __ACCUM_MAX__
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#endif

#ifndef __DBL_MAX_EXP__
#define __DBL_MAX_EXP__ 1024
#endif

#ifndef __USACCUM_EPSILON__
#define __USACCUM_EPSILON__ 0x1P-8UHK
#endif

#ifndef __WCHAR_WIDTH__
#define __WCHAR_WIDTH__ 32
#endif

#ifndef __FLT32_MAX__
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#endif

#ifndef __R3000__
#define __R3000__ 1
#endif

#ifndef __DEC128_EPSILON__
#define __DEC128_EPSILON__ 1E-33DL
#endif

#ifndef __SFRACT_MAX__
#define __SFRACT_MAX__ 0X7FP-7HR
#endif

#ifndef __FRACT_IBIT__
#define __FRACT_IBIT__ 0
#endif

#ifndef __PTRDIFF_MAX__
#define __PTRDIFF_MAX__ 0x7fffffff
#endif

#ifndef __UACCUM_MIN__
#define __UACCUM_MIN__ 0.0UK
#endif

#ifndef mips
#define mips 1
#endif

#ifndef __UACCUM_IBIT__
#define __UACCUM_IBIT__ 16
#endif

#ifndef __FLT32_HAS_QUIET_NAN__
#define __FLT32_HAS_QUIET_NAN__ 1
#endif

#ifndef __LONG_LONG_MAX__
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#endif

#ifndef __SIZEOF_SIZE_T__
#define __SIZEOF_SIZE_T__ 4
#endif

#ifndef __ULACCUM_MAX__
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#endif

#ifndef _MIPS_ARCH_MIPS1
#define _MIPS_ARCH_MIPS1 1
#endif

#ifndef __SIZEOF_WINT_T__
#define __SIZEOF_WINT_T__ 4
#endif

#ifndef __LONG_LONG_WIDTH__
#define __LONG_LONG_WIDTH__ 64
#endif

#ifndef __FLT32_MAX_EXP__
#define __FLT32_MAX_EXP__ 128
#endif

#ifndef __SA_IBIT__
#define __SA_IBIT__ 16
#endif

#ifndef __ULLACCUM_MIN__
#define __ULLACCUM_MIN__ 0.0ULLK
#endif

#ifndef __GXX_ABI_VERSION
#define __GXX_ABI_VERSION 1011
#endif

#ifndef __UTA_FBIT__
#define __UTA_FBIT__ 64
#endif

#ifndef __FLT_MIN_EXP__
#define __FLT_MIN_EXP__ (-125)
#endif

#ifndef __USFRACT_MAX__
#define __USFRACT_MAX__ 0XFFP-8UHR
#endif

#ifndef __UFRACT_IBIT__
#define __UFRACT_IBIT__ 0
#endif

#ifndef __INT_FAST64_TYPE__
#define __INT_FAST64_TYPE__ long long int
#endif

#ifndef _MIPSEL
#define _MIPSEL 1
#endif

#ifndef __FLT64_DENORM_MIN__
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#endif

#ifndef __DBL_MIN__
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#endif

#ifndef _MIPS_ARCH
#define _MIPS_ARCH "mips1"
#endif

#ifndef __SDE_MIPS__
#define __SDE_MIPS__ 1
#endif

#ifndef __mips_no_lxc1_sxc1
#define __mips_no_lxc1_sxc1 1
#endif

#ifndef __FLT32X_EPSILON__
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#endif

#ifndef _MIPS_SPFPSET
#define _MIPS_SPFPSET 16
#endif

#ifndef __FLT64_MIN_EXP__
#define __FLT64_MIN_EXP__ (-1021)
#endif

#ifndef __LACCUM_MIN__
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#endif

#ifndef __ULLACCUM_FBIT__
#define __ULLACCUM_FBIT__ 32
#endif

#ifndef __FLT64_MIN_10_EXP__
#define __FLT64_MIN_10_EXP__ (-307)
#endif

#ifndef __ULLFRACT_EPSILON__
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#endif

#ifndef __DEC128_MIN__
#define __DEC128_MIN__ 1E-6143DL
#endif

#ifndef __REGISTER_PREFIX__
#define __REGISTER_PREFIX__ $
#endif

#ifndef __UINT16_MAX__
#define __UINT16_MAX__ 0xffff
#endif

#ifndef __DBL_HAS_DENORM__
#define __DBL_HAS_DENORM__ 1
#endif

#ifndef __ACCUM_MIN__
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#endif

#ifndef __SQ_IBIT__
#define __SQ_IBIT__ 0
#endif

#ifndef __FLT32_MIN__
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#endif

#ifndef __UINT8_TYPE__
#define __UINT8_TYPE__ unsigned char
#endif

#ifndef __UHA_FBIT__
#define __UHA_FBIT__ 8
#endif

#ifndef __NO_INLINE__
#define __NO_INLINE__ 1
#endif

#ifndef __SFRACT_MIN__
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#endif

#ifndef __R3000
#define __R3000 1
#endif

#ifndef __UTQ_FBIT__
#define __UTQ_FBIT__ 128
#endif

#ifndef __FLT_MANT_DIG__
#define __FLT_MANT_DIG__ 24
#endif

#ifndef __LDBL_DECIMAL_DIG__
#define __LDBL_DECIMAL_DIG__ 17
#endif

#ifndef __VERSION__
#define __VERSION__ "7.1.0"
#endif

#ifndef __UINT64_C
#define __UINT64_C(c) c ## ULL
#endif

#ifndef __ULLFRACT_FBIT__
#define __ULLFRACT_FBIT__ 64
#endif

#ifndef __FRACT_EPSILON__
#define __FRACT_EPSILON__ 0x1P-15R
#endif

#ifndef __ULACCUM_MIN__
#define __ULACCUM_MIN__ 0.0ULK
#endif

#ifndef __UDA_FBIT__
#define __UDA_FBIT__ 32
#endif

#ifndef __LLACCUM_EPSILON__
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#endif

#ifndef _MIPS_TUNE_MIPS1
#define _MIPS_TUNE_MIPS1 1
#endif

#ifndef __GCC_ATOMIC_INT_LOCK_FREE
#define __GCC_ATOMIC_INT_LOCK_FREE 1
#endif

#ifndef __FLT32_MANT_DIG__
#define __FLT32_MANT_DIG__ 24
#endif

#ifndef __FLOAT_WORD_ORDER__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#endif

#ifndef __USFRACT_MIN__
#define __USFRACT_MIN__ 0.0UHR
#endif

#ifndef __UQQ_IBIT__
#define __UQQ_IBIT__ 0
#endif

#ifndef __SCHAR_WIDTH__
#define __SCHAR_WIDTH__ 8
#endif

#ifndef __INT32_C
#define __INT32_C(c) c ## L
#endif

#ifndef __DEC64_EPSILON__
#define __DEC64_EPSILON__ 1E-15DD
#endif

#ifndef __ORDER_PDP_ENDIAN__
#define __ORDER_PDP_ENDIAN__ 3412
#endif

#ifndef __DEC128_MIN_EXP__
#define __DEC128_MIN_EXP__ (-6142)
#endif

#ifndef __UHQ_FBIT__
#define __UHQ_FBIT__ 16
#endif

#ifndef __LLACCUM_FBIT__
#define __LLACCUM_FBIT__ 31
#endif

#ifndef __FLT32_MAX_10_EXP__
#define __FLT32_MAX_10_EXP__ 38
#endif

#ifndef __INT_FAST32_TYPE__
#define __INT_FAST32_TYPE__ int
#endif

#ifndef __UINT_LEAST16_TYPE__
#define __UINT_LEAST16_TYPE__ short unsigned int
#endif

#ifndef __INT16_MAX__
#define __INT16_MAX__ 0x7fff
#endif

#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ unsigned int
#endif

#ifndef __UINT64_MAX__
#define __UINT64_MAX__ 0xffffffffffffffffULL
#endif

#ifndef __UDQ_FBIT__
#define __UDQ_FBIT__ 64
#endif

#ifndef __INT8_TYPE__
#define __INT8_TYPE__ signed char
#endif

#ifndef __ELF__
#define __ELF__ 1
#endif

#ifndef __ULFRACT_EPSILON__
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#endif

#ifndef __LLFRACT_FBIT__
#define __LLFRACT_FBIT__ 63
#endif

#ifndef __FLT_RADIX__
#define __FLT_RADIX__ 2
#endif

#ifndef __INT_LEAST16_TYPE__
#define __INT_LEAST16_TYPE__ short int
#endif

#ifndef __LDBL_EPSILON__
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#endif

#ifndef __UINTMAX_C
#define __UINTMAX_C(c) c ## ULL
#endif

#ifndef __SACCUM_MAX__
#define __SACCUM_MAX__ 0X7FFFP-7HK
#endif

#ifndef __SIG_ATOMIC_MAX__
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#endif

#ifndef __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 1
#endif

#ifndef __SIZEOF_PTRDIFF_T__
#define __SIZEOF_PTRDIFF_T__ 4
#endif

#ifndef __FLT32X_MANT_DIG__
#define __FLT32X_MANT_DIG__ 53
#endif

#ifndef __LACCUM_EPSILON__
#define __LACCUM_EPSILON__ 0x1P-31LK
#endif

#ifndef __FLT32X_MIN_EXP__
#define __FLT32X_MIN_EXP__ (-1021)
#endif

#ifndef __DEC32_SUBNORMAL_MIN__
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#endif

#ifndef __INT_FAST16_MAX__
#define __INT_FAST16_MAX__ 0x7fffffff
#endif

#ifndef _MIPS_SZPTR
#define _MIPS_SZPTR 32
#endif

#ifndef __FLT64_DIG__
#define __FLT64_DIG__ 15
#endif

#ifndef __UINT_FAST32_MAX__
#define __UINT_FAST32_MAX__ 0xffffffffU
#endif

#ifndef __UINT_LEAST64_TYPE__
#define __UINT_LEAST64_TYPE__ long long unsigned int
#endif

#ifndef __USACCUM_MAX__
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#endif

#ifndef __SFRACT_EPSILON__
#define __SFRACT_EPSILON__ 0x1P-7HR
#endif

#ifndef __FLT_HAS_QUIET_NAN__
#define __FLT_HAS_QUIET_NAN__ 1
#endif

#ifndef __FLT_MAX_10_EXP__
#define __FLT_MAX_10_EXP__ 38
#endif

#ifndef __LONG_MAX__
#define __LONG_MAX__ 0x7fffffffL
#endif

#ifndef __DEC128_SUBNORMAL_MIN__
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#endif

#ifndef __FLT_HAS_INFINITY__
#define __FLT_HAS_INFINITY__ 1
#endif

#ifndef __USA_FBIT__
#define __USA_FBIT__ 16
#endif

#ifndef __UINT_FAST16_TYPE__
#define __UINT_FAST16_TYPE__ unsigned int
#endif

#ifndef __DEC64_MAX__
#define __DEC64_MAX__ 9.999999999999999E384DD
#endif

#ifndef __INT_FAST32_WIDTH__
#define __INT_FAST32_WIDTH__ 32
#endif

#ifndef __CHAR16_TYPE__
#define __CHAR16_TYPE__ short unsigned int
#endif

#ifndef __PRAGMA_REDEFINE_EXTNAME
#define __PRAGMA_REDEFINE_EXTNAME 1
#endif

#ifndef __SIZE_WIDTH__
#define __SIZE_WIDTH__ 32
#endif

#ifndef __INT_LEAST16_MAX__
#define __INT_LEAST16_MAX__ 0x7fff
#endif

#ifndef __DEC64_MANT_DIG__
#define __DEC64_MANT_DIG__ 16
#endif

#ifndef __INT64_MAX__
#define __INT64_MAX__ 0x7fffffffffffffffLL
#endif

#ifndef __UINT_LEAST32_MAX__
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#endif

#ifndef __SACCUM_FBIT__
#define __SACCUM_FBIT__ 7
#endif

#ifndef __FLT32_DENORM_MIN__
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#endif

#ifndef __GCC_ATOMIC_LONG_LOCK_FREE
#define __GCC_ATOMIC_LONG_LOCK_FREE 1
#endif

#ifndef __SIG_ATOMIC_WIDTH__
#define __SIG_ATOMIC_WIDTH__ 32
#endif

#ifndef __INT_LEAST64_TYPE__
#define __INT_LEAST64_TYPE__ long long int
#endif

#ifndef __INT16_TYPE__
#define __INT16_TYPE__ short int
#endif

#ifndef __INT_LEAST8_TYPE__
#define __INT_LEAST8_TYPE__ signed char
#endif

#ifndef _mips
#define _mips 1
#endif

#ifndef __SQ_FBIT__
#define __SQ_FBIT__ 31
#endif

#ifndef __DEC32_MAX_EXP__
#define __DEC32_MAX_EXP__ 97
#endif

#ifndef __INT_FAST8_MAX__
#define __INT_FAST8_MAX__ 0x7fffffff
#endif

#ifndef __INTPTR_MAX__
#define __INTPTR_MAX__ 0x7fffffff
#endif

#ifndef __QQ_FBIT__
#define __QQ_FBIT__ 7
#endif

#ifndef __UTA_IBIT__
#define __UTA_IBIT__ 64
#endif

#ifndef __FLT64_HAS_QUIET_NAN__
#define __FLT64_HAS_QUIET_NAN__ 1
#endif

#ifndef _MIPS_SZINT
#define _MIPS_SZINT 32
#endif

#ifndef __FLT32_MIN_10_EXP__
#define __FLT32_MIN_10_EXP__ (-37)
#endif

#ifndef __FLT32X_DIG__
#define __FLT32X_DIG__ 15
#endif

#ifndef __LDBL_MANT_DIG__
#define __LDBL_MANT_DIG__ 53
#endif

#ifndef __SFRACT_FBIT__
#define __SFRACT_FBIT__ 7
#endif

#ifndef __SACCUM_MIN__
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#endif

#ifndef __DBL_HAS_QUIET_NAN__
#define __DBL_HAS_QUIET_NAN__ 1
#endif

#ifndef __FLT64_HAS_INFINITY__
#define __FLT64_HAS_INFINITY__ 1
#endif

#ifndef __MIPSEL
#define __MIPSEL 1
#endif

#ifndef __SIG_ATOMIC_MIN__
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#endif

#ifndef __INTPTR_TYPE__
#define __INTPTR_TYPE__ int
#endif

#ifndef __UINT16_TYPE__
#define __UINT16_TYPE__ short unsigned int
#endif

#ifndef __WCHAR_TYPE__
#define __WCHAR_TYPE__ int
#endif

#ifndef __SIZEOF_FLOAT__
#define __SIZEOF_FLOAT__ 4
#endif

#ifndef __USQ_FBIT__
#define __USQ_FBIT__ 32
#endif

#ifndef __UINTPTR_MAX__
#define __UINTPTR_MAX__ 0xffffffffU
#endif

#ifndef __INT_FAST64_WIDTH__
#define __INT_FAST64_WIDTH__ 64
#endif

#ifndef __DEC64_MIN_EXP__
#define __DEC64_MIN_EXP__ (-382)
#endif

#ifndef __ULLACCUM_IBIT__
#define __ULLACCUM_IBIT__ 32
#endif

#ifndef __FLT32_DECIMAL_DIG__
#define __FLT32_DECIMAL_DIG__ 9
#endif

#ifndef __INT_FAST64_MAX__
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#endif

#ifndef __GCC_ATOMIC_TEST_AND_SET_TRUEVAL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#endif

#ifndef __FLT_DIG__
#define __FLT_DIG__ 6
#endif

#ifndef __FLT32_HAS_INFINITY__
#define __FLT32_HAS_INFINITY__ 1
#endif

#ifndef __UINT_FAST64_TYPE__
#define __UINT_FAST64_TYPE__ long long unsigned int
#endif

#ifndef __INT_MAX__
#define __INT_MAX__ 0x7fffffff
#endif

#ifndef __LACCUM_FBIT__
#define __LACCUM_FBIT__ 31
#endif

#ifndef __USACCUM_MIN__
#define __USACCUM_MIN__ 0.0UHK
#endif

#ifndef __UHA_IBIT__
#define __UHA_IBIT__ 8
#endif

#ifndef __INT64_TYPE__
#define __INT64_TYPE__ long long int
#endif

#ifndef __FLT_MAX_EXP__
#define __FLT_MAX_EXP__ 128
#endif

#ifndef __UTQ_IBIT__
#define __UTQ_IBIT__ 0
#endif

#ifndef _MIPS_SIM
#define _MIPS_SIM _ABIO32
#endif

#ifndef __DBL_MANT_DIG__
#define __DBL_MANT_DIG__ 53
#endif

#ifndef __INT_LEAST64_MAX__
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#endif

#ifndef __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 1
#endif

#ifndef __DEC64_MIN__
#define __DEC64_MIN__ 1E-383DD
#endif

#ifndef __WINT_TYPE__
#define __WINT_TYPE__ unsigned int
#endif

#ifndef __UINT_LEAST32_TYPE__
#define __UINT_LEAST32_TYPE__ long unsigned int
#endif

#ifndef __SIZEOF_SHORT__
#define __SIZEOF_SHORT__ 2
#endif

#ifndef __ULLFRACT_IBIT__
#define __ULLFRACT_IBIT__ 0
#endif

#ifndef __LDBL_MIN_EXP__
#define __LDBL_MIN_EXP__ (-1021)
#endif

#ifndef _MIPS_FPSET
#define _MIPS_FPSET 16
#endif

#ifndef __FLT64_MAX__
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#endif

#ifndef __UDA_IBIT__
#define __UDA_IBIT__ 32
#endif

#ifndef __WINT_WIDTH__
#define __WINT_WIDTH__ 32
#endif

#ifndef __INT_LEAST8_MAX__
#define __INT_LEAST8_MAX__ 0x7f
#endif

#ifndef __FLT32X_MAX_10_EXP__
#define __FLT32X_MAX_10_EXP__ 308
#endif

#ifndef __LFRACT_FBIT__
#define __LFRACT_FBIT__ 31
#endif

#ifndef __LDBL_MAX_10_EXP__
#define __LDBL_MAX_10_EXP__ 308
#endif

#ifndef __ATOMIC_RELAXED
#define __ATOMIC_RELAXED 0
#endif

#ifndef __DBL_EPSILON__
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#endif

#ifndef __UINT8_C
#define __UINT8_C(c) c
#endif

#ifndef __FLT64_MAX_EXP__
#define __FLT64_MAX_EXP__ 1024
#endif

#ifndef __INT_LEAST32_TYPE__
#define __INT_LEAST32_TYPE__ long int
#endif

#ifndef __SIZEOF_WCHAR_T__
#define __SIZEOF_WCHAR_T__ 4
#endif

#ifndef __UINT64_TYPE__
#define __UINT64_TYPE__ long long unsigned int
#endif

#ifndef __LLFRACT_MAX__
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#endif

#ifndef __TQ_FBIT__
#define __TQ_FBIT__ 127
#endif

#ifndef __INT_FAST8_TYPE__
#define __INT_FAST8_TYPE__ int
#endif

#ifndef __ULLACCUM_EPSILON__
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#endif

#ifndef __UHQ_IBIT__
#define __UHQ_IBIT__ 0
#endif

#ifndef __LLACCUM_IBIT__
#define __LLACCUM_IBIT__ 32
#endif

#ifndef __FLT64_HAS_DENORM__
#define __FLT64_HAS_DENORM__ 1
#endif

#ifndef __FLT32_EPSILON__
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#endif

#ifndef __DBL_DECIMAL_DIG__
#define __DBL_DECIMAL_DIG__ 17
#endif

#ifndef __STDC_UTF_32__
#define __STDC_UTF_32__ 1
#endif

#ifndef __INT_FAST8_WIDTH__
#define __INT_FAST8_WIDTH__ 32
#endif

#ifndef __DEC_EVAL_METHOD__
#define __DEC_EVAL_METHOD__ 2
#endif

#ifndef __FLT32X_MAX__
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#endif

#ifndef __TA_FBIT__
#define __TA_FBIT__ 63
#endif

#ifndef __UDQ_IBIT__
#define __UDQ_IBIT__ 0
#endif

#ifndef __ORDER_BIG_ENDIAN__
#define __ORDER_BIG_ENDIAN__ 4321
#endif

#ifndef __ACCUM_EPSILON__
#define __ACCUM_EPSILON__ 0x1P-15K
#endif

#ifndef __UINT32_C
#define __UINT32_C(c) c ## UL
#endif

#ifndef __INTMAX_MAX__
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#endif

#ifndef __BYTE_ORDER__
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#endif

#ifndef __FLT_DENORM_MIN__
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#endif

#ifndef __LLFRACT_IBIT__
#define __LLFRACT_IBIT__ 0
#endif

#ifndef __INT8_MAX__
#define __INT8_MAX__ 0x7f
#endif

#ifndef __LONG_WIDTH__
#define __LONG_WIDTH__ 32
#endif

#ifndef __UINT_FAST32_TYPE__
#define __UINT_FAST32_TYPE__ unsigned int
#endif

#ifndef __CHAR32_TYPE__
#define __CHAR32_TYPE__ long unsigned int
#endif

#ifndef __FLT_MAX__
#define __FLT_MAX__ 3.4028234663852886e+38F
#endif

#ifndef LANGUAGE_C
#define LANGUAGE_C 1
#endif

#ifndef __USACCUM_FBIT__
#define __USACCUM_FBIT__ 8
#endif

#ifndef __INT32_TYPE__
#define __INT32_TYPE__ long int
#endif

#ifndef __SIZEOF_DOUBLE__
#define __SIZEOF_DOUBLE__ 8
#endif

#ifndef __FLT_MIN_10_EXP__
#define __FLT_MIN_10_EXP__ (-37)
#endif

#ifndef __UFRACT_EPSILON__
#define __UFRACT_EPSILON__ 0x1P-16UR
#endif

#ifndef __FLT64_MIN__
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#endif

#ifndef __INT_LEAST32_WIDTH__
#define __INT_LEAST32_WIDTH__ 32
#endif

#ifndef __INTMAX_TYPE__
#define __INTMAX_TYPE__ long long int
#endif

#ifndef _LANGUAGE_C
#define _LANGUAGE_C 1
#endif

#ifndef __DEC128_MAX_EXP__
#define __DEC128_MAX_EXP__ 6145
#endif

#ifndef __FLT32X_HAS_QUIET_NAN__
#define __FLT32X_HAS_QUIET_NAN__ 1
#endif

#ifndef __ATOMIC_CONSUME
#define __ATOMIC_CONSUME 1
#endif

#ifndef __GNUC_MINOR__
#define __GNUC_MINOR__ 1
#endif

#ifndef __INT_FAST16_WIDTH__
#define __INT_FAST16_WIDTH__ 32
#endif

#ifndef __UINTMAX_MAX__
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#endif

#ifndef __DEC32_MANT_DIG__
#define __DEC32_MANT_DIG__ 7
#endif

#ifndef __FLT32X_DENORM_MIN__
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#endif

#ifndef __HA_FBIT__
#define __HA_FBIT__ 7
#endif

#ifndef __DBL_MAX_10_EXP__
#define __DBL_MAX_10_EXP__ 308
#endif

#ifndef __LDBL_DENORM_MIN__
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#endif

#ifndef __INT16_C
#define __INT16_C(c) c
#endif

#ifndef __STDC__
#define __STDC__ 1
#endif

#ifndef __mips_hard_float
#define __mips_hard_float 1
#endif

#ifndef __PTRDIFF_TYPE__
#define __PTRDIFF_TYPE__ int
#endif

#ifndef __LLFRACT_MIN__
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#endif

#ifndef __mips
#define __mips 1
#endif

#ifndef __ATOMIC_SEQ_CST
#define __ATOMIC_SEQ_CST 5
#endif

#ifndef __DA_FBIT__
#define __DA_FBIT__ 31
#endif

#ifndef __UINT32_TYPE__
#define __UINT32_TYPE__ long unsigned int
#endif

#ifndef _MIPS_SZLONG
#define _MIPS_SZLONG 32
#endif

#ifndef __FLT32X_MIN_10_EXP__
#define __FLT32X_MIN_10_EXP__ (-307)
#endif

#ifndef __UINTPTR_TYPE__
#define __UINTPTR_TYPE__ unsigned int
#endif

#ifndef __USA_IBIT__
#define __USA_IBIT__ 16
#endif

#ifndef __DEC64_SUBNORMAL_MIN__
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#endif

#ifndef __DEC128_MANT_DIG__
#define __DEC128_MANT_DIG__ 34
#endif

#ifndef __LDBL_MIN_10_EXP__
#define __LDBL_MIN_10_EXP__ (-307)
#endif

#ifndef __SIZEOF_LONG_LONG__
#define __SIZEOF_LONG_LONG__ 8
#endif

#ifndef __ULACCUM_EPSILON__
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#endif

#ifndef __SACCUM_IBIT__
#define __SACCUM_IBIT__ 8
#endif

#ifndef __GCC_ATOMIC_LLONG_LOCK_FREE
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#endif

#ifndef __FLT32X_MIN__
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#endif

#ifndef __LDBL_DIG__
#define __LDBL_DIG__ 15
#endif

#ifndef __FLT_DECIMAL_DIG__
#define __FLT_DECIMAL_DIG__ 9
#endif

#ifndef __UINT_FAST16_MAX__
#define __UINT_FAST16_MAX__ 0xffffffffU
#endif

#ifndef __GCC_ATOMIC_SHORT_LOCK_FREE
#define __GCC_ATOMIC_SHORT_LOCK_FREE 1
#endif

#ifndef __INT_LEAST64_WIDTH__
#define __INT_LEAST64_WIDTH__ 64
#endif

#ifndef __ULLFRACT_MAX__
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#endif

#ifndef __UINT_FAST8_TYPE__
#define __UINT_FAST8_TYPE__ unsigned int
#endif

#ifndef __USFRACT_EPSILON__
#define __USFRACT_EPSILON__ 0x1P-8UHR
#endif

#ifndef __ULACCUM_FBIT__
#define __ULACCUM_FBIT__ 32
#endif

#ifndef __QQ_IBIT__
#define __QQ_IBIT__ 0
#endif

#ifndef __ATOMIC_ACQ_REL
#define __ATOMIC_ACQ_REL 4
#endif

#ifndef __ATOMIC_RELEASE
#define __ATOMIC_RELEASE 3
#endif
