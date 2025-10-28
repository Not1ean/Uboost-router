#!/bin/sh

# Общие функции для Uboost API
LOG_TAG="Uboost-API"

log() {
    logger -t "$LOG_TAG" "$1"
    echo "$(date '+%Y-%m-%d %H:%M:%S') - $1"
}

get_config_value() {
    local key="$1"
    local config_file="${2:-/etc/config/uboot-router}"
    uci get "${config_file}.config.${key}" 2>/dev/null || echo ""
}

set_config_value() {
    local key="$1"
    local value="$2"
    local config_file="${3:-/etc/config/uboot-router}"
    uci set "${config_file}.config.${key}=${value}"
    uci commit "$config_file"
}

get_serial_number() {
    local serial
    serial=$(cat /tmp/sysinfo/serial_number 2>/dev/null)
    if [ -z "$serial" ]; then
        serial=$(dd if=/dev/urandom bs=1 count=8 2>/dev/null | hexdump -e '8/1 "%02x"')
    fi
    echo "$serial"
}

generate_uuid() {
    cat /proc/sys/kernel/random/uuid 2>/dev/null || \
    echo "$(date +%s | sha256sum | cut -d' ' -f1 | head -c 32)"
}

check_internet_connection() {
    ping -c1 -W3 8.8.8.8 >/dev/null 2>&1
    return $?
}
