#include <iostream>
using namespace std;

struct Array_ADT{
    int*a;
    int size,length;    
};

void sort(struct Array_ADT *arr){
    for(int i=0; i<arr->length; i++){
        for(int j=0; j<arr->length; j++){
            if(arr->a[i]<arr->a[j]){
                swap(arr->a[i],arr->a[j]);
            }
        }
    }
}

struct Array_ADT merge(struct Array_ADT a, struct Array_ADT b){
    int size = a.length + b.length;

    struct Array_ADT c;
    c.a = new int[size];
    c.length = size;

    static int i=0,j=0,k=0;

    while(k<c.length){
        if(a.a[i]<b.a[j]){
            c.a[k++]=a.a[i++];
        }
        else{
            c.a[k]=b.a[j];
            j++;
            k++;
        }
    }
    return c;
}

int main()
{
    struct Array_ADT arr1,arr2,arr3;

    cout<<"Enter the length of arr1 : ";
    cin>>arr1.length;    
    arr1.a = new int [arr1.length];

    cout<<"Enter the Elements of arr1 -------------- "<<endl;
    for(int i=0; i<arr1.length; i++){
        cout<<"Enter "<<i+1<<" Element of arr1 : ";
        cin>>arr1.a[i];
    }

    cout<<"Enter the length of arr2 : ";
    cin>>arr2.length;    
    arr2.a = new int [arr2.length];

    cout<<"Enter the Elements of arr2 -------------- "<<endl;
    for(int i=0; i<arr2.length; i++){
        cout<<"Enter "<<i+1<<" Element of arr1 : ";
        cin>>arr2.a[i];
    }

    // cout<<"-------------ARR1---------------"<<endl;
    // for(int i=0; i<arr1.length; i++){
    //     cout<<"Element No "<<i+1<<"of arr1 :-- "<<arr1.a[i]<<endl;
    // }
    // cout<<"-------------ARR2---------------"<<endl;
    // for(int i=0; i<arr2.length; i++){
    //     cout<<"Element No "<<i+1<<"of arr1 : "<<arr2.a[i]<<endl;
    // }

    sort(&arr1);
    sort(&arr2);

    // cout<<"-------------ARR1---------------"<<endl;
    // for(int i=0; i<arr1.length; i++){
    //     cout<<"Element No "<<i+1<<" of arr1 : "<<arr1.a[i]<<endl;
    // }
    // cout<<"-------------ARR2---------------"<<endl;
    // for(int i=0; i<arr2.length; i++){
    //     cout<<"Element No "<<i+1<<" of arr2 : "<<arr2.a[i]<<endl;
    // }

    arr3 = merge(arr1,arr2);

    cout<<"-------------ARR3---------------"<<endl;
    for(int i=0; i<arr3.length; i++){
        cout<<"Element No "<<i+1<<" of arr3 : "<<arr3.a[i]<<endl;
    }

    return 0;
}