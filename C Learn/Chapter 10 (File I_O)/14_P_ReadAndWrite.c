#include <stdio.h>

int main()
{
    FILE *fptr1;
    fptr1 = fopen("15_E_Example File 3.txt", "r");

    FILE *fptr2;
    fptr2 = fopen("16_E_Generated File 3.txt", "w");

    char c;
    c=fgetc(fptr1);

    while(c!=EOF){
        fputc(c,fptr2);
        fputc(c,fptr2);
        c = fgetc(fptr1);
    }

    printf("File Generated Successfully");

    return 0;
}