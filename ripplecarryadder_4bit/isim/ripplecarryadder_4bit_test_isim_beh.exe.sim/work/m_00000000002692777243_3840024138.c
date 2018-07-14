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
static const char *ng0 = "a = %b, b = %b, cin = %b : Sum = %b, Cout = %b";
static const char *ng1 = "E:/Verilog programs/ripplecarryadder_4bit/ripplecarryadder_4bit_test.v";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {15U, 0U};
static unsigned int ng11[] = {13U, 0U};
static int ng12[] = {1, 0};

void Monitor_75_2(char *);
void Monitor_75_2(char *);


static void Monitor_75_2_Func(char *t0)
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

LAB0:    t1 = (t0 + 920);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1104);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 600U);
    t11 = *((char **)t10);
    t10 = (t0 + 692U);
    t12 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t3, 4, (char)118, t6, 4, (char)118, t9, 1, (char)118, t11, 4, (char)118, t12, 1);

LAB1:    return;
}

static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng1);

LAB4:    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(56, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(56, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(57, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(58, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(58, ng1);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(59, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(59, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(60, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(60, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(61, ng1);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(61, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(62, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(62, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(63, ng1);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(64, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(64, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(64, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(65, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(66, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(66, ng1);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(67, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(67, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(67, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(68, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(68, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(69, ng1);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(69, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(70, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(70, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB1;

}

static void Initial_74_1(char *t0)
{

LAB0:    xsi_set_current_line(74, ng1);

LAB2:    xsi_set_current_line(75, ng1);
    Monitor_75_2(t0);

LAB1:    return;
}

void Monitor_75_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1816);
    t2 = (t0 + 2112);
    xsi_vlogfile_monitor((void *)Monitor_75_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002692777243_3840024138_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_74_1,(void *)Monitor_75_2};
	xsi_register_didat("work_m_00000000002692777243_3840024138", "isim/ripplecarryadder_4bit_test_isim_beh.exe.sim/work/m_00000000002692777243_3840024138.didat");
	xsi_register_executes(pe);
}
