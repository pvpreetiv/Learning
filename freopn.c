#include <stdio.h>

void main()
{
	printf("Stdout is descriptor %d\n", fileno(stdout));
	freopen("/tmp/newstdout", "w", stdout);
	printf("Stdout is now /tmp/newstdout and hopefully still fd %d\n",
	   fileno(stdout));

//	freopen("/dev/stdout", "w", stdout);
//	printf("Now we put it back, hopefully its still fd %d\n",
//	   fileno(stdout));

}
