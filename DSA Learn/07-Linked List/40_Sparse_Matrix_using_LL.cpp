#include <iostream>
using namespace std;

typedef struct Linked_List{
    int coll;
    int data;
    Linked_List *next;
}node;

void insert_At_Tail(node*& head, int coll, int num){
    node* temp = new node;
    temp->coll = coll;
    temp->data = num;
    temp->next = nullptr;
    
    node* itr = head;

    if(itr->next == nullptr && itr->coll== -1){
        head->coll=coll;
        head->data=num;
        head->next=nullptr;
        num++;
        return;
    }

    while(itr->next!=nullptr){
        itr=itr->next;
    }

    itr->next=temp;
}

void display(node* head, int coll){
    node* itr=head;
    for(int i= 0; i<coll; i++){
        if(itr!=nullptr && itr->coll==i){
            cout<<itr->data<<" ";
            itr=itr->next;
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<endl;

}

int main()
{
    int row,col,n;
    cout<<"Enter the number of row of the sparse matrix : ";
    cin>>row;
    cout<<"Enter the number of col of the sparse matrix : ";
    cin>>col;

    node* mat = new node[row]{};
    node* arr ; 

    cout<<"Enter the number of elements you want to enter in the sparse matrix : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp1,temp2,temp3;
        static int x;
        cout<<"Enter the row number where you want to enter the element sparse matrix : ";
        cin>>temp1;        
        cout<<"Enter the col number where you want to enter the element sparse matrix : ";
        cin>>temp2;        
        cout<<"Enter the Element you want to enter in the sparse matrix : ";
        cin>>temp3;
        if(i==0){
            x=temp1;
            mat[temp1].coll=-1;
            mat[temp1].next = nullptr;
        }
        if(x!=temp1){
            x=temp1;   
            mat[temp1].coll=-1;
            mat[temp1].next = nullptr;
        }        
        arr = &mat[temp1];
        insert_At_Tail(arr,temp2,temp3);
    }
    for(int i=0; i<row; i++){
    arr = &mat[i];
    display(arr,col);
    }

    return 0;
}