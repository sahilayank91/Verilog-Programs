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
static const char *ng0 = "x = %d,y = %d,z = %d\ny7 = %d,y6 = %d, y5 = %d,y4 = %d,y3 = %d,y2 = %d,y1 = %d,y0 = %d\n";
static const char *ng1 = "E:/Verilog programs/decoder3to8/decoder3to8_test.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};

void Monitor_64_2(char *);
void Monitor_64_2(char *);


static void Monitor_64_2_Func(char *t0)
{
    char t12[8];
    char t22[8];
    char t32[8];
    char t42[8];
    char t52[8];
    char t62[8];
    char t72[8];
    char t82[8];
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
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;

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
    memset(t12, 0, 8);
    t10 = (t12 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t10) = t19;
    t20 = (t0 + 600U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 6);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 6);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    t30 = (t0 + 600U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 5);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 5);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    t40 = (t0 + 600U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t42 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 4);
    t46 = (t45 & 1);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 4);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    t50 = (t0 + 600U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t52 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 3);
    t56 = (t55 & 1);
    *((unsigned int *)t52) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 3);
    t59 = (t58 & 1);
    *((unsigned int *)t50) = t59;
    t60 = (t0 + 600U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t60 = (t62 + 4);
    t63 = (t61 + 4);
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 2);
    t66 = (t65 & 1);
    *((unsigned int *)t62) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 2);
    t69 = (t68 & 1);
    *((unsigned int *)t60) = t69;
    t70 = (t0 + 600U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    t80 = (t0 + 600U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t80 = (t82 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 0);
    t86 = (t85 & 1);
    *((unsigned int *)t82) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 >> 0);
    t89 = (t88 & 1);
    *((unsigned int *)t80) = t89;
    xsi_vlogfile_write(1, 0, 3, ng0, 12, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t22, 1, (char)118, t32, 1, (char)118, t42, 1, (char)118, t52, 1, (char)118, t62, 1, (char)118, t72, 1, (char)118, t82, 1);

LAB1:    return;
}

static void Initial_43_0(char *t0)
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

LAB2:    xsi_set_current_line(43, ng1);

LAB4:    xsi_set_current_line(45, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(54, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(55, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(56, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(57, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(58, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(59, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_62_1(char *t0)
{

LAB0:    xsi_set_current_line(62, ng1);

LAB2:    xsi_set_current_line(64, ng1);
    Monitor_64_2(t0);

LAB1:    return;
}

void Monitor_64_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1816);
    t2 = (t0 + 2112);
    xsi_vlogfile_monitor((void *)Monitor_64_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002219351718_2998123132_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Initial_62_1,(void *)Monitor_64_2};
	xsi_register_didat("work_m_00000000002219351718_2998123132", "isim/decoder3to8_test_isim_beh.exe.sim/work/m_00000000002219351718_2998123132.didat");
	xsi_register_executes(pe);
}
