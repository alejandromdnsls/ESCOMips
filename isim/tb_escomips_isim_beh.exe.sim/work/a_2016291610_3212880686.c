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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Alejandro Medina/Documents/Proyecto/ESCOMips/Pila.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2016291610_3212880686_p_0(char *t0)
{
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned int t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1792U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t1 = (t0 + 6668U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t9 = (t8 - 0);
    t13 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t6 = (t2 + t15);
    t7 = (t0 + 3952);
    t10 = (t7 + 56U);
    t16 = *((char **)t10);
    t27 = (t16 + 56U);
    t31 = *((char **)t27);
    memcpy(t31, t6, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 4016);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 6973);
    t6 = (t0 + 2448U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 6977);
    *((int *)t1) = 0;
    t2 = (t0 + 6981);
    *((int *)t2) = 15;
    t8 = 0;
    t9 = 15;

LAB5:    if (t8 <= t9)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 6985);
    t7 = (t0 + 2568U);
    t10 = *((char **)t7);
    t7 = (t0 + 6977);
    t11 = *((int *)t7);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t7));
    t14 = (16U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    memcpy(t16, t5, 16U);

LAB7:    t1 = (t0 + 6977);
    t8 = *((int *)t1);
    t2 = (t0 + 6981);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB8;

LAB9:    t11 = (t8 + 1);
    t8 = t11;
    t5 = (t0 + 6977);
    *((int *)t5) = t8;
    goto LAB5;

LAB10:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t21 = *((unsigned char *)t6);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB21;

LAB22:    t20 = (unsigned char)0;

LAB23:    if (t20 == 1)
        goto LAB18;

LAB19:    t19 = (unsigned char)0;

LAB20:    if (t19 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)2);
    if (t18 == 1)
        goto LAB29;

LAB30:    t4 = (unsigned char)0;

LAB31:    if (t4 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB37;

LAB38:    t4 = (unsigned char)0;

LAB39:    if (t4 == 1)
        goto LAB34;

LAB35:    t3 = (unsigned char)0;

LAB36:    if (t3 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)2);
    if (t18 == 1)
        goto LAB45;

LAB46:    t4 = (unsigned char)0;

LAB47:    if (t4 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB40;

LAB41:
LAB16:    goto LAB3;

LAB12:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t17 = *((unsigned char *)t5);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2448U);
    t16 = *((char **)t2);
    t2 = (t0 + 2448U);
    t27 = *((char **)t2);
    t2 = (t27 + 0);
    memcpy(t2, t16, 4U);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t1 = (t0 + 6668U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t9 = (t8 - 0);
    t13 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t6 = (t2 + t15);
    t7 = (t29 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 15;
    t10 = (t7 + 4U);
    *((int *)t10) = 0;
    t10 = (t7 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 15);
    t30 = (t11 * -1);
    t30 = (t30 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t30;
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t28, t6, t29, 1);
    t16 = (t0 + 2568U);
    t27 = *((char **)t16);
    t16 = (t0 + 2448U);
    t31 = *((char **)t16);
    t16 = (t0 + 6668U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t31, t16);
    t32 = (t12 - 0);
    t30 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t33 = (16U * t30);
    t34 = (0 + t33);
    t35 = (t27 + t34);
    t36 = (t28 + 12U);
    t37 = *((unsigned int *)t36);
    t38 = (1U * t37);
    memcpy(t35, t10, t38);
    goto LAB16;

LAB18:    t2 = (t0 + 1512U);
    t10 = *((char **)t2);
    t25 = *((unsigned char *)t10);
    t26 = (t25 == (unsigned char)2);
    t19 = t26;
    goto LAB20;

LAB21:    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t23 = *((unsigned char *)t7);
    t24 = (t23 == (unsigned char)2);
    t20 = t24;
    goto LAB23;

LAB24:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2448U);
    t7 = *((char **)t1);
    t1 = (t0 + 2448U);
    t10 = *((char **)t1);
    t1 = (t10 + 0);
    memcpy(t1, t7, 4U);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2568U);
    t5 = *((char **)t1);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t1 = (t0 + 6668U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t9 = (t8 - 0);
    t13 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t7 = (t5 + t15);
    memcpy(t7, t2, 16U);
    goto LAB16;

LAB26:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t21 = *((unsigned char *)t6);
    t22 = (t21 == (unsigned char)3);
    t3 = t22;
    goto LAB28;

LAB29:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t19 = *((unsigned char *)t5);
    t20 = (t19 == (unsigned char)2);
    t4 = t20;
    goto LAB31;

LAB32:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2448U);
    t7 = *((char **)t1);
    t1 = (t0 + 6668U);
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t28, t7, t1, 1);
    t16 = (t0 + 2448U);
    t27 = *((char **)t16);
    t16 = (t27 + 0);
    t31 = (t28 + 12U);
    t13 = *((unsigned int *)t31);
    t14 = (1U * t13);
    memcpy(t16, t10, t14);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2568U);
    t5 = *((char **)t1);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t1 = (t0 + 6668U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t9 = (t8 - 0);
    t13 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t7 = (t5 + t15);
    memcpy(t7, t2, 16U);
    goto LAB16;

LAB34:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t21 = *((unsigned char *)t6);
    t22 = (t21 == (unsigned char)3);
    t3 = t22;
    goto LAB36;

LAB37:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t19 = *((unsigned char *)t5);
    t20 = (t19 == (unsigned char)2);
    t4 = t20;
    goto LAB39;

LAB40:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2448U);
    t7 = *((char **)t1);
    t1 = (t0 + 6668U);
    t10 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t28, t7, t1, 1);
    t16 = (t0 + 2448U);
    t27 = *((char **)t16);
    t16 = (t27 + 0);
    t31 = (t28 + 12U);
    t13 = *((unsigned int *)t31);
    t14 = (1U * t13);
    memcpy(t16, t10, t14);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t1 = (t0 + 6668U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t9 = (t8 - 0);
    t13 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t14 = (16U * t13);
    t15 = (0 + t14);
    t6 = (t2 + t15);
    t7 = (t29 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 15;
    t10 = (t7 + 4U);
    *((int *)t10) = 0;
    t10 = (t7 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 15);
    t30 = (t11 * -1);
    t30 = (t30 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t30;
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t28, t6, t29, 1);
    t16 = (t0 + 2568U);
    t27 = *((char **)t16);
    t16 = (t0 + 2448U);
    t31 = *((char **)t16);
    t16 = (t0 + 6668U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t31, t16);
    t32 = (t12 - 0);
    t30 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t33 = (16U * t30);
    t34 = (0 + t33);
    t35 = (t27 + t34);
    t36 = (t28 + 12U);
    t37 = *((unsigned int *)t36);
    t38 = (1U * t37);
    memcpy(t35, t10, t38);
    goto LAB16;

LAB42:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t21 = *((unsigned char *)t6);
    t22 = (t21 == (unsigned char)2);
    t3 = t22;
    goto LAB44;

LAB45:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t19 = *((unsigned char *)t5);
    t20 = (t19 == (unsigned char)3);
    t4 = t20;
    goto LAB47;

}


extern void work_a_2016291610_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2016291610_3212880686_p_0};
	xsi_register_didat("work_a_2016291610_3212880686", "isim/tb_escomips_isim_beh.exe.sim/work/a_2016291610_3212880686.didat");
	xsi_register_executes(pe);
}
