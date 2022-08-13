#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number whose pattern you wanna see: ");scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for(int j=0; j<2*n-1; j++){
            if(i==(n-1)||j==(n-1)){printf("* ");}
            else if(((n-1)-i)<=j && j<=((n-1)+i)){printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }
    
    return 0;
}