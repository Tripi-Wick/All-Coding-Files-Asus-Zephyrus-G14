#include <iostream>
using namespace std;

class circular_queue{
    private:
        int front,rear,size;
        int* que;
    public:
        circular_queue();
        circular_queue(int);
        ~circular_queue();
        void enqueue(int);
        int dequeue();
        void display();
};
circular_queue ::circular_queue(){
    front = rear = 0;
    que = nullptr;
}
circular_queue ::circular_queue(int size){
    this->size = size;
    que = new int[size];
    front = rear = 0;
}
circular_queue ::~circular_queue(){
    delete[]que;
}
void circular_queue ::enqueue(int data){
    if((rear+1)%size == front){
        cout<<"circular_queue is full"<<endl;
        return;
    }
    else{
        rear = (rear+1)%size;
        que[rear] = data;
    }
}
int circular_queue ::dequeue(){
    if(rear == front){
        cout<<"circular_queue is empty"<<endl;
        return -1;
    }
    else{
        front =  (front+1)%size;
        int res = que[front];
        return res;
    }
}
void circular_queue ::display(){
    int i = front + 1;
    do{
        cout<<que[i];
        i = (i+1)%size;
    }while(i!= ((rear+1)%size));
    cout<<endl;
}

int main()
{
    circular_queue q1;
    
    int size;
    cout<<"Enter the size of the circular_queue : ";
    cin>>size;

    q1 = circular_queue(size);

    int n;
    cout<<"Enter the elements you want to enter in the circular_queue : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        q1.enqueue(temp);
    }

    q1.display();

    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;

    q1.display();

    q1.enqueue(5);
    q1.enqueue(6);
    
    q1.display();

    return 0;
}