#include <stdio.h>

extern int i;

int i = 1;

void main() {

	printf("val : %d ", 1 ^4);
	printf("val of i : %d\n", i);
}
