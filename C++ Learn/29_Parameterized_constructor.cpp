#include <iostream>
using namespace std;

class complex{
    private:
        int a, b;
    public:
        complex(int x, int y);

        void display(void){
            cout<<a<<" + "<<b<<"i";
    }
};

complex :: complex(int x, int y){    //----> This is a parameterized constructor as it takes 2 parameters
    b=y;
}

int main()
{
    complex c1=complex(1,2);     //----> Explicit call
    complex c2(2,3);             //----> Implicit call
    c1.display();
    cout<<endl;
    c2.display();
    return 0;
}




