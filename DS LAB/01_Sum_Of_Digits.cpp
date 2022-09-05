#include <iostream>
using namespace std;

int sum(int a){
    int b=0;
    do{
        b+=a%10;
        a=a/10;
    }while(a>10);
    b+=a;
    return b;
}

int main()
{
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"The sum of digits of given number is: "<<sum(a);
    

    return 0;
}