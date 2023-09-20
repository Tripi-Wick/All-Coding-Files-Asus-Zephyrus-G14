#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        node* right_child;

        node(int data){
            this->data = data;
            right_child = left_child = nullptr;
        };
};

class tree{
    private:
        node* root;
    public:
        tree(){root = nullptr;};
        tree(node* node){ root = node; }
        void create_tree();
        int sum_node();
        int sum_node(node*);
        void disp_inOrder();
        void disp_inOrder(node*);
        void itr_disp_postOrder();
};
void tree::create_tree(){
    int d;
    node* p,*t;
    queue<node*> que;

    cout<<"Enter the value of root node : ";
    cin>>d;
    root = new node(d);

    que.emplace(root);

    while(!que.empty()){
        p = que.front();
        que.pop();

        cout<<"Enter the value of left child of "<<p->data<<" : ";
        cin>>d;
        if(d!=-1){
            t = new node(d);
            p->left_child = t;
            que.emplace(t);
        }
        cout<<"Enter the value of right child of "<<p->data<<" : ";
        cin>>d;
        if(d!=-1){
            t = new node(d);
            p->right_child = t;
            que.emplace(t);
        }
    }
    return;
}

void tree::disp_inOrder(){
    disp_inOrder(root);
}
void tree::disp_inOrder(node* n){
    if(n){
        disp_inOrder(n->left_child);
        cout<<n->data<<" ";
        disp_inOrder(n->right_child);
    }
    else return;    
}
void tree::itr_disp_postOrder(){
    stack<long int> stk;
    node* itr = root;
    long int tmp;

    while(itr || !stk.empty()){
        if(itr){
            stk.emplace((long int)itr);
            itr = itr->left_child;
        }
        else{
            tmp = stk.top();
            stk.pop();
            if(tmp>0){
                stk.emplace(-tmp);
                itr = ((node*)tmp)->right_child;
            }
            else{
                itr = (node*)(-1*tmp);
                cout<<itr->data<<" ";
                itr = nullptr;
            }
        }
    }
}
int tree::sum_node(){
    return sum_node(root);
}
int tree::sum_node(node* n){
    int x,y;
    if(n){
        x = sum_node(n->left_child);
        y = sum_node(n->right_child);
        return x + y + n->data;
    }
    else return 0;
}

int main()
{
    tree t1,t2;
    t1.create_tree();
    t1.disp_inOrder();
    cout<<endl;
    t1.itr_disp_postOrder();
    cout<<endl;
    cout<<"sum of all nodes of t1 = "<<t1.sum_node();
    cout<<endl;

    return 0;
}