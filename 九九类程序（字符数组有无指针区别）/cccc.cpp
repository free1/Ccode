#include "stdio.h"
#include<string.h>
void main()
{
    char *s[2]={"****","****"};
    while(*s[1] !='\0'){
    	printf("%s\n",s[0]+strlen(s[1])-1);
    	s[1]++;
    }
}