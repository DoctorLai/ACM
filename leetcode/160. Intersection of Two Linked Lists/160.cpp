// https://helloacm.com/algorithm-to-find-the-intersection-of-two-linked-lists/
// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> data;
        while (headA != nullptr) {
            data.insert(headA);
            headA = headA->next;
        }
        while (headB != nullptr) {
            if (data.count(headB)) {
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }
};
