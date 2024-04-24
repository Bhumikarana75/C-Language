// WAP to find the average of a given 2D array.


#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter the size of 2D array's Rows: ");
	scanf("%d",&a);
	printf("Enter the size of 2D array's Columns: ");
	scanf("%d",&b);
	
	int arr[a][b],i,j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	int sum=0,len=0;
	float avg;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			sum+=arr[i][j];
			len++;
		}
	}
	
	printf("\n\nThe sum of all elements is: %d",sum);
	avg=(float)sum/len;
	
	printf("\nAverage of an Array: %.2f",avg);
}
