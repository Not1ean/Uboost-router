	.file	1 "bounds.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	softfloat
	.module	oddspreg
	.module	arch=mips32r2

 # -G value = 0, Arch = mips32r2, ISA = 33
 # GNU C11 (OpenWrt GCC 12.3.0 r23809-234f1a2efa) version 12.3.0 (mipsel-openwrt-linux-musl)
 #	compiled by GNU C version 13.3.0, GMP version 6.2.1, MPFR version 4.2.0, MPC version 1.3.1, isl version none
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: -G 0 -mel -mno-check-zero-division -mabi=32 -mno-abicalls -mno-branch-likely -msoft-float -march=mips32r2 -mtune=34kc -mllsc -mplt -mips32r2 -mno-shared -O2 -std=gnu11 -fno-strict-aliasing -fno-common -fshort-wchar -fno-pic -ffreestanding -fstack-check=no -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks -fno-allow-store-data-races -fstack-protector -fomit-frame-pointer -fno-stack-clash-protection -fno-strict-overflow -fstack-check=no -fconserve-stack -fno-caller-saves -ffunction-sections -fdata-sections
	.text
#APP
	.macro	parse_r var r
	\var	= -1
	.ifc	\r, $0
	\var	= 0
	.endif
	.ifc	\r, $1
	\var	= 1
	.endif
	.ifc	\r, $2
	\var	= 2
	.endif
	.ifc	\r, $3
	\var	= 3
	.endif
	.ifc	\r, $4
	\var	= 4
	.endif
	.ifc	\r, $5
	\var	= 5
	.endif
	.ifc	\r, $6
	\var	= 6
	.endif
	.ifc	\r, $7
	\var	= 7
	.endif
	.ifc	\r, $8
	\var	= 8
	.endif
	.ifc	\r, $9
	\var	= 9
	.endif
	.ifc	\r, $10
	\var	= 10
	.endif
	.ifc	\r, $11
	\var	= 11
	.endif
	.ifc	\r, $12
	\var	= 12
	.endif
	.ifc	\r, $13
	\var	= 13
	.endif
	.ifc	\r, $14
	\var	= 14
	.endif
	.ifc	\r, $15
	\var	= 15
	.endif
	.ifc	\r, $16
	\var	= 16
	.endif
	.ifc	\r, $17
	\var	= 17
	.endif
	.ifc	\r, $18
	\var	= 18
	.endif
	.ifc	\r, $19
	\var	= 19
	.endif
	.ifc	\r, $20
	\var	= 20
	.endif
	.ifc	\r, $21
	\var	= 21
	.endif
	.ifc	\r, $22
	\var	= 22
	.endif
	.ifc	\r, $23
	\var	= 23
	.endif
	.ifc	\r, $24
	\var	= 24
	.endif
	.ifc	\r, $25
	\var	= 25
	.endif
	.ifc	\r, $26
	\var	= 26
	.endif
	.ifc	\r, $27
	\var	= 27
	.endif
	.ifc	\r, $28
	\var	= 28
	.endif
	.ifc	\r, $29
	\var	= 29
	.endif
	.ifc	\r, $30
	\var	= 30
	.endif
	.ifc	\r, $31
	\var	= 31
	.endif
	.iflt	\var
	.error	"Unable to parse register name \r"
	.endif
	.endm
#NO_APP
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
 # kernel/bounds.c:19: 	DEFINE(NR_PAGEFLAGS, __NR_PAGEFLAGS);
#APP
 # 19 "kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS 22 __NR_PAGEFLAGS"	 #
 # 0 "" 2
 # kernel/bounds.c:20: 	DEFINE(MAX_NR_ZONES, __MAX_NR_ZONES);
 # 20 "kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES 2 __MAX_NR_ZONES"	 #
 # 0 "" 2
 # kernel/bounds.c:22: 	DEFINE(NR_CPUS_BITS, ilog2(CONFIG_NR_CPUS));
 # 22 "kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS 2 ilog2(CONFIG_NR_CPUS)"	 #
 # 0 "" 2
 # kernel/bounds.c:24: 	DEFINE(SPINLOCK_SIZE, sizeof(spinlock_t));
 # 24 "kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE 4 sizeof(spinlock_t)"	 #
 # 0 "" 2
 # kernel/bounds.c:26: 	DEFINE(LRU_GEN_WIDTH, order_base_2(MAX_NR_GENS + 1));
 # 26 "kernel/bounds.c" 1
	
.ascii "->LRU_GEN_WIDTH 3 order_base_2(MAX_NR_GENS + 1)"	 #
 # 0 "" 2
 # kernel/bounds.c:27: 	DEFINE(__LRU_REFS_WIDTH, MAX_NR_TIERS - 2);
 # 27 "kernel/bounds.c" 1
	
.ascii "->__LRU_REFS_WIDTH 2 MAX_NR_TIERS - 2"	 #
 # 0 "" 2
 # kernel/bounds.c:35: }
#NO_APP
	.set	noreorder
	.set	nomacro
	jr	$31	 #
	move	$2,$0	 #,
	.set	macro
	.set	reorder

	.end	main
	.size	main, .-main
	.ident	"GCC: (OpenWrt GCC 12.3.0 r23809-234f1a2efa) 12.3.0"
	.section	.note.GNU-stack,"",@progbits
