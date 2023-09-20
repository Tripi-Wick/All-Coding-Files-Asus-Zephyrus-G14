#include <iostream>
using namespace std;

class node{
    private:
    public:
        node* left_leaf;
        int data;
        node* right_leaf;
        int height;
    
        node(){
            data = int(NULL);
            left_leaf = right_leaf = nullptr;
            height = int(NULL);
        }
        node(int data){
            this->data = data;
            left_leaf = right_leaf = nullptr;
            height = 0;
        }
};

class tree{
    private:
        node* root;
    public:
        tree(int data){
            root = new node(data);
        }

        void insert(int);
        node* insert(int,node*);

        int height();
        int height(node*);
        int bal_fact(node*);

        void inOrder_display();
        void inOrder_display(node*);

        node* ll_rotation(node*);
        node* rr_rotation(node*);
        node* lr_rotation(node*);
        node* rl_rotation(node*);
};
int tree::height(){
    return height(root)-1;
}
int tree::height(node* n){
    if(n==nullptr) return 0;
    int x = height(n->left_leaf);
    int y = height(n->right_leaf);
    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }
}
int tree::bal_fact(node* n){
    if(n){
        int x = height(n->left_leaf);
        int y = height(n->right_leaf);
        return x-y;
    }
    else return 0;
}

node* tree::ll_rotation(node* n){
    node* n_l = n->left_leaf;
    node* n_lr = n_l->right_leaf;

    n_l->right_leaf = n;
    n->left_leaf=n_lr;  

    n->height = height(n);
    n_l->height = height(n_l);

    if(root == n){
        root = n_l;
    }

    return n_l;
}
node* tree::lr_rotation(node* n){
    node* n_l = n->left_leaf;
    node* n_lr = n_l->right_leaf;
    
    node* n_lr_l = n_lr->left_leaf;
    node* n_lr_r = n_lr->right_leaf;

    n_lr->left_leaf = n_l;
    n_lr->right_leaf = n;

    n->left_leaf = n_lr_r;
    n_l->right_leaf = n_lr_l;

    if(root == n){
        root = n_lr;
    }

    n->height = height(n);
    n_l->height = height(n_l);
    n_lr->height = height(n_lr);

    return n_lr;
}
node* tree::rr_rotation(node* n){
    node* n_r = n->right_leaf;
    node* n_rl = n->right_leaf->left_leaf;

    n_r->left_leaf = n;
    n->right_leaf = n_rl;

    n->height = height(n);
    n_r->height = height(n_r);

    if(root == n){
        root = n_r;
    }

    return n_r;
}
node* tree::rl_rotation(node* n){
    node* n_r = n->right_leaf;
    node* n_rl = n_r->left_leaf;
    
    node* n_rl_l =n_rl->left_leaf;
    node* n_rl_r =n_rl->right_leaf;

    n_rl->left_leaf = n;
    n_rl->right_leaf = n_r;
    
    n_r->left_leaf = n_rl_r;
    n->right_leaf = n_rl_l;

    n->height = height(n);
    n_r->height = height(n_r);
    n_rl->height = height(n_rl);

    if(root == n){
        root = n_rl;
    }
    
    return n_rl;
}
void tree::insert(int val){
    insert(val,root);
}
node* tree::insert(int val,node* n){ 
    if(n==nullptr){
        n = new node(val);
    }
    else if(val<n->data){
        n->left_leaf = insert(val,n->left_leaf);
    }
    else if(val>n->data){
        n->right_leaf = insert(val,n->right_leaf);
    }

    n->height = height(n);

    if(bal_fact(n)==2 && bal_fact(n->left_leaf)==1){
        return ll_rotation(n);
    }
    else if(bal_fact(n)==2 && bal_fact(n->left_leaf)==-1){
        return lr_rotation(n);
    }
    else if(bal_fact(n)==-2 && bal_fact(n->right_leaf)==-1){
        return rr_rotation(n);
    }
    else if(bal_fact(n)==-2 && bal_fact(n->right_leaf)==1){
        return rl_rotation(n);
    }

    return n; 
}
void tree::inOrder_display(){
    inOrder_display(root);
}
void tree::inOrder_display(node* n){
    if(n){
        inOrder_display(n->left_leaf);
        cout<<n->data<<" ";
        inOrder_display(n->right_leaf);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of nodes you want to enter in the tree : ";
    cin>>n;

    int val;
    cout<<"Enter the value of the root node : ";
    cin>>val;

    tree t1(val);

    for(int i=1; i<n; i++){
        cout<<"Enter the value of "<<i<<" node : ";
        cin>>val;
        t1.insert(val);
    }

    t1.inOrder_display();
    cout<<endl;
    cout<<t1.height();

    return 0;
}