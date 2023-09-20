#include <iostream>
using namespace std;

class DEqueue{
    private:
        int size, front, rear;
        int* que;
    public:
        DEqueue(int);
        ~DEqueue();
        void enqueue(int);
        int dequeue();
        void display();
};
DEqueue ::DEqueue(int size){
    this->size = size;
    que = new int[size];
    front = rear = -1;
}
DEqueue ::~DEqueue(){
    delete[]que;
}
void DEqueue ::enqueue(int data){
    char where;
    cout<<"Where do you want to enqueue this element ?"<<endl;
    cout<<"type 'f' for front and 'r' for rear : ";
    cin>>where;
    switch(where){
        case 'f' :{
            if(front == -1){cout<<"queue is full at begging, can't any more elements.";return;}
            else{
                que[front] = data;
                front--;
            }
            break;
        }
        case 'r' :{
            if(rear == size-1){cout<<"queue is full at rear side, can't any more elements.";return;}
            else{
                rear++;
                que[rear] = data;
            }
            break;
        }
    }   
}
int DEqueue ::dequeue(){
    char where;
    cout<<"Where do you want to dequeue the element ?"<<endl;
    cout<<"type 'f' for front and 'r' for rear : ";
    cin>>where;
    if(front == rear){cout<<"queue is full at begging, can't any more elements.";return -1;}
    switch(where){
        case 'f' :{
                front++;
                return que[front];
        }
        case 'r' :{
                int res = que[rear];
                rear--;
                return res;
        }
    }   
}
void DEqueue ::display(){
    for(int i=front+1; i<=rear; i++){
        cout<<que[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"Enter the size of the queue : ";
    cin>>size;

    DEqueue q1 = DEqueue(size);

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
    // cout<<q1.dequeue()<<endl;
    
    q1.display();

    q1.enqueue(69);
    q1.enqueue(69);
    
    q1.display();

    return 0;
    return 0;
}