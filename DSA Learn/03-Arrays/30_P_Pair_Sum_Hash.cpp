#include <iostream>
using namespace std;

class Array {
    private:
        int* array;
        int size,length,index,beg_elem,end_elem;
    public:
        Array();
        Array(int,int,int,int);
        ~Array();
        void insert(int);
        void display();
        void sum_pair(int);
};

Array ::Array(void){
    size = 0;
    length = 0;
    index = 0;
}
Array :: Array(int s,int l, int b, int e){
    size = s;
    array = new int[s];
    length = l;
    index = 0;
    beg_elem = b;
    end_elem = e;
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

void Array :: sum_pair(int req_sum){
    bool hash_Table[end_elem] = {0};
    for(int i=0; i<length; i++){
        if(hash_Table[req_sum-array[i]]!=0){
            hash_Table[array[i]]=1;
            cout<<"This pair has sum equal to "<<req_sum<<" : ["<<array[i]<<","<<req_sum-array[i]<<"]"<<endl;
        }
        else{
            hash_Table[array[i]]=1;
        }
    }
}

int main()
{
    Array arr1;  

    int size,length,sum,beg_elm,end_elm;

    cout<<"Enter the size of your array : ";
    cin>>size;
    cout<<"Enter the length of your array : ";
    cin>>length;
    cout<<"Enter the sum required  : ";
    cin>>sum;
    cout<<"Enter the Beginning Element of your array : ";
    cin>>beg_elm;
    cout<<"Enter the Ending Element of your array : ";
    cin>>end_elm;

    arr1 = Array(size,length,beg_elm,end_elm);

    for(int i=0; i<length; i++){
        int temp;
        cout<<"Enter "<<i+1<<" Element of the Array : ";
        cin>>temp;
        arr1.insert(temp);
    }
    
    arr1.display();
    
    arr1.sum_pair(sum);

    arr1.~Array();

    return 0;
}