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

void sort_check(node* &head){
    node* itr;
    itr = head;
    int da=0;

    while(itr){
        if(da>itr->data){
        cout<<"This linked list is not sorted"<<endl;
        return;
        }
        da = itr->data;
        itr = itr->next;
    }
    
    cout<<"This linked list is sorted"<<endl;

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

    sort_check(n1);
    
    return 0;
}