#if 0

#include <stdio.h>
void main()
{
	unsigned short a = 128;
	int b = 3;
	
	printf("short : %hu size : %d \n", a, sizeof(a));
	printf("short as int : %d size : %d \n", a, sizeof(a));
	printf("int : %d size : %d \n", b, sizeof(b));
	printf("int as short : %hu size : %d \n", b, sizeof(b));
}
#endif



#include<stdio.h>
int main(int argc, char* argv[]){
	int i;
    unsigned short int num1 = 65534;
    unsigned int good_num1 = 65534;
    printf("\nSize of unsigned short int num1 \t\t=\t %d bytes", sizeof(num1));
    printf("\nSize of unsigned int good_num1 \t=\t %d bytes", sizeof(good_num1));
    printf("\n\nTrue value(good_num1)\t\t value stored in num1\n");
    for( i=0; i<20; i++){
        printf("%d\t\t\t\t\t%d\n", good_num1, num1);
        num1++;
        good_num1++;
    }
    return 0;
}
