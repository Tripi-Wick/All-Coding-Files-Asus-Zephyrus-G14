#include <stdio.h>
void sum_avg(int i , int j, int*sum, float*avg);

int main()
{
    int i,j,sum;
    float avg;

    printf("Enter the numbers whose sum and avg you wanna find \n");scanf("%d %d",&i,&j);

    sum_avg(i,j,&sum,&avg);

    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %f\n", avg);
    return 0;
}

void sum_avg(int i , int j, int*sum, float*avg)
{
    *sum=i+j;
    *avg=(float)*sum/2;
}