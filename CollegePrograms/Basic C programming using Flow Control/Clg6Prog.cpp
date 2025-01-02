#include<stdio.h>
int main()
{
	int n;
	printf("Enter a year: \n");
	scanf("%d",&n);
	printf(((n%4==0&&n%100!=0)||n%400==0)?"Leap Year":"Not a Leap Year");
}
