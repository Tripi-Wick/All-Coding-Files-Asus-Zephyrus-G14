#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node* next;
}node;

void insert_At_Head(node* &head, int num){
    node* temp = new node;
    temp->data = num;
    head = temp;
    head->next = head;
}

void insert_At_Tail(node* &head, int num){
    node* temp = new node;
    temp->data = num;
    temp->next = head;

    node* itr = head;
    while(itr->next!=head){
        itr = itr->next;
    }

    itr->next = temp;
}

void display(node* head){
    node* itr = head;
    do{
        cout<<itr->data<<"->";
        itr= itr->next;
    } while(itr!=head);
    cout<<endl;

}

void delete_at_offset(node*& head, int offset){

    node* itr = head, *p;

    if(offset==1){
        p = head;
        while(itr->next!=head){
        itr= itr->next;
        }
        itr->next=head->next;
        head = head->next;
        delete p;
        return;
    }

    int i=1;
    while(i!=offset){
        p=itr;
        itr = itr->next;
        i++;
    }
    p->next=itr->next;
    delete itr;
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

    int p;
    cout<<"Enter the offset from where you want to delete the element in the Linked List : ";
    cin>>p;

    delete_at_offset(n1,p);
    
    display(n1);

    return 0;
}