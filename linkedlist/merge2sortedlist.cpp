// class Solution {
// public:
//     ListNode* merge(ListNode* list1, ListNode* list2){
//         if(list1==NULL) return list2;
//         if(list2==NULL) return list1;
//         if(list1->val < list2->val){
//             list1->next = merge(list1->next,list2);
//             return list1;
//         }
//         else{
//             list2->next = merge(list1, list2->next);
//             return list2;
//         }
//     }
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         return merge(list1,list2);
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
       if(l1==NULL) return l2;
       if(l2==NULL) return l1;
       ListNode* ans = new ListNode(-1);
       ListNode * tail = ans;
       while(l1!=NULL && l2!=NULL){
           if(l1->val<l2->val){
               tail->next = l1;
               tail = l1;
               l1 = l1->next;
           }else{
               tail->next = l2;
               tail = l2;
               l2 = l2->next;
           }
       }
       if(l1==NULL) tail->next = l2;
       if(l2==NULL) tail->next = l1;
        
        return ans->next;
        
    }
};
