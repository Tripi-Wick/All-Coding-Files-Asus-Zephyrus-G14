#include <iostream>
using namespace std;

typedef struct Linked_List{
    int data;
    struct Linked_List* next;
}node;

void insert_At_Head(node* &head,int num){
    node* temp = new node;
    temp->data = num;
    temp->next = head;

    head = temp; 
}

void insert_At_Tail(node* &head,int num){
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;

    node* itr;
    itr = head;
    while(itr->next!=nullptr){
        itr = itr->next;
    }

    itr->next = temp; 
}

void delete_node(node* &head, int num){
    node* itr,*p;
    itr = head;

    if(itr->data==num){
        head=head->next;
        delete itr;
        return;
    }

    while(itr->data!=num){
        p = itr;
        itr = itr->next;
    }
    
    p->next = itr->next;

    delete itr; 
}

void display(struct Linked_List* head){
    node* itr = head;
    while(itr!=nullptr){
        cout<<itr->data<<"->";
        itr = itr->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    struct Linked_List* n1;
    n1 = nullptr;
    
    int n,p;
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

    cout<<"Enter the element you want delete in the Linked List : ";
    cin>>n;
    delete_node(n1,n);
    display(n1);
    
    return 0;
}