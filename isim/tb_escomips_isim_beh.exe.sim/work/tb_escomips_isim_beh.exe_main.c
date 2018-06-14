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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *WORK_P_2097869386;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_2097869386_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    work_a_0185241847_3212880686_init();
    work_a_1878588406_3212880686_init();
    work_a_1089382276_3212880686_init();
    work_a_1967972351_3212880686_init();
    work_a_1155788609_3212880686_init();
    work_a_3222946569_3212880686_init();
    work_a_1774854872_3212880686_init();
    work_a_0744053975_3212880686_init();
    work_a_4102105613_3212880686_init();
    work_a_4283148259_3212880686_init();
    work_a_0957945488_3212880686_init();
    work_a_0577390415_3212880686_init();
    work_a_3750015617_3212880686_init();
    work_a_1705605299_3212880686_init();
    work_a_2061948963_2781057379_init();
    work_a_0868587044_3212880686_init();
    work_a_2916320223_2372691052_init();


    xsi_register_tops("work_a_2916320223_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_2097869386 = xsi_get_engine_memory("work_p_2097869386");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}
