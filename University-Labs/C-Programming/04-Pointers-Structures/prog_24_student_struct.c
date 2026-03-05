#include <stdio.h> 
 
struct student { 
    char name[200]; 
    int roll; 
    float marks; 
}; 
 
int main() { 
    int n, i; 
    printf("enter the number of students: "); 
    scanf("%d", &n); 
    struct student st[n]; 
    for (i = 0; i < n; i++) { 
        printf("enter name of student %d: ", i + 1); 
        scanf("%s", st[i].name); 
        printf("enter roll no. of student %d: ", i + 1); 
        scanf("%d", &st[i].roll); 
        printf("enter marks of student %d: ", i + 1); 
        scanf("%f", &st[i].marks); 
    } 
    printf("\nSTUDENT DETAILS\n"); 
    for (i = 0; i < n; i++) { 
        printf("Name: %s | Roll: %d | Marks: %.2f\n", st[i].name, 
st[i].roll, st[i].marks); 
    } 
    return 0; 
} 