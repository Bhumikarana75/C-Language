//WAP to count the total number of digits in a number.

#include<stdio.h>

main(){
	int n,length=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	do{
		length++;
		n/=10;
	}
	while(n!=0);
	
	printf("The Total digits in given number is: %d\n",length);
}
