#include <iostream>
using namespace std;

typedef union salary{
    int rupee;
    char dollar;
    float pound;
}sal;

int main()
{
    sal ram,seeta,lakshman;
    ram.rupee=3;
    ram.dollar='d';

    cout<<ram.dollar<<endl;
    cout<<ram.rupee<<endl; //gives garbage value

// IN union memory is shared between all of the elements and the element which require maximum memory that amount of memory is allocated

// we can use only one data type at a time in this
    
    return 0;
}