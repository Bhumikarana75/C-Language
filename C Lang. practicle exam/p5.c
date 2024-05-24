//swap two integers with function using function.

#include<stdio.h>

int swap(int val1,int val2);

int main()
{
	
	int val1, val2;
	printf("Enter the First Value:- ");
	scanf("%d",&val1);
	printf("Enter the Second Value:- ");
	scanf("%d",&val2);
	
	swap(val1, val2);
	
}

int swap(int val1,int val2)
{
	int *ptr1 = &val1;
	int *ptr2 = &val2;
	int swap;
	
	printf("\nBefore swaping:\n");
	printf("====== =======\n\n");
	printf("first value is :- %d\n",*ptr1);
	printf("Second value is :- %d\n",*ptr2);
	
	swap = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = swap;
	
	printf("\n\nAfter swaping:\n");
	printf("===== =======\n\n");
	printf("first value is :- %d\n",*ptr1);
	printf("second value is :- %d\n",*ptr2);
	
}
