#include <iostream>
using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void set_data(int a,int b,int c);
        void get_data(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void Employee :: set_data(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee e1;
    e1.set_data(1,2,3);
    // e1.a = 20  //This is a private variable and cant be accessed here.
    e1.d = 4;  //These are public variables and can be accessed any where.
    e1.e = 5;
    e1.get_data();
    return 0;
}