#include <stdio.h>



char* hello()
{
	char* val;

	val = malloc(5);
	val[0] = 0x01;
	val[1] = 0x02;
	val[2] = 0x03;
	
	
}
void main()
{
	char *ret = malloc(3);
	ret = hello();
	
	

	printf("%x %x %x", ret[0] , ret[1], ret[2]);
}
