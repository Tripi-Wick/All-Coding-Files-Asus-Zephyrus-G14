#include <stdio.h>

int main()
{
    char Alphabet;

    printf("Enter Your character "); scanf("%c",&Alphabet);

    switch(Alphabet)
    {
        case 'a' :
        case 'b' :
        case 'c' :
        case 'd' :
        case 'e' :
        case 'f' :
        case 'g' :
        case 'h' :
        case 'i' :
        case 'j' :
        case 'k' :
        case 'l' :
        case 'm' :
        case 'n' :
        case 'o' :
        case 'p' :
        case 'q' :
        case 'r' :
        case 's' :
        case 't' :
        case 'u' :
        case 'v' :
        case 'w' :
        case 'x' :
        case 'y' :
        case 'z' :
        printf("The entered character is in lower case");
        break;

        default: printf("The entered character is in upper case");
    }

    return 0;
}