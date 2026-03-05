#include <stdio.h> 
 
void main() { 
    int a, b; 
    printf("Enter two number:"); 
    scanf("%d %d", &a, &b); 
    printf("Value before swap: \n a=%d\t b=%d\n", a, b); 
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("Value after swap:\n a=%d\t b=%d\n", a, b); 
}