// Approacch 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=nullptr,*itr=nullptr,*temp;
        itr=l3;
        int data,carry=0,i=0;

        while(l1!=nullptr && l2!=nullptr){
            data = (l1->val + l2->val + carry)%10;

            temp = new ListNode;
            temp->val= data;
            temp->next= nullptr;

            carry = (l1->val + l2->val + carry)/10;
                    
            if(i==0){
                l3= temp;
                itr= temp;
                l1= l1->next;
                l2= l2->next;
            }
            else{
                itr->next= temp;
                itr= itr->next;
                l1= l1->next;
                l2= l2->next;
            } 
            i++;
        }
        while(l1!=0){
           temp = new ListNode;
           data= (l1->val+carry)%10;
           carry = (l1->val+carry)/10;
           temp->val= data;
           temp->next= nullptr;
           itr->next=temp;
           itr=itr->next;
           l1 = l1->next;
        }
        while(l2!=0){
           temp = new ListNode;
           data= (l2->val+carry)%10;
           carry = (l2->val+carry)/10;
           temp->val= data;
           temp->next= nullptr;
           itr->next=temp;
           itr=itr->next;
           l2 = l2->next;
        }

        if(carry!=0){
            if(i==1){
                temp = new ListNode;
                temp->val= carry;
                temp->next= nullptr;
                itr->next=temp;
                itr=itr->next;
            }
            else if(l1==nullptr && l2==nullptr){
                data= carry;
                temp = new ListNode;
                temp->val= data;
                temp->next= nullptr;
                itr->next=temp;
                itr=itr->next;
            }
            else{
                data= (itr->val+carry)%10;
                temp = new ListNode;
                temp->val= data;
                temp->next= nullptr;
                itr->next=temp;
                itr=itr->next;
            }
        }
            return l3;
        }
};

//Done is vs code
/*
#include <iostream>
using namespace std;

typedef struct L_L{
    int val;
    struct L_L* next;
}ListNode;

void insert_At_Head(ListNode* &head, int num){
    ListNode* temp = new ListNode;
    temp->val = num;
    temp->next = nullptr;
    head = temp;
}

void insert_At_Tail(ListNode* &head, int num){
    ListNode* temp = new ListNode;
    temp->val = num;
    temp->next = nullptr;

    ListNode* itr = head;
    while(itr->next!=nullptr){
        itr = itr->next;
    }

    itr->next = temp;
}

void display(ListNode* head){
    ListNode* itr = head;
    while(itr!=nullptr){
        cout<<itr->val<<"->";;
        itr= itr->next;
    }
    cout<<"nullptr"<<endl;

}

ListNode* sum_LL(ListNode* l1,ListNode* l2){
   ListNode* l3=nullptr,*itr=nullptr,*temp;
   itr=l3;
   int carry=0,i=0,data=0;

   while(l1!=nullptr && l2!=nullptr){
      data= (l1->val + l2->val + carry)%10;

      temp = new ListNode;
      temp->val= data;
      temp->next= nullptr;

      carry = (l1->val + l2->val + carry)/10;
            
      if(i==0){
         l3= temp;
         itr= temp;
         l1= l1->next;
         l2= l2->next;
      }
      else{
         itr->next= temp;
         itr= itr->next;
         l1= l1->next;
         l2= l2->next;
      } 
      i++;
   }
   while(l1!=0){
      temp = new ListNode;
      data= (l1->val+carry)%10;
      carry = (l1->val+carry)/10;
      temp->val= data;
      temp->next= nullptr;
      itr->next=temp;
      itr=itr->next;
      l1 = l1->next;
   }
   while(l2!=0){
      temp = new ListNode;
      data= (l2->val+carry)%10;
      carry = (l2->val+carry)/10;
      temp->val= data;
      temp->next= nullptr;
      itr->next=temp;
      itr=itr->next;
      l2 = l2->next;
   }

if(carry!=0){
   if(i==1){
      temp = new ListNode;
      temp->val= carry;
      temp->next= nullptr;
      itr->next=temp;
      itr=itr->next;

   }
   else if(l1==nullptr && l2==nullptr){
      data= carry;
      temp = new ListNode;
      temp->val= data;
      temp->next= nullptr;
      itr->next=temp;
      itr=itr->next;
   }
   else{
      data= (itr->val+carry)%10;
      temp = new ListNode;
      temp->val= data;
      temp->next= nullptr;
      itr->next=temp;
      itr=itr->next;
   }
}
      
   return l3;
}

int main(){
    ListNode* n1=nullptr,*n2=nullptr,*n3=nullptr;
    
    int num1,num2;
    cout<<"Enter the number of elements you want to enter in Linked List 1: ";
    cin>>num1;
    for(int i=0; i<num1; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List 1: ";
        cin>>temp;
        if(i==0){insert_At_Head(n1,temp);}
        else insert_At_Tail(n1,temp);
    }

    cout<<"Enter the number of elements you want to enter in Linked List 2: ";
    cin>>num2;
    for(int i=0; i<num2; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" Element of Linked List 2: ";
        cin>>temp;
        if(i==0){insert_At_Head(n2,temp);}
        else insert_At_Tail(n2,temp);
    }

    display(n1);
    display(n2);

    n3 = sum_LL(n1,n2);
    display(n3);

    return 0;
}
*/