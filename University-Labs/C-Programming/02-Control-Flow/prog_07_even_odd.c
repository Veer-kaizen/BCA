#include <stdio.h> 
 
void main() { 
    int num; 
    printf("Enter an Integer :"); 
    scanf("%d", &num); 
    if (num % 2 == 0) 
        printf("%d is an even integer\n", num); 
    else 
        printf("%d is an odd integer\n", num); 
}