// https://helloacm.com/how-to-merge-k-sorted-lists-using-recursive-divide-and-conquer-algorithms/
// https://leetcode.com/problems/merge-k-sorted-lists/
// HARD, DIVIDE-AND-CONQUER, RECURSION

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0) return nullptr;
        if (n == 1) return lists[0];
        int m = n / 2;
        vector<ListNode*> a(begin(lists), begin(lists) + m);
        vector<ListNode*> b(begin(lists) + m, end(lists));
        return merge(mergeKLists(a), mergeKLists(b));
    }
private:
    ListNode* merge(ListNode *a, ListNode *b) {
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while (a && b) {    
            if (a->val < b->val) {
                head->next = a;
                a = a->next;
            } else {
                head->next = b;
                b = b->next;
            }
            head = head->next;
        }
        if (a) head->next = a;
        if (b) head->next = b;
        return dummy->next;
    }
};
