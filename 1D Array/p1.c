#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter the size of array : ");
	scanf("%d",&a);
	
	int arr[a], i;
	
	for(i=0;i<a;i++){
		printf("\narr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a;i++){
		printf("\nvalue of arr[%d] Element is %d",i,arr[i]);
	}
	
	int b;
	
	printf("\n\nEnter the size of array : ");
	scanf("%d",&b);
	
	int arr1[b];
	
	for(i=0;i<b;i++){
		printf("\narr[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<b;i++){
		printf("\nvalue of arr[%d] Element is %d",i,arr1[i]);
	}
	
	
	printf("\n\nElement of A and B is :");
	
	for(i=0;i<a;i++){
		printf("\n %d",arr[i]);
	}
	for(i=0;i<b;i++){
		printf("\n %d",arr1[i]);
	}
	
}
	
	

