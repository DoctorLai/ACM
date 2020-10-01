// https://helloacm.com/reconnect-the-nodes-in-linked-list-by-odd-even-in-place-odd-even-linked-list/
// https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return NULL;
        auto odd = head, even = head->next, evenHead = even;
        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
}; 
