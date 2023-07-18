#include <iostream>
using namespace std;

class node{
    public:
        char data;
        node* next;
};
class stack{
    private:
        node* top;
    public:
        stack();
        ~stack();
        void push(char);
        char pop();
        void display();
        char top_elem();
        friend int outer_precedence(char);
        friend int inner_precedence(char);
        friend node* infix_to_postfix(node*);
};
stack ::stack(){
    top = nullptr;
}
stack ::~stack(){
    node* del = top;
    while(top){
        top = top->next;
        delete del;
        del = top;
    }
}
void stack ::push(char x){
    node* temp = new node;
    temp->data = x;
    temp->next = top;
    top = temp;
}
char stack ::pop(){
    if(top == nullptr){
        cout<<"Stack is Empty i.e. Stack Underflows"<<endl;
        return '\0';
    }
    char x = top->data;
    node* temp;
    temp = top;
    top = top->next;
    delete temp;
    return x;
}
void stack::display(){
    node* itr = top;
    while(itr){
        cout<<itr->data;
        itr = itr->next;
    }
    cout<<endl;
}
char stack ::top_elem(){
    if(top == nullptr) return '\0';
    else return top->data;
}
int outer_precedence(char input){
    switch(input){
        case '+' : return 1;
        case '-' : return 1;
        case '*' : return 3;
        case '/' : return 3;
        case '^' : return 6;
        case '(' : return 7;
        case ')' : return 0;
        default : return -1;
    }
}
int inner_precedence(char input){
    switch(input){
        case '+' : return 2;
        case '-' : return 2;
        case '*' : return 4;
        case '/' : return 4;
        case '^' : return 5;
        case '(' : return 0;
        default : return -1;
    }
}
node* infix_to_postfix(node* s){
    stack s1;
    node* postfix = nullptr;
    node* itr = postfix;

    int i=0;

    while(s){
        node* temp = new node;
        if(outer_precedence(s->data) == -1){
            if(i==0){
                temp->data = s->data;
                temp->next = nullptr;
                postfix = temp; 
                itr = postfix;
                i++;
            }
            else{
                temp->data = s->data;
                temp->next = nullptr;
                itr->next  = temp;
                itr = temp; 
            }
        }
        else{
            if(inner_precedence(s1.top_elem())<outer_precedence(s->data)){
                s1.push(s->data);
            }
            else{
                while(inner_precedence(s1.top_elem())>=outer_precedence(s->data)){
                    if(s1.top_elem()=='(' && s->data ==')'){
                        s1.pop();
                        break;
                    }
                    node* temp = new node;
                    temp->data = s1.pop();
                    temp->next = nullptr;
                    itr->next  = temp;
                    itr = temp; 
                }
                if(s->data!=')') s1.push(s->data);
            }
        }
        s=s->next;
    }
    while(s1.top!=nullptr){
        node* temp = new node;
        temp->data = s1.pop();
        temp->next = nullptr;
        itr->next  = temp;
        itr = temp; 
    }
    return postfix;
}
int postfix_eval(node* postfix){
    stack s;
    while(postfix){
        if(outer_precedence(postfix->data) == -1){
            s.push(postfix->data);
        }
        else{
            int x2 = s.pop()-'0', x1 = s.pop()-'0';
            int res=0;
            switch(postfix->data){
                case '+' :{ res = x1+x2; break;}
                case '-' :{ res = x1-x2; break;}
                case '*' :{ res = x1*x2; break;}
                case '/' :{ res = x1/x2; break;}
                case '^' :{ res = x1^x2; break;}
            }
            s.push(char(res) + '0');
        }
        postfix= postfix->next;
    }
    return s.top_elem()-'0';
}

int main()
{
    node* infix = nullptr;
    node* itr = infix;

    int i=0;
    char tem = '0';
    cout<<"--------------Enter # to end the input function -------------"<<endl;  
    while(tem != '#'){
        node* temp = new node;

        cout<<"Enter your element"<<" : ";
        cin>>tem;
        if(tem!= '#'){
            if(i==0){
                temp->data=tem;
                temp->next=nullptr;
                infix = temp;
                itr = infix;
                i++;
            }
            else{
                temp->data=tem;
                temp->next=nullptr;
                itr->next=temp;
                itr=itr->next;
            }
        }
    }

    node* postfix = infix_to_postfix(infix);
    itr = postfix;

    while(itr){
        cout<<itr->data;
        itr = itr->next;
    }
    cout<<endl;

    cout<<postfix_eval(postfix);

    return 0;
}