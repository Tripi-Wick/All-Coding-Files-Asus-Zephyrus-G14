#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int num){
            data = num;
            next = nullptr;
        }
};

class linked_List{
    private:
        node* head;
    public:
        linked_List(){
            head = nullptr;
        }
        void insert_At_Tail(int);
        void deletionNode(int);
        void printList();
};

void linked_List ::insert_At_Tail(int data){
    node* temp= new node(data);

    node* itr1= head;
    if(itr1==nullptr){head=temp;return;}
    else{
        while(itr1->next!=nullptr){
            itr1=itr1->next;
        }
    }
    itr1->next= temp;
}

void linked_List ::deletionNode(int nodeOffset){
    node* itr1 =head, *itr2=nullptr;
    int len=0;

    if(itr1==nullptr){cout<<"List is Empty";return;}
    if(nodeOffset==1){
        head=itr1->next;
        delete itr1;
        return;
    }

    while(itr1!=0){
        itr1=itr1->next;
        len++;
    }
    itr1 =head;

    while(nodeOffset-- > 1){
        itr2=itr1;
        itr1=itr1->next;
    }

    itr2->next = itr1->next;
    delete itr1;
}

void linked_List ::printList(){
    node* itr= head;
    while(itr!= nullptr){
        cout<<itr->data<<"->";
        itr= itr->next;
    }
    cout<<"nullptr"<<endl;
}

int main()
{
    linked_List l1;
    int n,d;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        l1.insert_At_Tail(temp);
    }

    l1.printList();

    cout<<"Enter the offset of the node you want to delete : ";
    cin>>d;
    
    l1.deletionNode(d);
    l1.printList();

    
    return 0;
}