//Write a Program to print the below pattern using nested for loop.

#include<stdio.h>

main(){
	int i,j,n=1;
	char k='A';
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			if(j%2==0){
				printf("%d ",n++);
			}
			
			else{
				printf("%c ",k++);
			}
		}
		printf("\n");
	}
}

//A
//2   B
//c   3   D
//4   E   5   F
//G   6   H   7   I
