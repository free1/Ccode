
#include<stdio.h>
int main(void)
{
	char answer ;
	do
	{
		int wide =0,length=0;
		printf("Please enter the length and wide:\n"); 
		scanf("%d,%d",&wide,&length);
		printf("\n矩形的面积为: %d\n",wide*length);
		printf("Do you want again?(Y/N)/n\n");
		fflush(stdin);
		scanf("%c",&answer);
	}while(answer=='Y');
	return 0;
} 
