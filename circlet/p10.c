//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1

    
#include<stdio.h>

main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(s=i;s<=4;s++){
			printf("  ");
		}
		for(j=1;j<i;j++){
			printf("%d ",j);
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
