cmd_drivers/nvmem/layouts/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/nvmem/layouts/modules.order
