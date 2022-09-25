// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode* newhead = deleteDuplicates(head->next);
//         if(newhead->val==head->val){
//             return newhead;
//         }
//         else{
//             head->next = newhead;
//             return head;
//         }
//     }
// };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* temp = head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(temp->next!=NULL){
            if(temp->val == temp->next->val){
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
