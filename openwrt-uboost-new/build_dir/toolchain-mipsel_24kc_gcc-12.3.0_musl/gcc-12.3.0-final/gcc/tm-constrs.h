/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/mips.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_kf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return force_to_mem_operand (op, mode);
}
static inline bool
satisfies_constraint_ks (rtx op)
{
  return (GET_CODE (op) == REG) && (
#line 107 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(REGNO (op) == STACK_POINTER_REGNUM));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 114 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 119 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 124 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 130 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((!(
#line 136 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival)))) && ((!(
#line 137 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival)))) && (!(
#line 138 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival))))));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival >= -0xffff && ival < 0));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival >= -0x4000 && ival < 0x4000));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 153 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ival > 0 && ival < 0x10000));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 160 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return const_arith_operand (op, mode);
}
static inline bool
satisfies_constraint_R (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (
#line 171 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_address_insns (XEXP (op, 0), mode, false) == 1));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (call_insn_operand (op, mode)) && (
#line 177 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(CONSTANT_P (op)));
}
static inline bool
satisfies_constraint_Udb7 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return db7_operand (op, mode);
}
static inline bool
satisfies_constraint_Udb8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return db8_operand (op, mode);
}
static inline bool
satisfies_constraint_Uead (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return addiur2_operand (op, mode);
}
static inline bool
satisfies_constraint_Uean (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return andi16_operand (op, mode);
}
static inline bool
satisfies_constraint_Uesp (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return addiusp_operand (op, mode);
}
static inline bool
satisfies_constraint_Uib3 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ib3_operand (op, mode);
}
static inline bool
satisfies_constraint_Usb4 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return sb4_operand (op, mode);
}
static inline bool
satisfies_constraint_Usb5 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return sb5_operand (op, mode);
}
static inline bool
satisfies_constraint_Usb8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return sb8_operand (op, mode);
}
static inline bool
satisfies_constraint_Usd8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return sd8_operand (op, mode);
}
static inline bool
satisfies_constraint_Uub8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ub8_operand (op, mode);
}
static inline bool
satisfies_constraint_Uuw5 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return uw5_operand (op, mode);
}
static inline bool
satisfies_constraint_Uuw6 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return uw6_operand (op, mode);
}
static inline bool
satisfies_constraint_Uuw8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return uw8_operand (op, mode);
}
static inline bool
satisfies_constraint_W (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && ((memory_operand (op, mode)) && ((!(
#line 257 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(TARGET_MIPS16))) || ((!(stack_operand (op, mode))) && (!(
#line 259 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(CONSTANT_P (XEXP (op, 0))))))));
}
static inline bool
satisfies_constraint_YG (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 265 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_YA (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 271 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(UIMM6_OPERAND (ival)));
}
static inline bool
satisfies_constraint_YB (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 277 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(IMM10_OPERAND (ival)));
}
static inline bool
satisfies_constraint_Yb (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return qi_mask_operand (op, mode);
}
static inline bool
satisfies_constraint_Yd (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 288 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (!(
#line 289 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_dangerous_for_la25_p (op)))));
}
static inline bool
satisfies_constraint_Yf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 296 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (
#line 297 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_dangerous_for_la25_p (op))));
}
static inline bool
satisfies_constraint_Yh (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return hi_mask_operand (op, mode);
}
static inline bool
satisfies_constraint_Yw (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return si_mask_operand (op, mode);
}
static inline bool
satisfies_constraint_Yx (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return low_bitmask_operand (op, mode);
}
static inline bool
satisfies_constraint_YI (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 316 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_int_p (op, mode, -512, 511)));
}
static inline bool
satisfies_constraint_YC (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 323 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_bitimm_set_p (op, mode)));
}
static inline bool
satisfies_constraint_YZ (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 330 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_bitimm_clr_p (op, mode)));
}
static inline bool
satisfies_constraint_Unv5 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 337 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_int_p (op, mode, -31, 0)));
}
static inline bool
satisfies_constraint_Uuv5 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 344 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_int_p (op, mode, 0, 31)));
}
static inline bool
satisfies_constraint_Usv5 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 351 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_int_p (op, mode, -16, 15)));
}
static inline bool
satisfies_constraint_Uuv6 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 358 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_int_p (op, mode, 0, 63)));
}
static inline bool
satisfies_constraint_Urv8 (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 364 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_const_vector_same_bytes_p (op, mode)));
}
static inline bool
satisfies_constraint_ZC (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && ((
#line 372 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(TARGET_MICROMIPS)) ? (
#line 373 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(umips_12bit_offset_address_p (XEXP (op, 0), mode))) : ((
#line 374 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ISA_HAS_9BIT_DISPLACEMENT)) ? (
#line 375 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_9bit_offset_address_p (XEXP (op, 0), mode))) : (
#line 376 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_address_insns (XEXP (op, 0), mode, false)))));
}
static inline bool
satisfies_constraint_ZD (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 381 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(TARGET_MICROMIPS)) ? (
#line 382 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(umips_12bit_offset_address_p (op, mode))) : ((
#line 383 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(ISA_HAS_9BIT_DISPLACEMENT)) ? (
#line 384 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_9bit_offset_address_p (op, mode))) : (
#line 385 "/home/notlean/openwrt-uboost/build_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/gcc-12.3.0/gcc/config/mips/constraints.md"
(mips_address_insns (op, mode, false))));
}
static inline bool
satisfies_constraint_ZR (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return mem_noofs_operand (op, mode);
}
static inline bool
satisfies_constraint_ZS (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (lwsp_swsp_operand (op, mode));
}
static inline bool
satisfies_constraint_ZT (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (lw16_sw16_operand (op, mode));
}
static inline bool
satisfies_constraint_ZU (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (lhu16_sh16_operand (op, mode));
}
static inline bool
satisfies_constraint_ZV (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (sb16_operand (op, mode));
}
static inline bool
satisfies_constraint_ZW (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (lbu16_operand (op, mode));
}
#endif /* tm-constrs.h */
