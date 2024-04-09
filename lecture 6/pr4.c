//WAP to print odd numbers from N to 1 using a while loop.

#include<stdio.h>

main()
{
	
	int a, b = 1;
	
	printf("Enter the starting number :");
	scanf("%d",&a);

		while(a>=b)
		{
			if(a % 2 == 1){
				printf("%d\n",a);
			}
			a--;
		}	
}
