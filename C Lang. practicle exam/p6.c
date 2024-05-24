//represent the movie list using array of objects with structure.

#include<stdio.h>
#include<string.h>

struct movies{
	
	char title[20];
	char generation[20];
	char language[20];
	
};

int main()
{
	int n;
	printf("Enter the number of movies:- ");
	scanf("%d",&n);
	
	struct movies m[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\nEnter the detail of Movie's: \n");
		printf("===== === ====== == ========\n\n");
		
		fflush(stdin);
		printf("Enter the Title of the Movie: ");
		gets(m[i].title);
		
		fflush(stdin);
		printf("Enter the Generation: ");
		gets(m[i].generation);
		
		fflush(stdin);
		printf("Enter the Language: ");
		gets(m[i].language);
		
	}
	
	for(i=0; i<n; i++){
		
		printf("\nOutput of the Movie Details is:");
		printf("\n====== == === ===== ======= ===\n\n");
		printf("\n\nTitle of the movie is:- %s\n",m[i].title);
		printf("Generation of the movie is:- %s\n",m[i].generation);
		printf("Language of the movie is:- %s\n",m[i].language);
	}
}
