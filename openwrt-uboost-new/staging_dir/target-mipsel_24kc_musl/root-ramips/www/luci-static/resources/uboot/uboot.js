/**
 * Uboost Dashboard JavaScript
 * Integrated with LuCI Argon theme
 */

class UboostDashboard {
    static async init() {
        console.log('Uboost Dashboard initializing...');
        await this.loadStatus();
        this.setupEventListeners();
        this.startAutoRefresh();
    }
    
    static async loadStatus() {
        try {
            this.showLoading(true);
            const response = await fetch(this.getApiUrl('status'));
            const data = await response.json();
            
            if (data.success) {
                this.updateDashboard(data.data);
                this.showNotification('Status updated successfully', 'success');
            } else {
                this.showNotification('Failed to load status', 'error');
            }
        } catch (error) {
            console.error('Status load error:', error);
            this.showNotification('Connection error', 'error');
        } finally {
            this.showLoading(false);
        }
    }
    
    static updateDashboard(data) {
        // Обновляем плитки статуса
        this.updateTile('device-status', data.device_info?.model || 'Unknown');
        this.updateTile('device-info', data.device_info?.serial || '-');
        this.updateTile('vpn-status', this.formatStatus(data.vpn_status));
        this.updateTile('youtube-status', this.formatStatus(data.youtube_status));
        this.updateTile('subscription-status', this.formatStatus(data.subscription_status));
        
        // Обновляем статус служб
        this.updateServiceStatus('awg-status', data.services?.wireguard);
        this.updateServiceStatus('yt-proxy-status', data.services?.youtube_proxy);
        
        // Управляем видимостью секций
        this.togglePaymentSection(data.vpn_status !== 'connected');
    }
    
    static updateTile(elementId, value) {
        const element = document.getElementById(elementId);
        if (element) {
            element.textContent = value;
            element.classList.add('updated');
            setTimeout(() => element.classList.remove('updated'), 1000);
        }
    }
    
    static updateServiceStatus(elementId, status) {
        const element = document.getElementById(elementId);
        if (element && status) {
            element.textContent = '● ' + status;
            element.className = 'label ' + (status === 'running' ? 'label-success' : 'label-warning');
        }
    }
    
    static formatStatus(status) {
        const statusMap = {
            'connected': '🟢 Connected',
            'active': '🟢 Active', 
            'enabled': '🟢 Enabled',
            'disconnected': '🔴 Disconnected',
            'disabled': '🔴 Disabled',
            'unknown': '⚫ Unknown'
        };
        return statusMap[status] || status;
    }
    
    static togglePaymentSection(show) {
        const section = document.getElementById('payment-section');
        if (section) {
            section.style.display = show ? 'block' : 'none';
        }
    }
    
    static async requestRegistration(email) {
        try {
            const response = await fetch(this.getApiUrl('register'), {
                method: 'POST',
                headers: {'Content-Type': 'application/json'},
                body: JSON.stringify({email: email})
            });
            return await response.json();
        } catch (error) {
            console.error('Registration error:', error);
            return {success: false, error: 'Network error'};
        }
    }
    
    static getApiUrl(endpoint) {
        return window.location.pathname.replace('/admin/uboot/main', '/admin/uboot/api/' + endpoint);
    }
    
    static showLoading(show) {
        const buttons = document.querySelectorAll('.cbi-button');
        buttons.forEach(btn => {
            btn.disabled = show;
            if (show) {
                btn.classList.add('loading');
            } else {
                btn.classList.remove('loading');
            }
        });
    }
    
    static showNotification(message, type = 'info') {
        // Можно добавить toast уведомления
        console.log(`${type.toUpperCase()}: ${message}`);
    }
    
    static setupEventListeners() {
        // Обработчик для поля email
        const emailInput = document.getElementById('register-email');
        if (emailInput) {
            emailInput.addEventListener('keypress', (e) => {
                if (e.key === 'Enter') {
                    this.handleRegistration();
                }
            });
        }
    }
    
    static startAutoRefresh() {
        // Автообновление каждые 30 секунд
        setInterval(() => {
            this.loadStatus();
        }, 30000);
    }
    
    static async handleRegistration() {
        const email = document.getElementById('register-email')?.value;
        if (!email || !this.validateEmail(email)) {
            this.showNotification('Please enter valid email', 'error');
            return;
        }
        
        const result = await this.requestRegistration(email);
        if (result.success) {
            document.getElementById('otp-section').style.display = 'block';
            this.showNotification('Confirmation code sent to email', 'success');
        } else {
            this.showNotification(result.error || 'Registration failed', 'error');
        }
    }
    
    static validateEmail(email) {
        return /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email);
    }
}

// Глобальные функции для HTML атрибутов
function requestRegistration() {
    UboostDashboard.handleRegistration();
}

function confirmRegistration() {
    const otp = document.getElementById('otp-code')?.value;
    if (!otp) {
        UboostDashboard.showNotification('Please enter confirmation code', 'error');
        return;
    }
    UboostDashboard.showNotification('Registration confirmed!', 'success');
}

// Инициализация при загрузке
document.addEventListener('DOMContentLoaded', () => {
    UboostDashboard.init();
});
static async verifyOTP(email, otpCode) {
    try {
        const response = await fetch(this.getApiUrl('verify-otp'), {
            method: 'POST',
            headers: {'Content-Type': 'application/json'},
            body: JSON.stringify({email: email, otp_code: otpCode})
        });
        
        const result = await response.json();
        
        if (result.data && result.data.request) {
            this.handleSuccessfulVerification(result.data.request);
            return {success: true, data: result.data};
        } else {
            this.showNotification(result.error?.localized_message || 'OTP verification failed', 'error');
            return {success: false, error: result.error};
        }
    } catch (error) {
        console.error('OTP verification error:', error);
        this.showNotification('Network error', 'error');
        return {success: false, error: 'Network error'};
    }
}

static handleSuccessfulVerification(requestData) {
    // Обновляем UI после успешной верификации
    document.getElementById('otp-section').style.display = 'none';
    document.getElementById('registered-banner').style.display = 'block';
    
    // Сохраняем данные подписки
    this.subscriptionData = requestData;
    
    // Обновляем статусы
    this.updateSubscriptionStatus(requestData.simplified_status);
    this.showNotification('Registration completed successfully!', 'success');
    
    // Перезагружаем статус
    setTimeout(() => this.loadStatus(), 1000);
}

static updateSubscriptionStatus(status) {
    const statusMap = {
        'trial': '🟡 Trial',
        'paid': '🟢 Paid', 
        'blocked': '🔴 Blocked',
        'unknown': '⚫ Unknown'
    };
    
    document.getElementById('subscription-status').textContent = statusMap[status] || status;
}
