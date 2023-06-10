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

int sort(struct Array* arr){
    for(int i = 0; i<arr->length; i++){
       for(int j = 0; j<i; j++){
           if(arr->a[j]>arr->a[i]){
               swap(arr->a[i],arr->a[j]);
            }
        }
    }
}

int binary_search(struct Array* arr, int key_element){

    static int l=0, m, h=arr->length;

    if(l<=h){
        m = (h+l)/2;

        if(key_element == arr->a[m]){ 
            return m;
        }
        else if(key_element<arr->a[m]){
            h = m-1;
            return binary_search(arr,key_element);
        }
        else if(key_element>arr->a[m]){
            l = m+1;
            return binary_search(arr,key_element);
        }
    }
    else return -1;
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

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the number which you want to find : ";
    cin>>key_element;

    sort(&arr);

    
    res = binary_search(&arr,key_element);

    if(res!=-1){
        cout<<"This number is present at "<< res <<" index"<<endl;
    }
    else{
        cout<<"This number is not present in the array"<<endl;
    }
   
    return 0;
}