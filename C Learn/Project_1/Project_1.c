#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Random_Number,num,guess=1;

    printf("Try to guess the number "); scanf("%d",&num);

    srand(time(0));
    Random_Number=rand()%10;
    
    do{
        if(num<Random_Number){printf("Plz Guess a Higher Number ");scanf("%d",&num); guess++;}
        if(num>Random_Number){printf("Plz Guess a Smaller Number ");scanf("%d",&num); guess++;}
        if(num=Random_Number) {printf("Your Guess is Totally Correct and you guessed it in %d attempts",guess);}
    }
    while(num!=Random_Number);

    return 0;
}