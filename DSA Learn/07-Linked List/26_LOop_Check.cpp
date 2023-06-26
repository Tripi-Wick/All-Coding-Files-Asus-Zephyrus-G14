#include <iostream>
using namespace std;

typedef struct Linked_List{
    int data;
    Linked_List *next;
}node;

void insert_At_Head(node*& head,int num){
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;
    
    head=temp;
}

void insert_At_Tail(node*& head,int num){
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;
    
    node* itr=head;

    while(itr->next!=nullptr){
        itr=itr->next;
    }

    itr->next=temp;
}

void display(node* head){
    node* itr=head;
    while(itr!=nullptr){
        cout<<itr->data<<"->";
        itr= itr->next;
    }
    cout<<"nullptr"<<endl;   
}

bool lOop_Check(node* head){
    node* p=nullptr, *q=nullptr;
    p=q=head;
    while(q!=nullptr){
        p=p->next->next;
        q=q->next;
        if(p==q){return true;}
        else return false;
    }
    return 0;
}

int main()
{
    node* n1, *itr;
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

    // display(n1);

    itr = n1;
    while(itr->next!=nullptr){
        itr= itr->next;
        itr->next=n1;
        if(lOop_Check(n1)==1){
            cout<<"Here Loop Exists = "<<lOop_Check(n1);
            break;
        }
    }

    return 0;
}