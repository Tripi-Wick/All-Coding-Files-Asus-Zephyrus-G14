#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
    private:
        T a,b;
    public:
        Arithmetic(T ,T);
        T sum();
        T sub();
};

template <class T>
Arithmetic<T> :: Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T> :: sum(){
    return a+b;
}

template <class T>
T Arithmetic<T> :: sub(){
    return a-b;
}

int main()
{
    Arithmetic<int> a1(2,1);
    cout<<"Sum = "<<a1.sum()<<endl;
    cout<<"SuB = "<<a1.sub()<<endl;
    
    Arithmetic<float> a2(4.3,2.9);
    cout<<"Sum = "<<a2.sum()<<endl;
    cout<<"SuB = "<<a2.sub()<<endl;

    Arithmetic<char> a3('B','C');
    cout<<"Sum = "<<(int)a3.sum()<<endl;
    cout<<"Sub = "<<(int)a3.sub()<<endl;

    return 0;
}