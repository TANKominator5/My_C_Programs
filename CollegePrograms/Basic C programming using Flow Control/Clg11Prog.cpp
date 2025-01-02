#include<stdio.h>
int fact(int a)
{
	int i,n;
	float f=1.0;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}

int main()
{
	int i,n;
	float s=0.0;
	printf("Enter limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+((float)i/fact(i));
	}
	printf("The Sum is %f ",s);
}
