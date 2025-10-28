cmd_arch/mips/vdso/vdso.lds := mipsel-openwrt-linux-musl-gcc -E  -Wp,-MMD,arch/mips/vdso/.vdso.lds.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib/gcc/mipsel-openwrt-linux-musl/12.3.0/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -I./arch/mips/include/asm/mach-ralink -I./arch/mips/include/asm/mach-ralink/mt7621 -I./arch/mips/include/asm/mach-generic -EL  -march=mips32r2 -msoft-float   -D__VDSO__ -DBUILD_VDSO32 -mabi=32   -P -Umips -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/mips/vdso/vdso.lds arch/mips/vdso/vdso.lds.S

source_arch/mips/vdso/vdso.lds := arch/mips/vdso/vdso.lds.S

deps_arch/mips/vdso/vdso.lds := \
    $(wildcard include/config/MIPS_DISABLE_VDSO) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/mips/include/uapi/asm/sgidefs.h \

arch/mips/vdso/vdso.lds: $(deps_arch/mips/vdso/vdso.lds)

$(deps_arch/mips/vdso/vdso.lds):
