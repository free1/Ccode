#include<stdio.h>
#include<malloc.h>
int main()
{
	int x,i,j,sq_num=0,*sq,y,sq_max=100;

	sq=(int *)malloc(sizeof(sq_max));

	printf("����Ԫ�ظ���:\n");
	scanf("%d",&sq_num);
	
	printf("��������Ԫ��:\n");
	for(i=0;i<sq_num;i++)
		scanf("%d",&sq[i]);
	
	printf("����Ҫ�������:\n");
	scanf("%d",&x);

	printf("����Ҫ�����λ��:\n");
	scanf("%d",&y);
	
	if( y < 1 || y > sq_num + 1)
		printf("��������!\n");

	else if( sq_num == sq_max )
		printf("��������!\n");
	
	else
	{
		for( j = sq_num; j >= y; j-- )
		{
			sq[j] = sq[j-1];
		}
	sq[y - 1] = x;
	
	printf("���:\n");
	for( i = 0; i < sq_num + 1; i++)
		printf("%d ",sq[i]);
		printf("\n");
	}
	return 0;
}
