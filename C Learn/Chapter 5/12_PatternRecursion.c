#include <stdio.h>
void pattern(int n);

int main()
{
    int n;
    printf("Enter the number of lines you wanna print ");scanf("%d",&n);
    pattern(n);
    return 0;
}

void pattern(int n){
    if(n==1){
    printf("*\n");
    return;
}

pattern(n-1);
for(int a=0; a<(2*n-1); a++){
    printf("*");
}
printf("\n");
}