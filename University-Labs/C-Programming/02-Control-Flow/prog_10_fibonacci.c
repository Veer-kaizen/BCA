#include <stdio.h> 
 
void main() { 
    int n, term1 = 0, term2 = 1, i, next_term; 
    printf("Enter number of terms:"); 
    scanf("%d", &n); 
    printf("%d\t%d", term1, term2); 
    for (i = 2; i < n; i++) { 
        next_term = term1 + term2; 
        printf("\t%d", next_term); 
        term1 = term2; 
        term2 = next_term; 
    } 
}