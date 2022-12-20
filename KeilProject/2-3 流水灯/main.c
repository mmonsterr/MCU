#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main(){
	unsigned int i =0xFE;
	while(i!=0x7F){
		i=~((~i)<<1);
		P2=i;
		Delay500ms();
	} 
}
