

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


include <INTRINS.H>
void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	while(xms)
	{
	
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	xms--;
}
}

void main()
{
	while(1)
{
	P2=0xFE;
	Delay1ms(500);
	P2=0xFD;
	Delay1ms(500);
	P2=0xFB;
	Delay1ms(500);
	P2=0xF7;
	Delay1ms(500);
	P2=0xEF;
	Delay1ms(500);
	P2=0xDF;
	Delay1ms(500);
	P2=0xBF;
	Delay1ms(500);
	P2=0x7F;
	Delay1ms(500);
}
}