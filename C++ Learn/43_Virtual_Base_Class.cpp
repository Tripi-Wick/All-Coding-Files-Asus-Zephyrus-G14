#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(){
            cout<<"Enter the Roll Number : ";
            cin>>roll_no;
        }
        void print_number(){
        }
};
class Test: virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(){
            cout<<"Enter the marks of maths : ";
            cin>>maths;
            cout<<"Enter the marks of physics : ";
            cin>>physics;
        }
        void print_marks(){
            cout<<"Your Maths Marks is : "<<maths<<endl;
            cout<<"Your Physics Marks is : "<<physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(){
            cout<<"Enter the score scored by your team : ";
            cin>>score;
        }
        void print_score(){
            cout<<"Score scored by your team : "<<score<<endl;
        }
};

class Result : public Test , public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            cout<<"*****************************************************************"<<endl;
            cout<<"Roll Number = "<<roll_no<<endl;
            print_number();
            print_marks();
            print_score(); 
            cout<<"Result = "<<total;
        }
};

int main()
{
    Result tripi;
    tripi.set_number();
    tripi.set_marks();
    tripi.set_score();
    tripi.display();
    
    return 0;
}

// If you will not use virtual class then two roll number will be inherited to result so result will get ambiguous and compiler will be confused to use which roll number.