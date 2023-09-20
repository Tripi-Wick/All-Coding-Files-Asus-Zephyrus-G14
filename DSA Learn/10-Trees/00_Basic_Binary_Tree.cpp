#include <iostream>
using namespace std;

struct node{
    node* left;
    int data;
    node* right;
};

node* create_node(int data){
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
};
void display_preOrder(node* root){
    if(root){
    cout<<root->data<<" ";
    display_preOrder(root->left);
    display_preOrder(root->right);
    }
}
int main(){
    node *root, *n1, *n2;

    root = create_node(0);
    n1 = create_node(1);
    n2 = create_node(2);
    root->left=n1;
    root->right=n2;
    display_preOrder(root);

    
    return 0;
}