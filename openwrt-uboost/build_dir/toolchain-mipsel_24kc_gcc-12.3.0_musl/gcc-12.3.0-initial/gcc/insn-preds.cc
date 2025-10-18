/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"

bool
const_uns_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 22 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(SMALL_OPERAND_UNSIGNED (INTVAL (op))));
}

bool
uns_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_uns_arith_operand (op, mode)) || (register_operand (op, mode));
}

bool
const_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 30 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op))));
}

bool
arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_arith_operand (op, mode)) || (register_operand (op, mode));
}

bool
const_immlsa_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 38 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 1, 4)));
}

bool
const_msa_branch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 42 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), -1024, 1023)));
}

bool
const_uimm3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 46 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 7)));
}

bool
const_uimm4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 50 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

bool
const_uimm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 54 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
const_uimm6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 58 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(UIMM6_OPERAND (INTVAL (op))));
}

bool
const_uimm8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 62 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 255)));
}

bool
const_imm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 66 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), -16, 15)));
}

bool
const_imm10_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 70 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IMM10_OPERAND (INTVAL (op))));
}

bool
reg_imm10_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_imm10_operand (op, mode)) || (register_operand (op, mode));
}

bool
aq10b_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 78 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 10, 0)));
}

bool
aq10h_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 82 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 10, 1)));
}

bool
aq10w_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 86 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 10, 2)));
}

bool
aq10d_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 90 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 10, 3)));
}

bool
sle_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 94 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op) + 1)));
}

bool
sleu_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (sle_operand (op, mode)) && (
#line 98 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) + 1 != 0));
}

bool
const_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 102 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
const_m1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 106 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(op == CONSTM1_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
reg_or_m1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_m1_operand (op, mode)) || (register_operand (op, mode));
}

bool
reg_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((const_0_operand (op, mode)) && (!(
#line 114 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(TARGET_MIPS16)))) || (register_operand (op, mode));
}

bool
const_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 119 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(op == CONST1_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
reg_or_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_1_operand (op, mode)) || (register_operand (op, mode));
}

bool
const_exp_2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 128 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (exact_log2 (INTVAL (op)), 0, 1)));
}

bool
const_exp_4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 132 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (exact_log2 (INTVAL (op)), 0, 3)));
}

bool
const_exp_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 136 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (exact_log2 (INTVAL (op)), 0, 7)));
}

bool
const_exp_16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 140 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (exact_log2 (INTVAL (op)), 0, 15)));
}

bool
const_0_or_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 145 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 1)));
}

bool
const_2_or_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 149 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 2, 3)));
}

bool
const_0_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 153 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

bool
qi_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 157 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(UINTVAL (op) == 0xff));
}

bool
hi_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 161 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(UINTVAL (op) == 0xffff));
}

bool
si_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 165 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(UINTVAL (op) == 0xffffffff));
}

bool
and_load_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (qi_mask_operand (op, mode)) || ((hi_mask_operand (op, mode)) || (si_mask_operand (op, mode)));
}

bool
low_bitmask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 173 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(ISA_HAS_EXT_INS)) && ((GET_CODE (op) == CONST_INT) && (
#line 175 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(low_bitmask_len (mode, INTVAL (op)) > 16)));
}

bool
and_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((!(
#line 179 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(TARGET_MIPS16))) && (const_uns_arith_operand (op, mode))) || ((low_bitmask_operand (op, mode)) || (si_mask_operand (op, mode))));
}

bool
and_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (and_load_operand (op, mode)) || (and_reg_operand (op, mode));
}

bool
d_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 190 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(TARGET_MIPS16
		    ? M16_REG_P (REGNO (op))
		    : GP_REG_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
lwsp_swsp_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 196 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(lwsp_swsp_address_p (XEXP (op, 0), mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
lw16_sw16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 200 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(m16_based_address_p (XEXP (op, 0), mode, uw4_operand)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
lhu16_sh16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 204 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(m16_based_address_p (XEXP (op, 0), mode, uh4_operand)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
lbu16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 208 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(m16_based_address_p (XEXP (op, 0), mode, db4_operand)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
sb16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 212 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(m16_based_address_p (XEXP (op, 0), mode, ub4_operand)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
db4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 216 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op) + 1, 4, 0)));
}

bool
db7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 220 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op) + 1, 7, 0)));
}

