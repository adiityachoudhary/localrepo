#include <stdio.h>
int main()
{
    FILE *ptr;
    char name1[15], name2[15];
    int salary1, salary2;
    ptr = fopen("10_04_employee.txt", "w");

    printf("Enter name of employee 1: ");
    scanf("%s", &name1);
    printf("Enter salary of employee 1: ");
    scanf("%d", &salary1);

    printf("Enter name of employee 2: ");
    scanf("%s", &name2);
    printf("Enter salary of employee 2: ");
    scanf("%d", &salary2);

    fprintf(ptr, "i. %s, %d\n", name1, salary1);
    fprintf(ptr, "ii. %s, %d\n", name2, salary2);

    fclose(ptr);
    return 0;
}