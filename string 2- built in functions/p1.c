//WAP to check if a given password is strong or not.  

#include <stdio.h>

main(){
	
	int i, len, upr=0, lwr=0, num=0, spe=0;
	
	char pwd[10];
	
	printf("Create your password: ");
	gets(pwd);
	
	for(i=0; i<len; len++){
	if(pwd[i]>=65 && pwd[i]<=90)
		upr++;
		
	if(pwd[i]>=97 && pwd[i]<=122)
		lwr++;
		
	if(pwd[i]>=48 && pwd[i]<=57)
		num++;
		
	if(pwd[i]=='@' || pwd[i]=='#' || pwd[i]=='_' || pwd[i]=='-')
		spe++;
	}
	
	if(upr>0 || lwr>0 || num>0 || spe>0){
		printf("\n\nYour password is Weak..!\nPlease enter the valid password..!");
	}
	else{
		printf("\n\nYour password is strong..");
	}
	
}
