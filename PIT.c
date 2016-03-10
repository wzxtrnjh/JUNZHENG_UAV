/******************** (C) COPYRIGHT 2011 蓝宙电子工作室 ********************
 * 文件名       ：
 * 描述         ：工程模版实验
 *
 * 实验平台     ：landzo电子开发版
 * 库版本       ：
 * 嵌入系统     ：
 *
 * 作者         ：landzo 蓝电子
 * 淘宝店       ：http://landzo.taobao.com/

**********************************************************************************/
#include "includes.h"


/*
*********************************************************************************************************
* Description: PIT_Init
* Note: Fbus = 40M
*********************************************************************************************************
*/
void PIT_Init(void) {
    PITCE_PCE0 = 1;             //Enable Timer Channel0
    PITMUX_PMUX0 = 0;           //16-bit timer counts with micro time base 0
//time-out period = (PITMTLD + 1) * (PITLD + 1) / fBUS
//5ms
    PITMTLD0 = 199;             //PIT Micro Timer Load Register
    PITLD0 = 999;               //PIT Load Register
    PITINTE_PINTE0 = 1;         //Enable Timer Channel0 Interrupt
    PITCFLMT_PITE = 1;          //Enable Timer
}
