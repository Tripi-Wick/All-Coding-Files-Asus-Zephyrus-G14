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
int max=n;
    for(int i=0; i<n; i++)
    {
        if(A[i]>max) max=A[i];
    }
cout<<"Maximum Number is "<<max;
return 0;
}