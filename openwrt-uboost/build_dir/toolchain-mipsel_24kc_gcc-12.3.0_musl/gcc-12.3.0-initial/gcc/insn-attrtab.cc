/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
insn_current_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_compression cached_compression ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 619:  /* *jump_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (2046)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (2046)))
        {
	  return 2;
        }
      else if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (65534)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (65532)))
        {
	  return 4;
        }
      else if ((
#line 727 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_ABICALLS)) && (! (
#line 728 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_ABICALLS))))
        {
	  return 18 /* 0x12 */;
        }
      else if (
#line 730 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(Pmode == SImode))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 22 /* 0x16 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if (((((cached_compression = get_attr_compression (insn)) == COMPRESSION_MICROMIPS) || (cached_compression == COMPRESSION_ALL)) || ((cached_compression == COMPRESSION_MICROMIPS32) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_SF)))) && (get_attr_dword_mode (insn) == DWORD_MODE_NO) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 0;
        }
      else if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (65532)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (65534)))
	    {
	      return 4;
	    }
	  else if ((! (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS))) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (131064)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (131068)))
	    {
	      return 4;
	    }
	  else if (
#line 636 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_JUMPS))
	    {
	      return 12 /* 0xc */;
	    }
	  else
	    {
	      return 100 /* 0x64 */;
	    }
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (254)))
	    {
	      return 2;
	    }
	  else if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (65534)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (65532)))
	    {
	      return 4;
	    }
	  else if ((
#line 727 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_ABICALLS)) && (! (
#line 728 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_ABICALLS))))
	    {
	      return 20 /* 0x14 */;
	    }
	  else if (
#line 730 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(Pmode == SImode))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 24 /* 0x18 */;
	    }
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_compression cached_compression ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
    case 619:  /* *jump_mips16 */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if (((((cached_compression = get_attr_compression (insn)) == COMPRESSION_MICROMIPS) || (cached_compression == COMPRESSION_ALL)) || ((cached_compression == COMPRESSION_MICROMIPS32) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_SF)))) && (get_attr_dword_mode (insn) == DWORD_MODE_NO) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 0;
        }
      else if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_min_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_compression cached_compression ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2bULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x367ULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 184:  /* *anddi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x88ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x88ULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 219:  /* *zero_extendhidi2 */
    case 217:  /* *zero_extendqidi2 */
    case 192:  /* *xordi3 */
    case 188:  /* *iordi3 */
    case 182:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 443:  /* *lshrsi3 */
    case 441:  /* *ashlsi3 */
    case 218:  /* *zero_extendhisi2 */
    case 216:  /* *zero_extendqisi2 */
    case 191:  /* *xorsi3 */
    case 187:  /* *iorsi3 */
    case 181:  /* one_cmplsi2 */
    case 26:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 13:  /* *addsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x3dULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 702:  /* align */
      extract_constrain_insn_cached (insn);
      return 
#line 7498 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((1 << INTVAL (operands[0])) - 1);

    case 701:  /* consttable_float */
      extract_constrain_insn_cached (insn);
      return 
#line 7492 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GET_MODE_SIZE (GET_MODE (operands[0])));

    case 700:  /* consttable_int */
    case 699:  /* consttable_tls_reloc */
      extract_constrain_insn_cached (insn);
      return 
#line 7478 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(INTVAL (operands[1]));

    case 619:  /* *jump_mips16 */
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if (((((cached_compression = get_attr_compression (insn)) == COMPRESSION_MICROMIPS) || (cached_compression == COMPRESSION_ALL)) || ((cached_compression == COMPRESSION_MICROMIPS32) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_SF)))) && (get_attr_dword_mode (insn) == DWORD_MODE_NO) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  return 4;
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    default:
      extract_constrain_insn_cached (insn);
      return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);

    }
}

int
insn_default_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_compression cached_compression ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 100 /* 0x64 */;
        }
      else
        {
	  return 24 /* 0x18 */;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2bULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x367ULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 184:  /* *anddi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x88ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x88ULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 219:  /* *zero_extendhidi2 */
    case 217:  /* *zero_extendqidi2 */
    case 192:  /* *xordi3 */
    case 188:  /* *iordi3 */
    case 182:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 443:  /* *lshrsi3 */
    case 441:  /* *ashlsi3 */
    case 218:  /* *zero_extendhisi2 */
    case 216:  /* *zero_extendqisi2 */
    case 191:  /* *xorsi3 */
    case 187:  /* *iorsi3 */
    case 181:  /* one_cmplsi2 */
    case 26:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 13:  /* *addsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x3dULL)) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    case 702:  /* align */
      extract_constrain_insn_cached (insn);
      return 
#line 7498 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((1 << INTVAL (operands[0])) - 1);

    case 701:  /* consttable_float */
      extract_constrain_insn_cached (insn);
      return 
#line 7492 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GET_MODE_SIZE (GET_MODE (operands[0])));

    case 700:  /* consttable_int */
    case 699:  /* consttable_tls_reloc */
      extract_constrain_insn_cached (insn);
      return 
#line 7478 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(INTVAL (operands[1]));

    case 619:  /* *jump_mips16 */
      return 22 /* 0x16 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if (((((cached_compression = get_attr_compression (insn)) == COMPRESSION_MICROMIPS) || (cached_compression == COMPRESSION_ALL)) || ((cached_compression == COMPRESSION_MICROMIPS32) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_SF)))) && (get_attr_dword_mode (insn) == DWORD_MODE_NO) && (
#line 581 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MICROMIPS)))
        {
	  return 2;
        }
      else if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 24 /* 0x18 */;
        }
      else
        {
	  return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);
        }

    default:
      extract_constrain_insn_cached (insn);
      return 
#line 733 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) * BASE_INSN_LENGTH);

    }
}

int
bypass_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_cnv_mode cached_cnv_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 826:  /* sungt_ps */
    case 825:  /* sunge_ps */
    case 824:  /* sgt_ps */
    case 823:  /* sge_ps */
    case 822:  /* sne_ps */
    case 821:  /* sltgt_ps */
    case 820:  /* sordered_ps */
    case 819:  /* sle_ps */
    case 818:  /* slt_ps */
    case 817:  /* seq_ps */
    case 816:  /* sunle_ps */
    case 815:  /* sunlt_ps */
    case 814:  /* suneq_ps */
    case 813:  /* sunordered_ps */
    case 812:  /* mips_cabs_cond_ps */
    case 811:  /* mips_c_cond_ps */
    case 810:  /* mips_cabs_cond_4s */
    case 809:  /* mips_c_cond_4s */
    case 808:  /* mips_cabs_cond_d */
    case 807:  /* mips_cabs_cond_s */
    case 616:  /* sungt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 609:  /* sge_sf_using_ccf */
    case 608:  /* sungt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 605:  /* sge_df_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 601:  /* sge_sf_using_cc */
    case 600:  /* sne_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 581:  /* sunordered_sf_using_ccf */
    case 580:  /* sle_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 567:  /* sunordered_sf_using_cc */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1162:  /* vec_loongson_extract_lo_v8qi */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 641:  /* cop0_move */
    case 417:  /* mfhc1tf */
    case 416:  /* mfhc1v8qi */
    case 415:  /* mfhc1v4hi */
    case 414:  /* mfhc1v2si */
    case 413:  /* mfhc1v2sf */
    case 412:  /* mfhc1di */
    case 411:  /* mfhc1df */
    case 410:  /* mthc1tf */
    case 409:  /* mthc1v8qi */
    case 408:  /* mthc1v4hi */
    case 407:  /* mthc1v2si */
    case 406:  /* mthc1v2sf */
    case 405:  /* mthc1di */
    case 404:  /* mthc1df */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 403:  /* store_wordtf */
    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if ((((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR))))) && (which_alternative == 0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 365:  /* movccf */
      extract_constrain_insn_cached (insn);
      if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 267:  /* fix_truncsfdi2 */
    case 266:  /* fix_truncdfdi2 */
    case 265:  /* fix_truncsfsi2_macro */
    case 264:  /* fix_truncsfsi2_insn */
    case 263:  /* fix_truncdfsi2_macro */
    case 262:  /* fix_truncdfsi2_insn */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 988:  /* mips_subqh_r_w */
    case 987:  /* mips_subqh_w */
    case 986:  /* mips_subqh_r_ph */
    case 985:  /* mips_subqh_ph */
    case 984:  /* mips_addqh_r_w */
    case 983:  /* mips_addqh_w */
    case 982:  /* mips_addqh_r_ph */
    case 981:  /* mips_addqh_ph */
    case 980:  /* mips_subuh_r_qb */
    case 979:  /* mips_subuh_qb */
    case 978:  /* mips_subu_s_ph */
    case 977:  /* mips_subu_ph */
    case 976:  /* mips_shrl_ph */
    case 975:  /* mips_shra_r_qb */
    case 974:  /* mips_shra_qb */
    case 973:  /* mips_prepend */
    case 972:  /* mips_precr_sra_r_ph_w */
    case 971:  /* mips_precr_sra_ph_w */
    case 970:  /* mips_precr_qb_ph */
    case 961:  /* mips_cmpgdu_le_qb */
    case 960:  /* mips_cmpgdu_lt_qb */
    case 959:  /* mips_cmpgdu_eq_qb */
    case 958:  /* mips_balign */
    case 957:  /* mips_append */
    case 956:  /* mips_adduh_r_qb */
    case 955:  /* mips_adduh_qb */
    case 954:  /* mips_addu_s_ph */
    case 953:  /* mips_addu_ph */
    case 952:  /* mips_absq_s_qb */
    case 926:  /* mips_rddsp */
    case 925:  /* mips_wrdsp */
    case 924:  /* mips_mthlip */
    case 923:  /* mips_shilo */
    case 922:  /* mips_extpdp */
    case 921:  /* mips_extp */
    case 920:  /* mips_extr_s_h */
    case 919:  /* mips_extr_rs_w */
    case 918:  /* mips_extr_r_w */
    case 917:  /* mips_extr_w */
    case 916:  /* mips_packrl_ph */
    case 915:  /* mips_pick_qb */
    case 914:  /* mips_pick_ph */
    case 913:  /* mips_cmpgu_le_qb */
    case 912:  /* mips_cmpgu_lt_qb */
    case 911:  /* mips_cmpgu_eq_qb */
    case 910:  /* mips_cmpu_le_qb */
    case 909:  /* mips_cmp_le_ph */
    case 908:  /* mips_cmpu_lt_qb */
    case 907:  /* mips_cmp_lt_ph */
    case 906:  /* mips_cmpu_eq_qb */
    case 905:  /* mips_cmp_eq_ph */
    case 904:  /* mips_repl_ph */
    case 903:  /* mips_repl_qb */
    case 902:  /* mips_insv */
    case 901:  /* mips_bitrev */
    case 882:  /* mips_shra_r_ph */
    case 881:  /* mips_shra_r_w */
    case 880:  /* mips_shra_ph */
    case 879:  /* mips_shrl_qb */
    case 878:  /* mips_shll_s_ph */
    case 877:  /* mips_shll_s_w */
    case 876:  /* mips_shll_qb */
    case 875:  /* mips_shll_ph */
    case 874:  /* mips_preceu_ph_qbra */
    case 873:  /* mips_preceu_ph_qbla */
    case 872:  /* mips_preceu_ph_qbr */
    case 871:  /* mips_preceu_ph_qbl */
    case 870:  /* mips_precequ_ph_qbra */
    case 869:  /* mips_precequ_ph_qbla */
    case 868:  /* mips_precequ_ph_qbr */
    case 867:  /* mips_precequ_ph_qbl */
    case 866:  /* mips_preceq_w_phr */
    case 865:  /* mips_preceq_w_phl */
    case 864:  /* mips_precrqu_s_qb_ph */
    case 863:  /* mips_precrq_rs_ph_w */
    case 862:  /* mips_precrq_ph_w */
    case 861:  /* mips_precrq_qb_ph */
    case 860:  /* mips_absq_s_ph */
    case 859:  /* mips_absq_s_w */
    case 858:  /* mips_raddu_w_qb */
    case 857:  /* mips_modsub */
    case 856:  /* mips_addwc */
    case 855:  /* mips_addsc */
    case 854:  /* mips_subu_s_qb */
    case 853:  /* mips_subq_s_ph */
    case 852:  /* mips_subq_s_w */
    case 851:  /* subv4qi3 */
    case 850:  /* subv2hi3 */
    case 849:  /* mips_addu_s_qb */
    case 848:  /* mips_addq_s_ph */
    case 847:  /* mips_addq_s_w */
    case 846:  /* addv4qi3 */
    case 845:  /* addv2hi3 */
    case 709:  /* tls_get_tp_mips16_di */
    case 708:  /* tls_get_tp_mips16_si */
    case 623:  /* indirect_jump_and_restore_di */
    case 622:  /* indirect_jump_and_restore_si */
    case 255:  /* *extendhi_truncateqi */
    case 254:  /* *extendsi_truncatehi */
    case 253:  /* *extendsi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 251:  /* *extenddi_truncateqi */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 145:  /* divmodsi4_hilo_ti */
    case 144:  /* udivmodsi4_hilo_di */
    case 143:  /* divmodsi4_hilo_di */
    case 142:  /* udivmoddi4_mips16 */
    case 141:  /* udivmodsi4_mips16 */
    case 140:  /* *udivmoddi4 */
    case 139:  /* *udivmodsi4 */
    case 138:  /* divmoddi4_mips16 */
    case 137:  /* divmodsi4_mips16 */
    case 136:  /* *divmoddi4 */
    case 135:  /* *divmodsi4 */
      if (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 128:  /* *nmsub4v2sf_fastmath */
    case 127:  /* *nmsub4df_fastmath */
    case 126:  /* *nmsub4sf_fastmath */
    case 125:  /* *nmadd4v2sf_fastmath */
    case 124:  /* *nmadd4df_fastmath */
    case 123:  /* *nmadd4sf_fastmath */
    case 122:  /* *nmsub4v2sf */
    case 121:  /* *nmsub4df */
    case 120:  /* *nmsub4sf */
    case 119:  /* *nmadd4v2sf */
    case 118:  /* *nmadd4df */
    case 117:  /* *nmadd4sf */
    case 116:  /* *msub4v2sf */
    case 115:  /* *msub4df */
    case 114:  /* *msub4sf */
    case 113:  /* *madd4v2sf */
    case 112:  /* *madd4df */
    case 111:  /* *madd4sf */
    case 110:  /* *fnmsv2sf4_nmadd4 */
    case 109:  /* *fnmsdf4_nmadd4 */
    case 108:  /* *fnmssf4_nmadd4 */
    case 107:  /* *fnmsv2sf4_nmadd3 */
    case 106:  /* *fnmsdf4_nmadd3 */
    case 105:  /* *fnmssf4_nmadd3 */
    case 104:  /* *fnmav2sf4_nmsub4 */
    case 103:  /* *fnmadf4_nmsub4 */
    case 102:  /* *fnmasf4_nmsub4 */
    case 101:  /* *fnmav2sf4_nmsub3 */
    case 100:  /* *fnmadf4_nmsub3 */
    case 99:  /* *fnmasf4_nmsub3 */
    case 98:  /* *fmsv2sf4_msub4 */
    case 97:  /* *fmsdf4_msub4 */
    case 96:  /* *fmssf4_msub4 */
    case 95:  /* *fmsv2sf4_msub3 */
    case 94:  /* *fmsdf4_msub3 */
    case 93:  /* *fmssf4_msub3 */
    case 92:  /* *fmav2sf4_maddf */
    case 91:  /* *fmadf4_maddf */
    case 90:  /* *fmasf4_maddf */
    case 89:  /* *fmav2sf4_madd4 */
    case 88:  /* *fmadf4_madd4 */
    case 87:  /* *fmasf4_madd4 */
    case 86:  /* *fmav2sf4_madd3 */
    case 85:  /* *fmadf4_madd3 */
    case 84:  /* *fmasf4_madd3 */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1056:  /* jraddiusp */
    case 638:  /* mips_ehb */
    case 637:  /* mips_di */
    case 636:  /* mips_deret */
    case 635:  /* mips_eret */
    case 336:  /* *ldxc1_di */
    case 335:  /* *ldxc1_di */
    case 334:  /* *lwxc1_di */
    case 333:  /* *ldxc1_si */
    case 332:  /* *ldxc1_si */
    case 331:  /* *lwxc1_si */
    case 9:  /* *conditional_trapdi */
    case 8:  /* *conditional_trapsi */
    case 7:  /* *conditional_trap_regdi */
    case 6:  /* *conditional_trap_regsi */
    case 5:  /* trap */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 13:  /* *addsi3 */
    case 14:  /* *adddi3 */
    case 15:  /* *addsi3_mips16 */
    case 16:  /* *adddi3_mips16 */
    case 17:  /* *addsi3_extended */
    case 18:  /* *addsi3_extended_mips16 */
    case 19:  /* *baddu_si_eb */
    case 20:  /* *baddu_si_el */
    case 21:  /* *baddu_disi */
    case 22:  /* *baddu_didi */
    case 26:  /* subsi3 */
    case 27:  /* subdi3 */
    case 28:  /* *subsi3_extended */
    case 36:  /* mulsi3_mul3 */
    case 37:  /* muldi3_mul3 */
    case 38:  /* mulsi3_internal */
    case 39:  /* muldi3_internal */
    case 40:  /* mulsi3_r4000 */
    case 41:  /* muldi3_r4000 */
    case 42:  /* *mul_acc_si */
    case 43:  /* *mul_acc_si_r3900 */
    case 44:  /* *macc */
    case 45:  /* *msac */
    case 46:  /* *msac_using_macc */
    case 47:  /* *macc2 */
    case 48:  /* *msac2 */
    case 49:  /* *mul_sub_si */
    case 50:  /* *muls */
    case 51:  /* mulsidi3_32bit */
    case 52:  /* umulsidi3_32bit */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 55:  /* mulsidi3_64bit */
    case 56:  /* umulsidi3_64bit */
    case 57:  /* mulsidi3_64bit_hilo */
    case 58:  /* umulsidi3_64bit_hilo */
    case 59:  /* mulsidi3_64bit_dmul */
    case 61:  /* *muls_di */
    case 62:  /* *mulsu_di */
    case 63:  /* msubsidi4 */
    case 64:  /* umsubsidi4 */
    case 67:  /* smulsi3_highpart_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 69:  /* smulsi3_highpart_mulhi_internal */
    case 70:  /* umulsi3_highpart_mulhi_internal */
    case 71:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 72:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 77:  /* mulditi3_internal */
    case 78:  /* umulditi3_internal */
    case 79:  /* mulditi3_r4000 */
    case 80:  /* umulditi3_r4000 */
    case 81:  /* madsi */
    case 82:  /* maddsidi4 */
    case 83:  /* umaddsidi4 */
    case 169:  /* clzsi2 */
    case 170:  /* clzdi2 */
    case 171:  /* ctzsi2 */
    case 172:  /* ctzdi2 */
    case 176:  /* negsi2 */
    case 177:  /* negdi2 */
    case 181:  /* one_cmplsi2 */
    case 182:  /* one_cmpldi2 */
    case 183:  /* *andsi3 */
    case 184:  /* *anddi3 */
    case 185:  /* *andsi3_mips16 */
    case 186:  /* *anddi3_mips16 */
    case 187:  /* *iorsi3 */
    case 188:  /* *iordi3 */
    case 189:  /* *iorsi3_mips16 */
    case 190:  /* *iordi3_mips16 */
    case 191:  /* *xorsi3 */
    case 192:  /* *xordi3 */
    case 193:  /* *xorsi3_mips16 */
    case 194:  /* *xordi3_mips16 */
    case 195:  /* *norsi3 */
    case 196:  /* *nordi3 */
    case 198:  /* truncdiqi2 */
    case 199:  /* truncdihi2 */
    case 200:  /* truncdisi2 */
    case 201:  /* *ashr_truncqi */
    case 202:  /* *ashr_trunchi */
    case 203:  /* *ashr_truncsi */
    case 204:  /* *lshr32_truncqi */
    case 205:  /* *lshr32_trunchi */
    case 206:  /* *lshr32_truncsi */
    case 207:  /* *ashr_truncqi_exts */
    case 208:  /* *lshr_truncqi_exts */
    case 209:  /* *ashr_trunchi_exts */
    case 210:  /* *lshr_trunchi_exts */
    case 211:  /* *ashr_truncsi_exts */
    case 212:  /* *lshr_truncsi_exts */
    case 213:  /* *mips.md:3524 */
    case 214:  /* *zero_extendsidi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 216:  /* *zero_extendqisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 219:  /* *zero_extendhidi2 */
    case 220:  /* *zero_extendqisi2_mips16e */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 222:  /* *zero_extendhisi2_mips16e */
    case 223:  /* *zero_extendhidi2_mips16e */
    case 224:  /* *zero_extendqisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 228:  /* *zero_extendqihi2 */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 230:  /* *zero_extendsi_truncqi */
    case 231:  /* *zero_extenddi_truncqi */
    case 232:  /* *zero_extendsi_trunchi */
    case 233:  /* *zero_extenddi_trunchi */
    case 234:  /* *zero_extendhi_truncqi */
    case 235:  /* extendsidi2 */
    case 236:  /* *extendqisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 239:  /* *extendhidi2_mips16e */
    case 240:  /* *extendqisi2 */
    case 241:  /* *extendqidi2 */
    case 242:  /* *extendhisi2 */
    case 243:  /* *extendhidi2 */
    case 244:  /* *extendqisi2_seb */
    case 245:  /* *extendqidi2_seb */
    case 246:  /* *extendhisi2_seh */
    case 247:  /* *extendhidi2_seh */
    case 248:  /* *extendqihi2_mips16e */
    case 249:  /* *extendqihi2 */
    case 250:  /* *extendqihi2_seb */
    case 256:  /* *extendsi_truncateqi_exts */
    case 257:  /* *extenddi_truncateqi_exts */
    case 258:  /* *extendsi_truncatehi_exts */
    case 259:  /* *extenddi_truncatehi_exts */
    case 260:  /* *extendhi_truncateqi_exts */
    case 272:  /* *extvsi */
    case 273:  /* *extvdi */
    case 274:  /* *extzvsi */
    case 275:  /* *extzvdi */
    case 276:  /* *extzv_truncsi_exts */
    case 277:  /* *insvsi */
    case 278:  /* *insvdi */
    case 279:  /* *cinssi */
    case 280:  /* *cinsdi */
    case 281:  /* mov_lwl */
    case 282:  /* mov_ldl */
    case 283:  /* mov_lwr */
    case 284:  /* mov_ldr */
    case 295:  /* *xgot_losi */
    case 296:  /* *xgot_lodi */
    case 297:  /* *got_dispsi */
    case 298:  /* *got_dispdi */
    case 299:  /* *got_pagesi */
    case 300:  /* *got_pagedi */
    case 301:  /* load_gotsi */
    case 302:  /* load_gotdi */
    case 303:  /* *lowsi */
    case 304:  /* *lowdi */
    case 305:  /* *lowsi_mips16 */
    case 306:  /* *lowdi_mips16 */
    case 309:  /* *movdi_32bit */
    case 310:  /* *movdi_32bit_mips16 */
    case 311:  /* *movdi_64bit */
    case 312:  /* *movdi_64bit_mips16 */
    case 313:  /* *movsi_internal */
    case 314:  /* *movv2hi_internal */
    case 315:  /* *movv4qi_internal */
    case 316:  /* *movv2hq_internal */
    case 317:  /* *movv2uhq_internal */
    case 318:  /* *movv2ha_internal */
    case 319:  /* *movv2uha_internal */
    case 320:  /* *movv4qq_internal */
    case 321:  /* *movv4uqq_internal */
    case 322:  /* *movsi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 330:  /* *movv4uqq_mips16 */
    case 343:  /* *lwxs */
    case 344:  /* *lwxs */
    case 345:  /* *lwxs */
    case 346:  /* *lwxs */
    case 347:  /* *lwxs */
    case 348:  /* *lwxs */
    case 349:  /* *lwxs */
    case 350:  /* *lwxs */
    case 351:  /* *lwxs */
    case 352:  /* *lwxs */
    case 353:  /* *lwxs */
    case 354:  /* *lwxs */
    case 355:  /* *lwxs */
    case 356:  /* *lwxs */
    case 357:  /* *lwxs */
    case 358:  /* *lwxs */
    case 359:  /* *lwxs */
    case 360:  /* *lwxs */
    case 361:  /* *movhi_internal */
    case 362:  /* *movhi_mips16 */
    case 363:  /* *movqi_internal */
    case 364:  /* *movqi_mips16 */
    case 366:  /* *movsf_hardfloat */
    case 367:  /* *movsf_softfloat */
    case 368:  /* *movsf_mips16 */
    case 369:  /* *movdf_hardfloat */
    case 370:  /* *movdf_softfloat */
    case 371:  /* *movdf_mips16 */
    case 372:  /* *movti */
    case 373:  /* *movti_mips16 */
    case 374:  /* *movtf */
    case 375:  /* *movtf_mips16 */
    case 376:  /* *movv2sf */
    case 377:  /* mfhisi_di */
    case 378:  /* mfhisi_ti */
    case 379:  /* mfhidi_ti */
    case 380:  /* mthisi_di */
    case 381:  /* mthisi_ti */
    case 382:  /* mthidi_ti */
    case 383:  /* load_lowdf */
    case 384:  /* load_lowdi */
    case 385:  /* load_lowv2sf */
    case 386:  /* load_lowv2si */
    case 387:  /* load_lowv4hi */
    case 388:  /* load_lowv8qi */
    case 389:  /* load_lowtf */
    case 390:  /* load_highdf */
    case 391:  /* load_highdi */
    case 392:  /* load_highv2sf */
    case 393:  /* load_highv2si */
    case 394:  /* load_highv4hi */
    case 395:  /* load_highv8qi */
    case 396:  /* load_hightf */
    case 441:  /* *ashlsi3 */
    case 442:  /* *ashrsi3 */
    case 443:  /* *lshrsi3 */
    case 444:  /* *ashldi3 */
    case 445:  /* *ashrdi3 */
    case 446:  /* *lshrdi3 */
    case 447:  /* *ashlsi3_extend */
    case 448:  /* *ashrsi3_extend */
    case 449:  /* *lshrsi3_extend */
    case 450:  /* *ashlsi3_mips16 */
    case 451:  /* *ashrsi3_mips16 */
    case 452:  /* *lshrsi3_mips16 */
    case 453:  /* lsa */
    case 454:  /* dlsa */
    case 455:  /* *ashldi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 457:  /* *lshrdi3_mips16 */
    case 458:  /* *mips.md:5842 */
    case 459:  /* rotrsi3 */
    case 460:  /* rotrdi3 */
    case 461:  /* bswaphi2 */
    case 464:  /* wsbh */
    case 465:  /* dsbh */
    case 466:  /* dshd */
    case 491:  /* *seq_zero_sisi */
    case 492:  /* *seq_zero_disi */
    case 493:  /* *seq_zero_sidi */
    case 494:  /* *seq_zero_didi */
    case 495:  /* *seq_zero_sisi_mips16 */
    case 496:  /* *seq_zero_disi_mips16 */
    case 497:  /* *seq_zero_sidi_mips16 */
    case 498:  /* *seq_zero_didi_mips16 */
    case 499:  /* *seq_sisi_seq */
    case 500:  /* *seq_disi_seq */
    case 501:  /* *seq_sidi_seq */
    case 502:  /* *seq_didi_seq */
    case 503:  /* *sne_zero_sisi */
    case 504:  /* *sne_zero_disi */
    case 505:  /* *sne_zero_sidi */
    case 506:  /* *sne_zero_didi */
    case 507:  /* *sne_sisi_sne */
    case 508:  /* *sne_disi_sne */
    case 509:  /* *sne_sidi_sne */
    case 510:  /* *sne_didi_sne */
    case 511:  /* *sgt_sisi */
    case 512:  /* *sgtu_sisi */
    case 513:  /* *sgt_disi */
    case 514:  /* *sgtu_disi */
    case 515:  /* *sgt_sidi */
    case 516:  /* *sgtu_sidi */
    case 517:  /* *sgt_didi */
    case 518:  /* *sgtu_didi */
    case 519:  /* *sgt_sisi_mips16 */
    case 520:  /* *sgtu_sisi_mips16 */
    case 521:  /* *sgt_disi_mips16 */
    case 522:  /* *sgtu_disi_mips16 */
    case 523:  /* *sgt_sidi_mips16 */
    case 524:  /* *sgtu_sidi_mips16 */
    case 525:  /* *sgt_didi_mips16 */
    case 526:  /* *sgtu_didi_mips16 */
    case 527:  /* *sge_sisi */
    case 528:  /* *sgeu_sisi */
    case 529:  /* *sge_disi */
    case 530:  /* *sgeu_disi */
    case 531:  /* *sge_sidi */
    case 532:  /* *sgeu_sidi */
    case 533:  /* *sge_didi */
    case 534:  /* *sgeu_didi */
    case 535:  /* *slt_sisi */
    case 536:  /* *sltu_sisi */
    case 537:  /* *slt_disi */
    case 538:  /* *sltu_disi */
    case 539:  /* *slt_sidi */
    case 540:  /* *sltu_sidi */
    case 541:  /* *slt_didi */
    case 542:  /* *sltu_didi */
    case 543:  /* *slt_sisi_mips16 */
    case 544:  /* *sltu_sisi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 547:  /* *slt_sidi_mips16 */
    case 548:  /* *sltu_sidi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 550:  /* *sltu_didi_mips16 */
    case 551:  /* *sle_sisi */
    case 552:  /* *sleu_sisi */
    case 553:  /* *sle_disi */
    case 554:  /* *sleu_disi */
    case 555:  /* *sle_sidi */
    case 556:  /* *sleu_sidi */
    case 557:  /* *sle_didi */
    case 558:  /* *sleu_didi */
    case 559:  /* *sle_sisi_mips16 */
    case 560:  /* *sleu_sisi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 563:  /* *sle_sidi_mips16 */
    case 564:  /* *sleu_sidi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 566:  /* *sleu_didi_mips16 */
    case 639:  /* mips_rdpgpr_si */
    case 640:  /* mips_rdpgpr_di */
    case 648:  /* load_callsi */
    case 649:  /* load_calldi */
    case 665:  /* prefetch */
    case 666:  /* *prefetch_indexed_si */
    case 667:  /* *prefetch_indexed_di */
    case 668:  /* nop */
    case 669:  /* hazard_nop */
    case 671:  /* *movsi_on_si */
    case 672:  /* *movdi_on_si */
    case 673:  /* *movsi_on_di */
    case 674:  /* *movdi_on_di */
    case 675:  /* *movsi_on_cc */
    case 676:  /* *movdi_on_cc */
    case 677:  /* *movsi_on_si_ne */
    case 678:  /* *movdi_on_si_ne */
    case 679:  /* *movsi_on_di_ne */
    case 680:  /* *movdi_on_di_ne */
    case 681:  /* *movsf_on_si */
    case 682:  /* *movdf_on_si */
    case 683:  /* *movsf_on_di */
    case 684:  /* *movdf_on_di */
    case 685:  /* *movsf_on_cc */
    case 686:  /* *movdf_on_cc */
    case 687:  /* *seleqsi_using_si */
    case 688:  /* *selnesi_using_si */
    case 689:  /* *seleqdi_using_si */
    case 690:  /* *selnedi_using_si */
    case 691:  /* *seleqsi_using_di */
    case 692:  /* *selnesi_using_di */
    case 693:  /* *seleqdi_using_di */
    case 694:  /* *selnedi_using_di */
    case 695:  /* *selsf */
    case 696:  /* *seldf */
    case 703:  /* *mips16e_save_restore */
    case 718:  /* *join2_load_storehi */
    case 719:  /* *join2_load_storesi */
    case 720:  /* *join2_load_storesf */
    case 721:  /* *join2_load_storedf */
    case 722:  /* *join2_loadhi */
    case 723:  /* *join2_loadhi */
    case 795:  /* *movcc_v2sf_si */
    case 796:  /* *movcc_v2sf_di */
    case 797:  /* mips_cond_move_tf_ps */
    case 883:  /* mips_muleu_s_ph_qbl */
    case 884:  /* mips_muleu_s_ph_qbr */
    case 885:  /* mips_mulq_rs_ph */
    case 886:  /* mips_muleq_s_w_phl */
    case 887:  /* mips_muleq_s_w_phr */
    case 888:  /* mips_dpau_h_qbl */
    case 889:  /* mips_dpau_h_qbr */
    case 890:  /* mips_dpsu_h_qbl */
    case 891:  /* mips_dpsu_h_qbr */
    case 892:  /* mips_dpaq_s_w_ph */
    case 893:  /* mips_dpsq_s_w_ph */
    case 894:  /* mips_mulsaq_s_w_ph */
    case 895:  /* mips_dpaq_sa_l_w */
    case 896:  /* mips_dpsq_sa_l_w */
    case 897:  /* mips_maq_s_w_phl */
    case 898:  /* mips_maq_s_w_phr */
    case 899:  /* mips_maq_sa_w_phl */
    case 900:  /* mips_maq_sa_w_phr */
    case 927:  /* mips_lbx_extsi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 934:  /* mips_lhux_extdi_si */
    case 935:  /* mips_lbx_extsi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 942:  /* mips_lhux_extdi_di */
    case 943:  /* mips_lwx_si */
    case 944:  /* mips_ldx_si */
    case 945:  /* mips_lwx_di */
    case 946:  /* mips_ldx_di */
    case 947:  /* *mips_lwx_si_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 950:  /* *mips_lwux_di_ext */
    case 962:  /* mips_dpa_w_ph */
    case 963:  /* mips_dps_w_ph */
    case 964:  /* mulv2hi3 */
    case 965:  /* mips_mul_s_ph */
    case 966:  /* mips_mulq_rs_w */
    case 967:  /* mips_mulq_s_ph */
    case 968:  /* mips_mulq_s_w */
    case 969:  /* mips_mulsa_w_ph */
    case 989:  /* mips_dpax_w_ph */
    case 990:  /* mips_dpsx_w_ph */
    case 991:  /* mips_dpaqx_s_w_ph */
    case 992:  /* mips_dpaqx_sa_w_ph */
    case 993:  /* mips_dpsqx_s_w_ph */
    case 994:  /* mips_dpsqx_sa_w_ph */
    case 995:  /* addqq3 */
    case 996:  /* addhq3 */
    case 997:  /* addsq3 */
    case 998:  /* adddq3 */
    case 999:  /* adduqq3 */
    case 1000:  /* adduhq3 */
    case 1001:  /* addusq3 */
    case 1002:  /* addudq3 */
    case 1003:  /* addha3 */
    case 1004:  /* addsa3 */
    case 1005:  /* addda3 */
    case 1006:  /* adduha3 */
    case 1007:  /* addusa3 */
    case 1008:  /* adduda3 */
    case 1009:  /* usadduqq3 */
    case 1010:  /* usadduhq3 */
    case 1011:  /* usadduha3 */
    case 1012:  /* usaddv4uqq3 */
    case 1013:  /* usaddv2uhq3 */
    case 1014:  /* usaddv2uha3 */
    case 1015:  /* ssaddhq3 */
    case 1016:  /* ssaddsq3 */
    case 1017:  /* ssaddha3 */
    case 1018:  /* ssaddsa3 */
    case 1019:  /* ssaddv2hq3 */
    case 1020:  /* ssaddv2ha3 */
    case 1021:  /* subqq3 */
    case 1022:  /* subhq3 */
    case 1023:  /* subsq3 */
    case 1024:  /* subdq3 */
    case 1025:  /* subuqq3 */
    case 1026:  /* subuhq3 */
    case 1027:  /* subusq3 */
    case 1028:  /* subudq3 */
    case 1029:  /* subha3 */
    case 1030:  /* subsa3 */
    case 1031:  /* subda3 */
    case 1032:  /* subuha3 */
    case 1033:  /* subusa3 */
    case 1034:  /* subuda3 */
    case 1035:  /* ussubuqq3 */
    case 1036:  /* ussubuhq3 */
    case 1037:  /* ussubuha3 */
    case 1038:  /* ussubv4uqq3 */
    case 1039:  /* ussubv2uhq3 */
    case 1040:  /* ussubv2uha3 */
    case 1041:  /* sssubhq3 */
    case 1042:  /* sssubsq3 */
    case 1043:  /* sssubha3 */
    case 1044:  /* sssubsa3 */
    case 1045:  /* sssubv2hq3 */
    case 1046:  /* sssubv2ha3 */
    case 1047:  /* ssmulv2hq3 */
    case 1048:  /* ssmulhq3 */
    case 1049:  /* ssmulsq3 */
    case 1050:  /* ssmaddsqdq4 */
    case 1051:  /* ssmsubsqdq4 */
    case 1054:  /* *lwp */
    case 1057:  /* *movepsisi */
    case 1058:  /* *movepsisf */
    case 1059:  /* *movepsfsi */
    case 1060:  /* *movepsfsf */
    case 1061:  /* movv2si_internal */
    case 1062:  /* movv4hi_internal */
    case 1063:  /* movv8qi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMADD))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type = get_attr_type (insn)) == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL3))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && (((cached_type = get_attr_type (insn)) == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && (((cached_type = get_attr_type (insn)) == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_MULTI))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && (((cached_type = get_attr_type (insn)) == TYPE_DSPALU) || (cached_type == TYPE_DSPALUSAT)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMAC))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMACSAT))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_ACCEXT))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) && ((cached_type = get_attr_type (insn)) == TYPE_ACCMOD))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_CLZ)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_CONDMOVE))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL3))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMAC))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMACSAT))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type = get_attr_type (insn)) == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type = get_attr_type (insn)) == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMADD))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_FPLOAD) && (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_FPLOAD) && (! (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_FPIDXLOAD) && (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_FPIDXLOAD) && (! (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && (((cached_type = get_attr_type (insn)) == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_CONDMOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_MFHI))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_MFLO))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 1;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (((cached_type = get_attr_type (insn)) == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
num_delay_slots (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_compact_form cached_compact_form ATTRIBUTE_UNUSED;
  enum attr_branch_likely cached_branch_likely ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 717:  /* mips_set_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 710:  /* *tls_get_tp_mips16_call_si */
      return 1;

    case 662:  /* call_value_direct_split */
    case 658:  /* call_direct_split */
      extract_constrain_insn_cached (insn);
      if (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 661:  /* call_value_internal_direct */
    case 657:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (((
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO))) && (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 663:  /* call_value_multiple_internal */
    case 659:  /* call_value_internal */
    case 655:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 664:  /* call_value_multiple_split */
    case 660:  /* call_value_split */
    case 656:  /* call_split */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))) || (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1682:  /* msa_bnz_b */
    case 1681:  /* msa_bz_b */
    case 1680:  /* msa_bnz_h */
    case 1679:  /* msa_bz_h */
    case 1678:  /* msa_bnz_w */
    case 1677:  /* msa_bz_w */
    case 1676:  /* msa_bnz_d */
    case 1675:  /* msa_bz_d */
    case 1674:  /* msa_bnz_w_f */
    case 1673:  /* msa_bz_w_f */
    case 1672:  /* msa_bnz_d_f */
    case 1671:  /* msa_bz_d_f */
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 619:  /* *jump_mips16 */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || ((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_NEVER)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_JUMP) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || ((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_NEVER)))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_BRANCH) || (cached_type == TYPE_SIMD_BRANCH)) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || ((cached_compact_form = get_attr_compact_form (insn)) == COMPACT_FORM_NEVER)) && ((cached_branch_likely = get_attr_branch_likely (insn)) == BRANCH_LIKELY_NO))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((cached_branch_likely = get_attr_branch_likely (insn)) == BRANCH_LIKELY_YES))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

enum attr_accum_in
get_attr_accum_in (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 42:  /* *mul_acc_si */
    case 43:  /* *mul_acc_si_r3900 */
    case 44:  /* *macc */
    case 63:  /* msubsidi4 */
    case 64:  /* umsubsidi4 */
    case 82:  /* maddsidi4 */
    case 83:  /* umaddsidi4 */
      return ACCUM_IN_3;

    case 45:  /* *msac */
    case 46:  /* *msac_using_macc */
    case 49:  /* *mul_sub_si */
    case 888:  /* mips_dpau_h_qbl */
    case 889:  /* mips_dpau_h_qbr */
    case 890:  /* mips_dpsu_h_qbl */
    case 891:  /* mips_dpsu_h_qbr */
    case 892:  /* mips_dpaq_s_w_ph */
    case 893:  /* mips_dpsq_s_w_ph */
    case 894:  /* mips_mulsaq_s_w_ph */
    case 895:  /* mips_dpaq_sa_l_w */
    case 896:  /* mips_dpsq_sa_l_w */
    case 897:  /* mips_maq_s_w_phl */
    case 898:  /* mips_maq_s_w_phr */
    case 899:  /* mips_maq_sa_w_phl */
    case 900:  /* mips_maq_sa_w_phr */
    case 962:  /* mips_dpa_w_ph */
    case 963:  /* mips_dps_w_ph */
    case 969:  /* mips_mulsa_w_ph */
    case 989:  /* mips_dpax_w_ph */
    case 990:  /* mips_dpsx_w_ph */
    case 991:  /* mips_dpaqx_s_w_ph */
    case 992:  /* mips_dpaqx_sa_w_ph */
    case 993:  /* mips_dpsqx_s_w_ph */
    case 994:  /* mips_dpsqx_sa_w_ph */
      return ACCUM_IN_1;

    case 47:  /* *macc2 */
    case 48:  /* *msac2 */
    case 81:  /* madsi */
      return ACCUM_IN_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return ACCUM_IN_NONE;

    }
}

enum attr_alu_type
get_attr_alu_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1205:  /* addv2di3 */
    case 1206:  /* addv4si3 */
    case 1207:  /* addv8hi3 */
    case 1208:  /* addv16qi3 */
    case 1209:  /* subv2di3 */
    case 1210:  /* subv4si3 */
    case 1211:  /* subv8hi3 */
    case 1212:  /* subv16qi3 */
      return ALU_TYPE_SIMD_ADD;

    case 191:  /* *xorsi3 */
    case 192:  /* *xordi3 */
    case 193:  /* *xorsi3_mips16 */
    case 194:  /* *xordi3_mips16 */
      return ALU_TYPE_XOR;

    case 187:  /* *iorsi3 */
    case 188:  /* *iordi3 */
    case 189:  /* *iorsi3_mips16 */
    case 190:  /* *iordi3_mips16 */
      return ALU_TYPE_OR;

    case 230:  /* *zero_extendsi_truncqi */
    case 231:  /* *zero_extenddi_truncqi */
    case 232:  /* *zero_extendsi_trunchi */
    case 233:  /* *zero_extenddi_trunchi */
    case 234:  /* *zero_extendhi_truncqi */
      return ALU_TYPE_AND;

    case 195:  /* *norsi3 */
    case 196:  /* *nordi3 */
      return ALU_TYPE_NOR;

    case 181:  /* one_cmplsi2 */
    case 182:  /* one_cmpldi2 */
      return ALU_TYPE_NOT;

    case 26:  /* subsi3 */
    case 27:  /* subdi3 */
    case 28:  /* *subsi3_extended */
    case 176:  /* negsi2 */
    case 177:  /* negdi2 */
      return ALU_TYPE_SUB;

    case 13:  /* *addsi3 */
    case 14:  /* *adddi3 */
    case 15:  /* *addsi3_mips16 */
    case 16:  /* *adddi3_mips16 */
    case 17:  /* *addsi3_extended */
    case 18:  /* *addsi3_extended_mips16 */
    case 19:  /* *baddu_si_eb */
    case 20:  /* *baddu_si_el */
    case 21:  /* *baddu_disi */
    case 22:  /* *baddu_didi */
    case 303:  /* *lowsi */
    case 304:  /* *lowdi */
    case 305:  /* *lowsi_mips16 */
    case 306:  /* *lowdi_mips16 */
      return ALU_TYPE_ADD;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return ALU_TYPE_UNKNOWN;

    }
}

enum attr_branch_likely
get_attr_branch_likely (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 483:  /* *branch_bit0si */
    case 484:  /* *branch_bit1si */
    case 485:  /* *branch_bit0di */
    case 486:  /* *branch_bit1di */
    case 487:  /* *branch_bit0si_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 490:  /* *branch_bit1di_inverted */
    case 1671:  /* msa_bz_d_f */
    case 1672:  /* msa_bnz_d_f */
    case 1673:  /* msa_bz_w_f */
    case 1674:  /* msa_bnz_w_f */
    case 1675:  /* msa_bz_d */
    case 1676:  /* msa_bnz_d */
    case 1677:  /* msa_bz_w */
    case 1678:  /* msa_bnz_w */
    case 1679:  /* msa_bz_h */
    case 1680:  /* msa_bnz_h */
    case 1681:  /* msa_bz_b */
    case 1682:  /* msa_bnz_b */
    case 1683:  /* msa_bz_v_d_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1686:  /* msa_bnz_v_w_f */
    case 1687:  /* msa_bz_v_d */
    case 1688:  /* msa_bnz_v_d */
    case 1689:  /* msa_bz_v_w */
    case 1690:  /* msa_bnz_v_w */
    case 1691:  /* msa_bz_v_h */
    case 1692:  /* msa_bnz_v_h */
    case 1693:  /* msa_bz_v_b */
    case 1694:  /* msa_bnz_v_b */
      return BRANCH_LIKELY_NO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))
        {
	  return BRANCH_LIKELY_YES;
        }
      else
        {
	  return BRANCH_LIKELY_NO;
        }

    }
}

enum attr_can_delay
get_attr_can_delay (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 721:  /* *join2_load_storedf */
    case 720:  /* *join2_load_storesf */
    case 719:  /* *join2_load_storesi */
    case 718:  /* *join2_load_storehi */
      extract_constrain_insn_cached (insn);
      if (((!((1ULL << which_alternative) & 0x3ULL)) || (! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 826:  /* sungt_ps */
    case 825:  /* sunge_ps */
    case 824:  /* sgt_ps */
    case 823:  /* sge_ps */
    case 822:  /* sne_ps */
    case 821:  /* sltgt_ps */
    case 820:  /* sordered_ps */
    case 819:  /* sle_ps */
    case 818:  /* slt_ps */
    case 817:  /* seq_ps */
    case 816:  /* sunle_ps */
    case 815:  /* sunlt_ps */
    case 814:  /* suneq_ps */
    case 813:  /* sunordered_ps */
    case 812:  /* mips_cabs_cond_ps */
    case 811:  /* mips_c_cond_ps */
    case 810:  /* mips_cabs_cond_4s */
    case 809:  /* mips_c_cond_4s */
    case 808:  /* mips_cabs_cond_d */
    case 807:  /* mips_cabs_cond_s */
    case 616:  /* sungt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 609:  /* sge_sf_using_ccf */
    case 608:  /* sungt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 605:  /* sge_df_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 601:  /* sge_sf_using_cc */
    case 600:  /* sne_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 581:  /* sunordered_sf_using_ccf */
    case 580:  /* sle_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 567:  /* sunordered_sf_using_cc */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 1162:  /* vec_loongson_extract_lo_v8qi */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 641:  /* cop0_move */
    case 417:  /* mfhc1tf */
    case 416:  /* mfhc1v8qi */
    case 415:  /* mfhc1v4hi */
    case 414:  /* mfhc1v2si */
    case 413:  /* mfhc1v2sf */
    case 412:  /* mfhc1di */
    case 411:  /* mfhc1df */
    case 410:  /* mthc1tf */
    case 409:  /* mthc1v8qi */
    case 408:  /* mthc1v4hi */
    case 407:  /* mthc1v2si */
    case 406:  /* mthc1v2sf */
    case 405:  /* mthc1di */
    case 404:  /* mthc1df */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 403:  /* store_wordtf */
    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 379:  /* mfhidi_ti */
    case 378:  /* mfhisi_ti */
    case 377:  /* mfhisi_di */
      extract_constrain_insn_cached (insn);
      if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 375:  /* *movtf_mips16 */
    case 371:  /* *movdf_mips16 */
    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || (! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
    case 396:  /* load_hightf */
    case 395:  /* load_highv8qi */
    case 394:  /* load_highv4hi */
    case 393:  /* load_highv2si */
    case 392:  /* load_highv2sf */
    case 391:  /* load_highdi */
    case 390:  /* load_highdf */
    case 389:  /* load_lowtf */
    case 388:  /* load_lowv8qi */
    case 387:  /* load_lowv4hi */
    case 386:  /* load_lowv2si */
    case 385:  /* load_lowv2sf */
    case 384:  /* load_lowdi */
    case 383:  /* load_lowdf */
    case 376:  /* *movv2sf */
    case 374:  /* *movtf */
    case 373:  /* *movti_mips16 */
    case 372:  /* *movti */
    case 369:  /* *movdf_hardfloat */
    case 366:  /* *movsf_hardfloat */
    case 364:  /* *movqi_mips16 */
    case 363:  /* *movqi_internal */
    case 362:  /* *movhi_mips16 */
    case 361:  /* *movhi_internal */
    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
    case 312:  /* *movdi_64bit_mips16 */
    case 311:  /* *movdi_64bit */
    case 310:  /* *movdi_32bit_mips16 */
    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((get_attr_hazard (insn) == HAZARD_NONE) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 950:  /* *mips_lwux_di_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 947:  /* *mips_lwx_si_ext */
    case 946:  /* mips_ldx_di */
    case 945:  /* mips_lwx_di */
    case 944:  /* mips_ldx_si */
    case 943:  /* mips_lwx_si */
    case 942:  /* mips_lhux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 935:  /* mips_lbx_extsi_di */
    case 934:  /* mips_lhux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 927:  /* mips_lbx_extsi_si */
    case 723:  /* *join2_loadhi */
    case 722:  /* *join2_loadhi */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 458:  /* *mips.md:5842 */
    case 360:  /* *lwxs */
    case 359:  /* *lwxs */
    case 358:  /* *lwxs */
    case 357:  /* *lwxs */
    case 356:  /* *lwxs */
    case 355:  /* *lwxs */
    case 354:  /* *lwxs */
    case 353:  /* *lwxs */
    case 352:  /* *lwxs */
    case 351:  /* *lwxs */
    case 350:  /* *lwxs */
    case 349:  /* *lwxs */
    case 348:  /* *lwxs */
    case 347:  /* *lwxs */
    case 346:  /* *lwxs */
    case 345:  /* *lwxs */
    case 344:  /* *lwxs */
    case 343:  /* *lwxs */
    case 336:  /* *ldxc1_di */
    case 335:  /* *ldxc1_di */
    case 334:  /* *lwxc1_di */
    case 333:  /* *ldxc1_si */
    case 332:  /* *ldxc1_si */
    case 331:  /* *lwxc1_si */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 235:  /* extendsidi2 */
    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) || (! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 370:  /* *movdf_softfloat */
    case 367:  /* *movsf_softfloat */
    case 365:  /* movccf */
    case 250:  /* *extendqihi2_seb */
    case 249:  /* *extendqihi2 */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
    case 228:  /* *zero_extendqihi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 214:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((!((1ULL << which_alternative) & 0x7ULL)) || (! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 50:  /* *muls */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 67:  /* smulsi3_highpart_internal */
    case 62:  /* *mulsu_di */
    case 61:  /* *muls_di */
    case 58:  /* umulsidi3_64bit_hilo */
    case 57:  /* mulsidi3_64bit_hilo */
    case 56:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 52:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit */
    case 41:  /* muldi3_r4000 */
    case 40:  /* mulsi3_r4000 */
    case 39:  /* muldi3_internal */
    case 38:  /* mulsi3_internal */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 37:  /* muldi3_mul3 */
    case 36:  /* mulsi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1682:  /* msa_bnz_b */
    case 1681:  /* msa_bz_b */
    case 1680:  /* msa_bnz_h */
    case 1679:  /* msa_bz_h */
    case 1678:  /* msa_bnz_w */
    case 1677:  /* msa_bz_w */
    case 1676:  /* msa_bnz_d */
    case 1675:  /* msa_bz_d */
    case 1674:  /* msa_bnz_w_f */
    case 1673:  /* msa_bz_w_f */
    case 1672:  /* msa_bnz_d_f */
    case 1671:  /* msa_bz_d_f */
    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 717:  /* mips_set_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 710:  /* *tls_get_tp_mips16_call_si */
    case 664:  /* call_value_multiple_split */
    case 663:  /* call_value_multiple_internal */
    case 662:  /* call_value_direct_split */
    case 661:  /* call_value_internal_direct */
    case 660:  /* call_value_split */
    case 659:  /* call_value_internal */
    case 658:  /* call_direct_split */
    case 657:  /* call_internal_direct */
    case 656:  /* call_split */
    case 655:  /* call_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
    case 619:  /* *jump_mips16 */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
    case 440:  /* r10k_cache_barrier */
    case 629:  /* probe_stack_range_si */
    case 630:  /* probe_stack_range_di */
    case 706:  /* *tls_get_tp_si_split */
    case 707:  /* *tls_get_tp_di_split */
    case 1052:  /* *store_word_multiple */
    case 1053:  /* *load_word_multiple */
    case 1054:  /* *lwp */
    case 1055:  /* *swp */
    case 1056:  /* jraddiusp */
    case 1057:  /* *movepsisi */
    case 1058:  /* *movepsisf */
    case 1059:  /* *movepsfsi */
    case 1060:  /* *movepsfsf */
      return CAN_DELAY_NO;

    default:
      extract_constrain_insn_cached (insn);
      if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    }
}

enum attr_compression
get_attr_compression (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPRESSION_ALL;
        }
      else if (which_alternative == 1)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else if (which_alternative == 2)
        {
	  return COMPRESSION_NONE;
        }
      else if (which_alternative == 3)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else if (which_alternative == 4)
        {
	  return COMPRESSION_NONE;
        }
      else if (which_alternative == 5)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPRESSION_ALL;
        }
      else if (((1ULL << which_alternative) & 0x6ULL))
        {
	  return COMPRESSION_MICROMIPS;
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return COMPRESSION_NONE;
        }
      else if (((1ULL << which_alternative) & 0x60ULL))
        {
	  return COMPRESSION_MICROMIPS;
        }
      else if (which_alternative == 7)
        {
	  return COMPRESSION_NONE;
        }
      else if (((1ULL << which_alternative) & 0x300ULL))
        {
	  return COMPRESSION_MICROMIPS;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return COMPRESSION_NONE;
        }
      else if (which_alternative == 3)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else if (((1ULL << which_alternative) & 0x70ULL))
        {
	  return COMPRESSION_NONE;
        }
      else if (which_alternative == 7)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case 14:  /* *adddi3 */
    case 13:  /* *addsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPRESSION_MICROMIPS32;
        }
      else if (which_alternative == 1)
        {
	  return COMPRESSION_NONE;
        }
      else if (((1ULL << which_alternative) & 0x3cULL))
        {
	  return COMPRESSION_MICROMIPS32;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
    case 192:  /* *xordi3 */
    case 191:  /* *xorsi3 */
    case 188:  /* *iordi3 */
    case 187:  /* *iorsi3 */
    case 181:  /* one_cmplsi2 */
    case 182:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPRESSION_MICROMIPS;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case 26:  /* subsi3 */
    case 27:  /* subdi3 */
    case 441:  /* *ashlsi3 */
    case 443:  /* *lshrsi3 */
    case 444:  /* *ashldi3 */
    case 446:  /* *lshrdi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPRESSION_MICROMIPS32;
        }
      else
        {
	  return COMPRESSION_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return COMPRESSION_NONE;

    }
}

enum attr_cnv_mode
get_attr_cnv_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 261:  /* extendsfdf2 */
      return CNV_MODE_S2D;

    case 197:  /* truncdfsf2 */
      return CNV_MODE_D2S;

    case 262:  /* fix_truncdfsi2_insn */
    case 263:  /* fix_truncdfsi2_macro */
    case 266:  /* fix_truncdfdi2 */
    case 1491:  /* msa_ftint_s_d */
    case 1493:  /* msa_ftint_u_d */
    case 1495:  /* fix_truncv2dfv2di2 */
    case 1497:  /* fixuns_truncv2dfv2di2 */
    case 1500:  /* msa_ftq_w */
      return CNV_MODE_D2I;

    case 264:  /* fix_truncsfsi2_insn */
    case 265:  /* fix_truncsfsi2_macro */
    case 267:  /* fix_truncsfdi2 */
    case 1492:  /* msa_ftint_s_w */
    case 1494:  /* msa_ftint_u_w */
    case 1496:  /* fix_truncv4sfv4si2 */
    case 1498:  /* fixuns_truncv4sfv4si2 */
    case 1499:  /* msa_ftq_h */
      return CNV_MODE_S2I;

    case 268:  /* floatsidf2 */
    case 269:  /* floatdidf2 */
    case 1461:  /* floatv2div2df2 */
    case 1463:  /* floatunsv2div2df2 */
    case 1465:  /* msa_ffql_d */
    case 1467:  /* msa_ffqr_d */
      return CNV_MODE_I2D;

    case 270:  /* floatsisf2 */
    case 271:  /* floatdisf2 */
    case 1462:  /* floatv4siv4sf2 */
    case 1464:  /* floatunsv4siv4sf2 */
    case 1466:  /* msa_ffql_w */
    case 1468:  /* msa_ffqr_w */
      return CNV_MODE_I2S;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return CNV_MODE_UNKNOWN;

    }
}

enum attr_compact_form
get_attr_compact_form (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_jal cached_jal ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 664:  /* call_value_multiple_split */
    case 663:  /* call_value_multiple_internal */
    case 660:  /* call_value_split */
    case 659:  /* call_value_internal */
    case 656:  /* call_split */
    case 655:  /* call_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return COMPACT_FORM_ALWAYS;
        }
      else
        {
	  return COMPACT_FORM_MAYBE;
        }

    case 471:  /* *branch_ordersi */
    case 472:  /* *branch_orderdi */
    case 473:  /* *branch_ordersi_inverted */
    case 474:  /* *branch_orderdi_inverted */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return COMPACT_FORM_MAYBE;
        }
      else
        {
	  return COMPACT_FORM_ALWAYS;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if ((cached_jal = get_attr_jal (insn)) == JAL_DIRECT)
        {
	  return COMPACT_FORM_ALWAYS;
        }
      else if (cached_jal == JAL_INDIRECT)
        {
	  return COMPACT_FORM_MAYBE;
        }
      else if (get_attr_type (insn) == TYPE_JUMP)
        {
	  return COMPACT_FORM_MAYBE;
        }
      else
        {
	  return COMPACT_FORM_NEVER;
        }

    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
    case 475:  /* *branch_equalitysi */
    case 476:  /* *branch_equalitydi */
    case 477:  /* *branch_equalitysi_inverted */
    case 478:  /* *branch_equalitydi_inverted */
    case 617:  /* *jump_absolute */
    case 618:  /* *jump_pic */
      return COMPACT_FORM_MAYBE;

    case 662:  /* call_value_direct_split */
    case 661:  /* call_value_internal_direct */
    case 658:  /* call_direct_split */
    case 657:  /* call_internal_direct */
      return COMPACT_FORM_ALWAYS;

    default:
      return COMPACT_FORM_NEVER;

    }
}

enum attr_dword_mode
get_attr_dword_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1256:  /* one_cmplv16qi2 */
    case 1255:  /* one_cmplv8hi2 */
    case 1254:  /* one_cmplv4si2 */
    case 1253:  /* one_cmplv2di2 */
    case 375:  /* *movtf_mips16 */
    case 374:  /* *movtf */
    case 373:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 1166:  /* msa_vec_extract_d_f */
    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
    case 1034:  /* subuda3 */
    case 1031:  /* subda3 */
    case 1028:  /* subudq3 */
    case 1024:  /* subdq3 */
    case 1008:  /* adduda3 */
    case 1005:  /* addda3 */
    case 1002:  /* addudq3 */
    case 998:  /* adddq3 */
    case 950:  /* *mips_lwux_di_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 947:  /* *mips_lwx_si_ext */
    case 946:  /* mips_ldx_di */
    case 944:  /* mips_ldx_si */
    case 942:  /* mips_lhux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 934:  /* mips_lhux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 843:  /* mips_recip2_d */
    case 840:  /* mips_recip1_d */
    case 837:  /* mips_rsqrt2_d */
    case 834:  /* mips_rsqrt1_d */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 709:  /* tls_get_tp_mips16_di */
    case 707:  /* *tls_get_tp_di_split */
    case 705:  /* tls_get_tp_di */
    case 696:  /* *seldf */
    case 694:  /* *selnedi_using_di */
    case 693:  /* *seleqdi_using_di */
    case 690:  /* *selnedi_using_si */
    case 689:  /* *seleqdi_using_si */
    case 686:  /* *movdf_on_cc */
    case 684:  /* *movdf_on_di */
    case 682:  /* *movdf_on_si */
    case 680:  /* *movdi_on_di_ne */
    case 678:  /* *movdi_on_si_ne */
    case 676:  /* *movdi_on_cc */
    case 674:  /* *movdi_on_di */
    case 672:  /* *movdi_on_si */
    case 649:  /* load_calldi */
    case 640:  /* mips_rdpgpr_di */
    case 630:  /* probe_stack_range_di */
    case 566:  /* *sleu_didi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 558:  /* *sleu_didi */
    case 557:  /* *sle_didi */
    case 554:  /* *sleu_disi */
    case 553:  /* *sle_disi */
    case 550:  /* *sltu_didi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 542:  /* *sltu_didi */
    case 541:  /* *slt_didi */
    case 538:  /* *sltu_disi */
    case 537:  /* *slt_disi */
    case 534:  /* *sgeu_didi */
    case 533:  /* *sge_didi */
    case 530:  /* *sgeu_disi */
    case 529:  /* *sge_disi */
    case 526:  /* *sgtu_didi_mips16 */
    case 525:  /* *sgt_didi_mips16 */
    case 522:  /* *sgtu_disi_mips16 */
    case 521:  /* *sgt_disi_mips16 */
    case 518:  /* *sgtu_didi */
    case 517:  /* *sgt_didi */
    case 514:  /* *sgtu_disi */
    case 513:  /* *sgt_disi */
    case 510:  /* *sne_didi_sne */
    case 508:  /* *sne_disi_sne */
    case 506:  /* *sne_zero_didi */
    case 504:  /* *sne_zero_disi */
    case 502:  /* *seq_didi_seq */
    case 500:  /* *seq_disi_seq */
    case 498:  /* *seq_zero_didi_mips16 */
    case 496:  /* *seq_zero_disi_mips16 */
    case 494:  /* *seq_zero_didi */
    case 492:  /* *seq_zero_disi */
    case 460:  /* rotrdi3 */
    case 457:  /* *lshrdi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 455:  /* *ashldi3_mips16 */
    case 454:  /* dlsa */
    case 446:  /* *lshrdi3 */
    case 445:  /* *ashrdi3 */
    case 444:  /* *ashldi3 */
    case 417:  /* mfhc1tf */
    case 410:  /* mthc1tf */
    case 403:  /* store_wordtf */
    case 396:  /* load_hightf */
    case 389:  /* load_lowtf */
    case 379:  /* mfhidi_ti */
    case 376:  /* *movv2sf */
    case 371:  /* *movdf_mips16 */
    case 370:  /* *movdf_softfloat */
    case 369:  /* *movdf_hardfloat */
    case 341:  /* *sdxc1_di */
    case 338:  /* *sdxc1_si */
    case 335:  /* *ldxc1_di */
    case 332:  /* *ldxc1_si */
    case 312:  /* *movdi_64bit_mips16 */
    case 311:  /* *movdi_64bit */
    case 310:  /* *movdi_32bit_mips16 */
    case 308:  /* *movdi_ra */
    case 306:  /* *lowdi_mips16 */
    case 304:  /* *lowdi */
    case 302:  /* load_gotdi */
    case 300:  /* *got_pagedi */
    case 298:  /* *got_dispdi */
    case 296:  /* *xgot_lodi */
    case 294:  /* *xgot_hidi */
    case 288:  /* mov_sdr */
    case 286:  /* mov_sdl */
    case 284:  /* mov_ldr */
    case 282:  /* mov_ldl */
    case 280:  /* *cinsdi */
    case 278:  /* *insvdi */
    case 275:  /* *extzvdi */
    case 273:  /* *extvdi */
    case 269:  /* floatdidf2 */
    case 268:  /* floatsidf2 */
    case 266:  /* fix_truncdfdi2 */
    case 263:  /* fix_truncdfsi2_macro */
    case 262:  /* fix_truncdfsi2_insn */
    case 261:  /* extendsfdf2 */
    case 259:  /* *extenddi_truncatehi_exts */
    case 257:  /* *extenddi_truncateqi_exts */
    case 252:  /* *extenddi_truncatehi */
    case 251:  /* *extenddi_truncateqi */
    case 247:  /* *extendhidi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 243:  /* *extendhidi2 */
    case 241:  /* *extendqidi2 */
    case 239:  /* *extendhidi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 235:  /* extendsidi2 */
    case 233:  /* *zero_extenddi_trunchi */
    case 231:  /* *zero_extenddi_truncqi */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 223:  /* *zero_extendhidi2_mips16e */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 219:  /* *zero_extendhidi2 */
    case 217:  /* *zero_extendqidi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 214:  /* *zero_extendsidi2 */
    case 196:  /* *nordi3 */
    case 194:  /* *xordi3_mips16 */
    case 192:  /* *xordi3 */
    case 190:  /* *iordi3_mips16 */
    case 188:  /* *iordi3 */
    case 186:  /* *anddi3_mips16 */
    case 184:  /* *anddi3 */
    case 182:  /* one_cmpldi2 */
    case 179:  /* negdf2 */
    case 177:  /* negdi2 */
    case 174:  /* popcountdi2 */
    case 172:  /* ctzdi2 */
    case 170:  /* clzdi2 */
    case 167:  /* absdf2 */
    case 164:  /* *rsqrtdfb */
    case 161:  /* *rsqrtdfa */
    case 158:  /* sqrtdf2 */
    case 156:  /* umoddi3 */
    case 155:  /* moddi3 */
    case 152:  /* udivdi3 */
    case 151:  /* divdi3 */
    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 142:  /* udivmoddi4_mips16 */
    case 140:  /* *udivmoddi4 */
    case 138:  /* divmoddi4_mips16 */
    case 136:  /* *divmoddi4 */
    case 133:  /* *recipdf3 */
    case 130:  /* *divdf3 */
    case 127:  /* *nmsub4df_fastmath */
    case 124:  /* *nmadd4df_fastmath */
    case 121:  /* *nmsub4df */
    case 118:  /* *nmadd4df */
    case 115:  /* *msub4df */
    case 112:  /* *madd4df */
    case 109:  /* *fnmsdf4_nmadd4 */
    case 106:  /* *fnmsdf4_nmadd3 */
    case 103:  /* *fnmadf4_nmsub4 */
    case 100:  /* *fnmadf4_nmsub3 */
    case 97:  /* *fmsdf4_msub4 */
    case 94:  /* *fmsdf4_msub3 */
    case 91:  /* *fmadf4_maddf */
    case 88:  /* *fmadf4_madd4 */
    case 85:  /* *fmadf4_madd3 */
    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 74:  /* umuldi3_highpart_r6 */
    case 73:  /* smuldi3_highpart_r6 */
    case 60:  /* mulsidi3_64bit_r6dmul */
    case 59:  /* mulsidi3_64bit_dmul */
    case 41:  /* muldi3_r4000 */
    case 39:  /* muldi3_internal */
    case 37:  /* muldi3_mul3 */
    case 35:  /* muldi3_mul3_nohilo */
    case 32:  /* *muldf3_r4300 */
    case 30:  /* *muldf3 */
    case 28:  /* *subsi3_extended */
    case 27:  /* subdi3 */
    case 24:  /* subdf3 */
    case 16:  /* *adddi3_mips16 */
    case 14:  /* *adddi3 */
    case 11:  /* adddf3 */
      extract_constrain_insn_cached (insn);
      if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_DF)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return DWORD_MODE_YES;
        }
      else if (((cached_mode == MODE_TI) || (cached_mode == MODE_TF)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    default:
      return DWORD_MODE_NO;

    }
}

enum attr_enabled
get_attr_enabled (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_compression cached_compression ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xcULL)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 417:  /* mfhc1tf */
    case 410:  /* mthc1tf */
      extract_constrain_insn_cached (insn);
      if ((
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 403:  /* store_wordtf */
    case 396:  /* load_hightf */
    case 389:  /* load_lowtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x18ULL)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 376:  /* *movv2sf */
    case 369:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x62ULL)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2aULL)) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x366ULL)) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x28a0ULL)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2a80ULL)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x88ULL)) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 446:  /* *lshrdi3 */
    case 444:  /* *ashldi3 */
    case 443:  /* *lshrsi3 */
    case 441:  /* *ashlsi3 */
    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
    case 192:  /* *xordi3 */
    case 191:  /* *xorsi3 */
    case 188:  /* *iordi3 */
    case 187:  /* *iorsi3 */
    case 182:  /* one_cmpldi2 */
    case 181:  /* one_cmplsi2 */
    case 27:  /* subdi3 */
    case 26:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 14:  /* *adddi3 */
    case 13:  /* *addsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x3dULL)) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 43:  /* *mul_acc_si_r3900 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 2030 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!mips_lra_flag)))
        {
	  return ENABLED_YES;
        }
      else if ((which_alternative == 1) && (
#line 2033 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_lra_flag)))
        {
	  return ENABLED_YES;
        }
      else if (((1ULL << which_alternative) & 0xcULL))
        {
	  return ENABLED_YES;
        }
      else
        {
	  return ENABLED_NO;
        }

    case 42:  /* *mul_acc_si */
    case 49:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 2030 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!mips_lra_flag)))
        {
	  return ENABLED_YES;
        }
      else if ((which_alternative == 1) && (
#line 2033 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_lra_flag)))
        {
	  return ENABLED_YES;
        }
      else if (which_alternative == 2)
        {
	  return ENABLED_YES;
        }
      else
        {
	  return ENABLED_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_MTC) || (cached_move_type == MOVE_TYPE_MFC)) && (
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_FLOATXX && !ISA_HAS_MXHC1)
			   || TARGET_O32_FP64A_ABI)) && (get_attr_dword_mode (insn) == DWORD_MODE_YES))
        {
	  return ENABLED_NO;
        }
      else if ((((cached_compression = get_attr_compression (insn)) == COMPRESSION_MICROMIPS32) || (cached_compression == COMPRESSION_MICROMIPS)) && (
#line 480 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(!TARGET_MICROMIPS)))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    default:
      return ENABLED_YES;

    }
}

enum attr_extended_mips16
get_attr_extended_mips16 (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 664:  /* call_value_multiple_split */
    case 663:  /* call_value_multiple_internal */
    case 660:  /* call_value_split */
    case 659:  /* call_value_internal */
    case 656:  /* call_split */
    case 655:  /* call_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 550:  /* *sltu_didi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 548:  /* *sltu_sidi_mips16 */
    case 547:  /* *slt_sidi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 544:  /* *sltu_sisi_mips16 */
    case 543:  /* *slt_sisi_mips16 */
    case 457:  /* *lshrdi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 455:  /* *ashldi3_mips16 */
    case 452:  /* *lshrsi3_mips16 */
    case 451:  /* *ashrsi3_mips16 */
    case 450:  /* *ashlsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return EXTENDED_MIPS16_NO;
        }
      else
        {
	  return EXTENDED_MIPS16_YES;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 200:  /* truncdisi2 */
    case 199:  /* truncdihi2 */
    case 198:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 194:  /* *xordi3_mips16 */
    case 193:  /* *xorsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return EXTENDED_MIPS16_NO;
        }
      else if (which_alternative == 2)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 15:  /* *addsi3_mips16 */
    case 16:  /* *adddi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else if (which_alternative == 1)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else if (which_alternative == 2)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else if (which_alternative == 3)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else if (which_alternative == 4)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else if (which_alternative == 5)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else if (which_alternative == 6)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else if (which_alternative == 7)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 559:  /* *sle_sisi_mips16 */
    case 560:  /* *sleu_sisi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 563:  /* *sle_sidi_mips16 */
    case 564:  /* *sleu_sidi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 566:  /* *sleu_didi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else
        {
	  return EXTENDED_MIPS16_YES;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if ((((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_SLL0) || (cached_move_type == MOVE_TYPE_LOADPOOL)) || (get_attr_jal (insn) == JAL_DIRECT) || (get_attr_got (insn) == GOT_LOAD))
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 662:  /* call_value_direct_split */
    case 661:  /* call_value_internal_direct */
    case 658:  /* call_direct_split */
    case 657:  /* call_internal_direct */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 18:  /* *addsi3_extended_mips16 */
    case 291:  /* *unshifted_high */
    case 292:  /* *unshifted_high */
    case 305:  /* *lowsi_mips16 */
    case 306:  /* *lowdi_mips16 */
    case 622:  /* indirect_jump_and_restore_si */
    case 623:  /* indirect_jump_and_restore_di */
    case 703:  /* *mips16e_save_restore */
      return EXTENDED_MIPS16_YES;

    default:
      return EXTENDED_MIPS16_NO;

    }
}

enum attr_got
get_attr_got (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 295:  /* *xgot_losi */
    case 296:  /* *xgot_lodi */
    case 297:  /* *got_dispsi */
    case 298:  /* *got_dispdi */
    case 299:  /* *got_pagesi */
    case 300:  /* *got_pagedi */
    case 301:  /* load_gotsi */
    case 302:  /* load_gotdi */
    case 648:  /* load_callsi */
    case 649:  /* load_calldi */
      return GOT_LOAD;

    case 293:  /* *xgot_hisi */
    case 294:  /* *xgot_hidi */
      return GOT_XGOT_HIGH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return GOT_UNSET;

    }
}

enum attr_hazard
get_attr_hazard (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((!((1ULL << which_alternative) & 0x3dULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0xcULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 721:  /* *join2_load_storedf */
    case 720:  /* *join2_load_storesf */
    case 719:  /* *join2_load_storesi */
    case 718:  /* *join2_load_storehi */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x3ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 826:  /* sungt_ps */
    case 825:  /* sunge_ps */
    case 824:  /* sgt_ps */
    case 823:  /* sge_ps */
    case 822:  /* sne_ps */
    case 821:  /* sltgt_ps */
    case 820:  /* sordered_ps */
    case 819:  /* sle_ps */
    case 818:  /* slt_ps */
    case 817:  /* seq_ps */
    case 816:  /* sunle_ps */
    case 815:  /* sunlt_ps */
    case 814:  /* suneq_ps */
    case 813:  /* sunordered_ps */
    case 812:  /* mips_cabs_cond_ps */
    case 811:  /* mips_c_cond_ps */
    case 810:  /* mips_cabs_cond_4s */
    case 809:  /* mips_c_cond_4s */
    case 808:  /* mips_cabs_cond_d */
    case 807:  /* mips_cabs_cond_s */
    case 616:  /* sungt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 609:  /* sge_sf_using_ccf */
    case 608:  /* sungt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 605:  /* sge_df_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 601:  /* sge_sf_using_cc */
    case 600:  /* sne_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 581:  /* sunordered_sf_using_ccf */
    case 580:  /* sle_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 567:  /* sunordered_sf_using_cc */
      extract_constrain_insn_cached (insn);
      if (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 1162:  /* vec_loongson_extract_lo_v8qi */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 641:  /* cop0_move */
    case 417:  /* mfhc1tf */
    case 416:  /* mfhc1v8qi */
    case 415:  /* mfhc1v4hi */
    case 414:  /* mfhc1v2si */
    case 413:  /* mfhc1v2sf */
    case 412:  /* mfhc1di */
    case 411:  /* mfhc1df */
    case 410:  /* mthc1tf */
    case 409:  /* mthc1v8qi */
    case 408:  /* mthc1v4hi */
    case 407:  /* mthc1v2si */
    case 406:  /* mthc1v2sf */
    case 405:  /* mthc1di */
    case 404:  /* mthc1df */
      extract_constrain_insn_cached (insn);
      if (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 403:  /* store_wordtf */
    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 396:  /* load_hightf */
    case 395:  /* load_highv8qi */
    case 394:  /* load_highv4hi */
    case 393:  /* load_highv2si */
    case 392:  /* load_highv2sf */
    case 391:  /* load_highdi */
    case 390:  /* load_highdf */
    case 389:  /* load_lowtf */
    case 388:  /* load_lowv8qi */
    case 387:  /* load_lowv4hi */
    case 386:  /* load_lowv2si */
    case 385:  /* load_lowv2sf */
    case 384:  /* load_lowdi */
    case 383:  /* load_lowdf */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((which_alternative == 0) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 379:  /* mfhidi_ti */
    case 378:  /* mfhisi_ti */
    case 377:  /* mfhisi_di */
      extract_constrain_insn_cached (insn);
      if (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (((((1ULL << which_alternative) & 0x22ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0x18ULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if (((which_alternative == 4) && (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) || ((which_alternative == 6) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 375:  /* *movtf_mips16 */
    case 371:  /* *movdf_mips16 */
    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 376:  /* *movv2sf */
    case 369:  /* *movdf_hardfloat */
    case 366:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((1ULL << which_alternative) & 0x104ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0x62ULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x18ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 8) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((1ULL << which_alternative) & 0x1010e0ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0x29a800ULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 18) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xc0ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 9) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((1ULL << which_alternative) & 0x1048ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0x28a0ULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 10) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 373:  /* *movti_mips16 */
    case 364:  /* *movqi_mips16 */
    case 362:  /* *movhi_mips16 */
    case 310:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 7) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((1ULL << which_alternative) & 0x1104ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1ULL << which_alternative) & 0x2a80ULL)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if (((which_alternative == 4) && (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) || ((which_alternative == 6) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 1054:  /* *lwp */
    case 950:  /* *mips_lwux_di_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 947:  /* *mips_lwx_si_ext */
    case 946:  /* mips_ldx_di */
    case 945:  /* mips_lwx_di */
    case 944:  /* mips_ldx_si */
    case 943:  /* mips_lwx_si */
    case 942:  /* mips_lhux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 935:  /* mips_lbx_extsi_di */
    case 934:  /* mips_lhux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 927:  /* mips_lbx_extsi_si */
    case 723:  /* *join2_loadhi */
    case 722:  /* *join2_loadhi */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 458:  /* *mips.md:5842 */
    case 360:  /* *lwxs */
    case 359:  /* *lwxs */
    case 358:  /* *lwxs */
    case 357:  /* *lwxs */
    case 356:  /* *lwxs */
    case 355:  /* *lwxs */
    case 354:  /* *lwxs */
    case 353:  /* *lwxs */
    case 352:  /* *lwxs */
    case 351:  /* *lwxs */
    case 350:  /* *lwxs */
    case 349:  /* *lwxs */
    case 348:  /* *lwxs */
    case 347:  /* *lwxs */
    case 346:  /* *lwxs */
    case 345:  /* *lwxs */
    case 344:  /* *lwxs */
    case 343:  /* *lwxs */
    case 336:  /* *ldxc1_di */
    case 335:  /* *ldxc1_di */
    case 334:  /* *lwxc1_di */
    case 333:  /* *ldxc1_si */
    case 332:  /* *ldxc1_si */
    case 331:  /* *lwxc1_si */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 235:  /* extendsidi2 */
    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 370:  /* *movdf_softfloat */
    case 367:  /* *movsf_softfloat */
    case 365:  /* movccf */
    case 250:  /* *extendqihi2_seb */
    case 249:  /* *extendqihi2 */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
    case 228:  /* *zero_extendqihi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 214:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x7ULL)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 50:  /* *muls */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 67:  /* smulsi3_highpart_internal */
    case 62:  /* *mulsu_di */
    case 61:  /* *muls_di */
    case 58:  /* umulsidi3_64bit_hilo */
    case 57:  /* mulsidi3_64bit_hilo */
    case 56:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 52:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit */
    case 41:  /* muldi3_r4000 */
    case 40:  /* mulsi3_r4000 */
    case 39:  /* muldi3_internal */
    case 38:  /* mulsi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 37:  /* muldi3_mul3 */
    case 36:  /* mulsi3_mul3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)) && (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if (((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)) && (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((cached_type == TYPE_FCMP) && (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((cached_type == TYPE_IMUL) && (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else if (((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)) && (! (
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 471:  /* *branch_ordersi */
    case 472:  /* *branch_orderdi */
    case 473:  /* *branch_ordersi_inverted */
    case 474:  /* *branch_orderdi_inverted */
    case 475:  /* *branch_equalitysi */
    case 476:  /* *branch_equalitydi */
    case 477:  /* *branch_equalitysi_inverted */
    case 478:  /* *branch_equalitydi_inverted */
      return HAZARD_FORBIDDEN_SLOT;

    default:
      return HAZARD_NONE;

    }
}

int
get_attr_insn_count (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1240:  /* umodv16qi3 */
    case 1239:  /* umodv8hi3 */
    case 1238:  /* umodv4si3 */
    case 1237:  /* umodv2di3 */
    case 1236:  /* modv16qi3 */
    case 1235:  /* modv8hi3 */
    case 1234:  /* modv4si3 */
    case 1233:  /* modv2di3 */
    case 1232:  /* udivv16qi3 */
    case 1231:  /* udivv8hi3 */
    case 1230:  /* udivv4si3 */
    case 1229:  /* udivv2di3 */
    case 1228:  /* divv16qi3 */
    case 1227:  /* divv8hi3 */
    case 1226:  /* divv4si3 */
    case 1225:  /* divv2di3 */
      extract_constrain_insn_cached (insn);
      if (
#line 565 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CHECK_ZERO_DIV))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x1cULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (!((1ULL << which_alternative) & 0x3dULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (((1ULL << which_alternative) & 0x21ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 792:  /* atomic_fetch_adddi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 787:  /* atomic_exchangesi_llsc */
    case 786:  /* atomic_compare_and_swapdi */
    case 785:  /* atomic_compare_and_swapsi */
    case 784:  /* test_and_set_12 */
    case 783:  /* sync_lock_test_and_setdi */
    case 782:  /* sync_lock_test_and_setsi */
    case 781:  /* sync_new_nanddi */
    case 780:  /* sync_new_nandsi */
    case 779:  /* sync_old_nanddi */
    case 778:  /* sync_old_nandsi */
    case 777:  /* sync_nanddi */
    case 776:  /* sync_nandsi */
    case 775:  /* sync_new_anddi */
    case 774:  /* sync_new_xordi */
    case 773:  /* sync_new_iordi */
    case 772:  /* sync_new_andsi */
    case 771:  /* sync_new_xorsi */
    case 770:  /* sync_new_iorsi */
    case 769:  /* sync_old_anddi */
    case 768:  /* sync_old_xordi */
    case 767:  /* sync_old_iordi */
    case 766:  /* sync_old_andsi */
    case 765:  /* sync_old_xorsi */
    case 764:  /* sync_old_iorsi */
    case 763:  /* sync_anddi */
    case 762:  /* sync_xordi */
    case 761:  /* sync_iordi */
    case 760:  /* sync_andsi */
    case 759:  /* sync_xorsi */
    case 758:  /* sync_iorsi */
    case 757:  /* sync_new_subdi */
    case 756:  /* sync_new_subsi */
    case 755:  /* sync_new_adddi */
    case 754:  /* sync_new_addsi */
    case 753:  /* sync_old_subdi */
    case 752:  /* sync_old_subsi */
    case 751:  /* sync_old_adddi */
    case 750:  /* sync_old_addsi */
    case 749:  /* sync_subdi */
    case 748:  /* sync_subsi */
    case 747:  /* sync_new_nand_12 */
    case 746:  /* sync_old_nand_12 */
    case 745:  /* sync_nand_12 */
    case 744:  /* sync_new_and_12 */
    case 743:  /* sync_new_xor_12 */
    case 742:  /* sync_new_ior_12 */
    case 741:  /* sync_new_sub_12 */
    case 740:  /* sync_new_add_12 */
    case 739:  /* sync_old_and_12 */
    case 738:  /* sync_old_xor_12 */
    case 737:  /* sync_old_ior_12 */
    case 736:  /* sync_old_sub_12 */
    case 735:  /* sync_old_add_12 */
    case 734:  /* sync_and_12 */
    case 733:  /* sync_xor_12 */
    case 732:  /* sync_ior_12 */
    case 731:  /* sync_sub_12 */
    case 730:  /* sync_add_12 */
    case 729:  /* sync_adddi */
    case 728:  /* sync_addsi */
    case 727:  /* compare_and_swap_12 */
    case 726:  /* sync_compare_and_swapdi */
    case 725:  /* sync_compare_and_swapsi */
      extract_constrain_insn_cached (insn);
      return 
#line 570 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands));

    case 661:  /* call_value_internal_direct */
    case 657:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 2;
        }
      else if ((
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_YES)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 663:  /* call_value_multiple_internal */
    case 659:  /* call_value_internal */
    case 655:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 664:  /* call_value_multiple_split */
    case 660:  /* call_value_split */
    case 656:  /* call_split */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
    case 566:  /* *sleu_didi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 564:  /* *sleu_sidi_mips16 */
    case 563:  /* *sle_sidi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 560:  /* *sleu_sisi_mips16 */
    case 559:  /* *sle_sisi_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 417:  /* mfhc1tf */
    case 410:  /* mthc1tf */
      extract_constrain_insn_cached (insn);
      if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 403:  /* store_wordtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 396:  /* load_hightf */
    case 389:  /* load_lowtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 375:  /* *movtf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x7ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x7ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x19ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x19ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 4;
        }
      else if (((1ULL << which_alternative) & 0x22ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3bULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 373:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1ULL << which_alternative) & 0x78ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x7ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 4;
        }
      else if ((((1ULL << which_alternative) & 0x18ULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 5)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 6)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((!((1ULL << which_alternative) & 0x1eULL)) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 2;
        }
      else if ((which_alternative == 0) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 4;
        }
      else if ((which_alternative == 1) && (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (which_alternative == 1)
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 2)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 3)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 371:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x7ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 370:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 376:  /* *movv2sf */
    case 369:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xe2ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 366:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 367:  /* *movsf_softfloat */
    case 365:  /* movccf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 364:  /* *movqi_mips16 */
    case 362:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 5)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 6)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x6ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (((1ULL << which_alternative) & 0x60ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else if (((1ULL << which_alternative) & 0x38ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 7)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 8)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1cULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x1010e0ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3fb8ffULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 6) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) || ((!((1ULL << which_alternative) & 0x1f8ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x38ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x38ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 7)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 8)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2ea1ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x6ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x6ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x1048ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3eefULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 310:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1ULL << which_alternative) & 0x78ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if ((((1ULL << which_alternative) & 0x18ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (which_alternative == 5)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (which_alternative == 6)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x2ae1ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if (which_alternative == 1)
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if (((1ULL << which_alternative) & 0x1104ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if (!((1ULL << which_alternative) & 0x3bf7ULL))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 308:  /* *movdi_ra */
    case 307:  /* *movsi_ra */
    case 288:  /* mov_sdr */
    case 287:  /* mov_swr */
    case 286:  /* mov_sdl */
    case 285:  /* mov_swl */
      extract_constrain_insn_cached (insn);
      return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));

    case 255:  /* *extendhi_truncateqi */
    case 254:  /* *extendsi_truncatehi */
    case 253:  /* *extendsi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 251:  /* *extenddi_truncateqi */
      extract_constrain_insn_cached (insn);
      if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 235:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x3ULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 2;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));

    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 395:  /* load_highv8qi */
    case 394:  /* load_highv4hi */
    case 393:  /* load_highv2si */
    case 392:  /* load_highv2sf */
    case 391:  /* load_highdi */
    case 390:  /* load_highdf */
    case 388:  /* load_lowv8qi */
    case 387:  /* load_lowv4hi */
    case 386:  /* load_lowv2si */
    case 385:  /* load_lowv2sf */
    case 384:  /* load_lowdi */
    case 383:  /* load_lowdf */
    case 250:  /* *extendqihi2_seb */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
    case 228:  /* *zero_extendqihi2 */
    case 215:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 249:  /* *extendqihi2 */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 214:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 4;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }

    case 200:  /* truncdisi2 */
    case 199:  /* truncdihi2 */
    case 198:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else
        {
	  return 1;
        }

    case 550:  /* *sltu_didi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 548:  /* *sltu_sidi_mips16 */
    case 547:  /* *slt_sidi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 544:  /* *sltu_sisi_mips16 */
    case 543:  /* *slt_sisi_mips16 */
    case 457:  /* *lshrdi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 455:  /* *ashldi3_mips16 */
    case 452:  /* *lshrsi3_mips16 */
    case 451:  /* *ashrsi3_mips16 */
    case 450:  /* *ashlsi3_mips16 */
    case 194:  /* *xordi3_mips16 */
    case 193:  /* *xorsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 4;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 4;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else
        {
	  return 1;
        }

    case 156:  /* umoddi3 */
    case 155:  /* moddi3 */
    case 154:  /* umodsi3 */
    case 153:  /* modsi3 */
    case 152:  /* udivdi3 */
    case 151:  /* divdi3 */
    case 150:  /* udivsi3 */
    case 149:  /* divsi3 */
    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 145:  /* divmodsi4_hilo_ti */
    case 144:  /* udivmodsi4_hilo_di */
    case 143:  /* divmodsi4_hilo_di */
      extract_constrain_insn_cached (insn);
      return 
#line 561 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_idiv_insns (GET_MODE (PATTERN (insn))));

    case 43:  /* *mul_acc_si_r3900 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 49:  /* *mul_sub_si */
    case 42:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 1051:  /* ssmsubsqdq4 */
    case 1050:  /* ssmaddsqdq4 */
    case 83:  /* umaddsidi4 */
    case 82:  /* maddsidi4 */
    case 81:  /* madsi */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 64:  /* umsubsidi4 */
    case 63:  /* msubsidi4 */
    case 59:  /* mulsidi3_64bit_dmul */
    case 48:  /* *msac2 */
    case 47:  /* *macc2 */
    case 45:  /* *msac */
    case 44:  /* *macc */
    case 39:  /* muldi3_internal */
    case 37:  /* muldi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (
#line 549 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 703:  /* *mips16e_save_restore */
    case 662:  /* call_value_direct_split */
    case 658:  /* call_direct_split */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 623:  /* indirect_jump_and_restore_di */
    case 622:  /* indirect_jump_and_restore_si */
    case 306:  /* *lowdi_mips16 */
    case 305:  /* *lowsi_mips16 */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 292:  /* *unshifted_high */
    case 291:  /* *unshifted_high */
    case 18:  /* *addsi3_extended_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 16:  /* *adddi3_mips16 */
    case 15:  /* *addsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xaaULL)) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 55:  /* mulsidi3_64bit */
    case 56:  /* umulsidi3_64bit */
      extract_constrain_insn_cached (insn);
      if (
#line 2157 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_EXT_INS))
        {
	  return 4;
        }
      else
        {
	  return 7;
        }

    case 129:  /* *divsf3 */
    case 130:  /* *divdf3 */
    case 131:  /* *divv2sf3 */
    case 132:  /* *recipsf3 */
    case 133:  /* *recipdf3 */
    case 134:  /* *recipv2sf3 */
    case 157:  /* sqrtsf2 */
    case 158:  /* sqrtdf2 */
    case 159:  /* sqrtv2sf2 */
    case 160:  /* *rsqrtsfa */
    case 161:  /* *rsqrtdfa */
    case 162:  /* *rsqrtv2sfa */
    case 163:  /* *rsqrtsfb */
    case 164:  /* *rsqrtdfb */
    case 165:  /* *rsqrtv2sfb */
      extract_constrain_insn_cached (insn);
      if (
#line 3125 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_SB1))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 263:  /* fix_truncdfsi2_macro */
    case 265:  /* fix_truncsfsi2_macro */
      return 9;

    case 290:  /* *lea64 */
      return 6;

    case 429:  /* cprestore_si */
    case 430:  /* cprestore_di */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 289:  /* *lea_high64 */
    case 437:  /* clear_hazard_si */
    case 438:  /* clear_hazard_di */
      return 5;

    case 458:  /* *mips.md:5842 */
      extract_constrain_insn_cached (insn);
      return 
#line 5855 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) + 2);

    case 626:  /* casesi_internal_mips16_si */
    case 627:  /* casesi_internal_mips16_di */
      extract_constrain_insn_cached (insn);
      if (
#line 6533 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 651:  /* update_got_version */
    case 650:  /* set_got_version */
    case 647:  /* move_gpdi */
    case 646:  /* move_gpsi */
    case 645:  /* restore_gp_di */
    case 644:  /* restore_gp_si */
    case 628:  /* blockage */
    case 432:  /* use_cprestore_di */
    case 431:  /* use_cprestore_si */
    case 428:  /* potential_cprestore_di */
    case 427:  /* potential_cprestore_si */
    case 426:  /* copygp_mips16_di */
    case 425:  /* copygp_mips16_si */
    case 424:  /* loadgp_rtp_di */
    case 423:  /* loadgp_rtp_si */
    case 422:  /* loadgp_blockage */
    case 421:  /* loadgp_absolute_di */
    case 420:  /* loadgp_absolute_si */
    case 419:  /* loadgp_newabi_di */
    case 418:  /* loadgp_newabi_si */
    case 670:  /* insn_pseudo */
    case 697:  /* consttable */
    case 698:  /* consttable_end */
      return 0;

    case 708:  /* tls_get_tp_mips16_si */
    case 709:  /* tls_get_tp_mips16_di */
      return 4;

    case 53:  /* mulsidi3_32bit_r4000 */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 80:  /* umulditi3_r4000 */
    case 137:  /* divmodsi4_mips16 */
    case 138:  /* divmoddi4_mips16 */
    case 141:  /* udivmodsi4_mips16 */
    case 142:  /* udivmoddi4_mips16 */
    case 710:  /* *tls_get_tp_mips16_call_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 717:  /* mips_set_fcsr_mips16_di */
      return 3;

    case 294:  /* *xgot_hidi */
    case 293:  /* *xgot_hisi */
    case 31:  /* *mulsf3_r4300 */
    case 32:  /* *muldf3_r4300 */
    case 40:  /* mulsi3_r4000 */
    case 41:  /* muldi3_r4000 */
    case 46:  /* *msac_using_macc */
    case 67:  /* smulsi3_highpart_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 135:  /* *divmodsi4 */
    case 136:  /* *divmoddi4 */
    case 139:  /* *udivmodsi4 */
    case 140:  /* *udivmoddi4 */
    case 462:  /* bswapsi2 */
    case 463:  /* bswapdi2 */
    case 704:  /* tls_get_tp_si */
    case 705:  /* tls_get_tp_di */
    case 718:  /* *join2_load_storehi */
    case 719:  /* *join2_load_storesi */
    case 720:  /* *join2_load_storesf */
    case 721:  /* *join2_load_storedf */
    case 722:  /* *join2_loadhi */
    case 723:  /* *join2_loadhi */
    case 809:  /* mips_c_cond_4s */
    case 810:  /* mips_cabs_cond_4s */
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((get_attr_extended_mips16 (insn) == EXTENDED_MIPS16_YES) && (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 2;
        }
      else if (get_attr_got (insn) == GOT_XGOT_HIGH)
        {
	  return 2;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_SHIFT_SHIFT)
        {
	  if (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 4;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || (cached_move_type == MOVE_TYPE_MFC) || (cached_move_type == MOVE_TYPE_MTLO) || (cached_move_type == MOVE_TYPE_MFLO) || (cached_move_type == MOVE_TYPE_MOVE)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 2;
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || (cached_move_type == MOVE_TYPE_MFC) || (cached_move_type == MOVE_TYPE_MOVE)) && (get_attr_qword_mode (insn) == QWORD_MODE_YES))
        {
	  return 4;
        }
      else if (((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]));
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN))
        {
	  return 
#line 525 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]));
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 
#line 527 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn));
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  return 
#line 529 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn)
		      + (TARGET_FIX_24K ? 1 : 0));
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 8;
        }
      else if ((cached_type == TYPE_IMADD) && (
#line 549 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120)))
        {
	  return 2;
        }
      else if (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && (get_attr_mode (insn) == MODE_DI) && (
#line 549 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120)))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3))
        {
	  return 
#line 561 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_idiv_insns (GET_MODE (PATTERN (insn))));
        }
      else if (cached_type == TYPE_SIMD_DIV)
        {
	  if (
#line 565 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CHECK_ZERO_DIV))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return 
#line 570 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands));
        }
      else
        {
	  return 1;
        }

    default:
      return 1;

    }
}

enum attr_jal_macro
get_attr_jal_macro (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_jal cached_jal ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 661:  /* call_value_internal_direct */
    case 657:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      return 
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));

    case 663:  /* call_value_multiple_internal */
    case 659:  /* call_value_internal */
    case 655:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else
        {
	  return 
#line 207 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((cached_jal = get_attr_jal (insn)) == JAL_DIRECT)
        {
	  return 
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else if (cached_jal == JAL_INDIRECT)
        {
	  return 
#line 207 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else
        {
	  return JAL_MACRO_NO;
        }

    default:
      return JAL_MACRO_NO;

    }
}

enum attr_jal
get_attr_jal (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 652:  /* sibcall_internal */
    case 653:  /* sibcall_value_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 655:  /* call_internal */
    case 656:  /* call_split */
    case 659:  /* call_value_internal */
    case 660:  /* call_value_split */
    case 663:  /* call_value_multiple_internal */
    case 664:  /* call_value_multiple_split */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return JAL_INDIRECT;
        }
      else
        {
	  return JAL_DIRECT;
        }

    case 657:  /* call_internal_direct */
    case 658:  /* call_direct_split */
    case 661:  /* call_value_internal_direct */
    case 662:  /* call_value_direct_split */
      return JAL_DIRECT;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return JAL_UNSET;

    }
}

enum attr_ls2_turn_type
get_attr_ls2_turn_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 4:  /* ls2_falu2_turn_enabled_insn */
      return LS2_TURN_TYPE_FALU2;

    case 3:  /* ls2_falu1_turn_enabled_insn */
      return LS2_TURN_TYPE_FALU1;

    case 2:  /* ls2_alu2_turn_enabled_insn */
      return LS2_TURN_TYPE_ALU2;

    case 1:  /* ls2_alu1_turn_enabled_insn */
      return LS2_TURN_TYPE_ALU1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return LS2_TURN_TYPE_UNKNOWN;

    }
}

enum attr_may_clobber_hilo
get_attr_may_clobber_hilo (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 17)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 9)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 372:  /* *movti */
    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x30ULL))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD) || (cached_type == TYPE_IDIV) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 1051:  /* ssmsubsqdq4 */
    case 1050:  /* ssmaddsqdq4 */
    case 1049:  /* ssmulsq3 */
    case 1048:  /* ssmulhq3 */
    case 1047:  /* ssmulv2hq3 */
    case 968:  /* mips_mulq_s_w */
    case 967:  /* mips_mulq_s_ph */
    case 966:  /* mips_mulq_rs_w */
    case 965:  /* mips_mul_s_ph */
    case 964:  /* mulv2hi3 */
    case 887:  /* mips_muleq_s_w_phr */
    case 886:  /* mips_muleq_s_w_phl */
    case 885:  /* mips_mulq_rs_ph */
    case 884:  /* mips_muleu_s_ph_qbr */
    case 883:  /* mips_muleu_s_ph_qbl */
    case 382:  /* mthidi_ti */
    case 381:  /* mthisi_ti */
    case 380:  /* mthisi_di */
    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 145:  /* divmodsi4_hilo_ti */
    case 144:  /* udivmodsi4_hilo_di */
    case 143:  /* divmodsi4_hilo_di */
    case 142:  /* udivmoddi4_mips16 */
    case 141:  /* udivmodsi4_mips16 */
    case 140:  /* *udivmoddi4 */
    case 139:  /* *udivmodsi4 */
    case 138:  /* divmoddi4_mips16 */
    case 137:  /* divmodsi4_mips16 */
    case 136:  /* *divmoddi4 */
    case 135:  /* *divmodsi4 */
    case 83:  /* umaddsidi4 */
    case 82:  /* maddsidi4 */
    case 81:  /* madsi */
    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 72:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 71:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 70:  /* umulsi3_highpart_mulhi_internal */
    case 69:  /* smulsi3_highpart_mulhi_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 67:  /* smulsi3_highpart_internal */
    case 64:  /* umsubsidi4 */
    case 63:  /* msubsidi4 */
    case 62:  /* *mulsu_di */
    case 61:  /* *muls_di */
    case 59:  /* mulsidi3_64bit_dmul */
    case 58:  /* umulsidi3_64bit_hilo */
    case 57:  /* mulsidi3_64bit_hilo */
    case 56:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 52:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit */
    case 50:  /* *muls */
    case 49:  /* *mul_sub_si */
    case 48:  /* *msac2 */
    case 47:  /* *macc2 */
    case 46:  /* *msac_using_macc */
    case 45:  /* *msac */
    case 44:  /* *macc */
    case 43:  /* *mul_acc_si_r3900 */
    case 42:  /* *mul_acc_si */
    case 41:  /* muldi3_r4000 */
    case 40:  /* mulsi3_r4000 */
    case 39:  /* muldi3_internal */
    case 38:  /* mulsi3_internal */
    case 37:  /* muldi3_mul3 */
    case 36:  /* mulsi3_mul3 */
      return MAY_CLOBBER_HILO_YES;

    default:
      return MAY_CLOBBER_HILO_NO;

    }
}

enum attr_mode
get_attr_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_TI;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 1169:  /* msa_insert_w_f */
    case 1175:  /* msa_insve_w_f */
    case 1181:  /* msa_insve_w_f_scalar */
    case 1188:  /* msa_copy_s_w_f_64bit */
    case 1190:  /* msa_copy_s_w_f */
    case 1194:  /* vec_permv4sf */
    case 1200:  /* movv4sf_msa */
    case 1270:  /* addv4sf3 */
    case 1272:  /* subv4sf3 */
    case 1274:  /* mulv4sf3 */
    case 1276:  /* divv4sf3 */
    case 1278:  /* fmav4sf4 */
    case 1280:  /* fnmav4sf4 */
    case 1282:  /* sqrtv4sf2 */
    case 1414:  /* msa_fclass_w */
    case 1416:  /* msa_fcaf_w */
    case 1418:  /* msa_fcune_w */
    case 1428:  /* msa_fcun_w */
    case 1429:  /* msa_fcor_w */
    case 1430:  /* msa_fceq_w */
    case 1431:  /* msa_fcne_w */
    case 1432:  /* msa_fcle_w */
    case 1433:  /* msa_fclt_w */
    case 1434:  /* msa_fcueq_w */
    case 1435:  /* msa_fcule_w */
    case 1436:  /* msa_fcult_w */
    case 1448:  /* msa_fsaf_w */
    case 1449:  /* msa_fsun_w */
    case 1450:  /* msa_fsor_w */
    case 1451:  /* msa_fseq_w */
    case 1452:  /* msa_fsne_w */
    case 1453:  /* msa_fsueq_w */
    case 1454:  /* msa_fsune_w */
    case 1455:  /* msa_fsule_w */
    case 1456:  /* msa_fsult_w */
    case 1457:  /* msa_fsle_w */
    case 1458:  /* msa_fslt_w */
    case 1460:  /* msa_fexp2_w */
    case 1462:  /* floatv4siv4sf2 */
    case 1464:  /* floatunsv4siv4sf2 */
    case 1466:  /* msa_ffql_w */
    case 1468:  /* msa_ffqr_w */
    case 1470:  /* msa_fill_w_f */
    case 1476:  /* msa_flog2_w */
    case 1478:  /* smaxv4sf3 */
    case 1480:  /* msa_fmax_a_w */
    case 1482:  /* sminv4sf3 */
    case 1484:  /* msa_fmin_a_w */
    case 1486:  /* msa_frcp_w */
    case 1488:  /* msa_frint_w */
    case 1490:  /* msa_frsqrt_w */
    case 1492:  /* msa_ftint_s_w */
    case 1494:  /* msa_ftint_u_w */
    case 1496:  /* fix_truncv4sfv4si2 */
    case 1498:  /* fixuns_truncv4sfv4si2 */
    case 1499:  /* msa_ftq_h */
    case 1516:  /* msa_ilvev_w_f */
    case 1520:  /* msa_ilvl_w_f */
    case 1526:  /* msa_ilvod_w_f */
    case 1530:  /* msa_ilvr_w_f */
    case 1584:  /* msa_pckev_w_f */
    case 1588:  /* msa_pckod_w_f */
    case 1604:  /* msa_shf_w_f */
    case 1638:  /* msa_sld_w_f */
    case 1644:  /* msa_sldi_w_f */
    case 1650:  /* msa_splat_w_f */
    case 1656:  /* msa_splati_w_f */
    case 1662:  /* msa_splati_w_f_scalar */
    case 1666:  /* vec_pack_trunc_v2df */
    case 1667:  /* msa_fexupl_w */
    case 1669:  /* msa_fexupr_w */
    case 1673:  /* msa_bz_w_f */
    case 1674:  /* msa_bnz_w_f */
      return MODE_V4SF;

    case 1168:  /* msa_insert_d_f */
    case 1174:  /* msa_insve_d_f */
    case 1180:  /* msa_insve_d_f_scalar */
    case 1192:  /* msa_copy_s_d_f */
    case 1193:  /* vec_permv2df */
    case 1199:  /* movv2df_msa */
    case 1269:  /* addv2df3 */
    case 1271:  /* subv2df3 */
    case 1273:  /* mulv2df3 */
    case 1275:  /* divv2df3 */
    case 1277:  /* fmav2df4 */
    case 1279:  /* fnmav2df4 */
    case 1281:  /* sqrtv2df2 */
    case 1413:  /* msa_fclass_d */
    case 1415:  /* msa_fcaf_d */
    case 1417:  /* msa_fcune_d */
    case 1419:  /* msa_fcun_d */
    case 1420:  /* msa_fcor_d */
    case 1421:  /* msa_fceq_d */
    case 1422:  /* msa_fcne_d */
    case 1423:  /* msa_fcle_d */
    case 1424:  /* msa_fclt_d */
    case 1425:  /* msa_fcueq_d */
    case 1426:  /* msa_fcule_d */
    case 1427:  /* msa_fcult_d */
    case 1437:  /* msa_fsaf_d */
    case 1438:  /* msa_fsun_d */
    case 1439:  /* msa_fsor_d */
    case 1440:  /* msa_fseq_d */
    case 1441:  /* msa_fsne_d */
    case 1442:  /* msa_fsueq_d */
    case 1443:  /* msa_fsune_d */
    case 1444:  /* msa_fsule_d */
    case 1445:  /* msa_fsult_d */
    case 1446:  /* msa_fsle_d */
    case 1447:  /* msa_fslt_d */
    case 1459:  /* msa_fexp2_d */
    case 1461:  /* floatv2div2df2 */
    case 1463:  /* floatunsv2div2df2 */
    case 1465:  /* msa_ffql_d */
    case 1467:  /* msa_ffqr_d */
    case 1469:  /* msa_fill_d_f */
    case 1475:  /* msa_flog2_d */
    case 1477:  /* smaxv2df3 */
    case 1479:  /* msa_fmax_a_d */
    case 1481:  /* sminv2df3 */
    case 1483:  /* msa_fmin_a_d */
    case 1485:  /* msa_frcp_d */
    case 1487:  /* msa_frint_d */
    case 1489:  /* msa_frsqrt_d */
    case 1491:  /* msa_ftint_s_d */
    case 1493:  /* msa_ftint_u_d */
    case 1495:  /* fix_truncv2dfv2di2 */
    case 1497:  /* fixuns_truncv2dfv2di2 */
    case 1500:  /* msa_ftq_w */
    case 1522:  /* msa_ilvl_d_f */
    case 1532:  /* msa_ilvr_d_f */
    case 1637:  /* msa_sld_d_f */
    case 1643:  /* msa_sldi_d_f */
    case 1649:  /* msa_splat_d_f */
    case 1655:  /* msa_splati_d_f */
    case 1661:  /* msa_splati_d_f_scalar */
    case 1668:  /* msa_fexupl_d */
    case 1670:  /* msa_fexupr_d */
    case 1671:  /* msa_bz_d_f */
    case 1672:  /* msa_bnz_d_f */
      return MODE_V2DF;

    case 1173:  /* msa_insert_b */
    case 1179:  /* msa_insve_b */
    case 1184:  /* msa_copy_s_b */
    case 1185:  /* msa_copy_u_b */
    case 1198:  /* vec_permv16qi */
    case 1204:  /* movv16qi_msa */
    case 1208:  /* addv16qi3 */
    case 1212:  /* subv16qi3 */
    case 1216:  /* mulv16qi3 */
    case 1220:  /* msa_maddv_b */
    case 1224:  /* msa_msubv_b */
    case 1228:  /* divv16qi3 */
    case 1232:  /* udivv16qi3 */
    case 1236:  /* modv16qi3 */
    case 1240:  /* umodv16qi3 */
    case 1244:  /* xorv16qi3 */
    case 1248:  /* iorv16qi3 */
    case 1252:  /* andv16qi3 */
    case 1260:  /* vlshrv16qi3 */
    case 1264:  /* vashrv16qi3 */
    case 1268:  /* vashlv16qi3 */
    case 1286:  /* msa_add_a_b */
    case 1290:  /* msa_adds_a_b */
    case 1294:  /* ssaddv16qi3 */
    case 1298:  /* usaddv16qi3 */
    case 1302:  /* msa_asub_s_b */
    case 1306:  /* msa_asub_u_b */
    case 1310:  /* msa_ave_s_b */
    case 1314:  /* msa_ave_u_b */
    case 1318:  /* msa_aver_s_b */
    case 1322:  /* msa_aver_u_b */
    case 1326:  /* msa_bclr_b */
    case 1330:  /* msa_bclri_b */
    case 1334:  /* msa_binsl_b */
    case 1338:  /* msa_binsli_b */
    case 1342:  /* msa_binsr_b */
    case 1346:  /* msa_binsri_b */
    case 1350:  /* msa_bmnz_b */
    case 1354:  /* msa_bmz_b */
    case 1358:  /* msa_bneg_b */
    case 1362:  /* msa_bnegi_b */
    case 1366:  /* msa_bsel_b */
    case 1370:  /* msa_bset_b */
    case 1374:  /* msa_bseti_b */
    case 1390:  /* msa_ceq_b */
    case 1391:  /* msa_cle_s_b */
    case 1392:  /* msa_cle_u_b */
    case 1393:  /* msa_clt_s_b */
    case 1394:  /* msa_clt_u_b */
    case 1474:  /* msa_fill_b */
    case 1513:  /* msa_ilvev_b */
    case 1517:  /* msa_ilvl_b */
    case 1523:  /* msa_ilvod_b */
    case 1527:  /* msa_ilvr_b */
    case 1540:  /* msa_max_a_b */
    case 1544:  /* smaxv16qi3 */
    case 1548:  /* umaxv16qi3 */
    case 1552:  /* msa_min_a_b */
    case 1556:  /* sminv16qi3 */
    case 1560:  /* uminv16qi3 */
    case 1572:  /* msa_nloc_b */
    case 1576:  /* clzv16qi2 */
    case 1580:  /* msa_nor_b */
    case 1581:  /* msa_pckev_b */
    case 1585:  /* msa_pckod_b */
    case 1592:  /* popcountv16qi2 */
    case 1596:  /* msa_sat_s_b */
    case 1600:  /* msa_sat_u_b */
    case 1603:  /* msa_shf_b */
    case 1608:  /* msa_srar_b */
    case 1612:  /* msa_srari_b */
    case 1616:  /* msa_srlr_b */
    case 1620:  /* msa_srlri_b */
    case 1624:  /* msa_subs_s_b */
    case 1628:  /* msa_subs_u_b */
    case 1632:  /* msa_subsuu_s_b */
    case 1636:  /* msa_subsus_u_b */
    case 1642:  /* msa_sld_b */
    case 1648:  /* msa_sldi_b */
    case 1654:  /* msa_splat_b */
    case 1660:  /* msa_splati_b */
    case 1681:  /* msa_bz_b */
    case 1682:  /* msa_bnz_b */
      return MODE_V16QI;

    case 1165:  /* vec_pack_trunc_v8hi */
    case 1172:  /* msa_insert_h */
    case 1178:  /* msa_insve_h */
    case 1182:  /* msa_copy_s_h */
    case 1183:  /* msa_copy_u_h */
    case 1197:  /* vec_permv8hi */
    case 1203:  /* movv8hi_msa */
    case 1207:  /* addv8hi3 */
    case 1211:  /* subv8hi3 */
    case 1215:  /* mulv8hi3 */
    case 1219:  /* msa_maddv_h */
    case 1223:  /* msa_msubv_h */
    case 1227:  /* divv8hi3 */
    case 1231:  /* udivv8hi3 */
    case 1235:  /* modv8hi3 */
    case 1239:  /* umodv8hi3 */
    case 1243:  /* xorv8hi3 */
    case 1247:  /* iorv8hi3 */
    case 1251:  /* andv8hi3 */
    case 1259:  /* vlshrv8hi3 */
    case 1263:  /* vashrv8hi3 */
    case 1267:  /* vashlv8hi3 */
    case 1285:  /* msa_add_a_h */
    case 1289:  /* msa_adds_a_h */
    case 1293:  /* ssaddv8hi3 */
    case 1297:  /* usaddv8hi3 */
    case 1301:  /* msa_asub_s_h */
    case 1305:  /* msa_asub_u_h */
    case 1309:  /* msa_ave_s_h */
    case 1313:  /* msa_ave_u_h */
    case 1317:  /* msa_aver_s_h */
    case 1321:  /* msa_aver_u_h */
    case 1325:  /* msa_bclr_h */
    case 1329:  /* msa_bclri_h */
    case 1333:  /* msa_binsl_h */
    case 1337:  /* msa_binsli_h */
    case 1341:  /* msa_binsr_h */
    case 1345:  /* msa_binsri_h */
    case 1349:  /* msa_bmnz_h */
    case 1353:  /* msa_bmz_h */
    case 1357:  /* msa_bneg_h */
    case 1361:  /* msa_bnegi_h */
    case 1365:  /* msa_bsel_h */
    case 1369:  /* msa_bset_h */
    case 1373:  /* msa_bseti_h */
    case 1385:  /* msa_ceq_h */
    case 1386:  /* msa_cle_s_h */
    case 1387:  /* msa_cle_u_h */
    case 1388:  /* msa_clt_s_h */
    case 1389:  /* msa_clt_u_h */
    case 1399:  /* msa_dotp_s_h */
    case 1400:  /* msa_dotp_u_h */
    case 1405:  /* msa_dpadd_s_h */
    case 1406:  /* msa_dpadd_u_h */
    case 1411:  /* msa_dpsub_s_h */
    case 1412:  /* msa_dpsub_u_h */
    case 1473:  /* msa_fill_h */
    case 1501:  /* msa_hadd_s_h */
    case 1502:  /* msa_hadd_u_h */
    case 1503:  /* msa_hsub_s_h */
    case 1504:  /* msa_hsub_u_h */
    case 1514:  /* msa_ilvev_h */
    case 1518:  /* msa_ilvl_h */
    case 1524:  /* msa_ilvod_h */
    case 1528:  /* msa_ilvr_h */
    case 1534:  /* msa_madd_q_h */
    case 1536:  /* msa_maddr_q_h */
    case 1539:  /* msa_max_a_h */
    case 1543:  /* smaxv8hi3 */
    case 1547:  /* umaxv8hi3 */
    case 1551:  /* msa_min_a_h */
    case 1555:  /* sminv8hi3 */
    case 1559:  /* uminv8hi3 */
    case 1562:  /* msa_msub_q_h */
    case 1564:  /* msa_msubr_q_h */
    case 1566:  /* msa_mul_q_h */
    case 1568:  /* msa_mulr_q_h */
    case 1571:  /* msa_nloc_h */
    case 1575:  /* clzv8hi2 */
    case 1579:  /* msa_nor_h */
    case 1582:  /* msa_pckev_h */
    case 1586:  /* msa_pckod_h */
    case 1591:  /* popcountv8hi2 */
    case 1595:  /* msa_sat_s_h */
    case 1599:  /* msa_sat_u_h */
    case 1602:  /* msa_shf_h */
    case 1607:  /* msa_srar_h */
    case 1611:  /* msa_srari_h */
    case 1615:  /* msa_srlr_h */
    case 1619:  /* msa_srlri_h */
    case 1623:  /* msa_subs_s_h */
    case 1627:  /* msa_subs_u_h */
    case 1631:  /* msa_subsuu_s_h */
    case 1635:  /* msa_subsus_u_h */
    case 1641:  /* msa_sld_h */
    case 1647:  /* msa_sldi_h */
    case 1653:  /* msa_splat_h */
    case 1659:  /* msa_splati_h */
    case 1665:  /* msa_fexdo_h */
    case 1679:  /* msa_bz_h */
    case 1680:  /* msa_bnz_h */
      return MODE_V8HI;

    case 1164:  /* vec_pack_trunc_v4si */
    case 1171:  /* msa_insert_w */
    case 1177:  /* msa_insve_w */
    case 1186:  /* msa_copy_u_w */
    case 1187:  /* msa_copy_s_w_64bit */
    case 1189:  /* msa_copy_s_w */
    case 1196:  /* vec_permv4si */
    case 1202:  /* movv4si_msa */
    case 1206:  /* addv4si3 */
    case 1210:  /* subv4si3 */
    case 1214:  /* mulv4si3 */
    case 1218:  /* msa_maddv_w */
    case 1222:  /* msa_msubv_w */
    case 1226:  /* divv4si3 */
    case 1230:  /* udivv4si3 */
    case 1234:  /* modv4si3 */
    case 1238:  /* umodv4si3 */
    case 1242:  /* xorv4si3 */
    case 1246:  /* iorv4si3 */
    case 1250:  /* andv4si3 */
    case 1258:  /* vlshrv4si3 */
    case 1262:  /* vashrv4si3 */
    case 1266:  /* vashlv4si3 */
    case 1284:  /* msa_add_a_w */
    case 1288:  /* msa_adds_a_w */
    case 1292:  /* ssaddv4si3 */
    case 1296:  /* usaddv4si3 */
    case 1300:  /* msa_asub_s_w */
    case 1304:  /* msa_asub_u_w */
    case 1308:  /* msa_ave_s_w */
    case 1312:  /* msa_ave_u_w */
    case 1316:  /* msa_aver_s_w */
    case 1320:  /* msa_aver_u_w */
    case 1324:  /* msa_bclr_w */
    case 1328:  /* msa_bclri_w */
    case 1332:  /* msa_binsl_w */
    case 1336:  /* msa_binsli_w */
    case 1340:  /* msa_binsr_w */
    case 1344:  /* msa_binsri_w */
    case 1348:  /* msa_bmnz_w */
    case 1352:  /* msa_bmz_w */
    case 1356:  /* msa_bneg_w */
    case 1360:  /* msa_bnegi_w */
    case 1364:  /* msa_bsel_w */
    case 1368:  /* msa_bset_w */
    case 1372:  /* msa_bseti_w */
    case 1380:  /* msa_ceq_w */
    case 1381:  /* msa_cle_s_w */
    case 1382:  /* msa_cle_u_w */
    case 1383:  /* msa_clt_s_w */
    case 1384:  /* msa_clt_u_w */
    case 1397:  /* msa_dotp_s_w */
    case 1398:  /* msa_dotp_u_w */
    case 1403:  /* msa_dpadd_s_w */
    case 1404:  /* msa_dpadd_u_w */
    case 1409:  /* msa_dpsub_s_w */
    case 1410:  /* msa_dpsub_u_w */
    case 1472:  /* msa_fill_w */
    case 1505:  /* msa_hadd_s_w */
    case 1506:  /* msa_hadd_u_w */
    case 1507:  /* msa_hsub_s_w */
    case 1508:  /* msa_hsub_u_w */
    case 1515:  /* msa_ilvev_w */
    case 1519:  /* msa_ilvl_w */
    case 1525:  /* msa_ilvod_w */
    case 1529:  /* msa_ilvr_w */
    case 1533:  /* msa_madd_q_w */
    case 1535:  /* msa_maddr_q_w */
    case 1538:  /* msa_max_a_w */
    case 1542:  /* smaxv4si3 */
    case 1546:  /* umaxv4si3 */
    case 1550:  /* msa_min_a_w */
    case 1554:  /* sminv4si3 */
    case 1558:  /* uminv4si3 */
    case 1561:  /* msa_msub_q_w */
    case 1563:  /* msa_msubr_q_w */
    case 1565:  /* msa_mul_q_w */
    case 1567:  /* msa_mulr_q_w */
    case 1570:  /* msa_nloc_w */
    case 1574:  /* clzv4si2 */
    case 1578:  /* msa_nor_w */
    case 1583:  /* msa_pckev_w */
    case 1587:  /* msa_pckod_w */
    case 1590:  /* popcountv4si2 */
    case 1594:  /* msa_sat_s_w */
    case 1598:  /* msa_sat_u_w */
    case 1601:  /* msa_shf_w */
    case 1606:  /* msa_srar_w */
    case 1610:  /* msa_srari_w */
    case 1614:  /* msa_srlr_w */
    case 1618:  /* msa_srlri_w */
    case 1622:  /* msa_subs_s_w */
    case 1626:  /* msa_subs_u_w */
    case 1630:  /* msa_subsuu_s_w */
    case 1634:  /* msa_subsus_u_w */
    case 1640:  /* msa_sld_w */
    case 1646:  /* msa_sldi_w */
    case 1652:  /* msa_splat_w */
    case 1658:  /* msa_splati_w */
    case 1677:  /* msa_bz_w */
    case 1678:  /* msa_bnz_w */
      return MODE_V4SI;

    case 1163:  /* vec_pack_trunc_v2di */
    case 1170:  /* msa_insert_d */
    case 1176:  /* msa_insve_d */
    case 1191:  /* msa_copy_s_d */
    case 1195:  /* vec_permv2di */
    case 1201:  /* movv2di_msa */
    case 1205:  /* addv2di3 */
    case 1209:  /* subv2di3 */
    case 1213:  /* mulv2di3 */
    case 1217:  /* msa_maddv_d */
    case 1221:  /* msa_msubv_d */
    case 1225:  /* divv2di3 */
    case 1229:  /* udivv2di3 */
    case 1233:  /* modv2di3 */
    case 1237:  /* umodv2di3 */
    case 1241:  /* xorv2di3 */
    case 1245:  /* iorv2di3 */
    case 1249:  /* andv2di3 */
    case 1257:  /* vlshrv2di3 */
    case 1261:  /* vashrv2di3 */
    case 1265:  /* vashlv2di3 */
    case 1283:  /* msa_add_a_d */
    case 1287:  /* msa_adds_a_d */
    case 1291:  /* ssaddv2di3 */
    case 1295:  /* usaddv2di3 */
    case 1299:  /* msa_asub_s_d */
    case 1303:  /* msa_asub_u_d */
    case 1307:  /* msa_ave_s_d */
    case 1311:  /* msa_ave_u_d */
    case 1315:  /* msa_aver_s_d */
    case 1319:  /* msa_aver_u_d */
    case 1323:  /* msa_bclr_d */
    case 1327:  /* msa_bclri_d */
    case 1331:  /* msa_binsl_d */
    case 1335:  /* msa_binsli_d */
    case 1339:  /* msa_binsr_d */
    case 1343:  /* msa_binsri_d */
    case 1347:  /* msa_bmnz_d */
    case 1351:  /* msa_bmz_d */
    case 1355:  /* msa_bneg_d */
    case 1359:  /* msa_bnegi_d */
    case 1363:  /* msa_bsel_d */
    case 1367:  /* msa_bset_d */
    case 1371:  /* msa_bseti_d */
    case 1375:  /* msa_ceq_d */
    case 1376:  /* msa_cle_s_d */
    case 1377:  /* msa_cle_u_d */
    case 1378:  /* msa_clt_s_d */
    case 1379:  /* msa_clt_u_d */
    case 1395:  /* msa_dotp_s_d */
    case 1396:  /* msa_dotp_u_d */
    case 1401:  /* msa_dpadd_s_d */
    case 1402:  /* msa_dpadd_u_d */
    case 1407:  /* msa_dpsub_s_d */
    case 1408:  /* msa_dpsub_u_d */
    case 1471:  /* msa_fill_d */
    case 1509:  /* msa_hadd_s_d */
    case 1510:  /* msa_hadd_u_d */
    case 1511:  /* msa_hsub_s_d */
    case 1512:  /* msa_hsub_u_d */
    case 1521:  /* msa_ilvl_d */
    case 1531:  /* msa_ilvr_d */
    case 1537:  /* msa_max_a_d */
    case 1541:  /* smaxv2di3 */
    case 1545:  /* umaxv2di3 */
    case 1549:  /* msa_min_a_d */
    case 1553:  /* sminv2di3 */
    case 1557:  /* uminv2di3 */
    case 1569:  /* msa_nloc_d */
    case 1573:  /* clzv2di2 */
    case 1577:  /* msa_nor_d */
    case 1589:  /* popcountv2di2 */
    case 1593:  /* msa_sat_s_d */
    case 1597:  /* msa_sat_u_d */
    case 1605:  /* msa_srar_d */
    case 1609:  /* msa_srari_d */
    case 1613:  /* msa_srlr_d */
    case 1617:  /* msa_srlri_d */
    case 1621:  /* msa_subs_s_d */
    case 1625:  /* msa_subs_u_d */
    case 1629:  /* msa_subsuu_s_d */
    case 1633:  /* msa_subsus_u_d */
    case 1639:  /* msa_sld_d */
    case 1645:  /* msa_sldi_d */
    case 1651:  /* msa_splat_d */
    case 1657:  /* msa_splati_d */
    case 1675:  /* msa_bz_d */
    case 1676:  /* msa_bnz_d */
      return MODE_V2DI;

    case 567:  /* sunordered_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 580:  /* sle_df_using_cc */
    case 581:  /* sunordered_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 600:  /* sne_df_using_ccf */
    case 601:  /* sge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 605:  /* sge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 608:  /* sungt_df_using_cc */
    case 609:  /* sge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 616:  /* sungt_df_using_ccf */
    case 807:  /* mips_cabs_cond_s */
    case 808:  /* mips_cabs_cond_d */
    case 809:  /* mips_c_cond_4s */
    case 810:  /* mips_cabs_cond_4s */
    case 811:  /* mips_c_cond_ps */
    case 812:  /* mips_cabs_cond_ps */
    case 813:  /* sunordered_ps */
    case 814:  /* suneq_ps */
    case 815:  /* sunlt_ps */
    case 816:  /* sunle_ps */
    case 817:  /* seq_ps */
    case 818:  /* slt_ps */
    case 819:  /* sle_ps */
    case 820:  /* sordered_ps */
    case 821:  /* sltgt_ps */
    case 822:  /* sne_ps */
    case 823:  /* sge_ps */
    case 824:  /* sgt_ps */
    case 825:  /* sunge_ps */
    case 826:  /* sungt_ps */
      return MODE_FPSW;

    case 374:  /* *movtf */
    case 375:  /* *movtf_mips16 */
      return MODE_TF;

    case 11:  /* adddf3 */
    case 24:  /* subdf3 */
    case 30:  /* *muldf3 */
    case 32:  /* *muldf3_r4300 */
    case 85:  /* *fmadf4_madd3 */
    case 88:  /* *fmadf4_madd4 */
    case 91:  /* *fmadf4_maddf */
    case 94:  /* *fmsdf4_msub3 */
    case 97:  /* *fmsdf4_msub4 */
    case 100:  /* *fnmadf4_nmsub3 */
    case 103:  /* *fnmadf4_nmsub4 */
    case 106:  /* *fnmsdf4_nmadd3 */
    case 109:  /* *fnmsdf4_nmadd4 */
    case 112:  /* *madd4df */
    case 115:  /* *msub4df */
    case 118:  /* *nmadd4df */
    case 121:  /* *nmsub4df */
    case 124:  /* *nmadd4df_fastmath */
    case 127:  /* *nmsub4df_fastmath */
    case 130:  /* *divdf3 */
    case 133:  /* *recipdf3 */
    case 158:  /* sqrtdf2 */
    case 161:  /* *rsqrtdfa */
    case 164:  /* *rsqrtdfb */
    case 167:  /* absdf2 */
    case 179:  /* negdf2 */
    case 261:  /* extendsfdf2 */
    case 262:  /* fix_truncdfsi2_insn */
    case 263:  /* fix_truncdfsi2_macro */
    case 266:  /* fix_truncdfdi2 */
    case 268:  /* floatsidf2 */
    case 269:  /* floatdidf2 */
    case 332:  /* *ldxc1_si */
    case 335:  /* *ldxc1_di */
    case 338:  /* *sdxc1_si */
    case 341:  /* *sdxc1_di */
    case 369:  /* *movdf_hardfloat */
    case 370:  /* *movdf_softfloat */
    case 371:  /* *movdf_mips16 */
    case 376:  /* *movv2sf */
    case 682:  /* *movdf_on_si */
    case 684:  /* *movdf_on_di */
    case 686:  /* *movdf_on_cc */
    case 696:  /* *seldf */
    case 834:  /* mips_rsqrt1_d */
    case 837:  /* mips_rsqrt2_d */
    case 840:  /* mips_recip1_d */
    case 843:  /* mips_recip2_d */
    case 1166:  /* msa_vec_extract_d_f */
      return MODE_DF;

    case 10:  /* addsf3 */
    case 12:  /* addv2sf3 */
    case 23:  /* subsf3 */
    case 25:  /* subv2sf3 */
    case 29:  /* *mulsf3 */
    case 31:  /* *mulsf3_r4300 */
    case 33:  /* mulv2sf3 */
    case 84:  /* *fmasf4_madd3 */
    case 86:  /* *fmav2sf4_madd3 */
    case 87:  /* *fmasf4_madd4 */
    case 89:  /* *fmav2sf4_madd4 */
    case 90:  /* *fmasf4_maddf */
    case 92:  /* *fmav2sf4_maddf */
    case 93:  /* *fmssf4_msub3 */
    case 95:  /* *fmsv2sf4_msub3 */
    case 96:  /* *fmssf4_msub4 */
    case 98:  /* *fmsv2sf4_msub4 */
    case 99:  /* *fnmasf4_nmsub3 */
    case 101:  /* *fnmav2sf4_nmsub3 */
    case 102:  /* *fnmasf4_nmsub4 */
    case 104:  /* *fnmav2sf4_nmsub4 */
    case 105:  /* *fnmssf4_nmadd3 */
    case 107:  /* *fnmsv2sf4_nmadd3 */
    case 108:  /* *fnmssf4_nmadd4 */
    case 110:  /* *fnmsv2sf4_nmadd4 */
    case 111:  /* *madd4sf */
    case 113:  /* *madd4v2sf */
    case 114:  /* *msub4sf */
    case 116:  /* *msub4v2sf */
    case 117:  /* *nmadd4sf */
    case 119:  /* *nmadd4v2sf */
    case 120:  /* *nmsub4sf */
    case 122:  /* *nmsub4v2sf */
    case 123:  /* *nmadd4sf_fastmath */
    case 125:  /* *nmadd4v2sf_fastmath */
    case 126:  /* *nmsub4sf_fastmath */
    case 128:  /* *nmsub4v2sf_fastmath */
    case 129:  /* *divsf3 */
    case 131:  /* *divv2sf3 */
    case 132:  /* *recipsf3 */
    case 134:  /* *recipv2sf3 */
    case 157:  /* sqrtsf2 */
    case 159:  /* sqrtv2sf2 */
    case 160:  /* *rsqrtsfa */
    case 162:  /* *rsqrtv2sfa */
    case 163:  /* *rsqrtsfb */
    case 165:  /* *rsqrtv2sfb */
    case 166:  /* abssf2 */
    case 168:  /* absv2sf2 */
    case 178:  /* negsf2 */
    case 180:  /* negv2sf2 */
    case 197:  /* truncdfsf2 */
    case 264:  /* fix_truncsfsi2_insn */
    case 265:  /* fix_truncsfsi2_macro */
    case 267:  /* fix_truncsfdi2 */
    case 270:  /* floatsisf2 */
    case 271:  /* floatdisf2 */
    case 331:  /* *lwxc1_si */
    case 333:  /* *ldxc1_si */
    case 334:  /* *lwxc1_di */
    case 336:  /* *ldxc1_di */
    case 337:  /* *swxc1_si */
    case 339:  /* *sdxc1_si */
    case 340:  /* *swxc1_di */
    case 342:  /* *sdxc1_di */
    case 366:  /* *movsf_hardfloat */
    case 367:  /* *movsf_softfloat */
    case 368:  /* *movsf_mips16 */
    case 681:  /* *movsf_on_si */
    case 683:  /* *movsf_on_di */
    case 685:  /* *movsf_on_cc */
    case 695:  /* *selsf */
    case 795:  /* *movcc_v2sf_si */
    case 796:  /* *movcc_v2sf_di */
    case 797:  /* mips_cond_move_tf_ps */
    case 798:  /* vec_perm_const_ps */
    case 799:  /* vec_concatv2sf */
    case 800:  /* vec_extractv2sfsf */
    case 801:  /* mips_alnv_ps */
    case 802:  /* mips_addr_ps */
    case 803:  /* mips_cvt_pw_ps */
    case 804:  /* mips_cvt_ps_pw */
    case 805:  /* mips_mulr_ps */
    case 806:  /* *mips_abs_ps */
    case 833:  /* mips_rsqrt1_s */
    case 835:  /* mips_rsqrt1_ps */
    case 836:  /* mips_rsqrt2_s */
    case 838:  /* mips_rsqrt2_ps */
    case 839:  /* mips_recip1_s */
    case 841:  /* mips_recip1_ps */
    case 842:  /* mips_recip2_s */
    case 844:  /* mips_recip2_ps */
    case 1059:  /* *movepsfsi */
    case 1060:  /* *movepsfsf */
    case 1167:  /* msa_vec_extract_w_f */
      return MODE_SF;

    case 373:  /* *movti_mips16 */
    case 1253:  /* one_cmplv2di2 */
    case 1254:  /* one_cmplv4si2 */
    case 1255:  /* one_cmplv8hi2 */
    case 1256:  /* one_cmplv16qi2 */
    case 1683:  /* msa_bz_v_d_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1686:  /* msa_bnz_v_w_f */
    case 1687:  /* msa_bz_v_d */
    case 1688:  /* msa_bnz_v_d */
    case 1689:  /* msa_bz_v_w */
    case 1690:  /* msa_bnz_v_w */
    case 1691:  /* msa_bz_v_h */
    case 1692:  /* msa_bnz_v_h */
    case 1693:  /* msa_bz_v_b */
    case 1694:  /* msa_bnz_v_b */
      return MODE_TI;

    case 14:  /* *adddi3 */
    case 16:  /* *adddi3_mips16 */
    case 27:  /* subdi3 */
    case 28:  /* *subsi3_extended */
    case 35:  /* muldi3_mul3_nohilo */
    case 37:  /* muldi3_mul3 */
    case 39:  /* muldi3_internal */
    case 41:  /* muldi3_r4000 */
    case 59:  /* mulsidi3_64bit_dmul */
    case 60:  /* mulsidi3_64bit_r6dmul */
    case 73:  /* smuldi3_highpart_r6 */
    case 74:  /* umuldi3_highpart_r6 */
    case 75:  /* smuldi3_highpart_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 77:  /* mulditi3_internal */
    case 78:  /* umulditi3_internal */
    case 79:  /* mulditi3_r4000 */
    case 80:  /* umulditi3_r4000 */
    case 136:  /* *divmoddi4 */
    case 138:  /* divmoddi4_mips16 */
    case 140:  /* *udivmoddi4 */
    case 142:  /* udivmoddi4_mips16 */
    case 147:  /* divmoddi4_hilo_ti */
    case 148:  /* udivmoddi4_hilo_ti */
    case 151:  /* divdi3 */
    case 152:  /* udivdi3 */
    case 155:  /* moddi3 */
    case 156:  /* umoddi3 */
    case 170:  /* clzdi2 */
    case 172:  /* ctzdi2 */
    case 174:  /* popcountdi2 */
    case 177:  /* negdi2 */
    case 182:  /* one_cmpldi2 */
    case 184:  /* *anddi3 */
    case 186:  /* *anddi3_mips16 */
    case 188:  /* *iordi3 */
    case 190:  /* *iordi3_mips16 */
    case 192:  /* *xordi3 */
    case 194:  /* *xordi3_mips16 */
    case 196:  /* *nordi3 */
    case 214:  /* *zero_extendsidi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 217:  /* *zero_extendqidi2 */
    case 219:  /* *zero_extendhidi2 */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 223:  /* *zero_extendhidi2_mips16e */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 231:  /* *zero_extenddi_truncqi */
    case 233:  /* *zero_extenddi_trunchi */
    case 235:  /* extendsidi2 */
    case 237:  /* *extendqidi2_mips16e */
    case 239:  /* *extendhidi2_mips16e */
    case 241:  /* *extendqidi2 */
    case 243:  /* *extendhidi2 */
    case 245:  /* *extendqidi2_seb */
    case 247:  /* *extendhidi2_seh */
    case 251:  /* *extenddi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 257:  /* *extenddi_truncateqi_exts */
    case 259:  /* *extenddi_truncatehi_exts */
    case 273:  /* *extvdi */
    case 275:  /* *extzvdi */
    case 278:  /* *insvdi */
    case 280:  /* *cinsdi */
    case 282:  /* mov_ldl */
    case 284:  /* mov_ldr */
    case 286:  /* mov_sdl */
    case 288:  /* mov_sdr */
    case 294:  /* *xgot_hidi */
    case 296:  /* *xgot_lodi */
    case 298:  /* *got_dispdi */
    case 300:  /* *got_pagedi */
    case 302:  /* load_gotdi */
    case 304:  /* *lowdi */
    case 306:  /* *lowdi_mips16 */
    case 308:  /* *movdi_ra */
    case 310:  /* *movdi_32bit_mips16 */
    case 311:  /* *movdi_64bit */
    case 312:  /* *movdi_64bit_mips16 */
    case 379:  /* mfhidi_ti */
    case 389:  /* load_lowtf */
    case 396:  /* load_hightf */
    case 403:  /* store_wordtf */
    case 410:  /* mthc1tf */
    case 417:  /* mfhc1tf */
    case 444:  /* *ashldi3 */
    case 445:  /* *ashrdi3 */
    case 446:  /* *lshrdi3 */
    case 454:  /* dlsa */
    case 455:  /* *ashldi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 457:  /* *lshrdi3_mips16 */
    case 460:  /* rotrdi3 */
    case 492:  /* *seq_zero_disi */
    case 494:  /* *seq_zero_didi */
    case 496:  /* *seq_zero_disi_mips16 */
    case 498:  /* *seq_zero_didi_mips16 */
    case 500:  /* *seq_disi_seq */
    case 502:  /* *seq_didi_seq */
    case 504:  /* *sne_zero_disi */
    case 506:  /* *sne_zero_didi */
    case 508:  /* *sne_disi_sne */
    case 510:  /* *sne_didi_sne */
    case 513:  /* *sgt_disi */
    case 514:  /* *sgtu_disi */
    case 517:  /* *sgt_didi */
    case 518:  /* *sgtu_didi */
    case 521:  /* *sgt_disi_mips16 */
    case 522:  /* *sgtu_disi_mips16 */
    case 525:  /* *sgt_didi_mips16 */
    case 526:  /* *sgtu_didi_mips16 */
    case 529:  /* *sge_disi */
    case 530:  /* *sgeu_disi */
    case 533:  /* *sge_didi */
    case 534:  /* *sgeu_didi */
    case 537:  /* *slt_disi */
    case 538:  /* *sltu_disi */
    case 541:  /* *slt_didi */
    case 542:  /* *sltu_didi */
    case 545:  /* *slt_disi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 550:  /* *sltu_didi_mips16 */
    case 553:  /* *sle_disi */
    case 554:  /* *sleu_disi */
    case 557:  /* *sle_didi */
    case 558:  /* *sleu_didi */
    case 561:  /* *sle_disi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 566:  /* *sleu_didi_mips16 */
    case 630:  /* probe_stack_range_di */
    case 640:  /* mips_rdpgpr_di */
    case 649:  /* load_calldi */
    case 672:  /* *movdi_on_si */
    case 674:  /* *movdi_on_di */
    case 676:  /* *movdi_on_cc */
    case 678:  /* *movdi_on_si_ne */
    case 680:  /* *movdi_on_di_ne */
    case 689:  /* *seleqdi_using_si */
    case 690:  /* *selnedi_using_si */
    case 693:  /* *seleqdi_using_di */
    case 694:  /* *selnedi_using_di */
    case 705:  /* tls_get_tp_di */
    case 707:  /* *tls_get_tp_di_split */
    case 709:  /* tls_get_tp_mips16_di */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 929:  /* mips_lbx_extdi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 934:  /* mips_lhux_extdi_si */
    case 937:  /* mips_lbx_extdi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 942:  /* mips_lhux_extdi_di */
    case 944:  /* mips_ldx_si */
    case 946:  /* mips_ldx_di */
    case 947:  /* *mips_lwx_si_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 950:  /* *mips_lwux_di_ext */
    case 998:  /* adddq3 */
    case 1002:  /* addudq3 */
    case 1005:  /* addda3 */
    case 1008:  /* adduda3 */
    case 1024:  /* subdq3 */
    case 1028:  /* subudq3 */
    case 1031:  /* subda3 */
    case 1034:  /* subuda3 */
    case 1061:  /* movv2si_internal */
    case 1062:  /* movv4hi_internal */
    case 1063:  /* movv8qi_internal */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 1065:  /* loongson_vec_init1_v8qi */
      return MODE_DI;

    case 202:  /* *ashr_trunchi */
    case 205:  /* *lshr32_trunchi */
    case 209:  /* *ashr_trunchi_exts */
    case 210:  /* *lshr_trunchi_exts */
    case 228:  /* *zero_extendqihi2 */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 234:  /* *zero_extendhi_truncqi */
    case 361:  /* *movhi_internal */
    case 362:  /* *movhi_mips16 */
    case 996:  /* addhq3 */
    case 1000:  /* adduhq3 */
    case 1003:  /* addha3 */
    case 1006:  /* adduha3 */
    case 1010:  /* usadduhq3 */
    case 1011:  /* usadduha3 */
    case 1015:  /* ssaddhq3 */
    case 1017:  /* ssaddha3 */
    case 1022:  /* subhq3 */
    case 1026:  /* subuhq3 */
    case 1029:  /* subha3 */
    case 1032:  /* subuha3 */
    case 1036:  /* ussubuhq3 */
    case 1037:  /* ussubuha3 */
    case 1041:  /* sssubhq3 */
    case 1043:  /* sssubha3 */
    case 1048:  /* ssmulhq3 */
      return MODE_HI;

    case 201:  /* *ashr_truncqi */
    case 204:  /* *lshr32_truncqi */
    case 207:  /* *ashr_truncqi_exts */
    case 208:  /* *lshr_truncqi_exts */
    case 363:  /* *movqi_internal */
    case 364:  /* *movqi_mips16 */
    case 995:  /* addqq3 */
    case 999:  /* adduqq3 */
    case 1009:  /* usadduqq3 */
    case 1021:  /* subqq3 */
    case 1025:  /* subuqq3 */
    case 1035:  /* ussubuqq3 */
      return MODE_QI;

    case 620:  /* indirect_jump_si */
    case 621:  /* indirect_jump_di */
    case 624:  /* tablejump_si */
    case 625:  /* tablejump_di */
    case 628:  /* blockage */
    case 631:  /* *return */
    case 632:  /* *simple_return */
    case 633:  /* return_internal */
    case 634:  /* simple_return_internal */
    case 635:  /* mips_eret */
    case 636:  /* mips_deret */
    case 637:  /* mips_di */
    case 638:  /* mips_ehb */
    case 668:  /* nop */
    case 670:  /* insn_pseudo */
    case 697:  /* consttable */
    case 698:  /* consttable_end */
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 1:  /* ls2_alu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 5:  /* trap */
    case 6:  /* *conditional_trap_regsi */
    case 7:  /* *conditional_trap_regdi */
    case 8:  /* *conditional_trapsi */
    case 9:  /* *conditional_trapdi */
    case 19:  /* *baddu_si_eb */
    case 20:  /* *baddu_si_el */
    case 21:  /* *baddu_disi */
    case 22:  /* *baddu_didi */
    case 46:  /* *msac_using_macc */
    case 289:  /* *lea_high64 */
    case 290:  /* *lea64 */
    case 291:  /* *unshifted_high */
    case 292:  /* *unshifted_high */
    case 365:  /* movccf */
    case 418:  /* loadgp_newabi_si */
    case 419:  /* loadgp_newabi_di */
    case 420:  /* loadgp_absolute_si */
    case 421:  /* loadgp_absolute_di */
    case 422:  /* loadgp_blockage */
    case 423:  /* loadgp_rtp_si */
    case 424:  /* loadgp_rtp_di */
    case 425:  /* copygp_mips16_si */
    case 426:  /* copygp_mips16_di */
    case 427:  /* potential_cprestore_si */
    case 428:  /* potential_cprestore_di */
    case 429:  /* cprestore_si */
    case 430:  /* cprestore_di */
    case 431:  /* use_cprestore_si */
    case 432:  /* use_cprestore_di */
    case 433:  /* sync */
    case 434:  /* synci */
    case 435:  /* rdhwr_synci_step_si */
    case 436:  /* rdhwr_synci_step_di */
    case 437:  /* clear_hazard_si */
    case 438:  /* clear_hazard_di */
    case 439:  /* mips_cache */
    case 440:  /* r10k_cache_barrier */
    case 461:  /* bswaphi2 */
    case 462:  /* bswapsi2 */
    case 463:  /* bswapdi2 */
    case 464:  /* wsbh */
    case 465:  /* dsbh */
    case 466:  /* dshd */
    case 467:  /* *branch_fp_cc */
    case 468:  /* *branch_fp_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 470:  /* *branch_fp_inverted_ccf */
    case 471:  /* *branch_ordersi */
    case 472:  /* *branch_orderdi */
    case 473:  /* *branch_ordersi_inverted */
    case 474:  /* *branch_orderdi_inverted */
    case 475:  /* *branch_equalitysi */
    case 476:  /* *branch_equalitydi */
    case 477:  /* *branch_equalitysi_inverted */
    case 478:  /* *branch_equalitydi_inverted */
    case 479:  /* *branch_equalitysi_mips16 */
    case 480:  /* *branch_equalitydi_mips16 */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 483:  /* *branch_bit0si */
    case 484:  /* *branch_bit1si */
    case 485:  /* *branch_bit0di */
    case 486:  /* *branch_bit1di */
    case 487:  /* *branch_bit0si_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 490:  /* *branch_bit1di_inverted */
    case 617:  /* *jump_absolute */
    case 618:  /* *jump_pic */
    case 619:  /* *jump_mips16 */
    case 622:  /* indirect_jump_and_restore_si */
    case 623:  /* indirect_jump_and_restore_di */
    case 626:  /* casesi_internal_mips16_si */
    case 627:  /* casesi_internal_mips16_di */
    case 642:  /* eh_set_lr_si */
    case 643:  /* eh_set_lr_di */
    case 644:  /* restore_gp_si */
    case 645:  /* restore_gp_di */
    case 646:  /* move_gpsi */
    case 647:  /* move_gpdi */
    case 650:  /* set_got_version */
    case 651:  /* update_got_version */
    case 652:  /* sibcall_internal */
    case 653:  /* sibcall_value_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 655:  /* call_internal */
    case 656:  /* call_split */
    case 657:  /* call_internal_direct */
    case 658:  /* call_direct_split */
    case 659:  /* call_value_internal */
    case 660:  /* call_value_split */
    case 661:  /* call_value_internal_direct */
    case 662:  /* call_value_direct_split */
    case 663:  /* call_value_multiple_internal */
    case 664:  /* call_value_multiple_split */
    case 665:  /* prefetch */
    case 666:  /* *prefetch_indexed_si */
    case 667:  /* *prefetch_indexed_di */
    case 669:  /* hazard_nop */
    case 699:  /* consttable_tls_reloc */
    case 700:  /* consttable_int */
    case 701:  /* consttable_float */
    case 702:  /* align */
    case 703:  /* *mips16e_save_restore */
    case 712:  /* *mips_get_fcsr */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 715:  /* *mips_set_fcsr */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 717:  /* mips_set_fcsr_mips16_di */
    case 718:  /* *join2_load_storehi */
    case 719:  /* *join2_load_storesi */
    case 720:  /* *join2_load_storesf */
    case 721:  /* *join2_load_storedf */
    case 722:  /* *join2_loadhi */
    case 723:  /* *join2_loadhi */
    case 724:  /* *memory_barrier */
    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
    case 727:  /* compare_and_swap_12 */
    case 728:  /* sync_addsi */
    case 729:  /* sync_adddi */
    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 745:  /* sync_nand_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 748:  /* sync_subsi */
    case 749:  /* sync_subdi */
    case 750:  /* sync_old_addsi */
    case 751:  /* sync_old_adddi */
    case 752:  /* sync_old_subsi */
    case 753:  /* sync_old_subdi */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
    case 758:  /* sync_iorsi */
    case 759:  /* sync_xorsi */
    case 760:  /* sync_andsi */
    case 761:  /* sync_iordi */
    case 762:  /* sync_xordi */
    case 763:  /* sync_anddi */
    case 764:  /* sync_old_iorsi */
    case 765:  /* sync_old_xorsi */
    case 766:  /* sync_old_andsi */
    case 767:  /* sync_old_iordi */
    case 768:  /* sync_old_xordi */
    case 769:  /* sync_old_anddi */
    case 770:  /* sync_new_iorsi */
    case 771:  /* sync_new_xorsi */
    case 772:  /* sync_new_andsi */
    case 773:  /* sync_new_iordi */
    case 774:  /* sync_new_xordi */
    case 775:  /* sync_new_anddi */
    case 776:  /* sync_nandsi */
    case 777:  /* sync_nanddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 784:  /* test_and_set_12 */
    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 789:  /* atomic_exchangesi_swap */
    case 790:  /* atomic_exchangedi_swap */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
    case 793:  /* atomic_fetch_addsi_ldadd */
    case 794:  /* atomic_fetch_adddi_ldadd */
    case 827:  /* bc1any4t */
    case 828:  /* bc1any4f */
    case 829:  /* bc1any2t */
    case 830:  /* bc1any2f */
    case 831:  /* *branch_upper_lower */
    case 832:  /* *branch_upper_lower_inverted */
    case 951:  /* mips_bposge */
    case 1066:  /* *vec_concatv2si */
    case 1067:  /* vec_pack_ssat_v2si */
    case 1068:  /* vec_pack_ssat_v4hi */
    case 1069:  /* vec_pack_usat_v4hi */
    case 1070:  /* addv2si3 */
    case 1071:  /* addv4hi3 */
    case 1072:  /* addv8qi3 */
    case 1073:  /* loongson_paddd */
    case 1074:  /* ssaddv4hi3 */
    case 1075:  /* ssaddv8qi3 */
    case 1076:  /* usaddv4hi3 */
    case 1077:  /* usaddv8qi3 */
    case 1078:  /* loongson_pandn_w */
    case 1079:  /* loongson_pandn_h */
    case 1080:  /* loongson_pandn_b */
    case 1081:  /* loongson_pandn_d */
    case 1082:  /* andv2si3 */
    case 1083:  /* andv4hi3 */
    case 1084:  /* andv8qi3 */
    case 1085:  /* iorv2si3 */
    case 1086:  /* iorv4hi3 */
    case 1087:  /* iorv8qi3 */
    case 1088:  /* xorv2si3 */
    case 1089:  /* xorv4hi3 */
    case 1090:  /* xorv8qi3 */
    case 1091:  /* *loongson_nor */
    case 1092:  /* *loongson_nor */
    case 1093:  /* *loongson_nor */
    case 1094:  /* one_cmplv2si2 */
    case 1095:  /* one_cmplv4hi2 */
    case 1096:  /* one_cmplv8qi2 */
    case 1097:  /* loongson_pavgh */
    case 1098:  /* loongson_pavgb */
    case 1099:  /* loongson_pcmpeqw */
    case 1100:  /* loongson_pcmpeqh */
    case 1101:  /* loongson_pcmpeqb */
    case 1102:  /* loongson_pcmpgtw */
    case 1103:  /* loongson_pcmpgth */
    case 1104:  /* loongson_pcmpgtb */
    case 1105:  /* loongson_pextrh */
    case 1106:  /* loongson_pinsrh_0 */
    case 1107:  /* loongson_pinsrh_1 */
    case 1108:  /* loongson_pinsrh_2 */
    case 1109:  /* loongson_pinsrh_3 */
    case 1110:  /* *vec_setv4hi */
    case 1111:  /* loongson_pmaddhw */
    case 1112:  /* smaxv4hi3 */
    case 1113:  /* umaxv8qi3 */
    case 1114:  /* sminv4hi3 */
    case 1115:  /* uminv8qi3 */
    case 1116:  /* loongson_pmovmskb */
    case 1117:  /* umulv4hi3_highpart */
    case 1118:  /* smulv4hi3_highpart */
    case 1119:  /* mulv4hi3 */
    case 1120:  /* loongson_pmuluw */
    case 1121:  /* loongson_pasubub */
    case 1122:  /* loongson_biadd */
    case 1123:  /* reduc_uplus_v8qi */
    case 1124:  /* loongson_psadbh */
    case 1125:  /* loongson_pshufh */
    case 1126:  /* ashlv2si3 */
    case 1127:  /* ashlv4hi3 */
    case 1128:  /* ashrv2si3 */
    case 1129:  /* ashrv4hi3 */
    case 1130:  /* lshrv2si3 */
    case 1131:  /* lshrv4hi3 */
    case 1132:  /* subv2si3 */
    case 1133:  /* subv4hi3 */
    case 1134:  /* subv8qi3 */
    case 1135:  /* loongson_psubd */
    case 1136:  /* sssubv4hi3 */
    case 1137:  /* sssubv8qi3 */
    case 1138:  /* ussubv4hi3 */
    case 1139:  /* ussubv8qi3 */
    case 1140:  /* loongson_punpckhbh */
    case 1141:  /* loongson_punpckhhw */
    case 1142:  /* loongson_punpckhhw_qi */
    case 1143:  /* loongson_punpckhwd */
    case 1144:  /* loongson_punpckhwd_qi */
    case 1145:  /* loongson_punpckhwd_hi */
    case 1146:  /* loongson_punpcklbh */
    case 1147:  /* loongson_punpcklhw */
    case 1148:  /* *loongson_punpcklhw_qi */
    case 1149:  /* loongson_punpcklwd */
    case 1150:  /* *loongson_punpcklwd_qi */
    case 1151:  /* *loongson_punpcklwd_hi */
    case 1152:  /* vec_shl_v2si */
    case 1153:  /* vec_shl_v4hi */
    case 1154:  /* vec_shl_v8qi */
    case 1155:  /* vec_shl_di */
    case 1156:  /* vec_shr_v2si */
    case 1157:  /* vec_shr_v4hi */
    case 1158:  /* vec_shr_v8qi */
    case 1159:  /* vec_shr_di */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1162:  /* vec_loongson_extract_lo_v8qi */
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_move_type
get_attr_move_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 375:  /* *movtf_mips16 */
    case 371:  /* *movdf_mips16 */
    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (((1ULL << which_alternative) & 0x6ULL))
        {
	  return MOVE_TYPE_CONST;
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (((1ULL << which_alternative) & 0x60ULL))
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MTLO;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_CONSTN;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_LOADPOOL;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 373:  /* *movti_mips16 */
    case 364:  /* *movqi_mips16 */
    case 362:  /* *movhi_mips16 */
    case 310:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_CONSTN;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 235:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return MOVE_TYPE_MOVE;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return MOVE_TYPE_ANDI;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOGICAL;
        }

    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return MOVE_TYPE_ANDI;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_EXT_INS;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOGICAL;
        }

    case 198:  /* truncdiqi2 */
    case 199:  /* truncdihi2 */
    case 200:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SLL0;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 215:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_ARITH;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 228:  /* *zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_ANDI;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 214:  /* *zero_extendsidi2 */
    case 240:  /* *extendqisi2 */
    case 241:  /* *extendqidi2 */
    case 242:  /* *extendhisi2 */
    case 243:  /* *extendhidi2 */
    case 249:  /* *extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 236:  /* *extendqisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 239:  /* *extendhidi2_mips16e */
    case 244:  /* *extendqisi2_seb */
    case 245:  /* *extendqidi2_seb */
    case 246:  /* *extendhisi2_seh */
    case 247:  /* *extendhidi2_seh */
    case 248:  /* *extendqihi2_mips16e */
    case 250:  /* *extendqihi2_seb */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SIGNEXT;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_IMUL;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 313:  /* *movsi_internal */
    case 314:  /* *movv2hi_internal */
    case 315:  /* *movv4qi_internal */
    case 316:  /* *movv2hq_internal */
    case 317:  /* *movv2uhq_internal */
    case 318:  /* *movv2ha_internal */
    case 319:  /* *movv2uha_internal */
    case 320:  /* *movv4qq_internal */
    case 321:  /* *movv4uqq_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 14)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 15)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 16)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 17)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 18)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 19)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 20)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 21)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 365:  /* movccf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 367:  /* *movsf_softfloat */
    case 370:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_IMUL;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTLO;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 366:  /* *movsf_hardfloat */
    case 369:  /* *movdf_hardfloat */
    case 376:  /* *movv2sf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 383:  /* load_lowdf */
    case 384:  /* load_lowdi */
    case 385:  /* load_lowv2sf */
    case 386:  /* load_lowv2si */
    case 387:  /* load_lowv4hi */
    case 388:  /* load_lowv8qi */
    case 389:  /* load_lowtf */
    case 390:  /* load_highdf */
    case 391:  /* load_highdi */
    case 392:  /* load_highv2sf */
    case 393:  /* load_highv2si */
    case 394:  /* load_highv4hi */
    case 395:  /* load_highv8qi */
    case 396:  /* load_hightf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MTC;
        }
      else
        {
	  return MOVE_TYPE_FPLOAD;
        }

    case 397:  /* store_worddf */
    case 398:  /* store_worddi */
    case 399:  /* store_wordv2sf */
    case 400:  /* store_wordv2si */
    case 401:  /* store_wordv4hi */
    case 402:  /* store_wordv8qi */
    case 403:  /* store_wordtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 718:  /* *join2_load_storehi */
    case 719:  /* *join2_load_storesi */
    case 720:  /* *join2_load_storesf */
    case 721:  /* *join2_load_storedf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 1061:  /* movv2si_internal */
    case 1062:  /* movv4hi_internal */
    case 1063:  /* movv8qi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 251:  /* *extenddi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 253:  /* *extendsi_truncateqi */
    case 254:  /* *extendsi_truncatehi */
    case 255:  /* *extendhi_truncateqi */
      return MOVE_TYPE_SHIFT_SHIFT;

    case 220:  /* *zero_extendqisi2_mips16e */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 222:  /* *zero_extendhisi2_mips16e */
    case 223:  /* *zero_extendhidi2_mips16e */
      return MOVE_TYPE_ANDI;

    case 1166:  /* msa_vec_extract_d_f */
    case 1167:  /* msa_vec_extract_w_f */
      return MOVE_TYPE_FMOVE;

    case 411:  /* mfhc1df */
    case 412:  /* mfhc1di */
    case 413:  /* mfhc1v2sf */
    case 414:  /* mfhc1v2si */
    case 415:  /* mfhc1v4hi */
    case 416:  /* mfhc1v8qi */
    case 417:  /* mfhc1tf */
      return MOVE_TYPE_MFC;

    case 404:  /* mthc1df */
    case 405:  /* mthc1di */
    case 406:  /* mthc1v2sf */
    case 407:  /* mthc1v2si */
    case 408:  /* mthc1v4hi */
    case 409:  /* mthc1v8qi */
    case 410:  /* mthc1tf */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 1065:  /* loongson_vec_init1_v8qi */
      return MOVE_TYPE_MTC;

    case 285:  /* mov_swl */
    case 286:  /* mov_sdl */
    case 287:  /* mov_swr */
    case 288:  /* mov_sdr */
    case 307:  /* *movsi_ra */
    case 308:  /* *movdi_ra */
      return MOVE_TYPE_STORE;

    case 224:  /* *zero_extendqisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 281:  /* mov_lwl */
    case 282:  /* mov_ldl */
    case 283:  /* mov_lwr */
    case 284:  /* mov_ldr */
    case 722:  /* *join2_loadhi */
    case 723:  /* *join2_loadhi */
      return MOVE_TYPE_LOAD;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return MOVE_TYPE_UNKNOWN;

    }
}

enum attr_qword_mode
get_attr_qword_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1256:  /* one_cmplv16qi2 */
    case 1255:  /* one_cmplv8hi2 */
    case 1254:  /* one_cmplv4si2 */
    case 1253:  /* one_cmplv2di2 */
    case 375:  /* *movtf_mips16 */
    case 374:  /* *movtf */
    case 373:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return QWORD_MODE_YES;
        }
      else
        {
	  return QWORD_MODE_NO;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return QWORD_MODE_YES;
        }
      else
        {
	  return QWORD_MODE_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((((cached_mode = get_attr_mode (insn)) == MODE_TI) || (cached_mode == MODE_TF)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return QWORD_MODE_YES;
        }
      else
        {
	  return QWORD_MODE_NO;
        }

    default:
      return QWORD_MODE_NO;

    }
}

enum attr_sb1_fp_pipes
get_attr_sb1_fp_pipes (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if ((
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)) && (! (
#line 80 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FP_EXCEPTIONS))))
        {
	  return SB1_FP_PIPES_TWO;
        }
      else
        {
	  return SB1_FP_PIPES_ONE;
        }

    }
}

int
get_attr_sync_memmodel (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 784:  /* test_and_set_12 */
      return 11 /* 0xb */;

    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return 6;

    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
      return 3;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 10 /* 0xa */;

    }
}

enum attr_sync_insn2
get_attr_sync_insn2 (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 776:  /* sync_nandsi */
    case 777:  /* sync_nanddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
      return SYNC_INSN2_NOT;

    case 745:  /* sync_nand_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
      return SYNC_INSN2_XOR;

    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
      return SYNC_INSN2_AND;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_INSN2_NOP;

    }
}

enum attr_sync_insn1
get_attr_sync_insn1 (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 758:  /* sync_iorsi */
    case 761:  /* sync_iordi */
    case 764:  /* sync_old_iorsi */
    case 767:  /* sync_old_iordi */
    case 770:  /* sync_new_iorsi */
    case 773:  /* sync_new_iordi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ORI;
        }
      else
        {
	  return SYNC_INSN1_OR;
        }

    case 759:  /* sync_xorsi */
    case 762:  /* sync_xordi */
    case 765:  /* sync_old_xorsi */
    case 768:  /* sync_old_xordi */
    case 771:  /* sync_new_xorsi */
    case 774:  /* sync_new_xordi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_XORI;
        }
      else
        {
	  return SYNC_INSN1_XOR;
        }

    case 760:  /* sync_andsi */
    case 763:  /* sync_anddi */
    case 766:  /* sync_old_andsi */
    case 769:  /* sync_old_anddi */
    case 772:  /* sync_new_andsi */
    case 775:  /* sync_new_anddi */
    case 776:  /* sync_nandsi */
    case 777:  /* sync_nanddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ANDI;
        }
      else
        {
	  return SYNC_INSN1_AND;
        }

    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_LI;
        }
      else
        {
	  return SYNC_INSN1_MOVE;
        }

    case 728:  /* sync_addsi */
    case 729:  /* sync_adddi */
    case 750:  /* sync_old_addsi */
    case 751:  /* sync_old_adddi */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ADDIU;
        }
      else
        {
	  return SYNC_INSN1_ADDU;
        }

    case 733:  /* sync_xor_12 */
    case 738:  /* sync_old_xor_12 */
    case 743:  /* sync_new_xor_12 */
      return SYNC_INSN1_XOR;

    case 732:  /* sync_ior_12 */
    case 737:  /* sync_old_ior_12 */
    case 742:  /* sync_new_ior_12 */
      return SYNC_INSN1_OR;

    case 734:  /* sync_and_12 */
    case 739:  /* sync_old_and_12 */
    case 744:  /* sync_new_and_12 */
    case 745:  /* sync_nand_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
      return SYNC_INSN1_AND;

    case 731:  /* sync_sub_12 */
    case 736:  /* sync_old_sub_12 */
    case 741:  /* sync_new_sub_12 */
    case 748:  /* sync_subsi */
    case 749:  /* sync_subdi */
    case 752:  /* sync_old_subsi */
    case 753:  /* sync_old_subdi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
      return SYNC_INSN1_SUBU;

    case 730:  /* sync_add_12 */
    case 735:  /* sync_old_add_12 */
    case 740:  /* sync_new_add_12 */
      return SYNC_INSN1_ADDU;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_INSN1_MOVE;

    }
}

enum attr_sync_insn1_op2
get_attr_sync_insn1_op2 (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 727:  /* compare_and_swap_12 */
      return SYNC_INSN1_OP2_5;

    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 784:  /* test_and_set_12 */
    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return SYNC_INSN1_OP2_4;

    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
      return SYNC_INSN1_OP2_3;

    case 750:  /* sync_old_addsi */
    case 751:  /* sync_old_adddi */
    case 752:  /* sync_old_subsi */
    case 753:  /* sync_old_subdi */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
    case 764:  /* sync_old_iorsi */
    case 765:  /* sync_old_xorsi */
    case 766:  /* sync_old_andsi */
    case 767:  /* sync_old_iordi */
    case 768:  /* sync_old_xordi */
    case 769:  /* sync_old_anddi */
    case 770:  /* sync_new_iorsi */
    case 771:  /* sync_new_xorsi */
    case 772:  /* sync_new_andsi */
    case 773:  /* sync_new_iordi */
    case 774:  /* sync_new_xordi */
    case 775:  /* sync_new_anddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
      return SYNC_INSN1_OP2_2;

    case 728:  /* sync_addsi */
    case 729:  /* sync_adddi */
    case 748:  /* sync_subsi */
    case 749:  /* sync_subdi */
    case 758:  /* sync_iorsi */
    case 759:  /* sync_xorsi */
    case 760:  /* sync_andsi */
    case 761:  /* sync_iordi */
    case 762:  /* sync_xordi */
    case 763:  /* sync_anddi */
    case 776:  /* sync_nandsi */
    case 777:  /* sync_nanddi */
      return SYNC_INSN1_OP2_1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_INSN1_OP2_NONE;

    }
}

enum attr_sync_required_oldval
get_attr_sync_required_oldval (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 727:  /* compare_and_swap_12 */
      return SYNC_REQUIRED_OLDVAL_4;

    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return SYNC_REQUIRED_OLDVAL_3;

    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
      return SYNC_REQUIRED_OLDVAL_2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_REQUIRED_OLDVAL_NONE;

    }
}

enum attr_sync_exclusive_mask
get_attr_sync_exclusive_mask (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 727:  /* compare_and_swap_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 784:  /* test_and_set_12 */
      return SYNC_EXCLUSIVE_MASK_3;

    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
      return SYNC_EXCLUSIVE_MASK_2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_EXCLUSIVE_MASK_NONE;

    }
}

enum attr_sync_inclusive_mask
get_attr_sync_inclusive_mask (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 727:  /* compare_and_swap_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 784:  /* test_and_set_12 */
      return SYNC_INCLUSIVE_MASK_2;

    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
      return SYNC_INCLUSIVE_MASK_1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_INCLUSIVE_MASK_NONE;

    }
}

enum attr_sync_newval
get_attr_sync_newval (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 746:  /* sync_old_nand_12 */
      return SYNC_NEWVAL_5;

    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
      return SYNC_NEWVAL_4;

    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 747:  /* sync_new_nand_12 */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
    case 770:  /* sync_new_iorsi */
    case 771:  /* sync_new_xorsi */
    case 772:  /* sync_new_andsi */
    case 773:  /* sync_new_iordi */
    case 774:  /* sync_new_xordi */
    case 775:  /* sync_new_anddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
      return SYNC_NEWVAL_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_NEWVAL_NONE;

    }
}

enum attr_sync_cmp
get_attr_sync_cmp (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return SYNC_CMP_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_CMP_NONE;

    }
}

enum attr_sync_oldval
get_attr_sync_oldval (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
      return SYNC_OLDVAL_4;

    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return SYNC_OLDVAL_1;

    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
    case 727:  /* compare_and_swap_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 750:  /* sync_old_addsi */
    case 751:  /* sync_old_adddi */
    case 752:  /* sync_old_subsi */
    case 753:  /* sync_old_subdi */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
    case 764:  /* sync_old_iorsi */
    case 765:  /* sync_old_xorsi */
    case 766:  /* sync_old_andsi */
    case 767:  /* sync_old_iordi */
    case 768:  /* sync_old_xordi */
    case 769:  /* sync_old_anddi */
    case 770:  /* sync_new_iorsi */
    case 771:  /* sync_new_xorsi */
    case 772:  /* sync_new_andsi */
    case 773:  /* sync_new_iordi */
    case 774:  /* sync_new_xordi */
    case 775:  /* sync_new_anddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 784:  /* test_and_set_12 */
    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
      return SYNC_OLDVAL_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_OLDVAL_NONE;

    }
}

enum attr_sync_mem
get_attr_sync_mem (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 785:  /* atomic_compare_and_swapsi */
    case 786:  /* atomic_compare_and_swapdi */
      return SYNC_MEM_2;

    case 725:  /* sync_compare_and_swapsi */
    case 726:  /* sync_compare_and_swapdi */
    case 727:  /* compare_and_swap_12 */
    case 735:  /* sync_old_add_12 */
    case 736:  /* sync_old_sub_12 */
    case 737:  /* sync_old_ior_12 */
    case 738:  /* sync_old_xor_12 */
    case 739:  /* sync_old_and_12 */
    case 740:  /* sync_new_add_12 */
    case 741:  /* sync_new_sub_12 */
    case 742:  /* sync_new_ior_12 */
    case 743:  /* sync_new_xor_12 */
    case 744:  /* sync_new_and_12 */
    case 746:  /* sync_old_nand_12 */
    case 747:  /* sync_new_nand_12 */
    case 750:  /* sync_old_addsi */
    case 751:  /* sync_old_adddi */
    case 752:  /* sync_old_subsi */
    case 753:  /* sync_old_subdi */
    case 754:  /* sync_new_addsi */
    case 755:  /* sync_new_adddi */
    case 756:  /* sync_new_subsi */
    case 757:  /* sync_new_subdi */
    case 764:  /* sync_old_iorsi */
    case 765:  /* sync_old_xorsi */
    case 766:  /* sync_old_andsi */
    case 767:  /* sync_old_iordi */
    case 768:  /* sync_old_xordi */
    case 769:  /* sync_old_anddi */
    case 770:  /* sync_new_iorsi */
    case 771:  /* sync_new_xorsi */
    case 772:  /* sync_new_andsi */
    case 773:  /* sync_new_iordi */
    case 774:  /* sync_new_xordi */
    case 775:  /* sync_new_anddi */
    case 778:  /* sync_old_nandsi */
    case 779:  /* sync_old_nanddi */
    case 780:  /* sync_new_nandsi */
    case 781:  /* sync_new_nanddi */
    case 782:  /* sync_lock_test_and_setsi */
    case 783:  /* sync_lock_test_and_setdi */
    case 784:  /* test_and_set_12 */
    case 787:  /* atomic_exchangesi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 792:  /* atomic_fetch_adddi_llsc */
      return SYNC_MEM_1;

    case 728:  /* sync_addsi */
    case 729:  /* sync_adddi */
    case 730:  /* sync_add_12 */
    case 731:  /* sync_sub_12 */
    case 732:  /* sync_ior_12 */
    case 733:  /* sync_xor_12 */
    case 734:  /* sync_and_12 */
    case 745:  /* sync_nand_12 */
    case 748:  /* sync_subsi */
    case 749:  /* sync_subdi */
    case 758:  /* sync_iorsi */
    case 759:  /* sync_xorsi */
    case 760:  /* sync_andsi */
    case 761:  /* sync_iordi */
    case 762:  /* sync_xordi */
    case 763:  /* sync_anddi */
    case 776:  /* sync_nandsi */
    case 777:  /* sync_nanddi */
      return SYNC_MEM_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return SYNC_MEM_NONE;

    }
}

enum attr_type
get_attr_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_alu_type cached_alu_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x3fULL))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFC;
        }
      else if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 721:  /* *join2_load_storedf */
    case 720:  /* *join2_load_storesf */
    case 719:  /* *join2_load_storesi */
    case 718:  /* *join2_load_storehi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 403:  /* store_wordtf */
    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_MFC;
        }

    case 396:  /* load_hightf */
    case 395:  /* load_highv8qi */
    case 394:  /* load_highv4hi */
    case 393:  /* load_highv2si */
    case 392:  /* load_highv2sf */
    case 391:  /* load_highdi */
    case 390:  /* load_highdf */
    case 389:  /* load_lowtf */
    case 388:  /* load_lowv8qi */
    case 387:  /* load_lowv4hi */
    case 386:  /* load_lowv2si */
    case 385:  /* load_lowv2sf */
    case 384:  /* load_lowdi */
    case 383:  /* load_lowdf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_MTC;
        }

    case 375:  /* *movtf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x3fULL))
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFC;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 373:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return TYPE_MFLO;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MTLO;
        }
      else if (!((1ULL << which_alternative) & 0x3fULL))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_IMUL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 371:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return TYPE_STORE;
        }
      else if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 370:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_STORE;
        }
      else if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 376:  /* *movv2sf */
    case 369:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x1efULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1ULL << which_alternative) & 0x22ULL))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 367:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 366:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x1efULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1ULL << which_alternative) & 0x22ULL))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 365:  /* movccf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_FMOVE;
        }

    case 364:  /* *movqi_mips16 */
    case 362:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MULTI;
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return TYPE_LOAD;
        }
      else if (((1ULL << which_alternative) & 0x60ULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_MTLO;
        }
      else if (!((1ULL << which_alternative) & 0xffULL))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x1ffULL))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MULTI;
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xe0ULL))
        {
	  return TYPE_LOAD;
        }
      else if (((1ULL << which_alternative) & 0x101000ULL))
        {
	  return TYPE_FPLOAD;
        }
      else if (((1ULL << which_alternative) & 0x700ULL))
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x3fbfffULL))
        {
	  return TYPE_FPSTORE;
        }
      else if (((1ULL << which_alternative) & 0x90800ULL))
        {
	  return TYPE_MTC;
        }
      else if (((1ULL << which_alternative) & 0x20a000ULL))
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 17)
        {
	  return TYPE_MTLO;
        }
      else if (which_alternative == 18)
        {
	  return TYPE_MFLO;
        }
      else if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x1ffULL))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || ((((1ULL << which_alternative) & 0x2fULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return TYPE_MULTI;
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 310:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return TYPE_MFLO;
        }
      else if ((which_alternative == 4) || ((((1ULL << which_alternative) & 0xfULL)) && (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return TYPE_MULTI;
        }
      else if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 250:  /* *extendqihi2_seb */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_SIGNEXT;
        }

    case 235:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_LOAD;
        }
      else if (! (
#line 246 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 228:  /* *zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_LOGICAL;
        }

    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_LOGICAL;
        }

    case 215:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_ARITH;
        }

    case 249:  /* *extendqihi2 */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 214:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 200:  /* truncdisi2 */
    case 199:  /* truncdihi2 */
    case 198:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_SHIFT;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return TYPE_LOGICAL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_ARITH;
        }
      else if (!((1ULL << which_alternative) & 0x67ULL))
        {
	  return TYPE_LOGICAL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 36:  /* mulsi3_mul3 */
    case 37:  /* muldi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMUL3;
        }
      else
        {
	  return TYPE_IMUL;
        }

    case 50:  /* *muls */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMUL;
        }
      else
        {
	  return TYPE_IMUL3;
        }

    case 641:  /* cop0_move */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MTC;
        }
      else
        {
	  return TYPE_MFC;
        }

    case 1199:  /* movv2df_msa */
    case 1200:  /* movv4sf_msa */
    case 1201:  /* movv2di_msa */
    case 1202:  /* movv4si_msa */
    case 1203:  /* movv8hi_msa */
    case 1204:  /* movv16qi_msa */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMD_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMD_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_SIMD_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_SIMD_COPY;
        }
      else
        {
	  return TYPE_SIMD_INSERT;
        }

    case 1241:  /* xorv2di3 */
    case 1242:  /* xorv4si3 */
    case 1243:  /* xorv8hi3 */
    case 1244:  /* xorv16qi3 */
    case 1245:  /* iorv2di3 */
    case 1246:  /* iorv4si3 */
    case 1247:  /* iorv8hi3 */
    case 1248:  /* iorv16qi3 */
    case 1249:  /* andv2di3 */
    case 1250:  /* andv4si3 */
    case 1251:  /* andv8hi3 */
    case 1252:  /* andv16qi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMD_LOGIC;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMD_BIT;
        }
      else
        {
	  return TYPE_SIMD_LOGIC;
        }

    case 309:  /* *movdi_32bit */
    case 311:  /* *movdi_64bit */
      if (! (get_attr_jal (insn) == JAL_UNSET))
        {
	  return TYPE_CALL;
        }
      else if (get_attr_got (insn) == GOT_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_ADD) || (cached_alu_type == ALU_TYPE_SUB))
        {
	  return TYPE_ARITH;
        }
      else if ((cached_alu_type == ALU_TYPE_NOT) || (cached_alu_type == ALU_TYPE_NOR) || (cached_alu_type == ALU_TYPE_AND) || (cached_alu_type == ALU_TYPE_OR) || (cached_alu_type == ALU_TYPE_XOR))
        {
	  return TYPE_LOGICAL;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if (cached_move_type == MOVE_TYPE_FPLOAD)
        {
	  return TYPE_FPLOAD;
        }
      else if (cached_move_type == MOVE_TYPE_STORE)
        {
	  return TYPE_STORE;
        }
      else if (cached_move_type == MOVE_TYPE_FPSTORE)
        {
	  return TYPE_FPSTORE;
        }
      else if (cached_move_type == MOVE_TYPE_MTC)
        {
	  return TYPE_MTC;
        }
      else if (cached_move_type == MOVE_TYPE_MFC)
        {
	  return TYPE_MFC;
        }
      else if (cached_move_type == MOVE_TYPE_MTLO)
        {
	  return TYPE_MTLO;
        }
      else if (cached_move_type == MOVE_TYPE_MFLO)
        {
	  return TYPE_MFLO;
        }
      else if (cached_move_type == MOVE_TYPE_IMUL)
        {
	  return TYPE_IMUL;
        }
      else if (cached_move_type == MOVE_TYPE_FMOVE)
        {
	  return TYPE_FMOVE;
        }
      else if (cached_move_type == MOVE_TYPE_LOADPOOL)
        {
	  return TYPE_LOAD;
        }
      else if (cached_move_type == MOVE_TYPE_SIGNEXT)
        {
	  return TYPE_SIGNEXT;
        }
      else if (cached_move_type == MOVE_TYPE_EXT_INS)
        {
	  return TYPE_ARITH;
        }
      else if (cached_move_type == MOVE_TYPE_ARITH)
        {
	  return TYPE_ARITH;
        }
      else if (cached_move_type == MOVE_TYPE_LOGICAL)
        {
	  return TYPE_LOGICAL;
        }
      else if (cached_move_type == MOVE_TYPE_SLL0)
        {
	  return TYPE_SHIFT;
        }
      else if (cached_move_type == MOVE_TYPE_ANDI)
        {
	  return TYPE_LOGICAL;
        }
      else if ((cached_move_type == MOVE_TYPE_CONSTN) || (cached_move_type == MOVE_TYPE_SHIFT_SHIFT))
        {
	  return TYPE_MULTI;
        }
      else if (((cached_move_type == MOVE_TYPE_MOVE) || (cached_move_type == MOVE_TYPE_CONST)) && (get_attr_qword_mode (insn) == QWORD_MODE_YES))
        {
	  return TYPE_MULTI;
        }
      else if (((cached_move_type == MOVE_TYPE_MOVE) || (cached_move_type == MOVE_TYPE_CONST)) && (get_attr_dword_mode (insn) == DWORD_MODE_YES))
        {
	  return TYPE_MULTI;
        }
      else if (cached_move_type == MOVE_TYPE_MOVE)
        {
	  return TYPE_MOVE;
        }
      else if (cached_move_type == MOVE_TYPE_CONST)
        {
	  return TYPE_CONST;
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return TYPE_SYNCLOOP;
        }
      else
        {
	  return TYPE_UNKNOWN;
        }

    case 1253:  /* one_cmplv2di2 */
    case 1254:  /* one_cmplv4si2 */
    case 1255:  /* one_cmplv8hi2 */
    case 1256:  /* one_cmplv16qi2 */
    case 1577:  /* msa_nor_d */
    case 1578:  /* msa_nor_w */
    case 1579:  /* msa_nor_h */
    case 1580:  /* msa_nor_b */
      return TYPE_SIMD_LOGIC;

    case 1477:  /* smaxv2df3 */
    case 1478:  /* smaxv4sf3 */
    case 1479:  /* msa_fmax_a_d */
    case 1480:  /* msa_fmax_a_w */
    case 1481:  /* sminv2df3 */
    case 1482:  /* sminv4sf3 */
    case 1483:  /* msa_fmin_a_d */
    case 1484:  /* msa_fmin_a_w */
      return TYPE_SIMD_FMINMAX;

    case 1663:  /* msa_cfcmsa */
    case 1664:  /* msa_ctcmsa */
      return TYPE_SIMD_CMSA;

    case 1671:  /* msa_bz_d_f */
    case 1672:  /* msa_bnz_d_f */
    case 1673:  /* msa_bz_w_f */
    case 1674:  /* msa_bnz_w_f */
    case 1675:  /* msa_bz_d */
    case 1676:  /* msa_bnz_d */
    case 1677:  /* msa_bz_w */
    case 1678:  /* msa_bnz_w */
    case 1679:  /* msa_bz_h */
    case 1680:  /* msa_bnz_h */
    case 1681:  /* msa_bz_b */
    case 1682:  /* msa_bnz_b */
    case 1683:  /* msa_bz_v_d_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1686:  /* msa_bnz_v_w_f */
    case 1687:  /* msa_bz_v_d */
    case 1688:  /* msa_bnz_v_d */
    case 1689:  /* msa_bz_v_w */
    case 1690:  /* msa_bnz_v_w */
    case 1691:  /* msa_bz_v_h */
    case 1692:  /* msa_bnz_v_h */
    case 1693:  /* msa_bz_v_b */
    case 1694:  /* msa_bnz_v_b */
      return TYPE_SIMD_BRANCH;

    case 1182:  /* msa_copy_s_h */
    case 1183:  /* msa_copy_u_h */
    case 1184:  /* msa_copy_s_b */
    case 1185:  /* msa_copy_u_b */
    case 1186:  /* msa_copy_u_w */
    case 1187:  /* msa_copy_s_w_64bit */
    case 1188:  /* msa_copy_s_w_f_64bit */
    case 1189:  /* msa_copy_s_w */
    case 1190:  /* msa_copy_s_w_f */
    case 1191:  /* msa_copy_s_d */
    case 1192:  /* msa_copy_s_d_f */
      return TYPE_SIMD_COPY;

    case 1589:  /* popcountv2di2 */
    case 1590:  /* popcountv4si2 */
    case 1591:  /* popcountv8hi2 */
    case 1592:  /* popcountv16qi2 */
      return TYPE_SIMD_PCNT;

    case 1593:  /* msa_sat_s_d */
    case 1594:  /* msa_sat_s_w */
    case 1595:  /* msa_sat_s_h */
    case 1596:  /* msa_sat_s_b */
    case 1597:  /* msa_sat_u_d */
    case 1598:  /* msa_sat_u_w */
    case 1599:  /* msa_sat_u_h */
    case 1600:  /* msa_sat_u_b */
      return TYPE_SIMD_SAT;

    case 1601:  /* msa_shf_w */
    case 1602:  /* msa_shf_h */
    case 1603:  /* msa_shf_b */
    case 1604:  /* msa_shf_w_f */
      return TYPE_SIMD_SHF;

    case 1163:  /* vec_pack_trunc_v2di */
    case 1164:  /* vec_pack_trunc_v4si */
    case 1165:  /* vec_pack_trunc_v8hi */
    case 1513:  /* msa_ilvev_b */
    case 1514:  /* msa_ilvev_h */
    case 1515:  /* msa_ilvev_w */
    case 1516:  /* msa_ilvev_w_f */
    case 1517:  /* msa_ilvl_b */
    case 1518:  /* msa_ilvl_h */
    case 1519:  /* msa_ilvl_w */
    case 1520:  /* msa_ilvl_w_f */
    case 1521:  /* msa_ilvl_d */
    case 1522:  /* msa_ilvl_d_f */
    case 1523:  /* msa_ilvod_b */
    case 1524:  /* msa_ilvod_h */
    case 1525:  /* msa_ilvod_w */
    case 1526:  /* msa_ilvod_w_f */
    case 1527:  /* msa_ilvr_b */
    case 1528:  /* msa_ilvr_h */
    case 1529:  /* msa_ilvr_w */
    case 1530:  /* msa_ilvr_w_f */
    case 1531:  /* msa_ilvr_d */
    case 1532:  /* msa_ilvr_d_f */
    case 1581:  /* msa_pckev_b */
    case 1582:  /* msa_pckev_h */
    case 1583:  /* msa_pckev_w */
    case 1584:  /* msa_pckev_w_f */
    case 1585:  /* msa_pckod_b */
    case 1586:  /* msa_pckod_h */
    case 1587:  /* msa_pckod_w */
    case 1588:  /* msa_pckod_w_f */
      return TYPE_SIMD_PERMUTE;

    case 1469:  /* msa_fill_d_f */
    case 1470:  /* msa_fill_w_f */
    case 1471:  /* msa_fill_d */
    case 1472:  /* msa_fill_w */
    case 1473:  /* msa_fill_h */
    case 1474:  /* msa_fill_b */
      return TYPE_SIMD_FILL;

    case 1649:  /* msa_splat_d_f */
    case 1650:  /* msa_splat_w_f */
    case 1651:  /* msa_splat_d */
    case 1652:  /* msa_splat_w */
    case 1653:  /* msa_splat_h */
    case 1654:  /* msa_splat_b */
    case 1655:  /* msa_splati_d_f */
    case 1656:  /* msa_splati_w_f */
    case 1657:  /* msa_splati_d */
    case 1658:  /* msa_splati_w */
    case 1659:  /* msa_splati_h */
    case 1660:  /* msa_splati_b */
    case 1661:  /* msa_splati_d_f_scalar */
    case 1662:  /* msa_splati_w_f_scalar */
      return TYPE_SIMD_SPLAT;

    case 1257:  /* vlshrv2di3 */
    case 1258:  /* vlshrv4si3 */
    case 1259:  /* vlshrv8hi3 */
    case 1260:  /* vlshrv16qi3 */
    case 1261:  /* vashrv2di3 */
    case 1262:  /* vashrv4si3 */
    case 1263:  /* vashrv8hi3 */
    case 1264:  /* vashrv16qi3 */
    case 1265:  /* vashlv2di3 */
    case 1266:  /* vashlv4si3 */
    case 1267:  /* vashlv8hi3 */
    case 1268:  /* vashlv16qi3 */
    case 1605:  /* msa_srar_d */
    case 1606:  /* msa_srar_w */
    case 1607:  /* msa_srar_h */
    case 1608:  /* msa_srar_b */
    case 1609:  /* msa_srari_d */
    case 1610:  /* msa_srari_w */
    case 1611:  /* msa_srari_h */
    case 1612:  /* msa_srari_b */
    case 1613:  /* msa_srlr_d */
    case 1614:  /* msa_srlr_w */
    case 1615:  /* msa_srlr_h */
    case 1616:  /* msa_srlr_b */
    case 1617:  /* msa_srlri_d */
    case 1618:  /* msa_srlri_w */
    case 1619:  /* msa_srlri_h */
    case 1620:  /* msa_srlri_b */
      return TYPE_SIMD_SHIFT;

    case 1323:  /* msa_bclr_d */
    case 1324:  /* msa_bclr_w */
    case 1325:  /* msa_bclr_h */
    case 1326:  /* msa_bclr_b */
    case 1327:  /* msa_bclri_d */
    case 1328:  /* msa_bclri_w */
    case 1329:  /* msa_bclri_h */
    case 1330:  /* msa_bclri_b */
    case 1355:  /* msa_bneg_d */
    case 1356:  /* msa_bneg_w */
    case 1357:  /* msa_bneg_h */
    case 1358:  /* msa_bneg_b */
    case 1359:  /* msa_bnegi_d */
    case 1360:  /* msa_bnegi_w */
    case 1361:  /* msa_bnegi_h */
    case 1362:  /* msa_bnegi_b */
    case 1367:  /* msa_bset_d */
    case 1368:  /* msa_bset_w */
    case 1369:  /* msa_bset_h */
    case 1370:  /* msa_bset_b */
    case 1371:  /* msa_bseti_d */
    case 1372:  /* msa_bseti_w */
    case 1373:  /* msa_bseti_h */
    case 1374:  /* msa_bseti_b */
    case 1569:  /* msa_nloc_d */
    case 1570:  /* msa_nloc_w */
    case 1571:  /* msa_nloc_h */
    case 1572:  /* msa_nloc_b */
    case 1573:  /* clzv2di2 */
    case 1574:  /* clzv4si2 */
    case 1575:  /* clzv8hi2 */
    case 1576:  /* clzv16qi2 */
      return TYPE_SIMD_BIT;

    case 1459:  /* msa_fexp2_d */
    case 1460:  /* msa_fexp2_w */
      return TYPE_SIMD_FEXP2;

    case 1415:  /* msa_fcaf_d */
    case 1416:  /* msa_fcaf_w */
    case 1417:  /* msa_fcune_d */
    case 1418:  /* msa_fcune_w */
    case 1419:  /* msa_fcun_d */
    case 1420:  /* msa_fcor_d */
    case 1421:  /* msa_fceq_d */
    case 1422:  /* msa_fcne_d */
    case 1423:  /* msa_fcle_d */
    case 1424:  /* msa_fclt_d */
    case 1425:  /* msa_fcueq_d */
    case 1426:  /* msa_fcule_d */
    case 1427:  /* msa_fcult_d */
    case 1428:  /* msa_fcun_w */
    case 1429:  /* msa_fcor_w */
    case 1430:  /* msa_fceq_w */
    case 1431:  /* msa_fcne_w */
    case 1432:  /* msa_fcle_w */
    case 1433:  /* msa_fclt_w */
    case 1434:  /* msa_fcueq_w */
    case 1435:  /* msa_fcule_w */
    case 1436:  /* msa_fcult_w */
    case 1437:  /* msa_fsaf_d */
    case 1438:  /* msa_fsun_d */
    case 1439:  /* msa_fsor_d */
    case 1440:  /* msa_fseq_d */
    case 1441:  /* msa_fsne_d */
    case 1442:  /* msa_fsueq_d */
    case 1443:  /* msa_fsune_d */
    case 1444:  /* msa_fsule_d */
    case 1445:  /* msa_fsult_d */
    case 1446:  /* msa_fsle_d */
    case 1447:  /* msa_fslt_d */
    case 1448:  /* msa_fsaf_w */
    case 1449:  /* msa_fsun_w */
    case 1450:  /* msa_fsor_w */
    case 1451:  /* msa_fseq_w */
    case 1452:  /* msa_fsne_w */
    case 1453:  /* msa_fsueq_w */
    case 1454:  /* msa_fsune_w */
    case 1455:  /* msa_fsule_w */
    case 1456:  /* msa_fsult_w */
    case 1457:  /* msa_fsle_w */
    case 1458:  /* msa_fslt_w */
      return TYPE_SIMD_FCMP;

    case 1213:  /* mulv2di3 */
    case 1214:  /* mulv4si3 */
    case 1215:  /* mulv8hi3 */
    case 1216:  /* mulv16qi3 */
    case 1217:  /* msa_maddv_d */
    case 1218:  /* msa_maddv_w */
    case 1219:  /* msa_maddv_h */
    case 1220:  /* msa_maddv_b */
    case 1221:  /* msa_msubv_d */
    case 1222:  /* msa_msubv_w */
    case 1223:  /* msa_msubv_h */
    case 1224:  /* msa_msubv_b */
    case 1395:  /* msa_dotp_s_d */
    case 1396:  /* msa_dotp_u_d */
    case 1397:  /* msa_dotp_s_w */
    case 1398:  /* msa_dotp_u_w */
    case 1399:  /* msa_dotp_s_h */
    case 1400:  /* msa_dotp_u_h */
    case 1401:  /* msa_dpadd_s_d */
    case 1402:  /* msa_dpadd_u_d */
    case 1403:  /* msa_dpadd_s_w */
    case 1404:  /* msa_dpadd_u_w */
    case 1405:  /* msa_dpadd_s_h */
    case 1406:  /* msa_dpadd_u_h */
    case 1407:  /* msa_dpsub_s_d */
    case 1408:  /* msa_dpsub_u_d */
    case 1409:  /* msa_dpsub_s_w */
    case 1410:  /* msa_dpsub_u_w */
    case 1411:  /* msa_dpsub_s_h */
    case 1412:  /* msa_dpsub_u_h */
    case 1533:  /* msa_madd_q_w */
    case 1534:  /* msa_madd_q_h */
    case 1535:  /* msa_maddr_q_w */
    case 1536:  /* msa_maddr_q_h */
    case 1561:  /* msa_msub_q_w */
    case 1562:  /* msa_msub_q_h */
    case 1563:  /* msa_msubr_q_w */
    case 1564:  /* msa_msubr_q_h */
    case 1565:  /* msa_mul_q_w */
    case 1566:  /* msa_mul_q_h */
    case 1567:  /* msa_mulr_q_w */
    case 1568:  /* msa_mulr_q_h */
      return TYPE_SIMD_MUL;

    case 1193:  /* vec_permv2df */
    case 1194:  /* vec_permv4sf */
    case 1195:  /* vec_permv2di */
    case 1196:  /* vec_permv4si */
    case 1197:  /* vec_permv8hi */
    case 1198:  /* vec_permv16qi */
    case 1637:  /* msa_sld_d_f */
    case 1638:  /* msa_sld_w_f */
    case 1639:  /* msa_sld_d */
    case 1640:  /* msa_sld_w */
    case 1641:  /* msa_sld_h */
    case 1642:  /* msa_sld_b */
    case 1643:  /* msa_sldi_d_f */
    case 1644:  /* msa_sldi_w_f */
    case 1645:  /* msa_sldi_d */
    case 1646:  /* msa_sldi_w */
    case 1647:  /* msa_sldi_h */
    case 1648:  /* msa_sldi_b */
      return TYPE_SIMD_SLD;

    case 1168:  /* msa_insert_d_f */
    case 1169:  /* msa_insert_w_f */
    case 1170:  /* msa_insert_d */
    case 1171:  /* msa_insert_w */
    case 1172:  /* msa_insert_h */
    case 1173:  /* msa_insert_b */
    case 1174:  /* msa_insve_d_f */
    case 1175:  /* msa_insve_w_f */
    case 1176:  /* msa_insve_d */
    case 1177:  /* msa_insve_w */
    case 1178:  /* msa_insve_h */
    case 1179:  /* msa_insve_b */
    case 1180:  /* msa_insve_d_f_scalar */
    case 1181:  /* msa_insve_w_f_scalar */
      return TYPE_SIMD_INSERT;

    case 1347:  /* msa_bmnz_d */
    case 1348:  /* msa_bmnz_w */
    case 1349:  /* msa_bmnz_h */
    case 1350:  /* msa_bmnz_b */
    case 1351:  /* msa_bmz_d */
    case 1352:  /* msa_bmz_w */
    case 1353:  /* msa_bmz_h */
    case 1354:  /* msa_bmz_b */
    case 1363:  /* msa_bsel_d */
    case 1364:  /* msa_bsel_w */
    case 1365:  /* msa_bsel_h */
    case 1366:  /* msa_bsel_b */
      return TYPE_SIMD_BITMOV;

    case 1331:  /* msa_binsl_d */
    case 1332:  /* msa_binsl_w */
    case 1333:  /* msa_binsl_h */
    case 1334:  /* msa_binsl_b */
    case 1335:  /* msa_binsli_d */
    case 1336:  /* msa_binsli_w */
    case 1337:  /* msa_binsli_h */
    case 1338:  /* msa_binsli_b */
    case 1339:  /* msa_binsr_d */
    case 1340:  /* msa_binsr_w */
    case 1341:  /* msa_binsr_h */
    case 1342:  /* msa_binsr_b */
    case 1343:  /* msa_binsri_d */
    case 1344:  /* msa_binsri_w */
    case 1345:  /* msa_binsri_h */
    case 1346:  /* msa_binsri_b */
      return TYPE_SIMD_BITINS;

    case 1275:  /* divv2df3 */
    case 1276:  /* divv4sf3 */
    case 1281:  /* sqrtv2df2 */
    case 1282:  /* sqrtv4sf2 */
    case 1485:  /* msa_frcp_d */
    case 1486:  /* msa_frcp_w */
    case 1489:  /* msa_frsqrt_d */
    case 1490:  /* msa_frsqrt_w */
      return TYPE_SIMD_FDIV;

    case 1277:  /* fmav2df4 */
    case 1278:  /* fmav4sf4 */
    case 1279:  /* fnmav2df4 */
    case 1280:  /* fnmav4sf4 */
      return TYPE_SIMD_FMADD;

    case 1273:  /* mulv2df3 */
    case 1274:  /* mulv4sf3 */
      return TYPE_SIMD_FMUL;

    case 1461:  /* floatv2div2df2 */
    case 1462:  /* floatv4siv4sf2 */
    case 1463:  /* floatunsv2div2df2 */
    case 1464:  /* floatunsv4siv4sf2 */
    case 1465:  /* msa_ffql_d */
    case 1466:  /* msa_ffql_w */
    case 1467:  /* msa_ffqr_d */
    case 1468:  /* msa_ffqr_w */
    case 1487:  /* msa_frint_d */
    case 1488:  /* msa_frint_w */
    case 1491:  /* msa_ftint_s_d */
    case 1492:  /* msa_ftint_s_w */
    case 1493:  /* msa_ftint_u_d */
    case 1494:  /* msa_ftint_u_w */
    case 1495:  /* fix_truncv2dfv2di2 */
    case 1496:  /* fix_truncv4sfv4si2 */
    case 1497:  /* fixuns_truncv2dfv2di2 */
    case 1498:  /* fixuns_truncv4sfv4si2 */
    case 1499:  /* msa_ftq_h */
    case 1500:  /* msa_ftq_w */
    case 1665:  /* msa_fexdo_h */
    case 1666:  /* vec_pack_trunc_v2df */
    case 1667:  /* msa_fexupl_w */
    case 1668:  /* msa_fexupl_d */
    case 1669:  /* msa_fexupr_w */
    case 1670:  /* msa_fexupr_d */
      return TYPE_SIMD_FCVT;

    case 1269:  /* addv2df3 */
    case 1270:  /* addv4sf3 */
    case 1271:  /* subv2df3 */
    case 1272:  /* subv4sf3 */
      return TYPE_SIMD_FADD;

    case 1475:  /* msa_flog2_d */
    case 1476:  /* msa_flog2_w */
      return TYPE_SIMD_FLOG2;

    case 1413:  /* msa_fclass_d */
    case 1414:  /* msa_fclass_w */
      return TYPE_SIMD_FCLASS;

    case 1225:  /* divv2di3 */
    case 1226:  /* divv4si3 */
    case 1227:  /* divv8hi3 */
    case 1228:  /* divv16qi3 */
    case 1229:  /* udivv2di3 */
    case 1230:  /* udivv4si3 */
    case 1231:  /* udivv8hi3 */
    case 1232:  /* udivv16qi3 */
    case 1233:  /* modv2di3 */
    case 1234:  /* modv4si3 */
    case 1235:  /* modv8hi3 */
    case 1236:  /* modv16qi3 */
    case 1237:  /* umodv2di3 */
    case 1238:  /* umodv4si3 */
    case 1239:  /* umodv8hi3 */
    case 1240:  /* umodv16qi3 */
      return TYPE_SIMD_DIV;

    case 1052:  /* *store_word_multiple */
    case 1053:  /* *load_word_multiple */
      return TYPE_MULTIMEM;

    case 418:  /* loadgp_newabi_si */
    case 419:  /* loadgp_newabi_di */
    case 420:  /* loadgp_absolute_si */
    case 421:  /* loadgp_absolute_di */
    case 422:  /* loadgp_blockage */
    case 423:  /* loadgp_rtp_si */
    case 424:  /* loadgp_rtp_di */
    case 425:  /* copygp_mips16_si */
    case 426:  /* copygp_mips16_di */
    case 427:  /* potential_cprestore_si */
    case 428:  /* potential_cprestore_di */
    case 431:  /* use_cprestore_si */
    case 432:  /* use_cprestore_di */
    case 628:  /* blockage */
    case 644:  /* restore_gp_si */
    case 645:  /* restore_gp_di */
    case 646:  /* move_gpsi */
    case 647:  /* move_gpdi */
    case 650:  /* set_got_version */
    case 651:  /* update_got_version */
      return TYPE_GHOST;

    case 668:  /* nop */
    case 669:  /* hazard_nop */
      return TYPE_NOP;

    case 792:  /* atomic_fetch_adddi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
    case 788:  /* atomic_exchangedi_llsc */
    case 787:  /* atomic_exchangesi_llsc */
    case 786:  /* atomic_compare_and_swapdi */
    case 785:  /* atomic_compare_and_swapsi */
    case 784:  /* test_and_set_12 */
    case 783:  /* sync_lock_test_and_setdi */
    case 782:  /* sync_lock_test_and_setsi */
    case 781:  /* sync_new_nanddi */
    case 780:  /* sync_new_nandsi */
    case 779:  /* sync_old_nanddi */
    case 778:  /* sync_old_nandsi */
    case 777:  /* sync_nanddi */
    case 776:  /* sync_nandsi */
    case 775:  /* sync_new_anddi */
    case 774:  /* sync_new_xordi */
    case 773:  /* sync_new_iordi */
    case 772:  /* sync_new_andsi */
    case 771:  /* sync_new_xorsi */
    case 770:  /* sync_new_iorsi */
    case 769:  /* sync_old_anddi */
    case 768:  /* sync_old_xordi */
    case 767:  /* sync_old_iordi */
    case 766:  /* sync_old_andsi */
    case 765:  /* sync_old_xorsi */
    case 764:  /* sync_old_iorsi */
    case 763:  /* sync_anddi */
    case 762:  /* sync_xordi */
    case 761:  /* sync_iordi */
    case 760:  /* sync_andsi */
    case 759:  /* sync_xorsi */
    case 758:  /* sync_iorsi */
    case 757:  /* sync_new_subdi */
    case 756:  /* sync_new_subsi */
    case 755:  /* sync_new_adddi */
    case 754:  /* sync_new_addsi */
    case 753:  /* sync_old_subdi */
    case 752:  /* sync_old_subsi */
    case 751:  /* sync_old_adddi */
    case 750:  /* sync_old_addsi */
    case 749:  /* sync_subdi */
    case 748:  /* sync_subsi */
    case 747:  /* sync_new_nand_12 */
    case 746:  /* sync_old_nand_12 */
    case 745:  /* sync_nand_12 */
    case 744:  /* sync_new_and_12 */
    case 743:  /* sync_new_xor_12 */
    case 742:  /* sync_new_ior_12 */
    case 741:  /* sync_new_sub_12 */
    case 740:  /* sync_new_add_12 */
    case 739:  /* sync_old_and_12 */
    case 738:  /* sync_old_xor_12 */
    case 737:  /* sync_old_ior_12 */
    case 736:  /* sync_old_sub_12 */
    case 735:  /* sync_old_add_12 */
    case 734:  /* sync_and_12 */
    case 733:  /* sync_xor_12 */
    case 732:  /* sync_ior_12 */
    case 731:  /* sync_sub_12 */
    case 730:  /* sync_add_12 */
    case 729:  /* sync_adddi */
    case 728:  /* sync_addsi */
    case 727:  /* compare_and_swap_12 */
    case 726:  /* sync_compare_and_swapdi */
    case 725:  /* sync_compare_and_swapsi */
      return TYPE_SYNCLOOP;

    case 789:  /* atomic_exchangesi_swap */
    case 790:  /* atomic_exchangedi_swap */
    case 793:  /* atomic_fetch_addsi_ldadd */
    case 794:  /* atomic_fetch_adddi_ldadd */
      return TYPE_ATOMIC;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 255:  /* *extendhi_truncateqi */
    case 254:  /* *extendsi_truncatehi */
    case 253:  /* *extendsi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 251:  /* *extenddi_truncateqi */
    case 622:  /* indirect_jump_and_restore_si */
    case 623:  /* indirect_jump_and_restore_di */
    case 708:  /* tls_get_tp_mips16_si */
    case 709:  /* tls_get_tp_mips16_di */
      return TYPE_MULTI;

    case 847:  /* mips_addq_s_w */
    case 848:  /* mips_addq_s_ph */
    case 849:  /* mips_addu_s_qb */
    case 852:  /* mips_subq_s_w */
    case 853:  /* mips_subq_s_ph */
    case 854:  /* mips_subu_s_qb */
    case 859:  /* mips_absq_s_w */
    case 860:  /* mips_absq_s_ph */
    case 864:  /* mips_precrqu_s_qb_ph */
    case 877:  /* mips_shll_s_w */
    case 878:  /* mips_shll_s_ph */
    case 952:  /* mips_absq_s_qb */
    case 954:  /* mips_addu_s_ph */
    case 956:  /* mips_adduh_r_qb */
    case 978:  /* mips_subu_s_ph */
      return TYPE_DSPALUSAT;

    case 845:  /* addv2hi3 */
    case 846:  /* addv4qi3 */
    case 850:  /* subv2hi3 */
    case 851:  /* subv4qi3 */
    case 855:  /* mips_addsc */
    case 856:  /* mips_addwc */
    case 857:  /* mips_modsub */
    case 858:  /* mips_raddu_w_qb */
    case 861:  /* mips_precrq_qb_ph */
    case 862:  /* mips_precrq_ph_w */
    case 863:  /* mips_precrq_rs_ph_w */
    case 865:  /* mips_preceq_w_phl */
    case 866:  /* mips_preceq_w_phr */
    case 867:  /* mips_precequ_ph_qbl */
    case 868:  /* mips_precequ_ph_qbr */
    case 869:  /* mips_precequ_ph_qbla */
    case 870:  /* mips_precequ_ph_qbra */
    case 871:  /* mips_preceu_ph_qbl */
    case 872:  /* mips_preceu_ph_qbr */
    case 873:  /* mips_preceu_ph_qbla */
    case 874:  /* mips_preceu_ph_qbra */
    case 875:  /* mips_shll_ph */
    case 876:  /* mips_shll_qb */
    case 879:  /* mips_shrl_qb */
    case 880:  /* mips_shra_ph */
    case 881:  /* mips_shra_r_w */
    case 882:  /* mips_shra_r_ph */
    case 901:  /* mips_bitrev */
    case 902:  /* mips_insv */
    case 903:  /* mips_repl_qb */
    case 904:  /* mips_repl_ph */
    case 905:  /* mips_cmp_eq_ph */
    case 906:  /* mips_cmpu_eq_qb */
    case 907:  /* mips_cmp_lt_ph */
    case 908:  /* mips_cmpu_lt_qb */
    case 909:  /* mips_cmp_le_ph */
    case 910:  /* mips_cmpu_le_qb */
    case 911:  /* mips_cmpgu_eq_qb */
    case 912:  /* mips_cmpgu_lt_qb */
    case 913:  /* mips_cmpgu_le_qb */
    case 914:  /* mips_pick_ph */
    case 915:  /* mips_pick_qb */
    case 916:  /* mips_packrl_ph */
    case 925:  /* mips_wrdsp */
    case 926:  /* mips_rddsp */
    case 953:  /* mips_addu_ph */
    case 955:  /* mips_adduh_qb */
    case 957:  /* mips_append */
    case 958:  /* mips_balign */
    case 959:  /* mips_cmpgdu_eq_qb */
    case 960:  /* mips_cmpgdu_lt_qb */
    case 961:  /* mips_cmpgdu_le_qb */
    case 970:  /* mips_precr_qb_ph */
    case 971:  /* mips_precr_sra_ph_w */
    case 972:  /* mips_precr_sra_r_ph_w */
    case 973:  /* mips_prepend */
    case 974:  /* mips_shra_qb */
    case 975:  /* mips_shra_r_qb */
    case 976:  /* mips_shrl_ph */
    case 977:  /* mips_subu_ph */
    case 979:  /* mips_subuh_qb */
    case 980:  /* mips_subuh_r_qb */
    case 981:  /* mips_addqh_ph */
    case 982:  /* mips_addqh_r_ph */
    case 983:  /* mips_addqh_w */
    case 984:  /* mips_addqh_r_w */
    case 985:  /* mips_subqh_ph */
    case 986:  /* mips_subqh_r_ph */
    case 987:  /* mips_subqh_w */
    case 988:  /* mips_subqh_r_w */
      return TYPE_DSPALU;

    case 923:  /* mips_shilo */
    case 924:  /* mips_mthlip */
      return TYPE_ACCMOD;

    case 917:  /* mips_extr_w */
    case 918:  /* mips_extr_r_w */
    case 919:  /* mips_extr_rs_w */
    case 920:  /* mips_extr_s_h */
    case 921:  /* mips_extp */
    case 922:  /* mips_extpdp */
      return TYPE_ACCEXT;

    case 895:  /* mips_dpaq_sa_l_w */
    case 896:  /* mips_dpsq_sa_l_w */
    case 899:  /* mips_maq_sa_w_phl */
    case 900:  /* mips_maq_sa_w_phr */
    case 992:  /* mips_dpaqx_sa_w_ph */
    case 994:  /* mips_dpsqx_sa_w_ph */
      return TYPE_DSPMACSAT;

    case 888:  /* mips_dpau_h_qbl */
    case 889:  /* mips_dpau_h_qbr */
    case 890:  /* mips_dpsu_h_qbl */
    case 891:  /* mips_dpsu_h_qbr */
    case 892:  /* mips_dpaq_s_w_ph */
    case 893:  /* mips_dpsq_s_w_ph */
    case 894:  /* mips_mulsaq_s_w_ph */
    case 897:  /* mips_maq_s_w_phl */
    case 898:  /* mips_maq_s_w_phr */
    case 962:  /* mips_dpa_w_ph */
    case 963:  /* mips_dps_w_ph */
    case 969:  /* mips_mulsa_w_ph */
    case 989:  /* mips_dpax_w_ph */
    case 990:  /* mips_dpsx_w_ph */
    case 991:  /* mips_dpaqx_s_w_ph */
    case 993:  /* mips_dpsqx_s_w_ph */
      return TYPE_DSPMAC;

    case 836:  /* mips_rsqrt2_s */
    case 837:  /* mips_rsqrt2_d */
    case 838:  /* mips_rsqrt2_ps */
      return TYPE_FRSQRT2;

    case 833:  /* mips_rsqrt1_s */
    case 834:  /* mips_rsqrt1_d */
    case 835:  /* mips_rsqrt1_ps */
      return TYPE_FRSQRT1;

    case 160:  /* *rsqrtsfa */
    case 161:  /* *rsqrtdfa */
    case 162:  /* *rsqrtv2sfa */
    case 163:  /* *rsqrtsfb */
    case 164:  /* *rsqrtdfb */
    case 165:  /* *rsqrtv2sfb */
      return TYPE_FRSQRT;

    case 157:  /* sqrtsf2 */
    case 158:  /* sqrtdf2 */
    case 159:  /* sqrtv2sf2 */
      return TYPE_FSQRT;

    case 197:  /* truncdfsf2 */
    case 261:  /* extendsfdf2 */
    case 262:  /* fix_truncdfsi2_insn */
    case 263:  /* fix_truncdfsi2_macro */
    case 264:  /* fix_truncsfsi2_insn */
    case 265:  /* fix_truncsfsi2_macro */
    case 266:  /* fix_truncdfdi2 */
    case 267:  /* fix_truncsfdi2 */
    case 268:  /* floatsidf2 */
    case 269:  /* floatdidf2 */
    case 270:  /* floatsisf2 */
    case 271:  /* floatdisf2 */
    case 799:  /* vec_concatv2sf */
    case 800:  /* vec_extractv2sfsf */
    case 803:  /* mips_cvt_pw_ps */
    case 804:  /* mips_cvt_ps_pw */
    case 1066:  /* *vec_concatv2si */
    case 1085:  /* iorv2si3 */
    case 1086:  /* iorv4hi3 */
    case 1087:  /* iorv8qi3 */
    case 1105:  /* loongson_pextrh */
    case 1126:  /* ashlv2si3 */
    case 1127:  /* ashlv4hi3 */
    case 1128:  /* ashrv2si3 */
    case 1129:  /* ashrv4hi3 */
    case 1130:  /* lshrv2si3 */
    case 1131:  /* lshrv4hi3 */
    case 1143:  /* loongson_punpckhwd */
    case 1144:  /* loongson_punpckhwd_qi */
    case 1145:  /* loongson_punpckhwd_hi */
    case 1149:  /* loongson_punpcklwd */
    case 1150:  /* *loongson_punpcklwd_qi */
    case 1151:  /* *loongson_punpcklwd_hi */
    case 1152:  /* vec_shl_v2si */
    case 1153:  /* vec_shl_v4hi */
    case 1154:  /* vec_shl_v8qi */
    case 1155:  /* vec_shl_di */
    case 1156:  /* vec_shr_v2si */
    case 1157:  /* vec_shr_v4hi */
    case 1158:  /* vec_shr_v8qi */
    case 1159:  /* vec_shr_di */
      return TYPE_FCVT;

    case 567:  /* sunordered_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 580:  /* sle_df_using_cc */
    case 581:  /* sunordered_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 600:  /* sne_df_using_ccf */
    case 601:  /* sge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 605:  /* sge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 608:  /* sungt_df_using_cc */
    case 609:  /* sge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 616:  /* sungt_df_using_ccf */
    case 807:  /* mips_cabs_cond_s */
    case 808:  /* mips_cabs_cond_d */
    case 809:  /* mips_c_cond_4s */
    case 810:  /* mips_cabs_cond_4s */
    case 811:  /* mips_c_cond_ps */
    case 812:  /* mips_cabs_cond_ps */
    case 813:  /* sunordered_ps */
    case 814:  /* suneq_ps */
    case 815:  /* sunlt_ps */
    case 816:  /* sunle_ps */
    case 817:  /* seq_ps */
    case 818:  /* slt_ps */
    case 819:  /* sle_ps */
    case 820:  /* sordered_ps */
    case 821:  /* sltgt_ps */
    case 822:  /* sne_ps */
    case 823:  /* sge_ps */
    case 824:  /* sgt_ps */
    case 825:  /* sunge_ps */
    case 826:  /* sungt_ps */
      return TYPE_FCMP;

    case 178:  /* negsf2 */
    case 179:  /* negdf2 */
    case 180:  /* negv2sf2 */
      return TYPE_FNEG;

    case 166:  /* abssf2 */
    case 167:  /* absdf2 */
    case 168:  /* absv2sf2 */
    case 806:  /* *mips_abs_ps */
    case 1116:  /* loongson_pmovmskb */
    case 1122:  /* loongson_biadd */
    case 1123:  /* reduc_uplus_v8qi */
      return TYPE_FABS;

    case 842:  /* mips_recip2_s */
    case 843:  /* mips_recip2_d */
    case 844:  /* mips_recip2_ps */
      return TYPE_FRDIV2;

    case 839:  /* mips_recip1_s */
    case 840:  /* mips_recip1_d */
    case 841:  /* mips_recip1_ps */
      return TYPE_FRDIV1;

    case 132:  /* *recipsf3 */
    case 133:  /* *recipdf3 */
    case 134:  /* *recipv2sf3 */
      return TYPE_FRDIV;

    case 129:  /* *divsf3 */
    case 130:  /* *divdf3 */
    case 131:  /* *divv2sf3 */
    case 1106:  /* loongson_pinsrh_0 */
    case 1107:  /* loongson_pinsrh_1 */
    case 1108:  /* loongson_pinsrh_2 */
    case 1109:  /* loongson_pinsrh_3 */
    case 1110:  /* *vec_setv4hi */
    case 1140:  /* loongson_punpckhbh */
    case 1141:  /* loongson_punpckhhw */
    case 1142:  /* loongson_punpckhhw_qi */
    case 1146:  /* loongson_punpcklbh */
    case 1147:  /* loongson_punpcklhw */
    case 1148:  /* *loongson_punpcklhw_qi */
      return TYPE_FDIV;

    case 84:  /* *fmasf4_madd3 */
    case 85:  /* *fmadf4_madd3 */
    case 86:  /* *fmav2sf4_madd3 */
    case 87:  /* *fmasf4_madd4 */
    case 88:  /* *fmadf4_madd4 */
    case 89:  /* *fmav2sf4_madd4 */
    case 90:  /* *fmasf4_maddf */
    case 91:  /* *fmadf4_maddf */
    case 92:  /* *fmav2sf4_maddf */
    case 93:  /* *fmssf4_msub3 */
    case 94:  /* *fmsdf4_msub3 */
    case 95:  /* *fmsv2sf4_msub3 */
    case 96:  /* *fmssf4_msub4 */
    case 97:  /* *fmsdf4_msub4 */
    case 98:  /* *fmsv2sf4_msub4 */
    case 99:  /* *fnmasf4_nmsub3 */
    case 100:  /* *fnmadf4_nmsub3 */
    case 101:  /* *fnmav2sf4_nmsub3 */
    case 102:  /* *fnmasf4_nmsub4 */
    case 103:  /* *fnmadf4_nmsub4 */
    case 104:  /* *fnmav2sf4_nmsub4 */
    case 105:  /* *fnmssf4_nmadd3 */
    case 106:  /* *fnmsdf4_nmadd3 */
    case 107:  /* *fnmsv2sf4_nmadd3 */
    case 108:  /* *fnmssf4_nmadd4 */
    case 109:  /* *fnmsdf4_nmadd4 */
    case 110:  /* *fnmsv2sf4_nmadd4 */
    case 111:  /* *madd4sf */
    case 112:  /* *madd4df */
    case 113:  /* *madd4v2sf */
    case 114:  /* *msub4sf */
    case 115:  /* *msub4df */
    case 116:  /* *msub4v2sf */
    case 117:  /* *nmadd4sf */
    case 118:  /* *nmadd4df */
    case 119:  /* *nmadd4v2sf */
    case 120:  /* *nmsub4sf */
    case 121:  /* *nmsub4df */
    case 122:  /* *nmsub4v2sf */
    case 123:  /* *nmadd4sf_fastmath */
    case 124:  /* *nmadd4df_fastmath */
    case 125:  /* *nmadd4v2sf_fastmath */
    case 126:  /* *nmsub4sf_fastmath */
    case 127:  /* *nmsub4df_fastmath */
    case 128:  /* *nmsub4v2sf_fastmath */
      return TYPE_FMADD;

    case 29:  /* *mulsf3 */
    case 30:  /* *muldf3 */
    case 31:  /* *mulsf3_r4300 */
    case 32:  /* *muldf3_r4300 */
    case 33:  /* mulv2sf3 */
    case 805:  /* mips_mulr_ps */
    case 1067:  /* vec_pack_ssat_v2si */
    case 1068:  /* vec_pack_ssat_v4hi */
    case 1069:  /* vec_pack_usat_v4hi */
    case 1078:  /* loongson_pandn_w */
    case 1079:  /* loongson_pandn_h */
    case 1080:  /* loongson_pandn_b */
    case 1081:  /* loongson_pandn_d */
    case 1082:  /* andv2si3 */
    case 1083:  /* andv4hi3 */
    case 1084:  /* andv8qi3 */
    case 1088:  /* xorv2si3 */
    case 1089:  /* xorv4hi3 */
    case 1090:  /* xorv8qi3 */
    case 1091:  /* *loongson_nor */
    case 1092:  /* *loongson_nor */
    case 1093:  /* *loongson_nor */
    case 1094:  /* one_cmplv2si2 */
    case 1095:  /* one_cmplv4hi2 */
    case 1096:  /* one_cmplv8qi2 */
    case 1111:  /* loongson_pmaddhw */
    case 1117:  /* umulv4hi3_highpart */
    case 1118:  /* smulv4hi3_highpart */
    case 1119:  /* mulv4hi3 */
    case 1120:  /* loongson_pmuluw */
    case 1125:  /* loongson_pshufh */
      return TYPE_FMUL;

    case 10:  /* addsf3 */
    case 11:  /* adddf3 */
    case 12:  /* addv2sf3 */
    case 23:  /* subsf3 */
    case 24:  /* subdf3 */
    case 25:  /* subv2sf3 */
    case 802:  /* mips_addr_ps */
    case 1070:  /* addv2si3 */
    case 1071:  /* addv4hi3 */
    case 1072:  /* addv8qi3 */
    case 1073:  /* loongson_paddd */
    case 1074:  /* ssaddv4hi3 */
    case 1075:  /* ssaddv8qi3 */
    case 1076:  /* usaddv4hi3 */
    case 1077:  /* usaddv8qi3 */
    case 1097:  /* loongson_pavgh */
    case 1098:  /* loongson_pavgb */
    case 1099:  /* loongson_pcmpeqw */
    case 1100:  /* loongson_pcmpeqh */
    case 1101:  /* loongson_pcmpeqb */
    case 1102:  /* loongson_pcmpgtw */
    case 1103:  /* loongson_pcmpgth */
    case 1104:  /* loongson_pcmpgtb */
    case 1112:  /* smaxv4hi3 */
    case 1113:  /* umaxv8qi3 */
    case 1114:  /* sminv4hi3 */
    case 1115:  /* uminv8qi3 */
    case 1121:  /* loongson_pasubub */
    case 1124:  /* loongson_psadbh */
    case 1132:  /* subv2si3 */
    case 1133:  /* subv4hi3 */
    case 1134:  /* subv8qi3 */
    case 1135:  /* loongson_psubd */
    case 1136:  /* sssubv4hi3 */
    case 1137:  /* sssubv8qi3 */
    case 1138:  /* ussubv4hi3 */
    case 1139:  /* ussubv8qi3 */
      return TYPE_FADD;

    case 1167:  /* msa_vec_extract_w_f */
    case 1166:  /* msa_vec_extract_d_f */
    case 798:  /* vec_perm_const_ps */
    case 801:  /* mips_alnv_ps */
      return TYPE_FMOVE;

    case 639:  /* mips_rdpgpr_si */
    case 640:  /* mips_rdpgpr_di */
    case 1057:  /* *movepsisi */
    case 1058:  /* *movepsisf */
    case 1059:  /* *movepsfsi */
    case 1060:  /* *movepsfsf */
      return TYPE_MOVE;

    case 149:  /* divsi3 */
    case 150:  /* udivsi3 */
    case 151:  /* divdi3 */
    case 152:  /* udivdi3 */
    case 153:  /* modsi3 */
    case 154:  /* umodsi3 */
    case 155:  /* moddi3 */
    case 156:  /* umoddi3 */
      return TYPE_IDIV3;

    case 135:  /* *divmodsi4 */
    case 136:  /* *divmoddi4 */
    case 137:  /* divmodsi4_mips16 */
    case 138:  /* divmoddi4_mips16 */
    case 139:  /* *udivmodsi4 */
    case 140:  /* *udivmoddi4 */
    case 141:  /* udivmodsi4_mips16 */
    case 142:  /* udivmoddi4_mips16 */
    case 143:  /* divmodsi4_hilo_di */
    case 144:  /* udivmodsi4_hilo_di */
    case 145:  /* divmodsi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 148:  /* udivmoddi4_hilo_ti */
      return TYPE_IDIV;

    case 42:  /* *mul_acc_si */
    case 43:  /* *mul_acc_si_r3900 */
    case 44:  /* *macc */
    case 45:  /* *msac */
    case 46:  /* *msac_using_macc */
    case 47:  /* *macc2 */
    case 48:  /* *msac2 */
    case 49:  /* *mul_sub_si */
    case 63:  /* msubsidi4 */
    case 64:  /* umsubsidi4 */
    case 81:  /* madsi */
    case 82:  /* maddsidi4 */
    case 83:  /* umaddsidi4 */
    case 1050:  /* ssmaddsqdq4 */
    case 1051:  /* ssmsubsqdq4 */
      return TYPE_IMADD;

    case 34:  /* mulsi3_mul3_nohilo */
    case 35:  /* muldi3_mul3_nohilo */
    case 60:  /* mulsidi3_64bit_r6dmul */
    case 65:  /* smulsi3_highpart_r6 */
    case 66:  /* umulsi3_highpart_r6 */
    case 73:  /* smuldi3_highpart_r6 */
    case 74:  /* umuldi3_highpart_r6 */
      return TYPE_IMUL3NC;

    case 59:  /* mulsidi3_64bit_dmul */
    case 69:  /* smulsi3_highpart_mulhi_internal */
    case 70:  /* umulsi3_highpart_mulhi_internal */
    case 71:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 72:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 883:  /* mips_muleu_s_ph_qbl */
    case 884:  /* mips_muleu_s_ph_qbr */
    case 885:  /* mips_mulq_rs_ph */
    case 886:  /* mips_muleq_s_w_phl */
    case 887:  /* mips_muleq_s_w_phr */
    case 964:  /* mulv2hi3 */
    case 965:  /* mips_mul_s_ph */
    case 966:  /* mips_mulq_rs_w */
    case 967:  /* mips_mulq_s_ph */
    case 968:  /* mips_mulq_s_w */
    case 1047:  /* ssmulv2hq3 */
    case 1048:  /* ssmulhq3 */
    case 1049:  /* ssmulsq3 */
      return TYPE_IMUL3;

    case 38:  /* mulsi3_internal */
    case 39:  /* muldi3_internal */
    case 40:  /* mulsi3_r4000 */
    case 41:  /* muldi3_r4000 */
    case 51:  /* mulsidi3_32bit */
    case 52:  /* umulsidi3_32bit */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 55:  /* mulsidi3_64bit */
    case 56:  /* umulsidi3_64bit */
    case 57:  /* mulsidi3_64bit_hilo */
    case 58:  /* umulsidi3_64bit_hilo */
    case 61:  /* *muls_di */
    case 62:  /* *mulsu_di */
    case 67:  /* smulsi3_highpart_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 77:  /* mulditi3_internal */
    case 78:  /* umulditi3_internal */
    case 79:  /* mulditi3_r4000 */
    case 80:  /* umulditi3_r4000 */
      return TYPE_IMUL;

    case 5:  /* trap */
    case 6:  /* *conditional_trap_regsi */
    case 7:  /* *conditional_trap_regdi */
    case 8:  /* *conditional_trapsi */
    case 9:  /* *conditional_trapdi */
    case 635:  /* mips_eret */
    case 636:  /* mips_deret */
    case 637:  /* mips_di */
    case 638:  /* mips_ehb */
    case 1056:  /* jraddiusp */
      return TYPE_TRAP;

    case 173:  /* popcountsi2 */
    case 174:  /* popcountdi2 */
    case 175:  /* *popcountdi2_trunc */
      return TYPE_POP;

    case 169:  /* clzsi2 */
    case 170:  /* clzdi2 */
    case 171:  /* ctzsi2 */
    case 172:  /* ctzdi2 */
      return TYPE_CLZ;

    case 491:  /* *seq_zero_sisi */
    case 492:  /* *seq_zero_disi */
    case 493:  /* *seq_zero_sidi */
    case 494:  /* *seq_zero_didi */
    case 495:  /* *seq_zero_sisi_mips16 */
    case 496:  /* *seq_zero_disi_mips16 */
    case 497:  /* *seq_zero_sidi_mips16 */
    case 498:  /* *seq_zero_didi_mips16 */
    case 499:  /* *seq_sisi_seq */
    case 500:  /* *seq_disi_seq */
    case 501:  /* *seq_sidi_seq */
    case 502:  /* *seq_didi_seq */
    case 503:  /* *sne_zero_sisi */
    case 504:  /* *sne_zero_disi */
    case 505:  /* *sne_zero_sidi */
    case 506:  /* *sne_zero_didi */
    case 507:  /* *sne_sisi_sne */
    case 508:  /* *sne_disi_sne */
    case 509:  /* *sne_sidi_sne */
    case 510:  /* *sne_didi_sne */
    case 511:  /* *sgt_sisi */
    case 512:  /* *sgtu_sisi */
    case 513:  /* *sgt_disi */
    case 514:  /* *sgtu_disi */
    case 515:  /* *sgt_sidi */
    case 516:  /* *sgtu_sidi */
    case 517:  /* *sgt_didi */
    case 518:  /* *sgtu_didi */
    case 519:  /* *sgt_sisi_mips16 */
    case 520:  /* *sgtu_sisi_mips16 */
    case 521:  /* *sgt_disi_mips16 */
    case 522:  /* *sgtu_disi_mips16 */
    case 523:  /* *sgt_sidi_mips16 */
    case 524:  /* *sgtu_sidi_mips16 */
    case 525:  /* *sgt_didi_mips16 */
    case 526:  /* *sgtu_didi_mips16 */
    case 527:  /* *sge_sisi */
    case 528:  /* *sgeu_sisi */
    case 529:  /* *sge_disi */
    case 530:  /* *sgeu_disi */
    case 531:  /* *sge_sidi */
    case 532:  /* *sgeu_sidi */
    case 533:  /* *sge_didi */
    case 534:  /* *sgeu_didi */
    case 535:  /* *slt_sisi */
    case 536:  /* *sltu_sisi */
    case 537:  /* *slt_disi */
    case 538:  /* *sltu_disi */
    case 539:  /* *slt_sidi */
    case 540:  /* *sltu_sidi */
    case 541:  /* *slt_didi */
    case 542:  /* *sltu_didi */
    case 543:  /* *slt_sisi_mips16 */
    case 544:  /* *sltu_sisi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 547:  /* *slt_sidi_mips16 */
    case 548:  /* *sltu_sidi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 550:  /* *sltu_didi_mips16 */
    case 551:  /* *sle_sisi */
    case 552:  /* *sleu_sisi */
    case 553:  /* *sle_disi */
    case 554:  /* *sleu_disi */
    case 555:  /* *sle_sidi */
    case 556:  /* *sleu_sidi */
    case 557:  /* *sle_didi */
    case 558:  /* *sleu_didi */
    case 559:  /* *sle_sisi_mips16 */
    case 560:  /* *sleu_sisi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 563:  /* *sle_sidi_mips16 */
    case 564:  /* *sleu_sidi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 566:  /* *sleu_didi_mips16 */
      return TYPE_SLT;

    case 201:  /* *ashr_truncqi */
    case 202:  /* *ashr_trunchi */
    case 203:  /* *ashr_truncsi */
    case 204:  /* *lshr32_truncqi */
    case 205:  /* *lshr32_trunchi */
    case 206:  /* *lshr32_truncsi */
    case 279:  /* *cinssi */
    case 280:  /* *cinsdi */
    case 441:  /* *ashlsi3 */
    case 442:  /* *ashrsi3 */
    case 443:  /* *lshrsi3 */
    case 444:  /* *ashldi3 */
    case 445:  /* *ashrdi3 */
    case 446:  /* *lshrdi3 */
    case 447:  /* *ashlsi3_extend */
    case 448:  /* *ashrsi3_extend */
    case 449:  /* *lshrsi3_extend */
    case 450:  /* *ashlsi3_mips16 */
    case 451:  /* *ashrsi3_mips16 */
    case 452:  /* *lshrsi3_mips16 */
    case 455:  /* *ashldi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 457:  /* *lshrdi3_mips16 */
    case 459:  /* rotrsi3 */
    case 460:  /* rotrdi3 */
    case 461:  /* bswaphi2 */
    case 464:  /* wsbh */
    case 465:  /* dsbh */
    case 466:  /* dshd */
      return TYPE_SHIFT;

    case 234:  /* *zero_extendhi_truncqi */
    case 233:  /* *zero_extenddi_trunchi */
    case 232:  /* *zero_extendsi_trunchi */
    case 231:  /* *zero_extenddi_truncqi */
    case 230:  /* *zero_extendsi_truncqi */
    case 223:  /* *zero_extendhidi2_mips16e */
    case 222:  /* *zero_extendhisi2_mips16e */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 220:  /* *zero_extendqisi2_mips16e */
    case 196:  /* *nordi3 */
    case 195:  /* *norsi3 */
    case 194:  /* *xordi3_mips16 */
    case 193:  /* *xorsi3_mips16 */
    case 192:  /* *xordi3 */
    case 191:  /* *xorsi3 */
    case 190:  /* *iordi3_mips16 */
    case 189:  /* *iorsi3_mips16 */
    case 188:  /* *iordi3 */
    case 187:  /* *iorsi3 */
    case 182:  /* one_cmpldi2 */
    case 181:  /* one_cmplsi2 */
      return TYPE_LOGICAL;

    case 306:  /* *lowdi_mips16 */
    case 305:  /* *lowsi_mips16 */
    case 304:  /* *lowdi */
    case 303:  /* *lowsi */
    case 177:  /* negdi2 */
    case 176:  /* negsi2 */
    case 28:  /* *subsi3_extended */
    case 27:  /* subdi3 */
    case 26:  /* subsi3 */
    case 22:  /* *baddu_didi */
    case 21:  /* *baddu_disi */
    case 20:  /* *baddu_si_el */
    case 19:  /* *baddu_si_eb */
    case 18:  /* *addsi3_extended_mips16 */
    case 17:  /* *addsi3_extended */
    case 16:  /* *adddi3_mips16 */
    case 15:  /* *addsi3_mips16 */
    case 14:  /* *adddi3 */
    case 13:  /* *addsi3 */
    case 207:  /* *ashr_truncqi_exts */
    case 208:  /* *lshr_truncqi_exts */
    case 209:  /* *ashr_trunchi_exts */
    case 210:  /* *lshr_trunchi_exts */
    case 211:  /* *ashr_truncsi_exts */
    case 212:  /* *lshr_truncsi_exts */
    case 213:  /* *mips.md:3524 */
    case 256:  /* *extendsi_truncateqi_exts */
    case 257:  /* *extenddi_truncateqi_exts */
    case 258:  /* *extendsi_truncatehi_exts */
    case 259:  /* *extenddi_truncatehi_exts */
    case 260:  /* *extendhi_truncateqi_exts */
    case 272:  /* *extvsi */
    case 273:  /* *extvdi */
    case 274:  /* *extzvsi */
    case 275:  /* *extzvdi */
    case 276:  /* *extzv_truncsi_exts */
    case 277:  /* *insvsi */
    case 278:  /* *insvdi */
    case 453:  /* lsa */
    case 454:  /* dlsa */
    case 703:  /* *mips16e_save_restore */
    case 995:  /* addqq3 */
    case 996:  /* addhq3 */
    case 997:  /* addsq3 */
    case 998:  /* adddq3 */
    case 999:  /* adduqq3 */
    case 1000:  /* adduhq3 */
    case 1001:  /* addusq3 */
    case 1002:  /* addudq3 */
    case 1003:  /* addha3 */
    case 1004:  /* addsa3 */
    case 1005:  /* addda3 */
    case 1006:  /* adduha3 */
    case 1007:  /* addusa3 */
    case 1008:  /* adduda3 */
    case 1009:  /* usadduqq3 */
    case 1010:  /* usadduhq3 */
    case 1011:  /* usadduha3 */
    case 1012:  /* usaddv4uqq3 */
    case 1013:  /* usaddv2uhq3 */
    case 1014:  /* usaddv2uha3 */
    case 1015:  /* ssaddhq3 */
    case 1016:  /* ssaddsq3 */
    case 1017:  /* ssaddha3 */
    case 1018:  /* ssaddsa3 */
    case 1019:  /* ssaddv2hq3 */
    case 1020:  /* ssaddv2ha3 */
    case 1021:  /* subqq3 */
    case 1022:  /* subhq3 */
    case 1023:  /* subsq3 */
    case 1024:  /* subdq3 */
    case 1025:  /* subuqq3 */
    case 1026:  /* subuhq3 */
    case 1027:  /* subusq3 */
    case 1028:  /* subudq3 */
    case 1029:  /* subha3 */
    case 1030:  /* subsa3 */
    case 1031:  /* subda3 */
    case 1032:  /* subuha3 */
    case 1033:  /* subusa3 */
    case 1034:  /* subuda3 */
    case 1035:  /* ussubuqq3 */
    case 1036:  /* ussubuhq3 */
    case 1037:  /* ussubuha3 */
    case 1038:  /* ussubv4uqq3 */
    case 1039:  /* ussubv2uhq3 */
    case 1040:  /* ussubv2uha3 */
    case 1041:  /* sssubhq3 */
    case 1042:  /* sssubsq3 */
    case 1043:  /* sssubha3 */
    case 1044:  /* sssubsa3 */
    case 1045:  /* sssubv2hq3 */
    case 1046:  /* sssubv2ha3 */
      return TYPE_ARITH;

    case 377:  /* mfhisi_di */
    case 378:  /* mfhisi_ti */
    case 379:  /* mfhidi_ti */
      return TYPE_MFHI;

    case 380:  /* mthisi_di */
    case 381:  /* mthisi_ti */
    case 382:  /* mthidi_ti */
      return TYPE_MTHI;

    case 417:  /* mfhc1tf */
    case 416:  /* mfhc1v8qi */
    case 415:  /* mfhc1v4hi */
    case 414:  /* mfhc1v2si */
    case 413:  /* mfhc1v2sf */
    case 412:  /* mfhc1di */
    case 411:  /* mfhc1df */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1162:  /* vec_loongson_extract_lo_v8qi */
      return TYPE_MFC;

    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
    case 410:  /* mthc1tf */
    case 409:  /* mthc1v8qi */
    case 408:  /* mthc1v4hi */
    case 407:  /* mthc1v2si */
    case 406:  /* mthc1v2sf */
    case 405:  /* mthc1di */
    case 404:  /* mthc1df */
      return TYPE_MTC;

    case 671:  /* *movsi_on_si */
    case 672:  /* *movdi_on_si */
    case 673:  /* *movsi_on_di */
    case 674:  /* *movdi_on_di */
    case 675:  /* *movsi_on_cc */
    case 676:  /* *movdi_on_cc */
    case 677:  /* *movsi_on_si_ne */
    case 678:  /* *movdi_on_si_ne */
    case 679:  /* *movsi_on_di_ne */
    case 680:  /* *movdi_on_di_ne */
    case 681:  /* *movsf_on_si */
    case 682:  /* *movdf_on_si */
    case 683:  /* *movsf_on_di */
    case 684:  /* *movdf_on_di */
    case 685:  /* *movsf_on_cc */
    case 686:  /* *movdf_on_cc */
    case 687:  /* *seleqsi_using_si */
    case 688:  /* *selnesi_using_si */
    case 689:  /* *seleqdi_using_si */
    case 690:  /* *selnedi_using_si */
    case 691:  /* *seleqsi_using_di */
    case 692:  /* *selnesi_using_di */
    case 693:  /* *seleqdi_using_di */
    case 694:  /* *selnedi_using_di */
    case 695:  /* *selsf */
    case 696:  /* *seldf */
    case 795:  /* *movcc_v2sf_si */
    case 796:  /* *movcc_v2sf_di */
    case 797:  /* mips_cond_move_tf_ps */
      return TYPE_CONDMOVE;

    case 666:  /* *prefetch_indexed_si */
    case 667:  /* *prefetch_indexed_di */
      return TYPE_PREFETCHX;

    case 665:  /* prefetch */
      return TYPE_PREFETCH;

    case 337:  /* *swxc1_si */
    case 338:  /* *sdxc1_si */
    case 339:  /* *sdxc1_si */
    case 340:  /* *swxc1_di */
    case 341:  /* *sdxc1_di */
    case 342:  /* *sdxc1_di */
      return TYPE_FPIDXSTORE;

    case 308:  /* *movdi_ra */
    case 307:  /* *movsi_ra */
    case 288:  /* mov_sdr */
    case 287:  /* mov_swr */
    case 286:  /* mov_sdl */
    case 285:  /* mov_swl */
    case 429:  /* cprestore_si */
    case 430:  /* cprestore_di */
    case 1055:  /* *swp */
      return TYPE_STORE;

    case 331:  /* *lwxc1_si */
    case 332:  /* *ldxc1_si */
    case 333:  /* *ldxc1_si */
    case 334:  /* *lwxc1_di */
    case 335:  /* *ldxc1_di */
    case 336:  /* *ldxc1_di */
      return TYPE_FPIDXLOAD;

    case 723:  /* *join2_loadhi */
    case 722:  /* *join2_loadhi */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
    case 343:  /* *lwxs */
    case 344:  /* *lwxs */
    case 345:  /* *lwxs */
    case 346:  /* *lwxs */
    case 347:  /* *lwxs */
    case 348:  /* *lwxs */
    case 349:  /* *lwxs */
    case 350:  /* *lwxs */
    case 351:  /* *lwxs */
    case 352:  /* *lwxs */
    case 353:  /* *lwxs */
    case 354:  /* *lwxs */
    case 355:  /* *lwxs */
    case 356:  /* *lwxs */
    case 357:  /* *lwxs */
    case 358:  /* *lwxs */
    case 359:  /* *lwxs */
    case 360:  /* *lwxs */
    case 458:  /* *mips.md:5842 */
    case 927:  /* mips_lbx_extsi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 934:  /* mips_lhux_extdi_si */
    case 935:  /* mips_lbx_extsi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 942:  /* mips_lhux_extdi_di */
    case 943:  /* mips_lwx_si */
    case 944:  /* mips_ldx_si */
    case 945:  /* mips_lwx_di */
    case 946:  /* mips_ldx_di */
    case 947:  /* *mips_lwx_si_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 950:  /* *mips_lwux_di_ext */
    case 1054:  /* *lwp */
      return TYPE_LOAD;

    case 664:  /* call_value_multiple_split */
    case 663:  /* call_value_multiple_internal */
    case 662:  /* call_value_direct_split */
    case 661:  /* call_value_internal_direct */
    case 660:  /* call_value_split */
    case 659:  /* call_value_internal */
    case 658:  /* call_direct_split */
    case 657:  /* call_internal_direct */
    case 656:  /* call_split */
    case 655:  /* call_internal */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
    case 710:  /* *tls_get_tp_mips16_call_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 717:  /* mips_set_fcsr_mips16_di */
      return TYPE_CALL;

    case 620:  /* indirect_jump_si */
    case 621:  /* indirect_jump_di */
    case 624:  /* tablejump_si */
    case 625:  /* tablejump_di */
    case 631:  /* *return */
    case 632:  /* *simple_return */
    case 633:  /* return_internal */
    case 634:  /* simple_return_internal */
      return TYPE_JUMP;

    case 467:  /* *branch_fp_cc */
    case 468:  /* *branch_fp_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 470:  /* *branch_fp_inverted_ccf */
    case 471:  /* *branch_ordersi */
    case 472:  /* *branch_orderdi */
    case 473:  /* *branch_ordersi_inverted */
    case 474:  /* *branch_orderdi_inverted */
    case 475:  /* *branch_equalitysi */
    case 476:  /* *branch_equalitydi */
    case 477:  /* *branch_equalitysi_inverted */
    case 478:  /* *branch_equalitydi_inverted */
    case 479:  /* *branch_equalitysi_mips16 */
    case 480:  /* *branch_equalitydi_mips16 */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 483:  /* *branch_bit0si */
    case 484:  /* *branch_bit1si */
    case 485:  /* *branch_bit0di */
    case 486:  /* *branch_bit1di */
    case 487:  /* *branch_bit0si_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 490:  /* *branch_bit1di_inverted */
    case 617:  /* *jump_absolute */
    case 618:  /* *jump_pic */
    case 619:  /* *jump_mips16 */
    case 827:  /* bc1any4t */
    case 828:  /* bc1any4f */
    case 829:  /* bc1any2t */
    case 830:  /* bc1any2f */
    case 831:  /* *branch_upper_lower */
    case 832:  /* *branch_upper_lower_inverted */
    case 951:  /* mips_bposge */
      return TYPE_BRANCH;

    case 724:  /* *memory_barrier */
    case 715:  /* *mips_set_fcsr */
    case 712:  /* *mips_get_fcsr */
    case 702:  /* align */
    case 701:  /* consttable_float */
    case 700:  /* consttable_int */
    case 699:  /* consttable_tls_reloc */
    case 698:  /* consttable_end */
    case 697:  /* consttable */
    case 670:  /* insn_pseudo */
    case 643:  /* eh_set_lr_di */
    case 642:  /* eh_set_lr_si */
    case 627:  /* casesi_internal_mips16_di */
    case 626:  /* casesi_internal_mips16_si */
    case 463:  /* bswapdi2 */
    case 462:  /* bswapsi2 */
    case 440:  /* r10k_cache_barrier */
    case 439:  /* mips_cache */
    case 438:  /* clear_hazard_di */
    case 437:  /* clear_hazard_si */
    case 436:  /* rdhwr_synci_step_di */
    case 435:  /* rdhwr_synci_step_si */
    case 434:  /* synci */
    case 433:  /* sync */
    case 294:  /* *xgot_hidi */
    case 293:  /* *xgot_hisi */
    case 292:  /* *unshifted_high */
    case 291:  /* *unshifted_high */
    case 290:  /* *lea64 */
    case 289:  /* *lea_high64 */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 1:  /* ls2_alu1_turn_enabled_insn */
    case 629:  /* probe_stack_range_si */
    case 630:  /* probe_stack_range_di */
    case 704:  /* tls_get_tp_si */
    case 705:  /* tls_get_tp_di */
    case 706:  /* *tls_get_tp_si_split */
    case 707:  /* *tls_get_tp_di_split */
      return TYPE_UNKNOWN;

    default:
      return TYPE_SIMD_INT_ARITH;

    }
}

enum attr_vr4130_class
get_attr_vr4130_class (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x1fULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 721:  /* *join2_load_storedf */
    case 720:  /* *join2_load_storesf */
    case 719:  /* *join2_load_storesi */
    case 718:  /* *join2_load_storehi */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x5ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 374:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x6ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 372:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xcULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1ULL << which_alternative) & 0xfULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 375:  /* *movtf_mips16 */
    case 371:  /* *movdf_mips16 */
    case 368:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x7ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 376:  /* *movv2sf */
    case 369:  /* *movdf_hardfloat */
    case 366:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0xefULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 363:  /* *movqi_internal */
    case 361:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x78ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7e0ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1ULL << which_alternative) & 0x60000ULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 312:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1c0ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1ULL << which_alternative) & 0x1ffULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 311:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x18ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1ULL << which_alternative) & 0x600ULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 373:  /* *movti_mips16 */
    case 364:  /* *movqi_mips16 */
    case 362:  /* *movhi_mips16 */
    case 310:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x60ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 309:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xcULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1ULL << which_alternative) & 0x70ULL))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 235:  /* extendsidi2 */
    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 370:  /* *movdf_softfloat */
    case 367:  /* *movsf_softfloat */
    case 250:  /* *extendqihi2_seb */
    case 249:  /* *extendqihi2 */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
    case 228:  /* *zero_extendqihi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 214:  /* *zero_extendsidi2 */
    case 200:  /* truncdisi2 */
    case 199:  /* truncdihi2 */
    case 198:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_STORE))
        {
	  return VR4130_CLASS_MEM;
        }
      else if ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO) || (cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD) || (cached_type == TYPE_IDIV))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 1055:  /* *swp */
    case 1054:  /* *lwp */
    case 950:  /* *mips_lwux_di_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 947:  /* *mips_lwx_si_ext */
    case 946:  /* mips_ldx_di */
    case 945:  /* mips_lwx_di */
    case 944:  /* mips_ldx_si */
    case 943:  /* mips_lwx_si */
    case 942:  /* mips_lhux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 935:  /* mips_lbx_extsi_di */
    case 934:  /* mips_lhux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 927:  /* mips_lbx_extsi_si */
    case 723:  /* *join2_loadhi */
    case 722:  /* *join2_loadhi */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 458:  /* *mips.md:5842 */
    case 430:  /* cprestore_di */
    case 429:  /* cprestore_si */
    case 360:  /* *lwxs */
    case 359:  /* *lwxs */
    case 358:  /* *lwxs */
    case 357:  /* *lwxs */
    case 356:  /* *lwxs */
    case 355:  /* *lwxs */
    case 354:  /* *lwxs */
    case 353:  /* *lwxs */
    case 352:  /* *lwxs */
    case 351:  /* *lwxs */
    case 350:  /* *lwxs */
    case 349:  /* *lwxs */
    case 348:  /* *lwxs */
    case 347:  /* *lwxs */
    case 346:  /* *lwxs */
    case 345:  /* *lwxs */
    case 344:  /* *lwxs */
    case 343:  /* *lwxs */
    case 308:  /* *movdi_ra */
    case 307:  /* *movsi_ra */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 288:  /* mov_sdr */
    case 287:  /* mov_swr */
    case 286:  /* mov_sdl */
    case 285:  /* mov_swl */
    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
      return VR4130_CLASS_MEM;

    case 1051:  /* ssmsubsqdq4 */
    case 1050:  /* ssmaddsqdq4 */
    case 1049:  /* ssmulsq3 */
    case 1048:  /* ssmulhq3 */
    case 1047:  /* ssmulv2hq3 */
    case 968:  /* mips_mulq_s_w */
    case 967:  /* mips_mulq_s_ph */
    case 966:  /* mips_mulq_rs_w */
    case 965:  /* mips_mul_s_ph */
    case 964:  /* mulv2hi3 */
    case 887:  /* mips_muleq_s_w_phr */
    case 886:  /* mips_muleq_s_w_phl */
    case 885:  /* mips_mulq_rs_ph */
    case 884:  /* mips_muleu_s_ph_qbr */
    case 883:  /* mips_muleu_s_ph_qbl */
    case 382:  /* mthidi_ti */
    case 381:  /* mthisi_ti */
    case 380:  /* mthisi_di */
    case 379:  /* mfhidi_ti */
    case 378:  /* mfhisi_ti */
    case 377:  /* mfhisi_di */
    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 145:  /* divmodsi4_hilo_ti */
    case 144:  /* udivmodsi4_hilo_di */
    case 143:  /* divmodsi4_hilo_di */
    case 142:  /* udivmoddi4_mips16 */
    case 141:  /* udivmodsi4_mips16 */
    case 140:  /* *udivmoddi4 */
    case 139:  /* *udivmodsi4 */
    case 138:  /* divmoddi4_mips16 */
    case 137:  /* divmodsi4_mips16 */
    case 136:  /* *divmoddi4 */
    case 135:  /* *divmodsi4 */
    case 83:  /* umaddsidi4 */
    case 82:  /* maddsidi4 */
    case 81:  /* madsi */
    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 72:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 71:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 70:  /* umulsi3_highpart_mulhi_internal */
    case 69:  /* smulsi3_highpart_mulhi_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 67:  /* smulsi3_highpart_internal */
    case 64:  /* umsubsidi4 */
    case 63:  /* msubsidi4 */
    case 62:  /* *mulsu_di */
    case 61:  /* *muls_di */
    case 59:  /* mulsidi3_64bit_dmul */
    case 58:  /* umulsidi3_64bit_hilo */
    case 57:  /* mulsidi3_64bit_hilo */
    case 56:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_32bit_r4000 */
    case 52:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit */
    case 50:  /* *muls */
    case 49:  /* *mul_sub_si */
    case 48:  /* *msac2 */
    case 47:  /* *macc2 */
    case 46:  /* *msac_using_macc */
    case 45:  /* *msac */
    case 44:  /* *macc */
    case 43:  /* *mul_acc_si_r3900 */
    case 42:  /* *mul_acc_si */
    case 41:  /* muldi3_r4000 */
    case 40:  /* mulsi3_r4000 */
    case 39:  /* muldi3_internal */
    case 38:  /* mulsi3_internal */
    case 37:  /* muldi3_mul3 */
    case 36:  /* mulsi3_mul3 */
      return VR4130_CLASS_MUL;

    default:
      return VR4130_CLASS_ALU;

    }
}

int
eligible_for_delay (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  if (num_delay_slots (delay_insn) == 0)
    return 0;
  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 717:  /* mips_set_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 710:  /* *tls_get_tp_mips16_call_si */
      slot += 4 * 1;
      break;
      break;

    case 662:  /* call_value_direct_split */
    case 658:  /* call_direct_split */
      extract_constrain_insn_cached (insn);
      if (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 661:  /* call_value_internal_direct */
    case 657:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (((
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO))) && (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 663:  /* call_value_multiple_internal */
    case 659:  /* call_value_internal */
    case 655:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 664:  /* call_value_multiple_split */
    case 660:  /* call_value_split */
    case 656:  /* call_split */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1682:  /* msa_bnz_b */
    case 1681:  /* msa_bz_b */
    case 1680:  /* msa_bnz_h */
    case 1679:  /* msa_bz_h */
    case 1678:  /* msa_bnz_w */
    case 1677:  /* msa_bz_w */
    case 1676:  /* msa_bnz_d */
    case 1675:  /* msa_bz_d */
    case 1674:  /* msa_bnz_w_f */
    case 1673:  /* msa_bz_w_f */
    case 1672:  /* msa_bnz_d_f */
    case 1671:  /* msa_bz_d_f */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
      extract_constrain_insn_cached (insn);
      if (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  slot += 2 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 619:  /* *jump_mips16 */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)))
        {
	  slot += 4 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_JUMP) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)))
        {
	  slot += 3 * 1;
      break;
        }
      else if (((get_attr_type (insn) == TYPE_BRANCH) || (get_attr_type (insn) == TYPE_SIMD_BRANCH)) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_NO))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_YES))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 4:
      switch (recog_memoized (insn))
	{
        case 826:  /* sungt_ps */
        case 825:  /* sunge_ps */
        case 824:  /* sgt_ps */
        case 823:  /* sge_ps */
        case 822:  /* sne_ps */
        case 821:  /* sltgt_ps */
        case 820:  /* sordered_ps */
        case 819:  /* sle_ps */
        case 818:  /* slt_ps */
        case 817:  /* seq_ps */
        case 816:  /* sunle_ps */
        case 815:  /* sunlt_ps */
        case 814:  /* suneq_ps */
        case 813:  /* sunordered_ps */
        case 812:  /* mips_cabs_cond_ps */
        case 811:  /* mips_c_cond_ps */
        case 810:  /* mips_cabs_cond_4s */
        case 809:  /* mips_c_cond_4s */
        case 808:  /* mips_cabs_cond_d */
        case 807:  /* mips_cabs_cond_s */
        case 616:  /* sungt_df_using_ccf */
        case 615:  /* sunge_df_using_ccf */
        case 614:  /* sgt_df_using_ccf */
        case 613:  /* sge_df_using_ccf */
        case 612:  /* sungt_sf_using_ccf */
        case 611:  /* sunge_sf_using_ccf */
        case 610:  /* sgt_sf_using_ccf */
        case 609:  /* sge_sf_using_ccf */
        case 608:  /* sungt_df_using_cc */
        case 607:  /* sunge_df_using_cc */
        case 606:  /* sgt_df_using_cc */
        case 605:  /* sge_df_using_cc */
        case 604:  /* sungt_sf_using_cc */
        case 603:  /* sunge_sf_using_cc */
        case 602:  /* sgt_sf_using_cc */
        case 601:  /* sge_sf_using_cc */
        case 600:  /* sne_df_using_ccf */
        case 599:  /* sltgt_df_using_ccf */
        case 598:  /* sordered_df_using_ccf */
        case 597:  /* sle_df_using_ccf */
        case 596:  /* slt_df_using_ccf */
        case 595:  /* seq_df_using_ccf */
        case 594:  /* sunle_df_using_ccf */
        case 593:  /* sunlt_df_using_ccf */
        case 592:  /* suneq_df_using_ccf */
        case 591:  /* sunordered_df_using_ccf */
        case 590:  /* sne_sf_using_ccf */
        case 589:  /* sltgt_sf_using_ccf */
        case 588:  /* sordered_sf_using_ccf */
        case 587:  /* sle_sf_using_ccf */
        case 586:  /* slt_sf_using_ccf */
        case 585:  /* seq_sf_using_ccf */
        case 584:  /* sunle_sf_using_ccf */
        case 583:  /* sunlt_sf_using_ccf */
        case 582:  /* suneq_sf_using_ccf */
        case 581:  /* sunordered_sf_using_ccf */
        case 580:  /* sle_df_using_cc */
        case 579:  /* slt_df_using_cc */
        case 578:  /* seq_df_using_cc */
        case 577:  /* sunle_df_using_cc */
        case 576:  /* sunlt_df_using_cc */
        case 575:  /* suneq_df_using_cc */
        case 574:  /* sunordered_df_using_cc */
        case 573:  /* sle_sf_using_cc */
        case 572:  /* slt_sf_using_cc */
        case 571:  /* seq_sf_using_cc */
        case 570:  /* sunle_sf_using_cc */
        case 569:  /* sunlt_sf_using_cc */
        case 568:  /* suneq_sf_using_cc */
        case 567:  /* sunordered_sf_using_cc */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 1694:  /* msa_bnz_v_b */
        case 1693:  /* msa_bz_v_b */
        case 1692:  /* msa_bnz_v_h */
        case 1691:  /* msa_bz_v_h */
        case 1690:  /* msa_bnz_v_w */
        case 1689:  /* msa_bz_v_w */
        case 1688:  /* msa_bnz_v_d */
        case 1687:  /* msa_bz_v_d */
        case 1686:  /* msa_bnz_v_w_f */
        case 1685:  /* msa_bz_v_w_f */
        case 1684:  /* msa_bnz_v_d_f */
        case 1683:  /* msa_bz_v_d_f */
        case 1682:  /* msa_bnz_b */
        case 1681:  /* msa_bz_b */
        case 1680:  /* msa_bnz_h */
        case 1679:  /* msa_bz_h */
        case 1678:  /* msa_bnz_w */
        case 1677:  /* msa_bz_w */
        case 1676:  /* msa_bnz_d */
        case 1675:  /* msa_bz_d */
        case 1674:  /* msa_bnz_w_f */
        case 1673:  /* msa_bz_w_f */
        case 1672:  /* msa_bnz_d_f */
        case 1671:  /* msa_bz_d_f */
        case 1060:  /* *movepsfsf */
        case 1059:  /* *movepsfsi */
        case 1058:  /* *movepsisf */
        case 1057:  /* *movepsisi */
        case 1056:  /* jraddiusp */
        case 1055:  /* *swp */
        case 1054:  /* *lwp */
        case 1053:  /* *load_word_multiple */
        case 1052:  /* *store_word_multiple */
        case 951:  /* mips_bposge */
        case 832:  /* *branch_upper_lower_inverted */
        case 831:  /* *branch_upper_lower */
        case 830:  /* bc1any2f */
        case 829:  /* bc1any2t */
        case 828:  /* bc1any4f */
        case 827:  /* bc1any4t */
        case 717:  /* mips_set_fcsr_mips16_di */
        case 716:  /* mips_set_fcsr_mips16_si */
        case 714:  /* mips_get_fcsr_mips16_di */
        case 713:  /* mips_get_fcsr_mips16_si */
        case 711:  /* *tls_get_tp_mips16_call_di */
        case 710:  /* *tls_get_tp_mips16_call_si */
        case 707:  /* *tls_get_tp_di_split */
        case 706:  /* *tls_get_tp_si_split */
        case 664:  /* call_value_multiple_split */
        case 663:  /* call_value_multiple_internal */
        case 662:  /* call_value_direct_split */
        case 661:  /* call_value_internal_direct */
        case 660:  /* call_value_split */
        case 659:  /* call_value_internal */
        case 658:  /* call_direct_split */
        case 657:  /* call_internal_direct */
        case 656:  /* call_split */
        case 655:  /* call_internal */
        case 654:  /* sibcall_value_multiple_internal */
        case 653:  /* sibcall_value_internal */
        case 652:  /* sibcall_internal */
        case 634:  /* simple_return_internal */
        case 633:  /* return_internal */
        case 632:  /* *simple_return */
        case 631:  /* *return */
        case 630:  /* probe_stack_range_di */
        case 629:  /* probe_stack_range_si */
        case 625:  /* tablejump_di */
        case 624:  /* tablejump_si */
        case 621:  /* indirect_jump_di */
        case 620:  /* indirect_jump_si */
        case 619:  /* *jump_mips16 */
        case 618:  /* *jump_pic */
        case 617:  /* *jump_absolute */
        case 490:  /* *branch_bit1di_inverted */
        case 489:  /* *branch_bit0di_inverted */
        case 488:  /* *branch_bit1si_inverted */
        case 487:  /* *branch_bit0si_inverted */
        case 486:  /* *branch_bit1di */
        case 485:  /* *branch_bit0di */
        case 484:  /* *branch_bit1si */
        case 483:  /* *branch_bit0si */
        case 482:  /* *branch_equalitydi_mips16_inverted */
        case 481:  /* *branch_equalitysi_mips16_inverted */
        case 480:  /* *branch_equalitydi_mips16 */
        case 479:  /* *branch_equalitysi_mips16 */
        case 478:  /* *branch_equalitydi_inverted */
        case 477:  /* *branch_equalitysi_inverted */
        case 476:  /* *branch_equalitydi */
        case 475:  /* *branch_equalitysi */
        case 474:  /* *branch_orderdi_inverted */
        case 473:  /* *branch_ordersi_inverted */
        case 472:  /* *branch_orderdi */
        case 471:  /* *branch_ordersi */
        case 470:  /* *branch_fp_inverted_ccf */
        case 469:  /* *branch_fp_inverted_cc */
        case 468:  /* *branch_fp_ccf */
        case 467:  /* *branch_fp_cc */
        case 440:  /* r10k_cache_barrier */
	  return 0;

        case 1162:  /* vec_loongson_extract_lo_v8qi */
        case 1161:  /* vec_loongson_extract_lo_v4hi */
        case 1160:  /* vec_loongson_extract_lo_v2si */
        case 1065:  /* loongson_vec_init1_v8qi */
        case 1064:  /* loongson_vec_init1_v4hi */
        case 641:  /* cop0_move */
        case 417:  /* mfhc1tf */
        case 416:  /* mfhc1v8qi */
        case 415:  /* mfhc1v4hi */
        case 414:  /* mfhc1v2si */
        case 413:  /* mfhc1v2sf */
        case 412:  /* mfhc1di */
        case 411:  /* mfhc1df */
        case 410:  /* mthc1tf */
        case 409:  /* mthc1v8qi */
        case 408:  /* mthc1v4hi */
        case 407:  /* mthc1v2si */
        case 406:  /* mthc1v2sf */
        case 405:  /* mthc1di */
        case 404:  /* mthc1df */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 379:  /* mfhidi_ti */
        case 378:  /* mfhisi_ti */
        case 377:  /* mfhisi_di */
	  extract_constrain_insn_cached (insn);
	  if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 950:  /* *mips_lwux_di_ext */
        case 949:  /* *mips_lwx_di_ext */
        case 948:  /* *mips_lwux_si_ext */
        case 947:  /* *mips_lwx_si_ext */
        case 946:  /* mips_ldx_di */
        case 945:  /* mips_lwx_di */
        case 944:  /* mips_ldx_si */
        case 943:  /* mips_lwx_si */
        case 942:  /* mips_lhux_extdi_di */
        case 941:  /* mips_lhx_extdi_di */
        case 940:  /* mips_lhux_extsi_di */
        case 939:  /* mips_lhx_extsi_di */
        case 938:  /* mips_lbux_extdi_di */
        case 937:  /* mips_lbx_extdi_di */
        case 936:  /* mips_lbux_extsi_di */
        case 935:  /* mips_lbx_extsi_di */
        case 934:  /* mips_lhux_extdi_si */
        case 933:  /* mips_lhx_extdi_si */
        case 932:  /* mips_lhux_extsi_si */
        case 931:  /* mips_lhx_extsi_si */
        case 930:  /* mips_lbux_extdi_si */
        case 929:  /* mips_lbx_extdi_si */
        case 928:  /* mips_lbux_extsi_si */
        case 927:  /* mips_lbx_extsi_si */
        case 723:  /* *join2_loadhi */
        case 722:  /* *join2_loadhi */
        case 649:  /* load_calldi */
        case 648:  /* load_callsi */
        case 458:  /* *mips.md:5842 */
        case 360:  /* *lwxs */
        case 359:  /* *lwxs */
        case 358:  /* *lwxs */
        case 357:  /* *lwxs */
        case 356:  /* *lwxs */
        case 355:  /* *lwxs */
        case 354:  /* *lwxs */
        case 353:  /* *lwxs */
        case 352:  /* *lwxs */
        case 351:  /* *lwxs */
        case 350:  /* *lwxs */
        case 349:  /* *lwxs */
        case 348:  /* *lwxs */
        case 347:  /* *lwxs */
        case 346:  /* *lwxs */
        case 345:  /* *lwxs */
        case 344:  /* *lwxs */
        case 343:  /* *lwxs */
        case 336:  /* *ldxc1_di */
        case 335:  /* *ldxc1_di */
        case 334:  /* *lwxc1_di */
        case 333:  /* *ldxc1_si */
        case 332:  /* *ldxc1_si */
        case 331:  /* *lwxc1_si */
        case 302:  /* load_gotdi */
        case 301:  /* load_gotsi */
        case 300:  /* *got_pagedi */
        case 299:  /* *got_pagesi */
        case 298:  /* *got_dispdi */
        case 297:  /* *got_dispsi */
        case 296:  /* *xgot_lodi */
        case 295:  /* *xgot_losi */
        case 284:  /* mov_ldr */
        case 283:  /* mov_lwr */
        case 282:  /* mov_ldl */
        case 281:  /* mov_lwl */
        case 229:  /* *zero_extendqihi2_mips16 */
        case 227:  /* *zero_extendhidi2_mips16 */
        case 226:  /* *zero_extendhisi2_mips16 */
        case 225:  /* *zero_extendqidi2_mips16 */
        case 224:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 80:  /* umulditi3_r4000 */
        case 79:  /* mulditi3_r4000 */
        case 78:  /* umulditi3_internal */
        case 77:  /* mulditi3_internal */
        case 76:  /* umuldi3_highpart_internal */
        case 75:  /* smuldi3_highpart_internal */
        case 68:  /* umulsi3_highpart_internal */
        case 67:  /* smulsi3_highpart_internal */
        case 62:  /* *mulsu_di */
        case 61:  /* *muls_di */
        case 58:  /* umulsidi3_64bit_hilo */
        case 57:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit */
        case 41:  /* muldi3_r4000 */
        case 40:  /* mulsi3_r4000 */
        case 39:  /* muldi3_internal */
        case 38:  /* mulsi3_internal */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        case 36:  /* mulsi3_mul3 */
        case 37:  /* muldi3_mul3 */
        case 50:  /* *muls */
        case 183:  /* *andsi3 */
        case 184:  /* *anddi3 */
        case 185:  /* *andsi3_mips16 */
        case 186:  /* *anddi3_mips16 */
        case 214:  /* *zero_extendsidi2 */
        case 215:  /* *zero_extendsidi2_dext */
        case 216:  /* *zero_extendqisi2 */
        case 217:  /* *zero_extendqidi2 */
        case 218:  /* *zero_extendhisi2 */
        case 219:  /* *zero_extendhidi2 */
        case 228:  /* *zero_extendqihi2 */
        case 235:  /* extendsidi2 */
        case 236:  /* *extendqisi2_mips16e */
        case 237:  /* *extendqidi2_mips16e */
        case 238:  /* *extendhisi2_mips16e */
        case 239:  /* *extendhidi2_mips16e */
        case 240:  /* *extendqisi2 */
        case 241:  /* *extendqidi2 */
        case 242:  /* *extendhisi2 */
        case 243:  /* *extendhidi2 */
        case 244:  /* *extendqisi2_seb */
        case 245:  /* *extendqidi2_seb */
        case 246:  /* *extendhisi2_seh */
        case 247:  /* *extendhidi2_seh */
        case 248:  /* *extendqihi2_mips16e */
        case 249:  /* *extendqihi2 */
        case 250:  /* *extendqihi2_seb */
        case 309:  /* *movdi_32bit */
        case 310:  /* *movdi_32bit_mips16 */
        case 311:  /* *movdi_64bit */
        case 312:  /* *movdi_64bit_mips16 */
        case 313:  /* *movsi_internal */
        case 314:  /* *movv2hi_internal */
        case 315:  /* *movv4qi_internal */
        case 316:  /* *movv2hq_internal */
        case 317:  /* *movv2uhq_internal */
        case 318:  /* *movv2ha_internal */
        case 319:  /* *movv2uha_internal */
        case 320:  /* *movv4qq_internal */
        case 321:  /* *movv4uqq_internal */
        case 322:  /* *movsi_mips16 */
        case 323:  /* *movv2hi_mips16 */
        case 324:  /* *movv4qi_mips16 */
        case 325:  /* *movv2hq_mips16 */
        case 326:  /* *movv2uhq_mips16 */
        case 327:  /* *movv2ha_mips16 */
        case 328:  /* *movv2uha_mips16 */
        case 329:  /* *movv4qq_mips16 */
        case 330:  /* *movv4uqq_mips16 */
        case 361:  /* *movhi_internal */
        case 362:  /* *movhi_mips16 */
        case 363:  /* *movqi_internal */
        case 364:  /* *movqi_mips16 */
        case 365:  /* movccf */
        case 366:  /* *movsf_hardfloat */
        case 367:  /* *movsf_softfloat */
        case 368:  /* *movsf_mips16 */
        case 369:  /* *movdf_hardfloat */
        case 370:  /* *movdf_softfloat */
        case 371:  /* *movdf_mips16 */
        case 372:  /* *movti */
        case 373:  /* *movti_mips16 */
        case 374:  /* *movtf */
        case 375:  /* *movtf_mips16 */
        case 376:  /* *movv2sf */
        case 383:  /* load_lowdf */
        case 384:  /* load_lowdi */
        case 385:  /* load_lowv2sf */
        case 386:  /* load_lowv2si */
        case 387:  /* load_lowv4hi */
        case 388:  /* load_lowv8qi */
        case 389:  /* load_lowtf */
        case 390:  /* load_highdf */
        case 391:  /* load_highdi */
        case 392:  /* load_highv2sf */
        case 393:  /* load_highv2si */
        case 394:  /* load_highv4hi */
        case 395:  /* load_highv8qi */
        case 396:  /* load_hightf */
        case 397:  /* store_worddf */
        case 398:  /* store_worddi */
        case 399:  /* store_wordv2sf */
        case 400:  /* store_wordv2si */
        case 401:  /* store_wordv4hi */
        case 402:  /* store_wordv8qi */
        case 403:  /* store_wordtf */
        case 718:  /* *join2_load_storehi */
        case 719:  /* *join2_load_storesi */
        case 720:  /* *join2_load_storesf */
        case 721:  /* *join2_load_storedf */
        case 1061:  /* movv2si_internal */
        case 1062:  /* movv4hi_internal */
        case 1063:  /* movv8qi_internal */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 826:  /* sungt_ps */
        case 825:  /* sunge_ps */
        case 824:  /* sgt_ps */
        case 823:  /* sge_ps */
        case 822:  /* sne_ps */
        case 821:  /* sltgt_ps */
        case 820:  /* sordered_ps */
        case 819:  /* sle_ps */
        case 818:  /* slt_ps */
        case 817:  /* seq_ps */
        case 816:  /* sunle_ps */
        case 815:  /* sunlt_ps */
        case 814:  /* suneq_ps */
        case 813:  /* sunordered_ps */
        case 812:  /* mips_cabs_cond_ps */
        case 811:  /* mips_c_cond_ps */
        case 810:  /* mips_cabs_cond_4s */
        case 809:  /* mips_c_cond_4s */
        case 808:  /* mips_cabs_cond_d */
        case 807:  /* mips_cabs_cond_s */
        case 616:  /* sungt_df_using_ccf */
        case 615:  /* sunge_df_using_ccf */
        case 614:  /* sgt_df_using_ccf */
        case 613:  /* sge_df_using_ccf */
        case 612:  /* sungt_sf_using_ccf */
        case 611:  /* sunge_sf_using_ccf */
        case 610:  /* sgt_sf_using_ccf */
        case 609:  /* sge_sf_using_ccf */
        case 608:  /* sungt_df_using_cc */
        case 607:  /* sunge_df_using_cc */
        case 606:  /* sgt_df_using_cc */
        case 605:  /* sge_df_using_cc */
        case 604:  /* sungt_sf_using_cc */
        case 603:  /* sunge_sf_using_cc */
        case 602:  /* sgt_sf_using_cc */
        case 601:  /* sge_sf_using_cc */
        case 600:  /* sne_df_using_ccf */
        case 599:  /* sltgt_df_using_ccf */
        case 598:  /* sordered_df_using_ccf */
        case 597:  /* sle_df_using_ccf */
        case 596:  /* slt_df_using_ccf */
        case 595:  /* seq_df_using_ccf */
        case 594:  /* sunle_df_using_ccf */
        case 593:  /* sunlt_df_using_ccf */
        case 592:  /* suneq_df_using_ccf */
        case 591:  /* sunordered_df_using_ccf */
        case 590:  /* sne_sf_using_ccf */
        case 589:  /* sltgt_sf_using_ccf */
        case 588:  /* sordered_sf_using_ccf */
        case 587:  /* sle_sf_using_ccf */
        case 586:  /* slt_sf_using_ccf */
        case 585:  /* seq_sf_using_ccf */
        case 584:  /* sunle_sf_using_ccf */
        case 583:  /* sunlt_sf_using_ccf */
        case 582:  /* suneq_sf_using_ccf */
        case 581:  /* sunordered_sf_using_ccf */
        case 580:  /* sle_df_using_cc */
        case 579:  /* slt_df_using_cc */
        case 578:  /* seq_df_using_cc */
        case 577:  /* sunle_df_using_cc */
        case 576:  /* sunlt_df_using_cc */
        case 575:  /* suneq_df_using_cc */
        case 574:  /* sunordered_df_using_cc */
        case 573:  /* sle_sf_using_cc */
        case 572:  /* slt_sf_using_cc */
        case 571:  /* seq_sf_using_cc */
        case 570:  /* sunle_sf_using_cc */
        case 569:  /* sunlt_sf_using_cc */
        case 568:  /* suneq_sf_using_cc */
        case 567:  /* sunordered_sf_using_cc */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 1694:  /* msa_bnz_v_b */
        case 1693:  /* msa_bz_v_b */
        case 1692:  /* msa_bnz_v_h */
        case 1691:  /* msa_bz_v_h */
        case 1690:  /* msa_bnz_v_w */
        case 1689:  /* msa_bz_v_w */
        case 1688:  /* msa_bnz_v_d */
        case 1687:  /* msa_bz_v_d */
        case 1686:  /* msa_bnz_v_w_f */
        case 1685:  /* msa_bz_v_w_f */
        case 1684:  /* msa_bnz_v_d_f */
        case 1683:  /* msa_bz_v_d_f */
        case 1682:  /* msa_bnz_b */
        case 1681:  /* msa_bz_b */
        case 1680:  /* msa_bnz_h */
        case 1679:  /* msa_bz_h */
        case 1678:  /* msa_bnz_w */
        case 1677:  /* msa_bz_w */
        case 1676:  /* msa_bnz_d */
        case 1675:  /* msa_bz_d */
        case 1674:  /* msa_bnz_w_f */
        case 1673:  /* msa_bz_w_f */
        case 1672:  /* msa_bnz_d_f */
        case 1671:  /* msa_bz_d_f */
        case 1060:  /* *movepsfsf */
        case 1059:  /* *movepsfsi */
        case 1058:  /* *movepsisf */
        case 1057:  /* *movepsisi */
        case 1056:  /* jraddiusp */
        case 1055:  /* *swp */
        case 1054:  /* *lwp */
        case 1053:  /* *load_word_multiple */
        case 1052:  /* *store_word_multiple */
        case 951:  /* mips_bposge */
        case 832:  /* *branch_upper_lower_inverted */
        case 831:  /* *branch_upper_lower */
        case 830:  /* bc1any2f */
        case 829:  /* bc1any2t */
        case 828:  /* bc1any4f */
        case 827:  /* bc1any4t */
        case 717:  /* mips_set_fcsr_mips16_di */
        case 716:  /* mips_set_fcsr_mips16_si */
        case 714:  /* mips_get_fcsr_mips16_di */
        case 713:  /* mips_get_fcsr_mips16_si */
        case 711:  /* *tls_get_tp_mips16_call_di */
        case 710:  /* *tls_get_tp_mips16_call_si */
        case 707:  /* *tls_get_tp_di_split */
        case 706:  /* *tls_get_tp_si_split */
        case 664:  /* call_value_multiple_split */
        case 663:  /* call_value_multiple_internal */
        case 662:  /* call_value_direct_split */
        case 661:  /* call_value_internal_direct */
        case 660:  /* call_value_split */
        case 659:  /* call_value_internal */
        case 658:  /* call_direct_split */
        case 657:  /* call_internal_direct */
        case 656:  /* call_split */
        case 655:  /* call_internal */
        case 654:  /* sibcall_value_multiple_internal */
        case 653:  /* sibcall_value_internal */
        case 652:  /* sibcall_internal */
        case 634:  /* simple_return_internal */
        case 633:  /* return_internal */
        case 632:  /* *simple_return */
        case 631:  /* *return */
        case 630:  /* probe_stack_range_di */
        case 629:  /* probe_stack_range_si */
        case 625:  /* tablejump_di */
        case 624:  /* tablejump_si */
        case 621:  /* indirect_jump_di */
        case 620:  /* indirect_jump_si */
        case 619:  /* *jump_mips16 */
        case 618:  /* *jump_pic */
        case 617:  /* *jump_absolute */
        case 490:  /* *branch_bit1di_inverted */
        case 489:  /* *branch_bit0di_inverted */
        case 488:  /* *branch_bit1si_inverted */
        case 487:  /* *branch_bit0si_inverted */
        case 486:  /* *branch_bit1di */
        case 485:  /* *branch_bit0di */
        case 484:  /* *branch_bit1si */
        case 483:  /* *branch_bit0si */
        case 482:  /* *branch_equalitydi_mips16_inverted */
        case 481:  /* *branch_equalitysi_mips16_inverted */
        case 480:  /* *branch_equalitydi_mips16 */
        case 479:  /* *branch_equalitysi_mips16 */
        case 478:  /* *branch_equalitydi_inverted */
        case 477:  /* *branch_equalitysi_inverted */
        case 476:  /* *branch_equalitydi */
        case 475:  /* *branch_equalitysi */
        case 474:  /* *branch_orderdi_inverted */
        case 473:  /* *branch_ordersi_inverted */
        case 472:  /* *branch_orderdi */
        case 471:  /* *branch_ordersi */
        case 470:  /* *branch_fp_inverted_ccf */
        case 469:  /* *branch_fp_inverted_cc */
        case 468:  /* *branch_fp_ccf */
        case 467:  /* *branch_fp_cc */
        case 440:  /* r10k_cache_barrier */
	  return 0;

        case 1162:  /* vec_loongson_extract_lo_v8qi */
        case 1161:  /* vec_loongson_extract_lo_v4hi */
        case 1160:  /* vec_loongson_extract_lo_v2si */
        case 1065:  /* loongson_vec_init1_v8qi */
        case 1064:  /* loongson_vec_init1_v4hi */
        case 641:  /* cop0_move */
        case 417:  /* mfhc1tf */
        case 416:  /* mfhc1v8qi */
        case 415:  /* mfhc1v4hi */
        case 414:  /* mfhc1v2si */
        case 413:  /* mfhc1v2sf */
        case 412:  /* mfhc1di */
        case 411:  /* mfhc1df */
        case 410:  /* mthc1tf */
        case 409:  /* mthc1v8qi */
        case 408:  /* mthc1v4hi */
        case 407:  /* mthc1v2si */
        case 406:  /* mthc1v2sf */
        case 405:  /* mthc1di */
        case 404:  /* mthc1df */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 379:  /* mfhidi_ti */
        case 378:  /* mfhisi_ti */
        case 377:  /* mfhisi_di */
	  extract_constrain_insn_cached (insn);
	  if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 950:  /* *mips_lwux_di_ext */
        case 949:  /* *mips_lwx_di_ext */
        case 948:  /* *mips_lwux_si_ext */
        case 947:  /* *mips_lwx_si_ext */
        case 946:  /* mips_ldx_di */
        case 945:  /* mips_lwx_di */
        case 944:  /* mips_ldx_si */
        case 943:  /* mips_lwx_si */
        case 942:  /* mips_lhux_extdi_di */
        case 941:  /* mips_lhx_extdi_di */
        case 940:  /* mips_lhux_extsi_di */
        case 939:  /* mips_lhx_extsi_di */
        case 938:  /* mips_lbux_extdi_di */
        case 937:  /* mips_lbx_extdi_di */
        case 936:  /* mips_lbux_extsi_di */
        case 935:  /* mips_lbx_extsi_di */
        case 934:  /* mips_lhux_extdi_si */
        case 933:  /* mips_lhx_extdi_si */
        case 932:  /* mips_lhux_extsi_si */
        case 931:  /* mips_lhx_extsi_si */
        case 930:  /* mips_lbux_extdi_si */
        case 929:  /* mips_lbx_extdi_si */
        case 928:  /* mips_lbux_extsi_si */
        case 927:  /* mips_lbx_extsi_si */
        case 723:  /* *join2_loadhi */
        case 722:  /* *join2_loadhi */
        case 649:  /* load_calldi */
        case 648:  /* load_callsi */
        case 458:  /* *mips.md:5842 */
        case 360:  /* *lwxs */
        case 359:  /* *lwxs */
        case 358:  /* *lwxs */
        case 357:  /* *lwxs */
        case 356:  /* *lwxs */
        case 355:  /* *lwxs */
        case 354:  /* *lwxs */
        case 353:  /* *lwxs */
        case 352:  /* *lwxs */
        case 351:  /* *lwxs */
        case 350:  /* *lwxs */
        case 349:  /* *lwxs */
        case 348:  /* *lwxs */
        case 347:  /* *lwxs */
        case 346:  /* *lwxs */
        case 345:  /* *lwxs */
        case 344:  /* *lwxs */
        case 343:  /* *lwxs */
        case 336:  /* *ldxc1_di */
        case 335:  /* *ldxc1_di */
        case 334:  /* *lwxc1_di */
        case 333:  /* *ldxc1_si */
        case 332:  /* *ldxc1_si */
        case 331:  /* *lwxc1_si */
        case 302:  /* load_gotdi */
        case 301:  /* load_gotsi */
        case 300:  /* *got_pagedi */
        case 299:  /* *got_pagesi */
        case 298:  /* *got_dispdi */
        case 297:  /* *got_dispsi */
        case 296:  /* *xgot_lodi */
        case 295:  /* *xgot_losi */
        case 284:  /* mov_ldr */
        case 283:  /* mov_lwr */
        case 282:  /* mov_ldl */
        case 281:  /* mov_lwl */
        case 229:  /* *zero_extendqihi2_mips16 */
        case 227:  /* *zero_extendhidi2_mips16 */
        case 226:  /* *zero_extendhisi2_mips16 */
        case 225:  /* *zero_extendqidi2_mips16 */
        case 224:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 80:  /* umulditi3_r4000 */
        case 79:  /* mulditi3_r4000 */
        case 78:  /* umulditi3_internal */
        case 77:  /* mulditi3_internal */
        case 76:  /* umuldi3_highpart_internal */
        case 75:  /* smuldi3_highpart_internal */
        case 68:  /* umulsi3_highpart_internal */
        case 67:  /* smulsi3_highpart_internal */
        case 62:  /* *mulsu_di */
        case 61:  /* *muls_di */
        case 58:  /* umulsidi3_64bit_hilo */
        case 57:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit */
        case 41:  /* muldi3_r4000 */
        case 40:  /* mulsi3_r4000 */
        case 39:  /* muldi3_internal */
        case 38:  /* mulsi3_internal */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        case 36:  /* mulsi3_mul3 */
        case 37:  /* muldi3_mul3 */
        case 50:  /* *muls */
        case 183:  /* *andsi3 */
        case 184:  /* *anddi3 */
        case 185:  /* *andsi3_mips16 */
        case 186:  /* *anddi3_mips16 */
        case 214:  /* *zero_extendsidi2 */
        case 215:  /* *zero_extendsidi2_dext */
        case 216:  /* *zero_extendqisi2 */
        case 217:  /* *zero_extendqidi2 */
        case 218:  /* *zero_extendhisi2 */
        case 219:  /* *zero_extendhidi2 */
        case 228:  /* *zero_extendqihi2 */
        case 235:  /* extendsidi2 */
        case 236:  /* *extendqisi2_mips16e */
        case 237:  /* *extendqidi2_mips16e */
        case 238:  /* *extendhisi2_mips16e */
        case 239:  /* *extendhidi2_mips16e */
        case 240:  /* *extendqisi2 */
        case 241:  /* *extendqidi2 */
        case 242:  /* *extendhisi2 */
        case 243:  /* *extendhidi2 */
        case 244:  /* *extendqisi2_seb */
        case 245:  /* *extendqidi2_seb */
        case 246:  /* *extendhisi2_seh */
        case 247:  /* *extendhidi2_seh */
        case 248:  /* *extendqihi2_mips16e */
        case 249:  /* *extendqihi2 */
        case 250:  /* *extendqihi2_seb */
        case 309:  /* *movdi_32bit */
        case 310:  /* *movdi_32bit_mips16 */
        case 311:  /* *movdi_64bit */
        case 312:  /* *movdi_64bit_mips16 */
        case 313:  /* *movsi_internal */
        case 314:  /* *movv2hi_internal */
        case 315:  /* *movv4qi_internal */
        case 316:  /* *movv2hq_internal */
        case 317:  /* *movv2uhq_internal */
        case 318:  /* *movv2ha_internal */
        case 319:  /* *movv2uha_internal */
        case 320:  /* *movv4qq_internal */
        case 321:  /* *movv4uqq_internal */
        case 322:  /* *movsi_mips16 */
        case 323:  /* *movv2hi_mips16 */
        case 324:  /* *movv4qi_mips16 */
        case 325:  /* *movv2hq_mips16 */
        case 326:  /* *movv2uhq_mips16 */
        case 327:  /* *movv2ha_mips16 */
        case 328:  /* *movv2uha_mips16 */
        case 329:  /* *movv4qq_mips16 */
        case 330:  /* *movv4uqq_mips16 */
        case 361:  /* *movhi_internal */
        case 362:  /* *movhi_mips16 */
        case 363:  /* *movqi_internal */
        case 364:  /* *movqi_mips16 */
        case 365:  /* movccf */
        case 366:  /* *movsf_hardfloat */
        case 367:  /* *movsf_softfloat */
        case 368:  /* *movsf_mips16 */
        case 369:  /* *movdf_hardfloat */
        case 370:  /* *movdf_softfloat */
        case 371:  /* *movdf_mips16 */
        case 372:  /* *movti */
        case 373:  /* *movti_mips16 */
        case 374:  /* *movtf */
        case 375:  /* *movtf_mips16 */
        case 376:  /* *movv2sf */
        case 383:  /* load_lowdf */
        case 384:  /* load_lowdi */
        case 385:  /* load_lowv2sf */
        case 386:  /* load_lowv2si */
        case 387:  /* load_lowv4hi */
        case 388:  /* load_lowv8qi */
        case 389:  /* load_lowtf */
        case 390:  /* load_highdf */
        case 391:  /* load_highdi */
        case 392:  /* load_highv2sf */
        case 393:  /* load_highv2si */
        case 394:  /* load_highv4hi */
        case 395:  /* load_highv8qi */
        case 396:  /* load_hightf */
        case 397:  /* store_worddf */
        case 398:  /* store_worddi */
        case 399:  /* store_wordv2sf */
        case 400:  /* store_wordv2si */
        case 401:  /* store_wordv4hi */
        case 402:  /* store_wordv8qi */
        case 403:  /* store_wordtf */
        case 718:  /* *join2_load_storehi */
        case 719:  /* *join2_load_storesi */
        case 720:  /* *join2_load_storesf */
        case 721:  /* *join2_load_storedf */
        case 1061:  /* movv2si_internal */
        case 1062:  /* movv4hi_internal */
        case 1063:  /* movv8qi_internal */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 826:  /* sungt_ps */
        case 825:  /* sunge_ps */
        case 824:  /* sgt_ps */
        case 823:  /* sge_ps */
        case 822:  /* sne_ps */
        case 821:  /* sltgt_ps */
        case 820:  /* sordered_ps */
        case 819:  /* sle_ps */
        case 818:  /* slt_ps */
        case 817:  /* seq_ps */
        case 816:  /* sunle_ps */
        case 815:  /* sunlt_ps */
        case 814:  /* suneq_ps */
        case 813:  /* sunordered_ps */
        case 812:  /* mips_cabs_cond_ps */
        case 811:  /* mips_c_cond_ps */
        case 810:  /* mips_cabs_cond_4s */
        case 809:  /* mips_c_cond_4s */
        case 808:  /* mips_cabs_cond_d */
        case 807:  /* mips_cabs_cond_s */
        case 616:  /* sungt_df_using_ccf */
        case 615:  /* sunge_df_using_ccf */
        case 614:  /* sgt_df_using_ccf */
        case 613:  /* sge_df_using_ccf */
        case 612:  /* sungt_sf_using_ccf */
        case 611:  /* sunge_sf_using_ccf */
        case 610:  /* sgt_sf_using_ccf */
        case 609:  /* sge_sf_using_ccf */
        case 608:  /* sungt_df_using_cc */
        case 607:  /* sunge_df_using_cc */
        case 606:  /* sgt_df_using_cc */
        case 605:  /* sge_df_using_cc */
        case 604:  /* sungt_sf_using_cc */
        case 603:  /* sunge_sf_using_cc */
        case 602:  /* sgt_sf_using_cc */
        case 601:  /* sge_sf_using_cc */
        case 600:  /* sne_df_using_ccf */
        case 599:  /* sltgt_df_using_ccf */
        case 598:  /* sordered_df_using_ccf */
        case 597:  /* sle_df_using_ccf */
        case 596:  /* slt_df_using_ccf */
        case 595:  /* seq_df_using_ccf */
        case 594:  /* sunle_df_using_ccf */
        case 593:  /* sunlt_df_using_ccf */
        case 592:  /* suneq_df_using_ccf */
        case 591:  /* sunordered_df_using_ccf */
        case 590:  /* sne_sf_using_ccf */
        case 589:  /* sltgt_sf_using_ccf */
        case 588:  /* sordered_sf_using_ccf */
        case 587:  /* sle_sf_using_ccf */
        case 586:  /* slt_sf_using_ccf */
        case 585:  /* seq_sf_using_ccf */
        case 584:  /* sunle_sf_using_ccf */
        case 583:  /* sunlt_sf_using_ccf */
        case 582:  /* suneq_sf_using_ccf */
        case 581:  /* sunordered_sf_using_ccf */
        case 580:  /* sle_df_using_cc */
        case 579:  /* slt_df_using_cc */
        case 578:  /* seq_df_using_cc */
        case 577:  /* sunle_df_using_cc */
        case 576:  /* sunlt_df_using_cc */
        case 575:  /* suneq_df_using_cc */
        case 574:  /* sunordered_df_using_cc */
        case 573:  /* sle_sf_using_cc */
        case 572:  /* slt_sf_using_cc */
        case 571:  /* seq_sf_using_cc */
        case 570:  /* sunle_sf_using_cc */
        case 569:  /* sunlt_sf_using_cc */
        case 568:  /* suneq_sf_using_cc */
        case 567:  /* sunordered_sf_using_cc */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 1694:  /* msa_bnz_v_b */
        case 1693:  /* msa_bz_v_b */
        case 1692:  /* msa_bnz_v_h */
        case 1691:  /* msa_bz_v_h */
        case 1690:  /* msa_bnz_v_w */
        case 1689:  /* msa_bz_v_w */
        case 1688:  /* msa_bnz_v_d */
        case 1687:  /* msa_bz_v_d */
        case 1686:  /* msa_bnz_v_w_f */
        case 1685:  /* msa_bz_v_w_f */
        case 1684:  /* msa_bnz_v_d_f */
        case 1683:  /* msa_bz_v_d_f */
        case 1682:  /* msa_bnz_b */
        case 1681:  /* msa_bz_b */
        case 1680:  /* msa_bnz_h */
        case 1679:  /* msa_bz_h */
        case 1678:  /* msa_bnz_w */
        case 1677:  /* msa_bz_w */
        case 1676:  /* msa_bnz_d */
        case 1675:  /* msa_bz_d */
        case 1674:  /* msa_bnz_w_f */
        case 1673:  /* msa_bz_w_f */
        case 1672:  /* msa_bnz_d_f */
        case 1671:  /* msa_bz_d_f */
        case 1060:  /* *movepsfsf */
        case 1059:  /* *movepsfsi */
        case 1058:  /* *movepsisf */
        case 1057:  /* *movepsisi */
        case 1056:  /* jraddiusp */
        case 1055:  /* *swp */
        case 1054:  /* *lwp */
        case 1053:  /* *load_word_multiple */
        case 1052:  /* *store_word_multiple */
        case 951:  /* mips_bposge */
        case 832:  /* *branch_upper_lower_inverted */
        case 831:  /* *branch_upper_lower */
        case 830:  /* bc1any2f */
        case 829:  /* bc1any2t */
        case 828:  /* bc1any4f */
        case 827:  /* bc1any4t */
        case 717:  /* mips_set_fcsr_mips16_di */
        case 716:  /* mips_set_fcsr_mips16_si */
        case 714:  /* mips_get_fcsr_mips16_di */
        case 713:  /* mips_get_fcsr_mips16_si */
        case 711:  /* *tls_get_tp_mips16_call_di */
        case 710:  /* *tls_get_tp_mips16_call_si */
        case 707:  /* *tls_get_tp_di_split */
        case 706:  /* *tls_get_tp_si_split */
        case 664:  /* call_value_multiple_split */
        case 663:  /* call_value_multiple_internal */
        case 662:  /* call_value_direct_split */
        case 661:  /* call_value_internal_direct */
        case 660:  /* call_value_split */
        case 659:  /* call_value_internal */
        case 658:  /* call_direct_split */
        case 657:  /* call_internal_direct */
        case 656:  /* call_split */
        case 655:  /* call_internal */
        case 654:  /* sibcall_value_multiple_internal */
        case 653:  /* sibcall_value_internal */
        case 652:  /* sibcall_internal */
        case 634:  /* simple_return_internal */
        case 633:  /* return_internal */
        case 632:  /* *simple_return */
        case 631:  /* *return */
        case 630:  /* probe_stack_range_di */
        case 629:  /* probe_stack_range_si */
        case 625:  /* tablejump_di */
        case 624:  /* tablejump_si */
        case 621:  /* indirect_jump_di */
        case 620:  /* indirect_jump_si */
        case 619:  /* *jump_mips16 */
        case 618:  /* *jump_pic */
        case 617:  /* *jump_absolute */
        case 490:  /* *branch_bit1di_inverted */
        case 489:  /* *branch_bit0di_inverted */
        case 488:  /* *branch_bit1si_inverted */
        case 487:  /* *branch_bit0si_inverted */
        case 486:  /* *branch_bit1di */
        case 485:  /* *branch_bit0di */
        case 484:  /* *branch_bit1si */
        case 483:  /* *branch_bit0si */
        case 482:  /* *branch_equalitydi_mips16_inverted */
        case 481:  /* *branch_equalitysi_mips16_inverted */
        case 480:  /* *branch_equalitydi_mips16 */
        case 479:  /* *branch_equalitysi_mips16 */
        case 478:  /* *branch_equalitydi_inverted */
        case 477:  /* *branch_equalitysi_inverted */
        case 476:  /* *branch_equalitydi */
        case 475:  /* *branch_equalitysi */
        case 474:  /* *branch_orderdi_inverted */
        case 473:  /* *branch_ordersi_inverted */
        case 472:  /* *branch_orderdi */
        case 471:  /* *branch_ordersi */
        case 470:  /* *branch_fp_inverted_ccf */
        case 469:  /* *branch_fp_inverted_cc */
        case 468:  /* *branch_fp_ccf */
        case 467:  /* *branch_fp_cc */
        case 440:  /* r10k_cache_barrier */
	  return 0;

        case 1162:  /* vec_loongson_extract_lo_v8qi */
        case 1161:  /* vec_loongson_extract_lo_v4hi */
        case 1160:  /* vec_loongson_extract_lo_v2si */
        case 1065:  /* loongson_vec_init1_v8qi */
        case 1064:  /* loongson_vec_init1_v4hi */
        case 641:  /* cop0_move */
        case 417:  /* mfhc1tf */
        case 416:  /* mfhc1v8qi */
        case 415:  /* mfhc1v4hi */
        case 414:  /* mfhc1v2si */
        case 413:  /* mfhc1v2sf */
        case 412:  /* mfhc1di */
        case 411:  /* mfhc1df */
        case 410:  /* mthc1tf */
        case 409:  /* mthc1v8qi */
        case 408:  /* mthc1v4hi */
        case 407:  /* mthc1v2si */
        case 406:  /* mthc1v2sf */
        case 405:  /* mthc1di */
        case 404:  /* mthc1df */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 379:  /* mfhidi_ti */
        case 378:  /* mfhisi_ti */
        case 377:  /* mfhisi_di */
	  extract_constrain_insn_cached (insn);
	  if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 950:  /* *mips_lwux_di_ext */
        case 949:  /* *mips_lwx_di_ext */
        case 948:  /* *mips_lwux_si_ext */
        case 947:  /* *mips_lwx_si_ext */
        case 946:  /* mips_ldx_di */
        case 945:  /* mips_lwx_di */
        case 944:  /* mips_ldx_si */
        case 943:  /* mips_lwx_si */
        case 942:  /* mips_lhux_extdi_di */
        case 941:  /* mips_lhx_extdi_di */
        case 940:  /* mips_lhux_extsi_di */
        case 939:  /* mips_lhx_extsi_di */
        case 938:  /* mips_lbux_extdi_di */
        case 937:  /* mips_lbx_extdi_di */
        case 936:  /* mips_lbux_extsi_di */
        case 935:  /* mips_lbx_extsi_di */
        case 934:  /* mips_lhux_extdi_si */
        case 933:  /* mips_lhx_extdi_si */
        case 932:  /* mips_lhux_extsi_si */
        case 931:  /* mips_lhx_extsi_si */
        case 930:  /* mips_lbux_extdi_si */
        case 929:  /* mips_lbx_extdi_si */
        case 928:  /* mips_lbux_extsi_si */
        case 927:  /* mips_lbx_extsi_si */
        case 723:  /* *join2_loadhi */
        case 722:  /* *join2_loadhi */
        case 649:  /* load_calldi */
        case 648:  /* load_callsi */
        case 458:  /* *mips.md:5842 */
        case 360:  /* *lwxs */
        case 359:  /* *lwxs */
        case 358:  /* *lwxs */
        case 357:  /* *lwxs */
        case 356:  /* *lwxs */
        case 355:  /* *lwxs */
        case 354:  /* *lwxs */
        case 353:  /* *lwxs */
        case 352:  /* *lwxs */
        case 351:  /* *lwxs */
        case 350:  /* *lwxs */
        case 349:  /* *lwxs */
        case 348:  /* *lwxs */
        case 347:  /* *lwxs */
        case 346:  /* *lwxs */
        case 345:  /* *lwxs */
        case 344:  /* *lwxs */
        case 343:  /* *lwxs */
        case 336:  /* *ldxc1_di */
        case 335:  /* *ldxc1_di */
        case 334:  /* *lwxc1_di */
        case 333:  /* *ldxc1_si */
        case 332:  /* *ldxc1_si */
        case 331:  /* *lwxc1_si */
        case 302:  /* load_gotdi */
        case 301:  /* load_gotsi */
        case 300:  /* *got_pagedi */
        case 299:  /* *got_pagesi */
        case 298:  /* *got_dispdi */
        case 297:  /* *got_dispsi */
        case 296:  /* *xgot_lodi */
        case 295:  /* *xgot_losi */
        case 284:  /* mov_ldr */
        case 283:  /* mov_lwr */
        case 282:  /* mov_ldl */
        case 281:  /* mov_lwl */
        case 229:  /* *zero_extendqihi2_mips16 */
        case 227:  /* *zero_extendhidi2_mips16 */
        case 226:  /* *zero_extendhisi2_mips16 */
        case 225:  /* *zero_extendqidi2_mips16 */
        case 224:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 80:  /* umulditi3_r4000 */
        case 79:  /* mulditi3_r4000 */
        case 78:  /* umulditi3_internal */
        case 77:  /* mulditi3_internal */
        case 76:  /* umuldi3_highpart_internal */
        case 75:  /* smuldi3_highpart_internal */
        case 68:  /* umulsi3_highpart_internal */
        case 67:  /* smulsi3_highpart_internal */
        case 62:  /* *mulsu_di */
        case 61:  /* *muls_di */
        case 58:  /* umulsidi3_64bit_hilo */
        case 57:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit */
        case 41:  /* muldi3_r4000 */
        case 40:  /* mulsi3_r4000 */
        case 39:  /* muldi3_internal */
        case 38:  /* mulsi3_internal */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        case 36:  /* mulsi3_mul3 */
        case 37:  /* muldi3_mul3 */
        case 50:  /* *muls */
        case 183:  /* *andsi3 */
        case 184:  /* *anddi3 */
        case 185:  /* *andsi3_mips16 */
        case 186:  /* *anddi3_mips16 */
        case 214:  /* *zero_extendsidi2 */
        case 215:  /* *zero_extendsidi2_dext */
        case 216:  /* *zero_extendqisi2 */
        case 217:  /* *zero_extendqidi2 */
        case 218:  /* *zero_extendhisi2 */
        case 219:  /* *zero_extendhidi2 */
        case 228:  /* *zero_extendqihi2 */
        case 235:  /* extendsidi2 */
        case 236:  /* *extendqisi2_mips16e */
        case 237:  /* *extendqidi2_mips16e */
        case 238:  /* *extendhisi2_mips16e */
        case 239:  /* *extendhidi2_mips16e */
        case 240:  /* *extendqisi2 */
        case 241:  /* *extendqidi2 */
        case 242:  /* *extendhisi2 */
        case 243:  /* *extendhidi2 */
        case 244:  /* *extendqisi2_seb */
        case 245:  /* *extendqidi2_seb */
        case 246:  /* *extendhisi2_seh */
        case 247:  /* *extendhidi2_seh */
        case 248:  /* *extendqihi2_mips16e */
        case 249:  /* *extendqihi2 */
        case 250:  /* *extendqihi2_seb */
        case 309:  /* *movdi_32bit */
        case 310:  /* *movdi_32bit_mips16 */
        case 311:  /* *movdi_64bit */
        case 312:  /* *movdi_64bit_mips16 */
        case 313:  /* *movsi_internal */
        case 314:  /* *movv2hi_internal */
        case 315:  /* *movv4qi_internal */
        case 316:  /* *movv2hq_internal */
        case 317:  /* *movv2uhq_internal */
        case 318:  /* *movv2ha_internal */
        case 319:  /* *movv2uha_internal */
        case 320:  /* *movv4qq_internal */
        case 321:  /* *movv4uqq_internal */
        case 322:  /* *movsi_mips16 */
        case 323:  /* *movv2hi_mips16 */
        case 324:  /* *movv4qi_mips16 */
        case 325:  /* *movv2hq_mips16 */
        case 326:  /* *movv2uhq_mips16 */
        case 327:  /* *movv2ha_mips16 */
        case 328:  /* *movv2uha_mips16 */
        case 329:  /* *movv4qq_mips16 */
        case 330:  /* *movv4uqq_mips16 */
        case 361:  /* *movhi_internal */
        case 362:  /* *movhi_mips16 */
        case 363:  /* *movqi_internal */
        case 364:  /* *movqi_mips16 */
        case 365:  /* movccf */
        case 366:  /* *movsf_hardfloat */
        case 367:  /* *movsf_softfloat */
        case 368:  /* *movsf_mips16 */
        case 369:  /* *movdf_hardfloat */
        case 370:  /* *movdf_softfloat */
        case 371:  /* *movdf_mips16 */
        case 372:  /* *movti */
        case 373:  /* *movti_mips16 */
        case 374:  /* *movtf */
        case 375:  /* *movtf_mips16 */
        case 376:  /* *movv2sf */
        case 383:  /* load_lowdf */
        case 384:  /* load_lowdi */
        case 385:  /* load_lowv2sf */
        case 386:  /* load_lowv2si */
        case 387:  /* load_lowv4hi */
        case 388:  /* load_lowv8qi */
        case 389:  /* load_lowtf */
        case 390:  /* load_highdf */
        case 391:  /* load_highdi */
        case 392:  /* load_highv2sf */
        case 393:  /* load_highv2si */
        case 394:  /* load_highv4hi */
        case 395:  /* load_highv8qi */
        case 396:  /* load_hightf */
        case 397:  /* store_worddf */
        case 398:  /* store_worddi */
        case 399:  /* store_wordv2sf */
        case 400:  /* store_wordv2si */
        case 401:  /* store_wordv4hi */
        case 402:  /* store_wordv8qi */
        case 403:  /* store_wordtf */
        case 718:  /* *join2_load_storehi */
        case 719:  /* *join2_load_storesi */
        case 720:  /* *join2_load_storesf */
        case 721:  /* *join2_load_storedf */
        case 1061:  /* movv2si_internal */
        case 1062:  /* movv4hi_internal */
        case 1063:  /* movv8qi_internal */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 826:  /* sungt_ps */
        case 825:  /* sunge_ps */
        case 824:  /* sgt_ps */
        case 823:  /* sge_ps */
        case 822:  /* sne_ps */
        case 821:  /* sltgt_ps */
        case 820:  /* sordered_ps */
        case 819:  /* sle_ps */
        case 818:  /* slt_ps */
        case 817:  /* seq_ps */
        case 816:  /* sunle_ps */
        case 815:  /* sunlt_ps */
        case 814:  /* suneq_ps */
        case 813:  /* sunordered_ps */
        case 812:  /* mips_cabs_cond_ps */
        case 811:  /* mips_c_cond_ps */
        case 810:  /* mips_cabs_cond_4s */
        case 809:  /* mips_c_cond_4s */
        case 808:  /* mips_cabs_cond_d */
        case 807:  /* mips_cabs_cond_s */
        case 616:  /* sungt_df_using_ccf */
        case 615:  /* sunge_df_using_ccf */
        case 614:  /* sgt_df_using_ccf */
        case 613:  /* sge_df_using_ccf */
        case 612:  /* sungt_sf_using_ccf */
        case 611:  /* sunge_sf_using_ccf */
        case 610:  /* sgt_sf_using_ccf */
        case 609:  /* sge_sf_using_ccf */
        case 608:  /* sungt_df_using_cc */
        case 607:  /* sunge_df_using_cc */
        case 606:  /* sgt_df_using_cc */
        case 605:  /* sge_df_using_cc */
        case 604:  /* sungt_sf_using_cc */
        case 603:  /* sunge_sf_using_cc */
        case 602:  /* sgt_sf_using_cc */
        case 601:  /* sge_sf_using_cc */
        case 600:  /* sne_df_using_ccf */
        case 599:  /* sltgt_df_using_ccf */
        case 598:  /* sordered_df_using_ccf */
        case 597:  /* sle_df_using_ccf */
        case 596:  /* slt_df_using_ccf */
        case 595:  /* seq_df_using_ccf */
        case 594:  /* sunle_df_using_ccf */
        case 593:  /* sunlt_df_using_ccf */
        case 592:  /* suneq_df_using_ccf */
        case 591:  /* sunordered_df_using_ccf */
        case 590:  /* sne_sf_using_ccf */
        case 589:  /* sltgt_sf_using_ccf */
        case 588:  /* sordered_sf_using_ccf */
        case 587:  /* sle_sf_using_ccf */
        case 586:  /* slt_sf_using_ccf */
        case 585:  /* seq_sf_using_ccf */
        case 584:  /* sunle_sf_using_ccf */
        case 583:  /* sunlt_sf_using_ccf */
        case 582:  /* suneq_sf_using_ccf */
        case 581:  /* sunordered_sf_using_ccf */
        case 580:  /* sle_df_using_cc */
        case 579:  /* slt_df_using_cc */
        case 578:  /* seq_df_using_cc */
        case 577:  /* sunle_df_using_cc */
        case 576:  /* sunlt_df_using_cc */
        case 575:  /* suneq_df_using_cc */
        case 574:  /* sunordered_df_using_cc */
        case 573:  /* sle_sf_using_cc */
        case 572:  /* slt_sf_using_cc */
        case 571:  /* seq_sf_using_cc */
        case 570:  /* sunle_sf_using_cc */
        case 569:  /* sunlt_sf_using_cc */
        case 568:  /* suneq_sf_using_cc */
        case 567:  /* sunordered_sf_using_cc */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 1694:  /* msa_bnz_v_b */
        case 1693:  /* msa_bz_v_b */
        case 1692:  /* msa_bnz_v_h */
        case 1691:  /* msa_bz_v_h */
        case 1690:  /* msa_bnz_v_w */
        case 1689:  /* msa_bz_v_w */
        case 1688:  /* msa_bnz_v_d */
        case 1687:  /* msa_bz_v_d */
        case 1686:  /* msa_bnz_v_w_f */
        case 1685:  /* msa_bz_v_w_f */
        case 1684:  /* msa_bnz_v_d_f */
        case 1683:  /* msa_bz_v_d_f */
        case 1682:  /* msa_bnz_b */
        case 1681:  /* msa_bz_b */
        case 1680:  /* msa_bnz_h */
        case 1679:  /* msa_bz_h */
        case 1678:  /* msa_bnz_w */
        case 1677:  /* msa_bz_w */
        case 1676:  /* msa_bnz_d */
        case 1675:  /* msa_bz_d */
        case 1674:  /* msa_bnz_w_f */
        case 1673:  /* msa_bz_w_f */
        case 1672:  /* msa_bnz_d_f */
        case 1671:  /* msa_bz_d_f */
        case 1060:  /* *movepsfsf */
        case 1059:  /* *movepsfsi */
        case 1058:  /* *movepsisf */
        case 1057:  /* *movepsisi */
        case 1056:  /* jraddiusp */
        case 1055:  /* *swp */
        case 1054:  /* *lwp */
        case 1053:  /* *load_word_multiple */
        case 1052:  /* *store_word_multiple */
        case 951:  /* mips_bposge */
        case 832:  /* *branch_upper_lower_inverted */
        case 831:  /* *branch_upper_lower */
        case 830:  /* bc1any2f */
        case 829:  /* bc1any2t */
        case 828:  /* bc1any4f */
        case 827:  /* bc1any4t */
        case 717:  /* mips_set_fcsr_mips16_di */
        case 716:  /* mips_set_fcsr_mips16_si */
        case 714:  /* mips_get_fcsr_mips16_di */
        case 713:  /* mips_get_fcsr_mips16_si */
        case 711:  /* *tls_get_tp_mips16_call_di */
        case 710:  /* *tls_get_tp_mips16_call_si */
        case 707:  /* *tls_get_tp_di_split */
        case 706:  /* *tls_get_tp_si_split */
        case 664:  /* call_value_multiple_split */
        case 663:  /* call_value_multiple_internal */
        case 662:  /* call_value_direct_split */
        case 661:  /* call_value_internal_direct */
        case 660:  /* call_value_split */
        case 659:  /* call_value_internal */
        case 658:  /* call_direct_split */
        case 657:  /* call_internal_direct */
        case 656:  /* call_split */
        case 655:  /* call_internal */
        case 654:  /* sibcall_value_multiple_internal */
        case 653:  /* sibcall_value_internal */
        case 652:  /* sibcall_internal */
        case 634:  /* simple_return_internal */
        case 633:  /* return_internal */
        case 632:  /* *simple_return */
        case 631:  /* *return */
        case 630:  /* probe_stack_range_di */
        case 629:  /* probe_stack_range_si */
        case 625:  /* tablejump_di */
        case 624:  /* tablejump_si */
        case 621:  /* indirect_jump_di */
        case 620:  /* indirect_jump_si */
        case 619:  /* *jump_mips16 */
        case 618:  /* *jump_pic */
        case 617:  /* *jump_absolute */
        case 490:  /* *branch_bit1di_inverted */
        case 489:  /* *branch_bit0di_inverted */
        case 488:  /* *branch_bit1si_inverted */
        case 487:  /* *branch_bit0si_inverted */
        case 486:  /* *branch_bit1di */
        case 485:  /* *branch_bit0di */
        case 484:  /* *branch_bit1si */
        case 483:  /* *branch_bit0si */
        case 482:  /* *branch_equalitydi_mips16_inverted */
        case 481:  /* *branch_equalitysi_mips16_inverted */
        case 480:  /* *branch_equalitydi_mips16 */
        case 479:  /* *branch_equalitysi_mips16 */
        case 478:  /* *branch_equalitydi_inverted */
        case 477:  /* *branch_equalitysi_inverted */
        case 476:  /* *branch_equalitydi */
        case 475:  /* *branch_equalitysi */
        case 474:  /* *branch_orderdi_inverted */
        case 473:  /* *branch_ordersi_inverted */
        case 472:  /* *branch_orderdi */
        case 471:  /* *branch_ordersi */
        case 470:  /* *branch_fp_inverted_ccf */
        case 469:  /* *branch_fp_inverted_cc */
        case 468:  /* *branch_fp_ccf */
        case 467:  /* *branch_fp_cc */
        case 440:  /* r10k_cache_barrier */
	  return 0;

        case 1162:  /* vec_loongson_extract_lo_v8qi */
        case 1161:  /* vec_loongson_extract_lo_v4hi */
        case 1160:  /* vec_loongson_extract_lo_v2si */
        case 1065:  /* loongson_vec_init1_v8qi */
        case 1064:  /* loongson_vec_init1_v4hi */
        case 641:  /* cop0_move */
        case 417:  /* mfhc1tf */
        case 416:  /* mfhc1v8qi */
        case 415:  /* mfhc1v4hi */
        case 414:  /* mfhc1v2si */
        case 413:  /* mfhc1v2sf */
        case 412:  /* mfhc1di */
        case 411:  /* mfhc1df */
        case 410:  /* mthc1tf */
        case 409:  /* mthc1v8qi */
        case 408:  /* mthc1v4hi */
        case 407:  /* mthc1v2si */
        case 406:  /* mthc1v2sf */
        case 405:  /* mthc1di */
        case 404:  /* mthc1df */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 379:  /* mfhidi_ti */
        case 378:  /* mfhisi_ti */
        case 377:  /* mfhisi_di */
	  extract_constrain_insn_cached (insn);
	  if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 950:  /* *mips_lwux_di_ext */
        case 949:  /* *mips_lwx_di_ext */
        case 948:  /* *mips_lwux_si_ext */
        case 947:  /* *mips_lwx_si_ext */
        case 946:  /* mips_ldx_di */
        case 945:  /* mips_lwx_di */
        case 944:  /* mips_ldx_si */
        case 943:  /* mips_lwx_si */
        case 942:  /* mips_lhux_extdi_di */
        case 941:  /* mips_lhx_extdi_di */
        case 940:  /* mips_lhux_extsi_di */
        case 939:  /* mips_lhx_extsi_di */
        case 938:  /* mips_lbux_extdi_di */
        case 937:  /* mips_lbx_extdi_di */
        case 936:  /* mips_lbux_extsi_di */
        case 935:  /* mips_lbx_extsi_di */
        case 934:  /* mips_lhux_extdi_si */
        case 933:  /* mips_lhx_extdi_si */
        case 932:  /* mips_lhux_extsi_si */
        case 931:  /* mips_lhx_extsi_si */
        case 930:  /* mips_lbux_extdi_si */
        case 929:  /* mips_lbx_extdi_si */
        case 928:  /* mips_lbux_extsi_si */
        case 927:  /* mips_lbx_extsi_si */
        case 723:  /* *join2_loadhi */
        case 722:  /* *join2_loadhi */
        case 649:  /* load_calldi */
        case 648:  /* load_callsi */
        case 458:  /* *mips.md:5842 */
        case 360:  /* *lwxs */
        case 359:  /* *lwxs */
        case 358:  /* *lwxs */
        case 357:  /* *lwxs */
        case 356:  /* *lwxs */
        case 355:  /* *lwxs */
        case 354:  /* *lwxs */
        case 353:  /* *lwxs */
        case 352:  /* *lwxs */
        case 351:  /* *lwxs */
        case 350:  /* *lwxs */
        case 349:  /* *lwxs */
        case 348:  /* *lwxs */
        case 347:  /* *lwxs */
        case 346:  /* *lwxs */
        case 345:  /* *lwxs */
        case 344:  /* *lwxs */
        case 343:  /* *lwxs */
        case 336:  /* *ldxc1_di */
        case 335:  /* *ldxc1_di */
        case 334:  /* *lwxc1_di */
        case 333:  /* *ldxc1_si */
        case 332:  /* *ldxc1_si */
        case 331:  /* *lwxc1_si */
        case 302:  /* load_gotdi */
        case 301:  /* load_gotsi */
        case 300:  /* *got_pagedi */
        case 299:  /* *got_pagesi */
        case 298:  /* *got_dispdi */
        case 297:  /* *got_dispsi */
        case 296:  /* *xgot_lodi */
        case 295:  /* *xgot_losi */
        case 284:  /* mov_ldr */
        case 283:  /* mov_lwr */
        case 282:  /* mov_ldl */
        case 281:  /* mov_lwl */
        case 229:  /* *zero_extendqihi2_mips16 */
        case 227:  /* *zero_extendhidi2_mips16 */
        case 226:  /* *zero_extendhisi2_mips16 */
        case 225:  /* *zero_extendqidi2_mips16 */
        case 224:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 80:  /* umulditi3_r4000 */
        case 79:  /* mulditi3_r4000 */
        case 78:  /* umulditi3_internal */
        case 77:  /* mulditi3_internal */
        case 76:  /* umuldi3_highpart_internal */
        case 75:  /* smuldi3_highpart_internal */
        case 68:  /* umulsi3_highpart_internal */
        case 67:  /* smulsi3_highpart_internal */
        case 62:  /* *mulsu_di */
        case 61:  /* *muls_di */
        case 58:  /* umulsidi3_64bit_hilo */
        case 57:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit */
        case 41:  /* muldi3_r4000 */
        case 40:  /* mulsi3_r4000 */
        case 39:  /* muldi3_internal */
        case 38:  /* mulsi3_internal */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        case 36:  /* mulsi3_mul3 */
        case 37:  /* muldi3_mul3 */
        case 50:  /* *muls */
        case 183:  /* *andsi3 */
        case 184:  /* *anddi3 */
        case 185:  /* *andsi3_mips16 */
        case 186:  /* *anddi3_mips16 */
        case 214:  /* *zero_extendsidi2 */
        case 215:  /* *zero_extendsidi2_dext */
        case 216:  /* *zero_extendqisi2 */
        case 217:  /* *zero_extendqidi2 */
        case 218:  /* *zero_extendhisi2 */
        case 219:  /* *zero_extendhidi2 */
        case 228:  /* *zero_extendqihi2 */
        case 235:  /* extendsidi2 */
        case 236:  /* *extendqisi2_mips16e */
        case 237:  /* *extendqidi2_mips16e */
        case 238:  /* *extendhisi2_mips16e */
        case 239:  /* *extendhidi2_mips16e */
        case 240:  /* *extendqisi2 */
        case 241:  /* *extendqidi2 */
        case 242:  /* *extendhisi2 */
        case 243:  /* *extendhidi2 */
        case 244:  /* *extendqisi2_seb */
        case 245:  /* *extendqidi2_seb */
        case 246:  /* *extendhisi2_seh */
        case 247:  /* *extendhidi2_seh */
        case 248:  /* *extendqihi2_mips16e */
        case 249:  /* *extendqihi2 */
        case 250:  /* *extendqihi2_seb */
        case 309:  /* *movdi_32bit */
        case 310:  /* *movdi_32bit_mips16 */
        case 311:  /* *movdi_64bit */
        case 312:  /* *movdi_64bit_mips16 */
        case 313:  /* *movsi_internal */
        case 314:  /* *movv2hi_internal */
        case 315:  /* *movv4qi_internal */
        case 316:  /* *movv2hq_internal */
        case 317:  /* *movv2uhq_internal */
        case 318:  /* *movv2ha_internal */
        case 319:  /* *movv2uha_internal */
        case 320:  /* *movv4qq_internal */
        case 321:  /* *movv4uqq_internal */
        case 322:  /* *movsi_mips16 */
        case 323:  /* *movv2hi_mips16 */
        case 324:  /* *movv4qi_mips16 */
        case 325:  /* *movv2hq_mips16 */
        case 326:  /* *movv2uhq_mips16 */
        case 327:  /* *movv2ha_mips16 */
        case 328:  /* *movv2uha_mips16 */
        case 329:  /* *movv4qq_mips16 */
        case 330:  /* *movv4uqq_mips16 */
        case 361:  /* *movhi_internal */
        case 362:  /* *movhi_mips16 */
        case 363:  /* *movqi_internal */
        case 364:  /* *movqi_mips16 */
        case 365:  /* movccf */
        case 366:  /* *movsf_hardfloat */
        case 367:  /* *movsf_softfloat */
        case 368:  /* *movsf_mips16 */
        case 369:  /* *movdf_hardfloat */
        case 370:  /* *movdf_softfloat */
        case 371:  /* *movdf_mips16 */
        case 372:  /* *movti */
        case 373:  /* *movti_mips16 */
        case 374:  /* *movtf */
        case 375:  /* *movtf_mips16 */
        case 376:  /* *movv2sf */
        case 383:  /* load_lowdf */
        case 384:  /* load_lowdi */
        case 385:  /* load_lowv2sf */
        case 386:  /* load_lowv2si */
        case 387:  /* load_lowv4hi */
        case 388:  /* load_lowv8qi */
        case 389:  /* load_lowtf */
        case 390:  /* load_highdf */
        case 391:  /* load_highdi */
        case 392:  /* load_highv2sf */
        case 393:  /* load_highv2si */
        case 394:  /* load_highv4hi */
        case 395:  /* load_highv8qi */
        case 396:  /* load_hightf */
        case 397:  /* store_worddf */
        case 398:  /* store_worddi */
        case 399:  /* store_wordv2sf */
        case 400:  /* store_wordv2si */
        case 401:  /* store_wordv4hi */
        case 402:  /* store_wordv8qi */
        case 403:  /* store_wordtf */
        case 718:  /* *join2_load_storehi */
        case 719:  /* *join2_load_storesi */
        case 720:  /* *join2_load_storesf */
        case 721:  /* *join2_load_storedf */
        case 1061:  /* movv2si_internal */
        case 1062:  /* movv4hi_internal */
        case 1063:  /* movv8qi_internal */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_true (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
eligible_for_annul_false (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  if (num_delay_slots (delay_insn) == 0)
    return 0;
  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 717:  /* mips_set_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
    case 714:  /* mips_get_fcsr_mips16_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 710:  /* *tls_get_tp_mips16_call_si */
      slot += 4 * 1;
      break;
      break;

    case 662:  /* call_value_direct_split */
    case 658:  /* call_direct_split */
      extract_constrain_insn_cached (insn);
      if (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 661:  /* call_value_internal_direct */
    case 657:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (((
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO))) && (
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 663:  /* call_value_multiple_internal */
    case 659:  /* call_value_internal */
    case 655:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 664:  /* call_value_multiple_split */
    case 660:  /* call_value_split */
    case 656:  /* call_split */
    case 654:  /* sibcall_value_multiple_internal */
    case 653:  /* sibcall_value_internal */
    case 652:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
      extract_constrain_insn_cached (insn);
      if ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1682:  /* msa_bnz_b */
    case 1681:  /* msa_bz_b */
    case 1680:  /* msa_bnz_h */
    case 1679:  /* msa_bz_h */
    case 1678:  /* msa_bnz_w */
    case 1677:  /* msa_bz_w */
    case 1676:  /* msa_bnz_d */
    case 1675:  /* msa_bz_d */
    case 1674:  /* msa_bnz_w_f */
    case 1673:  /* msa_bz_w_f */
    case 1672:  /* msa_bnz_d_f */
    case 1671:  /* msa_bz_d_f */
    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
      extract_constrain_insn_cached (insn);
      if (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  slot += 2 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((which_alternative == 0) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS))))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 951:  /* mips_bposge */
    case 832:  /* *branch_upper_lower_inverted */
    case 831:  /* *branch_upper_lower */
    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
    case 619:  /* *jump_mips16 */
    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (! (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 777 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)))
        {
	  slot += 4 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_JUMP) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)))
        {
	  slot += 3 * 1;
      break;
        }
      else if (((get_attr_type (insn) == TYPE_BRANCH) || (get_attr_type (insn) == TYPE_SIMD_BRANCH)) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((
#line 1132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_NEVER)) || ((get_attr_compact_form (insn) == COMPACT_FORM_MAYBE) && (! (
#line 1134 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_CB_ALWAYS)))) || (get_attr_compact_form (insn) == COMPACT_FORM_NEVER)) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_NO))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && (! (
#line 493 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_YES))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 4:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        default:
	  return 0;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 826:  /* sungt_ps */
        case 825:  /* sunge_ps */
        case 824:  /* sgt_ps */
        case 823:  /* sge_ps */
        case 822:  /* sne_ps */
        case 821:  /* sltgt_ps */
        case 820:  /* sordered_ps */
        case 819:  /* sle_ps */
        case 818:  /* slt_ps */
        case 817:  /* seq_ps */
        case 816:  /* sunle_ps */
        case 815:  /* sunlt_ps */
        case 814:  /* suneq_ps */
        case 813:  /* sunordered_ps */
        case 812:  /* mips_cabs_cond_ps */
        case 811:  /* mips_c_cond_ps */
        case 810:  /* mips_cabs_cond_4s */
        case 809:  /* mips_c_cond_4s */
        case 808:  /* mips_cabs_cond_d */
        case 807:  /* mips_cabs_cond_s */
        case 616:  /* sungt_df_using_ccf */
        case 615:  /* sunge_df_using_ccf */
        case 614:  /* sgt_df_using_ccf */
        case 613:  /* sge_df_using_ccf */
        case 612:  /* sungt_sf_using_ccf */
        case 611:  /* sunge_sf_using_ccf */
        case 610:  /* sgt_sf_using_ccf */
        case 609:  /* sge_sf_using_ccf */
        case 608:  /* sungt_df_using_cc */
        case 607:  /* sunge_df_using_cc */
        case 606:  /* sgt_df_using_cc */
        case 605:  /* sge_df_using_cc */
        case 604:  /* sungt_sf_using_cc */
        case 603:  /* sunge_sf_using_cc */
        case 602:  /* sgt_sf_using_cc */
        case 601:  /* sge_sf_using_cc */
        case 600:  /* sne_df_using_ccf */
        case 599:  /* sltgt_df_using_ccf */
        case 598:  /* sordered_df_using_ccf */
        case 597:  /* sle_df_using_ccf */
        case 596:  /* slt_df_using_ccf */
        case 595:  /* seq_df_using_ccf */
        case 594:  /* sunle_df_using_ccf */
        case 593:  /* sunlt_df_using_ccf */
        case 592:  /* suneq_df_using_ccf */
        case 591:  /* sunordered_df_using_ccf */
        case 590:  /* sne_sf_using_ccf */
        case 589:  /* sltgt_sf_using_ccf */
        case 588:  /* sordered_sf_using_ccf */
        case 587:  /* sle_sf_using_ccf */
        case 586:  /* slt_sf_using_ccf */
        case 585:  /* seq_sf_using_ccf */
        case 584:  /* sunle_sf_using_ccf */
        case 583:  /* sunlt_sf_using_ccf */
        case 582:  /* suneq_sf_using_ccf */
        case 581:  /* sunordered_sf_using_ccf */
        case 580:  /* sle_df_using_cc */
        case 579:  /* slt_df_using_cc */
        case 578:  /* seq_df_using_cc */
        case 577:  /* sunle_df_using_cc */
        case 576:  /* sunlt_df_using_cc */
        case 575:  /* suneq_df_using_cc */
        case 574:  /* sunordered_df_using_cc */
        case 573:  /* sle_sf_using_cc */
        case 572:  /* slt_sf_using_cc */
        case 571:  /* seq_sf_using_cc */
        case 570:  /* sunle_sf_using_cc */
        case 569:  /* sunlt_sf_using_cc */
        case 568:  /* suneq_sf_using_cc */
        case 567:  /* sunordered_sf_using_cc */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 753 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 1694:  /* msa_bnz_v_b */
        case 1693:  /* msa_bz_v_b */
        case 1692:  /* msa_bnz_v_h */
        case 1691:  /* msa_bz_v_h */
        case 1690:  /* msa_bnz_v_w */
        case 1689:  /* msa_bz_v_w */
        case 1688:  /* msa_bnz_v_d */
        case 1687:  /* msa_bz_v_d */
        case 1686:  /* msa_bnz_v_w_f */
        case 1685:  /* msa_bz_v_w_f */
        case 1684:  /* msa_bnz_v_d_f */
        case 1683:  /* msa_bz_v_d_f */
        case 1682:  /* msa_bnz_b */
        case 1681:  /* msa_bz_b */
        case 1680:  /* msa_bnz_h */
        case 1679:  /* msa_bz_h */
        case 1678:  /* msa_bnz_w */
        case 1677:  /* msa_bz_w */
        case 1676:  /* msa_bnz_d */
        case 1675:  /* msa_bz_d */
        case 1674:  /* msa_bnz_w_f */
        case 1673:  /* msa_bz_w_f */
        case 1672:  /* msa_bnz_d_f */
        case 1671:  /* msa_bz_d_f */
        case 1060:  /* *movepsfsf */
        case 1059:  /* *movepsfsi */
        case 1058:  /* *movepsisf */
        case 1057:  /* *movepsisi */
        case 1056:  /* jraddiusp */
        case 1055:  /* *swp */
        case 1054:  /* *lwp */
        case 1053:  /* *load_word_multiple */
        case 1052:  /* *store_word_multiple */
        case 951:  /* mips_bposge */
        case 832:  /* *branch_upper_lower_inverted */
        case 831:  /* *branch_upper_lower */
        case 830:  /* bc1any2f */
        case 829:  /* bc1any2t */
        case 828:  /* bc1any4f */
        case 827:  /* bc1any4t */
        case 717:  /* mips_set_fcsr_mips16_di */
        case 716:  /* mips_set_fcsr_mips16_si */
        case 714:  /* mips_get_fcsr_mips16_di */
        case 713:  /* mips_get_fcsr_mips16_si */
        case 711:  /* *tls_get_tp_mips16_call_di */
        case 710:  /* *tls_get_tp_mips16_call_si */
        case 707:  /* *tls_get_tp_di_split */
        case 706:  /* *tls_get_tp_si_split */
        case 664:  /* call_value_multiple_split */
        case 663:  /* call_value_multiple_internal */
        case 662:  /* call_value_direct_split */
        case 661:  /* call_value_internal_direct */
        case 660:  /* call_value_split */
        case 659:  /* call_value_internal */
        case 658:  /* call_direct_split */
        case 657:  /* call_internal_direct */
        case 656:  /* call_split */
        case 655:  /* call_internal */
        case 654:  /* sibcall_value_multiple_internal */
        case 653:  /* sibcall_value_internal */
        case 652:  /* sibcall_internal */
        case 634:  /* simple_return_internal */
        case 633:  /* return_internal */
        case 632:  /* *simple_return */
        case 631:  /* *return */
        case 630:  /* probe_stack_range_di */
        case 629:  /* probe_stack_range_si */
        case 625:  /* tablejump_di */
        case 624:  /* tablejump_si */
        case 621:  /* indirect_jump_di */
        case 620:  /* indirect_jump_si */
        case 619:  /* *jump_mips16 */
        case 618:  /* *jump_pic */
        case 617:  /* *jump_absolute */
        case 490:  /* *branch_bit1di_inverted */
        case 489:  /* *branch_bit0di_inverted */
        case 488:  /* *branch_bit1si_inverted */
        case 487:  /* *branch_bit0si_inverted */
        case 486:  /* *branch_bit1di */
        case 485:  /* *branch_bit0di */
        case 484:  /* *branch_bit1si */
        case 483:  /* *branch_bit0si */
        case 482:  /* *branch_equalitydi_mips16_inverted */
        case 481:  /* *branch_equalitysi_mips16_inverted */
        case 480:  /* *branch_equalitydi_mips16 */
        case 479:  /* *branch_equalitysi_mips16 */
        case 478:  /* *branch_equalitydi_inverted */
        case 477:  /* *branch_equalitysi_inverted */
        case 476:  /* *branch_equalitydi */
        case 475:  /* *branch_equalitysi */
        case 474:  /* *branch_orderdi_inverted */
        case 473:  /* *branch_ordersi_inverted */
        case 472:  /* *branch_orderdi */
        case 471:  /* *branch_ordersi */
        case 470:  /* *branch_fp_inverted_ccf */
        case 469:  /* *branch_fp_inverted_cc */
        case 468:  /* *branch_fp_ccf */
        case 467:  /* *branch_fp_cc */
        case 440:  /* r10k_cache_barrier */
	  return 0;

        case 1162:  /* vec_loongson_extract_lo_v8qi */
        case 1161:  /* vec_loongson_extract_lo_v4hi */
        case 1160:  /* vec_loongson_extract_lo_v2si */
        case 1065:  /* loongson_vec_init1_v8qi */
        case 1064:  /* loongson_vec_init1_v4hi */
        case 641:  /* cop0_move */
        case 417:  /* mfhc1tf */
        case 416:  /* mfhc1v8qi */
        case 415:  /* mfhc1v4hi */
        case 414:  /* mfhc1v2si */
        case 413:  /* mfhc1v2sf */
        case 412:  /* mfhc1di */
        case 411:  /* mfhc1df */
        case 410:  /* mthc1tf */
        case 409:  /* mthc1v8qi */
        case 408:  /* mthc1v4hi */
        case 407:  /* mthc1v2si */
        case 406:  /* mthc1v2sf */
        case 405:  /* mthc1di */
        case 404:  /* mthc1df */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 749 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 379:  /* mfhidi_ti */
        case 378:  /* mfhisi_ti */
        case 377:  /* mfhisi_di */
	  extract_constrain_insn_cached (insn);
	  if ((
#line 762 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 950:  /* *mips_lwux_di_ext */
        case 949:  /* *mips_lwx_di_ext */
        case 948:  /* *mips_lwux_si_ext */
        case 947:  /* *mips_lwx_si_ext */
        case 946:  /* mips_ldx_di */
        case 945:  /* mips_lwx_di */
        case 944:  /* mips_ldx_si */
        case 943:  /* mips_lwx_si */
        case 942:  /* mips_lhux_extdi_di */
        case 941:  /* mips_lhx_extdi_di */
        case 940:  /* mips_lhux_extsi_di */
        case 939:  /* mips_lhx_extsi_di */
        case 938:  /* mips_lbux_extdi_di */
        case 937:  /* mips_lbx_extdi_di */
        case 936:  /* mips_lbux_extsi_di */
        case 935:  /* mips_lbx_extsi_di */
        case 934:  /* mips_lhux_extdi_si */
        case 933:  /* mips_lhx_extdi_si */
        case 932:  /* mips_lhux_extsi_si */
        case 931:  /* mips_lhx_extsi_si */
        case 930:  /* mips_lbux_extdi_si */
        case 929:  /* mips_lbx_extdi_si */
        case 928:  /* mips_lbux_extsi_si */
        case 927:  /* mips_lbx_extsi_si */
        case 723:  /* *join2_loadhi */
        case 722:  /* *join2_loadhi */
        case 649:  /* load_calldi */
        case 648:  /* load_callsi */
        case 458:  /* *mips.md:5842 */
        case 360:  /* *lwxs */
        case 359:  /* *lwxs */
        case 358:  /* *lwxs */
        case 357:  /* *lwxs */
        case 356:  /* *lwxs */
        case 355:  /* *lwxs */
        case 354:  /* *lwxs */
        case 353:  /* *lwxs */
        case 352:  /* *lwxs */
        case 351:  /* *lwxs */
        case 350:  /* *lwxs */
        case 349:  /* *lwxs */
        case 348:  /* *lwxs */
        case 347:  /* *lwxs */
        case 346:  /* *lwxs */
        case 345:  /* *lwxs */
        case 344:  /* *lwxs */
        case 343:  /* *lwxs */
        case 336:  /* *ldxc1_di */
        case 335:  /* *ldxc1_di */
        case 334:  /* *lwxc1_di */
        case 333:  /* *ldxc1_si */
        case 332:  /* *ldxc1_si */
        case 331:  /* *lwxc1_si */
        case 302:  /* load_gotdi */
        case 301:  /* load_gotsi */
        case 300:  /* *got_pagedi */
        case 299:  /* *got_pagesi */
        case 298:  /* *got_dispdi */
        case 297:  /* *got_dispsi */
        case 296:  /* *xgot_lodi */
        case 295:  /* *xgot_losi */
        case 284:  /* mov_ldr */
        case 283:  /* mov_lwr */
        case 282:  /* mov_ldl */
        case 281:  /* mov_lwl */
        case 229:  /* *zero_extendqihi2_mips16 */
        case 227:  /* *zero_extendhidi2_mips16 */
        case 226:  /* *zero_extendhisi2_mips16 */
        case 225:  /* *zero_extendqidi2_mips16 */
        case 224:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 745 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 80:  /* umulditi3_r4000 */
        case 79:  /* mulditi3_r4000 */
        case 78:  /* umulditi3_internal */
        case 77:  /* mulditi3_internal */
        case 76:  /* umuldi3_highpart_internal */
        case 75:  /* smuldi3_highpart_internal */
        case 68:  /* umulsi3_highpart_internal */
        case 67:  /* smulsi3_highpart_internal */
        case 62:  /* *mulsu_di */
        case 61:  /* *muls_di */
        case 58:  /* umulsidi3_64bit_hilo */
        case 57:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit */
        case 41:  /* muldi3_r4000 */
        case 40:  /* mulsi3_r4000 */
        case 39:  /* muldi3_internal */
        case 38:  /* mulsi3_internal */
	  extract_constrain_insn_cached (insn);
	  if ((! (
#line 758 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  /* FALLTHRU */
        case 36:  /* mulsi3_mul3 */
        case 37:  /* muldi3_mul3 */
        case 50:  /* *muls */
        case 183:  /* *andsi3 */
        case 184:  /* *anddi3 */
        case 185:  /* *andsi3_mips16 */
        case 186:  /* *anddi3_mips16 */
        case 214:  /* *zero_extendsidi2 */
        case 215:  /* *zero_extendsidi2_dext */
        case 216:  /* *zero_extendqisi2 */
        case 217:  /* *zero_extendqidi2 */
        case 218:  /* *zero_extendhisi2 */
        case 219:  /* *zero_extendhidi2 */
        case 228:  /* *zero_extendqihi2 */
        case 235:  /* extendsidi2 */
        case 236:  /* *extendqisi2_mips16e */
        case 237:  /* *extendqidi2_mips16e */
        case 238:  /* *extendhisi2_mips16e */
        case 239:  /* *extendhidi2_mips16e */
        case 240:  /* *extendqisi2 */
        case 241:  /* *extendqidi2 */
        case 242:  /* *extendhisi2 */
        case 243:  /* *extendhidi2 */
        case 244:  /* *extendqisi2_seb */
        case 245:  /* *extendqidi2_seb */
        case 246:  /* *extendhisi2_seh */
        case 247:  /* *extendhidi2_seh */
        case 248:  /* *extendqihi2_mips16e */
        case 249:  /* *extendqihi2 */
        case 250:  /* *extendqihi2_seb */
        case 309:  /* *movdi_32bit */
        case 310:  /* *movdi_32bit_mips16 */
        case 311:  /* *movdi_64bit */
        case 312:  /* *movdi_64bit_mips16 */
        case 313:  /* *movsi_internal */
        case 314:  /* *movv2hi_internal */
        case 315:  /* *movv4qi_internal */
        case 316:  /* *movv2hq_internal */
        case 317:  /* *movv2uhq_internal */
        case 318:  /* *movv2ha_internal */
        case 319:  /* *movv2uha_internal */
        case 320:  /* *movv4qq_internal */
        case 321:  /* *movv4uqq_internal */
        case 322:  /* *movsi_mips16 */
        case 323:  /* *movv2hi_mips16 */
        case 324:  /* *movv4qi_mips16 */
        case 325:  /* *movv2hq_mips16 */
        case 326:  /* *movv2uhq_mips16 */
        case 327:  /* *movv2ha_mips16 */
        case 328:  /* *movv2uha_mips16 */
        case 329:  /* *movv4qq_mips16 */
        case 330:  /* *movv4uqq_mips16 */
        case 361:  /* *movhi_internal */
        case 362:  /* *movhi_mips16 */
        case 363:  /* *movqi_internal */
        case 364:  /* *movqi_mips16 */
        case 365:  /* movccf */
        case 366:  /* *movsf_hardfloat */
        case 367:  /* *movsf_softfloat */
        case 368:  /* *movsf_mips16 */
        case 369:  /* *movdf_hardfloat */
        case 370:  /* *movdf_softfloat */
        case 371:  /* *movdf_mips16 */
        case 372:  /* *movti */
        case 373:  /* *movti_mips16 */
        case 374:  /* *movtf */
        case 375:  /* *movtf_mips16 */
        case 376:  /* *movv2sf */
        case 383:  /* load_lowdf */
        case 384:  /* load_lowdi */
        case 385:  /* load_lowv2sf */
        case 386:  /* load_lowv2si */
        case 387:  /* load_lowv4hi */
        case 388:  /* load_lowv8qi */
        case 389:  /* load_lowtf */
        case 390:  /* load_highdf */
        case 391:  /* load_highdi */
        case 392:  /* load_highv2sf */
        case 393:  /* load_highv2si */
        case 394:  /* load_highv4hi */
        case 395:  /* load_highv8qi */
        case 396:  /* load_hightf */
        case 397:  /* store_worddf */
        case 398:  /* store_worddi */
        case 399:  /* store_wordv2sf */
        case 400:  /* store_wordv2si */
        case 401:  /* store_wordv4hi */
        case 402:  /* store_wordv8qi */
        case 403:  /* store_wordtf */
        case 718:  /* *join2_load_storehi */
        case 719:  /* *join2_load_storesi */
        case 720:  /* *join2_load_storesf */
        case 721:  /* *join2_load_storedf */
        case 1061:  /* movv2si_internal */
        case 1062:  /* movv4hi_internal */
        case 1063:  /* movv8qi_internal */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if (
#line 770 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(get_attr_insn_count (insn) == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
const_num_delay_slots (rtx_insn *insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
