#include <stdio.h>


void main() {

//printf("\033[22;34mHello, world!\033[0m"); 

		char msg[256];
                strcpy(msg, "echo -e \"\\033[31m reboot system \\e[0m Rebbot system\"");
                printf("msg is : %s \n", msg);
                system(msg);
}
