cmd_scripts/mod/mk_elfconfig := gcc -Wp,-MMD,scripts/mod/.mk_elfconfig.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include  -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o scripts/mod/mk_elfconfig scripts/mod/mk_elfconfig.c   

source_scripts/mod/mk_elfconfig := scripts/mod/mk_elfconfig.c

deps_scripts/mod/mk_elfconfig := \
  /home/notlean/openwrt-uboost/staging_dir/host/include/elf.h \

scripts/mod/mk_elfconfig: $(deps_scripts/mod/mk_elfconfig)

$(deps_scripts/mod/mk_elfconfig):
