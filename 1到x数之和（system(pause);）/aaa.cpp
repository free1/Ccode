#include <stdio.h>
#include<stdlib.h>
void main()
{
	int x,i,y=0;
	printf("������һ������:\n");
	scanf("%d",&x);
	i=x;
	while(x>0) 
	{
		 y += x;
		 x--;
	}   
	printf("1������%d�ĺ���:%d\n",i,y);  
	system("pause");
}