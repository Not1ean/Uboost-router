# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/ucode")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ucode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ucode")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ucode")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/libucode.so.20230711")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so.20230711" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so.20230711")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so.20230711")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/libucode.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libucode.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/fs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/fs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/fs.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/fs.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/math.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/math.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/math.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/math.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/ubus.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/ubus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/ubus.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/ubus.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/uci.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uci.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uci.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uci.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/rtnl.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/rtnl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/rtnl.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/rtnl.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/nl80211.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/nl80211.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/nl80211.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/nl80211.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ucode" TYPE MODULE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/uloop.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uloop.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uloop.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ucode/uloop.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/utpl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/ucc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ucode" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/chunk.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/compiler.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/lexer.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/lib.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/module.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/platform.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/program.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/source.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/types.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/util.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/vallist.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/include/ucode/vm.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/ucode-2023-11-07-a6e75e02/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
