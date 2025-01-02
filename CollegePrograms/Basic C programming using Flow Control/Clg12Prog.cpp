#include<stdio.h>
int main()
{
	int n,i,k=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%2==0)
		{
			k=1;
		}
	}
	if(k==0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime Number");
	}
}
