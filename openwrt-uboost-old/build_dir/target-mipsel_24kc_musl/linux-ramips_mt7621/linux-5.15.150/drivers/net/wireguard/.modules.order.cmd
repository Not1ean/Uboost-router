cmd_drivers/net/wireguard/modules.order := {   echo drivers/net/wireguard/wireguard.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireguard/modules.order
