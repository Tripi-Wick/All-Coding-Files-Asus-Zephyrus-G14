#include <iostream>
using namespace std;

int fact(int f){
    if(f==1){
        return 1;
    }
    else{
        return f*fact(f-1);
    }
}

int comb(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    int r;
    cout<<"Enter the number of that are in sample space : ";
    cin>>n;
    cout<<"Enter the number of elements to choose : ";
    cin>>r;

    cout<<"Ans = "<<comb(n,r);

    return 0;
}