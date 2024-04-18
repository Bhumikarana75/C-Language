//1 0 1 0 1
//  0 1 0 1
//    1 0 1
//      0 1
//        1
    
#include<stdio.h>

main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++){
			printf(" ");
		}
		
		for(j=i;j<=5;j++){
			if(j%2==1){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		
		
		printf("\n");
	}
	
}
