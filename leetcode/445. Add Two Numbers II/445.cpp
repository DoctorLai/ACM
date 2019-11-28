// https://helloacm.com/add-two-numbers-by-two-linked-list-most-significant-digit-comes-first/
// https://leetcode.com/problems/add-two-numbers-ii/
// MEDIUM, LINKED LIST, STACK

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1, st2;
        while (l1) {
            st1.push(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            st2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* prev = NULL;
        int c = 0;
        while (!st1.empty() || (!st2.empty())) {
            int sum = c;
            if (!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }
            if (!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }
            c = sum / 10;
            ListNode* n = new ListNode(sum % 10);
            n->next = prev;
            prev = n;
        }
        if (c > 0) {
            ListNode* n = new ListNode(c);
            n->next = prev;
            prev = n;
        }
        return prev;
    }
};
