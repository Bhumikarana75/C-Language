//f=(c*9/5)=32

#include<stdio.h>

main(){
	
	int f,c;
	
	printf("Enter degree celcius : ");
	scanf("%d",&c);
	
	f = (c * 9/5) + 32;
	printf("Your fahrenheit is : %d",f);
	
}