#include<stdio.h>
#include<string.h>
void cmp(int n,char s[])
{
	int k;
	k=0;
	while(n)
	{
		s[k++]=n%2+'0';
		n=n/2;
	}
	s[k]='\0';
	strrev(s);
} 
int main()
{
	int n,i,k,len,sum,j;
	char str[100];
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		k=0;
		sum=1;
		cmp(n,str);
		len=strlen(str);
		for(i=len-1;i>=0;i--)
		{
			if(str[i]=='0')
				k++;
			else
				break;
		}
		for(j=0;j<k;j++)
			sum=sum*2;
		printf("%d\n",sum);
	}
	return 0;
}

