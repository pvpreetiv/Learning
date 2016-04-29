#include <stdio.h>
#include <string.h>
#include <malloc.h>

#if 0
struct a
{
	char str[20];
} a1;

void main()
{
	char *src = NULL;

	struct a a2;

	printf("main : %p %s \n", &src, src);
	func(&src);
	
	printf("main: %p %s\n", &src, src);
	

printf("main: struct str : %s \n", a2.str);


}


void func(char** dest, struct a a3)
{
	char *a;
	
	printf("func: %p %s\n", dest, *dest);
	*dest = malloc(5);
	strcpy(*dest, "hello");
	strcpy(a3.str, "hello");
	printf("func : %p %s\n", dest, *dest);

}

#endif


void main() {

	char *fi;
	char str[10];
	
	strncpy(str, fi, 5);
//	strcpy(fi[1], "hello");

//	snprintf(str, 10, "%s", fi[0]);


//	printf("%s", str);
}
