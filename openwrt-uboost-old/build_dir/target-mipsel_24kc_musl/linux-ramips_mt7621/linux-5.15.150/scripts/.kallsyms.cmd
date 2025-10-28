cmd_scripts/kallsyms := gcc -Wp,-MMD,scripts/.kallsyms.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include  -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o scripts/kallsyms scripts/kallsyms.c   

source_scripts/kallsyms := scripts/kallsyms.c

deps_scripts/kallsyms := \

scripts/kallsyms: $(deps_scripts/kallsyms)

$(deps_scripts/kallsyms):
