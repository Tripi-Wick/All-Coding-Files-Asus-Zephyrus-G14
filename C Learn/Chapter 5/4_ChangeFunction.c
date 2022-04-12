#include <stdio.h>

int change(int b);

int main()
{
    int b = 69;
     
     printf("The value of b before change function is %d \n",b);

     printf("The value of b before change function is %d",b);
     
    return 0;

}

int change(int b){
    b=59;
    return b;
}