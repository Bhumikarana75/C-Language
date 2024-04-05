#include<stdio.h>

main(){
	
	int a, b, c;
	
	printf("enter value of A: \n");
	scanf("%d",&a);
	printf("enter value of B: \n");
	scanf("%d",&b);
	printf("enter value of C: \n");
	scanf("%d",&c);
	
	
	if(a > b){
		if(a > c){
			printf("A is max..");
		}
		else{
			printf("c is max..");
		}
	}
	else{
		if(b > c)
		{
			printf("B is max..");	
		}
		else
		{
			printf("C is max..");	
		}
	}
}
