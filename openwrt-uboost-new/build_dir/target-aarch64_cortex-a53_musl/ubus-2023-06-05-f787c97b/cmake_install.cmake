# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b

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
  set(CMAKE_OBJDUMP "/home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/libubus.so.20230605")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so.20230605" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so.20230605")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so.20230605")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/libubus.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubus.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/ubus")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ubus" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ubus")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ubus")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sbin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/ubusd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbin/ubusd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbin/ubusd")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbin/ubusd")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/ubusmsg.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/ubus_common.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/libubus.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/lua/cmake_install.cmake")
  include("/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ubus-2023-06-05-f787c97b/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
