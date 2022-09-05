#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 3, b= 78, c= 1223;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
// setw is used to make values right justified
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    return 0;
}

// endl and setw are two manipulators
// Associativity(from left or right) is checked when precedence(which is solved first) is same
