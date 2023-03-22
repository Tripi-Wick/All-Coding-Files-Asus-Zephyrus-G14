#include <iostream>
using namespace std;

class Rectangle{
    private:
        float length, breadth;
    public:
        Rectangle();
        Rectangle(float, float);
        float area();
        float perimeter();
        void get_data();
        void set_data(float, float);
        ~Rectangle(); 
};

Rectangle :: Rectangle(){
    length = 0;
    breadth = 0;
    cout<<"**************** Default Constructor Called ****************"<<endl;
}

Rectangle :: Rectangle(float l, float b){
    length = l;
    breadth = b;
    cout<<"**************** Parameterized Constructor Called ****************"<<endl;
}

float Rectangle :: area(){
    return length*breadth;
}

float Rectangle :: perimeter(){
    return 2*(length+breadth);
}

void Rectangle :: get_data(){
    cout<<"Length = "<<length<<endl;
    cout<<"Breadth = "<<breadth<<endl;
}

void Rectangle :: set_data(float x, float y){
    length = x;
    breadth = y;
}

Rectangle :: ~Rectangle(){
    cout<<"**************** Destructor Called ****************"<<endl;
}

int main()
{
    Rectangle r1;
    r1.get_data();
    r1 = Rectangle(2,3);
    r1.get_data();
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Parameter = "<<r1.perimeter()<<endl;
    r1.set_data(2,4);
    r1.get_data();
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Parameter = "<<r1.perimeter()<<endl;
    r1.~Rectangle();
   
    return 0;
}