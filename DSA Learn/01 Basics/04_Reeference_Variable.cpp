#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int& r = a;

    cout<< a << endl; 
    cout<< r << endl;
     r=67;
    cout<< r << endl;
    cout<< a << endl;
    
    
    return 0;
}

// Reference is just a nickname to the the variable.
// Reference must be declared at the time of formation else will get a error