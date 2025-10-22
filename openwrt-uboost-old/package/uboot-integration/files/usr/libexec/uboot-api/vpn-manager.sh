#!/bin/sh

# VPN Manager for AmneziaWG integration
. /usr/libexec/uboot-api/functions.sh

configure_vpn() {
    log "Configuring AmneziaWG VPN..."
    
    # Проверяем статус оплаты
    local payment_status=$(/usr/libexec/uboot-api/payment-checker.sh --status)
    
    if [ "$payment_status" != "paid" ]; then
        log "VPN configuration aborted: Payment not confirmed"
        echo '{"error": "Payment not confirmed"}'
        return 1
    fi
    
    # Получаем конфигурацию VPN
    local vpn_config=$(/usr/libexec/uboot-api/api-proxy.sh GET "/get-vpn-config")
    
    local private_key=$(echo "$vpn_config" | grep -o '"private_key":"[^"]*"' | cut -d'"' -f4)
    local endpoint=$(echo "$vpn_config" | grep -o '"endpoint":"[^"]*"' | cut -d'"' -f4)
    local address=$(echo "$vpn_config" | grep -o '"address":"[^"]*"' | cut -d'"' -f4)
    
    if [ -z "$private_key" ]; then
        log "Failed to get VPN configuration"
        echo '{"error": "Failed to get VPN configuration"}'
        return 1
    fi
    
    # Настраиваем AmneziaWG
    if [ -f /etc/config/amneziawg ]; then
        uci set amneziawg.config.enabled='1'
        uci set amneziawg.config.private_key="$private_key"
        uci set amneziawg.config.endpoint="$endpoint"
        uci set amneziawg.config.address="$address"
        uci commit amneziawg
        
        # Запускаем службу
        if [ -f /etc/init.d/amneziawg ]; then
            /etc/init.d/amneziawg enable
            /etc/init.d/amneziawg restart
            log "AmneziaWG service configured and started"
        fi
        
        set_config_value vpn_status "configured"
        echo '{"success": true, "message": "VPN configured successfully"}'
    else
        log "AmneziaWG not installed"
        echo '{"error": "AmneziaWG not available"}'
        return 1
    fi
}

check_vpn_status() {
    if [ -f /etc/init.d/amneziawg ] && /etc/init.d/amneziawg enabled && /etc/init.d/amneziawg running; then
        echo "connected"
    elif [ -f /etc/config/amneziawg ] && uci get amneziawg.config.enabled 2>/dev/null | grep -q "1"; then
        echo "configured"
    else
        echo "disabled"
    fi
}

case "$1" in
    "--configure")
        configure_vpn
        ;;
    "--status")
        check_vpn_status
        ;;
    *)
        echo "Usage: $0 [--configure|--status]"
        exit 1
        ;;
esac
