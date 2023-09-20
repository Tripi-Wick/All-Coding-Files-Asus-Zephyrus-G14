
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
        void disp_inOrder();
        void disp_inOrder(node*);
        void itr_disp_postOrder();
        int Degree_Zero_nodes();
        int Degree_Zero_nodes(node*);
        int Degree_One_nodes();
        int Degree_One_nodes(node*);
        int Degree_Two_nodes();
        int Degree_Two_nodes(node*);
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
int tree::Degree_Zero_nodes(){
    return Degree_Zero_nodes(root);
}
int tree::Degree_Zero_nodes(node* n){
    int x,y;
    if(n){
        x = Degree_Zero_nodes(n->left_child);
        y = Degree_Zero_nodes(n->right_child);
        if(n->left_child==nullptr && n->right_child==nullptr){
            return x+y+1;
        }   
        else return x+y;
    }
    else return 0;
}
int tree::Degree_One_nodes(){
    return Degree_One_nodes(root);
}
int tree::Degree_One_nodes(node* n){
    int x,y;
    if(n){
        x = Degree_One_nodes(n->left_child);
        y = Degree_One_nodes(n->right_child);
        // if((n->left_child!=nullptr && n->right_child==nullptr)||(n->left_child==nullptr && n->right_child!=nullptr)){
        if(n->left_child!=nullptr ^ n->right_child!=nullptr){       //-------->Easy Method of xor 
            return x+y+1;
        }   
        else return x+y;
    }
    else return 0;

}
int tree::Degree_Two_nodes(){
    return Degree_Two_nodes(root);
}
int tree::Degree_Two_nodes(node* n){
    int x,y;
    if(n){
        x = Degree_Two_nodes(n->left_child);
        y = Degree_Two_nodes(n->right_child);
        if(n->left_child!=nullptr && n->right_child!=nullptr){
            return x+y+1;
        }   
        else return x+y;
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
    cout<<"Number of degree 0 nodes of t1 = "<<t1.Degree_Zero_nodes()<<endl;
    cout<<"Number of degree 1 nodes of t1 = "<<t1.Degree_One_nodes()<<endl;
    cout<<"Number of degree 2 nodes of t1 = "<<t1.Degree_Two_nodes()<<endl;

    return 0;
}