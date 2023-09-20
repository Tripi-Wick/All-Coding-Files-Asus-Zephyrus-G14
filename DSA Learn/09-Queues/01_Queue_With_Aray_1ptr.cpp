#include <iostream>
using namespace std;

typedef struct queue{
    int* queue;
    int size,rear;
}queue;

void create(queue *q){
    cout<<"Enter the size of the queue: ";
    cin>>q->size;
    q->queue = new int[q->size];
    q->rear = -1;
}
void enqueue(queue* q, int data){
    if(q->rear ==  q->size-1){
        cout<<"Queue is full"<<endl;
        return;
    }
    q->rear++;
    q->queue[q->rear] = data;
}
int dequeue(queue* q){
    if(q->rear == -1){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    int res = q->queue[0];
    for(int i=0; i<q->rear; i++){
        q->queue[i] = q->queue[i+1];
    }
    q->rear--;
    return res;
}
void display(queue* q){
    for(int i=0; i<=q->rear; i++){
        cout<<q->queue[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    queue q1;
    create(&q1);

    int n;
    cout<<"Enter the elements you want to enter in teh queue : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        enqueue(&q1,temp);
    }

    display(&q1);

    cout<<dequeue(&q1)<<endl;
    
    display(&q1);

    return 0;
}