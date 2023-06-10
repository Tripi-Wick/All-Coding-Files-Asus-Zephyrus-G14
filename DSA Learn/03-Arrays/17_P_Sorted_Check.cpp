#include <iostream>
using namespace std;

struct Array{
    int* a;
    int size,length;
};

void display(struct Array arr){
    for(int i = 0; i<arr.length; i++){
        cout<<"The Element No. "<<i+1<<" = "<<arr.a[i]<<endl;
    }
}

bool sort_check(struct Array arr){
    for(int i = 0; i<arr.length; i++){
        if(arr.a[i]>arr.a[i+1]){return false;}
    }
    return true;
}
 
int main()
{
    struct Array arr;
    int res,key_element;


    cout<<"Enter the size of array : ";
    cin>>arr.size;

    arr.a = new int[arr.size];

    cout<<"Enter the number of elements in the array : ";
    cin>>arr.length;

    for(int i = 0; i<arr.length; i++){
        cout<<"Enter the Element No. "<<i+1<<" = ";
        cin>>arr.a[i];
    }
    
    display(arr);

    cout<<"This array is sorted : ";
    if(sort_check(arr) == 0){printf("False");}
    if(sort_check(arr) == 1){printf("True");}
   
    return 0;
}