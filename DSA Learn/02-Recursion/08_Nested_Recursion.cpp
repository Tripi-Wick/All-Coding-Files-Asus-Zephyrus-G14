#include <iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return n - 10;
    }
    else fun(fun(n+11));
}

int main()
{
    cout<<fun(90);
    return 0;
}


// If there exists a recursive function inside a recursive function then this type of recursion is called nested recursion.
