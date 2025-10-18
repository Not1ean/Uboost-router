# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/notlean/openwrt-uboost/staging_dir/toolchain-mipsel_24kc_gcc-12.3.0_musl/bin/mipsel-openwrt-linux-musl-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/uci.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/uci_config.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/uci_blob.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/ucimap.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/libuci.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuci.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuci.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuci.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/uci")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uci" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uci")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uci")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/lua/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/uci-2023-08-10-5781664d/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
