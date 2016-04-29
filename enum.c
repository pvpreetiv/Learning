#include <stdio.h>

	enum hello {sunday, monday, tuesday};
#define str(abc) #abc
void main()
{
//	enum hello {sunday, monday, tuesday};
	
	enum hello h1;

	h1= sunday;
//	printf("%s", h1);

	printf("\n\n%s \n\n", str(h1));
	
}