bool
db8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 224 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op) + 1, 8, 0)));
}

bool
ib3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 228 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op) - 1, 3, 0)));
}

bool
sb4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 232 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 4, 0)));
}

bool
sb5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 236 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 5, 0)));
}

bool
sb8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 240 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 8, 0)));
}

bool
sd8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 244 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_signed_immediate_p (INTVAL (op), 8, 3)));
}

bool
ub4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 248 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 4, 0)));
}

bool
ub8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 252 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 8, 0)));
}

bool
uh4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 256 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 4, 1)));
}

bool
uw4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 260 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 4, 2)));
}

bool
uw5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 264 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 5, 2)));
}

bool
uw6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 268 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 6, 2)));
}

bool
uw8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 272 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_unsigned_immediate_p (INTVAL (op), 8, 2)));
}

bool
addiur2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 276 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == -1)) || ((
#line 277 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 1)) || ((
#line 278 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 4)) || ((
#line 279 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 8)) || ((
#line 280 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 12)) || ((
#line 281 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 16)) || ((
#line 282 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 20)) || (
#line 283 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 24)))))))));
}

bool
addiusp_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 287 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
((IN_RANGE (INTVAL (op), 2, 257)))) || (
#line 288 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
((IN_RANGE (INTVAL (op), -258, -3)))));
}

bool
andi16_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 292 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 1, 4))) || ((
#line 293 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 7, 8))) || ((
#line 294 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 15, 16))) || ((
#line 295 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 31, 32))) || ((
#line 296 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (INTVAL (op), 63, 64))) || ((
#line 297 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 255)) || ((
#line 298 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 32768)) || (
#line 299 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(INTVAL (op) == 65535)))))))));
}

bool
movep_src_register (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && ((
#line 303 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (REGNO (op), 2, 3))) || (
#line 304 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(IN_RANGE (REGNO (op), 16, 20))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
movep_src_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_0_operand (op, mode)) || (movep_src_register (op, mode));
}

bool
lo_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 312 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(REGNO (op) == LO_REGNUM))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
hilo_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 316 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(MD_REG_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
fcc_reload_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
#line 320 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(ST_REG_P (true_regnum (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
muldiv_target_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 323 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(TARGET_MIPS16)) ? (hilo_operand (op, mode)) : (register_operand (op, mode));
}

static inline bool
const_call_insn_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 329 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;

  if (!mips_symbolic_constant_p (op, SYMBOL_CONTEXT_CALL, &symbol_type))
    return false;

  switch (symbol_type)
    {
    case SYMBOL_ABSOLUTE:
      /* We can only use direct calls if we're sure that the target
	 function does not need $25 to be valid on entry.  */
      if (mips_use_pic_fn_addr_reg_p (op))
	return false;

      /* If -mlong-calls or if this function has an explicit long_call
	 attribute, we must use register addressing.  The
	 SYMBOL_FLAG_LONG_CALL bit is set by mips_encode_section_info.  */
      return !(GET_CODE (op) == SYMBOL_REF && SYMBOL_REF_LONG_CALL_P (op));

    case SYMBOL_GOT_DISP:
      /* Without explicit relocs, there is no special syntax for
	 loading the address of a call destination into a register.
	 Using "la $25,foo; jal $25" would prevent the lazy binding
	 of "foo", so keep the address of global symbols with the
	 jal macro.  */
      return !TARGET_EXPLICIT_RELOCS;

    default:
      return false;
    }
}

