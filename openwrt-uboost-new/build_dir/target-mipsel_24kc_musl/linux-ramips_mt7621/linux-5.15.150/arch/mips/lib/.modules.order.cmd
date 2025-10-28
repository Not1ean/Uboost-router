cmd_arch/mips/lib/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/lib/modules.order
