cmd_scripts/module.lds := aarch64-openwrt-linux-musl-gcc -E  -Wp,-MMD,scripts/.module.lds.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/lib/gcc/aarch64-openwrt-linux-musl/12.3.0/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -fmacro-prefix-map=./=   -P -Uarm64 -D__ASSEMBLY__ -DLINKER_SCRIPT -o scripts/module.lds scripts/module.lds.S

source_scripts/module.lds := scripts/module.lds.S

deps_scripts/module.lds := \
    $(wildcard include/config/CFI_CLANG) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/arm64/include/asm/module.lds.h \
    $(wildcard include/config/ARM64_MODULE_PLTS) \
    $(wildcard include/config/KASAN_SW_TAGS) \

scripts/module.lds: $(deps_scripts/module.lds)

$(deps_scripts/module.lds):
