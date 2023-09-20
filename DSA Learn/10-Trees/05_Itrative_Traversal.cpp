#include <iostream>
#include <stack>
#include <queue>
#include <list>
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        node* right_child;
};

class tree{
    private:
        node* root;
    public:
        tree();
        void create_tree();
        void ItrPreOrder();
        void ItrInOrder();
        void ItrPostOrder();
        void ItrLevelOrder();
};
tree::tree(){
    root = nullptr;
}
void tree::create_tree(){
    node* temp, *p;
    queue<node*> que;
    int data;
    cout<<"Enter the data of root node : ";
    cin>>data;

    temp = new node;
    temp->data = data;
    temp->left_child = temp->right_child = nullptr;

    root = temp;
    que.emplace(root);

    while(!que.empty()){
        p = que.front();
        que.pop();
    
        cout<<"Enter teh value of left child of "<<p->data<<" : ";
        cin>>data;
        if(data != -1){
            temp = new node;
            temp->data = data;
            temp->left_child = temp->right_child = nullptr;

            p->left_child = temp;
            que.emplace(temp);
        }
        cout<<"Enter teh value of right child of "<<p->data<<" : ";
        cin>>data;
        if(data != -1){
            temp = new node;
            temp->data = data;
            temp->left_child = temp->right_child = nullptr;

            p->right_child = temp;
            que.emplace(temp);
        }
    }
}

void tree::ItrPreOrder(){
    stack<node*> stk;
    node* temp = root;

    while(temp != nullptr || !stk.empty()){
        if(temp){
            cout<<temp->data<<" ";
            stk.emplace(temp);
            temp = temp->left_child;
        }
        else{
            temp = stk.top();
            stk.pop();
            temp = temp->right_child;
        }
    }
}

void tree::ItrInOrder(){
    stack<node*> stk;
    node* temp = root;

    while(temp!=nullptr || !stk.empty()){
        if(temp){
            stk.emplace(temp);
            temp = temp->left_child;
        }
        else{
            temp=stk.top();
            stk.pop();
            cout<<temp->data<<" ";
            temp = temp->right_child;
        }
    }

}
void tree::ItrPostOrder(){
    stack<long int> stk;
    node* temp = root;
    long int tmp;

    while(temp != nullptr || !stk.empty()){
        if(temp){
            stk.emplace((long int)temp);
            temp = temp->left_child;
        }
        else{
            tmp = stk.top();
            stk.pop();

            if(tmp>0){
                stk.emplace(-tmp);
                temp = ((node*)tmp)->right_child;
            }
            else{
                cout<<((node*)(-1*tmp))->data<<" ";
                temp = nullptr;
            }
        }
    }
}
void tree::ItrLevelOrder(){
    queue<node*> que;
    node* p;
    
    cout<<root->data<<" ";
    que.push(root);

    while(!que.empty()){
        p =  que.front();
        que.pop();
        if(p->left_child){
            cout<<p->left_child->data<<" ";
            que.push(p->left_child);
        }
        if(p->right_child){
            cout<<p->right_child->data<<" ";
            que.push(p->right_child); 
        }
    }
}

int main()
{
    tree t1;

    t1.create_tree();

    t1.ItrPreOrder();
    cout<<endl;

    t1.ItrInOrder();
    cout<<endl;

    t1.ItrPostOrder();
    cout<<endl;
    
    t1.ItrLevelOrder();
    cout<<endl;

    return 0;
}