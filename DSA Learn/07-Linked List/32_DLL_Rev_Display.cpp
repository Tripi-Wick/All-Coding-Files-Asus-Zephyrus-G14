#include <iostream>
using namespace std;

typedef struct node{
    node* prev;
    int data;
    node* next;
}node;

void insert_At_Head(node* &head, int num){
    node* temp= new node;
    temp->data = num;
    temp->prev = nullptr;
    temp->next = head;

    head = temp;
}

void insert_At_Tail(node* &head, int num){
    node* temp = new node;
    temp->data = num;
    temp->prev = nullptr;
    temp->next = nullptr;

    node* itr = head;

    while(itr->next!=nullptr){
        itr = itr->next;
    }
    temp->prev=itr;
    itr->next = temp;
}

void display(node* head){
    node* itr = head;
    
    while(itr!=nullptr){
        cout<<itr->data<<"->";
        itr= itr->next;
    }
    cout<<"nullptr"<<endl;
}

void rev_display(node* head){
    node* itr = head;
    
    while(itr->next!=nullptr){
        itr= itr->next;
    }
    while(itr!=nullptr){
        cout<<itr->data<<"->";
        itr= itr->prev;
    }
    cout<<"nullptr"<<endl;
}

int main()
{
    node* n1;
    n1 = nullptr;
    
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        if(i==0){insert_At_Head(n1,temp);}
        else insert_At_Tail(n1,temp);
    }
    display(n1);
    
    rev_display(n1);

    return 0;
}