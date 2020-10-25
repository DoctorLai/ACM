// https://helloacm.com/recursive-algorithm-to-compute-the-linked-list-jumps/
// https://binarysearch.com/problems/Linked-List-Jumps
// EASY, RECURSION

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if (!node) return NULL;
    int jump = node->val;
    auto head = node;
    for (int i = 0; i < jump && (node); ++ i) {
        node = node->next;
    }
    head->next = solve(node);
    return head;
}
