#include<stdio.h>
int main()
{
	int n,i,c,s=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		(n%i==0)?s=s+i:0;
	}
	printf((s==n)?"Perfect Number":"Not Perfect Number");
}
