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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "a = %d ,b = %d,c = %d,d = %d and output = %d\n";
static const char *ng1 = "E:/Verilog programs/test_prep/test_prep_test.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};

void Monitor_66_2(char *);
void Monitor_66_2(char *);


static void Monitor_66_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 828);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1012);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1104);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);

LAB1:    return;
}

static void Initial_46_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng1);

LAB4:    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng1);
    xsi_set_current_line(58, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(59, ng1);

LAB9:    xsi_set_current_line(60, ng1);
    t13 = (t0 + 1620);
    xsi_process_wait(t13, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(60, ng1);
    t14 = (t0 + 1196);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 1012);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    t18 = (t0 + 920);
    xsi_vlogvar_assign_value(t18, t16, 1, 0, 1);
    t19 = (t0 + 828);
    xsi_vlogvar_assign_value(t19, t16, 2, 0, 1);
    xsi_set_current_line(58, ng1);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

}

static void Initial_65_1(char *t0)
{

LAB0:    xsi_set_current_line(65, ng1);

LAB2:    xsi_set_current_line(66, ng1);
    Monitor_66_2(t0);

LAB1:    return;
}

void Monitor_66_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1908);
    t2 = (t0 + 2204);
    xsi_vlogfile_monitor((void *)Monitor_66_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001148072339_4055264658_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Initial_65_1,(void *)Monitor_66_2};
	xsi_register_didat("work_m_00000000001148072339_4055264658", "isim/test_prep_test_isim_beh.exe.sim/work/m_00000000001148072339_4055264658.didat");
	xsi_register_executes(pe);
}
