cmd_drivers/net/slip/modules.order := {   echo drivers/net/slip/slhc.ko; :; } | awk '!x[$$0]++' - > drivers/net/slip/modules.order
