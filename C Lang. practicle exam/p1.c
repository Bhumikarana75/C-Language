//find the factorial of the integer that user enters.

#include<stdio.h>

void main()
{
	
	int num;
	printf("Enter the number:- ");
	scanf("%d",&num);
	
	int i;
	float fact = 1;
	for(i=1; i<=num; i++)
	{
		fact = fact * i;	
	}
	
	printf("\nfactorial of the given number is:- %.2f",fact);
}
