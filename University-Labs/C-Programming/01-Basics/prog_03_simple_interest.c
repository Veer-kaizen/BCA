#include <stdio.h> 
 
void main() { 
    float p, r, t, si; 
    printf("ENTER PRINCIPLE AMT :"); 
    scanf("%f", &p); 
    printf("ENTER RATE : "); 
    scanf("%f", &r); 
    printf("ENTER TIME (in year) :"); 
    scanf("%f", &t); 
    si = (p * r * t) / 100; 
    printf("%.2f * %.2f * %.2f / 100 = %.2f\n", p, r, t, si); 
}