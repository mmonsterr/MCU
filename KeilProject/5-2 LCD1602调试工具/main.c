#include <REGX52.H>
#include "LCD1602.h"

void main(){
	LCD_Init();
	LCD_ShowString(1,1,"CYJEVEN");
	LCD_ShowString(2,1,"OscarLu 666");
	//LCD_ShowHexNum(2,1,0xA8,2);
	
	while(1);
	
}