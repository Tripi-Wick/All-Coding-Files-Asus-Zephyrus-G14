#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main()
{
    struct Node *start=NULL,*itr=NULL,*end=NULL;

    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp;
        itr = new Node;
        itr->data=temp;
        itr->next=NULL;
        if(i==0){
            start = itr;
            end = itr;
        }
        else {
            end->next=itr;
            end = itr;
        }
    }

    itr = start;

    for(int i=0; i<n; i++){
        cout<<"Data at "<<i+1<<" node of linked list = "<<itr->data<<endl;
        itr=itr->next;
    }
    
    return 0;
}