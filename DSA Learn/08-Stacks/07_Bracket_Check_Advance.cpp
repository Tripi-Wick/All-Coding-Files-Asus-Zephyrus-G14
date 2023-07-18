#include <iostream>
using namespace std;

class node{
    public:
        char data;
        node* next;
};

class stack{
    private:
        node* top;
    public:
        stack();
        ~stack();
        void push(char);
        char pop();
        char topElm();
        void display();
};
stack ::stack(){
    top = nullptr;
}
stack ::~stack(){
    node* del = top;
    while(top){
        top = top->next;
        delete del;
        del = top;
    } 
}
void stack ::push(char x){
    node* temp = new node;
    if(temp==nullptr){
        cout<<"Stack is full i.e. Stack Overflows."<<endl;
        return;
    }
    temp->data = x;
    temp->next=top;
    top = temp;
}
char stack ::pop(){
    if(top == nullptr){
        cout<<"Stack is Empty i.e. Stack Underflows"<<endl;
        return '\0';
    }
    else{
        char x = top->data;
        node* del = top;
        top = top->next;
        delete del;
        return x;        
    }
}
void stack ::display(){
    node* itr = top;
    while(itr){
        cout<<itr->data<<" ";
        itr=itr->next;
    }
    cout<<endl;
}
char stack ::topElm(){
    if(top == nullptr) return '\0';
    else return top->data;
}

int main()
{
    stack s1;
    int i=1;
    char temp = '0';
    cout<<"--------------Enter \" to end the input function -------------"<<endl;  
    while(temp != '"'){

        cout<<"Enter the element number "<<i<<" : ";
        cin>>temp;
        i++;

        if(temp == '(' || temp == '{' || temp == '[') s1.push(temp);
        else if((temp == ')' && s1.topElm()=='(') || (temp == ']' && s1.topElm()=='[') || (temp == '}' && s1.topElm()=='{') ) s1.pop();
    }

    if(s1.topElm() != '\0') cout<<"Brackets are not balanced";
    else cout<<"Brackets are balanced";

    return 0;
}