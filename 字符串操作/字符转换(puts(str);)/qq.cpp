#include<stdio.h>
void main()
{
	char str[80];
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if (str[i]>='A'&& str[i]<='Z') 
			str[i]+=32;
		else if (str[i]>='a'&& str[i]<='z') 
			str[i]-=32;
	}
	puts(str);
}