#include<stdio.h>
int main()
{
	float a[3][3]={{5.4,3.2,8},{6,4,3.3},{7,3,1.3}};
	float b[3][3]={0};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
   {
	   b[i][j]= a[i][j]/a[i][i];
   }
 }

for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
	   printf("%f  ",b[i][j]);
   }
   printf("\n");

 }
     
printf("\n");
return 0;
} 