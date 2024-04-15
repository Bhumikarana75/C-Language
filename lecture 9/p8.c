//WAP print the below pattern using nested for loop.

#include<stdio.h>

main(){
	
	int i , j, s=1;

	for(i=1; i<=5; i++){
		for(j=i; j>=1; j--){
			printf("%d  ",s++);
		}
		printf("\n");
	}
	
}
