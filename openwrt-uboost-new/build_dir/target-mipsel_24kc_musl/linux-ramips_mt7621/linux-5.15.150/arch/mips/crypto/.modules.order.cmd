cmd_arch/mips/crypto/modules.order := {   echo arch/mips/crypto/chacha-mips.ko;   echo arch/mips/crypto/poly1305-mips.ko; :; } | awk '!x[$$0]++' - > arch/mips/crypto/modules.order
