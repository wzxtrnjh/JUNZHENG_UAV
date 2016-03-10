#include "Direct.h"
 extern unsigned char ADdata[40][140];
 unsigned char       Line_center[40]={0}, Line_left[40]={0},Heat_left[40]={0},Line_right[40]={0},Heat_right[40]={0};


/********************************************************************
                       方向控制函数（内部调用）
********************************************************************/
 
/*void Direction_Ctr(void)
{
 signed char cLost;            // 丢线行
    int nSlope;          // 斜率
     int nLastError;           // 最终的方向偏差 
     cLost = Imageprocess();
 } */
 
void Imageprocess(void) 
{    unsigned char *pucTemp1;
unsigned char  left,right,i,j,wupan_buxian_left_flag,j_temp_left,Per_LineHeat_left_Flag ,left_flag,wupan_flag,wupan_buxian_right_flag,j_temp_right,Per_LineHeat_right_Flag ,right_flag ;
    signed int n_left,n_right,temp;                 //循环变量//左右位置//暂存
   unsigned char  row_lost=0;	
    left=0;
    right=IMAGE_COLUMN-2;
    for(i=IMAGE_ROW-1;i>IMAGE_ROW-16;i--)  //找5次     //关于行！！！
    {
       pucTemp1 = ADdata[i];
       for(j=0;j<114;j++) 
       {
          if((*(pucTemp1 + j )==0xf0)&&(*(pucTemp1 + j + 1 )==0xf0)&&(*(pucTemp1 + j +2)==0xf0)&&(*(pucTemp1 + j+4 )==0xf0)&&(*(pucTemp1 + j+5 )==0xf0)&&(*(pucTemp1 + j+6 )==0xf0)) {
           Per_LineHeat_left_Flag=1;//白带预判断
           j_temp_left=j;
          break;
          }
          j_temp_left=54;
       }
       if(Per_LineHeat_left_Flag==1){
       Per_LineHeat_left_Flag=0;
        for(j=j_temp_left;j<125;j++) {
            if((*(pucTemp1 + j )==0x00)&&(*(pucTemp1 + j +1)==0x00)&&(*(pucTemp1 + j +2)==0x00)){
                  if((*(pucTemp1 + j+6 )==0xf0)&&((*(pucTemp1 + j +8)==0xf0)||(*(pucTemp1 + j +11)==0xf0)))  {
                   left=j;
                  left_flag=1;
                  break;
                  }
                  left=68;           //可能光太亮 中心线消失 到了白带边缘
                  left_flag=1;
                  wupan_flag=1; 
                   break;
            }
                  //中心线太细    或全白
                  left=68;           
                  wupan_buxian_left_flag=1; 
                  
        }
       } 
       else{
                  left=68;           
                  wupan_buxian_left_flag=1; 
       }
       
       
       
       Line_left[i]= left;
       Heat_left[i]=  j_temp_left;
    }
    
    
    //右边
    for(i=IMAGE_ROW-1;i>IMAGE_ROW-16;i--)  //找5次     //关于行！！！
    {
       pucTemp1 = ADdata[i];
       for(j=138;j> Line_left[i]+8;j--) 
       {
          if((*(pucTemp1 + j )==0xf0)&&(*(pucTemp1 + j-1 )==0xf0)&&(*(pucTemp1 + j -2)==0xf0)&&(*(pucTemp1 + j-4 )==0xf0)&&(*(pucTemp1 + j-5 )==0xf0)&&(*(pucTemp1 + j-6 )==0xf0)) {
           Per_LineHeat_right_Flag=1;//白带预判断
           j_temp_right=j;
          break;
          }
          j_temp_right=84;
       }
       if(Per_LineHeat_right_Flag==1){
       Per_LineHeat_right_Flag=0;
        for(j=j_temp_right;j>Line_left[i];j--) {
            if((*(pucTemp1 + j )==0x00)&&(*(pucTemp1 + j -1)==0x00)&&(*(pucTemp1 + j -2)==0x00)){
                  if((*(pucTemp1 + j-6 )==0xf0)&&((*(pucTemp1 + j -8)==0xf0)||(*(pucTemp1 + j -11)==0xf0)))  {
                   right=j;
                  right_flag=1;
                  break;
                  }
                  right=60;   //71        //可能光太亮 中心线消失 到了白带边缘
                  right_flag=1;
                  wupan_flag=1; 
                   break;
            }
                  //中心线太细    或全白
                  right=71;           
                  wupan_buxian_right_flag=1; 
                  
        }
       } 
       else{
                  left=65;  //71         
                  wupan_buxian_right_flag=1; 
       }
       
       
       
       Line_right[i]= right;
       Heat_right[i]=  j_temp_right;
    }
      for(i=IMAGE_ROW-1;i>IMAGE_ROW-16;i--){
      Line_center[i]= (Heat_right[i]+Heat_left[i] )/2;
      }
      
        for(i=IMAGE_ROW-1;i>IMAGE_ROW-16;i--)  //找5次    
    {
         ADdata[i][ Line_center[i]]=0x80;
         ADdata[i][ Heat_right[i]]=0xa0;
         ADdata[i][ Heat_left[i]]=0xa0;
    }
     
                      
  /*  for(i=IMAGE_ROW-6;i>IMAGE_ROW-10;i--)  //找5次     //关于行！！！
    {
        pucTemp1 = ADdata[i];    //这一行指针初始化       //指针指向初始化
      
        left_flag =0;
      	right_flag=0;
      	n_left=left-5;                           //基底行扩大范围位搜索
      	n_right=right+5;                          //可能要改
        if(n_left<1)
        {
           n_left=1;
        }
        if(n_right>IMAGE_COLUMN-2)
        {
           n_right=IMAGE_COLUMN-2;              //底线139不可靠
        }  
         
        for(j=Line_right[i+1][0];j>left-1;j--)        //中间往左     //别忘记对g_nLineCenter[40] 进行中心线起点初始化     以左右边沿为起点
	{
	     if(*(pucTemp1 + j )==0xf0)
	     {
		  left_flag=1;
		  left=j;
	          g_nLeftJin[i]=left;
		  break;
	     }
        }
        for(j=g_nLineCenter[i+1][1]-1;j<right+1;j++)    //中间往you
	{
	     if(*( pucTemp1 + j )==bbb)
	     {
		  right_flag=1;
		  right=j;
		  g_nRightJin[i]=right;
		  break;
	     }	*/		
	}
