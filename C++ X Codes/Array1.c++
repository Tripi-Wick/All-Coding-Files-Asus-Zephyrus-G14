#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter a number ";
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter element "<<i<<endl;
        cin>>A[i];
    }

    for(int i=0; i<n; i++)
    {
        sum+=A[i];
    }
cout<<"average of array is "<<(double)(sum/n);
return 0;
}