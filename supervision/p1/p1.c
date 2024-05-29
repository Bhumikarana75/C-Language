//Q.1 Write a Program to write even & odd numbers from 50 to 70 
//into two separate files. 
/*
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include <stdio.h>

int main() {
	
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("evenFile.txt", "w");
    oddFile = fopen("oddFile.txt", "w");

    if (evenFile == '\0' || oddFile == '\0') 
	{
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(evenFile, "Even Numbers are : ");
    fprintf(oddFile, "Odd Numbers are : ");
    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, "%d", i);
            if (i != 70) fprintf(evenFile, ", ");
        }
		else 
		{
            fprintf(oddFile, "%d", i);
            if (i != 69) fprintf(oddFile, ", ");
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even numbers are: ");
    fprintf(evenFile, "Even Numbers are Given Below : ");
    for (i = 50; i <= 70; i += 2) 
	{
        printf("%d", i);
        if (i != 70) 
			printf(", ");
    }
    printf("\n");

    printf("Odd numbers are: ");
    for (i = 51; i <= 69; i += 2) 
	{
        printf("%d", i);
        if (i != 69) 
			printf(", ");
    }
    
    printf("\n");

}
