#include <stdio.h> 
 
void main() { 
    float a, b, sum; 
    printf("ENTER TWO NUMBERS :"); 
    scanf("%f %f", &a, &b); 
    sum = a + b; 
    printf("%.2f + %.2f = %.2f\n", a, b, sum); 
}