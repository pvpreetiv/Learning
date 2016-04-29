#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
#if 0
	int setFreq[10];
	setFreq[]  = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	return 0;
#endif

	char abc = 10;
	int arr[abc] = {1, 2,3,4,5, 6, 7, 0,1, 2};
	char setFreq[10][10];
	int i = 0;

	for(i =0; i< 10; i++)
		strcpy(setFreq[i], "hello");

	for(i =0; i< 10; i++)
		printf("%s \t", setFreq[i]);

	for(i =0; i< 10; i++)
		printf("%s \t", arr[i]);
}
