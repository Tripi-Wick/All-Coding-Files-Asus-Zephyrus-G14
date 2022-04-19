#include <stdio.h>

int main()
{
    int n, factorial=1;
    printf("Enter the number whose factorial you wanna get "); scanf("%d",&n);
    printf("%d!= ",n);

    // By for Loop
    // for( ; n>0 ; n--){printf("%dx",n);}

    // By While Loop
    // while(n>0)
    //     {
    //     printf("%dx",n);
    //     n--;
    //     }

    // By do While Loop
    // do
    // {
    // printf("%dx",n);
    // n--;
    // }
    // while(n>0);

    // Value of factorial by for loop
    // for( ; n>0; n--){factorial*=n;}
    // printf("%d",factorial);

    // Value of factorial by while loop
    // while(n>0)
    // {
    //     factorial*=n;
    //     n--;
    // }
    // printf("%d",factorial);

    // Value of factorial by do while loop
    do
    {
        factorial*=n;
        n--;
    }
    while(n>0);

    printf("%d",factorial);

    return 0;
}