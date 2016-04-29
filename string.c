#include <stdio.h>

void main() {


	char str[20];

	char str1[20];

//	memset(str, '\0', 20);

	memcpy(str1, str, 20);

	printf("str : %s\n", str);
}
