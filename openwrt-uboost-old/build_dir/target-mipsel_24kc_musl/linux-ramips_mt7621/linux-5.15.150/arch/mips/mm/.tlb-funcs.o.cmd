cmd_arch/mips/mm/tlb-funcs.o := mipsel-openwrt-linux-musl-gcc -Wp,-MMD,arch/mips/mm/.tlb-funcs.o.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib/gcc/mipsel-openwrt-linux-musl/12.3.0/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80001000 -DLINKER_LOAD_ADDRESS=0x80001000 -DDATAOFFSET=0 -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -DGAS_HAS_SET_HARDFLOAT -Wa,-msoft-float -ffreestanding -EL -fno-stack-check -Wa,-mno-fix-loongson3-llsc -march=mips32r2 -mtune=34kc -Wa,--trap -DTOOLCHAIN_SUPPORTS_VIRT -DTOOLCHAIN_SUPPORTS_XPA -DTOOLCHAIN_SUPPORTS_CRC -DTOOLCHAIN_SUPPORTS_DSP -DTOOLCHAIN_SUPPORTS_GINV -I./arch/mips/include/asm/mach-ralink -I./arch/mips/include/asm/mach-ralink/mt7621 -I./arch/mips/include/asm/mach-generic -Wa,-gdwarf-2    -c -o arch/mips/mm/tlb-funcs.o arch/mips/mm/tlb-funcs.S

source_arch/mips/mm/tlb-funcs.o := arch/mips/mm/tlb-funcs.S

deps_arch/mips/mm/tlb-funcs.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/mips/include/asm/asm.h \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/SGI_IP28) \
  arch/mips/include/uapi/asm/sgidefs.h \
  arch/mips/include/asm/asm-eva.h \
    $(wildcard include/config/32BIT) \
    $(wildcard include/config/EVA) \
  arch/mips/include/generated/asm/export.h \
  include/asm-generic/export.h \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULE_REL_CRCS) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/mips/include/asm/regdef.h \

arch/mips/mm/tlb-funcs.o: $(deps_arch/mips/mm/tlb-funcs.o)

$(deps_arch/mips/mm/tlb-funcs.o):
