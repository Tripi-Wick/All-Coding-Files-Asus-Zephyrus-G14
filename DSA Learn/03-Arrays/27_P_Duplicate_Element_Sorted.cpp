#include <iostream>
using namespace std;

class Array {
    private:
        int* array;
        int size,length,index;
    public:
        Array();
        Array(int,int);
        ~Array();
        void insert(int);
        void display();
        void duplicate_elem();
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

// // Self Made
// void Array :: duplicate_elem(){
//     int dup_elm = 0, j;
//     for(int i=0; i<length;i++){
//         int dup_occ = -1;
//         if(array[i]==array[i+1] && array[i]!=dup_elm){
//                 j = i;
//             do{
//                 if(array[j]!=dup_elm){
//                     dup_elm=array[j];
//                     cout<<"----------------------------------"<<endl;
//                     cout<<"Duplicate Element found : "<<array[j]<<endl;
//                 }
//                 ++dup_occ;
//                 if(array[j+1]!=dup_elm){
//                 cout<<"Total number of duplicate "<<dup_elm<<" occurred : "<<dup_occ<<endl;
//                 }
//                 j++;
//             }while(array[j]==dup_elm);
//         }
//     }
// }

// // Better Version
void Array :: duplicate_elem(){
    int dup_elm = 0, dup_occ=0, count = 0;
    for(int i=0; i<length; i++){
        if(array[i]==array[i+1] && array[i]!=dup_elm){
            count = i;
            dup_elm = array[i];
            cout<<"----------------------------------"<<endl;
            cout<<"Duplicate Element found : "<<array[i]<<endl;
        }
        if(array[i]==array[i+1]){
            if(array[i+2] != dup_elm){
                dup_occ = i + 2 - count - 1 ;
                cout<<"Total number of duplicate "<<dup_elm<<" occurred : "<<dup_occ<<endl;
            }
        }
    }
}

int main()
{
    Array arr1;  

    int size,length;

    cout<<"Enter the size of your array : ";
    cin>>size;
    cout<<"Enter the length of your array : ";
    cin>>length;

    arr1 = Array(size,length);


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