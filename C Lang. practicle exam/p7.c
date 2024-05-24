//reads a sentence from a file, capitalized it and writes it into another file.

#include<stdio.h>
#include<stdio.h>

int main()
{
	char sentence[20];
	
	FILE *read;
	read = fopen("read.txt","r");
	if(read != '\0' )
	{
		printf("Your file is created..!");
		
		fscanf(read,"%[^\n]",&sentence);
		
		fclose(read);
	}
	else 
		printf("Your file is not created..");
	
	
	FILE *capital;
	capital = fopen("capital.txt","w");
	
	if( capital != '\0')
	{
		
		strupr(sentence);
		fprintf(capital, "Sentence: %s",sentence);
	
		fclose(capital);
	}
	else 
		printf("Your file is not created..");
	
}
