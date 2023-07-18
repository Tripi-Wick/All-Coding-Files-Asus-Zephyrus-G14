#include <iostream>
using namespace std;

class queue{
    private:
        int front,rear,size;
        int* que;
    public:
        queue();
        queue(int);
        ~queue();
        void enqueue(int);
        int dequeue();
        int first();
        int last();
        bool isFull();
        bool isEmpty();
        void display();
};
queue ::queue(){
    front = rear = -1;
    que = nullptr;
}
queue ::queue(int size){
    this->size = size;
    que = new int[size];
    front = rear = -1;
}
queue ::~queue(){
    delete[]que;
}
void queue ::enqueue(int data){
    if(rear == size-1){
        cout<<"Queue is full"<<endl;
        return;
    }
    else{
        rear++;
        que[rear] = data;
    }
}
int queue ::dequeue(){
    if(rear == front){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
        front++;
        int res = que[front];
        return res;
    }
}
int queue ::first(){
    return que[front+1];
}
int queue ::last(){
    return que[rear];
}
bool queue ::isFull(){
    if(rear == size-1){
        cout<<"Queue is full"<<endl;
        return 1;
    }
}
bool queue ::isEmpty(){
   if(rear == front){
        cout<<"Queue is empty"<<endl;
        return 1;
    }
}
void queue ::display(){
    for(int i=front+1; i<=rear; i++){
        cout<<que[i]<<" ";
    }
    cout<<endl;
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