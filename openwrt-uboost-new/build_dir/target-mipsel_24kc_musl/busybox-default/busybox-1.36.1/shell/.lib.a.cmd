cmd_shell/lib.a := rm -f shell/lib.a; mipsel-openwrt-linux-musl-gcc-ar  rcs shell/lib.a shell/ash.o shell/ash_ptr_hack.o shell/math.o shell/random.o shell/shell_common.o
