# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-8.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-posix.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-8.so.0.11.2"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-8.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-8.so.0.11.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-8.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/:" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-8.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-8.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-8.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-8.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-posix.so.3.0.4"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-posix.so.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-posix.so.3.0.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-posix.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/:" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-posix.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-posix.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-posix.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpcre2-posix.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-posix.pc"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/libpcre2-8.pc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_WRITE OWNER_READ OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/pcre2-config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/pcre2.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/src/pcre2posix.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/cmake/pcre2-config.cmake"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/cmake/pcre2-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2-config.1"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2grep.1"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2test.1"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man3" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_callout_enumerate.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_code_copy.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_code_copy_with_tables.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_code_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_compile.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_compile_context_copy.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_compile_context_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_compile_context_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_config.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_convert_context_copy.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_convert_context_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_convert_context_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_converted_pattern_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_dfa_match.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_general_context_copy.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_general_context_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_general_context_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_error_message.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_mark.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_match_data_size.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_ovector_count.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_ovector_pointer.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_get_startchar.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_compile.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_free_unused_memory.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_match.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_stack_assign.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_stack_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_jit_stack_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_maketables.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_maketables_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_context_copy.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_context_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_context_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_data_create.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_data_create_from_pattern.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_match_data_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_pattern_convert.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_pattern_info.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_serialize_decode.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_serialize_encode.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_serialize_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_serialize_get_number_of_codes.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_bsr.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_callout.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_character_tables.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_compile_extra_options.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_compile_recursion_guard.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_depth_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_glob_escape.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_glob_separator.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_heap_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_match_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_max_pattern_length.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_newline.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_offset_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_parens_nest_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_recursion_limit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_recursion_memory_management.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_set_substitute_callout.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substitute.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_copy_byname.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_copy_bynumber.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_get_byname.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_get_bynumber.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_length_byname.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_length_bynumber.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_list_free.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_list_get.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_nametable_scan.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2_substring_number_from_name.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2api.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2build.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2callout.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2compat.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2convert.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2demo.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2jit.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2limits.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2matching.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2partial.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2pattern.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2perform.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2posix.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2sample.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2serialize.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2syntax.3"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/pcre2unicode.3"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/pcre2/html" TYPE FILE FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/index.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2-config.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_callout_enumerate.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_code_copy.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_code_copy_with_tables.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_code_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_compile.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_compile_context_copy.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_compile_context_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_compile_context_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_config.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_convert_context_copy.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_convert_context_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_convert_context_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_converted_pattern_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_dfa_match.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_general_context_copy.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_general_context_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_general_context_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_error_message.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_mark.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_match_data_size.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_ovector_count.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_ovector_pointer.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_get_startchar.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_compile.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_free_unused_memory.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_match.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_stack_assign.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_stack_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_jit_stack_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_maketables.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_maketables_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_context_copy.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_context_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_context_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_data_create.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_data_create_from_pattern.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_match_data_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_pattern_convert.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_pattern_info.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_serialize_decode.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_serialize_encode.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_serialize_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_serialize_get_number_of_codes.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_bsr.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_callout.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_character_tables.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_compile_extra_options.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_compile_recursion_guard.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_depth_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_glob_escape.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_glob_separator.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_heap_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_match_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_max_pattern_length.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_newline.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_offset_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_parens_nest_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_recursion_limit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_recursion_memory_management.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_set_substitute_callout.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substitute.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_copy_byname.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_copy_bynumber.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_get_byname.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_get_bynumber.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_length_byname.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_length_bynumber.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_list_free.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_list_get.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_nametable_scan.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2_substring_number_from_name.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2api.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2build.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2callout.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2compat.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2convert.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2demo.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2grep.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2jit.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2limits.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2matching.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2partial.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2pattern.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2perform.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2posix.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2sample.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2serialize.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2syntax.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2test.html"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/doc/html/pcre2unicode.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/pcre2-10.42/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
