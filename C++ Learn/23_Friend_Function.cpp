#include <iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int , int);
        friend Complex sumCmp(Complex,Complex);
        void printData(){
            cout<<"The complex number is: "<<a<<" + "<<b<<" i";
        }
}o1,o2;

void Complex :: setData(int n1, int n2){
    a=n1;
    b=n2;
}
Complex sumCmp(Complex o1,Complex o2){
    Complex o3;
    o3.setData((o1.a+o2.a),(o2.b+o1.b));
    return o3;  
}
int main()
{
    Complex o3;
    o1.setData(1,2);
    o2.setData(3,4);
    o3 = sumCmp(o1,o2);
    o3.printData();
    return 0;
}