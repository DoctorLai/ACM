// https://helloacm.com/how-to-compute-the-middle-of-the-linked-list-using-fast-and-slow-pointer/
// https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> data;
        if (head == nullptr) return nullptr;
        while (head != nullptr) {
            data.push_back(head);
            head = head->next;
        }
        return data[data.size() / 2];
    }
};
