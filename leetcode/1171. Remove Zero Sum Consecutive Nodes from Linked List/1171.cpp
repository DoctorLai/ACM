// https://helloacm.com/how-to-remove-zero-sum-consecutive-nodes-from-linked-list-using-prefix-sum/
// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/
// MEDIUM, LINKED LIST, PREFIX SUM

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* newHead = head;
        unordered_map<int, ListNode*> prefix;
        int sum = 0;
        bool flag = false;        
        while (head) {
            sum += head->val;
            if (sum == 0) {
                newHead = head->next;
                flag = true;
                //break;
            } else if (prefix.find(sum) == prefix.end()) {
                prefix[sum] = head;
            } else {
                prefix[sum]->next = head->next;
                flag = true;
            }
            head = head->next;
        }
        if (flag) {
            return removeZeroSumSublists(newHead);
        }
        return newHead;
    }
};
