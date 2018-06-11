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
static const char *ng0 = "C:/Users/Alejandro Medina/Documents/Proyecto/ESCOMips/Registros.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0744053975_3212880686_p_0(char *t0)
{
    char t1[16];
    char t11[16];
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    int t22;
    int t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;

LAB0:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 8808U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t2);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t5);
    t8 = (16U * t7);
    t9 = (0 + t8);
    t10 = (t3 + t9);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 15;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 15);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t1, t10, t11, (unsigned char)0);
    t16 = (t0 + 3368U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t1 + 12U);
    t15 = *((unsigned int *)t18);
    t15 = (t15 * 1U);
    memcpy(t16, t13, t15);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t19 = *((unsigned char *)t3);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t19 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t19 != 0)
        goto LAB12;

LAB13:
LAB3:    t2 = (t0 + 5288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t5 = (16 - 1);
    t2 = (t0 + 9273);
    *((int *)t2) = 0;
    t4 = (t0 + 9277);
    *((int *)t4) = t5;
    t6 = 0;
    t14 = t5;

LAB5:    if (t6 <= t14)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(40, ng0);
    t10 = (t0 + 9281);
    t21 = (16U != 16U);
    if (t21 == 1)
        goto LAB9;

LAB10:    t13 = (t0 + 9273);
    t22 = *((int *)t13);
    t23 = (t22 - 0);
    t7 = (t23 * 1);
    t8 = (16U * t7);
    t9 = (0U + t8);
    t16 = (t0 + 5400);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t10, 16U);
    xsi_driver_first_trans_delta(t16, t9, 16U, 0LL);

LAB7:    t2 = (t0 + 9273);
    t6 = *((int *)t2);
    t3 = (t0 + 9277);
    t14 = *((int *)t3);
    if (t6 == t14)
        goto LAB8;

LAB11:    t5 = (t6 + 1);
    t6 = t5;
    t4 = (t0 + 9273);
    *((int *)t4) = t6;
    goto LAB5;

LAB9:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB10;

LAB12:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t26 = *((unsigned char *)t4);
    t27 = (t26 == (unsigned char)3);
    if (t27 == 1)
        goto LAB20;

LAB21:    t21 = (unsigned char)0;

LAB22:    if (t21 == 1)
        goto LAB17;

LAB18:    t20 = (unsigned char)0;

LAB19:    if (t20 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t26 = (t21 == (unsigned char)3);
    if (t26 == 1)
        goto LAB29;

LAB30:    t20 = (unsigned char)0;

LAB31:    if (t20 == 1)
        goto LAB26;

LAB27:    t19 = (unsigned char)0;

LAB28:    if (t19 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t21 = *((unsigned char *)t3);
    t26 = (t21 == (unsigned char)3);
    if (t26 == 1)
        goto LAB40;

LAB41:    t20 = (unsigned char)0;

LAB42:    if (t20 == 1)
        goto LAB37;

LAB38:    t19 = (unsigned char)0;

LAB39:    if (t19 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB3;

LAB14:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1992U);
    t13 = *((char **)t3);
    t3 = (t0 + 1832U);
    t16 = *((char **)t3);
    t3 = (t0 + 8776U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t16, t3);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    t8 = (16U * t7);
    t9 = (0U + t8);
    t17 = (t0 + 5400);
    t18 = (t17 + 56U);
    t24 = *((char **)t18);
    t25 = (t24 + 56U);
    t32 = *((char **)t25);
    memcpy(t32, t13, 16U);
    xsi_driver_first_trans_delta(t17, t9, 16U, 0LL);
    goto LAB15;

LAB17:    t3 = (t0 + 1352U);
    t12 = *((char **)t3);
    t30 = *((unsigned char *)t12);
    t31 = (t30 == (unsigned char)2);
    t20 = t31;
    goto LAB19;

LAB20:    t3 = (t0 + 1672U);
    t10 = *((char **)t3);
    t28 = *((unsigned char *)t10);
    t29 = (t28 == (unsigned char)2);
    t21 = t29;
    goto LAB22;

LAB23:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3368U);
    t12 = *((char **)t2);
    t2 = (t0 + 2472U);
    t13 = *((char **)t2);
    t2 = (t0 + 8840U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t2);
    t16 = xsi_vhdl_bitvec_srl(t16, t12, 16U, t5);
    t17 = (t0 + 3488U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t16, 16U);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8920U);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t3, t2);
    t10 = (t1 + 12U);
    t7 = *((unsigned int *)t10);
    t7 = (t7 * 1U);
    t19 = (16U != t7);
    if (t19 == 1)
        goto LAB32;

LAB33:    t12 = (t0 + 1832U);
    t13 = *((char **)t12);
    t12 = (t0 + 8776U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t12);
    t6 = (t5 - 0);
    t8 = (t6 * 1);
    t9 = (16U * t8);
    t15 = (0U + t9);
    t16 = (t0 + 5400);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 16U);
    xsi_driver_first_trans_delta(t16, t15, 16U, 0LL);
    goto LAB24;

LAB26:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)2);
    t19 = t30;
    goto LAB28;

LAB29:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t27 = *((unsigned char *)t4);
    t28 = (t27 == (unsigned char)3);
    t20 = t28;
    goto LAB31;

LAB32:    xsi_size_not_matching(16U, t7, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3368U);
    t12 = *((char **)t2);
    t2 = (t0 + 2472U);
    t13 = *((char **)t2);
    t2 = (t0 + 8840U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t2);
    t16 = xsi_vhdl_bitvec_sll(t16, t12, 16U, t5);
    t17 = (t0 + 3488U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t16, 16U);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8920U);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t3, t2);
    t10 = (t1 + 12U);
    t7 = *((unsigned int *)t10);
    t7 = (t7 * 1U);
    t19 = (16U != t7);
    if (t19 == 1)
        goto LAB43;

LAB44:    t12 = (t0 + 1832U);
    t13 = *((char **)t12);
    t12 = (t0 + 8776U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t12);
    t6 = (t5 - 0);
    t8 = (t6 * 1);
    t9 = (16U * t8);
    t15 = (0U + t9);
    t16 = (t0 + 5400);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 16U);
    xsi_driver_first_trans_delta(t16, t15, 16U, 0LL);
    goto LAB35;

LAB37:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)3);
    t19 = t30;
    goto LAB39;

LAB40:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t27 = *((unsigned char *)t4);
    t28 = (t27 == (unsigned char)3);
    t20 = t28;
    goto LAB42;

LAB43:    xsi_size_not_matching(16U, t7, 0);
    goto LAB44;

}

static void work_a_0744053975_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8808U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5464);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5304);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0744053975_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8824U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5528);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5320);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0744053975_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0744053975_3212880686_p_0,(void *)work_a_0744053975_3212880686_p_1,(void *)work_a_0744053975_3212880686_p_2};
	xsi_register_didat("work_a_0744053975_3212880686", "isim/tb_escomips_isim_beh.exe.sim/work/a_0744053975_3212880686.didat");
	xsi_register_executes(pe);
}
