#include<stdio.h>
int main()
{
	int f=0;
	float input,output;
	printf("Enter the Scale\n");
	printf("For Centigrade Press 1 and for Fahrenheit Press 2 : ");
	scanf("%d",&f);
	printf("\nEnter the temperature: ");
	scanf("%f",& input);
	if(f==1)
	{
		output=((9.0*input)/5.0)+32.0;
		printf("Fahrenheit: %f", output);
	}
	if(f==2)
	{
		output=(5*(input-32)/9);
		printf("Celcius: %f",output);
	}
}
