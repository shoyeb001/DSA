class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int ans = 0;
        while(temp!=0){
            ans = ans*2;
            ans = ans + temp->val;
            temp = temp->next;
        }
        return ans;
    }
};
