#include <stdio.h>
#include <string.h>
void main()
{
	char str[30];
	int i,k=0,n;

	 printf("������һ���ַ���:\n");

	 gets(str);

	n=strlen(str);

	 for(i=0;i<n;i++)
	 {
	    if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
		  {
			str[k]=str[i];
			 k++;
		 } 
	}     
	 str[k]='\0';
	printf("���:%s\n",str);
      
}
