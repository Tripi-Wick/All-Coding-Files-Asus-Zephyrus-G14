#include <iostream>
using namespace std;

void fun(int n){

    if(n>0){
        printf("%d\n",n);
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


// If the recursive call in a function is the last statement in the function then the recursion is called Tail Recursion
//  Loops are better than tail recursion. Hence loop should be preferred over tail recursion.
// This is so cause space complexity of loop is less then tail recursion.