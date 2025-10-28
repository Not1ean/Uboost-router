cmd_drivers/net/wireless/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/wireless/modules.order
