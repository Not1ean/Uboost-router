cmd_tools/env/ctype.o := mipsel-openwrt-linux-musl-gcc -Wp,-MD,tools/env/.ctype.o.d -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kc -fno-caller-saves -fno-plt -fhonour-copts -msoft-float -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/u-boot-2023.04=u-boot-2023.04 -mips16 -minterlink-mips16 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro   -I./tools -idirafterinclude -idirafter./arch/mipsel/include -idirafter ./tools/env -DUSE_HOSTCC -DTEXT_BASE=  -c -o tools/env/ctype.o tools/env/ctype.c

source_tools/env/ctype.o := tools/env/ctype.c

deps_tools/env/ctype.o := \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdc-predef.h \
  tools/env/../../lib/ctype.c \
  include/linux/ctype.h \

tools/env/ctype.o: $(deps_tools/env/ctype.o)

$(deps_tools/env/ctype.o):