bool
const_call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(const_call_insn_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_call_insn_operand (op, mode)) || (register_operand (op, mode));
}

static inline bool
splittable_const_int_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 369 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  /* When generating mips16 code, TARGET_LEGITIMATE_CONSTANT_P rejects
     CONST_INTs that can't be loaded using simple insns.  */
  if (TARGET_MIPS16)
    return false;

  /* Don't handle multi-word moves this way; we don't want to introduce
     the individual word-mode moves until after reload.  */
  if (GET_MODE_SIZE (mode) > UNITS_PER_WORD)
    return false;

  /* Otherwise check whether the constant can be loaded in a single
     instruction.  */
  return !LUI_INT (op) && !SMALL_INT (op) && !SMALL_INT_UNSIGNED (op);
}

bool
splittable_const_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(splittable_const_int_operand_1 (op, mode)));
}

static inline bool
move_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 389 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;

  /* The thinking here is as follows:

     (1) The move expanders should split complex load sequences into
	 individual instructions.  Those individual instructions can
	 then be optimized by all rtl passes.

     (2) The target of pre-reload load sequences should not be used
	 to store temporary results.  If the target register is only
	 assigned one value, reload can rematerialize that value
	 on demand, rather than spill it to the stack.

     (3) If we allowed pre-reload passes like combine and cse to recreate
	 complex load sequences, we would want to be able to split the
	 sequences before reload as well, so that the pre-reload scheduler
	 can see the individual instructions.  This falls foul of (2);
	 the splitter would be forced to reuse the target register for
	 intermediate results.

     (4) We want to define complex load splitters for combine.  These
	 splitters can request a temporary scratch register, which avoids
	 the problem in (2).  They allow things like:

	      (set (reg T1) (high SYM))
	      (set (reg T2) (low (reg T1) SYM))
	      (set (reg X) (plus (reg T2) (const_int OFFSET)))

	 to be combined into:

	      (set (reg T3) (high SYM+OFFSET))
	      (set (reg X) (lo_sum (reg T3) SYM+OFFSET))

	 if T2 is only used this once.  */
  switch (GET_CODE (op))
    {
    case CONST_INT:
      return !splittable_const_int_operand (op, mode);

    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      if (CONST_GP_P (op))
	return true;
      return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	      && !mips_split_p[symbol_type]);

    case HIGH:
      op = XEXP (op, 0);
      return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	      && !mips_split_hi_p[symbol_type]);

    default:
      return true;
    }
}

bool
move_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((general_operand (op, mode)) || (hilo_operand (op, mode))) && (
(move_operand_1 (op, mode)));
}

bool
cprestore_save_slot_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 449 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_cprestore_address_p (XEXP (op, 0), false)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
cprestore_load_slot_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 453 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_cprestore_address_p (XEXP (op, 0), true)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
consttable_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 456 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(CONSTANT_P (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 460 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type);
}

bool
symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
absolute_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 467 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_ABSOLUTE);
}

bool
absolute_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(absolute_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
symbolic_operand_with_high_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 475 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && mips_hi_relocs[(int) type]);
}

bool
symbolic_operand_with_high (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_with_high_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
force_to_mem_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 483 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	  && mips_use_pcrel_pool_p[(int) symbol_type]);
}

bool
force_to_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(force_to_mem_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
got_disp_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 491 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_GOT_DISP);
}

bool
got_disp_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(got_disp_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
got_page_ofst_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 499 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_GOT_PAGE_OFST);
}

bool
got_page_ofst_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(got_page_ofst_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
tls_reloc_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 507 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && (type == SYMBOL_DTPREL || type == SYMBOL_TPREL));
}

