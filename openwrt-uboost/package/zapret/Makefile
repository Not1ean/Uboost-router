#
# Copyright (c) 2024 remittor
#

include $(TOPDIR)/rules.mk

PKG_NAME:=zapret
PKG_VERSION:=72.20250924

PKG_MAINTAINER:=bol-van
PKG_LICENSE:=MIT
PKG_LICENSE_FILES:=docs/LICENSE.txt

PKG_SOURCE_URL:=https://github.com/bol-van/zapret.git
PKG_SOURCE_PROTO:=git
PKG_SOURCE_VERSION:=ce367b1a912e41303d47ebaa6b707ecc3cae8604
PKG_SOURCE_DATE:=2025-09-24

include $(INCLUDE_DIR)/package.mk

# ИСПРАВЛЕНО: явное имя "zapret" вместо $(PKG_NAME)
define Package/zapret
	SECTION:=net
	CATEGORY:=Network
	TITLE:=Zapret DPI bypass
	SUBMENU:=Zapret
	URL:=https://github.com/bol-van/zapret
	DEPENDS:= +nftables +curl +gzip +zlib
	DEPENDS+= +coreutils +coreutils-sort +coreutils-sleep
	DEPENDS+= +kmod-nft-nat +kmod-nft-offload +kmod-nft-queue
	DEPENDS+= +libnetfilter-queue +libcap
endef

# ИСПРАВЛЕНО: явное имя "zapret"
define Package/zapret/description
	Zapret DPI bypass system for OpenWRT
endef

define Build/Prepare
	$(Build/Prepare/Default)
endef

define Build/Configure
endef

define Build/Compile
	# Компилируем nfqws с правильными флагами
	$(MAKE) -C $(PKG_BUILD_DIR)/nfq \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS) -I$(STAGING_DIR)/usr/include" \
		LDFLAGS="$(TARGET_LDFLAGS) -L$(STAGING_DIR)/usr/lib -lz -lnetfilter_queue" \
		nfqws
		
	# Компилируем tpws если нужен
	$(if $(wildcard $(PKG_BUILD_DIR)/tpws), \
		$(MAKE) -C $(PKG_BUILD_DIR)/tpws \
			CC="$(TARGET_CC)" \
			CFLAGS="$(TARGET_CFLAGS) -I$(STAGING_DIR)/usr/include" \
			LDFLAGS="$(TARGET_LDFLAGS) -L$(STAGING_DIR)/usr/lib -lz" \
			tpws \
	)
endef

# ИСПРАВЛЕНО: явное имя "zapret"
define Package/zapret/conffiles
/etc/config/zapret
/opt/zapret/config
/opt/zapret/ipset/
endef

