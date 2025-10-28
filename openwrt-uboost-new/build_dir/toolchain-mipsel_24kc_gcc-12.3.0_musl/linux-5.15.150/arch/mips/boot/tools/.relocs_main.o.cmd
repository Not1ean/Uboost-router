cmd_arch/mips/boot/tools/relocs_main.o := gcc -Wp,-MMD,arch/mips/boot/tools/.relocs_main.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include      -c -o arch/mips/boot/tools/relocs_main.o arch/mips/boot/tools/relocs_main.c

source_arch/mips/boot/tools/relocs_main.o := arch/mips/boot/tools/relocs_main.c

deps_arch/mips/boot/tools/relocs_main.o := \
  /home/notlean/openwrt-uboost/staging_dir/host/include/elf.h \
  arch/mips/boot/tools/relocs.h \

arch/mips/boot/tools/relocs_main.o: $(deps_arch/mips/boot/tools/relocs_main.o)

$(deps_arch/mips/boot/tools/relocs_main.o):
