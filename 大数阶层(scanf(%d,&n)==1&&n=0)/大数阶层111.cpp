#include<stdio.h>
#define MAX 1000
void main()
{
	int n;
	printf("输入n的值:\n");
	while(scanf("%d",&n)==1&&n>=0)
	{
		int i,j;
		int a[MAX];      //存数运算结果
		int p,h;           //p存储当前结果的位数,h为进位
		a[1]=1;
		p=1;  
		for(i=2;i<=n;i++)   //循环与2,3,4.....n相乘
		{
			for(j=1,h=0;j<=p;j++)    //让a[]的每位与i相乘
			{
				a[j]=a[j]*i+h;
				h=a[j]/10;
				a[j]=a[j]%10;
			}
			while(h>0)         //如果h不为0
			{
				a[j]=h%10;
				h=h/10;
				j++;
			}
			p=j-1;            //将当前的位数赋给p
		}
		printf("输出结果:\n");
		for(i=p;i>0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
}