#include <iostream>
#include <math.h>

using namespace std;

float factorial(int n){
    if(n==1){
        return 1;
    }
    else{
    return n*factorial(n-1);
    }
}

float taylor_series(int x,int n){
    if(n==0){
        return 1;
    }
    else{
       return ((pow(x,n))/(factorial(n)))+taylor_series(x,n-1);
       
    }
} 
int main()
{
    int x;
    int n;
    cout<<"Enter the value of x for which you wanna see taylor series : ";
    cin>>x;
    cout<<"Enter the number till where you wanna see taylor series : ";
    cin>>n;

    cout<<"Ans = "<<taylor_series(x,n);
    
    return 0;
}

// Another Approach :
/*
double e(int x,int n){
    static double p = 1,f = 1;
    double r;
    if(n==0){return 1}
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f
    }
}
*/


// Time COmplexity = O(n^2)