#include<stdio.h>

main(int n){
	
	printf("cube of %d is %d..", n, cube(n));
	
}

int cube(){
	
	int a;
	printf("enter the value for cube :- ");
	scanf("%d",&a);
	
	return a * a * a;
	
}
