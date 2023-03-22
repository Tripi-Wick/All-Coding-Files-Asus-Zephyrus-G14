#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imaginary;
    public:
        void getData(){
            cout<< "The Real Part is " << real << endl;
            cout<< "The Imaginary Part is " << imaginary << "i " << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary =b;
        }
};

int main()
{
//  // Method 1
    // Complex c1;
    // Complex* ptr = &c1;
    // (*ptr).setData(1,45); 
    // (*ptr).getData();
     
//  // Method 2
    Complex *ptr = new Complex;
    ptr->setData(39 , 45); 
    ptr->getData();

    return 0;
}