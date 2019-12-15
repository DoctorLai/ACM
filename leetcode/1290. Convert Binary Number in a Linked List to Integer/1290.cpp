// https://helloacm.com/how-to-convert-binary-number-in-a-linked-list-to-integer/
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// EASY, BINARY NUMBER, LINKED LIST

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
    int getDecimalValue(ListNode* head) {
        int r = 0;
        while (head) {
            r = (r << 1) | head->val;
            head = head->next;
        }
        return r;
    }
};
