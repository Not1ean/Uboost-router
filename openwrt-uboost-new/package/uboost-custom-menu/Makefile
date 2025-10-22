include $(TOPDIR)/rules.mk

PKG_NAME:=uboost-custom-menu
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/uboost-custom-menu
  SECTION:=utils
  CATEGORY:=Uboost
  TITLE:=Uboost Custom Menu Configuration
  DEPENDS:=+luci-base
  PKGARCH:=all
endef

define Package/uboost-custom-menu/description
  Complete menu customization for Uboost Router including API integration
endef

define Build/Compile
	true
endef

define Package/uboost-custom-menu/install
	# Устанавливаем кастомные меню LuCI с другими именами
	$(INSTALL_DIR) $(1)/usr/share/luci/menu.d
	
	# Основные меню (упрощенные) - с префиксом uboost-
	$(INSTALL_DATA) ./files/usr/share/luci/menu.d/uboost-status.json $(1)/usr/share/luci/menu.d/
	$(INSTALL_DATA) ./files/usr/share/luci/menu.d/uboost-system.json $(1)/usr/share/luci/menu.d/
	$(INSTALL_DATA) ./files/usr/share/luci/menu.d/uboost-network.json $(1)/usr/share/luci/menu.d/
	
	# Наше Uboost API меню
	$(INSTALL_DATA) ./files/usr/share/luci/menu.d/uboot.json $(1)/usr/share/luci/menu.d/
endef

define Package/uboost-custom-menu/postinst
#!/bin/sh
# Удаляем стандартные меню которые не нужны (выполняется после установки)
rm -f /usr/share/luci/menu.d/luci-app-firewall.json
rm -f /usr/share/luci/menu.d/luci-app-opkg.json
rm -f /usr/share/luci/menu.d/luci-app-statistics.json
exit 0
endef

$(eval $(call BuildPackage,uboost-custom-menu))
