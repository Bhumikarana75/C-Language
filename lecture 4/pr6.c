#include<stdio.h>

main(){
	
	int a, b, c, d, e, f;
	
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
	printf("enter value of F: \n");
	scanf("%d",&f);
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					if(a > f){
						printf("A is max..");
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
			else{
				if(d > e){
					if(d > f){
						printf("D is max..");
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					if( c > f){
						printf("C is max..");
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
			else{
				if(d > e){
					if(d > f){
						printf("D is max..");
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
		}
	}
	else{
		if(b > c){
			if(b > d){
				if(b > e){
					if(b > f){
						printf("B is max..");
					}
					else{
						printf("F is max");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}	
			else{
				if(d > e){
					if(d > f){
						printf("D is max..");
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
		}
		else{
			if(c > d){
				if(c > e){
					if(c > f){
						printf("C is max..");
					}
					else{
						printf("F is max..");	
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
			else{
				if(d > e){
					if(e > f){
						printf("E is max..");	
					}
					else{
						printf("F is max..");
					}
				}
				else{
					if(e > f){
						printf("E is max..");
					}
					else{
						printf("F is max..");
					}
				}
			}
		}
	}
}
