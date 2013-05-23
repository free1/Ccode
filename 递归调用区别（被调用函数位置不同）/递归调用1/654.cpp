#include<stdio.h>
int write(int x)
{
	int j;
	if(x!=0)
	{
		write(x-1);                                                 /*Çø±ð*/
		for(j=1;j<=x;j++)
			printf("%3d",x);
			printf("\n");

	}
	return 0;
}
void main()
{
	int x=5;
	write(x);
}