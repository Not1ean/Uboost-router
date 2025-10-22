include $(TOPDIR)/rules.mk

PKG_NAME:=uboot-router-api
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/uboot-router-api
  SECTION:=utils
  CATEGORY:=Uboost
  TITLE:=Uboost Router API and Dashboard
  DEPENDS:=+luci-base +luci-theme-argon +custom-theme +lua +luci-lib-jsonc +luci-compat +uboot-integration +curl +ca-bundle
  PKGARCH:=all
endef

define Package/uboot-router-api/description
  Uboost Router management interface with VPN and YouTube free access
endef

define Build/Compile
	true
endef

define Package/uboot-router-api/install
	# Конфиги
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_CONF) ./files/etc/config/uboot-router $(1)/etc/config/
	$(INSTALL_CONF) ./files/etc/config/uboot-vpn $(1)/etc/config/
	
	# Init скрипт
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/etc/init.d/uboot-api $(1)/etc/init.d/
	
	# UCI defaults
	$(INSTALL_DIR) $(1)/etc/uci-defaults
	$(INSTALL_BIN) ./files/etc/uci-defaults/99_uboot-api $(1)/etc/uci-defaults/
	$(INSTALL_BIN) ./files/etc/uci-defaults/98-uboost-wifi $(1)/etc/uci-defaults/
	
	# LuCI контроллер
	$(INSTALL_DIR) $(1)/usr/lib/lua/luci/controller
	$(INSTALL_DATA) ./files/usr/lib/lua/luci/controller/uboot.lua $(1)/usr/lib/lua/luci/controller/
	
	# LuCI view
	$(INSTALL_DIR) $(1)/usr/lib/lua/luci/view/uboot
	$(INSTALL_DATA) ./files/usr/lib/lua/luci/view/uboot/main.htm $(1)/usr/lib/lua/luci/view/uboot/
	
	# Исполняемые скрипты
	$(INSTALL_DIR) $(1)/usr/libexec/uboot-api
	$(INSTALL_BIN) ./files/usr/libexec/uboot-api/*.sh $(1)/usr/libexec/uboot-api/
	
	# Статические ресурсы
	$(INSTALL_DIR) $(1)/www/luci-static/resources/uboot
	$(INSTALL_DATA) ./files/www/luci-static/resources/uboot/* $(1)/www/luci-static/resources/uboot/
endef

$(eval $(call BuildPackage,uboot-router-api))
