include $(TOPDIR)/rules.mk

PKG_NAME:=uboot-rename
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Uboost Team <dev@uboost.com>
PKG_LICENSE:=MIT

include $(INCLUDE_DIR)/package.mk

define Package/uboot-rename
  SECTION:=utils
  CATEGORY:=Uboost
  TITLE:=Uboost Branding Rename
  DEPENDS:=
  PKGARCH:=all
endef

define Package/uboot-rename/description
  Replace OpenWRT branding with Uboost
endef

define Build/Compile
	true
endef

define Package/uboot-rename/install
	$(INSTALL_DIR) $(1)/etc/uci-defaults
	$(INSTALL_BIN) ./files/etc/uci-defaults/99-uboot-rename $(1)/etc/uci-defaults/
endef

$(eval $(call BuildPackage,uboot-rename))
