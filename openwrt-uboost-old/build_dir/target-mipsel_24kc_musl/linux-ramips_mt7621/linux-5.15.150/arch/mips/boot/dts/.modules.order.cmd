cmd_arch/mips/boot/dts/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/boot/dts/modules.order
