cmd_arch/mips/vdso/genvdso := gcc -Wp,-MMD,arch/mips/vdso/.genvdso.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include  -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o arch/mips/vdso/genvdso arch/mips/vdso/genvdso.c   

source_arch/mips/vdso/genvdso := arch/mips/vdso/genvdso.c

deps_arch/mips/vdso/genvdso := \
  /home/notlean/openwrt-uboost/staging_dir/host/include/elf.h \
  arch/mips/vdso/genvdso.h \

arch/mips/vdso/genvdso: $(deps_arch/mips/vdso/genvdso)

$(deps_arch/mips/vdso/genvdso):
