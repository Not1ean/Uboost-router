cmd_net/ipv4/udp_tunnel.o := mipsel-openwrt-linux-musl-ld -m elf32ltsmip -z noexecstack --no-warn-rwx-segments   -r -o net/ipv4/udp_tunnel.o net/ipv4/udp_tunnel_core.o net/ipv4/udp_tunnel_nic.o
