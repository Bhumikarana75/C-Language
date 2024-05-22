// Write a Program to read content from one file and write it to another file.

#include<stdio.h>

void main(){
	
	char mail[20];
	char pwd[20];
	
	FILE *fp;
	fp = fopen("auth.txt","w");
	
	if(fp != '\0')
	{
		printf("Enter mail: ");
		scanf("%s",&mail);
		printf("Enter password: ");
		scanf("%s",&pwd);
		
		
		fprintf(fp, "\n\n");
		fprintf(fp, "mail: %s\n",&mail);
		fprintf(fp, "password: %s",&pwd);
		
		fclose(fp);
	}
	
	else printf("Not created..");
	
}
