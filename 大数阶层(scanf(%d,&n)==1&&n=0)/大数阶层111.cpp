#include<stdio.h>
#define MAX 1000
void main()
{
	int n;
	printf("����n��ֵ:\n");
	while(scanf("%d",&n)==1&&n>=0)
	{
		int i,j;
		int a[MAX];      //����������
		int p,h;           //p�洢��ǰ�����λ��,hΪ��λ
		a[1]=1;
		p=1;  
		for(i=2;i<=n;i++)   //ѭ����2,3,4.....n���
		{
			for(j=1,h=0;j<=p;j++)    //��a[]��ÿλ��i���
			{
				a[j]=a[j]*i+h;
				h=a[j]/10;
				a[j]=a[j]%10;
			}
			while(h>0)         //���h��Ϊ0
			{
				a[j]=h%10;
				h=h/10;
				j++;
			}
			p=j-1;            //����ǰ��λ������p
		}
		printf("������:\n");
		for(i=p;i>0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
}