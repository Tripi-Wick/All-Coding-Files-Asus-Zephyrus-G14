#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int* S;
};

void create(stack& st){
    cout<<"Enter the size of stack : ";
    cin>>st.size;
    st.top = -1;
    st.S = new int[st.size]; 
}

void push(stack& st, int val){
    if(st.top == st.size-1){cout<<"Stack Overflow"<<endl;}
    else{
        st.top++;
        st.S[st.top]= val;
    }
}
int pop(stack& st){
    int x = -1;
    if(st.top == -1){cout<<"Stack Underflow"<<endl;}
    else{
        x = st.S[st.top];
        st.top--;
    }
    return x;
}
void display(stack& st){
    for(int i=0; i<=st.top; i++){
        cout<<st.S[i]<<" ";
    }
    cout<<endl;
}

int peek(stack st,int pos){
    int idx = st.top - pos + 1;
    if(idx<0){cout<<"Invalid Position"<<endl;return 0;}
    else return st.S[idx];
}
int stack_Top(stack st){
    return st.top;
}
bool isEmpty(stack st){
    if(st.top == -1) return 1;
    else return 0;
}
bool isFull(stack st){
    if(st.top == st.size) return 1;
    else return 0;
}

int main()
{
    stack s1;
    int n;

    create(s1);

    cout<<"Enter the elements you want to enter in stack : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        push(s1,temp);
    }

    display(s1);

    cout<<"Enter the index of at which you want to see the element in stack : ";
    cin>>n;
    cout<<peek(s1,n)<<endl;
    cout<<pop(s1)<<endl;
    display(s1);

    cout<<isFull(s1)<<endl;
    cout<<isEmpty(s1)<<endl;

    return 0;
}