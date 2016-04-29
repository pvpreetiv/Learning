#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	//char str[] = "HW_REV: 3.0; VENDOR: STMicroelectronics, Inc.; BOOTR: 12.1; SW_REV: 30.23.1-SDK2-20.0_INT_002_TC; MODEL: STiD127c1.2B2147";


	char str[] = "HW_REV: 3.0; VENDOR: STMicroelectronics, Inc.; BOOTR: 12.1; SW_REV: 30.23.1-SDK2-20.0_INT_002_TC; MODEL: STiD127c1.2B2147";
	char *str1, *token;

	printf("orig str is : %s\n", str);

	token = strtok(str, ";");
	
	while (token != NULL)
	{
		token = strtok(NULL, ";");
		printf("befor check token value is%s\n", token);
                if (!strncasecmp (token, " SW_REV",7)) {
                printf ("********\n");
//		str1 = strstr(token, "SW_REV");
                str1 = strtok(token, ":");
		if(str1!= NULL) {
			printf("str1 : %s\n", token);
                }
		}
		//token = strtok(NULL, ";");
		printf("after check token value is%s\n", token);
	}
}


