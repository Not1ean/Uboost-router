cmd_arch/mips/vdso/sigreturn.o := mipsel-openwrt-linux-musl-gcc -Wp,-MMD,arch/mips/vdso/.sigreturn.o.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib/gcc/mipsel-openwrt-linux-musl/12.3.0/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80001000 -DLINKER_LOAD_ADDRESS=0x80001000 -DDATAOFFSET=0 -fmacro-prefix-map=./= -I./arch/mips/include/asm/mach-ralink -I./arch/mips/include/asm/mach-ralink/mt7621 -I./arch/mips/include/asm/mach-generic -EL -march=mips32r2 -msoft-float -D__VDSO__ -DBUILD_VDSO32 -D__ASSEMBLY__ -Wa,-gdwarf-2 -mabi=32    -c -o arch/mips/vdso/sigreturn.o arch/mips/vdso/sigreturn.S

source_arch/mips/vdso/sigreturn.o := arch/mips/vdso/sigreturn.S

deps_arch/mips/vdso/sigreturn.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/mips/include/asm/vdso/vdso.h \
    $(wildcard include/config/CPU_MIPSR6) \
    $(wildcard include/config/CLKSRC_MIPS_GIC) \
  arch/mips/include/uapi/asm/sgidefs.h \
  arch/mips/include/uapi/asm/unistd.h \
  arch/mips/include/generated/uapi/asm/unistd_o32.h \
  arch/mips/include/asm/regdef.h \
  arch/mips/include/asm/asm.h \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/SGI_IP28) \
  arch/mips/include/asm/asm-eva.h \
    $(wildcard include/config/32BIT) \
    $(wildcard include/config/EVA) \

arch/mips/vdso/sigreturn.o: $(deps_arch/mips/vdso/sigreturn.o)

$(deps_arch/mips/vdso/sigreturn.o):
