#include<stdio.h>

int main()
{
	
	
	/* check which command is supported */
	if(system("ps -e > /dev/null 2>&1") == 0) {
		if (system(" ps -e | grep telnetd | grep -v grep > /dev/null 2>&1") == 0)
			printf("1 line no : %d\n", __LINE__);
		else
			printf("2 line no : %d\n", __LINE__);
	} else if(system("ps 2>&1 > /dev/null 2>&1") == 0) {
		if (system(" ps  | grep telnetd | grep -v grep > /dev/null 2>&1") == 0)
			printf("3 line no : %d\n", __LINE__);
		else
			printf("4 line no : %d\n", __LINE__);
	} else {
			printf("5 line no : %d\n", __LINE__);
		return -1;
	}

	return 0;

}
