/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010809, CODE_FOR_extendqihi2 },
  { 0x01080a, CODE_FOR_extendqisi2 },
  { 0x01080b, CODE_FOR_extendqidi2 },
  { 0x01090a, CODE_FOR_extendhisi2 },
  { 0x01090b, CODE_FOR_extendhidi2 },
  { 0x010a0b, CODE_FOR_extendsidi2 },
  { 0x011f20, CODE_FOR_extendsfdf2 },
  { 0x020b08, CODE_FOR_truncdiqi2 },
  { 0x020b09, CODE_FOR_truncdihi2 },
  { 0x020b0a, CODE_FOR_truncdisi2 },
  { 0x02201f, CODE_FOR_truncdfsf2 },
  { 0x030809, CODE_FOR_zero_extendqihi2 },
  { 0x03080a, CODE_FOR_zero_extendqisi2 },
  { 0x03080b, CODE_FOR_zero_extendqidi2 },
  { 0x03090a, CODE_FOR_zero_extendhisi2 },
  { 0x03090b, CODE_FOR_zero_extendhidi2 },
  { 0x030a0b, CODE_FOR_zero_extendsidi2 },
  { 0x060a1f, CODE_FOR_floatsisf2 },
  { 0x060a20, CODE_FOR_floatsidf2 },
  { 0x060b1f, CODE_FOR_floatdisf2 },
  { 0x060b20, CODE_FOR_floatdidf2 },
  { 0x063441, CODE_FOR_floatv4siv4sf2 },
  { 0x063542, CODE_FOR_floatv2div2df2 },
  { 0x073441, CODE_FOR_floatunsv4siv4sf2 },
  { 0x073542, CODE_FOR_floatunsv2div2df2 },
  { 0x101f0a, CODE_FOR_fix_truncsfsi2 },
  { 0x101f0b, CODE_FOR_fix_truncsfdi2 },
  { 0x10200a, CODE_FOR_fix_truncdfsi2 },
  { 0x10200b, CODE_FOR_fix_truncdfdi2 },
  { 0x104134, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x104235, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x111f0a, CODE_FOR_fixuns_truncsfsi2 },
  { 0x111f0b, CODE_FOR_fixuns_truncsfdi2 },
  { 0x11200a, CODE_FOR_fixuns_truncdfsi2 },
  { 0x11200b, CODE_FOR_fixuns_truncdfdi2 },
  { 0x114134, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x114235, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x120a0b, CODE_FOR_mulsidi3 },
  { 0x120b0c, CODE_FOR_mulditi3 },
  { 0x130a0b, CODE_FOR_umulsidi3 },
  { 0x130b0c, CODE_FOR_umulditi3 },
  { 0x150a0b, CODE_FOR_maddsidi4 },
  { 0x160a0b, CODE_FOR_umaddsidi4 },
  { 0x170f10, CODE_FOR_ssmaddsqdq4 },
  { 0x190a0b, CODE_FOR_msubsidi4 },
  { 0x1a0a0b, CODE_FOR_umsubsidi4 },
  { 0x1b0f10, CODE_FOR_ssmsubsqdq4 },
  { 0x213232, CODE_FOR_vcondv16qiv16qi },
  { 0x213233, CODE_FOR_vcondv8hiv16qi },
  { 0x213234, CODE_FOR_vcondv4siv16qi },
  { 0x213235, CODE_FOR_vcondv2div16qi },
  { 0x213241, CODE_FOR_vcondv4sfv16qi },
  { 0x213242, CODE_FOR_vcondv2dfv16qi },
  { 0x213332, CODE_FOR_vcondv16qiv8hi },
  { 0x213333, CODE_FOR_vcondv8hiv8hi },
  { 0x213334, CODE_FOR_vcondv4siv8hi },
  { 0x213335, CODE_FOR_vcondv2div8hi },
  { 0x213341, CODE_FOR_vcondv4sfv8hi },
  { 0x213342, CODE_FOR_vcondv2dfv8hi },
  { 0x213432, CODE_FOR_vcondv16qiv4si },
  { 0x213433, CODE_FOR_vcondv8hiv4si },
  { 0x213434, CODE_FOR_vcondv4siv4si },
  { 0x213435, CODE_FOR_vcondv2div4si },
  { 0x213441, CODE_FOR_vcondv4sfv4si },
  { 0x213442, CODE_FOR_vcondv2dfv4si },
  { 0x213532, CODE_FOR_vcondv16qiv2di },
  { 0x213533, CODE_FOR_vcondv8hiv2di },
  { 0x213534, CODE_FOR_vcondv4siv2di },
  { 0x213535, CODE_FOR_vcondv2div2di },
  { 0x213541, CODE_FOR_vcondv4sfv2di },
  { 0x213542, CODE_FOR_vcondv2dfv2di },
  { 0x214040, CODE_FOR_vcondv2sfv2sf },
  { 0x214132, CODE_FOR_vcondv16qiv4sf },
  { 0x214133, CODE_FOR_vcondv8hiv4sf },
  { 0x214134, CODE_FOR_vcondv4siv4sf },
  { 0x214135, CODE_FOR_vcondv2div4sf },
  { 0x214141, CODE_FOR_vcondv4sfv4sf },
  { 0x214142, CODE_FOR_vcondv2dfv4sf },
  { 0x214232, CODE_FOR_vcondv16qiv2df },
  { 0x214233, CODE_FOR_vcondv8hiv2df },
  { 0x214234, CODE_FOR_vcondv4siv2df },
  { 0x214235, CODE_FOR_vcondv2div2df },
  { 0x214241, CODE_FOR_vcondv4sfv2df },
  { 0x214242, CODE_FOR_vcondv2dfv2df },
  { 0x223232, CODE_FOR_vconduv16qiv16qi },
  { 0x223233, CODE_FOR_vconduv8hiv16qi },
  { 0x223234, CODE_FOR_vconduv4siv16qi },
  { 0x223235, CODE_FOR_vconduv2div16qi },
  { 0x223241, CODE_FOR_vconduv4sfv16qi },
  { 0x223242, CODE_FOR_vconduv2dfv16qi },
  { 0x223332, CODE_FOR_vconduv16qiv8hi },
  { 0x223333, CODE_FOR_vconduv8hiv8hi },
  { 0x223334, CODE_FOR_vconduv4siv8hi },
  { 0x223335, CODE_FOR_vconduv2div8hi },
  { 0x223341, CODE_FOR_vconduv4sfv8hi },
  { 0x223342, CODE_FOR_vconduv2dfv8hi },
  { 0x223432, CODE_FOR_vconduv16qiv4si },
  { 0x223433, CODE_FOR_vconduv8hiv4si },
  { 0x223434, CODE_FOR_vconduv4siv4si },
  { 0x223435, CODE_FOR_vconduv2div4si },
  { 0x223441, CODE_FOR_vconduv4sfv4si },
  { 0x223442, CODE_FOR_vconduv2dfv4si },
  { 0x223532, CODE_FOR_vconduv16qiv2di },
  { 0x223533, CODE_FOR_vconduv8hiv2di },
  { 0x223534, CODE_FOR_vconduv4siv2di },
  { 0x223535, CODE_FOR_vconduv2div2di },
  { 0x223541, CODE_FOR_vconduv4sfv2di },
  { 0x223542, CODE_FOR_vconduv2dfv2di },
  { 0x253232, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x253333, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x253434, CODE_FOR_vec_cmpv4siv4si },
  { 0x253441, CODE_FOR_vec_cmpv4sfv4si },
  { 0x253535, CODE_FOR_vec_cmpv2div2di },
  { 0x253542, CODE_FOR_vec_cmpv2dfv2di },
  { 0x263232, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x263333, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x263434, CODE_FOR_vec_cmpuv4siv4si },
  { 0x263535, CODE_FOR_vec_cmpuv2div2di },
  { 0x2e0832, CODE_FOR_vec_extractv16qiqi },
  { 0x2e0933, CODE_FOR_vec_extractv8hihi },
  { 0x2e0a34, CODE_FOR_vec_extractv4sisi },
  { 0x2e0b35, CODE_FOR_vec_extractv2didi },
  { 0x2e1f40, CODE_FOR_vec_extractv2sfsf },
  { 0x2e1f41, CODE_FOR_vec_extractv4sfsf },
  { 0x2e2042, CODE_FOR_vec_extractv2dfdf },
  { 0x2f082f, CODE_FOR_vec_initv8qiqi },
  { 0x2f0832, CODE_FOR_vec_initv16qiqi },
  { 0x2f0930, CODE_FOR_vec_initv4hihi },
  { 0x2f0933, CODE_FOR_vec_initv8hihi },
  { 0x2f0a31, CODE_FOR_vec_initv2sisi },
  { 0x2f0a34, CODE_FOR_vec_initv4sisi },
  { 0x2f0b35, CODE_FOR_vec_initv2didi },
  { 0x2f1f40, CODE_FOR_vec_initv2sfsf },
  { 0x2f1f41, CODE_FOR_vec_initv4sfsf },
  { 0x2f2042, CODE_FOR_vec_initv2dfdf },
  { 0x31000a, CODE_FOR_addsi3 },
  { 0x31000b, CODE_FOR_adddi3 },
  { 0x31000d, CODE_FOR_addqq3 },
  { 0x31000e, CODE_FOR_addhq3 },
  { 0x31000f, CODE_FOR_addsq3 },
  { 0x310010, CODE_FOR_adddq3 },
  { 0x310012, CODE_FOR_adduqq3 },
  { 0x310013, CODE_FOR_adduhq3 },
  { 0x310014, CODE_FOR_addusq3 },
  { 0x310015, CODE_FOR_addudq3 },
  { 0x310017, CODE_FOR_addha3 },
  { 0x310018, CODE_FOR_addsa3 },
  { 0x310019, CODE_FOR_addda3 },
  { 0x31001b, CODE_FOR_adduha3 },
  { 0x31001c, CODE_FOR_addusa3 },
  { 0x31001d, CODE_FOR_adduda3 },
  { 0x31001f, CODE_FOR_addsf3 },
  { 0x310020, CODE_FOR_adddf3 },
  { 0x31002d, CODE_FOR_addv4qi3 },
  { 0x31002e, CODE_FOR_addv2hi3 },
  { 0x31002f, CODE_FOR_addv8qi3 },
  { 0x310030, CODE_FOR_addv4hi3 },
  { 0x310031, CODE_FOR_addv2si3 },
  { 0x310032, CODE_FOR_addv16qi3 },
  { 0x310033, CODE_FOR_addv8hi3 },
  { 0x310034, CODE_FOR_addv4si3 },
  { 0x310035, CODE_FOR_addv2di3 },
  { 0x310040, CODE_FOR_addv2sf3 },
  { 0x310041, CODE_FOR_addv4sf3 },
  { 0x310042, CODE_FOR_addv2df3 },
  { 0x33000e, CODE_FOR_ssaddhq3 },
  { 0x33000f, CODE_FOR_ssaddsq3 },
  { 0x330017, CODE_FOR_ssaddha3 },
  { 0x330018, CODE_FOR_ssaddsa3 },
  { 0x33003b, CODE_FOR_ssaddv2hq3 },
  { 0x33003e, CODE_FOR_ssaddv2ha3 },
  { 0x340012, CODE_FOR_usadduqq3 },
  { 0x340013, CODE_FOR_usadduhq3 },
  { 0x34001b, CODE_FOR_usadduha3 },
  { 0x34003c, CODE_FOR_usaddv4uqq3 },
  { 0x34003d, CODE_FOR_usaddv2uhq3 },
  { 0x34003f, CODE_FOR_usaddv2uha3 },
  { 0x35000a, CODE_FOR_subsi3 },
  { 0x35000b, CODE_FOR_subdi3 },
  { 0x35000d, CODE_FOR_subqq3 },
  { 0x35000e, CODE_FOR_subhq3 },
  { 0x35000f, CODE_FOR_subsq3 },
  { 0x350010, CODE_FOR_subdq3 },
  { 0x350012, CODE_FOR_subuqq3 },
  { 0x350013, CODE_FOR_subuhq3 },
  { 0x350014, CODE_FOR_subusq3 },
  { 0x350015, CODE_FOR_subudq3 },
  { 0x350017, CODE_FOR_subha3 },
  { 0x350018, CODE_FOR_subsa3 },
  { 0x350019, CODE_FOR_subda3 },
  { 0x35001b, CODE_FOR_subuha3 },
  { 0x35001c, CODE_FOR_subusa3 },
  { 0x35001d, CODE_FOR_subuda3 },
  { 0x35001f, CODE_FOR_subsf3 },
  { 0x350020, CODE_FOR_subdf3 },
  { 0x35002d, CODE_FOR_subv4qi3 },
  { 0x35002e, CODE_FOR_subv2hi3 },
  { 0x35002f, CODE_FOR_subv8qi3 },
  { 0x350030, CODE_FOR_subv4hi3 },
  { 0x350031, CODE_FOR_subv2si3 },
  { 0x350032, CODE_FOR_subv16qi3 },
  { 0x350033, CODE_FOR_subv8hi3 },
  { 0x350034, CODE_FOR_subv4si3 },
  { 0x350035, CODE_FOR_subv2di3 },
  { 0x350040, CODE_FOR_subv2sf3 },
  { 0x350041, CODE_FOR_subv4sf3 },
  { 0x350042, CODE_FOR_subv2df3 },
  { 0x37000e, CODE_FOR_sssubhq3 },
  { 0x37000f, CODE_FOR_sssubsq3 },
  { 0x370017, CODE_FOR_sssubha3 },
  { 0x370018, CODE_FOR_sssubsa3 },
  { 0x37003b, CODE_FOR_sssubv2hq3 },
  { 0x37003e, CODE_FOR_sssubv2ha3 },
  { 0x380012, CODE_FOR_ussubuqq3 },
  { 0x380013, CODE_FOR_ussubuhq3 },
  { 0x38001b, CODE_FOR_ussubuha3 },
  { 0x38003c, CODE_FOR_ussubv4uqq3 },
  { 0x38003d, CODE_FOR_ussubv2uhq3 },
  { 0x38003f, CODE_FOR_ussubv2uha3 },
  { 0x39000a, CODE_FOR_mulsi3 },
  { 0x39000b, CODE_FOR_muldi3 },
  { 0x39001f, CODE_FOR_mulsf3 },
  { 0x390020, CODE_FOR_muldf3 },
  { 0x39002e, CODE_FOR_mulv2hi3 },
  { 0x390030, CODE_FOR_mulv4hi3 },
  { 0x390032, CODE_FOR_mulv16qi3 },
  { 0x390033, CODE_FOR_mulv8hi3 },
  { 0x390034, CODE_FOR_mulv4si3 },
  { 0x390035, CODE_FOR_mulv2di3 },
  { 0x390040, CODE_FOR_mulv2sf3 },
  { 0x390041, CODE_FOR_mulv4sf3 },
  { 0x390042, CODE_FOR_mulv2df3 },
  { 0x3b000e, CODE_FOR_ssmulhq3 },
  { 0x3b000f, CODE_FOR_ssmulsq3 },
  { 0x3b003b, CODE_FOR_ssmulv2hq3 },
  { 0x3d000a, CODE_FOR_divsi3 },
  { 0x3d000b, CODE_FOR_divdi3 },
  { 0x3d001f, CODE_FOR_divsf3 },
  { 0x3d0020, CODE_FOR_divdf3 },
  { 0x3d0032, CODE_FOR_divv16qi3 },
  { 0x3d0033, CODE_FOR_divv8hi3 },
  { 0x3d0034, CODE_FOR_divv4si3 },
  { 0x3d0035, CODE_FOR_divv2di3 },
  { 0x3d0040, CODE_FOR_divv2sf3 },
  { 0x3d0041, CODE_FOR_divv4sf3 },
  { 0x3d0042, CODE_FOR_divv2df3 },
  { 0x40000a, CODE_FOR_udivsi3 },
  { 0x40000b, CODE_FOR_udivdi3 },
  { 0x400032, CODE_FOR_udivv16qi3 },
  { 0x400033, CODE_FOR_udivv8hi3 },
  { 0x400034, CODE_FOR_udivv4si3 },
  { 0x400035, CODE_FOR_udivv2di3 },
  { 0x42000a, CODE_FOR_divmodsi4 },
  { 0x42000b, CODE_FOR_divmoddi4 },
  { 0x43000a, CODE_FOR_udivmodsi4 },
  { 0x43000b, CODE_FOR_udivmoddi4 },
  { 0x44000a, CODE_FOR_modsi3 },
  { 0x44000b, CODE_FOR_moddi3 },
  { 0x440032, CODE_FOR_modv16qi3 },
  { 0x440033, CODE_FOR_modv8hi3 },
  { 0x440034, CODE_FOR_modv4si3 },
  { 0x440035, CODE_FOR_modv2di3 },
  { 0x45000a, CODE_FOR_umodsi3 },
  { 0x45000b, CODE_FOR_umoddi3 },
  { 0x450032, CODE_FOR_umodv16qi3 },
  { 0x450033, CODE_FOR_umodv8hi3 },
  { 0x450034, CODE_FOR_umodv4si3 },
  { 0x450035, CODE_FOR_umodv2di3 },
  { 0x47000a, CODE_FOR_andsi3 },
  { 0x47000b, CODE_FOR_anddi3 },
  { 0x47002f, CODE_FOR_andv8qi3 },
  { 0x470030, CODE_FOR_andv4hi3 },
  { 0x470031, CODE_FOR_andv2si3 },
  { 0x470032, CODE_FOR_andv16qi3 },
  { 0x470033, CODE_FOR_andv8hi3 },
  { 0x470034, CODE_FOR_andv4si3 },
  { 0x470035, CODE_FOR_andv2di3 },
  { 0x48000a, CODE_FOR_iorsi3 },
  { 0x48000b, CODE_FOR_iordi3 },
  { 0x48002f, CODE_FOR_iorv8qi3 },
  { 0x480030, CODE_FOR_iorv4hi3 },
  { 0x480031, CODE_FOR_iorv2si3 },
  { 0x480032, CODE_FOR_iorv16qi3 },
  { 0x480033, CODE_FOR_iorv8hi3 },
  { 0x480034, CODE_FOR_iorv4si3 },
  { 0x480035, CODE_FOR_iorv2di3 },
  { 0x49000a, CODE_FOR_xorsi3 },
  { 0x49000b, CODE_FOR_xordi3 },
  { 0x49002f, CODE_FOR_xorv8qi3 },
  { 0x490030, CODE_FOR_xorv4hi3 },
  { 0x490031, CODE_FOR_xorv2si3 },
  { 0x490032, CODE_FOR_xorv16qi3 },
  { 0x490033, CODE_FOR_xorv8hi3 },
  { 0x490034, CODE_FOR_xorv4si3 },
  { 0x490035, CODE_FOR_xorv2di3 },
  { 0x4a000a, CODE_FOR_ashlsi3 },
  { 0x4a000b, CODE_FOR_ashldi3 },
  { 0x4a0030, CODE_FOR_ashlv4hi3 },
  { 0x4a0031, CODE_FOR_ashlv2si3 },
  { 0x4d000a, CODE_FOR_ashrsi3 },
  { 0x4d000b, CODE_FOR_ashrdi3 },
  { 0x4d0030, CODE_FOR_ashrv4hi3 },
  { 0x4d0031, CODE_FOR_ashrv2si3 },
  { 0x4e000a, CODE_FOR_lshrsi3 },
  { 0x4e000b, CODE_FOR_lshrdi3 },
  { 0x4e0030, CODE_FOR_lshrv4hi3 },
  { 0x4e0031, CODE_FOR_lshrv2si3 },
  { 0x50000a, CODE_FOR_rotrsi3 },
  { 0x50000b, CODE_FOR_rotrdi3 },
  { 0x510032, CODE_FOR_vashlv16qi3 },
  { 0x510033, CODE_FOR_vashlv8hi3 },
  { 0x510034, CODE_FOR_vashlv4si3 },
  { 0x510035, CODE_FOR_vashlv2di3 },
  { 0x520032, CODE_FOR_vashrv16qi3 },
  { 0x520033, CODE_FOR_vashrv8hi3 },
  { 0x520034, CODE_FOR_vashrv4si3 },
  { 0x520035, CODE_FOR_vashrv2di3 },
  { 0x530032, CODE_FOR_vlshrv16qi3 },
  { 0x530033, CODE_FOR_vlshrv8hi3 },
  { 0x530034, CODE_FOR_vlshrv4si3 },
  { 0x530035, CODE_FOR_vlshrv2di3 },
  { 0x56002f, CODE_FOR_sminv8qi3 },
  { 0x560030, CODE_FOR_sminv4hi3 },
  { 0x560031, CODE_FOR_sminv2si3 },
  { 0x560032, CODE_FOR_sminv16qi3 },
  { 0x560033, CODE_FOR_sminv8hi3 },
  { 0x560034, CODE_FOR_sminv4si3 },
  { 0x560035, CODE_FOR_sminv2di3 },
  { 0x560040, CODE_FOR_sminv2sf3 },
  { 0x560041, CODE_FOR_sminv4sf3 },
  { 0x560042, CODE_FOR_sminv2df3 },
  { 0x57002f, CODE_FOR_smaxv8qi3 },
  { 0x570030, CODE_FOR_smaxv4hi3 },
  { 0x570031, CODE_FOR_smaxv2si3 },
  { 0x570032, CODE_FOR_smaxv16qi3 },
  { 0x570033, CODE_FOR_smaxv8hi3 },
  { 0x570034, CODE_FOR_smaxv4si3 },
  { 0x570035, CODE_FOR_smaxv2di3 },
  { 0x570040, CODE_FOR_smaxv2sf3 },
  { 0x570041, CODE_FOR_smaxv4sf3 },
  { 0x570042, CODE_FOR_smaxv2df3 },
  { 0x58002f, CODE_FOR_uminv8qi3 },
  { 0x580032, CODE_FOR_uminv16qi3 },
  { 0x580033, CODE_FOR_uminv8hi3 },
  { 0x580034, CODE_FOR_uminv4si3 },
  { 0x580035, CODE_FOR_uminv2di3 },
  { 0x59002f, CODE_FOR_umaxv8qi3 },
  { 0x590032, CODE_FOR_umaxv16qi3 },
  { 0x590033, CODE_FOR_umaxv8hi3 },
  { 0x590034, CODE_FOR_umaxv4si3 },
  { 0x590035, CODE_FOR_umaxv2di3 },
  { 0x5a000a, CODE_FOR_negsi2 },
  { 0x5a000b, CODE_FOR_negdi2 },
  { 0x5a001f, CODE_FOR_negsf2 },
  { 0x5a0020, CODE_FOR_negdf2 },
  { 0x5a0032, CODE_FOR_negv16qi2 },
  { 0x5a0033, CODE_FOR_negv8hi2 },
  { 0x5a0034, CODE_FOR_negv4si2 },
  { 0x5a0035, CODE_FOR_negv2di2 },
  { 0x5a0040, CODE_FOR_negv2sf2 },
  { 0x5a0041, CODE_FOR_negv4sf2 },
  { 0x5a0042, CODE_FOR_negv2df2 },
  { 0x5e001f, CODE_FOR_abssf2 },
  { 0x5e0020, CODE_FOR_absdf2 },
  { 0x5e0032, CODE_FOR_absv16qi2 },
  { 0x5e0033, CODE_FOR_absv8hi2 },
  { 0x5e0034, CODE_FOR_absv4si2 },
  { 0x5e0035, CODE_FOR_absv2di2 },
  { 0x5e0040, CODE_FOR_absv2sf2 },
  { 0x60000a, CODE_FOR_one_cmplsi2 },
  { 0x60000b, CODE_FOR_one_cmpldi2 },
  { 0x60002f, CODE_FOR_one_cmplv8qi2 },
  { 0x600030, CODE_FOR_one_cmplv4hi2 },
  { 0x600031, CODE_FOR_one_cmplv2si2 },
  { 0x600032, CODE_FOR_one_cmplv16qi2 },
  { 0x600033, CODE_FOR_one_cmplv8hi2 },
  { 0x600034, CODE_FOR_one_cmplv4si2 },
  { 0x600035, CODE_FOR_one_cmplv2di2 },
  { 0x610009, CODE_FOR_bswaphi2 },
  { 0x61000a, CODE_FOR_bswapsi2 },
  { 0x61000b, CODE_FOR_bswapdi2 },
  { 0x63000a, CODE_FOR_clzsi2 },
  { 0x63000b, CODE_FOR_clzdi2 },
  { 0x630032, CODE_FOR_clzv16qi2 },
  { 0x630033, CODE_FOR_clzv8hi2 },
  { 0x630034, CODE_FOR_clzv4si2 },
  { 0x630035, CODE_FOR_clzv2di2 },
  { 0x64000a, CODE_FOR_ctzsi2 },
  { 0x64000b, CODE_FOR_ctzdi2 },
  { 0x66000a, CODE_FOR_popcountsi2 },
  { 0x66000b, CODE_FOR_popcountdi2 },
  { 0x660032, CODE_FOR_popcountv16qi2 },
  { 0x660033, CODE_FOR_popcountv8hi2 },
  { 0x660034, CODE_FOR_popcountv4si2 },
  { 0x660035, CODE_FOR_popcountv2di2 },
  { 0x72001f, CODE_FOR_sqrtsf2 },
  { 0x720020, CODE_FOR_sqrtdf2 },
  { 0x720040, CODE_FOR_sqrtv2sf2 },
  { 0x720041, CODE_FOR_sqrtv4sf2 },
  { 0x720042, CODE_FOR_sqrtv2df2 },
  { 0x730008, CODE_FOR_sync_old_addqi },
  { 0x730009, CODE_FOR_sync_old_addhi },
  { 0x73000a, CODE_FOR_sync_old_addsi },
  { 0x73000b, CODE_FOR_sync_old_adddi },
  { 0x740008, CODE_FOR_sync_old_subqi },
  { 0x740009, CODE_FOR_sync_old_subhi },
  { 0x74000a, CODE_FOR_sync_old_subsi },
  { 0x74000b, CODE_FOR_sync_old_subdi },
  { 0x750008, CODE_FOR_sync_old_iorqi },
  { 0x750009, CODE_FOR_sync_old_iorhi },
  { 0x75000a, CODE_FOR_sync_old_iorsi },
  { 0x75000b, CODE_FOR_sync_old_iordi },
  { 0x760008, CODE_FOR_sync_old_andqi },
  { 0x760009, CODE_FOR_sync_old_andhi },
  { 0x76000a, CODE_FOR_sync_old_andsi },
  { 0x76000b, CODE_FOR_sync_old_anddi },
  { 0x770008, CODE_FOR_sync_old_xorqi },
  { 0x770009, CODE_FOR_sync_old_xorhi },
  { 0x77000a, CODE_FOR_sync_old_xorsi },
  { 0x77000b, CODE_FOR_sync_old_xordi },
  { 0x780008, CODE_FOR_sync_old_nandqi },
  { 0x780009, CODE_FOR_sync_old_nandhi },
  { 0x78000a, CODE_FOR_sync_old_nandsi },
  { 0x78000b, CODE_FOR_sync_old_nanddi },
  { 0x790008, CODE_FOR_sync_new_addqi },
  { 0x790009, CODE_FOR_sync_new_addhi },
  { 0x79000a, CODE_FOR_sync_new_addsi },
  { 0x79000b, CODE_FOR_sync_new_adddi },
  { 0x7a0008, CODE_FOR_sync_new_subqi },
  { 0x7a0009, CODE_FOR_sync_new_subhi },
  { 0x7a000a, CODE_FOR_sync_new_subsi },
  { 0x7a000b, CODE_FOR_sync_new_subdi },
  { 0x7b0008, CODE_FOR_sync_new_iorqi },
  { 0x7b0009, CODE_FOR_sync_new_iorhi },
  { 0x7b000a, CODE_FOR_sync_new_iorsi },
  { 0x7b000b, CODE_FOR_sync_new_iordi },
  { 0x7c0008, CODE_FOR_sync_new_andqi },
  { 0x7c0009, CODE_FOR_sync_new_andhi },
  { 0x7c000a, CODE_FOR_sync_new_andsi },
  { 0x7c000b, CODE_FOR_sync_new_anddi },
  { 0x7d0008, CODE_FOR_sync_new_xorqi },
  { 0x7d0009, CODE_FOR_sync_new_xorhi },
  { 0x7d000a, CODE_FOR_sync_new_xorsi },
  { 0x7d000b, CODE_FOR_sync_new_xordi },
  { 0x7e0008, CODE_FOR_sync_new_nandqi },
  { 0x7e0009, CODE_FOR_sync_new_nandhi },
  { 0x7e000a, CODE_FOR_sync_new_nandsi },
  { 0x7e000b, CODE_FOR_sync_new_nanddi },
  { 0x7f0008, CODE_FOR_sync_compare_and_swapqi },
  { 0x7f0009, CODE_FOR_sync_compare_and_swaphi },
  { 0x7f000a, CODE_FOR_sync_compare_and_swapsi },
  { 0x7f000b, CODE_FOR_sync_compare_and_swapdi },
  { 0x800008, CODE_FOR_sync_lock_test_and_setqi },
  { 0x800009, CODE_FOR_sync_lock_test_and_sethi },
  { 0x80000a, CODE_FOR_sync_lock_test_and_setsi },
  { 0x80000b, CODE_FOR_sync_lock_test_and_setdi },
  { 0x810006, CODE_FOR_movccf },
  { 0x810008, CODE_FOR_movqi },
  { 0x810009, CODE_FOR_movhi },
  { 0x81000a, CODE_FOR_movsi },
  { 0x81000b, CODE_FOR_movdi },
  { 0x81000c, CODE_FOR_movti },
  { 0x81001f, CODE_FOR_movsf },
  { 0x810020, CODE_FOR_movdf },
  { 0x810021, CODE_FOR_movtf },
  { 0x81002d, CODE_FOR_movv4qi },
  { 0x81002e, CODE_FOR_movv2hi },
  { 0x81002f, CODE_FOR_movv8qi },
  { 0x810030, CODE_FOR_movv4hi },
  { 0x810031, CODE_FOR_movv2si },
  { 0x810032, CODE_FOR_movv16qi },
  { 0x810033, CODE_FOR_movv8hi },
  { 0x810034, CODE_FOR_movv4si },
  { 0x810035, CODE_FOR_movv2di },
  { 0x81003a, CODE_FOR_movv4qq },
  { 0x81003b, CODE_FOR_movv2hq },
  { 0x81003c, CODE_FOR_movv4uqq },
  { 0x81003d, CODE_FOR_movv2uhq },
  { 0x81003e, CODE_FOR_movv2ha },
  { 0x81003f, CODE_FOR_movv2uha },
  { 0x810040, CODE_FOR_movv2sf },
  { 0x810041, CODE_FOR_movv4sf },
  { 0x810042, CODE_FOR_movv2df },
  { 0x830009, CODE_FOR_movmisalignhi },
  { 0x83000a, CODE_FOR_movmisalignsi },
  { 0x83001f, CODE_FOR_movmisalignsf },
  { 0x830020, CODE_FOR_movmisaligndf },
  { 0x830032, CODE_FOR_movmisalignv16qi },
  { 0x830033, CODE_FOR_movmisalignv8hi },
  { 0x830034, CODE_FOR_movmisalignv4si },
  { 0x830035, CODE_FOR_movmisalignv2di },
  { 0x830041, CODE_FOR_movmisalignv4sf },
  { 0x830042, CODE_FOR_movmisalignv2df },
  { 0x85000a, CODE_FOR_insvsi },
  { 0x85000b, CODE_FOR_insvdi },
  { 0x86000a, CODE_FOR_extvsi },
  { 0x86000b, CODE_FOR_extvdi },
  { 0x87000a, CODE_FOR_extzvsi },
  { 0x87000b, CODE_FOR_extzvdi },
  { 0x88000a, CODE_FOR_insvmisalignsi },
  { 0x88000b, CODE_FOR_insvmisaligndi },
  { 0x89000a, CODE_FOR_extvmisalignsi },
  { 0x89000b, CODE_FOR_extvmisaligndi },
  { 0x8a000a, CODE_FOR_extzvmisalignsi },
  { 0x8a000b, CODE_FOR_extzvmisaligndi },
  { 0x8e000a, CODE_FOR_cbranchsi4 },
  { 0x8e000b, CODE_FOR_cbranchdi4 },
  { 0x8e001f, CODE_FOR_cbranchsf4 },
  { 0x8e0020, CODE_FOR_cbranchdf4 },
  { 0x92000a, CODE_FOR_movsicc },
  { 0x92000b, CODE_FOR_movdicc },
  { 0x92001f, CODE_FOR_movsfcc },
  { 0x920020, CODE_FOR_movdfcc },
  { 0x920040, CODE_FOR_movv2sfcc },
  { 0xac000a, CODE_FOR_cstoresi4 },
  { 0xac000b, CODE_FOR_cstoredi4 },
  { 0xad000a, CODE_FOR_ctrapsi4 },
  { 0xad000b, CODE_FOR_ctrapdi4 },
  { 0xb7000a, CODE_FOR_smulsi3_highpart },
  { 0xb7000b, CODE_FOR_smuldi3_highpart },
  { 0xb70030, CODE_FOR_smulv4hi3_highpart },
  { 0xb8000a, CODE_FOR_umulsi3_highpart },
  { 0xb8000b, CODE_FOR_umuldi3_highpart },
  { 0xb80030, CODE_FOR_umulv4hi3_highpart },
  { 0xbc000a, CODE_FOR_cpymemsi },
  { 0xc1001f, CODE_FOR_fmasf4 },
  { 0xc10020, CODE_FOR_fmadf4 },
  { 0xc10040, CODE_FOR_fmav2sf4 },
  { 0xc10041, CODE_FOR_fmav4sf4 },
  { 0xc10042, CODE_FOR_fmav2df4 },
  { 0xc2001f, CODE_FOR_fmssf4 },
  { 0xc20020, CODE_FOR_fmsdf4 },
  { 0xc20040, CODE_FOR_fmsv2sf4 },
  { 0xc3001f, CODE_FOR_fnmasf4 },
  { 0xc30020, CODE_FOR_fnmadf4 },
  { 0xc30040, CODE_FOR_fnmav2sf4 },
  { 0xc30041, CODE_FOR_fnmav4sf4 },
  { 0xc30042, CODE_FOR_fnmav2df4 },
  { 0xc4001f, CODE_FOR_fnmssf4 },
  { 0xc40020, CODE_FOR_fnmsdf4 },
  { 0xc40040, CODE_FOR_fnmsv2sf4 },
  { 0xff002f, CODE_FOR_reduc_smax_scal_v8qi },
  { 0xff0030, CODE_FOR_reduc_smax_scal_v4hi },
  { 0xff0031, CODE_FOR_reduc_smax_scal_v2si },
  { 0xff0040, CODE_FOR_reduc_smax_scal_v2sf },
  { 0x100002f, CODE_FOR_reduc_smin_scal_v8qi },
  { 0x1000030, CODE_FOR_reduc_smin_scal_v4hi },
  { 0x1000031, CODE_FOR_reduc_smin_scal_v2si },
  { 0x1000040, CODE_FOR_reduc_smin_scal_v2sf },
  { 0x101002f, CODE_FOR_reduc_plus_scal_v8qi },
  { 0x1010030, CODE_FOR_reduc_plus_scal_v4hi },
  { 0x1010031, CODE_FOR_reduc_plus_scal_v2si },
  { 0x1010040, CODE_FOR_reduc_plus_scal_v2sf },
  { 0x102002f, CODE_FOR_reduc_umax_scal_v8qi },
  { 0x103002f, CODE_FOR_reduc_umin_scal_v8qi },
  { 0x10f0030, CODE_FOR_sdot_prodv4hi },
  { 0x11c0030, CODE_FOR_vec_pack_ssat_v4hi },
  { 0x11c0031, CODE_FOR_vec_pack_ssat_v2si },
  { 0x11d0033, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x11d0034, CODE_FOR_vec_pack_trunc_v4si },
  { 0x11d0035, CODE_FOR_vec_pack_trunc_v2di },
  { 0x11d0042, CODE_FOR_vec_pack_trunc_v2df },
  { 0x1200030, CODE_FOR_vec_pack_usat_v4hi },
  { 0x1230032, CODE_FOR_vec_permv16qi },
  { 0x1230033, CODE_FOR_vec_permv8hi },
  { 0x1230034, CODE_FOR_vec_permv4si },
  { 0x1230035, CODE_FOR_vec_permv2di },
  { 0x1230041, CODE_FOR_vec_permv4sf },
  { 0x1230042, CODE_FOR_vec_permv2df },
  { 0x1250030, CODE_FOR_vec_setv4hi },
  { 0x1250032, CODE_FOR_vec_setv16qi },
  { 0x1250033, CODE_FOR_vec_setv8hi },
  { 0x1250034, CODE_FOR_vec_setv4si },
  { 0x1250035, CODE_FOR_vec_setv2di },
  { 0x1250040, CODE_FOR_vec_setv2sf },
  { 0x1250041, CODE_FOR_vec_setv4sf },
  { 0x1250042, CODE_FOR_vec_setv2df },
  { 0x126000b, CODE_FOR_vec_shl_di },
  { 0x126002f, CODE_FOR_vec_shl_v8qi },
  { 0x1260030, CODE_FOR_vec_shl_v4hi },
  { 0x1260031, CODE_FOR_vec_shl_v2si },
  { 0x127000b, CODE_FOR_vec_shr_di },
  { 0x127002f, CODE_FOR_vec_shr_v8qi },
  { 0x1270030, CODE_FOR_vec_shr_v4hi },
  { 0x1270031, CODE_FOR_vec_shr_v2si },
  { 0x12e002f, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0x12e0030, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0x12e0032, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x12e0033, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x12e0034, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x12e0041, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x12f002f, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0x12f0030, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0x12f0032, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x12f0033, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x12f0034, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x12f0041, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x134002f, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0x1340030, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0x1340032, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x1340033, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x1340034, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x135002f, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0x1350030, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0x1350032, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x1350033, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x1350034, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x14d0008, CODE_FOR_sync_addqi },
  { 0x14d0009, CODE_FOR_sync_addhi },
  { 0x14d000a, CODE_FOR_sync_addsi },
  { 0x14d000b, CODE_FOR_sync_adddi },
  { 0x14e0008, CODE_FOR_sync_andqi },
  { 0x14e0009, CODE_FOR_sync_andhi },
  { 0x14e000a, CODE_FOR_sync_andsi },
  { 0x14e000b, CODE_FOR_sync_anddi },
  { 0x14f0008, CODE_FOR_sync_iorqi },
  { 0x14f0009, CODE_FOR_sync_iorhi },
  { 0x14f000a, CODE_FOR_sync_iorsi },
  { 0x14f000b, CODE_FOR_sync_iordi },
  { 0x1510008, CODE_FOR_sync_nandqi },
  { 0x1510009, CODE_FOR_sync_nandhi },
  { 0x151000a, CODE_FOR_sync_nandsi },
  { 0x151000b, CODE_FOR_sync_nanddi },
  { 0x1520008, CODE_FOR_sync_subqi },
  { 0x1520009, CODE_FOR_sync_subhi },
  { 0x152000a, CODE_FOR_sync_subsi },
  { 0x152000b, CODE_FOR_sync_subdi },
  { 0x1530008, CODE_FOR_sync_xorqi },
  { 0x1530009, CODE_FOR_sync_xorhi },
  { 0x153000a, CODE_FOR_sync_xorsi },
  { 0x153000b, CODE_FOR_sync_xordi },
  { 0x15b000a, CODE_FOR_atomic_compare_and_swapsi },
  { 0x15b000b, CODE_FOR_atomic_compare_and_swapdi },
  { 0x15c000a, CODE_FOR_atomic_exchangesi },
  { 0x15c000b, CODE_FOR_atomic_exchangedi },
  { 0x15d000a, CODE_FOR_atomic_fetch_addsi },
  { 0x15d000b, CODE_FOR_atomic_fetch_adddi },
  { 0x172000a, CODE_FOR_get_thread_pointersi },
  { 0x172000b, CODE_FOR_get_thread_pointerdi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_truncdiqi2;
  ena[8] = HAVE_truncdihi2;
  ena[9] = HAVE_truncdisi2;
  ena[10] = HAVE_truncdfsf2;
  ena[11] = HAVE_zero_extendqihi2;
  ena[12] = HAVE_zero_extendqisi2;
  ena[13] = HAVE_zero_extendqidi2;
  ena[14] = HAVE_zero_extendhisi2;
  ena[15] = HAVE_zero_extendhidi2;
  ena[16] = HAVE_zero_extendsidi2;
  ena[17] = HAVE_floatsisf2;
  ena[18] = HAVE_floatsidf2;
  ena[19] = HAVE_floatdisf2;
  ena[20] = HAVE_floatdidf2;
  ena[21] = HAVE_floatv4siv4sf2;
  ena[22] = HAVE_floatv2div2df2;
  ena[23] = HAVE_floatunsv4siv4sf2;
  ena[24] = HAVE_floatunsv2div2df2;
  ena[25] = HAVE_fix_truncsfsi2;
  ena[26] = HAVE_fix_truncsfdi2;
  ena[27] = HAVE_fix_truncdfsi2;
  ena[28] = HAVE_fix_truncdfdi2;
  ena[29] = HAVE_fix_truncv4sfv4si2;
  ena[30] = HAVE_fix_truncv2dfv2di2;
  ena[31] = HAVE_fixuns_truncsfsi2;
  ena[32] = HAVE_fixuns_truncsfdi2;
  ena[33] = HAVE_fixuns_truncdfsi2;
  ena[34] = HAVE_fixuns_truncdfdi2;
  ena[35] = HAVE_fixuns_truncv4sfv4si2;
  ena[36] = HAVE_fixuns_truncv2dfv2di2;
  ena[37] = HAVE_mulsidi3;
  ena[38] = HAVE_mulditi3;
  ena[39] = HAVE_umulsidi3;
  ena[40] = HAVE_umulditi3;
  ena[41] = HAVE_maddsidi4;
  ena[42] = HAVE_umaddsidi4;
  ena[43] = HAVE_ssmaddsqdq4;
  ena[44] = HAVE_msubsidi4;
  ena[45] = HAVE_umsubsidi4;
  ena[46] = HAVE_ssmsubsqdq4;
  ena[47] = HAVE_vcondv16qiv16qi;
  ena[48] = HAVE_vcondv8hiv16qi;
  ena[49] = HAVE_vcondv4siv16qi;
  ena[50] = HAVE_vcondv2div16qi;
  ena[51] = HAVE_vcondv4sfv16qi;
  ena[52] = HAVE_vcondv2dfv16qi;
  ena[53] = HAVE_vcondv16qiv8hi;
  ena[54] = HAVE_vcondv8hiv8hi;
  ena[55] = HAVE_vcondv4siv8hi;
  ena[56] = HAVE_vcondv2div8hi;
  ena[57] = HAVE_vcondv4sfv8hi;
  ena[58] = HAVE_vcondv2dfv8hi;
  ena[59] = HAVE_vcondv16qiv4si;
  ena[60] = HAVE_vcondv8hiv4si;
  ena[61] = HAVE_vcondv4siv4si;
  ena[62] = HAVE_vcondv2div4si;
  ena[63] = HAVE_vcondv4sfv4si;
  ena[64] = HAVE_vcondv2dfv4si;
  ena[65] = HAVE_vcondv16qiv2di;
  ena[66] = HAVE_vcondv8hiv2di;
  ena[67] = HAVE_vcondv4siv2di;
  ena[68] = HAVE_vcondv2div2di;
  ena[69] = HAVE_vcondv4sfv2di;
  ena[70] = HAVE_vcondv2dfv2di;
  ena[71] = HAVE_vcondv2sfv2sf;
  ena[72] = HAVE_vcondv16qiv4sf;
  ena[73] = HAVE_vcondv8hiv4sf;
  ena[74] = HAVE_vcondv4siv4sf;
  ena[75] = HAVE_vcondv2div4sf;
  ena[76] = HAVE_vcondv4sfv4sf;
  ena[77] = HAVE_vcondv2dfv4sf;
  ena[78] = HAVE_vcondv16qiv2df;
  ena[79] = HAVE_vcondv8hiv2df;
  ena[80] = HAVE_vcondv4siv2df;
  ena[81] = HAVE_vcondv2div2df;
  ena[82] = HAVE_vcondv4sfv2df;
  ena[83] = HAVE_vcondv2dfv2df;
  ena[84] = HAVE_vconduv16qiv16qi;
  ena[85] = HAVE_vconduv8hiv16qi;
  ena[86] = HAVE_vconduv4siv16qi;
  ena[87] = HAVE_vconduv2div16qi;
  ena[88] = HAVE_vconduv4sfv16qi;
  ena[89] = HAVE_vconduv2dfv16qi;
  ena[90] = HAVE_vconduv16qiv8hi;
  ena[91] = HAVE_vconduv8hiv8hi;
  ena[92] = HAVE_vconduv4siv8hi;
  ena[93] = HAVE_vconduv2div8hi;
  ena[94] = HAVE_vconduv4sfv8hi;
  ena[95] = HAVE_vconduv2dfv8hi;
  ena[96] = HAVE_vconduv16qiv4si;
  ena[97] = HAVE_vconduv8hiv4si;
  ena[98] = HAVE_vconduv4siv4si;
  ena[99] = HAVE_vconduv2div4si;
  ena[100] = HAVE_vconduv4sfv4si;
  ena[101] = HAVE_vconduv2dfv4si;
  ena[102] = HAVE_vconduv16qiv2di;
  ena[103] = HAVE_vconduv8hiv2di;
  ena[104] = HAVE_vconduv4siv2di;
  ena[105] = HAVE_vconduv2div2di;
  ena[106] = HAVE_vconduv4sfv2di;
  ena[107] = HAVE_vconduv2dfv2di;
  ena[108] = HAVE_vec_cmpv16qiv16qi;
  ena[109] = HAVE_vec_cmpv8hiv8hi;
  ena[110] = HAVE_vec_cmpv4siv4si;
  ena[111] = HAVE_vec_cmpv4sfv4si;
  ena[112] = HAVE_vec_cmpv2div2di;
  ena[113] = HAVE_vec_cmpv2dfv2di;
  ena[114] = HAVE_vec_cmpuv16qiv16qi;
  ena[115] = HAVE_vec_cmpuv8hiv8hi;
  ena[116] = HAVE_vec_cmpuv4siv4si;
  ena[117] = HAVE_vec_cmpuv2div2di;
  ena[118] = HAVE_vec_extractv16qiqi;
  ena[119] = HAVE_vec_extractv8hihi;
  ena[120] = HAVE_vec_extractv4sisi;
  ena[121] = HAVE_vec_extractv2didi;
  ena[122] = HAVE_vec_extractv2sfsf;
  ena[123] = HAVE_vec_extractv4sfsf;
  ena[124] = HAVE_vec_extractv2dfdf;
  ena[125] = HAVE_vec_initv8qiqi;
  ena[126] = HAVE_vec_initv16qiqi;
  ena[127] = HAVE_vec_initv4hihi;
  ena[128] = HAVE_vec_initv8hihi;
  ena[129] = HAVE_vec_initv2sisi;
  ena[130] = HAVE_vec_initv4sisi;
  ena[131] = HAVE_vec_initv2didi;
  ena[132] = HAVE_vec_initv2sfsf;
  ena[133] = HAVE_vec_initv4sfsf;
  ena[134] = HAVE_vec_initv2dfdf;
  ena[135] = HAVE_addsi3;
  ena[136] = HAVE_adddi3;
  ena[137] = HAVE_addqq3;
  ena[138] = HAVE_addhq3;
  ena[139] = HAVE_addsq3;
  ena[140] = HAVE_adddq3;
  ena[141] = HAVE_adduqq3;
  ena[142] = HAVE_adduhq3;
  ena[143] = HAVE_addusq3;
  ena[144] = HAVE_addudq3;
  ena[145] = HAVE_addha3;
  ena[146] = HAVE_addsa3;
  ena[147] = HAVE_addda3;
  ena[148] = HAVE_adduha3;
  ena[149] = HAVE_addusa3;
  ena[150] = HAVE_adduda3;
  ena[151] = HAVE_addsf3;
  ena[152] = HAVE_adddf3;
  ena[153] = HAVE_addv4qi3;
  ena[154] = HAVE_addv2hi3;
  ena[155] = HAVE_addv8qi3;
  ena[156] = HAVE_addv4hi3;
  ena[157] = HAVE_addv2si3;
  ena[158] = HAVE_addv16qi3;
  ena[159] = HAVE_addv8hi3;
  ena[160] = HAVE_addv4si3;
  ena[161] = HAVE_addv2di3;
  ena[162] = HAVE_addv2sf3;
  ena[163] = HAVE_addv4sf3;
  ena[164] = HAVE_addv2df3;
  ena[165] = HAVE_ssaddhq3;
  ena[166] = HAVE_ssaddsq3;
  ena[167] = HAVE_ssaddha3;
  ena[168] = HAVE_ssaddsa3;
  ena[169] = HAVE_ssaddv2hq3;
  ena[170] = HAVE_ssaddv2ha3;
  ena[171] = HAVE_usadduqq3;
  ena[172] = HAVE_usadduhq3;
  ena[173] = HAVE_usadduha3;
  ena[174] = HAVE_usaddv4uqq3;
  ena[175] = HAVE_usaddv2uhq3;
  ena[176] = HAVE_usaddv2uha3;
  ena[177] = HAVE_subsi3;
  ena[178] = HAVE_subdi3;
  ena[179] = HAVE_subqq3;
  ena[180] = HAVE_subhq3;
  ena[181] = HAVE_subsq3;
  ena[182] = HAVE_subdq3;
  ena[183] = HAVE_subuqq3;
  ena[184] = HAVE_subuhq3;
  ena[185] = HAVE_subusq3;
  ena[186] = HAVE_subudq3;
  ena[187] = HAVE_subha3;
  ena[188] = HAVE_subsa3;
  ena[189] = HAVE_subda3;
  ena[190] = HAVE_subuha3;
  ena[191] = HAVE_subusa3;
  ena[192] = HAVE_subuda3;
  ena[193] = HAVE_subsf3;
  ena[194] = HAVE_subdf3;
  ena[195] = HAVE_subv4qi3;
  ena[196] = HAVE_subv2hi3;
  ena[197] = HAVE_subv8qi3;
  ena[198] = HAVE_subv4hi3;
  ena[199] = HAVE_subv2si3;
  ena[200] = HAVE_subv16qi3;
  ena[201] = HAVE_subv8hi3;
  ena[202] = HAVE_subv4si3;
  ena[203] = HAVE_subv2di3;
  ena[204] = HAVE_subv2sf3;
  ena[205] = HAVE_subv4sf3;
  ena[206] = HAVE_subv2df3;
  ena[207] = HAVE_sssubhq3;
  ena[208] = HAVE_sssubsq3;
  ena[209] = HAVE_sssubha3;
  ena[210] = HAVE_sssubsa3;
  ena[211] = HAVE_sssubv2hq3;
  ena[212] = HAVE_sssubv2ha3;
  ena[213] = HAVE_ussubuqq3;
  ena[214] = HAVE_ussubuhq3;
  ena[215] = HAVE_ussubuha3;
  ena[216] = HAVE_ussubv4uqq3;
  ena[217] = HAVE_ussubv2uhq3;
  ena[218] = HAVE_ussubv2uha3;
  ena[219] = HAVE_mulsi3;
  ena[220] = HAVE_muldi3;
  ena[221] = HAVE_mulsf3;
  ena[222] = HAVE_muldf3;
  ena[223] = HAVE_mulv2hi3;
  ena[224] = HAVE_mulv4hi3;
  ena[225] = HAVE_mulv16qi3;
  ena[226] = HAVE_mulv8hi3;
  ena[227] = HAVE_mulv4si3;
  ena[228] = HAVE_mulv2di3;
  ena[229] = HAVE_mulv2sf3;
  ena[230] = HAVE_mulv4sf3;
  ena[231] = HAVE_mulv2df3;
  ena[232] = HAVE_ssmulhq3;
  ena[233] = HAVE_ssmulsq3;
  ena[234] = HAVE_ssmulv2hq3;
  ena[235] = HAVE_divsi3;
  ena[236] = HAVE_divdi3;
  ena[237] = HAVE_divsf3;
  ena[238] = HAVE_divdf3;
  ena[239] = HAVE_divv16qi3;
  ena[240] = HAVE_divv8hi3;
  ena[241] = HAVE_divv4si3;
  ena[242] = HAVE_divv2di3;
  ena[243] = HAVE_divv2sf3;
  ena[244] = HAVE_divv4sf3;
  ena[245] = HAVE_divv2df3;
  ena[246] = HAVE_udivsi3;
  ena[247] = HAVE_udivdi3;
  ena[248] = HAVE_udivv16qi3;
  ena[249] = HAVE_udivv8hi3;
  ena[250] = HAVE_udivv4si3;
  ena[251] = HAVE_udivv2di3;
  ena[252] = HAVE_divmodsi4;
  ena[253] = HAVE_divmoddi4;
  ena[254] = HAVE_udivmodsi4;
  ena[255] = HAVE_udivmoddi4;
  ena[256] = HAVE_modsi3;
  ena[257] = HAVE_moddi3;
  ena[258] = HAVE_modv16qi3;
  ena[259] = HAVE_modv8hi3;
  ena[260] = HAVE_modv4si3;
  ena[261] = HAVE_modv2di3;
  ena[262] = HAVE_umodsi3;
  ena[263] = HAVE_umoddi3;
  ena[264] = HAVE_umodv16qi3;
  ena[265] = HAVE_umodv8hi3;
  ena[266] = HAVE_umodv4si3;
  ena[267] = HAVE_umodv2di3;
  ena[268] = HAVE_andsi3;
  ena[269] = HAVE_anddi3;
  ena[270] = HAVE_andv8qi3;
  ena[271] = HAVE_andv4hi3;
  ena[272] = HAVE_andv2si3;
  ena[273] = HAVE_andv16qi3;
  ena[274] = HAVE_andv8hi3;
  ena[275] = HAVE_andv4si3;
  ena[276] = HAVE_andv2di3;
  ena[277] = HAVE_iorsi3;
  ena[278] = HAVE_iordi3;
  ena[279] = HAVE_iorv8qi3;
  ena[280] = HAVE_iorv4hi3;
  ena[281] = HAVE_iorv2si3;
  ena[282] = HAVE_iorv16qi3;
  ena[283] = HAVE_iorv8hi3;
  ena[284] = HAVE_iorv4si3;
  ena[285] = HAVE_iorv2di3;
  ena[286] = HAVE_xorsi3;
  ena[287] = HAVE_xordi3;
  ena[288] = HAVE_xorv8qi3;
  ena[289] = HAVE_xorv4hi3;
  ena[290] = HAVE_xorv2si3;
  ena[291] = HAVE_xorv16qi3;
  ena[292] = HAVE_xorv8hi3;
  ena[293] = HAVE_xorv4si3;
  ena[294] = HAVE_xorv2di3;
  ena[295] = HAVE_ashlsi3;
  ena[296] = HAVE_ashldi3;
  ena[297] = HAVE_ashlv4hi3;
  ena[298] = HAVE_ashlv2si3;
  ena[299] = HAVE_ashrsi3;
  ena[300] = HAVE_ashrdi3;
  ena[301] = HAVE_ashrv4hi3;
  ena[302] = HAVE_ashrv2si3;
  ena[303] = HAVE_lshrsi3;
  ena[304] = HAVE_lshrdi3;
  ena[305] = HAVE_lshrv4hi3;
  ena[306] = HAVE_lshrv2si3;
  ena[307] = HAVE_rotrsi3;
  ena[308] = HAVE_rotrdi3;
  ena[309] = HAVE_vashlv16qi3;
  ena[310] = HAVE_vashlv8hi3;
  ena[311] = HAVE_vashlv4si3;
  ena[312] = HAVE_vashlv2di3;
  ena[313] = HAVE_vashrv16qi3;
  ena[314] = HAVE_vashrv8hi3;
  ena[315] = HAVE_vashrv4si3;
  ena[316] = HAVE_vashrv2di3;
  ena[317] = HAVE_vlshrv16qi3;
  ena[318] = HAVE_vlshrv8hi3;
  ena[319] = HAVE_vlshrv4si3;
  ena[320] = HAVE_vlshrv2di3;
  ena[321] = HAVE_sminv8qi3;
  ena[322] = HAVE_sminv4hi3;
  ena[323] = HAVE_sminv2si3;
  ena[324] = HAVE_sminv16qi3;
  ena[325] = HAVE_sminv8hi3;
  ena[326] = HAVE_sminv4si3;
  ena[327] = HAVE_sminv2di3;
  ena[328] = HAVE_sminv2sf3;
  ena[329] = HAVE_sminv4sf3;
  ena[330] = HAVE_sminv2df3;
  ena[331] = HAVE_smaxv8qi3;
  ena[332] = HAVE_smaxv4hi3;
  ena[333] = HAVE_smaxv2si3;
  ena[334] = HAVE_smaxv16qi3;
  ena[335] = HAVE_smaxv8hi3;
  ena[336] = HAVE_smaxv4si3;
  ena[337] = HAVE_smaxv2di3;
  ena[338] = HAVE_smaxv2sf3;
  ena[339] = HAVE_smaxv4sf3;
  ena[340] = HAVE_smaxv2df3;
  ena[341] = HAVE_uminv8qi3;
  ena[342] = HAVE_uminv16qi3;
  ena[343] = HAVE_uminv8hi3;
  ena[344] = HAVE_uminv4si3;
  ena[345] = HAVE_uminv2di3;
  ena[346] = HAVE_umaxv8qi3;
  ena[347] = HAVE_umaxv16qi3;
  ena[348] = HAVE_umaxv8hi3;
  ena[349] = HAVE_umaxv4si3;
  ena[350] = HAVE_umaxv2di3;
  ena[351] = HAVE_negsi2;
  ena[352] = HAVE_negdi2;
  ena[353] = HAVE_negsf2;
  ena[354] = HAVE_negdf2;
  ena[355] = HAVE_negv16qi2;
  ena[356] = HAVE_negv8hi2;
  ena[357] = HAVE_negv4si2;
  ena[358] = HAVE_negv2di2;
  ena[359] = HAVE_negv2sf2;
  ena[360] = HAVE_negv4sf2;
  ena[361] = HAVE_negv2df2;
  ena[362] = HAVE_abssf2;
  ena[363] = HAVE_absdf2;
  ena[364] = HAVE_absv16qi2;
  ena[365] = HAVE_absv8hi2;
  ena[366] = HAVE_absv4si2;
  ena[367] = HAVE_absv2di2;
  ena[368] = HAVE_absv2sf2;
  ena[369] = HAVE_one_cmplsi2;
  ena[370] = HAVE_one_cmpldi2;
  ena[371] = HAVE_one_cmplv8qi2;
  ena[372] = HAVE_one_cmplv4hi2;
  ena[373] = HAVE_one_cmplv2si2;
  ena[374] = HAVE_one_cmplv16qi2;
  ena[375] = HAVE_one_cmplv8hi2;
  ena[376] = HAVE_one_cmplv4si2;
  ena[377] = HAVE_one_cmplv2di2;
  ena[378] = HAVE_bswaphi2;
  ena[379] = HAVE_bswapsi2;
  ena[380] = HAVE_bswapdi2;
  ena[381] = HAVE_clzsi2;
  ena[382] = HAVE_clzdi2;
  ena[383] = HAVE_clzv16qi2;
  ena[384] = HAVE_clzv8hi2;
  ena[385] = HAVE_clzv4si2;
  ena[386] = HAVE_clzv2di2;
  ena[387] = HAVE_ctzsi2;
  ena[388] = HAVE_ctzdi2;
  ena[389] = HAVE_popcountsi2;
  ena[390] = HAVE_popcountdi2;
  ena[391] = HAVE_popcountv16qi2;
  ena[392] = HAVE_popcountv8hi2;
  ena[393] = HAVE_popcountv4si2;
  ena[394] = HAVE_popcountv2di2;
  ena[395] = HAVE_sqrtsf2;
  ena[396] = HAVE_sqrtdf2;
  ena[397] = HAVE_sqrtv2sf2;
  ena[398] = HAVE_sqrtv4sf2;
  ena[399] = HAVE_sqrtv2df2;
  ena[400] = HAVE_sync_old_addqi;
  ena[401] = HAVE_sync_old_addhi;
  ena[402] = HAVE_sync_old_addsi;
  ena[403] = HAVE_sync_old_adddi;
  ena[404] = HAVE_sync_old_subqi;
  ena[405] = HAVE_sync_old_subhi;
  ena[406] = HAVE_sync_old_subsi;
  ena[407] = HAVE_sync_old_subdi;
  ena[408] = HAVE_sync_old_iorqi;
  ena[409] = HAVE_sync_old_iorhi;
  ena[410] = HAVE_sync_old_iorsi;
  ena[411] = HAVE_sync_old_iordi;
  ena[412] = HAVE_sync_old_andqi;
  ena[413] = HAVE_sync_old_andhi;
  ena[414] = HAVE_sync_old_andsi;
  ena[415] = HAVE_sync_old_anddi;
  ena[416] = HAVE_sync_old_xorqi;
  ena[417] = HAVE_sync_old_xorhi;
  ena[418] = HAVE_sync_old_xorsi;
  ena[419] = HAVE_sync_old_xordi;
  ena[420] = HAVE_sync_old_nandqi;
  ena[421] = HAVE_sync_old_nandhi;
  ena[422] = HAVE_sync_old_nandsi;
  ena[423] = HAVE_sync_old_nanddi;
  ena[424] = HAVE_sync_new_addqi;
  ena[425] = HAVE_sync_new_addhi;
  ena[426] = HAVE_sync_new_addsi;
  ena[427] = HAVE_sync_new_adddi;
  ena[428] = HAVE_sync_new_subqi;
  ena[429] = HAVE_sync_new_subhi;
  ena[430] = HAVE_sync_new_subsi;
  ena[431] = HAVE_sync_new_subdi;
  ena[432] = HAVE_sync_new_iorqi;
  ena[433] = HAVE_sync_new_iorhi;
  ena[434] = HAVE_sync_new_iorsi;
  ena[435] = HAVE_sync_new_iordi;
  ena[436] = HAVE_sync_new_andqi;
  ena[437] = HAVE_sync_new_andhi;
  ena[438] = HAVE_sync_new_andsi;
  ena[439] = HAVE_sync_new_anddi;
  ena[440] = HAVE_sync_new_xorqi;
  ena[441] = HAVE_sync_new_xorhi;
  ena[442] = HAVE_sync_new_xorsi;
  ena[443] = HAVE_sync_new_xordi;
  ena[444] = HAVE_sync_new_nandqi;
  ena[445] = HAVE_sync_new_nandhi;
  ena[446] = HAVE_sync_new_nandsi;
  ena[447] = HAVE_sync_new_nanddi;
  ena[448] = HAVE_sync_compare_and_swapqi;
  ena[449] = HAVE_sync_compare_and_swaphi;
  ena[450] = HAVE_sync_compare_and_swapsi;
  ena[451] = HAVE_sync_compare_and_swapdi;
  ena[452] = HAVE_sync_lock_test_and_setqi;
  ena[453] = HAVE_sync_lock_test_and_sethi;
  ena[454] = HAVE_sync_lock_test_and_setsi;
  ena[455] = HAVE_sync_lock_test_and_setdi;
  ena[456] = HAVE_movccf;
  ena[457] = HAVE_movqi;
  ena[458] = HAVE_movhi;
  ena[459] = HAVE_movsi;
  ena[460] = HAVE_movdi;
  ena[461] = HAVE_movti;
  ena[462] = HAVE_movsf;
  ena[463] = HAVE_movdf;
  ena[464] = HAVE_movtf;
  ena[465] = HAVE_movv4qi;
  ena[466] = HAVE_movv2hi;
  ena[467] = HAVE_movv8qi;
  ena[468] = HAVE_movv4hi;
  ena[469] = HAVE_movv2si;
  ena[470] = HAVE_movv16qi;
  ena[471] = HAVE_movv8hi;
  ena[472] = HAVE_movv4si;
  ena[473] = HAVE_movv2di;
  ena[474] = HAVE_movv4qq;
  ena[475] = HAVE_movv2hq;
  ena[476] = HAVE_movv4uqq;
  ena[477] = HAVE_movv2uhq;
  ena[478] = HAVE_movv2ha;
  ena[479] = HAVE_movv2uha;
  ena[480] = HAVE_movv2sf;
  ena[481] = HAVE_movv4sf;
  ena[482] = HAVE_movv2df;
  ena[483] = HAVE_movmisalignhi;
  ena[484] = HAVE_movmisalignsi;
  ena[485] = HAVE_movmisalignsf;
  ena[486] = HAVE_movmisaligndf;
  ena[487] = HAVE_movmisalignv16qi;
  ena[488] = HAVE_movmisalignv8hi;
  ena[489] = HAVE_movmisalignv4si;
  ena[490] = HAVE_movmisalignv2di;
  ena[491] = HAVE_movmisalignv4sf;
  ena[492] = HAVE_movmisalignv2df;
  ena[493] = HAVE_insvsi;
  ena[494] = HAVE_insvdi;
  ena[495] = HAVE_extvsi;
  ena[496] = HAVE_extvdi;
  ena[497] = HAVE_extzvsi;
  ena[498] = HAVE_extzvdi;
  ena[499] = HAVE_insvmisalignsi;
  ena[500] = HAVE_insvmisaligndi;
  ena[501] = HAVE_extvmisalignsi;
  ena[502] = HAVE_extvmisaligndi;
  ena[503] = HAVE_extzvmisalignsi;
  ena[504] = HAVE_extzvmisaligndi;
  ena[505] = HAVE_cbranchsi4;
  ena[506] = HAVE_cbranchdi4;
  ena[507] = HAVE_cbranchsf4;
  ena[508] = HAVE_cbranchdf4;
  ena[509] = HAVE_movsicc;
  ena[510] = HAVE_movdicc;
  ena[511] = HAVE_movsfcc;
  ena[512] = HAVE_movdfcc;
  ena[513] = HAVE_movv2sfcc;
  ena[514] = HAVE_cstoresi4;
  ena[515] = HAVE_cstoredi4;
  ena[516] = HAVE_ctrapsi4;
  ena[517] = HAVE_ctrapdi4;
  ena[518] = HAVE_smulsi3_highpart;
  ena[519] = HAVE_smuldi3_highpart;
  ena[520] = HAVE_smulv4hi3_highpart;
  ena[521] = HAVE_umulsi3_highpart;
  ena[522] = HAVE_umuldi3_highpart;
  ena[523] = HAVE_umulv4hi3_highpart;
  ena[524] = HAVE_cpymemsi;
  ena[525] = HAVE_fmasf4;
  ena[526] = HAVE_fmadf4;
  ena[527] = HAVE_fmav2sf4;
  ena[528] = HAVE_fmav4sf4;
  ena[529] = HAVE_fmav2df4;
  ena[530] = HAVE_fmssf4;
  ena[531] = HAVE_fmsdf4;
  ena[532] = HAVE_fmsv2sf4;
  ena[533] = HAVE_fnmasf4;
  ena[534] = HAVE_fnmadf4;
  ena[535] = HAVE_fnmav2sf4;
  ena[536] = HAVE_fnmav4sf4;
  ena[537] = HAVE_fnmav2df4;
  ena[538] = HAVE_fnmssf4;
  ena[539] = HAVE_fnmsdf4;
  ena[540] = HAVE_fnmsv2sf4;
  ena[541] = HAVE_reduc_smax_scal_v8qi;
  ena[542] = HAVE_reduc_smax_scal_v4hi;
  ena[543] = HAVE_reduc_smax_scal_v2si;
  ena[544] = HAVE_reduc_smax_scal_v2sf;
  ena[545] = HAVE_reduc_smin_scal_v8qi;
  ena[546] = HAVE_reduc_smin_scal_v4hi;
  ena[547] = HAVE_reduc_smin_scal_v2si;
  ena[548] = HAVE_reduc_smin_scal_v2sf;
  ena[549] = HAVE_reduc_plus_scal_v8qi;
  ena[550] = HAVE_reduc_plus_scal_v4hi;
  ena[551] = HAVE_reduc_plus_scal_v2si;
  ena[552] = HAVE_reduc_plus_scal_v2sf;
  ena[553] = HAVE_reduc_umax_scal_v8qi;
  ena[554] = HAVE_reduc_umin_scal_v8qi;
  ena[555] = HAVE_sdot_prodv4hi;
  ena[556] = HAVE_vec_pack_ssat_v4hi;
  ena[557] = HAVE_vec_pack_ssat_v2si;
  ena[558] = HAVE_vec_pack_trunc_v8hi;
  ena[559] = HAVE_vec_pack_trunc_v4si;
  ena[560] = HAVE_vec_pack_trunc_v2di;
  ena[561] = HAVE_vec_pack_trunc_v2df;
  ena[562] = HAVE_vec_pack_usat_v4hi;
  ena[563] = HAVE_vec_permv16qi;
  ena[564] = HAVE_vec_permv8hi;
  ena[565] = HAVE_vec_permv4si;
  ena[566] = HAVE_vec_permv2di;
  ena[567] = HAVE_vec_permv4sf;
  ena[568] = HAVE_vec_permv2df;
  ena[569] = HAVE_vec_setv4hi;
  ena[570] = HAVE_vec_setv16qi;
  ena[571] = HAVE_vec_setv8hi;
  ena[572] = HAVE_vec_setv4si;
  ena[573] = HAVE_vec_setv2di;
  ena[574] = HAVE_vec_setv2sf;
  ena[575] = HAVE_vec_setv4sf;
  ena[576] = HAVE_vec_setv2df;
  ena[577] = HAVE_vec_shl_di;
  ena[578] = HAVE_vec_shl_v8qi;
  ena[579] = HAVE_vec_shl_v4hi;
  ena[580] = HAVE_vec_shl_v2si;
  ena[581] = HAVE_vec_shr_di;
  ena[582] = HAVE_vec_shr_v8qi;
  ena[583] = HAVE_vec_shr_v4hi;
  ena[584] = HAVE_vec_shr_v2si;
  ena[585] = HAVE_vec_unpacks_hi_v8qi;
  ena[586] = HAVE_vec_unpacks_hi_v4hi;
  ena[587] = HAVE_vec_unpacks_hi_v16qi;
  ena[588] = HAVE_vec_unpacks_hi_v8hi;
  ena[589] = HAVE_vec_unpacks_hi_v4si;
  ena[590] = HAVE_vec_unpacks_hi_v4sf;
  ena[591] = HAVE_vec_unpacks_lo_v8qi;
  ena[592] = HAVE_vec_unpacks_lo_v4hi;
  ena[593] = HAVE_vec_unpacks_lo_v16qi;
  ena[594] = HAVE_vec_unpacks_lo_v8hi;
  ena[595] = HAVE_vec_unpacks_lo_v4si;
  ena[596] = HAVE_vec_unpacks_lo_v4sf;
  ena[597] = HAVE_vec_unpacku_hi_v8qi;
  ena[598] = HAVE_vec_unpacku_hi_v4hi;
  ena[599] = HAVE_vec_unpacku_hi_v16qi;
  ena[600] = HAVE_vec_unpacku_hi_v8hi;
  ena[601] = HAVE_vec_unpacku_hi_v4si;
  ena[602] = HAVE_vec_unpacku_lo_v8qi;
  ena[603] = HAVE_vec_unpacku_lo_v4hi;
  ena[604] = HAVE_vec_unpacku_lo_v16qi;
  ena[605] = HAVE_vec_unpacku_lo_v8hi;
  ena[606] = HAVE_vec_unpacku_lo_v4si;
  ena[607] = HAVE_sync_addqi;
  ena[608] = HAVE_sync_addhi;
  ena[609] = HAVE_sync_addsi;
  ena[610] = HAVE_sync_adddi;
  ena[611] = HAVE_sync_andqi;
  ena[612] = HAVE_sync_andhi;
  ena[613] = HAVE_sync_andsi;
  ena[614] = HAVE_sync_anddi;
  ena[615] = HAVE_sync_iorqi;
  ena[616] = HAVE_sync_iorhi;
  ena[617] = HAVE_sync_iorsi;
  ena[618] = HAVE_sync_iordi;
  ena[619] = HAVE_sync_nandqi;
  ena[620] = HAVE_sync_nandhi;
  ena[621] = HAVE_sync_nandsi;
  ena[622] = HAVE_sync_nanddi;
  ena[623] = HAVE_sync_subqi;
  ena[624] = HAVE_sync_subhi;
  ena[625] = HAVE_sync_subsi;
  ena[626] = HAVE_sync_subdi;
  ena[627] = HAVE_sync_xorqi;
  ena[628] = HAVE_sync_xorhi;
  ena[629] = HAVE_sync_xorsi;
  ena[630] = HAVE_sync_xordi;
  ena[631] = HAVE_atomic_compare_and_swapsi;
  ena[632] = HAVE_atomic_compare_and_swapdi;
  ena[633] = HAVE_atomic_exchangesi;
  ena[634] = HAVE_atomic_exchangedi;
  ena[635] = HAVE_atomic_fetch_addsi;
  ena[636] = HAVE_atomic_fetch_adddi;
  ena[637] = HAVE_get_thread_pointersi;
  ena[638] = HAVE_get_thread_pointerdi;
}

/* Returns TRUE if the target supports any of the partial vector
   optabs: while_ult_optab, len_load_optab or len_store_optab,
   for any mode.  */
bool
partial_vectors_supported_p (void)
{
	return false;
}
static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  unknown_optab,
  unknown_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

