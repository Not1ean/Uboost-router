cmd_drivers/mtd/mtdsplit/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/mtd/mtdsplit/modules.order
