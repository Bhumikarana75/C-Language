//WAP to find the sum of a first and the last digit of a number.

#include<stdio.h>

main(){	
	int n,f_num,l_num,sum;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	l_num=n%10;
	
	do{
		f_num=n%10;
		n=n/10;
	}
	while(n>0);
	
	printf("The first digit of number is: %d\n",f_num);
	printf("The last digit of number is: %d\n",l_num);
	
	printf("\n");
	printf("The sum of first digit %d and last digit %d is: %d", f_num, l_num, f_num + l_num);
}
