#include <stdio.h>
#include <stdio.h>

int main()
{
    int n;
    int a=2,b=0;
    printf("Type The of digits you want to see in odd series ");scanf("%d",&n);
    printf("2\n");

    do
    {
    printf("%d\n",a+=2);
    b++;
    }
    while(b!=n);


    return 0;
}