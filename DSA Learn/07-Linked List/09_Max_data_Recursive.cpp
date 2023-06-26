#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void insert_At_Tail(struct node* ll, int num){

    struct node* head;
    head = ll;

    while(head->next!=NULL){
        head=head->next;
    }
    
    struct node* temp = new struct node;
    temp->data = num;
    temp->next = NULL;
    
    head->next = temp;
}

void display(struct node* head){
    struct node* itr=head;
    while(itr!=NULL){
        cout<<itr->data<<"->";
        itr = itr->next;
    }
    cout<<"NULL"<<endl;
}

int max_data(struct node* head){
    int res = 0;
    if(head == NULL){
        return res;
    }
    else{
        res = max_data(head->next);
        if(res > head->data){
            return res; 
        }
        else{
            return head->data;
        }
    }
}

int main()
{
    struct node* n1;
    n1 = new struct node;
    
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;

        if(i==0){
            n1->data = temp;
            n1->next =  NULL;
        }

        else insert_At_Tail(n1,temp);
    }

    display(n1);

    cout<<max_data(n1);

    return 0;
}