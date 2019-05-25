// https://helloacm.com/how-to-merge-two-sorted-lists-in-c/
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* node = &head;
    
        while(l1 && l2) {
            ListNode*& next = (l1->val < l2->val)  ? l1 : l2;
            node->next = next;
            node = next;
            next = next->next;
        }    
        node->next = l1 ? l1 : l2;
        return head.next;
    }
};
