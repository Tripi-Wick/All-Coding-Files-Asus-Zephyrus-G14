#include <iostream>
using namespace std;

float taylor_series(float x, float n){
    static float res = 1;
    while(n!=0){
        res = 1 + (x/n) * res;
        n--;
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

    cout<<"Ans = "<<taylor_series(x,n);
    return 0;
    return 0;
}


/*
Using For Loop : -
    for(n; n!=0; n--){
        res = 1 + (x/n) * res ;
    }
    return res;
*/

/*
Another Approach : -

double e(int x, int n){
    double s = 1;
    int i;
    double num = 1;
    double den = 1;
    for(int i = 1; i<=n; i++){
        num*=x;
        den*=i;
        s+=num/den;    
    }
}
return s;
*/