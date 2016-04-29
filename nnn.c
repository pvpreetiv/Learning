#include <stdio.h>


main()
{
 unsigned int j = 0;
 unsigned int *i = &j;

 printf("i:%x %p\n", *i, i );
 (*i)++;
 printf("i:%x %p\n", *i, i);


}
