#include <iostream>
using namespace std;

template <class T1, class T2>
class demo{
    private:
        T1 data1;
        T2 data2;
    public:
        demo(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
        cout<<"Data 1 = "<<this->data1<<" "<<"Data 2 = "<<this->data2<<endl;
        }
};

int main()
{
    demo <string, int> obj1("Cat", 4);
    obj1.display();
    
    return 0;
}