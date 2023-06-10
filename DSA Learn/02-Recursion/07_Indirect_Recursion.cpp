#include <iostream>
using namespace std;

void fun_A(int n);
void fun_B(int n);

int main()
{
    fun_A(20);
    return 0;
}

void fun_A(int n){
    if(n>0){
        printf("%d\n",n);
        fun_B(n-1);
    }
}
void fun_B(int n){
    if(n>1){
        printf("%d\n",n);
        fun_B(n/2);
    }
}