cmd_vmlinux := bash scripts/link-vmlinux.sh "mipsel-openwrt-linux-musl-ld" "-m elf32ltsmip -z noexecstack --no-warn-rwx-segments" "-G 0 -static -n -nostdlib --gc-sections --build-id=sha1  -X --orphan-handling=warn";  make -f ./arch/mips/Makefile.postlink vmlinux

source_vmlinux := scripts/link-vmlinux.sh

deps_vmlinux := \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/STACK_VALIDATION) \
    $(wildcard include/config/UNWINDER_ORC) \
    $(wildcard include/config/FTRACE_MCOUNT_USE_OBJTOOL) \
    $(wildcard include/config/VMLINUX_VALIDATION) \
    $(wildcard include/config/CPU_UNRET_ENTRY) \
    $(wildcard include/config/FRAME_POINTER) \
    $(wildcard include/config/GCOV_KERNEL) \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/X86_SMAP) \
    $(wildcard include/config/SLS) \
    $(wildcard include/config/VMLINUX_MAP) \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/KALLSYMS_ALL) \
    $(wildcard include/config/KALLSYMS_ABSOLUTE_PERCPU) \
    $(wildcard include/config/KALLSYMS_BASE_RELATIVE) \
    $(wildcard include/config/KALLSYMS_UNCOMPRESSED) \
    $(wildcard include/config/SHELL) \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/KALLSYMS) \
    $(wildcard include/config/BPF) \
    $(wildcard include/config/BUILDTIME_TABLE_SORT) \

vmlinux: $(deps_vmlinux)

$(deps_vmlinux):
