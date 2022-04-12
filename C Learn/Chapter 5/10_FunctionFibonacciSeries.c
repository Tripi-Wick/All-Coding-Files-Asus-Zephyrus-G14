#include <stdio.h>
int fib(int a);

int main()
{
    int a;
    printf("Enter the number of fibonacci series elements you want to see ");scanf("%d",&a);
    printf("%d",fib(a));
    
    return 0;
}

int fib(int a){
    int b=0,c=1,n=1;
    
    if(a!=n){
        b+=c,
        b=c;
        n++;
        return b;
    }
}

