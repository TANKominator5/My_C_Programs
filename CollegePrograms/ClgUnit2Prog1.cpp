#include<stdio.h>
//Unit 2 Prog 1
void fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d\n",f);
}

int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	fact(n);
}
