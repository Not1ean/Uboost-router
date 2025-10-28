cmd_arch/mips/boot/compressed/calc_vmlinuz_load_addr := gcc -Wp,-MMD,arch/mips/boot/compressed/.calc_vmlinuz_load_addr.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include -I./arch/mips/include -I./arch/mips/include/generated  -I./include -I./arch/mips/include/uapi -I./arch/mips/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o arch/mips/boot/compressed/calc_vmlinuz_load_addr arch/mips/boot/compressed/calc_vmlinuz_load_addr.c   

source_arch/mips/boot/compressed/calc_vmlinuz_load_addr := arch/mips/boot/compressed/calc_vmlinuz_load_addr.c

deps_arch/mips/boot/compressed/calc_vmlinuz_load_addr := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/sizes.h \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \

arch/mips/boot/compressed/calc_vmlinuz_load_addr: $(deps_arch/mips/boot/compressed/calc_vmlinuz_load_addr)

$(deps_arch/mips/boot/compressed/calc_vmlinuz_load_addr):
