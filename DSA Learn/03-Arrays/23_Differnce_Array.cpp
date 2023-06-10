#include <iostream>
using namespace std;

typedef struct Array{
    int* array;
    int size,length;
}Arr;

void sort(Arr* arr0){
    for(int i=0; i<arr0->length; i++){
        for(int j=0; j<arr0->length; j++){
            if(arr0->array[i] < arr0->array[j]){
                swap(arr0->array[i],arr0->array[j]);
            }
        }
    }
}

Arr Difference(Arr arr1, Arr arr2){
    Arr rrr;
    rrr.size = arr1.length + arr2.length;
    rrr.array = new int[rrr.size];

    static int i,j,k;
    i=j=k=0;

    while(i<arr1.length){
        if(arr1.array[i]==arr2.array[j]){
            j++;i++;
        }
        else if(arr1.array[i]<arr2.array[j]){
            rrr.array[k]=arr1.array[i];
            i++;k++;
        }
        else{ j++; }
    }
    rrr.length = k;
    return rrr;
}

int main()
{
    Arr arr1,arr2,arr3;

    cout<<"Enter the Length of Arr1 : ";
    cin>>arr1.length;
    arr1.array = new int[arr1.length];

    cout<<"-------------Arr1---------------"<<endl;
    for(int i=0;i<arr1.length;i++){
        cout<<"Enter the "<<i+1<<" Element of Arr1 : ";
        cin>>arr1.array[i];
    }

    cout<<"Enter the Length of Arr2 : ";
    cin>>arr2.length;
    arr2.array = new int[arr2.length];

    cout<<"-------------Arr2---------------"<<endl;
    for(int i=0;i<arr2.length;i++){
        cout<<"Enter the "<<i+1<<" Element of Arr2 : ";
        cin>>arr2.array[i];
    }

    sort(&arr1);
    sort(&arr2);

    arr3 = Difference(arr1,arr2);

    cout<<"-------------Arr3---------------"<<endl;
    for(int i=0;i<arr3.length;i++){
        cout<<"The "<<i+1<<" Element of Arr3 : "<<arr3.array[i]<<endl;
    }

    return 0;
}