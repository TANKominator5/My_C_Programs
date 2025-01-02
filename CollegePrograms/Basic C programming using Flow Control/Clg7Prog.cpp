#include<stdio.h>
void grader(int a)
{
	if(a>90)
	{
		printf("O");
	}
	else if(a>80)
	{
		printf("E");
	}
	else if(a>70)
	{
		printf("A");
	}
	else if(a>60)
	{
		printf("B");
	}
	else if(a>50)
	{
		printf("C");
	}
	else if(a>40)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
}

int main()
{
	int a,b,c;
	printf("Enter marks of 3 Subjects: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Subject 1: ");
	grader(a);
	printf("\nSubject 2: ");
	grader(b);
	printf("\nSubject 3: ");
	grader(c);
}
