
#include <iostream>
using namespace std;

class Array {
    private:
        int* array;
        int size,length,index;
    public:
        Array();
        ~Array();
        Array(int,int);
        void display();
        void insert(int);
        void max_min();
};

Array ::Array(void){
    size = 0;
    length = 0;
    index = 0;
}
Array :: Array(int s,int l){
    size = s;
    array = new int[s];
    length = l;
    index = 0;
}
Array :: ~Array(){
    delete[] array;
}
void Array :: insert(int elem){
    array[index] = elem;
    index++;
}
void Array :: display(){
    for(int i=0; i<length;i++){
        cout<<"The "<<i+1<<" element of the Array : "<<array[i]<<endl;
    }
}


void Array :: max_min(){
    int max = array[0] ,min = array[0];
    for(int i=0; i<length; i++){
        if(max<array[i]){
            max = array[i];
        }
        if(min>array[i]){
            min = array[i];
        }
    }
    cout<<"The Largest Element = "<<max<<endl<<"The smallest element = "<<min<<endl;
}



int main(){
    Array arr1;  

    int size,length;

    cout<<"Enter the size of your array : ";
    cin>>size;
    cout<<"Enter the length of your array : ";
    cin>>length;

    arr1 = Array(size,length);


    for(int i=0; i<length; i++){
        int temp;
        cout<<"Enter "<<i+1<<" Element of the Array : ";
        cin>>temp;
        arr1.insert(temp);
    }

    arr1.display();

    arr1.max_min();

    arr1.~Array();

    return 0;
}