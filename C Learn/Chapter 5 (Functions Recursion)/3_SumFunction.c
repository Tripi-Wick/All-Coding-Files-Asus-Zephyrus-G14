#include <stdio.h>

int sum(int a,int b);

int main()
{
    int c;

    c= sum(900,232);

    printf("%d",c);

    return 0;

}

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}