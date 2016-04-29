#include <stdio.h>

void main()
{
	unsigned int n;
	unsigned int *a;
	int i;
	printf("%d   %d\n", sizeof(a), sizeof(*a));
	printf("uint %d   %d\n", sizeof(n), sizeof(&n));
	printf("int %d   %d\n", sizeof(i), sizeof(&i));


	unsigned long b;
	printf("size of long : %d \n", sizeof(b));
}
