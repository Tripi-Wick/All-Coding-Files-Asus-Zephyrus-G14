#include <stdio.h>
int count(int);


int main() {
	
    int n,x;

    printf("Enter a number:");
    scanf("%d", &n);

    x=count(n);
    printf("%d\n",x);

    return 0;

}

int count(int n){
    int x=0;
        while(n!=0){
            n=n/10;
            x++;
        }
    return x;
}
