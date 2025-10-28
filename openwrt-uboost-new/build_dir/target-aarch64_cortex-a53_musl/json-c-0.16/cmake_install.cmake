# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16

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
if(NOT DEFINED CMAKE_INSTALL_DEFAULT_DIRECTORY_PERMISSIONS)
  set(CMAKE_INSTALL_DEFAULT_DIRECTORY_PERMISSIONS "OWNER_READ;OWNER_WRITE;OWNER_EXECUTE;GROUP_READ;GROUP_EXECUTE;WORLD_READ;WORLD_EXECUTE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/notlean/openwrt-uboost/staging_dir/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl/bin/aarch64-openwrt-linux-musl-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/libjson-c.so.5.2.0"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/libjson-c.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson-c.so.5.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson-c.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/:" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/libjson-c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson-c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson-c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjson-c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/libjson-c.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c/json-c-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c/json-c-targets.cmake"
         "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/CMakeFiles/Export/c72427da9e5c73ebf6c111c2977a0759/json-c-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c/json-c-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c/json-c-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/CMakeFiles/Export/c72427da9e5c73ebf6c111c2977a0759/json-c-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/CMakeFiles/Export/c72427da9e5c73ebf6c111c2977a0759/json-c-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/json-c" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json-c-config.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json-c.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/json-c/json_config.h;/usr/include/json-c/json.h;/usr/include/json-c/arraylist.h;/usr/include/json-c/debug.h;/usr/include/json-c/json_c_version.h;/usr/include/json-c/json_inttypes.h;/usr/include/json-c/json_object.h;/usr/include/json-c/json_object_iterator.h;/usr/include/json-c/json_tokener.h;/usr/include/json-c/json_types.h;/usr/include/json-c/json_util.h;/usr/include/json-c/json_visit.h;/usr/include/json-c/linkhash.h;/usr/include/json-c/printbuf.h;/usr/include/json-c/json_pointer.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/include/json-c" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_config.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/arraylist.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/debug.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_c_version.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_inttypes.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_object.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_object_iterator.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_tokener.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_types.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_util.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_visit.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/linkhash.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/printbuf.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/json_pointer.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/apps/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/json-c-0.16/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
