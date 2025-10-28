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
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_alu_type cached_alu_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_jal cached_jal ATTRIBUTE_UNUSED;
  enum attr_cnv_mode cached_cnv_mode ATTRIBUTE_UNUSED;
  enum attr_ls2_turn_type cached_ls2_turn_type ATTRIBUTE_UNUSED;
  enum attr_sb1_fp_pipes cached_sb1_fp_pipes ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1053:  /* *load_word_multiple */
    case 1052:  /* *store_word_multiple */
      if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F)))))
        {
	  return 565 /* 0x235 */;
        }
      else
        {
	  return 795 /* 0x31b */;
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
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (! ((cached_mode = get_attr_mode (insn)) == MODE_V2DI)) && ((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_SIMD_ADD))
        {
	  return 1;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_INT_ARITH))
        {
	  return 2;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_SAT) || (cached_type == TYPE_SIMD_PCNT)))
        {
	  return 3;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_SHIFT) || (cached_type == TYPE_SIMD_SHF) || (cached_type == TYPE_SIMD_BIT)))
        {
	  return 4;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_PERMUTE) || (cached_type == TYPE_SIMD_LOGIC) || (cached_type == TYPE_SIMD_SPLAT) || (cached_type == TYPE_SIMD_FILL)))
        {
	  return 5;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_MOVE))
        {
	  return 6;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_FCMP))
        {
	  return 7;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_FMINMAX) || (cached_type == TYPE_SIMD_FCLASS)))
        {
	  return 8;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_V2DI) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 9;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_V4SI) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_V8HI) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_V16QI) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_COPY))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_BRANCH))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_STORE))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_LOAD))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_CMSA))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_BITMOV) || (cached_type == TYPE_SIMD_INSERT)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_BITINS) || (cached_type == TYPE_SIMD_SLD)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_MUL))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_FLOG2))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_FADD) || (cached_type == TYPE_SIMD_FCVT)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SIMD_FMUL) || (cached_type == TYPE_SIMD_FEXP2)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_FMADD))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_V2DF) && (cached_type == TYPE_SIMD_FDIV))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_SIMD_FDIV))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCVT)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_FMUL))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_MFC) || (cached_move_type == MOVE_TYPE_MTC)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_FCMP))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_FMADD))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOGICAL) || (cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_ANDI) || (cached_move_type == MOVE_TYPE_SLL0) || (cached_move_type == MOVE_TYPE_SIGNEXT)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_ADD) || (cached_alu_type == ALU_TYPE_SUB) || (cached_alu_type == ALU_TYPE_OR) || (cached_alu_type == ALU_TYPE_XOR) || (cached_alu_type == ALU_TYPE_NOR)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_ARITH)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_NOP))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3NC)))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_LOAD))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_STORE))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (cached_type == TYPE_PREFETCH))
        {
	  return 45 /* 0x2d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 46 /* 0x2e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_I6400)))) && (((cached_jal = get_attr_jal (insn)) == JAL_INDIRECT) || (cached_jal == JAL_DIRECT)))
        {
	  return 47 /* 0x2f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_INT_ARITH))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_SHIFT) || (cached_type == TYPE_SIMD_BIT) || (cached_type == TYPE_SIMD_SPLAT) || (cached_type == TYPE_SIMD_FILL) || (cached_type == TYPE_SIMD_SHF) || (cached_type == TYPE_SIMD_PERMUTE) || (cached_type == TYPE_SIMD_LOGIC)))
        {
	  return 49 /* 0x31 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_MOVE))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_FCMP))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_FEXP2) || (cached_type == TYPE_SIMD_FMINMAX)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_SAT) || (cached_type == TYPE_SIMD_PCNT)))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_COPY) || (cached_type == TYPE_SIMD_BRANCH) || (cached_type == TYPE_SIMD_CMSA)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_LOAD))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_STORE))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_BITINS) || (cached_type == TYPE_SIMD_BITMOV) || (cached_type == TYPE_SIMD_INSERT) || (cached_type == TYPE_SIMD_SLD)))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_FCLASS) || (cached_type == TYPE_SIMD_FLOG2)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SIMD_FADD) || (cached_type == TYPE_SIMD_FCVT)))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_FMUL))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_FMADD))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_MUL))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_FDIV))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_FADD))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_FMADD))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_FMUL))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))
        {
	  return 71 /* 0x47 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_FCVT))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_MTC))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_MFC))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOGICAL))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_CONST))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOAD))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_STORE))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_ANDI) || (cached_move_type == MOVE_TYPE_SLL0) || (cached_move_type == MOVE_TYPE_SIGNEXT)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_ADD) || (cached_alu_type == ALU_TYPE_OR) || (cached_alu_type == ALU_TYPE_XOR)))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_NOR) || (cached_alu_type == ALU_TYPE_SUB)))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MOVE)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_NOP))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_CLZ))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_IMADD))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMUL)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_IDIV))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (cached_type == TYPE_ARITH))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P5600)))) && (((cached_jal = get_attr_jal (insn)) == JAL_INDIRECT) || (cached_jal == JAL_DIRECT)))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_CLZ)))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_NOP))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_CALL))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_STORE))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_IMUL3))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_IDIV))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FMOVE))
        {
	  return 109 /* 0x6d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))
        {
	  return 110 /* 0x6e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FCMP))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2I) || (cached_cnv_mode == CNV_MODE_S2I)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2D) || (cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_I2S)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_M5100)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_INT_ARITH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_SHIFT) || (cached_type == TYPE_SIMD_BIT) || (cached_type == TYPE_SIMD_SPLAT) || (cached_type == TYPE_SIMD_FILL) || (cached_type == TYPE_SIMD_SHF) || (cached_type == TYPE_SIMD_PERMUTE) || (cached_type == TYPE_SIMD_LOGIC)))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_MOVE))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_FCMP))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_FEXP2) || (cached_type == TYPE_SIMD_FMINMAX)))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_SAT) || (cached_type == TYPE_SIMD_PCNT)))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_COPY) || (cached_type == TYPE_SIMD_BRANCH) || (cached_type == TYPE_SIMD_CMSA)))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_LOAD))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_STORE))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_BITINS) || (cached_type == TYPE_SIMD_BITMOV) || (cached_type == TYPE_SIMD_INSERT) || (cached_type == TYPE_SIMD_SLD)))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_FCLASS) || (cached_type == TYPE_SIMD_FLOG2)))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SIMD_FADD) || (cached_type == TYPE_SIMD_FCVT)))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_FMUL))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_FMADD))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_MUL))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_FDIV))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_SIMD_DIV))
        {
	  return 140 /* 0x8c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_FADD))
        {
	  return 141 /* 0x8d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)) || ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))))
        {
	  return 142 /* 0x8e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_FMADD))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_FMUL))
        {
	  return 146 /* 0x92 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))
        {
	  return 147 /* 0x93 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_FCVT))
        {
	  return 148 /* 0x94 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_MTC))
        {
	  return 149 /* 0x95 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_MFC))
        {
	  return 150 /* 0x96 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOGICAL))
        {
	  return 151 /* 0x97 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_CONST))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_LOAD))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_STORE))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_ANDI) || (cached_move_type == MOVE_TYPE_SLL0) || (cached_move_type == MOVE_TYPE_SIGNEXT)))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_ADD) || (cached_alu_type == ALU_TYPE_OR) || (cached_alu_type == ALU_TYPE_XOR)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_AND) || (cached_alu_type == ALU_TYPE_NOT) || (cached_alu_type == ALU_TYPE_NOR) || (cached_alu_type == ALU_TYPE_SUB)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MOVE)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_NOP))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_CLZ))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3NC)))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3)))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (cached_type == TYPE_ARITH))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_P6600)))) && (((cached_jal = get_attr_jal (insn)) == JAL_INDIRECT) || (cached_jal == JAL_DIRECT)))
        {
	  return 169 /* 0xa9 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_LOAD))
        {
	  return 170 /* 0xaa */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_PREFETCH))
        {
	  return 171 /* 0xab */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_STORE))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && (cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && (cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && (cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && (cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && (cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && (cached_type == TYPE_IMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 179 /* 0xb3 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 180 /* 0xb4 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 181 /* 0xb5 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 182 /* 0xb6 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_BRANCH))
        {
	  return 183 /* 0xb7 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 184 /* 0xb8 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_LOAD))
        {
	  return 186 /* 0xba */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 187 /* 0xbb */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_STORE))
        {
	  return 188 /* 0xbc */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 189 /* 0xbd */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 190 /* 0xbe */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 191 /* 0xbf */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 192 /* 0xc0 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 193 /* 0xc1 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 194 /* 0xc2 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 195 /* 0xc3 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 196 /* 0xc4 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_BRANCH))
        {
	  return 197 /* 0xc5 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 198 /* 0xc6 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FMOVE))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FCMP))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || (cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) && (cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_CONDMOVE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MOVE) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_NOP)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_SHIFT))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_STORE))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IMADD) || (cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IMADD) || (cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MTC))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MFC))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP)))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || (cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S) || (cached_cnv_mode == CNV_MODE_S2I)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 240 /* 0xf0 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_LOAD))
        {
	  return 241 /* 0xf1 */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 242 /* 0xf2 */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_JUMP)))
        {
	  return 243 /* 0xf3 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_BRANCH))
        {
	  return 244 /* 0xf4 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_IMUL))
        {
	  return 245 /* 0xf5 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_IMADD))
        {
	  return 246 /* 0xf6 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_IMUL3))
        {
	  return 247 /* 0xf7 */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 248 /* 0xf8 */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 249 /* 0xf9 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_IDIV))
        {
	  return 250 /* 0xfa */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_STORE))
        {
	  return 251 /* 0xfb */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_MULTI))
        {
	  return 252 /* 0xfc */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 253 /* 0xfd */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 254 /* 0xfe */;
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
(PROCESSOR_24KF1_1))))) && ((cached_type == TYPE_DSPALU) || (cached_type == TYPE_DSPALUSAT)))
        {
	  return 255 /* 0xff */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_DSPMAC))
        {
	  return 256 /* 0x100 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_DSPMACSAT))
        {
	  return 257 /* 0x101 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_ACCEXT))
        {
	  return 258 /* 0x102 */;
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
(PROCESSOR_24KF1_1))))) && (cached_type == TYPE_ACCMOD))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || (cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I)))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || (cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I)))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 287 /* 0x11f */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 288 /* 0x120 */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_CLZ)))
        {
	  return 289 /* 0x121 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_NOP))
        {
	  return 290 /* 0x122 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 291 /* 0x123 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_IMUL))
        {
	  return 292 /* 0x124 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_IMADD))
        {
	  return 293 /* 0x125 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_IMUL3))
        {
	  return 294 /* 0x126 */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 295 /* 0x127 */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 296 /* 0x128 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_IDIV))
        {
	  return 297 /* 0x129 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_CALL))
        {
	  return 298 /* 0x12a */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 299 /* 0x12b */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 300 /* 0x12c */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_STORE))
        {
	  return 301 /* 0x12d */;
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
(PROCESSOR_74KF3_2))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 302 /* 0x12e */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_MULTI))
        {
	  return 303 /* 0x12f */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_DSPALU))
        {
	  return 304 /* 0x130 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_DSPALUSAT))
        {
	  return 305 /* 0x131 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_DSPMAC))
        {
	  return 306 /* 0x132 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_DSPMACSAT))
        {
	  return 307 /* 0x133 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_ACCEXT))
        {
	  return 308 /* 0x134 */;
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
(PROCESSOR_74KF3_2))))) && (cached_type == TYPE_ACCMOD))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG)))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FMOVE))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCMP))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCVT))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MTC))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MTC))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MTC))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MFC))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MFC))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MFC))
        {
	  return 351 /* 0x15f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 352 /* 0x160 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 353 /* 0x161 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (cached_type == TYPE_IDIV))
        {
	  return 354 /* 0x162 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 355 /* 0x163 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FADD)))
        {
	  return 356 /* 0x164 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 357 /* 0x165 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 358 /* 0x166 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 359 /* 0x167 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && (cached_type == TYPE_IDIV))
        {
	  return 362 /* 0x16a */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 363 /* 0x16b */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 364 /* 0x16c */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 365 /* 0x16d */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 366 /* 0x16e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MULTI) || (cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_LOAD))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_STORE))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_IMADD))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (cached_type == TYPE_FADD))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 392 /* 0x188 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 393 /* 0x189 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && (cached_type == TYPE_IDIV))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 398 /* 0x18e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 399 /* 0x18f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 400 /* 0x190 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650))))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 403 /* 0x193 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 404 /* 0x194 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 405 /* 0x195 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 406 /* 0x196 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_STORE))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO) || (cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FADD))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCMP))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCVT))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_MULTI))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_IMADD))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FADD))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FCMP))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_MULTI))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FCMP))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FADD))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FMOVE)))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FADD))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FCVT))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI)))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCVT)))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_LOGICAL)))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFHI))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFLO))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI)))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MTC))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFC))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP)))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMOVE)))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FCVT) && (! ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S)))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FMADD))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 547 /* 0x223 */;
        }
      else if ((cached_ls2_turn_type = get_attr_ls2_turn_type (insn)) == LS2_TURN_TYPE_ALU1)
        {
	  return 548 /* 0x224 */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_ALU2)
        {
	  return 549 /* 0x225 */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU1)
        {
	  return 550 /* 0x226 */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU2)
        {
	  return 551 /* 0x227 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 552 /* 0x228 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))
        {
	  return 553 /* 0x229 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3NC)))
        {
	  return 554 /* 0x22a */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3)))
        {
	  return 555 /* 0x22b */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 556 /* 0x22c */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 557 /* 0x22d */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 558 /* 0x22e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 559 /* 0x22f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FCVT))
        {
	  return 560 /* 0x230 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 561 /* 0x231 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FDIV))
        {
	  return 562 /* 0x232 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FSQRT))
        {
	  return 563 /* 0x233 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_MULTI))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F)))))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_TRAP)))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && (cached_type == TYPE_IMUL3NC))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && (cached_type == TYPE_LOAD))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG)))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && (cached_type == TYPE_FCVT))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_TRAP)))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && (cached_type == TYPE_IMUL3NC))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && (cached_type == TYPE_LOAD))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 593 /* 0x251 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 594 /* 0x252 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG)))
        {
	  return 595 /* 0x253 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && (cached_type == TYPE_FCVT))
        {
	  return 596 /* 0x254 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 597 /* 0x255 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 598 /* 0x256 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS464E)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 599 /* 0x257 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))
        {
	  return 600 /* 0x258 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_TRAP)))
        {
	  return 601 /* 0x259 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 602 /* 0x25a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && (cached_type == TYPE_IMUL3NC))
        {
	  return 603 /* 0x25b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 604 /* 0x25c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 605 /* 0x25d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 606 /* 0x25e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && (cached_type == TYPE_LOAD))
        {
	  return 607 /* 0x25f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 608 /* 0x260 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 609 /* 0x261 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 610 /* 0x262 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 611 /* 0x263 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG)))
        {
	  return 612 /* 0x264 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && (cached_type == TYPE_FCVT))
        {
	  return 613 /* 0x265 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 614 /* 0x266 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 615 /* 0x267 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_GS264E)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 616 /* 0x268 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_NOP)))
        {
	  return 617 /* 0x269 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 618 /* 0x26a */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && (cached_type == TYPE_CONDMOVE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 619 /* 0x26b */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && (cached_type == TYPE_CONDMOVE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 620 /* 0x26c */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 621 /* 0x26d */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 622 /* 0x26e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 623 /* 0x26f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && (cached_type == TYPE_STORE))
        {
	  return 624 /* 0x270 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))
        {
	  return 625 /* 0x271 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))
        {
	  return 626 /* 0x272 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_POP) || (cached_type == TYPE_CLZ)))
        {
	  return 627 /* 0x273 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_POP) || (cached_type == TYPE_CLZ)))
        {
	  return 628 /* 0x274 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 629 /* 0x275 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 630 /* 0x276 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 631 /* 0x277 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 632 /* 0x278 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IMADD))
        {
	  return 633 /* 0x279 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && (cached_type == TYPE_IMADD))
        {
	  return 634 /* 0x27a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IDIV))
        {
	  return 635 /* 0x27b */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV))
        {
	  return 636 /* 0x27c */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV))
        {
	  return 637 /* 0x27d */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 638 /* 0x27e */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCVT)))
        {
	  return 639 /* 0x27f */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FMUL))
        {
	  return 640 /* 0x280 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FMADD))
        {
	  return 641 /* 0x281 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 642 /* 0x282 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 643 /* 0x283 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 644 /* 0x284 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 645 /* 0x285 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 646 /* 0x286 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 647 /* 0x287 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 648 /* 0x288 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_FCMP))
        {
	  return 649 /* 0x289 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))
        {
	  return 650 /* 0x28a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && (cached_type == TYPE_MTC))
        {
	  return 651 /* 0x28b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 653 /* 0x28d */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON3)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 654 /* 0x28e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 655 /* 0x28f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 656 /* 0x290 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 657 /* 0x291 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 658 /* 0x292 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPLOAD) && (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))
        {
	  return 659 /* 0x293 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPLOAD) && (! (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 660 /* 0x294 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPIDXLOAD) && (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))
        {
	  return 661 /* 0x295 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPIDXLOAD) && (! (
#line 79 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 662 /* 0x296 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_PREFETCHX))
        {
	  return 663 /* 0x297 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_STORE))
        {
	  return 664 /* 0x298 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPSTORE))
        {
	  return 665 /* 0x299 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPIDXSTORE))
        {
	  return 666 /* 0x29a */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT)))
        {
	  return 667 /* 0x29b */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT)))
        {
	  return 668 /* 0x29c */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT)))
        {
	  return 669 /* 0x29d */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP)))
        {
	  return 670 /* 0x29e */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFHI))
        {
	  return 671 /* 0x29f */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFLO))
        {
	  return 672 /* 0x2a0 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 673 /* 0x2a1 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 674 /* 0x2a2 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 675 /* 0x2a3 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 676 /* 0x2a4 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 677 /* 0x2a5 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 678 /* 0x2a6 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 679 /* 0x2a7 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 680 /* 0x2a8 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 681 /* 0x2a9 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 682 /* 0x2aa */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 683 /* 0x2ab */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FCMP))
        {
	  return 684 /* 0x2ac */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MTC))
        {
	  return 685 /* 0x2ad */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFC))
        {
	  return 686 /* 0x2ae */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 687 /* 0x2af */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 688 /* 0x2b0 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 689 /* 0x2b1 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 690 /* 0x2b2 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 691 /* 0x2b3 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 692 /* 0x2b4 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 693 /* 0x2b5 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 694 /* 0x2b6 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 695 /* 0x2b7 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 696 /* 0x2b8 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 697 /* 0x2b9 */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 698 /* 0x2ba */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 699 /* 0x2bb */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 700 /* 0x2bc */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))
        {
	  return 701 /* 0x2bd */;
        }
      else if (((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))
        {
	  return 702 /* 0x2be */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 703 /* 0x2bf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 704 /* 0x2c0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_LOAD))
        {
	  return 705 /* 0x2c1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_STORE))
        {
	  return 706 /* 0x2c2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 707 /* 0x2c3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 708 /* 0x2c4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 709 /* 0x2c5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MFC))
        {
	  return 710 /* 0x2c6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MTC))
        {
	  return 711 /* 0x2c7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO) || (cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 712 /* 0x2c8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CONST) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_TRAP)))
        {
	  return 713 /* 0x2c9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 714 /* 0x2ca */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 715 /* 0x2cb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 716 /* 0x2cc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 717 /* 0x2cd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 718 /* 0x2ce */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 719 /* 0x2cf */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 720 /* 0x2d0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 721 /* 0x2d1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 722 /* 0x2d2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 723 /* 0x2d3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 724 /* 0x2d4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCMP))
        {
	  return 725 /* 0x2d5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCVT))
        {
	  return 726 /* 0x2d6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 727 /* 0x2d7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 728 /* 0x2d8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 729 /* 0x2d9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 730 /* 0x2da */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MULTI))
        {
	  return 731 /* 0x2db */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_NOP))
        {
	  return 732 /* 0x2dc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_SLT))
        {
	  return 733 /* 0x2dd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CLZ))
        {
	  return 734 /* 0x2de */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MOVE) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_CONST) || (cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))
        {
	  return 735 /* 0x2df */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 736 /* 0x2e0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_LOAD))
        {
	  return 737 /* 0x2e1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_STORE))
        {
	  return 738 /* 0x2e2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 739 /* 0x2e3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 740 /* 0x2e4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 741 /* 0x2e5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 742 /* 0x2e6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_IDIV))
        {
	  return 743 /* 0x2e7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 744 /* 0x2e8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI)))
        {
	  return 745 /* 0x2e9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 746 /* 0x2ea */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 747 /* 0x2eb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_LOAD))
        {
	  return 748 /* 0x2ec */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 749 /* 0x2ed */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_NOP)))
        {
	  return 750 /* 0x2ee */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI)))
        {
	  return 751 /* 0x2ef */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 752 /* 0x2f0 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_IMUL3))
        {
	  return 753 /* 0x2f1 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV))
        {
	  return 754 /* 0x2f2 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV))
        {
	  return 755 /* 0x2f3 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 756 /* 0x2f4 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFC))
        {
	  return 757 /* 0x2f5 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFHI))
        {
	  return 758 /* 0x2f6 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFLO))
        {
	  return 759 /* 0x2f7 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTHI))
        {
	  return 760 /* 0x2f8 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTLO))
        {
	  return 761 /* 0x2f9 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FABS) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 762 /* 0x2fa */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCMP))
        {
	  return 763 /* 0x2fb */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCVT))
        {
	  return 764 /* 0x2fc */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)))
        {
	  return 765 /* 0x2fd */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)))
        {
	  return 766 /* 0x2fe */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && (cached_type == TYPE_FMADD))
        {
	  return 767 /* 0x2ff */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && (cached_type == TYPE_FMADD))
        {
	  return 768 /* 0x300 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT) || (cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2)))
        {
	  return 769 /* 0x301 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV) || (cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT) || (cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2)))
        {
	  return 770 /* 0x302 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 771 /* 0x303 */;
        }
      else if ((((
#line 737 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_SYNCLOOP))
        {
	  return 772 /* 0x304 */;
        }
      else if ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_MOVE))
        {
	  return 773 /* 0x305 */;
        }
      else if ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))
        {
	  return 774 /* 0x306 */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))
        {
	  return 775 /* 0x307 */;
        }
      else if ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))
        {
	  return 776 /* 0x308 */;
        }
      else if ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))
        {
	  return 777 /* 0x309 */;
        }
      else if ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO) || (cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))
        {
	  return 778 /* 0x30a */;
        }
      else if ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))
        {
	  return 779 /* 0x30b */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 780 /* 0x30c */;
        }
      else if (cached_type == TYPE_FCVT)
        {
	  return 781 /* 0x30d */;
        }
      else if ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))
        {
	  return 782 /* 0x30e */;
        }
      else if (cached_type == TYPE_FCMP)
        {
	  return 783 /* 0x30f */;
        }
      else if (cached_type == TYPE_FADD)
        {
	  return 784 /* 0x310 */;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 785 /* 0x311 */;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 786 /* 0x312 */;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 787 /* 0x313 */;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 788 /* 0x314 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 789 /* 0x315 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 790 /* 0x316 */;
        }
      else if ((cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))
        {
	  return 791 /* 0x317 */;
        }
      else if (cached_type == TYPE_ATOMIC)
        {
	  return 792 /* 0x318 */;
        }
      else if (cached_type == TYPE_SYNCLOOP)
        {
	  return 793 /* 0x319 */;
        }
      else
        {
	  return 795 /* 0x31b */;
        }

    }
}

