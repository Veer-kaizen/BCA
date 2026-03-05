#include <stdio.h> 
 
void main() { 
    int num, i; 
    printf("Enter an Integer to be checked: "); 
    scanf("%d", &num); 
    for (i = 2; i < num; i++) { 
        if (num % i == 0) break; 
    } 
    if (num == i) 
        printf("%d is a prime number\n", num); 
    else 
        printf("%d is not prime\n", num); 
}