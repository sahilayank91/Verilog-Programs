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
static const char *ng0 = "E:/Verilog programs/booth_multiplier/booth_multiplier.v";



static void Cont_29_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 784U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    xsi_vlogtype_concat(t4, 5, 5, 1U, t5, 5);
    t16 = (t0 + 600U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 31U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 31U);
    xsi_vlogtype_concat(t14, 5, 5, 1U, t15, 5);
    xsi_vlogtype_concat(t3, 10, 10, 2U, t14, 5, t4, 5);
    t25 = (t0 + 1868);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 1023U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 9);
    t38 = (t0 + 1824);
    *((int *)t38) = 1;

LAB1:    return;
}


extern void work_m_00000000004116554375_1820119024_init()
{
	static char *pe[] = {(void *)Cont_29_0};
	xsi_register_didat("work_m_00000000004116554375_1820119024", "isim/booth_multiplier_test_isim_beh.exe.sim/work/m_00000000004116554375_1820119024.didat");
	xsi_register_executes(pe);
}
