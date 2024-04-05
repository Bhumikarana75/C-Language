#include<stdio.h>

main(){
	
	int html, css, m_query, jquery, bootstrap, total;
	float percentage;
	
	printf("enter your HTML marks : ");
	scanf("%d",&html);
	printf("enter your CSS marks : ");
	scanf("%d",&css);
	printf("enter your MEDIA QUERY marks : ");
	scanf("%d",&m_query);
	printf("enter your JQUERY marks : ");
	scanf("%d",&jquery);
	printf("enter your BOOTSTRAP marks : ");
	scanf("%d",&bootstrap);
	
	total = html+css+m_query+jquery+bootstrap;
	printf("\n Your Total Marks is %d..",total);
	
	percentage= total*100/500;
	printf("\n your percentage is %f",percentage);
	
	if(percentage>=90){
		printf("your Grade is A+...");
	}
	else if(percentage<90 && percentage>=80){
		printf("your Grade is A...");
	}
	else if(percentage<80 && percentage>=70){
		printf("your Grade is B+...");
	}
	else if(percentage<70 && percentage>=60){
		printf("your Grade is B...");
	}
	else if(percentage<60 && percentage>=50){
		printf("your Grade is C...");
	}
	else if(percentage<50 && percentage>=40){
		printf("your Grade is D...");
	}
	else{
		printf("You are Fail...");
	}
	
}
