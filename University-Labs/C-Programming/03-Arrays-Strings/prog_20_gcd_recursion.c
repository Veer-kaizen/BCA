#include <stdio.h> 
 
int gcd(int a, int b) { 
    if (b == 0) return a; 
    else return gcd(b, a % b); 
} 
 
int main() { 
    int n, m; 
    printf("Enter first number :"); 
    scanf("%d", &n); 
    printf("Enter second number :"); 
    scanf("%d", &m); 
    printf("The gcd of two numbers is: %d\n", gcd(n, m)); 
    return 0; 
}