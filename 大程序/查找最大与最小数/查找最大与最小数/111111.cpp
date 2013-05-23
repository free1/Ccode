#include<stdio.h>
#include<malloc.h>
#include<math.h>
void sort(int b[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
	printf("输出数的个数:\n");
	printf("%d",n);
	printf("\n");
	printf("输出整理好的数:\n");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
}
void ispnum(int a[])
{
	int *b;
	b=(int *)malloc(sizeof(int)*15);
	int i,j,num=0,n=0;
	for(i=0;i<15;i++)
	{
		num=a[i];
		for(j=2;j<=num;j++)
		{
			if(num%j==0)  break;
			
		}
		if(j==num)
		{
			b[n]=num;
			n++;
		}
	}
	sort(b,n);
}
int main()
{
	int a[15];
	int i;
	printf("请输入15个整数:\n");
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
	printf("输入的15个数字是:\n");
	for(i=0;i<15;i++)
		printf("%d ",a[i]);
	printf("\n");
	ispnum(a);
	return 0;
}