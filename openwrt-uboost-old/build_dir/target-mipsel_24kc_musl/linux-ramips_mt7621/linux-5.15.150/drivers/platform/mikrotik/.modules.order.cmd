cmd_drivers/platform/mikrotik/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/platform/mikrotik/modules.order
