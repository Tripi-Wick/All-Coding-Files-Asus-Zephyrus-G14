#include <iostream>
using namespace std;

typedef struct Array{
    int* arr;
    int size,length;
}Arr;

void insertion(Arr* array, int index, int num){
    array->size++;
    for(int i=array->length-1; i>=index; i--){
        array->arr[i+1]=array->arr[i];
    }
    array->arr[index]=num;
    array->length++;
}

void deletion(Arr* array, int index){
    for(int i=index; i<array->length; i++){
        array->arr[i]=array->arr[i+1];
    }
    array->length--;
}

int linear_search(Arr array, int value){

     for(int i = 0; i<array.length; i++){
        for(int j = 0; j<i; j++){
            if(array.arr[j]>array.arr[i]){
                swap(array.arr[i],array.arr[j]);
            }
        }
    }

    for(int i=0; i<array.length; i++){
        if(value==array.arr[i]){
            return i;
        }
        else return -1;
    }
}

int binary_search(Arr* array, int value){

     for(int i = 0; i<array->length; i++){
        for(int j = 0; j<i; j++){
            if(array->arr[j]>array->arr[i]){
                swap(array->arr[i],array->arr[j]);
            }
        }
    }
    
    int l = 0;
    int h = array->length;
    int m = (l+h)/2;
    while(l<h){
        if(array->arr[m]==value){
            return h;
        }
        else if(array->arr[m]<value){
            h=m-1;
            m=(l+h)/2;
        }
        else if(array->arr[m]>value){
            l=m+1;
            m=(l+h)/2;
        }
    }
    return -1; 
}

void Reverse(Arr* array){
    for(int i=0, j=array->length-1; i<j; i++,j--){
        swap(array->arr[i],array->arr[j]);
    }
}

int sum(Arr array){
    static int res = 0;
    for(int i=0; i<array.length; i++){
        res = res + array.arr[i];
    }
    return res;
}

int main()
{
    Arr arr;
    int op,index,value;
    bool out=0;

    cout<<"Enter the length of your array :";
    cin>>arr.length;

    arr.arr = new int[arr.length];

    for(int i=0; i<arr.length;i++){
        cout<<"Enter "<<i+1<<" Element of the Array : ";
        cin>>arr.arr[i];
    }

    while(out!=1){
    cout<<"Array Operation Menu _____"<<endl;
    cout<<"1 - Insert"<<endl;
    cout<<"2 - Delete"<<endl;
    cout<<"3 - Search"<<endl;
    cout<<"4 - Reverse"<<endl;
    cout<<"5 - Sum"<<endl;
    cout<<"6 - Display"<<endl;
    cout<<"7 - Exit"<<endl;
    cout<<"Select the operation which you want to perform on your array : "<<endl;
    cin>>op;
    cout<<"------------------------------------------------------"<<endl;
    switch(op){
        case 1 : 
                cout<<"Enter the index where you want to enter the number : ";
                cin>>index;
                cout<<"Enter the value you want to enter at the index : ";
                cin>>value;
                insertion(&arr,index,value);
                cout<<endl;
                break;
        case 2 :
                cout<<"Enter the index whose number you wanna delete : ";
                cin>>index;
                deletion(&arr,index);
                cout<<endl;
                break;
        case 3 :
                int res1;
                cout<<"Enter the value you want to find in the array : ";
                cin>>value;
                cout<<"Choose the method of search :"<<endl;
                cout<<"1 - Linear Search"<<endl;
                cout<<"2 - Binary Search"<<endl;
                cin>>res1;
                switch(res1){
                    case 1 : 
                            if(linear_search(arr,value)!=-1){
                                cout<<linear_search(arr,value)<<endl;
                            }
                            else cout<<"Element is not present in the array"<<endl;
                            break;
                    case 2 : 
                            if(binary_search(&arr,value)!=-1){
                                cout<<binary_search(&arr,value)<<endl;
                            }
                            else cout<<"Element is not present in the array"<<endl;
                            break;
                }
                break;
        case 4 :
                Reverse(&arr);
                cout<<endl;
                break;
        case 5 : 
                cout<<sum(arr)<<endl;
                break;
        case 6 :
                for(int i=0; i<arr.length;i++){
                    cout<<arr.arr[i]<<endl;
                }
                cout<<endl;
                break;
        case 7 :
                out = 1;
                break;
    }
    }  
    return 0;
}