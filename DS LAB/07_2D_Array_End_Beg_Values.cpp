#include <iostream>
using namespace std;

void Max(int a,int b,int* arr){

    int x = *arr;

    for (int i = 0; i <a ; i++){
        for(int j = 0; j<b; j++,arr++){
            if(x<*arr){
                x=*arr;
            }
        }
    }    
    cout<<"The largest element of 2D array is: "<<x<<endl;
}

void Min(int a,int b,int* arr){

    int x = *arr;
    
    for (int i = 0; i <a ; i++){
        for(int j = 0; j<b; j++,arr++){
            if(x>*arr){
                x=*arr;
            }
        }
    }    
    cout<<"The smallest element of 2D array is: "<<x<<endl;
}

int main()
{
    int a,b;

    cout<<"Enter the numbers of rows in 2D array: ";
    cin>>a;
    cout<<"Enter the numbers of columns in 2D array: ";
    cin>>b;

    int arr[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] element of array: ";
        cin>>arr[i][j];
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    Max(a,b,&arr[0][0]);
    Min(a,b,&arr[0][0]);

    return 0;
} 