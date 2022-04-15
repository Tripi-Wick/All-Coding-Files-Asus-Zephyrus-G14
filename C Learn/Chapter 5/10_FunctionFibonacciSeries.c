#include <stdio.h>
void fib(int a);

int main()
{
    int a;
    printf("Enter the number of elements "); scanf("%d",&a);

    printf("0 1 ");
    fib(a-2);

    return 0;
}

void fib(int a){
    static int n1=0,n2=1,n;
    if(a>0){
        n=n1+n2;
        n1=n2;
        n2=n;
        printf("%d ",n);
        fib(a-1);
    }
}