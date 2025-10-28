cmd_tools/env/crc32.o := aarch64-openwrt-linux-musl-gcc -Wp,-MD,tools/env/.crc32.o.d -Os -pipe -mcpu=cortex-a53 -fno-caller-saves -fno-plt -fhonour-copts -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/u-boot-2023.04=u-boot-2023.04 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro   -I./tools -idirafterinclude -idirafter./arch/aarch64/include -idirafter ./tools/env -DUSE_HOSTCC -DTEXT_BASE=  -c -o tools/env/crc32.o tools/env/crc32.c

source_tools/env/crc32.o := tools/env/crc32.c

deps_tools/env/crc32.o := \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdc-predef.h \
  tools/env/../../lib/crc32.c \
    $(wildcard include/config/hw/watchdog.h) \
    $(wildcard include/config/watchdog.h) \
    $(wildcard include/config/dynamic/crc/table.h) \
    $(wildcard include/config/arm64/crc32.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/arpa/inet.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/features.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/netinet/in.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/inttypes.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/alltypes.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/sys/socket.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/socket.h \
  include/u-boot/crc.h \
  include/compiler.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stddef.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdbool.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/errno.h \
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
  include/u-boot/zlib.h \

tools/env/crc32.o: $(deps_tools/env/crc32.o)

$(deps_tools/env/crc32.o):
