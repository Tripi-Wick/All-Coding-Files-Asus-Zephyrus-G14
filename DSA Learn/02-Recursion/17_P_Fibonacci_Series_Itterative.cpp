#include <iostream>
using namespace std;

float fibonacci(float x, float y, float z){
    static float res = 0;
    while(z!=0){
        res = x + y;
        x = y;
        y = res;
        z--;
    }
    return res;
}

int main()
{
    float x,y,z;
    cout<<"Enter the first number of fibonacci series : ";
    cin>>x;
    cout<<"Enter the second number of fibonacci series : ";
    cin>>y;
    cout<<"Enter the position of number which you wanna know in this fibonacci series : ";
    cin>>z;

    cout<<"Ans = "<<fibonacci(x,y,z-1);
    
    return 0;
}