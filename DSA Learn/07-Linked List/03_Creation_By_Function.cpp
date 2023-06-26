#include <iostream>
using namespace std;

typedef struct Linked_List{
    int data;
    struct Linked_List* next;
}node;

void insert_At_Tail(node*& head,int num){
    node* temp = new node;
    temp->data = num;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }

    node* itr = head;

    while(itr->next!= NULL){
        itr= itr->next;
    }


    itr->next = temp;
}

void display(node* head){
    node* itr = head;
    while(itr!=NULL){
        cout<<itr->data<<"->";
        itr = itr->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* n1,*n2;
    n1 = NULL;
    
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        insert_At_Tail(n1,temp);
    }

    display(n1);
    
    return 0;
}