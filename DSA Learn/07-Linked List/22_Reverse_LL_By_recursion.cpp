#include <iostream>
using namespace std;

typedef struct L_L{
    int data;
    struct L_L* next;
}node;

void insert_At_Head(node* &head, int num){
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;
    head = temp;
}

void insert_At_Tail(node* &head, int num){
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;

    node* itr = head;
    while(itr->next!=nullptr){
        itr = itr->next;
    }

    itr->next = temp;
}

void display(node* head){
    node* itr = head;
    while(itr!=nullptr){
        cout<<itr->data<<"->";;
        itr= itr->next;
    }
    cout<<"nullptr"<<endl;

}

void reverse_LL(node*& head, node*& itr1, node*& itr2){
    if(itr1!=nullptr){
        reverse_LL(head, itr1->next, itr1);
        itr1->next=itr2;
    }
    else{head=itr2;}

}

int main(){
    node* n1=nullptr, *n1_itr=nullptr, *head;
    
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

    head =n1;

    reverse_LL(head,n1,n1_itr);
    
    n1 = head;
    
    display(n1);

    return 0;
}