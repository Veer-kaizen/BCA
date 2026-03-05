#include <stdio.h> 
 
void main() { 
    int a, b, c; 
    printf("Enter Two Number:"); 
    scanf("%d %d", &a, &b); 
    printf("Values before swap:\n a=%d\t b=%d\n", a, b); 
    c = a; 
    a = b; 
    b = c; 
    printf("Values after swap:\n a=%d\t b=%d\n", a, b); 
}