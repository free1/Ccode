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
}红球那块，我原先是开辟了一个存储34个整数的数组，初始为0；随机到这个数，数组变为1，之后if判断是否重复，如果重复，继续循环


开始赋值redarray全是0
for(i = 0; i < 6; i++)
	{
		num = rand() % 33 + 1;
		if(redarray[num])
			i--;
		else
			redarray[num] = 1;
	}
这随机取数，随机到的数就是redarray数组的下表，当不重复时redarray中第num个元素是1，当重复时，也就是redarray[num]==1时，i--，相当于重新随机数字。
	for (i = 1; i < 34; i++)
	{
		if (redarray[i])
		{
			red[j] = i;
			j++;
		}
	}
这句就是先查找redarray数组中元素是1的，当元素是1时就把下表给red数组当做元素
也就是说redarray数组中是1的元素的下标当做red数组元素
