cmd_drivers/platform/mips/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/platform/mips/modules.order