bool
tls_reloc_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(tls_reloc_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
symbol_ref_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
stack_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 518 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_stack_address_p (XEXP (op, 0), GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
macc_msac_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 523 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  rtx mult = XEXP (op, GET_CODE (op) == PLUS ? 0 : 1);
  rtx accum = XEXP (op, GET_CODE (op) == PLUS ? 1 : 0);
  return (GET_CODE (mult) == MULT
	  && REG_P (XEXP (mult, 0))
	  && REG_P (XEXP (mult, 1))
	  && REG_P (accum));
}

bool
macc_msac_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == PLUS) && (
#line 521 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(ISA_HAS_MACC))) || ((GET_CODE (op) == MINUS) && (
#line 522 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(ISA_HAS_MSAC)))) && (
(macc_msac_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
equality_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
extend_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ZERO_EXTEND:
    case SIGN_EXTEND:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
trap_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case LTU:
    case GE:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
order_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 544 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  if (XEXP (op, 1) == const0_rtx)
    return true;

  if (TARGET_CB_MAYBE
      && (GET_CODE (op) == LT || GET_CODE (op) == LTU
	  || GET_CODE (op) == GE || GET_CODE (op) == GEU))
    return true;

  return false;
}

bool
order_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case LTU:
    case LE:
    case LEU:
    case GE:
    case GEU:
    case GT:
    case GTU:
      break;
    default:
      return false;
    }
  return (
(order_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
mips_cstore_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == EQ || GET_CODE (op) == GT || GET_CODE (op) == GTU || GET_CODE (op) == GE || GET_CODE (op) == GEU || GET_CODE (op) == LT || GET_CODE (op) == LTU || GET_CODE (op) == LE || GET_CODE (op) == LEU) || ((GET_CODE (op) == NE) && (!(
#line 561 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(TARGET_MIPS16))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
small_data_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SET:
    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
    case PREFETCH:
      break;
    default:
      return false;
    }
  return (
#line 565 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(mips_small_data_pattern_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
mem_noofs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (GET_CODE (XEXP (op, 0)) == REG)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
non_volatile_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (!(
#line 574 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
(MEM_VOLATILE_P (op))));
}

static inline bool
const_vector_same_val_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 578 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_val_p (op, mode);
}

bool
const_vector_same_val_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_val_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_same_simm5_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 584 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_int_p (op, mode, -16, 15);
}

bool
const_vector_same_simm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_simm5_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_same_uimm5_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 590 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_int_p (op, mode, 0, 31);
}

bool
const_vector_same_uimm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_uimm5_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_same_ximm5_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 596 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_int_p (op, mode, -31, 31);
}

bool
const_vector_same_ximm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_ximm5_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_same_uimm6_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 602 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_int_p (op, mode, 0, 63);
}

bool
const_vector_same_uimm6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_uimm6_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_same_uimm8_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 608 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_same_int_p (op, mode, 0, 255);
}

bool
const_vector_same_uimm8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_same_uimm8_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
par_const_vector_shf_set_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 614 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/predicates.md"
{
  return mips_const_vector_shuffle_set_p (op, mode);
}

bool
par_const_vector_shf_set_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(par_const_vector_shf_set_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
reg_or_vector_same_val_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_vector_same_val_operand (op, mode));
}

bool
reg_or_vector_same_simm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_vector_same_simm5_operand (op, mode));
}

bool
reg_or_vector_same_uimm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_vector_same_uimm5_operand (op, mode));
}

bool
reg_or_vector_same_ximm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_vector_same_ximm5_operand (op, mode));
}

