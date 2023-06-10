#include <iostream>
using namespace std;

void fun(int n){

    if(n>0){
        fun(n-1);
        printf("%d\n",n);
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

// If the recursive call in a function is the first statement in the function then the recursion is called Tail Recursion