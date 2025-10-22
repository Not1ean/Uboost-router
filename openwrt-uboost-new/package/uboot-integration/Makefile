include $(TOPDIR)/rules.mk

PKG_NAME:=uboot-integration
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/uboot-integration
  SECTION:=utils
  CATEGORY:=Uboost
  TITLE:=UBoost Services Integration
  DEPENDS:=+kmod-amneziawg +amneziawg-tools +zapret +curl +ca-bundle
  PKGARCH:=all
endef

define Package/uboot-integration/description
  Integration package for UBoost DPI and VPN services
endef

define Build/Compile
	true
endef

define Package/uboot-integration/install
	# Конфигурация
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_CONF) ./files/etc/config/uboot-integration $(1)/etc/config/
	
	# UCI defaults для инициализации
	$(INSTALL_DIR) $(1)/etc/uci-defaults
	$(INSTALL_BIN) ./files/etc/uci-defaults/99-uboot-integration $(1)/etc/uci-defaults/
	
	# Скрипты управления (ИСПРАВЛЕНО: правильные пути)
	$(INSTALL_DIR) $(1)/usr/libexec/uboot-api
	$(INSTALL_BIN) ./files/usr/libexec/uboot-api/dpi-manager.sh $(1)/usr/libexec/uboot-api/
	$(INSTALL_BIN) ./files/usr/libexec/uboot-api/vpn-manager.sh $(1)/usr/libexec/uboot-api/
	$(INSTALL_BIN) ./files/usr/libexec/uboot-api/payment-checker.sh $(1)/usr/libexec/uboot-api/
endef

$(eval $(call BuildPackage,uboot-integration))
