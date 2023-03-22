#include <iostream>
using namespace std;

class Base_Class{
    public:
        int var_base; 
        void display(){
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
            cout<<"--------------------------------------------------------"<<endl;
        }
};

class Derived_Class : public Base_Class{
    public:
        int var_derived; 
        void display(){
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
            cout<<"Displaying Derived Class variable var_base : "<<var_derived<<endl;
            cout<<"--------------------------------------------------------"<<endl;
        }
};

int main()
{
    Base_Class b_obj1;
    Derived_Class d_obj1;

    Base_Class* ptr_base;
    ptr_base = &d_obj1;
    ptr_base->var_base = 46;
    ptr_base->display();
    // ptr_base->var_derived;          //--------------> It can't access this cause this pointer was defined in base class prior derived class so it can't access derived class elements.

    Derived_Class* ptr_derived;
    ptr_derived = &d_obj1;
    ptr_derived->var_base = 97;
    ptr_derived->var_derived = 66;          //--------------> It can access this cause this pointer was defined in derived class post base class so it can access base class elements.
    ptr_derived->display();

    return 0;
}

// Late BInding :- It means that if there is a derived class and both contains same named functions then the pointer will be bind to the function of class in which that pointer was created.
//                 (Even though ptr_derived points to var_base but still it uses the display function of derived class )

// Run Time Polymorphism : It Decision is taken by compiler will running the program that which function will be used by using late binding.