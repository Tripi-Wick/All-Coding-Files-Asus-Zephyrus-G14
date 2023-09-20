#include <iostream>
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        int height;
        node* right_child;

        node(){
            data = height = int(NULL);
            left_child = right_child = nullptr;
        }
        node(int data){
            this->data = data;
            left_child = right_child = nullptr;
            height = 0 ;
        }
};

class avl_tree{
    private:
        node* root;

        int bal_fac(node*);

        node* ll_rotation(node*);       //----> L 1 rotation
        node* lr_rotation(node*);       //----> L -1 rotation
        node* rr_rotation(node*);       //----> R 1 rotation
        node* rl_rotation(node*);       //----> R -1 rotation

        node* inOrder_Predecessor(node*);
        node* inOrder_Successor(node*);
    public:
        avl_tree(){ root = nullptr; }
        avl_tree(int data){ root = new node(data); }

        void insert_node(int data){ insert_node(data, root); }
        node* insert_node(int,node*);

        int height(){ return height(root)-1; }
        int height(node*);

        void delete_node(int data){ delete_node(data, root); }
        node* delete_node(int,node*);

        void inOrder_disp(){ inOrder_disp(root); }
        void inOrder_disp(node*);
};
node* avl_tree::inOrder_Predecessor(node* n){
    while(n && n->right_child){
        n = n->right_child;
        // inOrder_Predecessor(n);
    }
    return n;
}
node* avl_tree::inOrder_Successor(node* n){
    while(n && n->left_child){
        n = n->left_child;
        // inOrder_Successor(n);
    }
    return n;
}
node* avl_tree::ll_rotation(node* n){
    node* n_l = n->left_child;
    node* n_lr = n_l->right_child;

    n_l->right_child = n;
    n->left_child = n_lr;

    n->height = height(n);
    n_l->height = height(n_l);

    if(root == n) root = n_l;

    return n_l;
}
node* avl_tree::lr_rotation(node* n){
    node* n_l = n->left_child;
    node* n_lr = n_l->right_child;
    node* n_lr_l = n_lr->left_child;
    node* n_lr_r = n_lr->right_child;

    n_lr->left_child = n_l;
    n_lr->right_child = n;
    n->left_child = n_lr_r;
    n_l->right_child = n_lr_l;

    n_lr->height = height(n_lr);
    n->height = height(n);

    if(root == n) root = n_lr;

    return n_lr;
}
node* avl_tree::rr_rotation(node* n){
    node* n_r = n->right_child;
    node* n_rl = n_r->left_child;

    n_r->left_child = n;
    n->right_child = n_rl;

    n->height = height(n);
    n_r->height = height(n_r);

    if(root == n) root = n_r;

    return n_r; 
}
node* avl_tree::rl_rotation(node* n){
    node* n_r = n->right_child;
    node* n_rl = n_r->left_child;
    node* n_rl_l = n_rl->left_child;
    node* n_rl_r = n_rl->right_child;

    n_rl->left_child = n;
    n_rl->right_child = n_r;
    n->right_child = n_rl_l;
    n_r->left_child = n_rl_r;

    n_rl->height = height(n_rl);
    n->height = height(n);

    if(root == n) root = n_rl;

    return n_rl;
}
int avl_tree::height(node* n){
    if(n==nullptr) return 0;
    else{
        int x = height(n->left_child);
        int y = height(n->right_child);
        
        if(x>y){
            return x + 1;
        }
        else{
            return y + 1;
        }
    }
}
int avl_tree::bal_fac(node* n){
    if(n==nullptr) return 0;
    else{
        int x = height(n->left_child);
        int y = height(n->right_child);
        
        return x-y;
    }
}
node* avl_tree::insert_node(int val,node* n){
    if(n==nullptr){
        n = new node(val);
    }
    else if(val<n->data){
        n->left_child = insert_node(val,n->left_child); 
    }
    else if(val>n->data){
        n->right_child = insert_node(val,n->right_child);
    }
    
    n->height = height(n);

    int bf,bf_l,bf_r;
    bf = bal_fac(n);
    bf_l = bal_fac(n->left_child);
    bf_r = bal_fac(n->right_child);

    if(bf == 2 && bf_l == 1) return ll_rotation(n);
    else if(bf == 2 && bf_l == -1) return lr_rotation(n);
    else if(bf == -2 && bf_r == -1) return rr_rotation(n);
    else if(bf == -2 && bf_r == 1) return rl_rotation(n);

    else return n;
}
void avl_tree::inOrder_disp(node* n){
    if(n){
        inOrder_disp(n->left_child);
        cout<<n->data<<" ";
        inOrder_disp(n->right_child);
    }
    else return;
}
node* avl_tree::delete_node(int val, node* n){
    if(n==nullptr) return nullptr;
    else if(n->left_child == nullptr && n->right_child == nullptr){
        if(n==root){ 
            root=nullptr;
        }
            delete n;
            return nullptr;
    }
    else if(val<n->data){
        n->left_child = delete_node(val,n->left_child);
    }
    else if(val>n->data){
        n->right_child = delete_node(val,n->right_child);
    }
    else{
        node* tmp;
        if(height(n->left_child)>height(n->right_child)){
            tmp = inOrder_Predecessor(n->left_child);
            n->data = tmp->data;
            n->left_child = delete_node(tmp->data,n->left_child);
        }
        else{
            tmp = inOrder_Successor(n->right_child);
            n->data = tmp->data;
            n->right_child = delete_node(tmp->data,n->right_child);
        }
    }

    n->height = height(n);

    int bf,bf_l,bf_r;
    bf = bal_fac(n);
    bf_l = bal_fac(n->left_child);
    bf_r = bal_fac(n->right_child);

    if(bf == 2 && bf_l == 1) return ll_rotation(n);                // L 1 rotation
    else if(bf == 2 && bf_l == -1) return lr_rotation(n);          // L -1 rotation
    else if(bf == -2 && bf_r == -1) return rr_rotation(n);         // R 1 rotation
    else if(bf == -2 && bf_r == 1) return rl_rotation(n);          // R -1 rotation
    else if(bf == 2 && bf_l == 0) return lr_rotation(n);           // L 0 rotation
    else if(bf == -2 && bf_r == 0) return rl_rotation(n);          // R 0 rotation
    return n;
}

int main()
{
    avl_tree t1;
    
    int val,n;
    cout<<"Enter the value of root node : ";
    cin>>val;

    t1 = avl_tree(val);

    cout<<"Enter the number of nodes you want to enter in the avl tree : ";
    cin>>n;

    for(int i=1; i<n; i++){
        cout<<"Enter the value of "<<i<<" node : ";
        cin>>val;
        t1.insert_node(val);
    }

    t1.inOrder_disp();
    cout<<endl;

    cout<<t1.height()<<endl;

    cout<<"Enter the number of nodes you want to delete : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the value you want to delete : ";
        cin>>val;

        t1.delete_node(val);

        t1.inOrder_disp();
        cout<<endl;
        
        cout<<t1.height()<<endl;
    }


    return 0;
}