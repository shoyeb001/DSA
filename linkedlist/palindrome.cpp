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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n = head->next;
        while(c!=NULL){
            c->next = p;
            p=c;
            c=n;
            if(n!=NULL)  n=n->next;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        ListNode* a = head;
        ListNode* b = slow->next;
        while(b!=NULL){
           if(a->val!=b->val){
               return false;
           }
            a = a->next;
            b= b->next;
        }
        return true;
    }
};
