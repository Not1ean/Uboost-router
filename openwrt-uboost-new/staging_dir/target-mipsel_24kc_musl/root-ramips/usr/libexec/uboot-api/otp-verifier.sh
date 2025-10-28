#!/bin/sh

# OTP Verification Script
. /usr/libexec/uboot-api/functions.sh

API_BASE_URL="https://api.uboost.com/router-api/v1"
DEVICE_ID=$(get_config_value user_id)

verify_otp() {
    local email="$1"
    local otp_code="$2"
    
    if [ -z "$email" ] || [ -z "$otp_code" ]; then
        echo '{"error": "Email and OTP code are required"}'
        return 1
    fi
    
    log "Verifying OTP for email: $email"
    
    # Подготавливаем запрос
    local response=$(curl -s -X POST \
        -H "X-Device-Id: $DEVICE_ID" \
        -H "User-Agent: Uboost-Router/1.0" \
        -H "Content-Type: application/json" \
        -d "{\"email\": \"$email\", \"otp_code\": \"$otp_code\"}" \
        "${API_BASE_URL}/check-email-otp")
    
    if [ $? -ne 0 ]; then
        log "OTP verification failed: Network error"
        echo '{"error": "Network error"}'
        return 1
    fi
    
    echo "$response"
    
    # Парсим ответ
    local error_code=$(echo "$response" | grep -o '"code":"[^"]*"' | cut -d'"' -f4)
    
    if [ "$error_code" = "invalid_otp" ]; then
        log "OTP verification failed: Invalid OTP"
        return 1
    fi
    
    # Если успешно, сохраняем данные
    local public_request_id=$(echo "$response" | grep -o '"public_request_id":"[^"]*"' | cut -d'"' -f4)
    local simplified_status=$(echo "$response" | grep -o '"simplified_status":"[^"]*"' | cut -d'"' -f4)
    local paid_until=$(echo "$response" | grep -o '"paid_until":"[^"]*"' | cut -d'"' -f4)
    
    if [ -n "$public_request_id" ]; then
        set_config_value public_request_id "$public_request_id"
        set_config_value subscription_status "$simplified_status"
        set_config_value paid_until "$paid_until"
        set_config_value user_email "$email"
        set_config_value registration_status "completed"
        
        log "OTP verification successful for: $email"
        log "Subscription status: $simplified_status, Paid until: $paid_until"
    fi
    
    return 0
}

case "$1" in
    "--verify")
        if [ -n "$2" ] && [ -n "$3" ]; then
            verify_otp "$2" "$3"
        else
            echo "Usage: $0 --verify <email> <otp_code>"
            exit 1
        fi
        ;;
    *)
        echo "OTP Verifier Script"
        echo "Usage: $0 --verify <email> <otp_code>"
        exit 1
        ;;
esac
