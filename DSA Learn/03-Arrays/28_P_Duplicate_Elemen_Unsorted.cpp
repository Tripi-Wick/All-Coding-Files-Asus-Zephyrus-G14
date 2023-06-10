#include <iostream>
using namespace std;

class Array {
    private:
        int* array,end_element,beg_element;
        int size,length,index;
    public:
        Array();
        Array(int,int,int,int);
        ~Array();
        void insert(int);
        void display();
        void duplicate_elem();
};

Array :: Array(void){
    size = 0;
    length = 0;
    index = 0;
}
Array :: Array(int s,int l, int b, int e){
    size = s;
    array = new int[s];
    length = l;
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
}
void Array :: display(){
    for(int i=0; i<length;i++){
        cout<<"The "<<i+1<<" element of the Array : "<<array[i]<<endl;
    }
}

void Array :: duplicate_elem(){
    int hash_Table[end_element]={0};
    
    for(int i=0; i<length; i++){
        hash_Table[array[i]]++;
    }
    for(int i=0; i<end_element; i++){
        if(hash_Table[i]!=0 && hash_Table[i]!=1 ){
            cout<<"Repeated element = "<<i<<endl<<"Number of times it is repeated : "<<hash_Table[i]<<endl<<"-------------------------"<<endl;
        }
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

    arr1 = Array(size,length,beg_element,end_element);


    for(int i=0; i<length;i++){
        int temp;
        cout<<"Enter "<<i+1<<" Element of the Array : ";
         cin>>temp;
        arr1.insert(temp);
    }
    
    arr1.display();

    arr1.duplicate_elem();
    
    arr1.~Array();

    return 0;
}