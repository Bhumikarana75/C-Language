//month choice by switch case
#include<stdio.h>

main(){
	
	int choice;
	
	printf("Press 1 for January..\n");
	printf("Press 2 for Fabruary..\n");
	printf("Press 3 for March..\n");
	printf("Press 4 for April..\n");
	printf("Press 5 for May..\n");
	printf("Press 6 for June..\n");
	printf("Press 7 for July..\n");
	printf("Press 8 for August..\n");
	printf("Press 9 for September..\n");
	printf("Press 10 for October..\n");
	printf("Press 11 for November..\n");
	printf("Press 12 for December..\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nThis is January..!");
			break;
			
		case 2:
			printf("\nThis is Fabruary..!");
			break;
			
		case 3:
			printf("\nThis is March..!");
			break;
			
		case 4:
			printf("\nThis is April..!");
			break;
			
		case 5:
			printf("\nThis is May..!");
			break;
			
		case 6:
			printf("\nThis is June..!");
			break;
			
		case 7:
			printf("\nThis is July..!");
			break;
			
		case 8:
			printf("\nThis is August..!");
			break;
			
		case 9:
			printf("\nThis is September..!");
			break;
		
		case 10:
			printf("\nThis is October..!");
			break;
			
		case 11:
			printf("\nThis is November..!");
			break;
			
		case 12:
			printf("\nThis is December..!");
			break;
			
		default:
			printf("\n Your input is INVALID..!!");
	}
	
}
