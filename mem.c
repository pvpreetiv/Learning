#include <stdio.h>

void main()
{
	char *arr = malloc(10);
	char *arr1 = malloc(10);

	strcpy(arr1, "hello user");

	printf("arr: %p \narr1 : %p\n", arr, arr1);
	memcpy(arr, arr1, 10);
	
	printf("arr: %s \narr1 : %s\n", arr, arr1);
	printf("arr: %p \narr1 : %p\n", arr, arr1);
}
