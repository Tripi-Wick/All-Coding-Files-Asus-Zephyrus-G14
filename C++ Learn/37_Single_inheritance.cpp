#include <iostream>
using namespace std;

class Base{
    private:
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


// // Firstly deriving it publicly.

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
    
    return 0;
}

// // Now deriving it privately.

// class Derived : private Base{
//     private:
//         int data_3;
//     public:
//         void process();
//         void display();
// };

// void Derived :: process(){
//     setData();                                   // We gotta move it here to use it as its a private member of derived class and only members of derived class can acces it
//     data_3 = data_2 * getData_1();
// }

// void Derived :: display(){
//     cout<<"Data 1 = "<<getData_1()<<endl;
//     cout<<"Data 2 = "<<data_2<<endl;
//     cout<<"Data 3 = "<<data_3<<endl;
// }

// int main()
// {
//     Derived der;
//     // setData();                                   //it can't be accessed here.
//     der.process();
//     der.display();
    
//     return 0;
// }




// in single inheritance only one class is derived from one main class.