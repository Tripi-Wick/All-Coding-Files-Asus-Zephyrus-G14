// // Ambiguity Type 1_____________{Occur in Multiple inheritance}

#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"Good Morning"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Good Evening"<<endl;
        }
};

class Derived: public Base1, public Base2{
    public:
        void greet(){
            Base1 :: greet();                //-----> IF We will not write this then there will be confusion (ambiguity) for computer in choosing the function greet(). It'll not be able to decide wether to use greet() of Base 1 or Base 2.
        }
};


int main()
{
    Base1 a1;
    a1.greet();

    Base2 a2;
    a2.greet();

    Derived a3;
    a3.greet();

    return 0;
}



// // Ambiguity Type 2

// In this compiler itself replaces the old greet() function with new greet() function _______{Occur in Single or Multi Level Inheritance}

// #include <iostream>
// using namespace std;

// class Base1{
//     public:
//         void greet(){
//             cout<<"Good Morning"<<endl;
//         }
// };

// class Base2 : public Base1{
//     public:
//         void greet(){
//             cout<<"Good Evening"<<endl;                  //------------> Here Old greet() is replaced by new greet()
//         }
// };

// int main()
// {
//     Base1 a1;
//     a1.greet();

//     Base2 a2;
//     a2.greet();

//     return 0;
// }