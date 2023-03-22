#include <iostream>
using namespace std;

class Exp {
    private:
        int a;
    public:
        // void setData(int a){
        //     this->a = a;                    //----------->This Pointer points to the Object which invokes the member function
        // }

        Exp& setData(int a){
            this->a = a;               //-----> This pointer can also be used to return values {Mark 2}
            return *this;
        }

        void getData(){
            cout<< "The Value of Object is : " << a << endl;
        }

};

int main()
{
    Exp a;
    // a.setData(4).getData();               //------> By help of mark 2 statement we can do this too  
    a.setData(4);
    a.getData();
    return 0;
}