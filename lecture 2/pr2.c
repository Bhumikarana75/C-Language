#include<stdio.h>

main(){
	
	int a,b,hra,ta,da;

	printf("enter value of basic salary :");
	scanf("%d",&b);
	printf("enter value of hra : ");
	scanf("%d",&hra);
	printf("\nenter value of ta :");
	scanf("%d",&ta);
	printf("\nenter value of da :");
	scanf("%d",&da);

	hra=(b*hra)/100;
	ta=(b*ta)/100;
	da=(b*da)/100;

	a=b+hra+ta+da;
	printf("ans is %d",a);

}