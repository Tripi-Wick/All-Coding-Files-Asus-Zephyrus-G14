#include <iostream>
using namespace std;

class node{
    private:
    public:
        node* left_c;
        int data;
        node* right_c;

    node();
    node(int data){
        this->data = data;
        left_c = right_c = nullptr;
    }
};

class binary_st{
    private:
        node* root;
    public:
        void create_bst();
        void inOrder_disp(){
            inOrder_disp(root);
        }
        void inOrder_disp(node* n){
            if(n){
                inOrder_disp(n->left_c);
                cout<<n->data<<" ";
                inOrder_disp(n->right_c);
            }
        }
};
void binary_st::create_bst(){
    int n,d;
    node*t=nullptr,*itr;

    cout<<"Enter the number of elements you want to enter in the binary search tree : ";
    cin>>n;

    cout<<"Enter the value of the root node : ";
    cin>>d;
    root = new node(d);


    for(int i = 1; i<n; i++){
        itr = root;
        cout<<"Enter the value of "<<i<<" node : ";
        cin>>d;
        while(itr){
            t = itr;
            if(d<itr->data){
                itr = itr->left_c;
            }
            else{
                itr = itr->right_c;
            }
        }
        itr = new node(d);

        if(d<t->data){
            t->left_c = itr;
        }
        else{
            t->right_c = itr;
        }
    }
    
}


int main()
{
    binary_st b1;
    b1.create_bst();
    b1.inOrder_disp();
    return 0;
}