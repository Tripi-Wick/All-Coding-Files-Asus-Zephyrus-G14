#include <iostream>
using namespace std;

int main(){
    float x = 4;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}

// when passed by reference the main data can be altered
// while when passed by value the main data can't be altered