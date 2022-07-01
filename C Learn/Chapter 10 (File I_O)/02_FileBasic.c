#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Example File.txt", "r");
    ptr = fopen("Example File.txt", "w");
    
    return 0;
}