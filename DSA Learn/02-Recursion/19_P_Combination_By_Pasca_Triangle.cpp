#include <iostream>
using namespace std;

int pascal(int n , int r){
    if (r==0 || r==n){
        return 1;
    }   
    else 
    return pascal(n-1,r-1)+pascal(n-1,r);
}

int main()
{
    int n;
    int r;
    cout<<"Enter the number of that are in sample space : ";
    cin>>n;
    cout<<"Enter the number of elements to choose : ";
    cin>>r;

    cout<<"Ans = "<<pascal(n,r);
    
    return 0;
}

// n-1Cr-1 + n-1Cr = nCr