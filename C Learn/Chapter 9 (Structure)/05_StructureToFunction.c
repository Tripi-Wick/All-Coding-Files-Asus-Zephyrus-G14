#include <stdio.h>
#include <string.h>

struct employee{
    char name[10];
    int age;
    float salary;
};

void show(struct employee emp){
    printf("%s\n%d\n%.1f\n",emp.name,emp.age,emp.salary);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    strcpy(e1.name,"Tori");
    ptr->age=29;
    ptr->salary=29.4;

    show(e1);

    return 0;
}