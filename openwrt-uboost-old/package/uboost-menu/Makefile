include $(TOPDIR)/rules.mk

PKG_NAME:=uboost-menu
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/uboost-menu
  SECTION:=utils
  CATEGORY:=Uboost
  TITLE:=UBoost Menu
  DEPENDS:=+luci-base
  PKGARCH:=all
endef

define Package/uboost-menu/description
  UBoost menu configuration
endef

define Build/Compile
	true
endef

define Package/uboost-menu/install
	$(INSTALL_DIR) $(1)/usr/share/luci/menu.d
	$(INSTALL_DATA) ./files/uboost-menu.json $(1)/usr/share/luci/menu.d/
endef

$(eval $(call BuildPackage,uboost-menu))
