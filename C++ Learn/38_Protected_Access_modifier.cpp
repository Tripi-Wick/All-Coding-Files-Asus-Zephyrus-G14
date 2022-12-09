#include <iostream>
using namespace std;

class Base{
    private:
        int data;
    protected:
        int data_1;
    public:
        int data_2;
        void setData();
        int getData_1();
        int getData_2();
};

void Base :: setData(void){
    data_1 = 20;
    data_2 = 30;
}

int Base :: getData_1(void){
    return data_1;
}

int Base :: getData_2(void){
    return data_2;
}

class Derived : public Base{
    private:
        int data_3;
    public:
        void process();
        void display();
};

void Derived :: process(){                                 
    data_3 = data_2 * getData_1();
}

void Derived :: display(){
    cout<<"Data 1 = "<<getData_1()<<endl;
    cout<<"Data 2 = "<<data_2<<endl;
    cout<<"Data 3 = "<<data_3<<endl;
}

int main()
{
    Derived der;
    der.setData();            
    der.process();
    der.display();
    // cout<<der.data<<der.data_1<<der.data3;    -------> This will not work as data is a private member of Base class and data_1 is protected member of Derived class and data is protected member of Base class.
    return 0;
}

// Protected Acces Modifier -----> Its same as private access modifier its just that it's members can be inherited but private members can't be inherited.


/*
                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited           Not Inherited           Not Inherited
Protected members           Protected               Private                 Protected
Public members           	Public	                Private                 Protected

*/