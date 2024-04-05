#include<stdio.h>

main(){
	
	int f_angle, s_angle, t_angle;
	
	printf("Enter the first angle of triangle : ");
	scanf("%d",&f_angle);
	
	printf("Enter the second angle of triangle : ");
	scanf("%d",&s_angle);
	
	t_angle = 180 - (f_angle + s_angle);
	
	printf("Your triangle area is : %d",t_angle);

}