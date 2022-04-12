#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter element "<<i<<endl;
        cin>>A[i];
    }
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]<max) max=A[i];
    }
cout<<"minimum number is  "<<max;
return 0;
}