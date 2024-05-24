//take year input from the user to check if the year is leap year or not.

#include<stdio.h>

int leapYear(int year);

int main()
{
	
	int year;
	printf("Enter any year:- ");
	scanf("%d",&year);
	
	leapYear(year);	
	
}

int leapYear(int year){
	
	if(year % 4 == 0)
		printf("\nThis is a Leap Year..!!");
	else
		printf("\nThis Year is not a Leap Year..!!");
		
}
