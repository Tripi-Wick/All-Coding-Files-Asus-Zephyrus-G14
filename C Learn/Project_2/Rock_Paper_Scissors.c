// Rock Paper Scissors Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int computer,player;
    char guess;

    srand(time(0));
    computer = rand()%3+1;

    printf("********Enter 'r' for rock, 'p' for paper, 's' for scissors********\n");

    do{
        printf("player Choose:- ");scanf("%c",&guess);

        if(guess=='r'){player=1;}
        if(guess=='p'){player=2;}
        if(guess=='s'){player=3;}

        if(computer==1){printf("Computer Chooses:- r\n");}
        if(computer==2){printf("Computer Chooses:- p\n");}
        if(computer==3){printf("Computer Chooses:- s\n");}

        if(computer==player){printf("Next Round\n");}
        if(computer==1 && player==2){printf("***player WIN***");break;}
        if(computer==1 && player==3){printf("***player LOOSE***");break;}
        if(computer==2 && player==1){printf("***player LOOSE***");break;}
        if(computer==2 && player==3){printf("***player WIN***");break;}
        if(computer==3 && player==1){printf("***player WIN***");break;}
        if(computer==3 && player==2){printf("***player LOOSE***");break;}
        
        fflush(stdin);

    }while(computer=player);

    return 0;
}