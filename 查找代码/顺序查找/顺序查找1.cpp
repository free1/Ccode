#include <stdio.h>
void main()
{
	int search(int a[], int x);                                                   /*����*/
	int a[10];
	int x, i, y;
	printf("������10������\n");
	for (i = 0;i < 10; i++)
		scanf("%d",&a[i]);
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &x);                                                              /*����*/
	y=search(a, x);
	if(y == -1)
		printf("������û���������\n");
	else
		printf("���ҵ���%d������ĵ�%d��\n",x,y);
}                                                     
int search(int a[], int x)                                                           /*����*/
{
	int i, f;
	for (i = 0; i < 10; i++)
	{
		if (a[i] == x)
		{
			f = i + 1;
			break;
		}
		else
			f=-1;
	}
	return (f);
}