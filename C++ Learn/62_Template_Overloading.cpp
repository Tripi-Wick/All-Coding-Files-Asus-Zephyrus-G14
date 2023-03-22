#include <iostream>
using namespace std;

void display(int a){ 
    cout<<a<<endl;
}

template<class T>
void display(T a){
    cout<<a<<endl;
}

int main()
{
    display(1);
    display('c');
    
    return 0;
}

// Here more priority is given to the function which is exact match rather then the one which can be created