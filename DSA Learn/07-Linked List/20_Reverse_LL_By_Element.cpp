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

void reverse_LL(node*& head){
    node* itr=head;
    int n = 0;
    while(itr != nullptr){
        itr = itr->next;
        n++;
    }
    int arr[n];
    int i = 0;
    itr=head;
    while(itr != nullptr){
        arr[i]=itr->data;
        i++;
        itr = itr->next;
    }
    itr=head;
    while(itr != nullptr){
        itr->data=arr[i-1];
        i--;
        itr = itr->next;
    }
}

int main(){
    node* n1=nullptr;
    
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

    reverse_LL(n1);
    
    display(n1);

    return 0;
}