cmd_scripts/unifdef := gcc -Wp,-MMD,scripts/.unifdef.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement  -O2 -I/home/notlean/openwrt-uboost/staging_dir/host/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/notlean/openwrt-uboost/staging_dir/host/include  -L/home/notlean/openwrt-uboost/staging_dir/host/lib -o scripts/unifdef scripts/unifdef.c   

source_scripts/unifdef := scripts/unifdef.c

deps_scripts/unifdef := \

scripts/unifdef: $(deps_scripts/unifdef)

$(deps_scripts/unifdef):
