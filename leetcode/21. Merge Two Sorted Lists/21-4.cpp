// https://helloacm.com/how-to-merge-two-sorted-lists-in-c/
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode result(-1);
        for (ListNode* it = &result; l1 != NULL || l2 != NULL; it = it->next) {
            int val1 = l1 == NULL ? INT_MAX : l1->val;
            int val2 = l2 == NULL ? INT_MAX : l2->val;
            auto n = (val1 <= val2) ? l1 : l2; 
            it->next = n;
            if (val1 <= val2) {
                l1 = l1->next;
            }
            else {
                l2 = l2->next;
            }
        }
        return result.next;
    }
};
