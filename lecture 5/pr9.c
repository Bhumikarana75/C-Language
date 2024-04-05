#include<stdio.h>

main(){
	
	int choice, variety;
	
	printf("Press 1 to order PIZZA.\n");
	printf("Press 2 to order BURGER.\n");
	printf("Press 3 to order FRENCH FRIES.\n");
	printf("Press 4 to order SANDWICH.\n");
	printf("Press 5 to order COLD DRINKS.\n");
	printf("Press 6 to order SHAKES.\n\n");
	
	printf("ENTER YOUR ORDER : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nYou have ordered PIZZA..!");
			{
					
				printf("\n Press 1 to order MARGRETAA PIZZA.\n");
				printf("Press 2 to order CORN N CHEESE PIZZA.\n");
				printf("Press 3 to order ITALIAN PIZZA.\n\n");
				
				printf("\n CHOOSE YOUR FAV PIZZA : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n MARGRETAA PIZZA");
						break;
					case 2:
						printf("\n CORN N CHEESE PIZZA");
						break;
					case 3:
						printf("\n ITALIAN PIZZA");
						break;
					default:
						printf("\n Plase enter valid input..");
				}
			}
			break;
			
		case 2:
			printf("\nYou have ordered BURGER..!");
			{
					
				printf("\n Press 1 to order NORMAL BURGER.\n");
				printf("Press 2 to order CHEESE BURGER.\n");
				printf("Press 3 to order DOUBLE PETTY BURGER.\n");
				printf("Press 4 to order MEXICO BURGER.\n\n");
				
				printf("\n CHOOSE YOUR FAV BURGER : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n NORMAL BURGER");
						break;
					case 2:
						printf("\n CHEESE BURGER");
						break;
					case 3:
						printf("\n DOUBLE PETTY BURGER");
						break;
					case 4:
						printf("\n MEXICO BURGER");
						break;
					default:
						printf("\n Plase enter valid input..");
				}
			}
			break;
			
		case 3:
			printf("\nYou have ordered FRENCH FRIES..!");
			{
					
				printf("\n Press 1 to order FRENCH FRIES.\n");
				printf("Press 2 to order PERI PERI FRENCH FRIES.\n");
				printf("Press 3 to order CHEESE FRENCH FRIES.\n");
				printf("Press 4 to order DOUBLE CHEESE FRENCH FRIES.\n\n");
				
				printf("\n CHOOSE YOUR FAV FRENCH FRIES : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n FRENCH FRIES");
						break;
					case 2:
						printf("\n PERI PERI FRENCH FRIES");
						break;
					case 3:
						printf("\n CHEESE FRENCH FRIES");
						break;
					case 4:
						printf("\n DOUBLE CHEESE FRENCH FRIES");
						break;
					default:
						printf("\n Plase enter valid input..");
				}
			}
			break;
			
		case 4:
			printf("\nYou have ordered SANDWICH..!");
			{
					
				printf("\n Press 1 to order VEG. SANDWICH.\n");
				printf("Press 2 to order CHEESE SANDWICH.\n");
				printf("Press 3 to order TOASTED SANDWICH.\n");
				printf("Press 4 to order RIMZIM SANDWICH.\n");
				printf("Press 5 to order SEZWAAN SANDWICH.\n");
				printf("Press 6 to order MATKA SANDWICH.\n");
				
				printf("\n CHOOSE YOUR FAV SANDWICH : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n VEG. SANDWICH");
						break;
					case 2:
						printf("\n CHEESE SANDWICH");
						break;
					case 3:
						printf("\n TOASTED SANDWICH");
						break;
					case 4:
						printf("\n RIMZIM SANDWICH");
						break;
					case 5:
						printf("\n SEZWAAN SANDWICH");
						break;
					case 6:
						printf("\n MATKA SANDWICH");
						break;
					default:
						printf("\n Plase enter valid input..");
				}
			}
			break;
			
		case 5:
			printf("\nYou have ordered COLD DRINKS..!");
			{
					
				printf("\n Press 1 to order SHOTS.\n");
				printf("Press 2 to order MOJITO.\n");
				printf("Press 3 to order BEAR.\n\n");
				
				printf("\n CHOOSE YOUR FAV DRINKS : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n SHOTS");
						break;
					case 2:
						printf("\n MOJITO");
						break;
					case 3:
						printf("\n BEAR");
						break;
					default:
						printf("\n Plase enter valid input..");
				}
			}
			break;
			
		case 6:
			printf("\nThis is SHAKES..!");
			{
					
				printf("\n Press 1 to order CHOCOLATE SHAKE.\n");
				printf("Press 2 to order MANGO SHAKE.\n");
				printf("Press 3 to order KIT-KAT SHAKE.\n");
				printf("Press 4 to order OREO SHAKE.\n\n");
				
				printf("\n CHOOSE YOUR FAV SHAKE : ");
				scanf("%d",&variety);
				
				switch(variety){
					case 1:
						printf("\n CHOCOLATE SHAKE");
						break;
					case 2:
						printf("\n MANGO SHAKE");
						break;
					case 3:
						printf("\n KIT-KAT SHAKE");
						break;
					case 4:
						printf("\n OREO SHAKE");
						break;
					default:
						printf("\n Plase enter valid input..");	
				}
			}
			break;
			
		default:
			printf("\n Plase enter valid input..");
			
	}
	
}
