#include <stdio.h> 
 
void main() { 
    int n, i; 
    printf("Enter the number of elements :"); 
    scanf("%d", &n); 
    int arr[n]; 
    for (i = 0; i < n; i++) { 
        printf("Enter element %d :", i + 1); 
        scanf("%d", &arr[i]); 
    } 
    int largest = arr[0], smallest = arr[0]; 
    for (i = 1; i < n; i++) { 
        if (arr[i] < smallest) smallest = arr[i]; 
        if (arr[i] > largest) largest = arr[i]; 
    } 
    printf("The largest number in the array is: %d \n", largest); 
    printf("The smallest number in the array is: %d \n", smallest); 
} 