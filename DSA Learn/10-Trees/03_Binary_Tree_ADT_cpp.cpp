#include <iostream>
using namespace std;

class node{
    public:
        node* left;
        int data;
        node* right;
};
class queue{
    private:
        int front,rear,size;
        node** que;
    public:
        queue(int);
        ~queue();
        void enqueue(node*);
        node* dequeue();
        bool isEmpty();
};
queue ::queue(int size){
    this->size=size;
    que = new node*[size];
    front = rear = -1;
}
queue ::~queue(){
    delete[]que;
}
void queue ::enqueue(node* leaf){
    if(front==(rear+1)%size){cout<<"Queue is full";return;}
    else{
        rear = (rear+1)%size;
        que[rear]= leaf;
    }
}
node* queue::dequeue(){
    if(rear==front){cout<<"Queue is empty";return nullptr;}
    front = (front+1)%size;
    return que[front];
}
bool queue ::isEmpty(){
    if(rear == front) return true;
    else return false;
}

class tree{
    node* root;
    public:
    tree();
    void createTree();
    void preOrder(node*);
    void preOrder();
    void inOrder();
    void inOrder(node*);
    void postOrder();
    void postOrder(node*);
    void levelOrder();
    void levelOrder(node*);
    int height();
    int height(node*);
    int level();
    int level(node*);
};
tree::tree(){
    root =nullptr;
}
void tree::createTree(){
    int inp;
    cout<<"Enter the size of the queue : ";
    cin>>inp;

    queue q(inp);

    node* temp,*parent;
    cout<<"Enter the data of the root node : ";
    cin>>inp;

    temp = new node;
    temp->data=inp;
    temp->left = temp->right =nullptr;
    
    root = temp;
    q.enqueue(root);

    while(!q.isEmpty()){
        parent = q.dequeue();

        cout<<"Enter the data of left child of "<<parent->data<<" : ";
        cin>>inp;
        if(inp!=-1){
            temp = new node;
            temp->data = inp;
            temp->left = temp->right =nullptr;

            parent->left = temp;
            q.enqueue(temp);
        }
        
        cout<<"Enter the data of right child of "<<parent->data<<" : ";
        cin>>inp;
        if(inp!=-1){
            temp = new node;
            temp->data = inp;
            temp->left = temp->right =nullptr;

            parent->right = temp;
            q.enqueue(temp);
        }
    }

}
void tree::preOrder(){
    return preOrder(root);
}
void tree::preOrder(node* p){
    if(p){
        cout<<p->data<<" ";
        preOrder(p->left);
        preOrder(p->right);
    }
    return;
}
void tree::inOrder(){
    return inOrder(root);
}
void tree::inOrder(node* p){
    if(p){
        inOrder(p->left);
        cout<<p->data<<" ";
        inOrder(p->right);
        }
    return;
}
void tree::postOrder(){    
    return postOrder(root);
}
void tree::postOrder(node* p){
    if(p){
        postOrder(p->left);
        postOrder(p->right);
        cout<<p->data<<" ";
    }
    return;
}
void tree::levelOrder(){
    return levelOrder(root);
}
void tree::levelOrder(node* p){
    queue q(100);

    cout<<p->data<<" ";
    q.enqueue(p);
    while(! q.isEmpty()){
        p = q.dequeue();
        if(p->left){
            cout<<p->left->data<<" ";
            q.enqueue(p->left);
        }
        if(p->right){
            cout<<p->right->data<<" ";
            q.enqueue(p->right);
        }
    }
}
int tree::height(){
    return height(root)-1;
}
int tree::height(node* p){
    int l=0,r=0;
    if(!p) return 0;
        l= height(p->left);
        r= height(p->right);
    if(l>r) return l+1;
    else return r+1;
}
int tree::level(){
    return level(root);
}
int tree::level(node* p){
    int l=0,r=0;
    if(!p) return 0;
        l= level(p->left);
        r= level(p->right);
    if(l>r) return l+1;
    else return r+1;
}


int main()
{
    tree t1;

    t1.createTree();

    t1.preOrder();
    cout<<endl;
    
    t1.inOrder();
    cout<<endl;

    t1.postOrder();
    cout<<endl;
    
    t1.levelOrder();
    cout<<endl;

    cout<<"Height of the tree = "<<t1.height()<<endl;
    cout<<"Level of the tree = "<<t1.level()<<endl;

    return 0;
}