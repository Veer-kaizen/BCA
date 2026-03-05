#include <stdio.h> 
 
int main() { 
    int arr[] = {10, 20, 30, 40, 50}; 
    int *p = arr; 
    printf("Value at p: %d\n", *p); 
    printf("Value at p+1: %d\n", *(p + 1)); 
    printf("Value at p+2: %d\n", *(p + 2)); 
    p++; 
    printf("After p++: %d\n", *p); 
    p--; 
    printf("After p--: %d\n", *p); 
    return 0; 
}