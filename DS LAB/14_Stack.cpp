#include <iostream>
#include <stdio.h>
using namespace std;

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){return 1;}
    else{return 0;}
}

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){return 1;}
    else{return 0;}
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){cout<<"Stack Overflow! Cannot push into the stack\n";}
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(struct stack* ptr){
    if(isEmpty(ptr)){cout<<"Stack Underflow! Cannot pop From the stack\n";}
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int peek(struct stack* s, int i){
    int arrayInd = s->top-i+1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}


int main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    cout<<"Before Pushing, Full: "<<isFull(s)<<endl;
    cout<<"Before Pushing, Empty: "<<isEmpty(s)<<endl;

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);

    cout<<"After Pushing, Full: "<<isFull(s)<<endl;
    cout<<"After Pushing, Empty: "<<isEmpty(s)<<endl;

    for (int i = 1; i<= s->top+1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    pop(s);
    pop(s);

    for (int i = 1; i<= s->top+1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    return 0;
}