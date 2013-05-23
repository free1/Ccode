#include<stdio.h>
#include<malloc.h>
int main()
{
	int sq_max=5,i,*sq,x,y,j;
	sq=(int *)malloc(sizeof (int)*sq_max);

	printf("输入五个元素:\n");
	for(i=1;i<=sq_max;i++)
	scanf("%d",&sq[i]);

	printf("输入要删除元素的序号:\n");
	scanf("%d",&x);

	if(x<1||x>5)
		printf("输入有误!\n");
	else
	{
		for(j=1;j<=x;j++)
			y=sq[x];

		printf("要删除的数是:\n");
		printf("%d\n",y);
		for(i=x;i<sq_max;i++)
			sq[i]=sq[i+1];

		printf("输出删除后的数组:\n");
		for(i=1;i<sq_max;i++)
			printf("%d ",sq[i]);

		printf("\n");
	}
	return 0;
}
