#!/bin/sh

# DPI Manager for Zapret integration
# ИСПРАВЛЕНО: правильный путь к functions.sh
[ -f /usr/libexec/uboot-api/functions.sh ] && . /usr/libexec/uboot-api/functions.sh

log() {
    logger -t "DPI-Manager" "$1"
    echo "$(date '+%Y-%m-%d %H:%M:%S') - $1"
}

set_config_value() {
    local key="$1"
    local value="$2"
    uci set uboot-integration.config.${key}="${value}" 2>/dev/null
    uci commit uboot-integration 2>/dev/null
}

enable_dpi() {
    log "Enabling DPI (Zapret) for YouTube..."
    
    # Включаем Zapret
    if [ -f /etc/init.d/zapret ]; then
        /etc/init.d/zapret enable
        /etc/init.d/zapret start
        log "Zapret service started"
    else
        log "Zapret service not found"
        return 1
    fi
    
    # Настраиваем правила для YouTube
    if command -v zapret >/dev/null; then
        zapret enable youtube
        log "YouTube blocking enabled via Zapret"
    fi
    
    set_config_value dpi_status "enabled"
    return 0
}

disable_dpi() {
    log "Disabling DPI..."
    
    if [ -f /etc/init.d/zapret ]; then
        /etc/init.d/zapret stop
        /etc/init.d/zapret disable
    fi
    
    set_config_value dpi_status "disabled"
}

check_dpi_status() {
    if [ -f /etc/init.d/zapret ] && /etc/init.d/zapret enabled && /etc/init.d/zapret running; then
        echo "enabled"
    else
        echo "disabled"
    fi
}

case "$1" in
    "enable")
        enable_dpi
        ;;
    "disable")
        disable_dpi
        ;;
    "status")
        check_dpi_status
        ;;
    *)
        echo "Usage: $0 [enable|disable|status]"
        exit 1
        ;;
esac
