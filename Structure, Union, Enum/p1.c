// Write a Program to create a Student Record System for 3 students using structure. 
//Consider the below-mentioned attributes in the Student structure:

#include<stdio.h>
#include<string.h>

struct student{
	int stu_id;
	char stu_name[20];
	int stu_age;
	char stu_course[20];
	char stu_city[10];
	int stu_standard;
	char stu_school[30];
};

void main(){
	
	int n;
	printf("Enter the student number:- ");
	scanf("%d",&n);
	
	struct student s1[n];
	
	int i;
	
	for(i=0; i<n; i++){
		printf("\n\nStudent Info: \n\n",);
		
		printf("Enter the ID: ");
		scanf("%d",&s1[i].stu_id);
		
		fflush(stdin);
		printf("Enter the NAME: ");
		gets(s1[i].stu_name);
		
		printf("Enter the AGE: ");
		scanf("%d",&s1[i].stu_age);
		
		fflush(stdin);
		printf("Enter the COURSE: ");
		gets(s1[i].stu_course);
		
		fflush(stdin);
		printf("Enter the CITY: ");
		gets(s1[i].stu_city);
		
		printf("Enter the STANDARD: ");
		scanf("%d",&s1[i].stu_standard);
		
		fflush(stdin);
		printf("Enter the SCHOOL: ");
		gets(s1[i].stu_school);
			
	}
	
	
	for(i=0; i<n; i++)
	{
		printf("\n\n ID: %d",s1[i].stu_id);
		printf("\n NAME: %s",s1[i].stu_name);
		printf("\n AGE: %d",s1[i].stu_age);
		printf("\n COURSE: %s",s1[i].stu_course);
		printf("\n CITY: %s",s1[i].stu_city);
		printf("\n STANDARD: %d",s1[i].stu_standard);
		printf("\n SCHOOL: %s\n\n",s1[i].stu_school);
	}
	
}

