#include <iostream>
using namespace std;

class sus{
    private:
        int a,b;
    public:

        sus(int x=6, int y=9){    //--------> This is now a default constructor too.
            a = x;
            b = y;
        }
        
        void display(void){
            cout<<"a = "<<a<<" & b = "<<b<<endl;
        }
};

int main()
{
    sus c1,c2,c3;

    c2 = sus(2,3);

    c1.display();
    c2.display();

    return 0;
}


// For default arguments right side of the functions value must be given
// This is invalid ----> sus(int x=6, int y)