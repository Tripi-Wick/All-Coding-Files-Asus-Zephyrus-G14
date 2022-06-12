#include <stdio.h>
struct employee{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    // (*ptr).age=29;
    // (*ptr).salary=29.4;
 
// Can Also write pointer in structure like this.

    ptr->age=29;
    ptr->salary=29.4;

    printf("%d\n%.1f\n",e1.age,e1.salary);
    
    return 0;
}