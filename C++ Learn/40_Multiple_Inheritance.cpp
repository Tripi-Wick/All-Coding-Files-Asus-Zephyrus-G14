#include <iostream>
using namespace std;

class Base_1{
    protected:
        int int1;
    public:
        int get_int1(){
            cout<<"Enter 1st integer: ";
            cin>>int1;
        }
};

class Base_2{
    protected:
        int int2;
    public:
        int get_int2(){
            cout<<"Enter 1st integer: ";
            cin>>int2;
        }
};

class inherited : public Base_1 , public Base_2 {
    protected:
        int sum1;
    public:   
        void show(){
            cout<<"1st Integer = "<<int1<<"\n"<<"2nd Integer = "<<int2<<endl;
        }
        void sum(){
            sum1 = int1 + int2;
            cout<<"The value of sum of two digits = "<<sum1;
        }
};   

int main()
{
    inherited sum1;
    sum1.get_int1();
    sum1.get_int2();
    sum1.show();
    sum1.sum();
    

    return 0;
}