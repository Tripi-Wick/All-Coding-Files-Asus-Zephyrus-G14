#include <iostream>
#include <math.h>
using namespace std;

int mul(int n, int i){
    int x=1;

    for(int j=i; j<n-1; j++){
        x=x*10;                                                              //-----------> Multiplying with 10
    }

    return x;
}

int main()
{
    int n;
    
    cout<<"Enter the number of digit you want to enter in array : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter Digit No. "<<i+1<<" : ";                                 //----------> Entering of Digits
        cin>>arr[i];
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

    for(int i=0; i<n; i++){                                            
        arr[i]=arr[i]*mul(n,i);                                               //------------> Making digits in their places
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;                                                  
    // }

    int res=0;

    for(int i=0; i<n; i++){
       res=res+arr[i];                                                        //--------------> Summing Up the digits
    }

    cout<<"Final Result answer = "<<res;

    return 0;
}

