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

void delete_at_offset(node*& head, int offset){
    node* itr=head,*p;

    if(offset==1){
        p= itr;
        head= itr->next;
        head->prev= nullptr;
        delete p;
        return;
    }

    int i= 1;
    while(i!=offset){
        itr=itr->next;
        i++;
    }

    p=itr;
    if(itr->next!=nullptr) itr->next->prev= itr->prev;
    itr->prev->next= itr->next;
    delete p;
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

    int p;
    cout<<"Enter the offset from you want to delete the node in the Linked List : ";
    cin>>p;

    delete_at_offset(n1,p);
    
    display(n1);
    rev_display(n1);

    return 0;
}