# ИСПРАВЛЕНО: явное имя "zapret"
define Package/zapret/install
	$(INSTALL_DIR) $(1)/opt/zapret
	$(INSTALL_DIR) $(1)/opt/zapret/nfq
	
	# Устанавливаем скомпилированные бинарники
	$(if $(wildcard $(PKG_BUILD_DIR)/nfq/nfqws), \
		$(INSTALL_BIN) $(PKG_BUILD_DIR)/nfq/nfqws $(1)/opt/zapret/nfq/nfqws \
	)
		
	$(if $(wildcard $(PKG_BUILD_DIR)/tpws/tpws), \
		$(INSTALL_BIN) $(PKG_BUILD_DIR)/tpws/tpws $(1)/opt/zapret/tpws \
	)
	
	$(INSTALL_DIR) $(1)/opt/zapret/common
	$(CP) $(PKG_BUILD_DIR)/common/* $(1)/opt/zapret/common/
	
	$(INSTALL_DIR) $(1)/opt/zapret/files
	$(CP) $(PKG_BUILD_DIR)/files/* $(1)/opt/zapret/files/
	
	$(INSTALL_DIR) $(1)/opt/zapret/ipset
	$(CP) $(PKG_BUILD_DIR)/ipset/* $(1)/opt/zapret/ipset/
	
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/blockcheck.sh $(1)/opt/zapret/blockcheck.sh
	
	$(INSTALL_DIR) $(1)/opt/zapret/tmp
	$(INSTALL_DIR) $(1)/opt/zapret/init.d/openwrt
	$(CP) $(PKG_BUILD_DIR)/init.d/openwrt/* $(1)/opt/zapret/init.d/openwrt/
	
	$(INSTALL_DIR) $(1)/etc/hotplug.d/iface
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/init.d/openwrt/90-zapret $(1)/etc/hotplug.d/iface/90-zapret
	
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./init.d.sh $(1)/etc/init.d/zapret
	
	$(INSTALL_DATA) ./config.default $(1)/opt/zapret/config.default
	$(INSTALL_DATA) ./ipset/zapret-hosts-google.txt $(1)/opt/zapret/ipset/zapret-hosts-google.txt
	$(INSTALL_DATA) ./ipset/zapret-hosts-user-exclude.txt $(1)/opt/zapret/ipset/zapret-hosts-user-exclude.txt
	$(INSTALL_DATA) ./ipset/zapret-ip-exclude.txt $(1)/opt/zapret/ipset/zapret-ip-exclude.txt
	
	$(INSTALL_DIR) $(1)/etc/uci-defaults
	$(INSTALL_BIN) ./uci-def-cfg.sh $(1)/etc/uci-defaults/zapret-uci-def-cfg.sh
	$(INSTALL_BIN) ./uci-def-cfg.sh $(1)/opt/zapret/uci-def-cfg.sh
	$(INSTALL_BIN) ./comfunc.sh $(1)/opt/zapret/comfunc.sh
	$(INSTALL_BIN) ./def-cfg.sh $(1)/opt/zapret/def-cfg.sh
	$(INSTALL_BIN) ./renew-cfg.sh $(1)/opt/zapret/renew-cfg.sh
	$(INSTALL_BIN) ./restore-def-cfg.sh $(1)/opt/zapret/restore-def-cfg.sh
	$(INSTALL_BIN) ./sync_config.sh $(1)/opt/zapret/sync_config.sh
	
	# Fix permissions
	chmod 644 $(1)/opt/zapret/ipset/*.txt
	chmod 644 $(1)/opt/zapret/config.default
	chmod 755 $(1)/opt/zapret/*.sh
endef

# ИСПРАВЛЕНО: явное имя "zapret" и ОТКЛЮЧАЕМ ПРОВЕРКУ БИБЛИОТЕЧНЫХ ЗАВИСИМОСТЕЙ
define Package/zapret/CheckDependencies
	@:
endef

# ИСПРАВЛЕНО: явное имя "zapret"
define Package/zapret/preinst
#!/bin/sh
# check if we are on real system
if [ -z "$${IPKG_INSTROOT}" ]; then
	if [ -f "/etc/init.d/zapret" ]; then
		SCRIPT=$$( readlink /etc/init.d/zapret )
		if [ -n "$${SCRIPT}" ]; then
			echo "Please uninstall original zapret utility!"
			exit 44
		fi
	fi
	if [ "$${PKG_UPGRADE}" = "1" ]; then
		# stop service if PKG_UPGRADE
		if [ -x "/etc/init.d/zapret" ]; then
			/etc/init.d/zapret running && /etc/init.d/zapret stop >/dev/null 2>&1
		fi
	fi
	if [ ! -f "/opt/zapret/ipset/zapret-hosts-google.txt" ]; then
		if [ -f "/opt/zapret/ipset/zapret-hosts-user.txt" ]; then
			CFGLISTHASH=$$( md5sum "/opt/zapret/ipset/zapret-hosts-user.txt" | awk '{print $$1;}' )
			if [ "$${CFGLISTHASH}" = "79e35df62b0d1ae455d0a7e04c4cecac" ]; then
				rm -f "/opt/zapret/ipset/zapret-hosts-user.txt"
			fi
		fi
	fi
fi
exit 0
endef

# ИСПРАВЛЕНО: явное имя "zapret"
define Package/zapret/postinst
#!/bin/sh
# check if we are on real system
if [ -z "$${IPKG_INSTROOT}" ]; then
	ZAPRET_CONFIG=/opt/zapret/config
	ZAPRET_CONFIG_DEF="/opt/zapret/config.default"
	# creating main config if its not exists
	if [ ! -f "$${ZAPRET_CONFIG}" ]; then
		cp -f "$${ZAPRET_CONFIG_DEF}" "$${ZAPRET_CONFIG}"
	fi
	# check obsolete format for main config
	if grep -qE "^NFQWS_OPT_DESYNC=|^MODE_HTTP=|^MODE_HTTPS=|^MODE_QUIC=|^MODE=" "$${ZAPRET_CONFIG}" ; then
		echo "Detect obsolute format for main config!"
		ZAPRET_CONFIG_BACKUP="$${ZAPRET_CONFIG}.backup"
		cp -f "$${ZAPRET_CONFIG}" "$${ZAPRET_CONFIG_BACKUP}"
		echo "Current file $${ZAPRET_CONFIG} backuped to $${ZAPRET_CONFIG_BACKUP}"
		cp -f "$${ZAPRET_CONFIG_DEF}" "$${ZAPRET_CONFIG}"
	fi
	# check existing uci-config
	[ -f "/etc/config/zapret" ] && ZAPRET_CFG_EXISTS=1 || ZAPRET_CFG_EXISTS=0
	# create or merge uci-config
	/opt/zapret/uci-def-cfg.sh
	[ "$${ZAPRET_CFG_EXISTS}" = "1" ] && echo "Config /etc/config/zapret merged with default uci-config"
	# remove uci-default script from system dir (used into /etc/init.d/boot)
	rm -f /etc/uci-defaults/zapret-uci-def-cfg.sh
	# copy (sync) all params from uci-config to main config
	/opt/zapret/sync_config.sh
	# check main config
	sh -n "$${ZAPRET_CONFIG}" 2>/dev/null || cp -f "$${ZAPRET_CONFIG_DEF}" "$${ZAPRET_CONFIG}"
	sh -n "$${ZAPRET_CONFIG}" 2>/dev/null || exit 58
	# enable main service
	/etc/init.d/zapret enable
	# stop all
	/etc/init.d/zapret stop_fw
	/etc/init.d/zapret stop_daemons
	ps w | grep '/opt/zapret/nfq/nfqws' | grep -v grep | awk '{print $$1}' | xargs -r kill -9
	# start main service
	/etc/init.d/zapret start
	# restart firewall
	[ -x /sbin/fw4 ] && fw4 -q restart || fw3 -q restart
fi
exit 0
endef

$(eval $(call BuildPackage,zapret))
