#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,word=0,num=0;
	char c;
	gets(s);
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(c==' ')
		{
			word=0;
		}
		else 
		{
			if(word==0)
			{
				word=1;
				num++;
			}
		}
	}
	printf("%d\n",num);
}