#include<stdio.h>
void main()
{
	int p(int a[],int low,int high);
	void q(int a[],int low,int high);
	int a[10];
	int i;
	printf("输入10个数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	p(a,1,10);
	q(a,1,10);
	printf("排好序后的数:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
}
int p(int a[],int low,int high)
{
	int key=a[low],p;
	while(low<high)
	{
		while(low<high&&a[high]>=key)
			--high;
		p=a[low];
		a[low]=a[high];
		a[high]=p;
		while(low<high&&a[low]<=key)
			++low;
		p=a[high];
		a[high]=a[low];
		a[low]=p;
	}
	a[low]=key;
	return low;
}
void q(int a[],int low,int high)
{
	int j;
	if(low<high)
	{
		j=p(a,low,high);
		q(a,low,j-1);
		q(a,j+1,high);
	}
}
