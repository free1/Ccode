#include<stdio.h>
void main()
{
	int a[10];
	int i,j,k,t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
		k=i;
		for(j=i+1;j<10;j++)
			if(a[i]=a[j])
				k=i;
			if(k!=i)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		for(i=0;i<10;i++)
			printf("%d",a[i]);
}