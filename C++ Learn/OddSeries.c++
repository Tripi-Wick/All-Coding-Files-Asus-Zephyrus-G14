#include <stdio.h>
#include <stdio.h>

int main()
{
    int n;
    int a=-1,b=0;
    printf("Type the number of digits you want to see in odd series ");scanf("%d",&n);

    do
    {
    printf("%d\n",a+=2);
    b++;
    }
    while(b!=n);


    return 0;
}