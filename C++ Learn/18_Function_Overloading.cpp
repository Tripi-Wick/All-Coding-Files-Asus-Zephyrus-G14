#include <iostream>
using namespace std;

int area(int a, int b){
    return a*b;
}
int area(int a, int b, int c){
    return a*b*c;
}

int main()
{
    int a=2,b=3,c=4;

    cout<<"Area of Square is: "<<area(a,b)<<endl;
    cout<<"Area of Rectangle is: "<<area(a,b,c)<<endl;
    
    return 0;
}