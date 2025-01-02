#include<stdio.h>

int fun(int n)
{
	if(n == 1) 
	{
		printf("Sec %d\n",n);
		return 1; 
	}
	else
	{ 
		printf("First %d\n",n);
		return 1 + fun(n-1);
	}
}
int main() 
{ 
	int n = 5;
	printf ("%d", fun(n));
} 
