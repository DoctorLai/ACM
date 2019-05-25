// https://helloacm.com/how-to-merge-two-sorted-lists-in-c/
// https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        dummy->next = l1->val <= l2->val ? l1 : l2;        
        ListNode *p = dummy;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                p->next = l1;
                p = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }                        
        }
        if (l1 != nullptr) p->next = l1;
        if (l2 != nullptr) p->next = l2;
        return dummy->next;
    }
};
