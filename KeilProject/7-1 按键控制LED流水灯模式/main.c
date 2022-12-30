#include <REGX52.H>


void Timer0_Init(){
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;		//设置定时器模式
	TL0 = 0x66;		//设置定时初始值
	TH0 = 0xFC;		//设置定时初始值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	ET0=1;
	EA=1;
	PT0=0;

}

void main(){
	Timer0_Init();
	
	while(1){
	
	
	
	}

}

unsigned int T0Count;
void Timer0_Rountine() interrupt 1{
	TL0 = 0x66;		//设置定时初始值
	TH0 = 0xFC;		//设置定时初始值
	T0Count++;
	if(T0Count>1000){
		T0Count=0;
		P2_0=~P2_0;
	}
	

	
	
}