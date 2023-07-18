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
        char top_elem();
        char peek(int);
        void display();
        friend int precedence(char);
        friend node* infix_to_postfix(node*);
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
    temp->data = x;
    temp->next = top;
    top = temp;
}
char stack ::pop(){
    if(top == nullptr){
        cout<<"Stack is Empty i.e. Stack Underflows"<<endl;
        return '\0';
    }
    char x = top->data;
    node* temp;
    temp = top;
    top = top->next;
    delete temp;
    return x;
}
char stack ::top_elem(){
    if(top == nullptr) return '\0';
    else return top->data;
}
char stack ::peek(int idx){
    node* itr = top;
    int i=0;
    while(itr && i<idx){
        i++;
        itr = itr->next;
    }
    if(!itr){cout<<"Invalid Index !"; return 0;}
    else return itr->data;
}
void stack::display(){
    node* itr = top;
    while(itr){
        cout<<itr->data;
        itr = itr->next;
    }
    cout<<endl;
}
int precedence(char a){
    if(a == '+' || a == '-') return 1;
    else if(a == '/' || a == '*') return 2;
    else return 0;
}
node* infix_to_postfix(node* s){
    stack s1;
    node* postfix = nullptr;
    node* itr = postfix;

    int i=0;

    while(s){
        node* temp = new node;
        if(precedence(s->data)==0){
            if(i==0){
                temp->data = s->data;
                temp->next = nullptr;
                postfix = temp; 
                itr = postfix;
                i++;
            }
            else{
                temp->data = s->data;
                temp->next = nullptr;
                itr->next  = temp;
                itr = temp; 
            }
        }
        else{
            if(precedence(s1.top_elem())<precedence(s->data)){
                s1.push(s->data);
            }
            else{
                while(precedence(s1.top_elem())>=precedence(s->data)){
                    node* temp = new node;
                    temp->data = s1.pop();
                    temp->next = nullptr;
                    itr->next  = temp;
                    itr = temp; 
                }
                s1.push(s->data);
            }
        }
        s=s->next;
    }
    while(s1.top!=nullptr){
        node* temp = new node;
        temp->data = s1.pop();
        temp->next = nullptr;
        itr->next  = temp;
        itr = temp; 
    }
    return postfix;
}
int main()
{
    node* infix = nullptr;
    node* itr = infix;

    int i=0;
    char tem = '0';
    cout<<"--------------Enter # to end the input function -------------"<<endl;  
    while(tem != '#'){
        node* temp = new node;

        cout<<"Enter your element"<<" : ";
        cin>>tem;
        if(tem!= '#'){
            if(i==0){
                temp->data=tem;
                temp->next=nullptr;
                infix = temp;
                itr = infix;
                i++;
            }
            else{
                temp->data=tem;
                temp->next=nullptr;
                itr->next=temp;
                itr=itr->next;
            }
        }
    }

    node* postfix = infix_to_postfix(infix);
    itr = postfix;

    while(itr){
        cout<<itr->data;
        itr = itr->next;
    }

    return 0;
}