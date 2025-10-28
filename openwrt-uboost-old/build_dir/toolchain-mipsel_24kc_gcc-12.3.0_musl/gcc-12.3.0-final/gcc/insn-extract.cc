/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1694:  /* msa_bnz_v_b */
    case 1693:  /* msa_bz_v_b */
    case 1692:  /* msa_bnz_v_h */
    case 1691:  /* msa_bz_v_h */
    case 1690:  /* msa_bnz_v_w */
    case 1689:  /* msa_bz_v_w */
    case 1688:  /* msa_bnz_v_d */
    case 1687:  /* msa_bz_v_d */
    case 1686:  /* msa_bnz_v_w_f */
    case 1685:  /* msa_bz_v_w_f */
    case 1684:  /* msa_bnz_v_d_f */
    case 1683:  /* msa_bz_v_d_f */
    case 1682:  /* msa_bnz_b */
    case 1681:  /* msa_bz_b */
    case 1680:  /* msa_bnz_h */
    case 1679:  /* msa_bz_h */
    case 1678:  /* msa_bnz_w */
    case 1677:  /* msa_bz_w */
    case 1676:  /* msa_bnz_d */
    case 1675:  /* msa_bz_d */
    case 1674:  /* msa_bnz_w_f */
    case 1673:  /* msa_bz_w_f */
    case 1672:  /* msa_bnz_d_f */
    case 1671:  /* msa_bz_d_f */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1512:  /* msa_hsub_u_d */
    case 1511:  /* msa_hsub_s_d */
    case 1510:  /* msa_hadd_u_d */
    case 1509:  /* msa_hadd_s_d */
    case 1508:  /* msa_hsub_u_w */
    case 1507:  /* msa_hsub_s_w */
    case 1506:  /* msa_hadd_u_w */
    case 1505:  /* msa_hadd_s_w */
    case 1504:  /* msa_hsub_u_h */
    case 1503:  /* msa_hsub_s_h */
    case 1502:  /* msa_hadd_u_h */
    case 1501:  /* msa_hadd_s_h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1552:  /* msa_min_a_b */
    case 1551:  /* msa_min_a_h */
    case 1550:  /* msa_min_a_w */
    case 1549:  /* msa_min_a_d */
    case 1540:  /* msa_max_a_b */
    case 1539:  /* msa_max_a_h */
    case 1538:  /* msa_max_a_w */
    case 1537:  /* msa_max_a_d */
    case 1484:  /* msa_fmin_a_w */
    case 1483:  /* msa_fmin_a_d */
    case 1480:  /* msa_fmax_a_w */
    case 1479:  /* msa_fmax_a_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[1] = 2;
      break;

    case 1412:  /* msa_dpsub_u_h */
    case 1411:  /* msa_dpsub_s_h */
    case 1410:  /* msa_dpsub_u_w */
    case 1409:  /* msa_dpsub_s_w */
    case 1408:  /* msa_dpsub_u_d */
    case 1407:  /* msa_dpsub_s_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1406:  /* msa_dpadd_u_h */
    case 1405:  /* msa_dpadd_s_h */
    case 1404:  /* msa_dpadd_u_w */
    case 1403:  /* msa_dpadd_s_w */
    case 1402:  /* msa_dpadd_u_d */
    case 1401:  /* msa_dpadd_s_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1400:  /* msa_dotp_u_h */
    case 1399:  /* msa_dotp_s_h */
    case 1398:  /* msa_dotp_u_w */
    case 1397:  /* msa_dotp_s_w */
    case 1396:  /* msa_dotp_u_d */
    case 1395:  /* msa_dotp_s_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1366:  /* msa_bsel_b */
    case 1365:  /* msa_bsel_h */
    case 1364:  /* msa_bsel_w */
    case 1363:  /* msa_bsel_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1354:  /* msa_bmz_b */
    case 1353:  /* msa_bmz_h */
    case 1352:  /* msa_bmz_w */
    case 1351:  /* msa_bmz_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1350:  /* msa_bmnz_b */
    case 1349:  /* msa_bmnz_h */
    case 1348:  /* msa_bmnz_w */
    case 1347:  /* msa_bmnz_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 1660:  /* msa_splati_b */
    case 1659:  /* msa_splati_h */
    case 1658:  /* msa_splati_w */
    case 1657:  /* msa_splati_d */
    case 1656:  /* msa_splati_w_f */
    case 1655:  /* msa_splati_d_f */
    case 1188:  /* msa_copy_s_w_f_64bit */
    case 1187:  /* msa_copy_s_w_64bit */
    case 1186:  /* msa_copy_u_w */
    case 1185:  /* msa_copy_u_b */
    case 1184:  /* msa_copy_s_b */
    case 1183:  /* msa_copy_u_h */
    case 1182:  /* msa_copy_s_h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1179:  /* msa_insve_b */
    case 1178:  /* msa_insve_h */
    case 1177:  /* msa_insve_w */
    case 1176:  /* msa_insve_d */
    case 1175:  /* msa_insve_w_f */
    case 1174:  /* msa_insve_d_f */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1065:  /* loongson_vec_init1_v8qi */
    case 1064:  /* loongson_vec_init1_v4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1056:  /* jraddiusp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      break;

    case 1053:  /* *load_word_multiple */
    case 1052:  /* *store_word_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1051:  /* ssmsubsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1050:  /* ssmaddsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1049:  /* ssmulsq3 */
    case 1048:  /* ssmulhq3 */
    case 1047:  /* ssmulv2hq3 */
    case 964:  /* mulv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 951:  /* mips_bposge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 925:  /* mips_wrdsp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0);
      recog_data.dup_num[3] = 0;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0);
      recog_data.dup_num[5] = 0;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[7] = 0;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 0;
      break;

    case 922:  /* mips_extpdp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 1;
      break;

    case 994:  /* mips_dpsqx_sa_w_ph */
    case 993:  /* mips_dpsqx_s_w_ph */
    case 992:  /* mips_dpaqx_sa_w_ph */
    case 991:  /* mips_dpaqx_s_w_ph */
    case 900:  /* mips_maq_sa_w_phr */
    case 899:  /* mips_maq_sa_w_phl */
    case 898:  /* mips_maq_s_w_phr */
    case 897:  /* mips_maq_s_w_phl */
    case 896:  /* mips_dpsq_sa_l_w */
    case 895:  /* mips_dpaq_sa_l_w */
    case 894:  /* mips_mulsaq_s_w_ph */
    case 893:  /* mips_dpsq_s_w_ph */
    case 892:  /* mips_dpaq_s_w_ph */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 968:  /* mips_mulq_s_w */
    case 967:  /* mips_mulq_s_ph */
    case 966:  /* mips_mulq_rs_w */
    case 965:  /* mips_mul_s_ph */
    case 887:  /* mips_muleq_s_w_phr */
    case 886:  /* mips_muleq_s_w_phl */
    case 885:  /* mips_mulq_rs_ph */
    case 884:  /* mips_muleu_s_ph_qbr */
    case 883:  /* mips_muleu_s_ph_qbl */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 952:  /* mips_absq_s_qb */
    case 860:  /* mips_absq_s_ph */
    case 859:  /* mips_absq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 978:  /* mips_subu_s_ph */
    case 977:  /* mips_subu_ph */
    case 961:  /* mips_cmpgdu_le_qb */
    case 960:  /* mips_cmpgdu_lt_qb */
    case 959:  /* mips_cmpgdu_eq_qb */
    case 954:  /* mips_addu_s_ph */
    case 924:  /* mips_mthlip */
    case 921:  /* mips_extp */
    case 920:  /* mips_extr_s_h */
    case 919:  /* mips_extr_rs_w */
    case 918:  /* mips_extr_r_w */
    case 917:  /* mips_extr_w */
    case 878:  /* mips_shll_s_ph */
    case 877:  /* mips_shll_s_w */
    case 876:  /* mips_shll_qb */
    case 875:  /* mips_shll_ph */
    case 864:  /* mips_precrqu_s_qb_ph */
    case 863:  /* mips_precrq_rs_ph_w */
    case 856:  /* mips_addwc */
    case 855:  /* mips_addsc */
    case 854:  /* mips_subu_s_qb */
    case 853:  /* mips_subq_s_ph */
    case 852:  /* mips_subq_s_w */
    case 849:  /* mips_addu_s_qb */
    case 848:  /* mips_addq_s_ph */
    case 847:  /* mips_addq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1046:  /* sssubv2ha3 */
    case 1045:  /* sssubv2hq3 */
    case 1044:  /* sssubsa3 */
    case 1043:  /* sssubha3 */
    case 1042:  /* sssubsq3 */
    case 1041:  /* sssubhq3 */
    case 1040:  /* ussubv2uha3 */
    case 1039:  /* ussubv2uhq3 */
    case 1038:  /* ussubv4uqq3 */
    case 1037:  /* ussubuha3 */
    case 1036:  /* ussubuhq3 */
    case 1035:  /* ussubuqq3 */
    case 1020:  /* ssaddv2ha3 */
    case 1019:  /* ssaddv2hq3 */
    case 1018:  /* ssaddsa3 */
    case 1017:  /* ssaddha3 */
    case 1016:  /* ssaddsq3 */
    case 1015:  /* ssaddhq3 */
    case 1014:  /* usaddv2uha3 */
    case 1013:  /* usaddv2uhq3 */
    case 1012:  /* usaddv4uqq3 */
    case 1011:  /* usadduha3 */
    case 1010:  /* usadduhq3 */
    case 1009:  /* usadduqq3 */
    case 953:  /* mips_addu_ph */
    case 851:  /* subv4qi3 */
    case 850:  /* subv2hi3 */
    case 846:  /* addv4qi3 */
    case 845:  /* addv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 832:  /* *branch_upper_lower_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 831:  /* *branch_upper_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 830:  /* bc1any2f */
    case 829:  /* bc1any2t */
    case 828:  /* bc1any4f */
    case 827:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 810:  /* mips_cabs_cond_4s */
    case 809:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 1192:  /* msa_copy_s_d_f */
    case 1191:  /* msa_copy_s_d */
    case 1190:  /* msa_copy_s_w_f */
    case 1189:  /* msa_copy_s_w */
    case 800:  /* vec_extractv2sfsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 798:  /* vec_perm_const_ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 794:  /* atomic_fetch_adddi_ldadd */
    case 793:  /* atomic_fetch_addsi_ldadd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 792:  /* atomic_fetch_adddi_llsc */
    case 791:  /* atomic_fetch_addsi_llsc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 790:  /* atomic_exchangedi_swap */
    case 789:  /* atomic_exchangesi_swap */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 788:  /* atomic_exchangedi_llsc */
    case 787:  /* atomic_exchangesi_llsc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 786:  /* atomic_compare_and_swapdi */
    case 785:  /* atomic_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 1));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 784:  /* test_and_set_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 783:  /* sync_lock_test_and_setdi */
    case 782:  /* sync_lock_test_and_setsi */
    case 781:  /* sync_new_nanddi */
    case 780:  /* sync_new_nandsi */
    case 779:  /* sync_old_nanddi */
    case 778:  /* sync_old_nandsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 775:  /* sync_new_anddi */
    case 774:  /* sync_new_xordi */
    case 773:  /* sync_new_iordi */
    case 772:  /* sync_new_andsi */
    case 771:  /* sync_new_xorsi */
    case 770:  /* sync_new_iorsi */
    case 769:  /* sync_old_anddi */
    case 768:  /* sync_old_xordi */
    case 767:  /* sync_old_iordi */
    case 766:  /* sync_old_andsi */
    case 765:  /* sync_old_xorsi */
    case 764:  /* sync_old_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 763:  /* sync_anddi */
    case 762:  /* sync_xordi */
    case 761:  /* sync_iordi */
    case 760:  /* sync_andsi */
    case 759:  /* sync_xorsi */
    case 758:  /* sync_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 757:  /* sync_new_subdi */
    case 756:  /* sync_new_subsi */
    case 755:  /* sync_new_adddi */
    case 754:  /* sync_new_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 753:  /* sync_old_subdi */
    case 752:  /* sync_old_subsi */
    case 751:  /* sync_old_adddi */
    case 750:  /* sync_old_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 747:  /* sync_new_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 746:  /* sync_old_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 745:  /* sync_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 744:  /* sync_new_and_12 */
    case 743:  /* sync_new_xor_12 */
    case 742:  /* sync_new_ior_12 */
    case 741:  /* sync_new_sub_12 */
    case 740:  /* sync_new_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0);
      recog_data.dup_num[5] = 0;
      break;

    case 739:  /* sync_old_and_12 */
    case 738:  /* sync_old_xor_12 */
    case 737:  /* sync_old_ior_12 */
    case 736:  /* sync_old_sub_12 */
    case 735:  /* sync_old_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 734:  /* sync_and_12 */
    case 733:  /* sync_xor_12 */
    case 732:  /* sync_ior_12 */
    case 731:  /* sync_sub_12 */
    case 730:  /* sync_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 749:  /* sync_subdi */
    case 748:  /* sync_subsi */
    case 729:  /* sync_adddi */
    case 728:  /* sync_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 727:  /* compare_and_swap_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 726:  /* sync_compare_and_swapdi */
    case 725:  /* sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 724:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 723:  /* *join2_loadhi */
    case 722:  /* *join2_loadhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      break;

    case 1060:  /* *movepsfsf */
    case 1059:  /* *movepsfsi */
    case 1058:  /* *movepsisf */
    case 1057:  /* *movepsisi */
    case 1055:  /* *swp */
    case 1054:  /* *lwp */
    case 721:  /* *join2_load_storedf */
    case 720:  /* *join2_load_storesf */
    case 719:  /* *join2_load_storesi */
    case 718:  /* *join2_load_storehi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 717:  /* mips_set_fcsr_mips16_di */
    case 716:  /* mips_set_fcsr_mips16_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 714:  /* mips_get_fcsr_mips16_di */
    case 713:  /* mips_get_fcsr_mips16_si */
    case 711:  /* *tls_get_tp_mips16_call_di */
    case 710:  /* *tls_get_tp_mips16_call_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 709:  /* tls_get_tp_mips16_di */
    case 708:  /* tls_get_tp_mips16_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 705:  /* tls_get_tp_di */
    case 704:  /* tls_get_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 703:  /* *mips16e_save_restore */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1664:  /* msa_ctcmsa */
    case 700:  /* consttable_int */
    case 699:  /* consttable_tls_reloc */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 796:  /* *movcc_v2sf_di */
    case 795:  /* *movcc_v2sf_si */
    case 686:  /* *movdf_on_cc */
    case 685:  /* *movsf_on_cc */
    case 684:  /* *movdf_on_di */
    case 683:  /* *movsf_on_di */
    case 682:  /* *movdf_on_si */
    case 681:  /* *movsf_on_si */
    case 676:  /* *movdi_on_cc */
    case 675:  /* *movsi_on_cc */
    case 674:  /* *movdi_on_di */
    case 673:  /* *movsi_on_di */
    case 672:  /* *movdi_on_si */
    case 671:  /* *movsi_on_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 667:  /* *prefetch_indexed_di */
    case 666:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 665:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 662:  /* call_value_direct_split */
    case 661:  /* call_value_internal_direct */
    case 660:  /* call_value_split */
    case 659:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 658:  /* call_direct_split */
    case 657:  /* call_internal_direct */
    case 656:  /* call_split */
    case 655:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 664:  /* call_value_multiple_split */
    case 663:  /* call_value_multiple_internal */
    case 654:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1081:  /* loongson_pandn_d */
    case 1080:  /* loongson_pandn_b */
    case 1079:  /* loongson_pandn_h */
    case 1078:  /* loongson_pandn_w */
    case 653:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 652:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 643:  /* eh_set_lr_di */
    case 642:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 645:  /* restore_gp_di */
    case 644:  /* restore_gp_si */
    case 634:  /* simple_return_internal */
    case 633:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 627:  /* casesi_internal_mips16_di */
    case 626:  /* casesi_internal_mips16_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 625:  /* tablejump_di */
    case 624:  /* tablejump_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 623:  /* indirect_jump_and_restore_di */
    case 622:  /* indirect_jump_and_restore_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 619:  /* *jump_mips16 */
    case 618:  /* *jump_pic */
    case 617:  /* *jump_absolute */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 490:  /* *branch_bit1di_inverted */
    case 489:  /* *branch_bit0di_inverted */
    case 488:  /* *branch_bit1si_inverted */
    case 487:  /* *branch_bit0si_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 486:  /* *branch_bit1di */
    case 485:  /* *branch_bit0di */
    case 484:  /* *branch_bit1si */
    case 483:  /* *branch_bit0si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 478:  /* *branch_equalitydi_inverted */
    case 477:  /* *branch_equalitysi_inverted */
    case 474:  /* *branch_orderdi_inverted */
    case 473:  /* *branch_ordersi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 476:  /* *branch_equalitydi */
    case 475:  /* *branch_equalitysi */
    case 472:  /* *branch_orderdi */
    case 471:  /* *branch_ordersi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 482:  /* *branch_equalitydi_mips16_inverted */
    case 481:  /* *branch_equalitysi_mips16_inverted */
    case 470:  /* *branch_fp_inverted_ccf */
    case 469:  /* *branch_fp_inverted_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 480:  /* *branch_equalitydi_mips16 */
    case 479:  /* *branch_equalitysi_mips16 */
    case 468:  /* *branch_fp_ccf */
    case 467:  /* *branch_fp_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 910:  /* mips_cmpu_le_qb */
    case 909:  /* mips_cmp_le_ph */
    case 908:  /* mips_cmpu_lt_qb */
    case 907:  /* mips_cmp_lt_ph */
    case 906:  /* mips_cmpu_eq_qb */
    case 905:  /* mips_cmp_eq_ph */
    case 439:  /* mips_cache */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 715:  /* *mips_set_fcsr */
    case 702:  /* align */
    case 701:  /* consttable_float */
    case 698:  /* consttable_end */
    case 697:  /* consttable */
    case 434:  /* synci */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 621:  /* indirect_jump_di */
    case 620:  /* indirect_jump_si */
    case 432:  /* use_cprestore_di */
    case 431:  /* use_cprestore_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 428:  /* potential_cprestore_di */
    case 427:  /* potential_cprestore_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 360:  /* *lwxs */
    case 359:  /* *lwxs */
    case 358:  /* *lwxs */
    case 357:  /* *lwxs */
    case 356:  /* *lwxs */
    case 355:  /* *lwxs */
    case 354:  /* *lwxs */
    case 353:  /* *lwxs */
    case 352:  /* *lwxs */
    case 351:  /* *lwxs */
    case 350:  /* *lwxs */
    case 349:  /* *lwxs */
    case 348:  /* *lwxs */
    case 347:  /* *lwxs */
    case 346:  /* *lwxs */
    case 345:  /* *lwxs */
    case 344:  /* *lwxs */
    case 343:  /* *lwxs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 342:  /* *sdxc1_di */
    case 341:  /* *sdxc1_di */
    case 340:  /* *swxc1_di */
    case 339:  /* *sdxc1_si */
    case 338:  /* *sdxc1_si */
    case 337:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 712:  /* *mips_get_fcsr */
    case 436:  /* rdhwr_synci_step_di */
    case 435:  /* rdhwr_synci_step_si */
    case 308:  /* *movdi_ra */
    case 307:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 1204:  /* movv16qi_msa */
    case 1203:  /* movv8hi_msa */
    case 1202:  /* movv4si_msa */
    case 1201:  /* movv2di_msa */
    case 1200:  /* movv4sf_msa */
    case 1199:  /* movv2df_msa */
    case 1063:  /* movv8qi_internal */
    case 1062:  /* movv4hi_internal */
    case 1061:  /* movv2si_internal */
    case 376:  /* *movv2sf */
    case 375:  /* *movtf_mips16 */
    case 374:  /* *movtf */
    case 373:  /* *movti_mips16 */
    case 372:  /* *movti */
    case 371:  /* *movdf_mips16 */
    case 370:  /* *movdf_softfloat */
    case 369:  /* *movdf_hardfloat */
    case 368:  /* *movsf_mips16 */
    case 367:  /* *movsf_softfloat */
    case 366:  /* *movsf_hardfloat */
    case 365:  /* movccf */
    case 364:  /* *movqi_mips16 */
    case 363:  /* *movqi_internal */
    case 362:  /* *movhi_mips16 */
    case 361:  /* *movhi_internal */
    case 330:  /* *movv4uqq_mips16 */
    case 329:  /* *movv4qq_mips16 */
    case 328:  /* *movv2uha_mips16 */
    case 327:  /* *movv2ha_mips16 */
    case 326:  /* *movv2uhq_mips16 */
    case 325:  /* *movv2hq_mips16 */
    case 324:  /* *movv4qi_mips16 */
    case 323:  /* *movv2hi_mips16 */
    case 322:  /* *movsi_mips16 */
    case 321:  /* *movv4uqq_internal */
    case 320:  /* *movv4qq_internal */
    case 319:  /* *movv2uha_internal */
    case 318:  /* *movv2ha_internal */
    case 317:  /* *movv2uhq_internal */
    case 316:  /* *movv2hq_internal */
    case 315:  /* *movv4qi_internal */
    case 314:  /* *movv2hi_internal */
    case 313:  /* *movsi_internal */
    case 312:  /* *movdi_64bit_mips16 */
    case 311:  /* *movdi_64bit */
    case 310:  /* *movdi_32bit_mips16 */
    case 309:  /* *movdi_32bit */
    case 298:  /* *got_dispdi */
    case 297:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 1669:  /* msa_fexupr_w */
    case 1667:  /* msa_fexupl_w */
    case 1663:  /* msa_cfcmsa */
    case 1662:  /* msa_splati_w_f_scalar */
    case 1661:  /* msa_splati_d_f_scalar */
    case 1572:  /* msa_nloc_b */
    case 1571:  /* msa_nloc_h */
    case 1570:  /* msa_nloc_w */
    case 1569:  /* msa_nloc_d */
    case 1494:  /* msa_ftint_u_w */
    case 1493:  /* msa_ftint_u_d */
    case 1492:  /* msa_ftint_s_w */
    case 1491:  /* msa_ftint_s_d */
    case 1490:  /* msa_frsqrt_w */
    case 1489:  /* msa_frsqrt_d */
    case 1488:  /* msa_frint_w */
    case 1487:  /* msa_frint_d */
    case 1486:  /* msa_frcp_w */
    case 1485:  /* msa_frcp_d */
    case 1476:  /* msa_flog2_w */
    case 1475:  /* msa_flog2_d */
    case 1468:  /* msa_ffqr_w */
    case 1467:  /* msa_ffqr_d */
    case 1466:  /* msa_ffql_w */
    case 1465:  /* msa_ffql_d */
    case 1414:  /* msa_fclass_w */
    case 1413:  /* msa_fclass_d */
    case 1123:  /* reduc_uplus_v8qi */
    case 1122:  /* loongson_biadd */
    case 1116:  /* loongson_pmovmskb */
    case 926:  /* mips_rddsp */
    case 904:  /* mips_repl_ph */
    case 903:  /* mips_repl_qb */
    case 901:  /* mips_bitrev */
    case 874:  /* mips_preceu_ph_qbra */
    case 873:  /* mips_preceu_ph_qbla */
    case 872:  /* mips_preceu_ph_qbr */
    case 871:  /* mips_preceu_ph_qbl */
    case 870:  /* mips_precequ_ph_qbra */
    case 869:  /* mips_precequ_ph_qbla */
    case 868:  /* mips_precequ_ph_qbr */
    case 867:  /* mips_precequ_ph_qbl */
    case 866:  /* mips_preceq_w_phr */
    case 865:  /* mips_preceq_w_phl */
    case 858:  /* mips_raddu_w_qb */
    case 841:  /* mips_recip1_ps */
    case 840:  /* mips_recip1_d */
    case 839:  /* mips_recip1_s */
    case 835:  /* mips_rsqrt1_ps */
    case 834:  /* mips_rsqrt1_d */
    case 833:  /* mips_rsqrt1_s */
    case 806:  /* *mips_abs_ps */
    case 804:  /* mips_cvt_ps_pw */
    case 803:  /* mips_cvt_pw_ps */
    case 777:  /* sync_nanddi */
    case 776:  /* sync_nandsi */
    case 647:  /* move_gpdi */
    case 646:  /* move_gpsi */
    case 641:  /* cop0_move */
    case 640:  /* mips_rdpgpr_di */
    case 639:  /* mips_rdpgpr_si */
    case 466:  /* dshd */
    case 465:  /* dsbh */
    case 464:  /* wsbh */
    case 430:  /* cprestore_di */
    case 429:  /* cprestore_si */
    case 426:  /* copygp_mips16_di */
    case 425:  /* copygp_mips16_si */
    case 421:  /* loadgp_absolute_di */
    case 420:  /* loadgp_absolute_si */
    case 417:  /* mfhc1tf */
    case 416:  /* mfhc1v8qi */
    case 415:  /* mfhc1v4hi */
    case 414:  /* mfhc1v2si */
    case 413:  /* mfhc1v2sf */
    case 412:  /* mfhc1di */
    case 411:  /* mfhc1df */
    case 389:  /* load_lowtf */
    case 388:  /* load_lowv8qi */
    case 387:  /* load_lowv4hi */
    case 386:  /* load_lowv2si */
    case 385:  /* load_lowv2sf */
    case 384:  /* load_lowdi */
    case 383:  /* load_lowdf */
    case 379:  /* mfhidi_ti */
    case 378:  /* mfhisi_ti */
    case 377:  /* mfhisi_di */
    case 292:  /* *unshifted_high */
    case 291:  /* *unshifted_high */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 290:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 288:  /* mov_sdr */
    case 287:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1648:  /* msa_sldi_b */
    case 1647:  /* msa_sldi_h */
    case 1646:  /* msa_sldi_w */
    case 1645:  /* msa_sldi_d */
    case 1644:  /* msa_sldi_w_f */
    case 1643:  /* msa_sldi_d_f */
    case 1642:  /* msa_sld_b */
    case 1641:  /* msa_sld_h */
    case 1640:  /* msa_sld_w */
    case 1639:  /* msa_sld_d */
    case 1638:  /* msa_sld_w_f */
    case 1637:  /* msa_sld_d_f */
    case 1564:  /* msa_msubr_q_h */
    case 1563:  /* msa_msubr_q_w */
    case 1562:  /* msa_msub_q_h */
    case 1561:  /* msa_msub_q_w */
    case 1536:  /* msa_maddr_q_h */
    case 1535:  /* msa_maddr_q_w */
    case 1534:  /* msa_madd_q_h */
    case 1533:  /* msa_madd_q_w */
    case 1346:  /* msa_binsri_b */
    case 1345:  /* msa_binsri_h */
    case 1344:  /* msa_binsri_w */
    case 1343:  /* msa_binsri_d */
    case 1342:  /* msa_binsr_b */
    case 1341:  /* msa_binsr_h */
    case 1340:  /* msa_binsr_w */
    case 1339:  /* msa_binsr_d */
    case 1338:  /* msa_binsli_b */
    case 1337:  /* msa_binsli_h */
    case 1336:  /* msa_binsli_w */
    case 1335:  /* msa_binsli_d */
    case 1334:  /* msa_binsl_b */
    case 1333:  /* msa_binsl_h */
    case 1332:  /* msa_binsl_w */
    case 1331:  /* msa_binsl_d */
    case 1198:  /* vec_permv16qi */
    case 1197:  /* vec_permv8hi */
    case 1196:  /* vec_permv4si */
    case 1195:  /* vec_permv2di */
    case 1194:  /* vec_permv4sf */
    case 1193:  /* vec_permv2df */
    case 1110:  /* *vec_setv4hi */
    case 990:  /* mips_dpsx_w_ph */
    case 989:  /* mips_dpax_w_ph */
    case 973:  /* mips_prepend */
    case 972:  /* mips_precr_sra_r_ph_w */
    case 971:  /* mips_precr_sra_ph_w */
    case 969:  /* mips_mulsa_w_ph */
    case 963:  /* mips_dps_w_ph */
    case 962:  /* mips_dpa_w_ph */
    case 958:  /* mips_balign */
    case 957:  /* mips_append */
    case 891:  /* mips_dpsu_h_qbr */
    case 890:  /* mips_dpsu_h_qbl */
    case 889:  /* mips_dpau_h_qbr */
    case 888:  /* mips_dpau_h_qbl */
    case 812:  /* mips_cabs_cond_ps */
    case 811:  /* mips_c_cond_ps */
    case 808:  /* mips_cabs_cond_d */
    case 807:  /* mips_cabs_cond_s */
    case 801:  /* mips_alnv_ps */
    case 797:  /* mips_cond_move_tf_ps */
    case 284:  /* mov_ldr */
    case 283:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1665:  /* msa_fexdo_h */
    case 1654:  /* msa_splat_b */
    case 1653:  /* msa_splat_h */
    case 1652:  /* msa_splat_w */
    case 1651:  /* msa_splat_d */
    case 1650:  /* msa_splat_w_f */
    case 1649:  /* msa_splat_d_f */
    case 1636:  /* msa_subsus_u_b */
    case 1635:  /* msa_subsus_u_h */
    case 1634:  /* msa_subsus_u_w */
    case 1633:  /* msa_subsus_u_d */
    case 1632:  /* msa_subsuu_s_b */
    case 1631:  /* msa_subsuu_s_h */
    case 1630:  /* msa_subsuu_s_w */
    case 1629:  /* msa_subsuu_s_d */
    case 1628:  /* msa_subs_u_b */
    case 1627:  /* msa_subs_u_h */
    case 1626:  /* msa_subs_u_w */
    case 1625:  /* msa_subs_u_d */
    case 1624:  /* msa_subs_s_b */
    case 1623:  /* msa_subs_s_h */
    case 1622:  /* msa_subs_s_w */
    case 1621:  /* msa_subs_s_d */
    case 1620:  /* msa_srlri_b */
    case 1619:  /* msa_srlri_h */
    case 1618:  /* msa_srlri_w */
    case 1617:  /* msa_srlri_d */
    case 1616:  /* msa_srlr_b */
    case 1615:  /* msa_srlr_h */
    case 1614:  /* msa_srlr_w */
    case 1613:  /* msa_srlr_d */
    case 1612:  /* msa_srari_b */
    case 1611:  /* msa_srari_h */
    case 1610:  /* msa_srari_w */
    case 1609:  /* msa_srari_d */
    case 1608:  /* msa_srar_b */
    case 1607:  /* msa_srar_h */
    case 1606:  /* msa_srar_w */
    case 1605:  /* msa_srar_d */
    case 1600:  /* msa_sat_u_b */
    case 1599:  /* msa_sat_u_h */
    case 1598:  /* msa_sat_u_w */
    case 1597:  /* msa_sat_u_d */
    case 1596:  /* msa_sat_s_b */
    case 1595:  /* msa_sat_s_h */
    case 1594:  /* msa_sat_s_w */
    case 1593:  /* msa_sat_s_d */
    case 1568:  /* msa_mulr_q_h */
    case 1567:  /* msa_mulr_q_w */
    case 1566:  /* msa_mul_q_h */
    case 1565:  /* msa_mul_q_w */
    case 1500:  /* msa_ftq_w */
    case 1499:  /* msa_ftq_h */
    case 1460:  /* msa_fexp2_w */
    case 1459:  /* msa_fexp2_d */
    case 1458:  /* msa_fslt_w */
    case 1457:  /* msa_fsle_w */
    case 1456:  /* msa_fsult_w */
    case 1455:  /* msa_fsule_w */
    case 1454:  /* msa_fsune_w */
    case 1453:  /* msa_fsueq_w */
    case 1452:  /* msa_fsne_w */
    case 1451:  /* msa_fseq_w */
    case 1450:  /* msa_fsor_w */
    case 1449:  /* msa_fsun_w */
    case 1448:  /* msa_fsaf_w */
    case 1447:  /* msa_fslt_d */
    case 1446:  /* msa_fsle_d */
    case 1445:  /* msa_fsult_d */
    case 1444:  /* msa_fsule_d */
    case 1443:  /* msa_fsune_d */
    case 1442:  /* msa_fsueq_d */
    case 1441:  /* msa_fsne_d */
    case 1440:  /* msa_fseq_d */
    case 1439:  /* msa_fsor_d */
    case 1438:  /* msa_fsun_d */
    case 1437:  /* msa_fsaf_d */
    case 1418:  /* msa_fcune_w */
    case 1417:  /* msa_fcune_d */
    case 1416:  /* msa_fcaf_w */
    case 1415:  /* msa_fcaf_d */
    case 1374:  /* msa_bseti_b */
    case 1373:  /* msa_bseti_h */
    case 1372:  /* msa_bseti_w */
    case 1371:  /* msa_bseti_d */
    case 1370:  /* msa_bset_b */
    case 1369:  /* msa_bset_h */
    case 1368:  /* msa_bset_w */
    case 1367:  /* msa_bset_d */
    case 1362:  /* msa_bnegi_b */
    case 1361:  /* msa_bnegi_h */
    case 1360:  /* msa_bnegi_w */
    case 1359:  /* msa_bnegi_d */
    case 1358:  /* msa_bneg_b */
    case 1357:  /* msa_bneg_h */
    case 1356:  /* msa_bneg_w */
    case 1355:  /* msa_bneg_d */
    case 1330:  /* msa_bclri_b */
    case 1329:  /* msa_bclri_h */
    case 1328:  /* msa_bclri_w */
    case 1327:  /* msa_bclri_d */
    case 1326:  /* msa_bclr_b */
    case 1325:  /* msa_bclr_h */
    case 1324:  /* msa_bclr_w */
    case 1323:  /* msa_bclr_d */
    case 1322:  /* msa_aver_u_b */
    case 1321:  /* msa_aver_u_h */
    case 1320:  /* msa_aver_u_w */
    case 1319:  /* msa_aver_u_d */
    case 1318:  /* msa_aver_s_b */
    case 1317:  /* msa_aver_s_h */
    case 1316:  /* msa_aver_s_w */
    case 1315:  /* msa_aver_s_d */
    case 1314:  /* msa_ave_u_b */
    case 1313:  /* msa_ave_u_h */
    case 1312:  /* msa_ave_u_w */
    case 1311:  /* msa_ave_u_d */
    case 1310:  /* msa_ave_s_b */
    case 1309:  /* msa_ave_s_h */
    case 1308:  /* msa_ave_s_w */
    case 1307:  /* msa_ave_s_d */
    case 1306:  /* msa_asub_u_b */
    case 1305:  /* msa_asub_u_h */
    case 1304:  /* msa_asub_u_w */
    case 1303:  /* msa_asub_u_d */
    case 1302:  /* msa_asub_s_b */
    case 1301:  /* msa_asub_s_h */
    case 1300:  /* msa_asub_s_w */
    case 1299:  /* msa_asub_s_d */
    case 1159:  /* vec_shr_di */
    case 1158:  /* vec_shr_v8qi */
    case 1157:  /* vec_shr_v4hi */
    case 1156:  /* vec_shr_v2si */
    case 1155:  /* vec_shl_di */
    case 1154:  /* vec_shl_v8qi */
    case 1153:  /* vec_shl_v4hi */
    case 1152:  /* vec_shl_v2si */
    case 1135:  /* loongson_psubd */
    case 1125:  /* loongson_pshufh */
    case 1124:  /* loongson_psadbh */
    case 1121:  /* loongson_pasubub */
    case 1120:  /* loongson_pmuluw */
    case 1118:  /* smulv4hi3_highpart */
    case 1117:  /* umulv4hi3_highpart */
    case 1111:  /* loongson_pmaddhw */
    case 1105:  /* loongson_pextrh */
    case 1104:  /* loongson_pcmpgtb */
    case 1103:  /* loongson_pcmpgth */
    case 1102:  /* loongson_pcmpgtw */
    case 1101:  /* loongson_pcmpeqb */
    case 1100:  /* loongson_pcmpeqh */
    case 1099:  /* loongson_pcmpeqw */
    case 1098:  /* loongson_pavgb */
    case 1097:  /* loongson_pavgh */
    case 1073:  /* loongson_paddd */
    case 988:  /* mips_subqh_r_w */
    case 987:  /* mips_subqh_w */
    case 986:  /* mips_subqh_r_ph */
    case 985:  /* mips_subqh_ph */
    case 984:  /* mips_addqh_r_w */
    case 983:  /* mips_addqh_w */
    case 982:  /* mips_addqh_r_ph */
    case 981:  /* mips_addqh_ph */
    case 980:  /* mips_subuh_r_qb */
    case 979:  /* mips_subuh_qb */
    case 976:  /* mips_shrl_ph */
    case 975:  /* mips_shra_r_qb */
    case 974:  /* mips_shra_qb */
    case 970:  /* mips_precr_qb_ph */
    case 956:  /* mips_adduh_r_qb */
    case 955:  /* mips_adduh_qb */
    case 923:  /* mips_shilo */
    case 916:  /* mips_packrl_ph */
    case 915:  /* mips_pick_qb */
    case 914:  /* mips_pick_ph */
    case 913:  /* mips_cmpgu_le_qb */
    case 912:  /* mips_cmpgu_lt_qb */
    case 911:  /* mips_cmpgu_eq_qb */
    case 902:  /* mips_insv */
    case 882:  /* mips_shra_r_ph */
    case 881:  /* mips_shra_r_w */
    case 880:  /* mips_shra_ph */
    case 879:  /* mips_shrl_qb */
    case 862:  /* mips_precrq_ph_w */
    case 861:  /* mips_precrq_qb_ph */
    case 857:  /* mips_modsub */
    case 844:  /* mips_recip2_ps */
    case 843:  /* mips_recip2_d */
    case 842:  /* mips_recip2_s */
    case 838:  /* mips_rsqrt2_ps */
    case 837:  /* mips_rsqrt2_d */
    case 836:  /* mips_rsqrt2_s */
    case 805:  /* mips_mulr_ps */
    case 802:  /* mips_addr_ps */
    case 649:  /* load_calldi */
    case 648:  /* load_callsi */
    case 630:  /* probe_stack_range_di */
    case 629:  /* probe_stack_range_si */
    case 424:  /* loadgp_rtp_di */
    case 423:  /* loadgp_rtp_si */
    case 419:  /* loadgp_newabi_di */
    case 418:  /* loadgp_newabi_si */
    case 410:  /* mthc1tf */
    case 409:  /* mthc1v8qi */
    case 408:  /* mthc1v4hi */
    case 407:  /* mthc1v2si */
    case 406:  /* mthc1v2sf */
    case 405:  /* mthc1di */
    case 404:  /* mthc1df */
    case 403:  /* store_wordtf */
    case 402:  /* store_wordv8qi */
    case 401:  /* store_wordv4hi */
    case 400:  /* store_wordv2si */
    case 399:  /* store_wordv2sf */
    case 398:  /* store_worddi */
    case 397:  /* store_worddf */
    case 396:  /* load_hightf */
    case 395:  /* load_highv8qi */
    case 394:  /* load_highv4hi */
    case 393:  /* load_highv2si */
    case 392:  /* load_highv2sf */
    case 391:  /* load_highdi */
    case 390:  /* load_highdf */
    case 382:  /* mthidi_ti */
    case 381:  /* mthisi_ti */
    case 380:  /* mthisi_di */
    case 302:  /* load_gotdi */
    case 301:  /* load_gotsi */
    case 286:  /* mov_sdl */
    case 285:  /* mov_swl */
    case 282:  /* mov_ldl */
    case 281:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 278:  /* *insvdi */
    case 277:  /* *insvsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 276:  /* *extzv_truncsi_exts */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 265:  /* fix_truncsfsi2_macro */
    case 263:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 213:  /* *mips.md:3524 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1670:  /* msa_fexupr_d */
    case 1668:  /* msa_fexupl_d */
    case 260:  /* *extendhi_truncateqi_exts */
    case 259:  /* *extenddi_truncatehi_exts */
    case 258:  /* *extendsi_truncatehi_exts */
    case 257:  /* *extenddi_truncateqi_exts */
    case 256:  /* *extendsi_truncateqi_exts */
    case 255:  /* *extendhi_truncateqi */
    case 254:  /* *extendsi_truncatehi */
    case 253:  /* *extendsi_truncateqi */
    case 252:  /* *extenddi_truncatehi */
    case 251:  /* *extenddi_truncateqi */
    case 234:  /* *zero_extendhi_truncqi */
    case 233:  /* *zero_extenddi_trunchi */
    case 232:  /* *zero_extendsi_trunchi */
    case 231:  /* *zero_extenddi_truncqi */
    case 230:  /* *zero_extendsi_truncqi */
    case 206:  /* *lshr32_truncsi */
    case 205:  /* *lshr32_trunchi */
    case 204:  /* *lshr32_truncqi */
    case 175:  /* *popcountdi2_trunc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 162:  /* *rsqrtv2sfa */
    case 161:  /* *rsqrtdfa */
    case 160:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1592:  /* popcountv16qi2 */
    case 1591:  /* popcountv8hi2 */
    case 1590:  /* popcountv4si2 */
    case 1589:  /* popcountv2di2 */
    case 1576:  /* clzv16qi2 */
    case 1575:  /* clzv8hi2 */
    case 1574:  /* clzv4si2 */
    case 1573:  /* clzv2di2 */
    case 1498:  /* fixuns_truncv4sfv4si2 */
    case 1497:  /* fixuns_truncv2dfv2di2 */
    case 1496:  /* fix_truncv4sfv4si2 */
    case 1495:  /* fix_truncv2dfv2di2 */
    case 1474:  /* msa_fill_b */
    case 1473:  /* msa_fill_h */
    case 1472:  /* msa_fill_w */
    case 1471:  /* msa_fill_d */
    case 1470:  /* msa_fill_w_f */
    case 1469:  /* msa_fill_d_f */
    case 1464:  /* floatunsv4siv4sf2 */
    case 1463:  /* floatunsv2div2df2 */
    case 1462:  /* floatv4siv4sf2 */
    case 1461:  /* floatv2div2df2 */
    case 1282:  /* sqrtv4sf2 */
    case 1281:  /* sqrtv2df2 */
    case 1256:  /* one_cmplv16qi2 */
    case 1255:  /* one_cmplv8hi2 */
    case 1254:  /* one_cmplv4si2 */
    case 1253:  /* one_cmplv2di2 */
    case 1167:  /* msa_vec_extract_w_f */
    case 1166:  /* msa_vec_extract_d_f */
    case 1162:  /* vec_loongson_extract_lo_v8qi */
    case 1161:  /* vec_loongson_extract_lo_v4hi */
    case 1160:  /* vec_loongson_extract_lo_v2si */
    case 1096:  /* one_cmplv8qi2 */
    case 1095:  /* one_cmplv4hi2 */
    case 1094:  /* one_cmplv2si2 */
    case 534:  /* *sgeu_didi */
    case 533:  /* *sge_didi */
    case 532:  /* *sgeu_sidi */
    case 531:  /* *sge_sidi */
    case 530:  /* *sgeu_disi */
    case 529:  /* *sge_disi */
    case 528:  /* *sgeu_sisi */
    case 527:  /* *sge_sisi */
    case 506:  /* *sne_zero_didi */
    case 505:  /* *sne_zero_sidi */
    case 504:  /* *sne_zero_disi */
    case 503:  /* *sne_zero_sisi */
    case 498:  /* *seq_zero_didi_mips16 */
    case 497:  /* *seq_zero_sidi_mips16 */
    case 496:  /* *seq_zero_disi_mips16 */
    case 495:  /* *seq_zero_sisi_mips16 */
    case 494:  /* *seq_zero_didi */
    case 493:  /* *seq_zero_sidi */
    case 492:  /* *seq_zero_disi */
    case 491:  /* *seq_zero_sisi */
    case 463:  /* bswapdi2 */
    case 462:  /* bswapsi2 */
    case 461:  /* bswaphi2 */
    case 300:  /* *got_pagedi */
    case 299:  /* *got_pagesi */
    case 294:  /* *xgot_hidi */
    case 293:  /* *xgot_hisi */
    case 289:  /* *lea_high64 */
    case 271:  /* floatdisf2 */
    case 270:  /* floatsisf2 */
    case 269:  /* floatdidf2 */
    case 268:  /* floatsidf2 */
    case 267:  /* fix_truncsfdi2 */
    case 266:  /* fix_truncdfdi2 */
    case 264:  /* fix_truncsfsi2_insn */
    case 262:  /* fix_truncdfsi2_insn */
    case 261:  /* extendsfdf2 */
    case 250:  /* *extendqihi2_seb */
    case 249:  /* *extendqihi2 */
    case 248:  /* *extendqihi2_mips16e */
    case 247:  /* *extendhidi2_seh */
    case 246:  /* *extendhisi2_seh */
    case 245:  /* *extendqidi2_seb */
    case 244:  /* *extendqisi2_seb */
    case 243:  /* *extendhidi2 */
    case 242:  /* *extendhisi2 */
    case 241:  /* *extendqidi2 */
    case 240:  /* *extendqisi2 */
    case 239:  /* *extendhidi2_mips16e */
    case 238:  /* *extendhisi2_mips16e */
    case 237:  /* *extendqidi2_mips16e */
    case 236:  /* *extendqisi2_mips16e */
    case 235:  /* extendsidi2 */
    case 229:  /* *zero_extendqihi2_mips16 */
    case 228:  /* *zero_extendqihi2 */
    case 227:  /* *zero_extendhidi2_mips16 */
    case 226:  /* *zero_extendhisi2_mips16 */
    case 225:  /* *zero_extendqidi2_mips16 */
    case 224:  /* *zero_extendqisi2_mips16 */
    case 223:  /* *zero_extendhidi2_mips16e */
    case 222:  /* *zero_extendhisi2_mips16e */
    case 221:  /* *zero_extendqidi2_mips16e */
    case 220:  /* *zero_extendqisi2_mips16e */
    case 219:  /* *zero_extendhidi2 */
    case 218:  /* *zero_extendhisi2 */
    case 217:  /* *zero_extendqidi2 */
    case 216:  /* *zero_extendqisi2 */
    case 215:  /* *zero_extendsidi2_dext */
    case 214:  /* *zero_extendsidi2 */
    case 200:  /* truncdisi2 */
    case 199:  /* truncdihi2 */
    case 198:  /* truncdiqi2 */
    case 197:  /* truncdfsf2 */
    case 182:  /* one_cmpldi2 */
    case 181:  /* one_cmplsi2 */
    case 180:  /* negv2sf2 */
    case 179:  /* negdf2 */
    case 178:  /* negsf2 */
    case 177:  /* negdi2 */
    case 176:  /* negsi2 */
    case 174:  /* popcountdi2 */
    case 173:  /* popcountsi2 */
    case 172:  /* ctzdi2 */
    case 171:  /* ctzsi2 */
    case 170:  /* clzdi2 */
    case 169:  /* clzsi2 */
    case 168:  /* absv2sf2 */
    case 167:  /* absdf2 */
    case 166:  /* abssf2 */
    case 159:  /* sqrtv2sf2 */
    case 158:  /* sqrtdf2 */
    case 157:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 826:  /* sungt_ps */
    case 825:  /* sunge_ps */
    case 824:  /* sgt_ps */
    case 823:  /* sge_ps */
    case 822:  /* sne_ps */
    case 821:  /* sltgt_ps */
    case 820:  /* sordered_ps */
    case 819:  /* sle_ps */
    case 818:  /* slt_ps */
    case 817:  /* seq_ps */
    case 816:  /* sunle_ps */
    case 815:  /* sunlt_ps */
    case 814:  /* suneq_ps */
    case 813:  /* sunordered_ps */
    case 148:  /* udivmoddi4_hilo_ti */
    case 147:  /* divmoddi4_hilo_ti */
    case 146:  /* udivmodsi4_hilo_ti */
    case 145:  /* divmodsi4_hilo_ti */
    case 144:  /* udivmodsi4_hilo_di */
    case 143:  /* divmodsi4_hilo_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 142:  /* udivmoddi4_mips16 */
    case 141:  /* udivmodsi4_mips16 */
    case 138:  /* divmoddi4_mips16 */
    case 137:  /* divmodsi4_mips16 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 140:  /* *udivmoddi4 */
    case 139:  /* *udivmodsi4 */
    case 136:  /* *divmoddi4 */
    case 135:  /* *divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1224:  /* msa_msubv_b */
    case 1223:  /* msa_msubv_h */
    case 1222:  /* msa_msubv_w */
    case 1221:  /* msa_msubv_d */
    case 128:  /* *nmsub4v2sf_fastmath */
    case 127:  /* *nmsub4df_fastmath */
    case 126:  /* *nmsub4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 125:  /* *nmadd4v2sf_fastmath */
    case 124:  /* *nmadd4df_fastmath */
    case 123:  /* *nmadd4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 122:  /* *nmsub4v2sf */
    case 121:  /* *nmsub4df */
    case 120:  /* *nmsub4sf */
    case 119:  /* *nmadd4v2sf */
    case 118:  /* *nmadd4df */
    case 117:  /* *nmadd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1220:  /* msa_maddv_b */
    case 1219:  /* msa_maddv_h */
    case 1218:  /* msa_maddv_w */
    case 1217:  /* msa_maddv_d */
    case 454:  /* dlsa */
    case 453:  /* lsa */
    case 280:  /* *cinsdi */
    case 279:  /* *cinssi */
    case 116:  /* *msub4v2sf */
    case 115:  /* *msub4df */
    case 114:  /* *msub4sf */
    case 113:  /* *madd4v2sf */
    case 112:  /* *madd4df */
    case 111:  /* *madd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 110:  /* *fnmsv2sf4_nmadd4 */
    case 109:  /* *fnmsdf4_nmadd4 */
    case 108:  /* *fnmssf4_nmadd4 */
    case 107:  /* *fnmsv2sf4_nmadd3 */
    case 106:  /* *fnmsdf4_nmadd3 */
    case 105:  /* *fnmssf4_nmadd3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1280:  /* fnmav4sf4 */
    case 1279:  /* fnmav2df4 */
    case 1181:  /* msa_insve_w_f_scalar */
    case 1180:  /* msa_insve_d_f_scalar */
    case 1173:  /* msa_insert_b */
    case 1172:  /* msa_insert_h */
    case 1171:  /* msa_insert_w */
    case 1170:  /* msa_insert_d */
    case 1169:  /* msa_insert_w_f */
    case 1168:  /* msa_insert_d_f */
    case 696:  /* *seldf */
    case 695:  /* *selsf */
    case 694:  /* *selnedi_using_di */
    case 693:  /* *seleqdi_using_di */
    case 692:  /* *selnesi_using_di */
    case 691:  /* *seleqsi_using_di */
    case 690:  /* *selnedi_using_si */
    case 689:  /* *seleqdi_using_si */
    case 688:  /* *selnesi_using_si */
    case 687:  /* *seleqsi_using_si */
    case 104:  /* *fnmav2sf4_nmsub4 */
    case 103:  /* *fnmadf4_nmsub4 */
    case 102:  /* *fnmasf4_nmsub4 */
    case 101:  /* *fnmav2sf4_nmsub3 */
    case 100:  /* *fnmadf4_nmsub3 */
    case 99:  /* *fnmasf4_nmsub3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 98:  /* *fmsv2sf4_msub4 */
    case 97:  /* *fmsdf4_msub4 */
    case 96:  /* *fmssf4_msub4 */
    case 95:  /* *fmsv2sf4_msub3 */
    case 94:  /* *fmsdf4_msub3 */
    case 93:  /* *fmssf4_msub3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1278:  /* fmav4sf4 */
    case 1277:  /* fmav2df4 */
    case 680:  /* *movdi_on_di_ne */
    case 679:  /* *movsi_on_di_ne */
    case 678:  /* *movdi_on_si_ne */
    case 677:  /* *movsi_on_si_ne */
    case 275:  /* *extzvdi */
    case 274:  /* *extzvsi */
    case 273:  /* *extvdi */
    case 272:  /* *extvsi */
    case 92:  /* *fmav2sf4_maddf */
    case 91:  /* *fmadf4_maddf */
    case 90:  /* *fmasf4_maddf */
    case 89:  /* *fmav2sf4_madd4 */
    case 88:  /* *fmadf4_madd4 */
    case 87:  /* *fmasf4_madd4 */
    case 86:  /* *fmav2sf4_madd3 */
    case 85:  /* *fmadf4_madd3 */
    case 84:  /* *fmasf4_madd3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 83:  /* umaddsidi4 */
    case 82:  /* maddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 81:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 72:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 71:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 76:  /* umuldi3_highpart_internal */
    case 75:  /* smuldi3_highpart_internal */
    case 70:  /* umulsi3_highpart_mulhi_internal */
    case 69:  /* smulsi3_highpart_mulhi_internal */
    case 68:  /* umulsi3_highpart_internal */
    case 67:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 74:  /* umuldi3_highpart_r6 */
    case 73:  /* smuldi3_highpart_r6 */
    case 66:  /* umulsi3_highpart_r6 */
    case 65:  /* smulsi3_highpart_r6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 64:  /* umsubsidi4 */
    case 63:  /* msubsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 62:  /* *mulsu_di */
    case 61:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 58:  /* umulsidi3_64bit_hilo */
    case 57:  /* mulsidi3_64bit_hilo */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 56:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 80:  /* umulditi3_r4000 */
    case 79:  /* mulditi3_r4000 */
    case 59:  /* mulsidi3_64bit_dmul */
    case 54:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1666:  /* vec_pack_trunc_v2df */
    case 1580:  /* msa_nor_b */
    case 1579:  /* msa_nor_h */
    case 1578:  /* msa_nor_w */
    case 1577:  /* msa_nor_d */
    case 1290:  /* msa_adds_a_b */
    case 1289:  /* msa_adds_a_h */
    case 1288:  /* msa_adds_a_w */
    case 1287:  /* msa_adds_a_d */
    case 1286:  /* msa_add_a_b */
    case 1285:  /* msa_add_a_h */
    case 1284:  /* msa_add_a_w */
    case 1283:  /* msa_add_a_d */
    case 1165:  /* vec_pack_trunc_v8hi */
    case 1164:  /* vec_pack_trunc_v4si */
    case 1163:  /* vec_pack_trunc_v2di */
    case 1093:  /* *loongson_nor */
    case 1092:  /* *loongson_nor */
    case 1091:  /* *loongson_nor */
    case 1069:  /* vec_pack_usat_v4hi */
    case 1068:  /* vec_pack_ssat_v4hi */
    case 1067:  /* vec_pack_ssat_v2si */
    case 196:  /* *nordi3 */
    case 195:  /* *norsi3 */
    case 78:  /* umulditi3_internal */
    case 77:  /* mulditi3_internal */
    case 60:  /* mulsidi3_64bit_r6dmul */
    case 52:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 50:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 48:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 47:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 49:  /* *mul_sub_si */
    case 46:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 45:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 44:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 43:  /* *mul_acc_si_r3900 */
    case 42:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 41:  /* muldi3_r4000 */
    case 40:  /* mulsi3_r4000 */
    case 37:  /* muldi3_mul3 */
    case 36:  /* mulsi3_mul3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 950:  /* *mips_lwux_di_ext */
    case 949:  /* *mips_lwx_di_ext */
    case 948:  /* *mips_lwux_si_ext */
    case 947:  /* *mips_lwx_si_ext */
    case 942:  /* mips_lhux_extdi_di */
    case 941:  /* mips_lhx_extdi_di */
    case 940:  /* mips_lhux_extsi_di */
    case 939:  /* mips_lhx_extsi_di */
    case 938:  /* mips_lbux_extdi_di */
    case 937:  /* mips_lbx_extdi_di */
    case 936:  /* mips_lbux_extsi_di */
    case 935:  /* mips_lbx_extsi_di */
    case 934:  /* mips_lhux_extdi_si */
    case 933:  /* mips_lhx_extdi_si */
    case 932:  /* mips_lhux_extsi_si */
    case 931:  /* mips_lhx_extsi_si */
    case 930:  /* mips_lbux_extdi_si */
    case 929:  /* mips_lbx_extdi_si */
    case 928:  /* mips_lbux_extsi_si */
    case 927:  /* mips_lbx_extsi_si */
    case 22:  /* *baddu_didi */
    case 21:  /* *baddu_disi */
    case 20:  /* *baddu_si_el */
    case 19:  /* *baddu_si_eb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 1588:  /* msa_pckod_w_f */
    case 1587:  /* msa_pckod_w */
    case 1586:  /* msa_pckod_h */
    case 1585:  /* msa_pckod_b */
    case 1584:  /* msa_pckev_w_f */
    case 1583:  /* msa_pckev_w */
    case 1582:  /* msa_pckev_h */
    case 1581:  /* msa_pckev_b */
    case 1532:  /* msa_ilvr_d_f */
    case 1531:  /* msa_ilvr_d */
    case 1530:  /* msa_ilvr_w_f */
    case 1529:  /* msa_ilvr_w */
    case 1528:  /* msa_ilvr_h */
    case 1527:  /* msa_ilvr_b */
    case 1526:  /* msa_ilvod_w_f */
    case 1525:  /* msa_ilvod_w */
    case 1524:  /* msa_ilvod_h */
    case 1523:  /* msa_ilvod_b */
    case 1522:  /* msa_ilvl_d_f */
    case 1521:  /* msa_ilvl_d */
    case 1520:  /* msa_ilvl_w_f */
    case 1519:  /* msa_ilvl_w */
    case 1518:  /* msa_ilvl_h */
    case 1517:  /* msa_ilvl_b */
    case 1516:  /* msa_ilvev_w_f */
    case 1515:  /* msa_ilvev_w */
    case 1514:  /* msa_ilvev_h */
    case 1513:  /* msa_ilvev_b */
    case 1151:  /* *loongson_punpcklwd_hi */
    case 1150:  /* *loongson_punpcklwd_qi */
    case 1149:  /* loongson_punpcklwd */
    case 1148:  /* *loongson_punpcklhw_qi */
    case 1147:  /* loongson_punpcklhw */
    case 1146:  /* loongson_punpcklbh */
    case 1145:  /* loongson_punpckhwd_hi */
    case 1144:  /* loongson_punpckhwd_qi */
    case 1143:  /* loongson_punpckhwd */
    case 1142:  /* loongson_punpckhhw_qi */
    case 1141:  /* loongson_punpckhhw */
    case 1140:  /* loongson_punpckhbh */
    case 1109:  /* loongson_pinsrh_3 */
    case 1108:  /* loongson_pinsrh_2 */
    case 1107:  /* loongson_pinsrh_1 */
    case 1106:  /* loongson_pinsrh_0 */
    case 946:  /* mips_ldx_di */
    case 945:  /* mips_lwx_di */
    case 944:  /* mips_ldx_si */
    case 943:  /* mips_lwx_si */
    case 449:  /* *lshrsi3_extend */
    case 448:  /* *ashrsi3_extend */
    case 447:  /* *ashlsi3_extend */
    case 336:  /* *ldxc1_di */
    case 335:  /* *ldxc1_di */
    case 334:  /* *lwxc1_di */
    case 333:  /* *ldxc1_si */
    case 332:  /* *ldxc1_si */
    case 331:  /* *lwxc1_si */
    case 212:  /* *lshr_truncsi_exts */
    case 211:  /* *ashr_truncsi_exts */
    case 210:  /* *lshr_trunchi_exts */
    case 209:  /* *ashr_trunchi_exts */
    case 208:  /* *lshr_truncqi_exts */
    case 207:  /* *ashr_truncqi_exts */
    case 203:  /* *ashr_truncsi */
    case 202:  /* *ashr_trunchi */
    case 201:  /* *ashr_truncqi */
    case 165:  /* *rsqrtv2sfb */
    case 164:  /* *rsqrtdfb */
    case 163:  /* *rsqrtsfb */
    case 28:  /* *subsi3_extended */
    case 18:  /* *addsi3_extended_mips16 */
    case 17:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1604:  /* msa_shf_w_f */
    case 1603:  /* msa_shf_b */
    case 1602:  /* msa_shf_h */
    case 1601:  /* msa_shf_w */
    case 1560:  /* uminv16qi3 */
    case 1559:  /* uminv8hi3 */
    case 1558:  /* uminv4si3 */
    case 1557:  /* uminv2di3 */
    case 1556:  /* sminv16qi3 */
    case 1555:  /* sminv8hi3 */
    case 1554:  /* sminv4si3 */
    case 1553:  /* sminv2di3 */
    case 1548:  /* umaxv16qi3 */
    case 1547:  /* umaxv8hi3 */
    case 1546:  /* umaxv4si3 */
    case 1545:  /* umaxv2di3 */
    case 1544:  /* smaxv16qi3 */
    case 1543:  /* smaxv8hi3 */
    case 1542:  /* smaxv4si3 */
    case 1541:  /* smaxv2di3 */
    case 1482:  /* sminv4sf3 */
    case 1481:  /* sminv2df3 */
    case 1478:  /* smaxv4sf3 */
    case 1477:  /* smaxv2df3 */
    case 1436:  /* msa_fcult_w */
    case 1435:  /* msa_fcule_w */
    case 1434:  /* msa_fcueq_w */
    case 1433:  /* msa_fclt_w */
    case 1432:  /* msa_fcle_w */
    case 1431:  /* msa_fcne_w */
    case 1430:  /* msa_fceq_w */
    case 1429:  /* msa_fcor_w */
    case 1428:  /* msa_fcun_w */
    case 1427:  /* msa_fcult_d */
    case 1426:  /* msa_fcule_d */
    case 1425:  /* msa_fcueq_d */
    case 1424:  /* msa_fclt_d */
    case 1423:  /* msa_fcle_d */
    case 1422:  /* msa_fcne_d */
    case 1421:  /* msa_fceq_d */
    case 1420:  /* msa_fcor_d */
    case 1419:  /* msa_fcun_d */
    case 1394:  /* msa_clt_u_b */
    case 1393:  /* msa_clt_s_b */
    case 1392:  /* msa_cle_u_b */
    case 1391:  /* msa_cle_s_b */
    case 1390:  /* msa_ceq_b */
    case 1389:  /* msa_clt_u_h */
    case 1388:  /* msa_clt_s_h */
    case 1387:  /* msa_cle_u_h */
    case 1386:  /* msa_cle_s_h */
    case 1385:  /* msa_ceq_h */
    case 1384:  /* msa_clt_u_w */
    case 1383:  /* msa_clt_s_w */
    case 1382:  /* msa_cle_u_w */
    case 1381:  /* msa_cle_s_w */
    case 1380:  /* msa_ceq_w */
    case 1379:  /* msa_clt_u_d */
    case 1378:  /* msa_clt_s_d */
    case 1377:  /* msa_cle_u_d */
    case 1376:  /* msa_cle_s_d */
    case 1375:  /* msa_ceq_d */
    case 1298:  /* usaddv16qi3 */
    case 1297:  /* usaddv8hi3 */
    case 1296:  /* usaddv4si3 */
    case 1295:  /* usaddv2di3 */
    case 1294:  /* ssaddv16qi3 */
    case 1293:  /* ssaddv8hi3 */
    case 1292:  /* ssaddv4si3 */
    case 1291:  /* ssaddv2di3 */
    case 1276:  /* divv4sf3 */
    case 1275:  /* divv2df3 */
    case 1274:  /* mulv4sf3 */
    case 1273:  /* mulv2df3 */
    case 1272:  /* subv4sf3 */
    case 1271:  /* subv2df3 */
    case 1270:  /* addv4sf3 */
    case 1269:  /* addv2df3 */
    case 1268:  /* vashlv16qi3 */
    case 1267:  /* vashlv8hi3 */
    case 1266:  /* vashlv4si3 */
    case 1265:  /* vashlv2di3 */
    case 1264:  /* vashrv16qi3 */
    case 1263:  /* vashrv8hi3 */
    case 1262:  /* vashrv4si3 */
    case 1261:  /* vashrv2di3 */
    case 1260:  /* vlshrv16qi3 */
    case 1259:  /* vlshrv8hi3 */
    case 1258:  /* vlshrv4si3 */
    case 1257:  /* vlshrv2di3 */
    case 1252:  /* andv16qi3 */
    case 1251:  /* andv8hi3 */
    case 1250:  /* andv4si3 */
    case 1249:  /* andv2di3 */
    case 1248:  /* iorv16qi3 */
    case 1247:  /* iorv8hi3 */
    case 1246:  /* iorv4si3 */
    case 1245:  /* iorv2di3 */
    case 1244:  /* xorv16qi3 */
    case 1243:  /* xorv8hi3 */
    case 1242:  /* xorv4si3 */
    case 1241:  /* xorv2di3 */
    case 1240:  /* umodv16qi3 */
    case 1239:  /* umodv8hi3 */
    case 1238:  /* umodv4si3 */
    case 1237:  /* umodv2di3 */
    case 1236:  /* modv16qi3 */
    case 1235:  /* modv8hi3 */
    case 1234:  /* modv4si3 */
    case 1233:  /* modv2di3 */
    case 1232:  /* udivv16qi3 */
    case 1231:  /* udivv8hi3 */
    case 1230:  /* udivv4si3 */
    case 1229:  /* udivv2di3 */
    case 1228:  /* divv16qi3 */
    case 1227:  /* divv8hi3 */
    case 1226:  /* divv4si3 */
    case 1225:  /* divv2di3 */
    case 1216:  /* mulv16qi3 */
    case 1215:  /* mulv8hi3 */
    case 1214:  /* mulv4si3 */
    case 1213:  /* mulv2di3 */
    case 1212:  /* subv16qi3 */
    case 1211:  /* subv8hi3 */
    case 1210:  /* subv4si3 */
    case 1209:  /* subv2di3 */
    case 1208:  /* addv16qi3 */
    case 1207:  /* addv8hi3 */
    case 1206:  /* addv4si3 */
    case 1205:  /* addv2di3 */
    case 1139:  /* ussubv8qi3 */
    case 1138:  /* ussubv4hi3 */
    case 1137:  /* sssubv8qi3 */
    case 1136:  /* sssubv4hi3 */
    case 1134:  /* subv8qi3 */
    case 1133:  /* subv4hi3 */
    case 1132:  /* subv2si3 */
    case 1131:  /* lshrv4hi3 */
    case 1130:  /* lshrv2si3 */
    case 1129:  /* ashrv4hi3 */
    case 1128:  /* ashrv2si3 */
    case 1127:  /* ashlv4hi3 */
    case 1126:  /* ashlv2si3 */
    case 1119:  /* mulv4hi3 */
    case 1115:  /* uminv8qi3 */
    case 1114:  /* sminv4hi3 */
    case 1113:  /* umaxv8qi3 */
    case 1112:  /* smaxv4hi3 */
    case 1090:  /* xorv8qi3 */
    case 1089:  /* xorv4hi3 */
    case 1088:  /* xorv2si3 */
    case 1087:  /* iorv8qi3 */
    case 1086:  /* iorv4hi3 */
    case 1085:  /* iorv2si3 */
    case 1084:  /* andv8qi3 */
    case 1083:  /* andv4hi3 */
    case 1082:  /* andv2si3 */
    case 1077:  /* usaddv8qi3 */
    case 1076:  /* usaddv4hi3 */
    case 1075:  /* ssaddv8qi3 */
    case 1074:  /* ssaddv4hi3 */
    case 1072:  /* addv8qi3 */
    case 1071:  /* addv4hi3 */
    case 1070:  /* addv2si3 */
    case 1066:  /* *vec_concatv2si */
    case 1034:  /* subuda3 */
    case 1033:  /* subusa3 */
    case 1032:  /* subuha3 */
    case 1031:  /* subda3 */
    case 1030:  /* subsa3 */
    case 1029:  /* subha3 */
    case 1028:  /* subudq3 */
    case 1027:  /* subusq3 */
    case 1026:  /* subuhq3 */
    case 1025:  /* subuqq3 */
    case 1024:  /* subdq3 */
    case 1023:  /* subsq3 */
    case 1022:  /* subhq3 */
    case 1021:  /* subqq3 */
    case 1008:  /* adduda3 */
    case 1007:  /* addusa3 */
    case 1006:  /* adduha3 */
    case 1005:  /* addda3 */
    case 1004:  /* addsa3 */
    case 1003:  /* addha3 */
    case 1002:  /* addudq3 */
    case 1001:  /* addusq3 */
    case 1000:  /* adduhq3 */
    case 999:  /* adduqq3 */
    case 998:  /* adddq3 */
    case 997:  /* addsq3 */
    case 996:  /* addhq3 */
    case 995:  /* addqq3 */
    case 799:  /* vec_concatv2sf */
    case 616:  /* sungt_df_using_ccf */
    case 615:  /* sunge_df_using_ccf */
    case 614:  /* sgt_df_using_ccf */
    case 613:  /* sge_df_using_ccf */
    case 612:  /* sungt_sf_using_ccf */
    case 611:  /* sunge_sf_using_ccf */
    case 610:  /* sgt_sf_using_ccf */
    case 609:  /* sge_sf_using_ccf */
    case 608:  /* sungt_df_using_cc */
    case 607:  /* sunge_df_using_cc */
    case 606:  /* sgt_df_using_cc */
    case 605:  /* sge_df_using_cc */
    case 604:  /* sungt_sf_using_cc */
    case 603:  /* sunge_sf_using_cc */
    case 602:  /* sgt_sf_using_cc */
    case 601:  /* sge_sf_using_cc */
    case 600:  /* sne_df_using_ccf */
    case 599:  /* sltgt_df_using_ccf */
    case 598:  /* sordered_df_using_ccf */
    case 597:  /* sle_df_using_ccf */
    case 596:  /* slt_df_using_ccf */
    case 595:  /* seq_df_using_ccf */
    case 594:  /* sunle_df_using_ccf */
    case 593:  /* sunlt_df_using_ccf */
    case 592:  /* suneq_df_using_ccf */
    case 591:  /* sunordered_df_using_ccf */
    case 590:  /* sne_sf_using_ccf */
    case 589:  /* sltgt_sf_using_ccf */
    case 588:  /* sordered_sf_using_ccf */
    case 587:  /* sle_sf_using_ccf */
    case 586:  /* slt_sf_using_ccf */
    case 585:  /* seq_sf_using_ccf */
    case 584:  /* sunle_sf_using_ccf */
    case 583:  /* sunlt_sf_using_ccf */
    case 582:  /* suneq_sf_using_ccf */
    case 581:  /* sunordered_sf_using_ccf */
    case 580:  /* sle_df_using_cc */
    case 579:  /* slt_df_using_cc */
    case 578:  /* seq_df_using_cc */
    case 577:  /* sunle_df_using_cc */
    case 576:  /* sunlt_df_using_cc */
    case 575:  /* suneq_df_using_cc */
    case 574:  /* sunordered_df_using_cc */
    case 573:  /* sle_sf_using_cc */
    case 572:  /* slt_sf_using_cc */
    case 571:  /* seq_sf_using_cc */
    case 570:  /* sunle_sf_using_cc */
    case 569:  /* sunlt_sf_using_cc */
    case 568:  /* suneq_sf_using_cc */
    case 567:  /* sunordered_sf_using_cc */
    case 566:  /* *sleu_didi_mips16 */
    case 565:  /* *sle_didi_mips16 */
    case 564:  /* *sleu_sidi_mips16 */
    case 563:  /* *sle_sidi_mips16 */
    case 562:  /* *sleu_disi_mips16 */
    case 561:  /* *sle_disi_mips16 */
    case 560:  /* *sleu_sisi_mips16 */
    case 559:  /* *sle_sisi_mips16 */
    case 558:  /* *sleu_didi */
    case 557:  /* *sle_didi */
    case 556:  /* *sleu_sidi */
    case 555:  /* *sle_sidi */
    case 554:  /* *sleu_disi */
    case 553:  /* *sle_disi */
    case 552:  /* *sleu_sisi */
    case 551:  /* *sle_sisi */
    case 550:  /* *sltu_didi_mips16 */
    case 549:  /* *slt_didi_mips16 */
    case 548:  /* *sltu_sidi_mips16 */
    case 547:  /* *slt_sidi_mips16 */
    case 546:  /* *sltu_disi_mips16 */
    case 545:  /* *slt_disi_mips16 */
    case 544:  /* *sltu_sisi_mips16 */
    case 543:  /* *slt_sisi_mips16 */
    case 542:  /* *sltu_didi */
    case 541:  /* *slt_didi */
    case 540:  /* *sltu_sidi */
    case 539:  /* *slt_sidi */
    case 538:  /* *sltu_disi */
    case 537:  /* *slt_disi */
    case 536:  /* *sltu_sisi */
    case 535:  /* *slt_sisi */
    case 526:  /* *sgtu_didi_mips16 */
    case 525:  /* *sgt_didi_mips16 */
    case 524:  /* *sgtu_sidi_mips16 */
    case 523:  /* *sgt_sidi_mips16 */
    case 522:  /* *sgtu_disi_mips16 */
    case 521:  /* *sgt_disi_mips16 */
    case 520:  /* *sgtu_sisi_mips16 */
    case 519:  /* *sgt_sisi_mips16 */
    case 518:  /* *sgtu_didi */
    case 517:  /* *sgt_didi */
    case 516:  /* *sgtu_sidi */
    case 515:  /* *sgt_sidi */
    case 514:  /* *sgtu_disi */
    case 513:  /* *sgt_disi */
    case 512:  /* *sgtu_sisi */
    case 511:  /* *sgt_sisi */
    case 510:  /* *sne_didi_sne */
    case 509:  /* *sne_sidi_sne */
    case 508:  /* *sne_disi_sne */
    case 507:  /* *sne_sisi_sne */
    case 502:  /* *seq_didi_seq */
    case 501:  /* *seq_sidi_seq */
    case 500:  /* *seq_disi_seq */
    case 499:  /* *seq_sisi_seq */
    case 460:  /* rotrdi3 */
    case 459:  /* rotrsi3 */
    case 458:  /* *mips.md:5842 */
    case 457:  /* *lshrdi3_mips16 */
    case 456:  /* *ashrdi3_mips16 */
    case 455:  /* *ashldi3_mips16 */
    case 452:  /* *lshrsi3_mips16 */
    case 451:  /* *ashrsi3_mips16 */
    case 450:  /* *ashlsi3_mips16 */
    case 446:  /* *lshrdi3 */
    case 445:  /* *ashrdi3 */
    case 444:  /* *ashldi3 */
    case 443:  /* *lshrsi3 */
    case 442:  /* *ashrsi3 */
    case 441:  /* *ashlsi3 */
    case 306:  /* *lowdi_mips16 */
    case 305:  /* *lowsi_mips16 */
    case 304:  /* *lowdi */
    case 303:  /* *lowsi */
    case 296:  /* *xgot_lodi */
    case 295:  /* *xgot_losi */
    case 194:  /* *xordi3_mips16 */
    case 193:  /* *xorsi3_mips16 */
    case 192:  /* *xordi3 */
    case 191:  /* *xorsi3 */
    case 190:  /* *iordi3_mips16 */
    case 189:  /* *iorsi3_mips16 */
    case 188:  /* *iordi3 */
    case 187:  /* *iorsi3 */
    case 186:  /* *anddi3_mips16 */
    case 185:  /* *andsi3_mips16 */
    case 184:  /* *anddi3 */
    case 183:  /* *andsi3 */
    case 156:  /* umoddi3 */
    case 155:  /* moddi3 */
    case 154:  /* umodsi3 */
    case 153:  /* modsi3 */
    case 152:  /* udivdi3 */
    case 151:  /* divdi3 */
    case 150:  /* udivsi3 */
    case 149:  /* divsi3 */
    case 134:  /* *recipv2sf3 */
    case 133:  /* *recipdf3 */
    case 132:  /* *recipsf3 */
    case 131:  /* *divv2sf3 */
    case 130:  /* *divdf3 */
    case 129:  /* *divsf3 */
    case 39:  /* muldi3_internal */
    case 38:  /* mulsi3_internal */
    case 35:  /* muldi3_mul3_nohilo */
    case 34:  /* mulsi3_mul3_nohilo */
    case 33:  /* mulv2sf3 */
    case 32:  /* *muldf3_r4300 */
    case 31:  /* *mulsf3_r4300 */
    case 30:  /* *muldf3 */
    case 29:  /* *mulsf3 */
    case 27:  /* subdi3 */
    case 26:  /* subsi3 */
    case 25:  /* subv2sf3 */
    case 24:  /* subdf3 */
    case 23:  /* subsf3 */
    case 16:  /* *adddi3_mips16 */
    case 15:  /* *addsi3_mips16 */
    case 14:  /* *adddi3 */
    case 13:  /* *addsi3 */
    case 12:  /* addv2sf3 */
    case 11:  /* adddf3 */
    case 10:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *conditional_trapdi */
    case 8:  /* *conditional_trapsi */
    case 7:  /* *conditional_trap_regdi */
    case 6:  /* *conditional_trap_regsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 707:  /* *tls_get_tp_di_split */
    case 706:  /* *tls_get_tp_si_split */
    case 670:  /* insn_pseudo */
    case 669:  /* hazard_nop */
    case 668:  /* nop */
    case 651:  /* update_got_version */
    case 650:  /* set_got_version */
    case 638:  /* mips_ehb */
    case 637:  /* mips_di */
    case 636:  /* mips_deret */
    case 635:  /* mips_eret */
    case 632:  /* *simple_return */
    case 631:  /* *return */
    case 628:  /* blockage */
    case 440:  /* r10k_cache_barrier */
    case 438:  /* clear_hazard_di */
    case 437:  /* clear_hazard_si */
    case 433:  /* sync */
    case 422:  /* loadgp_blockage */
    case 5:  /* trap */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 1:  /* ls2_alu1_turn_enabled_insn */
      break;

    }
}
