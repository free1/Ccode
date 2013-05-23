#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int row, column;
	int **p = NULL;
	int i;
	int j;
	printf("Please input the row of array:\n");
	scanf("%d", &row);
	p = (int**) malloc (row * sizeof(int));
	printf("Please input the column of array:\n");
	scanf("%d", &column);
	for(i = 0; i < row; i++)
	{
		*(p+i) = (int*) malloc (column * sizeof(int));
	}
	for(i = 0; i < row; i++)
		for(j = 0; j < column; j++)
			scanf("%d", *(p+i)+j);
		printf("%d\n", *((*p+1)+2));
		return 0;
}
