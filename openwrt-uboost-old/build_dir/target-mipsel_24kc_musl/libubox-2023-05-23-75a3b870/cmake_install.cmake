# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libubox" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/assert.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/avl-cmp.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/avl.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/blob.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/blobmsg.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/blobmsg_json.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/json_script.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/kvlist.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/list.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/md5.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/runqueue.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/safe_list.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/ulog.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/uloop.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/usock.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/ustream.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/utils.h"
    "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/vlist.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libubox.so.20230523")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so.20230523" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so.20230523")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so.20230523")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libubox.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libubox.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libubox.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libblobmsg_json.so.20230523")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so.20230523" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so.20230523")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so.20230523")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libblobmsg_json.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libblobmsg_json.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libblobmsg_json.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/jshn")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jshn" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jshn")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jshn")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libjson_script.so.20230523")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so.20230523" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so.20230523")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so.20230523")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/libjson_script.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson_script.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/libubox" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/sh/jshn.sh")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/lua/cmake_install.cmake")
  include("/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-mipsel_24kc_musl/libubox-2023-05-23-75a3b870/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
