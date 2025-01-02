#include<stdio.h>
int gcd(int a,int b)
{
	int k,f,i;
	k=(a<b)?a:b;
	for(i=k;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			f=i;
			break;
		}
	}
	return f;
}
int main()
{
	//Unit 2 Prog 3
	int a,b;
	printf("Enter 2 numbers \n");
	scanf("%d%d",&a,&b);
	printf("The GCD is %d ",gcd(a,b));
}
