#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("06_E_Generated File.txt","w");

    int num=117;

    fprintf(ptr, "This file is created by THe Boss.\n");
    fprintf(ptr, "The code number of THe Boss if %d.", num);

    fclose(ptr);

    return 0;
}