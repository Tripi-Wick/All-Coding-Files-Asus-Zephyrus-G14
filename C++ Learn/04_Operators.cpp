#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 5;

    // Arithmetic Operators
    cout<<"The value of a + b is :"<<a+b<<endl;
    cout<<"The value of a - b is :"<<a-b<<endl;
    cout<<"The value of a * b is :"<<a*b<<endl;
    cout<<"The value of a / b is :"<<a/b<<endl;
    cout<<"The value of a % b is :"<<a%b<<endl;
    cout<<"The value of a++ is :"<<a++<<endl;
    cout<<"The value of a-- is :"<<a--<<endl;
    cout<<"The value of ++a is :"<<++a<<endl;
    cout<<"The value of --a is :"<<--a<<endl;
    cout<<endl;

    // Assignment Operators
    b+=2;
    cout<<"The value of b+=2 is :"<<b<<endl;
    b-=2;
    cout<<"The value of b-=2 is :"<<b<<endl;
    b*=2;
    cout<<"The value of b*=2 is :"<<b<<endl;
    b/=2;
    cout<<"The value of b/=2 is :"<<b<<endl;
    cout<<endl;

    // Comparision Operators
    cout<<"The value of a==b is :"<<(a==b)<<endl;
    cout<<"The value of a!=b is :"<<(a!=b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    cout<<endl;
    
    // Logical Operators
    cout<<"The value of a>=b and is :"<<((a>=b)&&(a<=b))<<endl;
    cout<<"The value of a>=b or a<=b is :"<<((a>=b)||(a<=b))<<endl;
    cout<<"The value of not a>=b  is :"<<(!(a<=b))<<endl;
    cout<<endl;
    
    return 0;
}