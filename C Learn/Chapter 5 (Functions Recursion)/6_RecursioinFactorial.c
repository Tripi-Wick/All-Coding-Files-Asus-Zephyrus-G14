#include <stdio.h>

int factorial(int x);

int main()
{
    int n;

    printf("Enter the value of number Whose factorial you want to see "); scanf("%d",&n);

    printf("So The value of factorial is %d",factorial(n));

    return 0;

}

int factorial(int x){
    if(x==1||x==0){
        return 1;
    }

    else{return x*factorial(x-1);}

}
