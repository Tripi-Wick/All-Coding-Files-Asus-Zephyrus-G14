/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Approach 1 --> Floyd’s Cycle-Finding Algorithm // fast slow approach // 2 pointers // "tortoise and the hare algorithm
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *itr1= head;
        if(!itr1 || !itr1->next) return false;
        ListNode* itr2 = head->next;
        while(itr1 && itr2){
            if(itr1 == itr2){
                return true;
            }
            else{
                if(itr1->next && itr2->next){
                    itr1 = itr1->next;
                    itr2 = itr2->next->next;
                }
                else return false;
            }
        }
        return false;
    }
};

// Approach 2 --> Better version
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *itr1= head, *itr2 = head;
        // itr1 -> slow , itr2 -> fast
        while(itr2 && itr2->next){
            itr1= itr1->next;
            itr2= itr2->next->next;
            if(itr1 == itr2) return true;
        }
        return false;
    }
};

// Approach 3 --->> Reversing the list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* follow = NULL;
        while (head)
        {
            follow = head->next;
            head->next = prev;
            prev = head;
            head = follow;
        }
        return prev;
    }
    bool hasCycle(ListNode *head)
    {
        ListNode* rev = reverseList(head);
        if (head && head->next && rev == head)
        {
            return true;
        }
        return false;
    }
};


// Approach 4 --> Hash Table
bool hasCycle(ListNode *head) {
    if(head==NULL)
        return false;
    unordered_map<ListNode*,int> map;
    while(head!=NULL){
        if(map.count(head)>0)
            return true;
        else
            map[head]=1;
        head=head->next;
    }
    return false;
}