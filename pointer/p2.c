//WAP to swap two variables using Pointers.

#include<stdio.h>

main(){
	
	int a, b;
	
	printf("Enter the value of A :-");
	scanf("%d",&a);
	printf("Enter the value of B :-");
	scanf("%d",&b);
	
	printf("\n\nBefore: ");
	printf("\nA :- %d",a);
	printf("\nB :- %d",b);
	
	int *ptr = &a;
	int *pntr = &b;
	
	printf("\n\nAddress of operator: ");
	printf("\n\nA :- %d",ptr);
	printf("\nB :- %d",pntr);
	
	int c;
	c = *ptr;
	*ptr = *pntr;
	*pntr = c;
	
	printf("\n\nAfter:");
	printf("\n\nA :- %d",*ptr);
	printf("\nB :- %d",*pntr);
	
}
