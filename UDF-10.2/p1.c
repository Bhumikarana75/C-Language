// WAP to find the sum of all 1D Array elements by passing an array as an argument using UDF.

#include<stdio.h>

int main(){

	loop();
}

int loop(){
	
	int a;
	printf("Enter the size of 1D array:- ");
	scanf("%d",&a);
	
	int array[a], i, sum = 0;
	
	for(i=0; i<a; i++){
		printf("Array[%d]:- ",i);
		scanf("%d",&array[i]);
		sum = sum + array[i];
	}	
	
	printf("\nSum of all elements in 1D Array is %d..",sum);
	
}
