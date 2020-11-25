// https://helloacm.com/algorithms-to-compute-the-kth-last-node-of-a-linked-list/
// https://binarysearch.com/problems/Kth-Last-Node-of-a-Linked-List
// MEDIUM, LINKED LIST

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    LLNode *first = node;
    while (first && (k--)) {
        first = first->next;
    }
    LLNode *second = node;
    while (first->next) {
        first = first->next;
        second = second->next;
    }
    return second->val;
}
