#include<stdio.h>
#include<malloc.h>
void main()
{
	int *la,*lb,*lc;
	int i,j=1,m=1,k=0,la_len,lb_len,lc_len;

	printf("输入la元素个数:\n");
	scanf("%d",&la_len);
	la=(int *)malloc(sizeof(int)* la_len);
	printf("输入la的元素:\n");
	for(i=0;i<la_len;i++)
		scanf("%d",&la[i]);

	printf("输入lb元素个数:\n");
	scanf("%d",&lb_len);
	lb=(int *)malloc(sizeof(int)* lb_len);
	printf("输入lb的元素:\n");
	for(i=0;i<lb_len;i++)
		scanf("%d",&lb[i]);

	lc_len=la_len+lb_len;
	lc=(int *)malloc(sizeof(int)* lc_len);

	while((j<=la_len)&&(m<=lb_len))
	{
		for(j=0;j<la_len;j++)
			for(m=0;m<lb_len;m++)
			{
				if(la[j]<=lb[m])
				{
					*lc=la[j];
				}
				else if(la[j]>lb[m])
				{
					*lc=lb[m];
				}
				lc++;
			}
	
	}
	while(j<=la_len)
	{
		for(i=la_len;i<=lb_len;i++)
			*lc=lb[i];
			lc++;	
	}
	while(m<=lb_len)
	{
		for(i=lb_len;i<=la_len;i++)
			*lc=la[i];
			lc++;
	}



	printf("输出lc:\n");
	for(i=0;i<k;i++)
		printf("%d ",lc[i]);
}