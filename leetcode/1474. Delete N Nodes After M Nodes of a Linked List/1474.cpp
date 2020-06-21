// https://helloacm.com/how-to-delete-n-nodes-after-m-nodes-of-a-linked-list/
// https://leetcode.com/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/
// EASY, LINKED LIST

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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        prev->next = head;
        while (head != NULL) {         
            for (int i = 0; (i < m) && (head != NULL); ++ i) {
                prev = head;
                head = head->next;
            }
            for (int i = 0; (i < n) && (head != NULL); ++ i) {
                head = head->next;
            }            
            prev->next = head;
        }
        return dummy->next;
    }
