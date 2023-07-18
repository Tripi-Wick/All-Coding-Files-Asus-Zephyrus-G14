#include <iostream>
using namespace std;

class stack{
    public:
        int top;
        int* stk;
        void push(int);
        int pop();
};
void stack ::push(int data){
    top++;
    stk[top]=data;
}
int stack ::pop(){
    int res = stk[top];
    top--;
    return res;
}
class queue{
    private:
        int front,rear,size;
        stack s1,s2;
    public:
        queue();
        queue(int);
        void enqueue(int);
        int dequeue();
        void display();
};
queue ::queue(){
    front = rear = -1;
}
queue ::queue(int size){
    this->size = size;
    s1.stk = new int[size];
    s2.stk = new int[size];
    s1.top=s2.top= -1;
    front = s2.top;
    rear = s1.top;
}
void queue ::enqueue(int data){
    if(s1.top == size-1){cout<<"Queue is full"<<endl;return;}
    else{
        s1.top++;
        s1.stk[s1.top] = data;
    }
}
int queue ::dequeue(){
    if(s2.top == -1 && s1.top == -1){cout<<"Queue is empty"<<endl;return -1;}
    else{
        if(s2.top == -1){
            while(s1.top != -1){
                s2.push(s1.pop());
            }
        }
        return s2.pop();
    }
}
void queue ::display(){
    if(s2.top == -1 && s1.top == -1){cout<<"Queue is empty"<<endl;return;}
    else{
        for(int i= s2.top; i!=-1; i--){
            cout<<s2.stk[i];
        }
        for(int i= 0; i<=s1.top; i++){
            cout<<s1.stk[i];
        }
        cout<<endl;
    }

}

int main()
{
    queue q1;
    
    int size;
    cout<<"Enter the size of the queue : ";
    cin>>size;

    q1 = queue(size);

    int n;
    cout<<"Enter the elements you want to enter in the queue : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        q1.enqueue(temp);
    }

    q1.display();

    cout<<q1.dequeue()<<endl;
    
    q1.display();

    return 0;
}