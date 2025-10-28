cmd_arch/mips/tools/elf-entry := gcc -Wp,-MMD,arch/mips/tools/.elf-entry.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include  -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o arch/mips/tools/elf-entry arch/mips/tools/elf-entry.c   

source_arch/mips/tools/elf-entry := arch/mips/tools/elf-entry.c

deps_arch/mips/tools/elf-entry := \
  /home/notlean/openwrt-uboost/staging_dir/host/include/byteswap.h \
  /home/notlean/openwrt-uboost/staging_dir/host/include/elf.h \
  /home/notlean/openwrt-uboost/staging_dir/host/include/endian.h \

arch/mips/tools/elf-entry: $(deps_arch/mips/tools/elf-entry)

$(deps_arch/mips/tools/elf-entry):
