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

// Approach 1 ---> Same linked list editing

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *itr1, *itr2, *itr3=nullptr;
        itr1 = list1;
        itr2 = list2;
        while(itr1 && itr2){
            while(itr1 && itr2 && itr1->val<=itr2->val){
                if(itr1->next && itr1->next->val<=itr2->val){
                    itr1=itr1->next;
                }
                else{
                    itr3 = itr1->next;
                    itr1->next = itr2;  
                    itr1 = itr3;
                }
            }
            
            while(itr1 && itr2 && itr2->val<itr1->val){
                if(itr2->next && itr2->next->val<itr1->val){
                    itr2=itr2->next;
                }
                else{
                    itr3 = itr2->next;
                    itr2->next = itr1;
                    itr2 = itr3;
                }
            }
        }
    
    if(list1 && list2){
        if(list1->val<=list2->val) return list1;
        else return list2;
    }
    else if(list1 && !list2) return list1;
    else if(!list1 && list2) return list2;
    else return list1;
    }
};


// Approach 2 - New linked list creation 
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if(l1 == NULL){
			return l2;
		}
		if(l2 == NULL){
			return l1;
		}
		ListNode* newHead = NULL;
		ListNode* newTail = NULL;
		if(l1->val < l2->val){
			newHead = l1;
			newTail = l1;
			l1 = l1->next;
		}
		else{
			newHead = l2;
			newTail = l2;
			l2 = l2->next;
		}
		while(l1 != NULL and l2 != NULL){
			if(l1->val < l2->val){
				newTail->next = l1;
				newTail = newTail->next;
				l1 = l1->next;
			}
			else{
				newTail->next = l2;
				newTail = newTail->next;
				l2 = l2->next;
			}
		}
		if(l1 != NULL){
			newTail->next = l1;
			l1 = l1->next;
		}
		if(l2 != NULL){
			newTail->next = l2;
		}
		return newHead;
	}
};

// Approach 3 ------> Recursive method  
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if(l1 == NULL){
			return l2;
		}
		if(l2 == NULL){
			return l1;
		}        
		if(l1->val < l2->val){
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;            
		}
	}
};