#include <iostream>
using namespace std;

class Animal{
    private:
        int bones,iq;
    public:
        int age, kills;
        char str[10];
        void input(int , int);
        void prt(){
            cout<<"bones: "<<bones<<endl;
            cout<<"iq: "<<iq<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"kills: "<<kills<<endl;
        }
} Tiger,Lion; //Another way to declare class objects

void Animal :: input(int a, int b){
    bones = a;
    iq = b; 
}


int main()
{
    Tiger.input(69,404);
    Tiger.age=96;
    Tiger.kills=100;
    Tiger.prt();
    Lion.input(96,04);
    Lion.age=60;
    Lion.kills=200;
    Lion.prt();

    
    
    return 0;
}