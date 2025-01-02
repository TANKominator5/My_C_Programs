#include<stdio.h>
int main()
{
	int n,i,c,r=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		i=n%10;
		n=n/10;
		r=r*10+i;
	}

	printf("Reverse is : %d\n",r);
	printf("Difference is : %d\n",c-r);
}
