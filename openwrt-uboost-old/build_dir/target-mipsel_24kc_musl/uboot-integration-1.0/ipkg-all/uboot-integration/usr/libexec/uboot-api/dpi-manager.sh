#!/bin/sh

# DPI Manager for Zapret integration
. /usr/libexec/uboot-api/functions.sh

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
    "--enable")
        enable_dpi
        ;;
    "--disable")
        disable_dpi
        ;;
    "--status")
        check_dpi_status
        ;;
    *)
        echo "Usage: $0 [--enable|--disable|--status]"
        exit 1
        ;;
esac
