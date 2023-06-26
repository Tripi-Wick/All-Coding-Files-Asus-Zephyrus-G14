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

// void remove_Dup(node* &head){              //Self Made;
//     node* q, *p, *itr2, *itr1;
//     itr2 = itr1; 

//     for(itr1 = head; itr1!=nullptr; itr1=itr1->next){
//             if(itr1->data == itr2->data  && itr1!=head){
//                 itr2->next = itr1->next;
//                 p = itr1;
//                 itr1 = itr2;
//                 delete p;
//             } 
//             else{
//                 itr2 = itr1;
//             }
//     }
// }

void remove_Dup(node* &head){              //  Bit Easier
    node *itr2, *itr1;
    itr2 = head;
    itr1 = head->next; 

    while(itr1!=nullptr){
        if(itr2->data == itr1->data){
            itr2->next=itr1->next;
            delete itr1;
            itr1 = itr2->next;
        }
        else{
            itr2=itr1;
            itr1 = itr1->next;
        }
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

    remove_Dup(n1);
    
    display(n1);

    return 0;
}