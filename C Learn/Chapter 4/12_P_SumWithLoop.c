#include <stdio.h>

int main()
{
    int n,a=1,sum=0;

    printf("Enter the numbers whose Sum You wanna see "); scanf("%d",&n);


    // 1:- Sum of n natural numbers by While loop:-
    //(Its sort of Wrong)
     
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



    // 4th:- By Harry
    // 
    // int i=1, sum=0, n=10;
    // // for(i=1; i<=n; i++){
    // //     sum +=i;
    // // }
    // while( i<=n){
    //     sum +=i;
    //     i++; 
    // }
    // printf("The value of sum(1 to 10) is %d", sum);


    // 5th:- The thing I fucking wanted to make from that long finally after two days 🥲

    for(a=1; a<=n; a++)
    {
    printf("%d+%d",sum,a);
    printf("=%d\n",sum+=a);
    }
    return 0;

}