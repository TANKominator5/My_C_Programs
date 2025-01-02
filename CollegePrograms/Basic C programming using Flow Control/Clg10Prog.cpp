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
	
	
	switch(f)
	{
		case 1:
			output=((9.0*input)/5.0)+32.0;
			printf("Fahrenheit: %f", output);
			break;
		case 2:
			output=(5*(input-32)/9);
			printf("Celcius: %f",output);
			break;
		default:
			printf("Please enter valid choice");
	}
}
