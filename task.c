

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


#include <REGX52.H>
#include  <INTRINS.H>
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


void main()
{
	while(1)
{
	P2=0xFE;
	Delay500ms();
	P2=0xFD;
	Delay500ms();
	P2=0xFB;
	Delay500ms();
	P2=0xF7;
	Delay500ms();
	P2=0xEF;
	Delay500ms();
	P2=0xDF;
	Delay500ms();
	P2=0xBF;
	Delay500ms();
	P2=0x7F;
	Delay500ms();
}
}
