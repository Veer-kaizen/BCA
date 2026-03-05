#include <stdio.h> 
 
struct student { 
    char name[100]; 
    int roll; 
    float marks; 
}; 
 
int main() { 
    int n, i; 
    printf("enter number of students: "); 
    scanf("%d", &n); 
    struct student st[n]; 
    struct student *ptr = st; 
    for (i = 0; i < n; i++) { 
        printf("enter name: "); 
        scanf("%s", (ptr + i)->name); 
        printf("enter roll number: "); 
        scanf("%d", &(ptr + i)->roll); 
        printf("enter marks: "); 
        scanf("%f", &(ptr + i)->marks); 
    } 
    printf("\nSTUDENT DETAILS\n"); 
    for (i = 0; i < n; i++) { 
        printf("Name: %s | Roll: %d | Marks: %.2f\n",  
               (ptr + i)->name, (ptr + i)->roll, (ptr + i)->marks); 
    } 
    return 0; 
} 
