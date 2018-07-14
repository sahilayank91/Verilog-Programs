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
static const char *ng0 = "a = %b, b = %b, q = %b, c = %b, Qn+1 = %b, Result = %d\n";
static const char *ng1 = "E:/Verilog programs/booth_multiplier/booth_multiplier_test.v";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {23U, 0U};
static unsigned int ng4[] = {38U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {5, 0};

void Monitor_83_2(char *);
void Monitor_83_2(char *);


static void Monitor_83_2_Func(char *t0)
{
    char t16[8];
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
    char *t15;
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
    t13 = (t0 + 1012);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t17) = t24;
    t25 = (t0 + 600U);
    t26 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t3, 5, (char)118, t6, 5, (char)118, t9, 6, (char)118, t12, 3, (char)118, t16, 1, (char)118, t26, 10);

LAB1:    return;
}

static void Initial_48_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    int t50;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng1);

LAB4:    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(51, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(52, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng1);

LAB6:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(78, ng1);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t48, 5, t4, 5, t5, 32);
    t7 = (t0 + 828);
    xsi_vlogvar_assign_value(t7, t48, 0, 0, 5);
    goto LAB1;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(60, ng1);

LAB13:    xsi_set_current_line(63, ng1);
    t29 = (t0 + 1012);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 3U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 3U);

LAB14:    t40 = ((char*)((ng6)));
    t41 = xsi_vlog_unsigned_case_compare(t28, 2, t40, 2);
    if (t41 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t41 = xsi_vlog_unsigned_case_compare(t28, 2, t2, 2);
    if (t41 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t41 = xsi_vlog_unsigned_case_compare(t28, 2, t2, 2);
    if (t41 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng8)));
    t50 = xsi_vlog_unsigned_case_compare(t28, 2, t3, 2);
    if (t50 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(69, ng1);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 6, t4, 6, t5, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 6);
    xsi_set_current_line(70, ng1);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;

LAB24:    t8 = ((char*)((ng7)));
    t41 = xsi_vlog_unsigned_case_compare(t6, 1, t8, 1);
    if (t41 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng2)));
    t41 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t41 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(74, ng1);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 3, t4, 3, t5, 3);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t48, 0, 0, 3);
    xsi_set_current_line(75, ng1);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t48, 5, t4, 5, t5, 32);
    t7 = (t0 + 828);
    xsi_vlogvar_assign_value(t7, t48, 0, 0, 5);
    goto LAB6;

LAB15:    xsi_set_current_line(64, ng1);
    t42 = (t0 + 828);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t45 = (t0 + 920);
    t46 = (t45 + 36U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 5, t44, 5, t47, 5);
    t49 = (t0 + 828);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 5);
    goto LAB23;

LAB17:    xsi_set_current_line(65, ng1);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 920);
    t8 = (t7 + 36U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 5, t5, 5, t21, 5);
    t22 = (t0 + 828);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 5);
    goto LAB23;

LAB19:    goto LAB23;

LAB21:    goto LAB19;

LAB25:    xsi_set_current_line(71, ng1);
    t21 = ((char*)((ng7)));
    t22 = (t0 + 1012);
    t29 = (t0 + 1012);
    t30 = (t29 + 44U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t48, t31, 2, t32, 32, 1);
    t33 = (t48 + 4);
    t15 = *((unsigned int *)t33);
    t50 = (!(t15));
    if (t50 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB27:    xsi_set_current_line(72, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    t5 = (t0 + 1012);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t48, t8, 2, t21, 32, 1);
    t22 = (t48 + 4);
    t9 = *((unsigned int *)t22);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB32;

LAB33:    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t22, t21, 0, *((unsigned int *)t48), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t48), 1);
    goto LAB33;

}

static void Initial_82_1(char *t0)
{

LAB0:    xsi_set_current_line(82, ng1);

LAB2:    xsi_set_current_line(83, ng1);
    Monitor_83_2(t0);

LAB1:    return;
}

void Monitor_83_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1816);
    t2 = (t0 + 2112);
    xsi_vlogfile_monitor((void *)Monitor_83_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000921247709_1021470141_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Initial_82_1,(void *)Monitor_83_2};
	xsi_register_didat("work_m_00000000000921247709_1021470141", "isim/booth_multiplier_test_isim_beh.exe.sim/work/m_00000000000921247709_1021470141.didat");
	xsi_register_executes(pe);
}
