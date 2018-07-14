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
static const char *ng0 = "time=";
static const char *ng1 = " ";
static const char *ng2 = "A=%b B=%b Cin=%b : Sum=%b Cout=%b PG=%b GG=%b";
static const char *ng3 = "E:/Verilog programs/carrylookahead_adder/carrylookahead_adder_test.v";
static int ng4[] = {0, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {14U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {15U, 0U};

void Monitor_69_2(char *);
void Monitor_69_2(char *);


static void Monitor_69_2_Func(char *t0)
{
    char t1[16];
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
    char *t15;
    char *t16;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    xsi_vlogfile_write(0, 0, 3, ng1, 1, t0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1196);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    t12 = (t0 + 876U);
    t14 = *((char **)t12);
    t12 = (t0 + 600U);
    t15 = *((char **)t12);
    t12 = (t0 + 692U);
    t16 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 3, ng2, 8, t0, (char)118, t5, 4, (char)118, t8, 4, (char)118, t11, 1, (char)118, t13, 4, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);

LAB1:    return;
}

static void Initial_49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng3);

LAB4:    xsi_set_current_line(51, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(53, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng3);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(57, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(57, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58, ng3);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(58, ng3);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(58, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(59, ng3);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(59, ng3);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(59, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(60, ng3);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(60, ng3);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(61, ng3);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(61, ng3);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng3);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    goto LAB1;

}

static void Initial_68_1(char *t0)
{

LAB0:    xsi_set_current_line(68, ng3);

LAB2:    xsi_set_current_line(69, ng3);
    Monitor_69_2(t0);

LAB1:    return;
}

void Monitor_69_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2000);
    t2 = (t0 + 2296);
    xsi_vlogfile_monitor((void *)Monitor_69_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002475176180_3212076249_init()
{
	static char *pe[] = {(void *)Initial_49_0,(void *)Initial_68_1,(void *)Monitor_69_2};
	xsi_register_didat("work_m_00000000002475176180_3212076249", "isim/carrylookahead_adder_test_isim_beh.exe.sim/work/m_00000000002475176180_3212076249.didat");
	xsi_register_executes(pe);
}
