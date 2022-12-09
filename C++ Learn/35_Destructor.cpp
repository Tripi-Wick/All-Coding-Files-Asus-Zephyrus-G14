#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"Here Constructor is called "<<count<<" time."<<endl;
        }

        ~num(){
            cout<<"Here Destructor is called for "<<count<<" constructor."<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;  //----------------->This is called a block. Variables in it have scope limited to these brackets only. When the bracket is closed the Objects are destroyed.
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"Back to main"<<endl;

    return 0;
    
}