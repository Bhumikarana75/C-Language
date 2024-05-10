//Write a Program to find the square of each element of a given 1D array using a Pointer.
#include<stdio.h>

void main()
{
	
	int a;
	printf("Enter the size of array :-");
	scanf("%d",&a);
	
	int arr[a];
	int *ptr = &arr;
	int i;
	
	for(i=0; i<a; i++){
		printf("Element %d :-",i);
		scanf("%d",&*ptr + i);
	}
	
	int square = 1;
	int *ptr2 = &square; 
	
	printf("\nSquare of all given Elements is :-\n");
	for(i=0; i<a; i++)
	{
		square = arr[i] * arr[i];
		printf("%d \n",*ptr2);
	}
	
}
