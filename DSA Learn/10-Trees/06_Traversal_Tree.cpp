#include <iostream>
#include <stack>
#include <queue> 
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        node* right_child;

        node(){}
        node(int data){
            left_child = nullptr;
            this->data = data;
            right_child = nullptr;
        }
};

class tree{
    private:
        node* root;
        int search(int inOrder[],int start,int end,int curr){
            for(int i = start; i<=end; i++){
                if(inOrder[i]==curr){
                    return i;
                }
            }
            return 0;
        }
    public:
        node* trave_tree_create(int[],int[],int,int);
        tree(){
            root = nullptr;
        }
        tree(node* node){
            root = node;
        }
        void preOrder_traverse(){
            preOrder_traverse(root);
            return;
        }
        void inOrder_traverse(){
            inOrder_traverse(root);
            return;
        }
        void preOrder_traverse(node* n){
            if(n == nullptr) return;
            cout<<n->data<<" ";
            preOrder_traverse(n->left_child);
            preOrder_traverse(n->right_child);
        }
        void inOrder_traverse(node* n){
            if(n == nullptr) return;
            inOrder_traverse(n->left_child);
            cout<<n->data<<" ";
            inOrder_traverse(n->right_child);
        }
};

node* tree::trave_tree_create(int preOrder[], int inOrder[], int start, int end){
    static int idx = 0;
    if(start > end){return NULL;}

    int curr = preOrder[idx];
    idx++;
    
    node* tmp = new node(curr);
    if(start == end){return tmp;}

    int pos = search(inOrder, start, end, curr);
    
    tmp->left_child = trave_tree_create(preOrder,inOrder,start,pos-1);
    tmp->right_child = trave_tree_create(preOrder,inOrder,pos+1,end);
    
    return tmp;
}


int main()
{
    tree t1;
    int pre[]={1,2,4,8,5,3,6,7};
    int inr[]={8,4,2,5,1,6,3,7};      
    
    t1 = tree(t1.trave_tree_create(pre,inr,0,7
    ));

    t1.preOrder_traverse();
    cout<<endl;
    t1.inOrder_traverse();
    cout<<endl;

    return 0;
}