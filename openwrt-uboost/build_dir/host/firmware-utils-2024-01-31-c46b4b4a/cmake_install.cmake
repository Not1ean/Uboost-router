# Install script for directory: /home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/notlean/openwrt-uboost/staging_dir/host")
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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/add_header")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/add_header" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/add_header")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/add_header")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/addpattern")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/addpattern" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/addpattern")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/addpattern")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/asustrx")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/asustrx" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/asustrx")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/asustrx")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/avm-wasp-checksum")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/avm-wasp-checksum" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/avm-wasp-checksum")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/avm-wasp-checksum")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/bcm4908asus")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908asus" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908asus")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908asus")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/bcm4908kernel")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908kernel" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908kernel")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcm4908kernel")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/bcmblob")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmblob" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmblob")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmblob")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/bcmclm")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmclm" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmclm")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/bcmclm")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/buffalo-enc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-enc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-enc")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-enc")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/buffalo-tag")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tag" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tag")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tag")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/buffalo-tftp")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tftp" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tftp")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/buffalo-tftp")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/cros-vbutil")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cros-vbutil" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cros-vbutil")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cros-vbutil")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/dgfirmware")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgfirmware" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgfirmware")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgfirmware")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/dgn3500sum")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgn3500sum" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgn3500sum")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dgn3500sum")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/dlink-sge-image")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dlink-sge-image" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dlink-sge-image")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dlink-sge-image")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/dns313-header")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dns313-header" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dns313-header")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dns313-header")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/edimax_fw_header")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/edimax_fw_header" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/edimax_fw_header")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/edimax_fw_header")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/encode_crc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/encode_crc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/encode_crc")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/encode_crc")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/fix-u-media-header")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/fix-u-media-header" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/fix-u-media-header")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/fix-u-media-header")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/hcsmakeimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hcsmakeimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hcsmakeimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hcsmakeimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/imagetag")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagetag" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagetag")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagetag")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/iptime-crc32")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-crc32" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-crc32")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-crc32")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/iptime-naspkg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-naspkg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-naspkg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iptime-naspkg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/jcgimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jcgimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jcgimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/jcgimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/lxlfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxlfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxlfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxlfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/lzma2eva")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lzma2eva" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lzma2eva")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lzma2eva")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/makeamitbin")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/makeamitbin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/makeamitbin")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/makeamitbin")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkbrncmdline")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrncmdline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrncmdline")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrncmdline")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkbrnimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrnimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrnimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbrnimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkbuffaloimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbuffaloimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbuffaloimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkbuffaloimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkcameofw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcameofw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcameofw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcameofw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkcasfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcasfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcasfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcasfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkchkimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkchkimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkchkimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkchkimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkcsysimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcsysimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcsysimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkcsysimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkdapimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkdapimg2")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg2")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdapimg2")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkdhpimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdhpimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdhpimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdhpimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkdlinkfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdlinkfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdlinkfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdlinkfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkdniimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdniimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdniimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkdniimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkedimaximg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkedimaximg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkedimaximg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkedimaximg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkfwimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkfwimage2")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage2")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkfwimage2")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkh3cimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkh3cvfs")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cvfs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cvfs")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkh3cvfs")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkheader_gemtek")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkheader_gemtek" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkheader_gemtek")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkheader_gemtek")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkhilinkfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkhilinkfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkhilinkfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkhilinkfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkmerakifw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkmerakifw-old")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw-old" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw-old")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmerakifw-old")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkmylofw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmylofw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmylofw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkmylofw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkplanexfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkplanexfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkplanexfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkplanexfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkporayfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkporayfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkporayfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkporayfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkrasimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrasimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrasimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrasimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkrtn56uimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrtn56uimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrtn56uimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkrtn56uimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mksenaofw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksenaofw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksenaofw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksenaofw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mksercommfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksercommfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksercommfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mksercommfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mktitanimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktitanimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktitanimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktitanimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mktplinkfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mktplinkfw2")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw2")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mktplinkfw2")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkwrggimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrggimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrggimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrggimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkwrgimg")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrgimg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrgimg")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkwrgimg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkzcfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzcfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzcfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzcfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkzynfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzynfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzynfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzynfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/mkzyxelzldfw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzyxelzldfw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzyxelzldfw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mkzyxelzldfw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/motorola-bin")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/motorola-bin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/motorola-bin")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/motorola-bin")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/nand_ecc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nand_ecc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nand_ecc")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nand_ecc")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/nec-enc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nec-enc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nec-enc")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/nec-enc")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/osbridge-crc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/osbridge-crc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/osbridge-crc")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/osbridge-crc")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/oseama")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/oseama" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/oseama")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/oseama")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/otrx")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/otrx" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/otrx")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/otrx")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/pc1crypt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pc1crypt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pc1crypt")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pc1crypt")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/ptgen")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ptgen" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ptgen")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/ptgen")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/seama")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/seama" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/seama")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/seama")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/sign_dlink_ru")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sign_dlink_ru" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sign_dlink_ru")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sign_dlink_ru")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/spw303v")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/spw303v" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/spw303v")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/spw303v")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/srec2bin")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/srec2bin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/srec2bin")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/srec2bin")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/tplink-safeloader")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tplink-safeloader" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tplink-safeloader")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tplink-safeloader")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/trx")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/trx2edips")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2edips" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2edips")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2edips")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/trx2usr")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2usr" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2usr")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trx2usr")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/uimage_padhdr")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_padhdr" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_padhdr")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_padhdr")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/uimage_sgehdr")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_sgehdr" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_sgehdr")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/uimage_sgehdr")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/wrt400n")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wrt400n" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wrt400n")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/wrt400n")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/xiaomifw")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xiaomifw" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xiaomifw")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xiaomifw")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/xorimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xorimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xorimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xorimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/zyimage")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyimage" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyimage")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyimage")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/zytrx")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zytrx" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zytrx")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zytrx")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/zyxbcm")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyxbcm" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyxbcm")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/zyxbcm")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/host/firmware-utils-2024-01-31-c46b4b4a/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
