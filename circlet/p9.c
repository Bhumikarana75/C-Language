//1 2 3 4 5
//1 2 3 4   
//1 2 3       
//1 2             
//1                
//1                
//1 2            
//1 2 3      
//1 2 3 4    
//1 2 3 4 5                    
    
#include<stdio.h>

main(){
	
	int i,j,s;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(s=i;s<=4;s++){
			printf("  ");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(s=i;s<=4;s++){
			printf("  ");
		}
		printf("\n");
	}
	
}