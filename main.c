/******************** (C) COPYRIGHT 2011 蓝宙电子工作室 ********************
 * 文件名       ：main.c
 * 描述         ：工程模版实验
 *
 * 实验平台     ：landzo电子开发版
 * 库版本       ：
 * 嵌入系统     ：
 *
 * 作者         ：landzo 蓝电子
 * 淘宝店       ：http://landzo.taobao.com/
 * 捕食者摄像头PIN定义：SCL PT2; SDA PT3;HREF PTH7;VSYNC PTH6;Y0-Y7 :PBO-PB7 ;
                         用于采集数据代码

**********************************************************************************/
#include "includes.h"
#include "calculation.h"
#include "Direct.h"
#define Half_Width 15

/*
*********************************************************************************************************
* Description: Data
*********************************************************************************************************
*/
extern uint8_t Timer1sFlag;
extern uint8_t Timer20msFlag;
extern uint8_t Timer10msFlag;
extern uint8_t Timer5msFlag;

 extern  uint8_t Imagine_OK;
extern uint8_t  Dataflag ;
extern uint8_t  DataLine ;

extern uint8_t  lineCount  ;

unsigned char  ADdata[40][140] ={ 0  } ;        //黑线AD数组存储 
uint16_t ATemp ,ATemp0, ATemp1;

uint8_t CKECK  ;


/*
*********************************************************************************************************
* Description: main
*********************************************************************************************************
*/
void main(void) {
    uint8_t ww=0;      
    uint8_t zz=0;
    uint8_t Min=0;
    uint8_t Max=0;
    uint8_t Mid=0;
    DisableInterrupts
    
    
    SCI0_Init();
   
   
    /***************************/
    //初始化摄像头采样
    /***************************/
    CD_init ();         //摄像头采集初始化  成像图像为140*40
                        //具体变量定义在 includes.h
                        //#define  DATALINE   40 
                        //#define  DATACOUNT  140
                        //更改events.C中的SamplingTab1数组的数值可以改变其采用点
                        //相应的DATALINE做修改
    PIT_Init();
    DDRK_DDRK3 = 1;
    PORTK_PK3=0;
    IICWriteGpio_inint() ;
    /*****************************************************
    while循环部分用于配置IIC数据
    将这部分处于屏蔽状态，摄像头转接板开关拨到MM即默认状态
    *****************************************************/
    
  while(CKECK == 0) {
    CKECK = LandzoIICEEROM_INIT();

  }
  PORTK_PK3=1;
    PIFH=0x80|0x40;
    PIEH=0x40;    
    EnableInterrupts;

    for(;;) {
    
              
      if( Imagine_OK) {            //最轻级任务
         
         
          Imagine_OK = 0 ;
          
         /* */
          PIEH = 0X00 ;  
          
          
            SCI0_SendChar1(0xff);
                              
         
          for(ww=0;ww<40;ww++) {
            
         for( zz = 0 ; zz < 139 ; zz ++ )
        {     
               if(ADdata[ww][zz]>Max)
                Max=ADdata[ww][zz];
               if(ADdata[ww][zz]<Min)
               Min=ADdata[ww][zz];
         }
        
          }
           Mid=(Max+Min)/2;   //中间值
          for(ww=0;ww<40;ww++) {
            
         for( zz = 0 ; zz < 140 ; zz ++ )
        {     
               
              if(ADdata[ww][zz]> Mid)
                  ADdata[ww][zz] = 0xf0 ;
               else 
                  ADdata[ww][zz] = 0x00 ;  
      //     SCI0_SendChar1(ADdata[ww][zz]);  //软件中间值二值化 帧
      
        }
        
          }
         
         Imageprocess();
             for(ww=0;ww<40;ww++) {
            
         for( zz = 0 ; zz < 140 ; zz ++ )
        {  
           
           SCI0_SendChar1(ADdata[ww][zz]);    
              
        }
        
          }
           
          
     
     
     

                    
        PIEH = 0X40 ;
        PIFH = 0X40 ;
        //DataLine = 0 ;  
          
      }
            
//1S Timer
        if(Timer1sFlag!=0) {
         Timer1sFlag = 0;
   //       SCI0_SendChar1(CKECK);

     } 
 
      
//20ms Timer
        if(Timer20msFlag!=0) {
            Timer20msFlag = 0;


      }
      

//10ms Timer
        if(Timer10msFlag!=0) {
    //      SCI0_SendChar1(5);
            Timer10msFlag = 0;

        } 
        
//10ms Timer
        if(Timer5msFlag!=0) {
            Timer5msFlag = 0; 

        }

    }
}


