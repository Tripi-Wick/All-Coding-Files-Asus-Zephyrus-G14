#include <iostream>
using namespace std;

int sums(int a, int b){         //-------->Formal Parameters
    int res;
    res = a + b;
    return res;
}

int main()
{
    cout << "THe sum of a and b is : "<<sums(1,2);         //----------> Actual Parameters

    return 0;
}


// One Function can not access the variables of other function directly but can access them indirectly using pointers.