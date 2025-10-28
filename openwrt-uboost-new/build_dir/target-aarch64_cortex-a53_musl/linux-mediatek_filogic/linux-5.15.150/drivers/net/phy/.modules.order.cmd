cmd_drivers/net/phy/modules.order := {   cat drivers/net/phy/rtk/modules.order;   cat drivers/net/phy/aquantia/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/phy/modules.order
