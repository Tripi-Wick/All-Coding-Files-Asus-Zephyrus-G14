#include <iostream>
using namespace std;

class complex{
    private:
        int a, b;
    public:
        complex(void);

        void display(void){
            cout<<a<<" + "<<b<<"i";
    }
};

complex :: complex(void){    //----> This is a default constructor as it takes no parameters
    a=1;
    b=2;
}

int main()
{
    complex c1;
    c1.display();
    return 0;
}




    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created