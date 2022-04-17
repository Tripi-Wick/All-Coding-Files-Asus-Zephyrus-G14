#include <stdio.h>
void inc(int *a);

// void inc(int a);

int main()
{
    int a;

    printf("Enter the number whose value you want to increment by 10 ");
    scanf("%d",&a);
    inc(&a);
    // inc(a);
    printf("So the value now is %d\n",a);

    return 0;
}

void inc(int *a)
{
    (*a)+=10;
}

// void inc(int a)
// {
//     a+=10;
// }
