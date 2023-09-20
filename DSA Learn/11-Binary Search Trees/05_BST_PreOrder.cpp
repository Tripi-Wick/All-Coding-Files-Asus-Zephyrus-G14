#include <iostream>
#include <stack>
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
    public:
        void pre_Order_BST(int[],int);

        void display(node*);
        void display(){
            display(root);
        };

};

void tree::display(node* n){
    if(n){
        display(n->left_child);
        cout<<n->data<<" ";
        display(n->right_child);
    }
}

// void tree::pre_Order_BST(int preOrder[], int size){
//     stack<node*> stk;
//     node* t,*p;

//     root = new node(preOrder[0]);
//     p = root;
//     for(int i=1; i<size; i++){
//         t = new node(preOrder[i]);
//         if(preOrder[i]<p->data){
//             p->left_child = t;
//             stk.emplace(p);
//             p=t;
//         }
//         else{
//             if(preOrder[i] > p->data && preOrder[i] < stk.top()->data){
//                 p->right_child = t;
//                 p = t;
//             }
//             else{
//                 p = stk.top();
//                 stk.pop();
//             }
//         }
//     }
// }
void tree::pre_Order_BST(int preOrder[], int size){
    stack<node*> stk;
    node* t,*p;
    int i = 0;

    root = new node(preOrder[i++]);
    p = root;

    while(i<size){
        if(preOrder[i]<p->data){
            t = new node(preOrder[i++]);
            p->left_child = t;
            stk.emplace(p);
            p=t;
        }
        else{
            if(preOrder[i] > p->data && preOrder[i] <stk.empty() ? 32767 : stk.top()->data){
                t = new node(preOrder[i++]);
                p->right_child = t;
                p = t;
            }
            else{
                p = stk.top();
                stk.pop();
            }
        }
    }
}

int main()
{
    int num;

    cout<<"Enter the number you want to enter in the binary search tree : ";
    cin>>num;

    int pre[num];

    for(int i=0; i<num; i++){
        cout<<"Enter the value of node "<<i+1<<" : ";
        cin>>pre[i];
    }

    tree t1;

    t1.pre_Order_BST(pre,num);
    
    t1.display();
    cout<<endl;

    return 0;
}