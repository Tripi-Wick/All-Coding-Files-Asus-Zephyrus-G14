// THe Greater the number the greater the priority
#include <iostream>
using namespace std;

class priority_queue{
    private:
        int size;
        int priority;
        int* front;
        int* rear;
        int** que;
    public:
        priority_queue(int, int);
        ~priority_queue();
        void enqueue(int,int);
        int dequeue();
        void display();
};
priority_queue ::priority_queue(int size,int priority){
    this->size = size;
    this->priority = priority;
    que = new int*[size];
    front = new int[priority];
    rear = new int[priority];
    int i=0;
    while(i<priority){
        que[i] = new int[size];
        front[i]= -1;
        rear[i]= -1;
        i++;
    }
    
}
priority_queue ::~priority_queue(){
    delete[]que;
    delete[]rear;
    delete[]front;
}
void priority_queue ::enqueue(int data,int prior){
    if(rear[prior] == size-1){cout<<"The queue is full.";}
    else{
        rear[prior]++;
        que[prior][rear[prior]] = data;
    }
}
int priority_queue ::dequeue(){
    int res;
    int prior = priority-1;
    while(prior>0){
        if(rear[prior]!=front[prior]){
            res = que[prior][rear[prior]];
            rear[prior]--;
            return res;        
        }
        else prior--;
    }
    cout<<"Priority Queue is empty"<<endl;
    return -1;
}
void priority_queue ::display(){
   for(int i = priority-1; i>=0; i--){
    if(rear[i]==front[i]){continue;}
        for(int j=front[i]+1; j<=rear[i]; j++){
            cout<<que[i][j]<<" ";
        }
        cout<<endl;
   }
}
int main()
{
    int size,priority;
    cout<<"Enter the size of the priority_queue : ";
    cin>>size;
    cout<<"Enter the number of priority set : ";
    cin>>priority;


    priority_queue q1 = priority_queue(size,priority);

    int n;
    cout<<"Enter the elements you want to enter in the priority_queue : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int elem,prior;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>elem;
        cout<<"Enter its priority number "<<i+1<<" : ";
        cin>>prior;
        q1.enqueue(elem,prior);
    }

    q1.display();

    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    // cout<<q1.dequeue()<<endl;

    q1.display();

    return 0;
}