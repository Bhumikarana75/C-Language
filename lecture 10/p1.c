1
12
123
1234  4321
1234554321

#include<stdio.h>

main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		
		for(s=4;s>=i;s--){
			printf("   ");
		}
		
		for(s=4;s>=i;s--){
			printf("  ");
		}
		
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
