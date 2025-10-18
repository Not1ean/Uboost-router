#!/bin/sh

# Скрипт проверки статуса Uboost сервисов
. /usr/libexec/uboot-api/functions.sh

check_vpn_status() {
    if pgrep -f "amnesiawireguard" >/dev/null; then
        echo "connected"
    else
        echo "disconnected"
    fi
}

check_youtube_status() {
    # Проверяем работает ли YouTube proxy
    if iptables -t nat -L | grep -q "YouTube"; then
        echo "enabled"
    else
        echo "disabled"
    fi
}

check_subscription_status() {
    local last_check=$(get_config_value last_check)
    local current_time=$(date +%s)
    
    # Если давно не проверяли, возвращаем unknown
    if [ $((current_time - last_check)) -gt 86400 ]; then
        echo "unknown"
    else
        get_config_value subscription_status
    fi
}

case "$1" in
    "--status")
        log "Checking system status..."
        
        VPN_STATUS=$(check_vpn_status)
        YT_STATUS=$(check_youtube_status)
        SUB_STATUS=$(check_subscription_status)
        
        # Обновляем конфиг
        set_config_value vpn_status "$VPN_STATUS" "uboot-router.status"
        set_config_value youtube_status "$YT_STATUS" "uboot-router.status"
        set_config_value subscription_status "$SUB_STATUS" "uboot-router.status"
        set_config_value last_check "$(date +%s)" "uboot-router.status"
        
        # Выводим JSON для API
        echo '{
            "vpn_status": "'$VPN_STATUS'",
            "youtube_status": "'$YT_STATUS'", 
            "subscription_status": "'$SUB_STATUS'",
            "last_check": '$(date +%s)'
        }'
        ;;
        
    "--check")
        log "Performing subscription check..."
        # Здесь будет вызов реального API
        echo '{"status": "check_completed"}'
        ;;
        
    *)
        echo "Usage: $0 [--status|--check]"
        exit 1
        ;;
esac
