#include <iostream>
using namespace std;

int main()
{
    int* p = new int[5];

    for(int i =0; i<5; i++){
        cout<<"Enter the element no "<<i+1<<" of p array : ";
        cin>>p[i];
    }
    for(int i =0; i<5; i++){
        cout<<p[i]<<",";
    }

    cout<<endl;

    int* q = new int[10];

    for(int i=0; i<5; i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    
    p[5]=6;

    for(int i =0; i<6; i++){
        cout<<p[i]<<",";
    }

    return 0;
}