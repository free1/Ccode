#include<stdio.h>
void main()
{
	int i,j,k;
	int a[10];
	printf("����10����\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	{
		k=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>k))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	printf("�ź��������\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}