#include <REGX51.H>
void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms){
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	xms--;
	}
}
	
void main(){
	unsigned char LEDNum;
	P2=~0x01;
	
	while(1){
		if(P3_0==0){
				Delay(10);
				while(P3_0==0);
				Delay(10);
			
				LEDNum++;
				if(LEDNum>=8)
					LEDNum=0;
		
					
				P2=~(0x01<<LEDNum);
			}
		if(P3_1==0){
				Delay(10);
				while(P3_1==0);
				Delay(10);
			
				if(LEDNum==0)
					LEDNum=7;
				else
					LEDNum--;
				P2=~(0x01<<LEDNum);
			}
	}

}
