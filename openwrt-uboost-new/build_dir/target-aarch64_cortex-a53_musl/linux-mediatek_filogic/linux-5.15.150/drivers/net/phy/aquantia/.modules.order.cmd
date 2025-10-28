cmd_drivers/net/phy/aquantia/modules.order := {   echo drivers/net/phy/aquantia/aquantia.ko; :; } | awk '!x[$$0]++' - > drivers/net/phy/aquantia/modules.order
