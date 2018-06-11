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
static const char *ng0 = "C:/Users/Alejandro Medina/Documents/Proyecto/ESCOMips/tb_memprog.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3205433008_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_3356516962_2372691052_p_0(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t22[16];
    char t23[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t17;
    int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t29;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2760U);
    t3 = (t0 + 7582);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2656U);
    t3 = (t0 + 7594);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 14;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (14 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 7608);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7612);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 7616);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 7620);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7624);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7628);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 7632);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 3224U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 4U);
    t6 = (t0 + 7304U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2656U);
    t4 = (t0 + 2936U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(116, ng0);
    t17 = (10 * 1000LL);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, t17);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7636);
    *((int *)t2) = 0;
    t3 = (t0 + 7640);
    *((int *)t3) = 9;
    t8 = 0;
    t18 = 9;

LAB8:    if (t8 <= t18)
        goto LAB9;

LAB11:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2760U);
    std_textio_file_close(t2);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2656U);
    std_textio_file_close(t2);
    xsi_set_current_line(144, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 3616);
    t6 = (t0 + 2760U);
    t7 = (t0 + 3008U);
    std_textio_readline(STD_TEXTIO, t4, t6, t7);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 3008U);
    t4 = (t0 + 2328U);
    t6 = *((char **)t4);
    t4 = (t0 + 7288U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4192);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    memcpy(t19, t3, 10U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t17 = (50 * 1000LL);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, t17);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 7636);
    t8 = *((int *)t2);
    t3 = (t0 + 7640);
    t18 = *((int *)t3);
    if (t8 == t18)
        goto LAB11;

LAB16:    t29 = (t8 + 1);
    t8 = t29;
    t4 = (t0 + 7636);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 25U);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 3);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 1608U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 7);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 1728U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 11);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 1848U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 15);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 1968U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 19);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 2088U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t9 = (24 - 24);
    t20 = (t9 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t4 = (t0 + 2208U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t2, 5U);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 2328U);
    t6 = *((char **)t4);
    memcpy(t22, t6, 10U);
    t4 = (t0 + 7288U);
    ieee_p_3564397177_sub_3205433008_91900896(IEEE_P_3564397177, t2, t3, t22, t4, (unsigned char)0, 5);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 2208U);
    t6 = *((char **)t4);
    memcpy(t23, t6, 5U);
    t4 = (t0 + 7272U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t23, t4, (unsigned char)0, 6);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 2088U);
    t6 = *((char **)t4);
    memcpy(t24, t6, 4U);
    t4 = (t0 + 7256U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t24, t4, (unsigned char)0, 6);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 1968U);
    t6 = *((char **)t4);
    memcpy(t25, t6, 4U);
    t4 = (t0 + 7240U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t25, t4, (unsigned char)0, 6);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 1848U);
    t6 = *((char **)t4);
    memcpy(t26, t6, 4U);
    t4 = (t0 + 7224U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t26, t4, (unsigned char)0, 6);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 1728U);
    t6 = *((char **)t4);
    memcpy(t27, t6, 4U);
    t4 = (t0 + 7208U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t27, t4, (unsigned char)0, 6);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2936U);
    t4 = (t0 + 1608U);
    t6 = *((char **)t4);
    memcpy(t28, t6, 4U);
    t4 = (t0 + 7192U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t28, t4, (unsigned char)0, 6);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3616);
    t3 = (t0 + 2656U);
    t4 = (t0 + 2936U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_3356516962_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3356516962_2372691052_p_0};
	xsi_register_didat("work_a_3356516962_2372691052", "isim/tb_memprog_isim_beh.exe.sim/work/a_3356516962_2372691052.didat");
	xsi_register_executes(pe);
}
