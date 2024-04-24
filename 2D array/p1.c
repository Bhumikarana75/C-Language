// WAP to find all the negative elements from a given 1D array.

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
	
	printf("\nElements are: \n");
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nNegetive Elements are : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arr[i][j]<0){
				printf("%d ",arr[i][j]);
			}
		}
	}
}
