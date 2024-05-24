#include<stdio.h>
#include<string.h>

void main()
{
	char sentence[20];
	int count = 0;	
	printf("Enter a sentence or a word: ");
	scanf("%s",&sentence);	
	
	int i;
	int length = strlen(sentence);
	
	printf("\nvowels are:\n");
	printf("====== ====\n");	
	for(i=0; i < length; i++)
	{
		if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'){
			printf("%c\t",sentence[i]);
			count++;
		}		
	}
	printf("\n\ntotal vowels are : %d",count);
		
}
