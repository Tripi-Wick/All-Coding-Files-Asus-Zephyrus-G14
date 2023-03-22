/*
    Case 1:
    Class B : public A{
        // Order of execution of constructor --------> first A() then B()
    }
    
    Case 2:
    Class A : public B, public C{
        // Order of execution of constructor --------> first B() then C()  the A()
    }
    
    Case 3:
    Class A : public B, virtual public C{
        // Order of execution of constructor --------> first C() then B()  the A()
    }
    [Virtual COnstructors are initialized prior other base constructors]

*/

#include <iostream>
using namespace std;

class Base1{
    private:
        int data1;
    public:
        Base1(int i){
            data1 = i ;
            cout<<"Base 1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"Thr value of Data1 is : "<<data1<<endl;
        }
};

class Base2{
    private:
        int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base 2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"Thr value of Data2 is : "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{                                          // {But if We'll interchange B1 and B2 here the answer will interchange}
    private:
        int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){                   //Special Syntax to write constructor in short {IF We interchange B1 and B2 no change will occur.}
            derived1 = c;
            derived2 = d;
            cout <<"Derived COnstructor Called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<< derived1<<endl;
            cout<<"The value of derived2 is "<< derived2<<endl;
        }
};

int main()
{
    Derived tripi(1,2,3,4);
    tripi.printDataBase1();
    tripi.printDataBase2();
    tripi.printDataDerived();
    
    return 0;
}