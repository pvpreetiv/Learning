
#include <stdio.h>
#include<string.h>

#if 0
void main()
{
	unsigned int i = 0;
	int *ptr;
	char* arr = "00010010000100100001001100010011";

	char* arr1;
	char *endptr;

	char *arr2 = "67";

//	printf("0x%x 0x%x 0x%x\n", arr, arr+1, arr+2);
//	printf("%d %d %s\n", arr[1], arr+1, arr+2);

	printf("len : %d \n", strlen(arr));

	for (i= 0; i < strlen(arr); i = i+4)
	printf("%d\t", arr[i]);

//i = (arr[3] << 24) | (arr[2] << 16) | (arr[1] << 8) | arr[0];
//	memcpy(&i, (void*)arr, sizeof(int));

//memcpy(&i, (int*)arr, sizeof(int));
i  = (arr[0] << 24) | (arr[1] << 16) | (arr[2] << 8) | arr[3];
//strtol(arr, &endptr, 10);
//	i = atoi(arr);
//	ptr = (int*)arr2;
//	printf("\n%x kjsks %s\t \n", arr1, endptr);

//	int j = 9;
//	ptr = (int*)arr;
	printf("%X", i);
//	printf("%d 0x%x  %p\n", j, j, j);
}
#endif


void main()
{
	char a = 0;
	unsigned char b = 0;

	printf("a= %x, b= %x\n", a, b);

	if(b == 0)
		printf("matched");
	else
		printf("not matched");
}
