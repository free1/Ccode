#include<stdio.h>
int maxSum(int a[],int n,int &begin,int &end)
{
	int sum=0;
	for(int i=0;i<n;i++)
	for(int j=i;j<n;j++)
	{
		int temSum=0;
		for(int k=i;k<=j;k++)
		temSum+=a[k];
		if(temSum>sum)
		{
		sum=temSum;
		begin=i+1;
		end=j+1;
		}
	}
	return sum;
}
main()
{
    int T,p,N,a[1000],i,j,sum=0,k=1,b,e;
    scanf("%d",&T);
    for(p=0;p<T;p++)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        scanf("%d",&a[i]);
        sum=maxSum(a,N,b,e);
        printf("Case %d:\n",k);
        printf("%d %d %d\n",sum,b,e);
        sum=0;
        k++;
        if(p<T-1)
        printf("\n");
    }
    return 0;
}
