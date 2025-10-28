cmd_arch/mips/kernel/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/kernel/modules.order
