#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return (factorial(n-1)*n);
    }
}

int main()
{
    int n;
    cout<<"Enter the number whose factorial you wanna see : ";
    cin>>n;
    cout<<"Ans = "<<factorial(n);
    
    return 0;
}