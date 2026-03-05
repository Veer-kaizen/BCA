#include <stdio.h> 
 
int main() { 
    FILE *fptr; 
    char ch; 
    fptr = fopen("test.txt", "r"); 
    if (fptr == NULL) { 
        printf("error! file doesn't exist.\n"); 
        return 1; 
    } 
    while ((ch = fgetc(fptr)) != EOF) { 
        putchar(ch); 
    } 
    fclose(fptr); 
    return 0; 
}