#include <stdio.h>
void main()
{
	int search(int a[], int x);                                                   /*声明*/
	int a[10];
	int x, i, y;
	printf("请输入10个数：\n");
	for (i = 0;i < 10; i++)
		scanf("%d",&a[i]);
	printf("输入想要查找的数：\n");
	scanf("%d", &x);                                                              /*调用*/
	y=search(a, x);
	if(y == -1)
		printf("数组中没有输入的数\n");
	else
		printf("查找的数%d在数组的第%d个\n",x,y);
}                                                     
int search(int a[], int x)                                                           /*定义*/
{
	int i, f;
	for (i = 0; i < 10; i++)
	{
		if (a[i] == x)
		{
			f = i + 1;
			break;
		}
		else
			f=-1;
	}
	return (f);
}