# Install script for directory: /home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/aes.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/aesni.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/arc4.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/aria.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/asn1.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/asn1write.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/base64.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/bignum.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/blowfish.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/bn_mul.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/camellia.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ccm.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/certs.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/chacha20.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/chachapoly.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/check_config.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/cipher.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/cipher_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/cmac.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/compat-1.3.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/config.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/config_psa.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/constant_time.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ctr_drbg.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/debug.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/des.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/dhm.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ecdh.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ecdsa.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ecjpake.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ecp.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ecp_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/entropy.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/entropy_poll.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/error.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/gcm.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/havege.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/hkdf.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/hmac_drbg.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/md.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/md2.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/md4.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/md5.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/md_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/memory_buffer_alloc.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/net.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/net_sockets.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/nist_kw.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/oid.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/padlock.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pem.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pk.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pk_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pkcs11.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pkcs12.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/pkcs5.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/platform.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/platform_time.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/platform_util.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/poly1305.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/psa_util.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ripemd160.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/rsa.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/rsa_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/sha1.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/sha256.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/sha512.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl_cache.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl_ciphersuites.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl_cookie.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl_internal.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/ssl_ticket.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/threading.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/timing.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/version.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/x509.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/x509_crl.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/x509_crt.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/x509_csr.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/mbedtls/xtea.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/psa" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_builtin_composites.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_builtin_primitives.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_compat.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_config.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_driver_common.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_driver_contexts_composites.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_driver_contexts_primitives.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_extra.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_platform.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_se_driver.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_sizes.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_struct.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_types.h"
    "/home/notlean/openwrt-uboost/build_dir/target-aarch64_cortex-a53_musl/mbedtls-2.28.7/include/psa/crypto_values.h"
    )
endif()

