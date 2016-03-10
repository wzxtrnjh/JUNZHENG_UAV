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
#include "calculation.h"

/*********************************************************** 
函数名称：LCD_KEY_init
函数功能：
入口参数：
出口参数：无 
备 注： 
***********************************************************/
void LCD_KEY_init (void){
  
  
 //     pit_init_ms(PIT2, 5);                                  //初始化PIT2，定时时间为： 5ms ,按键用定时器
     /************************
     液晶屏初始化
    ************************/
   // gpio_init (PORTC , 14, GPO, HIGH) ;
                                                          
//    LCD_init() ;  
     /************************
     按键初始化
    ************************/
  //  gpio_Interrupt_init(PORTD , 8, GPI, EITHER) ;

}

/*********************************************************** 
函数名称：CCD_init
函数功能：
入口参数：
出口参数：无 
备 注：   PH_Init摄像头采集口硬件初始化程序 PH7 行中断 ，PH6场中断
***********************************************************/

void CD_init(void) {
     PTH  = 0X00 ;  /* Set PH6,PH7 interrupt */
     DDRH = 0X00 ;   /* Set PH6,PH7 input */
     PERH = 0Xc0 ;   /*  PH6,PH7 PULL enabled */
     PPSH = 0X80 ;   /*  PH6 pull-up device is selected; rising edge selected
                       ,PH7 pull-up device is selected; falling edge selected */
     PIEH = 0XC0 ;   /* PH6,PH7 interrupt  enabled */  
     PIFH = 0XFF ;    
     DDRB = 0X00 ;     //初始化Y0-Y7采集端口     
     INT_CFADDR = 0xcc&0xf0 ;   //初始化中断优先级
     INT_CFDATA6 = 0x6 ;        //初始化中断优先级                             
}
/*********************************************************** 
函数名称： SpeedIN_init
函数功能：
入口参数：
出口参数：无 
备 注： 脉冲计数初始化
***********************************************************/
void SpeedIN_init(void) {
     
     TIOS_IOS0 = 0 ;
     TCTL4_EDG0A = 1 ;          //下降沿捕获
     TCTL4_EDG0B = 0 ;          //下降沿捕获
     PACTL_CLK0 = 0 ;
     PACTL_CLK1 = 0 ;     
     TSCR2_PR = 1;       //Bus Clock / 1,40M / 1 = 40M
     TIE_C0I = 1;        //Enable Ch0 interrupt.
  //   TSCR2_TOI = 1;      //Main timer overflow interrupt enable.
     TSCR1_TEN = 1;      //Enable Timer.
}
/*********************************************************** 
函数名称：PWM_init
函数功能：
入口参数：
出口参数：无 
备 注： 舵机位PWM,电机为PWM5
***********************************************************/
void PWM_init (void){

     PWMPOL |= 0X22 ;      // 初始PWM1、5输出高
     PWMCLK |= 0X22 ;      //SB、 SA时钟
     PWMCTL |= 0x50 ;      // 连接ch0,ch1, 连接ch4、ch5
     PWMPRCLK = 0x00 ;
     PWMSCLA = 0X05 ;      // SA=A/(2*5)=A/10
     PWMSCLB = 0X05 ;      // SB=B/(2*5)=B/10
     PWMPER01 = 50000;     // f=(40M/50000/10)=80HZ 
    // PWMPER23 = 500;       // f=(40M/500/10)=80KZ  
     PWMPER45 = 500;       // f=(40M/500/10)=80KZ 
         
     PWMDTY01 = MIDSTRING;  // MIDSTRING;     
   //  PWMDTY23 = 0;
     PWMDTY45 =  0;
     PWME = 0X22 ;   

     PTP  |= 0X50 ;
     DDRP |= 0X50 ; 
}
