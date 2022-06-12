#include <stdio.h>
void encrypt(char *ptr);
void decrypt(char *ptr);

int main()
{
    char c[]="Steven Strange";

    printf("The message is : %s\n",c);
    encrypt(c);
    printf("The encrypted message is : %s\n",c);
    decrypt(c);
    printf("The decrypted message is : %s\n",c);

    return 0;
}

void encrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
        }
}

void decrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
        }
}