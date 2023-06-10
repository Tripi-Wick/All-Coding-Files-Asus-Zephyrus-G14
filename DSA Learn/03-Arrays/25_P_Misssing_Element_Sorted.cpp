#include <iostream>
using namespace std;

class Array{
    private:
        int* array;
        int size,length,index;
        int end_element,beg_element;
    public:
        Array(void);
        Array(int);
        ~Array();
        void insert(int);
        void display();
        void beg_missing();
        void rand_missing();
};

Array ::Array(void){
    size = 0;
    length = 0;
    index = 0;
    beg_element = 0;
    end_element = 0;
}
Array :: Array(int b){
    size = b;
    array = new int[b];
    length = 0;
    index = 0;
    beg_element = 0;
    end_element = 0;
}
Array :: ~Array(){
    delete[]array;
}

void Array :: insert(int elem){
    array[index]=elem;
    index++;
    end_element = array[length];
    length++;
    beg_element = array[0];
}

void Array :: display(){
    for(int i=0; i<length;i++){
        cout<<"The "<<i+1<<" element of the Array : "<<array[i]<<endl;
    }
}

// For a array containing sorted natural number from beginning and missing only one element. 
void Array :: beg_missing(){
    int ideal_sum,actual_sum=0;
    ideal_sum = end_element*(end_element+1)/2;    
    for(int i=0;i<length;i++){
        actual_sum+=array[i];
    }
    if(actual_sum==ideal_sum){
        cout<<"No element is missing"<<endl;
    }
    else{
        cout<<"Missing Element is : "<<ideal_sum-actual_sum;
    }    
}

// For a array containing sorted natural number randomly beginning and missing only one or multiple element.  
void Array :: rand_missing(){
    int ideal_diff,actual_diff,temp;
    ideal_diff = beg_element;
    for(int i=0;i<length;i++){
        actual_diff = array[i]-i;
        if(actual_diff!=ideal_diff){
            cout<<"Missing Element detected : "<<endl;
            temp=actual_diff;
            while(actual_diff!=ideal_diff){
                cout<<"Missing Element :"<<array[i-1]+actual_diff-ideal_diff<<endl;
                actual_diff--;
            }
            ideal_diff=temp;
        }
    }
    

}

int main()
{
    int l,s;
    cout<<"Enter the size of your array : ";
    cin>>s;
    cout<<"Enter the length of your array : ";
    cin>>l;

    Array arr1;
    arr1= Array(s);

    for(int i=0; i<l;i++){
        int a;
        cout<<"Enter "<<i+1<<" Element of the Array : ";
        cin>>a;
        arr1.insert(a);
    }

    arr1.display();

    // arr1.beg_missing();
    arr1.rand_missing();

    arr1.~Array();

    return 0;
}