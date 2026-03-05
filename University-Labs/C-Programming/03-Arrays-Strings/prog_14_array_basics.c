#include <stdio.h> 
 
void main() { 
    int n, i; 
    printf("ENTER THE NUMBER OF ELEMENTS :"); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("ENTER %d INTEGERS : ", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("THE ELEMENTS ARE : "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
}