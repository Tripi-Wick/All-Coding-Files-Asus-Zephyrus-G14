#include <stdio.h>
void Reversed(int*);

int main()
{
    int arr[4]={1,2,3,4};
    for(int i=0; i<4; i++){
        printf("Elements=%d\n",arr[i]);
    }

    Reversed(&arr[3]);
    
    return 0;
}

void Reversed(int*a){
    for(int i=3;i>=0;i--){
        printf("Elements in reversed=%d\n",*a--);
    }

}