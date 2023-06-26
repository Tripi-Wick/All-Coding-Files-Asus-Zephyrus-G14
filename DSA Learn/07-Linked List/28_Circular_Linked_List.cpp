#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int);
};
node ::node(int x){
    data = x;
    next = nullptr;
}

class LL{
    private:
        node* head;
    public:
        LL();
        void insert_At_Tail(int data);
        void printList();   
};
LL ::LL(){
    head = nullptr;
}
void LL ::insert_At_Tail(int data){
    node* temp= new node(data);
    
    node* itr1= head;

    if(itr1== nullptr){
        head=temp;
        head->next=head;
        return;
    }
    else{
        while(itr1->next!=head){
            itr1=itr1->next;
        }
    }
    itr1->next = temp;
    itr1= itr1->next;
    itr1->next= head;
}
void LL ::printList(){
    node* itr= head;
    do{
        cout<<itr->data<<"->";
        itr= itr->next;
    }while(itr!= head);
    cout<<endl;
}

int main(){
    LL l1;
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        l1.insert_At_Tail(temp);
    }

    l1.printList();

    return 0;
}