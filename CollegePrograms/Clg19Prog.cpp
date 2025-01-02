#include<stdio.h>
int main()
{
	int n,i,c,a=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		i=n%10;
		n=n/10;
		a=a+(i*i*i);
	}
	if(c==a)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
}
