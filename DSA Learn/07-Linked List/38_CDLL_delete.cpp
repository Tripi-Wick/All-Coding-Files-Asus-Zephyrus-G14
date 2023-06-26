#include <iostream>
using namespace std;

typedef struct CD_LL{
    CD_LL* prev;
    int data;
    CD_LL* next;

}node;

void insertAtHead(node*& head,int num){
    node* temp = new node;
    temp->data = num;

    head = temp;
    temp->prev = head;
    temp->next = head;
}

void insertAtTail(node*& head, int num){
    node* temp= new node;
    temp->data= num;
    temp->next = head;

    node* itr= head;
    while(itr->next!=head){
        itr=itr->next;
    }
    
    itr->next=temp;
    temp->prev=itr;
    head->prev=temp;
}

void display(node* head){
    node* itr= head;
    do{
        cout<<itr->data<<"->";
        itr=itr->next;
    }while(itr!=head);
    cout<<endl;
}

void rev_display(node* head){
    node* itr= head->prev;
    do{
        cout<<itr->data<<"->";
        itr=itr->prev;
    }while(itr!=head->prev);
    cout<<endl;
}

void deleteAtOffset(node*& head, int offset){
    node* itr= head,*p;

    if(offset==0){
        p = itr;
        itr->next->prev=itr->prev;
        itr->prev->next=itr->next;

        head = itr->prev;
        
        delete p;
        return;
    }

    int i = 0;
    while(i!=offset){
        itr=itr->next;
        i++;
    }
        p = itr;
        itr->next->prev=itr->prev;
        itr->prev->next=itr->next;
        
        delete p;

    return;
}

int main()
{
    node* n1 = nullptr;
    
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        if(i==0){insertAtHead(n1,temp);}
        else insertAtTail(n1,temp);
    }
    display(n1);
    rev_display(n1);

    int p;
    cout<<"Enter the offset from where you want to delete the element in the Linked List : ";
    cin>>p;

    deleteAtOffset(n1,p);
    display(n1);
    rev_display(n1);

    return 0;
}