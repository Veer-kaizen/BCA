#include <stdio.h> 
 
int main() { 
    int n, i; 
    printf("enter the limit of the array: "); 
    scanf("%d", &n); 
    int arr[n]; 
    for (i = 0; i < n; i++) { 
        printf("enter element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    } 
    int *ptr = arr; 
    printf("array elements using pointer: \n"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", *(ptr + i)); 
    } 
    return 0; 
} 
