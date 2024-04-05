//day choice by switch case
#include<stdio.h>

main(){
	
	int choice;
	
	printf("Press 1 for Sunday..\n");
	printf("Press 2 for Monday..\n");
	printf("Press 3 for tuesday..\n");
	printf("Press 4 for Wednesday..\n");
	printf("Press 5 for Thursday..\n");
	printf("Press 6 for Friday..\n");
	printf("Press 7 for Saturday..\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nThis is Sunday..!");
			break;
			
		case 2:
			printf("\nThis is Monday..!");
			break;
			
		case 3:
			printf("\nThis is Tuesday..!");
			break;
			
		case 4:
			printf("\nThis is Wednesday..!");
			break;
			
		case 5:
			printf("\nThis is Thursday..!");
			break;
			
		case 6:
			printf("\nThis is Friday..!");
			break;
			
		case 7:
			printf("\nThis is Saturday..!");
			break;
			
		default:
			printf("\n Your input is INVALID..!!");
	}
	
}
