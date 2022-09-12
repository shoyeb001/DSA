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
    void reverse(ListNode*s, ListNode*e){
        ListNode *p=NULL, *c = s, *n=s->next;
        while(p!=e){
            c->next=p;
            p=c;
            c=n;
            if(n->next!=NULL) n=n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1){
            return head;
        }
        ListNode*s = head, *e = head;
        int inc = k-1;
        while(inc--){
             if(e->next==NULL){
                return head;
            }
            e = e->next; //incrementing end for create range
           
        }
        ListNode* reverseHead = reverseKGroup(e->next,k);
        reverse(s,e);
        s->next = reverseHead;
        return e;
    }
};
