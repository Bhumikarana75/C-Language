//Write a Program to create a new file and write all numbers that are divisible 
//by both 3 and 5 between 1 and 50 into that file.

#include <stdio.h>

void main() {
	
    FILE *fp = fopen("division.txt", "w");
    
    if (fp == '/0') {
        printf("Error opening file!\n");
        return 1;
    }
    
    int number;
	
	fprintf(fp,"Below are the numbers which is divisible by 3 and 5 both: \n\n");
	
    for (number = 1; number <= 50; number++) {
        
        if (number % 3 == 0 && number % 5 == 0) {
            fprintf(fp, "%d\t", number);
        }
    }

    fclose(fp);
}

