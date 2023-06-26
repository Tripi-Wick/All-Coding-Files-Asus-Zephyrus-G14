#include <iostream>
using namespace std;

struct Linked_List{
    int data;
    struct Linked_List* next;
};

void insert_At_Tail(struct Linked_List* &head,int num){
    struct Linked_List* temp = new struct Linked_List;
    temp->data = num;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }

    struct Linked_List* itr = head;

    while(itr->next!= NULL){
        itr= itr->next;
    }

    itr->next = temp;
}

void display(struct Linked_List* head){
    struct Linked_List* itr = head;
    while(itr!=NULL){
        cout<<itr->data<<"->";
        itr = itr->next;
    }
    cout<<"NULL"<<endl;
}

struct Linked_List* Search(struct Linked_List* &head, int key){
    struct Linked_List* itr = head;
    struct Linked_List* temp;
    while(itr!=NULL){
        if(itr->data == key){
            temp->next=itr->next;
            itr->next=head;
            head = itr;
            return itr;
        }
        temp = itr; 
        itr = itr->next;
    }
    cout<<"The element is not present in linked list"<<endl;
    return 0;
}

int main()
{
    struct Linked_List* n1,*n2;
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

    int s;
    cout<<"Enter the number number you want to search in a Linked List : ";
    cin>>s;

    n2 = Search(n1,s);

    cout<<n2->data<<endl;
    
    display(n1);

    return 0;
} 