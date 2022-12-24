#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int PassWord,Count;

void main(){
	LCD_Init();
	LCD_ShowString(1,1,"PassWord");
	
	while(1){
		
		KeyNum=MatrixKey();
		if(KeyNum){
			
			if(KeyNum<=10 && Count<4){
				PassWord*=10;
				PassWord+=KeyNum%10;
				Count++;
				LCD_ShowNum(2,1,PassWord,4);
			}
			if(KeyNum==11){
				if(PassWord==2345){
					LCD_ShowString(2,6,"OK ");
					PassWord=0;
					Count=0;
					LCD_ShowNum(2,1,PassWord,4);
				}else{
					LCD_ShowString(2,6,"Err");
					PassWord=0;
					Count=0;
					LCD_ShowNum(2,1,PassWord,4);
				}
				
			}
			if(KeyNum==12){
					PassWord=0;
					Count=0;
				LCD_ShowString(2,6,"   ");
					LCD_ShowNum(2,1,PassWord,4);
				}
		}
	}

}