#include <iostream>
using namespace std;


// Passing An Array to a function 

// void print(int A[], int n){
//     for(int i = 0; i<n; i++){                          // We cant use for each loop here as it works for a array not for a pointer of array. 
//         cout<<"Element "<<i+1<<" = "<<A[i]<<endl;
//     }
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     print(arr,5);
//     return 0;
// }

// Returning a Dynamic Array from function

int* create_arr(int n){
    int* a;
    a = new int[n];

    for(int i = 0; i<n; i++){
        a[i]=i+1;
    }

    return a;
}

int main(){
    int* ptr;
    int n = 6;

    ptr = create_arr(n);

    for(int i = 0; i<n; i++){                         
        cout<<"Element "<<i+1<<" = "<<ptr[i]<<endl;
    }

    return 0;
}




// 	○ Array can only be passed  by address.
