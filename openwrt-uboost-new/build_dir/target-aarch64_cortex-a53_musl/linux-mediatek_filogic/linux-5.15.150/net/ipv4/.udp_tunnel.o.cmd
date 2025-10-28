cmd_net/ipv4/udp_tunnel.o := aarch64-openwrt-linux-musl-ld -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments   -r -o net/ipv4/udp_tunnel.o net/ipv4/udp_tunnel_core.o net/ipv4/udp_tunnel_nic.o
