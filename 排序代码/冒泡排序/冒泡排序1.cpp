#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("输入10个数字\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("排好序后的数\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}