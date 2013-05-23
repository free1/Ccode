#include<stdio.h>
#include<windows.h>
#define listsize 100
struct sqlist
{
	int data[listsize];
	int length;
};
void InsortList(struct sqlist*I,int t,int i)
{
	int j;
	if(i<0||i>I->length)
	{
		printf("插入位置不正确!");
		exit(1);
	}
	if (I->length>=100)
	{
		printf("超出表范围!");
		exit(1);
	}
	if(j=I->length-1;j=i;j--)
	{
		I->data[j+1]=I->data[j];
		I->data[i]=t;
		I->length++;
	}
}
void main()
{
	struct sqlist *sq;
	int i,n,t;
	sq=(struct sqlist*)malloc(size(struct sqlist));
	sq->length=0;
	printf("输入数据个数:\n");
	scanf("%d",&n);
	printf("输入数据:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		InsortList(sq,t,i);
	}
	printf("输出顺序表:\n");
	for(i=0;i<sq->length;i++)
	{
		printf("%d",sq->data[i]);
	}
}
