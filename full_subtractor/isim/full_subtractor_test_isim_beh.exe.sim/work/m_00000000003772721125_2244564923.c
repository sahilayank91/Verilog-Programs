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
static const char *ng0 = "a = %d, b = %d, c = %d, diff = %d, borrow = %d\n";
static const char *ng1 = "E:/Verilog programs/full_subtractor/full_subtractor_test.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};

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
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t9, 1, (char)118, t11, 1, (char)118, t12, 1);

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
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(52, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(53, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(54, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(56, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(57, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    goto LAB1;

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

LAB0:    t1 = (t0 + 1816);
    t2 = (t0 + 2112);
    xsi_vlogfile_monitor((void *)Monitor_66_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003772721125_2244564923_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_65_1,(void *)Monitor_66_2};
	xsi_register_didat("work_m_00000000003772721125_2244564923", "isim/full_subtractor_test_isim_beh.exe.sim/work/m_00000000003772721125_2244564923.didat");
	xsi_register_executes(pe);
}
