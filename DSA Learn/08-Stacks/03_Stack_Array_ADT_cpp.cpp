#include <iostream>
using namespace std;

class stack{
    private:
        int size;
        int top;
        int* s;
    public:
        stack(int);
        ~stack();
        void push(int);
        int pop();
        void display();
        int peek(int);
        int stackTop();
        bool isEmpty();
        bool isFull();
};
stack ::stack(int size){
    this->size = size;
    top = -1;
    s = new int[size]; 
}
stack ::~stack(){
    delete[] s;
}
void stack ::push(int elm){
    if(top == (size-1)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        s[top]=elm;
    }
}
int stack ::pop(){
    int x =  -1;
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        x = s[top];
        top--;
    }
    return x;
}
void stack ::display(){
    for(int i=0; i<=top; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int stack ::peek(int pos){
    int idx = top - pos + 1; 
    if(pos<0 || pos>=size){cout<<"Invalid Position"<<endl;return -1;}
    return s[idx];
}
int stack ::stackTop(){
    return top;
}
bool stack ::isFull(){
    if(top == size) return 1;
    else return 0;
}
bool stack ::isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

int main()
{
    int n;

    cout<<"Enter the elements you want to enter in stack : ";
    cin>>n;

    stack s1= stack(n);

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