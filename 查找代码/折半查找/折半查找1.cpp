#include<stdio.h>
void main()
{
	int search(int a[],int n,int x);                                              /*声明*/
	int i,x,z;
	int a[10];
	printf("输入10个有序数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("输入想要查找数:\n");
	scanf("%d",&x);                                                               /*调用*/
	z=search(a,10,x);
	if(z==-1)
		printf("无此数\n");
	else
		printf("要查找的数%d在数组的第%d个\n",x,z);
}
int search(int a[],int n,int x)                                                   /*定义*/
{
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
			return mid+1;                                                         /*返回循环*/                                                 
		else if(a[mid]>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;                                                                     /*返回-1*/
}