#include <iostream>
using namespace std;

void fun(int n){

    if(n>0){
        printf("%d\n",n);
        fun(n-1);
        fun(n-1);
    }
    else return;  
}

int main()
{
    int n;
    n = 3;
    fun(n); 
    
    return 0;
}
// In recursion if the recursive function calls itself more than once in the function then it is known as tree recursion.