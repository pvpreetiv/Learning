#include <stdio.h>


void main()
{
	struct abc{
		char a:1;
	};

	struct abc abc1;

	abc1.a = 0;
	char new;

//	abc1.a = new;
//	new = abc1.a;

//new = abc1.a & 0xff;
//	if((abc1.a << 8) == 1)
//	printf("0x%x ", abc1.a);
//	else
		printf("else %x", abc1.a &0x01);

}
