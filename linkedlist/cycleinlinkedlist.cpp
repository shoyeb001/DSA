// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_set<ListNode*>s;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(s.find(temp)!=s.end()){
//                 return true;
//             }
//             s.insert(temp);
//             temp = temp->next;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL ||head->next==NULL){
            return false;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
