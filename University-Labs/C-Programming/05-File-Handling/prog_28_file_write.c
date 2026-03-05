#include <stdio.h> 
 
int main() { 
    FILE *fptr; 
    char data[200]; 
    fptr = fopen("test.txt", "w"); 
    if (fptr == NULL) return 1; 
    printf("enter data to write in the file: "); 
    scanf(" %[^\n]s", data); 
    fprintf(fptr, "%s", data); 
    fclose(fptr); 
    return 0; 
} 
