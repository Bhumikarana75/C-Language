#include<stdio.h>

int addition();
int substraction();
int multiplication();
int divition();
int modulo();

void main()
{
	
	printf("\nPress 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %\nPress 0 for the exit\n");	
	
	int choice;
	printf("\nEnter your choice:- ");
	scanf("%d",&choice);
	
	do
	{
		switch(choice)
		{	
			case 0:
				close();
				break;
			
			case 1:
				addition();
				break;
				
			case 2:
				substraction();
				break;
				
			case 3:
				multiplication();
				break;
				
			case 4:
				division();
				break;
				
			case 5:
				modulo();
				break;
			
			default:
				printf("please enter the valid number..!!");
				break;
		}
	}
	while(choice != 0);
}

void close()
{
	printf("YOU're EXITED!!");
}

int addition()
{
	int a,b;
	printf("\n\nEnter first number:- ");
	scanf("%d",&a);
	printf("\nEnter second number:- ");
	scanf("%d",&b);
	
	printf("\nAddition of %d and %d is %d...",a,b,a+b);
	
	main();
}

int substraction()
{
	int a,b;
	printf("\n\nEnter first number:- ");
	scanf("%d",&a);
	printf("\nEnter second number:- ");
	scanf("%d",&b);
	
	printf("\nSubstraction of %d and %d is %d...",a,b,a-b);
	
	main();
}

int multiplication()
{
	int a,b;
	printf("\n\nEnter first number:- ");
	scanf("%d",&a);
	printf("\nEnter second number:- ");
	scanf("%d",&b);
	
	printf("\nMultiplication of %d and %d is %d...",a,b,a*b);
	
	main();
}

int division()
{
	int a,b;
	printf("\n\nEnter first number:- ");
	scanf("%d",&a);
	printf("\nEnter second number:- ");
	scanf("%d",&b);
	
	printf("\nDivision of %d and %d is %d...",a,b,a/b);
	
	main();
}

int modulo()
{
	int a,b;
	printf("\n\nEnter first number:- ");
	scanf("%d",&a);
	printf("\nEnter second number:- ");
	scanf("%d",&b);
	
	printf("\nModulo of %d and %d is %d...",a,b,a%b);
	
	main();
}
