#include <stdio.h> 
#include <string.h> 
 
void main() { 
    char str[30]; 
    int i, length, ispalindrome = 1; 
    printf("Enter a name :"); 
    scanf("%s", str); 
    length = strlen(str); 
    for (i = 0; i < length / 2; i++) { 
        if (str[i] != str[length - 1 - i]) { 
            ispalindrome = 0; 
            break; 
        } 
    } 
    if (ispalindrome) 
        printf("The string is palindrome.\n"); 
    else 
        printf("The string is not palindrome.\n"); 
} 
