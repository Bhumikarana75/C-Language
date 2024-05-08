//WAp to print another varibale value and address using pointer concept.

#include<stdio.h>

main(){
	
	int a;
	int *ptr = &a;
	
	printf("Enter any value:-");
	scanf("%d",&a);
	
	printf("A\t: %d\n",a);
	printf("PTR\t: %d\n\n",*ptr);
	
	printf("/* In decimal */\n");
	printf("Address of A\t: %u\n",&a);
	
	printf("\n/* In Hexadecimal */\n");
	printf("PTR Store Address\t: %p\n",ptr);
	printf("PTR Store Address\t: %x\n",ptr);
	
}
