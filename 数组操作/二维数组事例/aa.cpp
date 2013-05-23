#include"stdio.h" 
void main() 
{ 
	int a[3][3]; 
	int i,j; 
	printf("输入数字:\n"); 
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]); 
	printf("输出数组:\n");
	for(i=0;i<3;i++)
	{ 
		for(j=0;j<3;j++) 
		printf("%d ",a[i][j]); 
		printf("\n"); 
	} 
}