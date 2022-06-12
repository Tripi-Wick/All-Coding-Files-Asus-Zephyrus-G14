#include <stdio.h>

int main()
{
    int arr[3][10];
 
    for(int i=0; i<10; i++){
        arr[0][i]=2*(i+1);
    }
    for(int i=0; i<10; i++){
        arr[1][i]=7*(i+1);
    }
    for(int i=0; i<10; i++){
        arr[2][i]=9*(i+1);
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            int n;
            if(i==0){n=2;}
            if(i==1){n=7;}
            if(i==2){n=9;}
            printf("%d*%d=%d\n",n,j,arr[i][j]);
        }
    }
    return 0;
}