#include<stdio.h>
#define N 9
void main()
{
	int a[N][N] = {1};
	int sum = 1;
	for(int i = 0; sum <= N; sum += 2+i, i++)
	{
		for(int j = i; j < N-2*i; j++)
		{
			if(j == 0) continue;
			a[i][j] = a[i][j-1] + 1;
		}

		for(int k = i+1; k < N-2*i; k ++)
		{
			a[k][N-1-k-i] = a[k-1][N-i-k] + 1;
		}

		for(int n = N-2*i-2; n >= i+1; n--)
		{
			a[n][i] = a[n+1][i] + 1;
		}
	}
		for(int row = 0; row < N; row ++)
		{
			for(int col = 0; col < N-row; col ++)
			{printf("%d\t",a[row][col]);}
		    printf("\n\n\n");
		}
}
