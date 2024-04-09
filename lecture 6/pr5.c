//WAP to print leap years between two given numbers using a while loop.

#include<stdio.h>

main()
{
	
	int a,b;
	
	printf("Enter the starting year :");
	scanf("%d",&a);
	printf("Enter the ending year :");
	scanf("%d",&b);
	
		if(a > b){
			printf("\nStarting year can not be bigger than ending year please enter the valid year..!!");
		}

		while(a<b)
		{
			if(a % 4 == 0){
				printf("%d\n",a);
			}
			a++;
		}	
}
