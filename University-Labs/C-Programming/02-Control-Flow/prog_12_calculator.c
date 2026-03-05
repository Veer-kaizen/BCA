#include <stdio.h> 
 
int main() { 
    int choice; 
    double num1, num2, result; 
    while (1) { 
        printf("\n--- Menu Driven Calculator ---\n"); 
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n 5. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        if (choice == 5) break; 
        printf("Enter two numbers: "); 
        scanf("%lf %lf", &num1, &num2); 
        switch (choice) { 
            case 1: result = num1 + num2; break; 
            case 2: result = num1 - num2; break; 
            case 3: result = num1 * num2; break; 
            case 4: 
                if (num2 != 0) result = num1 / num2; 
                else { printf("Error! Division by zero.\n"); continue; 
} 
                break; 
            default: printf("Invalid Choice!\n"); continue; 
        } 
        printf("Result = %.2lf\n", result); 
    } 
    return 0; 
}