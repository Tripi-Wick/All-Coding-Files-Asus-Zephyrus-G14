#include <stdio.h>

int main()
{
    float I;
    printf("Enter Your Income "); scanf("%f",I);
    
    if(0<=I && I<=250000)
        {
            printf("You have to pay no tax ");
        }
    
    else if(250000<I && I<=500000)
        {
            float A = (5/100)*I ;
            printf("You will pay 5 percent tax which is equal to %f \n", A );
        }

    else if(500000<I && I<=1000000)
        {
            float B = (20/100)*I ;
            printf("You will pay 20 percent tax which is equal to %f \n", B );
        }

    else if(1000000<I)
        {
            float C = (30/100)*I ;
            printf("You will pay 30 percent tax which is equal to %f \n", C );
        }

    else {printf("You have entered invalid amount of income");}

    return 0;
}