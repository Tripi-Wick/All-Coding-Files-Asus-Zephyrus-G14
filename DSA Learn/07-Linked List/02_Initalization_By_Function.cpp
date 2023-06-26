#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
}*first=NULL;

void create(int arr[], int n){
    struct node *t,*end;
    first = new struct node;
    first->data = arr[0];
    first->next = NULL;
    end = first;    
    for(int i=1; i<n; i++){
        t = new struct node;
        t->data=arr[i];
        t->next=NULL;
        end->next=t;
        end = t;
    }    
}

void display(struct node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in a Linked List : ";
    cin>>n;

    int temp[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i+1<<" Element of Linked List : ";
        cin>>temp[i];
    }
    
    create(temp,n);
    display(first);
    
    return 0;
}

// Mai bata ra hu ye bahot wahiyat tareeka hai pta ni kyu abdul bari ne esa krwaya hai 🥲.