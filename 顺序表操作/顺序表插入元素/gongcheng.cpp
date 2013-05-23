#include<stdio.h>
#include<malloc.h>
int main()
{
	int x,i,j,sq_num=0,*sq,y,sq_max=100;

	sq=(int *)malloc(sizeof(sq_max));

	printf("输入元素个数:\n");
	scanf("%d",&sq_num);
	
	printf("输入数组元素:\n");
	for(i=0;i<sq_num;i++)
		scanf("%d",&sq[i]);
	
	printf("输入要插入的数:\n");
	scanf("%d",&x);

	printf("输入要插入的位置:\n");
	scanf("%d",&y);
	
	if( y < 1 || y > sq_num + 1)
		printf("输入有误!\n");

	else if( sq_num == sq_max )
		printf("输入有误!\n");
	
	else
	{
		for( j = sq_num; j >= y; j-- )
		{
			sq[j] = sq[j-1];
		}
	sq[y - 1] = x;
	
	printf("输出:\n");
	for( i = 0; i < sq_num + 1; i++)
		printf("%d ",sq[i]);
		printf("\n");
	}
	return 0;
}
