#include <stdio.h>


void main() 
{

	struct a {
	char b; 
	int c;
	} abc, *d;


	printf("%d\n", sizeof(abc));

	d = malloc( sizeof(abc));
	abc.b =1;

	printf("%d \n", abc.b);
	d->b = 1;

	printf("%d \n", d->b);

}
