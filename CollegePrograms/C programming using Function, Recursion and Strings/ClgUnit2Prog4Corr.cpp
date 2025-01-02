#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	if(b==0)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(a%b,b);
	}
	else
	{
		return gcd(a,b%a);
	}
	
	//return (a>b)?gcd((a%b),b):gcd((a,b%a));
}

int main()
{
	//Unit 2 Prog 4
	int a,b;
	printf("Enter 2 numbers \n");
	scanf("%d%d",&a,&b);
	printf("The GCD is %d ",gcd(a,b));
}
