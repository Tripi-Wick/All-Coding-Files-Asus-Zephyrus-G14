#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number whose table you want to see: ";
    cin>>num;
    for(int i=0;i<10;i++){
        cout<<num<<" x "<<i+1<<" = "<<num*(i+1)<<endl;
    }
    return 0;
}