#include <stdio.h>

int main()
{
    int n,a=1;

    printf("Enter the numbers whose Sum You wanna see "); scanf("%d",&n);

    // 1:- Sum of n natural numbers by While loop:-
    // (Its sort of Wrong)
    //  
    // while(a<=n) 
    // {
    //     printf("%d\n",a*(a+1)/2); 
    //     a++;
    // }



    //2:- Sum of n natural numbers by while loop:-
    // while(a<n)
    // {
    //     a++;
    // }
    // 
    // printf("The value of %d natural numbers is: %d\n",n,(a*(a+1)/2));



    //3:- Sum of n matural numbers by do while loop:-
    // 
    // do{a++;}
    // while(a<n);
    //
    // printf("The value of %d natural numbers is: %d\n",n,(a*(a+1)/2));

    

    //3:- Sum of n natural numbers by for loop:-
    // 
    // for( ; a<n; a++){}
    // 
    // printf("The value of %d natural numbers is: %d\n",n,(a*(a+1)/2));

    return 0;

}