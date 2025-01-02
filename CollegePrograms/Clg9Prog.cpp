#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Press +,-,*,/ for addition multiplication substraction or division respectively :");
	scanf("%c",&ch);
	
	printf("Enter 2 Numbers:");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
		case '+':
			printf("The Sum is :%d\n ",a+b);
			break;
		case'-':
			printf("The Difference is :%d\n",a-b);
			break;
		case'*':
			printf("The Product is :%d\n",a*b);
			break;
		case'/':
			printf("The Quotient is %d\n: ",a/b);
			break;
		default:
			printf("Please input a proper choice");
	}
}
