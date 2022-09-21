#include <iostream>
using namespace std;

void Mul(int* arr,int* drr,int a,int b,int c,int d){
    if(b==c){
        int mrr[a][d];

        for(int i=0; i<a; i++){
            for(int j=0; j<d; j++){
                mrr[i][j]=  
            }
        }
    }
    else{cout<<"These matrices can't be multiplied.";}
}

int main()
{
    int a,b,c,d;

    cout<<"Enter the order of first matrix: ";
    cin>>a>>b;
    cout<<"Enter the order of second matrix: ";
    cin>>c>>d;

    int arr[a][b];
    cout<<"Enter elements of first Matrix";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] element of array: ";
        cin>>arr[i][j];
        }
    }

    int drr[c][d];
    cout<<"Enter elements of first Matrix";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] element of array: ";
        cin>>drr[i][j];
        }
    }

    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<drr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    Mul(&arr[0][0],&drr[0][0],a,b,c,d);

    return 0;
} 