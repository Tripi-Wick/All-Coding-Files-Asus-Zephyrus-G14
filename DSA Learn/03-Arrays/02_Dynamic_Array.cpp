#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int* p,*q;
    p = new int[5];
    q = (int*)malloc(5*sizeof(int));

    for(int i =0; i<5; i++){
        cout<<"Enter the element no "<<i+1<<" of p array : ";
        cin>>p[i];
    }
    for(int i =0; i<5; i++){
        cout<<p[i]<<",";
    }
    cout<<endl;   

    for(int i =0; i<5; i++){
        cout<<"Enter the element no "<<i+1<<" of p array : ";
        cin>>q[i];
    }
    for(int i =0; i<5; i++){
        cout<<q[i]<<",";
    }
    cout<<endl;  
     
    return 0;
}