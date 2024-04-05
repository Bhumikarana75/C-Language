#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a<0){
		printf("Your entered number is nagative..");
	}
	else if(a>0){
		printf("Your entered number is positive..");
	}
	else{
		printf("Your entered number is neutral..");
	}
}
