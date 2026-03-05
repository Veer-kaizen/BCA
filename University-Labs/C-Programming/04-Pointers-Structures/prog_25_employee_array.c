#include <stdio.h> 
 
struct employee { 
    char emp_name[200]; 
    int emp_ID; 
    float salary; 
    int experience; 
}; 
 
int main() { 
    int n, i; 
    printf("enter the limit: "); 
    scanf("%d", &n); 
    struct employee ep[n]; 
    for (i = 0; i < n; i++) { 
        printf("enter the name for employee %d: ", i + 1); 
        scanf("%s", ep[i].emp_name); 
        printf("enter the ID for employee %d: ", i + 1); 
        scanf("%d", &ep[i].emp_ID); 
        printf("enter the salary for employee %d: ", i + 1); 
        scanf("%f", &ep[i].salary); 
        printf("enter the experience for employee %d: ", i + 1); 
        scanf("%d", &ep[i].experience); 
    } 
    printf("\nEMPLOYEE DETAILS\n"); 
    for (i = 0; i < n; i++) { 
        printf("Name: %s | ID: %d | Salary: %.2f | Experience: %d\n",  
               ep[i].emp_name, ep[i].emp_ID, ep[i].salary, 
ep[i].experience); 
    } 
    return 0; 
}