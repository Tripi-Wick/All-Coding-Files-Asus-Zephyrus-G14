#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[10];
    int age;
    float salary;
} emp;

void show(emp em){
    printf("%s\n%d\n%.1f\n",em.name,em.age,em.salary);
}

int main()
{
    struct employee e1;
    emp *ptr;
    ptr=&e1;

    strcpy(e1.name,"Tori");
    ptr->age=29;
    ptr->salary=29.4;

    show(e1);

    return 0;
}