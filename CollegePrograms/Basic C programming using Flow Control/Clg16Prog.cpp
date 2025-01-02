#include<stdio.h>
void prime(int n)
{
	int i,k=0;

	for(i=2;i<=n/2;i++)
	{
		if(n%2==0)
		{
			k=1;
		}
	}
	if(k==0)
	{
		printf("%d\n",n);
	}
}

int main()
{
	int n,m,i;
	printf("Enter lower and upper Limit:");
	scanf("%d%d",&n,&m);
	
	for(i=n;i<=m;i++)
	{
		prime(i);
	}
}
