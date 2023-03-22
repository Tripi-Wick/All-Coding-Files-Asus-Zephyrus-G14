#include <iostream>
using namespace std;

template <class T>
class vector{
    public:
        T* arr;
        int size;   
        vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(vector &v){
            T d = 0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            } 
            return d;
        } 

};

int main()
{
    vector <float> v1(3);           //Vector 1 with float data type 
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.34;
    v1.arr[2] = 4.4;
    
    vector <float> v2(3);           //Vector 2 with float data type 
    v2.arr[0] = 6.4;    
    v2.arr[1] = 0.34;
    v2.arr[2] = 3.4;

    float a = v1.dotProduct(v2);   
    cout<<a<<endl;
       
    vector <int> v3(3);           //Vector 3 with int data type 
    v3.arr[0] = 1.4;
    v3.arr[1] = 2.34;
    v3.arr[2] = 4.4;
    
    vector <int> v4(3);           //Vector 4 with int data type 
    v4.arr[0] = 6.4;    
    v4.arr[1] = 0.34;
    v4.arr[2] = 3.4;

    int b = v3.dotProduct(v4);   
    cout<<b<<endl;

    return 0;
}

// Basically in same way as classes are templates of objects, Templates are templates of class.
// Template ----> Classes -----> Objects
// By using templates u can define same class in various data types without writing it again.