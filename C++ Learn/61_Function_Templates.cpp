#include <iostream>
using namespace std;

template<class T>
void swaps(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 1, y = 2;
    // float x = 2.1, y = 1.2;
    // char x = 'x', y = 'y';
    // string x = "Trishan", y = "Tripi";

    cout<<"x = "<<x<<" y = "<<y<<endl;
    swaps(x,y);
    cout<<"x = "<<x<<" y = "<<y<<endl;
    
    return 0;
}


// This is general swap function by use of function templates.