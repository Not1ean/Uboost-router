cmd_arch/mips/mm/modules.order := {  :; } | awk '!x[$$0]++' - > arch/mips/mm/modules.order
