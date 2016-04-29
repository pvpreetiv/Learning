#define FOREACH_FRUIT(FRUIT) \
        FRUIT(apple)   \
        FRUIT(orange)  \
        FRUIT(grape)   \
        FRUIT(banana)  \

#define GENERATE_ENUM(ENUM) ENUM,
#define GENERATE_STRING(STRING) #STRING,

enum FRUIT_ENUM {
    FOREACH_FRUIT(GENERATE_ENUM)
};

static const char *FRUIT_STRING[] = {
    FOREACH_FRUIT(GENERATE_STRING)
};


void main()
{

      char *ptr = FRUIT_STRING[0];
        int i =0;

        while (*ptr != '\0') {
                printf("%d : %s \n", i, FRUIT_STRING[i]);
		ptr++;
		i++;
        }

	
	printf("enum apple as a string: %s\n",FRUIT_STRING[1]);
	 printf("enum apple as an integer %d  %d", apple, orange); 
}



