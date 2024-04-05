//week choice by switch case
#include<stdio.h>

main(){
	
	int choice;
	
	printf("Enter 1 for First week..\n");
	printf("Enter 2 for Second week..\n");
	printf("Enter 3 for Third week..\n");
	printf("Enter 4 for Forth week..\n");
	
	printf("Enter Your choice :");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nThis is the 1st week..!");
			break;
			
		case 2:
			printf("\nThis is the 2nd week..!");
			break;
		
		case 3:
			printf("\nThis is the 3rd week..!");
			break;
			
		case 4:
			printf("\nThis is the 4th week..!");
			break;
			
		default:
			printf("\nYour input is INVALID..");
	}
	
}
