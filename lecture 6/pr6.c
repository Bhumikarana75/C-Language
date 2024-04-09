//calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop

#include<stdio.h>

main(){
	
	int a,b,cube=0,sum;
	
	printf("Enter Value of A :");
	scanf("%d",&a);
	printf("Enter Value of B :");
	scanf("%d",&b);
	
	while(a<=b){
		if(a%2==0){
			printf("%d\n",a);
			cube = a * a * a;
			sum = sum + cube;
		}
		a++;
	}
		
	printf("the cube is : %d\n",cube);
	printf("the sum of cube is : %d\n",sum);
}
