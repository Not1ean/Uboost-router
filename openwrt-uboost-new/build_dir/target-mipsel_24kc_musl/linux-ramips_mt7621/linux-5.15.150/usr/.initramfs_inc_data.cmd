cmd_usr/initramfs_inc_data := { cat usr/initramfs_data.cpio | lzma e -d20 -lc1 -lp2 -pb2 -eos -si -so; :; } > usr/initramfs_inc_data
