#include<stdio.h>
#include<malloc.h>
int main()
{
	int sq_max=5,i,*sq,x,y,j;
	sq=(int *)malloc(sizeof (int)*sq_max);

	printf("�������Ԫ��:\n");
	for(i=1;i<=sq_max;i++)
	scanf("%d",&sq[i]);

	printf("����Ҫɾ��Ԫ�ص����:\n");
	scanf("%d",&x);

	if(x<1||x>5)
		printf("��������!\n");
	else
	{
		for(j=1;j<=x;j++)
			y=sq[x];

		printf("Ҫɾ��������:\n");
		printf("%d\n",y);
		for(i=x;i<sq_max;i++)
			sq[i]=sq[i+1];

		printf("���ɾ���������:\n");
		for(i=1;i<sq_max;i++)
			printf("%d ",sq[i]);

		printf("\n");
	}
	return 0;
}
