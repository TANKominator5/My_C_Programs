#include<stdio.h>
int main()
{
	int n,i,a=0,s,b=1;
	
	printf("Enter Limit: \n");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<n-1;i++)
	{
		s=a+b;
		printf("%d\n",s);
		a=b;
		b=s;
	}
}
