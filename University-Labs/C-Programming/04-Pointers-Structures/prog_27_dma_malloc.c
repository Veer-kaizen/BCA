#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    float *ptr; 
    int i; 
    ptr = (float *)malloc(5 * sizeof(float)); 
    for (i = 0; i < 5; i++) { 
        printf("enter marks for subject %d: ", i + 1); 
        scanf("%f", &ptr[i]); 
    } 
    printf("\nMarks scored by student:\n"); 
    for (i = 0; i < 5; i++) { 
        printf("subject %d: %f\n", i + 1, ptr[i]); 
    } 
    free(ptr); 
    return 0; 
}