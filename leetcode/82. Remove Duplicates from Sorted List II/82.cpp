// https://helloacm.com/how-to-remove-the-duplicates-from-sorted-list-leaving-only-distinct-items/
// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// MEDIUM, LINKED LIST

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        while (head) {
            int c = 0;
            ListNode *cur = head;
            while (head && head->val == cur->val) {
                c ++;
                head = head->next;
            }
            if (c == 1) {
                prev->next = cur;
                prev = cur;
            }
            cur->next = NULL;
        }        
        return dummy->next;
    }
};
