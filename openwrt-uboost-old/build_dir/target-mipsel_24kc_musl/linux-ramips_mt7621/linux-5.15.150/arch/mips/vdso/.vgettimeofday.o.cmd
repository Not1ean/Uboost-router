cmd_arch/mips/vdso/vgettimeofday.o := mipsel-openwrt-linux-musl-gcc -Wp,-MMD,arch/mips/vdso/.vgettimeofday.o.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib/gcc/mipsel-openwrt-linux-musl/12.3.0/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80001000 -DLINKER_LOAD_ADDRESS=0x80001000 -DDATAOFFSET=0 -fmacro-prefix-map=./= -I./arch/mips/include/asm/mach-ralink -I./arch/mips/include/asm/mach-ralink/mt7621 -I./arch/mips/include/asm/mach-generic -EL -march=mips32r2 -msoft-float -D__VDSO__ -DBUILD_VDSO32 -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -Wframe-larger-than=1024 -Werror -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-dangling-pointer -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-alloc-size-larger-than -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -Werror -O3 -g -fPIC -fno-strict-aliasing -fno-common -fno-builtin -G 0 -mrelax-pic-calls -mexplicit-relocs -fno-stack-protector -fno-jump-tables -DDISABLE_BRANCH_PROFILING -fno-asynchronous-unwind-tables -mabi=32 -include /home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/linux-ramips_mt7621/linux-5.15.150/lib/vdso/gettimeofday.c  -ffunction-sections -fdata-sections  -DKBUILD_MODFILE='"arch/mips/vdso/vgettimeofday"' -DKBUILD_BASENAME='"vgettimeofday"' -DKBUILD_MODNAME='"vgettimeofday"' -D__KBUILD_MODNAME=kmod_vgettimeofday -c -o arch/mips/vdso/vgettimeofday.o arch/mips/vdso/vgettimeofday.c

source_arch/mips/vdso/vgettimeofday.o := arch/mips/vdso/vgettimeofday.c

