#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,*p=0,i;
	printf("��������Ԫ�ظ�����\n");

	/*��������Ԫ�ظ���,���浽����num��*/
	scanf("%d",&num);

	/*��̬��������洢�ռ�*/
	p = (int *)malloc(sizeof(int)*num);

	printf("��������Ԫ��:\n");

	for(i=0;i<num;i++)
	{
		scanf("%d",&p[i]);
	}
	/*�������*/

	printf("�������Ԫ��:\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",p[i]);
	}
	/*ɾ����̬����������*/
	free(p);
	return 0;
} 