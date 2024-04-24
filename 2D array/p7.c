// WAP to find the sum of diagonal elements from a given 2D array.
 
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
	
	printf("\n\nThe elements are: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				sum+=arr[i][j];
			}
		}
	}
	printf("\n\nThe sum of all diagonal elements is: %d",sum);
}
