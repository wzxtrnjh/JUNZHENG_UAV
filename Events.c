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
* Description: Global variable
*********************************************************************************************************
*/



//Timer
uint8_t Timer1sFlag = 0;
uint16_t Timer1sCnt  = 0;
uint8_t Timer5msFlag = 0;
uint8_t Timer5msCnt  = 0;
uint8_t Timer10msFlag = 0;
uint8_t Timer10msCnt  = 0;
uint8_t Timer20msFlag = 0;
uint8_t Timer20msCnt  = 0;
 uint8_t      Imagine_OK=0;
//AD 采集
extern unsigned char  ADdata[40][140] ;

uint8_t  *ADdataADD ;


uint16_t  SamplingTab1[] = {   96,99,102,105,108,111,114,117,
                               120,123,127,131,135,139,143,147, 
                               151,155,159,163,167,171,175,179,  
                               183,187,191,195,199,203,207,211,   
                               215,219,222,225,228,231,234,237   
                            };


uint8_t RowGet=0;    


/*
*********************************************************************************************************
* Description: PTHinterrupt
* Note: 5ms at 40M
*********************************************************************************************************
*/
#pragma CODE_SEG __NEAR_SEG NON_BANKED

__interrupt void PTHintIntISR(void) {
     static uint16_t Line_Count=0;
      int i;
      //行中断
  if(PIFH & 0x80)  {
  
 
     
      PIFH = 0X80 ;
      Line_Count++ ;
       if(Line_Count == (SamplingTab1[RowGet]))  {
    //    for( i = 120;i > 0;i--);   //控制图像左右移

       
          

           
      
       
        ADdataADD =&(ADdata[ RowGet][0]);
   
   
       
        asm{
       
          
       
          LDX  ADdataADD 


           /*//0*/
        
          
           
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          MOVB PORTB, 1,X
          
          //1 -10
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          
          //11-20
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          
          //21-30
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          
          //31-40          
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
                    
          //41-50
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          
          //51-60          
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+ 
          
           //61 -70
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
         
          //71-80
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          
          //81-90
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
                    
          //91-100
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
                   
          //100-110
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
                     
          //111-120
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+ 
            
          //121-130
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+  
          
          //131-140
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
          MOVB PORTB, 1,X+
                    
 //        MOVB 0xff, 1,X+     //用于图像显示

          
          
                                             
          
        }
        // SCI0_SendChar1(ADdata[ RowGet][0]) ;
        RowGet++;
        if(RowGet==40){
        RowGet=0;
        PIEH &= 0X3f ;
        Imagine_OK=1;
           
        }
        
      }
    
   //   SCI0_SendChar1(Line_Count) ;
     
        
  } 
    if(PIFH & 0x40){
      PIFH = 0X40 ;
      PIEH=0x00;  
      PIEH = 0X80 ;   /**/
  
      
      Line_Count=0;

  }                                
    
    
}


   
#pragma CODE_SEG DEFAULT


/*
*********************************************************************************************************
* Description: PITCh0IntISR
* Note: 5ms at 40M
*********************************************************************************************************
*/
#pragma CODE_SEG __NEAR_SEG NON_BANKED

__interrupt void PITCh0IntISR(void) {

    PITTF_PTF0 = 1;

    if(++Timer1sCnt == 200) {
        Timer1sCnt  = 0;
        Timer1sFlag = 1;
    }

    if(++Timer20msCnt == 4) {
        Timer20msCnt  = 0;
        Timer20msFlag = 1;
    }

    if(++Timer10msCnt == 2) {
        Timer10msCnt  = 0;
        Timer10msFlag = 1;
    }


    if(++Timer5msCnt == 1) {
        Timer5msCnt  = 0;
        Timer5msFlag = 1;
    }
}

#pragma CODE_SEG DEFAULT


