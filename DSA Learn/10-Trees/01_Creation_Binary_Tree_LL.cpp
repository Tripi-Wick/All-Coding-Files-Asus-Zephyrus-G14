#include <iostream>
using namespace std;

struct node{
    node* left;
    int data;
    node* right;

    node** leaf;
    node* next;
};

struct queue{
        node* r, *f;
};

void enqueue(queue*& que, node*& leaf){ 
    node* temp = new node;
    temp->leaf = &leaf;

    temp->next = temp->left = temp->right = nullptr;
    temp->data = int(NULL);

    if(que->f == nullptr){
        que->r = que->f = temp;
    }
    else{
        que->r->next = temp;
        que->r = que->r->next;
    }
}
node* dequeue(queue*& que){
    if(!que->f){cout<<"The Queue is empty";return nullptr;}
    node* res = *que->f->leaf;

    node* del = que->f;
    que->f = que->f->next;

    delete del;
    return res;
    }
void create_BinaryTree(node*& root){
    node* parent;

    queue* que = new queue;
    que->f = que->r = nullptr;

    int val1;
    cout<<"Enter the value of the root node : ";
    cin>>val1;

    root = new node; 
    root->data = val1;
    root->left = root->right = nullptr;
    enqueue(que,root);

    while(que->f){
        parent = dequeue(que);
        int val2;
        cout<<"Enter the value of the left child of "<<parent->data<<" : ";
        cin>>val2;
        if(val2 != -1){
            node* temp1;
            temp1 = new node;
            temp1->data = val2;
            temp1->next = temp1->left = temp1->right = nullptr;

            parent->left = temp1;
            enqueue(que,parent->left);
        }
        int val3;
        cout<<"Enter the value of the right child "<<parent->data<<" : ";
        cin>>val3;
        if(val3 != -1){
            node* temp2;
            temp2 = new node;
            temp2->data = val3;
            temp2->next = temp2->left = temp2->right = nullptr;

            parent->right = temp2;
            enqueue(que,parent->right);
        }
    }
}
void display_preOrder(node* root){
    if(root){
    cout<<root->data<<" ";
    display_preOrder(root->left);
    display_preOrder(root->right);
    }
}

void display_inOrder(node* root){
    if(root){
    display_inOrder(root->left);
    cout<<root->data<<" ";
    display_inOrder(root->right);
    }
}
void display_postOrder(node* root){
    if(root){
    display_postOrder(root->left);
    display_postOrder(root->right);
    cout<<root->data<<" ";     
    }
}

int main()
{
    node* r1 = nullptr;
    create_BinaryTree(r1);

    display_preOrder(r1);
    cout<<endl;

    display_inOrder(r1);
    cout<<endl;

    display_postOrder(r1);
    cout<<endl;

    return 0;
}

// Fuck ya, after literal 3 days its finally properly done ☠️