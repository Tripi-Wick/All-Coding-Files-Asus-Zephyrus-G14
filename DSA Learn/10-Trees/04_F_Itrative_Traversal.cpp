// Failed Attempt to deep dive in stack nd make a dynamic stack my self

#include <iostream>
// #include <stack>
using namespace std;

class node{
    public:
        node* left_child;
        int data;
        node* right_child;

        // For queue and stack
        node* next;
        node** leaf_add;
};

class stack{
    public:
        node* top;
        stack();
        void push(node*&);
        void pop();
        node* top_elem();
        bool s_isEmpty();
};
node* stack::top_elem(){
    node* tmp = new node;
    tmp->leaf_add = top->leaf_add;
    return *tmp->leaf_add;
}
stack::stack(){
    top = nullptr;
}
void stack::push(node*& leaf){
    node* temp = new node;
    temp->leaf_add = &leaf;
    temp->left_child=temp->right_child=nullptr;
    
    temp->next = top;
    top = temp;
    // cout<<top->next->leaf_add<<endl;
}
void stack::pop(){
    // node* res = *top->leaf_add;
    node* del = top;
    top = top->next;
    delete del;

    // return res;
}
bool stack::s_isEmpty(){
    if(top == nullptr){
        return true;
    }
    else return false;
}

class queue{
    public:
        node* f, *r;
        queue();
        void enqueue(node*&);        //why we use & here and without it queue miss behaves
        node* dequeue();
        bool isEmpty();
};
queue::queue(){
    f = r = nullptr;
}
void queue::enqueue(node*& leaf){
    node* temp1 = new node;
    temp1->leaf_add = &leaf;
    temp1->next= nullptr;

    if(f == nullptr){
        r = f = temp1;
    }
    else{
        r->next = temp1;
        r = r->next;
    }
}
node* queue::dequeue(){
    // if(!f) return nullptr;
    node* res = *f->leaf_add;
    node* del = f;

    f = f->next;
    
    delete del;
    return res;
}
bool queue::isEmpty(){
    if(!f){
        return true;
    }
    else return false;
}

class tree{
    private:
        node* root_node;
    public:
        tree();
        void create_tree();
        void ItrPreOrder();
        // void display_preOrder();
        // void display_preOrder(node*);
        void ItrInOrder();
        void ItrPostOrder();
        void ItrLevelOrder();
};
tree::tree(){
    root_node = nullptr;
}
void tree::create_tree(){
    node* p = nullptr;
    queue que;

    int root_data;
    cout<<"Enter the value of root node : ";
    cin>>root_data;
    
    root_node = new node;
    root_node->data =root_data;
    root_node->left_child= root_node->right_child= nullptr;
    
    que.enqueue(root_node);

    while(!que.isEmpty()){
        p = que.dequeue();
        int data1;
        cout<<"Enter the value of left child of "<<p->data<<" : ";
        cin>>data1;
        if(data1!=-1){
            node* temp = new node;
            temp->data = data1;
            temp->left_child = temp->right_child = nullptr;

            p->left_child = temp;
            que.enqueue(p->left_child);
        }
        cout<<"Enter the value of right child of "<<p->data<<" : ";
        cin>>data1;
        if(data1!=-1){
            node* temp = new node;
            temp->data = data1;
            temp->left_child = temp->right_child = nullptr;

            p->right_child = temp;
            que.enqueue(p->right_child);
        }
    }
}

// void tree::display_preOrder(){
//     return display_preOrder(root_node);
// }
// void tree:: display_preOrder(node* root){
//     if(root){
//     cout<<root->data<<" ";
//     display_preOrder(root->left_child);
//     display_preOrder(root->right_child);
//     }
// }

void tree::ItrPreOrder(){
    node* itr = root_node;
    stack s1;
    while(itr!=nullptr || !s1.s_isEmpty()){
        if(itr!=nullptr){
           cout<<itr->data<<" ";
            s1.push(itr);
            itr = itr->left_child;
        }
        else if(itr==nullptr){
            itr = s1.top_elem();
            s1.pop();
            itr = itr->right_child;
        }
    }
    return;
}
// void tree::ItrInOrder(){
//     node* itr = root_node;
//     stack s2;
//     while(itr || !s2.s_isEmpty()){
//         if(itr){
//             s2.push(itr);
//             itr = itr->left_child;
//         }
//         else{
//             itr = s2.pop();
//             s2.pop();
//             cout<<itr->data<<" "<<flush;
//             itr = itr->right_child;
//         }
//     }
// }
// void tree::ItrPostOrder(){
//     node* itr = root_node;
//     stack s2;
//     while(itr || !s2.s_isEmpty()){
//         if(itr){
//             s2.push(itr);
//             itr = itr->left_child;
//         }
//         else{
//             itr = s2.pop();
//             itr = itr->right_child;
//             cout<<itr->data<<" ";
//         }
//     }
// }

int main()
{
    tree r1;
    r1.create_tree();
    
    r1.ItrPreOrder();
    cout<<endl;

    // r1.display_preOrder();

    // r1.ItrInOrder();
    // cout<<endl;

    // r1.ItrPostOrder();
    
    return 0;
}