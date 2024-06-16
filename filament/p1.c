/*
Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan
*/

#include<stdio.h>

main(){
	
	int i,length,rev;
	char name[20];
	
	printf("Enter any name you want: ");
	gets(name);
	
	for(length=0 ; name[length] != '\0' ; length++);
	
	for(i=0; i<length/2; i++){
		if(name[i] != name[length-i-1]){
			rev=1;
			break;
		}
	}
	
	if(rev==0){
		printf("It is Palindome..!");
	}
	else{
		printf("It is not Palindrome..!");
	}
       
}
