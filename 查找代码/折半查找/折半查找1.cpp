#include<stdio.h>
void main()
{
	int search(int a[],int n,int x);                                              /*����*/
	int i,x,z;
	int a[10];
	printf("����10��������:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("������Ҫ������:\n");
	scanf("%d",&x);                                                               /*����*/
	z=search(a,10,x);
	if(z==-1)
		printf("�޴���\n");
	else
		printf("Ҫ���ҵ���%d������ĵ�%d��\n",x,z);
}
int search(int a[],int n,int x)                                                   /*����*/
{
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
			return mid+1;                                                         /*����ѭ��*/                                                 
		else if(a[mid]>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;                                                                     /*����-1*/
}