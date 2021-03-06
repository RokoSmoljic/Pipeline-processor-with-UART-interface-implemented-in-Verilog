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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Virtual_Machine_Shared_Folder/PDS_project_pipeline_processor/Pipeline_processor/Condition_Checker.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3248);
    *((int *)t2) = 1;
    t3 = (t0 + 2960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB19;

LAB16:    if (t21 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t11) = 1;

LAB19:    memset(t10, 0, 8);
    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t25) != 0)
        goto LAB22;

LAB23:    t32 = (t10 + 4);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB24;

LAB25:    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t32) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t10) > 0)
        goto LAB30;

LAB31:    memcpy(t9, t41, 8);

LAB32:    t42 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t42, t9, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB34;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB36:    memset(t10, 0, 8);
    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t25) != 0)
        goto LAB39;

LAB40:    t32 = (t10 + 4);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB41;

LAB42:    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t32) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t10) > 0)
        goto LAB47;

LAB48:    memcpy(t9, t41, 8);

LAB49:    t42 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t42, t9, 0, 0, 1, 0LL);
    goto LAB15;

LAB18:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t10) = 1;
    goto LAB23;

LAB22:    t31 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB23;

LAB24:    t36 = ((char*)((ng3)));
    goto LAB25;

LAB26:    t41 = ((char*)((ng1)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t9, 32, t36, 32, t41, 32);
    goto LAB32;

LAB30:    memcpy(t9, t36, 8);
    goto LAB32;

LAB34:    *((unsigned int *)t11) = 1;
    goto LAB36;

LAB35:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB39:    t31 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB40;

LAB41:    t36 = ((char*)((ng3)));
    goto LAB42;

LAB43:    t41 = ((char*)((ng1)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t9, 32, t36, 32, t41, 32);
    goto LAB49;

LAB47:    memcpy(t9, t36, 8);
    goto LAB49;

}


extern void work_m_02569978864830345758_2772571206_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_32_1};
	xsi_register_didat("work_m_02569978864830345758_2772571206", "isim/Pipeline_Processor_test_isim_beh.exe.sim/work/m_02569978864830345758_2772571206.didat");
	xsi_register_executes(pe);
}
