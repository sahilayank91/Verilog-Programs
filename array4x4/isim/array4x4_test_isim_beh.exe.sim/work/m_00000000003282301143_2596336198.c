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
static const char *ng0 = "a = %b,b = %b, Answer = %b\n";
static const char *ng1 = "E:/Verilog programs/array4x4/array4x4_test.v";
static unsigned int ng2[] = {8U, 0U};
static unsigned int ng3[] = {2U, 0U};

void Monitor_53_2(char *);
void Monitor_53_2(char *);


static void Monitor_53_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 828);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t3, 4, (char)118, t6, 4, (char)118, t8, 8);

LAB1:    return;
}

static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng1);

LAB4:    xsi_set_current_line(43, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_52_1(char *t0)
{

LAB0:    xsi_set_current_line(52, ng1);

LAB2:    xsi_set_current_line(53, ng1);
    Monitor_53_2(t0);

LAB1:    return;
}

void Monitor_53_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1632);
    t2 = (t0 + 1928);
    xsi_vlogfile_monitor((void *)Monitor_53_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003282301143_2596336198_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Initial_52_1,(void *)Monitor_53_2};
	xsi_register_didat("work_m_00000000003282301143_2596336198", "isim/array4x4_test_isim_beh.exe.sim/work/m_00000000003282301143_2596336198.didat");
	xsi_register_executes(pe);
}
