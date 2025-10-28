cmd_drivers/mtd/composite/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/mtd/composite/modules.order
