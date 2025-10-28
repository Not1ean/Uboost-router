module("luci.controller.uboot", package.seeall)

function index()
    -- Главное меню
    entry({"admin", "uboot"}, firstchild(), _("Uboost"), 30).index = true
    entry({"admin", "uboot", "main"}, template("uboot/main"), _("Dashboard"), 1)
    
    -- API endpoints
    entry({"admin", "uboot", "api", "status"}, call("action_status")).leaf = true
    entry({"admin", "uboot", "api", "register"}, call("action_register")).leaf = true
    entry({"admin", "uboot", "api", "verify-otp"}, call("action_verify_otp")).leaf = true
    entry({"admin", "uboot", "api", "check-payment"}, call("action_check_payment")).leaf = true
    entry({"admin", "uboot", "api", "configure-vpn"}, call("action_configure_vpn")).leaf = true
    entry({"admin", "uboot", "api", "enable-dpi"}, call("action_enable_dpi")).leaf = true
end

function action_status()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    local model = util.exec("cat /tmp/sysinfo/model 2>/dev/null") or "Unknown"
    model = model:gsub("%s+$", "") -- удаляем перенос строки
    
    -- Проверяем статусы сервисов
    local dpi_status = util.exec("/usr/libexec/uboot-api/dpi-manager.sh --status 2>/dev/null") or "inactive"
    local vpn_status = util.exec("/usr/libexec/uboot-api/vpn-manager.sh --status 2>/dev/null") or "inactive"
    local payment_status = util.exec("/usr/libexec/uboot-api/payment-checker.sh --status 2>/dev/null") or "not_checked"
    
    -- Получаем конфиг регистрации
    local registration_status = util.exec("uci get uboot-router.config.registration_status 2>/dev/null") or "not_registered"
    local user_email = util.exec("uci get uboot-router.config.user_email 2>/dev/null") or ""
    local router_id = util.exec("uci get uboot-router.config.user_id 2>/dev/null") or "12345"
    
    -- Проверяем интернет соединение
    local internet_status = "connected"
    if util.exec("ping -c1 -W3 8.8.8.8 >/dev/null 2>&1; echo $?") ~= "0" then
        internet_status = "disconnected"
    end
    
    http.prepare_content("application/json")
    http.write_json({
        success = true,
        data = {
            registration = {
                status = registration_status:gsub("%s+$", ""),
                email = user_email:gsub("%s+$", "")
            },
            router_id = router_id:gsub("%s+$", ""),
            device_info = {
                model = model,
            },
            internet_status = internet_status,
            dpi = {
                status = dpi_status:gsub("%s+$", ""),
                description = "YouTube доступ"
            },
            vpn = {
                status = vpn_status:gsub("%s+$", ""),
                payment_status = payment_status:gsub("%s+$", ""),
                has_key = false
            },
            services = {
                uboost = "active",
                dpi = dpi_status:gsub("%s+$", ""),
                vpn = vpn_status:gsub("%s+$", "")
            }
        }
    })
end

function action_register()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    -- Получаем POST данные
    local post_data = http.content()
    local data = json.parse(post_data) or {}
    
    local email = data.email
    
    if not email then
        http.status(400, "Bad Request")
        http.write_json({
            success = false,
            error = "Email is required"
        })
        return
    end
    
    -- Сохраняем email и запускаем процесс регистрации
    util.exec("uci set uboot-router.config.user_email='" .. email .. "'")
    util.exec("uci commit uboot-router")
    
    http.prepare_content("application/json")
    http.write_json({
        success = true,
        message = "Registration initiated",
        data = {
            next_step = "verify_otp"
        }
    })
end

function action_verify_otp()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    -- Получаем POST данные
    local post_data = http.content()
    local data = json.parse(post_data) or {}
    
    local email = data.email
    local otp_code = data.otp_code
    
    if not email or not otp_code then
        http.status(400, "Bad Request")
        http.write_json({
            success = false,
            error = "Email and OTP code are required"
        })
        return
    end
    
    -- Экранируем для shell
    email = email:gsub("'", "'\\''")
    otp_code = otp_code:gsub("'", "'\\''")
    
    local result = util.exec("/usr/libexec/uboot-api/otp-verifier.sh --verify '" .. email .. "' '" .. otp_code .. "' 2>/dev/null")
    
    if result and result ~= "" then
        local response = json.parse(result)
        
        if response.error then
            http.write_json({
                success = false,
                error = response.error
            })
        else
            -- Регистрация успешна - включаем DPI
            util.exec("/usr/libexec/uboot-api/dpi-manager.sh --enable")
            util.exec("uci set uboot-router.config.registration_status='completed'")
            util.exec("uci commit uboot-router")
            
            http.prepare_content("application/json")
            http.write_json({
                success = true,
                message = "Registration completed successfully",
                data = {
                    payment_link = response.data and response.data.request and response.data.request.payment_link,
                    next_step = "waiting_payment"
                }
            })
        end
    else
        http.write_json({
            success = false,
            error = "Verification failed"
        })
    end
end

function action_check_payment()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    local result = util.exec("/usr/libexec/uboot-api/payment-checker.sh --check 2>/dev/null")
    
    if result and result ~= "" then
        http.prepare_content("application/json")
        http.write(result)
    else
        http.write_json({
            success = false,
            error = "Payment check failed"
        })
    end
end

function action_configure_vpn()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    local result = util.exec("/usr/libexec/uboot-api/vpn-manager.sh --configure 2>/dev/null")
    
    if result and result ~= "" then
        http.prepare_content("application/json")
        http.write(result)
    else
        http.write_json({
            success = false,
            error = "VPN configuration failed"
        })
    end
end

function action_enable_dpi()
    local http = require("luci.http")
    local json = require("luci.jsonc")
    local util = require("luci.util")
    
    -- Включаем DPI через скрипт
    local result = util.exec("/usr/libexec/uboot-api/dpi-manager.sh --enable 2>/dev/null")
    
    http.prepare_content("application/json")
    if result then
        http.write_json({
            success = true,
            message = "DPI enabled successfully"
        })
    else
        http.write_json({
            success = false,
            error = "Failed to enable DPI"
        })
    end
end
