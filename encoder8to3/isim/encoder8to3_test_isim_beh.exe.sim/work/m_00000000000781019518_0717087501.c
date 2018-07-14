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
static const char *ng0 = "d = %b, value = %b\n";
static const char *ng1 = "E:/Verilog programs/encoder8to3/encoder8to3_test.v";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {64U, 0U};
static unsigned int ng9[] = {128U, 0U};

void Monitor_61_2(char *);
void Monitor_61_2(char *);


static void Monitor_61_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 828);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t3, 8, (char)118, t5, 3);

LAB1:    return;
}

static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng1);

LAB4:    xsi_set_current_line(42, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(42, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(43, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(44, ng1);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(45, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(46, ng1);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(47, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(48, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(48, ng1);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(49, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(49, ng1);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    goto LAB1;

}

static void Initial_59_1(char *t0)
{

LAB0:    xsi_set_current_line(59, ng1);

LAB2:    xsi_set_current_line(61, ng1);
    Monitor_61_2(t0);

LAB1:    return;
}

void Monitor_61_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1540);
    t2 = (t0 + 1836);
    xsi_vlogfile_monitor((void *)Monitor_61_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000781019518_0717087501_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Initial_59_1,(void *)Monitor_61_2};
	xsi_register_didat("work_m_00000000000781019518_0717087501", "isim/encoder8to3_test_isim_beh.exe.sim/work/m_00000000000781019518_0717087501.didat");
	xsi_register_executes(pe);
}
