#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("01__Example File.txt", "r");

    if(ptr==NULL){
        printf("THis file does not exists.");
    }

    else {
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d",num);
    }

    fclose(ptr);
    
    return 0;
}