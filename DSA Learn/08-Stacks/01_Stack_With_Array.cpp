#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int* S;
};

void create(stack* st){
    cout<<"Enter the size of stack : ";
    cin>>st->size;
    st->top = -1;
    st->S = new int[st->size]; 
}

void push(stack* st, int val){
    if(st->top == st->size){cout<<"Stack Overflow"<<endl;}
    else{
        st->top++;
        st->S[st->top]= val;
    }
}
int pop(stack* st){
    int x = 0;
    if(st->top == -1){cout<<"Stack Underflow"<<endl;}
    else{
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

void display(stack *st){
    for(int i=0; i<=st->top; i++){
        cout<<st->S[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    stack s1;
    int n;

    create(&s1);

    cout<<"Enter the elements you want to enter in stack : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<" : ";
        cin>>temp;
        push(&s1,temp);
    }

    display(&s1);

    cout<<pop(&s1)<<endl;
    
    display(&s1);

    return 0;
}


// By Reference 
/*
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
    st.size--;
    st.top = -1;
    st.S = new int[st.size]; 
}

void push(stack& st, int val){
    if(st.top == st.size){cout<<"Stack Overflow"<<endl;}
    else{
        st.top++;
        st.S[st.top]= val;
    }
}
int pop(stack& st){
    int x = 0;
    if(st.top == -1){cout<<"Stack Underflow"<<endl;}
    else{
        x = st.S[st.top];
        st.top--;
    }
    return x;
}

void display(stack &st){
    for(int i=0; i<=st.top; i++){
        cout<<st.S[i]<<" ";
    }
    cout<<endl;
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

    cout<<pop(s1)<<endl;
    
    display(s1);

    return 0;
}
*/