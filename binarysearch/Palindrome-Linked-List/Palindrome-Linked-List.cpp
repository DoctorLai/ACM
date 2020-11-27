// https://helloacm.com/two-algorithms-to-determine-a-palindrome-linked-list-using-a-stack/
// https://binarysearch.com/problems/Palindrome-Linked-List
// MEDIUM, STACK, LINKED LIST

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* node) {
    if (!node) return true;
    stack<LLNode*> st;
    LLNode* head = node;
    while (head) {
        st.push(head);
        head = head->next;
    }
    while (!st.empty()) {
        auto p = st.top();
        st.pop();
        if (p->val != node->val) return false;
        node = node->next;
    }
    return true;
}
