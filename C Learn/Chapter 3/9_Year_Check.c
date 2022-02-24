#include <stdio.h>

int main()
{
    int Year;
    printf("Type the year "); scanf("%d",&Year);

    if(Year%4==0){printf("The year entered is a leap year");}
    else{printf("The Year entered is a not a leap year");}
    
    return 0;
}