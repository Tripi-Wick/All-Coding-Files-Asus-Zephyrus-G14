#include <iostream>
using namespace std;

int main()
{
    int n;
    int prime;

    printf("Enter a number here to check whether its prime "); scanf("%d",&n);

    // By for loop
    for(int a=2; a<n; a++)
    {
        prime=n%a;
        if(prime==0){break;}
    }

    if(prime==0){printf("The entered number is not a prime number");}
    else{printf("The entered number is a prime number");}

    return 0;
}