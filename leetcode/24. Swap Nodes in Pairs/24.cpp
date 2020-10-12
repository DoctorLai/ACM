// https://helloacm.com/cc-coding-exercise-how-to-swap-nodes-in-pairs-in-a-singly-linked-list/
// https://leetcode.com/problems/swap-nodes-in-pairs/
// MEDIUM, RECURSION

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head) return NULL;
        if (!head->next) return head;
        auto newHead = head->next;
        auto next = newHead->next;
        newHead->next = head;
        head->next = swapPairs(next);
        return newHead;
    }
};
