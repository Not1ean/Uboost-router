cmd_arch/mips/kernel/head.o := mipsel-openwrt-linux-musl-gcc -Wp,-MMD,arch/mips/kernel/.head.o.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib/gcc/mipsel-openwrt-linux-musl/12.3.0/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80001000 -DLINKER_LOAD_ADDRESS=0x80001000 -DDATAOFFSET=0 -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -DGAS_HAS_SET_HARDFLOAT -Wa,-msoft-float -ffreestanding -EL -fno-stack-check -Wa,-mno-fix-loongson3-llsc -march=mips32r2 -mtune=34kc -Wa,--trap -DTOOLCHAIN_SUPPORTS_VIRT -DTOOLCHAIN_SUPPORTS_XPA -DTOOLCHAIN_SUPPORTS_CRC -DTOOLCHAIN_SUPPORTS_DSP -DTOOLCHAIN_SUPPORTS_GINV -I./arch/mips/include/asm/mach-ralink -I./arch/mips/include/asm/mach-ralink/mt7621 -I./arch/mips/include/asm/mach-generic -Wa,-gdwarf-2    -c -o arch/mips/kernel/head.o arch/mips/kernel/head.S

source_arch/mips/kernel/head.o := arch/mips/kernel/head.S

deps_arch/mips/kernel/head.o := \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/NO_EXCEPT_FILL) \
    $(wildcard include/config/BOOT_RAW) \
    $(wildcard include/config/RELOCATABLE) \
    $(wildcard include/config/SMP) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/init.h \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/STRICT_KERNEL_RWX) \
    $(wildcard include/config/STRICT_MODULE_RWX) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/STACK_VALIDATION) \
    $(wildcard include/config/CFI_CLANG) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/mips/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/mips/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/linux/threads.h \
    $(wildcard include/config/NR_CPUS) \
    $(wildcard include/config/BASE_SMALL) \
  arch/mips/include/asm/addrspace.h \
  arch/mips/include/asm/mach-ralink/spaces.h \
  arch/mips/include/asm/mach-generic/spaces.h \
    $(wildcard include/config/MIPS_AUTO_PFN_OFFSET) \
    $(wildcard include/config/32BIT) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/mips/include/asm/mipsregs.h \
    $(wildcard include/config/CPU_VR41XX) \
    $(wildcard include/config/PAGE_SIZE_4KB) \
    $(wildcard include/config/PAGE_SIZE_8KB) \
    $(wildcard include/config/PAGE_SIZE_16KB) \
    $(wildcard include/config/PAGE_SIZE_32KB) \
    $(wildcard include/config/PAGE_SIZE_64KB) \
    $(wildcard include/config/MIPS_HUGE_TLB_SUPPORT) \
    $(wildcard include/config/CPU_LOONGSON64) \
    $(wildcard include/config/XPA) \
    $(wildcard include/config/SYS_SUPPORTS_MIPS16) \
    $(wildcard include/config/SYS_SUPPORTS_MICROMIPS) \
    $(wildcard include/config/CPU_MICROMIPS) \
    $(wildcard include/config/WAR_MIPS34K_MISSED_ITLB) \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULE_REL_CRCS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/mips/include/asm/linkage.h \
  arch/mips/include/asm/asm.h \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/SGI_IP28) \
  arch/mips/include/uapi/asm/sgidefs.h \
  arch/mips/include/asm/asm-eva.h \
    $(wildcard include/config/EVA) \
  arch/mips/include/asm/hazards.h \
    $(wildcard include/config/CPU_MIPSR2) \
    $(wildcard include/config/CPU_MIPSR5) \
    $(wildcard include/config/CPU_MIPSR6) \
    $(wildcard include/config/CPU_CAVIUM_OCTEON) \
    $(wildcard include/config/CPU_MIPSR1) \
    $(wildcard include/config/MIPS_ALCHEMY) \
    $(wildcard include/config/CPU_BMIPS) \
    $(wildcard include/config/CPU_LOONGSON2EF) \
    $(wildcard include/config/CPU_R10000) \
    $(wildcard include/config/CPU_R5500) \
    $(wildcard include/config/CPU_XLR) \
    $(wildcard include/config/CPU_SB1) \
  arch/mips/include/asm/compiler.h \
  arch/mips/include/asm/isa-rev.h \
  arch/mips/include/asm/war.h \
    $(wildcard include/config/CPU_R4000_WORKAROUNDS) \
    $(wildcard include/config/CPU_R4400_WORKAROUNDS) \
    $(wildcard include/config/CPU_DADDI_WORKAROUNDS) \
  arch/mips/include/asm/asmmacro.h \
    $(wildcard include/config/CPU_HAS_DIEI) \
    $(wildcard include/config/PREEMPTION) \
  arch/mips/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/mips/include/asm/msa.h \
  arch/mips/include/asm/asmmacro-32.h \
  arch/mips/include/asm/regdef.h \
  arch/mips/include/asm/fpregdef.h \
  arch/mips/include/asm/irqflags.h \
    $(wildcard include/config/CPU_LOONGSON32) \
    $(wildcard include/config/IRQ_MIPS_CPU) \
    $(wildcard include/config/TRACE_IRQFLAGS) \
  arch/mips/include/asm/stackframe.h \
    $(wildcard include/config/CPU_R3000) \
    $(wildcard include/config/CPU_TX39XX) \
    $(wildcard include/config/CPU_HAS_SMARTMIPS) \
    $(wildcard include/config/CPU_JUMP_WORKAROUNDS) \
  arch/mips/include/asm/thread_info.h \
    $(wildcard include/config/MIPS_PGD_C0_CONTEXT) \
  arch/mips/include/asm/mach-generic/kernel-entry-init.h \

arch/mips/kernel/head.o: $(deps_arch/mips/kernel/head.o)

$(deps_arch/mips/kernel/head.o):
