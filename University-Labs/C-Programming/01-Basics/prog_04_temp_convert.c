#include <stdio.h> 
 
void main() { 
    float fahrenheit, celsius; 
    printf("Enter you Temp Fahrenheit:"); 
    scanf("%f", &fahrenheit); 
    celsius = (fahrenheit - 32) * 5 / 9; 
    printf("temp is celsius: %f\n", celsius); 
}