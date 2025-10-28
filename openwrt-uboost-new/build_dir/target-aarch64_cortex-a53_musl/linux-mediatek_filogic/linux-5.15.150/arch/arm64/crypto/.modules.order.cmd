cmd_arch/arm64/crypto/modules.order := {   echo arch/arm64/crypto/chacha-neon.ko;   echo arch/arm64/crypto/poly1305-neon.ko; :; } | awk '!x[$$0]++' - > arch/arm64/crypto/modules.order
