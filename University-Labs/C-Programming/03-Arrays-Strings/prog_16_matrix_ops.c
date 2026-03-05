#include <stdio.h> 
 
void main() { 
    int n, m, i, j; 
    printf("Enter the row of matrix: "); 
    scanf("%d", &n); 
    printf("Enter the column of matrix: "); 
    scanf("%d", &m); 
    int arrA[n][m], arrB[n][m], arrC[n][m], arrD[n][m]; 
 
    printf("Enter elements of the first matrix:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            printf("A[%d][%d]: ", i, j); 
            scanf("%d", &arrA[i][j]); 
        } 
    } 
 
    printf("Enter elements of second matrix:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            printf("B[%d][%d]: ", i, j); 
            scanf("%d", &arrB[i][j]); 
        } 
    } 
 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            arrC[i][j] = arrA[i][j] + arrB[i][j]; 
            arrD[i][j] = arrA[i][j] - arrB[i][j]; 
        } 
    } 
 
    printf("The sum of two matrices are:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) printf("%d ", arrC[i][j]); 
        printf("\n"); 
    } 
    printf("The difference of two matrices are:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) printf("%d ", arrD[i][j]); 
        printf("\n"); 
    } 
} 
