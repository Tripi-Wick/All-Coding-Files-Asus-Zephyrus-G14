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

int sum(struct node* head){
    int res=0;
    struct node* itr ;
    itr = head;
    while(itr!=0){
       res = res+itr->data;
       itr=itr->next;   
    }
    return res;   
}

int main()
{    
    int n,res;
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

    res = sum(ll_1);

    cout<<res;

    return 0;
}