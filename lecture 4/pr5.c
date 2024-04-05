#include<stdio.h>

main(){
	
	int a, b, c, d, e;
	
	printf("enter value of A: \n");
	scanf("%d",&a);
	printf("enter value of B: \n");
	scanf("%d",&b);
	printf("enter value of C: \n");
	scanf("%d",&c);
	printf("enter value of D: \n");
	scanf("%d",&d);
	printf("enter value of E: \n");
	scanf("%d",&e);
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					printf("A is max..");
				}
				else{
					printf("E is max..");
				}
			}
			else{
				if(d > e){
					printf("D is max..");
				}
				else{
					printf("E is max..");
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					printf("C is max..");
				}
				else{
					printf("E is max..");
				}
			}
			else{
				if(d > e){
					printf("D is max..");
				}
				else{
					printf("E is max..");
				}
			}
		}
	}
	else{
		if(b > c){
			if(b > d){
				if(b > e){
					printf("B is max..");
				}
				else{
					printf("E is max..");
				}
			}	
			else{
				if(d > e){
					printf("D is max..");
				}
				else{
					printf("E is max..");
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					printf("C is max..");
				}
				else{
					printf("E is max..");
				}
			}
			else{
				if(d > e){
					
					printf("D is max..");
				}
				else{
					printf("E is max..");
				}
			}
		}
	}
}
