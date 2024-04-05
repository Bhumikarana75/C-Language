#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age<=0){
		printf("\nplease enter your valid age..");
	}	
	else if(age>=18){
		printf("\nyou are eligible for voting..");
	}
	else{
		printf("\nyou are not eligible for voting..");
	}
}
