#include<stdio.h>
int main()
{
	float a;
	printf("Enter Your basic salary: \n");
	scanf("%f",&a);
	if(a<=10000)
	{
		a=(a+((20*a)/100)+((80*a)/100));
	}
	else if(a<=20000)
	{
		a=(a+((25*a)/100)+((90*a)/100));
	}
	else
	{
		a=(a+((30*a)/100)+((95*a)/100));
	}
	printf("Your gross salary is : %f",a);
	
}
