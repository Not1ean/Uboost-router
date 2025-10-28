cmd_arch/mips/fw/lib/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/fw/lib/modules.order
