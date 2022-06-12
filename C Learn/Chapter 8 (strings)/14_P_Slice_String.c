#include <stdio.h>

void slice(char *ptr, int m, int n);

int main()
{
    char str[]="Trippi";

    slice(str,2,5);

    printf("the sliced string is %s",str);

    return 0;
}

void slice(char *ptr, int m, int n){

int i=0;

while((m+i)<n)
{
    ptr[i]=ptr[i+m];
    i++;
}
ptr[i]='\0';
}