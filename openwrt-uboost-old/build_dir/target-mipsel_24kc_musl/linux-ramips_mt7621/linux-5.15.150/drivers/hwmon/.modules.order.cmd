cmd_drivers/hwmon/modules.order := {   echo drivers/hwmon/hwmon.ko; :; } | awk '!x[$$0]++' - > drivers/hwmon/modules.order
