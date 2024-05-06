#include<stdio.h>

int main(){
	
	divide();
	
}

int divide(){
	
	int a;
	printf("Enter any value:- ");
	scanf("%d",&a);
	
	if(a % 3 == 0)
	{
		if(a % 5 == 0){
			printf("\nThe given number is divisible by both 3 & 5.");
		}
	}
	
	else{
		printf("\nThe given number is not divisible by both 3 & 5.");
	}
	
}


