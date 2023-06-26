#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void insert_At_Tail(struct node* head, int num){
    struct node* temp = new struct node;
    temp->data=num;
    temp->next=NULL;
    
    struct node* itr = head;

    while(itr->next!= NULL){
        itr=itr->next;
    }

    itr->next=temp;
} 

void display(struct node* head){
    struct node* itr;
    itr = head;
    while(itr!=NULL){
        cout<<itr->data<<"->";
        itr=itr->next;    
    }
    cout<<"NULL"<<endl;
}

int count(struct node* head){
    int cnt=0;
    struct node* itr ;
    itr = head;
    while(itr!=0){
       cnt ++;
       itr=itr->next;   
    }
    return cnt;   
}

int main()
{    
    int n,cont;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    struct node* ll_1 = new struct node;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        if(i==0){
            ll_1->data=temp;
            ll_1->next=NULL;
        }
        else insert_At_Tail(ll_1,temp);
    }

    display(ll_1);

    cont = count(ll_1);

    cout<<cont;

    return 0;
}