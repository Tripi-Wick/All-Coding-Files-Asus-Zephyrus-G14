#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("20_Example File 4.txt", "r");

    static int n;

    fscanf(ptr, "%d", &n);
    fclose(ptr);

    FILE *fptr;
    fptr = fopen("20_Example File 4.txt", "w");

    fprintf(ptr,"%d",n*2);
    fclose(ptr);

    return 0;
}