cmd_arch/mips/boot/compressed/vmlinux.bin.z := { cat arch/mips/boot/compressed/vmlinux.bin | sh ./scripts/xz_wrap.sh; printf \\300\\364\\000\\001; } > arch/mips/boot/compressed/vmlinux.bin.z
