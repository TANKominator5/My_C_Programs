#include<stdio.h>
int main()
{
	int n,i;
	long int f=1;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%ld\n",f);
}
