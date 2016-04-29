#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

#if 0
	char str[2] = {2,44};


short x;

	x = *(short *) str;

	
#if 0
	str[1] = 3;
	str[2] = 4;

	char str1[5];
	 str1[0] = 0;
	str1[1] = str[1];
	 str1[2] = str[2];	

#endif

//strtol(str, NULL, 10);
	 
//	strcpy(&str1, &str[1], 2);	
//printf("%d \n", atoi(str));

	printf("%x", x);
#endif



char arr[2];

arr[0] = 0x44;
arr[1] = 0x02;

int x;

x = arr[0] | (arr[1] << 8);

printf("0x%x \n", x);
}
