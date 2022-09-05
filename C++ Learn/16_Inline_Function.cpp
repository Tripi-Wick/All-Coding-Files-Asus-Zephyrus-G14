#include <iostream>
using namespace std;

inline int sum(int, int);

int main()
{
    int a,b;
    cout<<"Enter the value of a anf b:"<<endl;
    cin>>a>>b;
    cout<<"The sum of a and b is: "<<sum(a,b);
    return 0;
}

inline int sum(int a, int b){
    return a+b;
}