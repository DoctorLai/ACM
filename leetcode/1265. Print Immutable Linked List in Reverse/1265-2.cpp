// https://helloacm.com/how-to-print-immutable-linked-list-in-reverse-using-recursion-or-stack/
// https://leetcode.com/problems/print-immutable-linked-list-in-reverse/
// MEDIUM, STACK, LINKED LIST

/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */
 
class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode* head) {
        stack<ImmutableListNode*> st;
        while (head) {
            st.push(head);
            head = head->getNext();
        }
        while (!st.empty()) {
            auto p = st.top();
            st.pop();
            p->printValue();
        }
    }
};
