#include <iostream>
using namespace std;

class Base_Class{
    public:
        int var_base; 
        void virtual display(){
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
            cout<<"--------------------------------------------------------"<<endl;
        }
};

class Derived_Class : public Base_Class{
    public:
        int var_derived; 
        void virtual display(){
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

    return 0;
}

// Virtual Function : Its just a method to override the default functionality of the Late Binding.

// Rules for Virtual Function :- 
// They cannot be static 
// They are accessed by object pointers
// Virtual functions can be a friend of another class
// A virtual function in the base class might not be used.
// If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
