#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_num;
    public:
        void set_roll_num(void);
        void get_roll_num(void);
};

void Student :: set_roll_num(){
    cout<<"Enter the Roll Number of Student: ";
    cin>>roll_num;
}

void Student :: get_roll_num(){
    cout<<"The Roll Number of Student: "<<roll_num;
}

class Exam : public Student {
    protected:
        float english;
        float hindi;
        float maths;
    public:
        void set_marks();
        void get_marks();
};

void Exam :: set_marks(){
    cout<<"Enter the marks of Student in english: ";cin>>english;
    cout<<"Enter the marks of Student in hind: ";cin>>hindi;
    cout<<"Enter the marks of Student in maths: ";cin>>maths;
}

void Exam :: get_marks(){
    cout<<"The marks of Student in english: "<<english<<endl;
    cout<<"The marks of Student in hind: "<<hindi<<endl;
    cout<<"The marks of Student in maths: "<<maths<<endl;
}

class Result : public Exam {
    private: 
      float percentage;
    public:
        void display_result();
};

void Result :: display_result(){
    percentage = ((english+hindi+maths)/300)*100;
    cout<<"The result of "<<roll_num<<" in english: "<<english<<endl;
    cout<<"The result of "<<roll_num<<" in hind: "<<hindi<<endl;
    cout<<"The result of "<<roll_num<<" in maths: "<<maths<<endl;
    cout<<"The percentage of Roll Number "<<roll_num<<" : "<<percentage<<"%";
}

int main()
{
    Result Ram;
    Ram.set_roll_num();
    Ram.set_marks();
    Ram.display_result();

    return 0;
}