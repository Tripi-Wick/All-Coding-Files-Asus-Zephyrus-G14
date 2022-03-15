#include <stdio.h>

int main()
{
    int n;
    int prime;

    printf("Enter a number here to check whether its prime "); scanf("%d",&n);

    // By for loop
    // for(int a=2; a<n; a++)
    // {
    //     prime=n%a;
    //     if(prime==0){break;}
    // }

    // By while loop
    // int a=2;
    // while(a<n)
    // {
    //     prime=n%a;
    //     if(prime==0){break;}
    // }

    // By do while loop
    // int a=2;
    // do
    // {
    //     prime=n%a;
    //     if(prime==0){break;}
    // }
    // while(a<n);

    if(prime==0){printf("The entered number is not a prime number");}
    else{printf("The entered number is a prime number");}

    return 0;

}