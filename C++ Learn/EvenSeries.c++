#include <stdio.h>

int main()
{
    int n;
    int a=0,b=0;
    printf("Type The of digits you want to see in even series ");scanf("%d",&n);

    do
    {
    printf("%d\n",a+=2);
    b++;
    }
    while(b!=n);


    return 0;
}