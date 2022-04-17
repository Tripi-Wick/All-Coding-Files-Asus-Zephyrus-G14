#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x=3,y=4;
    printf("Value of x and y before swap is %d and %d\n",x,y);
    // wrong_swap(x,y);
    swap(&x,&y);
    printf("Value of x and y before swap is %d and %d\n",x,y);
    
    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// Hence value of variable can be changed by passing value to function by adderess as arguments but not by passing values directly as arguments.