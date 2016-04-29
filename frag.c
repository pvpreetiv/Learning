#include <stdio.h>

#define STPCPD_NVM_BUFFER_SIZE 1530
#define STPCPD_NVM_ACTUAL_BUF_SIZE 1525
int frag(unsigned char num_tlv_enteries, unsigned int tlv_size, unsigned char* tlv);

typedef struct data{
int offset;
int size;
};

main()
{
 FILE *fp = NULL;
 char buf[10000];
 int size;

 fp = fopen("tlvs.txt", "rb");
 size = fread(buf, 1, 10000, fp);

 printf("size:%d\n", size);
 frag(1, size, buf);
}

unsigned short load_data_le16(unsigned char *msg)
{
	unsigned short value;

	value = msg[0] << 8 | msg[1];
	printf("value:%x \n", value);
	return value;
}


int frag(unsigned char num_tlv_enteries, unsigned int tlv_size, unsigned char* tlv)
{
    int numFrag;
    int remain_bytes;
    unsigned short val = 0;
    int cnt=1;
    data dat[100];

	numFrag = (tlv_size/(STPCPD_NVM_ACTUAL_BUF_SIZE+1)) + 1;
	printf("num FRag : %d \n", numFrag);

	printf("tlv_size:%d\n", tlv_size);
	do {
		printf("val:%x\n", val);
		prev = val;
		curr = val += load_data_le16(&tlv[val+1]) + 3;

		
		if(val >= STPCPD_NVM_ACTUAL_BUF_SIZE)
		{
			dat[i].offset = STPCPD_NVM_ACTUAL_BUF_SIZE;
			dat[i].size = STPCPD_NVM_ACTUAL_BUF_SIZE;	
		}

	}while(val < tlv_size);
}

