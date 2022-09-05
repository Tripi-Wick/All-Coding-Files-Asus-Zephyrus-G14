#include <iostream>
using namespace std;

void swapByValue (int , int);
void swapByPointer (int* , int*);
void swapByReference (int& , int&);

int main()
{
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"The value of a before swap is: "<<a<<endl;
    cout<<"The value of b before swap is: "<<b<<endl;

    // swapByValue(a,b);
    // swapByReference(a,b);
    swapByPointer(&a,&b);

    cout<<"The value of a after swap is: "<<a<<endl;
    cout<<"The value of b after swap is: "<<b<<endl;

    return 0;
}

void swapByValue (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByPointer (int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapByReference (int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}