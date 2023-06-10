#include <iostream>
using namespace std;

float exp(float x, float n){
    static float res = 1;
    if(n==0){
        return res;
    }
    else{
        res = 1+(x/n)*res;           // -------> Help (1+x/n)*res why not work
        // res = 1+x*res/n;
        return exp(x,n-1);
    }
}

int main()
{
    float x;
    float n;
    cout<<"Enter the value of x for which you wanna see taylor series : ";
    cin>>x;
    cout<<"Enter the number till where you wanna see taylor series : ";
    cin>>n;

    cout<<"Ans = "<<exp(x,n);
    return 0;
}



// Time COmplexity = O(n)  ------> Reduced to half