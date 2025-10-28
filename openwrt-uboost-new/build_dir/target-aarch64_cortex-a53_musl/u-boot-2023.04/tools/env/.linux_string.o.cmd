cmd_tools/env/linux_string.o := aarch64-openwrt-linux-musl-gcc -Wp,-MD,tools/env/.linux_string.o.d -Os -pipe -mcpu=cortex-a53 -fno-caller-saves -fno-plt -fhonour-copts -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/u-boot-2023.04=u-boot-2023.04 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro   -I./tools -idirafterinclude -idirafter./arch/aarch64/include -idirafter ./tools/env -DUSE_HOSTCC -DTEXT_BASE=  -c -o tools/env/linux_string.o tools/env/linux_string.c

source_tools/env/linux_string.o := tools/env/linux_string.c

deps_tools/env/linux_string.o := \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdc-predef.h \
  tools/env/../../lib/linux_string.c \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/stdio.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/features.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/bits/alltypes.h \
  include/linux/ctype.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/linux/string.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/string.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/include/strings.h \

tools/env/linux_string.o: $(deps_tools/env/linux_string.o)

$(deps_tools/env/linux_string.o):
