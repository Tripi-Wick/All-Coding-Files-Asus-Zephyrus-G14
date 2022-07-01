#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("11_E_Integer.txt", "r");

    int a,b,c;

    fscanf(fptr, "%d %d %d ", &a,&b,&c);

    printf("%d\n%d\n%d\n",a,b,c);
    
    return 0;
}