#include <stdio.h>
#include <string.h>
struct employee {
    char name[20];
    float number;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    printf("The name of employee 1 is : ");gets(e1.name);
    printf("The number of employee 1 is : ");scanf("%f",&e1.number);
    printf("The salary of employee 1 is : ");scanf("%f",&e1.salary);
    fflush(stdin);

    printf("The name of employee 2 is : ");gets(e2.name);
    printf("The number of employee 2 is : ");scanf("%f",&e2.number);
    printf("The salary of employee 2 is : ");scanf("%f",&e2.salary);
    fflush(stdin);

    printf("The name of employee 3 is : ");gets(e3.name);
    printf("The number of employee 3 is : ");scanf("%f",&e3.number);
    printf("The salary of employee 3 is : ");scanf("%f",&e3.salary);
    fflush(stdin);

    return 0;
}