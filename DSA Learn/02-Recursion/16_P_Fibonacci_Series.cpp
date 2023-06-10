#include <iostream>
using namespace std;

float fibonacci(float x, float y, float z){
    static float res = 0;
    if(z==0){
        return res;
    }
    else{
        res = x + y;
        x = y;
        y = res;
        return fibonacci(x,y,z-1);
    }
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

/* 
Another Approach :
float fibonacci(float x, float y, float z){
    static float res = 0;
    static int n = 0; 
    if(n<z){
        res = x + y;
        x = y;
        y = res;
        n++;
        return fibonacci(x,y,z);
    }
    else return res;
}    
*/