#include <iostream>
using namespace std;

class employee{
    private:    
    public:
        int id;
        string name;
        float salary;
        employee(void){};
        employee(int x, string y, float z){
            id = x;
            name = y;
            salary = z;
            }
        void employeeDetails(void){
            cout<<"Employee ID = "<<id<<endl;
            cout<<"Employee Name = "<<name<<endl;
            cout<<"Employee Salary = "<<salary<<endl;
        }
};

class programmer : public employee {
    private:
        string language;
        int bugsBounties;
    public:
        programmer(void){};
        programmer(string xx, int yy){
            language = xx;
            bugsBounties = yy;
        }
        void programmerDetails(void){
            cout<<"Language Programmer currently working in  = "<<language<<endl;
            cout<<"Total Bugs found by Programmer = "<<bugsBounties<<endl;
            }
};


int main()
{
    employee e1,e2;
    programmer p1,p2;
    e1 = employee(1,"Dexter",29000);
    e2 = employee(2,"Pedro",39000);
    p1 = programmer("Python",20000);
    p2 = programmer("c++",50000);

    p1.id = 3;
    p1.name = "Hex";
    p1.salary = 60000;

    p2.id = 4;
    p2.name = "Ben";
    p2.salary = 90000;

    e1.employeeDetails();
    cout<<endl;
    e2.employeeDetails();
    cout<<endl;
    p1.employeeDetails();
    p1.programmerDetails();
    cout<<endl;
    p2.employeeDetails();
    p2.programmerDetails();
    cout<<endl;
    return 0;
}





// The main class is called Base class or Parent class
// The inherited class is called derived class or child class


// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/


// Visibility Mode :-  If 'Public' all public members of base class goes to public section of derived class.
// Visibility Mode :-  If 'Private' all public members of base class goes to private section of derived class.
// Default Visibility Mode :-  Private.

// Private members of base class are never accessible by derived class.
