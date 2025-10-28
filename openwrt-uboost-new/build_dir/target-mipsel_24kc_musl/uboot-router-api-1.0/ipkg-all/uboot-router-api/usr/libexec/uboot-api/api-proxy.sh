#!/bin/sh

# Прокси для API запросов к бэкенду
. /usr/libexec/uboot-api/functions.sh

METHOD="$1"
ENDPOINT="$2"
DATA="$3"

call_backend() {
    local url="$1"
    local method="$2"
    local data="$3"
    
    SERIAL=$(get_serial_number)
    USER_ID=$(get_config_value user_id)
    SECRET=$(get_config_value api_secret)
    BASE_URL=$(get_config_value backend_url)
    
    FULL_URL="${BASE_URL}${ENDPOINT}"
    
    log "API Call: $method $FULL_URL"
    
    # В реальной реализации здесь будет curl запрос
    # Сейчас возвращаем мок данные
    case "$ENDPOINT" in
        "/get-anonymous-key")
            echo '{
                "private_key": "anon_key_123",
                "public_key": "anon_pub_123",
                "endpoint": "youtube.uboost.com:51820",
                "address": "10.8.1.2/24"
            }'
            ;;
        "/check-subscription")
            echo '{
                "status": "active",
                "expires_at": "2025-12-31"
            }'
            ;;
        *)
            echo '{"error": "Endpoint not implemented"}'
            ;;
    esac
}

# Основная логика
case "$ENDPOINT" in
    "/get-anonymous-key"|"/check-subscription")
        call_backend "$ENDPOINT" "$METHOD" "$DATA"
        ;;
    *)
        log "Unknown endpoint: $ENDPOINT"
        echo '{"error": "Unknown endpoint"}'
        ;;
esac
    "/check-email-otp")
        # Эмуляция API ответа (замени на реальный вызов)
        local email=$(echo "$DATA" | grep -o '"email":"[^"]*"' | cut -d'"' -f4)
        local otp_code=$(echo "$DATA" | grep -o '"otp_code":"[^"]*"' | cut -d'"' -f4)
        
        # Здесь будет реальный вызов API
        # Сейчас возвращаем мок данные для теста
        if [ "$otp_code" = "1234" ]; then
            echo '{
                "data": {
                    "request": {
                        "auto_renewal": false,
                        "is_brand_new": true,
                        "key_limit": 10,
                        "number_of_available_keys": 1,
                        "paid_until": "2025-12-31T16:08:00.057413+00:00",
                        "payment_link": "https://uboost.com/payment?public_request_id=51989248-0177-46c0-8280-4ad7c0432d31",
                        "public_request_id": "51989248-0177-46c0-8280-4ad7c0432d31",
                        "simplified_status": "trial",
                        "user": {
                            "email": "'$email'"
                        }
                    }
                },
                "error": null
            }'
        else
            echo '{
                "data": null,
                "error": {
                    "code": "invalid_otp",
                    "localized_message": "Invalid or expired OTP code"
                }
            }'
        fi
        ;;
