#include<stdio.h>
void swap(int a[],int i,int j)                                                 /*交换*/
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
void selsort(int a[],int n,int k)                                           /*k=incr增量寄存器*/
{
	int i,j;
	for(i=k;i<n;i+=k)
	for(j=i;(j>=k)&&(a[j]<a[j-k]);j-=k)
	swap(a,j,j-k);
}
void shellsort(int a[],int n) 
{
	int i,j;
	for(i=n/2;i>2;i/=2)
	for(j=0;j<i;j++)
	selsort(a,n-j,i);
	selsort(a,n,1);
}
int main() 
{
	int i;
	int a[10];
	printf("输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	shellsort(a, 10);
	printf("排好的数为:\n");
	for(i=0;i<10;i++)
		 printf("%d ", a[i]);
	printf("\n");
	return 0;
}