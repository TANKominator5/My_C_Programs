#include<stdio.h>
int main()
{
	int n,i,c,s=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		i=n%10;
		n=n/10;
		s=s+i;
	}
	printf("Sum of digits : %d\n",s);
}
