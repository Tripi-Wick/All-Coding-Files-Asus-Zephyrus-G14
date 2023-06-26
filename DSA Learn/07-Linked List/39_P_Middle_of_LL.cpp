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

// node* middle_elem(node* head){
//     node* itr = head;
//     int i = 1 ;
//     while(itr!=nullptr){
//         i++;
//         itr = itr->next;
//     }
//     int j=1;
//     itr = head;
//     while(j!=i/2){
//         j++;
//         itr=itr->next;
//     }
//     return itr;
// }

// Better Version
node* middle_elem(node* head){
    node* itr1 = head, *itr2= head->next;
    while(itr2!=nullptr && itr2->next!=nullptr){
        itr1 = itr1->next;
        itr2 = itr2->next->next;
    }
    return itr1;
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
        if(i==0){insert_At_Head(n1,temp);}
        else insert_At_Tail(n1,temp);
    }

    display(n1);

    cout<<"Middle Element = "<<middle_elem(n1)->data;

    return 0;
}