deps_arch/mips/vdso/vgettimeofday.o := \
    $(wildcard include/config/MIPS_CLOCK_VSYSCALL) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \
  arch/mips/include/asm/compiler.h \
    $(wildcard include/config/CPU_MIPSR6) \
    $(wildcard include/config/CPU_MIPSR5) \
  /home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/linux-ramips_mt7621/linux-5.15.150/lib/vdso/gettimeofday.c \
    $(wildcard include/config/TIME_NS) \
  include/vdso/datapage.h \
    $(wildcard include/config/ARCH_HAS_VDSO_DATA) \
  include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/STACK_VALIDATION) \
    $(wildcard include/config/CFI_CLANG) \
  include/linux/compiler_types.h \
  arch/mips/include/generated/asm/rwonce.h \
  include/asm-generic/rwonce.h \
  include/linux/kasan-checks.h \
    $(wildcard include/config/KASAN_GENERIC) \
    $(wildcard include/config/KASAN_SW_TAGS) \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/mips/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/mips/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  arch/mips/include/uapi/asm/posix_types.h \
  arch/mips/include/uapi/asm/sgidefs.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/kcsan-checks.h \
    $(wildcard include/config/KCSAN) \
    $(wildcard include/config/KCSAN_IGNORE_ATOMICS) \
  include/uapi/linux/time.h \
  include/uapi/linux/time_types.h \
  include/uapi/asm-generic/errno-base.h \
  include/vdso/bits.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/vdso/clocksource.h \
    $(wildcard include/config/GENERIC_GETTIMEOFDAY) \
  include/vdso/limits.h \
  arch/mips/include/asm/vdso/clocksource.h \
  include/vdso/ktime.h \
  include/vdso/jiffies.h \
  arch/mips/include/uapi/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/HZ) \
  include/uapi/asm-generic/param.h \
  include/vdso/time64.h \
  include/vdso/math64.h \
  include/vdso/processor.h \
  arch/mips/include/asm/vdso/processor.h \
    $(wildcard include/config/CPU_LOONGSON64) \
  include/vdso/time.h \
  include/vdso/time32.h \
  arch/mips/include/asm/vdso/gettimeofday.h \
    $(wildcard include/config/CSRC_R4K) \
    $(wildcard include/config/CLKSRC_MIPS_GIC) \
  arch/mips/include/asm/vdso/vdso.h \
  arch/mips/include/asm/asm.h \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/SGI_IP28) \
  arch/mips/include/asm/asm-eva.h \
    $(wildcard include/config/32BIT) \
    $(wildcard include/config/EVA) \
  arch/mips/include/asm/page.h \
    $(wildcard include/config/PAGE_SIZE_4KB) \
    $(wildcard include/config/PAGE_SIZE_8KB) \
    $(wildcard include/config/PAGE_SIZE_16KB) \
    $(wildcard include/config/PAGE_SIZE_32KB) \
    $(wildcard include/config/PAGE_SIZE_64KB) \
    $(wildcard include/config/MIPS_HUGE_TLB_SUPPORT) \
    $(wildcard include/config/MIPS_AUTO_PFN_OFFSET) \
    $(wildcard include/config/CPU_MIPS32) \
    $(wildcard include/config/DEBUG_VIRTUAL) \
    $(wildcard include/config/FLATMEM) \
    $(wildcard include/config/SPARSEMEM) \
    $(wildcard include/config/NUMA) \
  arch/mips/include/asm/mach-ralink/spaces.h \
  arch/mips/include/asm/mach-generic/spaces.h \
  include/linux/const.h \
  arch/mips/include/asm/mipsregs.h \
    $(wildcard include/config/CPU_VR41XX) \
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
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/mips/include/asm/linkage.h \
  arch/mips/include/asm/hazards.h \
    $(wildcard include/config/CPU_MIPSR2) \
    $(wildcard include/config/CPU_CAVIUM_OCTEON) \
    $(wildcard include/config/CPU_MIPSR1) \
    $(wildcard include/config/MIPS_ALCHEMY) \
    $(wildcard include/config/CPU_BMIPS) \
    $(wildcard include/config/CPU_LOONGSON2EF) \
    $(wildcard include/config/CPU_R10000) \
    $(wildcard include/config/CPU_R5500) \
    $(wildcard include/config/CPU_XLR) \
    $(wildcard include/config/CPU_SB1) \
  arch/mips/include/asm/isa-rev.h \
  arch/mips/include/asm/war.h \
    $(wildcard include/config/CPU_R4000_WORKAROUNDS) \
    $(wildcard include/config/CPU_R4400_WORKAROUNDS) \
    $(wildcard include/config/CPU_DADDI_WORKAROUNDS) \
  include/linux/kernel.h \
    $(wildcard include/config/PREEMPT_VOLUNTARY) \
    $(wildcard include/config/PREEMPT_DYNAMIC) \
    $(wildcard include/config/PREEMPT_) \
    $(wildcard include/config/DEBUG_ATOMIC_SLEEP) \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/MMU) \
    $(wildcard include/config/PROVE_LOCKING) \
    $(wildcard include/config/TRACING) \
    $(wildcard include/config/FTRACE_MCOUNT_RECORD) \
  include/linux/stdarg.h \
  include/linux/align.h \
  include/linux/limits.h \
  include/uapi/linux/limits.h \
  include/linux/bitops.h \
  include/linux/bits.h \
  include/linux/build_bug.h \
  include/linux/typecheck.h \
  include/uapi/linux/kernel.h \
  include/uapi/linux/sysinfo.h \
  arch/mips/include/asm/bitops.h \
  arch/mips/include/asm/barrier.h \
    $(wildcard include/config/CPU_HAS_WB) \
    $(wildcard include/config/WEAK_ORDERING) \
    $(wildcard include/config/WEAK_REORDERING_BEYOND_LLSC) \
    $(wildcard include/config/CPU_LOONGSON3_WORKAROUNDS) \
  arch/mips/include/asm/addrspace.h \
  arch/mips/include/asm/sync.h \
    $(wildcard include/config/CPU_HAS_SYNC) \
  include/asm-generic/barrier.h \
  arch/mips/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  arch/mips/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  arch/mips/include/asm/cpu-features.h \
    $(wildcard include/config/MIPS_FP_SUPPORT) \
    $(wildcard include/config/CPU_MIPSR2_IRQ_VI) \
    $(wildcard include/config/CPU_MIPSR2_IRQ_EI) \
    $(wildcard include/config/CPU_HAS_MSA) \
    $(wildcard include/config/MIPS_MT_SMP) \
    $(wildcard include/config/GENERIC_ATOMIC64) \
  arch/mips/include/asm/cpu.h \
  arch/mips/include/asm/cpu-info.h \
    $(wildcard include/config/MIPS_ASID_BITS_VARIABLE) \
    $(wildcard include/config/CPU_LOONGSON3_CPUCFG_EMULATION) \
    $(wildcard include/config/MIPS_ASID_SHIFT) \
    $(wildcard include/config/MIPS_ASID_BITS) \
  include/linux/cache.h \
    $(wildcard include/config/ARCH_HAS_CACHE_LINE_SIZE) \
  arch/mips/include/asm/cache.h \
    $(wildcard include/config/MIPS_L1_CACHE_SHIFT) \
  arch/mips/include/asm/mach-generic/kmalloc.h \
    $(wildcard include/config/DMA_NONCOHERENT) \
  arch/mips/include/asm/mach-ralink/mt7621/cpu-feature-overrides.h \
  arch/mips/include/asm/llsc.h \
    $(wildcard include/config/WAR_R10000_LLSC) \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/GENERIC_FIND_FIRST_BIT) \
  include/asm-generic/bitops/sched.h \
  arch/mips/include/asm/arch_hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic.h \
  include/linux/kstrtox.h \
  include/linux/log2.h \
    $(wildcard include/config/ARCH_HAS_ILOG2_U32) \
    $(wildcard include/config/ARCH_HAS_ILOG2_U64) \
  include/linux/math.h \
  arch/mips/include/asm/div64.h \
  include/asm-generic/div64.h \
  include/linux/minmax.h \
  include/linux/panic.h \
    $(wildcard include/config/PANIC_TIMEOUT) \
  include/linux/printk.h \
    $(wildcard include/config/MESSAGE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_QUIET) \
    $(wildcard include/config/EARLY_PRINTK) \
    $(wildcard include/config/PRINTK_INDEX) \
    $(wildcard include/config/DYNAMIC_DEBUG) \
    $(wildcard include/config/DYNAMIC_DEBUG_CORE) \
  include/linux/init.h \
    $(wildcard include/config/STRICT_KERNEL_RWX) \
    $(wildcard include/config/STRICT_MODULE_RWX) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/kern_levels.h \
  include/linux/ratelimit_types.h \
  include/uapi/linux/param.h \
  include/linux/spinlock_types.h \
    $(wildcard include/config/PREEMPT_RT) \
    $(wildcard include/config/DEBUG_LOCK_ALLOC) \
  include/linux/spinlock_types_raw.h \
    $(wildcard include/config/DEBUG_SPINLOCK) \
  arch/mips/include/asm/spinlock_types.h \
  include/asm-generic/qspinlock_types.h \
    $(wildcard include/config/NR_CPUS) \
  include/asm-generic/qrwlock_types.h \
  include/linux/lockdep_types.h \
    $(wildcard include/config/PROVE_RAW_LOCK_NESTING) \
    $(wildcard include/config/PREEMPT_LOCK) \
    $(wildcard include/config/LOCKDEP) \
    $(wildcard include/config/LOCK_STAT) \
  include/linux/rwlock_types.h \
  include/linux/once_lite.h \
  include/linux/static_call_types.h \
    $(wildcard include/config/HAVE_STATIC_CALL) \
    $(wildcard include/config/HAVE_STATIC_CALL_INLINE) \
  include/linux/pfn.h \
  arch/mips/include/asm/io.h \
  include/linux/irqflags.h \
    $(wildcard include/config/TRACE_IRQFLAGS) \
    $(wildcard include/config/IRQSOFF_TRACER) \
    $(wildcard include/config/PREEMPT_TRACER) \
    $(wildcard include/config/DEBUG_IRQFLAGS) \
    $(wildcard include/config/TRACE_IRQFLAGS_SUPPORT) \
  arch/mips/include/asm/irqflags.h \
    $(wildcard include/config/CPU_HAS_DIEI) \
    $(wildcard include/config/CPU_LOONGSON32) \
    $(wildcard include/config/IRQ_MIPS_CPU) \
  arch/mips/include/generated/asm/percpu.h \
  include/asm-generic/percpu.h \
    $(wildcard include/config/DEBUG_PREEMPT) \
    $(wildcard include/config/HAVE_SETUP_PER_CPU_AREA) \
  include/linux/threads.h \
    $(wildcard include/config/BASE_SMALL) \
  include/linux/percpu-defs.h \
    $(wildcard include/config/DEBUG_FORCE_WEAK_PER_CPU) \
    $(wildcard include/config/AMD_MEM_ENCRYPT) \
  arch/mips/include/asm/bug.h \
    $(wildcard include/config/BUG) \
  arch/mips/include/asm/break.h \
  arch/mips/include/uapi/asm/break.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/GENERIC_BUG) \
    $(wildcard include/config/GENERIC_BUG_RELATIVE_POINTERS) \
    $(wildcard include/config/DEBUG_BUGVERBOSE) \
  include/linux/instrumentation.h \
    $(wildcard include/config/DEBUG_ENTRY) \
  include/asm-generic/iomap.h \
    $(wildcard include/config/HAS_IOPORT_MAP) \
  include/asm-generic/pci_iomap.h \
    $(wildcard include/config/PCI) \
    $(wildcard include/config/NO_GENERIC_PCI_IOPORT_MAP) \
    $(wildcard include/config/GENERIC_PCI_IOMAP) \
  arch/mips/include/asm/pgtable-bits.h \
    $(wildcard include/config/ARCH_HAS_PTE_SPECIAL) \
    $(wildcard include/config/HAVE_ARCH_SOFT_DIRTY) \
    $(wildcard include/config/CPU_R3K_TLB) \
    $(wildcard include/config/CPU_HAS_RIXI) \
  arch/mips/include/asm/processor.h \
    $(wildcard include/config/MIPS_VA_BITS_48) \
    $(wildcard include/config/CPU_LITTLE_ENDIAN) \
    $(wildcard include/config/CAVIUM_OCTEON_CVMSEG_SIZE) \
    $(wildcard include/config/CPU_XLP) \
    $(wildcard include/config/MIPS_MT_FPAFF) \
    $(wildcard include/config/CPU_HAS_PREFETCH) \
  include/linux/atomic.h \
  arch/mips/include/asm/atomic.h \
  arch/mips/include/asm/cmpxchg.h \
  include/linux/bug.h \
    $(wildcard include/config/BUG_ON_DATA_CORRUPTION) \
  include/asm-generic/cmpxchg-local.h \
  include/linux/atomic/atomic-arch-fallback.h \
  include/asm-generic/atomic64.h \
  include/linux/atomic/atomic-long.h \
  include/linux/atomic/atomic-instrumented.h \
  include/linux/instrumented.h \
  include/linux/cpumask.h \
    $(wildcard include/config/CPUMASK_OFFSTACK) \
    $(wildcard include/config/HOTPLUG_CPU) \
    $(wildcard include/config/DEBUG_PER_CPU_MAPS) \
  include/linux/bitmap.h \
  include/linux/string.h \
    $(wildcard include/config/BINARY_PRINTF) \
    $(wildcard include/config/FORTIFY_SOURCE) \
  include/linux/err.h \
  arch/mips/include/asm/errno.h \
  arch/mips/include/uapi/asm/errno.h \
  include/uapi/asm-generic/errno-base.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  include/linux/overflow.h \
  include/uapi/linux/string.h \
  arch/mips/include/asm/string.h \
  include/linux/fortify-string.h \
  include/linux/sizes.h \
  arch/mips/include/uapi/asm/cachectl.h \
  arch/mips/include/asm/dsemul.h \
  arch/mips/include/asm/inst.h \
  arch/mips/include/uapi/asm/inst.h \
  arch/mips/include/uapi/asm/bitfield.h \
  arch/mips/include/asm/prefetch.h \
  arch/mips/include/asm/mach-generic/mangle-port.h \
    $(wildcard include/config/SWAP_IO_SPACE) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/SPARSEMEM_VMEMMAP) \
  include/asm-generic/getorder.h \
  arch/mips/include/asm/vdso.h \
    $(wildcard include/config/MIPS32_O32) \
    $(wildcard include/config/MIPS32_N32) \
  include/linux/mm_types.h \
    $(wildcard include/config/HAVE_ALIGNED_STRUCT_PAGE) \
    $(wildcard include/config/MEMCG) \
    $(wildcard include/config/USERFAULTFD) \
    $(wildcard include/config/SWAP) \
    $(wildcard include/config/HAVE_ARCH_COMPAT_MMAP_BASES) \
    $(wildcard include/config/MEMBARRIER) \
    $(wildcard include/config/AIO) \
    $(wildcard include/config/MMU_NOTIFIER) \
    $(wildcard include/config/TRANSPARENT_HUGEPAGE) \
    $(wildcard include/config/NUMA_BALANCING) \
    $(wildcard include/config/ARCH_WANT_BATCHED_UNMAP_TLB_FLUSH) \
    $(wildcard include/config/HUGETLB_PAGE) \
    $(wildcard include/config/IOMMU_SUPPORT) \
    $(wildcard include/config/LRU_GEN) \
  include/linux/mm_types_task.h \
    $(wildcard include/config/SPLIT_PTLOCK_CPUS) \
    $(wildcard include/config/ARCH_ENABLE_SPLIT_PMD_PTLOCK) \
  include/linux/auxvec.h \
  include/uapi/linux/auxvec.h \
  arch/mips/include/uapi/asm/auxvec.h \
  include/linux/list.h \
    $(wildcard include/config/DEBUG_LIST) \
  include/linux/poison.h \
    $(wildcard include/config/ILLEGAL_POINTER_VALUE) \
  include/linux/spinlock.h \
    $(wildcard include/config/PREEMPTION) \
  include/linux/preempt.h \
    $(wildcard include/config/PREEMPT_COUNT) \
    $(wildcard include/config/TRACE_PREEMPT_TOGGLE) \
    $(wildcard include/config/PREEMPT_NOTIFIERS) \
  arch/mips/include/generated/asm/preempt.h \
  include/asm-generic/preempt.h \
  include/linux/thread_info.h \
    $(wildcard include/config/THREAD_INFO_IN_TASK) \
    $(wildcard include/config/GENERIC_ENTRY) \
    $(wildcard include/config/HAVE_ARCH_WITHIN_STACK_FRAMES) \
    $(wildcard include/config/HARDENED_USERCOPY) \
  include/linux/restart_block.h \
  include/linux/time64.h \
  include/linux/math64.h \
    $(wildcard include/config/ARCH_SUPPORTS_INT128) \
  arch/mips/include/asm/thread_info.h \
    $(wildcard include/config/MIPS_PGD_C0_CONTEXT) \
  include/linux/bottom_half.h \
  include/linux/lockdep.h \
    $(wildcard include/config/DEBUG_LOCKING_API_SELFTESTS) \
  include/linux/smp.h \
    $(wildcard include/config/UP_LATE_INIT) \
  include/linux/smp_types.h \
  include/linux/llist.h \
    $(wildcard include/config/ARCH_HAVE_NMI_SAFE_CMPXCHG) \
  arch/mips/include/asm/smp.h \
    $(wildcard include/config/MIPS_NR_CPU_NR_MAP) \
    $(wildcard include/config/KEXEC) \
  arch/mips/include/asm/smp-ops.h \
    $(wildcard include/config/SMP_UP) \
    $(wildcard include/config/MIPS_CMP) \
    $(wildcard include/config/MIPS_CPS) \
  arch/mips/include/asm/mips-cps.h \
    $(wildcard include/config/SOC_MT7621) \
  include/linux/io.h \
  arch/mips/include/asm/mips-boards/launch.h \
  arch/mips/include/asm/mips-cm.h \
    $(wildcard include/config/MIPS_CM) \
  include/linux/bitfield.h \
  arch/mips/include/asm/mips-cpc.h \
    $(wildcard include/config/MIPS_CPC) \
  arch/mips/include/asm/mips-gic.h \
    $(wildcard include/config/MIPS_GIC) \
  arch/mips/include/asm/mmiowb.h \
  include/asm-generic/mmiowb.h \
    $(wildcard include/config/MMIOWB) \
  arch/mips/include/asm/spinlock.h \
  arch/mips/include/generated/asm/qspinlock.h \
  include/asm-generic/qspinlock.h \
  arch/mips/include/generated/asm/qrwlock.h \
  include/asm-generic/qrwlock.h \
  include/linux/rwlock.h \
    $(wildcard include/config/PREEMPT) \
  include/linux/spinlock_api_smp.h \
    $(wildcard include/config/INLINE_SPIN_LOCK) \
    $(wildcard include/config/INLINE_SPIN_LOCK_BH) \
    $(wildcard include/config/INLINE_SPIN_LOCK_IRQ) \
    $(wildcard include/config/INLINE_SPIN_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_SPIN_TRYLOCK) \
    $(wildcard include/config/INLINE_SPIN_TRYLOCK_BH) \
    $(wildcard include/config/UNINLINE_SPIN_UNLOCK) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_BH) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_IRQRESTORE) \
    $(wildcard include/config/GENERIC_LOCKBREAK) \
  include/linux/rwlock_api_smp.h \
    $(wildcard include/config/INLINE_READ_LOCK) \
    $(wildcard include/config/INLINE_WRITE_LOCK) \
    $(wildcard include/config/INLINE_READ_LOCK_BH) \
    $(wildcard include/config/INLINE_WRITE_LOCK_BH) \
    $(wildcard include/config/INLINE_READ_LOCK_IRQ) \
    $(wildcard include/config/INLINE_WRITE_LOCK_IRQ) \
    $(wildcard include/config/INLINE_READ_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_WRITE_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_READ_TRYLOCK) \
    $(wildcard include/config/INLINE_WRITE_TRYLOCK) \
    $(wildcard include/config/INLINE_READ_UNLOCK) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK) \
    $(wildcard include/config/INLINE_READ_UNLOCK_BH) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_BH) \
    $(wildcard include/config/INLINE_READ_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_READ_UNLOCK_IRQRESTORE) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_IRQRESTORE) \
  include/linux/rbtree.h \
  include/linux/rbtree_types.h \
  include/linux/rcupdate.h \
    $(wildcard include/config/PREEMPT_RCU) \
    $(wildcard include/config/TINY_RCU) \
    $(wildcard include/config/TASKS_RCU_GENERIC) \
    $(wildcard include/config/RCU_STALL_COMMON) \
    $(wildcard include/config/NO_HZ_FULL) \
    $(wildcard include/config/RCU_NOCB_CPU) \
    $(wildcard include/config/TASKS_RCU) \
    $(wildcard include/config/TASKS_TRACE_RCU) \
    $(wildcard include/config/TASKS_RUDE_RCU) \
    $(wildcard include/config/TREE_RCU) \
    $(wildcard include/config/DEBUG_OBJECTS_RCU_HEAD) \
    $(wildcard include/config/PROVE_RCU) \
    $(wildcard include/config/ARCH_WEAK_RELEASE_ACQUIRE) \
  include/linux/rcutree.h \
  include/linux/rwsem.h \
    $(wildcard include/config/RWSEM_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_RWSEMS) \
  include/linux/completion.h \
  include/linux/swait.h \
  include/linux/wait.h \
  arch/mips/include/generated/asm/current.h \
  include/asm-generic/current.h \
  include/uapi/linux/wait.h \
  include/linux/uprobes.h \
    $(wildcard include/config/UPROBES) \
  include/linux/page-flags-layout.h \
    $(wildcard include/config/KASAN_HW_TAGS) \
  include/linux/numa.h \
    $(wildcard include/config/NODES_SHIFT) \
    $(wildcard include/config/NUMA_KEEP_MEMINFO) \
  include/generated/bounds.h \
  include/linux/workqueue.h \
    $(wildcard include/config/DEBUG_OBJECTS_WORK) \
    $(wildcard include/config/FREEZER) \
    $(wildcard include/config/SYSFS) \
    $(wildcard include/config/WQ_WATCHDOG) \
  include/linux/timer.h \
    $(wildcard include/config/DEBUG_OBJECTS_TIMERS) \
    $(wildcard include/config/NO_HZ_COMMON) \
  include/linux/ktime.h \
  include/linux/time.h \
    $(wildcard include/config/POSIX_TIMERS) \
  include/linux/time32.h \
  include/linux/timex.h \
  include/uapi/linux/timex.h \
  arch/mips/include/asm/timex.h \
  arch/mips/include/asm/cpu-type.h \
    $(wildcard include/config/SYS_HAS_CPU_LOONGSON2E) \
    $(wildcard include/config/SYS_HAS_CPU_LOONGSON2F) \
    $(wildcard include/config/SYS_HAS_CPU_LOONGSON64) \
    $(wildcard include/config/SYS_HAS_CPU_LOONGSON1B) \
    $(wildcard include/config/SYS_HAS_CPU_LOONGSON1C) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS32_R1) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS32_R2) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS32_R5) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS32_R6) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS64_R2) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS64_R5) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS64_R6) \
    $(wildcard include/config/SYS_HAS_CPU_MIPS64_R1) \
    $(wildcard include/config/SYS_HAS_CPU_R3000) \
    $(wildcard include/config/SYS_HAS_CPU_TX39XX) \
    $(wildcard include/config/SYS_HAS_CPU_VR41XX) \
    $(wildcard include/config/SYS_HAS_CPU_R4300) \
    $(wildcard include/config/SYS_HAS_CPU_R4X00) \
    $(wildcard include/config/SYS_HAS_CPU_TX49XX) \
    $(wildcard include/config/SYS_HAS_CPU_R5000) \
    $(wildcard include/config/SYS_HAS_CPU_R5500) \
    $(wildcard include/config/SYS_HAS_CPU_NEVADA) \
    $(wildcard include/config/SYS_HAS_CPU_R10000) \
    $(wildcard include/config/SYS_HAS_CPU_RM7000) \
    $(wildcard include/config/SYS_HAS_CPU_SB1) \
    $(wildcard include/config/SYS_HAS_CPU_CAVIUM_OCTEON) \
    $(wildcard include/config/SYS_HAS_CPU_BMIPS32_3300) \
    $(wildcard include/config/SYS_HAS_CPU_BMIPS4350) \
    $(wildcard include/config/SYS_HAS_CPU_BMIPS4380) \
    $(wildcard include/config/SYS_HAS_CPU_BMIPS5000) \
    $(wildcard include/config/SYS_HAS_CPU_XLP) \
    $(wildcard include/config/SYS_HAS_CPU_XLR) \
  include/linux/jiffies.h \
  include/generated/timeconst.h \
  include/linux/timekeeping.h \
    $(wildcard include/config/GENERIC_CMOS_UPDATE) \
  include/linux/clocksource_ids.h \
  include/linux/debugobjects.h \
    $(wildcard include/config/DEBUG_OBJECTS) \
    $(wildcard include/config/DEBUG_OBJECTS_FREE) \
  include/linux/seqlock.h \
  include/linux/mutex.h \
    $(wildcard include/config/MUTEX_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_MUTEXES) \
  include/linux/osq_lock.h \
  include/linux/debug_locks.h \
  include/linux/ww_mutex.h \
    $(wildcard include/config/DEBUG_RT_MUTEXES) \
    $(wildcard include/config/DEBUG_WW_MUTEX_SLOWPATH) \
  include/linux/rtmutex.h \
  arch/mips/include/asm/mmu.h \
  arch/mips/include/asm/clocksource.h \
  arch/mips/include/asm/unistd.h \
  arch/mips/include/uapi/asm/unistd.h \
  arch/mips/include/generated/uapi/asm/unistd_o32.h \
  arch/mips/include/generated/asm/unistd_nr_n32.h \
  arch/mips/include/generated/asm/unistd_nr_n64.h \
  arch/mips/include/generated/asm/unistd_nr_o32.h \
  include/vdso/helpers.h \

arch/mips/vdso/vgettimeofday.o: $(deps_arch/mips/vdso/vgettimeofday.o)

$(deps_arch/mips/vdso/vgettimeofday.o):
