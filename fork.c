#include <stdio.h>
#include <sys/types.h>

void main() {
	pid_t pid= fork();
	if(pid)
		printf("child process is created");
	else
		printf("parent process is created");
}
