#include <iostream>
using namespace std;

class node{
    public:
        node* r_child;
        int data;
        node* l_child;
        node(){
            r_child = l_child = nullptr;
            data = (int)NULL;
        }
        node(int data){
            r_child = l_child = nullptr;
            this->data = data;
        }
};

class binary_search_tree{
    private:
        node* root;
    public:
        binary_search_tree();
        binary_search_tree(int data){
            root = new node(data);
        }
        void insert_bst(int data){
            insert_bst(root,data);
            return;
        }
        node* insert_bst(node*,int);
        void display_inOrder(){
            display_inOrder(root);
        }
        void display_inOrder(node*);
};
node* binary_search_tree::insert_bst(node* n,int data){
    node* tmp;

    if(n==nullptr){
        tmp = new node(data);
        return tmp;
    }
    if(n->data < data){
        n->r_child=insert_bst(n->r_child,data);
    }
    else if(n->data > data){
        n->l_child = insert_bst(n->l_child,data);
    }
    else return n;
}
void binary_search_tree::display_inOrder(node* n){
    if(n){
        display_inOrder(n->l_child);
        cout<<n->data<<" ";
        display_inOrder(n->r_child);
    }
}

int main()
{
    int n,data;
    cout<<"Enter the number of elements you want to enter in the binary search tree : ";
    cin>>n;

    cout<<"Enter the value of the root node : ";
    cin>>data;

    binary_search_tree b1(data);

    for(int i=1;i<n;i++){
        cout<<"Enter the value of "<<i<<" node : ";
        cin>>data;
        b1.insert_bst(data);
    }
    b1.display_inOrder();

    return 0;
}