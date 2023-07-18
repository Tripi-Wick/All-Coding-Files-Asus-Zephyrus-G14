#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node* next;
}stack;

void push(stack*& st, int val){
    node* temp = new node;

    if(temp==nullptr){cout<<"Stack is full i.e. Stack Overflows."<<endl;return;}
    else{
        temp->data = val;
        temp->next = st;
        st = temp;
    }
}
int pop(stack*& st){
    if(st==nullptr){cout<<"Stack is Empty i.e. Stack Underflows"<<endl;return -1;}
    int x = st->data;
    node* temp = st;
    st=st->next;
    delete temp; 
    return x;
}
void display(stack* st){
    node* itr=st;
    while(itr!=nullptr){
        cout<<itr->data<<" ";
        itr=itr->next;
    }
    cout<<endl;
}

int peek(stack* st, int pos){
    node* itr=st;
    int i=0;
    while(itr!=nullptr){
        itr=itr->next;
        i++;
    }
    if(pos>=i){cout<<"Invalid POS"<<endl; return -1;}
    itr =st;
    i=0;
    while(i<pos){
        itr=itr->next;
        i++;
    }

    return itr->data;
}

int stackTop(stack* st){
    return st->data;
}

int isEmpty(stack* st){
    if(st == nullptr){return 1;}
    else return 0;
}

int isFUll(stack* st){
    node* temp = new node;
    if(temp==nullptr){return 1;}
    else return 0;
}

int main()
{
    stack* s1 = nullptr; 

    int n;
    cout<<"Enter the number elements you want to enter in stack : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
         
        cin>>temp;
        push(s1,temp);
    }

    display(s1);

    cout<<"Enter the index of at which you want to see the element in stack : ";
    cin>>n;

    cout<<peek(s1,n)<<endl;
    cout<<pop(s1)<<endl;
    display(s1);

    cout<<isFUll(s1)<<endl;
    cout<<isEmpty(s1)<<endl;
    return 0;
}