#include <stdio.h> 
 
int main() { 
    FILE *fptr; 
    char ch; 
    int characters = 0, words = 0, lines = 0, in_word = 0; 
    fptr = fopen("test.txt", "r"); 
    if (fptr == NULL) { 
        printf("error! file doesn't exist.\n"); 
        return 1; 
    } 
    while ((ch = fgetc(fptr)) != EOF) { 
        characters++; 
        if (ch == '\n') lines++; 
        if (ch == ' ' || ch == '\n' || ch == '\t') { 
            in_word = 0; 
        } else if (in_word == 0) { 
            in_word = 1; 
            words++; 
        } 
    } 
    fclose(fptr); 
printf("number of lines = %d\n", lines); 
printf("number of characters = %d\n", characters); 
printf("number of words = %d\n", words); 
return 0; 
}