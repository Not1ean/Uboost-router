cmd_arch/mips/vdso/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/vdso/modules.order
