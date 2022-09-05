#include <iostream>
using namespace std;

int main()
{
    enum Meal{breakfast,lunch,dinner};

    Meal m1 = lunch;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<m1<<endl;

    return 0;

// Enum assigns its contents with the values 0 1 2 3.....
}