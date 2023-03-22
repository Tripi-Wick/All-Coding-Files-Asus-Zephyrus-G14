#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>              //--------------> These are default parameters.
class demo{
    private:
        T1 data1;
        T2 data2;
        T3 data3;
    public:
        demo(T1 a, T2 b, T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display(){
        cout<<"Data 1 = "<<this->data1<<", "<<"Data 2 = "<<this->data2<<", "<<"Data 3 = "<<this->data3<<endl;
        }
};

int main()
{
    demo <> obj1( 3, 4.1, 'f');
    obj1.display();

    demo <string, int, char> obj2("Cat", 4, 'c');
    obj2.display();
    
    return 0;
}