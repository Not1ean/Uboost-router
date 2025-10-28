cmd_drivers/platform/modules.order := {   cat drivers/platform/mips/modules.order;   cat drivers/platform/mikrotik/modules.order; :; } | awk '!x[$$0]++' - > drivers/platform/modules.order
