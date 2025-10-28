cmd_drivers/nvmem/modules.order := {   cat drivers/nvmem/layouts/modules.order; :; } | awk '!x[$$0]++' - > drivers/nvmem/modules.order
