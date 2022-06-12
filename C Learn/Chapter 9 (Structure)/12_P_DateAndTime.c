#include <stdio.h>

typedef struct DateAndTime
{
    int date;
    int month;
    int year;
    int hours;
    int minutes;
}DAT;

void display(DAT D[]);
int Compare(DAT D[]);

int main()
{
    DAT D[2];
    printf("******If First entered value is greater then second the '1' is returned else '-1'. If Both are same then '0' is returned******\n");
    for(int i=0;i<2;i++){
        printf("Enter %d date: ",i+1);scanf("%d",&D[i].date);
        printf("Enter %d month: ",i+1);scanf("%d",&D[i].month);
        printf("Enter %d year: ",i+1);scanf("%d",&D[i].year);
        printf("Enter %d hours: ",i+1);scanf("%d",&D[i].hours);
        printf("Enter %d minutes: ",i+1);scanf("%d",&D[i].minutes);
    }
    display(D);
    int r=Compare(D);
    printf("So the result of comparision is: %d",r);

    return 0;
}

void display(DAT D[]){
      for(int i=0;i<2;i++){
        printf("The Entered Date %d= %d-%d-%d,%d:%d\n",i+1,D[i].date,D[i].month,D[i].year,D[i].hours,D[i].minutes);
    }
}

int Compare(DAT D[]){
    //First on Basis of Year
    if(D[0].year>D[1].year){
        return 1;
    }
    if(D[0].year<D[1].year){
        return -1;
    }
    
    //Now on Basis of Month
    if(D[0].month>D[1].month){
        return 1;
    }
    if(D[0].month<D[1].month){
        return -1;
    }
    
    //Now on Basis of Date
    if(D[0].date>D[1].date){
        return 1;
    }
    if(D[0].date<D[1].date){
        return -1;
    }
    
    //Now on Basis of Hours
    if(D[0].hours>D[1].hours){
        return 1;
    }
    if(D[0].hours<D[1].hours){
        return -1;
    }
    
    //Now on Basis of Minutes
    if(D[0].minutes>D[1].minutes){
        return 1;
    }
    if(D[0].minutes<D[1].minutes){
        return -1;
    }

    else{
        return 0;
    }
}