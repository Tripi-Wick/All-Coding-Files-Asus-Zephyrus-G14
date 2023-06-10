#include <iostream>
using namespace std;

int short_pow(int m, int n){
    if(n==0){
        return 1;
    }
    else if(n % 2==0)
    {
        return short_pow(m*m,n/2);
    }
    else{
        return m* short_pow(m*m,(n-1)/2);
    }
    
}
int main()
{
    int m,n;
    cout<<"Enter the base and power : ";
    cin>>m>>n;
    cout<<"Ans = "<<short_pow(m,n);
    return 0;
    return 0;
}


// Time COmplexity = O(n)     ------> Reduced to half