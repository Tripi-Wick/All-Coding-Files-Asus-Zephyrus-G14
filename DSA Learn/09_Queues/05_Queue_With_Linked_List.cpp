#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

class queue{
    private:
        node* front, *rear;
    public:
        queue();
        ~queue();
        void enqueue(int);
        int dequeue();
        void display();
};
queue ::queue(){
    rear = front = nullptr;
}
queue ::~queue(){
    while(front!=nullptr){
        node* del= front;
        front = front->next;
        delete del;
    }
}
void queue ::enqueue(int data){
    node* temp = new node;
    temp->data = data;
    temp->next = nullptr;
    if(front == nullptr){
        front = rear = temp;
    }
    else{
        rear->next= temp;
        rear = rear->next;
    }
}
int queue ::dequeue(){
    if(front == nullptr){
        cout<<"The queue is empty "<<endl;
        return -1;
    }
    int res = front->data;
    node* del;
    del = front;
    front = front->next;
    delete del;
    return res;
}
void queue ::display(){
    node* itr = front;
    while(itr!=nullptr){
        cout<<itr->data<<" ";
        itr = itr->next;
    }
    cout<<endl;
}

int main()
{
    queue q1;
    
    int temp = -1;
    cout<<"--------------Enter -0 to end the input function--------------"<<endl;
    int i = 0;

    while(temp != -0){
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        i++;
        if(temp!= -0)
            q1.enqueue(temp);
    }

    q1.display();

    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    
    q1.display();
    
    return 0;
}