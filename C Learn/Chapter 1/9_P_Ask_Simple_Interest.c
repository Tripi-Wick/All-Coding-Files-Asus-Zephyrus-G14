# include <stdio.h>

int main(){

    float P,R,T,F;

    printf("The Principal Amount is = ");
    scanf("%f",&P);

    printf("The Rate of Interest is = ");
    scanf("%f",&R);

    printf("The Time in yrs = ");
    scanf("%f",&T);

    printf("So The Final Amount is %f",F=P*(1+R*T));

    return 0;

}