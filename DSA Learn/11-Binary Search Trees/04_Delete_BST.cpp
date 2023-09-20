#include <iostream>
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        node* right_child;

        node(){
            left_child = right_child = nullptr;
            data = (int)NULL;
        }
        node(int data){
            this->data = data;
            left_child = right_child = nullptr;
        }
};

class tree{
    private:
        node* root;
        node* in_Order_Predecessor(node*);
        node* in_Order_Successor(node* n);
    public:
        tree(int data){
            root = new node(data);
        }

        void insert_in_bst(node*,int);
        void insert_in_bst(int data){
            insert_in_bst(root,data);
        }

        void display(node*);
        void display(){
            display(root);
        };

        node* delete_node(node*,int);
        void delete_node(int data){
            delete_node(root,data);
        }

        int height(node*);
        int height(){return height(root);}

};
void tree::insert_in_bst(node* n, int data){
    static node* t = nullptr;
    if(n==nullptr){
        node* temp = new node(data);
        if(data<t->data){
            t->left_child = temp;
        }
        else{
            t->right_child = temp;
        }
    }
    else if(data<n->data){
        t = n;
        insert_in_bst(n->left_child,data);
    }
    else if(data>n->data){
        t = n;
        insert_in_bst(n->right_child,data);
    } 
    else return;
}
void tree::display(node* n){
    if(n){
        display(n->left_child);
        cout<<n->data<<" ";
        display(n->right_child);
    }
}
int tree::height(node* n){
    int x,y;
    if(n){
        x = height(n->left_child);
        y = height(n->right_child);
        return x + y + 1;
    }
    else return 0;
}
node* tree::in_Order_Predecessor(node* n){
    while(n && n->right_child != nullptr){
        n = n->right_child;
    }
    return n;
}
node* tree::in_Order_Successor(node* n){
    while(n && n->left_child != nullptr){
        n = n->left_child;
    }
    return n;
}
node* tree::delete_node(node* n, int key){
    node* itr;
    if(n==nullptr){return nullptr;}
    if(n->left_child == nullptr && n->right_child == nullptr){
        if(n == root){
            root = nullptr;
        }
        delete n;
        return nullptr;
    }
    else if(key< n->data){
        n->left_child = delete_node(n->left_child,key);
    }
    else if(key> n->data){
        n->right_child = delete_node(n->right_child,key);
    }
    else{
        if(height(n->left_child) > height(n->right_child)){
            itr = in_Order_Predecessor(n->left_child);
            n->data = itr->data;
            n->left_child = delete_node(n->left_child,itr->data);
        }
        else{
            itr = in_Order_Successor(n->right_child);
            n->data = itr->data;
            n->right_child = delete_node(n->right_child,itr->data);
        }
    }
    return n;
}
int main()
{
    int num,data;

    cout<<"Enter the number you want to enter in the binary search tree : ";
    cin>>num;

    cout<<"Enter the value of root node : ";
    cin>>data;

    tree t1(data);
    
    for(int i=1; i<num; i++){
        cout<<"Enter the value of node "<<i<<" : ";
        cin>>data;

        t1.insert_in_bst(data);
    }

    t1.display();
    cout<<endl;
    
    cout<<"Enter the node to be deleted : ";
    cin>>data;

    t1.delete_node(data);
    t1.display();
    cout<<endl;

    return 0;
}