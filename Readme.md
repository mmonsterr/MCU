# 单片机

## 点亮一个LED灯

<img src="./MCU.assets/image-20221220140151570.png" alt="image-20221220140151570" style="zoom:33%;" />

电阻的作用是限流

控制引脚输出高低电频 

配置P2口的寄存器的值

## 独立按键控制LED的亮与灭

<img src="./MCU.assets/image-20221220154939704.png" alt="image-20221220154939704" style="zoom:33%;" />

按下为低电频

**按键的抖动**

<img src="./MCU.assets/image-20221220161822815.png" alt="image-20221220161822815" style="zoom:25%;" />

首先一个大循环，判断是否按下
如果按下，if为true，则延时10ms进行过滤
继续循环判断当前是否是按下的状态，若松开则延时10ms过滤
进行取反

```c
while(1){
		if(P3_1==0)		//是否按下
		{
			Delay(10);
			while(P3_1==0);		//是否松开
			Delay(10);
			P2_0=~P2_0;			//执行按过之后的命令
		}
	
	}
```

