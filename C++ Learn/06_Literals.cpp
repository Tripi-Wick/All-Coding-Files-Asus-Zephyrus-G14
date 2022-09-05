#include <iostream>
using namespace std;

int main(){

    // 'f' and 'F' is to define a float literal
    // 'l' and 'L' is to define a long double

    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4L)<<endl;

    return 0;
}