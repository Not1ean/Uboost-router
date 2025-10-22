include $(TOPDIR)/rules.mk

PKG_NAME:=custom-theme
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/custom-theme
  SECTION:=luci
  CATEGORY:=LuCI
  TITLE:=Uboost Custom Theme
  DEPENDS:=+luci-theme-argon
  PKGARCH:=all
endef

define Package/custom-theme/description
  Custom Uboost theme with branded colors and logos
endef

define Build/Compile
	true
endef

define Package/custom-theme/install
	$(INSTALL_DIR) $(1)/www/luci-static/argon/css
	$(INSTALL_DATA) ./files/www/luci-static/argon/css/custom.css $(1)/www/luci-static/argon/css/
	
	$(INSTALL_DIR) $(1)/www/luci-static/argon/js
	$(INSTALL_DATA) ./files/www/luci-static/argon/js/branding.js $(1)/www/luci-static/argon/js/
	
	$(INSTALL_DIR) $(1)/www/luci-static/argon/fonts
	$(INSTALL_DATA) ./files/www/luci-static/argon/fonts/OpenRunde-Medium.woff2 $(1)/www/luci-static/argon/fonts/
	
	$(INSTALL_DIR) $(1)/www/luci-static/argon/background
	$(INSTALL_DATA) ./files/www/luci-static/argon/background/background.jpg $(1)/www/luci-static/argon/background/
	
	$(INSTALL_DIR) $(1)/www/luci-static/argon/logo
	$(INSTALL_DATA) ./files/www/luci-static/argon/logo/logo.png $(1)/www/luci-static/argon/logo/
	
	$(INSTALL_DIR) $(1)/www/luci-static/argon
	$(INSTALL_DATA) ./files/www/luci-static/argon/favicon.ico $(1)/www/luci-static/argon/
endef

$(eval $(call BuildPackage,custom-theme))
