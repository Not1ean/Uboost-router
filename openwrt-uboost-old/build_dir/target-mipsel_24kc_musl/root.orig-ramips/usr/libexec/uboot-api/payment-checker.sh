#!/bin/sh

# Payment Status Checker
. /usr/libexec/uboot-api/functions.sh

check_payment_status() {
    log "Checking payment status..."
    
    local public_request_id=$(get_config_value public_request_id)
    
    if [ -z "$public_request_id" ]; then
        echo "not_registered"
        return 1
    fi
    
    # Проверяем статус через API
    local response=$(/usr/libexec/uboot-api/api-proxy.sh GET "/check-subscription")
    
    local status=$(echo "$response" | grep -o '"status":"[^"]*"' | cut -d'"' -f4)
    local paid_until=$(echo "$response" | grep -o '"expires_at":"[^"]*"' | cut -d'"' -f4)
    
    if [ "$status" = "active" ]; then
        set_config_value subscription_status "active"
        set_config_value paid_until "$paid_until"
        echo "paid"
    else
        set_config_value subscription_status "inactive"
        echo "unpaid"
    fi
}

case "$1" in
    "--check")
        check_payment_status
        ;;
    "--status")
        get_config_value subscription_status
        ;;
    *)
        echo "Usage: $0 [--check|--status]"
        exit 1
        ;;
esac
