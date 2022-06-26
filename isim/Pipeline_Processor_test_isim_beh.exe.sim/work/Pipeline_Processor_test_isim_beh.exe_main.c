/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_15378877601697358921_3385901664_init();
    work_m_14731547325049785591_1789859804_init();
    work_m_06103334905878815055_1753328941_init();
    work_m_17831851537219109985_0405948279_init();
    work_m_05907457841108780762_3865600289_init();
    work_m_12926411539576915697_0913358870_init();
    work_m_04529443967645172100_2123150820_init();
    work_m_08428464672390951211_1975530136_init();
    work_m_01478480920471354646_2864712000_init();
    work_m_15234291853595302512_1684398682_init();
    work_m_01220988358787426460_4205540194_init();
    work_m_14194810522154869712_3901337038_init();
    work_m_17831851537219109985_1316587054_init();
    work_m_13087285412708845455_3009614110_init();
    work_m_02569978864830345758_2772571206_init();
    work_m_00435978956887539825_1832149579_init();
    work_m_14925882996472944175_0385743963_init();
    work_m_00230171813973384942_0886308060_init();
    work_m_15162932280096632331_2417079276_init();
    work_m_03096806563530953032_1053850373_init();
    work_m_13284039158408130490_1124448613_init();
    work_m_15627670832067717763_4288183145_init();
    work_m_16827457929943398231_1742042216_init();
    work_m_14434527572502700242_1419375250_init();
    work_m_18380708904122876286_0198859634_init();
    work_m_16564993964900900984_0072978727_init();
    work_m_16639470706427968502_3593828263_init();
    work_m_08549011747541008851_3378300423_init();
    work_m_13476073014776191347_1187996756_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13476073014776191347_1187996756");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
