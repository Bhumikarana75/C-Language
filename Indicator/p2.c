/*Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.*/

#include<stdio.h>

void main()
{	
	cube();
}

int cube(){
	
	int rows, cols;
	printf("Enter the row's size of 2D array:- ");
	scanf("%d",&rows);
	printf("Enter the row's size of 2D array:- ");
	scanf("%d",&cols);
	
	int *ptr1 = &rows;
	int *ptr2 = &cols;
	
	int array[rows][cols], i, j;
	
	for(i=0; i< *ptr1 ; i++)
	{
		for(j=0; j< *ptr2 ; j++)
		{
			printf("\nEnter the value of Elements arr[%d][%d]:- ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\n\nElements:-\n");
	for(i=0; i< *ptr1; i++)
	{
		for(j=0; j< *ptr2; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\ncube of all elements are:-\n");
	int cube;
	int *ptr5 = &cube;
	for(i=0; i< *ptr1; i++)
	{
		for(j=0; j< *ptr2; j++)
		{
			cube = array[i][j] * array[i][j]  * array[i][j];
			printf(" %d ",*ptr5);
		}
			printf("\n");
	}
}

