#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,*p=0,i;
	printf("输入数组元素个数：\n");

	/*输入数组元素个数,保存到变量num中*/
	scanf("%d",&num);

	/*动态分配数组存储空间*/
	p = (int *)malloc(sizeof(int)*num);

	printf("输入数组元素:\n");

	for(i=0;i<num;i++)
	{
		scanf("%d",&p[i]);
	}
	/*输出数据*/

	printf("输出数组元素:\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",p[i]);
	}
	/*删除动态创建的数组*/
	free(p);
	return 0;
} 