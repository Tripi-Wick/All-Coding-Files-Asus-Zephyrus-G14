#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};
class stack{
    private:
        node* top;
    public:
        stack();
        ~stack();
        void push(int);
        int pop();
        void display();
        int peek(int);
        int stackTop();
        bool isEmpty();
        bool isFull();
};
stack ::stack(){
    top = nullptr;
}
stack ::~stack(){
    node* del;
    while(top){
        del = top;
        top = top->next;
        delete del;
    }
}
void stack ::push(int data){
    node* temp = new node;
    temp->data=data;
    temp->next=top;
    top=temp;
}
int stack ::pop(){
    int data = top->data;
    node* del = top;
    top = top->next;
    delete del;
    return data;
}
void stack ::display(){
    node* itr = top;
    while(itr){
        cout<<itr->data<<" ";
        itr = itr->next;
    }
    cout<<endl;
}
int stack ::peek(int offset){
    node* itr = top;
    int i = 0;
    while(itr && i<offset){
        itr= itr->next;
        i++;
    }
    if(!itr){cout<<"Invalid Index !"<<endl; return 0;}
    else return itr->data;
}
int stack ::stackTop(){
    if(top==nullptr) return -1;
    else return top->data;
}
bool stack::isEmpty(){
    if(top == nullptr) return 1;
    else return 0;
}
bool stack ::isFull(){
    node* temp = new node;
    if(temp == nullptr) return 1;
    else return 0;
}

int main()
{
    stack s1; 

    int n;
    cout<<"Enter the number elements you want to enter in stack : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;

        s1.push(temp);
    }

    s1.display();

    cout<<"Enter the index of at which you want to see the element in stack : ";
    cin>>n;

    cout<<s1.peek(n)<<endl;
    cout<<s1.pop()<<endl;
    s1.display();

    cout<<s1.isFull()<<endl;
    cout<<s1.isEmpty()<<endl;
    return 0;
}