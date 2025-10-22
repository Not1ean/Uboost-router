#!/bin/sh

# Менеджер ключей Amnesia WireGuard
. /usr/libexec/uboot-api/functions.sh

apply_wireguard_config() {
    local private_key="$1"
    local public_key="$2"
    local endpoint="$3"
    local address="$4"
    
    log "Applying WireGuard configuration..."
    
    # Создаем конфиг для Amnesia WireGuard
    cat > /etc/config/amnesiawireguard << EOF
config amnesiawireguard 'config'
    option enabled '1'
    option private_key '$private_key'
    option public_key '$public_key' 
    option endpoint '$endpoint'
    option address '$address'
    option persistent_keepalive '25'
EOF
    
    # Перезапускаем службу если она установлена
    if [ -f /etc/init.d/amnesiawireguard ]; then
        /etc/init.d/amnesiawireguard restart
    fi
}

case "$1" in
    "--setup-anonymous")
        log "Setting up anonymous YouTube key..."
        
        # Получаем анонимный ключ
        RESPONSE=$(/usr/libexec/uboot-api/api-proxy.sh GET "/get-anonymous-key")
        
        PRIVATE_KEY=$(echo "$RESPONSE" | grep -o '"private_key":"[^"]*"' | cut -d'"' -f4)
        ENDPOINT=$(echo "$RESPONSE" | grep -o '"endpoint":"[^"]*"' | cut -d'"' -f4)
        
        if [ -n "$PRIVATE_KEY" ]; then
            apply_wireguard_config "$PRIVATE_KEY" "" "$ENDPOINT" "10.8.1.2/24"
            set_config_value youtube_status "enabled"
            log "Anonymous YouTube key applied successfully"
        else
            log "Failed to get anonymous key"
        fi
        ;;
        
    *)
        echo "Usage: $0 [--setup-anonymous]"
        exit 1
        ;;
esac
