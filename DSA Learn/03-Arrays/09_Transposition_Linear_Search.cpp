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

int search(struct Array* arr){

    int number,res;

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the number which you want to find : ";
    cin>>number;

    
    for(int i = 0; i<arr->length; i++){
        if(arr->a[i]==number){
            swap(arr->a[i],arr->a[i-1]);
            return res = i;
        }
        else res = -1;
    }
    return res;
}

int main()
{
    struct Array arr;
    int res;

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


    res = search(&arr);

    if(res!=-1){
        cout<<"This number is present at "<< res <<" index"<<endl;
    }
    else{
        cout<<"This number is not present in the array"<<endl;
    }

    display(arr);

    return 0;
}