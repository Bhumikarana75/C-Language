//Write a Program to find the length of a string using a Pointer.

#include <stdio.h>
int strLength(char *str) {
	
    char *ptr = str;
    
    while (*ptr != '\0') {
        ptr++;
    }
    return (ptr - str);
}

int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);
    
    int length = strLength(str);

    printf("\nlength of string: %d", length);

    return 0;
}

