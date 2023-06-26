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

// void insert_at_offset(node*& head, int offset, int data){
//     node* temp = new node;
//     temp->data = data;
//     temp->next = nullptr;

//     node* itr = head;
//     int i=1;

//     if(offset==0){
//         while(itr->next!=head){
//         itr= itr->next;
//         }
//         itr->next=temp;
//         itr = head;
//         head = temp;
//         head->next = itr;
//         return;
//     }

//     while(i!=offset){
//         itr = itr->next;
//         i++;
//     }
    
//     temp->next=itr->next;
//     itr->next=temp;
// }

// // // Better -- Cause in circular ll adding at last = adding at first
void insert_at_offset(node*& head, int offset, int data){
    node* temp = new node;
    temp->data = data;
    temp->next = nullptr;

    node* itr = head;
    int i=1;

    while(i!=offset && itr->next!=head){
        itr = itr->next;
        i++;
    }

    if(offset==0){
        itr->next=temp;
        itr = head;
        head = temp;
        head->next = itr;
        return;
    }
    
    temp->next=itr->next;
    itr->next=temp;
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
    cout<<"Enter the offset where you want to enter at the element in the Linked List : ";
    cin>>p;
    cout<<"Enter the element you want to enter in the Linked List : ";
    cin>>n;
    insert_at_offset(n1,p,n);
    
    display(n1);

    return 0;
}