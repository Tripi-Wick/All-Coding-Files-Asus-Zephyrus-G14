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

void concatenate_LL(node*& head1,node*head2){
    node* itr=head1;
    while(itr->next!=nullptr){
        itr=itr->next;
    }
    itr->next=head2;
}

int main(){
    node* n1=nullptr,*n2=nullptr;
    
    int num1,num2;
    cout<<"Enter the number of elements you want to enter in Linked List 1: ";
    cin>>num1;
    for(int i=0; i<num1; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List 1: ";
        cin>>temp;
        if(i==0){insert_At_Head(n1,temp);}
        else insert_At_Tail(n1,temp);
    }

    cout<<"Enter the number of elements you want to enter in Linked List 2: ";
    cin>>num2;
    for(int i=0; i<num2; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List 2: ";
        cin>>temp;
        if(i==0){insert_At_Head(n2,temp);}
        else insert_At_Tail(n2,temp);
    }

    display(n1);
    display(n2);

    concatenate_LL(n1,n2);
    display(n1);

    return 0;
}