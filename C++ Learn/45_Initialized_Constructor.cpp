#include <iostream>
using namespace std;

class Test{
    private:   
        int a;
        int b;
    public:
        Test(int i, int j) : a(i), b(j)                //-------------->New Syntax to initialize constructor
        // Test(int i, int j) : a(i), b(i + j)                
        // Test(int i, int j) : a(i), b(2 * j)                
        // Test(int i, int j) : a(i), b(a + j)                
        // Test(int i, int j) : b(j), a(i + b)         //-------------->This will not work as a is declared first so it will be initialized first so it will give garbage value

        
        {        
            cout<< "Constructor Executed"<<endl;
            cout<< "Value of a is "<< a << endl;
            cout<< "Value of b is "<< b << endl;
        }
};

int main()
{
    Test t(1,2);

    return 0;
}