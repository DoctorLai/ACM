// https://helloacm.com/algorithsm-to-convert-linked-list-to-back-to-front-recursion-or-two-pointer/
// https://binarysearch.com/problems/Back-to-Front-Linked-List
// MEDIUM, RECURSION

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if (node == NULL || node->next == NULL) {
        return node;
    }
    auto curr = node, prev = (LLNode*)NULL;
    while (curr->next) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    curr->next = node;
    node->next = solve(node->next);
    return curr;
}
