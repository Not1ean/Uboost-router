# Makefile settings shared between Makefiles.

CC = mipsel-openwrt-linux-musl-gcc
CXX = mipsel-openwrt-linux-musl-g++
CFLAGS = -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kc -fno-caller-saves -fno-plt -fhonour-copts -msoft-float -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/nettle-3.9.1=nettle-3.9.1 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro -DPIC -fpic  -ggdb3 -Wall -W -Wno-sign-compare   -Wmissing-prototypes -Wmissing-declarations -Wstrict-prototypes   -Wpointer-arith -Wbad-function-cast -Wnested-externs
CXXFLAGS = -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kc -fno-caller-saves -fno-plt -fhonour-copts -msoft-float -fmacro-prefix-map=/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/nettle-3.9.1=nettle-3.9.1 -Wformat -Werror=format-security -fstack-protector -D_FORTIFY_SOURCE=1 -Wl,-z,now -Wl,-z,relro -DPIC -fpic 
CCPIC = -fpic
CPPFLAGS = -I/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/usr/include -I/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include/fortify -I/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/include 
DEFS = -DHAVE_CONFIG_H
LDFLAGS = -L/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/usr/lib -L/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/lib -znow -zrelro 
ASM_FLAGS = 
LIBS = -lgmp 
LIBOBJS = 
EMULATOR = 
NM = mipsel-openwrt-linux-musl-gcc-nm

OBJEXT = o
EXEEXT = 

CC_FOR_BUILD = gcc -O -g
EXEEXT_FOR_BUILD = 

DEP_FLAGS = 
DEP_PROCESS = true

PACKAGE_BUGREPORT = nettle-bugs@lists.lysator.liu.se
PACKAGE_NAME = nettle
PACKAGE_STRING = nettle 3.9.1
PACKAGE_TARNAME = nettle
PACKAGE_VERSION = 3.9.1

LIBNETTLE_MAJOR = 8
LIBNETTLE_MINOR = 8
LIBNETTLE_SONAME = $(LIBNETTLE_FORLINK).$(LIBNETTLE_MAJOR)
LIBNETTLE_FILE = $(LIBNETTLE_SONAME).$(LIBNETTLE_MINOR)
LIBNETTLE_FILE_SRC = $(LIBNETTLE_FORLINK)
LIBNETTLE_FORLINK = libnettle.so
LIBNETTLE_LIBS = 
LIBNETTLE_LINK = $(CC) $(CFLAGS) $(LDFLAGS) -shared -Wl,-soname=$(LIBNETTLE_SONAME)

LIBHOGWEED_MAJOR = 6
LIBHOGWEED_MINOR = 8
LIBHOGWEED_SONAME = $(LIBHOGWEED_FORLINK).$(LIBHOGWEED_MAJOR)
LIBHOGWEED_FILE = $(LIBHOGWEED_SONAME).$(LIBHOGWEED_MINOR)
LIBHOGWEED_FILE_SRC = $(LIBHOGWEED_FORLINK)
LIBHOGWEED_FORLINK = libhogweed.so
LIBHOGWEED_LIBS = libnettle.so $(LIBS)
LIBHOGWEED_LINK = $(CC) $(CFLAGS) $(LDFLAGS) -shared -Wl,-soname=$(LIBHOGWEED_SONAME)

NUMB_BITS = 32

AR = mipsel-openwrt-linux-musl-gcc-ar
ARFLAGS = cru
AUTOCONF = autoconf
AUTOHEADER = autoheader
M4 = /home/notlean/openwrt-uboost/staging_dir/host/bin/m4
MAKEINFO = makeinfo
RANLIB = mipsel-openwrt-linux-musl-gcc-ranlib
LN_S = ln -s

prefix	=	/usr
exec_prefix =	/usr
datarootdir =	${prefix}/share
bindir =	/usr/bin
libdir =	${exec_prefix}/lib
includedir =	${prefix}/include
infodir =	/usr/info
abs_top_builddir = /home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/nettle-3.9.1

# Absolute name, since some systems require that for LD_LIBRARY_PATH.
TEST_SHLIB_DIR = ${abs_top_builddir}/.lib

# PRE_CPPFLAGS and PRE_LDFLAGS lets each Makefile.in prepend its own
# flags before CPPFLAGS and LDFLAGS. While EXTRA_CFLAGS are added at the end.

COMPILE = $(CC) $(PRE_CPPFLAGS) $(CPPFLAGS) $(DEFS) $(CFLAGS) $(EXTRA_CFLAGS) $(DEP_FLAGS)
COMPILE_CXX = $(CXX) $(PRE_CPPFLAGS) $(CPPFLAGS) $(DEFS) $(CXXFLAGS) $(DEP_FLAGS)
LINK = $(CC) $(CFLAGS) $(PRE_LDFLAGS) $(LDFLAGS)
LINK_CXX = $(CXX) $(CXXFLAGS) $(PRE_LDFLAGS) $(LDFLAGS)

# Default rule. Must be here, since config.make is included before the
# usual targets.
default: all

# Don't use any old-fashioned suffix rules.
.SUFFIXES:

# Disable builtin rule
%$(EXEEXT) : %.c

# Keep object files
.PRECIOUS: %.o

.PHONY: all check install uninstall clean distclean mostlyclean maintainer-clean distdir \
	all-here check-here install-here clean-here distclean-here mostlyclean-here \
	maintainer-clean-here distdir-here \
	install-shared install-info install-headers \
	uninstall-shared uninstall-info uninstall-headers \
	dist distcleancheck
