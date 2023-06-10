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

int get(struct Array arr,int index){
    if(index > arr.length || index < 0){
        cout<<"Invalid Index  ** "<<endl;
        return 0;
    }
    else return arr.a[index];
}

void set(struct Array arr,int index, int value){
    if(index > arr.length || index < 0){
        cout<<"Error : Invalid Index ** "<<endl;
        return;
    }
    else arr.a[index]=value;
}

int sum(struct Array arr,int index){
    static int res = 0;
    for(int i = 0; i<=index; i++){
        res += arr.a[i];
    }
    return res;
}

int avg(struct Array arr){
    static int res = 0;
    for(int i = 0; i<arr.length; i++){
        res += arr.a[i];
    }
    return res/2;
}

int max(struct Array arr){
    int max = arr.a[0];
    for(int i = 0; i<arr.length; i++){
        if(max<arr.a[i]){
            max = arr.a[i];
        }
    }
    return max;
}

int min(struct Array arr){
    int min = arr.a[0];
    for(int i = 0; i<arr.length; i++){
        if(min>arr.a[i]){
            min = arr.a[i];
        }
    }
    return min;
}

int main()
{
    struct Array arr;
    int num1,num2,num3,num4;

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

    cout<<"Enter the index of the array whose value you wanna see : ";
    cin>>num1;

    cout<<"Value = "<<get(arr,num1)<<endl;
    
    cout<<"Enter the index of the array whose value you wanna change : ";
    cin>>num2;
    cout<<"Enter the new value : ";
    cin>>num3;
    
    set(arr,num2,num3);

    display(arr);

    cout<<"Enter the index till where you wanna see the sum of elements in array : ";
    cin>>num4;

    cout<<"Sum = "<<sum(arr,num4)<<endl;

    cout<<"The average of all the elements in the array : "<<avg(arr)<<endl;
    
    cout<<"The largest element of the array is : "<<max(arr)<<endl;

    cout<<"The smallest element of the array is : "<<min(arr)<<endl;

    return 0;
}