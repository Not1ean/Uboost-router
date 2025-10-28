cmd_tools/env/fw_env.o := mipsel-openwrt-linux-musl-gcc -Wp,-MD,tools/env/.fw_env.o.d -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kc -fno-caller-saves -fno-plt -fhonour-copts -msoft-float -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/u-boot-2023.04=u-boot-2023.04 -mips16 -minterlink-mips16 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro   -I./tools -idirafterinclude -idirafter./arch/mipsel/include -idirafter ./tools/env -DUSE_HOSTCC -DTEXT_BASE=  -c -o tools/env/fw_env.o tools/env/fw_env.c

source_tools/env/fw_env.o := tools/env/fw_env.c

deps_tools/env/fw_env.o := \
    $(wildcard include/config/file.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdc-predef.h \
  include/compiler.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stddef.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/alltypes.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdbool.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/stdint.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/errno.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/features.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/errno.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdlib.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/alloca.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/stdio.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/string.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/strings.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/sys/mman.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/mman.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/fcntl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/fcntl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/endian.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/byteswap.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/time.h \
  include/env.h \
    $(wildcard include/config/spl/build.h) \
    $(wildcard include/config/env/import/fdt.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm-generic/int-ll64.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm/bitsperlong.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/posix_types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/stddef.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm/posix_types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm/sgidefs.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm-generic/posix_types.h \
  include/env_flags.h \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/env/writeable/list.h) \
    $(wildcard include/config/regex.h) \
    $(wildcard include/config/env/overwrite.h) \
    $(wildcard include/config/overwrite/ethaddr/once.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/cmd/env/flags.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/libgen.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/fs.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/limits.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/ioctl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm/ioctl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/asm-generic/ioctl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/fscrypt.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/linux/mount.h \
  include/linux/stringify.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/ctype.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/sys/types.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/sys/select.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/sys/ioctl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/ioctl.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/sys/stat.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/stat.h \
  include/u-boot/crc.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/unistd.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/posix.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/dirent.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/bits/dirent.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/mtd/mtd-user.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/mtd/mtd-abi.h \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/mtd/ubi-user.h \
    $(wildcard include/config/mtd/ubi/beb/limit.h) \
  tools/env/fw_env_private.h \
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
  include/env_default.h \
    $(wildcard include/config/sys/redundand/environment.h) \
    $(wildcard include/config/use/default/env/file.h) \
    $(wildcard include/config/env/callback/list/default.h) \
    $(wildcard include/config/env/flags/list/default.h) \
    $(wildcard include/config/use/bootargs.h) \
    $(wildcard include/config/bootargs.h) \
    $(wildcard include/config/loads/echo.h) \
    $(wildcard include/config/ethprime.h) \
    $(wildcard include/config/use/ipaddr.h) \
    $(wildcard include/config/ipaddr.h) \
    $(wildcard include/config/use/serverip.h) \
    $(wildcard include/config/serverip.h) \
    $(wildcard include/config/sys/disable/autoload.h) \
    $(wildcard include/config/preboot/defined.h) \
    $(wildcard include/config/preboot.h) \
    $(wildcard include/config/use/rootpath.h) \
    $(wildcard include/config/rootpath.h) \
    $(wildcard include/config/use/gatewayip.h) \
    $(wildcard include/config/gatewayip.h) \
    $(wildcard include/config/use/netmask.h) \
    $(wildcard include/config/netmask.h) \
    $(wildcard include/config/use/hostname.h) \
    $(wildcard include/config/hostname.h) \
    $(wildcard include/config/use/bootfile.h) \
    $(wildcard include/config/bootfile.h) \
    $(wildcard include/config/sys/load/addr.h) \
    $(wildcard include/config/pci/bootdelay.h) \
    $(wildcard include/config/env/vars/uboot/config.h) \
    $(wildcard include/config/sys/arch.h) \
    $(wildcard include/config/sys/cpu.h) \
    $(wildcard include/config/sys/board.h) \
    $(wildcard include/config/sys/vendor.h) \
    $(wildcard include/config/sys/soc.h) \
    $(wildcard include/config/env/fdt/path.h) \
    $(wildcard include/config/bootcount/bootlimit.h) \
    $(wildcard include/config/mtdids/default.h) \
    $(wildcard include/config/mtdparts/default.h) \
    $(wildcard include/config/extra/env/text.h) \
  include/env_callback.h \
    $(wildcard include/config/silent/console.h) \
    $(wildcard include/config/cmd/dns.h) \
    $(wildcard include/config/bootstd.h) \
  include/linker_lists.h \
    $(wildcard include/config/linker/list/align.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  /home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/search.h \

tools/env/fw_env.o: $(deps_tools/env/fw_env.o)

$(deps_tools/env/fw_env.o):
