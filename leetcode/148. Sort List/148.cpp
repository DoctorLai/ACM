// https://helloacm.com/using-recursive-merge-sort-algorithm-to-sort-a-linked-list-in-onlogn/
// https://leetcode.com/problems/sort-list/
// MEDIUM, SORTING, DIVIDE-AND-CONQUER, RECURSION

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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *mid = middle(head);
        head = sortList(head);
        mid = sortList(mid);
        return mergeList(head, mid);
    }
private:
    ListNode* mergeList(ListNode* p1, ListNode* p2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while (p1 && p2) {
            if (p1->val < p2->val) {
                head->next = p1;
                p1 = p1->next;
            } else {
                head->next = p2;
                p2 = p2->next;
            }
            head = head->next;
        }
        if (p1) head->next = p1;
        if (p2) head->next = p2;
        return dummy->next;
    }
    
    ListNode* middle(ListNode* head) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;
        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = NULL;
        return slow;
    }
};
