#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        int set_age(int age);
        int set_standard(int standard);
        string set_first_name(string first_name);
        string set_last_name(string last_name);
        int get_age();
        int get_standard();
        string get_first_name();
        string get_last_name();
        string to_string();
};

int Student :: set_age(int age){
    cin>>age;
}
int Student :: set_standard(int standard){
    cin>>standard;
}
string Student :: set_first_name(string first_name){
    cin>>first_name;
}
string Student :: set_last_name(string last_name){
    cin>>last_name;
}
int Student :: get_age(){
    cout<<age;
}
int Student :: get_standard(){
    cout<<standard;
}
string Student :: get_first_name(){
    cout<<first_name;
}
string Student :: get_last_name(){
    cout<<last_name;
}
string Student :: to_string(){
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}