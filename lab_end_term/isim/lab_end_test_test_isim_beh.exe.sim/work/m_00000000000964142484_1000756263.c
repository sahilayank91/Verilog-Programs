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
static const char *ng0 = "a = %d, b = %d, c = %d, x = %d\n\n";
static const char *ng1 = "E:/Verilog programs/lab_end_term/lab_end_test_test.v";
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};

void Monitor_56_2(char *);
void Monitor_56_2(char *);


static void Monitor_56_2_Func(char *t0)
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

LAB0:    t1 = (t0 + 828);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1012);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 600U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t9, 1, (char)118, t11, 1);

LAB1:    return;
}

static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng1);

LAB4:    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_55_1(char *t0)
{

LAB0:    xsi_set_current_line(56, ng1);
    Monitor_56_2(t0);

LAB1:    return;
}

static void Always_58_3(char *t0)
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

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng1);
    t2 = (t0 + 2256);
    *((int *)t2) = 1;
    t3 = (t0 + 1944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng1);
    xsi_set_current_line(59, ng1);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB5:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng1);

LAB8:    xsi_set_current_line(61, ng1);
    t13 = (t0 + 1816);
    xsi_process_wait(t13, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(61, ng1);
    t14 = (t0 + 1104);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 1012);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    t18 = (t0 + 920);
    xsi_vlogvar_assign_value(t18, t16, 1, 0, 1);
    t19 = (t0 + 828);
    xsi_vlogvar_assign_value(t19, t16, 2, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

}

void Monitor_56_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1960);
    t2 = (t0 + 2264);
    xsi_vlogfile_monitor((void *)Monitor_56_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000964142484_1000756263_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Initial_55_1,(void *)Always_58_3,(void *)Monitor_56_2};
	xsi_register_didat("work_m_00000000000964142484_1000756263", "isim/lab_end_test_test_isim_beh.exe.sim/work/m_00000000000964142484_1000756263.didat");
	xsi_register_executes(pe);
}
