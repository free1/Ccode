#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int redarray[34] = {0};
	int red[6];
	int i = 0;
	int j = 0;
	int num;
	srand(time(NULL));
	for(i = 0; i < 6; i++)
	{
		num = rand() % 33 + 1;
		if(redarray[num])
			i--;
		else
			redarray[num] = 1;
	}
	for (i = 1; i < 34; i++)
	{
		if (redarray[i])
		{
			red[j] = i;
			j++;
		}
	}
	for(i = 0; i < 6; i++)
		printf("%d   ", red[i]);
	printf("\n");
	system("pause");
	return 0;
}�����ǿ飬��ԭ���ǿ�����һ���洢34�����������飬��ʼΪ0�������������������Ϊ1��֮��if�ж��Ƿ��ظ�������ظ�������ѭ��


��ʼ��ֵredarrayȫ��0
for(i = 0; i < 6; i++)
	{
		num = rand() % 33 + 1;
		if(redarray[num])
			i--;
		else
			redarray[num] = 1;
	}
�����ȡ�����������������redarray������±������ظ�ʱredarray�е�num��Ԫ����1�����ظ�ʱ��Ҳ����redarray[num]==1ʱ��i--���൱������������֡�
	for (i = 1; i < 34; i++)
	{
		if (redarray[i])
		{
			red[j] = i;
			j++;
		}
	}
�������Ȳ���redarray������Ԫ����1�ģ���Ԫ����1ʱ�Ͱ��±��red���鵱��Ԫ��
Ҳ����˵redarray��������1��Ԫ�ص��±굱��red����Ԫ��
