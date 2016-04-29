#include <stdio.h>
#include <stdbool.h>

void main()
{
	unsigned char num;
	printf("enter any number\n");
	scanf("%c", &num);

	if(num == '0' )
		printf("boolean val: %c", num);
}
