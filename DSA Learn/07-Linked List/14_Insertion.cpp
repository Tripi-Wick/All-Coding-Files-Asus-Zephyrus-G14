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

void insert_At_Pos(node* &head, int pos, int num){        //For ll index starting from 0;
    node* temp = new node;
    temp->data = num;
    temp->next = nullptr;

    if(pos ==0){
        insert_At_Head(head,num);
        return;
    }

    node *p,*itr=head;

    for(int i=0; i<pos-1; i++){
        itr = itr->next;
    }
    p = itr;
    itr = itr->next;

    p->next=temp;
    temp->next=itr;
}

// void insert_At_Pos(node* &head, int pos, int num){        //For ll index starting from 1;
//     node* temp = new node;
//     temp->data = num;
//     temp->next = nullptr;

//     if(pos ==0){
//         insert_At_Head(head,num);
//         return;
//     }

//     node *p,*itr=head;

//     for(int i=0; i<pos; i++){
//         p = itr;
//         itr = itr->next;
//     }

//     p->next=temp;
//     temp->next=itr;
// }

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

    cout<<"Enter the element you want to enter at the head in the Linked List : ";
    cin>>n;
    insert_At_Head(n1,n);
    display(n1);

    cout<<"Enter the index where you want to enter at the element in the Linked List : ";
    cin>>p;
    cout<<"Enter the element you want to enter in the Linked List : ";
    cin>>n;
    insert_At_Pos(n1,p,n);   //For index starting from 0;
    display(n1);
    
    return 0;
}