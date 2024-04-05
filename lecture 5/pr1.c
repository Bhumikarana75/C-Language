//calculator by switch case
#include<stdio.h>

main(){
	
	int a, b, choice;
	
	printf("Enter Value of A : ");
	scanf("%d",&a);
	printf("\nEnter Value of B : ");
	scanf("%d",&b);
	
	printf("Press 1 for Addition..\n");
	printf("Press 2 for Substraction..\n");
	printf("Press 3 for Multiplication..\n");
	printf("Press 4 for Division..\n");
	printf("Press 5 for Modulo..\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1: 
			printf("\nAddtion of %d and %d is %d..",a,b,a+b);
			break;
			
		case 2: 
			printf("\nSubstraction of %d and %d is %d..",a,b,a-b);
			break;
		
		case 3: 
			printf("\nMultiplication of %d and %d is %d..",a,b,a*b);
			break;	
		
		case 4: 
			printf("\nDivision of %d and %d is %d..",a,b,a/b);
			break;
		
		case 5: 
			printf("\nModulo of %d and %d is %d..",a,b,a%b);
			break;
			
		default:
			printf("\nThe number you have entered is INVALID...!!");
		
	}
	
}
