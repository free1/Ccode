#include <stdio.h>
#include <math.h>
void F(int m);
int prime(int m);
void main()
{
	int m;
	for (m=4;m<=1000;m+=2)
	{F(m);}		
		
}
void F(int m)
{
	int i,n;
	for (i=2;i<=m/2;i++)
       n=m-i;
	if (prime(i)&&prime(n))
		printf("%d=%d+%d\n",m,i,n);
}
int prime(int n)
{
	int y;
	for(y=2;y<=sqrt(n);y++)
	{if(n%y==0)
	return 0;}
		return 1;
} 