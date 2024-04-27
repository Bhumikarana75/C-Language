// WAP to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.

#include<stdio.h>

main(){
	int i, upr=0, lwr=0, num=0, spe=0;
	
	char pwd[10], mail[25];
	
	printf("\nRegister info :- \n\n");
	
	printf("Enter your email: ");
	gets(mail);
	
	printf("Create your password: ");
	gets(pwd);
	
	
	if(pwd[i]>=65 && pwd[i]<=90)
		upr++;
		
	if(pwd[i]>=97 && pwd[i]<=122)
		lwr++;
		
	if(pwd[i]>=48 && pwd[i]<=57)
		num++;
		
	if(pwd[i]=='@' || pwd[i]=='#' || pwd[i]=='_' || pwd[i]=='-')
		spe++;
			
	printf("\n\nLogin info :- \n\n");		
	char newpwd[10], newemail[25];
	
	printf("Enter your email: ");
	gets(newemail);
	
	printf("Create your password: ");
	gets(newpwd);
	
	if(strcmp(newemail,"admin@123") == 0 && strcmp(newpwd,"admin_123") == 0)
	{
		printf("\n\nLogin successfully..");
	}
	else
	{
		printf("\n\nLogin failed..!\nPlease enter the valid password or valid email..!");
	}

}
	
