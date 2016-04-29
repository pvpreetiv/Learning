#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void test(char* val)
{
	bool* a = (bool*)val;
	printf("%d", *a);
	printf("%s", val);
	if (*a  ==1)
		printf("in test func");
}

void main()
{
	bool a =1;

char *str = "true";
printf("%lu", strlen(str));
	char *b = "true";
	test(b);

	
}