bool
reg_or_vector_same_uimm6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_vector_same_uimm6_operand (op, mode));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      return CONSTRAINT_B;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'U':
      if (!strncmp (str + 1, "db8", 3))
        return CONSTRAINT_Udb8;
      if (!strncmp (str + 1, "ead", 3))
        return CONSTRAINT_Uead;
      if (!strncmp (str + 1, "ean", 3))
        return CONSTRAINT_Uean;
      if (!strncmp (str + 1, "esp", 3))
        return CONSTRAINT_Uesp;
      if (!strncmp (str + 1, "ib3", 3))
        return CONSTRAINT_Uib3;
      if (!strncmp (str + 1, "sb4", 3))
        return CONSTRAINT_Usb4;
      if (!strncmp (str + 1, "sb5", 3))
        return CONSTRAINT_Usb5;
      if (!strncmp (str + 1, "sb8", 3))
        return CONSTRAINT_Usb8;
      if (!strncmp (str + 1, "sd8", 3))
        return CONSTRAINT_Usd8;
      if (!strncmp (str + 1, "ub8", 3))
        return CONSTRAINT_Uub8;
      if (!strncmp (str + 1, "uw5", 3))
        return CONSTRAINT_Uuw5;
      if (!strncmp (str + 1, "uw6", 3))
        return CONSTRAINT_Uuw6;
      if (!strncmp (str + 1, "uw8", 3))
        return CONSTRAINT_Uuw8;
      if (!strncmp (str + 1, "nv5", 3))
        return CONSTRAINT_Unv5;
      if (!strncmp (str + 1, "uv5", 3))
        return CONSTRAINT_Uuv5;
      if (!strncmp (str + 1, "sv5", 3))
        return CONSTRAINT_Usv5;
      if (!strncmp (str + 1, "uv6", 3))
        return CONSTRAINT_Uuv6;
      if (!strncmp (str + 1, "rv8", 3))
        return CONSTRAINT_Urv8;
      if (!strncmp (str + 1, "db7", 3))
        return CONSTRAINT_Udb7;
      break;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      return CONSTRAINT_W;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      if (!strncmp (str + 1, "A", 1))
        return CONSTRAINT_YA;
      if (!strncmp (str + 1, "B", 1))
        return CONSTRAINT_YB;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Yb;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Yd;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_Yf;
      if (!strncmp (str + 1, "h", 1))
        return CONSTRAINT_Yh;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Yw;
      if (!strncmp (str + 1, "x", 1))
        return CONSTRAINT_Yx;
      if (!strncmp (str + 1, "I", 1))
        return CONSTRAINT_YI;
      if (!strncmp (str + 1, "C", 1))
        return CONSTRAINT_YC;
      if (!strncmp (str + 1, "Z", 1))
        return CONSTRAINT_YZ;
      if (!strncmp (str + 1, "G", 1))
        return CONSTRAINT_YG;
      break;
    case 'Z':
      if (!strncmp (str + 1, "D", 1))
        return CONSTRAINT_ZD;
      if (!strncmp (str + 1, "R", 1))
        return CONSTRAINT_ZR;
      if (!strncmp (str + 1, "S", 1))
        return CONSTRAINT_ZS;
      if (!strncmp (str + 1, "T", 1))
        return CONSTRAINT_ZT;
      if (!strncmp (str + 1, "U", 1))
        return CONSTRAINT_ZU;
      if (!strncmp (str + 1, "V", 1))
        return CONSTRAINT_ZV;
      if (!strncmp (str + 1, "W", 1))
        return CONSTRAINT_ZW;
      if (!strncmp (str + 1, "C", 1))
        return CONSTRAINT_ZC;
      break;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'h':
      return CONSTRAINT_h;
    case 'i':
      return CONSTRAINT_i;
    case 'j':
      return CONSTRAINT_j;
    case 'k':
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_kb;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_kf;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_ks;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_ka;
      break;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 't':
      return CONSTRAINT_t;
    case 'u':
      return CONSTRAINT_u;
    case 'v':
      return CONSTRAINT_v;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_A, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_B, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_C, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_D, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_P, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_W, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  UCHAR_MAX,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_a, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_d, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_e, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_f, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_h, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_j, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_t, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_u, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_v, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_d: return TARGET_MIPS16 ? M16_REGS : GR_REGS;
    case CONSTRAINT_t: return T_REG;
    case CONSTRAINT_f: return TARGET_HARD_FLOAT ? FP_REGS : NO_REGS;
    case CONSTRAINT_h: return NO_REGS;
    case CONSTRAINT_l: return TARGET_BIG_ENDIAN ? MD1_REG : MD0_REG;
    case CONSTRAINT_x: return MD_REGS;
    case CONSTRAINT_b: return ALL_REGS;
    case CONSTRAINT_u: return M16_REGS;
    case CONSTRAINT_c: return TARGET_MIPS16 ? M16_REGS
				 : TARGET_USE_PIC_FN_ADDR_REG ? PIC_FN_ADDR_REG
				 : GR_REGS;
    case CONSTRAINT_e: return LEA_REGS;
    case CONSTRAINT_j: return PIC_FN_ADDR_REG;
    case CONSTRAINT_v: return V1_REG;
    case CONSTRAINT_y: return GR_REGS;
    case CONSTRAINT_z: return ST_REGS;
    case CONSTRAINT_A: return DSP_ACC_REGS;
    case CONSTRAINT_a: return ACC_REGS;
    case CONSTRAINT_B: return COP0_REGS;
    case CONSTRAINT_C: return COP2_REGS;
    case CONSTRAINT_D: return COP3_REGS;
    case CONSTRAINT_ka: return ISA_HAS_DSP_MULT ? ACC_REGS : MD_REGS;
    case CONSTRAINT_kb: return M16_STORE_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_P,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_R,
  satisfies_constraint_W,
  satisfies_constraint_ZC,
  satisfies_constraint_ZR,
  satisfies_constraint_ZS,
  satisfies_constraint_ZT,
  satisfies_constraint_ZU,
  satisfies_constraint_ZV,
  satisfies_constraint_ZW,
  satisfies_constraint_p,
  satisfies_constraint_ZD,
  satisfies_constraint_kf,
  satisfies_constraint_G,
  satisfies_constraint_Q,
  satisfies_constraint_Udb7,
  satisfies_constraint_Udb8,
  satisfies_constraint_Uead,
  satisfies_constraint_Uean,
  satisfies_constraint_Uesp,
  satisfies_constraint_Uib3,
  satisfies_constraint_Usb4,
  satisfies_constraint_Usb5,
  satisfies_constraint_Usb8,
  satisfies_constraint_Usd8,
  satisfies_constraint_Uub8,
  satisfies_constraint_Uuw5,
  satisfies_constraint_Uuw6,
  satisfies_constraint_Uuw8,
  satisfies_constraint_YG,
  satisfies_constraint_YA,
  satisfies_constraint_YB,
  satisfies_constraint_Yb,
  satisfies_constraint_Yh,
  satisfies_constraint_Yw,
  satisfies_constraint_Yx,
  satisfies_constraint_YI,
  satisfies_constraint_YC,
  satisfies_constraint_YZ,
  satisfies_constraint_Unv5,
  satisfies_constraint_Uuv5,
  satisfies_constraint_Usv5,
  satisfies_constraint_Uuv6,
  satisfies_constraint_Urv8,
  satisfies_constraint_ks,
  satisfies_constraint_S,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_Yd,
  satisfies_constraint_Yf
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 114 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival));

    case CONSTRAINT_J:
      return 
#line 119 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival == 0);

    case CONSTRAINT_K:
      return 
#line 124 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival));

    case CONSTRAINT_L:
      return 
#line 130 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival));

    case CONSTRAINT_M:
      return (!(
#line 136 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival)))) && ((!(
#line 137 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival)))) && (!(
#line 138 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival)))));

    case CONSTRAINT_N:
      return 
#line 143 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival >= -0xffff && ival < 0);

    case CONSTRAINT_O:
      return 
#line 148 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival >= -0x4000 && ival < 0x4000);

    case CONSTRAINT_P:
      return 
#line 153 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival > 0 && ival < 0x10000);

    default: break;
    }
  return false;
}

