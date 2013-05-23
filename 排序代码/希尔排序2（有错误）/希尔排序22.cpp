#include<stdio.h>
void shsort(int a[],int n)
{
	int i,j,d;
	d=n/2;
	while(d>1)
	{
		for(i=d+1;i<=n;i++)
		{
			a[0]=a[i];
			j=i-d;
			while((j>0)&&(a[0]<a[j]))
			{
				a[j+d]=a[i];
				j=j-d;
			}
			a[j+d]=a[0];
		}
		d=d/2;
	}
}
void main()
{
	int a[10],i;
	printf("输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	shsort(a,10);
	printf("排好序的数为:\n");
	for(i=0;i<10;i++)
		printf("%d ",&a[i]);
}