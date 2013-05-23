#include<stdio.h>

void zhhuan(int n,int *p)
{
	int i=0, j;

	while(n)
	{
		*(p+i)=n%10;
		n/=10;
		i++;
	}
}

void main()
{
	int arr[5]={0}, i;

    zhhuan(123,arr);	

	for (i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}