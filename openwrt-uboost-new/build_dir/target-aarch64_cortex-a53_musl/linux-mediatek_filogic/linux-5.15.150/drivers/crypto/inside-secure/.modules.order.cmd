cmd_drivers/crypto/inside-secure/modules.order := {   echo drivers/crypto/inside-secure/crypto_safexcel.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/inside-secure/modules.order
