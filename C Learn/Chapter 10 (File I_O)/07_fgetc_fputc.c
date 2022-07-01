#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr= fopen("08_E_Example File 2.txt", "r");

    FILE *ptr2;
    ptr2 = fopen("09_E_Generated File 2.txt", "w");

// Types to use these
    // fgetc
        
        // Type 1
            // char c = fgetc(ptr);
            // printf("%c\n",c);
            // printf("%c\n",c);
            // printf("%c\n",c);

        // Type 2
            // printf("%c\n",fgetc(ptr));
            // printf("%c\n",fgetc(ptr));
            // printf("%c\n",fgetc(ptr));
            // printf("%c\n",fgetc(ptr));
        
        // Type 3
            char c;
            
            c = fgetc(ptr);
            
            while(c!=EOF){
                printf("%c",c);
                c = fgetc(ptr);
            }

    fclose(ptr);

    // fputc

        // Type 1
            // fputc('H', ptr2);

        // Type 2
            // fputc('H', ptr2);
            // fputc('e', ptr2);
            // fputc('l', ptr2);
            // fputc('l', ptr2);
            // fputc('o', ptr2);
    
    fclose(ptr2);


    return 0;
}