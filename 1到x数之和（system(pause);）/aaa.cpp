#include <stdio.h>
#include<stdlib.h>
void main()
{
	int x,i,y=0;
	printf("请输入一个数字:\n");
	scanf("%d",&x);
	i=x;
	while(x>0) 
	{
		 y += x;
		 x--;
	}   
	printf("1到数字%d的和是:%d\n",i,y);  
	system("pause");
}