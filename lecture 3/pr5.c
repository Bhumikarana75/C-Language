#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter the number : ");
	scanf("%d",&age);
	
	if(age<=12){
		printf("You are a child..");
	}
	else if(age<=19 && age>=13){
		printf("You are a teenager..");
	}
	else if(age<=64 && age>=20){
		printf("You are an adult..");
	}
	if(age>64){
		printf("You are a senior..");
	}
}
