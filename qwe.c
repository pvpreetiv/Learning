#include <stdio.h>
#include <string.h>

void main()
{
	char arr[10];

	arr[0] = 1;	
	arr[1] = 2;
	if(strlen(arr))
		printf("length is not null : %d", strlen(arr));	
	else
		printf("length is zero");
}
