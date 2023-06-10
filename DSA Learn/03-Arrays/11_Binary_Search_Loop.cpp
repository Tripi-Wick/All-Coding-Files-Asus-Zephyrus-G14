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

int binary_search(struct Array arr){

    int key_element;

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the number which you want to find : ";
    cin>>key_element;

    for(int i = 0; i<arr.length; i++){
        for(int j = 0; j<i; j++){
            if(arr.a[j]>arr.a[i]){
                swap(arr.a[i],arr.a[j]);
            }
        }
    }

    int l,m,h;
    l = 0;
    h = arr.length;
    m = (h+l)/2;
    while(l<=h){
        if(key_element == arr.a[m]){return m;}
        else if(key_element<arr.a[m]){
            h = m-1;
            m = (h+l)/2;
        }
        else if(key_element>arr.a[m]){
            l = m+1;
            m = (h+l)/2;
        }
    }
    return -1;
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


    res = binary_search(arr);

    if(res!=-1){
        cout<<"This number is present at "<< res <<" index"<<endl;
    }
    else{
        cout<<"This number is not present in the array"<<endl;
    }

    display(arr);

    return 0;
}