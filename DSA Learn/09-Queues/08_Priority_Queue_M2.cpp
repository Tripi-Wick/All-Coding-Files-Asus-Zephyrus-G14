// The Greater the number the greater the priority
#include <iostream>
using namespace std;

class priority_queue{
    private:
        int front,rear,size;
        int* que;
    public:
        priority_queue();
        priority_queue(int);
        ~priority_queue();
        void enqueue(int);
        int dequeue();
        void display();
};
priority_queue ::priority_queue(){
    front = rear = -1;
    que = nullptr;
}
priority_queue ::priority_queue(int size){
    this->size = size;
    que = new int[size];
    front = rear = -1;
}
priority_queue ::~priority_queue(){
    delete[]que;
}
void priority_queue ::enqueue(int data){
    if(rear == size-1){
        cout<<"queue is full"<<endl;
        return;
    }
    else{
        rear++;
        que[rear] = data;
    }
}
int priority_queue ::dequeue(){
    if(rear == front){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    else{
        int max = 0;
        for(int i=0;i<size;i++){
            if(que[max]<que[i]) max = i;
        }
        int res = que[max];
        for(int i=max;i<size-1;i++){
            que[i]=que[i+1];
        }
        rear--;
        return res;
    }
}
void priority_queue ::display(){
    for(int i=front+1; i<=rear; i++){
        cout<<que[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    priority_queue q1;
    
    int size;
    cout<<"Enter the size of the queue : ";
    cin>>size;

    q1 = priority_queue(size);

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