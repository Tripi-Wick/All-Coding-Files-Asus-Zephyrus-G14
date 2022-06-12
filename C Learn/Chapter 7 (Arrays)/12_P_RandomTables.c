#include <stdio.h>

int main()
{
    int m;
    int mul[10];
    printf("Enter the Number whose table you want to see : ");scanf("%d",&m);

    for(int i=0;i<10;i++){
        mul[i]=m*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%d*%d=%d\n",m,i,mul[i]);
    }

    return 0;
}