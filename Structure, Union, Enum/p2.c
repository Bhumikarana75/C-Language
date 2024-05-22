//  Write a Program to create an Employee Record System with an Array of objects for a given N 
//number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
/*
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/

#include<stdio.h>
#include<string.h>

struct student{
	int emp_id;
	char emp_name[20];
	int emp_age;
	char emp_role[20];
	char emp_city[10];
	int emp_experience;
	char emp_company_name[30];
};

void main(){
	
	int n;
	printf("Enter the student number:- ");
	scanf("%d",&n);
	
	struct student e1[n];
	
	int i;
	
	for(i=0; i<n; i++){
		printf("\n\nEmployee Info: \n\n");
		
		printf("Enter the ID: ");
		scanf("%d",&e1[i].emp_id);
		
		fflush(stdin);
		printf("Enter the NAME: ");
		gets(e1[i].emp_name);
		
		printf("Enter the AGE: ");
		scanf("%d",&e1[i].emp_age);
		
		fflush(stdin);
		printf("Enter the role: ");
		gets(e1[i].emp_role);
		
		fflush(stdin);
		printf("Enter the CITY: ");
		gets(e1[i].emp_city);
		
		printf("Enter the experience: ");
		scanf("%d",&e1[i].emp_experience);
		
		fflush(stdin);
		printf("Enter the company_name: ");
		gets(e1[i].emp_company_name);
			
	}
	
	
	for(i=0; i<n; i++)
	{
		printf("\n\n ID: %d",e1[i].emp_id);
		printf("\n NAME: %s",e1[i].emp_name);
		printf("\n AGE: %d",e1[i].emp_age);
		printf("\n role: %s",e1[i].emp_role);
		printf("\n CITY: %s",e1[i].emp_city);
		printf("\n experience: %d",e1[i].emp_experience);
		printf("\n company_name: %s\n\n",e1[i].emp_company_name);
	}
	
}

