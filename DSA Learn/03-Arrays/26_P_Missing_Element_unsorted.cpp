#include <iostream>
using namespace std;

class Array {
    private:
        int* array;
        int size,length,index,beg_element,end_element;
    public:
        Array();
        Array(int,int,int);
        ~Array();
        void insert(int);
        void display();
        void missing_elem();
};

Array ::Array(void){
    size = 0;
    length = 0;
    index = 0;
    beg_element = 0;
    end_element = 0;
}
Array :: Array(int s, int b, int e){
    size = s;
    array = new int[s];
    length = 0;
    index = 0;
    beg_element = b;
    end_element = e;
}
Array :: ~Array(){
    delete[] array;
}
void Array :: insert(int elem){
    array[index] = elem;
    index++;
    length++;
}
void Array :: display(){
    for(int i=0; i<length;i++){
        cout<<"The "<<i+1<<" element of the Array : "<<array[i]<<endl;
    }
}

void Array :: missing_elem(){
    bool hash_Table[end_element] = {0};

    for(int i=0; i<length;i++){
        hash_Table[array[i]] = 1;
    }

    for(int i=beg_element; i<=end_element; i++){
       if(hash_Table[i]==0){
        cout<<"Missing Element Detected : "<<i<<endl;
       };
    }

}

int main()
{
    Array arr1;  

    int size,length,beg_element,end_element;

    cout<<"Enter the size of your array : ";
    cin>>size;
    cout<<"Enter the length of your array : ";
    cin>>length;
    cout<<"Enter the Beginning Element of your array : ";
    cin>>beg_element;
    cout<<"Enter the Ending Element of your array : ";
    cin>>end_element;

    arr1 = Array(size,beg_element,end_element);

    for(int i=0; i<length;i++){
         int a;
        cout<<"Enter "<<i+1<<" Element of the Array : ";
        cin>>a;
        arr1.insert(a);
    }
    
    arr1.display();

    arr1.missing_elem();
    
    arr1.~Array();

    return 0;
}