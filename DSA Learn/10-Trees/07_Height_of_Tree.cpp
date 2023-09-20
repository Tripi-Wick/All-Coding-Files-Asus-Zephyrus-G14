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
        int search(int[],int,int,int);
        node* trave_create_tree(int[],int[],int,int);
        int height();
        int height(node*);
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
int tree::search(int inOrder[],int start, int end, int val){
    for(int i = start; i<=end; i++){
        if(val == inOrder[i]){return i;}
    }
    return -1;
}
node* tree::trave_create_tree(int postOrder[], int inOrder[], int start, int end){
    static int idx=6;
    int val,pos;
    if(start>end){return NULL;}

    val = postOrder[idx];
    idx--;

    node* curr = new node(val);
    if(start == end){return curr;}

    pos = search(inOrder,start,end,val);
    
    curr->right_child = trave_create_tree(postOrder,inOrder,pos+1,end);
    curr->left_child = trave_create_tree(postOrder,inOrder,start,pos-1);
    
    return curr;
}
int tree::height(){
    int hgt = height(root);
    return hgt-1;    
}
int tree::height(node* node){
    int x=0,y=0;
    if(node){
        x = height(node->left_child);
        y = height(node->right_child);
        if(x>y) return x+1;
        else return y + 1;
    }
    else return x+y;
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

int main()
{
    tree t1,t2;
    t1.create_tree();
    t1.disp_inOrder();
    cout<<endl;
    t1.itr_disp_postOrder();
    cout<<endl;
    cout<<"Height of t1 = "<<t1.height();
    cout<<endl;

    int p[]= {3,4,1,5,6,2,0};
    int i[]= {3,1,4,0,5,2,6};
    t2 = (tree)(t2.trave_create_tree(p,i,0,6));
    t2.disp_inOrder();
    cout<<endl;
    t2.itr_disp_postOrder();
    cout<<endl;
    cout<<"Height of t2 = "<<t2.height();
    cout<<endl;
    return 0;
}