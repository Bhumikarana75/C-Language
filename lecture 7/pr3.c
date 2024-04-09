//WAP to print 1 to N using a while loop.

#include<stdio.h>

main()
{
	
	int a=1, b;
	
	printf("Enter the ending num :");
	scanf("%d",&b);

		while(a<=b)
		{
			printf("%d\n",a);
			a++;
		}	
}


