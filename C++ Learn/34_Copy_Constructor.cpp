#include <iostream>
using namespace std;

class Exp{
    private:
        int e;
    public:
        Exp(){}

        Exp(int a){
            e = a;
        }

        Exp(Exp &obj){
            cout<<"Copy constructor called!!!"<<endl;
            e = obj.e;
        }

        void display(void){
            cout<<"Value = "<<e<<endl;
        }
};

int main()
{
    Exp e,e2;
    e = Exp(666);
    e.display();

    Exp e1(e);      // Copy constructor invoked
    e1.display();

    e2 = e;         // Copy not constructor invoked
    e2.display();

    Exp e3 = e;     // Copy constructor invoked
    e3.display();

    return 0;
}

// When no copy constructor is found, compiler supplies its own copy constructor
// Default copy constructor supplies copy constructor to all classes