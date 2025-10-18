#!/bin/sh

# Скрипт инициализации Uboost API
. /usr/libexec/uboot-api/functions.sh

log "Starting Uboost API initialization..."

# Проверяем и создаем конфигурацию если нужно
if [ ! -f /etc/config/uboot-router ]; then
    log "Creating default configuration..."
    cat > /etc/config/uboot-router << 'EOF'
config uboot 'config'
    option enabled '1'
    option operation_mode 'standalone'
    option api_secret 'DEFAULT_SECRET_CHANGE_ME'
    option backend_url 'https://api.uboost.com/router-api/v1'
    option auto_check_interval '3600'

config status 'current'
    option vpn_status 'unknown'
    option subscription_status 'unknown'
    option youtube_status 'disabled'
    option last_check '0'
EOF
fi

# Генерируем user_id если его нет
USER_ID=$(get_config_value user_id)
if [ -z "$USER_ID" ]; then
    log "Generating new user ID..."
    NEW_UID=$(generate_uuid)
    set_config_value user_id "$NEW_UID"
    log "Generated User ID: $NEW_UID"
fi

# Проверяем интернет соединение
if check_internet_connection; then
    log "Internet connection: OK"
    set_config_value internet_status "connected"
else
    log "Internet connection: FAILED"
    set_config_value internet_status "disconnected"
fi

log "Uboost API initialization completed"
