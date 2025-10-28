cmd_tools/env/env_flags.o := aarch64-openwrt-linux-musl-gcc -Wp,-MD,tools/env/.env_flags.o.d -Os -pipe -mcpu=cortex-a53 -fno-caller-saves -fno-plt -fhonour-copts -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/u-boot-2023.04=u-boot-2023.04 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro   -I./tools -idirafterinclude -idirafter./arch/aarch64/include -idirafter ./tools/env -DUSE_HOSTCC -DTEXT_BASE=  -c -o tools/env/env_flags.o tools/env/env_flags.c

source_tools/env/env_flags.o := tools/env/env_flags.c

deps_tools/env/env_flags.o := \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdc-predef.h \
  tools/env/../../env/flags.c \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/env/writeable/list.h) \
    $(wildcard include/config/cmd/env/flags.h) \
    $(wildcard include/config/env/access/ignore/force.h) \
  include/env.h \
    $(wildcard include/config/spl/build.h) \
    $(wildcard include/config/env/import/fdt.h) \
  include/compiler.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stddef.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/alltypes.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdbool.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/errno.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/features.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/errno.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdlib.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/alloca.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdio.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/string.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/strings.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/sys/mman.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/mman.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/fcntl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/fcntl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/endian.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/byteswap.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/time.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/linux/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm-generic/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm-generic/int-ll64.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm/bitsperlong.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/linux/posix_types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/linux/stddef.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm/posix_types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/asm-generic/posix_types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/linux/string.h \
  include/linux/ctype.h \
  tools/env/fw_env_private.h \
    $(wildcard include/config/file.h) \
    $(wildcard include/config/baudrate.h) \
    $(wildcard include/config/bootdelay.h) \
    $(wildcard include/config/bootcommand.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
    $(wildcard include/config/spl/.h) \
    $(wildcard include/config/tpl/.h) \
    $(wildcard include/config/tools/.h) \
    $(wildcard include/config/tpl/build.h) \
    $(wildcard include/config/vpl/build.h) \
    $(wildcard include/config/tools/foo.h) \
    $(wildcard include/config/spl/foo.h) \
    $(wildcard include/config/tpl/foo.h) \
    $(wildcard include/config/vpl/foo.h) \
    $(wildcard include/config/option.h) \
    $(wildcard include/config/acme.h) \
    $(wildcard include/config/spl/acme.h) \
    $(wildcard include/config/tpl/acme.h) \
    $(wildcard include/config/if/enabled/int.h) \
    $(wildcard include/config/int/option.h) \
  include/config.h \
  tools/env/fw_env.h \
  include/env_attr.h \
  include/env_flags.h \
    $(wildcard include/config/regex.h) \
    $(wildcard include/config/env/overwrite.h) \
    $(wildcard include/config/overwrite/ethaddr/once.h) \
    $(wildcard include/config/ipv6.h) \

tools/env/env_flags.o: $(deps_tools/env/env_flags.o)

$(deps_tools/env/env_flags.o):
