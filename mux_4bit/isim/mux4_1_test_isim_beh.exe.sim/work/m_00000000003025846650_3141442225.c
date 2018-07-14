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
static const char *ng0 = "running\n";
static const char *ng1 = "E:/Verilog programs/mux_4bit/mux4_1_test.v";
static int ng2[] = {0, 0};

void Monitor_64_2(char *);
void Monitor_64_2(char *);


static void Monitor_64_2_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng0, 1, t0);

LAB1:    return;
}

static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng1);

LAB4:    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng1);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_63_1(char *t0)
{

LAB0:    xsi_set_current_line(63, ng1);

LAB2:    xsi_set_current_line(64, ng1);
    Monitor_64_2(t0);

LAB1:    return;
}

void Monitor_64_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2000);
    t2 = (t0 + 2296);
    xsi_vlogfile_monitor((void *)Monitor_64_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003025846650_3141442225_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Initial_63_1,(void *)Monitor_64_2};
	xsi_register_didat("work_m_00000000003025846650_3141442225", "isim/mux4_1_test_isim_beh.exe.sim/work/m_00000000003025846650_3141442225.didat");
	xsi_register_executes(pe);
}
