cmd_drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o := aarch64-openwrt-linux-musl-gcc -Wp,-MMD,drivers/net/phy/rtk/rtl8367c/.rtl8367c_asicdrv_led.o.d -nostdinc -isystem /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/lib/gcc/aarch64-openwrt-linux-musl/12.3.0/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu11 -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -mabi=lp64 -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=none -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector -Werror -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-dangling-pointer -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -g -fno-var-tracking -femit-struct-debug-baseonly -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-alloc-size-larger-than -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl=target-aarch64_cortex-a53_musl -fno-caller-saves -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1120 -Werror -D_LITTLE_ENDIAN -DMDC_MDIO_OPERATION -Idrivers/net/phy/rtk/rtl8367c/include -Iinclude/linux/    -DKBUILD_MODFILE='"drivers/net/phy/rtk/rtl8367s_gsw"' -DKBUILD_BASENAME='"rtl8367c_asicdrv_led"' -DKBUILD_MODNAME='"rtl8367s_gsw"' -D__KBUILD_MODNAME=kmod_rtl8367s_gsw -c -o drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.c

source_drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o := drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.c

deps_drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o := \
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
  arch/arm64/include/asm/compiler.h \
    $(wildcard include/config/CFI_CLANG) \
  drivers/net/phy/rtk/rtl8367c/include/rtl8367c_asicdrv_led.h \
  drivers/net/phy/rtk/rtl8367c/include/rtl8367c_asicdrv.h \
  drivers/net/phy/rtk/rtl8367c/include/rtk_types.h \
  drivers/net/phy/rtk/rtl8367c/include/rtk_error.h \
  drivers/net/phy/rtk/rtl8367c/include/rtl8367c_reg.h \
  drivers/net/phy/rtk/rtl8367c/include/rtl8367c_base.h \

drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o: $(deps_drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o)

$(deps_drivers/net/phy/rtk/rtl8367c/rtl8367c_asicdrv_led.o):
