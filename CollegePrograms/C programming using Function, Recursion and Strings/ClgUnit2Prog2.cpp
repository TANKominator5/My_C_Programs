#include<stdio.h>
//Unit 2 Prog 2
int fact(int n)
{
	return (n==1)?1:n*fact(n-1);
}

int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("%d",fact(n));
}
