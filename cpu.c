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
* Description: _EntryPoint
* Note: Oscillator = 16M ---> Fbus = 40M
*********************************************************************************************************
*/
#pragma CODE_SEG __NEAR_SEG NON_BANKED

extern void _Startup(void);

void _EntryPoint(void) {
/*  Initialization code after reset */
    MMCCTL1 = 0;                //Memory Mapping Control
    DIRECT  = 0;                //Direct Page Register
    IVBR    = 0xFF;             //Interrupt Vector Base Register

    ECLKCTL = 0xC0;             //ECLK Control Register
                                //ECLK disabled
                                //ECLKX2 disabled

/*  System clock initialization */
    CLKSEL  = 0;                //S12XECRG Clock Select Register,Select clock source from XTAL and set bits in CLKSEL reg.
                                //System clocks are derived from OSCCLK
                                //Oscillator is disabled in Stop Mode
                                //Loop controlled Pierce Oscillator is selected
                                //IPLL keeps running in Wait Mode
                                //RTI keeps running in Wait Mode
                                //COP keeps running in Wait Mode

    PLLCTL  = 0x81;             //S12XECRG IPLL Control Register,Disable the PLL
                                //Clock monitor is enabled
                                //IPLL is turned off
                                //FM off
                                //Fast wake-up from full stop mode is disabled
                                //RTI stops running during Pseudo Stop Mode
                                //COP stops running during Pseudo Stop Mode
                                //Detection of crystal clock failure forces the MCU in Self Clock Mode

    SYNR    = 0x44;             //S12XECRG Synthesizer Register,Set the multiplier register
                                //VCOFRQ[1:0] = 0b01,48MHz < fVCO<= 80MHz
                                //SYNDIV[5:0] = 0b000100,SYNDIV = 4

    REFDV   = 0x81;             //S12XECRG Reference Divider Register,Set the divider register
                                //REFFRQ[1:0] = 0b10,6MHz < fREF <= 12MHz
                                //REFDIV[5:0] = 0b000001,REFDIV = 1

    POSTDIV = 0;                //S12XECRG Post Divider Register,Set the post divider register
                                //POSTDIV[4:0] = 0b00000,POSTDIV = 0,If POSTDIV = $00 then fPLL is identical to fVCO (divide by one).

    PLLCTL  = 0xC1;             //S12XECRG IPLL Control Register
                                //Clock monitor is enabled
                                //IPLL is turned on
                                //FM off
                                //Fast wake-up from full stop mode is disabled
                                //RTI stops running during Pseudo Stop Mode
                                //COP stops running during Pseudo Stop Mode
                                //Detection of crystal clock failure forces the MCU in Self Clock Mode
    while(CRGFLG_LOCK == 0);    //Wait until the PLL is within the desired tolerance of the target frequency
    CLKSEL  = 0x80;             //S12XECRG Clock Select Register,Select clock source from PLL
                                //System clocks are derived from PLLCLK (fBUS = fPLL / 2).

/*  High Temperature Control */
    VREGHTCL= 0x10;

/*  Interrupt Enable Register */
    CRGINT &= (unsigned char)~(unsigned char)0x12;

/*  VREGCTRL - Control Register */
    VREGCTRL &= (unsigned char)~(unsigned char)0x02;

/*  CRG COP Control Register */
    COPCTL = 0x00;

/*  Interrupt Control Register */
    IRQCR &= (unsigned char)~(unsigned char)0x40;

/*  Jump to C startup code */
    asm jmp _Startup;
}

#pragma CODE_SEG DEFAULT


/*
*********************************************************************************************************
* Description: Cpu_Delay100US
* Note: Fbus = 40M
*********************************************************************************************************
*/
#pragma MESSAGE DISABLE C5703

void Cpu_Delay100US(uint16_t us100) {
   asm {
    LOOP:
        PSHD                                /* (2 c: 50 ns) backup D */
        LDD     #$0532                      /* (2 c: 50 ns) number of iterations */
    LOOP1:
        DBNE    D,LOOP1                     /* (3 c: 75 ns) repeat 1330x */
        PULD                                /* (3 c: 75 ns) restore D */
        DBNE    D,LOOP                      /* us100 parameter is passed via D register */
    }
}

#pragma MESSAGE DEFAULT C5703
