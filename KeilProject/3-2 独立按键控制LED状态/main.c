#include <REGX52.H>

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
	while(1){
		if(P3_1==0)
		{
			Delay(10);
			while(P3_1==0);
			Delay(10);
			P2_0=~P2_0;
		}
	
	}
	
	
}
