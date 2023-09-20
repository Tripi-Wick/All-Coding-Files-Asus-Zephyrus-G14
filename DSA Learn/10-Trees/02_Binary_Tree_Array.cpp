#include <iostream>
using namespace std;

class tree_node{
    public:
        tree_node* left;
        int data;
        tree_node* right;
};
class queue{
    private:
        int size,front,rear;
        tree_node** node_Add;
    public:
        queue(int);
        bool isFull();
        bool isEmpty();
        void enqueue(tree_node*&);
        tree_node* deque();
};
queue ::queue(int size){
    this->size = size;
    front = rear = -1;
    node_Add = new tree_node*[size];
}
bool queue ::isEmpty(){
    if(front == rear) return true;
    else return false;
}
bool queue ::isFull(){
    if((rear+1)%size == front) return true;
    else return false;
}
void queue::enqueue(tree_node*& node){
    rear = (rear+1)%size;
    node_Add[rear]=node;
}
tree_node* queue::deque(){
    if(isEmpty()){
        cout<<"The queue is empty";
        return nullptr;
    }
    else{
        front = (front+1)% size;
        return node_Add[front];
    }
}

struct tree_node *root = nullptr;

void tree_create(){
    tree_node *p, *temp;
    queue q(100);

    int data;
    cout<<"Enter the root value : ";
    cin>>data;

    root = new tree_node;
    root->data =data;
    root->left = root->right = nullptr;
    q.enqueue(root);

    while(!q.isEmpty()){
        p = q.deque();
        cout<<"Enter the left child of "<<p->data<<" : ";
        cin>>data;
        if(data!=-1){
            temp = new tree_node;
            temp->data = data;
            temp->left = temp->right = nullptr;
            
            p->left = temp;
            q.enqueue(temp);
        }
        cout<<"Enter the right child of "<<p->data<<" : ";
        cin>>data;
        if(data!=-1){
            temp = new tree_node;
            temp->data = data;
            temp->left = temp->right = nullptr;
            
            p->right = temp;
            q.enqueue(temp);
        }
    }
}

void preorder(tree_node* n){
    if(n){
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
    }
}

int main()
{
    tree_create();
    preorder(root);
    return 0;
}

// Redo this